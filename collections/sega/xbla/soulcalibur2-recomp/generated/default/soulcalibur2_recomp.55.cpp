#include "soulcalibur2_funcs.55.h"

DEFINE_REX_FUNC(sub_820E2290) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f12,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f13,f12,f12,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f12.f64, ctx.f12.f64, ctx.f13.f64)));
	// fmadds f13,f11,f11,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f11.f64, ctx.f11.f64, ctx.f13.f64)));
	// fsqrts f13,f13
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fmuls f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
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
	// lfs f0,12(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820E7668) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,16040
	ctx.r11.s64 = ctx.r11.s64 + 16040;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x820e75d8
	ctx.lr = 0x820E768C;
	sub_820E75D8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,-11816
	ctx.r11.s64 = ctx.r11.s64 + -11816;
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

DEFINE_REX_FUNC(sub_820E9B10) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x820E9B18;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r10,-32170
	ctx.r10.s64 = -2108293120;
	// addi r11,r11,13128
	ctx.r11.s64 = ctx.r11.s64 + 13128;
	// addi r10,r10,-28232
	ctx.r10.s64 = ctx.r10.s64 + -28232;
	// lis r9,-32166
	ctx.r9.s64 = -2108030976;
	// lis r30,-32170
	r30.s64 = -2108293120;
	// addi r9,r9,7856
	ctx.r9.s64 = ctx.r9.s64 + 7856;
	// lbz r7,1815(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 1815);
	// lis r8,-32166
	ctx.r8.s64 = -2108030976;
	// mulli r11,r7,160
	ctx.r11.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(160));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r10,r7,5040
	ctx.r10.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(5040));
	// stw r11,-28236(r30)
	REX_STORE_U32(r30.u32 + -28236, ctx.r11.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r8,r8,432
	ctx.r8.s64 = ctx.r8.s64 + 432;
	// stw r10,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r3,r8,84
	ctx.r3.s64 = ctx.r8.s64 + 84;
	// bl 0x821d6c30
	ctx.lr = 0x820E9B64;
	sub_821D6C30(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x820e9c20
	if (ctx.cr6.eq) goto loc_820E9C20;
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// li r28,0
	r28.s64 = 0;
	// addi r29,r11,32336
	r29.s64 = ctx.r11.s64 + 32336;
	// addi r31,r29,4860
	r31.s64 = r29.s64 + 4860;
loc_820E9B7C:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,-28236(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + -28236);
	// bl 0x82202540
	ctx.lr = 0x820E9B88;
	sub_82202540(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x820e9bd0
	if (ctx.cr0.eq) goto loc_820E9BD0;
	// lwz r11,-4860(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + -4860);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820e9bd0
	if (ctx.cr6.eq) goto loc_820E9BD0;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e9bb4
	if (ctx.cr6.eq) goto loc_820E9BB4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
loc_820E9BB4:
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820e9bd0
	if (ctx.cr6.eq) goto loc_820E9BD0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820E9BD0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820E9BD0:
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// addi r11,r29,4892
	ctx.r11.s64 = r29.s64 + 4892;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820e9b7c
	if (ctx.cr6.lt) goto loc_820E9B7C;
	// lwz r3,-28236(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + -28236);
	// bl 0x820f2998
	ctx.lr = 0x820E9BEC;
	sub_820F2998(ctx, base);
	// lwz r11,32(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820e9c20
	if (ctx.cr6.eq) goto loc_820E9C20;
	// lwz r3,4892(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 4892);
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e9c10
	if (ctx.cr6.eq) goto loc_820E9C10;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
loc_820E9C10:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820E9C20;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820E9C20:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_820F1088) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820F2510) {
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
	ctx.lr = 0x820F2518;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r10,17212
	ctx.r6.s64 = ctx.r10.s64 + 17212;
	// addi r8,r11,-1784
	ctx.r8.s64 = ctx.r11.s64 + -1784;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821f7d50
	ctx.lr = 0x820F2550;
	sub_821F7D50(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x820f2570
	if (ctx.cr0.eq) goto loc_820F2570;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r11,r11,31764
	ctx.r11.s64 = ctx.r11.s64 + 31764;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x820f2574
	goto loc_820F2574;
loc_820F2570:
	// mr r29,r30
	r29.u64 = r30.u64;
loc_820F2574:
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821e02d8
	ctx.lr = 0x820F2584;
	sub_821E02D8(ctx, base);
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// stw r30,88(r29)
	REX_STORE_U32(r29.u32 + 88, r30.u32);
	// lis r6,-32171
	ctx.r6.s64 = -2108358656;
	// addi r28,r11,32336
	r28.s64 = ctx.r11.s64 + 32336;
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r4,r6,31432
	ctx.r4.s64 = ctx.r6.s64 + 31432;
	// addi r7,r29,80
	ctx.r7.s64 = r29.s64 + 80;
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r11,4892(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4892);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r30,140(r11)
	REX_STORE_U32(ctx.r11.u32 + 140, r30.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,31432(r6)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r6.u32 + 31432);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x821f7aa0
	ctx.lr = 0x820F25D4;
	sub_821F7AA0(ctx, base);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r11,-7072
	ctx.r3.s64 = ctx.r11.s64 + -7072;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,13
	ctx.r4.s64 = 13;
	// bl 0x820f1090
	ctx.lr = 0x820F25F0;
	sub_820F1090(ctx, base);
	// lis r9,-32171
	ctx.r9.s64 = -2108358656;
	// lis r8,-32171
	ctx.r8.s64 = -2108358656;
	// lwz r10,4872(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 4872);
	// addi r11,r31,72
	ctx.r11.s64 = r31.s64 + 72;
	// stw r31,32280(r9)
	REX_STORE_U32(ctx.r9.u32 + 32280, r31.u32);
	// stw r11,32272(r8)
	REX_STORE_U32(ctx.r8.u32 + 32272, ctx.r11.u32);
	// stw r31,92(r10)
	REX_STORE_U32(ctx.r10.u32 + 92, r31.u32);
	// stw r11,392(r10)
	REX_STORE_U32(ctx.r10.u32 + 392, ctx.r11.u32);
	// lwz r10,4892(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 4892);
	// stw r31,164(r10)
	REX_STORE_U32(ctx.r10.u32 + 164, r31.u32);
	// stw r11,168(r10)
	REX_STORE_U32(ctx.r10.u32 + 168, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_820F8C88) {
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
	// lbz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// lis r9,-32170
	ctx.r9.s64 = -2108293120;
	// li r11,0
	ctx.r11.s64 = 0;
	// extsb r8,r10
	ctx.r8.s64 = ctx.r10.s8;
	// addi r10,r9,-27144
	ctx.r10.s64 = ctx.r9.s64 + -27144;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mulli r9,r8,9504
	ctx.r9.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(9504));
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// add r31,r9,r10
	r31.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,8328(r31)
	REX_STORE_U32(r31.u32 + 8328, ctx.r11.u32);
	// stw r11,8324(r31)
	REX_STORE_U32(r31.u32 + 8324, ctx.r11.u32);
	// stw r11,8360(r31)
	REX_STORE_U32(r31.u32 + 8360, ctx.r11.u32);
	// stw r11,8364(r31)
	REX_STORE_U32(r31.u32 + 8364, ctx.r11.u32);
	// stw r11,8384(r31)
	REX_STORE_U32(r31.u32 + 8384, ctx.r11.u32);
	// stw r11,8388(r31)
	REX_STORE_U32(r31.u32 + 8388, ctx.r11.u32);
	// stw r11,8452(r31)
	REX_STORE_U32(r31.u32 + 8452, ctx.r11.u32);
	// stw r11,8572(r31)
	REX_STORE_U32(r31.u32 + 8572, ctx.r11.u32);
	// stw r11,8420(r31)
	REX_STORE_U32(r31.u32 + 8420, ctx.r11.u32);
	// stw r11,8424(r31)
	REX_STORE_U32(r31.u32 + 8424, ctx.r11.u32);
	// bl 0x820f8338
	ctx.lr = 0x820F8CF4;
	sub_820F8338(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x820f8d3c
	if (!ctx.cr0.eq) goto loc_820F8D3C;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820f4858
	ctx.lr = 0x820F8D0C;
	sub_820F4858(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,20(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 20);
	// lwz r8,32(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 32);
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// xor r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r10.u64;
	// stw r11,20(r30)
	REX_STORE_U32(r30.u32 + 20, ctx.r11.u32);
	// stw r10,32(r30)
	REX_STORE_U32(r30.u32 + 32, ctx.r10.u32);
	// and r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	// and r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 & ctx.r10.u64;
	// stw r11,24(r30)
	REX_STORE_U32(r30.u32 + 24, ctx.r11.u32);
	// stw r10,36(r30)
	REX_STORE_U32(r30.u32 + 36, ctx.r10.u32);
loc_820F8D3C:
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

DEFINE_REX_FUNC(sub_820FC3B8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r9,r11,9452
	ctx.r9.s64 = ctx.r11.s64 + 9452;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r9,-84
	ctx.r11.s64 = ctx.r9.s64 + -84;
	// stw r10,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r10.u32);
	// addi r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 + 12;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_820FC3DC:
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
	// bdnz 0x820fc3dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820FC3DC;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r10,r3,32
	ctx.r10.s64 = ctx.r3.s64 + 32;
	// addi r11,r9,-4
	ctx.r11.s64 = ctx.r9.s64 + -4;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_820FC430:
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
	// bdnz 0x820fc430
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820FC430;
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

DEFINE_REX_FUNC(sub_820FECF0) {
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
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r11,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stb r11,40(r3)
	REX_STORE_U8(ctx.r3.u32 + 40, ctx.r11.u8);
	// stw r11,572(r3)
	REX_STORE_U32(ctx.r3.u32 + 572, ctx.r11.u32);
	// stw r11,568(r3)
	REX_STORE_U32(ctx.r3.u32 + 568, ctx.r11.u32);
	// stw r11,580(r3)
	REX_STORE_U32(ctx.r3.u32 + 580, ctx.r11.u32);
	// stw r11,576(r3)
	REX_STORE_U32(ctx.r3.u32 + 576, ctx.r11.u32);
	// bl 0x820fbd40
	ctx.lr = 0x820FED28;
	sub_820FBD40(ctx, base);
	// bl 0x820fec90
	ctx.lr = 0x820FED2C;
	sub_820FEC90(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820FF568) {
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
	ctx.lr = 0x820FF570;
	// stfd f30,-120(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -120, f30.u64);
	// stfd f31,-112(r1)
	REX_STORE_U64(ctx.r1.u32 + -112, f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r24,-32173
	r24.s64 = -2108489728;
	// lwz r3,504(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 504);
	// bl 0x821faa38
	ctx.lr = 0x820FF588;
	sub_821FAA38(ctx, base);
	// bl 0x820ff470
	ctx.lr = 0x820FF58C;
	sub_820FF470(ctx, base);
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r20,r11,21952
	r20.s64 = ctx.r11.s64 + 21952;
	// lis r25,-32170
	r25.s64 = -2108293120;
	// lfs f31,1992(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	f31.f64 = double(temp.f32);
	// lwz r11,40(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 40);
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addic. r23,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	r23.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(r23.s32, 0, ctx.xer);
	// blt 0x820ff9d4
	if (ctx.cr0.lt) goto loc_820FF9D4;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r10,-32173
	ctx.r10.s64 = -2108489728;
	// lis r9,-32170
	ctx.r9.s64 = -2108293120;
	// mulli r22,r23,176
	r22.s64 = static_cast<int64_t>(r23.u64 * static_cast<uint64_t>(176));
	// lfs f30,1996(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1996);
	f30.f64 = double(temp.f32);
	// li r21,1
	r21.s64 = 1;
	// lis r26,-32170
	r26.s64 = -2108293120;
	// addi r27,r10,528
	r27.s64 = ctx.r10.s64 + 528;
	// addi r28,r9,8984
	r28.s64 = ctx.r9.s64 + 8984;
loc_820FF5D4:
	// lwz r31,8976(r26)
	r31.u64 = REX_LOAD_U32(r26.u32 + 8976);
	// add r11,r22,r11
	ctx.r11.u64 = r22.u64 + ctx.r11.u64;
	// addi r30,r11,80
	r30.s64 = ctx.r11.s64 + 80;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq 0x820ff5fc
	if (ctx.cr0.eq) goto loc_820FF5FC;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,8980(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 8980);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,8976(r26)
	REX_STORE_U32(r26.u32 + 8976, ctx.r11.u32);
	// stw r10,8980(r25)
	REX_STORE_U32(r25.u32 + 8980, ctx.r10.u32);
loc_820FF5FC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821f9870
	ctx.lr = 0x820FF604;
	sub_821F9870(ctx, base);
	// addi r4,r30,164
	ctx.r4.s64 = r30.s64 + 164;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821f98e8
	ctx.lr = 0x820FF610;
	sub_821F98E8(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lfs f0,28(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r31,116
	ctx.r11.s64 = r31.s64 + 116;
	// lfs f13,16(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,20(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,24(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,8(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r7,12(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,132(r31)
	REX_STORE_U32(r31.u32 + 132, ctx.r10.u32);
	// stw r9,136(r31)
	REX_STORE_U32(r31.u32 + 136, ctx.r9.u32);
	// stw r8,140(r31)
	REX_STORE_U32(r31.u32 + 140, ctx.r8.u32);
	// stw r7,144(r31)
	REX_STORE_U32(r31.u32 + 144, ctx.r7.u32);
	// lfs f0,48(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,116(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 116, temp.u32);
	// lfs f0,52(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,120(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 120, temp.u32);
	// lfs f0,56(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,124(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 124, temp.u32);
	// stfs f31,128(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 128, temp.u32);
	// lbz r10,36(r30)
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + 36);
	// rotlwi r9,r10,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// lhzx r9,r9,r27
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + r27.u32);
	// stb r10,54(r31)
	REX_STORE_U8(r31.u32 + 54, ctx.r10.u8);
	// stb r9,52(r31)
	REX_STORE_U8(r31.u32 + 52, ctx.r9.u8);
	// lbz r10,38(r30)
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + 38);
	// stb r10,73(r31)
	REX_STORE_U8(r31.u32 + 73, ctx.r10.u8);
	// lfs f0,132(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 56, temp.u32);
	// lfs f0,136(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 60, temp.u32);
	// lbz r10,40(r30)
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + 40);
	// stb r10,12(r31)
	REX_STORE_U8(r31.u32 + 12, ctx.r10.u8);
	// lfs f0,140(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 140);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 112, temp.u32);
	// lbz r10,36(r30)
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + 36);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bgt cr6,0x820ff9b4
	if (ctx.cr6.gt) goto loc_820FF9B4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820ff710
	if (ctx.cr6.eq) goto loc_820FF710;
	// bdz 0x820ff804
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_820FF804;
	// bdz 0x820ff9b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_820FF9B4;
	// bdz 0x820ff6ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_820FF6EC;
	// bdz 0x820ff784
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_820FF784;
	// bdz 0x820ff940
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_820FF940;
	// bdz 0x820ff864
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_820FF864;
	// bdz 0x820ff8ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_820FF8AC;
	// b 0x820ff7b4
	goto loc_820FF7B4;
loc_820FF6EC:
	// lhz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U16(r27.u32 + 8);
	// li r10,4
	ctx.r10.s64 = 4;
loc_820FF6F4:
	// lbz r9,14(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 14);
	// stfs f31,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 68, temp.u32);
	// stb r10,54(r31)
	REX_STORE_U8(r31.u32 + 54, ctx.r10.u8);
	// ori r10,r9,64
	ctx.r10.u64 = ctx.r9.u64 | 64;
	// stb r11,52(r31)
	REX_STORE_U8(r31.u32 + 52, ctx.r11.u8);
	// stb r10,14(r31)
	REX_STORE_U8(r31.u32 + 14, ctx.r10.u8);
	// b 0x820ff9b4
	goto loc_820FF9B4;
loc_820FF710:
	// lwz r11,92(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 92);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r11,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r11.u32);
	// lwz r11,92(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ff76c
	if (ctx.cr6.eq) goto loc_820FF76C;
	// lhz r11,2(r27)
	ctx.r11.u64 = REX_LOAD_U16(r27.u32 + 2);
	// li r10,255
	ctx.r10.s64 = 255;
	// lbz r9,14(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 14);
	// lfs f0,80(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f30,80(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 80, temp.u32);
	// stb r21,54(r31)
	REX_STORE_U8(r31.u32 + 54, r21.u8);
	// ori r9,r9,64
	ctx.r9.u64 = ctx.r9.u64 | 64;
	// stfs f30,84(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 84, temp.u32);
	// stfs f0,76(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 76, temp.u32);
	// stb r10,55(r31)
	REX_STORE_U8(r31.u32 + 55, ctx.r10.u8);
	// stfs f31,68(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 68, temp.u32);
	// stb r11,52(r31)
	REX_STORE_U8(r31.u32 + 52, ctx.r11.u8);
	// stw r21,88(r31)
	REX_STORE_U32(r31.u32 + 88, r21.u32);
	// stb r9,14(r31)
	REX_STORE_U8(r31.u32 + 14, ctx.r9.u8);
	// stb r21,72(r31)
	REX_STORE_U8(r31.u32 + 72, r21.u8);
	// b 0x820ff9b4
	goto loc_820FF9B4;
loc_820FF76C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f3,80(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 80);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820ff268
	ctx.lr = 0x820FF780;
	sub_820FF268(ctx, base);
	// b 0x820ff9b4
	goto loc_820FF9B4;
loc_820FF784:
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 32);
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x820ff7a0
	if (!ctx.cr6.eq) goto loc_820FF7A0;
	// stw r31,0(r28)
	REX_STORE_U32(r28.u32 + 0, r31.u32);
	// stw r11,4(r28)
	REX_STORE_U32(r28.u32 + 4, ctx.r11.u32);
	// b 0x820ff7a8
	goto loc_820FF7A8;
loc_820FF7A0:
	// stw r31,8(r28)
	REX_STORE_U32(r28.u32 + 8, r31.u32);
	// stw r11,12(r28)
	REX_STORE_U32(r28.u32 + 12, ctx.r11.u32);
loc_820FF7A8:
	// lhz r11,10(r27)
	ctx.r11.u64 = REX_LOAD_U16(r27.u32 + 10);
	// li r10,5
	ctx.r10.s64 = 5;
	// b 0x820ff6f4
	goto loc_820FF6F4;
loc_820FF7B4:
	// lwz r29,8976(r26)
	r29.u64 = REX_LOAD_U32(r26.u32 + 8976);
	// cmplwi r29,0
	ctx.cr0.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq 0x820ff7d4
	if (ctx.cr0.eq) goto loc_820FF7D4;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r10,8980(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 8980);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,8976(r26)
	REX_STORE_U32(r26.u32 + 8976, ctx.r11.u32);
	// stw r10,8980(r25)
	REX_STORE_U32(r25.u32 + 8980, ctx.r10.u32);
loc_820FF7D4:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lfs f4,96(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 96);
	ctx.f4.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f2,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// bl 0x821f9cf8
	ctx.lr = 0x820FF7F0;
	sub_821F9CF8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,504(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 504);
	// lwz r5,32(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 32);
	// bl 0x821fac38
	ctx.lr = 0x820FF800;
	sub_821FAC38(ctx, base);
	// b 0x820ff9b4
	goto loc_820FF9B4;
loc_820FF804:
	// lwz r11,92(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820ff834
	if (!ctx.cr6.eq) goto loc_820FF834;
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 32);
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x820ff82c
	if (!ctx.cr6.eq) goto loc_820FF82C;
	// stw r31,16(r28)
	REX_STORE_U32(r28.u32 + 16, r31.u32);
	// stw r11,20(r28)
	REX_STORE_U32(r28.u32 + 20, ctx.r11.u32);
	// b 0x820ff834
	goto loc_820FF834;
loc_820FF82C:
	// stw r31,24(r28)
	REX_STORE_U32(r28.u32 + 24, r31.u32);
	// stw r11,28(r28)
	REX_STORE_U32(r28.u32 + 28, ctx.r11.u32);
loc_820FF834:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r8,37(r30)
	ctx.r8.u64 = REX_LOAD_U8(r30.u32 + 37);
	// lbz r7,38(r30)
	ctx.r7.u64 = REX_LOAD_U8(r30.u32 + 38);
	// lfs f2,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// bl 0x820feff0
	ctx.lr = 0x820FF850;
	sub_820FEFF0(ctx, base);
	// lwz r11,92(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 92);
	// subfic r10,r11,255
	ctx.xer.ca = ctx.r11.u32 <= 255;
	ctx.r10.u64 = static_cast<uint64_t>(255) - ctx.r11.u64;
	// stb r10,53(r31)
	REX_STORE_U8(r31.u32 + 53, ctx.r10.u8);
	// stw r11,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r11.u32);
	// b 0x820ff9b4
	goto loc_820FF9B4;
loc_820FF864:
	// lwz r11,92(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 92);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f4,80(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 80);
	ctx.f4.f64 = double(temp.f32);
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// lfs f2,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// bl 0x820ff1c8
	ctx.lr = 0x820FF888;
	sub_820FF1C8(ctx, base);
	// lfs f0,100(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 96, temp.u32);
	// lfs f0,104(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,100(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 100, temp.u32);
	// lfs f0,108(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,104(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 104, temp.u32);
	// lfs f0,112(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,108(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 108, temp.u32);
	// b 0x820ff9b4
	goto loc_820FF9B4;
loc_820FF8AC:
	// lfs f0,48(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,92(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 92);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lhz r10,16(r27)
	ctx.r10.u64 = REX_LOAD_U16(r27.u32 + 16);
	// lfs f0,52(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lfs f13,56(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r7,96(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 96);
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// subfic r5,r8,255
	ctx.xer.ca = ctx.r8.u32 <= 255;
	ctx.r5.u64 = static_cast<uint64_t>(255) - ctx.r8.u64;
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lbz r6,14(r31)
	ctx.r6.u64 = REX_LOAD_U8(r31.u32 + 14);
	// lfs f0,80(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stb r10,52(r31)
	REX_STORE_U8(r31.u32 + 52, ctx.r10.u8);
	// stw r8,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r8.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r10,4(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// li r29,2
	r29.s64 = 2;
	// lwz r8,8(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// ori r6,r6,64
	ctx.r6.u64 = ctx.r6.u64 | 64;
	// stfs f31,68(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 68, temp.u32);
	// stb r4,54(r31)
	REX_STORE_U8(r31.u32 + 54, ctx.r4.u8);
	// stfs f0,76(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 76, temp.u32);
	// stb r5,53(r31)
	REX_STORE_U8(r31.u32 + 53, ctx.r5.u8);
	// stb r29,73(r31)
	REX_STORE_U8(r31.u32 + 73, r29.u8);
	// stw r7,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r7.u32);
	// stb r6,14(r31)
	REX_STORE_U8(r31.u32 + 14, ctx.r6.u8);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r3,0(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r9,12(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// stw r3,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// stw r9,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// stfs f31,128(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 128, temp.u32);
	// stw r8,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// b 0x820ff9b4
	goto loc_820FF9B4;
loc_820FF940:
	// lwz r11,92(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820ff970
	if (!ctx.cr6.eq) goto loc_820FF970;
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 32);
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x820ff968
	if (!ctx.cr6.eq) goto loc_820FF968;
	// stw r31,16(r28)
	REX_STORE_U32(r28.u32 + 16, r31.u32);
	// stw r11,20(r28)
	REX_STORE_U32(r28.u32 + 20, ctx.r11.u32);
	// b 0x820ff970
	goto loc_820FF970;
loc_820FF968:
	// stw r31,24(r28)
	REX_STORE_U32(r28.u32 + 24, r31.u32);
	// stw r11,28(r28)
	REX_STORE_U32(r28.u32 + 28, ctx.r11.u32);
loc_820FF970:
	// lwz r11,92(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 92);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f2,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// lfs f1,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820ff130
	ctx.lr = 0x820FF98C;
	sub_820FF130(ctx, base);
	// lbz r11,80(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 80);
	// stb r11,73(r31)
	REX_STORE_U8(r31.u32 + 73, ctx.r11.u8);
	// lbz r11,80(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 80);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stb r11,76(r31)
	REX_STORE_U8(r31.u32 + 76, ctx.r11.u8);
	// lbz r11,81(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 81);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stb r11,77(r31)
	REX_STORE_U8(r31.u32 + 77, ctx.r11.u8);
loc_820FF9B4:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,504(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 504);
	// lwz r5,32(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 32);
	// bl 0x821fac38
	ctx.lr = 0x820FF9C4;
	sub_821FAC38(ctx, base);
	// lwz r11,40(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 40);
	// addic. r23,r23,-1
	ctx.xer.ca = r23.u32 > 0;
	r23.s64 = r23.s64 + -1;
	ctx.cr0.compare<int32_t>(r23.s32, 0, ctx.xer);
	// addi r22,r22,-176
	r22.s64 = r22.s64 + -176;
	// bge 0x820ff5d4
	if (!ctx.cr0.lt) goto loc_820FF5D4;
loc_820FF9D4:
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lis r5,-32768
	ctx.r5.s64 = -2147483648;
	// lwz r3,504(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 504);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// stw r11,8980(r25)
	REX_STORE_U32(r25.u32 + 8980, ctx.r11.u32);
	// bl 0x821fa8a0
	ctx.lr = 0x820FF9F0;
	sub_821FA8A0(ctx, base);
	// lis r5,-32768
	ctx.r5.s64 = -2147483648;
	// lwz r3,504(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 504);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// ori r5,r5,6
	ctx.r5.u64 = ctx.r5.u64 | 6;
	// bl 0x821fa8a0
	ctx.lr = 0x820FFA04;
	sub_821FA8A0(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f30,-120(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f31,-112(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x822d4eb8
	return;
}

DEFINE_REX_FUNC(sub_82119280) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,8
	ctx.r4.s64 = 8;
	// lfs f0,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,288(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 288, temp.u32);
	// lwz r3,7844(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 7844);
	// b 0x821f0370
	sub_821F0370(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82119A30) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x822d4e88
	ctx.lr = 0x82119A38;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x822d4f34
	ctx.lr = 0x82119A40;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// lfs f30,264(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 264);
	f30.f64 = double(temp.f32);
	// addi r28,r3,192
	r28.s64 = ctx.r3.s64 + 192;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,29428(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 29428);
	// bl 0x8211e968
	ctx.lr = 0x82119A64;
	sub_8211E968(ctx, base);
	// addi r30,r31,224
	r30.s64 = r31.s64 + 224;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820e22e8
	ctx.lr = 0x82119A70;
	sub_820E22E8(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bl 0x820e22e8
	ctx.lr = 0x82119A7C;
	sub_820E22E8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fcmpu cr6,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f31.f64, ctx.f1.f64);
	// lfs f29,2012(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2012);
	f29.f64 = double(temp.f32);
	// ble cr6,0x82119aa4
	if (!ctx.cr6.gt) goto loc_82119AA4;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820e2028
	ctx.lr = 0x82119AA0;
	sub_820E2028(ctx, base);
	// b 0x82119ac8
	goto loc_82119AC8;
loc_82119AA4:
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// stw r9,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r9.u32);
	// stw r8,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r8.u32);
	// stw r11,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r11.u32);
loc_82119AC8:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r9,4(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lwz r7,8(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r6,12(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 12);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lfs f31,16204(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 16204);
	f31.f64 = double(temp.f32);
	// stw r7,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// stw r6,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r6.u32);
	// bl 0x820e1cc0
	ctx.lr = 0x82119B04;
	sub_820E1CC0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lfs f28,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f28.f64 = double(temp.f32);
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, f28.f64);
	// ble cr6,0x82119b20
	if (!ctx.cr6.gt) goto loc_82119B20;
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * f31.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
loc_82119B20:
	// lfs f0,144(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f13,148(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lfs f12,152(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 152);
	ctx.f12.f64 = double(temp.f32);
	// addi r29,r31,128
	r29.s64 = r31.s64 + 128;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x820e2290
	ctx.lr = 0x82119B48;
	sub_820E2290(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x820e1c28
	ctx.lr = 0x82119B54;
	sub_820E1C28(ctx, base);
	// fabs f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f27,2008(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2008);
	f27.f64 = double(temp.f32);
	// lfs f0,2384(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2384);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f1,f13,f27,f0
	ctx.f1.f64 = double(float(std::fma(ctx.f13.f64, f27.f64, ctx.f0.f64)));
	// bl 0x820e1cc0
	ctx.lr = 0x82119B78;
	sub_820E1CC0(ctx, base);
	// addi r30,r31,208
	r30.s64 = r31.s64 + 208;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820e2028
	ctx.lr = 0x82119B90;
	sub_820E2028(ctx, base);
	// lwz r10,208(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 208);
	// lwz r9,212(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 212);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lwz r8,216(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 216);
	// lwz r7,220(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 220);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r8,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// stw r7,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
	// lfs f0,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, f28.f64);
	// ble cr6,0x82119bcc
	if (!ctx.cr6.gt) goto loc_82119BCC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,-31120(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -31120);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82119bd4
	goto loc_82119BD4;
loc_82119BCC:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,-31124(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -31124);
	ctx.f13.f64 = double(temp.f32);
loc_82119BD4:
	// lfs f0,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fabs f12,f0
	ctx.f12.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f11,240(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 240);
	ctx.f11.f64 = double(temp.f32);
	// fmr f3,f28
	ctx.f3.f64 = f28.f64;
	// lfs f0,16268(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16268);
	ctx.f0.f64 = double(temp.f32);
	// lfs f2,-31128(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -31128);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fnmsubs f1,f0,f13,f11
	ctx.f1.f64 = double(float(-std::fma(ctx.f0.f64, ctx.f13.f64, -ctx.f11.f64)));
	// bl 0x82204ae0
	ctx.lr = 0x82119C00;
	sub_82204AE0(ctx, base);
	// lfs f0,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// fadds f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// stfs f1,240(r31)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 240, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x820e1b28
	ctx.lr = 0x82119C20;
	sub_820E1B28(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,196(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 196);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-31156(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -31156);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,256(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 256, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82119c58
	if (ctx.cr6.gt) goto loc_82119C58;
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,16704(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16704);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f11,f12
	ctx.cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// ble cr6,0x82119cdc
	if (!ctx.cr6.gt) goto loc_82119CDC;
	// lfs f12,240(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 240);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f12,f29
	ctx.f12.f64 = double(float(ctx.f12.f64 * f29.f64));
	// stfs f12,240(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 240, temp.u32);
loc_82119C58:
	// fsubs f0,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f0,260(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 260, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820e22e8
	ctx.lr = 0x82119C68;
	sub_820E22E8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,296(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 296);
	// lfs f13,284(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 284);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,200(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 200);
	ctx.f12.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f11,196(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 196);
	ctx.f11.f64 = double(temp.f32);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lfs f0,2000(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2000);
	ctx.f0.f64 = double(temp.f32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,284(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 284, temp.u32);
	// lfs f0,232(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f12,15944(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 15944);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fmsubs f12,f0,f12,f27
	ctx.f12.f64 = double(float(std::fma(ctx.f0.f64, ctx.f12.f64, -f27.f64)));
	// addi r10,r11,1992
	ctx.r10.s64 = ctx.r11.s64 + 1992;
	// lfs f0,-8496(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + -8496);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r9,26528
	ctx.r11.s64 = ctx.r9.s64 + 26528;
	// lfs f13,16372(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 16372);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f30,f1,f0,f13
	f30.f64 = double(float(std::fma(ctx.f1.f64, ctx.f0.f64, ctx.f13.f64)));
	// lfs f0,268(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 268);
	ctx.f0.f64 = double(temp.f32);
	// lfs f29,26528(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 26528);
	f29.f64 = double(temp.f32);
	// lfs f31,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	f31.f64 = double(temp.f32);
	// fcmpu cr6,f11,f12
	ctx.cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// bge cr6,0x82119e7c
	if (!ctx.cr6.lt) goto loc_82119E7C;
	// fsubs f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 - f29.f64));
	// b 0x82119e88
	goto loc_82119E88;
loc_82119CDC:
	// li r10,4
	ctx.r10.s64 = 4;
	// stfs f0,196(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 196, temp.u32);
	// stfs f28,240(r31)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(r31.u32 + 240, temp.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r10,300(r31)
	REX_STORE_U32(r31.u32 + 300, ctx.r10.u32);
	// stfs f28,0(r30)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(r30.u32 + 0, temp.u32);
	// stfs f28,4(r30)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(r30.u32 + 4, temp.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stfs f28,8(r30)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(r30.u32 + 8, temp.u32);
	// addi r10,r11,1992
	ctx.r10.s64 = ctx.r11.s64 + 1992;
	// stfs f28,12(r30)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(r30.u32 + 12, temp.u32);
	// lfs f11,244(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 244);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,276(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 276);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,248(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 248);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,252(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 252);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 * f29.f64));
	// fmuls f11,f11,f29
	ctx.f11.f64 = double(float(ctx.f11.f64 * f29.f64));
	// stfs f0,252(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 252, temp.u32);
	// stfs f11,244(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + 244, temp.u32);
	// lfs f31,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	f31.f64 = double(temp.f32);
	// lfs f0,2392(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2392);
	ctx.f0.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmadds f1,f13,f0,f12
	ctx.f1.f64 = double(float(std::fma(ctx.f13.f64, ctx.f0.f64, ctx.f12.f64)));
	// bl 0x82204b00
	ctx.lr = 0x82119D3C;
	sub_82204B00(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,124(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// stfs f1,248(r31)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 248, temp.u32);
	// lfs f0,16316(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16316);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82119e60
	if (ctx.cr6.lt) goto loc_82119E60;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,268(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 268);
	ctx.f0.f64 = double(temp.f32);
	// lfs f30,-31132(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -31132);
	f30.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bgt cr6,0x82119e60
	if (ctx.cr6.gt) goto loc_82119E60;
	// lwz r11,296(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 296);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r11,80
	ctx.r3.s64 = ctx.r11.s64 + 80;
	// bl 0x820e2148
	ctx.lr = 0x82119D78;
	sub_820E2148(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-31136(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -31136);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x82119e60
	if (ctx.cr6.gt) goto loc_82119E60;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,284(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 284);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,26528
	ctx.r11.s64 = ctx.r11.s64 + 26528;
	// lfs f0,28900(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 28900);
	ctx.f0.f64 = double(temp.f32);
	// lfs f29,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	f29.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82119dbc
	if (!ctx.cr6.lt) goto loc_82119DBC;
	// lfs f0,268(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 268);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bge cr6,0x82119dd0
	if (!ctx.cr6.lt) goto loc_82119DD0;
	// fadds f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 + f29.f64));
	// b 0x82119dcc
	goto loc_82119DCC;
loc_82119DBC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,268(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 268);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2364(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2364);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
loc_82119DCC:
	// stfs f0,268(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 268, temp.u32);
loc_82119DD0:
	// bl 0x821fedc8
	ctx.lr = 0x82119DD4;
	sub_821FEDC8(ctx, base);
	// lfs f0,284(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 284);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + f31.f64));
	// stfs f0,284(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 284, temp.u32);
loc_82119DE4:
	// lwz r11,292(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 292);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82119e10
	if (!ctx.cr6.eq) goto loc_82119E10;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,124(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2344(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2344);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82119e10
	if (!ctx.cr6.gt) goto loc_82119E10;
	// lfs f0,268(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 268);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 - f29.f64));
	// stfs f0,268(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 268, temp.u32);
loc_82119E10:
	// lfs f0,268(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 268);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, f28.f64);
	// blt cr6,0x82119f2c
	if (ctx.cr6.lt) goto loc_82119F2C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lfs f3,252(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 252);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,248(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 248);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,244(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 244);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e0ec8
	ctx.lr = 0x82119E30;
	sub_820E0EC8(ctx, base);
	// stfs f31,204(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 204, temp.u32);
	// lfs f0,0(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 48, temp.u32);
	// lfs f0,4(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 52, temp.u32);
	// lfs f0,8(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 56, temp.u32);
	// stfs f31,60(r29)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r29.u32 + 60, temp.u32);
loc_82119E50:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x822d4f80
	ctx.lr = 0x82119E5C;
	// b 0x822d4ed8
	return;
loc_82119E60:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,268(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 268);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,26528
	ctx.r11.s64 = ctx.r11.s64 + 26528;
	// lfs f29,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	f29.f64 = double(temp.f32);
	// fsubs f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 - f29.f64));
	// stfs f0,268(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 268, temp.u32);
	// b 0x82119de4
	goto loc_82119DE4;
loc_82119E7C:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bge cr6,0x82119e8c
	if (!ctx.cr6.lt) goto loc_82119E8C;
	// fadds f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 + f29.f64));
loc_82119E88:
	// stfs f0,268(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 268, temp.u32);
loc_82119E8C:
	// lfs f0,272(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 272);
	ctx.f0.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// lfs f13,244(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 244);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f1,f0,f30,f13
	ctx.f1.f64 = double(float(std::fma(ctx.f0.f64, f30.f64, ctx.f13.f64)));
	// bl 0x82204b00
	ctx.lr = 0x82119EA0;
	sub_82204B00(ctx, base);
	// stfs f1,244(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 244, temp.u32);
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// lfs f0,276(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 276);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,248(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 248);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f1,f0,f30,f13
	ctx.f1.f64 = double(float(std::fma(ctx.f0.f64, f30.f64, ctx.f13.f64)));
	// bl 0x82204b00
	ctx.lr = 0x82119EB8;
	sub_82204B00(ctx, base);
	// stfs f1,248(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 248, temp.u32);
	// lfs f0,280(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 280);
	ctx.f0.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// lfs f13,252(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 252);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f1,f0,f30,f13
	ctx.f1.f64 = double(float(std::fma(ctx.f0.f64, f30.f64, ctx.f13.f64)));
	// bl 0x82204b00
	ctx.lr = 0x82119ED0;
	sub_82204B00(ctx, base);
	// lwz r11,300(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 300);
	// stfs f1,252(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 252, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82119ee8
	if (ctx.cr6.eq) goto loc_82119EE8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,300(r31)
	REX_STORE_U32(r31.u32 + 300, ctx.r11.u32);
loc_82119EE8:
	// lwz r11,292(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 292);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82119de4
	if (ctx.cr6.eq) goto loc_82119DE4;
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r11.u32);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// ble cr6,0x82119de4
	if (!ctx.cr6.gt) goto loc_82119DE4;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82119de4
	if (ctx.cr6.eq) goto loc_82119DE4;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x82119de4
	if (ctx.cr6.eq) goto loc_82119DE4;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x82119de4
	if (ctx.cr6.eq) goto loc_82119DE4;
loc_82119F2C:
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,-32480(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// sth r10,40(r11)
	REX_STORE_U16(ctx.r11.u32 + 40, ctx.r10.u16);
	// b 0x82119e50
	goto loc_82119E50;
}

DEFINE_REX_FUNC(sub_8212F4E0) {
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
	ctx.lr = 0x8212F4E8;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r31,r11,-8304
	r31.s64 = ctx.r11.s64 + -8304;
	// addi r30,r10,-29068
	r30.s64 = ctx.r10.s64 + -29068;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,324(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 324);
	// bl 0x821af9f8
	ctx.lr = 0x8212F510;
	sub_821AF9F8(ctx, base);
	// lwz r11,324(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 324);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821af9d8
	ctx.lr = 0x8212F52C;
	sub_821AF9D8(ctx, base);
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// li r9,9
	ctx.r9.s64 = 9;
	// li r7,2
	ctx.r7.s64 = 2;
	// lis r11,-32175
	ctx.r11.s64 = -2108620800;
	// stw r9,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// stw r7,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// addi r4,r10,-22904
	ctx.r4.s64 = ctx.r10.s64 + -22904;
	// addi r6,r11,-5072
	ctx.r6.s64 = ctx.r11.s64 + -5072;
	// li r7,4
	ctx.r7.s64 = 4;
	// li r5,2048
	ctx.r5.s64 = 2048;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// li r10,10
	ctx.r10.s64 = 10;
	// bl 0x82202eb0
	ctx.lr = 0x8212F568;
	sub_82202EB0(ctx, base);
	// lis r31,-32169
	r31.s64 = -2108227584;
	// stw r3,20140(r31)
	REX_STORE_U32(r31.u32 + 20140, ctx.r3.u32);
	// bl 0x8229a710
	ctx.lr = 0x8212F574;
	sub_8229A710(ctx, base);
	// lwz r11,20140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20140);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8212f588
	if (ctx.cr6.eq) goto loc_8212F588;
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r30.u32);
loc_8212F588:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8212d410
	ctx.lr = 0x8212F590;
	sub_8212D410(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8212b4c8
	ctx.lr = 0x8212F598;
	sub_8212B4C8(ctx, base);
	// lwz r11,20140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8212f5c4
	if (ctx.cr6.eq) goto loc_8212F5C4;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8212f5c4
	if (ctx.cr6.eq) goto loc_8212F5C4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// lfs f1,2384(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2384);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,20104(r10)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r10.u32 + 20104, temp.u32);
	// bl 0x822031b8
	ctx.lr = 0x8212F5C4;
	sub_822031B8(ctx, base);
loc_8212F5C4:
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// lis r11,-32175
	ctx.r11.s64 = -2108620800;
	// addi r31,r10,-23680
	r31.s64 = ctx.r10.s64 + -23680;
	// lis r8,-32169
	ctx.r8.s64 = -2108227584;
	// lis r7,-32169
	ctx.r7.s64 = -2108227584;
	// addi r29,r11,-5720
	r29.s64 = ctx.r11.s64 + -5720;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r30,620(r31)
	REX_STORE_U32(r31.u32 + 620, r30.u32);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// stb r11,-22961(r8)
	REX_STORE_U8(ctx.r8.u32 + -22961, ctx.r11.u8);
	// stb r30,-22962(r7)
	REX_STORE_U8(ctx.r7.u32 + -22962, r30.u8);
	// mr r27,r30
	r27.u64 = r30.u64;
	// addi r28,r29,12
	r28.s64 = r29.s64 + 12;
loc_8212F5FC:
	// extsb r26,r27
	r26.s64 = r27.s8;
	// lfs f1,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82202fd8
	ctx.lr = 0x8212F60C;
	sub_82202FD8(ctx, base);
	// li r4,64
	ctx.r4.s64 = 64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8229a710
	ctx.lr = 0x8212F618;
	sub_8229A710(ctx, base);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// addi r11,r29,140
	ctx.r11.s64 = r29.s64 + 140;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8212f5fc
	if (ctx.cr6.lt) goto loc_8212F5FC;
	// lis r7,-32169
	ctx.r7.s64 = -2108227584;
	// lis r11,-32175
	ctx.r11.s64 = -2108620800;
	// addi r9,r7,-23068
	ctx.r9.s64 = ctx.r7.s64 + -23068;
	// addi r10,r11,-9424
	ctx.r10.s64 = ctx.r11.s64 + -9424;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r6,-32169
	ctx.r6.s64 = -2108227584;
	// lis r5,-32169
	ctx.r5.s64 = -2108227584;
	// stw r11,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stb r8,-22963(r6)
	REX_STORE_U8(ctx.r6.u32 + -22963, ctx.r8.u8);
	// addi r6,r10,4
	ctx.r6.s64 = ctx.r10.s64 + 4;
	// stw r9,-23068(r7)
	REX_STORE_U32(ctx.r7.u32 + -23068, ctx.r9.u32);
	// stb r30,-22960(r5)
	REX_STORE_U8(ctx.r5.u32 + -22960, r30.u8);
loc_8212F668:
	// lwz r9,0(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8212f6bc
	if (ctx.cr6.eq) goto loc_8212F6BC;
	// li r8,224
	ctx.r8.s64 = 224;
	// addi r11,r9,2
	ctx.r11.s64 = ctx.r9.s64 + 2;
	// subfic r7,r9,-2
	ctx.xer.ca = ctx.r9.u32 <= 4294967294;
	ctx.r7.u64 = static_cast<uint64_t>(-2) - ctx.r9.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8212F684:
	// lbz r9,-2(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + -2);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// beq cr6,0x8212f6b4
	if (ctx.cr6.eq) goto loc_8212F6B4;
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// add r9,r7,r11
	ctx.r9.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbz r8,1(r8)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + 1);
	// stb r8,-1(r11)
	REX_STORE_U8(ctx.r11.u32 + -1, ctx.r8.u8);
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbz r9,2(r9)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 2);
	// stb r9,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
loc_8212F6B4:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8212f684
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8212F684;
loc_8212F6BC:
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// addi r11,r10,128
	ctx.r11.s64 = ctx.r10.s64 + 128;
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8212f668
	if (!ctx.cr6.gt) goto loc_8212F668;
	// lis r6,-32169
	ctx.r6.s64 = -2108227584;
	// li r10,2
	ctx.r10.s64 = 2;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// lis r5,-32169
	ctx.r5.s64 = -2108227584;
	// addi r4,r6,-23000
	ctx.r4.s64 = ctx.r6.s64 + -23000;
	// addi r11,r11,20172
	ctx.r11.s64 = ctx.r11.s64 + 20172;
	// stw r30,-23000(r6)
	REX_STORE_U32(ctx.r6.u32 + -23000, r30.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// stw r30,-23028(r5)
	REX_STORE_U32(ctx.r5.u32 + -23028, r30.u32);
	// stw r30,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, r30.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// li r7,-1
	ctx.r7.s64 = -1;
loc_8212F708:
	// stw r7,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r7.u32);
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// stw r7,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r7.u32);
	// stwu r7,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8212f708
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8212F708;
	// lis r5,-32169
	ctx.r5.s64 = -2108227584;
	// stw r30,624(r31)
	REX_STORE_U32(r31.u32 + 624, r30.u32);
	// lis r8,-32169
	ctx.r8.s64 = -2108227584;
	// stw r30,628(r31)
	REX_STORE_U32(r31.u32 + 628, r30.u32);
	// lis r3,-32169
	ctx.r3.s64 = -2108227584;
	// stw r30,632(r31)
	REX_STORE_U32(r31.u32 + 632, r30.u32);
	// addi r6,r8,-22980
	ctx.r6.s64 = ctx.r8.s64 + -22980;
	// stw r30,636(r31)
	REX_STORE_U32(r31.u32 + 636, r30.u32);
	// lis r4,-32169
	ctx.r4.s64 = -2108227584;
	// stw r30,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r30.u32);
	// stb r30,-22964(r5)
	REX_STORE_U8(ctx.r5.u32 + -22964, r30.u8);
	// addi r5,r3,-22992
	ctx.r5.s64 = ctx.r3.s64 + -22992;
	// lis r29,-32169
	r29.s64 = -2108227584;
	// stw r7,-22980(r8)
	REX_STORE_U32(ctx.r8.u32 + -22980, ctx.r7.u32);
	// li r10,-2
	ctx.r10.s64 = -2;
	// stw r30,608(r31)
	REX_STORE_U32(r31.u32 + 608, r30.u32);
	// stw r7,12(r6)
	REX_STORE_U32(ctx.r6.u32 + 12, ctx.r7.u32);
	// stw r7,-22984(r4)
	REX_STORE_U32(ctx.r4.u32 + -22984, ctx.r7.u32);
	// lis r4,-32169
	ctx.r4.s64 = -2108227584;
	// stw r7,4(r6)
	REX_STORE_U32(ctx.r6.u32 + 4, ctx.r7.u32);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// stw r7,8(r6)
	REX_STORE_U32(ctx.r6.u32 + 8, ctx.r7.u32);
	// addi r6,r29,-23016
	ctx.r6.s64 = r29.s64 + -23016;
	// stw r7,4(r5)
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r7.u32);
	// lis r5,-32169
	ctx.r5.s64 = -2108227584;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r7,-22992(r3)
	REX_STORE_U32(ctx.r3.u32 + -22992, ctx.r7.u32);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stw r30,-4(r31)
	REX_STORE_U32(r31.u32 + -4, r30.u32);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// stw r30,4(r6)
	REX_STORE_U32(ctx.r6.u32 + 4, r30.u32);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// stw r30,-23016(r29)
	REX_STORE_U32(r29.u32 + -23016, r30.u32);
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// stw r7,-23024(r4)
	REX_STORE_U32(ctx.r4.u32 + -23024, ctx.r7.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r30,-23036(r5)
	REX_STORE_U32(ctx.r5.u32 + -23036, r30.u32);
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// bl 0x82126b58
	ctx.lr = 0x8212F7C0;
	sub_82126B58(ctx, base);
	// bl 0x82129d18
	ctx.lr = 0x8212F7C4;
	sub_82129D18(ctx, base);
	// bl 0x821408f8
	ctx.lr = 0x8212F7C8;
	sub_821408F8(ctx, base);
	// bl 0x8229a710
	ctx.lr = 0x8212F7CC;
	sub_8229A710(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8212f450
	ctx.lr = 0x8212F7D4;
	sub_8212F450(ctx, base);
	// addi r3,r31,304
	ctx.r3.s64 = r31.s64 + 304;
	// bl 0x8212f450
	ctx.lr = 0x8212F7DC;
	sub_8212F450(ctx, base);
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r8,r10,-22928
	ctx.r8.s64 = ctx.r10.s64 + -22928;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f0,1996(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-22928(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + -22928, temp.u32);
	// stb r11,20(r8)
	REX_STORE_U8(ctx.r8.u32 + 20, ctx.r11.u8);
	// stfs f0,8(r8)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// stw r30,16(r8)
	REX_STORE_U32(ctx.r8.u32 + 16, r30.u32);
	// stfs f0,4(r8)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// stfs f0,12(r8)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r8.u32 + 12, temp.u32);
	// bl 0x8212c838
	ctx.lr = 0x8212F810;
	sub_8212C838(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8212c8b8
	ctx.lr = 0x8212F818;
	sub_8212C8B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8212c940
	ctx.lr = 0x8212F820;
	sub_8212C940(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_8213E790) {
	REX_FUNC_PROLOGUE();
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
	// bne cr6,0x8213e7c4
	if (!ctx.cr6.eq) goto loc_8213E7C4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8213E7C4:
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r11,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// li r11,0
	ctx.r11.s64 = 0;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stb r11,-16(r1)
	REX_STORE_U8(ctx.r1.u32 + -16, ctx.r11.u8);
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r11,-15(r1)
	REX_STORE_U8(ctx.r1.u32 + -15, ctx.r11.u8);
	// li r4,2
	ctx.r4.s64 = 2;
	// stb r11,-14(r1)
	REX_STORE_U8(ctx.r1.u32 + -14, ctx.r11.u8);
	// addi r5,r1,-16
	ctx.r5.s64 = ctx.r1.s64 + -16;
	// stb r9,-13(r1)
	REX_STORE_U8(ctx.r1.u32 + -13, ctx.r9.u8);
	// li r6,6
	ctx.r6.s64 = 6;
	// lbz r10,18(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 18);
	// li r7,7
	ctx.r7.s64 = 7;
	// stb r4,-12(r1)
	REX_STORE_U8(ctx.r1.u32 + -12, ctx.r4.u8);
	// li r8,8
	ctx.r8.s64 = 8;
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// stb r6,-8(r1)
	REX_STORE_U8(ctx.r1.u32 + -8, ctx.r6.u8);
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r7,-7(r1)
	REX_STORE_U8(ctx.r1.u32 + -7, ctx.r7.u8);
	// rlwinm r11,r11,0,26,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// stb r8,-6(r1)
	REX_STORE_U8(ctx.r1.u32 + -6, ctx.r8.u8);
	// stb r10,-11(r1)
	REX_STORE_U8(ctx.r1.u32 + -11, ctx.r10.u8);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r10,5
	ctx.r10.s64 = 5;
	// stb r6,-5(r1)
	REX_STORE_U8(ctx.r1.u32 + -5, ctx.r6.u8);
	// li r4,9
	ctx.r4.s64 = 9;
	// stb r9,-10(r1)
	REX_STORE_U8(ctx.r1.u32 + -10, ctx.r9.u8);
	// stb r10,-9(r1)
	REX_STORE_U8(ctx.r1.u32 + -9, ctx.r10.u8);
	// stb r7,-4(r1)
	REX_STORE_U8(ctx.r1.u32 + -4, ctx.r7.u8);
	// stb r8,-3(r1)
	REX_STORE_U8(ctx.r1.u32 + -3, ctx.r8.u8);
	// stb r4,-2(r1)
	REX_STORE_U8(ctx.r1.u32 + -2, ctx.r4.u8);
	// lbzx r11,r11,r5
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82141E38) {
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
	ctx.lr = 0x82141E40;
	// stfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -64, f30.u64);
	// stfd f31,-56(r1)
	REX_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// addi r6,r8,-23300
	ctx.r6.s64 = ctx.r8.s64 + -23300;
	// addi r9,r10,6496
	ctx.r9.s64 = ctx.r10.s64 + 6496;
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
	// lwz r3,-32480(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// bl 0x821366d8
	ctx.lr = 0x82141E8C;
	sub_821366D8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x82141f98
	if (ctx.cr0.eq) goto loc_82141F98;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82141b90
	ctx.lr = 0x82141EAC;
	sub_82141B90(ctx, base);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// li r28,0
	r28.s64 = 0;
	// addi r30,r11,-8304
	r30.s64 = ctx.r11.s64 + -8304;
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// lwz r9,48(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 48);
	// addis r10,r9,85
	ctx.r10.s64 = ctx.r9.s64 + 5570560;
	// addi r10,r10,8312
	ctx.r10.s64 = ctx.r10.s64 + 8312;
loc_82141EC8:
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r8,r31
	ctx.cr6.compare<int32_t>(ctx.r8.s32, r31.s32, ctx.xer);
	// beq cr6,0x82141ee8
	if (ctx.cr6.eq) goto loc_82141EE8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// blt cr6,0x82141ec8
	if (ctx.cr6.lt) goto loc_82141EC8;
	// li r11,-1
	ctx.r11.s64 = -1;
loc_82141EE8:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82141f00
	if (!ctx.cr6.eq) goto loc_82141F00;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// bne cr6,0x82141f0c
	if (!ctx.cr6.eq) goto loc_82141F0C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82141f9c
	goto loc_82141F9C;
loc_82141F00:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,19,0,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0xFFF80000;
	// add r27,r11,r9
	r27.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_82141F0C:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x820e4bb0
	ctx.lr = 0x82141F14;
	sub_820E4BB0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r29,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r29.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stb r28,135(r1)
	REX_STORE_U8(ctx.r1.u32 + 135, r28.u8);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// stw r28,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r28.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r28,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r28.u32);
	// lfs f4,-24692(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -24692);
	ctx.f4.f64 = double(temp.f32);
	// addi r5,r7,-23308
	ctx.r5.s64 = ctx.r7.s64 + -23308;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// lfs f3,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f3.f64 = double(temp.f32);
	// lfs f13,15632(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 15632);
	ctx.f13.f64 = double(temp.f32);
	// stw r5,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// addi r11,r11,20320
	ctx.r11.s64 = ctx.r11.s64 + 20320;
	// stw r3,80(r29)
	REX_STORE_U32(r29.u32 + 80, ctx.r3.u32);
	// lfs f0,15628(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15628);
	ctx.f0.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r7,2
	ctx.r7.s64 = 2;
	// fadds f2,f30,f0
	ctx.f2.f64 = double(float(f30.f64 + ctx.f0.f64));
	// li r6,0
	ctx.r6.s64 = 0;
	// fadds f1,f31,f13
	ctx.f1.f64 = double(float(f31.f64 + ctx.f13.f64));
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// bl 0x82138e60
	ctx.lr = 0x82141F80;
	sub_82138E60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82141f98
	if (ctx.cr0.eq) goto loc_82141F98;
	// lwz r11,48(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 48);
	// addis r11,r11,85
	ctx.r11.s64 = ctx.r11.s64 + 5570560;
	// addi r11,r11,29696
	ctx.r11.s64 = ctx.r11.s64 + 29696;
	// stw r11,256(r3)
	REX_STORE_U32(ctx.r3.u32 + 256, ctx.r11.u32);
loc_82141F98:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_82141F9C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_8214ABF0) {
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
	// addi r11,r11,-23168
	ctx.r11.s64 = ctx.r11.s64 + -23168;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x8214ac1c
	if (ctx.cr0.eq) goto loc_8214AC1C;
	// bl 0x822c80a8
	ctx.lr = 0x8214AC1C;
	sub_822C80A8(ctx, base);
loc_8214AC1C:
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

DEFINE_REX_FUNC(sub_8214C768) {
	REX_FUNC_PROLOGUE();
	// sth r4,4(r3)
	REX_STORE_U16(ctx.r3.u32 + 4, ctx.r4.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8214C770) {
	REX_FUNC_PROLOGUE();
	// sth r4,6(r3)
	REX_STORE_U16(ctx.r3.u32 + 6, ctx.r4.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8214C780) {
	REX_FUNC_PROLOGUE();
	// lha r3,8(r3)
	ctx.r3.s64 = int16_t(REX_LOAD_U16(ctx.r3.u32 + 8));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8214C7B8) {
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
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r10,-19588
	ctx.r10.s64 = ctx.r10.s64 + -19588;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// beq cr6,0x8214c7ec
	if (ctx.cr6.eq) goto loc_8214C7EC;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,36(r11)
	REX_STORE_U8(ctx.r11.u32 + 36, ctx.r10.u8);
loc_8214C7EC:
	// clrlwi. r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8214c7fc
	if (ctx.cr0.eq) goto loc_8214C7FC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c80a8
	ctx.lr = 0x8214C7FC;
	sub_822C80A8(ctx, base);
loc_8214C7FC:
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

DEFINE_REX_FUNC(sub_8214D280) {
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
	ctx.lr = 0x8214D298;
	sub_82187B58(ctx, base);
	// bl 0x821887c0
	ctx.lr = 0x8214D29C;
	sub_821887C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8214d2b0
	if (ctx.cr0.eq) goto loc_8214D2B0;
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,31868(r10)
	REX_STORE_U8(ctx.r10.u32 + 31868, ctx.r11.u8);
loc_8214D2B0:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,19
	ctx.r4.s64 = 19;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214D2C8;
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

DEFINE_REX_FUNC(sub_8214EF38) {
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
	ctx.lr = 0x8214EF40;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214EF60;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addic. r11,r3,-5
	ctx.xer.ca = ctx.r3.u32 > 4;
	ctx.r11.s64 = ctx.r3.s64 + -5;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r28,1
	r28.s64 = 1;
	// bge 0x8214f010
	if (!ctx.cr0.lt) goto loc_8214F010;
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214ef94
	if (ctx.cr6.eq) goto loc_8214EF94;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stb r28,90(r11)
	REX_STORE_U8(ctx.r11.u32 + 90, r28.u8);
	// lfs f0,-18900(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -18900);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// stfs f0,168(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 168, temp.u32);
loc_8214EF94:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214f070
	if (ctx.cr6.eq) goto loc_8214F070;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214EFB4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r3,-5
	ctx.r11.s64 = ctx.r3.s64 + -5;
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r29.s32, ctx.xer);
	// beq cr6,0x8214eff4
	if (ctx.cr6.eq) goto loc_8214EFF4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8214eff4
	if (ctx.cr6.lt) goto loc_8214EFF4;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stb r28,90(r11)
	REX_STORE_U8(ctx.r11.u32 + 90, r28.u8);
	// lfs f0,1992(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// stfs f0,168(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 168, temp.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lfs f0,-19048(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -19048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,204(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 204, temp.u32);
	// b 0x8214f070
	goto loc_8214F070;
loc_8214EFF4:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stb r28,90(r11)
	REX_STORE_U8(ctx.r11.u32 + 90, r28.u8);
	// lfs f0,-19064(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -19064);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// stfs f0,168(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 168, temp.u32);
	// b 0x8214f070
	goto loc_8214F070;
loc_8214F010:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f0,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// beq cr6,0x8214f044
	if (ctx.cr6.eq) goto loc_8214F044;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stb r28,90(r11)
	REX_STORE_U8(ctx.r11.u32 + 90, r28.u8);
	// lfs f13,-19048(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -19048);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// stfs f0,168(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 168, temp.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// stfs f13,204(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 204, temp.u32);
loc_8214F044:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214f070
	if (ctx.cr6.eq) goto loc_8214F070;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stb r28,90(r11)
	REX_STORE_U8(ctx.r11.u32 + 90, r28.u8);
	// lfs f13,-18904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -18904);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// stfs f0,168(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 168, temp.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// stfs f13,204(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 204, temp.u32);
loc_8214F070:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8215B098) {
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
	ctx.lr = 0x8215B0A0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x821afce8
	ctx.lr = 0x8215B0AC;
	sub_821AFCE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8215b35c
	if (!ctx.cr0.eq) goto loc_8215B35C;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r30,r11,-7072
	r30.s64 = ctx.r11.s64 + -7072;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821c9410
	ctx.lr = 0x8215B0C8;
	sub_821C9410(ctx, base);
	// addis r11,r30,1
	ctx.r11.s64 = r30.s64 + 65536;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,3696
	ctx.r3.s64 = ctx.r11.s64 + 3696;
	// bl 0x821c9410
	ctx.lr = 0x8215B0D8;
	sub_821C9410(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r28,84(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 84);
	// lwz r25,88(r31)
	r25.u64 = REX_LOAD_U32(r31.u32 + 88);
	// bl 0x821eb2c0
	ctx.lr = 0x8215B0E8;
	sub_821EB2C0(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// li r27,0
	r27.s64 = 0;
	// addi r26,r11,432
	r26.s64 = ctx.r11.s64 + 432;
	// li r30,-1
	r30.s64 = -1;
	// lbz r11,102(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 102);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8215b168
	if (ctx.cr0.eq) goto loc_8215B168;
	// bl 0x821003b0
	ctx.lr = 0x8215B108;
	sub_821003B0(ctx, base);
	// bl 0x82100768
	ctx.lr = 0x8215B10C;
	sub_82100768(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8215b11c
	if (ctx.cr0.eq) goto loc_8215B11C;
	// rlwinm. r11,r3,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8215b160
	if (ctx.cr0.eq) goto loc_8215B160;
loc_8215B11C:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r26,84
	ctx.r3.s64 = r26.s64 + 84;
	// bl 0x821d6210
	ctx.lr = 0x8215B128;
	sub_821D6210(ctx, base);
	// bl 0x821aff90
	ctx.lr = 0x8215B12C;
	sub_821AFF90(ctx, base);
	// li r3,35
	ctx.r3.s64 = 35;
	// bl 0x82102738
	ctx.lr = 0x8215B134;
	sub_82102738(ctx, base);
	// lbz r10,102(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 102);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// addi r11,r11,13128
	ctx.r11.s64 = ctx.r11.s64 + 13128;
	// mulli r10,r10,136
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(136));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,-136
	ctx.r3.s64 = ctx.r11.s64 + -136;
	// bl 0x82106460
	ctx.lr = 0x8215B154;
	sub_82106460(ctx, base);
	// stw r3,336(r31)
	REX_STORE_U32(r31.u32 + 336, ctx.r3.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8215b190
	if (ctx.cr0.lt) goto loc_8215B190;
loc_8215B160:
	// stb r27,102(r31)
	REX_STORE_U8(r31.u32 + 102, r27.u8);
	// b 0x8215b190
	goto loc_8215B190;
loc_8215B168:
	// lwz r3,336(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 336);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8215b190
	if (ctx.cr6.lt) goto loc_8215B190;
	// bl 0x821007c0
	ctx.lr = 0x8215B178;
	sub_821007C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8215b190
	if (!ctx.cr0.eq) goto loc_8215B190;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r26,84
	ctx.r3.s64 = r26.s64 + 84;
	// bl 0x821d6210
	ctx.lr = 0x8215B18C;
	sub_821D6210(ctx, base);
	// stw r30,336(r31)
	REX_STORE_U32(r31.u32 + 336, r30.u32);
loc_8215B190:
	// lhz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U16(r26.u32 + 0);
	// li r29,1
	r29.s64 = 1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8215b1b4
	if (!ctx.cr0.eq) goto loc_8215B1B4;
	// lwz r11,336(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 336);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x8215b1b4
	if (!ctx.cr6.lt) goto loc_8215B1B4;
	// stb r27,103(r31)
	REX_STORE_U8(r31.u32 + 103, r27.u8);
	// b 0x8215b1b8
	goto loc_8215B1B8;
loc_8215B1B4:
	// stb r29,103(r31)
	REX_STORE_U8(r31.u32 + 103, r29.u8);
loc_8215B1B8:
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// lbz r11,24293(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 24293);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8215b1d4
	if (ctx.cr0.eq) goto loc_8215B1D4;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// stw r30,68(r11)
	REX_STORE_U32(ctx.r11.u32 + 68, r30.u32);
	// stb r29,103(r31)
	REX_STORE_U8(r31.u32 + 103, r29.u8);
loc_8215B1D4:
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x8215b2a0
	if (ctx.cr6.gt) goto loc_8215B2A0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8215b218
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8215B218;
	// bdzf 4*cr6+eq,0x8215b228
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8215B228;
	// bdzf 4*cr6+eq,0x8215b23c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8215B23C;
	// bdzf 4*cr6+eq,0x8215b250
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8215B250;
	// bdzf 4*cr6+eq,0x8215b264
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8215B264;
	// bdzf 4*cr6+eq,0x8215b278
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8215B278;
	// bdzf 4*cr6+eq,0x8215b298
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8215B298;
	// bne cr6,0x8215b28c
	if (!ctx.cr6.eq) goto loc_8215B28C;
	// stw r27,88(r31)
	REX_STORE_U32(r31.u32 + 88, r27.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82153790
	ctx.lr = 0x8215B214;
	sub_82153790(ctx, base);
	// b 0x8215b2a0
	goto loc_8215B2A0;
loc_8215B218:
	// stw r29,88(r31)
	REX_STORE_U32(r31.u32 + 88, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82154820
	ctx.lr = 0x8215B224;
	sub_82154820(ctx, base);
	// b 0x8215b2a0
	goto loc_8215B2A0;
loc_8215B228:
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r11.u32);
	// bl 0x82158720
	ctx.lr = 0x8215B238;
	sub_82158720(ctx, base);
	// b 0x8215b2a0
	goto loc_8215B2A0;
loc_8215B23C:
	// li r11,3
	ctx.r11.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r11.u32);
	// bl 0x82154a20
	ctx.lr = 0x8215B24C;
	sub_82154A20(ctx, base);
	// b 0x8215b2a0
	goto loc_8215B2A0;
loc_8215B250:
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r11.u32);
	// bl 0x82154ce0
	ctx.lr = 0x8215B260;
	sub_82154CE0(ctx, base);
	// b 0x8215b2a0
	goto loc_8215B2A0;
loc_8215B264:
	// li r11,5
	ctx.r11.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r11.u32);
	// bl 0x82154e60
	ctx.lr = 0x8215B274;
	sub_82154E60(ctx, base);
	// b 0x8215b2a0
	goto loc_8215B2A0;
loc_8215B278:
	// li r11,6
	ctx.r11.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r11.u32);
	// bl 0x82155858
	ctx.lr = 0x8215B288;
	sub_82155858(ctx, base);
	// b 0x8215b2a0
	goto loc_8215B2A0;
loc_8215B28C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8214d350
	ctx.lr = 0x8215B294;
	sub_8214D350(ctx, base);
	// b 0x8215b2a0
	goto loc_8215B2A0;
loc_8215B298:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8214d478
	ctx.lr = 0x8215B2A0;
	sub_8214D478(ctx, base);
loc_8215B2A0:
	// lwz r10,84(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 84);
	// cmpw cr6,r28,r10
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8215b2b4
	if (ctx.cr6.eq) goto loc_8215B2B4;
	// stw r27,68(r31)
	REX_STORE_U32(r31.u32 + 68, r27.u32);
	// b 0x8215b2c8
	goto loc_8215B2C8;
loc_8215B2B4:
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// addic. r11,r11,1
	ctx.xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r11.s64 = ctx.r11.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r11.u32);
	// bne 0x8215b2c8
	if (!ctx.cr0.eq) goto loc_8215B2C8;
	// stw r29,68(r31)
	REX_STORE_U32(r31.u32 + 68, r29.u32);
loc_8215B2C8:
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(r25.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8215b2dc
	if (ctx.cr6.eq) goto loc_8215B2DC;
	// stw r27,316(r31)
	REX_STORE_U32(r31.u32 + 316, r27.u32);
	// b 0x8215b2f0
	goto loc_8215B2F0;
loc_8215B2DC:
	// lwz r11,316(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 316);
	// addic. r11,r11,1
	ctx.xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r11.s64 = ctx.r11.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,316(r31)
	REX_STORE_U32(r31.u32 + 316, ctx.r11.u32);
	// bne 0x8215b2f0
	if (!ctx.cr0.eq) goto loc_8215B2F0;
	// stw r29,316(r31)
	REX_STORE_U32(r31.u32 + 316, r29.u32);
loc_8215B2F0:
	// lwz r11,324(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 324);
	// addic. r11,r11,1
	ctx.xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r11.s64 = ctx.r11.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,324(r31)
	REX_STORE_U32(r31.u32 + 324, ctx.r11.u32);
	// bne 0x8215b304
	if (!ctx.cr0.eq) goto loc_8215B304;
	// stw r29,324(r31)
	REX_STORE_U32(r31.u32 + 324, r29.u32);
loc_8215B304:
	// lwz r11,320(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 320);
	// addic. r11,r11,1
	ctx.xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r11.s64 = ctx.r11.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,320(r31)
	REX_STORE_U32(r31.u32 + 320, ctx.r11.u32);
	// bne 0x8215b318
	if (!ctx.cr0.eq) goto loc_8215B318;
	// stw r29,320(r31)
	REX_STORE_U32(r31.u32 + 320, r29.u32);
loc_8215B318:
	// lhz r11,328(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 328);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh. r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sth r11,328(r31)
	REX_STORE_U16(r31.u32 + 328, ctx.r11.u16);
	// bne 0x8215b330
	if (!ctx.cr0.eq) goto loc_8215B330;
	// sth r29,328(r31)
	REX_STORE_U16(r31.u32 + 328, r29.u16);
loc_8215B330:
	// lhz r11,30(r26)
	ctx.r11.u64 = REX_LOAD_U16(r26.u32 + 30);
	// cmplwi cr6,r11,17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 17, ctx.xer);
	// bne cr6,0x8215b350
	if (!ctx.cr6.eq) goto loc_8215B350;
	// lha r11,330(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 330));
	// lha r9,328(r31)
	ctx.r9.s64 = int16_t(REX_LOAD_U16(r31.u32 + 328));
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8215b350
	if (ctx.cr6.lt) goto loc_8215B350;
	// stb r29,332(r31)
	REX_STORE_U8(r31.u32 + 332, r29.u8);
loc_8215B350:
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// bne cr6,0x8215b35c
	if (!ctx.cr6.eq) goto loc_8215B35C;
	// bl 0x821d17e8
	ctx.lr = 0x8215B35C;
	sub_821D17E8(ctx, base);
loc_8215B35C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_82167A78) {
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
	// bl 0x822d4e60
	ctx.lr = 0x82167A80;
	// addi r12,r1,-120
	ctx.r12.s64 = ctx.r1.s64 + -120;
	// bl 0x822d4f20
	ctx.lr = 0x82167A88;
	// stwu r1,-528(r1)
	ea = -528 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r28,r11,-28232
	r28.s64 = ctx.r11.s64 + -28232;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,-28232(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -28232);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82167AAC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// addi r22,r11,432
	r22.s64 = ctx.r11.s64 + 432;
	// addi r11,r10,-8304
	ctx.r11.s64 = ctx.r10.s64 + -8304;
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// lis r31,-32256
	r31.s64 = -2113929216;
	// addi r19,r10,13128
	r19.s64 = ctx.r10.s64 + 13128;
	// lwz r29,220(r22)
	r29.u64 = REX_LOAD_U32(r22.u32 + 220);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f31,1996(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 1996);
	f31.f64 = double(temp.f32);
	// addi r7,r11,100
	ctx.r7.s64 = ctx.r11.s64 + 100;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lwz r11,44(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 44);
	// lbz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U8(r29.u32 + 0);
	// lfs f28,-8492(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + -8492);
	f28.f64 = double(temp.f32);
	// lbz r30,2(r29)
	r30.u64 = REX_LOAD_U8(r29.u32 + 2);
	// lfs f30,1992(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 1992);
	f30.f64 = double(temp.f32);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// lfs f22,2000(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2000);
	f22.f64 = double(temp.f32);
	// extsb r4,r30
	ctx.r4.s64 = r30.s8;
	// xori r31,r10,1
	r31.u64 = ctx.r10.u64 ^ 1;
	// lfs f23,15944(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 15944);
	f23.f64 = double(temp.f32);
	// lis r9,-32177
	ctx.r9.s64 = -2108751872;
	// mulli r6,r31,56
	ctx.r6.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(56));
	// lwzx r31,r6,r7
	r31.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// lis r8,-32169
	ctx.r8.s64 = -2108227584;
	// mulli r10,r4,136
	ctx.r10.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(136));
	// li r20,0
	r20.s64 = 0;
	// li r23,1
	r23.s64 = 1;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// add r21,r10,r19
	r21.u64 = ctx.r10.u64 + r19.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r24,r9,26568
	r24.s64 = ctx.r9.s64 + 26568;
	// addi r26,r8,24536
	r26.s64 = ctx.r8.s64 + 24536;
	// bne cr6,0x82167dd8
	if (!ctx.cr6.eq) goto loc_82167DD8;
	// li r5,17528
	ctx.r5.s64 = 17528;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d5870
	ctx.lr = 0x82167B50;
	sub_822D5870(ctx, base);
	// lis r10,-32173
	ctx.r10.s64 = -2108489728;
	// sth r20,0(r26)
	REX_STORE_U16(r26.u32 + 0, r20.u16);
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
	// stw r20,0(r31)
	REX_STORE_U32(r31.u32 + 0, r20.u32);
	// lis r9,-32177
	ctx.r9.s64 = -2108751872;
	// stw r20,120(r24)
	REX_STORE_U32(r24.u32 + 120, r20.u32);
	// addi r9,r9,23304
	ctx.r9.s64 = ctx.r9.s64 + 23304;
	// lwz r10,504(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 504);
	// lhz r11,88(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 88);
	// addi r11,r11,-24
	ctx.r11.s64 = ctx.r11.s64 + -24;
	// addic r8,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// subfe r11,r8,r11
	temp.u8 = (~ctx.r8.u32 + ctx.r11.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r11,76(r9)
	REX_STORE_U32(ctx.r9.u32 + 76, ctx.r11.u32);
	// stw r23,344(r10)
	REX_STORE_U32(ctx.r10.u32 + 344, r23.u32);
	// bl 0x821ccce8
	ctx.lr = 0x82167B8C;
	sub_821CCCE8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821b0d30
	ctx.lr = 0x82167B94;
	sub_821B0D30(ctx, base);
	// lhz r11,90(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 90);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x82167c48
	if (ctx.cr6.eq) goto loc_82167C48;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// beq cr6,0x82167c20
	if (ctx.cr6.eq) goto loc_82167C20;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// beq cr6,0x82167c48
	if (ctx.cr6.eq) goto loc_82167C48;
	// stfs f31,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 60, temp.u32);
	// cmplwi cr6,r11,18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 18, ctx.xer);
	// stfs f30,68(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 68, temp.u32);
	// beq cr6,0x82167c00
	if (ctx.cr6.eq) goto loc_82167C00;
	// cmplwi cr6,r11,20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 20, ctx.xer);
	// beq cr6,0x82167bd8
	if (ctx.cr6.eq) goto loc_82167BD8;
	// stfs f31,56(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 56, temp.u32);
	// stfs f31,64(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 64, temp.u32);
	// stfs f31,72(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 72, temp.u32);
	// b 0x82167c6c
	goto loc_82167C6C;
loc_82167BD8:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f0,-10528(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -10528);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 56, temp.u32);
	// lfs f13,-10532(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -10532);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-10536(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -10536);
	ctx.f0.f64 = double(temp.f32);
loc_82167BF4:
	// stfs f13,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 64, temp.u32);
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 72, temp.u32);
	// b 0x82167c6c
	goto loc_82167C6C;
loc_82167C00:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f0,-10540(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -10540);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 56, temp.u32);
	// lfs f13,-10544(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -10544);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-10548(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -10548);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82167bf4
	goto loc_82167BF4;
loc_82167C20:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f31,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 60, temp.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stfs f30,68(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 68, temp.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f0,-10552(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -10552);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 56, temp.u32);
	// lfs f13,-11776(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -11776);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-10556(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -10556);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82167bf4
	goto loc_82167BF4;
loc_82167C48:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f23,56(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f23.f64);
	REX_STORE_U32(r31.u32 + 56, temp.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stfs f31,60(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 60, temp.u32);
	// stfs f30,68(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 68, temp.u32);
	// lfs f0,16192(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16192);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-10560(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -10560);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 64, temp.u32);
	// stfs f13,72(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 72, temp.u32);
loc_82167C6C:
	// bl 0x821dfd10
	ctx.lr = 0x82167C70;
	sub_821DFD10(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// bl 0x821af9d8
	ctx.lr = 0x82167C84;
	sub_821AF9D8(ctx, base);
	// stw r3,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lha r4,90(r29)
	ctx.r4.s64 = int16_t(REX_LOAD_U16(r29.u32 + 90));
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x821af9d8
	ctx.lr = 0x82167C9C;
	sub_821AF9D8(ctx, base);
	// stw r3,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r3.u32);
	// lwz r11,348(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 348);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lha r10,88(r29)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(r29.u32 + 88));
	// rlwinm r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x821af9d8
	ctx.lr = 0x82167CCC;
	sub_821AF9D8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r27,92(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 92);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r11,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r11.u32);
	// mr r8,r21
	ctx.r8.u64 = r21.u64;
	// fmr f2,f28
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f28.f64;
	// li r5,1
	ctx.r5.s64 = 1;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,5
	ctx.r4.s64 = 5;
	// stw r11,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r10.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// stw r10,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r10.u32);
	// lhz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// stw r11,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r11.u32);
	// bl 0x820f3460
	ctx.lr = 0x82167D20;
	sub_820F3460(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// bl 0x820f2e70
	ctx.lr = 0x82167D30;
	sub_820F2E70(ctx, base);
	// lfs f0,8(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,76(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 76, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f0,16(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 80, temp.u32);
	// bl 0x82200af0
	ctx.lr = 0x82167D48;
	sub_82200AF0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f1,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822006f8
	ctx.lr = 0x82167D54;
	sub_822006F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f1,4(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82200700
	ctx.lr = 0x82167D60;
	sub_82200700(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82200708
	ctx.lr = 0x82167D6C;
	sub_82200708(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f1,8(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82200750
	ctx.lr = 0x82167D78;
	sub_82200750(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f1,12(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82200758
	ctx.lr = 0x82167D84;
	sub_82200758(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f1,16(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821a3a28
	ctx.lr = 0x82167D90;
	sub_821A3A28(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f1,20(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82200818
	ctx.lr = 0x82167D9C;
	sub_82200818(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82200ad0
	ctx.lr = 0x82167DA4;
	sub_82200AD0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f1,f22
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f22.f64;
	// bl 0x82200ac8
	ctx.lr = 0x82167DB0;
	sub_82200AC8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lfs f1,72(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 72);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821ca558
	ctx.lr = 0x82167DBC;
	sub_821CA558(ctx, base);
	// lfs f0,72(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 44, temp.u32);
	// addi r11,r31,19575
	ctx.r11.s64 = r31.s64 + 19575;
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 40, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// rlwinm r4,r11,0,0,20
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF800;
	// bl 0x8212e6b0
	ctx.lr = 0x82167DD8;
	sub_8212E6B0(ctx, base);
loc_82167DD8:
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821be318
	ctx.lr = 0x82167DEC;
	sub_821BE318(ctx, base);
	// lfs f0,56(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10484(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 10484, temp.u32);
	// addi r27,r31,56
	r27.s64 = r31.s64 + 56;
	// stfs f0,10532(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 10532, temp.u32);
	// lfs f0,64(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10540(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 10540, temp.u32);
	// stfs f0,10492(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 10492, temp.u32);
	// lwz r11,44(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 44);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// blt cr6,0x82169228
	if (ctx.cr6.lt) goto loc_82169228;
	// bne cr6,0x82167e30
	if (!ctx.cr6.eq) goto loc_82167E30;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r22,84
	ctx.r3.s64 = r22.s64 + 84;
	// bl 0x821d6210
	ctx.lr = 0x82167E24;
	sub_821D6210(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82106460
	ctx.lr = 0x82167E2C;
	sub_82106460(ctx, base);
	// stw r3,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r3.u32);
loc_82167E30:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// lfs f29,2012(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2012);
	f29.f64 = double(temp.f32);
	// ble cr6,0x82167e8c
	if (!ctx.cr6.gt) goto loc_82167E8C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,1840(r19)
	temp.u32 = REX_LOAD_U32(r19.u32 + 1840);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-30112(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -30112);
	ctx.f12.f64 = double(temp.f32);
	// fnmsubs f0,f13,f12,f0
	ctx.f0.f64 = double(float(-std::fma(ctx.f13.f64, ctx.f12.f64, -ctx.f0.f64)));
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 48, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bgt cr6,0x82167e64
	if (ctx.cr6.gt) goto loc_82167E64;
	// stfs f31,48(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 48, temp.u32);
loc_82167E64:
	// lfs f0,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f30,f0
	ctx.f0.f64 = double(float(f30.f64 - ctx.f0.f64));
	// fmuls f1,f0,f29
	ctx.f1.f64 = double(float(ctx.f0.f64 * f29.f64));
	// bl 0x820e0028
	ctx.lr = 0x82167E74;
	sub_820E0028(ctx, base);
	// lfs f0,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lfs f13,44(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fmadds f1,f13,f1,f0
	ctx.f1.f64 = double(float(std::fma(ctx.f13.f64, ctx.f1.f64, ctx.f0.f64)));
	// bl 0x821ca558
	ctx.lr = 0x82167E8C;
	sub_821CA558(ctx, base);
loc_82167E8C:
	// lha r11,0(r26)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r26.u32 + 0));
	// li r25,2
	r25.s64 = 2;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82167f08
	if (ctx.cr6.eq) goto loc_82167F08;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82167f00
	if (ctx.cr6.eq) goto loc_82167F00;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82167ef8
	if (ctx.cr6.eq) goto loc_82167EF8;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82167eec
	if (ctx.cr6.eq) goto loc_82167EEC;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82167f0c
	if (!ctx.cr6.eq) goto loc_82167F0C;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r9,r11,-7072
	ctx.r9.s64 = ctx.r11.s64 + -7072;
	// ori r8,r10,23116
	ctx.r8.u64 = ctx.r10.u64 | 23116;
	// li r4,-1
	ctx.r4.s64 = -1;
	// li r3,2
	ctx.r3.s64 = 2;
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// stw r25,19420(r9)
	REX_STORE_U32(ctx.r9.u32 + 19420, r25.u32);
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// stwx r25,r9,r8
	REX_STORE_U32(ctx.r9.u32 + ctx.r8.u32, r25.u32);
	// bl 0x821d3060
	ctx.lr = 0x82167EE8;
	sub_821D3060(ctx, base);
	// b 0x82169228
	goto loc_82169228;
loc_82167EEC:
	// li r11,4
	ctx.r11.s64 = 4;
loc_82167EF0:
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// b 0x82167f18
	goto loc_82167F18;
loc_82167EF8:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82167ef0
	goto loc_82167EF0;
loc_82167F00:
	// stw r25,0(r31)
	REX_STORE_U32(r31.u32 + 0, r25.u32);
	// b 0x82167f18
	goto loc_82167F18;
loc_82167F08:
	// stw r23,0(r31)
	REX_STORE_U32(r31.u32 + 0, r23.u32);
loc_82167F0C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82167f40
	if (ctx.cr6.eq) goto loc_82167F40;
loc_82167F18:
	// lhz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U16(r26.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82167f40
	if (ctx.cr0.eq) goto loc_82167F40;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x821007c0
	ctx.lr = 0x82167F2C;
	sub_821007C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82169228
	if (!ctx.cr0.eq) goto loc_82169228;
	// sth r20,0(r26)
	REX_STORE_U16(r26.u32 + 0, r20.u16);
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
	// stw r20,20(r31)
	REX_STORE_U32(r31.u32 + 20, r20.u32);
loc_82167F40:
	// lwz r18,0(r31)
	r18.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r18,1
	ctx.cr6.compare<int32_t>(r18.s32, 1, ctx.xer);
	// beq cr6,0x82168ec8
	if (ctx.cr6.eq) goto loc_82168EC8;
	// cmpwi cr6,r18,2
	ctx.cr6.compare<int32_t>(r18.s32, 2, ctx.xer);
	// beq cr6,0x82168a88
	if (ctx.cr6.eq) goto loc_82168A88;
	// cmpwi cr6,r18,3
	ctx.cr6.compare<int32_t>(r18.s32, 3, ctx.xer);
	// beq cr6,0x821684dc
	if (ctx.cr6.eq) goto loc_821684DC;
	// cmpwi cr6,r18,4
	ctx.cr6.compare<int32_t>(r18.s32, 4, ctx.xer);
	// beq cr6,0x82168078
	if (ctx.cr6.eq) goto loc_82168078;
	// cmpwi cr6,r18,5
	ctx.cr6.compare<int32_t>(r18.s32, 5, ctx.xer);
	// beq cr6,0x82167fd0
	if (ctx.cr6.eq) goto loc_82167FD0;
	// lfs f0,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bgt cr6,0x8216920c
	if (ctx.cr6.gt) goto loc_8216920C;
	// lwz r11,4(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 4);
	// rlwinm. r10,r11,0,15,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82167f98
	if (ctx.cr0.eq) goto loc_82167F98;
	// lfs f0,10312(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 10312);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 40, temp.u32);
	// fsubs f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 - f29.f64));
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 44, temp.u32);
	// b 0x82167fb0
	goto loc_82167FB0;
loc_82167F98:
	// rlwinm. r11,r11,0,14,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8216920c
	if (ctx.cr0.eq) goto loc_8216920C;
	// lfs f0,10312(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 10312);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f0,f29
	ctx.f13.f64 = double(float(ctx.f0.f64 + f29.f64));
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 40, temp.u32);
	// stfs f13,44(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 44, temp.u32);
loc_82167FB0:
	// stfs f30,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 48, temp.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,10488(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 10488);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 52, temp.u32);
	// lfs f1,2392(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2392);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821c6498
	ctx.lr = 0x82167FCC;
	sub_821C6498(ctx, base);
	// b 0x8216920c
	goto loc_8216920C;
loc_82167FD0:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82168038
	if (!ctx.cr6.eq) goto loc_82168038;
	// lwz r29,92(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 92);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f1,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822006f8
	ctx.lr = 0x82167FEC;
	sub_822006F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f1,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82200700
	ctx.lr = 0x82167FF8;
	sub_82200700(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82200708
	ctx.lr = 0x82168004;
	sub_82200708(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f1,8(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82200750
	ctx.lr = 0x82168010;
	sub_82200750(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f1,12(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82200758
	ctx.lr = 0x8216801C;
	sub_82200758(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f1,16(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821a3a28
	ctx.lr = 0x82168028;
	sub_821A3A28(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f1,20(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82200818
	ctx.lr = 0x82168034;
	sub_82200818(ctx, base);
	// stw r25,20(r31)
	REX_STORE_U32(r31.u32 + 20, r25.u32);
loc_82168038:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bne cr6,0x8216920c
	if (!ctx.cr6.eq) goto loc_8216920C;
	// stw r20,4(r31)
	REX_STORE_U32(r31.u32 + 4, r20.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// lha r11,2(r26)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r26.u32 + 2));
	// addi r3,r22,84
	ctx.r3.s64 = r22.s64 + 84;
	// stw r11,120(r24)
	REX_STORE_U32(r24.u32 + 120, ctx.r11.u32);
	// bl 0x821d6210
	ctx.lr = 0x8216805C;
	sub_821D6210(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82106460
	ctx.lr = 0x82168064;
	sub_82106460(ctx, base);
	// stw r3,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8216920c
	if (ctx.cr0.lt) goto loc_8216920C;
	// stw r20,0(r31)
	REX_STORE_U32(r31.u32 + 0, r20.u32);
	// b 0x8216920c
	goto loc_8216920C;
loc_82168078:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8216820c
	if (!ctx.cr6.eq) goto loc_8216820C;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82168094
	if (ctx.cr6.eq) goto loc_82168094;
	// bl 0x82101d68
	ctx.lr = 0x82168094;
	sub_82101D68(ctx, base);
loc_82168094:
	// stw r25,12(r31)
	REX_STORE_U32(r31.u32 + 12, r25.u32);
	// lis r3,1536
	ctx.r3.s64 = 100663296;
	// lwz r4,344(r22)
	ctx.r4.u64 = REX_LOAD_U32(r22.u32 + 344);
	// addi r27,r31,12
	r27.s64 = r31.s64 + 12;
	// ori r3,r3,24
	ctx.r3.u64 = ctx.r3.u64 | 24;
	// bl 0x820e68b8
	ctx.lr = 0x821680AC;
	sub_820E68B8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r11,28092
	ctx.r5.s64 = ctx.r11.s64 + 28092;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821eb1a0
	ctx.lr = 0x821680C4;
	sub_821EB1A0(ctx, base);
	// lis r3,1536
	ctx.r3.s64 = 100663296;
	// lwz r4,344(r22)
	ctx.r4.u64 = REX_LOAD_U32(r22.u32 + 344);
	// ori r3,r3,19
	ctx.r3.u64 = ctx.r3.u64 | 19;
	// bl 0x820e68b8
	ctx.lr = 0x821680D4;
	sub_820E68B8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r28,r11,-10572
	r28.s64 = ctx.r11.s64 + -10572;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// li r7,2
	ctx.r7.s64 = 2;
	// bl 0x821eb1a0
	ctx.lr = 0x821680F4;
	sub_821EB1A0(ctx, base);
	// lfs f0,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82168108
	if (!ctx.cr6.lt) goto loc_82168108;
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
loc_82168108:
	// lis r3,1536
	ctx.r3.s64 = 100663296;
	// lwz r4,344(r22)
	ctx.r4.u64 = REX_LOAD_U32(r22.u32 + 344);
	// ori r3,r3,20
	ctx.r3.u64 = ctx.r3.u64 | 20;
	// bl 0x820e68b8
	ctx.lr = 0x82168118;
	sub_820E68B8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// li r7,3
	ctx.r7.s64 = 3;
	// bl 0x821eb1a0
	ctx.lr = 0x82168130;
	sub_821EB1A0(ctx, base);
	// lfs f0,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82168144
	if (!ctx.cr6.lt) goto loc_82168144;
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
loc_82168144:
	// lis r3,1536
	ctx.r3.s64 = 100663296;
	// lwz r4,344(r22)
	ctx.r4.u64 = REX_LOAD_U32(r22.u32 + 344);
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// bl 0x820e68b8
	ctx.lr = 0x82168154;
	sub_820E68B8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// li r7,5
	ctx.r7.s64 = 5;
	// bl 0x821eb1a0
	ctx.lr = 0x8216816C;
	sub_821EB1A0(ctx, base);
	// lfs f13,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,128(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82168184
	if (ctx.cr6.lt) goto loc_82168184;
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82168184:
	// fadds f4,f0,f28
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = double(float(ctx.f0.f64 + f28.f64));
	// stfs f4,108(r31)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(r31.u32 + 108, temp.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r27,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r27.u32);
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// stw r23,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r23.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r20,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r20.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r20,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r20.u32);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lfs f0,-10576(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -10576);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lfs f7,16228(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16228);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,16264(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 16264);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f1,f0,f4
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f4.f64));
	// stfs f1,104(r31)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 104, temp.u32);
	// lfs f5,-24452(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + -24452);
	ctx.f5.f64 = double(temp.f32);
	// lfs f3,17120(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 17120);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,-24056(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + -24056);
	ctx.f2.f64 = double(temp.f32);
	// lwz r3,-32480(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + -32480);
	// bl 0x82104548
	ctx.lr = 0x821681E0;
	sub_82104548(ctx, base);
	// stw r3,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// stw r23,20(r31)
	REX_STORE_U32(r31.u32 + 20, r23.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82200a38
	ctx.lr = 0x821681F0;
	sub_82200A38(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,16836(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16836);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x82168204
	if (!ctx.cr6.lt) goto loc_82168204;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_82168204:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82200818
	ctx.lr = 0x8216820C;
	sub_82200818(ctx, base);
loc_8216820C:
	// lwz r11,10148(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 10148);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f0,368(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 368);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,176(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// lfs f0,372(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 372);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,180(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// lfs f0,376(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 376);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,184(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f30,188(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// bl 0x822007a8
	ctx.lr = 0x82168238;
	sub_822007A8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f1,27848(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 27848);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82200838
	ctx.lr = 0x82168248;
	sub_82200838(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x8216920c
	if (!ctx.cr6.eq) goto loc_8216920C;
	// lfs f30,100(r21)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r21.u32 + 100);
	f30.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fabs f13,f30
	ctx.f13.u64 = f30.u64 & ~0x8000000000000000;
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 0);
	// lfs f31,96(r21)
	temp.u32 = REX_LOAD_U32(r21.u32 + 96);
	f31.f64 = double(temp.f32);
	// lfs f0,2020(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2020);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82168290
	if (!ctx.cr6.lt) goto loc_82168290;
	// rlwinm. r10,r11,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82168284
	if (ctx.cr0.eq) goto loc_82168284;
	// fmr f30,f23
	f30.f64 = f23.f64;
	// b 0x82168290
	goto loc_82168290;
loc_82168284:
	// rlwinm. r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82168290
	if (ctx.cr0.eq) goto loc_82168290;
	// fmr f30,f22
	ctx.fpscr.disableFlushMode();
	f30.f64 = f22.f64;
loc_82168290:
	// fabs f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = f31.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x821682b8
	if (!ctx.cr6.lt) goto loc_821682B8;
	// rlwinm. r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x821682ac
	if (ctx.cr0.eq) goto loc_821682AC;
	// fmr f31,f23
	f31.f64 = f23.f64;
	// b 0x821682b8
	goto loc_821682B8;
loc_821682AC:
	// rlwinm. r10,r11,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x821682b8
	if (ctx.cr0.eq) goto loc_821682B8;
	// fmr f31,f22
	ctx.fpscr.disableFlushMode();
	f31.f64 = f22.f64;
loc_821682B8:
	// rlwinm. r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x821682ec
	if (ctx.cr0.eq) goto loc_821682EC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f1,-10580(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -10580);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82200a40
	ctx.lr = 0x821682D0;
	sub_82200A40(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82200a38
	ctx.lr = 0x821682D8;
	sub_82200A38(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,16928(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16928);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x82168328
	if (!ctx.cr6.lt) goto loc_82168328;
	// b 0x8216831c
	goto loc_8216831C;
loc_821682EC:
	// rlwinm. r11,r11,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82168328
	if (ctx.cr0.eq) goto loc_82168328;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f1,16676(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16676);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82200a40
	ctx.lr = 0x82168304;
	sub_82200A40(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82200a38
	ctx.lr = 0x8216830C;
	sub_82200A38(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,16352(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16352);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82168328
	if (!ctx.cr6.gt) goto loc_82168328;
loc_8216831C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
	// bl 0x82200818
	ctx.lr = 0x82168328;
	sub_82200818(ctx, base);
loc_82168328:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f0,16712(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16712);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f30,f0
	ctx.f1.f64 = double(float(f30.f64 * ctx.f0.f64));
	// bl 0x82200720
	ctx.lr = 0x8216833C;
	sub_82200720(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f0,16252(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16252);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f31,f0
	ctx.f1.f64 = double(float(f31.f64 * ctx.f0.f64));
	// bl 0x82200730
	ctx.lr = 0x82168350;
	sub_82200730(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822009c8
	ctx.lr = 0x82168358;
	sub_822009C8(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,2384(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2384);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bgt cr6,0x8216837c
	if (ctx.cr6.gt) goto loc_8216837C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f1,-30132(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -30132);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bge cr6,0x82168384
	if (!ctx.cr6.lt) goto loc_82168384;
loc_8216837C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822006f8
	ctx.lr = 0x82168384;
	sub_822006F8(ctx, base);
loc_82168384:
	// lwz r11,4(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 4);
	// andi. r11,r11,16416
	ctx.r11.u64 = ctx.r11.u64 & 16416;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821683a4
	if (ctx.cr0.eq) goto loc_821683A4;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x82101d68
	ctx.lr = 0x8216839C;
	sub_82101D68(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_821683A4:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r3,r10,-10592
	ctx.r3.s64 = ctx.r10.s64 + -10592;
	// lfd f1,-10800(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + -10800);
	// stfd f1,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// bl 0x821eacb0
	ctx.lr = 0x821683C0;
	sub_821EACB0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// lis r3,1536
	ctx.r3.s64 = 100663296;
	// lwz r4,344(r22)
	ctx.r4.u64 = REX_LOAD_U32(r22.u32 + 344);
	// ori r3,r3,19
	ctx.r3.u64 = ctx.r3.u64 | 19;
	// lfs f0,2332(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2332);
	ctx.f0.f64 = double(temp.f32);
	// fadds f31,f13,f0
	f31.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// bl 0x820e68b8
	ctx.lr = 0x821683E0;
	sub_820E68B8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfd f31,24(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 24, f31.u64);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r30,r10,-10616
	r30.s64 = ctx.r10.s64 + -10616;
	// li r6,-1
	ctx.r6.s64 = -1;
	// lfd f2,-10600(r11)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r11.u32 + -10600);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stfd f2,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f2.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// li r8,2
	ctx.r8.s64 = 2;
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// bl 0x821eacb0
	ctx.lr = 0x82168418;
	sub_821EACB0(ctx, base);
	// lis r3,1536
	ctx.r3.s64 = 100663296;
	// lwz r4,344(r22)
	ctx.r4.u64 = REX_LOAD_U32(r22.u32 + 344);
	// ori r3,r3,20
	ctx.r3.u64 = ctx.r3.u64 | 20;
	// bl 0x820e68b8
	ctx.lr = 0x82168428;
	sub_820E68B8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f2,-10624(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = REX_LOAD_U64(ctx.r11.u32 + -10624);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stfd f31,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, f31.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// stfd f2,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f2.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r8,3
	ctx.r8.s64 = 3;
	// bl 0x821eacb0
	ctx.lr = 0x82168458;
	sub_821EACB0(ctx, base);
	// lis r3,1536
	ctx.r3.s64 = 100663296;
	// lwz r4,344(r22)
	ctx.r4.u64 = REX_LOAD_U32(r22.u32 + 344);
	// ori r3,r3,24
	ctx.r3.u64 = ctx.r3.u64 | 24;
	// bl 0x820e68b8
	ctx.lr = 0x82168468;
	sub_820E68B8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f2,-10632(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = REX_LOAD_U64(ctx.r11.u32 + -10632);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfd f31,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, f31.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// stfd f2,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f2.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// addi r3,r10,26912
	ctx.r3.s64 = ctx.r10.s64 + 26912;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x821eacb0
	ctx.lr = 0x82168498;
	sub_821EACB0(ctx, base);
	// lis r3,1536
	ctx.r3.s64 = 100663296;
	// lwz r4,344(r22)
	ctx.r4.u64 = REX_LOAD_U32(r22.u32 + 344);
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// bl 0x820e68b8
	ctx.lr = 0x821684A8;
	sub_820E68B8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f2,-10640(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = REX_LOAD_U64(ctx.r11.u32 + -10640);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stfd f31,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, f31.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// stfd f2,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f2.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r8,5
	ctx.r8.s64 = 5;
	// bl 0x821eacb0
	ctx.lr = 0x821684D8;
	sub_821EACB0(ctx, base);
	// b 0x8216920c
	goto loc_8216920C;
loc_821684DC:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82168634
	if (!ctx.cr6.eq) goto loc_82168634;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821684f8
	if (ctx.cr6.eq) goto loc_821684F8;
	// bl 0x82101d68
	ctx.lr = 0x821684F8;
	sub_82101D68(ctx, base);
loc_821684F8:
	// stw r25,12(r31)
	REX_STORE_U32(r31.u32 + 12, r25.u32);
	// lis r9,-32165
	ctx.r9.s64 = -2107965440;
	// lwz r10,112(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 112);
	// addi r11,r31,12
	ctx.r11.s64 = r31.s64 + 12;
	// stw r20,36(r31)
	REX_STORE_U32(r31.u32 + 36, r20.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r23,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r23.u32);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// stw r20,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r20.u32);
	// stw r10,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r10.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f7,16228(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 16228);
	ctx.f7.f64 = double(temp.f32);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f6,16264(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16264);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,-24516(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + -24516);
	ctx.f5.f64 = double(temp.f32);
	// stw r20,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r20.u32);
	// lfs f3,17120(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 17120);
	ctx.f3.f64 = double(temp.f32);
	// lfs f4,26792(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 26792);
	ctx.f4.f64 = double(temp.f32);
	// lfs f2,-10648(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + -10648);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,26632(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 26632);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,-32480(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + -32480);
	// bl 0x82104548
	ctx.lr = 0x82168560;
	sub_82104548(ctx, base);
	// stw r3,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// lwz r28,92(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 92);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f1,48(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 48);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822006f8
	ctx.lr = 0x82168574;
	sub_822006F8(ctx, base);
	// lfs f13,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f0,52(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f13,72(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// bl 0x82200700
	ctx.lr = 0x82168590;
	sub_82200700(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82200708
	ctx.lr = 0x8216859C;
	sub_82200708(ctx, base);
	// lfs f0,64(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,60(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lfs f12,56(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stfs f12,144(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f30,156(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// bl 0x820e1ba8
	ctx.lr = 0x821685C8;
	sub_820E1BA8(ctx, base);
	// lfs f0,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,72(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// fsubs f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// bl 0x820e0778
	ctx.lr = 0x821685DC;
	sub_820E0778(ctx, base);
	// lfs f0,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,240(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lfs f0,4(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,244(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// lfs f0,8(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,248(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// stfs f30,252(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// bl 0x820e1df8
	ctx.lr = 0x82168608;
	sub_820E1DF8(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822007a8
	ctx.lr = 0x82168614;
	sub_822007A8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f1,68(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 68);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82200818
	ctx.lr = 0x82168620;
	sub_82200818(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f1,27848(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 27848);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82200838
	ctx.lr = 0x82168630;
	sub_82200838(ctx, base);
	// stw r23,20(r31)
	REX_STORE_U32(r31.u32 + 20, r23.u32);
loc_82168634:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x8216920c
	if (!ctx.cr6.eq) goto loc_8216920C;
	// lwz r11,12(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 12);
	// rlwinm. r10,r11,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8216866c
	if (ctx.cr0.eq) goto loc_8216866C;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
	// bge 0x82168740
	if (!ctx.cr0.lt) goto loc_82168740;
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
	// b 0x82168740
	goto loc_82168740;
loc_8216866C:
	// rlwinm. r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82168694
	if (ctx.cr0.eq) goto loc_82168694;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// lwz r10,116(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 116);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82168740
	if (ctx.cr6.lt) goto loc_82168740;
	// stw r20,36(r31)
	REX_STORE_U32(r31.u32 + 36, r20.u32);
	// b 0x82168740
	goto loc_82168740;
loc_82168694:
	// lwz r11,4(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 4);
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x821686fc
	if (ctx.cr0.eq) goto loc_821686FC;
	// lbz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,9
	ctx.r4.s64 = 9;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x8212bf38
	ctx.lr = 0x821686B4;
	sub_8212BF38(ctx, base);
	// lwz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 36);
	// lwz r9,100(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 100);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// lhzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// rotlwi r10,r10,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r5,2(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// rlwinm. r10,r4,0,0,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFF8000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x821686f0
	if (ctx.cr0.eq) goto loc_821686F0;
	// clrlwi r4,r4,17
	ctx.r4.u64 = ctx.r4.u32 & 0x7FFF;
	// bl 0x8212cbe8
	ctx.lr = 0x821686EC;
	sub_8212CBE8(ctx, base);
	// b 0x82168740
	goto loc_82168740;
loc_821686F0:
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x8212dd18
	ctx.lr = 0x821686F8;
	sub_8212DD18(ctx, base);
	// b 0x82168740
	goto loc_82168740;
loc_821686FC:
	// andi. r11,r11,16416
	ctx.r11.u64 = ctx.r11.u64 & 16416;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82168740
	if (ctx.cr0.eq) goto loc_82168740;
	// lbz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,9
	ctx.r4.s64 = 9;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x8212bf38
	ctx.lr = 0x8216871C;
	sub_8212BF38(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x82101d68
	ctx.lr = 0x82168724;
	sub_82101D68(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82168738
	if (ctx.cr6.eq) goto loc_82168738;
	// bl 0x82101d68
	ctx.lr = 0x82168734;
	sub_82101D68(ctx, base);
	// stw r20,8(r31)
	REX_STORE_U32(r31.u32 + 8, r20.u32);
loc_82168738:
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_82168740:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r10,100(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 100);
	// addi r30,r31,1144
	r30.s64 = r31.s64 + 1144;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r4,r11,r10
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x8212a9f8
	ctx.lr = 0x8216875C;
	sub_8212A9F8(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// subf r10,r30,r3
	ctx.r10.u64 = ctx.r3.u64 - r30.u64;
loc_82168764:
	// lbzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// extsb. r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stb r9,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x82168764
	if (!ctx.cr0.eq) goto loc_82168764;
	// addi r28,r31,120
	r28.s64 = r31.s64 + 120;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x820e6998
	ctx.lr = 0x82168788;
	sub_820E6998(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// addi r11,r11,15632
	ctx.r11.s64 = ctx.r11.s64 + 15632;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lfs f30,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	f30.f64 = double(temp.f32);
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bne cr6,0x821687b4
	if (!ctx.cr6.eq) goto loc_821687B4;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r6,1
	ctx.r6.s64 = 1;
	// lfs f2,-10652(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -10652);
	ctx.f2.f64 = double(temp.f32);
	// b 0x821687c0
	goto loc_821687C0;
loc_821687B4:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r6,2
	ctx.r6.s64 = 2;
	// lfs f2,-18800(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -18800);
	ctx.f2.f64 = double(temp.f32);
loc_821687C0:
	// bl 0x82167918
	ctx.lr = 0x821687C4;
	sub_82167918(ctx, base);
	// lwz r11,1856(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 1856);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stfs f30,20(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// rlwinm r11,r11,29,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x3;
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// std r11,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// lfd f13,128(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// lfs f0,-10656(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -10656);
	ctx.f0.f64 = double(temp.f32);
	// lfd f31,-10800(r9)
	f31.u64 = REX_LOAD_U64(ctx.r9.u32 + -10800);
	// li r7,-1
	ctx.r7.s64 = -1;
	// stfd f31,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, f31.u64);
	// addi r5,r8,-10668
	ctx.r5.s64 = ctx.r8.s64 + -10668;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// fsubs f2,f0,f13
	ctx.f2.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// bl 0x821eaf80
	ctx.lr = 0x82168820;
	sub_821EAF80(ctx, base);
	// lwz r11,1856(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 1856);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stfs f30,20(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// rlwinm r11,r11,29,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x3;
	// stfd f31,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, f31.u64);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// li r7,-1
	ctx.r7.s64 = -1;
	// std r11,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// lfd f0,128(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,-10672(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -10672);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// addi r5,r11,-10684
	ctx.r5.s64 = ctx.r11.s64 + -10684;
	// fadds f2,f13,f0
	ctx.f2.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// bl 0x821eaf80
	ctx.lr = 0x82168874;
	sub_821EAF80(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r7,116(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 116);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r5,r10,-10696
	ctx.r5.s64 = ctx.r10.s64 + -10696;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// bl 0x821eb1a0
	ctx.lr = 0x82168894;
	sub_821EB1A0(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lfs f13,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// stfd f31,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, f31.u64);
	// addi r3,r5,-10728
	ctx.r3.s64 = ctx.r5.s64 + -10728;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// li r7,-1
	ctx.r7.s64 = -1;
	// lwz r9,116(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 116);
	// lfd f2,-10704(r10)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r10.u32 + -10704);
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// stfd f2,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f2.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// lfs f0,-10732(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -10732);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// fsubs f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfd f1,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// bl 0x821eacb0
	ctx.lr = 0x821688E4;
	sub_821EACB0(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x8216920c
	if (!ctx.cr6.eq) goto loc_8216920C;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
	// bgt 0x82168910
	if (ctx.cr0.gt) goto loc_82168910;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x82101d68
	ctx.lr = 0x82168908;
	sub_82101D68(ctx, base);
	// stw r20,8(r31)
	REX_STORE_U32(r31.u32 + 8, r20.u32);
	// b 0x8216920c
	goto loc_8216920C;
loc_82168910:
	// lwz r11,348(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 348);
	// lis r3,2560
	ctx.r3.s64 = 167772160;
	// lwz r4,344(r22)
	ctx.r4.u64 = REX_LOAD_U32(r22.u32 + 344);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lha r11,88(r29)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r29.u32 + 88));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r3,r3,38
	ctx.r3.u64 = ctx.r3.u64 | 38;
	// bne cr6,0x821689dc
	if (!ctx.cr6.eq) goto loc_821689DC;
	// lis r10,-32175
	ctx.r10.s64 = -2108620800;
	// addi r30,r10,26216
	r30.s64 = ctx.r10.s64 + 26216;
	// lwzx r28,r11,r30
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// bl 0x820e68b8
	ctx.lr = 0x82168940;
	sub_820E68B8(ctx, base);
	// stfd f31,40(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 40, f31.u64);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// addi r27,r11,-10748
	r27.s64 = ctx.r11.s64 + -10748;
	// li r7,-1
	ctx.r7.s64 = -1;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// bl 0x821eb1a0
	ctx.lr = 0x82168970;
	sub_821EB1A0(ctx, base);
	// lha r11,88(r29)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r29.u32 + 88));
	// lis r3,2560
	ctx.r3.s64 = 167772160;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,344(r22)
	ctx.r4.u64 = REX_LOAD_U32(r22.u32 + 344);
	// ori r3,r3,38
	ctx.r3.u64 = ctx.r3.u64 | 38;
	// lwzx r30,r11,r30
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// bl 0x820e68b8
	ctx.lr = 0x8216898C;
	sub_820E68B8(ctx, base);
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fadds f13,f0,f28
	ctx.f13.f64 = double(float(ctx.f0.f64 + f28.f64));
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// stfd f31,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, f31.u64);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// li r7,-1
	ctx.r7.s64 = -1;
	// lfs f0,-10752(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -10752);
	ctx.f0.f64 = double(temp.f32);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// lfs f2,-10756(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -10756);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// fnmsubs f1,f13,f22,f0
	ctx.f1.f64 = double(float(-std::fma(ctx.f13.f64, f22.f64, -ctx.f0.f64)));
	// stfs f1,20(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// bl 0x821eaf80
	ctx.lr = 0x821689D8;
	sub_821EAF80(ctx, base);
	// b 0x8216920c
	goto loc_8216920C;
loc_821689DC:
	// lis r10,-32175
	ctx.r10.s64 = -2108620800;
	// addi r30,r10,26336
	r30.s64 = ctx.r10.s64 + 26336;
	// lwzx r28,r11,r30
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// bl 0x820e68b8
	ctx.lr = 0x821689EC;
	sub_820E68B8(ctx, base);
	// stfd f31,40(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 40, f31.u64);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// addi r27,r11,-10748
	r27.s64 = ctx.r11.s64 + -10748;
	// li r7,-1
	ctx.r7.s64 = -1;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// bl 0x821eb1a0
	ctx.lr = 0x82168A1C;
	sub_821EB1A0(ctx, base);
	// lha r11,88(r29)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r29.u32 + 88));
	// lis r3,2560
	ctx.r3.s64 = 167772160;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,344(r22)
	ctx.r4.u64 = REX_LOAD_U32(r22.u32 + 344);
	// ori r3,r3,38
	ctx.r3.u64 = ctx.r3.u64 | 38;
	// lwzx r30,r11,r30
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// bl 0x820e68b8
	ctx.lr = 0x82168A38;
	sub_820E68B8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f0,f28
	ctx.f13.f64 = double(float(ctx.f0.f64 + f28.f64));
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stfd f31,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, f31.u64);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// li r7,-1
	ctx.r7.s64 = -1;
	// lfs f2,-10756(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -10756);
	ctx.f2.f64 = double(temp.f32);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// lfs f0,-10752(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -10752);
	ctx.f0.f64 = double(temp.f32);
	// fnmsubs f1,f13,f22,f0
	ctx.f1.f64 = double(float(-std::fma(ctx.f13.f64, f22.f64, -ctx.f0.f64)));
	// stfs f1,20(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// bl 0x821eaf80
	ctx.lr = 0x82168A84;
	sub_821EAF80(ctx, base);
	// b 0x8216920c
	goto loc_8216920C;
loc_82168A88:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f24,16200(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16200);
	f24.f64 = double(temp.f32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f25,-24332(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -24332);
	f25.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f26,-18108(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -18108);
	f26.f64 = double(temp.f32);
	// lfs f27,-18448(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + -18448);
	f27.f64 = double(temp.f32);
	// lis r28,-32165
	r28.s64 = -2107965440;
	// lfs f28,16228(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 16228);
	f28.f64 = double(temp.f32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f29,16264(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 16264);
	f29.f64 = double(temp.f32);
	// lfs f30,-24452(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -24452);
	f30.f64 = double(temp.f32);
	// lfs f31,17120(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 17120);
	f31.f64 = double(temp.f32);
	// bne cr6,0x82168bcc
	if (!ctx.cr6.eq) goto loc_82168BCC;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82168ae8
	if (ctx.cr6.eq) goto loc_82168AE8;
	// bl 0x82101d68
	ctx.lr = 0x82168AE8;
	sub_82101D68(ctx, base);
loc_82168AE8:
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lwz r4,344(r22)
	ctx.r4.u64 = REX_LOAD_U32(r22.u32 + 344);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r11,320
	ctx.r11.s64 = ctx.r11.s64 + 320;
	// addi r10,r10,-10888
	ctx.r10.s64 = ctx.r10.s64 + -10888;
	// addi r29,r31,1144
	r29.s64 = r31.s64 + 1144;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x820e68b8
	ctx.lr = 0x82168B10;
	sub_820E68B8(ctx, base);
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// subf r10,r29,r3
	ctx.r10.u64 = ctx.r3.u64 - r29.u64;
loc_82168B18:
	// lbzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// extsb. r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stb r9,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x82168b18
	if (!ctx.cr0.eq) goto loc_82168B18;
	// addi r4,r31,120
	ctx.r4.s64 = r31.s64 + 120;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x820e6998
	ctx.lr = 0x82168B38;
	sub_820E6998(ctx, base);
	// stw r3,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r3.u32);
	// stw r20,36(r31)
	REX_STORE_U32(r31.u32 + 36, r20.u32);
	// addi r11,r31,12
	ctx.r11.s64 = r31.s64 + 12;
	// stw r25,12(r31)
	REX_STORE_U32(r31.u32 + 12, r25.u32);
	// fmr f7,f28
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = f28.f64;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// fmr f6,f29
	ctx.f6.f64 = f29.f64;
	// stw r23,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r23.u32);
	// fmr f5,f25
	ctx.f5.f64 = f25.f64;
	// stw r20,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r20.u32);
	// fmr f4,f26
	ctx.f4.f64 = f26.f64;
	// stw r20,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r20.u32);
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// fmr f1,f27
	ctx.f1.f64 = f27.f64;
	// lwz r3,-32480(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + -32480);
	// bl 0x82104548
	ctx.lr = 0x82168B7C;
	sub_82104548(ctx, base);
	// stw r3,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f1,f24
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f24.f64;
	// bl 0x82200818
	ctx.lr = 0x82168B8C;
	sub_82200818(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f1,-10760(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -10760);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822006f8
	ctx.lr = 0x82168B9C;
	sub_822006F8(ctx, base);
	// bl 0x821fed88
	ctx.lr = 0x82168BA0;
	sub_821FED88(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82200700
	ctx.lr = 0x82168BA8;
	sub_82200700(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f1,2008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2008);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82200758
	ctx.lr = 0x82168BB8;
	sub_82200758(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f1,27848(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 27848);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82200838
	ctx.lr = 0x82168BC8;
	sub_82200838(ctx, base);
	// stw r23,20(r31)
	REX_STORE_U32(r31.u32 + 20, r23.u32);
loc_82168BCC:
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r11,r31,12
	ctx.r11.s64 = r31.s64 + 12;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x82168d94
	if (!ctx.cr6.eq) goto loc_82168D94;
	// lwz r11,12(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 12);
	// rlwinm. r10,r11,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82168c00
	if (ctx.cr0.eq) goto loc_82168C00;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
	// bge 0x82168c80
	if (!ctx.cr0.lt) goto loc_82168C80;
	// stw r20,36(r31)
	REX_STORE_U32(r31.u32 + 36, r20.u32);
	// b 0x82168c80
	goto loc_82168C80;
loc_82168C00:
	// rlwinm. r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82168c48
	if (ctx.cr0.eq) goto loc_82168C48;
	// lwz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 36);
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r10,8
	ctx.r9.s64 = ctx.r10.s64 + 8;
	// stw r10,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r10.u32);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82168c80
	if (ctx.cr6.lt) goto loc_82168C80;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// mr r10,r20
	ctx.r10.u64 = r20.u64;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfc r8,r11,r20
	ctx.xer.ca = r20.u32 >= ctx.r11.u32;
	ctx.r8.u64 = r20.u64 - ctx.r11.u64;
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfe r10,r10,r9
	temp.u8 = (~ctx.r10.u32 + ctx.r9.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
	// b 0x82168c80
	goto loc_82168C80;
loc_82168C48:
	// lwz r11,4(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 4);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82168c64
	if (ctx.cr0.eq) goto loc_82168C64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x82101d68
	ctx.lr = 0x82168C5C;
	sub_82101D68(ctx, base);
	// stw r20,4(r31)
	REX_STORE_U32(r31.u32 + 4, r20.u32);
	// b 0x82168c80
	goto loc_82168C80;
loc_82168C64:
	// andi. r11,r11,16416
	ctx.r11.u64 = ctx.r11.u64 & 16416;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82168c80
	if (ctx.cr0.eq) goto loc_82168C80;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x82101d68
	ctx.lr = 0x82168C78;
	sub_82101D68(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_82168C80:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// lwz r10,116(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 116);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// mr r29,r9
	r29.u64 = ctx.r9.u64;
	// ble cr6,0x82168c9c
	if (!ctx.cr6.gt) goto loc_82168C9C;
	// mr r29,r10
	r29.u64 = ctx.r10.u64;
loc_82168C9C:
	// addi r10,r11,30
	ctx.r10.s64 = ctx.r11.s64 + 30;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r6,r11,r29
	ctx.r6.u64 = r29.u64 - ctx.r11.u64;
	// add r5,r10,r31
	ctx.r5.u64 = ctx.r10.u64 + r31.u64;
	// lfs f2,-12964(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -12964);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,-10764(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -10764);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82167828
	ctx.lr = 0x82168CC0;
	sub_82167828(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f30,-10768(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -10768);
	f30.f64 = double(temp.f32);
	// lfd f31,-10800(r10)
	f31.u64 = REX_LOAD_U64(ctx.r10.u32 + -10800);
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82168d30
	if (!ctx.cr6.gt) goto loc_82168D30;
	// lwz r11,1856(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 1856);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stfd f31,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, f31.u64);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// rlwinm r11,r11,29,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x3;
	// stfs f30,20(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// li r7,-1
	ctx.r7.s64 = -1;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// std r11,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r11.u64);
	// lfd f0,120(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,-10772(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -10772);
	ctx.f0.f64 = double(temp.f32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// addi r5,r9,-10668
	ctx.r5.s64 = ctx.r9.s64 + -10668;
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// fsubs f2,f0,f13
	ctx.f2.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// bl 0x821eaf80
	ctx.lr = 0x82168D30;
	sub_821EAF80(ctx, base);
loc_82168D30:
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82168dfc
	if (!ctx.cr6.lt) goto loc_82168DFC;
	// lwz r11,1856(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 1856);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stfs f30,20(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// li r7,-1
	ctx.r7.s64 = -1;
	// rlwinm r11,r11,29,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x3;
	// stfd f31,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, f31.u64);
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// std r11,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r11.u64);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// addi r5,r11,-10684
	ctx.r5.s64 = ctx.r11.s64 + -10684;
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// lfd f0,120(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,-10776(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -10776);
	ctx.f0.f64 = double(temp.f32);
	// fadds f2,f13,f0
	ctx.f2.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// bl 0x821eaf80
	ctx.lr = 0x82168D90;
	sub_821EAF80(ctx, base);
	// b 0x82168dfc
	goto loc_82168DFC;
loc_82168D94:
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// bne cr6,0x82168dfc
	if (!ctx.cr6.eq) goto loc_82168DFC;
	// lwz r10,4(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 4);
	// rlwinm. r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82168de8
	if (ctx.cr0.eq) goto loc_82168DE8;
	// stw r25,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r25.u32);
	// fmr f7,f28
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = f28.f64;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// fmr f6,f29
	ctx.f6.f64 = f29.f64;
	// stw r20,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r20.u32);
	// fmr f5,f25
	ctx.f5.f64 = f25.f64;
	// stw r23,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r23.u32);
	// fmr f4,f26
	ctx.f4.f64 = f26.f64;
	// stw r20,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r20.u32);
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// fmr f1,f27
	ctx.f1.f64 = f27.f64;
	// lwz r3,-32480(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + -32480);
	// bl 0x82104548
	ctx.lr = 0x82168DE0;
	sub_82104548(ctx, base);
	// stw r3,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// b 0x82168dfc
	goto loc_82168DFC;
loc_82168DE8:
	// andi. r11,r10,16416
	ctx.r11.u64 = ctx.r10.u64 & 16416;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82168dfc
	if (ctx.cr0.eq) goto loc_82168DFC;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_82168DFC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822009d0
	ctx.lr = 0x82168E04;
	sub_822009D0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f2,f23
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f23.f64;
	// fmr f3,f22
	ctx.f3.f64 = f22.f64;
	// lfs f0,31452(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 31452);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// bl 0x82204b80
	ctx.lr = 0x82168E1C;
	sub_82204B80(ctx, base);
	// stfs f1,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82200700
	ctx.lr = 0x82168E28;
	sub_82200700(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lfs f0,16308(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16308);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// bl 0x820e00c0
	ctx.lr = 0x82168E44;
	sub_820E00C0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f31,16172(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16172);
	f31.f64 = double(temp.f32);
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * f31.f64));
	// bl 0x82200750
	ctx.lr = 0x82168E5C;
	sub_82200750(ctx, base);
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * f31.f64));
	// bl 0x821a3a28
	ctx.lr = 0x82168E6C;
	sub_821A3A28(ctx, base);
	// lwz r11,44(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 44);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// lfd f13,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfs f0,22368(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 22368);
	ctx.f0.f64 = double(temp.f32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x820e0028
	ctx.lr = 0x82168E98;
	sub_820E0028(ctx, base);
	// stfs f1,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f0,28436(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28436);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,28432(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 28432);
	ctx.f13.f64 = double(temp.f32);
	// fmsubs f1,f1,f0,f13
	ctx.f1.f64 = double(float(std::fma(ctx.f1.f64, ctx.f0.f64, -ctx.f13.f64)));
	// bl 0x822006f8
	ctx.lr = 0x82168EB8;
	sub_822006F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f1,f24
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f24.f64;
	// bl 0x82200818
	ctx.lr = 0x82168EC4;
	sub_82200818(ctx, base);
	// b 0x8216920c
	goto loc_8216920C;
loc_82168EC8:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82169064
	if (!ctx.cr6.eq) goto loc_82169064;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82168ee4
	if (ctx.cr6.eq) goto loc_82168EE4;
	// bl 0x82101d68
	ctx.lr = 0x82168EE4;
	sub_82101D68(ctx, base);
loc_82168EE4:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lha r10,88(r29)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(r29.u32 + 88));
	// addi r11,r11,-10888
	ctx.r11.s64 = ctx.r11.s64 + -10888;
	// lwz r4,344(r22)
	ctx.r4.u64 = REX_LOAD_U32(r22.u32 + 344);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-120
	ctx.r11.s64 = ctx.r11.s64 + -120;
	// addi r29,r31,1144
	r29.s64 = r31.s64 + 1144;
	// lwzx r3,r10,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x820e68b8
	ctx.lr = 0x82168F08;
	sub_820E68B8(ctx, base);
	// subf r11,r3,r29
	ctx.r11.u64 = r29.u64 - ctx.r3.u64;
loc_82168F0C:
	// lbz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// extsb. r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stbx r10,r11,r3
	REX_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bne 0x82168f0c
	if (!ctx.cr0.eq) goto loc_82168F0C;
	// addi r4,r31,120
	ctx.r4.s64 = r31.s64 + 120;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x820e6998
	ctx.lr = 0x82168F2C;
	sub_820E6998(ctx, base);
	// stw r20,36(r31)
	REX_STORE_U32(r31.u32 + 36, r20.u32);
	// stw r3,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r3.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r25,12(r31)
	REX_STORE_U32(r31.u32 + 12, r25.u32);
	// addi r11,r31,12
	ctx.r11.s64 = r31.s64 + 12;
	// stw r20,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r20.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// stw r23,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r23.u32);
	// lfs f7,16228(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16228);
	ctx.f7.f64 = double(temp.f32);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// stw r20,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r20.u32);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lfs f6,16264(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16264);
	ctx.f6.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f5,-24332(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -24332);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,-18108(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + -18108);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,17120(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 17120);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,-24452(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + -24452);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,-18448(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -18448);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,-32480(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// bl 0x82104548
	ctx.lr = 0x82168F90;
	sub_82104548(ctx, base);
	// stw r3,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// lwz r29,92(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 92);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f1,24(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822006f8
	ctx.lr = 0x82168FA4;
	sub_822006F8(ctx, base);
	// lfs f13,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f0,28(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f13,72(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// bl 0x82200700
	ctx.lr = 0x82168FC0;
	sub_82200700(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82200708
	ctx.lr = 0x82168FCC;
	sub_82200708(ctx, base);
	// lfs f0,40(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,36(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lfs f12,32(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// stfs f12,160(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stfs f13,164(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f30,172(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// bl 0x820e1ba8
	ctx.lr = 0x82168FF8;
	sub_820E1BA8(ctx, base);
	// lfs f0,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,72(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// fsubs f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// bl 0x820e0778
	ctx.lr = 0x8216900C;
	sub_820E0778(ctx, base);
	// lfs f0,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,304(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 304, temp.u32);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lfs f0,4(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,308(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 308, temp.u32);
	// lfs f0,8(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,312(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 312, temp.u32);
	// stfs f30,316(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 316, temp.u32);
	// bl 0x820e1df8
	ctx.lr = 0x82169038;
	sub_820E1DF8(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822007a8
	ctx.lr = 0x82169044;
	sub_822007A8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f1,44(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 44);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82200818
	ctx.lr = 0x82169050;
	sub_82200818(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f1,27848(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 27848);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82200838
	ctx.lr = 0x82169060;
	sub_82200838(ctx, base);
	// stw r23,20(r31)
	REX_STORE_U32(r31.u32 + 20, r23.u32);
loc_82169064:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x8216920c
	if (!ctx.cr6.eq) goto loc_8216920C;
	// lwz r11,12(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 12);
	// rlwinm. r10,r11,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82169094
	if (ctx.cr0.eq) goto loc_82169094;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
	// bge 0x821690fc
	if (!ctx.cr0.lt) goto loc_821690FC;
	// stw r20,36(r31)
	REX_STORE_U32(r31.u32 + 36, r20.u32);
	// b 0x821690fc
	goto loc_821690FC;
loc_82169094:
	// rlwinm. r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821690dc
	if (ctx.cr0.eq) goto loc_821690DC;
	// lwz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 36);
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r10,8
	ctx.r9.s64 = ctx.r10.s64 + 8;
	// stw r10,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r10.u32);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821690fc
	if (ctx.cr6.lt) goto loc_821690FC;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// mr r10,r20
	ctx.r10.u64 = r20.u64;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfc r8,r11,r20
	ctx.xer.ca = r20.u32 >= ctx.r11.u32;
	ctx.r8.u64 = r20.u64 - ctx.r11.u64;
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfe r10,r10,r9
	temp.u8 = (~ctx.r10.u32 + ctx.r9.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
	// b 0x821690fc
	goto loc_821690FC;
loc_821690DC:
	// lwz r11,4(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 4);
	// andi. r11,r11,16416
	ctx.r11.u64 = ctx.r11.u64 & 16416;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821690fc
	if (ctx.cr0.eq) goto loc_821690FC;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x82101d68
	ctx.lr = 0x821690F4;
	sub_82101D68(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_821690FC:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// lwz r10,116(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 116);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// mr r30,r9
	r30.u64 = ctx.r9.u64;
	// ble cr6,0x82169118
	if (!ctx.cr6.gt) goto loc_82169118;
	// mr r30,r10
	r30.u64 = ctx.r10.u64;
loc_82169118:
	// addi r10,r11,30
	ctx.r10.s64 = ctx.r11.s64 + 30;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r6,r11,r30
	ctx.r6.u64 = r30.u64 - ctx.r11.u64;
	// add r5,r10,r31
	ctx.r5.u64 = ctx.r10.u64 + r31.u64;
	// lfs f2,-12964(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -12964);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,-10764(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -10764);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82167828
	ctx.lr = 0x8216913C;
	sub_82167828(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f30,-10768(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -10768);
	f30.f64 = double(temp.f32);
	// lfd f31,-10800(r10)
	f31.u64 = REX_LOAD_U64(ctx.r10.u32 + -10800);
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821691ac
	if (!ctx.cr6.gt) goto loc_821691AC;
	// lwz r11,1856(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 1856);
	// stfd f31,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, f31.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// rlwinm r11,r11,29,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x3;
	// stfs f30,20(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// li r7,-1
	ctx.r7.s64 = -1;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// std r11,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r11.u64);
	// lfd f13,120(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// lfs f0,-10772(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -10772);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r11,-10668
	ctx.r5.s64 = ctx.r11.s64 + -10668;
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// fsubs f2,f0,f13
	ctx.f2.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// bl 0x821eaf80
	ctx.lr = 0x821691AC;
	sub_821EAF80(ctx, base);
loc_821691AC:
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8216920c
	if (!ctx.cr6.lt) goto loc_8216920C;
	// lwz r11,1856(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 1856);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stfd f31,40(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 40, f31.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// rlwinm r11,r11,29,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x3;
	// stfs f30,20(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// std r11,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r11.u64);
	// li r7,-1
	ctx.r7.s64 = -1;
	// lfs f0,-10776(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -10776);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r9,-10684
	ctx.r5.s64 = ctx.r9.s64 + -10684;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// lfd f13,120(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fadds f2,f13,f0
	ctx.f2.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// bl 0x821eaf80
	ctx.lr = 0x8216920C;
	sub_821EAF80(ctx, base);
loc_8216920C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmpw cr6,r18,r11
	ctx.cr6.compare<int32_t>(r18.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8216921c
	if (ctx.cr6.eq) goto loc_8216921C;
	// stw r20,20(r31)
	REX_STORE_U32(r31.u32 + 20, r20.u32);
loc_8216921C:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
loc_82169228:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// addi r12,r1,-120
	ctx.r12.s64 = ctx.r1.s64 + -120;
	// bl 0x822d4f6c
	ctx.lr = 0x82169238;
	// b 0x822d4eb0
	return;
}

DEFINE_REX_FUNC(sub_821CAF78) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f0,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,5680(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 5680, temp.u32);
	// lhz r11,604(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 604);
	// cmplwi cr6,r11,17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 17, ctx.xer);
	// beq cr6,0x821cb058
	if (ctx.cr6.eq) goto loc_821CB058;
	// lwz r11,15908(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 15908);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821cb09c
	if (!ctx.cr6.eq) goto loc_821CB09C;
	// lwz r11,10140(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10140);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// rlwinm r11,r11,14,0,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0xFFFFC000;
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f13,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r10,r11,20092
	ctx.r10.s64 = ctx.r11.s64 + 20092;
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lfs f0,20140(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20140);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10484(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 10484, temp.u32);
	// lfs f0,20144(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20144);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10488(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 10488, temp.u32);
	// lfs f0,20148(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10492(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 10492, temp.u32);
	// stfs f13,10496(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 10496, temp.u32);
	// lwz r11,10140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 10140);
	// rlwinm r11,r11,14,0,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0xFFFFC000;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// addi r4,r11,20028
	ctx.r4.s64 = ctx.r11.s64 + 20028;
	// bl 0x820e0250
	ctx.lr = 0x821CB024;
	sub_820E0250(ctx, base);
	// lwz r11,10140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 10140);
	// addi r30,r31,10324
	r30.s64 = r31.s64 + 10324;
	// rlwinm r11,r11,14,0,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0xFFFFC000;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r5,r11,20156
	ctx.r5.s64 = ctx.r11.s64 + 20156;
	// bl 0x820e0590
	ctx.lr = 0x821CB044;
	sub_820E0590(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820e0590
	ctx.lr = 0x821CB054;
	sub_820E0590(ctx, base);
	// b 0x821cb09c
	goto loc_821CB09C;
loc_821CB058:
	// lwz r11,10140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 10140);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r31,10324
	ctx.r3.s64 = r31.s64 + 10324;
	// rlwinm r11,r11,14,0,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0xFFFFC000;
	// addi r4,r31,9940
	ctx.r4.s64 = r31.s64 + 9940;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// lfs f0,1992(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r10,r11,20092
	ctx.r10.s64 = ctx.r11.s64 + 20092;
	// lfs f13,20140(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20140);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,10484(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 10484, temp.u32);
	// lfs f13,20144(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20144);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,10488(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 10488, temp.u32);
	// lfs f13,20148(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20148);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,10492(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 10492, temp.u32);
	// stfs f0,10496(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 10496, temp.u32);
	// bl 0x822d4fa0
	ctx.lr = 0x821CB09C;
	sub_822D4FA0(ctx, base);
loc_821CB09C:
	// addi r11,r31,10324
	ctx.r11.s64 = r31.s64 + 10324;
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r11,15908(r31)
	REX_STORE_U32(r31.u32 + 15908, ctx.r11.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,21
	ctx.r4.s64 = 21;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821bf940
	ctx.lr = 0x821CB0B8;
	sub_821BF940(ctx, base);
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

DEFINE_REX_FUNC(sub_821D2F78) {
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
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// addi r31,r11,-7176
	r31.s64 = ctx.r11.s64 + -7176;
	// addi r30,r10,13128
	r30.s64 = ctx.r10.s64 + 13128;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821d2fc0
	if (!ctx.cr6.eq) goto loc_821D2FC0;
	// lbz r11,1888(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 1888);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821d2fc0
	if (!ctx.cr0.eq) goto loc_821D2FC0;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,98(r31)
	REX_STORE_U16(r31.u32 + 98, ctx.r11.u16);
	// stw r10,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r10.u32);
loc_821D2FC0:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821d48f0
	ctx.lr = 0x821D2FC8;
	sub_821D48F0(ctx, base);
	// bl 0x821d5140
	ctx.lr = 0x821D2FCC;
	sub_821D5140(ctx, base);
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,-8948(r10)
	REX_STORE_U32(ctx.r10.u32 + -8948, ctx.r11.u32);
	// lbz r11,1888(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 1888);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821d2fec
	if (ctx.cr0.eq) goto loc_821D2FEC;
	// li r3,5
	ctx.r3.s64 = 5;
	// b 0x821d300c
	goto loc_821D300C;
loc_821D2FEC:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r3,-1
	ctx.r3.s64 = -1;
	// clrlwi r30,r11,31
	r30.u64 = ctx.r11.u32 & 0x1;
	// bl 0x821d1678
	ctx.lr = 0x821D2FFC;
	sub_821D1678(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// li r3,11
	ctx.r3.s64 = 11;
	// bne cr6,0x821d300c
	if (!ctx.cr6.eq) goto loc_821D300C;
	// li r3,12
	ctx.r3.s64 = 12;
loc_821D300C:
	// bl 0x821d4518
	ctx.lr = 0x821D3010;
	sub_821D4518(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,1996(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1992(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,7840(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 7840);
	// addi r10,r11,108
	ctx.r10.s64 = ctx.r11.s64 + 108;
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
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_821D77E0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r10,r11,432
	ctx.r10.s64 = ctx.r11.s64 + 432;
	// lha r11,30(r10)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r10.u32 + 30));
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x821d784c
	if (ctx.cr6.eq) goto loc_821D784C;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x821d784c
	if (ctx.cr6.eq) goto loc_821D784C;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x821d7858
	if (!ctx.cr6.eq) goto loc_821D7858;
	// lwz r11,80(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821d7858
	if (ctx.cr6.eq) goto loc_821D7858;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x821d7844
	if (ctx.cr6.eq) goto loc_821D7844;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x821d7844
	if (ctx.cr6.eq) goto loc_821D7844;
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// beq cr6,0x821d7844
	if (ctx.cr6.eq) goto loc_821D7844;
	// cmpwi cr6,r3,272
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 272, ctx.xer);
	// beq cr6,0x821d7844
	if (ctx.cr6.eq) goto loc_821D7844;
	// cmpwi cr6,r3,526
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 526, ctx.xer);
	// beq cr6,0x821d7844
	if (ctx.cr6.eq) goto loc_821D7844;
	// cmpwi cr6,r3,2064
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2064, ctx.xer);
	// bne cr6,0x821d7858
	if (!ctx.cr6.eq) goto loc_821D7858;
loc_821D7844:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_821D784C:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// beq cr6,0x821d7844
	if (ctx.cr6.eq) goto loc_821D7844;
loc_821D7858:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821D8C38) {
	REX_FUNC_PROLOGUE();
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
	// lwz r10,16612(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16612);
	// lwz r11,16556(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16556);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r10,16612(r3)
	REX_STORE_U32(ctx.r3.u32 + 16612, ctx.r10.u32);
	// stw r11,16556(r3)
	REX_STORE_U32(ctx.r3.u32 + 16556, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821D9068) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r3,16472
	ctx.r10.s64 = ctx.r3.s64 + 16472;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821D9078:
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r11,7(r10)
	REX_STORE_U8(ctx.r10.u32 + 7, ctx.r11.u8);
	// stbu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x821d9078
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821D9078;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821D98A0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lbz r10,18(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 18);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x821d98c0
	if (ctx.cr0.eq) goto loc_821D98C0;
loc_821D98B4:
	// li r10,9999
	ctx.r10.s64 = 9999;
	// li r9,9999
	ctx.r9.s64 = 9999;
	// b 0x821d996c
	goto loc_821D996C;
loc_821D98C0:
	// lha r10,30(r11)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 30));
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x821d994c
	if (ctx.cr6.eq) goto loc_821D994C;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x821d9928
	if (ctx.cr6.eq) goto loc_821D9928;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x821d98b4
	if (ctx.cr6.eq) goto loc_821D98B4;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x821d991c
	if (ctx.cr6.eq) goto loc_821D991C;
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// beq cr6,0x821d98b4
	if (ctx.cr6.eq) goto loc_821D98B4;
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// beq cr6,0x821d9900
	if (ctx.cr6.eq) goto loc_821D9900;
	// cmpwi cr6,r10,12
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 12, ctx.xer);
	// beq cr6,0x821d98b4
	if (ctx.cr6.eq) goto loc_821D98B4;
	// blr 
	return;
loc_821D9900:
	// lwz r10,496(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 496);
	// li r8,11
	ctx.r8.s64 = 11;
	// li r9,50
	ctx.r9.s64 = 50;
	// stw r8,536(r11)
	REX_STORE_U32(ctx.r11.u32 + 536, ctx.r8.u32);
	// sth r10,32(r11)
	REX_STORE_U16(ctx.r11.u32 + 32, ctx.r10.u16);
	// stw r10,516(r11)
	REX_STORE_U32(ctx.r11.u32 + 516, ctx.r10.u32);
	// b 0x821d9970
	goto loc_821D9970;
loc_821D991C:
	// li r10,5
	ctx.r10.s64 = 5;
	// li r9,5
	ctx.r9.s64 = 5;
	// b 0x821d996c
	goto loc_821D996C;
loc_821D9928:
	// lis r9,-32173
	ctx.r9.s64 = -2108489728;
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// addi r9,r9,-7280
	ctx.r9.s64 = ctx.r9.s64 + -7280;
	// mulli r10,r10,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(12));
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lbzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// stw r10,520(r11)
	REX_STORE_U32(ctx.r11.u32 + 520, ctx.r10.u32);
	// stw r10,536(r11)
	REX_STORE_U32(ctx.r11.u32 + 536, ctx.r10.u32);
	// blr 
	return;
loc_821D994C:
	// lbz r10,2970(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 2970);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x821d9964
	if (ctx.cr0.eq) goto loc_821D9964;
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,3
	ctx.r9.s64 = 3;
	// b 0x821d996c
	goto loc_821D996C;
loc_821D9964:
	// li r10,8
	ctx.r10.s64 = 8;
	// li r9,8
	ctx.r9.s64 = 8;
loc_821D996C:
	// stw r10,536(r11)
	REX_STORE_U32(ctx.r11.u32 + 536, ctx.r10.u32);
loc_821D9970:
	// stw r9,520(r11)
	REX_STORE_U32(ctx.r11.u32 + 520, ctx.r9.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821DDBB8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lwz r3,5448(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 5448);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821DDE20) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,432
	ctx.r10.s64 = ctx.r10.s64 + 432;
	// sth r11,426(r10)
	REX_STORE_U16(ctx.r10.u32 + 426, ctx.r11.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821DE0A0) {
	REX_FUNC_PROLOGUE();
	// cmpwi cr6,r3,33
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 33, ctx.xer);
	// ble cr6,0x821de0ac
	if (!ctx.cr6.gt) goto loc_821DE0AC;
	// li r3,33
	ctx.r3.s64 = 33;
loc_821DE0AC:
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,-5784
	ctx.r11.s64 = ctx.r11.s64 + -5784;
	// lhax r3,r10,r11
	ctx.r3.s64 = int16_t(REX_LOAD_U16(ctx.r10.u32 + ctx.r11.u32));
	// b 0x821dde50
	sub_821DDE50(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821DF4A0) {
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
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r9,-32166
	ctx.r9.s64 = -2108030976;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,-32480(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,5448(r9)
	REX_STORE_U32(ctx.r9.u32 + 5448, ctx.r10.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f0,15632(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 15632);
	ctx.f0.f64 = double(temp.f32);
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// lfs f13,26932(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 26932);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,92(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 92, temp.u32);
	// lwz r3,80(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// stfs f13,96(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 96, temp.u32);
	// bl 0x821df398
	ctx.lr = 0x821DF4F0;
	sub_821DF398(ctx, base);
	// stw r3,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r3.u32);
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,80(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 80);
	// bl 0x821dde50
	ctx.lr = 0x821DF500;
	sub_821DDE50(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// li r3,64
	ctx.r3.s64 = 64;
	// cmpwi cr6,r11,88
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 88, ctx.xer);
	// blt cr6,0x821df548
	if (ctx.cr6.lt) goto loc_821DF548;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821dcf00
	ctx.lr = 0x821DF520;
	sub_821DCF00(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x821df544
	if (ctx.cr6.eq) goto loc_821DF544;
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// beq cr6,0x821df53c
	if (ctx.cr6.eq) goto loc_821DF53C;
	// li r3,63
	ctx.r3.s64 = 63;
	// b 0x821df548
	goto loc_821DF548;
loc_821DF53C:
	// li r3,65
	ctx.r3.s64 = 65;
	// b 0x821df548
	goto loc_821DF548;
loc_821DF544:
	// li r3,62
	ctx.r3.s64 = 62;
loc_821DF548:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8212eb40
	ctx.lr = 0x821DF558;
	sub_8212EB40(ctx, base);
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

DEFINE_REX_FUNC(sub_821E1E68) {
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
	// bne 0x821e1ef8
	if (!ctx.cr0.eq) goto loc_821E1EF8;
	// lbz r10,2973(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 2973);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x821e1ef8
	if (!ctx.cr0.eq) goto loc_821E1EF8;
	// lhz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x821e1ef8
	if (!ctx.cr6.eq) goto loc_821E1EF8;
	// lha r10,30(r11)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 30));
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// blt cr6,0x821e1ea8
	if (ctx.cr6.lt) goto loc_821E1EA8;
	// cmpwi cr6,r10,10
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10, ctx.xer);
	// ble cr6,0x821e1ef8
	if (!ctx.cr6.gt) goto loc_821E1EF8;
loc_821E1EA8:
	// lbz r10,6(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 6);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x821e1ef8
	if (!ctx.cr0.eq) goto loc_821E1EF8;
	// lbz r10,2(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 2);
	// lwz r11,2980(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 2980);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821e1ef8
	if (!ctx.cr6.eq) goto loc_821E1EF8;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// li r10,10
	ctx.r10.s64 = 10;
	// addi r9,r11,5608
	ctx.r9.s64 = ctx.r11.s64 + 5608;
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// lwz r11,4(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srawi r7,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 31;
	// stw r11,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
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
loc_821E1EF8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821E2FE0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,80(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r11,r11,35
	ctx.r11.s64 = ctx.r11.s64 + 35;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_821E3700) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	PPCRegister temp{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lis r10,-32173
	ctx.r10.s64 = -2108489728;
	// mulli r11,r4,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(12));
	// addi r10,r10,-4808
	ctx.r10.s64 = ctx.r10.s64 + -4808;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r7,r10,8
	ctx.r7.s64 = ctx.r10.s64 + 8;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfsx f13,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lfs f0,16016(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 16016);
	ctx.f0.f64 = double(temp.f32);
	// lis r31,-32256
	r31.s64 = -2113929216;
	// lfsx f12,r11,r7
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	ctx.f12.f64 = double(temp.f32);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f13,192(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 192, temp.u32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfsx f0,r11,r9
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,196(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 196, temp.u32);
	// lfs f0,1992(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,200(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 200, temp.u32);
	// lfsx f13,r11,r10
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// stfs f13,208(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 208, temp.u32);
	// lfsx f13,r11,r9
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,212(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 212, temp.u32);
	// stfs f0,216(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 216, temp.u32);
	// lfsx f13,r11,r10
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,224(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 224, temp.u32);
	// lfs f13,16012(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 16012);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f10,r11,r9
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f10.f64 = double(temp.f32);
	// fadds f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// stfs f10,228(r3)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r3.u32 + 228, temp.u32);
	// stfs f0,232(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 232, temp.u32);
	// lfsx f10,r11,r10
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f10.f64 = double(temp.f32);
	// fadds f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// stfs f11,240(r3)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r3.u32 + 240, temp.u32);
	// lfsx f11,r11,r9
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f11.f64 = double(temp.f32);
	// fadds f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// lfs f13,26552(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 26552);
	ctx.f13.f64 = double(temp.f32);
	// stw r4,260(r3)
	REX_STORE_U32(ctx.r3.u32 + 260, ctx.r4.u32);
	// stfs f11,244(r3)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r3.u32 + 244, temp.u32);
	// stfs f0,248(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 248, temp.u32);
	// stfs f12,160(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 160, temp.u32);
	// stfs f13,164(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 164, temp.u32);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821E8370) {
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
	ctx.lr = 0x821E8378;
	// stfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -64, f30.u64);
	// stfd f31,-56(r1)
	REX_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// lfs f0,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// lfs f30,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	f30.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x821e83b0
	if (ctx.cr6.gt) goto loc_821E83B0;
	// fmr f31,f30
	f31.f64 = f30.f64;
loc_821E83B0:
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// li r4,6
	ctx.r4.s64 = 6;
	// addi r29,r11,-32032
	r29.s64 = ctx.r11.s64 + -32032;
	// addi r3,r29,332
	ctx.r3.s64 = r29.s64 + 332;
	// bl 0x821f1818
	ctx.lr = 0x821E83C4;
	sub_821F1818(ctx, base);
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x821E83D4;
	sub_822D4FA0(ctx, base);
	// stfs f31,72(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 72, temp.u32);
	// stw r28,64(r31)
	REX_STORE_U32(r31.u32 + 64, r28.u32);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// stw r27,68(r31)
	REX_STORE_U32(r31.u32 + 68, r27.u32);
	// lfs f0,52(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,56(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f12,48(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f30,92(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r11,7792(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 7792);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r4,1644(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1644);
	// bl 0x820e1df8
	ctx.lr = 0x821E8414;
	sub_820E1DF8(ctx, base);
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 / f31.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,16908(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16908);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x821e8430
	if (!ctx.cr6.lt) goto loc_821E8430;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_821E8430:
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r31,76
	ctx.r4.s64 = r31.s64 + 76;
	// addi r3,r29,332
	ctx.r3.s64 = r29.s64 + 332;
	// bl 0x821f1840
	ctx.lr = 0x821E8440;
	sub_821F1840(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_821EBD80) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f1,5016(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 5016, temp.u32);
	// lfs f0,28452(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28452);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f0,5012(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 5012, temp.u32);
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r11,-12(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x821ebdb0
	if (!ctx.cr6.lt) goto loc_821EBDB0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x821ebdbc
	goto loc_821EBDBC;
loc_821EBDB0:
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// ble cr6,0x821ebdbc
	if (!ctx.cr6.gt) goto loc_821EBDBC;
	// li r11,255
	ctx.r11.s64 = 255;
loc_821EBDBC:
	// stw r11,5020(r3)
	REX_STORE_U32(ctx.r3.u32 + 5020, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821ED068) {
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
	ctx.lr = 0x821ED070;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lwz r4,0(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r28,r11,-32032
	r28.s64 = ctx.r11.s64 + -32032;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821f28a0
	ctx.lr = 0x821ED08C;
	sub_821F28A0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x821f2908
	ctx.lr = 0x821ED098;
	sub_821F2908(ctx, base);
	// lbz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 28);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lfs f1,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r4,r11,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x821f20e8
	ctx.lr = 0x821ED0B4;
	sub_821F20E8(ctx, base);
	// addi r30,r31,176
	r30.s64 = r31.s64 + 176;
	// lwz r27,16(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// ble cr6,0x821ed1b4
	if (!ctx.cr6.gt) goto loc_821ED1B4;
loc_821ED0C4:
	// lwz r29,24(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 24);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x821ed1ac
	if (ctx.cr6.eq) goto loc_821ED1AC;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821f2bf0
	ctx.lr = 0x821ED0E0;
	sub_821F2BF0(ctx, base);
	// lbz r11,30(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 30);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821ed11c
	if (ctx.cr0.eq) goto loc_821ED11C;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x821ed17c
	if (!ctx.cr6.gt) goto loc_821ED17C;
loc_821ED0FC:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x821ecff0
	ctx.lr = 0x821ED108;
	sub_821ECFF0(ctx, base);
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// addi r6,r6,40
	ctx.r6.s64 = ctx.r6.s64 + 40;
	// addi r30,r30,28
	r30.s64 = r30.s64 + 28;
	// bgt 0x821ed0fc
	if (ctx.cr0.gt) goto loc_821ED0FC;
	// b 0x821ed17c
	goto loc_821ED17C;
loc_821ED11C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x821ecff0
	ctx.lr = 0x821ED128;
	sub_821ECFF0(ctx, base);
	// addi r4,r30,28
	ctx.r4.s64 = r30.s64 + 28;
	// addi r3,r6,40
	ctx.r3.s64 = ctx.r6.s64 + 40;
	// bl 0x821ecff0
	ctx.lr = 0x821ED134;
	sub_821ECFF0(ctx, base);
	// addic. r5,r29,-2
	ctx.xer.ca = r29.u32 > 1;
	ctx.r5.s64 = r29.s64 + -2;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// addi r3,r6,80
	ctx.r3.s64 = ctx.r6.s64 + 80;
	// addi r30,r30,56
	r30.s64 = r30.s64 + 56;
	// ble 0x821ed17c
	if (!ctx.cr0.gt) goto loc_821ED17C;
loc_821ED144:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x821ecff0
	ctx.lr = 0x821ED14C;
	sub_821ECFF0(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwz r9,24(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// addi r30,r30,28
	r30.s64 = r30.s64 + 28;
	// lwz r8,28(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// stw r11,-64(r3)
	REX_STORE_U32(ctx.r3.u32 + -64, ctx.r11.u32);
	// stw r10,-60(r3)
	REX_STORE_U32(ctx.r3.u32 + -60, ctx.r10.u32);
	// stw r9,-56(r3)
	REX_STORE_U32(ctx.r3.u32 + -56, ctx.r9.u32);
	// stw r8,-52(r3)
	REX_STORE_U32(ctx.r3.u32 + -52, ctx.r8.u32);
	// addi r3,r3,40
	ctx.r3.s64 = ctx.r3.s64 + 40;
	// bgt 0x821ed144
	if (ctx.cr0.gt) goto loc_821ED144;
loc_821ED17C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lhz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 12);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r5,24(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 24);
	// mulli r11,r11,144
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(144));
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x821f2c50
	ctx.lr = 0x821ED1AC;
	sub_821F2C50(ctx, base);
loc_821ED1AC:
	// addic. r27,r27,-1
	ctx.xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// bgt 0x821ed0c4
	if (ctx.cr0.gt) goto loc_821ED0C4;
loc_821ED1B4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_821F23B8) {
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
	ctx.lr = 0x821F23C0;
	// stfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -88, f30.u64);
	// stfd f31,-80(r1)
	REX_STORE_U64(ctx.r1.u32 + -80, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f31,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f31.f64 = double(temp.f32);
	// stfs f31,64(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 64, temp.u32);
	// stfs f31,60(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 60, temp.u32);
	// bl 0x822c8b90
	ctx.lr = 0x821F23E8;
	sub_822C8B90(ctx, base);
	// bl 0x82428fe8
	ctx.lr = 0x821F23EC;
	sub_82428FE8(ctx, base);
	// bl 0x822c8800
	ctx.lr = 0x821F23F0;
	sub_822C8800(ctx, base);
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lbz r11,31648(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 31648);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821f240c
	if (!ctx.cr0.eq) goto loc_821F240C;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r3,r11,31656
	ctx.r3.s64 = ctx.r11.s64 + 31656;
	// bl 0x82208828
	ctx.lr = 0x821F240C;
	sub_82208828(ctx, base);
loc_821F240C:
	// bl 0x822a4e70
	ctx.lr = 0x821F2410;
	sub_822A4E70(ctx, base);
	// lis r30,-32163
	r30.s64 = -2107834368;
	// lis r5,16
	ctx.r5.s64 = 1048576;
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,31492(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 31492);
	// bl 0x822a9898
	ctx.lr = 0x821F2424;
	sub_822A9898(ctx, base);
	// li r3,3056
	ctx.r3.s64 = 3056;
	// bl 0x822c80d0
	ctx.lr = 0x821F242C;
	sub_822C80D0(ctx, base);
	// li r24,0
	r24.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821f2440
	if (ctx.cr0.eq) goto loc_821F2440;
	// bl 0x822a1ea8
	ctx.lr = 0x821F243C;
	sub_822A1EA8(ctx, base);
	// b 0x821f2444
	goto loc_821F2444;
loc_821F2440:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
loc_821F2444:
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// lis r7,48
	ctx.r7.s64 = 3145728;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822a2a38
	ctx.lr = 0x821F245C;
	sub_822A2A38(ctx, base);
	// lwz r11,31492(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 31492);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,12
	ctx.r4.s64 = 12;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x822a1098
	ctx.lr = 0x821F2478;
	sub_822A1098(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x822a1098
	ctx.lr = 0x821F2488;
	sub_822A1098(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,2048
	ctx.r4.s64 = 2048;
	// lwz r3,2956(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 2956);
	// bl 0x822a5290
	ctx.lr = 0x821F249C;
	sub_822A5290(ctx, base);
	// bl 0x821f2160
	ctx.lr = 0x821F24A0;
	sub_821F2160(ctx, base);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-32040(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -32040);
	// bl 0x822c92a0
	ctx.lr = 0x821F24B0;
	sub_822C92A0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lhz r10,236(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 236);
	// sth r10,24(r31)
	REX_STORE_U16(r31.u32 + 24, ctx.r10.u16);
	// lhz r11,238(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 238);
	// sth r11,26(r31)
	REX_STORE_U16(r31.u32 + 26, ctx.r11.u16);
	// bne cr6,0x821f250c
	if (!ctx.cr6.eq) goto loc_821F250C;
	// li r3,192
	ctx.r3.s64 = 192;
	// bl 0x822c80d0
	ctx.lr = 0x821F24D8;
	sub_822C80D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821f24e8
	if (ctx.cr0.eq) goto loc_821F24E8;
	// bl 0x822a2f80
	ctx.lr = 0x821F24E4;
	sub_822A2F80(ctx, base);
	// b 0x821f24ec
	goto loc_821F24EC;
loc_821F24E8:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
loc_821F24EC:
	// stw r3,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r3.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// li r8,1
	ctx.r8.s64 = 1;
	// lhz r5,26(r31)
	ctx.r5.u64 = REX_LOAD_U16(r31.u32 + 26);
	// li r7,1
	ctx.r7.s64 = 1;
	// lhz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U16(r31.u32 + 24);
	// li r6,17
	ctx.r6.s64 = 17;
	// bl 0x822a3958
	ctx.lr = 0x821F250C;
	sub_822A3958(ctx, base);
loc_821F250C:
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// li r26,6
	r26.s64 = 6;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821f2680
	if (!ctx.cr6.eq) goto loc_821F2680;
	// li r3,432
	ctx.r3.s64 = 432;
	// bl 0x822c80d0
	ctx.lr = 0x821F2524;
	sub_822C80D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821f2534
	if (ctx.cr0.eq) goto loc_821F2534;
	// bl 0x822a4060
	ctx.lr = 0x821F2530;
	sub_822A4060(ctx, base);
	// b 0x821f2538
	goto loc_821F2538;
loc_821F2534:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
loc_821F2538:
	// stw r3,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r3.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x822a4120
	ctx.lr = 0x821F254C;
	sub_822A4120(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,0
	ctx.r4.s64 = 0;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// lfs f30,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	f30.f64 = double(temp.f32);
	// fmr f4,f30
	ctx.f4.f64 = f30.f64;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// stw r26,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, r26.u32);
	// lwz r3,40(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 40);
	// bl 0x822a4a30
	ctx.lr = 0x821F2578;
	sub_822A4A30(ctx, base);
	// lhz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 24);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lwz r3,40(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 40);
	// li r4,1
	ctx.r4.s64 = 1;
	// fmr f4,f30
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f30.f64;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// bl 0x822a4a30
	ctx.lr = 0x821F25A8;
	sub_822A4A30(ctx, base);
	// lhz r11,26(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 26);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,40(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 40);
	// fmr f4,f30
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f30.f64;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f2,f0
	ctx.f2.f64 = double(float(ctx.f0.f64));
	// bl 0x822a4a30
	ctx.lr = 0x821F25D8;
	sub_822A4A30(ctx, base);
	// lhz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 24);
	// li r4,3
	ctx.r4.s64 = 3;
	// lhz r10,26(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 26);
	// fmr f4,f30
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f30.f64;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lwz r3,40(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 40);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// frsp f2,f13
	ctx.f2.f64 = double(float(ctx.f13.f64));
	// bl 0x822a4a30
	ctx.lr = 0x821F261C;
	sub_822A4A30(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,40(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 40);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x822a4c18
	ctx.lr = 0x821F2630;
	sub_822A4C18(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,40(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 40);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// bl 0x822a4c18
	ctx.lr = 0x821F2644;
	sub_822A4C18(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,40(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 40);
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x822a4c18
	ctx.lr = 0x821F2658;
	sub_822A4C18(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,40(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 40);
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x822a4c18
	ctx.lr = 0x821F266C;
	sub_822A4C18(ctx, base);
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// stb r24,112(r11)
	REX_STORE_U8(ctx.r11.u32 + 112, r24.u8);
	// lwz r4,36(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 36);
	// lwz r3,40(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 40);
	// bl 0x822a3e58
	ctx.lr = 0x821F2680;
	sub_822A3E58(ctx, base);
loc_821F2680:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821f26d0
	if (!ctx.cr6.eq) goto loc_821F26D0;
	// li r3,144
	ctx.r3.s64 = 144;
	// bl 0x822c80d0
	ctx.lr = 0x821F2694;
	sub_822C80D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821f26a4
	if (ctx.cr0.eq) goto loc_821F26A4;
	// bl 0x8229d5f8
	ctx.lr = 0x821F26A0;
	sub_8229D5F8(ctx, base);
	// b 0x821f26a8
	goto loc_821F26A8;
loc_821F26A4:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
loc_821F26A8:
	// stw r3,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r3.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r7,17
	ctx.r7.s64 = 17;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// li r4,1
	ctx.r4.s64 = 1;
	// lhz r6,26(r31)
	ctx.r6.u64 = REX_LOAD_U16(r31.u32 + 26);
	// lhz r5,24(r31)
	ctx.r5.u64 = REX_LOAD_U16(r31.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821F26D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821F26D0:
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// li r11,2048
	ctx.r11.s64 = 2048;
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r11,-6272(r10)
	REX_STORE_U32(ctx.r10.u32 + -6272, ctx.r11.u32);
	// lhz r4,26(r31)
	ctx.r4.u64 = REX_LOAD_U16(r31.u32 + 26);
	// lhz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U16(r31.u32 + 24);
	// bl 0x821f15c0
	ctx.lr = 0x821F26EC;
	sub_821F15C0(ctx, base);
	// stw r3,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r3.u32);
	// addi r3,r31,332
	ctx.r3.s64 = r31.s64 + 332;
	// bl 0x821f16f8
	ctx.lr = 0x821F26F8;
	sub_821F16F8(ctx, base);
	// mr r29,r24
	r29.u64 = r24.u64;
	// li r25,1
	r25.s64 = 1;
loc_821F2700:
	// li r3,1312
	ctx.r3.s64 = 1312;
	// bl 0x822c80d0
	ctx.lr = 0x821F2708;
	sub_822C80D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821f2740
	if (ctx.cr0.eq) goto loc_821F2740;
	// li r11,3
	ctx.r11.s64 = 3;
	// addi r27,r3,16
	r27.s64 = ctx.r3.s64 + 16;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r30,2
	r30.s64 = 2;
	// mr r28,r27
	r28.u64 = r27.u64;
loc_821F2724:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822a4060
	ctx.lr = 0x821F272C;
	sub_822A4060(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r28,r28,432
	r28.s64 = r28.s64 + 432;
	// bge 0x821f2724
	if (!ctx.cr0.lt) goto loc_821F2724;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// b 0x821f2744
	goto loc_821F2744;
loc_821F2740:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
loc_821F2744:
	// addi r11,r29,1
	ctx.r11.s64 = r29.s64 + 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r30,r11,2,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,16384
	ctx.r4.s64 = 16384;
	// stwx r3,r30,r31
	REX_STORE_U32(r30.u32 + r31.u32, ctx.r3.u32);
	// bl 0x822a4120
	ctx.lr = 0x821F2760;
	sub_822A4120(ctx, base);
	// lwzx r11,r30,r31
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + r31.u32);
	// lis r4,0
	ctx.r4.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,11
	ctx.r5.s64 = 11;
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// stb r24,112(r11)
	REX_STORE_U8(ctx.r11.u32 + 112, r24.u8);
	// lwzx r11,r30,r31
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + r31.u32);
	// stw r26,104(r11)
	REX_STORE_U32(ctx.r11.u32 + 104, r26.u32);
	// lwzx r11,r30,r31
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + r31.u32);
	// addi r3,r11,432
	ctx.r3.s64 = ctx.r11.s64 + 432;
	// bl 0x822a4120
	ctx.lr = 0x821F278C;
	sub_822A4120(ctx, base);
	// lwzx r11,r30,r31
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + r31.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,15
	ctx.r5.s64 = 15;
	// li r4,16384
	ctx.r4.s64 = 16384;
	// stb r24,544(r11)
	REX_STORE_U8(ctx.r11.u32 + 544, r24.u8);
	// lwzx r11,r30,r31
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + r31.u32);
	// stw r26,536(r11)
	REX_STORE_U32(ctx.r11.u32 + 536, r26.u32);
	// lwzx r11,r30,r31
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + r31.u32);
	// addi r3,r11,864
	ctx.r3.s64 = ctx.r11.s64 + 864;
	// bl 0x822a4120
	ctx.lr = 0x821F27B4;
	sub_822A4120(ctx, base);
	// addi r11,r29,1
	ctx.r11.s64 = r29.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// lwzx r11,r30,r31
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + r31.u32);
	// stb r24,976(r11)
	REX_STORE_U8(ctx.r11.u32 + 976, r24.u8);
	// lwzx r11,r30,r31
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + r31.u32);
	// stw r26,968(r11)
	REX_STORE_U32(ctx.r11.u32 + 968, r26.u32);
	// lwzx r11,r30,r31
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + r31.u32);
	// stb r25,977(r11)
	REX_STORE_U8(ctx.r11.u32 + 977, r25.u8);
	// blt cr6,0x821f2700
	if (ctx.cr6.lt) goto loc_821F2700;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r25,32(r31)
	REX_STORE_U8(r31.u32 + 32, r25.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_82204C18) {
	REX_FUNC_PROLOGUE();
	// b 0x822d5870
	sub_822D5870(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82204C48) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82204cfc
	if (ctx.cr6.eq) goto loc_82204CFC;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lfs f13,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,7840(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 7840);
	// lfs f12,2000(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2000);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f13,f12,f0
	ctx.f11.f64 = double(float(std::fma(ctx.f13.f64, ctx.f12.f64, ctx.f0.f64)));
	// lbz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 76);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82204cd8
	if (ctx.cr0.eq) goto loc_82204CD8;
	// rlwinm. r11,r3,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82204cd8
	if (ctx.cr0.eq) goto loc_82204CD8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// rlwinm. r10,r3,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f0,-18808(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -18808);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,0(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// fnmsubs f13,f13,f12,f11
	ctx.f13.f64 = double(float(-std::fma(ctx.f13.f64, ctx.f12.f64, -ctx.f11.f64)));
	// stw r11,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// stw r11,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// stfs f13,0(r4)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// stw r11,12(r4)
	REX_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// beq 0x82204d60
	if (ctx.cr0.eq) goto loc_82204D60;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,28664(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28664);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fmadds f0,f12,f0,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f13.f64)));
	// b 0x82204d5c
	goto loc_82204D5C;
loc_82204CD8:
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// stw r11,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// stw r11,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// stw r11,12(r4)
	REX_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// b 0x82204d60
	goto loc_82204D60;
loc_82204CFC:
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// stw r11,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// stw r11,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// stw r11,12(r4)
	REX_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// lwz r11,7840(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 7840);
	// lbz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 76);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82204d60
	if (ctx.cr0.eq) goto loc_82204D60;
	// rlwinm. r11,r3,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82204d60
	if (ctx.cr0.eq) goto loc_82204D60;
	// rlwinm. r11,r3,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82204d60
	if (ctx.cr0.eq) goto loc_82204D60;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,28664(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28664);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f13,-18808(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -18808);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f12,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f13.f64, ctx.f0.f64)));
loc_82204D5C:
	// stfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 0, temp.u32);
loc_82204D60:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822097F8) {
	REX_FUNC_PROLOGUE();
	// b 0x824d403c
	__imp__XamContentCreateEnumerator(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822099F8) {
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
	ctx.lr = 0x82209A00;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r31,r8
	r31.u64 = ctx.r8.u64;
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// beq cr6,0x82209a78
	if (ctx.cr6.eq) goto loc_82209A78;
	// cmplwi cr6,r7,2
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 2, ctx.xer);
	// beq cr6,0x82209a70
	if (ctx.cr6.eq) goto loc_82209A70;
	// cmplwi cr6,r7,3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 3, ctx.xer);
	// beq cr6,0x82209a68
	if (ctx.cr6.eq) goto loc_82209A68;
	// cmplwi cr6,r7,4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 4, ctx.xer);
	// beq cr6,0x82209a60
	if (ctx.cr6.eq) goto loc_82209A60;
	// cmplwi cr6,r7,5
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 5, ctx.xer);
	// bne cr6,0x82209a4c
	if (!ctx.cr6.eq) goto loc_82209A4C;
	// rlwinm. r11,r4,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r30,4
	r30.s64 = 4;
	// bne 0x82209a7c
	if (!ctx.cr0.eq) goto loc_82209A7C;
loc_82209A4C:
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,13
	ctx.r3.u64 = ctx.r3.u64 | 13;
	// bl 0x8220a840
	ctx.lr = 0x82209A58;
	sub_8220A840(ctx, base);
loc_82209A58:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82209be4
	goto loc_82209BE4;
loc_82209A60:
	// li r30,3
	r30.s64 = 3;
	// b 0x82209a7c
	goto loc_82209A7C;
loc_82209A68:
	// li r30,1
	r30.s64 = 1;
	// b 0x82209a7c
	goto loc_82209A7C;
loc_82209A70:
	// li r30,5
	r30.s64 = 5;
	// b 0x82209a7c
	goto loc_82209A7C;
loc_82209A78:
	// li r30,2
	r30.s64 = 2;
loc_82209A7C:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x824d417c
	ctx.lr = 0x82209A88;
	__imp__RtlInitAnsiString(ctx, base);
	// lhz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x82209aa8
	if (!ctx.cr6.gt) goto loc_82209AA8;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// li r29,1
	r29.s64 = 1;
	// lbz r11,-1(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// cmplwi cr6,r11,92
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 92, ctx.xer);
	// beq cr6,0x82209aac
	if (ctx.cr6.eq) goto loc_82209AAC;
loc_82209AA8:
	// li r29,0
	r29.s64 = 0;
loc_82209AAC:
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// rlwinm r9,r31,0,4,4
	ctx.r9.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x8000000;
	// rlwimi r11,r31,28,4,4
	ctx.r11.u64 = (__builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 28) & 0x8000000) | (ctx.r11.u64 & 0xFFFFFFFFF7FFFFFF);
	// rlwinm r8,r31,0,3,3
	ctx.r8.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x10000000;
	// rlwinm r11,r11,31,3,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1C000000;
	// rlwinm r10,r31,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x2000000;
	// rlwinm r11,r11,0,5,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFF7FFFFFF;
	// li r7,-3
	ctx.r7.s64 = -3;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// not r9,r31
	ctx.r9.u64 = ~r31.u64;
	// stw r7,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r7.u32);
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r9,r9,7,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0x20;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// li r6,64
	ctx.r6.s64 = 64;
	// rlwinm r11,r11,26,6,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFF;
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// stw r6,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r6.u32);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwinm. r8,r31,0,5,5
	ctx.r8.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r7,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r7.u32);
	// rlwinm r11,r11,21,11,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1FFFFF;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// beq 0x82209b14
	if (ctx.cr0.eq) goto loc_82209B14;
	// ori r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 4096;
	// oris r28,r28,1
	r28.u64 = r28.u64 | 65536;
loc_82209B14:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82209b20
	if (!ctx.cr6.eq) goto loc_82209B20;
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
loc_82209B20:
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lis r6,-32173
	ctx.r6.s64 = -2108489728;
	// oris r4,r28,16
	ctx.r4.u64 = r28.u64 | 1048576;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// andi. r8,r31,32679
	ctx.r8.u64 = r31.u64 & 32679;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lwz r11,4384(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 4384);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// ori r4,r4,128
	ctx.r4.u64 = ctx.r4.u64 | 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82209B5C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bge 0x82209bac
	if (!ctx.cr0.lt) goto loc_82209BAC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8220a840
	ctx.lr = 0x82209B6C;
	sub_8220A840(ctx, base);
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// ori r11,r11,53
	ctx.r11.u64 = ctx.r11.u64 | 53;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82209b84
	if (!ctx.cr6.eq) goto loc_82209B84;
	// li r3,80
	ctx.r3.s64 = 80;
	// b 0x82209ba4
	goto loc_82209BA4;
loc_82209B84:
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// ori r11,r11,186
	ctx.r11.u64 = ctx.r11.u64 | 186;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82209a58
	if (!ctx.cr6.eq) goto loc_82209A58;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// li r3,3
	ctx.r3.s64 = 3;
	// bne cr6,0x82209ba4
	if (!ctx.cr6.eq) goto loc_82209BA4;
	// li r3,5
	ctx.r3.s64 = 5;
loc_82209BA4:
	// bl 0x8220a618
	ctx.lr = 0x82209BA8;
	sub_8220A618(ctx, base);
	// b 0x82209a58
	goto loc_82209A58;
loc_82209BAC:
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r27,2
	ctx.cr6.compare<uint32_t>(r27.u32, 2, ctx.xer);
	// bne cr6,0x82209bc0
	if (!ctx.cr6.eq) goto loc_82209BC0;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82209bd0
	if (ctx.cr6.eq) goto loc_82209BD0;
loc_82209BC0:
	// cmplwi cr6,r27,4
	ctx.cr6.compare<uint32_t>(r27.u32, 4, ctx.xer);
	// bne cr6,0x82209bd8
	if (!ctx.cr6.eq) goto loc_82209BD8;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82209bd8
	if (!ctx.cr6.eq) goto loc_82209BD8;
loc_82209BD0:
	// li r3,183
	ctx.r3.s64 = 183;
	// b 0x82209bdc
	goto loc_82209BDC;
loc_82209BD8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82209BDC:
	// bl 0x8220a618
	ctx.lr = 0x82209BE0;
	sub_8220A618(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
loc_82209BE4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_822118B8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stw r4,28(r1)
	REX_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lfs f0,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10696(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 10696, temp.u32);
	// li r12,1
	ctx.r12.s64 = 1;
	// ld r10,32(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 32);
	// rldicr r12,r12,33,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 33) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r10,r12
	ctx.r11.u64 = ctx.r10.u64 | ctx.r12.u64;
	// std r11,32(r3)
	REX_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822122C8) {
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
	// lwz r8,20(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// srd r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r10.u8 & 0x7F));
	// rlwimi r8,r5,3,27,28
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0x18) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFE7);
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

DEFINE_REX_FUNC(sub_822135A8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r10,52(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r9,15332(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 15332);
	// lwz r8,15328(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 15328);
	// lwz r7,15320(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 15320);
	// lwz r6,15324(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 15324);
	// stw r11,13808(r3)
	REX_STORE_U32(ctx.r3.u32 + 13808, ctx.r11.u32);
	// stw r10,13812(r3)
	REX_STORE_U32(ctx.r3.u32 + 13812, ctx.r10.u32);
	// stw r9,13816(r3)
	REX_STORE_U32(ctx.r3.u32 + 13816, ctx.r9.u32);
	// stw r8,13820(r3)
	REX_STORE_U32(ctx.r3.u32 + 13820, ctx.r8.u32);
	// stw r7,13824(r3)
	REX_STORE_U32(ctx.r3.u32 + 13824, ctx.r7.u32);
	// stw r6,13828(r3)
	REX_STORE_U32(ctx.r3.u32 + 13828, ctx.r6.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82214CA8) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r4.u32);
	// stw r5,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82214938
	sub_82214938(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82215248) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82215250;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// rlwinm r30,r4,2,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,52(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x822152b4
	if (!ctx.cr6.gt) goto loc_822152B4;
	// bl 0x82215008
	ctx.lr = 0x82215278;
	sub_82215008(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r10,52(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 52);
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x822152b4
	if (!ctx.cr6.gt) goto loc_822152B4;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82213f28
	ctx.lr = 0x82215298;
	sub_82213F28(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x822152b4
	if (!ctx.cr0.eq) goto loc_822152B4;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r10,52(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 52);
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x822152b8
	if (ctx.cr6.gt) goto loc_822152B8;
loc_822152B4:
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
loc_822152B8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_822172C0) {
	REX_FUNC_PROLOGUE();
	// lhz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 0);
	// lhz r9,2(r4)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r4.u32 + 2);
	// rlwinm r10,r11,26,6,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFF;
	// rlwinm r11,r9,26,6,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x3FFFFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r9,1023
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1023, ctx.xer);
	// ble cr6,0x822172e4
	if (!ctx.cr6.gt) goto loc_822172E4;
	// li r11,1023
	ctx.r11.s64 = 1023;
loc_822172E4:
	// rlwinm r10,r10,1,15,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1FFFE;
	// rlwinm r11,r11,1,15,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1FFFE;
	// lhzx r9,r10,r5
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r5.u32);
	// rlwinm r9,r9,6,16,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFC0;
	// sth r9,0(r3)
	REX_STORE_U16(ctx.r3.u32 + 0, ctx.r9.u16);
	// lhzx r11,r11,r5
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r5.u32);
	// lhzx r10,r10,r5
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r5.u32);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// rlwinm r11,r11,6,16,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFC0;
	// sth r11,2(r3)
	REX_STORE_U16(ctx.r3.u32 + 2, ctx.r11.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82218460) {
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
	// lwz r3,40(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82218490
	if (ctx.cr6.eq) goto loc_82218490;
	// lis r4,-20096
	ctx.r4.s64 = -1317011456;
	// bl 0x823cd250
	ctx.lr = 0x82218488;
	sub_823CD250(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
loc_82218490:
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

DEFINE_REX_FUNC(sub_8221A820) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r11,r3,60
	ctx.r11.s64 = ctx.r3.s64 + 60;
loc_8221A824:
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
	// bne 0x8221a824
	if (!ctx.cr0.eq) goto loc_8221A824;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8221B808) {
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
	ctx.lr = 0x8221B810;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8222b8a0
	ctx.lr = 0x8221B824;
	sub_8222B8A0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82220368
	ctx.lr = 0x8221B830;
	sub_82220368(ctx, base);
	// li r28,-1
	r28.s64 = -1;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x8221b8c4
	if (!ctx.cr6.eq) goto loc_8221B8C4;
	// lwz r11,24584(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24584);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221b8c4
	if (!ctx.cr6.eq) goto loc_8221B8C4;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8221b860
	if (!ctx.cr6.gt) goto loc_8221B860;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82215008
	ctx.lr = 0x8221B860;
	sub_82215008(ctx, base);
loc_8221B860:
	// li r11,1401
	ctx.r11.s64 = 1401;
	// li r10,1
	ctx.r10.s64 = 1;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lis r11,-16380
	ctx.r11.s64 = -1073479680;
	// li r9,19
	ctx.r9.s64 = 19;
	// ori r11,r11,15360
	ctx.r11.u64 = ctx.r11.u64 | 15360;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,256
	ctx.r6.s64 = 256;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// lwz r11,11028(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 11028);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r11,r11,3
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// stwu r28,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r28.u32);
	ctx.r3.u32 = ea;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
loc_8221B8C4:
	// lwz r11,14000(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 14000);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221b900
	if (ctx.cr6.eq) goto loc_8221B900;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8221b900
	if (ctx.cr6.eq) goto loc_8221B900;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x8221b8f8
	if (ctx.cr6.eq) goto loc_8221B8F8;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// li r10,3
	ctx.r10.s64 = 3;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// b 0x8221b904
	goto loc_8221B904;
loc_8221B8F8:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x8221b904
	goto loc_8221B904;
loc_8221B900:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8221B904:
	// lwz r10,12284(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12284);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r4,48(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 48);
	// rlwinm r10,r10,9,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0x7F;
	// lwz r9,56(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 56);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// or r30,r11,r29
	r30.u64 = ctx.r11.u64 | r29.u64;
	// ble cr6,0x8221b934
	if (!ctx.cr6.gt) goto loc_8221B934;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82215008
	ctx.lr = 0x8221B930;
	sub_82215008(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_8221B934:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// addi r6,r11,-20696
	ctx.r6.s64 = ctx.r11.s64 + -20696;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822146b8
	ctx.lr = 0x8221B94C;
	sub_822146B8(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// bne cr6,0x8221b9c8
	if (!ctx.cr6.eq) goto loc_8221B9C8;
	// lwz r11,24584(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24584);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221b9c8
	if (!ctx.cr6.eq) goto loc_8221B9C8;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8221b978
	if (!ctx.cr6.gt) goto loc_8221B978;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82215008
	ctx.lr = 0x8221B978;
	sub_82215008(ctx, base);
loc_8221B978:
	// lis r11,-16380
	ctx.r11.s64 = -1073479680;
	// li r10,19
	ctx.r10.s64 = 19;
	// ori r11,r11,15360
	ctx.r11.u64 = ctx.r11.u64 | 15360;
	// li r9,0
	ctx.r9.s64 = 0;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// li r8,256
	ctx.r8.s64 = 256;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// lwz r11,11028(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 11028);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r11,r11,3
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// stwu r28,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r28.u32);
	ctx.r3.u32 = ea;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
loc_8221B9C8:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8222b8a0
	ctx.lr = 0x8221B9D4;
	sub_8222B8A0(ctx, base);
	// lbz r11,11069(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 11069);
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// stb r11,11069(r31)
	REX_STORE_U8(r31.u32 + 11069, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82223600) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// rlwinm r7,r5,27,5,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x7FFFFFF;
	// rlwinm r11,r4,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x7FFFFFF;
	// addi r10,r7,8
	ctx.r10.s64 = ctx.r7.s64 + 8;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 + ctx.r3.u64;
	// clrlwi r8,r4,27
	ctx.r8.u64 = ctx.r4.u32 & 0x1F;
	// clrlwi r4,r31,27
	ctx.r4.u64 = r31.u32 & 0x1F;
	// add r10,r5,r3
	ctx.r10.u64 = ctx.r5.u64 + ctx.r3.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x822236b4
	if (ctx.cr6.eq) goto loc_822236B4;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// li r11,-1
	ctx.r11.s64 = -1;
	// bne cr6,0x8222365c
	if (!ctx.cr6.eq) goto loc_8222365C;
	// srw r7,r11,r4
	ctx.r7.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r4.u8 & 0x3F));
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// srw r11,r11,r8
	ctx.r11.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r8.u8 & 0x3F));
	// andc r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r7.u64;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// b 0x82223730
	goto loc_82223730;
loc_8222365C:
	// lwz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// srw r8,r11,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r8.u8 & 0x3F));
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stw r8,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x822236a4
	if (!ctx.cr6.lt) goto loc_822236A4;
	// subf r9,r10,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r10.u64;
	// addi r8,r10,-4
	ctx.r8.s64 = ctx.r10.s64 + -4;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// addic. r9,r9,1
	ctx.xer.ca = ctx.r9.u32 > 4294967294;
	ctx.r9.s64 = ctx.r9.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8222369c
	if (ctx.cr0.eq) goto loc_8222369C;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82223694:
	// stwu r11,4(r8)
	ea = 4 + ctx.r8.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x82223694
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82223694;
loc_8222369C:
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_822236A4:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// srw r11,r11,r4
	ctx.r11.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r4.u8 & 0x3F));
	// orc r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ~ctx.r11.u64;
	// b 0x82223730
	goto loc_82223730;
loc_822236B4:
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// li r11,-1
	ctx.r11.s64 = -1;
	// bne cr6,0x822236d8
	if (!ctx.cr6.eq) goto loc_822236D8;
	// srw r7,r11,r4
	ctx.r7.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r4.u8 & 0x3F));
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// srw r11,r11,r8
	ctx.r11.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r8.u8 & 0x3F));
	// andc r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r7.u64;
	// andc r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ~ctx.r11.u64;
	// b 0x82223730
	goto loc_82223730;
loc_822236D8:
	// lwz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// srw r8,r11,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r8.u8 & 0x3F));
	// andc r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 & ~ctx.r8.u64;
	// stw r8,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82223724
	if (!ctx.cr6.lt) goto loc_82223724;
	// subf r9,r10,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r10.u64;
	// addi r8,r10,-4
	ctx.r8.s64 = ctx.r10.s64 + -4;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// addic. r9,r9,1
	ctx.xer.ca = ctx.r9.u32 > 4294967294;
	ctx.r9.s64 = ctx.r9.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8222371c
	if (ctx.cr0.eq) goto loc_8222371C;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82223714:
	// stwu r7,4(r8)
	ea = 4 + ctx.r8.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x82223714
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82223714;
loc_8222371C:
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_82223724:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// srw r11,r11,r4
	ctx.r11.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r4.u8 & 0x3F));
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
loc_82223730:
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82228DF8) {
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
	ctx.lr = 0x82228E00;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,48(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82228e20
	if (!ctx.cr6.gt) goto loc_82228E20;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82215008
	ctx.lr = 0x82228E20;
	sub_82215008(ctx, base);
loc_82228E20:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,8448
	ctx.r11.u64 = ctx.r11.u64 | 8448;
	// ori r30,r10,65535
	r30.u64 = ctx.r10.u64 | 65535;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,8851
	ctx.r8.s64 = 8851;
	// li r7,0
	ctx.r7.s64 = 0;
	// lis r6,2
	ctx.r6.s64 = 131072;
	// stwu r30,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r30.u32);
	ctx.r3.u32 = ea;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// ori r6,r6,8708
	ctx.r6.u64 = ctx.r6.u64 | 8708;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r4,768
	ctx.r4.s64 = 768;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// li r29,8978
	r29.s64 = 8978;
	// li r11,8205
	ctx.r11.s64 = 8205;
	// li r27,0
	r27.s64 = 0;
	// mr r28,r30
	r28.u64 = r30.u64;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// stwu r29,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r29.u32);
	ctx.r3.u32 = ea;
	// stwu r30,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r30.u32);
	ctx.r3.u32 = ea;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stwu r27,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r27.u32);
	ctx.r11.u32 = ea;
	// lwz r10,56(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 56);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// ble cr6,0x82228ec0
	if (!ctx.cr6.gt) goto loc_82228EC0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82215008
	ctx.lr = 0x82228EC0;
	sub_82215008(ctx, base);
loc_82228EC0:
	// li r11,8452
	ctx.r11.s64 = 8452;
	// li r10,0
	ctx.r10.s64 = 0;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// li r11,8706
	ctx.r11.s64 = 8706;
	// li r9,8705
	ctx.r9.s64 = 8705;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// li r7,8962
	ctx.r7.s64 = 8962;
	// ori r8,r8,1
	ctx.r8.u64 = ctx.r8.u64 | 1;
	// stwu r30,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r30.u32);
	ctx.r3.u32 = ea;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,8704
	ctx.r5.s64 = 8704;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r30,8712
	r30.s64 = 8712;
	// li r29,4
	r29.s64 = 4;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// li r28,8707
	r28.s64 = 8707;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r27,8578
	r27.s64 = 8578;
	// li r26,-1
	r26.s64 = -1;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// stwu r30,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r30.u32);
	ctx.r3.u32 = ea;
	// stwu r29,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r29.u32);
	ctx.r3.u32 = ea;
	// stwu r28,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r28.u32);
	ctx.r3.u32 = ea;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r27,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r27.u32);
	ctx.r3.u32 = ea;
	// stwu r26,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r26.u32);
	ctx.r3.u32 = ea;
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_8222EF30) {
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
	ctx.lr = 0x8222EF38;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r8,4096
	ctx.r8.s64 = 4096;
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1028
	ctx.r5.s64 = 1028;
	// li r3,2
	ctx.r3.s64 = 2;
	// li r30,0
	r30.s64 = 0;
	// bl 0x824d41ec
	ctx.lr = 0x8222EF6C;
	__imp__MmAllocatePhysicalMemoryEx(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8222efa0
	if (!ctx.cr0.eq) goto loc_8222EFA0;
	// lis r4,-18048
	ctx.r4.s64 = -1182793728;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823cd118
	ctx.lr = 0x8222EF80;
	sub_823CD118(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8222ef90
	if (ctx.cr0.eq) goto loc_8222EF90;
	// li r30,1
	r30.s64 = 1;
	// b 0x8222efa0
	goto loc_8222EFA0;
loc_8222EF90:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8222efa0
	if (ctx.cr6.eq) goto loc_8222EFA0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r30,2
	r30.s64 = 2;
loc_8222EFA0:
	// stw r3,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r3.u32);
	// stw r30,0(r27)
	REX_STORE_U32(r27.u32 + 0, r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82233848) {
	REX_FUNC_PROLOGUE();
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e84
	ctx.lr = 0x82233850;
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,212
	ctx.r11.s64 = ctx.r1.s64 + 212;
	// stw r7,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r7.u32);
	// mr r27,r9
	r27.u64 = ctx.r9.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r10,r10,-17120
	ctx.r10.s64 = ctx.r10.s64 + -17120;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vsldoi128 v63,v63,v63,4
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 12));
	// addi r9,r9,-17136
	ctx.r9.s64 = ctx.r9.s64 + -17136;
	// vupkd3d128 v12,v63,0
	vTemp.u32[0] = ctx.v63.u8[3] | 0x3F800000;
	vTemp.u32[1] = ctx.v63.u8[0] | 0x3F800000;
	vTemp.u32[2] = ctx.v63.u8[1] | 0x3F800000;
	vTemp.u32[3] = ctx.v63.u8[2] | 0x3F800000;
	ctx.v12 = vTemp;
	// lvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// lvx128 v13,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v0,v0,v12,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// stvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bne cr6,0x822338c0
	if (!ctx.cr6.eq) goto loc_822338C0;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82233710
	ctx.lr = 0x822338BC;
	sub_82233710(ctx, base);
	// b 0x822338f8
	goto loc_822338F8;
loc_822338C0:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822338f8
	if (ctx.cr6.eq) goto loc_822338F8;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
loc_822338D0:
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82233710
	ctx.lr = 0x822338EC;
	sub_82233710(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// bne 0x822338d0
	if (!ctx.cr0.eq) goto loc_822338D0;
loc_822338F8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_822356C0) {
	REX_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x824d47fc
	__imp__NetDll_closesocket(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82235710) {
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
	// b 0x824d483c
	__imp__NetDll_select(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822361D0) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stw r5,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// stw r6,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r7,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822364C0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r9,r5,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x822364e4
	if (!ctx.cr6.lt) goto loc_822364E4;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,122
	ctx.r3.u64 = ctx.r3.u64 | 122;
	// blr 
	return;
loc_822364E4:
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// beq cr6,0x82236564
	if (ctx.cr6.eq) goto loc_82236564;
	// addi r8,r11,-8
	ctx.r8.s64 = ctx.r11.s64 + -8;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// addi r11,r4,-8
	ctx.r11.s64 = ctx.r4.s64 + -8;
loc_82236500:
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8223654c
	if (ctx.cr6.eq) goto loc_8223654C;
	// ld r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r10,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lwz r9,-12(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// lwz r10,-16(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// rlwinm r7,r10,8,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// rlwimi r7,r10,24,16,23
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF00) | (ctx.r7.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwinm r6,r9,8,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFF;
	// rlwimi r7,r10,8,8,15
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF0000) | (ctx.r7.u64 & 0xFFFFFFFFFF00FFFF);
	// rlwimi r6,r9,24,16,23
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF00) | (ctx.r6.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwimi r7,r10,24,0,7
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF000000) | (ctx.r7.u64 & 0xFFFFFFFF00FFFFFF);
	// rlwimi r6,r9,8,8,15
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFF0000) | (ctx.r6.u64 & 0xFFFFFFFFFF00FFFF);
	// clrldi r10,r7,32
	ctx.r10.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// rlwimi r6,r9,24,0,7
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF000000) | (ctx.r6.u64 & 0xFFFFFFFF00FFFFFF);
	// rldimi r10,r6,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// b 0x82236550
	goto loc_82236550;
loc_8223654C:
	// ldu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U64(ea);
	ctx.r11.u32 = ea;
loc_82236550:
	// stdu r10,8(r8)
	ea = 8 + ctx.r8.u32;
	REX_STORE_U64(ea, ctx.r10.u64);
	ctx.r8.u32 = ea;
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// stw r10,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// bdnz 0x82236500
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82236500;
loc_82236564:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82238358) {
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
	ctx.lr = 0x82238360;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r24,r3,348
	r24.s64 = ctx.r3.s64 + 348;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r22,0
	r22.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r21,r22
	r21.u64 = r22.u64;
	// bl 0x823cd980
	ctx.lr = 0x82238384;
	sub_823CD980(ctx, base);
	// addi r25,r28,84
	r25.s64 = r28.s64 + 84;
	// mr r31,r24
	r31.u64 = r24.u64;
	// mr r30,r25
	r30.u64 = r25.u64;
	// li r29,4
	r29.s64 = 4;
loc_82238394:
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822383a8
	if (ctx.cr6.eq) goto loc_822383A8;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8223a6b8
	ctx.lr = 0x822383A8;
	sub_8223A6B8(ctx, base);
loc_822383A8:
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r31,r31,12
	r31.s64 = r31.s64 + 12;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x82238394
	if (!ctx.cr0.eq) goto loc_82238394;
	// addi r23,r28,804
	r23.s64 = r28.s64 + 804;
	// li r5,408
	ctx.r5.s64 = 408;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x823cd980
	ctx.lr = 0x822383CC;
	sub_823CD980(ctx, base);
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// mr r29,r22
	r29.u64 = r22.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82238514
	if (!ctx.cr6.gt) goto loc_82238514;
	// addi r31,r28,100
	r31.s64 = r28.s64 + 100;
	// mr r26,r23
	r26.u64 = r23.u64;
	// li r27,-1
	r27.s64 = -1;
loc_822383E8:
	// lwz r11,280(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 280);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822384e4
	if (!ctx.cr6.eq) goto loc_822384E4;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r30,r29
	r30.u64 = r29.u64;
	// ld r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82238438
	if (ctx.cr6.eq) goto loc_82238438;
	// li r10,4
	ctx.r10.s64 = 4;
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// addi r9,r3,36
	ctx.r9.s64 = ctx.r3.s64 + 36;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82238418:
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82238428
	if (ctx.cr6.lt) goto loc_82238428;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82238428:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x82238418
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82238418;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// b 0x8223843c
	goto loc_8223843C;
loc_82238438:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
loc_8223843C:
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// addi r6,r29,1
	ctx.r6.s64 = r29.s64 + 1;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x822384e4
	if (!ctx.cr6.lt) goto loc_822384E4;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r7,r31,4
	ctx.r7.s64 = r31.s64 + 4;
loc_82238454:
	// li r9,4
	ctx.r9.s64 = 4;
	// lwz r10,0(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// addi r8,r10,36
	ctx.r8.s64 = ctx.r10.s64 + 36;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82238468:
	// lwz r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82238478
	if (ctx.cr6.lt) goto loc_82238478;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82238478:
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x82238468
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82238468;
	// ld r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x8223849c
	if (ctx.cr6.eq) goto loc_8223849C;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x8223849c
	if (!ctx.cr6.lt) goto loc_8223849C;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
loc_8223849C:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x82238454
	if (ctx.cr6.lt) goto loc_82238454;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(r30.u32, r29.u32, ctx.xer);
	// beq cr6,0x822384e4
	if (ctx.cr6.eq) goto loc_822384E4;
	// addi r11,r30,25
	ctx.r11.s64 = r30.s64 + 25;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r28
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r28.u32);
	// xor r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r3.u64;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwzx r10,r11,r28
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r28.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// xor r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// stwx r10,r11,r28
	REX_STORE_U32(ctx.r11.u32 + r28.u32, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_822384E4:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// ld r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x822384fc
	if (ctx.cr6.eq) goto loc_822384FC;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8223e0a0
	ctx.lr = 0x822384FC;
	sub_8223E0A0(ctx, base);
loc_822384FC:
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r26,r26,12
	r26.s64 = r26.s64 + 12;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822383e8
	if (ctx.cr6.lt) goto loc_822383E8;
loc_82238514:
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// stw r22,280(r28)
	REX_STORE_U32(r28.u32 + 280, r22.u32);
	// addi r6,r28,300
	ctx.r6.s64 = r28.s64 + 300;
	// addi r10,r11,-22116
	ctx.r10.s64 = ctx.r11.s64 + -22116;
	// addi r8,r6,48
	ctx.r8.s64 = ctx.r6.s64 + 48;
	// mr r9,r22
	ctx.r9.u64 = r22.u64;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// cmplw cr6,r6,r8
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, ctx.xer);
	// lwz r7,12(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// bge cr6,0x82238578
	if (!ctx.cr6.lt) goto loc_82238578;
	// addi r5,r24,48
	ctx.r5.s64 = r24.s64 + 48;
	// subf r4,r6,r24
	ctx.r4.u64 = r24.u64 - ctx.r6.u64;
loc_82238544:
	// add r10,r4,r11
	ctx.r10.u64 = ctx.r4.u64 + ctx.r11.u64;
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x8223856c
	if (!ctx.cr6.lt) goto loc_8223856C;
	// rlwinm r3,r7,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r3,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stwx r10,r3,r11
	REX_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r10.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82238544
	if (ctx.cr6.lt) goto loc_82238544;
loc_8223856C:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82238578
	if (ctx.cr6.eq) goto loc_82238578;
	// mr r21,r9
	r21.u64 = ctx.r9.u64;
loc_82238578:
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// lwz r5,292(r28)
	ctx.r5.u64 = REX_LOAD_U32(r28.u32 + 292);
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r8,r10,-23836
	ctx.r8.s64 = ctx.r10.s64 + -23836;
	// li r31,2
	r31.s64 = 2;
	// mr r30,r22
	r30.u64 = r22.u64;
	// mr r9,r22
	ctx.r9.u64 = r22.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// lwz r8,12(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// addi r11,r8,87
	ctx.r11.s64 = ctx.r8.s64 + 87;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
loc_822385AC:
	// lwz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x822385c8
	if (ctx.cr6.eq) goto loc_822385C8;
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x822385c8
	if (ctx.cr6.eq) goto loc_822385C8;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_822385C8:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// bdnz 0x822385ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822385AC;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822385ec
	if (ctx.cr6.eq) goto loc_822385EC;
	// divwu r11,r5,r9
	ctx.r11.u64 = uint32_t(ctx.r9.u32 ? ctx.r5.u32 / ctx.r9.u32 : 0);
	// twllei r9,0
	if (ctx.r9.s32 == 0 || ctx.r9.u32 < 0u) ppc_trap(ctx, base, 0);
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// subf r5,r11,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r11.u64;
loc_822385EC:
	// addi r3,r6,48
	ctx.r3.s64 = ctx.r6.s64 + 48;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// cmplw cr6,r6,r3
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x8223861c
	if (!ctx.cr6.lt) goto loc_8223861C;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
loc_82238600:
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// lwz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// neg r7,r7
	ctx.r7.s64 = static_cast<int64_t>(-ctx.r7.u64);
	// stw r7,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// blt cr6,0x82238600
	if (ctx.cr6.lt) goto loc_82238600;
loc_8223861C:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
loc_82238624:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8223867c
	if (ctx.cr6.eq) goto loc_8223867C;
	// add r11,r7,r5
	ctx.r11.u64 = ctx.r7.u64 + ctx.r5.u64;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// mulli r10,r11,3
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(3));
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// rlwinm r29,r10,2,0,29
	r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lwzx r29,r29,r24
	r29.u64 = REX_LOAD_U32(r29.u32 + r24.u32);
	// lwzx r10,r9,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r29.s32, ctx.xer);
	// bge cr6,0x82238670
	if (!ctx.cr6.lt) goto loc_82238670;
	// addic. r10,r10,1
	ctx.xer.ca = ctx.r10.u32 > 4294967294;
	ctx.r10.s64 = ctx.r10.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// stwx r10,r9,r11
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u32);
	// ble 0x82238670
	if (!ctx.cr0.gt) goto loc_82238670;
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
loc_82238670:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmplwi cr6,r7,4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 4, ctx.xer);
	// blt cr6,0x82238624
	if (ctx.cr6.lt) goto loc_82238624;
loc_8223867C:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8223868c
	if (ctx.cr6.eq) goto loc_8223868C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8223861c
	if (!ctx.cr6.eq) goto loc_8223861C;
loc_8223868C:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// cmplw cr6,r6,r3
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x822386cc
	if (!ctx.cr6.lt) goto loc_822386CC;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
loc_8223869C:
	// lwzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge cr6,0x822386ac
	if (!ctx.cr6.lt) goto loc_822386AC;
	// stwx r22,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, r22.u32);
loc_822386AC:
	// lwzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// add r30,r9,r30
	r30.u64 = ctx.r9.u64 + r30.u64;
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x8223869c
	if (ctx.cr6.lt) goto loc_8223869C;
	// cmplw cr6,r30,r21
	ctx.cr6.compare<uint32_t>(r30.u32, r21.u32, ctx.xer);
	// ble cr6,0x822386cc
	if (!ctx.cr6.gt) goto loc_822386CC;
	// mr r21,r30
	r21.u64 = r30.u64;
loc_822386CC:
	// lwz r11,296(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 296);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822386e0
	if (!ctx.cr6.eq) goto loc_822386E0;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,296(r28)
	REX_STORE_U32(r28.u32 + 296, ctx.r11.u32);
loc_822386E0:
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// lwz r6,296(r28)
	ctx.r6.u64 = REX_LOAD_U32(r28.u32 + 296);
	// addi r30,r23,408
	r30.s64 = r23.s64 + 408;
	// addi r10,r11,-23804
	ctx.r10.s64 = ctx.r11.s64 + -23804;
	// addi r31,r28,396
	r31.s64 = r28.s64 + 396;
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
	// cmplw cr6,r23,r30
	ctx.cr6.compare<uint32_t>(r23.u32, r30.u32, ctx.xer);
	// lwz r5,12(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// bge cr6,0x82238728
	if (!ctx.cr6.lt) goto loc_82238728;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
loc_82238708:
	// lwzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// ble cr6,0x8223871c
	if (!ctx.cr6.gt) goto loc_8223871C;
	// li r9,1
	ctx.r9.s64 = 1;
	// stwx r9,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
loc_8223871C:
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// blt cr6,0x82238708
	if (ctx.cr6.lt) goto loc_82238708;
loc_82238728:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82237ad0
	ctx.lr = 0x82238734;
	sub_82237AD0(ctx, base);
	// addi r10,r31,408
	ctx.r10.s64 = r31.s64 + 408;
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82238770
	if (!ctx.cr6.lt) goto loc_82238770;
	// subf r8,r23,r31
	ctx.r8.u64 = r31.u64 - r23.u64;
loc_82238748:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// bge cr6,0x82238770
	if (!ctx.cr6.lt) goto loc_82238770;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwzx r7,r7,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// stwx r7,r9,r11
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r7.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// add r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 + ctx.r11.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82238748
	if (ctx.cr6.lt) goto loc_82238748;
loc_82238770:
	// cmplw cr6,r3,r21
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r21.u32, ctx.xer);
	// ble cr6,0x8223877c
	if (!ctx.cr6.gt) goto loc_8223877C;
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
loc_8223877C:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x82238790
	if (ctx.cr6.eq) goto loc_82238790;
	// lwz r11,292(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 292);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,292(r28)
	REX_STORE_U32(r28.u32 + 292, ctx.r11.u32);
loc_82238790:
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ebc
	return;
}

DEFINE_REX_FUNC(sub_82249FD0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82249FD8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x822d6a10
	ctx.lr = 0x82249FE8;
	sub_822D6A10(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bgt cr6,0x8224a000
	if (ctx.cr6.gt) goto loc_8224A000;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x8224a054
	goto loc_8224A054;
loc_8224A000:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82246a38
	ctx.lr = 0x8224A00C;
	sub_82246A38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8224a054
	if (ctx.cr0.lt) goto loc_8224A054;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r30,-2
	ctx.r9.s64 = r30.s64 + -2;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r30,-3
	ctx.r10.s64 = r30.s64 + -3;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// li r8,115
	ctx.r8.s64 = 115;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// li r7,117
	ctx.r7.s64 = 117;
	// sth r8,-2(r11)
	REX_STORE_U16(ctx.r11.u32 + -2, ctx.r8.u16);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r8,120
	ctx.r8.s64 = 120;
	// sthx r7,r9,r11
	REX_STORE_U16(ctx.r9.u32 + ctx.r11.u32, ctx.r7.u16);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// sthx r8,r10,r11
	REX_STORE_U16(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u16);
loc_8224A054:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8224BD50) {
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
	// addi r31,r11,25804
	r31.s64 = ctx.r11.s64 + 25804;
	// lwz r11,25824(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 25824);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8224bd9c
	if (!ctx.cr0.eq) goto loc_8224BD9C;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r11,25824(r10)
	REX_STORE_U32(ctx.r10.u32 + 25824, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,1996(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8227ad28
	ctx.lr = 0x8224BD90;
	sub_8227AD28(ctx, base);
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r3,r11,15128
	ctx.r3.s64 = ctx.r11.s64 + 15128;
	// bl 0x822d5848
	ctx.lr = 0x8224BD9C;
	sub_822D5848(ctx, base);
loc_8224BD9C:
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

DEFINE_REX_FUNC(sub_8224D8B0) {
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
	ctx.lr = 0x8224D8B8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// stw r8,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r8.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224d924
	if (ctx.cr6.eq) goto loc_8224D924;
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
	// bge cr6,0x8224d924
	if (!ctx.cr6.lt) goto loc_8224D924;
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
	// bne cr6,0x8224d924
	if (!ctx.cr6.eq) goto loc_8224D924;
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// rlwinm r9,r3,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8224d924
	if (!ctx.cr6.eq) goto loc_8224D924;
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_8224D924:
	// lwz r30,12(r8)
	r30.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// mr r31,r30
	r31.u64 = r30.u64;
	// addi r28,r30,16
	r28.s64 = r30.s64 + 16;
loc_8224D930:
	// mfmsr r10
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r10.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r11,0,r28
	ea = r28.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r28
	ea = r28.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x8224d930
	if (!ctx.cr0.eq) goto loc_8224D930;
	// lis r29,-32163
	r29.s64 = -2107834368;
loc_8224D950:
	// lwz r11,23704(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 23704);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8224d984
	if (ctx.cr6.eq) goto loc_8224D984;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224D970;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8224d9bc
	if (ctx.cr0.lt) goto loc_8224D9BC;
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8224d9bc
	if (!ctx.cr6.eq) goto loc_8224D9BC;
loc_8224D984:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r5,32(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224D99C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// lwz r31,4(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8224d9bc
	if (!ctx.cr6.eq) goto loc_8224D9BC;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8224d9bc
	if (ctx.cr6.eq) goto loc_8224D9BC;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x8224d950
	if (!ctx.cr6.lt) goto loc_8224D950;
loc_8224D9BC:
	// mfmsr r10
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r10.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r11,0,r28
	ea = r28.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r28
	ea = r28.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x8224d9bc
	if (!ctx.cr0.eq) goto loc_8224D9BC;
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8224d9f8
	if (ctx.cr0.eq) goto loc_8224D9F8;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8224d9f8
	if (!ctx.cr6.eq) goto loc_8224D9F8;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x8224d778
	ctx.lr = 0x8224D9F8;
	sub_8224D778(ctx, base);
loc_8224D9F8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82254718) {
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
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r10,r10,-5840
	ctx.r10.s64 = ctx.r10.s64 + -5840;
	// std r31,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, r31.u64);
	// addi r9,r9,-5900
	ctx.r9.s64 = ctx.r9.s64 + -5900;
	// std r31,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, r31.u64);
	// std r31,16(r11)
	REX_STORE_U64(ctx.r11.u32 + 16, r31.u64);
	// std r31,24(r11)
	REX_STORE_U64(ctx.r11.u32 + 24, r31.u64);
	// std r31,32(r11)
	REX_STORE_U64(ctx.r11.u32 + 32, r31.u64);
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x82246ca8
	ctx.lr = 0x82254760;
	sub_82246CA8(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// stw r3,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// addi r11,r11,-22248
	ctx.r11.s64 = ctx.r11.s64 + -22248;
	// addi r10,r10,-22048
	ctx.r10.s64 = ctx.r10.s64 + -22048;
	// addi r9,r9,27552
	ctx.r9.s64 = ctx.r9.s64 + 27552;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r10,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r9,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// bl 0x82253ad0
	ctx.lr = 0x82254790;
	sub_82253AD0(ctx, base);
	// stw r3,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// stw r31,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r31.u32);
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,23556
	ctx.r4.s64 = ctx.r11.s64 + 23556;
	// bl 0x822512d8
	ctx.lr = 0x822547A8;
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

DEFINE_REX_FUNC(sub_82256758) {
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
	// lis r31,-32172
	r31.s64 = -2108424192;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,-6968(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + -6968);
	// bl 0x824d49dc
	ctx.lr = 0x8225677C;
	__imp__KeTlsGetValue(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r4,r3,1
	ctx.r4.s64 = ctx.r3.s64 + 1;
	// bne cr6,0x8225678c
	if (!ctx.cr6.eq) goto loc_8225678C;
	// addi r4,r3,-1
	ctx.r4.s64 = ctx.r3.s64 + -1;
loc_8225678C:
	// lwz r3,-6968(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + -6968);
	// bl 0x824d49cc
	ctx.lr = 0x82256794;
	__imp__KeTlsSetValue(ctx, base);
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

DEFINE_REX_FUNC(sub_822575C0) {
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
	// bl 0x8229a710
	ctx.lr = 0x822575D4;
	sub_8229A710(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x822575e8
	if (!ctx.cr0.eq) goto loc_822575E8;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x822575fc
	goto loc_822575FC;
loc_822575E8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8227c510
	ctx.lr = 0x822575F0;
	sub_8227C510(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82255b70
	ctx.lr = 0x822575F8;
	sub_82255B70(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_822575FC:
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

DEFINE_REX_FUNC(sub_82258BF0) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82258c5c
	if (ctx.cr6.eq) goto loc_82258C5C;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82258c38
	if (ctx.cr6.eq) goto loc_82258C38;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82257780
	ctx.lr = 0x82258C2C;
	sub_82257780(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822517a0
	ctx.lr = 0x82258C38;
	sub_822517A0(ctx, base);
loc_82258C38:
	// clrlwi r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82258c4c
	if (!ctx.cr6.eq) goto loc_82258C4C;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82289120
	ctx.lr = 0x82258C4C;
	sub_82289120(ctx, base);
loc_82258C4C:
	// rlwinm r11,r31,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x82258c5c
	if (!ctx.cr6.eq) goto loc_82258C5C;
	// bl 0x82282f88
	ctx.lr = 0x82258C5C;
	sub_82282F88(ctx, base);
loc_82258C5C:
	// li r3,0
	ctx.r3.s64 = 0;
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

DEFINE_REX_FUNC(sub_8225C068) {
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
	// lwz r3,8(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225c0a0
	if (ctx.cr6.eq) goto loc_8225C0A0;
	// bl 0x82288ee8
	ctx.lr = 0x8225C08C;
	sub_82288EE8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// lwz r11,132(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 132);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,132(r31)
	REX_STORE_U32(r31.u32 + 132, ctx.r11.u32);
loc_8225C0A0:
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

DEFINE_REX_FUNC(sub_8225CF00) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x822586e0
	ctx.lr = 0x8225CF28;
	sub_822586E0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8225cf54
	if (ctx.cr6.eq) goto loc_8225CF54;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-384
	ctx.r5.s64 = ctx.r11.s64 + -384;
	// addi r4,r10,-364
	ctx.r4.s64 = ctx.r10.s64 + -364;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x822588e0
	ctx.lr = 0x8225CF54;
	sub_822588E0(ctx, base);
loc_8225CF54:
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

DEFINE_REX_FUNC(sub_8225DDF0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8225DDF8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bl 0x8225da70
	ctx.lr = 0x8225DE14;
	sub_8225DA70(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8227c2b8
	ctx.lr = 0x8225DE20;
	sub_8227C2B8(ctx, base);
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
	// stw r29,4(r31)
	REX_STORE_U32(r31.u32 + 4, r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8225E470) {
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
	ctx.lr = 0x8225E488;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// li r5,17
	ctx.r5.s64 = 17;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// fmr f29,f3
	f29.f64 = ctx.f3.f64;
	// fmr f28,f4
	f28.f64 = ctx.f4.f64;
	// bl 0x8225ddf0
	ctx.lr = 0x8225E4AC;
	sub_8225DDF0(ctx, base);
	// li r5,20
	ctx.r5.s64 = 20;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8225de30
	ctx.lr = 0x8225E4BC;
	sub_8225DE30(ctx, base);
	// lwz r11,228(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// stfs f31,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 0, temp.u32);
	// stfs f30,4(r30)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r30.u32 + 4, temp.u32);
	// stfs f29,8(r30)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r30.u32 + 8, temp.u32);
	// stfs f28,12(r30)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(r30.u32 + 12, temp.u32);
	// stw r11,16(r30)
	REX_STORE_U32(r30.u32 + 16, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x822d4f84
	ctx.lr = 0x8225E4E0;
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

DEFINE_REX_FUNC(sub_82261D10) {
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
	// beq cr6,0x82261d54
	if (ctx.cr6.eq) goto loc_82261D54;
	// lwz r4,12(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge cr6,0x82261d40
	if (!ctx.cr6.lt) goto loc_82261D40;
	// bl 0x822ed768
	ctx.lr = 0x82261D3C;
	sub_822ED768(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82261D40:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82278348
	ctx.lr = 0x82261D48;
	sub_82278348(ctx, base);
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82277f68
	ctx.lr = 0x82261D54;
	sub_82277F68(ctx, base);
loc_82261D54:
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

DEFINE_REX_FUNC(sub_82264B58) {
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
	ctx.lr = 0x82264B60;
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
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r11,-2144(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -2144);
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// lfs f29,1996(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	f29.f64 = double(temp.f32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stw r11,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// beq cr6,0x82264ba0
	if (ctx.cr6.eq) goto loc_82264BA0;
	// stfs f29,0(r5)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
loc_82264BA0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82264bac
	if (ctx.cr6.eq) goto loc_82264BAC;
	// stfs f29,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r29.u32 + 0, temp.u32);
loc_82264BAC:
	// lwz r11,160(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 160);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82264c18
	if (ctx.cr6.lt) goto loc_82264C18;
	// beq cr6,0x82264bec
	if (ctx.cr6.eq) goto loc_82264BEC;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82264be0
	if (ctx.cr6.lt) goto loc_82264BE0;
	// beq cr6,0x82264be0
	if (ctx.cr6.eq) goto loc_82264BE0;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// blt cr6,0x82264bd4
	if (ctx.cr6.lt) goto loc_82264BD4;
	// bne cr6,0x82264c50
	if (!ctx.cr6.eq) goto loc_82264C50;
loc_82264BD4:
	// lfs f31,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	f31.f64 = double(temp.f32);
loc_82264BD8:
	// lfs f30,56(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 56);
	f30.f64 = double(temp.f32);
	// b 0x82264c58
	goto loc_82264C58;
loc_82264BE0:
	// lfs f31,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 60);
	f31.f64 = double(temp.f32);
loc_82264BE4:
	// lfs f30,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 64);
	f30.f64 = double(temp.f32);
	// b 0x82264c58
	goto loc_82264C58;
loc_82264BEC:
	// lwz r11,220(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 220);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82264c10
	if (!ctx.cr6.eq) goto loc_82264C10;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82264c3c
	if (!ctx.cr6.eq) goto loc_82264C3C;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82264c3c
	if (!ctx.cr6.eq) goto loc_82264C3C;
loc_82264C10:
	// lfs f31,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	f31.f64 = double(temp.f32);
	// b 0x82264be4
	goto loc_82264BE4;
loc_82264C18:
	// lwz r11,220(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 220);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82264c48
	if (!ctx.cr6.eq) goto loc_82264C48;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82264c3c
	if (!ctx.cr6.eq) goto loc_82264C3C;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82264c48
	if (ctx.cr6.eq) goto loc_82264C48;
loc_82264C3C:
	// lfs f31,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 80);
	f31.f64 = double(temp.f32);
	// lfs f30,76(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 76);
	f30.f64 = double(temp.f32);
	// b 0x82264c58
	goto loc_82264C58;
loc_82264C48:
	// lfs f31,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 60);
	f31.f64 = double(temp.f32);
	// b 0x82264bd8
	goto loc_82264BD8;
loc_82264C50:
	// lfs f30,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	f30.f64 = double(temp.f32);
	// lfs f31,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	f31.f64 = double(temp.f32);
loc_82264C58:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82264cd0
	if (ctx.cr6.eq) goto loc_82264CD0;
	// lwz r11,236(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 236);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r6,r11,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x8225e6d0
	ctx.lr = 0x82264C8C;
	sub_8225E6D0(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x822469c0
	ctx.lr = 0x82264C94;
	sub_822469C0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8224da00
	ctx.lr = 0x82264C9C;
	sub_8224DA00(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bge 0x82264cb4
	if (!ctx.cr0.lt) goto loc_82264CB4;
	// lwz r3,128(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x822d7b58
	ctx.lr = 0x82264CAC;
	sub_822D7B58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82264cf4
	goto loc_82264CF4;
loc_82264CB4:
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82264cd0
	if (ctx.cr6.eq) goto loc_82264CD0;
	// lfs f0,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,124(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// fsel f31,f0,f0,f29
	f31.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : f29.f64;
	// fsel f30,f13,f13,f29
	f30.f64 = ctx.f13.f64 >= 0.0 ? ctx.f13.f64 : f29.f64;
loc_82264CD0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82264cdc
	if (ctx.cr6.eq) goto loc_82264CDC;
	// stfs f31,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 0, temp.u32);
loc_82264CDC:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82264ce8
	if (ctx.cr6.eq) goto loc_82264CE8;
	// stfs f30,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r29.u32 + 0, temp.u32);
loc_82264CE8:
	// lwz r3,128(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x822d7b58
	ctx.lr = 0x82264CF0;
	sub_822D7B58(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82264CF4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f30,-48(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8226DFD8) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x822d4e84
	ctx.lr = 0x8226DFE0;
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32172
	ctx.r9.s64 = -2108424192;
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// stw r3,404(r1)
	REX_STORE_U32(ctx.r1.u32 + 404, ctx.r3.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// lwz r9,-2144(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + -2144);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r8,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// ld r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r9,320(r1)
	REX_STORE_U32(ctx.r1.u32 + 320, ctx.r9.u32);
	// bl 0x8225db38
	ctx.lr = 0x8226E01C;
	sub_8225DB38(ctx, base);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x822462c8
	ctx.lr = 0x8226E028;
	sub_822462C8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge 0x8226e044
	if (!ctx.cr0.lt) goto loc_8226E044;
loc_8226E030:
	// lwz r3,320(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 320);
	// bl 0x822d7b58
	ctx.lr = 0x8226E038;
	sub_822D7B58(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_8226E03C:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x822d4ed4
	return;
loc_8226E044:
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwz r3,120(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// bl 0x8224da00
	ctx.lr = 0x8226E050;
	sub_8224DA00(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x8226e030
	if (ctx.cr0.lt) goto loc_8226E030;
	// lwz r11,248(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 248);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8226e074
	if (!ctx.cr6.eq) goto loc_8226E074;
	// lwz r3,320(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 320);
	// bl 0x822d7b58
	ctx.lr = 0x8226E06C;
	sub_822D7B58(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8226e03c
	goto loc_8226E03C;
loc_8226E074:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r27,0
	r27.s64 = 0;
	// stw r27,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r27.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r27,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r27.u32);
	// mr r29,r27
	r29.u64 = r27.u64;
	// stw r27,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r27.u32);
	// ble cr6,0x8226e0f4
	if (!ctx.cr6.gt) goto loc_8226E0F4;
	// mr r30,r27
	r30.u64 = r27.u64;
loc_8226E098:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + r30.u64;
	// bl 0x8226ca60
	ctx.lr = 0x8226E0A8;
	sub_8226CA60(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8226e0e0
	if (!ctx.cr6.lt) goto loc_8226E0E0;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// bl 0x8226ca60
	ctx.lr = 0x8226E0CC;
	sub_8226CA60(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bl 0x8226ca60
	ctx.lr = 0x8226E0E0;
	sub_8226CA60(ctx, base);
loc_8226E0E0:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,28
	r30.s64 = r30.s64 + 28;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8226e098
	if (ctx.cr6.lt) goto loc_8226E098;
loc_8226E0F4:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x8226e138
	if (ctx.cr6.lt) goto loc_8226E138;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mulli r30,r11,28
	r30.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(28));
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// bl 0x8226ca60
	ctx.lr = 0x8226E118;
	sub_8226CA60(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bl 0x8226ca60
	ctx.lr = 0x8226E12C;
	sub_8226CA60(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x8226ca60
	ctx.lr = 0x8226E138;
	sub_8226CA60(ctx, base);
loc_8226E138:
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r27,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r27.u32);
	// mr r29,r27
	r29.u64 = r27.u64;
	// addic. r28,r11,-3
	ctx.xer.ca = ctx.r11.u32 > 2;
	r28.s64 = ctx.r11.s64 + -3;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// stw r27,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, r27.u32);
	// addi r11,r10,844
	ctx.r11.s64 = ctx.r10.s64 + 844;
	// stw r27,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, r27.u32);
	// stw r11,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// ble 0x8226e194
	if (!ctx.cr0.gt) goto loc_8226E194;
	// lwz r30,96(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
loc_8226E164:
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// bl 0x8225fb10
	ctx.lr = 0x8226E17C;
	sub_8225FB10(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8226e360
	if (ctx.cr0.lt) goto loc_8226E360;
	// addi r29,r29,3
	r29.s64 = r29.s64 + 3;
	// addi r30,r30,24
	r30.s64 = r30.s64 + 24;
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(r29.s32, r28.s32, ctx.xer);
	// blt cr6,0x8226e164
	if (ctx.cr6.lt) goto loc_8226E164;
loc_8226E194:
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82256bc0
	ctx.lr = 0x8226E1A0;
	sub_82256BC0(ctx, base);
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// vspltisw128 v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_set1_epi32(int(0x0)));
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r11,12
	ctx.r11.s64 = 12;
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r7,16
	ctx.r7.s64 = 16;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// vupkd3d128 v60,v63,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v63.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v63.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v60 = vTemp;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
	// stw r7,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// vpermwi128 v63,v60,234
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0x15));
	// lvsr v0,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableR[(temp.u32 & 0xF) * 16]));
	// vpermwi128 v62,v60,186
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0x45));
	// rotlwi r11,r7,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// li r3,4
	ctx.r3.s64 = 4;
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// vpermwi128 v61,v60,174
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0x51));
	// vperm128 v63,v63,v63,v0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// vperm128 v62,v62,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stw r7,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r30,80(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// vperm128 v61,v61,v61,v0
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// li r7,20
	ctx.r7.s64 = 20;
	// vpermwi128 v60,v60,171
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0x54));
	// addi r31,r1,176
	r31.s64 = ctx.r1.s64 + 176;
	// addi r29,r1,176
	r29.s64 = ctx.r1.s64 + 176;
	// stvewx128 v63,r0,r5
	ea = (ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// li r28,24
	r28.s64 = 24;
	// stvewx128 v63,r30,r3
	ea = (r30.u32 + ctx.r3.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// li r5,28
	ctx.r5.s64 = 28;
	// stvewx128 v63,r8,r6
	ea = (ctx.r8.u32 + ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r27,r1,176
	r27.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stvewx128 v63,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// li r8,32
	ctx.r8.s64 = 32;
	// stvewx128 v62,r10,r11
	ea = (ctx.r10.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v62,r31,r7
	ea = (r31.u32 + ctx.r7.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
	// stvewx128 v62,r29,r28
	ea = (r29.u32 + r28.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// li r6,36
	ctx.r6.s64 = 36;
	// stvewx128 v62,r27,r5
	ea = (r27.u32 + ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// vperm128 v60,v60,v60,v0
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// li r10,40
	ctx.r10.s64 = 40;
	// stvewx128 v61,r3,r8
	ea = (ctx.r3.u32 + ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// li r5,44
	ctx.r5.s64 = 44;
	// stvewx128 v61,r9,r6
	ea = (ctx.r9.u32 + ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// li r8,48
	ctx.r8.s64 = 48;
	// stvewx128 v61,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
	// li r11,52
	ctx.r11.s64 = 52;
	// stvewx128 v61,r7,r5
	ea = (ctx.r7.u32 + ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// li r7,56
	ctx.r7.s64 = 56;
	// stvewx128 v60,r4,r8
	ea = (ctx.r4.u32 + ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// li r6,60
	ctx.r6.s64 = 60;
	// stvewx128 v60,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// stvewx128 v60,r10,r7
	ea = (ctx.r10.u32 + ctx.r7.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stvewx128 v60,r8,r6
	ea = (ctx.r8.u32 + ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// bl 0x82291518
	ctx.lr = 0x8226E2D4;
	sub_82291518(ctx, base);
	// lwz r31,112(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwa r11,0(r31)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(r31.u32 + 0));
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// std r11,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwa r10,4(r31)
	ctx.r10.s64 = int32_t(REX_LOAD_U32(r31.u32 + 4));
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// std r10,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// lfd f13,112(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x82291088
	ctx.lr = 0x8226E318;
	sub_82291088(ctx, base);
	// lwz r11,404(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// lfs f12,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lfs f11,92(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lfs f0,204(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 204);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,208(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 208);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// fdivs f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 / ctx.f13.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x822607f8
	ctx.lr = 0x8226E348;
	sub_822607F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8226e358
	if (ctx.cr0.eq) goto loc_8226E358;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
loc_8226E358:
	// li r31,0
	r31.s64 = 0;
	// b 0x8226e364
	goto loc_8226E364;
loc_8226E360:
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_8226E364:
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x8225da00
	ctx.lr = 0x8226E36C;
	sub_8225DA00(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8225da00
	ctx.lr = 0x8226E374;
	sub_8225DA00(ctx, base);
	// lwz r3,320(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 320);
	// bl 0x822d7b58
	ctx.lr = 0x8226E37C;
	sub_822D7B58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x8226e03c
	goto loc_8226E03C;
}

DEFINE_REX_FUNC(sub_8227E790) {
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
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r30,r11,29924
	r30.s64 = ctx.r11.s64 + 29924;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824d438c
	ctx.lr = 0x8227E7B8;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,30196(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 30196);
	// bl 0x8227e450
	ctx.lr = 0x8227E7C8;
	sub_8227E450(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8227e7dc
	if (ctx.cr0.eq) goto loc_8227E7DC;
	// bl 0x822094c8
	ctx.lr = 0x8227E7D4;
	sub_822094C8(ctx, base);
	// addi r11,r3,5000
	ctx.r11.s64 = ctx.r3.s64 + 5000;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
loc_8227E7DC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824d437c
	ctx.lr = 0x8227E7E4;
	__imp__RtlLeaveCriticalSection(ctx, base);
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

DEFINE_REX_FUNC(sub_8227F750) {
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
	// beq cr6,0x8227f788
	if (ctx.cr6.eq) goto loc_8227F788;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227F788;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8227F788:
	// lwz r3,20(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8227f7a4
	if (ctx.cr6.eq) goto loc_8227F7A4;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227F7A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8227F7A4:
	// stw r31,20(r30)
	REX_STORE_U32(r30.u32 + 20, r31.u32);
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

DEFINE_REX_FUNC(sub_82281000) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82281008;
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
	// bne cr6,0x82281028
	if (!ctx.cr6.eq) goto loc_82281028;
loc_8228101C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82281068
	goto loc_82281068;
loc_82281028:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8228101c
	if (ctx.cr6.eq) goto loc_8228101C;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r29,r11,30464
	r29.s64 = ctx.r11.s64 + 30464;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824d438c
	ctx.lr = 0x82281040;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lfs f1,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822d60f0
	ctx.lr = 0x82281048;
	sub_822D60F0(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r30
	REX_STORE_U32(r30.u32, ctx.f0.u32);
	// bl 0x82288590
	ctx.lr = 0x82281058;
	sub_82288590(ctx, base);
	// stw r3,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824d437c
	ctx.lr = 0x82281064;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82281068:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_822849F0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// lfs f1,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82284458
	sub_82284458(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82284F98) {
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
	ctx.lr = 0x82284FA0;
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
	// bl 0x82284e28
	ctx.lr = 0x82284FBC;
	sub_82284E28(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82285038
	if (!ctx.cr0.eq) goto loc_82285038;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82284d98
	ctx.lr = 0x82284FD8;
	sub_82284D98(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82285038
	if (!ctx.cr0.eq) goto loc_82285038;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82284d98
	ctx.lr = 0x82284FF4;
	sub_82284D98(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82285038
	if (!ctx.cr0.eq) goto loc_82285038;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82284d98
	ctx.lr = 0x82285010;
	sub_82284D98(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82285038
	if (!ctx.cr0.eq) goto loc_82285038;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82284d98
	ctx.lr = 0x8228502C;
	sub_82284D98(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq 0x8228503c
	if (ctx.cr0.eq) goto loc_8228503C;
loc_82285038:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8228503C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82286868) {
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
	// bl 0x82285650
	ctx.lr = 0x82286884;
	sub_82285650(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r30,0
	r30.s64 = 0;
	// addi r11,r11,7544
	ctx.r11.s64 = ctx.r11.s64 + 7544;
	// addi r3,r31,352
	ctx.r3.s64 = r31.s64 + 352;
	// stw r30,328(r31)
	REX_STORE_U32(r31.u32 + 328, r30.u32);
	// li r5,40
	ctx.r5.s64 = 40;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,332(r31)
	REX_STORE_U32(r31.u32 + 332, r30.u32);
	// stw r30,336(r31)
	REX_STORE_U32(r31.u32 + 336, r30.u32);
	// stw r30,340(r31)
	REX_STORE_U32(r31.u32 + 340, r30.u32);
	// stw r30,344(r31)
	REX_STORE_U32(r31.u32 + 344, r30.u32);
	// stw r30,348(r31)
	REX_STORE_U32(r31.u32 + 348, r30.u32);
	// bl 0x822d5870
	ctx.lr = 0x822868BC;
	sub_822D5870(ctx, base);
	// addi r3,r31,400
	ctx.r3.s64 = r31.s64 + 400;
	// stw r30,392(r31)
	REX_STORE_U32(r31.u32 + 392, r30.u32);
	// li r5,64
	ctx.r5.s64 = 64;
	// stw r30,396(r31)
	REX_STORE_U32(r31.u32 + 396, r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822d5870
	ctx.lr = 0x822868D4;
	sub_822D5870(ctx, base);
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

DEFINE_REX_FUNC(sub_82287A20) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r10,332(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 332);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r31,0(r10)
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82287A54;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,132(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 132);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,332(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 332);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82287A6C;
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

DEFINE_REX_FUNC(sub_82288F80) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82288f94
	if (!ctx.cr6.eq) goto loc_82288F94;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
loc_82288F94:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,128(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 128);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82289680) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// ori r3,r3,16385
	ctx.r3.u64 = ctx.r3.u64 | 16385;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82289B98) {
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
	ctx.lr = 0x82289BA0;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82289bc8
	if (!ctx.cr6.eq) goto loc_82289BC8;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16387
	ctx.r3.u64 = ctx.r3.u64 | 16387;
loc_82289BC0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ebc
	return;
loc_82289BC8:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bge cr6,0x82289be0
	if (!ctx.cr6.lt) goto loc_82289BE0;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// b 0x82289bc0
	goto loc_82289BC0;
loc_82289BE0:
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// mulli r11,r11,6
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(6));
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82289bfc
	if (!ctx.cr6.lt) goto loc_82289BFC;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82289bc0
	goto loc_82289BC0;
loc_82289BFC:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r3,20(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82289c28
	if (!ctx.cr6.eq) goto loc_82289C28;
	// lfs f0,8(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f13,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x82289c2c
	if (ctx.cr6.eq) goto loc_82289C2C;
loc_82289C28:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82289C2C:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82289c58
	if (ctx.cr0.eq) goto loc_82289C58;
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// stw r11,16(r10)
	REX_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// bl 0x82246088
	ctx.lr = 0x82289C4C;
	sub_82246088(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
loc_82289C58:
	// lwz r27,20(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r30,16(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 16);
loc_82289C60:
	// lwz r29,16(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,20(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 20);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x822851f8
	ctx.lr = 0x82289C74;
	sub_822851F8(ctx, base);
	// stb r3,12(r30)
	REX_STORE_U8(r30.u32 + 12, ctx.r3.u8);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// mr r30,r29
	r30.u64 = r29.u64;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82289c60
	if (!ctx.cr6.eq) goto loc_82289C60;
	// li r28,0
	r28.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r27,3
	ctx.cr6.compare<int32_t>(r27.s32, 3, ctx.xer);
	// ble cr6,0x82289d64
	if (!ctx.cr6.gt) goto loc_82289D64;
	// addi r29,r24,-2
	r29.s64 = r24.s64 + -2;
loc_82289C9C:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// li r26,0
	r26.s64 = 0;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
loc_82289CA8:
	// lbz r9,12(r30)
	ctx.r9.u64 = REX_LOAD_U8(r30.u32 + 12);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x82289ccc
	if (!ctx.cr0.eq) goto loc_82289CCC;
	// clrlwi. r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82289ccc
	if (!ctx.cr0.eq) goto loc_82289CCC;
	// lwz r30,16(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 16);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82289ca8
	if (!ctx.cr6.eq) goto loc_82289CA8;
	// b 0x82289d4c
	goto loc_82289D4C;
loc_82289CCC:
	// lwz r23,16(r30)
	r23.u64 = REX_LOAD_U32(r30.u32 + 16);
	// clrlwi r11,r25,16
	ctx.r11.u64 = r25.u32 & 0xFFFF;
	// lwz r22,20(r30)
	r22.u64 = REX_LOAD_U32(r30.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// li r26,1
	r26.s64 = 1;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r21,16(r23)
	r21.u64 = REX_LOAD_U32(r23.u32 + 16);
	// addi r28,r28,3
	r28.s64 = r28.s64 + 3;
	// lwz r4,20(r22)
	ctx.r4.u64 = REX_LOAD_U32(r22.u32 + 20);
	// sth r10,2(r29)
	REX_STORE_U16(r29.u32 + 2, ctx.r10.u16);
	// lwz r10,0(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sth r10,4(r29)
	REX_STORE_U16(r29.u32 + 4, ctx.r10.u16);
	// lwz r10,0(r22)
	ctx.r10.u64 = REX_LOAD_U32(r22.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sthu r11,6(r29)
	ea = 6 + r29.u32;
	REX_STORE_U16(ea, ctx.r11.u16);
	r29.u32 = ea;
	// bl 0x822851f8
	ctx.lr = 0x82289D18;
	sub_822851F8(ctx, base);
	// stb r3,12(r22)
	REX_STORE_U8(r22.u32 + 12, ctx.r3.u8);
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822851f8
	ctx.lr = 0x82289D2C;
	sub_822851F8(ctx, base);
	// stb r3,12(r23)
	REX_STORE_U8(r23.u32 + 12, ctx.r3.u8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82246088
	ctx.lr = 0x82289D38;
	sub_82246088(ctx, base);
	// stw r23,16(r22)
	REX_STORE_U32(r22.u32 + 16, r23.u32);
	// stw r22,20(r23)
	REX_STORE_U32(r23.u32 + 20, r22.u32);
	// addi r27,r27,-1
	r27.s64 = r27.s64 + -1;
	// stw r23,16(r31)
	REX_STORE_U32(r31.u32 + 16, r23.u32);
	// li r10,0
	ctx.r10.s64 = 0;
loc_82289D4C:
	// clrlwi. r11,r26,24
	ctx.r11.u64 = r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82289d58
	if (!ctx.cr0.eq) goto loc_82289D58;
	// li r10,1
	ctx.r10.s64 = 1;
loc_82289D58:
	// cmpwi cr6,r27,3
	ctx.cr6.compare<int32_t>(r27.s32, 3, ctx.xer);
	// bgt cr6,0x82289c9c
	if (ctx.cr6.gt) goto loc_82289C9C;
	// cmpwi cr6,r27,3
	ctx.cr6.compare<int32_t>(r27.s32, 3, ctx.xer);
loc_82289D64:
	// bge cr6,0x82289d80
	if (!ctx.cr6.lt) goto loc_82289D80;
	// lis r30,-32768
	r30.s64 = -2147483648;
	// ori r30,r30,65535
	r30.u64 = r30.u64 | 65535;
loc_82289D70:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82284bb0
	ctx.lr = 0x82289D78;
	sub_82284BB0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x82289bc0
	goto loc_82289BC0;
loc_82289D80:
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 16);
	// rlwinm r10,r28,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r11,r25,16
	ctx.r11.u64 = r25.u32 & 0xFFFF;
	// add r10,r10,r24
	ctx.r10.u64 = ctx.r10.u64 + r24.u64;
	// addi r8,r28,2
	ctx.r8.s64 = r28.s64 + 2;
	// li r30,0
	r30.s64 = 0;
	// lwz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// sth r9,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r9.u16);
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r9,16(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// lwz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// sth r9,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r9.u16);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r10,20(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sthx r11,r8,r24
	REX_STORE_U16(ctx.r8.u32 + r24.u32, ctx.r11.u16);
	// b 0x82289d70
	goto loc_82289D70;
}

DEFINE_REX_FUNC(sub_82293210) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// lwz r7,180(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
	// bl 0x82223138
	ctx.lr = 0x8229323C;
	sub_82223138(ctx, base);
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

DEFINE_REX_FUNC(sub_82294848) {
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
	ctx.lr = 0x82294850;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// bl 0x822944f0
	ctx.lr = 0x82294868;
	sub_822944F0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x822948d8
	if (!ctx.cr0.eq) goto loc_822948D8;
	// addi r29,r31,92
	r29.s64 = r31.s64 + 92;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82297990
	ctx.lr = 0x8229487C;
	sub_82297990(ctx, base);
	// lwz r5,68(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 68);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822948d8
	if (ctx.cr6.eq) goto loc_822948D8;
	// lbz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r5.u32 + 0);
	// lbz r10,1(r5)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r5.u32 + 1);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// extsh. r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822948d8
	if (ctx.cr0.eq) goto loc_822948D8;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// lwz r4,88(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 88);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822973f0
	ctx.lr = 0x822948B4;
	sub_822973F0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x822948d8
	if (ctx.cr0.lt) goto loc_822948D8;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r31,78
	ctx.r5.s64 = r31.s64 + 78;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822990f0
	ctx.lr = 0x822948D4;
	sub_822990F0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_822948D8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82296D88) {
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
	ctx.lr = 0x82296D90;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 4);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lbz r10,5(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 5);
	// mr r15,r4
	r15.u64 = ctx.r4.u64;
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// li r14,0
	r14.s64 = 0;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// or. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// ble 0x82297304
	if (!ctx.cr0.gt) goto loc_82297304;
	// addi r27,r4,12
	r27.s64 = ctx.r4.s64 + 12;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// lis r3,-32254
	ctx.r3.s64 = -2113798144;
	// lis r31,-32254
	r31.s64 = -2113798144;
	// lis r30,-32255
	r30.s64 = -2113863680;
	// addi r25,r11,13724
	r25.s64 = ctx.r11.s64 + 13724;
	// addi r24,r10,13716
	r24.s64 = ctx.r10.s64 + 13716;
	// addi r23,r9,13708
	r23.s64 = ctx.r9.s64 + 13708;
	// addi r22,r8,13700
	r22.s64 = ctx.r8.s64 + 13700;
	// addi r21,r7,13692
	r21.s64 = ctx.r7.s64 + 13692;
	// addi r20,r6,13684
	r20.s64 = ctx.r6.s64 + 13684;
	// addi r19,r5,13676
	r19.s64 = ctx.r5.s64 + 13676;
	// addi r18,r4,13668
	r18.s64 = ctx.r4.s64 + 13668;
	// addi r17,r3,13660
	r17.s64 = ctx.r3.s64 + 13660;
	// addi r16,r31,13208
	r16.s64 = r31.s64 + 13208;
	// addi r26,r30,16384
	r26.s64 = r30.s64 + 16384;
loc_82296E18:
	// lbz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 8);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lbz r10,9(r27)
	ctx.r10.u64 = REX_LOAD_U8(r27.u32 + 9);
	// li r5,4
	ctx.r5.s64 = 4;
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r9,12(r27)
	ctx.r9.u64 = REX_LOAD_U8(r27.u32 + 12);
	// lbz r8,13(r27)
	ctx.r8.u64 = REX_LOAD_U8(r27.u32 + 13);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// lbz r10,10(r27)
	ctx.r10.u64 = REX_LOAD_U8(r27.u32 + 10);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lbz r7,14(r27)
	ctx.r7.u64 = REX_LOAD_U8(r27.u32 + 14);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r6,11(r27)
	ctx.r6.u64 = REX_LOAD_U8(r27.u32 + 11);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// lbz r8,15(r27)
	ctx.r8.u64 = REX_LOAD_U8(r27.u32 + 15);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwinm r10,r9,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// or r30,r11,r6
	r30.u64 = ctx.r11.u64 | ctx.r6.u64;
	// rlwinm r11,r10,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// add r31,r30,r15
	r31.u64 = r30.u64 + r15.u64;
	// or r28,r11,r8
	r28.u64 = ctx.r11.u64 | ctx.r8.u64;
	// bl 0x822d60a0
	ctx.lr = 0x82296E7C;
	sub_822D60A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82296fa8
	if (!ctx.cr0.eq) goto loc_82296FA8;
	// lbz r11,2(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 2);
	// li r9,0
	ctx.r9.s64 = 0;
	// lbz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 4);
	// lbz r8,3(r31)
	ctx.r8.u64 = REX_LOAD_U8(r31.u32 + 3);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r7,5(r31)
	ctx.r7.u64 = REX_LOAD_U8(r31.u32 + 5);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// clrlwi. r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r5,r10,r31
	ctx.r5.u64 = ctx.r10.u64 + r31.u64;
	// addi r10,r31,6
	ctx.r10.s64 = r31.s64 + 6;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// ble 0x822972f0
	if (!ctx.cr0.gt) goto loc_822972F0;
	// addi r11,r10,11
	ctx.r11.s64 = ctx.r10.s64 + 11;
loc_82296EC0:
	// lbz r6,-3(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + -3);
	// lbz r8,-2(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r4,-10(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + -10);
	// lbz r3,0(r10)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// rlwimi r8,r6,8,16,23
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFF00) | (ctx.r8.u64 & 0xFFFFFFFFFFFF00FF);
	// lbz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r31,-1(r11)
	r31.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// rlwimi r4,r3,8,16,23
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFF00) | (ctx.r4.u64 & 0xFFFFFFFFFFFF00FF);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// rlwimi r6,r31,8,16,23
	ctx.r6.u64 = (__builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 8) & 0xFF00) | (ctx.r6.u64 & 0xFFFFFFFFFFFF00FF);
	// clrlwi r4,r4,16
	ctx.r4.u64 = ctx.r4.u32 & 0xFFFF;
	// srawi r8,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 1;
	// clrlwi r6,r6,16
	ctx.r6.u64 = ctx.r6.u32 & 0xFFFF;
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// bne cr6,0x82296f2c
	if (!ctx.cr6.eq) goto loc_82296F2C;
	// lbz r4,-6(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + -6);
	// lbz r3,-7(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + -7);
	// rlwimi r4,r3,8,16,23
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFF00) | (ctx.r4.u64 & 0xFFFFFFFFFFFF00FF);
	// clrlwi r4,r4,22
	ctx.r4.u64 = ctx.r4.u32 & 0x3FF;
	// cmplwi cr6,r4,9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 9, ctx.xer);
	// bne cr6,0x82296f2c
	if (!ctx.cr6.eq) goto loc_82296F2C;
	// lbz r4,-4(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + -4);
	// lbz r3,-5(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + -5);
	// rlwimi r4,r3,8,16,23
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFF00) | (ctx.r4.u64 & 0xFFFFFFFFFFFF00FF);
	// clrlwi r4,r4,16
	ctx.r4.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// beq cr6,0x82296f44
	if (ctx.cr6.eq) goto loc_82296F44;
loc_82296F2C:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82296ec0
	if (ctx.cr6.lt) goto loc_82296EC0;
	// b 0x822972f0
	goto loc_822972F0;
loc_82296F44:
	// clrlwi r11,r8,16
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFF;
	// cmplwi cr6,r11,19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 19, ctx.xer);
	// blt cr6,0x82296f54
	if (ctx.cr6.lt) goto loc_82296F54;
	// li r8,18
	ctx.r8.s64 = 18;
loc_82296F54:
	// clrlwi. r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r11,r29,316
	ctx.r11.s64 = r29.s64 + 316;
	// li r9,0
	ctx.r9.s64 = 0;
	// ble 0x82296f9c
	if (!ctx.cr0.gt) goto loc_82296F9C;
	// clrlwi r10,r6,16
	ctx.r10.u64 = ctx.r6.u32 & 0xFFFF;
	// subf r10,r29,r10
	ctx.r10.u64 = ctx.r10.u64 - r29.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// addi r10,r10,-318
	ctx.r10.s64 = ctx.r10.s64 + -318;
loc_82296F78:
	// lbz r6,3(r10)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lbzu r8,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// rlwimi r6,r8,8,16,23
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFF00) | (ctx.r6.u64 & 0xFFFFFFFFFFFF00FF);
	// clrlwi r8,r6,16
	ctx.r8.u64 = ctx.r6.u32 & 0xFFFF;
	// sth r8,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// blt cr6,0x82296f78
	if (ctx.cr6.lt) goto loc_82296F78;
loc_82296F9C:
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r10,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// b 0x822972f0
	goto loc_822972F0;
loc_82296FA8:
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822d60a0
	ctx.lr = 0x82296FB8;
	sub_822D60A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822972d4
	if (ctx.cr0.eq) goto loc_822972D4;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822d60a0
	ctx.lr = 0x82296FD0;
	sub_822D60A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822972d4
	if (ctx.cr0.eq) goto loc_822972D4;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822d60a0
	ctx.lr = 0x82296FE8;
	sub_822D60A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822970c4
	if (!ctx.cr0.eq) goto loc_822970C4;
	// lbz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 12);
	// lis r10,24335
	ctx.r10.s64 = 1594818560;
	// lbz r9,13(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 13);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r8,14(r31)
	ctx.r8.u64 = REX_LOAD_U8(r31.u32 + 14);
	// lbz r7,15(r31)
	ctx.r7.u64 = REX_LOAD_U8(r31.u32 + 15);
	// ori r10,r10,15605
	ctx.r10.u64 = ctx.r10.u64 | 15605;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82297388
	if (!ctx.cr6.eq) goto loc_82297388;
	// lbz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 16);
	// lbz r10,17(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 17);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// sth r11,380(r29)
	REX_STORE_U16(r29.u32 + 380, ctx.r11.u16);
	// lbz r11,19(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 19);
	// lbz r10,18(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 18);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// sth r11,356(r29)
	REX_STORE_U16(r29.u32 + 356, ctx.r11.u16);
	// lbz r11,37(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 37);
	// lbz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 36);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// sth r11,370(r29)
	REX_STORE_U16(r29.u32 + 370, ctx.r11.u16);
	// lbz r11,39(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 39);
	// lbz r10,38(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 38);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// sth r11,374(r29)
	REX_STORE_U16(r29.u32 + 374, ctx.r11.u16);
	// lbz r11,41(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 41);
	// lbz r10,40(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 40);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// sth r11,372(r29)
	REX_STORE_U16(r29.u32 + 372, ctx.r11.u16);
	// lbz r11,43(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 43);
	// lbz r10,42(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 42);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// sth r11,376(r29)
	REX_STORE_U16(r29.u32 + 376, ctx.r11.u16);
	// lbz r11,45(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 45);
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// sth r11,378(r29)
	REX_STORE_U16(r29.u32 + 378, ctx.r11.u16);
	// lbz r11,51(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 51);
	// lbz r10,50(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 50);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// sth r11,354(r29)
	REX_STORE_U16(r29.u32 + 354, ctx.r11.u16);
	// b 0x822972f0
	goto loc_822972F0;
loc_822970C4:
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822d60a0
	ctx.lr = 0x822970D4;
	sub_822D60A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82297154
	if (!ctx.cr0.eq) goto loc_82297154;
	// lbz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 4);
	// lbz r10,5(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 5);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// sth r11,360(r29)
	REX_STORE_U16(r29.u32 + 360, ctx.r11.u16);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// lbz r10,7(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 7);
	// lbz r9,6(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 6);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// sth r10,362(r29)
	REX_STORE_U16(r29.u32 + 362, ctx.r10.u16);
	// lbz r8,9(r31)
	ctx.r8.u64 = REX_LOAD_U8(r31.u32 + 9);
	// lbz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 8);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// subf r10,r10,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r10.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sth r11,364(r29)
	REX_STORE_U16(r29.u32 + 364, ctx.r11.u16);
	// lbz r11,11(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 11);
	// lbz r10,10(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 10);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// sth r11,366(r29)
	REX_STORE_U16(r29.u32 + 366, ctx.r11.u16);
	// lbz r11,35(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 35);
	// lbz r10,34(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 34);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// sth r11,368(r29)
	REX_STORE_U16(r29.u32 + 368, ctx.r11.u16);
	// b 0x822972f0
	goto loc_822972F0;
loc_82297154:
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822d60a0
	ctx.lr = 0x82297164;
	sub_822D60A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822971f8
	if (!ctx.cr0.eq) goto loc_822971F8;
	// lbz r11,2(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 2);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// lbz r9,3(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 3);
	// addi r10,r31,4
	ctx.r10.s64 = r31.s64 + 4;
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// li r8,0
	ctx.r8.s64 = 0;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// clrlwi. r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// ble 0x822972f0
	if (!ctx.cr0.gt) goto loc_822972F0;
	// addi r11,r10,6
	ctx.r11.s64 = ctx.r10.s64 + 6;
loc_82297198:
	// lbz r9,-2(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r10,-1(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rlwimi r10,r9,8,16,23
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFF00) | (ctx.r10.u64 & 0xFFFFFFFFFFFF00FF);
	// lbz r9,1(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// rlwimi r5,r10,8,0,23
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00) | (ctx.r5.u64 & 0xFFFFFFFF000000FF);
	// rlwimi r9,r5,8,0,23
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00) | (ctx.r9.u64 & 0xFFFFFFFF000000FF);
	// add r10,r9,r7
	ctx.r10.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lbz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r5,1(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// or r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 | ctx.r5.u64;
	// clrlwi. r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x822971d8
	if (!ctx.cr0.eq) goto loc_822971D8;
	// stw r10,312(r29)
	REX_STORE_U32(r29.u32 + 312, ctx.r10.u32);
loc_822971D8:
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// bne cr6,0x822971e4
	if (!ctx.cr6.eq) goto loc_822971E4;
	// stw r10,312(r29)
	REX_STORE_U32(r29.u32 + 312, ctx.r10.u32);
loc_822971E4:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x82297198
	if (ctx.cr6.lt) goto loc_82297198;
	// b 0x822972f0
	goto loc_822972F0;
loc_822971F8:
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822d60a0
	ctx.lr = 0x82297208;
	sub_822D60A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822972c8
	if (ctx.cr0.eq) goto loc_822972C8;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822d60a0
	ctx.lr = 0x82297220;
	sub_822D60A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822972c8
	if (ctx.cr0.eq) goto loc_822972C8;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822d60a0
	ctx.lr = 0x82297238;
	sub_822D60A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8229724c
	if (!ctx.cr0.eq) goto loc_8229724C;
	// stw r31,304(r29)
	REX_STORE_U32(r29.u32 + 304, r31.u32);
	// stw r28,308(r29)
	REX_STORE_U32(r29.u32 + 308, r28.u32);
	// b 0x822972f0
	goto loc_822972F0;
loc_8229724C:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822d60a0
	ctx.lr = 0x8229725C;
	sub_822D60A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82297270
	if (!ctx.cr0.eq) goto loc_82297270;
	// stw r31,24(r29)
	REX_STORE_U32(r29.u32 + 24, r31.u32);
	// stw r28,28(r29)
	REX_STORE_U32(r29.u32 + 28, r28.u32);
	// b 0x822972f0
	goto loc_822972F0;
loc_82297270:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822d60a0
	ctx.lr = 0x82297280;
	sub_822D60A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822972f0
	if (!ctx.cr0.eq) goto loc_822972F0;
	// lbz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 4);
	// addi r3,r29,32
	ctx.r3.s64 = r29.s64 + 32;
	// lbz r10,5(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 5);
	// addi r4,r31,8
	ctx.r4.s64 = r31.s64 + 8;
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r9,6(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 6);
	// lbz r8,7(r31)
	ctx.r8.u64 = REX_LOAD_U8(r31.u32 + 7);
	// li r5,256
	ctx.r5.s64 = 256;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// stw r11,288(r29)
	REX_STORE_U32(r29.u32 + 288, ctx.r11.u32);
	// bl 0x822d4fa0
	ctx.lr = 0x822972C4;
	sub_822D4FA0(ctx, base);
	// b 0x822972f0
	goto loc_822972F0;
loc_822972C8:
	// stw r31,16(r29)
	REX_STORE_U32(r29.u32 + 16, r31.u32);
	// stw r28,20(r29)
	REX_STORE_U32(r29.u32 + 20, r28.u32);
	// b 0x822972f0
	goto loc_822972F0;
loc_822972D4:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// stw r30,8(r29)
	REX_STORE_U32(r29.u32 + 8, r30.u32);
	// stw r28,12(r29)
	REX_STORE_U32(r29.u32 + 12, r28.u32);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822972f0
	if (ctx.cr6.eq) goto loc_822972F0;
	// stw r31,4(r29)
	REX_STORE_U32(r29.u32 + 4, r31.u32);
loc_822972F0:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r14,r14,1
	r14.s64 = r14.s64 + 1;
	// addi r27,r27,16
	r27.s64 = r27.s64 + 16;
	// cmpw cr6,r14,r11
	ctx.cr6.compare<int32_t>(r14.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82296e18
	if (ctx.cr6.lt) goto loc_82296E18;
loc_82297304:
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82297388
	if (ctx.cr6.eq) goto loc_82297388;
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82297388
	if (ctx.cr6.eq) goto loc_82297388;
	// lwz r11,312(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 312);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82297388
	if (ctx.cr6.eq) goto loc_82297388;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82297350
	if (ctx.cr6.eq) goto loc_82297350;
	// lwz r10,24(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 24);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82297388
	if (ctx.cr6.eq) goto loc_82297388;
	// lwz r10,28(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 28);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82297388
	if (ctx.cr6.eq) goto loc_82297388;
loc_82297350:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82297370
	if (ctx.cr6.eq) goto loc_82297370;
	// lhz r11,354(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 354);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82297370
	if (ctx.cr6.eq) goto loc_82297370;
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 20);
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// b 0x82297378
	goto loc_82297378;
loc_82297370:
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 20);
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
loc_82297378:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r11,358(r29)
	REX_STORE_U16(r29.u32 + 358, ctx.r11.u16);
	// b 0x8229738c
	goto loc_8229738C;
loc_82297388:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8229738C:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_822B15D0) {
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
	ctx.lr = 0x822B15D8;
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm. r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822b15fc
	if (ctx.cr0.eq) goto loc_822B15FC;
	// rlwinm r11,r11,0,20,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFEFFF;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
loc_822B15FC:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// rlwinm. r10,r11,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822b1620
	if (ctx.cr0.eq) goto loc_822B1620;
	// rlwinm r11,r11,0,19,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFDFFF;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x822b1500
	ctx.lr = 0x822B161C;
	sub_822B1500(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
loc_822B1620:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// rlwinm. r8,r11,0,17,17
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lfs f13,1992(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,1996(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// beq 0x822b1694
	if (ctx.cr0.eq) goto loc_822B1694;
	// rlwinm r11,r11,0,18,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFBFFF;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
	// lfs f12,112(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,116(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 116);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,120(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 120);
	ctx.f10.f64 = double(temp.f32);
	// stfs f0,196(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 196, temp.u32);
	// stfs f0,200(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 200, temp.u32);
	// stfs f0,204(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 204, temp.u32);
	// stfs f0,208(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 208, temp.u32);
	// stfs f0,216(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 216, temp.u32);
	// stfs f0,220(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 220, temp.u32);
	// stfs f0,224(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 224, temp.u32);
	// stfs f0,228(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 228, temp.u32);
	// stfs f0,236(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 236, temp.u32);
	// stfs f0,240(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 240, temp.u32);
	// stfs f0,244(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 244, temp.u32);
	// stfs f0,248(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 248, temp.u32);
	// stfs f13,252(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 252, temp.u32);
	// stfs f12,192(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 192, temp.u32);
	// stfs f11,212(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + 212, temp.u32);
	// stfs f10,232(r31)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r31.u32 + 232, temp.u32);
loc_822B1694:
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// rlwinm. r11,r10,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822b1710
	if (ctx.cr0.eq) goto loc_822B1710;
	// lwz r11,540(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 540);
	// rlwinm r10,r10,0,17,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r10.u32);
	// beq cr6,0x822b1710
	if (ctx.cr6.eq) goto loc_822B1710;
	// lfs f12,112(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f11,116(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 116);
	ctx.f11.f64 = double(temp.f32);
	// fdivs f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// lfs f10,120(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 120);
	ctx.f10.f64 = double(temp.f32);
	// fdivs f11,f13,f11
	ctx.f11.f64 = double(float(ctx.f13.f64 / ctx.f11.f64));
	// fdivs f10,f13,f10
	ctx.f10.f64 = double(float(ctx.f13.f64 / ctx.f10.f64));
	// stfs f0,260(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 260, temp.u32);
	// stfs f0,264(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 264, temp.u32);
	// stfs f0,268(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 268, temp.u32);
	// stfs f0,272(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 272, temp.u32);
	// stfs f0,280(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 280, temp.u32);
	// stfs f0,284(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 284, temp.u32);
	// stfs f0,288(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 288, temp.u32);
	// stfs f0,292(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 292, temp.u32);
	// stfs f0,300(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 300, temp.u32);
	// stfs f0,304(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 304, temp.u32);
	// stfs f0,308(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 308, temp.u32);
	// stfs f0,312(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 312, temp.u32);
	// stfs f13,316(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 316, temp.u32);
	// stfs f12,256(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 256, temp.u32);
	// stfs f11,276(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + 276, temp.u32);
	// stfs f10,296(r31)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r31.u32 + 296, temp.u32);
loc_822B1710:
	// clrlwi. r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822b1950
	if (ctx.cr0.eq) goto loc_822B1950;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r30,r31,320
	r30.s64 = r31.s64 + 320;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// beq cr6,0x822b1880
	if (ctx.cr6.eq) goto loc_822B1880;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x822b1870
	if (ctx.cr6.eq) goto loc_822B1870;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,608(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 608);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,612(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 612);
	ctx.f11.f64 = double(temp.f32);
	// addi r5,r31,192
	ctx.r5.s64 = r31.s64 + 192;
	// lfs f10,616(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 616);
	ctx.f10.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stfs f13,320(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 320, temp.u32);
	// addi r29,r31,608
	r29.s64 = r31.s64 + 608;
	// stfs f0,324(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 324, temp.u32);
	// lfs f31,2024(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2024);
	f31.f64 = double(temp.f32);
	// fmuls f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 * f31.f64));
	// stfs f0,328(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 328, temp.u32);
	// fmuls f11,f11,f31
	ctx.f11.f64 = double(float(ctx.f11.f64 * f31.f64));
	// stfs f0,332(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 332, temp.u32);
	// fmuls f10,f10,f31
	ctx.f10.f64 = double(float(ctx.f10.f64 * f31.f64));
	// stfs f0,336(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 336, temp.u32);
	// stfs f13,340(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 340, temp.u32);
	// stfs f0,344(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 344, temp.u32);
	// stfs f0,348(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 348, temp.u32);
	// stfs f0,352(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 352, temp.u32);
	// stfs f0,356(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 356, temp.u32);
	// stfs f13,360(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 360, temp.u32);
	// stfs f0,364(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 364, temp.u32);
	// stfs f13,380(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 380, temp.u32);
	// stfs f12,368(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 368, temp.u32);
	// stfs f11,372(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + 372, temp.u32);
	// stfs f10,376(r31)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r31.u32 + 376, temp.u32);
	// bl 0x8229f270
	ctx.lr = 0x822B17A4;
	sub_8229F270(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x822a9900
	ctx.lr = 0x822B17B4;
	sub_822A9900(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r5,r31,624
	ctx.r5.s64 = r31.s64 + 624;
	// bl 0x822a9900
	ctx.lr = 0x822B17C4;
	sub_822A9900(ctx, base);
	// lfs f0,640(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 640);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,644(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 644);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * f31.f64));
	// lfs f12,648(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 648);
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
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r29,r31,640
	r29.s64 = r31.s64 + 640;
	// bl 0x822a9900
	ctx.lr = 0x822B17FC;
	sub_822A9900(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// rlwinm. r11,r11,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822b183c
	if (ctx.cr0.eq) goto loc_822B183C;
	// lfs f0,512(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 512);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f13,516(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 516);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f12,520(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 520);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x822b0b50
	ctx.lr = 0x822B182C;
	sub_822B0B50(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8229f270
	ctx.lr = 0x822B183C;
	sub_8229F270(ctx, base);
loc_822B183C:
	// addi r5,r31,128
	ctx.r5.s64 = r31.s64 + 128;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8229f270
	ctx.lr = 0x822B184C;
	sub_8229F270(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822a9900
	ctx.lr = 0x822B185C;
	sub_822A9900(ctx, base);
	// addi r5,r31,656
	ctx.r5.s64 = r31.s64 + 656;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822a9900
	ctx.lr = 0x822B186C;
	sub_822A9900(ctx, base);
	// b 0x822b1934
	goto loc_822B1934;
loc_822B1870:
	// addi r4,r31,192
	ctx.r4.s64 = r31.s64 + 192;
	// bl 0x821f3f40
	ctx.lr = 0x822B1878;
	sub_821F3F40(ctx, base);
	// addi r5,r31,128
	ctx.r5.s64 = r31.s64 + 128;
	// b 0x822b190c
	goto loc_822B190C;
loc_822B1880:
	// addi r4,r31,192
	ctx.r4.s64 = r31.s64 + 192;
	// bl 0x821f3f40
	ctx.lr = 0x822B1888;
	sub_821F3F40(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// rlwinm. r11,r11,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822b18c8
	if (ctx.cr0.eq) goto loc_822B18C8;
	// lfs f0,512(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 512);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f13,516(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 516);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f12,520(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 520);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x822b0b50
	ctx.lr = 0x822B18B8;
	sub_822B0B50(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8229f270
	ctx.lr = 0x822B18C8;
	sub_8229F270(ctx, base);
loc_822B18C8:
	// addi r5,r31,128
	ctx.r5.s64 = r31.s64 + 128;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8229f270
	ctx.lr = 0x822B18D8;
	sub_8229F270(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// rlwinm. r11,r11,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822b1918
	if (ctx.cr0.eq) goto loc_822B1918;
	// lfs f0,672(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 672);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f13,676(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 676);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f12,680(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 680);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x822b0b50
	ctx.lr = 0x822B1908;
	sub_822B0B50(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
loc_822B190C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8229f270
	ctx.lr = 0x822B1918;
	sub_8229F270(ctx, base);
loc_822B1918:
	// lwz r11,540(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 540);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b1934
	if (ctx.cr6.eq) goto loc_822B1934;
	// addi r5,r31,256
	ctx.r5.s64 = r31.s64 + 256;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8229f270
	ctx.lr = 0x822B1934;
	sub_8229F270(ctx, base);
loc_822B1934:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r5,r31,64
	ctx.r5.s64 = r31.s64 + 64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822a9900
	ctx.lr = 0x822B1944;
	sub_822A9900(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
loc_822B1950:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_822C6888) {
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
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,31492(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 31492);
	// lwz r3,8(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x822a9aa8
	ctx.lr = 0x822C68B0;
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
	ctx.lr = 0x822C68C8;
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

DEFINE_REX_FUNC(sub_822C6F48) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// lwz r9,52(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r11,31464(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 31464);
	// addi r4,r11,1248
	ctx.r4.s64 = ctx.r11.s64 + 1248;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_822C80A8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lwz r10,31776(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 31776);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822c80c4
	if (ctx.cr6.eq) goto loc_822C80C4;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_822C80C4:
	// b 0x822d8e50
	sub_822D8E50(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822C8800) {
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
	// addi r3,r31,31640
	ctx.r3.s64 = r31.s64 + 31640;
	// bl 0x823cd378
	ctx.lr = 0x822C881C;
	sub_823CD378(ctx, base);
	// lis r9,-32163
	ctx.r9.s64 = -2107834368;
	// lis r8,-32163
	ctx.r8.s64 = -2107834368;
	// lfd f0,31640(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(r31.u32 + 31640);
	// lis r7,-32163
	ctx.r7.s64 = -2107834368;
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,31648(r9)
	REX_STORE_U8(ctx.r9.u32 + 31648, ctx.r11.u8);
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// std r10,31664(r8)
	REX_STORE_U64(ctx.r8.u32 + 31664, ctx.r10.u64);
	// stfd f0,31632(r7)
	REX_STORE_U64(ctx.r7.u32 + 31632, ctx.f0.u64);
	// addi r3,r11,31656
	ctx.r3.s64 = ctx.r11.s64 + 31656;
	// bl 0x82208828
	ctx.lr = 0x822C8850;
	sub_82208828(ctx, base);
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

DEFINE_REX_FUNC(sub_822C9620) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x822C9628;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lbz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 16);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r29,-32040(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + -32040);
	// beq 0x822c96b0
	if (ctx.cr0.eq) goto loc_822C96B0;
loc_822C9644:
	// lwz r3,12(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 12);
	// bl 0x823cd948
	ctx.lr = 0x822C964C;
	sub_823CD948(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,12(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 12);
	// bl 0x8220aa00
	ctx.lr = 0x822C9658;
	sub_8220AA00(ctx, base);
	// b 0x822c9698
	goto loc_822C9698;
loc_822C965C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822c9590
	ctx.lr = 0x822C9668;
	sub_822C9590(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822c96a4
	if (ctx.cr0.eq) goto loc_822C96A4;
	// lwz r31,80(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822C9690;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
loc_822C9698:
	// lbz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x822c965c
	if (!ctx.cr0.eq) goto loc_822C965C;
loc_822C96A4:
	// lbz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x822c9644
	if (!ctx.cr0.eq) goto loc_822C9644;
loc_822C96B0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_822CB430) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r10,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822cb458
	if (!ctx.cr0.eq) goto loc_822CB458;
loc_822CB450:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822cb478
	goto loc_822CB478;
loc_822CB458:
	// lwz r10,244(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 244);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x822cb450
	if (!ctx.cr6.eq) goto loc_822CB450;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x822e76c8
	ctx.lr = 0x822CB470;
	sub_822E76C8(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_822CB478:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822CCBB8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,8(r4)
	r31.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(r31.s32, -1, ctx.xer);
	// bne cr6,0x822ccbec
	if (!ctx.cr6.eq) goto loc_822CCBEC;
loc_822CCBE4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822ccc74
	goto loc_822CCC74;
loc_822CCBEC:
	// lwz r3,4(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 4);
	// rlwinm. r11,r31,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822ccc04
	if (ctx.cr0.eq) goto loc_822CCC04;
	// clrlwi r5,r31,1
	ctx.r5.u64 = r31.u32 & 0x7FFFFFFF;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822ccc0c
	goto loc_822CCC0C;
loc_822CCC04:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
loc_822CCC0C:
	// bl 0x822d2268
	ctx.lr = 0x822CCC10;
	sub_822D2268(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ccbe4
	if (ctx.cr6.eq) goto loc_822CCBE4;
	// bl 0x822d0960
	ctx.lr = 0x822CCC1C;
	sub_822D0960(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x822ccbe4
	if (ctx.cr6.eq) goto loc_822CCBE4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r9,5
	ctx.r9.s64 = 5;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,-1
	ctx.r7.s64 = -1;
	// stb r9,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// lfs f0,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stb r8,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, ctx.r8.u8);
	// lfs f13,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(f31.f64, ctx.f0.f64);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// sth r7,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r7.u16);
	// bgt cr6,0x822ccc60
	if (ctx.cr6.gt) goto loc_822CCC60;
	// fmr f31,f0
	f31.f64 = ctx.f0.f64;
loc_822CCC60:
	// stfs f31,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,20(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 20);
	// bl 0x822cdf98
	ctx.lr = 0x822CCC70;
	sub_822CDF98(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_822CCC74:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

DEFINE_REX_FUNC(sub_822D0588) {
	REX_FUNC_PROLOGUE();
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e80
	ctx.lr = 0x822D0590;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// li r11,8
	ctx.r11.s64 = 8;
	// lfs f0,1996(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// li r10,5
	ctx.r10.s64 = 5;
	// stfs f0,-64(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -64, temp.u32);
	// lwz r5,-64(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -64);
	// stfs f0,-64(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -64, temp.u32);
	// lwz r4,-64(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -64);
	// stfs f0,-64(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -64, temp.u32);
	// lwz r31,-64(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -64);
	// stfs f0,-64(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -64, temp.u32);
	// lwz r30,-64(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -64);
	// lfs f11,1992(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	ctx.f11.f64 = double(temp.f32);
	// li r7,6
	ctx.r7.s64 = 6;
	// stfs f11,-64(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + -64, temp.u32);
	// lwz r29,-64(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -64);
	// lfs f13,2344(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 2344);
	ctx.f13.f64 = double(temp.f32);
	// li r8,27
	ctx.r8.s64 = 27;
	// stfs f13,-64(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -64, temp.u32);
	// lwz r28,-64(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -64);
	// stfs f13,-64(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -64, temp.u32);
	// lwz r27,-64(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -64);
	// stfs f13,-64(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -64, temp.u32);
	// lwz r26,-64(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -64);
	// lfs f12,-23932(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + -23932);
	ctx.f12.f64 = double(temp.f32);
	// li r9,4
	ctx.r9.s64 = 4;
	// stfs f12,-64(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -64, temp.u32);
	// lwz r6,-64(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -64);
	// stw r10,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stb r10,16(r3)
	REX_STORE_U8(ctx.r3.u32 + 16, ctx.r10.u8);
	// stb r10,17(r3)
	REX_STORE_U8(ctx.r3.u32 + 17, ctx.r10.u8);
	// stb r7,18(r3)
	REX_STORE_U8(ctx.r3.u32 + 18, ctx.r7.u8);
	// stb r7,19(r3)
	REX_STORE_U8(ctx.r3.u32 + 19, ctx.r7.u8);
	// stb r8,20(r3)
	REX_STORE_U8(ctx.r3.u32 + 20, ctx.r8.u8);
	// stb r8,21(r3)
	REX_STORE_U8(ctx.r3.u32 + 21, ctx.r8.u8);
	// stb r11,22(r3)
	REX_STORE_U8(ctx.r3.u32 + 22, ctx.r11.u8);
	// stb r11,23(r3)
	REX_STORE_U8(ctx.r3.u32 + 23, ctx.r11.u8);
	// stb r11,24(r3)
	REX_STORE_U8(ctx.r3.u32 + 24, ctx.r11.u8);
	// stb r9,25(r3)
	REX_STORE_U8(ctx.r3.u32 + 25, ctx.r9.u8);
	// stb r11,26(r3)
	REX_STORE_U8(ctx.r3.u32 + 26, ctx.r11.u8);
	// stb r9,27(r3)
	REX_STORE_U8(ctx.r3.u32 + 27, ctx.r9.u8);
	// stw r6,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r6.u32);
	// stw r5,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r5.u32);
	// stw r4,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r4.u32);
	// stw r31,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, r31.u32);
	// stw r30,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, r30.u32);
	// stw r29,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, r29.u32);
	// stw r28,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, r28.u32);
	// stw r27,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, r27.u32);
	// stw r26,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r26.u32);
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_822D2FB8) {
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
	ctx.lr = 0x822D2FC0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// rlwinm. r11,r4,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d301c
	if (ctx.cr0.eq) goto loc_822D301C;
	// lwz r10,-4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + -4);
	// addi r29,r3,-4
	r29.s64 = ctx.r3.s64 + -4;
	// mulli r11,r10,40
	ctx.r11.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(40));
	// addic. r31,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	r31.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// add r30,r11,r30
	r30.u64 = ctx.r11.u64 + r30.u64;
	// blt 0x822d3004
	if (ctx.cr0.lt) goto loc_822D3004;
	// li r28,-1
	r28.s64 = -1;
loc_822D2FF0:
	// stwu r28,-40(r30)
	ea = -40 + r30.u32;
	REX_STORE_U32(ea, r28.u32);
	r30.u32 = ea;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// bl 0x822c8908
	ctx.lr = 0x822D2FFC;
	sub_822C8908(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bge 0x822d2ff0
	if (!ctx.cr0.lt) goto loc_822D2FF0;
loc_822D3004:
	// clrlwi. r11,r27,31
	ctx.r11.u64 = r27.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d3014
	if (ctx.cr0.eq) goto loc_822D3014;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822c80a8
	ctx.lr = 0x822D3014;
	sub_822C80A8(ctx, base);
loc_822D3014:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x822d3040
	goto loc_822D3040;
loc_822D301C:
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// bl 0x822c8908
	ctx.lr = 0x822D302C;
	sub_822C8908(ctx, base);
	// clrlwi. r11,r27,31
	ctx.r11.u64 = r27.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d303c
	if (ctx.cr0.eq) goto loc_822D303C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c80a8
	ctx.lr = 0x822D303C;
	sub_822C80A8(ctx, base);
loc_822D303C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_822D3040:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(__savegprlr_29) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
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

DEFINE_REX_FUNC(__restgprlr_21) {
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

DEFINE_REX_FUNC(__restfpr_23) {
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
	// lfd f23,-72(r12)
	ctx.fpscr.disableFlushMode();
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

DEFINE_REX_FUNC(sub_822D64B0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_822D64B4:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x822d64b4
	if (!ctx.cr0.eq) goto loc_822D64B4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822d64f4
	if (ctx.cr6.eq) goto loc_822D64F4;
	// addi r9,r4,-1
	ctx.r9.s64 = ctx.r4.s64 + -1;
loc_822D64D4:
	// lbzu r10,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// beqlr 
	if (ctx.cr0.eq) return;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x822d64d4
	if (!ctx.cr6.eq) goto loc_822D64D4;
loc_822D64F4:
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822D7E58) {
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
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822d7f08
	if (ctx.cr6.eq) goto loc_822D7F08;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d7e94
	if (!ctx.cr6.eq) goto loc_822D7E94;
loc_822D7E78:
	// bl 0x822db6c0
	ctx.lr = 0x822D7E7C;
	sub_822DB6C0(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x822d6910
	ctx.lr = 0x822D7E88;
	sub_822D6910(ctx, base);
	// lis r3,32767
	ctx.r3.s64 = 2147418112;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// b 0x822d7f0c
	goto loc_822D7F0C;
loc_822D7E94:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822d7e78
	if (ctx.cr6.eq) goto loc_822D7E78;
	// subf r8,r4,r3
	ctx.r8.u64 = ctx.r3.u64 - ctx.r4.u64;
loc_822D7EA0:
	// lhzx r11,r8,r4
	ctx.r11.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r4.u32);
	// cmplwi cr6,r11,65
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65, ctx.xer);
	// blt cr6,0x822d7eb8
	if (ctx.cr6.lt) goto loc_822D7EB8;
	// cmplwi cr6,r11,90
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 90, ctx.xer);
	// addi r10,r11,32
	ctx.r10.s64 = ctx.r11.s64 + 32;
	// ble cr6,0x822d7ebc
	if (!ctx.cr6.gt) goto loc_822D7EBC;
loc_822D7EB8:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_822D7EBC:
	// lhz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 0);
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r11,65
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65, ctx.xer);
	// blt cr6,0x822d7ed8
	if (ctx.cr6.lt) goto loc_822D7ED8;
	// cmplwi cr6,r11,90
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 90, ctx.xer);
	// bgt cr6,0x822d7ed8
	if (ctx.cr6.gt) goto loc_822D7ED8;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
loc_822D7ED8:
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// addi r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 2;
	// beq 0x822d7efc
	if (ctx.cr0.eq) goto loc_822D7EFC;
	// clrlwi. r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822d7efc
	if (ctx.cr0.eq) goto loc_822D7EFC;
	// clrlwi r7,r11,16
	ctx.r7.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x822d7ea0
	if (ctx.cr6.eq) goto loc_822D7EA0;
loc_822D7EFC:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
loc_822D7F08:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_822D7F0C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(__savevmx_91) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(__restvmx_91) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(sub_822DCCF0) {
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
	// cmpwi cr6,r3,20
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 20, ctx.xer);
	// bge cr6,0x822dcd24
	if (!ctx.cr6.lt) goto loc_822DCD24;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x822dbd80
	ctx.lr = 0x822DCD14;
	sub_822DBD80(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// b 0x822dcd2c
	goto loc_822DCD2C;
loc_822DCD24:
	// addi r3,r31,32
	ctx.r3.s64 = r31.s64 + 32;
	// bl 0x824d438c
	ctx.lr = 0x822DCD2C;
	__imp__RtlEnterCriticalSection(ctx, base);
loc_822DCD2C:
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

DEFINE_REX_FUNC(sub_822E04A0) {
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
	ctx.lr = 0x822E04A8;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r19,r5
	r19.u64 = ctx.r5.u64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// mr r21,r6
	r21.u64 = ctx.r6.u64;
	// mr r23,r7
	r23.u64 = ctx.r7.u64;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// mr r26,r9
	r26.u64 = ctx.r9.u64;
	// mr r18,r10
	r18.u64 = ctx.r10.u64;
	// bl 0x822df8e0
	ctx.lr = 0x822E04DC;
	sub_822DF8E0(ctx, base);
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// blt cr6,0x822e04f4
	if (ctx.cr6.lt) goto loc_822E04F4;
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 4);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822e04f8
	if (ctx.cr6.lt) goto loc_822E04F8;
loc_822E04F4:
	// bl 0x822dbe48
	ctx.lr = 0x822E04F8;
	sub_822DBE48(ctx, base);
loc_822E04F8:
	// lis r11,-8083
	ctx.r11.s64 = -529727488;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// ori r28,r11,29539
	r28.u64 = ctx.r11.u64 | 29539;
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r28.u32, ctx.xer);
	// bne cr6,0x822e0710
	if (!ctx.cr6.eq) goto loc_822E0710;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lis r10,6547
	ctx.r10.s64 = 429064192;
	// lis r9,6547
	ctx.r9.s64 = 429064192;
	// lis r8,6547
	ctx.r8.s64 = 429064192;
	// ori r30,r10,1312
	r30.u64 = ctx.r10.u64 | 1312;
	// ori r29,r9,1313
	r29.u64 = ctx.r9.u64 | 1313;
	// ori r27,r8,1314
	r27.u64 = ctx.r8.u64 | 1314;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x822e05d4
	if (!ctx.cr6.eq) goto loc_822E05D4;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// beq cr6,0x822e054c
	if (ctx.cr6.eq) goto loc_822E054C;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// beq cr6,0x822e054c
	if (ctx.cr6.eq) goto loc_822E054C;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r27.u32, ctx.xer);
	// bne cr6,0x822e05d4
	if (!ctx.cr6.eq) goto loc_822E05D4;
loc_822E054C:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822e05d4
	if (!ctx.cr6.eq) goto loc_822E05D4;
	// bl 0x822d6ff8
	ctx.lr = 0x822E055C;
	sub_822D6FF8(ctx, base);
	// lwz r11,124(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 124);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e0708
	if (ctx.cr6.eq) goto loc_822E0708;
	// bl 0x822d6ff8
	ctx.lr = 0x822E056C;
	sub_822D6FF8(ctx, base);
	// lwz r31,124(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 124);
	// bl 0x822d6ff8
	ctx.lr = 0x822E0574;
	sub_822D6FF8(ctx, base);
	// lwz r19,128(r3)
	r19.u64 = REX_LOAD_U32(ctx.r3.u32 + 128);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e4380
	ctx.lr = 0x822E0584;
	sub_822E4380(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822e0590
	if (!ctx.cr0.eq) goto loc_822E0590;
	// bl 0x822dbe48
	ctx.lr = 0x822E0590;
	sub_822DBE48(ctx, base);
loc_822E0590:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r28.u32, ctx.xer);
	// bne cr6,0x822e0710
	if (!ctx.cr6.eq) goto loc_822E0710;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x822e05d4
	if (!ctx.cr6.eq) goto loc_822E05D4;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// beq cr6,0x822e05c4
	if (ctx.cr6.eq) goto loc_822E05C4;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// beq cr6,0x822e05c4
	if (ctx.cr6.eq) goto loc_822E05C4;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r27.u32, ctx.xer);
	// bne cr6,0x822e05d4
	if (!ctx.cr6.eq) goto loc_822E05D4;
loc_822E05C4:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822e05d4
	if (!ctx.cr6.eq) goto loc_822E05D4;
	// bl 0x822dbe48
	ctx.lr = 0x822E05D4;
	sub_822DBE48(ctx, base);
loc_822E05D4:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r28.u32, ctx.xer);
	// bne cr6,0x822e0710
	if (!ctx.cr6.eq) goto loc_822E0710;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x822e0710
	if (!ctx.cr6.eq) goto loc_822E0710;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// beq cr6,0x822e0608
	if (ctx.cr6.eq) goto loc_822E0608;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// beq cr6,0x822e0608
	if (ctx.cr6.eq) goto loc_822E0608;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r27.u32, ctx.xer);
	// bne cr6,0x822e0710
	if (!ctx.cr6.eq) goto loc_822E0710;
loc_822E0608:
	// lwz r11,12(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x822e0708
	if (!ctx.cr6.gt) goto loc_822E0708;
	// mr r8,r21
	ctx.r8.u64 = r21.u64;
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x822d9518
	ctx.lr = 0x822E0630;
	sub_822D9518(ctx, base);
	// lwz r24,96(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(r24.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x822e0708
	if (!ctx.cr6.lt) goto loc_822E0708;
	// addi r25,r3,16
	r25.s64 = ctx.r3.s64 + 16;
loc_822E0644:
	// lwz r11,-16(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + -16);
	// addi r26,r25,-16
	r26.s64 = r25.s64 + -16;
	// cmpw cr6,r11,r20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r20.s32, ctx.xer);
	// bgt cr6,0x822e06f0
	if (ctx.cr6.gt) goto loc_822E06F0;
	// lwz r11,-12(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + -12);
	// cmpw cr6,r20,r11
	ctx.cr6.compare<int32_t>(r20.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x822e06f0
	if (ctx.cr6.gt) goto loc_822E06F0;
	// lwz r27,-4(r25)
	r27.u64 = REX_LOAD_U32(r25.u32 + -4);
	// lwz r7,0(r25)
	ctx.r7.u64 = REX_LOAD_U32(r25.u32 + 0);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// ble cr6,0x822e06f0
	if (!ctx.cr6.gt) goto loc_822E06F0;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r28,r11,4
	r28.s64 = ctx.r11.s64 + 4;
	// lwz r29,0(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_822E0680:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r30,r29
	r30.u64 = r29.u64;
	// cmpwi r29,0
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble 0x822e06b4
	if (!ctx.cr0.gt) goto loc_822E06B4;
	// lwz r5,28(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 28);
loc_822E0694:
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// lwz r4,0(r6)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x822df940
	ctx.lr = 0x822E06A0;
	sub_822DF940(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822e06c4
	if (!ctx.cr0.eq) goto loc_822E06C4;
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// bgt 0x822e0694
	if (ctx.cr0.gt) goto loc_822E0694;
loc_822E06B4:
	// addic. r27,r27,-1
	ctx.xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
	// bgt 0x822e0680
	if (ctx.cr0.gt) goto loc_822E0680;
	// b 0x822e06f0
	goto loc_822E06F0;
loc_822E06C4:
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// stw r18,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r18.u32);
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e01e0
	ctx.lr = 0x822E06EC;
	sub_822E01E0(ctx, base);
	// lwz r24,96(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
loc_822E06F0:
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// addi r25,r25,20
	r25.s64 = r25.s64 + 20;
	// stw r24,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r24.u32);
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(r24.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822e0644
	if (ctx.cr6.lt) goto loc_822E0644;
loc_822E0708:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822d4eb0
	return;
loc_822E0710:
	// lwz r11,12(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x822e0708
	if (!ctx.cr6.gt) goto loc_822E0708;
	// clrlwi. r11,r25,24
	ctx.r11.u64 = r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822e074c
	if (!ctx.cr0.eq) goto loc_822E074C;
	// mr r10,r18
	ctx.r10.u64 = r18.u64;
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// mr r8,r20
	ctx.r8.u64 = r20.u64;
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e0328
	ctx.lr = 0x822E0748;
	sub_822E0328(ctx, base);
	// b 0x822e0708
	goto loc_822E0708;
loc_822E074C:
	// bl 0x822dbde8
	ctx.lr = 0x822E0750;
	sub_822DBDE8(ctx, base);
}

DEFINE_REX_FUNC(sub_822ED8B0) {
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
	ctx.lr = 0x822ED8B8;
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
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mr r26,r9
	r26.u64 = ctx.r9.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822ED8E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822ed9b4
	if (ctx.cr6.lt) goto loc_822ED9B4;
	// lis r8,24576
	ctx.r8.s64 = 1610612736;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r8,r8,128
	ctx.r8.u64 = ctx.r8.u64 | 128;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822099f8
	ctx.lr = 0x822ED910;
	sub_822099F8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// stw r3,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r3.u32);
	// bne cr6,0x822ed95c
	if (!ctx.cr6.eq) goto loc_822ED95C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822ED930;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822ed9b0
	if (ctx.cr6.lt) goto loc_822ED9B0;
loc_822ED93C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,44(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 44);
	// bl 0x823ce2f8
	ctx.lr = 0x822ED948;
	sub_823CE2F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822ed964
	if (ctx.cr6.eq) goto loc_822ED964;
	// ld r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,64(r31)
	REX_STORE_U64(r31.u32 + 64, ctx.r11.u64);
	// b 0x822ed97c
	goto loc_822ED97C;
loc_822ED95C:
	// li r30,0
	r30.s64 = 0;
	// b 0x822ed93c
	goto loc_822ED93C;
loc_822ED964:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822ED978;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_822ED97C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x822ed9b0
	if (ctx.cr6.lt) goto loc_822ED9B0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
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
	// lwz r10,116(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822ED9A8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
loc_822ED9B0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_822ED9B4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_822F3600) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822f3620
	if (ctx.cr6.eq) goto loc_822F3620;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822f3620
	if (ctx.cr6.eq) goto loc_822F3620;
	// lwz r11,208(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 208);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_822F3620:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822F45F8) {
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
	// lwz r8,68(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 68);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_822F48A8) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r11,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r11,64(r3)
	REX_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stw r11,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822F4D98) {
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
	// std r11,24(r9)
	REX_STORE_U64(ctx.r9.u32 + 24, ctx.r11.u64);
	// stw r11,32(r9)
	REX_STORE_U32(ctx.r9.u32 + 32, ctx.r11.u32);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r5,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lwz r7,36(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 36);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x822F4DE0;
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

DEFINE_REX_FUNC(sub_822F6060) {
	REX_FUNC_PROLOGUE();
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// b 0x824d459c
	__imp__KeWaitForSingleObject(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822F60F0) {
	REX_FUNC_PROLOGUE();
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r3,196
	ctx.r3.s64 = ctx.r3.s64 + 196;
	// b 0x824d459c
	__imp__KeWaitForSingleObject(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822F61B0) {
	REX_FUNC_PROLOGUE();
	// lwz r3,220(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 220);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822F6B08) {
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
	ctx.lr = 0x822F6B10;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F6B2C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822f6dd4
	if (ctx.cr6.lt) goto loc_822F6DD4;
	// addi r10,r31,84
	ctx.r10.s64 = r31.s64 + 84;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r30,1
	r30.s64 = 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// stw r11,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r11.u32);
	// addi r9,r31,100
	ctx.r9.s64 = r31.s64 + 100;
	// stb r30,84(r31)
	REX_STORE_U8(r31.u32 + 84, r30.u8);
	// stw r10,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r10.u32);
	// addi r8,r31,116
	ctx.r8.s64 = r31.s64 + 116;
	// stw r10,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r10.u32);
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
	// stb r30,100(r31)
	REX_STORE_U8(r31.u32 + 100, r30.u8);
	// addi r9,r31,132
	ctx.r9.s64 = r31.s64 + 132;
	// stw r11,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r11.u32);
	// lis r5,-32209
	ctx.r5.s64 = -2110849024;
	// stw r10,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r10.u32);
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r10,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r10.u32);
	// addi r10,r8,8
	ctx.r10.s64 = ctx.r8.s64 + 8;
	// stb r30,116(r31)
	REX_STORE_U8(r31.u32 + 116, r30.u8);
	// addi r8,r31,148
	ctx.r8.s64 = r31.s64 + 148;
	// stw r11,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r11.u32);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// stw r10,124(r31)
	REX_STORE_U32(r31.u32 + 124, ctx.r10.u32);
	// addi r5,r5,24392
	ctx.r5.s64 = ctx.r5.s64 + 24392;
	// stw r10,128(r31)
	REX_STORE_U32(r31.u32 + 128, ctx.r10.u32);
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
	// stb r30,132(r31)
	REX_STORE_U8(r31.u32 + 132, r30.u8);
	// addi r9,r31,164
	ctx.r9.s64 = r31.s64 + 164;
	// stw r11,136(r31)
	REX_STORE_U32(r31.u32 + 136, ctx.r11.u32);
	// lis r4,1
	ctx.r4.s64 = 65536;
	// stw r10,140(r31)
	REX_STORE_U32(r31.u32 + 140, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,144(r31)
	REX_STORE_U32(r31.u32 + 144, ctx.r10.u32);
	// addi r10,r8,8
	ctx.r10.s64 = ctx.r8.s64 + 8;
	// stb r11,148(r31)
	REX_STORE_U8(r31.u32 + 148, ctx.r11.u8);
	// addi r8,r31,180
	ctx.r8.s64 = r31.s64 + 180;
	// stw r30,152(r31)
	REX_STORE_U32(r31.u32 + 152, r30.u32);
	// stw r10,156(r31)
	REX_STORE_U32(r31.u32 + 156, ctx.r10.u32);
	// stw r10,160(r31)
	REX_STORE_U32(r31.u32 + 160, ctx.r10.u32);
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
	// stb r11,164(r31)
	REX_STORE_U8(r31.u32 + 164, ctx.r11.u8);
	// addi r9,r31,196
	ctx.r9.s64 = r31.s64 + 196;
	// stw r30,168(r31)
	REX_STORE_U32(r31.u32 + 168, r30.u32);
	// stw r10,172(r31)
	REX_STORE_U32(r31.u32 + 172, ctx.r10.u32);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// stw r10,176(r31)
	REX_STORE_U32(r31.u32 + 176, ctx.r10.u32);
	// addi r10,r8,8
	ctx.r10.s64 = ctx.r8.s64 + 8;
	// stb r11,180(r31)
	REX_STORE_U8(r31.u32 + 180, ctx.r11.u8);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r30,184(r31)
	REX_STORE_U32(r31.u32 + 184, r30.u32);
	// stw r10,188(r31)
	REX_STORE_U32(r31.u32 + 188, ctx.r10.u32);
	// stw r10,192(r31)
	REX_STORE_U32(r31.u32 + 192, ctx.r10.u32);
	// stb r11,196(r31)
	REX_STORE_U8(r31.u32 + 196, ctx.r11.u8);
	// stw r30,200(r31)
	REX_STORE_U32(r31.u32 + 200, r30.u32);
	// stw r9,204(r31)
	REX_STORE_U32(r31.u32 + 204, ctx.r9.u32);
	// stw r9,208(r31)
	REX_STORE_U32(r31.u32 + 208, ctx.r9.u32);
	// bl 0x823cd368
	ctx.lr = 0x822F6C20;
	sub_823CD368(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,264(r31)
	REX_STORE_U32(r31.u32 + 264, ctx.r3.u32);
	// bne cr6,0x822f6c44
	if (!ctx.cr6.eq) goto loc_822F6C44;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F6C40;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_822F6C44:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt cr6,0x822f6dd4
	if (ctx.cr6.lt) goto loc_822F6DD4;
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,4
	ctx.r7.s64 = 4;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r5,r11,24440
	ctx.r5.s64 = ctx.r11.s64 + 24440;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823cd368
	ctx.lr = 0x822F6C6C;
	sub_823CD368(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,268(r31)
	REX_STORE_U32(r31.u32 + 268, ctx.r3.u32);
	// bne cr6,0x822f6c90
	if (!ctx.cr6.eq) goto loc_822F6C90;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F6C8C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_822F6C90:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt cr6,0x822f6dd4
	if (ctx.cr6.lt) goto loc_822F6DD4;
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,4
	ctx.r7.s64 = 4;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r5,r11,24488
	ctx.r5.s64 = ctx.r11.s64 + 24488;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823cd368
	ctx.lr = 0x822F6CB8;
	sub_823CD368(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,272(r31)
	REX_STORE_U32(r31.u32 + 272, ctx.r3.u32);
	// bne cr6,0x822f6cdc
	if (!ctx.cr6.eq) goto loc_822F6CDC;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F6CD8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_822F6CDC:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt cr6,0x822f6dd4
	if (ctx.cr6.lt) goto loc_822F6DD4;
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,4
	ctx.r7.s64 = 4;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r5,r11,24536
	ctx.r5.s64 = ctx.r11.s64 + 24536;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823cd368
	ctx.lr = 0x822F6D04;
	sub_823CD368(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,276(r31)
	REX_STORE_U32(r31.u32 + 276, ctx.r3.u32);
	// bne cr6,0x822f6d28
	if (!ctx.cr6.eq) goto loc_822F6D28;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F6D24;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_822F6D28:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt cr6,0x822f6dd4
	if (ctx.cr6.lt) goto loc_822F6DD4;
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822f6d50
	if (ctx.cr6.eq) goto loc_822F6D50;
	// lwz r29,12(r27)
	r29.u64 = REX_LOAD_U32(r27.u32 + 12);
	// lwz r4,16(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 16);
	// lwz r30,20(r27)
	r30.u64 = REX_LOAD_U32(r27.u32 + 20);
	// lwz r28,24(r27)
	r28.u64 = REX_LOAD_U32(r27.u32 + 24);
	// b 0x822f6d60
	goto loc_822F6D60;
loc_822F6D50:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r29,3
	r29.s64 = 3;
	// li r30,3
	r30.s64 = 3;
	// li r28,2
	r28.s64 = 2;
loc_822F6D60:
	// lwz r3,268(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 268);
	// bl 0x8220bed8
	ctx.lr = 0x822F6D68;
	sub_8220BED8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,276(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 276);
	// bl 0x8220bed8
	ctx.lr = 0x822F6D74;
	sub_8220BED8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,264(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 264);
	// bl 0x8220bed8
	ctx.lr = 0x822F6D80;
	sub_8220BED8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,272(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 272);
	// bl 0x8220bed8
	ctx.lr = 0x822F6D8C;
	sub_8220BED8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lwz r10,64(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F6DA4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822f6dd4
	if (ctx.cr6.lt) goto loc_822F6DD4;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,4(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 4);
	// lwz r10,68(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F6DC8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x822f6de8
	if (!ctx.cr6.lt) goto loc_822F6DE8;
loc_822F6DD4:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F6DE8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822F6DE8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82306810) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// li r30,0
	r30.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
	// bl 0x822f9900
	ctx.lr = 0x8230683C;
	sub_822F9900(ctx, base);
	// lis r11,-32688
	ctx.r11.s64 = -2142240768;
	// ori r10,r11,22
	ctx.r10.u64 = ctx.r11.u64 | 22;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82306854
	if (!ctx.cr6.eq) goto loc_82306854;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82306898
	goto loc_82306898;
loc_82306854:
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lhz r11,74(r7)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r7.u32 + 74);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82306898
	if (ctx.cr6.eq) goto loc_82306898;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_82306868:
	// lwz r10,80(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 80);
	// mulli r8,r11,28
	ctx.r8.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(28));
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r8,16
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFF;
	// lhz r10,16(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 16);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r6,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r6.u32);
	// lhz r5,74(r7)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r7.u32 + 74);
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x82306868
	if (ctx.cr6.lt) goto loc_82306868;
loc_82306898:
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

DEFINE_REX_FUNC(sub_8230A160) {
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
	ctx.lr = 0x8230A168;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r24,28(r3)
	r24.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// li r25,0
	r25.s64 = 0;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// stw r25,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r25.u32);
	// addi r22,r4,-24
	r22.s64 = ctx.r4.s64 + -24;
	// stw r25,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r25.u32);
	// stw r25,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// lwz r3,0(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 0);
	// stw r22,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r22.u32);
	// sth r25,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, r25.u16);
	// sth r25,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, r25.u16);
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8230A1A8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230a5f8
	if (ctx.cr6.lt) goto loc_8230A5F8;
	// cmplwi cr6,r22,20
	ctx.cr6.compare<uint32_t>(r22.u32, 20, ctx.xer);
	// bge cr6,0x8230a1d0
	if (!ctx.cr6.lt) goto loc_8230A1D0;
loc_8230A1BC:
	// lis r31,-32688
	r31.s64 = -2142240768;
	// ori r31,r31,12
	r31.u64 = r31.u64 | 12;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822d4ec0
	return;
loc_8230A1D0:
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82307c58
	ctx.lr = 0x8230A1E8;
	sub_82307C58(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230a5f8
	if (ctx.cr6.lt) goto loc_8230A5F8;
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82307770
	ctx.lr = 0x8230A20C;
	sub_82307770(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230a5f8
	if (ctx.cr6.lt) goto loc_8230A5F8;
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82307770
	ctx.lr = 0x8230A230;
	sub_82307770(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230a5f8
	if (ctx.cr6.lt) goto loc_8230A5F8;
	// lwz r11,4(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 4);
	// li r28,20
	r28.s64 = 20;
	// lhz r10,50(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 50);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt cr6,0x8230a1bc
	if (ctx.cr6.gt) goto loc_8230A1BC;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r3,224(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 224);
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x822f9490
	ctx.lr = 0x8230A268;
	sub_822F9490(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230a5f8
	if (ctx.cr6.lt) goto loc_8230A5F8;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lhz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r27,r10
	r27.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r25,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r25.u32);
	// stw r25,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r25.u32);
	// stw r25,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r25.u32);
	// lwz r8,4(r24)
	ctx.r8.u64 = REX_LOAD_U32(r24.u32 + 4);
	// lwz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r7,84(r8)
	REX_STORE_U32(ctx.r8.u32 + 84, ctx.r7.u32);
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// sth r10,2(r6)
	REX_STORE_U16(ctx.r6.u32 + 2, ctx.r10.u16);
	// beq cr6,0x8230a3f4
	if (ctx.cr6.eq) goto loc_8230A3F4;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r30,r10,3,0,28
	r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,224(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 224);
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x822f9490
	ctx.lr = 0x8230A2C8;
	sub_822F9490(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230a5f8
	if (ctx.cr6.lt) goto loc_8230A5F8;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x822d5870
	ctx.lr = 0x8230A2E8;
	sub_822D5870(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r26,r25
	r26.u64 = r25.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// lwz r30,4(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// ble cr6,0x8230a3f8
	if (!ctx.cr6.gt) goto loc_8230A3F8;
loc_8230A2FC:
	// addi r29,r28,2
	r29.s64 = r28.s64 + 2;
	// cmplw cr6,r29,r22
	ctx.cr6.compare<uint32_t>(r29.u32, r22.u32, ctx.xer);
	// bgt cr6,0x8230a1bc
	if (ctx.cr6.gt) goto loc_8230A1BC;
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82307770
	ctx.lr = 0x8230A320;
	sub_82307770(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230a5f8
	if (ctx.cr6.lt) goto loc_8230A5F8;
	// lhz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 0);
	// mr r28,r29
	r28.u64 = r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230a3e4
	if (ctx.cr6.eq) goto loc_8230A3E4;
	// addi r29,r30,4
	r29.s64 = r30.s64 + 4;
	// lwz r3,224(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 224);
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x822f9490
	ctx.lr = 0x8230A354;
	sub_822F9490(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230a5f8
	if (ctx.cr6.lt) goto loc_8230A5F8;
	// lhz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rotlwi r5,r11,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// bl 0x822d5870
	ctx.lr = 0x8230A374;
	sub_822D5870(ctx, base);
	// lhz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 0);
	// rotlwi r5,r10,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// add r28,r28,r5
	r28.u64 = r28.u64 + ctx.r5.u64;
	// cmplw cr6,r28,r22
	ctx.cr6.compare<uint32_t>(r28.u32, r22.u32, ctx.xer);
	// bgt cr6,0x8230a1bc
	if (ctx.cr6.gt) goto loc_8230A1BC;
	// addi r8,r1,92
	ctx.r8.s64 = ctx.r1.s64 + 92;
	// lwz r4,0(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82307e08
	ctx.lr = 0x8230A3A0;
	sub_82307E08(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230a5f8
	if (ctx.cr6.lt) goto loc_8230A5F8;
	// lwz r11,76(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230a3e4
	if (ctx.cr6.eq) goto loc_8230A3E4;
	// lhz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 0);
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8230a3e4
	if (!ctx.cr6.gt) goto loc_8230A3E4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
loc_8230A3D0:
	// lbz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r9,1(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// stb r10,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r10.u8);
	// stbu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x8230a3d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8230A3D0;
loc_8230A3E4:
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// cmpw cr6,r26,r27
	ctx.cr6.compare<int32_t>(r26.s32, r27.s32, ctx.xer);
	// blt cr6,0x8230a2fc
	if (ctx.cr6.lt) goto loc_8230A2FC;
loc_8230A3F4:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_8230A3F8:
	// lhz r10,82(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// mr r26,r10
	r26.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// sth r10,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// beq cr6,0x8230a5a4
	if (ctx.cr6.eq) goto loc_8230A5A4;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,224(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 224);
	// add r9,r26,r11
	ctx.r9.u64 = r26.u64 + ctx.r11.u64;
	// addi r6,r10,8
	ctx.r6.s64 = ctx.r10.s64 + 8;
	// rlwinm r30,r9,2,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x822f9490
	ctx.lr = 0x8230A430;
	sub_822F9490(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230a5f8
	if (ctx.cr6.lt) goto loc_8230A5F8;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,8(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x822d5870
	ctx.lr = 0x8230A450;
	sub_822D5870(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// lwz r27,8(r10)
	r27.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// ble cr6,0x8230a5a4
	if (!ctx.cr6.gt) goto loc_8230A5A4;
loc_8230A460:
	// addi r30,r28,8
	r30.s64 = r28.s64 + 8;
	// cmplw cr6,r30,r22
	ctx.cr6.compare<uint32_t>(r30.u32, r22.u32, ctx.xer);
	// bgt cr6,0x8230a1bc
	if (ctx.cr6.gt) goto loc_8230A1BC;
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x823078f0
	ctx.lr = 0x8230A484;
	sub_823078F0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230a5f8
	if (ctx.cr6.lt) goto loc_8230A5F8;
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r27,4
	ctx.r4.s64 = r27.s64 + 4;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82307770
	ctx.lr = 0x8230A4A8;
	sub_82307770(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230a5f8
	if (ctx.cr6.lt) goto loc_8230A5F8;
	// addi r29,r27,6
	r29.s64 = r27.s64 + 6;
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82307770
	ctx.lr = 0x8230A4D0;
	sub_82307770(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230a5f8
	if (ctx.cr6.lt) goto loc_8230A5F8;
	// lhz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 0);
	// mr r28,r30
	r28.u64 = r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230a594
	if (ctx.cr6.eq) goto loc_8230A594;
	// addi r30,r27,8
	r30.s64 = r27.s64 + 8;
	// lwz r3,224(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 224);
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x822f9490
	ctx.lr = 0x8230A504;
	sub_822F9490(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230a5f8
	if (ctx.cr6.lt) goto loc_8230A5F8;
	// lhz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rotlwi r5,r11,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// bl 0x822d5870
	ctx.lr = 0x8230A524;
	sub_822D5870(ctx, base);
	// lhz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U16(r29.u32 + 0);
	// rotlwi r5,r10,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// add r28,r28,r5
	r28.u64 = r28.u64 + ctx.r5.u64;
	// cmplw cr6,r28,r22
	ctx.cr6.compare<uint32_t>(r28.u32, r22.u32, ctx.xer);
	// bgt cr6,0x8230a1bc
	if (ctx.cr6.gt) goto loc_8230A1BC;
	// addi r8,r1,92
	ctx.r8.s64 = ctx.r1.s64 + 92;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82307e08
	ctx.lr = 0x8230A550;
	sub_82307E08(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230a5f8
	if (ctx.cr6.lt) goto loc_8230A5F8;
	// lwz r11,76(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230a594
	if (ctx.cr6.eq) goto loc_8230A594;
	// lhz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8230a594
	if (!ctx.cr6.gt) goto loc_8230A594;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
loc_8230A580:
	// lbz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r9,1(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// stb r10,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r10.u8);
	// stbu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x8230a580
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8230A580;
loc_8230A594:
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r27,r27,12
	r27.s64 = r27.s64 + 12;
	// cmpw cr6,r25,r26
	ctx.cr6.compare<int32_t>(r25.s32, r26.s32, ctx.xer);
	// blt cr6,0x8230a460
	if (ctx.cr6.lt) goto loc_8230A460;
loc_8230A5A4:
	// lwz r11,4(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 4);
	// lhz r10,50(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 50);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// sth r9,50(r11)
	REX_STORE_U16(ctx.r11.u32 + 50, ctx.r9.u16);
	// lwz r7,88(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// subf r6,r7,r22
	ctx.r6.u64 = r22.u64 - ctx.r7.u64;
	// subf. r30,r28,r6
	r30.u64 = ctx.r6.u64 - r28.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x8230a5f8
	if (ctx.cr0.eq) goto loc_8230A5F8;
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8230A5DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230a5f8
	if (ctx.cr6.lt) goto loc_8230A5F8;
	// ld r11,8(r24)
	ctx.r11.u64 = REX_LOAD_U64(r24.u32 + 8);
	// clrldi r10,r30,32
	ctx.r10.u64 = r30.u64 & 0xFFFFFFFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r11,8(r24)
	REX_STORE_U64(r24.u32 + 8, ctx.r11.u64);
loc_8230A5F8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822d4ec0
	return;
}

DEFINE_REX_FUNC(sub_82319780) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x82319788;
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
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r4,24
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 24, ctx.xer);
	// ble cr6,0x823197b4
	if (!ctx.cr6.gt) goto loc_823197B4;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
loc_823197B4:
	// lwz r9,40(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 40);
	// cmplw cr6,r9,r30
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r30.u32, ctx.xer);
	// bge cr6,0x823198b4
	if (!ctx.cr6.lt) goto loc_823198B4;
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82319818
	if (ctx.cr6.eq) goto loc_82319818;
	// subfic r11,r9,32
	ctx.xer.ca = ctx.r9.u32 <= 32;
	ctx.r11.u64 = static_cast<uint64_t>(32) - ctx.r9.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823197dc
	if (ctx.cr6.lt) goto loc_823197DC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_823197DC:
	// lwz r8,44(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 44);
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r6,36(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 36);
	// srw r5,r8,r10
	ctx.r5.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r10.u8 & 0x3F));
	// stw r10,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r10.u32);
	// slw r10,r7,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r10.u8 & 0x3F));
	// addi r3,r10,-1
	ctx.r3.s64 = ctx.r10.s64 + -1;
	// slw r4,r6,r11
	ctx.r4.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r11.u8 & 0x3F));
	// or r10,r4,r5
	ctx.r10.u64 = ctx.r4.u64 | ctx.r5.u64;
	// and r8,r3,r8
	ctx.r8.u64 = ctx.r3.u64 & ctx.r8.u64;
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r10,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r10.u32);
	// stw r8,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r8.u32);
	// stw r7,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r7.u32);
loc_82319818:
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bgt cr6,0x8231988c
	if (ctx.cr6.gt) goto loc_8231988C;
loc_82319824:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8231988c
	if (!ctx.cr6.gt) goto loc_8231988C;
	// lwz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 36);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r8,84(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 84);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r9,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r9.u32);
	// lbz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stw r7,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r7.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82319858;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r10,40(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 40);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// lwz r6,36(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 36);
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// or r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 | ctx.r6.u64;
	// stw r3,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r3.u32);
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
	// stw r4,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r4.u32);
	// cmplwi cr6,r10,24
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 24, ctx.xer);
	// ble cr6,0x82319824
	if (!ctx.cr6.gt) goto loc_82319824;
loc_8231988C:
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// bge cr6,0x823198b4
	if (!ctx.cr6.lt) goto loc_823198B4;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823195f0
	ctx.lr = 0x823198A8;
	sub_823195F0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823198e0
	if (ctx.cr6.lt) goto loc_823198E0;
loc_823198B4:
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,36(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 36);
	// subf r7,r30,r11
	ctx.r7.u64 = ctx.r11.u64 - r30.u64;
	// addi r6,r10,-24464
	ctx.r6.s64 = ctx.r10.s64 + -24464;
	// stw r7,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r7.u32);
	// srw r5,r8,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r7.u8 & 0x3F));
	// lwzx r4,r9,r6
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// and r3,r5,r4
	ctx.r3.u64 = ctx.r5.u64 & ctx.r4.u64;
	// stw r3,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r3.u32);
loc_823198E0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82324488) {
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
	ctx.lr = 0x82324490;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// li r25,1
	r25.s64 = 1;
	// li r26,2
	r26.s64 = 2;
	// li r27,3
	r27.s64 = 3;
	// li r28,4
	r28.s64 = 4;
loc_823244B4:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x823244b4
	if (ctx.cr6.gt) goto loc_823244B4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82324580
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82324580;
	// bdzf 4*cr6+eq,0x8232459c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8232459C;
	// bdzf 4*cr6+eq,0x823245b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_823245B8;
	// bdzf 4*cr6+eq,0x823245d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_823245D4;
	// bne cr6,0x823245f4
	if (!ctx.cr6.eq) goto loc_823245F4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823253a8
	ctx.lr = 0x823244EC;
	sub_823253A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82324634
	if (ctx.cr6.lt) goto loc_82324634;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r11,r11,3,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x7;
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82324528
	if (!ctx.cr6.eq) goto loc_82324528;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82319a70
	ctx.lr = 0x82324518;
	sub_82319A70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82324634
	if (ctx.cr6.lt) goto loc_82324634;
	// stw r25,4(r30)
	REX_STORE_U32(r30.u32 + 4, r25.u32);
	// b 0x823244b4
	goto loc_823244B4;
loc_82324528:
	// rlwinm r10,r11,0,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x6;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bne cr6,0x8232454c
	if (!ctx.cr6.eq) goto loc_8232454C;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82319a70
	ctx.lr = 0x8232453C;
	sub_82319A70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82324634
	if (ctx.cr6.lt) goto loc_82324634;
	// stw r26,4(r30)
	REX_STORE_U32(r30.u32 + 4, r26.u32);
	// b 0x823244b4
	goto loc_823244B4;
loc_8232454C:
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// li r4,3
	ctx.r4.s64 = 3;
	// bne cr6,0x8232456c
	if (!ctx.cr6.eq) goto loc_8232456C;
	// bl 0x82319a70
	ctx.lr = 0x8232455C;
	sub_82319A70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82324634
	if (ctx.cr6.lt) goto loc_82324634;
	// stw r27,4(r30)
	REX_STORE_U32(r30.u32 + 4, r27.u32);
	// b 0x823244b4
	goto loc_823244B4;
loc_8232456C:
	// bl 0x82319a70
	ctx.lr = 0x82324570;
	sub_82319A70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82324634
	if (ctx.cr6.lt) goto loc_82324634;
	// stw r28,4(r30)
	REX_STORE_U32(r30.u32 + 4, r28.u32);
	// b 0x823244b4
	goto loc_823244B4;
loc_82324580:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82319780
	ctx.lr = 0x82324590;
	sub_82319780(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82324634
	if (ctx.cr6.lt) goto loc_82324634;
	// b 0x82324620
	goto loc_82324620;
loc_8232459C:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82319780
	ctx.lr = 0x823245AC;
	sub_82319780(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82324634
	if (ctx.cr6.lt) goto loc_82324634;
	// b 0x82324620
	goto loc_82324620;
loc_823245B8:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82319780
	ctx.lr = 0x823245C8;
	sub_82319780(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82324634
	if (ctx.cr6.lt) goto loc_82324634;
	// b 0x82324620
	goto loc_82324620;
loc_823245D4:
	// addi r5,r30,52
	ctx.r5.s64 = r30.s64 + 52;
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82319780
	ctx.lr = 0x823245E4;
	sub_82319780(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82324634
	if (ctx.cr6.lt) goto loc_82324634;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r11.u32);
loc_823245F4:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82319780
	ctx.lr = 0x82324604;
	sub_82319780(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82324634
	if (ctx.cr6.lt) goto loc_82324634;
	// lwz r11,52(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 52);
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm r9,r11,7,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r8,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r8.u32);
loc_82324620:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// add r9,r11,r24
	ctx.r9.u64 = ctx.r11.u64 + r24.u64;
	// stw r9,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r9.u32);
	// stw r10,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r10.u32);
loc_82324634:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_8232A738) {
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
	ctx.lr = 0x8232A740;
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// cmpwi cr6,r5,16
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 16, ctx.xer);
	// lfs f30,2008(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2008);
	f30.f64 = double(temp.f32);
	// slw r29,r10,r5
	r29.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r5.u8 & 0x3F));
	// bge cr6,0x8232a794
	if (!ctx.cr6.lt) goto loc_8232A794;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,23720
	ctx.r8.s64 = ctx.r11.s64 + 23720;
	// addi r7,r10,23656
	ctx.r7.s64 = ctx.r10.s64 + 23656;
	// lfsx f0,r9,r8
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f31,r9,r7
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	f31.f64 = double(temp.f32);
	// fmuls f10,f0,f30
	ctx.f10.f64 = double(float(ctx.f0.f64 * f30.f64));
	// b 0x8232a7e4
	goto loc_8232A7E4;
loc_8232A794:
	// extsw r11,r29
	ctx.r11.s64 = r29.s32;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lfd f0,26664(r10)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 26664);
	// fdiv f29,f0,f13
	f29.f64 = ctx.f0.f64 / ctx.f13.f64;
	// lfd f0,23648(r9)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r9.u32 + 23648);
	// fmul f1,f29,f0
	ctx.f1.f64 = f29.f64 * ctx.f0.f64;
	// bl 0x822d4d68
	ctx.lr = 0x8232A7C0;
	sub_822D4D68(ctx, base);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// frsp f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(ctx.f1.f64));
	// lfd f0,23784(r8)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r8.u32 + 23784);
	// fmul f1,f29,f0
	ctx.f1.f64 = f29.f64 * ctx.f0.f64;
	// bl 0x822d4c88
	ctx.lr = 0x8232A7D4;
	sub_822D4C88(ctx, base);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lfd f0,-25040(r7)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r7.u32 + -25040);
	// fmul f12,f1,f0
	ctx.f12.f64 = ctx.f1.f64 * ctx.f0.f64;
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
loc_8232A7E4:
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(r28.s32, 1, ctx.xer);
	// bne cr6,0x8232a7f8
	if (!ctx.cr6.eq) goto loc_8232A7F8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2024(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2024);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
loc_8232A7F8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// rlwinm r3,r29,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lfs f0,2000(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// lfs f8,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// ble cr6,0x8232a9e0
	if (!ctx.cr6.gt) goto loc_8232A9E0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f7,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f7.f64 = double(temp.f32);
loc_8232A824:
	// fnmsubs f13,f9,f10,f8
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(-std::fma(ctx.f9.f64, ctx.f10.f64, -ctx.f8.f64)));
	// srawi r31,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	r31.s64 = ctx.r7.s32 >> 1;
	// fmuls f0,f10,f31
	ctx.f0.f64 = double(float(ctx.f10.f64 * f31.f64));
	// li r9,0
	ctx.r9.s64 = 0;
	// fmr f12,f8
	ctx.f12.f64 = ctx.f8.f64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// fmr f11,f7
	ctx.f11.f64 = ctx.f7.f64;
	// fmr f31,f13
	f31.f64 = ctx.f13.f64;
	// fmr f9,f0
	ctx.f9.f64 = ctx.f0.f64;
	// fmuls f10,f0,f30
	ctx.f10.f64 = double(float(ctx.f0.f64 * f30.f64));
	// ble cr6,0x8232a8e8
	if (!ctx.cr6.gt) goto loc_8232A8E8;
	// addi r11,r31,3
	ctx.r11.s64 = r31.s64 + 3;
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r30,8
	ctx.r11.s64 = r30.s64 + 8;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
loc_8232A864:
	// lfs f6,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f6.f64 = double(temp.f32);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lfs f5,-12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -12);
	ctx.f5.f64 = double(temp.f32);
	// fadds f4,f6,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 + ctx.f5.f64));
	// stfs f4,-8(r11)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// fsubs f3,f6,f5
	ctx.f3.f64 = double(float(ctx.f6.f64 - ctx.f5.f64));
	// stfs f3,-12(r10)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r10.u32 + -12, temp.u32);
	// lfs f2,-4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f2.f64 = double(temp.f32);
	// cmpw cr6,r9,r3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r3.s32, ctx.xer);
	// lfs f1,-8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f1.f64 = double(temp.f32);
	// fadds f6,f2,f1
	ctx.f6.f64 = double(float(ctx.f2.f64 + ctx.f1.f64));
	// stfs f6,-4(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// fsubs f5,f2,f1
	ctx.f5.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// stfs f5,-8(r10)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r10.u32 + -8, temp.u32);
	// lfs f4,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,-4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f3.f64 = double(temp.f32);
	// fadds f2,f4,f3
	ctx.f2.f64 = double(float(ctx.f4.f64 + ctx.f3.f64));
	// stfs f2,0(r11)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fsubs f1,f4,f3
	ctx.f1.f64 = double(float(ctx.f4.f64 - ctx.f3.f64));
	// lfs f5,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f6,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f4,f6,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 - ctx.f5.f64));
	// fmuls f3,f4,f0
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmuls f2,f4,f13
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// fadds f6,f6,f5
	ctx.f6.f64 = double(float(ctx.f6.f64 + ctx.f5.f64));
	// stfs f6,4(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// fmsubs f5,f1,f13,f3
	ctx.f5.f64 = double(float(std::fma(ctx.f1.f64, ctx.f13.f64, -ctx.f3.f64)));
	// stfs f5,-4(r10)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r10.u32 + -4, temp.u32);
	// fmadds f4,f1,f0,f2
	ctx.f4.f64 = double(float(std::fma(ctx.f1.f64, ctx.f0.f64, ctx.f2.f64)));
	// stfs f4,0(r10)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// blt cr6,0x8232a864
	if (ctx.cr6.lt) goto loc_8232A864;
loc_8232A8E8:
	// li r4,4
	ctx.r4.s64 = 4;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(r31.s32, 4, ctx.xer);
	// ble cr6,0x8232a9d4
	if (!ctx.cr6.gt) goto loc_8232A9D4;
	// addi r11,r31,7
	ctx.r11.s64 = r31.s64 + 7;
	// addi r6,r30,24
	ctx.r6.s64 = r30.s64 + 24;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r30
	ctx.r5.u64 = ctx.r11.u64 + r30.u64;
loc_8232A904:
	// fnmsubs f12,f0,f10,f12
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(-std::fma(ctx.f0.f64, ctx.f10.f64, -ctx.f12.f64)));
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// fmadds f11,f13,f10,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f13.f64, ctx.f10.f64, ctx.f11.f64)));
	// cmpw cr6,r4,r3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r3.s32, ctx.xer);
	// fmadds f0,f12,f10,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f10.f64, ctx.f0.f64)));
	// fnmsubs f13,f11,f10,f13
	ctx.f13.f64 = double(float(-std::fma(ctx.f11.f64, ctx.f10.f64, -ctx.f13.f64)));
	// bgt cr6,0x8232a9c0
	if (ctx.cr6.gt) goto loc_8232A9C0;
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
loc_8232A92C:
	// lfs f6,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f6.f64 = double(temp.f32);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lfs f5,-12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -12);
	ctx.f5.f64 = double(temp.f32);
	// fadds f4,f6,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 + ctx.f5.f64));
	// stfs f4,-8(r11)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// lfs f1,-8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f2,f6,f5
	ctx.f2.f64 = double(float(ctx.f6.f64 - ctx.f5.f64));
	// lfs f3,-4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f6,f3,f1
	ctx.f6.f64 = double(float(ctx.f3.f64 - ctx.f1.f64));
	// fmuls f5,f6,f11
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f11.f64));
	// cmpw cr6,r9,r3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r3.s32, ctx.xer);
	// fmuls f4,f6,f12
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// fadds f3,f3,f1
	ctx.f3.f64 = double(float(ctx.f3.f64 + ctx.f1.f64));
	// stfs f3,-4(r11)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// fmsubs f1,f2,f12,f5
	ctx.f1.f64 = double(float(std::fma(ctx.f2.f64, ctx.f12.f64, -ctx.f5.f64)));
	// stfs f1,-12(r10)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r10.u32 + -12, temp.u32);
	// fmadds f6,f2,f11,f4
	ctx.f6.f64 = double(float(std::fma(ctx.f2.f64, ctx.f11.f64, ctx.f4.f64)));
	// stfs f6,-8(r10)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r10.u32 + -8, temp.u32);
	// lfs f5,-4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fadds f3,f5,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 + ctx.f4.f64));
	// stfs f3,0(r11)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fsubs f2,f4,f5
	ctx.f2.f64 = double(float(ctx.f4.f64 - ctx.f5.f64));
	// lfs f6,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f1,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f5,f1,f6
	ctx.f5.f64 = double(float(ctx.f1.f64 - ctx.f6.f64));
	// fmuls f4,f5,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmuls f3,f5,f13
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// fadds f1,f1,f6
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f6.f64));
	// stfs f1,4(r11)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// fmsubs f6,f2,f13,f4
	ctx.f6.f64 = double(float(std::fma(ctx.f2.f64, ctx.f13.f64, -ctx.f4.f64)));
	// stfs f6,-4(r10)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r10.u32 + -4, temp.u32);
	// fmadds f5,f2,f0,f3
	ctx.f5.f64 = double(float(std::fma(ctx.f2.f64, ctx.f0.f64, ctx.f3.f64)));
	// stfs f5,0(r10)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// ble cr6,0x8232a92c
	if (!ctx.cr6.gt) goto loc_8232A92C;
loc_8232A9C0:
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// addi r5,r5,16
	ctx.r5.s64 = ctx.r5.s64 + 16;
	// cmpw cr6,r4,r31
	ctx.cr6.compare<int32_t>(ctx.r4.s32, r31.s32, ctx.xer);
	// blt cr6,0x8232a904
	if (ctx.cr6.lt) goto loc_8232A904;
loc_8232A9D4:
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(r31.s32, 4, ctx.xer);
	// bgt cr6,0x8232a824
	if (ctx.cr6.gt) goto loc_8232A824;
loc_8232A9E0:
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// ble cr6,0x8232aa38
	if (!ctx.cr6.gt) goto loc_8232AA38;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8232aa38
	if (!ctx.cr6.gt) goto loc_8232AA38;
	// addi r10,r3,-1
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// addi r11,r30,-4
	ctx.r11.s64 = r30.s64 + -4;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8232AA04:
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f11,12(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f9,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fadds f7,f10,f9
	ctx.f7.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// stfs f7,8(r11)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fsubs f6,f10,f9
	ctx.f6.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// stfsu f6,16(r11)
	ea = 16 + ctx.r11.u32;
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8232aa04
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8232AA04;
loc_8232AA38:
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// ble cr6,0x8232ab18
	if (!ctx.cr6.gt) goto loc_8232AB18;
	// srawi r11,r29,1
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x1) != 0);
	ctx.r11.s64 = r29.s32 >> 1;
	// addi r4,r29,1
	ctx.r4.s64 = r29.s64 + 1;
	// addze r5,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r5.s64 = temp.s64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x8232ab18
	if (!ctx.cr6.gt) goto loc_8232AB18;
	// addi r10,r30,4
	ctx.r10.s64 = r30.s64 + 4;
loc_8232AA60:
	// cmpw cr6,r6,r9
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8232aab8
	if (!ctx.cr6.lt) goto loc_8232AAB8;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,-4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// add r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lfs f13,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,-4(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + -4, temp.u32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfsu f12,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f12.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// lfs f11,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// stfs f12,0(r10)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfs f11,0(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfsux f9,r11,r8
	ea = ctx.r11.u32 + ctx.r8.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f9.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// lfsx f10,r8,r10
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	ctx.f10.f64 = double(temp.f32);
	// stfsx f9,r8,r10
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r8.u32 + ctx.r10.u32, temp.u32);
	// stfs f10,0(r11)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfsu f7,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f7.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// lfsu f0,4(r7)
	ea = 4 + ctx.r7.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r7.u32 = ea;
	// stfs f7,0(r7)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
loc_8232AAB8:
	// add r11,r9,r29
	ctx.r11.u64 = ctx.r9.u64 + r29.u64;
	// lfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpw cr6,r5,r9
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r9.s32, ctx.xer);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// lfs f13,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f11,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfsu f12,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f12.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// stfs f12,8(r10)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// stfs f11,0(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// bgt cr6,0x8232ab04
	if (ctx.cr6.gt) goto loc_8232AB04;
loc_8232AAF0:
	// srawi r11,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 1;
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// addze r8,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r8.s64 = temp.s64;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x8232aaf0
	if (!ctx.cr6.gt) goto loc_8232AAF0;
loc_8232AB04:
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmpw cr6,r6,r29
	ctx.cr6.compare<int32_t>(ctx.r6.s32, r29.s32, ctx.xer);
	// blt cr6,0x8232aa60
	if (ctx.cr6.lt) goto loc_8232AA60;
loc_8232AB18:
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(r28.s32, 1, ctx.xer);
	// bne cr6,0x8232abcc
	if (!ctx.cr6.eq) goto loc_8232ABCC;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// blt cr6,0x8232ab88
	if (ctx.cr6.lt) goto loc_8232AB88;
	// extsw r11,r29
	ctx.r11.s64 = r29.s32;
	// addi r9,r3,-3
	ctx.r9.s64 = ctx.r3.s64 + -3;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// addi r11,r30,-4
	ctx.r11.s64 = r30.s64 + -4;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fdivs f0,f8,f12
	ctx.f0.f64 = double(float(ctx.f8.f64 / ctx.f12.f64));
loc_8232AB4C:
	// lfs f13,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lfs f12,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f10,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f0,f12
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// lfs f7,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f0,f10
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// stfs f11,4(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fmuls f5,f0,f7
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f7.f64));
	// stfs f9,8(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// stfs f6,12(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfsu f5,16(r11)
	ea = 16 + ctx.r11.u32;
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// blt cr6,0x8232ab4c
	if (ctx.cr6.lt) goto loc_8232AB4C;
loc_8232AB88:
	// cmpw cr6,r10,r3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x8232abcc
	if (!ctx.cr6.lt) goto loc_8232ABCC;
	// extsw r9,r29
	ctx.r9.s64 = r29.s32;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// subf r8,r10,r3
	ctx.r8.u64 = ctx.r3.u64 - ctx.r10.u64;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// fdivs f0,f8,f12
	ctx.f0.f64 = double(float(ctx.f8.f64 / ctx.f12.f64));
loc_8232ABBC:
	// lfs f13,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfsu f12,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8232abbc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8232ABBC;
loc_8232ABCC:
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

DEFINE_REX_FUNC(sub_82354D10) {
	REX_FUNC_PROLOGUE();
	PPCRegister r30{};
	PPCRegister r31{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lvx128 v63,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// vcsxwfp128 v61,v63,11
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v61.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v63.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// li r5,192
	ctx.r5.s64 = 192;
	// li r6,144
	ctx.r6.s64 = 144;
	// li r7,128
	ctx.r7.s64 = 128;
	// li r4,208
	ctx.r4.s64 = 208;
	// li r8,240
	ctx.r8.s64 = 240;
	// lvx128 v62,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r9,224
	ctx.r9.s64 = 224;
	// lvx128 v59,r31,r5
	ea = (r31.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,176
	ctx.r10.s64 = 176;
	// lvx128 v55,r31,r6
	ea = (r31.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v54,r31,r7
	ea = (r31.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v57,v59,11
	simde_mm_store_ps(ctx.v57.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v59.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// lvx128 v58,r31,r4
	ea = (r31.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v53,v55,11
	simde_mm_store_ps(ctx.v53.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v55.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// lvx128 v52,r31,r8
	ea = (r31.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v56,v58,11
	simde_mm_store_ps(ctx.v56.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v58.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// lvx128 v50,r31,r9
	ea = (r31.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v51,v54,11
	simde_mm_store_ps(ctx.v51.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v54.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// lvx128 v48,r31,r10
	ea = (r31.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v49,v52,11
	simde_mm_store_ps(ctx.v49.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v52.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// vcsxwfp128 v47,v50,11
	simde_mm_store_ps(ctx.v47.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v50.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// li r11,160
	ctx.r11.s64 = 160;
	// vcsxwfp128 v45,v48,11
	simde_mm_store_ps(ctx.v45.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v48.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// lvx128 v44,r30,r5
	ea = (r30.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v42,r30,r4
	ea = (r30.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v41,v44,0
	simde_mm_store_ps(ctx.v41.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v44.u32)));
	// lvx128 v39,r30,r6
	ea = (r30.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v40,v42,0
	simde_mm_store_ps(ctx.v40.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v42.u32)));
	// lvx128 v38,r30,r7
	ea = (r30.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v37,v39,0
	simde_mm_store_ps(ctx.v37.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v39.u32)));
	// lvx128 v46,r31,r11
	ea = (r31.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v63,v38,0
	simde_mm_store_ps(ctx.v63.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v38.u32)));
	// lvx128 v35,r30,r8
	ea = (r30.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v43,v46,11
	simde_mm_store_ps(ctx.v43.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v46.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// lvx128 v33,r30,r9
	ea = (r30.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v36,v57,v1
	simde_mm_store_ps(ctx.v36.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v57.f32), simde_mm_load_ps(ctx.v1.f32)));
	// lvx128 v32,r30,r10
	ea = (r30.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v59,v53,v1
	simde_mm_store_ps(ctx.v59.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v53.f32), simde_mm_load_ps(ctx.v1.f32)));
	// vmulfp128 v34,v56,v1
	simde_mm_store_ps(ctx.v34.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v56.f32), simde_mm_load_ps(ctx.v1.f32)));
	// li r5,80
	ctx.r5.s64 = 80;
	// vmulfp128 v58,v51,v1
	simde_mm_store_ps(ctx.v58.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v51.f32), simde_mm_load_ps(ctx.v1.f32)));
	// li r6,64
	ctx.r6.s64 = 64;
	// vcsxwfp128 v57,v35,0
	simde_mm_store_ps(ctx.v57.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v35.u32)));
	// li r7,112
	ctx.r7.s64 = 112;
	// vmulfp128 v56,v49,v1
	simde_mm_store_ps(ctx.v56.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v49.f32), simde_mm_load_ps(ctx.v1.f32)));
	// li r8,96
	ctx.r8.s64 = 96;
	// vcsxwfp128 v55,v33,0
	simde_mm_store_ps(ctx.v55.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v33.u32)));
	// li r9,48
	ctx.r9.s64 = 48;
	// vmulfp128 v54,v47,v1
	simde_mm_store_ps(ctx.v54.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v47.f32), simde_mm_load_ps(ctx.v1.f32)));
	// lvx128 v52,r31,r5
	ea = (r31.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v53,v32,0
	simde_mm_store_ps(ctx.v53.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v32.u32)));
	// lvx128 v50,r31,r6
	ea = (r31.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v51,v45,v1
	simde_mm_store_ps(ctx.v51.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v45.f32), simde_mm_load_ps(ctx.v1.f32)));
	// li r10,32
	ctx.r10.s64 = 32;
	// vcsxwfp128 v60,v62,0
	simde_mm_store_ps(ctx.v60.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v62.u32)));
	// lvx128 v62,r30,r11
	ea = (r30.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v46,v43,v1
	simde_mm_store_ps(ctx.v46.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v43.f32), simde_mm_load_ps(ctx.v1.f32)));
	// li r11,16
	ctx.r11.s64 = 16;
	// vmsum4fp128 v47,v36,v41
	simde_mm_store_ps(ctx.v47.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v36.f32), simde_mm_load_ps(ctx.v41.f32), 0xFF));
	// vcsxwfp128 v49,v62,0
	simde_mm_store_ps(ctx.v49.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v62.u32)));
	// vmsum4fp128 v43,v59,v37
	simde_mm_store_ps(ctx.v43.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_load_ps(ctx.v37.f32), 0xFF));
	// vcsxwfp128 v44,v52,11
	simde_mm_store_ps(ctx.v44.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v52.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// vmsum4fp128 v45,v34,v40
	simde_mm_store_ps(ctx.v45.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v34.f32), simde_mm_load_ps(ctx.v40.f32), 0xFF));
	// vcsxwfp128 v42,v50,11
	simde_mm_store_ps(ctx.v42.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v50.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// vmsum4fp128 v41,v58,v63
	simde_mm_store_ps(ctx.v41.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v58.f32), simde_mm_load_ps(ctx.v63.f32), 0xFF));
	// lvx128 v48,r31,r11
	ea = (r31.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum4fp128 v40,v56,v57
	simde_mm_store_ps(ctx.v40.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v56.f32), simde_mm_load_ps(ctx.v57.f32), 0xFF));
	// vmsum4fp128 v39,v54,v55
	simde_mm_store_ps(ctx.v39.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v54.f32), simde_mm_load_ps(ctx.v55.f32), 0xFF));
	// vmsum4fp128 v38,v51,v53
	simde_mm_store_ps(ctx.v38.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v51.f32), simde_mm_load_ps(ctx.v53.f32), 0xFF));
	// vmsum4fp128 v37,v46,v49
	simde_mm_store_ps(ctx.v37.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v46.f32), simde_mm_load_ps(ctx.v49.f32), 0xFF));
	// vcfpuxws128 v36,v47,0
	simde_mm_store_si128((simde__m128i*)ctx.v36.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v47.f32)));
	// vcfpuxws128 v34,v43,0
	simde_mm_store_si128((simde__m128i*)ctx.v34.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v43.f32)));
	// vcfpuxws128 v35,v45,0
	simde_mm_store_si128((simde__m128i*)ctx.v35.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v45.f32)));
	// vcfpuxws128 v33,v41,0
	simde_mm_store_si128((simde__m128i*)ctx.v33.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v41.f32)));
	// vcfpuxws128 v32,v40,0
	simde_mm_store_si128((simde__m128i*)ctx.v32.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v40.f32)));
	// vcfpuxws128 v63,v39,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v39.f32)));
	// vcfpuxws128 v62,v38,0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v38.f32)));
	// lvx128 v57,r31,r7
	ea = (r31.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v58,v48,11
	simde_mm_store_ps(ctx.v58.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v48.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// lvx128 v56,r31,r8
	ea = (r31.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v55,v57,11
	simde_mm_store_ps(ctx.v55.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v57.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// lvx128 v54,r31,r9
	ea = (r31.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v53,v56,11
	simde_mm_store_ps(ctx.v53.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v56.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// lvx128 v52,r31,r10
	ea = (r31.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v51,v54,11
	simde_mm_store_ps(ctx.v51.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v54.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// vcsxwfp128 v50,v52,11
	simde_mm_store_ps(ctx.v50.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v52.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// lvx128 v49,r30,r5
	ea = (r30.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfpuxws128 v59,v37,0
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v37.f32)));
	// lvx128 v48,r30,r6
	ea = (r30.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v46,r30,r11
	ea = (r30.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v43,v61,v1
	simde_mm_store_ps(ctx.v43.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v1.f32)));
	// lvx128 v41,r30,r7
	ea = (r30.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vrlimi128 v36,v35,4,0
	simde_mm_store_ps(ctx.v36.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v36.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v35.f32), 228), 4));
	// lvx128 v39,r30,r8
	ea = (r30.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v38,v44,v1
	simde_mm_store_ps(ctx.v38.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v44.f32), simde_mm_load_ps(ctx.v1.f32)));
	// lvx128 v37,r30,r9
	ea = (r30.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v47,v49,0
	simde_mm_store_ps(ctx.v47.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v49.u32)));
	// lvx128 v61,r30,r10
	ea = (r30.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v35,v42,v1
	simde_mm_store_ps(ctx.v35.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v42.f32), simde_mm_load_ps(ctx.v1.f32)));
	// vcsxwfp128 v45,v48,0
	simde_mm_store_ps(ctx.v45.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v48.u32)));
	// vrlimi128 v63,v32,1,0
	simde_mm_store_ps(ctx.v63.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v32.f32), 228), 1));
	// vcsxwfp128 v40,v46,0
	simde_mm_store_ps(ctx.v40.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v46.u32)));
	// vrlimi128 v33,v34,4,0
	simde_mm_store_ps(ctx.v33.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v33.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v34.f32), 228), 4));
	// vmulfp128 v56,v58,v1
	simde_mm_store_ps(ctx.v56.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v58.f32), simde_mm_load_ps(ctx.v1.f32)));
	// vcsxwfp128 v49,v61,0
	simde_mm_store_ps(ctx.v49.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v61.u32)));
	// vcsxwfp128 v57,v41,0
	simde_mm_store_ps(ctx.v57.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v41.u32)));
	// vrlimi128 v36,v63,3,0
	simde_mm_store_ps(ctx.v36.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v36.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v63.f32), 228), 3));
	// vcsxwfp128 v54,v39,0
	simde_mm_store_ps(ctx.v54.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v39.u32)));
	// vcsxwfp128 v52,v37,0
	simde_mm_store_ps(ctx.v52.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v37.u32)));
	// vrlimi128 v59,v62,1,0
	simde_mm_store_ps(ctx.v59.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v62.f32), 228), 1));
	// vmulfp128 v48,v55,v1
	simde_mm_store_ps(ctx.v48.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v55.f32), simde_mm_load_ps(ctx.v1.f32)));
	// vmsum4fp128 v41,v43,v60
	simde_mm_store_ps(ctx.v41.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v43.f32), simde_mm_load_ps(ctx.v60.f32), 0xFF));
	// vmulfp128 v46,v53,v1
	simde_mm_store_ps(ctx.v46.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v53.f32), simde_mm_load_ps(ctx.v1.f32)));
	// vmulfp128 v44,v51,v1
	simde_mm_store_ps(ctx.v44.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v51.f32), simde_mm_load_ps(ctx.v1.f32)));
	// vmulfp128 v42,v50,v1
	simde_mm_store_ps(ctx.v42.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v50.f32), simde_mm_load_ps(ctx.v1.f32)));
	// vrlimi128 v33,v59,3,0
	simde_mm_store_ps(ctx.v33.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v33.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v59.f32), 228), 3));
	// vmsum4fp128 v39,v38,v47
	simde_mm_store_ps(ctx.v39.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v38.f32), simde_mm_load_ps(ctx.v47.f32), 0xFF));
	// vmsum4fp128 v38,v35,v45
	simde_mm_store_ps(ctx.v38.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v35.f32), simde_mm_load_ps(ctx.v45.f32), 0xFF));
	// vpkswus128 v36,v33,v36
	simde_mm_store_si128((simde__m128i*)ctx.v36.u16, simde_mm_packus_epi32(simde_mm_load_si128((simde__m128i*)ctx.v36.s32), simde_mm_load_si128((simde__m128i*)ctx.v33.s32)));
	// vmsum4fp128 v37,v56,v40
	simde_mm_store_ps(ctx.v37.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v56.f32), simde_mm_load_ps(ctx.v40.f32), 0xFF));
	// vmsum4fp128 v35,v48,v57
	simde_mm_store_ps(ctx.v35.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v48.f32), simde_mm_load_ps(ctx.v57.f32), 0xFF));
	// vmsum4fp128 v34,v46,v54
	simde_mm_store_ps(ctx.v34.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v46.f32), simde_mm_load_ps(ctx.v54.f32), 0xFF));
	// vmsum4fp128 v33,v44,v52
	simde_mm_store_ps(ctx.v33.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v44.f32), simde_mm_load_ps(ctx.v52.f32), 0xFF));
	// vmsum4fp128 v32,v42,v49
	simde_mm_store_ps(ctx.v32.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v42.f32), simde_mm_load_ps(ctx.v49.f32), 0xFF));
	// vcfpuxws128 v63,v41,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v41.f32)));
	// vcfpuxws128 v62,v39,0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v39.f32)));
	// vcfpuxws128 v61,v38,0
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v38.f32)));
	// vcfpuxws128 v60,v37,0
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v37.f32)));
	// vcfpuxws128 v59,v35,0
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v35.f32)));
	// vcfpuxws128 v58,v34,0
	simde_mm_store_si128((simde__m128i*)ctx.v58.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v34.f32)));
	// vcfpuxws128 v57,v33,0
	simde_mm_store_si128((simde__m128i*)ctx.v57.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v33.f32)));
	// vcfpuxws128 v56,v32,0
	simde_mm_store_si128((simde__m128i*)ctx.v56.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v32.f32)));
	// vrlimi128 v61,v62,4,0
	simde_mm_store_ps(ctx.v61.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v62.f32), 228), 4));
	// vrlimi128 v63,v60,4,0
	simde_mm_store_ps(ctx.v63.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v60.f32), 228), 4));
	// vrlimi128 v58,v59,1,0
	simde_mm_store_ps(ctx.v58.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v58.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v59.f32), 228), 1));
	// vrlimi128 v56,v57,1,0
	simde_mm_store_ps(ctx.v56.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v56.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v57.f32), 228), 1));
	// vrlimi128 v61,v58,3,0
	simde_mm_store_ps(ctx.v61.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v58.f32), 228), 3));
	// vrlimi128 v63,v56,3,0
	simde_mm_store_ps(ctx.v63.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v56.f32), 228), 3));
	// vpkswus128 v55,v63,v61
	simde_mm_store_si128((simde__m128i*)ctx.v55.u16, simde_mm_packus_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.s32), simde_mm_load_si128((simde__m128i*)ctx.v63.s32)));
	// vpkuhus128 v54,v55,v36
	vTemp.u8[15] = ctx.v55.u16[7] > 0xFF ? 0xFF : (uint8_t)ctx.v55.u16[7];
	vTemp.u8[7] = ctx.v36.u16[7] > 0xFF ? 0xFF : (uint8_t)ctx.v36.u16[7];
	vTemp.u8[14] = ctx.v55.u16[6] > 0xFF ? 0xFF : (uint8_t)ctx.v55.u16[6];
	vTemp.u8[6] = ctx.v36.u16[6] > 0xFF ? 0xFF : (uint8_t)ctx.v36.u16[6];
	vTemp.u8[13] = ctx.v55.u16[5] > 0xFF ? 0xFF : (uint8_t)ctx.v55.u16[5];
	vTemp.u8[5] = ctx.v36.u16[5] > 0xFF ? 0xFF : (uint8_t)ctx.v36.u16[5];
	vTemp.u8[12] = ctx.v55.u16[4] > 0xFF ? 0xFF : (uint8_t)ctx.v55.u16[4];
	vTemp.u8[4] = ctx.v36.u16[4] > 0xFF ? 0xFF : (uint8_t)ctx.v36.u16[4];
	vTemp.u8[11] = ctx.v55.u16[3] > 0xFF ? 0xFF : (uint8_t)ctx.v55.u16[3];
	vTemp.u8[3] = ctx.v36.u16[3] > 0xFF ? 0xFF : (uint8_t)ctx.v36.u16[3];
	vTemp.u8[10] = ctx.v55.u16[2] > 0xFF ? 0xFF : (uint8_t)ctx.v55.u16[2];
	vTemp.u8[2] = ctx.v36.u16[2] > 0xFF ? 0xFF : (uint8_t)ctx.v36.u16[2];
	vTemp.u8[9] = ctx.v55.u16[1] > 0xFF ? 0xFF : (uint8_t)ctx.v55.u16[1];
	vTemp.u8[1] = ctx.v36.u16[1] > 0xFF ? 0xFF : (uint8_t)ctx.v36.u16[1];
	vTemp.u8[8] = ctx.v55.u16[0] > 0xFF ? 0xFF : (uint8_t)ctx.v55.u16[0];
	vTemp.u8[0] = ctx.v36.u16[0] > 0xFF ? 0xFF : (uint8_t)ctx.v36.u16[0];
	ctx.v54 = vTemp;
	// stvlx128 v54,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v54.u8[15 - i]);
	// stvrx128 v54,r3,r11
	ea = ctx.r3.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v54.u8[i]);
	// ld r30,-16(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82366FA0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82366FA8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,22300(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 22300);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8236703c
	if (ctx.cr6.eq) goto loc_8236703C;
	// addi r30,r3,3752
	r30.s64 = ctx.r3.s64 + 3752;
	// lwz r3,15268(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 15268);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r29,3752(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 3752);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x823957c8
	ctx.lr = 0x82366FD4;
	sub_823957C8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,15268(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 15268);
	// bl 0x82395818
	ctx.lr = 0x82366FE0;
	sub_82395818(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82366ff4
	if (ctx.cr6.eq) goto loc_82366FF4;
	// li r3,-100
	ctx.r3.s64 = -100;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
loc_82366FF4:
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r10,220(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 220);
	// lwz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rotlwi r11,r7,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r7,3788(r31)
	REX_STORE_U32(r31.u32 + 3788, ctx.r7.u32);
	// lwz r6,4(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// rotlwi r5,r6,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r6,3792(r31)
	REX_STORE_U32(r31.u32 + 3792, ctx.r6.u32);
	// lwz r3,8(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// rotlwi r10,r3,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// stw r3,3796(r31)
	REX_STORE_U32(r31.u32 + 3796, ctx.r3.u32);
	// stw r4,3812(r31)
	REX_STORE_U32(r31.u32 + 3812, ctx.r4.u32);
	// stw r11,14824(r31)
	REX_STORE_U32(r31.u32 + 14824, ctx.r11.u32);
	// stw r5,14828(r31)
	REX_STORE_U32(r31.u32 + 14828, ctx.r5.u32);
	// stw r10,14832(r31)
	REX_STORE_U32(r31.u32 + 14832, ctx.r10.u32);
	// stw r8,22300(r31)
	REX_STORE_U32(r31.u32 + 22300, ctx.r8.u32);
loc_8236703C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8236A208) {
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
	ctx.lr = 0x8236A210;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8236a23c
	if (!ctx.cr6.eq) goto loc_8236A23C;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec8
	return;
loc_8236A23C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8236a280
	if (ctx.cr6.eq) goto loc_8236A280;
	// lwz r30,16(r28)
	r30.u64 = REX_LOAD_U32(r28.u32 + 16);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// lhz r29,14(r28)
	r29.u64 = REX_LOAD_U16(r28.u32 + 14);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82369db0
	ctx.lr = 0x8236A260;
	sub_82369DB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236a280
	if (!ctx.cr6.eq) goto loc_8236A280;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq cr6,0x8236a3f4
	if (ctx.cr6.eq) goto loc_8236A3F4;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne cr6,0x8236a294
	if (!ctx.cr6.eq) goto loc_8236A294;
	// cmplwi cr6,r29,32
	ctx.cr6.compare<uint32_t>(r29.u32, 32, ctx.xer);
	// beq cr6,0x8236a304
	if (ctx.cr6.eq) goto loc_8236A304;
loc_8236A280:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r24)
	REX_STORE_U32(r24.u32 + 0, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec8
	return;
loc_8236A294:
	// lis r11,22870
	ctx.r11.s64 = 1498808320;
	// ori r10,r11,22869
	ctx.r10.u64 = ctx.r11.u64 | 22869;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8236a304
	if (ctx.cr6.eq) goto loc_8236A304;
	// lis r11,12889
	ctx.r11.s64 = 844693504;
	// ori r10,r11,21849
	ctx.r10.u64 = ctx.r11.u64 | 21849;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8236a304
	if (ctx.cr6.eq) goto loc_8236A304;
	// lis r11,22101
	ctx.r11.s64 = 1448411136;
	// ori r10,r11,22857
	ctx.r10.u64 = ctx.r11.u64 | 22857;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8236a304
	if (ctx.cr6.eq) goto loc_8236A304;
	// lis r11,12338
	ctx.r11.s64 = 808583168;
	// ori r10,r11,13385
	ctx.r10.u64 = ctx.r11.u64 | 13385;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8236a304
	if (ctx.cr6.eq) goto loc_8236A304;
	// lis r11,12849
	ctx.r11.s64 = 842072064;
	// ori r10,r11,22105
	ctx.r10.u64 = ctx.r11.u64 | 22105;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8236a304
	if (ctx.cr6.eq) goto loc_8236A304;
	// lis r11,12850
	ctx.r11.s64 = 842137600;
	// ori r10,r11,13392
	ctx.r10.u64 = ctx.r11.u64 | 13392;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8236a304
	if (ctx.cr6.eq) goto loc_8236A304;
	// lis r11,12593
	ctx.r11.s64 = 825294848;
	// ori r10,r11,13392
	ctx.r10.u64 = ctx.r11.u64 | 13392;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8236a348
	if (!ctx.cr6.eq) goto loc_8236A348;
loc_8236A304:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,312
	ctx.r3.s64 = 312;
	// bl 0x8233d448
	ctx.lr = 0x8236A310;
	sub_8233D448(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8236a280
	if (ctx.cr6.eq) goto loc_8236A280;
	// bl 0x82369558
	ctx.lr = 0x8236A320;
	sub_82369558(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x8233d448
	ctx.lr = 0x8236A32C;
	sub_8233D448(ctx, base);
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8236a35c
	if (!ctx.cr6.eq) goto loc_8236A35C;
loc_8236A338:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823695e0
	ctx.lr = 0x8236A340;
	sub_823695E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8233d4c0
	ctx.lr = 0x8236A348;
	sub_8233D4C0(ctx, base);
loc_8236A348:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r24)
	REX_STORE_U32(r24.u32 + 0, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec8
	return;
loc_8236A35C:
	// li r9,10
	ctx.r9.s64 = 10;
	// addi r11,r28,-4
	ctx.r11.s64 = r28.s64 + -4;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8236A36C:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8236a36c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236A36C;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8236a38c
	if (ctx.cr6.gt) goto loc_8236A38C;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_8236A38C:
	// stw r11,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// lwz r30,0(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8236a3b4
	if (!ctx.cr6.eq) goto loc_8236A3B4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,8(r28)
	ctx.r5.u64 = REX_LOAD_U32(r28.u32 + 8);
	// lwz r4,4(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 4);
	// bl 0x8236a048
	ctx.lr = 0x8236A3B0;
	sub_8236A048(ctx, base);
	// stw r3,20(r30)
	REX_STORE_U32(r30.u32 + 20, ctx.r3.u32);
loc_8236A3B4:
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// lwz r5,8(r28)
	ctx.r5.u64 = REX_LOAD_U32(r28.u32 + 8);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// lwz r4,4(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 4);
	// addi r3,r31,156
	ctx.r3.s64 = r31.s64 + 156;
	// bl 0x823b0b48
	ctx.lr = 0x8236A3CC;
	sub_823B0B48(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r26,28(r31)
	REX_STORE_U32(r31.u32 + 28, r26.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r25,32(r31)
	REX_STORE_U32(r31.u32 + 32, r25.u32);
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
	// stw r27,292(r31)
	REX_STORE_U32(r31.u32 + 292, r27.u32);
	// stw r31,0(r24)
	REX_STORE_U32(r24.u32 + 0, r31.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec8
	return;
loc_8236A3F4:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x8236a4b4
	if (ctx.cr6.eq) goto loc_8236A4B4;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(r30.s32, 3, ctx.xer);
	// bne cr6,0x8236a430
	if (!ctx.cr6.eq) goto loc_8236A430;
	// cmpwi cr6,r29,15
	ctx.cr6.compare<int32_t>(r29.s32, 15, ctx.xer);
	// beq cr6,0x8236a4d4
	if (ctx.cr6.eq) goto loc_8236A4D4;
	// cmpwi cr6,r29,16
	ctx.cr6.compare<int32_t>(r29.s32, 16, ctx.xer);
	// beq cr6,0x8236a4d4
	if (ctx.cr6.eq) goto loc_8236A4D4;
	// cmpwi cr6,r29,32
	ctx.cr6.compare<int32_t>(r29.s32, 32, ctx.xer);
	// beq cr6,0x8236a4d4
	if (ctx.cr6.eq) goto loc_8236A4D4;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r24)
	REX_STORE_U32(r24.u32 + 0, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec8
	return;
loc_8236A430:
	// lis r11,12889
	ctx.r11.s64 = 844693504;
	// ori r10,r11,21849
	ctx.r10.u64 = ctx.r11.u64 | 21849;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8236a4d4
	if (ctx.cr6.eq) goto loc_8236A4D4;
	// lis r11,22870
	ctx.r11.s64 = 1498808320;
	// ori r10,r11,22869
	ctx.r10.u64 = ctx.r11.u64 | 22869;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8236a4d4
	if (ctx.cr6.eq) goto loc_8236A4D4;
	// lis r11,14677
	ctx.r11.s64 = 961871872;
	// ori r10,r11,22105
	ctx.r10.u64 = ctx.r11.u64 | 22105;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8236a4d4
	if (ctx.cr6.eq) goto loc_8236A4D4;
	// lis r11,22101
	ctx.r11.s64 = 1448411136;
	// ori r10,r11,22857
	ctx.r10.u64 = ctx.r11.u64 | 22857;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8236a4d4
	if (ctx.cr6.eq) goto loc_8236A4D4;
	// lis r11,12338
	ctx.r11.s64 = 808583168;
	// ori r10,r11,13385
	ctx.r10.u64 = ctx.r11.u64 | 13385;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8236a4d4
	if (ctx.cr6.eq) goto loc_8236A4D4;
	// lis r11,12849
	ctx.r11.s64 = 842072064;
	// ori r10,r11,22105
	ctx.r10.u64 = ctx.r11.u64 | 22105;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8236a4d4
	if (ctx.cr6.eq) goto loc_8236A4D4;
	// lis r11,12850
	ctx.r11.s64 = 842137600;
	// ori r10,r11,13392
	ctx.r10.u64 = ctx.r11.u64 | 13392;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8236a4d4
	if (ctx.cr6.eq) goto loc_8236A4D4;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r24)
	REX_STORE_U32(r24.u32 + 0, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec8
	return;
loc_8236A4B4:
	// cmpwi cr6,r29,8
	ctx.cr6.compare<int32_t>(r29.s32, 8, ctx.xer);
	// beq cr6,0x8236a4d4
	if (ctx.cr6.eq) goto loc_8236A4D4;
	// cmpwi cr6,r29,16
	ctx.cr6.compare<int32_t>(r29.s32, 16, ctx.xer);
	// beq cr6,0x8236a4d4
	if (ctx.cr6.eq) goto loc_8236A4D4;
	// cmpwi cr6,r29,24
	ctx.cr6.compare<int32_t>(r29.s32, 24, ctx.xer);
	// beq cr6,0x8236a4d4
	if (ctx.cr6.eq) goto loc_8236A4D4;
	// cmpwi cr6,r29,32
	ctx.cr6.compare<int32_t>(r29.s32, 32, ctx.xer);
	// bne cr6,0x8236a280
	if (!ctx.cr6.eq) goto loc_8236A280;
loc_8236A4D4:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,312
	ctx.r3.s64 = 312;
	// bl 0x8233d448
	ctx.lr = 0x8236A4E0;
	sub_8233D448(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8236a280
	if (ctx.cr6.eq) goto loc_8236A280;
	// bl 0x82369558
	ctx.lr = 0x8236A4F0;
	sub_82369558(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne cr6,0x8236a528
	if (!ctx.cr6.eq) goto loc_8236A528;
	// cmpwi cr6,r29,8
	ctx.cr6.compare<int32_t>(r29.s32, 8, ctx.xer);
	// bne cr6,0x8236a558
	if (!ctx.cr6.eq) goto loc_8236A558;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,1064
	ctx.r3.s64 = 1064;
	// bl 0x8233d448
	ctx.lr = 0x8236A50C;
	sub_8233D448(ctx, base);
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8236a338
	if (ctx.cr6.eq) goto loc_8236A338;
	// li r5,1064
	ctx.r5.s64 = 1064;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x822091c8
	ctx.lr = 0x8236A524;
	sub_822091C8(ctx, base);
	// b 0x8236a58c
	goto loc_8236A58C;
loc_8236A528:
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(r30.s32, 3, ctx.xer);
	// bne cr6,0x8236a558
	if (!ctx.cr6.eq) goto loc_8236A558;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x8233d448
	ctx.lr = 0x8236A53C;
	sub_8233D448(ctx, base);
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8236a338
	if (ctx.cr6.eq) goto loc_8236A338;
	// li r5,52
	ctx.r5.s64 = 52;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x8236A554;
	sub_822D4FA0(ctx, base);
	// b 0x8236a58c
	goto loc_8236A58C;
loc_8236A558:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x8233d448
	ctx.lr = 0x8236A564;
	sub_8233D448(ctx, base);
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8236a338
	if (ctx.cr6.eq) goto loc_8236A338;
	// li r9,10
	ctx.r9.s64 = 10;
	// addi r11,r28,-4
	ctx.r11.s64 = r28.s64 + -4;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8236A580:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8236a580
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236A580;
loc_8236A58C:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8236a5a0
	if (ctx.cr6.gt) goto loc_8236A5A0;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_8236A5A0:
	// stw r11,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// lwz r30,0(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8236a5c8
	if (!ctx.cr6.eq) goto loc_8236A5C8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,8(r28)
	ctx.r5.u64 = REX_LOAD_U32(r28.u32 + 8);
	// lwz r4,4(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 4);
	// bl 0x8236a048
	ctx.lr = 0x8236A5C4;
	sub_8236A048(ctx, base);
	// stw r3,20(r30)
	REX_STORE_U32(r30.u32 + 20, ctx.r3.u32);
loc_8236A5C8:
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// lwz r5,8(r28)
	ctx.r5.u64 = REX_LOAD_U32(r28.u32 + 8);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// lwz r4,4(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 4);
	// addi r3,r31,52
	ctx.r3.s64 = r31.s64 + 52;
	// bl 0x823b0c18
	ctx.lr = 0x8236A5E0;
	sub_823B0C18(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r26,28(r31)
	REX_STORE_U32(r31.u32 + 28, r26.u32);
	// stw r25,32(r31)
	REX_STORE_U32(r31.u32 + 32, r25.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
	// stw r10,292(r31)
	REX_STORE_U32(r31.u32 + 292, ctx.r10.u32);
	// stw r31,0(r24)
	REX_STORE_U32(r24.u32 + 0, r31.u32);
	// beq cr6,0x8236a610
	if (ctx.cr6.eq) goto loc_8236A610;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8236A610:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_8237B248) {
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
	ctx.lr = 0x8237B250;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r12,-4289
	ctx.r12.s64 = -281083904;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// li r22,0
	r22.s64 = 0;
	// ori r12,r12,63743
	ctx.r12.u64 = ctx.r12.u64 | 63743;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// oris r9,r10,2
	ctx.r9.u64 = ctx.r10.u64 | 131072;
	// mr r21,r22
	r21.u64 = r22.u64;
	// stw r9,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// lwz r11,252(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 252);
	// lwz r8,248(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 248);
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r7,r11,255
	ctx.r7.s64 = ctx.r11.s64 + 255;
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// stb r11,4(r4)
	REX_STORE_U8(ctx.r4.u32 + 4, ctx.r11.u8);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8237ba6c
	if (ctx.cr6.lt) goto loc_8237BA6C;
	// cmplwi cr6,r11,62
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 62, ctx.xer);
	// bgt cr6,0x8237ba6c
	if (ctx.cr6.gt) goto loc_8237BA6C;
	// stb r22,11(r4)
	REX_STORE_U8(ctx.r4.u32 + 11, r22.u8);
	// stb r22,13(r4)
	REX_STORE_U8(ctx.r4.u32 + 13, r22.u8);
	// stb r22,8(r4)
	REX_STORE_U8(ctx.r4.u32 + 8, r22.u8);
	// stb r22,9(r4)
	REX_STORE_U8(ctx.r4.u32 + 9, r22.u8);
	// stb r22,10(r4)
	REX_STORE_U8(ctx.r4.u32 + 10, r22.u8);
	// stb r22,12(r4)
	REX_STORE_U8(ctx.r4.u32 + 12, r22.u8);
	// lwz r11,14868(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14868);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8237b300
	if (!ctx.cr6.eq) goto loc_8237B300;
	// lwz r3,84(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
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
	// bge 0x8237b2f4
	if (!ctx.cr0.lt) goto loc_8237B2F4;
	// bl 0x823380c8
	ctx.lr = 0x8237B2F4;
	sub_823380C8(ctx, base);
loc_8237B2F4:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// rlwimi r11,r31,5,24,26
	ctx.r11.u64 = (__builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 5) & 0xE0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF1F);
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
loc_8237B300:
	// lwz r11,348(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 348);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8237b340
	if (!ctx.cr6.eq) goto loc_8237B340;
	// lwz r3,84(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 84);
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
	// bge 0x8237b334
	if (!ctx.cr0.lt) goto loc_8237B334;
	// bl 0x823380c8
	ctx.lr = 0x8237B334;
	sub_823380C8(ctx, base);
loc_8237B334:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// rlwimi r11,r31,31,0,0
	ctx.r11.u64 = (__builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 31) & 0x80000000) | (ctx.r11.u64 & 0xFFFFFFFF7FFFFFFF);
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
loc_8237B340:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// li r23,3
	r23.s64 = 3;
	// li r24,1
	r24.s64 = 1;
	// rlwinm r10,r11,0,24,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE0;
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// bne cr6,0x8237b36c
	if (!ctx.cr6.eq) goto loc_8237B36C;
	// lwz r11,356(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 356);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// ori r9,r10,8
	ctx.r9.u64 = ctx.r10.u64 | 8;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// b 0x8237b44c
	goto loc_8237B44C;
loc_8237B36C:
	// rlwinm r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8237b38c
	if (!ctx.cr6.eq) goto loc_8237B38C;
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r6,356(r26)
	ctx.r6.u64 = REX_LOAD_U32(r26.u32 + 356);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r4,2380(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 2380);
	// bl 0x823a6e38
	ctx.lr = 0x8237B38C;
	sub_823A6E38(ctx, base);
loc_8237B38C:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// rlwinm r10,r11,0,24,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8237b44c
	if (!ctx.cr6.eq) goto loc_8237B44C;
	// lwz r10,356(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 356);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r8,r9,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8237b3b8
	if (ctx.cr6.eq) goto loc_8237B3B8;
	// rlwimi r11,r23,5,24,26
	ctx.r11.u64 = (__builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 5) & 0xE0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF1F);
	// b 0x8237b448
	goto loc_8237B448;
loc_8237B3B8:
	// lwz r3,84(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 84);
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
	// bge 0x8237b3e0
	if (!ctx.cr0.lt) goto loc_8237B3E0;
	// bl 0x823380c8
	ctx.lr = 0x8237B3E0;
	sub_823380C8(ctx, base);
loc_8237B3E0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8237b3fc
	if (!ctx.cr6.eq) goto loc_8237B3FC;
	// lwz r11,14844(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 14844);
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// rlwimi r10,r11,5,24,26
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xE0) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF1F);
	// stw r10,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// b 0x8237b44c
	goto loc_8237B44C;
loc_8237B3FC:
	// lwz r3,84(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 84);
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
	// bge 0x8237b424
	if (!ctx.cr0.lt) goto loc_8237B424;
	// bl 0x823380c8
	ctx.lr = 0x8237B424;
	sub_823380C8(ctx, base);
loc_8237B424:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8237b440
	if (!ctx.cr6.eq) goto loc_8237B440;
	// lwz r11,14848(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 14848);
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// rlwimi r10,r11,5,24,26
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xE0) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF1F);
	// stw r10,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// b 0x8237b44c
	goto loc_8237B44C;
loc_8237B440:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// rlwimi r11,r24,6,24,26
	ctx.r11.u64 = (__builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 6) & 0xE0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF1F);
loc_8237B448:
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
loc_8237B44C:
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// rlwinm r11,r10,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8237b4d4
	if (ctx.cr6.eq) goto loc_8237B4D4;
	// sth r22,14(r28)
	REX_STORE_U16(r28.u32 + 14, r22.u16);
	// li r5,0
	ctx.r5.s64 = 0;
	// sth r22,16(r28)
	REX_STORE_U16(r28.u32 + 16, r22.u16);
	// li r4,1
	ctx.r4.s64 = 1;
	// sth r22,18(r28)
	REX_STORE_U16(r28.u32 + 18, r22.u16);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8238ecb0
	ctx.lr = 0x8237B478;
	sub_8238ECB0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8238ecb0
	ctx.lr = 0x8237B488;
	sub_8238ECB0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8238ecb0
	ctx.lr = 0x8237B498;
	sub_8238ECB0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8238ecb0
	ctx.lr = 0x8237B4A8;
	sub_8238ECB0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8238ecb0
	ctx.lr = 0x8237B4B8;
	sub_8238ECB0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8238ecb0
	ctx.lr = 0x8237B4C8;
	sub_8238ECB0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ebc
	return;
loc_8237B4D4:
	// lwz r11,356(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 356);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r8,r9,0,28,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8237b574
	if (!ctx.cr6.eq) goto loc_8237B574;
	// oris r11,r10,16384
	ctx.r11.u64 = ctx.r10.u64 | 1073741824;
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
	// lwz r10,284(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 284);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8237b524
	if (ctx.cr6.eq) goto loc_8237B524;
	// lwz r11,356(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 356);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8237b524
	if (ctx.cr6.eq) goto loc_8237B524;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823904e8
	ctx.lr = 0x8237B51C;
	sub_823904E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8237ba70
	if (!ctx.cr6.eq) goto loc_8237BA70;
loc_8237B524:
	// lwz r11,356(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 356);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8237b9ec
	if (ctx.cr6.eq) goto loc_8237B9EC;
	// lwz r3,84(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 84);
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
	// bge 0x8237b560
	if (!ctx.cr0.lt) goto loc_8237B560;
	// bl 0x823380c8
	ctx.lr = 0x8237B560;
	sub_823380C8(ctx, base);
loc_8237B560:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// clrlwi r10,r31,24
	ctx.r10.u64 = r31.u32 & 0xFF;
	// rlwimi r11,r10,3,27,28
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x18) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFE7);
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
	// b 0x8237b9ec
	goto loc_8237B9EC;
loc_8237B574:
	// rlwinm r10,r10,0,24,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE0;
	// cmplwi cr6,r10,64
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 64, ctx.xer);
	// bne cr6,0x8237b5d4
	if (!ctx.cr6.eq) goto loc_8237B5D4;
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// lwz r4,2380(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 2380);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823a6e38
	ctx.lr = 0x8237B594;
	sub_823A6E38(ctx, base);
	// lwz r11,356(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 356);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8237ba6c
	if (!ctx.cr6.eq) goto loc_8237BA6C;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r9,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8237ba6c
	if (!ctx.cr6.eq) goto loc_8237BA6C;
	// rlwinm r11,r10,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8237b5d4
	if (!ctx.cr6.eq) goto loc_8237B5D4;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// oris r10,r11,16384
	ctx.r10.u64 = ctx.r11.u64 | 1073741824;
	// stw r10,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// b 0x8237b9ec
	goto loc_8237B9EC;
loc_8237B5D4:
	// lwz r11,332(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 332);
	// lwz r25,396(r26)
	r25.u64 = REX_LOAD_U32(r26.u32 + 396);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8237b5f0
	if (ctx.cr6.eq) goto loc_8237B5F0;
	// rlwinm r11,r9,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8237b5f4
	if (ctx.cr6.eq) goto loc_8237B5F4;
loc_8237B5F0:
	// mr r24,r22
	r24.u64 = r22.u64;
loc_8237B5F4:
	// rlwinm r11,r9,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8237b638
	if (ctx.cr6.eq) goto loc_8237B638;
	// lwz r3,84(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 84);
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
	// bge 0x8237b628
	if (!ctx.cr0.lt) goto loc_8237B628;
	// bl 0x823380c8
	ctx.lr = 0x8237B628;
	sub_823380C8(ctx, base);
loc_8237B628:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// clrlwi r10,r31,24
	ctx.r10.u64 = r31.u32 & 0xFF;
	// rlwimi r11,r10,3,27,28
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x18) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFE7);
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
loc_8237B638:
	// lwz r11,2144(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 2144);
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r31,84(r26)
	r31.u64 = REX_LOAD_U32(r26.u32 + 84);
	// ori r27,r10,32768
	r27.u64 = ctx.r10.u64 | 32768;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8237b65c
	if (!ctx.cr6.eq) goto loc_8237B65C;
	// mr r21,r22
	r21.u64 = r22.u64;
	// stw r23,20(r31)
	REX_STORE_U32(r31.u32 + 20, r23.u32);
	// b 0x8237b784
	goto loc_8237B784;
loc_8237B65C:
	// lbz r4,8(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 0);
	// subfic r9,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// lwz r29,0(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrldi r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// srd r7,r10,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r8.u8 & 0x7F));
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r5,r6,r29
	ctx.r5.u64 = REX_LOAD_U16(ctx.r6.u32 + r29.u32);
	// extsh r30,r5
	r30.s64 = ctx.r5.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x8237b748
	if (ctx.cr6.lt) goto loc_8237B748;
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
	// bge cr6,0x8237b740
	if (!ctx.cr6.lt) goto loc_8237B740;
loc_8237B6A8:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8237b6d4
	if (ctx.cr6.lt) goto loc_8237B6D4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82337e90
	ctx.lr = 0x8237B6C4;
	sub_82337E90(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x8237b6a8
	if (ctx.cr6.eq) goto loc_8237B6A8;
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// b 0x8237b780
	goto loc_8237B780;
loc_8237B6D4:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// lbz r9,1(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rldicr r10,r10,8,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFFFF;
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
loc_8237B740:
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// b 0x8237b780
	goto loc_8237B780;
loc_8237B748:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82337f50
	ctx.lr = 0x8237B750;
	sub_82337F50(ctx, base);
loc_8237B750:
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
	ctx.lr = 0x8237B768;
	sub_82337F50(ctx, base);
	// add r10,r30,r27
	ctx.r10.u64 = r30.u64 + r27.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r29
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + r29.u32);
	// extsh r30,r8
	r30.s64 = ctx.r8.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x8237b750
	if (ctx.cr6.lt) goto loc_8237B750;
loc_8237B780:
	// mr r21,r30
	r21.u64 = r30.u64;
loc_8237B784:
	// lwz r11,84(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 84);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8237ba6c
	if (!ctx.cr6.eq) goto loc_8237BA6C;
	// lwz r11,284(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 284);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8237b7b4
	if (ctx.cr6.eq) goto loc_8237B7B4;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823904e8
	ctx.lr = 0x8237B7AC;
	sub_823904E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8237ba6c
	if (!ctx.cr6.eq) goto loc_8237BA6C;
loc_8237B7B4:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// rlwinm r10,r11,0,2,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stw r10,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// beq cr6,0x8237b834
	if (ctx.cr6.eq) goto loc_8237B834;
	// lwz r3,84(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 84);
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
	// bge 0x8237b7f0
	if (!ctx.cr0.lt) goto loc_8237B7F0;
	// bl 0x823380c8
	ctx.lr = 0x8237B7F0;
	sub_823380C8(ctx, base);
loc_8237B7F0:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x8237b828
	if (ctx.cr6.eq) goto loc_8237B828;
	// lwz r3,84(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 84);
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
	// bge 0x8237b824
	if (!ctx.cr0.lt) goto loc_8237B824;
	// bl 0x823380c8
	ctx.lr = 0x8237B824;
	sub_823380C8(ctx, base);
loc_8237B824:
	// add r11,r31,r30
	ctx.r11.u64 = r31.u64 + r30.u64;
loc_8237B828:
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// rlwimi r10,r11,22,8,9
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0xC00000) | (ctx.r10.u64 & 0xFFFFFFFFFF3FFFFF);
	// stw r10,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r10.u32);
loc_8237B834:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// beq cr6,0x8237b9ec
	if (ctx.cr6.eq) goto loc_8237B9EC;
	// lwz r11,2520(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 2520);
	// lwz r31,84(r26)
	r31.u64 = REX_LOAD_U32(r26.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8237b858
	if (!ctx.cr6.eq) goto loc_8237B858;
	// mr r30,r22
	r30.u64 = r22.u64;
	// stw r23,20(r31)
	REX_STORE_U32(r31.u32 + 20, r23.u32);
	// b 0x8237b97c
	goto loc_8237B97C;
loc_8237B858:
	// lbz r4,8(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 0);
	// subfic r9,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// lwz r29,0(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrldi r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// srd r7,r10,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r8.u8 & 0x7F));
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r5,r6,r29
	ctx.r5.u64 = REX_LOAD_U16(ctx.r6.u32 + r29.u32);
	// extsh r30,r5
	r30.s64 = ctx.r5.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x8237b944
	if (ctx.cr6.lt) goto loc_8237B944;
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
	// bge cr6,0x8237b93c
	if (!ctx.cr6.lt) goto loc_8237B93C;
loc_8237B8A4:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8237b8d0
	if (ctx.cr6.lt) goto loc_8237B8D0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82337e90
	ctx.lr = 0x8237B8C0;
	sub_82337E90(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x8237b8a4
	if (ctx.cr6.eq) goto loc_8237B8A4;
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// b 0x8237b97c
	goto loc_8237B97C;
loc_8237B8D0:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// lbz r9,1(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rldicr r10,r10,8,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r4,2(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r6,3(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r8,5(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rldicr r5,r10,8,55
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r3,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// ld r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 0);
	// neg r4,r10
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// rldicr r11,r5,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// rldicr r11,r11,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rldicr r11,r7,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	// sld r11,r6,r3
	ctx.r11.u64 = ctx.r3.u8 & 0x40 ? 0 : (ctx.r6.u64 << (ctx.r3.u8 & 0x7F));
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// std r5,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r5.u64);
loc_8237B93C:
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// b 0x8237b97c
	goto loc_8237B97C;
loc_8237B944:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82337f50
	ctx.lr = 0x8237B94C;
	sub_82337F50(ctx, base);
loc_8237B94C:
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
	ctx.lr = 0x8237B964;
	sub_82337F50(ctx, base);
	// add r10,r30,r27
	ctx.r10.u64 = r30.u64 + r27.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r29
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + r29.u32);
	// extsh r30,r8
	r30.s64 = ctx.r8.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x8237b94c
	if (ctx.cr6.lt) goto loc_8237B94C;
loc_8237B97C:
	// lwz r11,84(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 84);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8237ba6c
	if (!ctx.cr6.eq) goto loc_8237BA6C;
	// cmplwi cr6,r30,16
	ctx.cr6.compare<uint32_t>(r30.u32, 16, ctx.xer);
	// bge cr6,0x8237ba6c
	if (!ctx.cr6.lt) goto loc_8237BA6C;
	// li r11,8
	ctx.r11.s64 = 8;
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// subfc r8,r11,r30
	ctx.xer.ca = r30.u32 >= ctx.r11.u32;
	ctx.r8.u64 = r30.u64 - ctx.r11.u64;
	// eqv r7,r11,r30
	ctx.r7.u64 = ~(ctx.r11.u64 ^ r30.u64);
	// addi r11,r9,-22584
	ctx.r11.s64 = ctx.r9.s64 + -22584;
	// rlwinm r6,r7,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// rlwinm r5,r30,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r4,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r4.s64 = temp.s64;
	// addi r3,r11,-64
	ctx.r3.s64 = ctx.r11.s64 + -64;
	// clrlwi r9,r4,31
	ctx.r9.u64 = ctx.r4.u32 & 0x1;
	// rlwimi r10,r9,28,3,3
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0x10000000) | (ctx.r10.u64 & 0xFFFFFFFFEFFFFFFF);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// stw r10,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// lwzx r7,r5,r3
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r3.u32);
	// rlwimi r8,r7,24,5,7
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0x7000000) | (ctx.r8.u64 & 0xFFFFFFFFF8FFFFFF);
	// stw r8,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r8.u32);
	// lwzx r6,r5,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// rotlwi r5,r8,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// rlwimi r5,r6,20,10,11
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 20) & 0x300000) | (ctx.r5.u64 & 0xFFFFFFFFFFCFFFFF);
	// rlwinm r4,r5,0,5,3
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFF7FFFFFF;
	// stw r4,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r4.u32);
loc_8237B9EC:
	// clrlwi r5,r21,31
	ctx.r5.u64 = r21.u32 & 0x1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8238ecb0
	ctx.lr = 0x8237B9FC;
	sub_8238ECB0(ctx, base);
	// srawi r31,r21,1
	ctx.xer.ca = (r21.s32 < 0) & ((r21.u32 & 0x1) != 0);
	r31.s64 = r21.s32 >> 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// clrlwi r5,r31,31
	ctx.r5.u64 = r31.u32 & 0x1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8238ecb0
	ctx.lr = 0x8237BA10;
	sub_8238ECB0(ctx, base);
	// srawi r31,r31,1
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1) != 0);
	r31.s64 = r31.s32 >> 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// clrlwi r5,r31,31
	ctx.r5.u64 = r31.u32 & 0x1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8238ecb0
	ctx.lr = 0x8237BA24;
	sub_8238ECB0(ctx, base);
	// srawi r31,r31,1
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1) != 0);
	r31.s64 = r31.s32 >> 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// clrlwi r5,r31,31
	ctx.r5.u64 = r31.u32 & 0x1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8238ecb0
	ctx.lr = 0x8237BA38;
	sub_8238ECB0(ctx, base);
	// srawi r31,r31,1
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1) != 0);
	r31.s64 = r31.s32 >> 1;
	// li r4,5
	ctx.r4.s64 = 5;
	// clrlwi r5,r31,31
	ctx.r5.u64 = r31.u32 & 0x1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8238ecb0
	ctx.lr = 0x8237BA4C;
	sub_8238ECB0(ctx, base);
	// srawi r11,r31,1
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1) != 0);
	ctx.r11.s64 = r31.s32 >> 1;
	// li r4,6
	ctx.r4.s64 = 6;
	// clrlwi r5,r11,31
	ctx.r5.u64 = ctx.r11.u32 & 0x1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8238ecb0
	ctx.lr = 0x8237BA60;
	sub_8238ECB0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ebc
	return;
loc_8237BA6C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8237BA70:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ebc
	return;
}

DEFINE_REX_FUNC(sub_82396DA0) {
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
	ctx.lr = 0x82396DA8;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r9
	r30.u64 = ctx.r9.u64;
	// lwz r10,20(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// mr r23,r8
	r23.u64 = ctx.r8.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// and r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 & ctx.r10.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82396e00
	if (!ctx.cr6.eq) goto loc_82396E00;
	// bl 0x82396bd0
	ctx.lr = 0x82396DE0;
	sub_82396BD0(ctx, base);
	// stw r3,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82397350
	if (!ctx.cr6.eq) goto loc_82397350;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// lwz r10,20(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 20);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// or r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
loc_82396E00:
	// lwz r11,44(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 44);
	// li r22,3
	r22.s64 = 3;
	// li r24,0
	r24.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82396e20
	if (!ctx.cr6.eq) goto loc_82396E20;
	// mr r30,r24
	r30.u64 = r24.u64;
	// stw r22,20(r31)
	REX_STORE_U32(r31.u32 + 20, r22.u32);
	// b 0x82396f4c
	goto loc_82396F4C;
loc_82396E20:
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
	// blt cr6,0x82396f0c
	if (ctx.cr6.lt) goto loc_82396F0C;
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
	// bge cr6,0x82396f04
	if (!ctx.cr6.lt) goto loc_82396F04;
loc_82396E6C:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82396e98
	if (ctx.cr6.lt) goto loc_82396E98;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82337e90
	ctx.lr = 0x82396E88;
	sub_82337E90(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x82396e6c
	if (ctx.cr6.eq) goto loc_82396E6C;
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// b 0x82396f4c
	goto loc_82396F4C;
loc_82396E98:
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
loc_82396F04:
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// b 0x82396f4c
	goto loc_82396F4C;
loc_82396F0C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82337f50
	ctx.lr = 0x82396F14;
	sub_82337F50(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r29,r11,32768
	r29.u64 = ctx.r11.u64 | 32768;
loc_82396F1C:
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
	ctx.lr = 0x82396F34;
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
	// blt cr6,0x82396f1c
	if (ctx.cr6.lt) goto loc_82396F1C;
loc_82396F4C:
	// lwz r11,12(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 12);
	// lwz r10,8(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 8);
	// subfc r9,r30,r11
	ctx.xer.ca = ctx.r11.u32 >= r30.u32;
	ctx.r9.u64 = ctx.r11.u64 - r30.u64;
	// addze r8,r30
	temp.s64 = r30.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < r30.u32;
	ctx.r8.s64 = temp.s64;
	// subf r7,r8,r30
	ctx.r7.u64 = r30.u64 - ctx.r8.u64;
	// and r29,r7,r30
	r29.u64 = ctx.r7.u64 & r30.u64;
	// lbzx r30,r10,r29
	r30.u64 = REX_LOAD_U8(ctx.r10.u32 + r29.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x82397024
	if (ctx.cr6.eq) goto loc_82397024;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r28,r24
	r28.u64 = r24.u64;
	// cmplwi cr6,r30,32
	ctx.cr6.compare<uint32_t>(r30.u32, 32, ctx.xer);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// ble cr6,0x82396f8c
	if (!ctx.cr6.gt) goto loc_82396F8C;
	// mr r30,r24
	r30.u64 = r24.u64;
	// b 0x82397024
	goto loc_82397024;
loc_82396F8C:
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82396fec
	if (!ctx.cr6.gt) goto loc_82396FEC;
loc_82396F94:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82396fec
	if (ctx.cr6.eq) goto loc_82396FEC;
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
	// add r28,r11,r28
	r28.u64 = ctx.r11.u64 + r28.u64;
	// std r10,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r10.u64);
	// bge 0x82396fdc
	if (!ctx.cr0.lt) goto loc_82396FDC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82396FDC;
	sub_823380C8(ctx, base);
loc_82396FDC:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82396f94
	if (ctx.cr6.gt) goto loc_82396F94;
loc_82396FEC:
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
	// add r30,r11,r28
	r30.u64 = ctx.r11.u64 + r28.u64;
	// std r4,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r4.u64);
	// bge 0x82397024
	if (!ctx.cr0.lt) goto loc_82397024;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82397024;
	sub_823380C8(ctx, base);
loc_82397024:
	// lwz r10,40(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 40);
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// cmpwi cr6,r29,46
	ctx.cr6.compare<int32_t>(r29.s32, 46, ctx.xer);
	// bge cr6,0x823970a4
	if (!ctx.cr6.lt) goto loc_823970A4;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmpwi cr6,r29,23
	ctx.cr6.compare<int32_t>(r29.s32, 23, ctx.xer);
	// bge cr6,0x82397048
	if (!ctx.cr6.lt) goto loc_82397048;
	// stw r24,0(r23)
	REX_STORE_U32(r23.u32 + 0, r24.u32);
	// b 0x82397050
	goto loc_82397050;
loc_82397048:
	// addi r11,r29,-23
	ctx.r11.s64 = r29.s64 + -23;
	// stw r10,0(r23)
	REX_STORE_U32(r23.u32 + 0, ctx.r10.u32);
loc_82397050:
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bge cr6,0x82397064
	if (!ctx.cr6.lt) goto loc_82397064;
	// stw r24,0(r26)
	REX_STORE_U32(r26.u32 + 0, r24.u32);
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
	// b 0x82397308
	goto loc_82397308;
loc_82397064:
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// bge cr6,0x8239707c
	if (!ctx.cr6.lt) goto loc_8239707C;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// stw r10,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
	// b 0x82397308
	goto loc_82397308;
loc_8239707C:
	// cmpwi cr6,r11,22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 22, ctx.xer);
	// bge cr6,0x82397098
	if (!ctx.cr6.lt) goto loc_82397098;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r9,r11,-20
	ctx.r9.s64 = ctx.r11.s64 + -20;
	// stw r10,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// stw r9,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r9.u32);
	// b 0x82397308
	goto loc_82397308;
loc_82397098:
	// stw r22,0(r26)
	REX_STORE_U32(r26.u32 + 0, r22.u32);
	// stw r24,0(r27)
	REX_STORE_U32(r27.u32 + 0, r24.u32);
	// b 0x82397308
	goto loc_82397308;
loc_823970A4:
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r29,59
	ctx.cr6.compare<int32_t>(r29.s32, 59, ctx.xer);
	// lwzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r24,0(r26)
	REX_STORE_U32(r26.u32 + 0, r24.u32);
	// and r11,r10,r30
	ctx.r11.u64 = ctx.r10.u64 & r30.u64;
	// bge cr6,0x82397194
	if (!ctx.cr6.lt) goto loc_82397194;
	// cmpwi cr6,r29,47
	ctx.cr6.compare<int32_t>(r29.s32, 47, ctx.xer);
	// stw r24,0(r23)
	REX_STORE_U32(r23.u32 + 0, r24.u32);
	// bgt cr6,0x823970e8
	if (ctx.cr6.gt) goto loc_823970E8;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r10,r10,14452
	ctx.r10.s64 = ctx.r10.s64 + 14452;
	// add r9,r29,r10
	ctx.r9.u64 = r29.u64 + ctx.r10.u64;
	// lbz r8,-46(r9)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + -46);
	// extsb r10,r8
	ctx.r10.s64 = ctx.r8.s8;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r7,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r7.u32);
	// b 0x82397308
	goto loc_82397308;
loc_823970E8:
	// cmpwi cr6,r29,49
	ctx.cr6.compare<int32_t>(r29.s32, 49, ctx.xer);
	// bgt cr6,0x82397118
	if (ctx.cr6.gt) goto loc_82397118;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r10,14452
	ctx.r10.s64 = ctx.r10.s64 + 14452;
	// stw r9,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r9.u32);
	// add r8,r29,r10
	ctx.r8.u64 = r29.u64 + ctx.r10.u64;
	// lbz r7,-46(r8)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + -46);
	// extsb r10,r7
	ctx.r10.s64 = ctx.r7.s8;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r6,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r6.u32);
	// b 0x82397308
	goto loc_82397308;
loc_82397118:
	// cmpwi cr6,r29,50
	ctx.cr6.compare<int32_t>(r29.s32, 50, ctx.xer);
	// bne cr6,0x8239712c
	if (!ctx.cr6.eq) goto loc_8239712C;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
	// b 0x82397308
	goto loc_82397308;
loc_8239712C:
	// cmpwi cr6,r29,51
	ctx.cr6.compare<int32_t>(r29.s32, 51, ctx.xer);
	// bne cr6,0x82397148
	if (!ctx.cr6.eq) goto loc_82397148;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// stw r10,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// stw r9,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r9.u32);
	// b 0x82397308
	goto loc_82397308;
loc_82397148:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// cmpwi cr6,r29,56
	ctx.cr6.compare<int32_t>(r29.s32, 56, ctx.xer);
	// addi r10,r10,14452
	ctx.r10.s64 = ctx.r10.s64 + 14452;
	// bgt cr6,0x82397174
	if (ctx.cr6.gt) goto loc_82397174;
	// add r9,r29,r10
	ctx.r9.u64 = r29.u64 + ctx.r10.u64;
	// stw r24,0(r27)
	REX_STORE_U32(r27.u32 + 0, r24.u32);
	// lbz r8,-46(r9)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + -46);
	// extsb r10,r8
	ctx.r10.s64 = ctx.r8.s8;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r7,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r7.u32);
	// b 0x82397308
	goto loc_82397308;
loc_82397174:
	// li r9,1
	ctx.r9.s64 = 1;
	// add r8,r29,r10
	ctx.r8.u64 = r29.u64 + ctx.r10.u64;
	// stw r9,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r9.u32);
	// lbz r7,-46(r8)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + -46);
	// extsb r10,r7
	ctx.r10.s64 = ctx.r7.s8;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r6,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r6.u32);
	// b 0x82397308
	goto loc_82397308;
loc_82397194:
	// cmpwi cr6,r29,73
	ctx.cr6.compare<int32_t>(r29.s32, 73, ctx.xer);
	// bge cr6,0x82397258
	if (!ctx.cr6.lt) goto loc_82397258;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmpwi cr6,r29,64
	ctx.cr6.compare<int32_t>(r29.s32, 64, ctx.xer);
	// stw r10,0(r23)
	REX_STORE_U32(r23.u32 + 0, ctx.r10.u32);
	// bgt cr6,0x823971d0
	if (ctx.cr6.gt) goto loc_823971D0;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r10,r10,14452
	ctx.r10.s64 = ctx.r10.s64 + 14452;
	// addi r10,r10,-1592
	ctx.r10.s64 = ctx.r10.s64 + -1592;
	// add r9,r29,r10
	ctx.r9.u64 = r29.u64 + ctx.r10.u64;
	// lbz r8,-59(r9)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + -59);
	// extsb r10,r8
	ctx.r10.s64 = ctx.r8.s8;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r7,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r7.u32);
	// b 0x82397308
	goto loc_82397308;
loc_823971D0:
	// cmpwi cr6,r29,67
	ctx.cr6.compare<int32_t>(r29.s32, 67, ctx.xer);
	// bgt cr6,0x82397200
	if (ctx.cr6.gt) goto loc_82397200;
	// stw r10,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r10,r10,14452
	ctx.r10.s64 = ctx.r10.s64 + 14452;
	// addi r10,r10,-1592
	ctx.r10.s64 = ctx.r10.s64 + -1592;
	// add r9,r29,r10
	ctx.r9.u64 = r29.u64 + ctx.r10.u64;
	// lbz r8,-59(r9)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + -59);
	// extsb r10,r8
	ctx.r10.s64 = ctx.r8.s8;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r7,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r7.u32);
	// b 0x82397308
	goto loc_82397308;
loc_82397200:
	// cmpwi cr6,r29,70
	ctx.cr6.compare<int32_t>(r29.s32, 70, ctx.xer);
	// bgt cr6,0x82397230
	if (ctx.cr6.gt) goto loc_82397230;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stw r24,0(r27)
	REX_STORE_U32(r27.u32 + 0, r24.u32);
	// addi r10,r10,14452
	ctx.r10.s64 = ctx.r10.s64 + 14452;
	// addi r10,r10,-1592
	ctx.r10.s64 = ctx.r10.s64 + -1592;
	// add r9,r29,r10
	ctx.r9.u64 = r29.u64 + ctx.r10.u64;
	// lbz r8,-59(r9)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + -59);
	// extsb r10,r8
	ctx.r10.s64 = ctx.r8.s8;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r7,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r7.u32);
	// b 0x82397308
	goto loc_82397308;
loc_82397230:
	// stw r10,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r10.u32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r10,r10,14452
	ctx.r10.s64 = ctx.r10.s64 + 14452;
	// addi r10,r10,-1592
	ctx.r10.s64 = ctx.r10.s64 + -1592;
	// add r9,r29,r10
	ctx.r9.u64 = r29.u64 + ctx.r10.u64;
	// lbz r8,-59(r9)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + -59);
	// extsb r10,r8
	ctx.r10.s64 = ctx.r8.s8;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r7,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r7.u32);
	// b 0x82397308
	goto loc_82397308;
loc_82397258:
	// cmpwi cr6,r29,75
	ctx.cr6.compare<int32_t>(r29.s32, 75, ctx.xer);
	// bge cr6,0x823972ec
	if (!ctx.cr6.lt) goto loc_823972EC;
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// addi r9,r29,-73
	ctx.r9.s64 = r29.s64 + -73;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// stw r9,0(r23)
	REX_STORE_U32(r23.u32 + 0, ctx.r9.u32);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bgt cr6,0x82397308
	if (ctx.cr6.gt) goto loc_82397308;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x823972a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_823972A0;
	// bdzf 4*cr6+eq,0x823972b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_823972B4;
	// bne cr6,0x823972d0
	if (!ctx.cr6.eq) goto loc_823972D0;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// stw r10,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r10.u32);
	// stw r9,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r9.u32);
	// b 0x82397308
	goto loc_82397308;
loc_823972A0:
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
	// stw r10,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// b 0x82397308
	goto loc_82397308;
loc_823972B4:
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// addi r9,r11,3
	ctx.r9.s64 = ctx.r11.s64 + 3;
	// stw r10,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r10.u32);
	// stw r9,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r9.u32);
	// b 0x82397308
	goto loc_82397308;
loc_823972D0:
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// addi r10,r10,5
	ctx.r10.s64 = ctx.r10.s64 + 5;
	// addi r9,r11,3
	ctx.r9.s64 = ctx.r11.s64 + 3;
	// stw r10,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r10.u32);
	// stw r9,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r9.u32);
	// b 0x82397308
	goto loc_82397308;
loc_823972EC:
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// clrlwi r9,r10,26
	ctx.r9.u64 = ctx.r10.u32 & 0x3F;
	// srawi r8,r10,6
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3F) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 6;
	// stw r11,0(r23)
	REX_STORE_U32(r23.u32 + 0, ctx.r11.u32);
	// stw r9,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r9.u32);
	// stw r8,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r8.u32);
loc_82397308:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r11.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 8);
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 0);
	// rldicr r9,r10,1,62
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r11.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// std r9,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r9.u64);
	// rldicl r30,r10,1,63
	r30.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// bge 0x8239733c
	if (!ctx.cr0.lt) goto loc_8239733C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8239733C;
	sub_823380C8(ctx, base);
loc_8239733C:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// neg r10,r30
	ctx.r10.s64 = static_cast<int64_t>(-r30.u64);
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// subf r8,r10,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r10.u64;
	// stw r8,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r8.u32);
loc_82397350:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ec0
	return;
}

DEFINE_REX_FUNC(sub_823B1A10) {
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
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e64
	ctx.lr = 0x823B1A18;
	// lwz r6,32(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// srawi r10,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 1;
	// lwz r9,24(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r31,28(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// twllei r6,0
	if (ctx.r6.s32 == 0 || ctx.r6.u32 < 0u) ppc_trap(ctx, base, 0);
	// addze r21,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	r21.s64 = temp.s64;
	// lwz r7,52(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// srawi r8,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// lwz r30,72(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 72);
	// lwz r28,4(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addze r22,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	r22.s64 = temp.s64;
	// lwz r24,8(r11)
	r24.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r28,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 7) & 0xFFFFFF80;
	// rlwinm r10,r22,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 7) & 0xFFFFFF80;
	// addi r29,r11,-128
	r29.s64 = ctx.r11.s64 + -128;
	// addi r27,r10,-128
	r27.s64 = ctx.r10.s64 + -128;
	// rotlwi r9,r11,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// rotlwi r8,r29,1
	ctx.r8.u64 = __builtin_rotateleft32(r29.u32, 1);
	// rotlwi r10,r27,1
	ctx.r10.u64 = __builtin_rotateleft32(r27.u32, 1);
	// divw r11,r11,r6
	ctx.r11.u64 = uint32_t((ctx.r6.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r6.s32 == -1)) ? ctx.r11.s32 / ctx.r6.s32 : 0);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// addi r26,r10,-1
	r26.s64 = ctx.r10.s64 + -1;
	// andc r6,r6,r9
	ctx.r6.u64 = ctx.r6.u64 & ~ctx.r9.u64;
	// divw r10,r29,r11
	ctx.r10.u64 = uint32_t((ctx.r11.s32 && !(r29.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? r29.s32 / ctx.r11.s32 : 0);
	// andc r29,r11,r8
	r29.u64 = ctx.r11.u64 & ~ctx.r8.u64;
	// divw r9,r27,r11
	ctx.r9.u64 = uint32_t((ctx.r11.s32 && !(r27.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? r27.s32 / ctx.r11.s32 : 0);
	// andc r27,r11,r26
	r27.u64 = ctx.r11.u64 & ~r26.u64;
	// srawi r31,r31,1
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1) != 0);
	r31.s64 = r31.s32 >> 1;
	// mullw r8,r28,r4
	ctx.r8.s64 = int64_t(r28.s32) * int64_t(ctx.r4.s32);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// twlgei r6,-1
	if (ctx.r6.s32 == -1 || ctx.r6.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// addze r23,r31
	temp.s64 = r31.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < r31.u32;
	r23.s64 = temp.s64;
	// twlgei r29,-1
	if (r29.s32 == -1 || r29.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// addi r26,r10,-1
	r26.s64 = ctx.r10.s64 + -1;
	// twlgei r27,-1
	if (r27.s32 == -1 || r27.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// addi r20,r9,-1
	r20.s64 = ctx.r9.s64 + -1;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x823b1ae4
	if (ctx.cr6.eq) goto loc_823B1AE4;
	// lwz r10,76(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x823b1ae4
	if (!ctx.cr6.eq) goto loc_823B1AE4;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x823b1ae4
	if (!ctx.cr6.eq) goto loc_823B1AE4;
	// lwz r31,80(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// lwz r25,92(r3)
	r25.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// b 0x823b1af8
	goto loc_823B1AF8;
loc_823B1AE4:
	// lwz r10,32(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r9,64(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// mullw r7,r10,r4
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// add r31,r7,r9
	r31.u64 = ctx.r7.u64 + ctx.r9.u64;
	// mr r25,r10
	r25.u64 = ctx.r10.u64;
loc_823B1AF8:
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r29,r10,r11
	r29.u64 = ctx.r10.u64 & ctx.r11.u64;
	// bge cr6,0x823b1bdc
	if (!ctx.cr6.lt) goto loc_823B1BDC;
	// subf r27,r4,r5
	r27.u64 = ctx.r5.u64 - ctx.r4.u64;
loc_823B1B10:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// ble cr6,0x823b1b60
	if (!ctx.cr6.gt) goto loc_823B1B60;
	// addi r6,r8,1
	ctx.r6.s64 = ctx.r8.s64 + 1;
	// mtctr r26
	ctx.ctr.u64 = r26.u64;
loc_823B1B28:
	// srawi r9,r11,7
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7F) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 7;
	// clrlwi r7,r11,25
	ctx.r7.u64 = ctx.r11.u32 & 0x7F;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// subfic r30,r7,128
	ctx.xer.ca = ctx.r7.u32 <= 128;
	r30.u64 = static_cast<uint64_t>(128) - ctx.r7.u64;
	// lbzx r19,r6,r9
	r19.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r9.u32);
	// lbzx r9,r9,r8
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// mullw r7,r19,r7
	ctx.r7.s64 = int64_t(r19.s32) * int64_t(ctx.r7.s32);
	// mullw r9,r9,r30
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(r30.s32);
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// srawi r9,r7,7
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7F) != 0);
	ctx.r9.s64 = ctx.r7.s32 >> 7;
	// clrlwi r7,r9,24
	ctx.r7.u64 = ctx.r9.u32 & 0xFF;
	// stbx r7,r10,r31
	REX_STORE_U8(ctx.r10.u32 + r31.u32, ctx.r7.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x823b1b28
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B1B28;
loc_823B1B60:
	// lwz r9,32(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x823b1bcc
	if (!ctx.cr6.lt) goto loc_823B1BCC;
	// addi r30,r28,-1
	r30.s64 = r28.s64 + -1;
loc_823B1B70:
	// srawi r9,r11,7
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7F) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 7;
	// clrlwi r6,r11,25
	ctx.r6.u64 = ctx.r11.u32 & 0x7F;
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r7,r30
	ctx.cr6.compare<int32_t>(ctx.r7.s32, r30.s32, ctx.xer);
	// ble cr6,0x823b1b94
	if (!ctx.cr6.gt) goto loc_823B1B94;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// cmpw cr6,r9,r30
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r30.s32, ctx.xer);
	// ble cr6,0x823b1b94
	if (!ctx.cr6.gt) goto loc_823B1B94;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
loc_823B1B94:
	// lbzx r9,r9,r8
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// subfic r19,r6,128
	ctx.xer.ca = ctx.r6.u32 <= 128;
	r19.u64 = static_cast<uint64_t>(128) - ctx.r6.u64;
	// lbzx r7,r7,r8
	ctx.r7.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r8.u32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// mullw r9,r9,r19
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(r19.s32);
	// mullw r7,r7,r6
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r6.s32);
	// add r6,r9,r7
	ctx.r6.u64 = ctx.r9.u64 + ctx.r7.u64;
	// srawi r9,r6,7
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7F) != 0);
	ctx.r9.s64 = ctx.r6.s32 >> 7;
	// clrlwi r7,r9,24
	ctx.r7.u64 = ctx.r9.u32 & 0xFF;
	// stbx r7,r10,r31
	REX_STORE_U8(ctx.r10.u32 + r31.u32, ctx.r7.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r6,32(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x823b1b70
	if (ctx.cr6.lt) goto loc_823B1B70;
loc_823B1BCC:
	// addic. r27,r27,-1
	ctx.xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// add r31,r25,r31
	r31.u64 = r25.u64 + r31.u64;
	// add r8,r8,r28
	ctx.r8.u64 = ctx.r8.u64 + r28.u64;
	// bne 0x823b1b10
	if (!ctx.cr0.eq) goto loc_823B1B10;
loc_823B1BDC:
	// lwz r7,44(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// mullw r26,r28,r24
	r26.s64 = int64_t(r28.s32) * int64_t(r24.s32);
	// lwz r11,72(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 72);
	// lwz r9,52(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// mullw r10,r7,r4
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r4.s32);
	// srawi r8,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addze r11,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r11.s64 = temp.s64;
	// mullw r10,r11,r22
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(r22.s32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r8,r10,r26
	ctx.r8.u64 = ctx.r10.u64 + r26.u64;
	// beq cr6,0x823b1c30
	if (ctx.cr6.eq) goto loc_823B1C30;
	// lwz r10,76(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x823b1c30
	if (!ctx.cr6.eq) goto loc_823B1C30;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x823b1c30
	if (!ctx.cr6.eq) goto loc_823B1C30;
	// lwz r31,84(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// lwz r27,96(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// b 0x823b1c4c
	goto loc_823B1C4C;
loc_823B1C30:
	// lwz r6,32(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mullw r10,r11,r21
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(r21.s32);
	// lwz r9,64(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// mullw r6,r6,r24
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(r24.s32);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// mr r27,r21
	r27.u64 = r21.u64;
	// add r31,r10,r9
	r31.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_823B1C4C:
	// mullw r10,r7,r5
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r5.s32);
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
	// addze r30,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	r30.s64 = temp.s64;
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r30.s32, ctx.xer);
	// bge cr6,0x823b1d48
	if (!ctx.cr6.lt) goto loc_823B1D48;
loc_823B1C64:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// ble cr6,0x823b1cb8
	if (!ctx.cr6.gt) goto loc_823B1CB8;
	// addi r6,r8,1
	ctx.r6.s64 = ctx.r8.s64 + 1;
	// mtctr r20
	ctx.ctr.u64 = r20.u64;
loc_823B1C7C:
	// srawi r9,r11,7
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7F) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 7;
	// clrlwi r7,r11,25
	ctx.r7.u64 = ctx.r11.u32 & 0x7F;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// subfic r30,r7,128
	ctx.xer.ca = ctx.r7.u32 <= 128;
	r30.u64 = static_cast<uint64_t>(128) - ctx.r7.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// lbzx r25,r6,r9
	r25.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r9.u32);
	// lbzx r9,r9,r8
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// mullw r7,r25,r7
	ctx.r7.s64 = int64_t(r25.s32) * int64_t(ctx.r7.s32);
	// mullw r9,r9,r30
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(r30.s32);
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// srawi r9,r7,7
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7F) != 0);
	ctx.r9.s64 = ctx.r7.s32 >> 7;
	// clrlwi r7,r9,24
	ctx.r7.u64 = ctx.r9.u32 & 0xFF;
	// stbx r7,r10,r31
	REX_STORE_U8(ctx.r10.u32 + r31.u32, ctx.r7.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x823b1c7c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B1C7C;
loc_823B1CB8:
	// cmpw cr6,r10,r21
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r21.s32, ctx.xer);
	// bge cr6,0x823b1d24
	if (!ctx.cr6.lt) goto loc_823B1D24;
	// subf r9,r10,r21
	ctx.r9.u64 = r21.u64 - ctx.r10.u64;
	// addi r30,r22,-1
	r30.s64 = r22.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823B1CCC:
	// srawi r9,r11,7
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7F) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 7;
	// clrlwi r6,r11,25
	ctx.r6.u64 = ctx.r11.u32 & 0x7F;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r7,r30
	ctx.cr6.compare<int32_t>(ctx.r7.s32, r30.s32, ctx.xer);
	// ble cr6,0x823b1cf4
	if (!ctx.cr6.gt) goto loc_823B1CF4;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// cmpw cr6,r9,r30
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r30.s32, ctx.xer);
	// ble cr6,0x823b1cf4
	if (!ctx.cr6.gt) goto loc_823B1CF4;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
loc_823B1CF4:
	// lbzx r9,r9,r8
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// subfic r25,r6,128
	ctx.xer.ca = ctx.r6.u32 <= 128;
	r25.u64 = static_cast<uint64_t>(128) - ctx.r6.u64;
	// lbzx r7,r7,r8
	ctx.r7.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r8.u32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// mullw r9,r9,r25
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(r25.s32);
	// mullw r7,r7,r6
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r6.s32);
	// add r6,r9,r7
	ctx.r6.u64 = ctx.r9.u64 + ctx.r7.u64;
	// srawi r9,r6,7
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7F) != 0);
	ctx.r9.s64 = ctx.r6.s32 >> 7;
	// clrlwi r7,r9,24
	ctx.r7.u64 = ctx.r9.u32 & 0xFF;
	// stbx r7,r10,r31
	REX_STORE_U8(ctx.r10.u32 + r31.u32, ctx.r7.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x823b1ccc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B1CCC;
loc_823B1D24:
	// lwz r7,44(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// add r31,r27,r31
	r31.u64 = r27.u64 + r31.u64;
	// mullw r11,r7,r5
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r5.s32);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// add r8,r8,r22
	ctx.r8.u64 = ctx.r8.u64 + r22.u64;
	// addze r30,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	r30.s64 = temp.s64;
	// cmpw cr6,r28,r30
	ctx.cr6.compare<int32_t>(r28.s32, r30.s32, ctx.xer);
	// blt cr6,0x823b1c64
	if (ctx.cr6.lt) goto loc_823B1C64;
loc_823B1D48:
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r10,52(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// mullw r9,r11,r4
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// lwz r8,72(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 72);
	// srawi r6,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 1;
	// mullw r9,r11,r23
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(r23.s32);
	// addze r11,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r11.s64 = temp.s64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mullw r11,r11,r22
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r22.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r6,r11,r26
	ctx.r6.u64 = ctx.r11.u64 + r26.u64;
	// beq cr6,0x823b1da0
	if (ctx.cr6.eq) goto loc_823B1DA0;
	// lwz r11,76(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823b1da0
	if (!ctx.cr6.eq) goto loc_823B1DA0;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823b1da0
	if (!ctx.cr6.eq) goto loc_823B1DA0;
	// lwz r31,88(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// lwz r27,100(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 100);
	// b 0x823b1dd4
	goto loc_823B1DD4;
loc_823B1DA0:
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// mr r27,r21
	r27.u64 = r21.u64;
	// lwz r9,32(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mullw r8,r11,r4
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// lwz r10,64(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// srawi r31,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	r31.s64 = ctx.r8.s32 >> 1;
	// mullw r8,r11,r23
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(r23.s32);
	// addze r11,r31
	temp.s64 = r31.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < r31.u32;
	ctx.r11.s64 = temp.s64;
	// mullw r9,r9,r24
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(r24.s32);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// mullw r11,r11,r21
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r21.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r31,r11,r10
	r31.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_823B1DD4:
	// mullw r11,r7,r4
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r4.s32);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r28,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	r28.s64 = temp.s64;
	// cmpw cr6,r28,r30
	ctx.cr6.compare<int32_t>(r28.s32, r30.s32, ctx.xer);
	// bge cr6,0x823b1ec4
	if (!ctx.cr6.lt) goto loc_823B1EC4;
loc_823B1DE8:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// ble cr6,0x823b1e38
	if (!ctx.cr6.gt) goto loc_823B1E38;
	// addi r7,r6,1
	ctx.r7.s64 = ctx.r6.s64 + 1;
	// mtctr r20
	ctx.ctr.u64 = r20.u64;
loc_823B1E00:
	// srawi r9,r11,7
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7F) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 7;
	// clrlwi r8,r11,25
	ctx.r8.u64 = ctx.r11.u32 & 0x7F;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// subfic r4,r8,128
	ctx.xer.ca = ctx.r8.u32 <= 128;
	ctx.r4.u64 = static_cast<uint64_t>(128) - ctx.r8.u64;
	// lbzx r30,r7,r9
	r30.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r9.u32);
	// lbzx r9,r9,r6
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r6.u32);
	// mullw r8,r30,r8
	ctx.r8.s64 = int64_t(r30.s32) * int64_t(ctx.r8.s32);
	// mullw r9,r9,r4
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r4.s32);
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// srawi r4,r8,7
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7F) != 0);
	ctx.r4.s64 = ctx.r8.s32 >> 7;
	// clrlwi r9,r4,24
	ctx.r9.u64 = ctx.r4.u32 & 0xFF;
	// stbx r9,r10,r31
	REX_STORE_U8(ctx.r10.u32 + r31.u32, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x823b1e00
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B1E00;
loc_823B1E38:
	// cmpw cr6,r10,r21
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r21.s32, ctx.xer);
	// bge cr6,0x823b1ea0
	if (!ctx.cr6.lt) goto loc_823B1EA0;
	// subf r9,r10,r21
	ctx.r9.u64 = r21.u64 - ctx.r10.u64;
	// addi r4,r22,-1
	ctx.r4.s64 = r22.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823B1E4C:
	// srawi r9,r11,7
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7F) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 7;
	// clrlwi r7,r11,25
	ctx.r7.u64 = ctx.r11.u32 & 0x7F;
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r8,r4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r4.s32, ctx.xer);
	// ble cr6,0x823b1e70
	if (!ctx.cr6.gt) goto loc_823B1E70;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// cmpw cr6,r9,r4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, ctx.xer);
	// ble cr6,0x823b1e70
	if (!ctx.cr6.gt) goto loc_823B1E70;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
loc_823B1E70:
	// lbzx r9,r9,r6
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r6.u32);
	// subfic r30,r7,128
	ctx.xer.ca = ctx.r7.u32 <= 128;
	r30.u64 = static_cast<uint64_t>(128) - ctx.r7.u64;
	// lbzx r8,r8,r6
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r6.u32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// mullw r9,r9,r30
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(r30.s32);
	// mullw r8,r8,r7
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// add r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 + ctx.r8.u64;
	// srawi r9,r7,7
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7F) != 0);
	ctx.r9.s64 = ctx.r7.s32 >> 7;
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// stbx r8,r10,r31
	REX_STORE_U8(ctx.r10.u32 + r31.u32, ctx.r8.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x823b1e4c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B1E4C;
loc_823B1EA0:
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// add r31,r27,r31
	r31.u64 = r27.u64 + r31.u64;
	// mullw r10,r11,r5
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// add r6,r6,r22
	ctx.r6.u64 = ctx.r6.u64 + r22.u64;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// cmpw cr6,r28,r8
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x823b1de8
	if (ctx.cr6.lt) goto loc_823B1DE8;
loc_823B1EC4:
	// b 0x822d4eb4
	return;
}

DEFINE_REX_FUNC(sub_823C5FA0) {
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
	// bl 0x822d4e54
	ctx.lr = 0x823C5FA8;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,340(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// rlwinm r18,r6,0,0,26
	r18.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFE0;
	// mr r16,r6
	r16.u64 = ctx.r6.u64;
	// stw r9,308(r1)
	REX_STORE_U32(ctx.r1.u32 + 308, ctx.r9.u32);
	// srawi r7,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 8;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// li r30,16
	r30.s64 = 16;
	// vspltish v13,1
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x1)));
	// mullw r11,r7,r9
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// rlwinm r15,r8,1,0,30
	r15.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// add r31,r4,r8
	r31.u64 = ctx.r4.u64 + ctx.r8.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r26,1
	r26.s64 = 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(r18.s32, 0, ctx.xer);
	// ble cr6,0x823c6084
	if (!ctx.cr6.gt) goto loc_823C6084;
	// addi r11,r18,-1
	ctx.r11.s64 = r18.s64 + -1;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// rlwinm r11,r11,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// addi r7,r3,1
	ctx.r7.s64 = ctx.r3.s64 + 1;
	// addi r29,r11,1
	r29.s64 = ctx.r11.s64 + 1;
	// mr r27,r30
	r27.u64 = r30.u64;
	// rlwinm r5,r29,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r11,r29,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r26,r5,1
	r26.s64 = ctx.r5.s64 + 1;
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
loc_823C601C:
	// addi r29,r7,-1
	r29.s64 = ctx.r7.s64 + -1;
	// lvrx128 v63,r27,r7
	temp.u32 = r27.u32 + ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v62,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r28,r6,16
	r28.s64 = ctx.r6.s64 + 16;
	// vor128 v11,v62,v63
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
	// lvrx128 v61,r30,r29
	temp.u32 = r30.u32 + r29.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v60,r0,r29
	temp.u32 = r29.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrglb v10,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v12,v60,v61
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// vmrghb v9,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v8,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v7,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddshs v6,v8,v10
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v5,v7,v9
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vsrah v4,v6,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v3,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus v11,v3,v4
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vmrghb v2,v12,v11
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// vmrglb v1,v12,v11
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// stvlx v2,0,r6
	ea = ctx.r6.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v2.u8[15 - i]);
	// stvrx v2,r6,r30
	ea = ctx.r6.u32 + r30.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v2.u8[i]);
	// addi r6,r6,32
	ctx.r6.s64 = ctx.r6.s64 + 32;
	// stvlx v1,0,r28
	ea = r28.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v1.u8[15 - i]);
	// stvrx v1,r28,r30
	ea = r28.u32 + r30.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v1.u8[i]);
	// bdnz 0x823c601c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C601C;
loc_823C6084:
	// cmpw cr6,r11,r16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r16.s32, ctx.xer);
	// bge cr6,0x823c60d4
	if (!ctx.cr6.lt) goto loc_823C60D4;
	// subf r6,r11,r16
	ctx.r6.u64 = r16.u64 - ctx.r11.u64;
	// add r7,r26,r3
	ctx.r7.u64 = r26.u64 + ctx.r3.u64;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// addi r28,r4,1
	r28.s64 = ctx.r4.s64 + 1;
	// rlwinm r6,r6,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_823C60AC:
	// lbzx r27,r5,r3
	r27.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r3.u32);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// lbzu r6,1(r7)
	ea = 1 + ctx.r7.u32;
	ctx.r6.u64 = REX_LOAD_U8(ea);
	ctx.r7.u32 = ea;
	// mr r29,r27
	r29.u64 = r27.u64;
	// add r6,r6,r27
	ctx.r6.u64 = ctx.r6.u64 + r27.u64;
	// rlwinm r6,r6,31,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 31) & 0xFF;
	// stbx r27,r11,r4
	REX_STORE_U8(ctx.r11.u32 + ctx.r4.u32, r27.u8);
	// stbx r6,r28,r11
	REX_STORE_U8(r28.u32 + ctx.r11.u32, ctx.r6.u8);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x823c60ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C60AC;
loc_823C60D4:
	// lbzx r5,r5,r3
	ctx.r5.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r3.u32);
	// add r6,r11,r4
	ctx.r6.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lwz r7,324(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// add r29,r3,r9
	r29.u64 = ctx.r3.u64 + ctx.r9.u64;
	// cmpw cr6,r7,r10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, ctx.xer);
	// stbx r5,r11,r4
	REX_STORE_U8(ctx.r11.u32 + ctx.r4.u32, ctx.r5.u8);
	// stb r5,1(r6)
	REX_STORE_U8(ctx.r6.u32 + 1, ctx.r5.u8);
	// bge cr6,0x823c6310
	if (!ctx.cr6.lt) goto loc_823C6310;
	// subf r11,r7,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r7.u64;
	// add r6,r31,r8
	ctx.r6.u64 = r31.u64 + ctx.r8.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r17,r8,-15
	r17.s64 = ctx.r8.s64 + -15;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// subfic r20,r8,16
	ctx.xer.ca = ctx.r8.u32 <= 16;
	r20.u64 = static_cast<uint64_t>(16) - ctx.r8.u64;
	// addi r19,r11,1
	r19.s64 = ctx.r11.s64 + 1;
loc_823C6110:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r21,1
	r21.s64 = 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(r18.s32, 0, ctx.xer);
	// ble cr6,0x823c6248
	if (!ctx.cr6.gt) goto loc_823C6248;
	// addi r11,r18,-1
	ctx.r11.s64 = r18.s64 + -1;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// rlwinm r11,r11,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// addi r7,r29,1
	ctx.r7.s64 = r29.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r20,r6
	ctx.r10.u64 = r20.u64 + ctx.r6.u64;
	// rlwinm r5,r11,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r28,r31,r22
	r28.u64 = r22.u64 - r31.u64;
	// subf r27,r31,r6
	r27.u64 = ctx.r6.u64 - r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// subf r26,r6,r22
	r26.u64 = r22.u64 - ctx.r6.u64;
	// addi r21,r5,1
	r21.s64 = ctx.r5.s64 + 1;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r23,r30
	r23.u64 = r30.u64;
loc_823C615C:
	// addi r4,r7,-1
	ctx.r4.s64 = ctx.r7.s64 + -1;
	// lvlx128 v59,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v58,r30,r7
	temp.u32 = r30.u32 + ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r25,r8,r26
	r25.u64 = ctx.r8.u64 + r26.u64;
	// vor128 v11,v59,v58
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8)));
	// lvlx128 v57,r8,r26
	temp.u32 = ctx.r8.u32 + r26.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r24,r28,r10
	r24.u64 = r28.u64 + ctx.r10.u64;
	// lvlx128 v56,r28,r10
	temp.u32 = r28.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r3,r10,-16
	ctx.r3.s64 = ctx.r10.s64 + -16;
	// lvlx128 v55,r0,r4
	temp.u32 = ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
	// lvrx128 v54,r30,r4
	temp.u32 = r30.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrglb v8,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v12,v55,v54
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8)));
	// vmrghb v7,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvrx128 v53,r30,r25
	temp.u32 = r30.u32 + r25.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r4,r10,r27
	ctx.r4.u64 = ctx.r10.u64 + r27.u64;
	// vor128 v10,v57,v53
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8)));
	// lvrx128 v52,r23,r24
	temp.u32 = r23.u32 + r24.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v9,v56,v52
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8)));
	// vmrglb v6,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v5,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v4,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v3,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddshs v2,v6,v8
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vmrglb v1,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddshs v31,v5,v7
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vmrghb v30,v0,v9
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsrah v29,v2,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v28,v31,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus v10,v28,v29
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// vmrghb v11,v12,v10
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// vmrglb v12,v12,v10
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// vmrglb v27,v0,v11
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v26,v0,v11
	simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v25,v0,v12
	simde_mm_store_si128((simde__m128i*)v25.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v24,v0,v12
	simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddshs v23,v4,v27
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)v27.s16)));
	// vaddshs v22,v3,v26
	simde_mm_store_si128((simde__m128i*)v22.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)v26.s16)));
	// vaddshs v21,v1,v25
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)v25.s16)));
	// vaddshs v20,v30,v24
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v30.s16), simde_mm_load_si128((simde__m128i*)v24.s16)));
	// vsrah v19,v23,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
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
	// vpkshus128 v51,v18,v19
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v19.s16), simde_mm_load_si128((simde__m128i*)v18.s16)));
	// vpkshus128 v50,v16,v17
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v17.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// stvlx128 v51,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v51.u8[15 - i]);
	// stvrx128 v51,r3,r30
	ea = ctx.r3.u32 + r30.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v51.u8[i]);
	// stvlx128 v50,r0,r10
	ea = ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v50.u8[15 - i]);
	// stvrx128 v50,r10,r30
	ea = ctx.r10.u32 + r30.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v50.u8[i]);
	// stvlx v11,0,r8
	ea = ctx.r8.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v11.u8[15 - i]);
	// stvrx v11,r8,r30
	ea = ctx.r8.u32 + r30.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v11.u8[i]);
	// addi r8,r8,32
	ctx.r8.s64 = ctx.r8.s64 + 32;
	// stvlx v12,r10,r27
	ea = ctx.r10.u32 + r27.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v12.u8[15 - i]);
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// stvrx v12,r4,r30
	ea = ctx.r4.u32 + r30.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v12.u8[i]);
	// bdnz 0x823c615c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C615C;
	// lwz r9,308(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
loc_823C6248:
	// cmpw cr6,r11,r16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r16.s32, ctx.xer);
	// bge cr6,0x823c62d0
	if (!ctx.cr6.lt) goto loc_823C62D0;
	// subf r8,r11,r16
	ctx.r8.u64 = r16.u64 - ctx.r11.u64;
	// add r10,r20,r6
	ctx.r10.u64 = r20.u64 + ctx.r6.u64;
	// addi r7,r8,-1
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// add r8,r21,r29
	ctx.r8.u64 = r21.u64 + r29.u64;
	// rlwinm r7,r7,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r27,r22,1
	r27.s64 = r22.s64 + 1;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r26,r10,-15
	r26.s64 = ctx.r10.s64 + -15;
	// add r25,r10,r17
	r25.u64 = ctx.r10.u64 + r17.u64;
	// addi r4,r8,-1
	ctx.r4.s64 = ctx.r8.s64 + -1;
	// subf r24,r31,r22
	r24.u64 = r22.u64 - r31.u64;
	// subf r23,r31,r6
	r23.u64 = ctx.r6.u64 - r31.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_823C6284:
	// lbzx r21,r5,r29
	r21.u64 = REX_LOAD_U8(ctx.r5.u32 + r29.u32);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + r31.u64;
	// lbzu r7,1(r4)
	ea = 1 + ctx.r4.u32;
	ctx.r7.u64 = REX_LOAD_U8(ea);
	ctx.r4.u32 = ea;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// lbzx r28,r27,r11
	r28.u64 = REX_LOAD_U8(r27.u32 + ctx.r11.u32);
	// mr r8,r21
	ctx.r8.u64 = r21.u64;
	// add r7,r7,r21
	ctx.r7.u64 = ctx.r7.u64 + r21.u64;
	// lbzx r3,r24,r10
	ctx.r3.u64 = REX_LOAD_U8(r24.u32 + ctx.r10.u32);
	// rlwinm r7,r7,31,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0xFF;
	// add r3,r3,r21
	ctx.r3.u64 = ctx.r3.u64 + r21.u64;
	// add r8,r28,r7
	ctx.r8.u64 = r28.u64 + ctx.r7.u64;
	// rlwinm r3,r3,31,24,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 31) & 0xFF;
	// rlwinm r8,r8,31,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0xFF;
	// stbx r3,r11,r31
	REX_STORE_U8(ctx.r11.u32 + r31.u32, ctx.r3.u8);
	// stbx r8,r26,r11
	REX_STORE_U8(r26.u32 + ctx.r11.u32, ctx.r8.u8);
	// stbx r7,r25,r11
	REX_STORE_U8(r25.u32 + ctx.r11.u32, ctx.r7.u8);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stbx r21,r10,r23
	REX_STORE_U8(ctx.r10.u32 + r23.u32, r21.u8);
	// bdnz 0x823c6284
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C6284;
loc_823C62D0:
	// lbzx r4,r5,r29
	ctx.r4.u64 = REX_LOAD_U8(ctx.r5.u32 + r29.u32);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + r31.u64;
	// lbzx r5,r11,r22
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + r22.u32);
	// add r8,r6,r11
	ctx.r8.u64 = ctx.r6.u64 + ctx.r11.u64;
	// addic. r19,r19,-1
	ctx.xer.ca = r19.u32 > 0;
	r19.s64 = r19.s64 + -1;
	ctx.cr0.compare<int32_t>(r19.s32, 0, ctx.xer);
	// add r3,r5,r4
	ctx.r3.u64 = ctx.r5.u64 + ctx.r4.u64;
	// add r22,r22,r15
	r22.u64 = r22.u64 + r15.u64;
	// rlwinm r7,r3,31,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 31) & 0xFF;
	// add r31,r31,r15
	r31.u64 = r31.u64 + r15.u64;
	// stb r7,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r7.u8);
	// add r29,r29,r9
	r29.u64 = r29.u64 + ctx.r9.u64;
	// stb r7,1(r10)
	REX_STORE_U8(ctx.r10.u32 + 1, ctx.r7.u8);
	// stbx r4,r6,r11
	REX_STORE_U8(ctx.r6.u32 + ctx.r11.u32, ctx.r4.u8);
	// add r6,r6,r15
	ctx.r6.u64 = ctx.r6.u64 + r15.u64;
	// stb r4,1(r8)
	REX_STORE_U8(ctx.r8.u32 + 1, ctx.r4.u8);
	// bne 0x823c6110
	if (!ctx.cr0.eq) goto loc_823C6110;
loc_823C6310:
	// mr r5,r16
	ctx.r5.u64 = r16.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x823C6320;
	sub_822D4FA0(ctx, base);
	// lbzx r10,r22,r16
	ctx.r10.u64 = REX_LOAD_U8(r22.u32 + r16.u32);
	// add r11,r31,r16
	ctx.r11.u64 = r31.u64 + r16.u64;
	// stbx r10,r31,r16
	REX_STORE_U8(r31.u32 + r16.u32, ctx.r10.u8);
	// stb r10,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r10.u8);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822d4ea4
	return;
}

DEFINE_REX_FUNC(sub_823DBAC8) {
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
	ctx.lr = 0x823DBAD0;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r11,r11,-7240
	ctx.r11.s64 = ctx.r11.s64 + -7240;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r28,r3,60
	r28.s64 = ctx.r3.s64 + 60;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r4,r4,40
	ctx.r4.s64 = ctx.r4.s64 + 40;
	// stw r11,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// li r5,24
	ctx.r5.s64 = 24;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// rlwinm r11,r11,0,24,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// stw r11,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r11.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// stw r11,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r11.u32);
	// bl 0x822d4fa0
	ctx.lr = 0x823DBB28;
	sub_822D4FA0(ctx, base);
	// lwz r11,64(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// beq cr6,0x823dbb44
	if (ctx.cr6.eq) goto loc_823DBB44;
	// addi r11,r11,11336
	ctx.r11.s64 = ctx.r11.s64 + 11336;
	// addi r10,r11,128
	ctx.r10.s64 = ctx.r11.s64 + 128;
	// b 0x823dbb48
	goto loc_823DBB48;
loc_823DBB44:
	// addi r10,r11,11336
	ctx.r10.s64 = ctx.r11.s64 + 11336;
loc_823DBB48:
	// stw r10,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r10.u32);
	// rlwinm r10,r29,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 29) & 0x1FFFFFFF;
	// addic r9,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	ctx.r9.s64 = r29.s64 + -1;
	// stw r27,8(r31)
	REX_STORE_U32(r31.u32 + 8, r27.u32);
	// stw r10,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// subfe r10,r9,r29
	temp.u8 = (~ctx.r9.u32 + r29.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + r29.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + r29.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r11,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r11.u32);
	// stw r10,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// stw r11,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r11.u32);
	// lwz r10,76(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 76);
	// stw r10,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r11,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
	// lwz r10,72(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 72);
	// stw r10,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// beq cr6,0x823dbc1c
	if (ctx.cr6.eq) goto loc_823DBC1C;
	// lwz r10,76(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 76);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// rlwinm r8,r10,24,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// clrlwi r7,r10,24
	ctx.r7.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm r6,r10,8,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// std r8,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// rlwinm r10,r10,16,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFF;
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r7,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// lfd f11,88(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r6,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r6.u64);
	// lfd f10,96(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfs f0,-13044(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -13044);
	ctx.f0.f64 = double(temp.f32);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,40(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 40, temp.u32);
	// fmuls f13,f11,f0
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f13,44(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 44, temp.u32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,36(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 36, temp.u32);
	// fmuls f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 48, temp.u32);
loc_823DBC1C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x823dbc44
	if (!ctx.cr6.eq) goto loc_823DBC44;
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lis r8,10784
	ctx.r8.s64 = 706740224;
	// ori r8,r8,2565
	ctx.r8.u64 = ctx.r8.u64 | 2565;
	// rlwinm r9,r9,0,26,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x823dbc44
	if (ctx.cr6.eq) goto loc_823DBC44;
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
loc_823DBC44:
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x823dbc50
	if (!ctx.cr6.eq) goto loc_823DBC50;
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
loc_823DBC50:
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r8,68(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 68);
	// lwz r9,120(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 120);
	// subf r8,r10,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r10.u64;
	// lwz r7,72(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 72);
	// lwz r6,64(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 64);
	// lwz r4,80(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 80);
	// mullw r3,r9,r8
	ctx.r3.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// lwz r5,76(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 76);
	// stw r8,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r8.u32);
	// lwz r29,12(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 12);
	// stw r3,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r3.u32);
	// subf r8,r6,r7
	ctx.r8.u64 = ctx.r7.u64 - ctx.r6.u64;
	// subf r7,r5,r4
	ctx.r7.u64 = ctx.r4.u64 - ctx.r5.u64;
	// stw r8,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r8.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// stw r7,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r7.u32);
	// beq cr6,0x823dbce4
	if (ctx.cr6.eq) goto loc_823DBCE4;
	// mullw r8,r9,r10
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// lwz r9,104(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 104);
	// lwz r4,100(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 100);
	// lwz r10,96(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 96);
	// lwz r7,32(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r3,108(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 108);
	// stw r9,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r9.u32);
	// lwz r29,112(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 112);
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
	// stw r11,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r11.u32);
	// stw r3,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r3.u32);
	// mullw r10,r6,r10
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// stw r11,76(r31)
	REX_STORE_U32(r31.u32 + 76, ctx.r11.u32);
	// stw r29,80(r31)
	REX_STORE_U32(r31.u32 + 80, r29.u32);
	// mullw r9,r5,r4
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r4.s32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// stw r10,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r10.u32);
loc_823DBCE4:
	// lwz r10,68(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 68);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823dbd28
	if (ctx.cr6.eq) goto loc_823DBD28;
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x823cd118
	ctx.lr = 0x823DBD04;
	sub_823CD118(ctx, base);
	// stw r3,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823dbd2c
	if (ctx.cr0.eq) goto loc_823DBD2C;
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r5,r11,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x822d5870
	ctx.lr = 0x823DBD24;
	sub_822D5870(ctx, base);
	// b 0x823dbd2c
	goto loc_823DBD2C;
loc_823DBD28:
	// stw r11,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r11.u32);
loc_823DBD2C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_823E2398) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x823E23A0;
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
	// beq cr6,0x823e23c8
	if (ctx.cr6.eq) goto loc_823E23C8;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x823dc0b0
	ctx.lr = 0x823E23C4;
	sub_823DC0B0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
loc_823E23C8:
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
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ble cr6,0x823e2414
	if (!ctx.cr6.gt) goto loc_823E2414;
	// addi r10,r6,-16
	ctx.r10.s64 = ctx.r6.s64 + -16;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_823E23FC:
	// lfsu f0,16(r10)
	ctx.fpscr.disableFlushMode();
	ea = 16 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stfsu f0,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// lwz r9,104(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 104);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x823e23fc
	if (ctx.cr6.lt) goto loc_823E23FC;
loc_823E2414:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_823E30A0) {
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
	// bge cr6,0x823e3180
	if (!ctx.cr6.lt) goto loc_823E3180;
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
	// lfs f0,9952(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 9952);
	ctx.f0.f64 = double(temp.f32);
loc_823E30FC:
	// lhz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// rlwinm r10,r10,22,27,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0x1F;
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
	// rlwinm r10,r10,27,27,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1F;
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
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
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
	// rlwinm r10,r10,17,15,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0x1FFFF;
	// std r10,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// lfd f13,104(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// stfs f13,12(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// bdnz 0x823e30fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823E30FC;
loc_823E3180:
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823e319c
	if (ctx.cr6.eq) goto loc_823E319C;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x82413d40
	ctx.lr = 0x823E319C;
	sub_82413D40(ctx, base);
loc_823E319C:
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823e31b8
	if (ctx.cr6.eq) goto loc_823E31B8;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x823dc3f0
	ctx.lr = 0x823E31B8;
	sub_823DC3F0(ctx, base);
loc_823E31B8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823E3F70) {
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
	// bge cr6,0x823e4088
	if (!ctx.cr6.lt) goto loc_823E4088;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
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
	// lfs f13,1992(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-30112(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -30112);
	ctx.f0.f64 = double(temp.f32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lfs f12,-7220(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -7220);
	ctx.f12.f64 = double(temp.f32);
loc_823E3FDC:
	// lhz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// stfs f13,8(r6)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// rlwinm r10,r10,30,2,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFF8;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// extsb r8,r10
	ctx.r8.s64 = ctx.r10.s8;
	// extsb r10,r9
	ctx.r10.s64 = ctx.r9.s8;
	// srawi r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// srawi r9,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 3;
	// extsb r7,r10
	ctx.r7.s64 = ctx.r10.s8;
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// cntlzw r7,r7
	ctx.r7.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r7,r7,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
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
	// stfs f11,0(r6)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// fmuls f11,f10,f0
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f11,4(r6)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// lhzu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// rlwinm r10,r10,22,10,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0x3FFFFF;
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
	// bdnz 0x823e3fdc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823E3FDC;
loc_823E4088:
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823e40a4
	if (ctx.cr6.eq) goto loc_823E40A4;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x82413d40
	ctx.lr = 0x823E40A4;
	sub_82413D40(ctx, base);
loc_823E40A4:
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823e40c0
	if (ctx.cr6.eq) goto loc_823E40C0;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x823dc3f0
	ctx.lr = 0x823E40C0;
	sub_823DC3F0(ctx, base);
loc_823E40C0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823E7EC0) {
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
	// bl 0x82226590
	ctx.lr = 0x823E7ED4;
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

DEFINE_REX_FUNC(sub_823E8158) {
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
	// beq 0x823e8198
	if (ctx.cr0.eq) goto loc_823E8198;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// subf r11,r6,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r6.u64;
loc_823E8178:
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
	// bdnz 0x823e8178
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823E8178;
loc_823E8198:
	// add r11,r4,r7
	ctx.r11.u64 = ctx.r4.u64 + ctx.r7.u64;
	// rlwinm r10,r4,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// rldicr r9,r9,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// srad r11,r9,r11
	temp.u64 = ctx.r11.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	ctx.xer.ca = (ctx.r9.s64 < 0) & (((ctx.r9.s64 >> temp.u64) << temp.u64) != ctx.r9.s64);
	ctx.r11.s64 = ctx.r9.s64 >> temp.u64;
	// srd r7,r11,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r10.u8 & 0x7F));
	// bl 0x82226458
	ctx.lr = 0x823E81C8;
	sub_82226458(ctx, base);
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

DEFINE_REX_FUNC(sub_823EC5B8) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823f46a8
	ctx.lr = 0x823EC5DC;
	sub_823F46A8(ctx, base);
	// stw r3,1536(r31)
	REX_STORE_U32(r31.u32 + 1536, ctx.r3.u32);
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

DEFINE_REX_FUNC(sub_823EE4A8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x823EE4B0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r5,12
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 12, ctx.xer);
	// blt cr6,0x823ee580
	if (ctx.cr6.lt) goto loc_823EE580;
	// lbz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r10,65
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65, ctx.xer);
	// bne cr6,0x823ee580
	if (!ctx.cr6.eq) goto loc_823EE580;
	// lbz r10,1(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 1);
	// cmplwi cr6,r10,100
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 100, ctx.xer);
	// bne cr6,0x823ee580
	if (!ctx.cr6.eq) goto loc_823EE580;
	// lbz r10,2(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 2);
	// cmplwi cr6,r10,111
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 111, ctx.xer);
	// bne cr6,0x823ee580
	if (!ctx.cr6.eq) goto loc_823EE580;
	// lbz r10,3(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 3);
	// cmplwi cr6,r10,98
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 98, ctx.xer);
	// bne cr6,0x823ee580
	if (!ctx.cr6.eq) goto loc_823EE580;
	// lbz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 4);
	// cmplwi cr6,r10,101
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 101, ctx.xer);
	// bne cr6,0x823ee580
	if (!ctx.cr6.eq) goto loc_823EE580;
	// lbz r8,9(r4)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r4.u32 + 9);
	// li r30,76
	r30.s64 = 76;
	// lbz r10,7(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 7);
	// li r4,1
	ctx.r4.s64 = 1;
	// lbz r5,5(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rotlwi r6,r8,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// rotlwi r9,r10,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r3,8(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// rotlwi r8,r5,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r5.u32, 8);
	// lbz r7,6(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r5,10(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 10);
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// lbz r29,11(r11)
	r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 11);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// add r11,r6,r5
	ctx.r11.u64 = ctx.r6.u64 + ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r9,28(r10)
	REX_STORE_U32(ctx.r10.u32 + 28, ctx.r9.u32);
	// stw r8,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, ctx.r8.u32);
	// stw r11,32(r10)
	REX_STORE_U32(ctx.r10.u32 + 32, ctx.r11.u32);
	// stw r29,36(r10)
	REX_STORE_U32(ctx.r10.u32 + 36, r29.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r30,20(r7)
	REX_STORE_U32(ctx.r7.u32 + 20, r30.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r5,4(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x823EE56C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stb r29,300(r31)
	REX_STORE_U8(r31.u32 + 300, r29.u8);
	// stw r4,296(r31)
	REX_STORE_U32(r31.u32 + 296, ctx.r4.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
loc_823EE580:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r10,78
	ctx.r10.s64 = 78;
	// add r9,r5,r6
	ctx.r9.u64 = ctx.r5.u64 + ctx.r6.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r9,24(r8)
	REX_STORE_U32(ctx.r8.u32 + 24, ctx.r9.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r6,4(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x823EE5B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_823F03B8) {
	REX_FUNC_PROLOGUE();
	// lbz r11,1559(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 1559);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,1376(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1376);
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// stw r11,1376(r3)
	REX_STORE_U32(ctx.r3.u32 + 1376, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823F07B8) {
	REX_FUNC_PROLOGUE();
	// lbz r10,9(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 9);
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x823f08a8
	if (ctx.cr6.eq) goto loc_823F08A8;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// beq cr6,0x823f0844
	if (ctx.cr6.eq) goto loc_823F0844;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bne cr6,0x823f0904
	if (!ctx.cr6.eq) goto loc_823F0904;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// add r9,r11,r4
	ctx.r9.u64 = ctx.r11.u64 + ctx.r4.u64;
	// clrlwi r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// subfic r7,r8,1
	ctx.xer.ca = ctx.r8.u32 <= 1;
	ctx.r7.u64 = static_cast<uint64_t>(1) - ctx.r8.u64;
	// add r8,r10,r4
	ctx.r8.u64 = ctx.r10.u64 + ctx.r4.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823f0904
	if (ctx.cr6.eq) goto loc_823F0904;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823F080C:
	// lbz r7,0(r8)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// clrlwi r6,r10,24
	ctx.r6.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// srw r10,r7,r6
	ctx.r10.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r6.u8 & 0x3F));
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// stb r10,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
	// bne cr6,0x823f0834
	if (!ctx.cr6.eq) goto loc_823F0834;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// b 0x823f0838
	goto loc_823F0838;
loc_823F0834:
	// li r10,4
	ctx.r10.s64 = 4;
loc_823F0838:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// bdnz 0x823f080c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823F080C;
	// b 0x823f0904
	goto loc_823F0904;
loc_823F0844:
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// add r9,r11,r4
	ctx.r9.u64 = ctx.r11.u64 + ctx.r4.u64;
	// clrlwi r8,r10,30
	ctx.r8.u64 = ctx.r10.u32 & 0x3;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// subfic r7,r8,3
	ctx.xer.ca = ctx.r8.u32 <= 3;
	ctx.r7.u64 = static_cast<uint64_t>(3) - ctx.r8.u64;
	// add r8,r10,r4
	ctx.r8.u64 = ctx.r10.u64 + ctx.r4.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823f0904
	if (ctx.cr6.eq) goto loc_823F0904;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823F0870:
	// lbz r7,0(r8)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// clrlwi r6,r10,24
	ctx.r6.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 6, ctx.xer);
	// srw r7,r7,r6
	ctx.r7.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r6.u8 & 0x3F));
	// clrlwi r7,r7,30
	ctx.r7.u64 = ctx.r7.u32 & 0x3;
	// stb r7,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r7.u8);
	// bne cr6,0x823f0898
	if (!ctx.cr6.eq) goto loc_823F0898;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// b 0x823f089c
	goto loc_823F089C;
loc_823F0898:
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
loc_823F089C:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// bdnz 0x823f0870
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823F0870;
	// b 0x823f0904
	goto loc_823F0904;
loc_823F08A8:
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// add r9,r11,r4
	ctx.r9.u64 = ctx.r11.u64 + ctx.r4.u64;
	// rlwinm r8,r10,29,3,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// subfic r10,r10,7
	ctx.xer.ca = ctx.r10.u32 <= 7;
	ctx.r10.u64 = static_cast<uint64_t>(7) - ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823f0904
	if (ctx.cr6.eq) goto loc_823F0904;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823F08D0:
	// lbz r7,0(r8)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// clrlwi r6,r10,24
	ctx.r6.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 7, ctx.xer);
	// srw r7,r7,r6
	ctx.r7.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r6.u8 & 0x3F));
	// clrlwi r7,r7,31
	ctx.r7.u64 = ctx.r7.u32 & 0x1;
	// stb r7,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r7.u8);
	// bne cr6,0x823f08f8
	if (!ctx.cr6.eq) goto loc_823F08F8;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// b 0x823f08fc
	goto loc_823F08FC;
loc_823F08F8:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_823F08FC:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// bdnz 0x823f08d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823F08D0;
loc_823F0904:
	// lbz r10,10(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 10);
	// li r9,8
	ctx.r9.s64 = 8;
	// rlwinm r8,r10,3,24,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xF8;
	// stb r9,9(r3)
	REX_STORE_U8(ctx.r3.u32 + 9, ctx.r9.u8);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// stb r8,11(r3)
	REX_STORE_U8(ctx.r3.u32 + 11, ctx.r8.u8);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823F5BC0) {
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
	ctx.lr = 0x823F5BC8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// add r30,r5,r6
	r30.u64 = ctx.r5.u64 + ctx.r6.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// li r28,22
	r28.s64 = 22;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823f5c08
	if (ctx.cr6.gt) goto loc_823F5C08;
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823f5c08
	if (ctx.cr6.gt) goto loc_823F5C08;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823f5c24
	if (!ctx.cr6.eq) goto loc_823F5C24;
loc_823F5C08:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r28,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, r28.u32);
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823F5C24;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823F5C24:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823f5c40
	if (ctx.cr6.lt) goto loc_823F5C40;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x823f5ccc
	if (!ctx.cr6.gt) goto loc_823F5CCC;
loc_823F5C40:
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823f5c6c
	if (!ctx.cr6.eq) goto loc_823F5C6C;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r10,69
	ctx.r10.s64 = 69;
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
	ctx.lr = 0x823F5C6C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823F5C6C:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823f5c90
	if (ctx.cr6.eq) goto loc_823F5C90;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823f58f0
	ctx.lr = 0x823F5C88;
	sub_823F58F0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
loc_823F5C90:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x823f5ca4
	if (!ctx.cr6.gt) goto loc_823F5CA4;
	// stw r27,24(r31)
	REX_STORE_U32(r31.u32 + 24, r27.u32);
	// b 0x823f5cbc
	goto loc_823F5CBC;
loc_823F5CA4:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// subf r10,r11,r30
	ctx.r10.u64 = r30.u64 - ctx.r11.u64;
	// rlwinm r11,r10,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// and r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 & ctx.r10.u64;
	// stw r8,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r8.u32);
loc_823F5CBC:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823f58f0
	ctx.lr = 0x823F5CCC;
	sub_823F58F0(ctx, base);
loc_823F5CCC:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// bge cr6,0x823f5d60
	if (!ctx.cr6.lt) goto loc_823F5D60;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r27.u32, ctx.xer);
	// bge cr6,0x823f5d08
	if (!ctx.cr6.lt) goto loc_823F5D08;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// beq cr6,0x823f5d04
	if (ctx.cr6.eq) goto loc_823F5D04;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r28,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, r28.u32);
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823F5D04;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823F5D04:
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_823F5D08:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// beq cr6,0x823f5d14
	if (ctx.cr6.eq) goto loc_823F5D14;
	// stw r30,28(r31)
	REX_STORE_U32(r31.u32 + 28, r30.u32);
loc_823F5D14:
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823f5d8c
	if (ctx.cr6.eq) goto loc_823F5D8C;
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// subf r10,r10,r30
	ctx.r10.u64 = r30.u64 - ctx.r10.u64;
	// rlwinm r28,r9,7,0,24
	r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0xFFFFFF80;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x823f5d60
	if (!ctx.cr6.lt) goto loc_823F5D60;
	// rlwinm r29,r11,2,0,29
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r30,r11,r10
	r30.u64 = ctx.r10.u64 - ctx.r11.u64;
loc_823F5D44:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwzx r3,r11,r29
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// bl 0x823f6d98
	ctx.lr = 0x823F5D54;
	sub_823F6D98(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// bne 0x823f5d44
	if (!ctx.cr0.eq) goto loc_823F5D44;
loc_823F5D60:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// beq cr6,0x823f5d70
	if (ctx.cr6.eq) goto loc_823F5D70;
loc_823F5D68:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
loc_823F5D70:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// subf r9,r11,r27
	ctx.r9.u64 = r27.u64 - ctx.r11.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
loc_823F5D8C:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// bne cr6,0x823f5d68
	if (!ctx.cr6.eq) goto loc_823F5D68;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r28,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, r28.u32);
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823F5DB0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x823f5d70
	goto loc_823F5D70;
}

DEFINE_REX_FUNC(sub_823FC890) {
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
	// li r5,232
	ctx.r5.s64 = 232;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823FC8BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r3,448(r31)
	REX_STORE_U32(r31.u32 + 448, ctx.r3.u32);
	// lis r9,-32192
	ctx.r9.s64 = -2109734912;
	// lis r8,-32192
	ctx.r8.s64 = -2109734912;
	// addi r7,r9,-14608
	ctx.r7.s64 = ctx.r9.s64 + -14608;
	// addi r6,r8,-15848
	ctx.r6.s64 = ctx.r8.s64 + -15848;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// stw r7,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r11,r3,36
	ctx.r11.s64 = ctx.r3.s64 + 36;
	// stw r6,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// li r10,0
	ctx.r10.s64 = 0;
loc_823FC8E8:
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x823fc8e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823FC8E8;
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

DEFINE_REX_FUNC(sub_823FDE48) {
	REX_FUNC_PROLOGUE();
	// lwz r11,456(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 456);
	// lwz r10,316(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 316);
	// stw r10,92(r11)
	REX_STORE_U32(ctx.r11.u32 + 92, ctx.r10.u32);
	// lwz r9,116(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 116);
	// stw r9,96(r11)
	REX_STORE_U32(ctx.r11.u32 + 96, ctx.r9.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823FE088) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r11,316(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 316);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r7,0(r6)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// subf r6,r7,r5
	ctx.r6.u64 = ctx.r5.u64 - ctx.r7.u64;
loc_823FE0A0:
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r10,112(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 112);
	// lwzx r8,r6,r7
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x823fe0d4
	if (!ctx.cr6.lt) goto loc_823FE0D4;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
loc_823FE0BC:
	// lbzu r10,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// stbu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r10.u8);
	ctx.r11.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x823fe0bc
	if (ctx.cr6.lt) goto loc_823FE0BC;
loc_823FE0D4:
	// lwz r11,316(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 316);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823fe0a0
	if (ctx.cr6.lt) goto loc_823FE0A0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823FF508) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x823FF510;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r31,456(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 456);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823FF534;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r9,4(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 4);
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823FF554;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r3.u32);
	// lwz r7,4(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r6,0(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x823FF574;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823FF594;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r6,256
	ctx.r6.s64 = 256;
	// stw r3,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r3.u32);
	// lis r8,91
	ctx.r8.s64 = 5963776;
	// lis r9,-227
	ctx.r9.s64 = -14876672;
	// lis r10,-179
	ctx.r10.s64 = -11730944;
	// lis r7,44
	ctx.r7.s64 = 2883584;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r4,r6,26345
	ctx.r4.u64 = ctx.r6.u64 | 26345;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r8,r8,26880
	ctx.r8.u64 = ctx.r8.u64 | 26880;
	// ori r9,r9,44800
	ctx.r9.u64 = ctx.r9.u64 | 44800;
	// ori r10,r10,2944
	ctx.r10.u64 = ctx.r10.u64 | 2944;
	// ori r7,r7,36096
	ctx.r7.u64 = ctx.r7.u64 | 36096;
	// ori r5,r5,50594
	ctx.r5.u64 = ctx.r5.u64 | 50594;
	// ori r6,r3,46802
	ctx.r6.u64 = ctx.r3.u64 | 46802;
loc_823FF5DC:
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// srawi r30,r10,16
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFF) != 0);
	r30.s64 = ctx.r10.s32 >> 16;
	// srawi r29,r9,16
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFF) != 0);
	r29.s64 = ctx.r9.s32 >> 16;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// stwx r30,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, r30.u32);
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// stwx r29,r3,r11
	REX_STORE_U32(ctx.r3.u32 + ctx.r11.u32, r29.u32);
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// stwx r8,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r8.u32);
	// subf r8,r6,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r6.u64;
	// lwz r3,28(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 28);
	// stwx r7,r3,r11
	REX_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r7.u32);
	// addi r7,r7,-22554
	ctx.r7.s64 = ctx.r7.s64 + -22554;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x823ff5dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823FF5DC;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82404D30) {
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
	ctx.lr = 0x82404D38;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,324(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// lwz r30,316(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// not r9,r10
	ctx.r9.u64 = ~ctx.r10.u64;
	// lwz r28,308(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// li r29,17
	r29.s64 = 17;
	// lwz r26,300(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// li r27,0
	r27.s64 = 0;
	// lwz r25,292(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// rlwinm r10,r10,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	// clrlwi r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	// stw r31,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, r31.u32);
	// stw r30,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r30.u32);
	// stw r28,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r28.u32);
	// stw r29,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r29.u32);
	// stw r27,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r27.u32);
	// stw r26,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r26.u32);
	// stw r25,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r25.u32);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82404900
	ctx.lr = 0x82404D8C;
	sub_82404900(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_82405D28) {
	REX_FUNC_PROLOGUE();
	// b 0x82405650
	sub_82405650(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82405D30) {
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
	ctx.lr = 0x82405D54;
	sub_82405650(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82405940
	ctx.lr = 0x82405D60;
	sub_82405940(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82405bd8
	ctx.lr = 0x82405D68;
	sub_82405BD8(ctx, base);
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

DEFINE_REX_FUNC(sub_82406000) {
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
	ctx.lr = 0x82406008;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r29,r1,96
	r29.s64 = ctx.r1.s64 + 96;
	// addi r31,r4,12
	r31.s64 = ctx.r4.s64 + 12;
	// li r30,4
	r30.s64 = 4;
	// stvx128 v1,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_82406024:
	// lvlx128 v63,r0,r29
	temp.u32 = r29.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r1,82
	ctx.r11.s64 = ctx.r1.s64 + 82;
	// vor128 v0,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// lis r5,2
	ctx.r5.s64 = 131072;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// vpkd3d128 v0,v63,5,2,2
	ctx.fpscr.enableFlushMode();
	temp.u32 = (ctx.v63.u32[3]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v63.u32[3]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v63.u32[3]&0x7FE000)>>13) : 0x0;
	ctx.v0.u16[7] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v0.u16[7] |= ((ctx.v63.u32[3]&0x80000000)>>16);
	temp.u32 = (ctx.v63.u32[2]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v63.u32[2]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v63.u32[2]&0x7FE000)>>13) : 0x0;
	ctx.v0.u16[6] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v0.u16[6] |= ((ctx.v63.u32[2]&0x80000000)>>16);
	temp.u32 = (ctx.v63.u32[1]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v63.u32[1]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v63.u32[1]&0x7FE000)>>13) : 0x0;
	ctx.v0.u16[5] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v0.u16[5] |= ((ctx.v63.u32[1]&0x80000000)>>16);
	temp.u32 = (ctx.v63.u32[0]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v63.u32[0]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v63.u32[0]&0x7FE000)>>13) : 0x0;
	ctx.v0.u16[4] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v0.u16[4] |= ((ctx.v63.u32[0]&0x80000000)>>16);
	// vsplth v0,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_set1_epi16(short(0xF0E))));
	// stvehx v0,r0,r11
	ea = (ctx.r11.u32) & ~0x1;
	REX_STORE_U16(ea, ctx.v0.u16[7 - ((ea & 0xF) >> 1)]);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lhz r9,82(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// slw r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// sth r11,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// bl 0x82409e00
	ctx.lr = 0x82406068;
	sub_82409E00(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lhz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// lhzx r9,r11,r28
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + r28.u32);
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// sthx r10,r11,r28
	REX_STORE_U16(ctx.r11.u32 + r28.u32, ctx.r10.u16);
	// bne 0x82406024
	if (!ctx.cr0.eq) goto loc_82406024;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8240C6A8) {
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
	ctx.lr = 0x8240C6B0;
	// stwu r1,-512(r1)
	ea = -512 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r10,588(r1)
	REX_STORE_U32(ctx.r1.u32 + 588, ctx.r10.u32);
	// addi r10,r1,180
	ctx.r10.s64 = ctx.r1.s64 + 180;
	// li r19,0
	r19.s64 = 0;
	// lwz r11,32(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 32);
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// stw r6,556(r1)
	REX_STORE_U32(ctx.r1.u32 + 556, ctx.r6.u32);
	// stw r19,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, r19.u32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// clrlwi r18,r11,26
	r18.u64 = ctx.r11.u32 & 0x3F;
	// stw r19,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, r19.u32);
	// stw r19,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r19.u32);
	// addi r11,r8,27512
	ctx.r11.s64 = ctx.r8.s64 + 27512;
	// stw r19,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, r19.u32);
	// mr r30,r9
	r30.u64 = ctx.r9.u64;
	// lwz r9,40(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 40);
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// lwz r8,28(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// rlwinm r6,r18,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,32(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r18,216(r1)
	REX_STORE_U32(ctx.r1.u32 + 216, r18.u32);
	// rlwinm r17,r9,1,31,31
	r17.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// lwz r9,20(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// lwz r7,48(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 48);
	// mr r20,r4
	r20.u64 = ctx.r4.u64;
	// stw r19,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, r19.u32);
	// rlwinm r15,r8,1,31,31
	r15.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// stw r10,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// lbzx r11,r6,r11
	ctx.r11.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// rlwinm r22,r7,23,30,31
	r22.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 23) & 0x3;
	// stw r9,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// rlwinm r16,r7,21,31,31
	r16.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 21) & 0x1;
	// stw r15,204(r1)
	REX_STORE_U32(ctx.r1.u32 + 204, r15.u32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r22,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, r22.u32);
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// stw r16,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, r16.u32);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// stw r8,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r8.u32);
	// addi r4,r1,148
	ctx.r4.s64 = ctx.r1.s64 + 148;
	// stw r19,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, r19.u32);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// rlwinm r31,r17,1,0,30
	r31.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 1) & 0xFFFFFFFE;
	// rotlwi r14,r11,1
	r14.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// bl 0x82221288
	ctx.lr = 0x8240C770;
	sub_82221288(ctx, base);
	// lwz r9,48(r20)
	ctx.r9.u64 = REX_LOAD_U32(r20.u32 + 48);
	// rlwinm r9,r9,0,21,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x600;
	// cmplwi cr6,r9,1536
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1536, ctx.xer);
	// lwz r28,148(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r29,144(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// subf r11,r31,r28
	ctx.r11.u64 = r28.u64 - r31.u64;
	// subf r10,r31,r29
	ctx.r10.u64 = r29.u64 - r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// subf r11,r11,r17
	ctx.r11.u64 = r17.u64 - ctx.r11.u64;
	// subf r10,r10,r17
	ctx.r10.u64 = r17.u64 - ctx.r10.u64;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// beq cr6,0x8240c7c4
	if (ctx.cr6.eq) goto loc_8240C7C4;
	// lwz r9,32(r20)
	ctx.r9.u64 = REX_LOAD_U32(r20.u32 + 32);
	// rlwinm. r9,r9,0,21,21
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8240c7c4
	if (!ctx.cr0.eq) goto loc_8240C7C4;
	// li r9,1
	ctx.r9.s64 = 1;
	// b 0x8240c7d0
	goto loc_8240C7D0;
loc_8240C7C4:
	// lwz r9,36(r20)
	ctx.r9.u64 = REX_LOAD_U32(r20.u32 + 36);
	// rlwinm r9,r9,6,26,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0x3F;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_8240C7D0:
	// addi r8,r24,1
	ctx.r8.s64 = r24.s64 + 1;
	// stw r9,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r9.u32);
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// mr r21,r8
	r21.u64 = ctx.r8.u64;
	// stw r8,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// beq cr6,0x8240c858
	if (ctx.cr6.eq) goto loc_8240C858;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// blt cr6,0x8240c7f8
	if (ctx.cr6.lt) goto loc_8240C7F8;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_8240C7F8:
	// subf. r9,r30,r9
	ctx.r9.u64 = ctx.r9.u64 - r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble 0x8240c818
	if (!ctx.cr0.gt) goto loc_8240C818;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// blt cr6,0x8240c810
	if (ctx.cr6.lt) goto loc_8240C810;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_8240C810:
	// subf r9,r30,r9
	ctx.r9.u64 = ctx.r9.u64 - r30.u64;
	// b 0x8240c81c
	goto loc_8240C81C;
loc_8240C818:
	// mr r9,r19
	ctx.r9.u64 = r19.u64;
loc_8240C81C:
	// cmplw cr6,r9,r21
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r21.u32, ctx.xer);
	// bge cr6,0x8240c860
	if (!ctx.cr6.lt) goto loc_8240C860;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// blt cr6,0x8240c834
	if (ctx.cr6.lt) goto loc_8240C834;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_8240C834:
	// subf. r9,r30,r9
	ctx.r9.u64 = ctx.r9.u64 - r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble 0x8240c850
	if (!ctx.cr0.gt) goto loc_8240C850;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8240c848
	if (ctx.cr6.lt) goto loc_8240C848;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8240C848:
	// subf r21,r30,r11
	r21.u64 = ctx.r11.u64 - r30.u64;
	// b 0x8240c85c
	goto loc_8240C85C;
loc_8240C850:
	// mr r21,r19
	r21.u64 = r19.u64;
	// b 0x8240c85c
	goto loc_8240C85C;
loc_8240C858:
	// mr r21,r27
	r21.u64 = r27.u64;
loc_8240C85C:
	// stw r21,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r21.u32);
loc_8240C860:
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(r16.u32, 0, ctx.xer);
	// stw r8,196(r1)
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r8.u32);
	// beq cr6,0x8240c908
	if (ctx.cr6.eq) goto loc_8240C908;
	// subf r11,r31,r28
	ctx.r11.u64 = r28.u64 - r31.u64;
	// subf r10,r31,r29
	ctx.r10.u64 = r29.u64 - r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// subf r11,r11,r17
	ctx.r11.u64 = r17.u64 - ctx.r11.u64;
	// subf r10,r10,r17
	ctx.r10.u64 = r17.u64 - ctx.r10.u64;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8240c8a0
	if (ctx.cr6.lt) goto loc_8240C8A0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8240C8A0:
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addme r10,r10
	temp.u8 = (ctx.r10.u32 + 0xFFFFFFFFu < ctx.r10.u32) | (ctx.r10.u32 + 0xFFFFFFFFu + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ctx.r10.u64 + ctx.xer.ca + 0xFFFFFFFFFFFFFFFFull;
	ctx.xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x8240c908
	if (!ctx.cr6.lt) goto loc_8240C908;
	// subf r11,r31,r28
	ctx.r11.u64 = r28.u64 - r31.u64;
	// subf r10,r31,r29
	ctx.r10.u64 = r29.u64 - r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// subf r11,r11,r17
	ctx.r11.u64 = r17.u64 - ctx.r11.u64;
	// subf r10,r10,r17
	ctx.r10.u64 = r17.u64 - ctx.r10.u64;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8240c8f0
	if (ctx.cr6.lt) goto loc_8240C8F0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8240C8F0:
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addme r10,r10
	temp.u8 = (ctx.r10.u32 + 0xFFFFFFFFu < ctx.r10.u32) | (ctx.r10.u32 + 0xFFFFFFFFu + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ctx.r10.u64 + ctx.xer.ca + 0xFFFFFFFFFFFFFFFFull;
	ctx.xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r11,196(r1)
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r11.u32);
loc_8240C908:
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// lwz r10,208(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// stw r25,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r25.u32);
	// addi r7,r1,272
	ctx.r7.s64 = ctx.r1.s64 + 272;
	// stw r26,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r26.u32);
	// addi r6,r1,304
	ctx.r6.s64 = ctx.r1.s64 + 304;
	// stw r17,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r17.u32);
	// addi r5,r1,320
	ctx.r5.s64 = ctx.r1.s64 + 320;
	// stw r22,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r22.u32);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x8240a7d0
	ctx.lr = 0x8240C93C;
	sub_8240A7D0(ctx, base);
	// lwz r23,604(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 604);
	// mr r31,r27
	r31.u64 = r27.u64;
	// stw r27,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, r27.u32);
	// cmplw cr6,r27,r24
	ctx.cr6.compare<uint32_t>(r27.u32, r24.u32, ctx.xer);
	// bgt cr6,0x8240cefc
	if (ctx.cr6.gt) goto loc_8240CEFC;
	// lwz r24,612(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 612);
	// b 0x8240c974
	goto loc_8240C974;
loc_8240C958:
	// lwz r21,124(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// li r19,0
	r19.s64 = 0;
	// lwz r16,224(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// lwz r15,204(r1)
	r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 204);
	// lwz r22,188(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r18,216(r1)
	r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// lwz r31,136(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
loc_8240C974:
	// subfc r11,r21,r31
	ctx.xer.ca = r31.u32 >= r21.u32;
	ctx.r11.u64 = r31.u64 - r21.u64;
	// stw r17,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r17.u32);
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r9,r1,272
	ctx.r9.s64 = ctx.r1.s64 + 272;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// addi r8,r1,304
	ctx.r8.s64 = ctx.r1.s64 + 304;
	// addi r7,r1,320
	ctx.r7.s64 = ctx.r1.s64 + 320;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r6,r1,288
	ctx.r6.s64 = ctx.r1.s64 + 288;
	// addi r5,r1,336
	ctx.r5.s64 = ctx.r1.s64 + 336;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8240a9d0
	ctx.lr = 0x8240C9AC;
	sub_8240A9D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8240cedc
	if (ctx.cr0.eq) goto loc_8240CEDC;
	// lwz r21,240(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(r16.u32, 0, ctx.xer);
	// lwz r22,248(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 248);
	// subf r11,r21,r22
	ctx.r11.u64 = r22.u64 - r21.u64;
	// stw r11,200(r1)
	REX_STORE_U32(ctx.r1.u32 + 200, ctx.r11.u32);
	// rlwinm r16,r11,1,0,28
	r16.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFF8;
	// beq cr6,0x8240c9fc
	if (ctx.cr6.eq) goto loc_8240C9FC;
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// lwz r5,208(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// mr r9,r17
	ctx.r9.u64 = r17.u64;
	// mr r8,r15
	ctx.r8.u64 = r15.u64;
	// mr r7,r18
	ctx.r7.u64 = r18.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82408568
	ctx.lr = 0x8240C9F4;
	sub_82408568(ctx, base);
	// lwz r29,144(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r28,148(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
loc_8240C9FC:
	// lwz r11,152(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// stw r19,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, r19.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8240cec4
	if (ctx.cr6.eq) goto loc_8240CEC4;
	// lwz r15,256(r1)
	r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// lwz r18,252(r1)
	r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// lwz r19,244(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r25,116(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
loc_8240CA1C:
	// addi r9,r1,264
	ctx.r9.s64 = ctx.r1.s64 + 264;
	// lwz r31,136(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// addi r8,r1,212
	ctx.r8.s64 = ctx.r1.s64 + 212;
	// lwz r4,168(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// addi r11,r1,232
	ctx.r11.s64 = ctx.r1.s64 + 232;
	// stw r9,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r10,r1,220
	ctx.r10.s64 = ctx.r1.s64 + 220;
	// addi r9,r1,228
	ctx.r9.s64 = ctx.r1.s64 + 228;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r8,r1,268
	ctx.r8.s64 = ctx.r1.s64 + 268;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x82222148
	ctx.lr = 0x8240CA5C;
	sub_82222148(ctx, base);
	// lwz r11,220(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// lwz r10,128(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// lwz r9,228(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r7,232(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 232);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// stw r8,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r8.u32);
	// subf r27,r9,r7
	r27.u64 = ctx.r7.u64 - ctx.r9.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bgt cr6,0x8240ca8c
	if (ctx.cr6.gt) goto loc_8240CA8C;
	// li r11,1
	ctx.r11.s64 = 1;
loc_8240CA8C:
	// lwz r10,212(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bgt cr6,0x8240caa4
	if (ctx.cr6.gt) goto loc_8240CAA4;
	// li r10,1
	ctx.r10.s64 = 1;
loc_8240CAA4:
	// lwz r9,196(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x8240cac8
	if (ctx.cr6.gt) goto loc_8240CAC8;
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// addi r10,r10,31
	ctx.r10.s64 = ctx.r10.s64 + 31;
	// rlwinm r11,r11,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// rlwinm r10,r10,0,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFE0;
	// stw r11,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// stw r10,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r10.u32);
loc_8240CAC8:
	// lwz r6,188(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r9,160(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r7,260(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// cmplwi cr6,r6,2
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 2, ctx.xer);
	// beq cr6,0x8240caf8
	if (ctx.cr6.eq) goto loc_8240CAF8;
	// rlwinm r11,r18,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r10,r19,30,2,26
	ctx.r10.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 30) & 0x3FFFFFE0;
	// addi r5,r11,31
	ctx.r5.s64 = ctx.r11.s64 + 31;
	// mullw r11,r10,r8
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// rlwinm r10,r5,0,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFE0;
	// mullw r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// b 0x8240cb0c
	goto loc_8240CB0C;
loc_8240CAF8:
	// addi r10,r7,3
	ctx.r10.s64 = ctx.r7.s64 + 3;
	// rlwinm r11,r15,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
loc_8240CB0C:
	// lwz r5,156(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + r27.u64;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x8240cb24
	if (!ctx.cr6.lt) goto loc_8240CB24;
	// stw r11,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
loc_8240CB24:
	// lwz r11,164(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8240cb34
	if (!ctx.cr6.gt) goto loc_8240CB34;
	// stw r10,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
loc_8240CB34:
	// lwz r11,204(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 204);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8240cdc4
	if (ctx.cr6.eq) goto loc_8240CDC4;
	// lwz r11,124(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8240cc4c
	if (!ctx.cr6.lt) goto loc_8240CC4C;
	// mullw r11,r15,r9
	ctx.r11.s64 = int64_t(r15.s32) * int64_t(ctx.r9.s32);
	// add r26,r11,r27
	r26.u64 = ctx.r11.u64 + r27.u64;
	// cmplw cr6,r15,r7
	ctx.cr6.compare<uint32_t>(r15.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x8240cea4
	if (!ctx.cr6.lt) goto loc_8240CEA4;
	// lwz r11,260(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// rlwinm r25,r19,30,2,31
	r25.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r24,r15,r11
	r24.u64 = ctx.r11.u64 - r15.u64;
loc_8240CB68:
	// mullw r10,r25,r8
	ctx.r10.s64 = int64_t(r25.s32) * int64_t(ctx.r8.s32);
	// mr r11,r19
	ctx.r11.u64 = r19.u64;
	// add r28,r10,r26
	r28.u64 = ctx.r10.u64 + r26.u64;
	// cmplw cr6,r19,r18
	ctx.cr6.compare<uint32_t>(r19.u32, r18.u32, ctx.xer);
	// bge cr6,0x8240cc38
	if (!ctx.cr6.lt) goto loc_8240CC38;
	// rlwinm r10,r21,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r9,612(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 612);
	// mullw r10,r10,r14
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r14.s32);
	// add r27,r10,r9
	r27.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_8240CB8C:
	// addi r31,r11,128
	r31.s64 = ctx.r11.s64 + 128;
	// add r10,r27,r28
	ctx.r10.u64 = r27.u64 + r28.u64;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bge cr6,0x8240cc20
	if (!ctx.cr6.lt) goto loc_8240CC20;
	// subf r11,r11,r31
	ctx.r11.u64 = r31.u64 - ctx.r11.u64;
	// subf r30,r14,r10
	r30.u64 = ctx.r10.u64 - r14.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r29,r11,1
	r29.s64 = ctx.r11.s64 + 1;
loc_8240CBB0:
	// lwz r11,596(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 596);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// stw r16,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, r16.u32);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// subf r11,r23,r11
	ctx.r11.u64 = ctx.r11.u64 - r23.u64;
	// lwz r10,588(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 588);
	// lwz r4,116(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// add r6,r10,r23
	ctx.r6.u64 = ctx.r10.u64 + r23.u64;
	// lwz r3,132(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x823ce080
	ctx.lr = 0x8240CBDC;
	sub_823CE080(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmplw cr6,r21,r22
	ctx.cr6.compare<uint32_t>(r21.u32, r22.u32, ctx.xer);
	// add r23,r11,r23
	r23.u64 = ctx.r11.u64 + r23.u64;
	// bge cr6,0x8240cc14
	if (!ctx.cr6.lt) goto loc_8240CC14;
	// lwz r11,200(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// addi r11,r10,-8
	ctx.r11.s64 = ctx.r10.s64 + -8;
	// rlwinm r10,r9,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8240CC08:
	// ldu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdux r10,r30,r14
	ea = r30.u32 + r14.u32;
	REX_STORE_U64(ea, ctx.r10.u64);
	r30.u32 = ea;
	// bdnz 0x8240cc08
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8240CC08;
loc_8240CC14:
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne 0x8240cbb0
	if (!ctx.cr0.eq) goto loc_8240CBB0;
	// lwz r8,128(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
loc_8240CC20:
	// rlwinm r10,r8,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// add r28,r10,r28
	r28.u64 = ctx.r10.u64 + r28.u64;
	// cmplw cr6,r31,r18
	ctx.cr6.compare<uint32_t>(r31.u32, r18.u32, ctx.xer);
	// blt cr6,0x8240cb8c
	if (ctx.cr6.lt) goto loc_8240CB8C;
	// lwz r9,160(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
loc_8240CC38:
	// addic. r24,r24,-1
	ctx.xer.ca = r24.u32 > 0;
	r24.s64 = r24.s64 + -1;
	ctx.cr0.compare<int32_t>(r24.s32, 0, ctx.xer);
	// add r26,r26,r9
	r26.u64 = r26.u64 + ctx.r9.u64;
	// bne 0x8240cb68
	if (!ctx.cr0.eq) goto loc_8240CB68;
	// lwz r24,612(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 612);
	// b 0x8240cdbc
	goto loc_8240CDBC;
loc_8240CC4C:
	// cmplwi cr6,r6,2
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 2, ctx.xer);
	// beq cr6,0x8240ccf4
	if (ctx.cr6.eq) goto loc_8240CCF4;
	// mr r26,r19
	r26.u64 = r19.u64;
	// cmplw cr6,r19,r18
	ctx.cr6.compare<uint32_t>(r19.u32, r18.u32, ctx.xer);
	// bge cr6,0x8240cea4
	if (!ctx.cr6.lt) goto loc_8240CEA4;
loc_8240CC60:
	// lwz r11,596(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 596);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// stw r16,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, r16.u32);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// subf r11,r23,r11
	ctx.r11.u64 = ctx.r11.u64 - r23.u64;
	// lwz r10,588(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 588);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r3,132(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// add r6,r10,r23
	ctx.r6.u64 = ctx.r10.u64 + r23.u64;
	// bl 0x823ce080
	ctx.lr = 0x8240CC8C;
	sub_823CE080(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// mr r31,r21
	r31.u64 = r21.u64;
	// cmplw cr6,r21,r22
	ctx.cr6.compare<uint32_t>(r21.u32, r22.u32, ctx.xer);
	// add r23,r11,r23
	r23.u64 = ctx.r11.u64 + r23.u64;
	// bge cr6,0x8240cce4
	if (!ctx.cr6.lt) goto loc_8240CCE4;
	// rlwinm r28,r26,30,2,31
	r28.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r30,r25,-8
	r30.s64 = r25.s64 + -8;
loc_8240CCA8:
	// lwz r9,180(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// rlwinm r11,r31,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r10,176(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// mr r6,r14
	ctx.r6.u64 = r14.u64;
	// add r4,r28,r9
	ctx.r4.u64 = r28.u64 + ctx.r9.u64;
	// lwz r5,140(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ldu r29,8(r30)
	ea = 8 + r30.u32;
	r29.u64 = REX_LOAD_U64(ea);
	r30.u32 = ea;
	// bl 0x82409228
	ctx.lr = 0x8240CCCC;
	sub_82409228(ctx, base);
	// mullw r11,r3,r14
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(r14.s32);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r31,r22
	ctx.cr6.compare<uint32_t>(r31.u32, r22.u32, ctx.xer);
	// stdx r29,r11,r24
	REX_STORE_U64(ctx.r11.u32 + r24.u32, r29.u64);
	// blt cr6,0x8240cca8
	if (ctx.cr6.lt) goto loc_8240CCA8;
loc_8240CCE4:
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// cmplw cr6,r26,r18
	ctx.cr6.compare<uint32_t>(r26.u32, r18.u32, ctx.xer);
	// blt cr6,0x8240cc60
	if (ctx.cr6.lt) goto loc_8240CC60;
	// b 0x8240cea4
	goto loc_8240CEA4;
loc_8240CCF4:
	// mr r26,r15
	r26.u64 = r15.u64;
	// cmplw cr6,r15,r7
	ctx.cr6.compare<uint32_t>(r15.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x8240cea4
	if (!ctx.cr6.lt) goto loc_8240CEA4;
loc_8240CD00:
	// mr r25,r19
	r25.u64 = r19.u64;
	// cmplw cr6,r19,r18
	ctx.cr6.compare<uint32_t>(r19.u32, r18.u32, ctx.xer);
	// bge cr6,0x8240cdac
	if (!ctx.cr6.lt) goto loc_8240CDAC;
loc_8240CD0C:
	// lwz r11,596(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 596);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// stw r16,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, r16.u32);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// subf r11,r23,r11
	ctx.r11.u64 = ctx.r11.u64 - r23.u64;
	// lwz r10,588(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 588);
	// lwz r4,116(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// add r6,r10,r23
	ctx.r6.u64 = ctx.r10.u64 + r23.u64;
	// lwz r3,132(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x823ce080
	ctx.lr = 0x8240CD38;
	sub_823CE080(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// mr r31,r21
	r31.u64 = r21.u64;
	// cmplw cr6,r21,r22
	ctx.cr6.compare<uint32_t>(r21.u32, r22.u32, ctx.xer);
	// add r23,r11,r23
	r23.u64 = ctx.r11.u64 + r23.u64;
	// bge cr6,0x8240cda0
	if (!ctx.cr6.lt) goto loc_8240CDA0;
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// rlwinm r28,r25,30,2,31
	r28.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r30,r11,-8
	r30.s64 = ctx.r11.s64 + -8;
loc_8240CD58:
	// lwz r9,180(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// rlwinm r11,r31,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r10,176(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// mr r8,r14
	ctx.r8.u64 = r14.u64;
	// lwz r5,184(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// add r4,r28,r9
	ctx.r4.u64 = r28.u64 + ctx.r9.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r7,192(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// add r5,r5,r26
	ctx.r5.u64 = ctx.r5.u64 + r26.u64;
	// lwz r6,140(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// ldu r29,8(r30)
	ea = 8 + r30.u32;
	r29.u64 = REX_LOAD_U64(ea);
	r30.u32 = ea;
	// bl 0x824087a8
	ctx.lr = 0x8240CD88;
	sub_824087A8(ctx, base);
	// mullw r11,r3,r14
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(r14.s32);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r31,r22
	ctx.cr6.compare<uint32_t>(r31.u32, r22.u32, ctx.xer);
	// stdx r29,r11,r24
	REX_STORE_U64(ctx.r11.u32 + r24.u32, r29.u64);
	// blt cr6,0x8240cd58
	if (ctx.cr6.lt) goto loc_8240CD58;
loc_8240CDA0:
	// addi r25,r25,4
	r25.s64 = r25.s64 + 4;
	// cmplw cr6,r25,r18
	ctx.cr6.compare<uint32_t>(r25.u32, r18.u32, ctx.xer);
	// blt cr6,0x8240cd0c
	if (ctx.cr6.lt) goto loc_8240CD0C;
loc_8240CDAC:
	// lwz r11,260(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8240cd00
	if (ctx.cr6.lt) goto loc_8240CD00;
loc_8240CDBC:
	// lwz r25,116(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// b 0x8240cea4
	goto loc_8240CEA4;
loc_8240CDC4:
	// mullw r11,r15,r9
	ctx.r11.s64 = int64_t(r15.s32) * int64_t(ctx.r9.s32);
	// add r28,r11,r27
	r28.u64 = ctx.r11.u64 + r27.u64;
	// cmplw cr6,r15,r7
	ctx.cr6.compare<uint32_t>(r15.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x8240cea4
	if (!ctx.cr6.lt) goto loc_8240CEA4;
	// lwz r11,260(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// rlwinm r27,r19,30,2,31
	r27.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r26,r15,r11
	r26.u64 = ctx.r11.u64 - r15.u64;
loc_8240CDE0:
	// lwz r11,180(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// cmplw cr6,r19,r18
	ctx.cr6.compare<uint32_t>(r19.u32, r18.u32, ctx.xer);
	// add r11,r27,r11
	ctx.r11.u64 = r27.u64 + ctx.r11.u64;
	// mullw r11,r11,r8
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// add r31,r11,r28
	r31.u64 = ctx.r11.u64 + r28.u64;
	// bge cr6,0x8240ce98
	if (!ctx.cr6.lt) goto loc_8240CE98;
	// subf r11,r19,r18
	ctx.r11.u64 = r18.u64 - r19.u64;
	// rlwinm r30,r21,30,2,31
	r30.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r29,r11,1
	r29.s64 = ctx.r11.s64 + 1;
loc_8240CE0C:
	// lwz r11,596(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 596);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// stw r16,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, r16.u32);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// subf r11,r23,r11
	ctx.r11.u64 = ctx.r11.u64 - r23.u64;
	// lwz r10,588(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 588);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r3,132(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// add r6,r10,r23
	ctx.r6.u64 = ctx.r10.u64 + r23.u64;
	// bl 0x823ce080
	ctx.lr = 0x8240CE38;
	sub_823CE080(ctx, base);
	// lwz r10,176(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmplw cr6,r21,r22
	ctx.cr6.compare<uint32_t>(r21.u32, r22.u32, ctx.xer);
	// add r10,r30,r10
	ctx.r10.u64 = r30.u64 + ctx.r10.u64;
	// add r23,r11,r23
	r23.u64 = ctx.r11.u64 + r23.u64;
	// mullw r11,r10,r14
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(r14.s32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + r24.u64;
	// bge cr6,0x8240ce84
	if (!ctx.cr6.lt) goto loc_8240CE84;
	// lwz r9,200(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// addi r10,r25,-8
	ctx.r10.s64 = r25.s64 + -8;
	// subf r11,r14,r11
	ctx.r11.u64 = ctx.r11.u64 - r14.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8240CE78:
	// ldu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdux r9,r11,r14
	ea = ctx.r11.u32 + r14.u32;
	REX_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x8240ce78
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8240CE78;
loc_8240CE84:
	// lwz r8,128(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// add r31,r31,r8
	r31.u64 = r31.u64 + ctx.r8.u64;
	// bne 0x8240ce0c
	if (!ctx.cr0.eq) goto loc_8240CE0C;
	// lwz r9,160(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
loc_8240CE98:
	// addic. r26,r26,-1
	ctx.xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// add r28,r28,r9
	r28.u64 = r28.u64 + ctx.r9.u64;
	// bne 0x8240cde0
	if (!ctx.cr0.eq) goto loc_8240CDE0;
loc_8240CEA4:
	// lwz r11,168(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r10,152(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8240ca1c
	if (ctx.cr6.lt) goto loc_8240CA1C;
	// lwz r29,144(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r28,148(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
loc_8240CEC4:
	// lwz r11,136(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r10,556(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 556);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8240c958
	if (!ctx.cr6.gt) goto loc_8240C958;
loc_8240CEDC:
	// lwz r4,156(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r11,164(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8240cefc
	if (!ctx.cr6.lt) goto loc_8240CEFC;
	// subf r5,r4,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82216d48
	ctx.lr = 0x8240CEFC;
	sub_82216D48(ctx, base);
loc_8240CEFC:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_8242A5B8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lhz r7,2(r3)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r3.u32 + 2);
	// li r11,1
	ctx.r11.s64 = 1;
	// lhz r9,12(r3)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 12);
	// rotlwi r8,r7,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// lhz r10,14(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 14);
	// lhz r6,16(r3)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r3.u32 + 16);
	// subf r9,r9,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r9.u64;
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
	// addic r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// cmplwi cr6,r6,34
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 34, ctx.xer);
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 & ctx.r11.u64;
	// beq cr6,0x8242a600
	if (ctx.cr6.eq) goto loc_8242A600;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8242A600:
	// lbz r10,49(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 49);
	// li r11,3
	ctx.r11.s64 = 3;
	// lhz r8,50(r3)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r3.u32 + 50);
	// subfc r6,r11,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r6.u64 = ctx.r10.u64 - ctx.r11.u64;
	// lwz r10,28(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// addze r5,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r5.s64 = temp.s64;
	// subfic r8,r8,0
	ctx.xer.ca = ctx.r8.u32 <= 0;
	ctx.r8.u64 = static_cast<uint64_t>(0) - ctx.r8.u64;
	// subf r11,r5,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r5.u64;
	// subfe r8,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// and r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 & ctx.r11.u64;
	// beq cr6,0x8242a644
	if (ctx.cr6.eq) goto loc_8242A644;
	// lis r11,127
	ctx.r11.s64 = 8323072;
	// ori r11,r11,63488
	ctx.r11.u64 = ctx.r11.u64 | 63488;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8242a648
	if (!ctx.cr6.gt) goto loc_8242A648;
loc_8242A644:
	// li r8,0
	ctx.r8.s64 = 0;
loc_8242A648:
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8242a684
	if (ctx.cr6.eq) goto loc_8242A684;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8242A658:
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// and. r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// bne 0x8242a658
	if (!ctx.cr0.eq) goto loc_8242A658;
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// subf r11,r11,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r11.u64;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 & ctx.r8.u64;
loc_8242A684:
	// addi r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 1;
	// lwz r10,36(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// lhz r7,18(r3)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r3.u32 + 18);
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r6,24(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// addze r5,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r5.s64 = temp.s64;
	// lwz r9,44(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,40(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// subf r7,r7,r5
	ctx.r7.u64 = ctx.r5.u64 - ctx.r7.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addic r9,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r9.s64 = ctx.r7.s64 + -1;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfc r7,r11,r6
	ctx.xer.ca = ctx.r6.u32 >= ctx.r11.u32;
	ctx.r7.u64 = ctx.r6.u64 - ctx.r11.u64;
	// and r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ctx.r8.u64;
	// addze r8,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r8.s64 = temp.s64;
	// subfc r6,r10,r6
	ctx.xer.ca = ctx.r6.u32 >= ctx.r10.u32;
	ctx.r6.u64 = ctx.r6.u64 - ctx.r10.u64;
	// subf r11,r8,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r8.u64;
	// addze r8,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r8.s64 = temp.s64;
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// subf r10,r8,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r8.u64;
	// and r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 & ctx.r11.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824346E0) {
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
	ctx.lr = 0x824346E8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,224(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 224);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// b 0x82434730
	goto loc_82434730;
loc_82434708:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82434720
	if (ctx.cr6.eq) goto loc_82434720;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r31,0(r10)
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x82434724
	goto loc_82434724;
loc_82434720:
	// li r31,0
	r31.s64 = 0;
loc_82434724:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824347e4
	if (ctx.cr6.eq) goto loc_824347E4;
loc_82434730:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82434708
	if (!ctx.cr6.eq) goto loc_82434708;
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,7712
	ctx.r3.s64 = ctx.r11.s64 + 7712;
	// ori r5,r5,3
	ctx.r5.u64 = ctx.r5.u64 | 3;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x8242c3b0
	ctx.lr = 0x82434754;
	sub_8242C3B0(ctx, base);
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// ori r29,r11,65535
	r29.u64 = ctx.r11.u64 | 65535;
	// beq 0x82434778
	if (ctx.cr0.eq) goto loc_82434778;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r29,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r29.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8243477c
	goto loc_8243477C;
loc_82434778:
	// li r31,0
	r31.s64 = 0;
loc_8243477C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x824347e4
	if (ctx.cr6.eq) goto loc_824347E4;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82434458
	ctx.lr = 0x8243479C;
	sub_82434458(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpw cr6,r3,r29
	ctx.cr6.compare<int32_t>(ctx.r3.s32, r29.s32, ctx.xer);
	// beq cr6,0x824347d8
	if (ctx.cr6.eq) goto loc_824347D8;
	// stw r3,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r25,20
	ctx.r3.s64 = r25.s64 + 20;
	// bl 0x824345d0
	ctx.lr = 0x824347B8;
	sub_824345D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x824347e4
	if (!ctx.cr0.eq) goto loc_824347E4;
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824347D8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824347D8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82473600
	ctx.lr = 0x824347E0;
	sub_82473600(ctx, base);
	// li r31,0
	r31.s64 = 0;
loc_824347E4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_82435D98) {
	REX_FUNC_PROLOGUE();
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82435E88) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x8243b518
	sub_8243B518(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824366E0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x824366E8;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,88(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8243670C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82435b40
	ctx.lr = 0x82436714;
	sub_82435B40(ctx, base);
	// bl 0x824d419c
	ctx.lr = 0x82436718;
	__imp__KeGetCurrentProcessType(ctx, base);
	// lhz r11,256(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 256);
	// li r30,1
	r30.s64 = 1;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82436740
	if (!ctx.cr6.eq) goto loc_82436740;
	// lwz r11,244(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 244);
	// lwz r10,104(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 104);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r11,r11,r10
	ctx.r11.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// addi r30,r11,-12
	r30.s64 = ctx.r11.s64 + -12;
loc_82436740:
	// li r5,36
	ctx.r5.s64 = 36;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x822d5870
	ctx.lr = 0x82436750;
	sub_822D5870(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// twllei r30,0
	if (r30.s32 == 0 || r30.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r7,r11,r30
	ctx.r7.u64 = uint32_t(r30.u32 ? ctx.r11.u32 / r30.u32 : 0);
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r6,8(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r11,244(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 244);
	// lwz r4,32(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// mullw r7,r7,r11
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// stw r9,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r7,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// stw r8,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// stw r4,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// stw r6,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824367a4
	if (ctx.cr6.eq) goto loc_824367A4;
	// divwu r10,r10,r30
	ctx.r10.u64 = uint32_t(r30.u32 ? ctx.r10.u32 / r30.u32 : 0);
	// twllei r30,0
	if (r30.s32 == 0 || r30.u32 < 0u) ppc_trap(ctx, base, 0);
	// mullw r8,r10,r11
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// b 0x824367a8
	goto loc_824367A8;
loc_824367A4:
	// subf r8,r7,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r7.u64;
loc_824367A8:
	// lwz r6,28(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 28);
	// stw r8,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x824367f8
	if (ctx.cr6.eq) goto loc_824367F8;
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20);
	// twllei r30,0
	if (r30.s32 == 0 || r30.u32 < 0u) ppc_trap(ctx, base, 0);
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// divwu r9,r9,r30
	ctx.r9.u64 = uint32_t(r30.u32 ? ctx.r9.u32 / r30.u32 : 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// mullw r9,r9,r11
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// stw r9,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// beq cr6,0x824367e8
	if (ctx.cr6.eq) goto loc_824367E8;
	// divwu r10,r10,r30
	ctx.r10.u64 = uint32_t(r30.u32 ? ctx.r10.u32 / r30.u32 : 0);
	// twllei r30,0
	if (r30.s32 == 0 || r30.u32 < 0u) ppc_trap(ctx, base, 0);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// b 0x824367f0
	goto loc_824367F0;
loc_824367E8:
	// subf r11,r9,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r9.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
loc_824367F0:
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r6,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
loc_824367F8:
	// addi r30,r29,188
	r30.s64 = r29.s64 + 188;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82435ac0
	ctx.lr = 0x82436804;
	sub_82435AC0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82436818
	if (!ctx.cr0.eq) goto loc_82436818;
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,14
	r31.u64 = r31.u64 | 14;
	// b 0x82436844
	goto loc_82436844;
loc_82436818:
	// lwz r3,184(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 184);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82436834;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bge 0x82436844
	if (!ctx.cr0.lt) goto loc_82436844;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82435630
	ctx.lr = 0x82436844;
	sub_82435630(ctx, base);
loc_82436844:
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
	ctx.lr = 0x8243685C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8243B508) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x82443b88
	sub_82443B88(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8243B530) {
	REX_FUNC_PROLOGUE();
	// lwz r11,84(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// lwz r3,188(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 188);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8243B6C0) {
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
	// bl 0x8243b668
	ctx.lr = 0x8243B6E0;
	sub_8243B668(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8243b6f0
	if (ctx.cr0.eq) goto loc_8243B6F0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82473600
	ctx.lr = 0x8243B6F0;
	sub_82473600(ctx, base);
loc_8243B6F0:
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

DEFINE_REX_FUNC(sub_8243C860) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8243C868;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// bl 0x82444298
	ctx.lr = 0x8243C888;
	sub_82444298(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r29,180(r31)
	REX_STORE_U32(r31.u32 + 180, r29.u32);
	// addi r11,r11,10960
	ctx.r11.s64 = ctx.r11.s64 + 10960;
	// stw r30,184(r31)
	REX_STORE_U32(r31.u32 + 184, r30.u32);
	// addi r10,r10,10840
	ctx.r10.s64 = ctx.r10.s64 + 10840;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8243D7F8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,11168
	ctx.r11.s64 = ctx.r11.s64 + 11168;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8242a358
	ctx.lr = 0x8243D824;
	sub_8242A358(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8243d834
	if (ctx.cr0.eq) goto loc_8243D834;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82473600
	ctx.lr = 0x8243D834;
	sub_82473600(ctx, base);
loc_8243D834:
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

DEFINE_REX_FUNC(sub_8243F378) {
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
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,36
	ctx.r3.s64 = ctx.r3.s64 + 36;
	// bl 0x822d5870
	ctx.lr = 0x8243F3A0;
	sub_822D5870(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// lwz r3,208(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 208);
	// stw r30,184(r31)
	REX_STORE_U32(r31.u32 + 184, r30.u32);
	// stw r30,188(r31)
	REX_STORE_U32(r31.u32 + 188, r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r30,192(r31)
	REX_STORE_U32(r31.u32 + 192, r30.u32);
	// stw r30,196(r31)
	REX_STORE_U32(r31.u32 + 196, r30.u32);
	// stw r30,200(r31)
	REX_STORE_U32(r31.u32 + 200, r30.u32);
	// stw r30,204(r31)
	REX_STORE_U32(r31.u32 + 204, r30.u32);
	// stw r30,220(r31)
	REX_STORE_U32(r31.u32 + 220, r30.u32);
	// stw r30,224(r31)
	REX_STORE_U32(r31.u32 + 224, r30.u32);
	// stw r30,228(r31)
	REX_STORE_U32(r31.u32 + 228, r30.u32);
	// stw r30,232(r31)
	REX_STORE_U32(r31.u32 + 232, r30.u32);
	// stw r30,236(r31)
	REX_STORE_U32(r31.u32 + 236, r30.u32);
	// stw r30,240(r31)
	REX_STORE_U32(r31.u32 + 240, r30.u32);
	// stw r30,244(r31)
	REX_STORE_U32(r31.u32 + 244, r30.u32);
	// stw r30,248(r31)
	REX_STORE_U32(r31.u32 + 248, r30.u32);
	// stw r30,252(r31)
	REX_STORE_U32(r31.u32 + 252, r30.u32);
	// stw r30,256(r31)
	REX_STORE_U32(r31.u32 + 256, r30.u32);
	// beq cr6,0x8243f3f8
	if (ctx.cr6.eq) goto loc_8243F3F8;
	// bl 0x82473600
	ctx.lr = 0x8243F3F4;
	sub_82473600(ctx, base);
	// stw r30,208(r31)
	REX_STORE_U32(r31.u32 + 208, r30.u32);
loc_8243F3F8:
	// lwz r3,212(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 212);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8243f40c
	if (ctx.cr6.eq) goto loc_8243F40C;
	// bl 0x82473600
	ctx.lr = 0x8243F408;
	sub_82473600(ctx, base);
	// stw r30,212(r31)
	REX_STORE_U32(r31.u32 + 212, r30.u32);
loc_8243F40C:
	// lwz r3,216(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 216);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8243f420
	if (ctx.cr6.eq) goto loc_8243F420;
	// bl 0x82473600
	ctx.lr = 0x8243F41C;
	sub_82473600(ctx, base);
	// stw r30,216(r31)
	REX_STORE_U32(r31.u32 + 216, r30.u32);
loc_8243F420:
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8243f434
	if (ctx.cr6.eq) goto loc_8243F434;
	// bl 0x82473600
	ctx.lr = 0x8243F430;
	sub_82473600(ctx, base);
	// stw r30,84(r31)
	REX_STORE_U32(r31.u32 + 84, r30.u32);
loc_8243F434:
	// lwz r3,88(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8243f448
	if (ctx.cr6.eq) goto loc_8243F448;
	// bl 0x82473600
	ctx.lr = 0x8243F444;
	sub_82473600(ctx, base);
	// stw r30,88(r31)
	REX_STORE_U32(r31.u32 + 88, r30.u32);
loc_8243F448:
	// lwz r3,128(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 128);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8243f45c
	if (ctx.cr6.eq) goto loc_8243F45C;
	// bl 0x82473600
	ctx.lr = 0x8243F458;
	sub_82473600(ctx, base);
	// stw r30,128(r31)
	REX_STORE_U32(r31.u32 + 128, r30.u32);
loc_8243F45C:
	// lwz r3,152(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 152);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8243f470
	if (ctx.cr6.eq) goto loc_8243F470;
	// bl 0x82473600
	ctx.lr = 0x8243F46C;
	sub_82473600(ctx, base);
	// stw r30,152(r31)
	REX_STORE_U32(r31.u32 + 152, r30.u32);
loc_8243F470:
	// lwz r3,176(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 176);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8243f484
	if (ctx.cr6.eq) goto loc_8243F484;
	// bl 0x82473600
	ctx.lr = 0x8243F480;
	sub_82473600(ctx, base);
	// stw r30,176(r31)
	REX_STORE_U32(r31.u32 + 176, r30.u32);
loc_8243F484:
	// li r5,36
	ctx.r5.s64 = 36;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,76
	ctx.r3.s64 = r31.s64 + 76;
	// bl 0x822d5870
	ctx.lr = 0x8243F494;
	sub_822D5870(ctx, base);
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x822d5870
	ctx.lr = 0x8243F4A4;
	sub_822D5870(ctx, base);
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

DEFINE_REX_FUNC(sub_82443180) {
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
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824431A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x824431e8
	if (ctx.cr0.eq) goto loc_824431E8;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824431C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x824431e8
	if (ctx.cr6.eq) goto loc_824431E8;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824431DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bne cr6,0x824431ec
	if (!ctx.cr6.eq) goto loc_824431EC;
loc_824431E8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_824431EC:
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

DEFINE_REX_FUNC(sub_824455B8) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824455dc
	if (ctx.cr6.eq) goto loc_824455DC;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x82445620
	if (ctx.cr6.lt) goto loc_82445620;
loc_824455DC:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8229a710
	ctx.lr = 0x824455E8;
	sub_8229A710(ctx, base);
	// li r3,720
	ctx.r3.s64 = 720;
	// bl 0x82460ed8
	ctx.lr = 0x824455F0;
	sub_82460ED8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82445620
	if (ctx.cr6.eq) goto loc_82445620;
	// li r5,720
	ctx.r5.s64 = 720;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822d5870
	ctx.lr = 0x82445608;
	sub_822D5870(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82445528
	ctx.lr = 0x82445610;
	sub_82445528(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bge cr6,0x82445624
	if (!ctx.cr6.lt) goto loc_82445624;
	// bl 0x82460ee8
	ctx.lr = 0x82445620;
	sub_82460EE8(ctx, base);
loc_82445620:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82445624:
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

DEFINE_REX_FUNC(sub_8244B5F0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	PPCRegister temp{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addic r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// li r11,1
	ctx.r11.s64 = 1;
	// subfe r31,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	r31.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// li r10,0
	ctx.r10.s64 = 0;
	// and r11,r31,r11
	ctx.r11.u64 = r31.u64 & ctx.r11.u64;
	// cmplwi cr6,r8,3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 3, ctx.xer);
	// bge cr6,0x8244b6bc
	if (!ctx.cr6.lt) goto loc_8244B6BC;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x8244b620
	if (ctx.cr6.eq) goto loc_8244B620;
	// li r3,32
	ctx.r3.s64 = 32;
loc_8244B620:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8244b630
	if (ctx.cr6.eq) goto loc_8244B630;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// ori r3,r11,2
	ctx.r3.u64 = ctx.r11.u64 | 2;
loc_8244B630:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8244b750
	if (ctx.cr6.eq) goto loc_8244B750;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ori r10,r11,4
	ctx.r10.u64 = ctx.r11.u64 | 4;
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8244b684
	if (!ctx.cr6.eq) goto loc_8244B684;
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// ble cr6,0x8244b664
	if (!ctx.cr6.gt) goto loc_8244B664;
loc_8244B654:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r9,r6,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r11.u8 & 0x3F));
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bgt cr6,0x8244b654
	if (ctx.cr6.gt) goto loc_8244B654;
loc_8244B664:
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// clrlwi r3,r8,16
	ctx.r3.u64 = ctx.r8.u32 & 0xFFFF;
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_8244B684:
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// ble cr6,0x8244b69c
	if (!ctx.cr6.gt) goto loc_8244B69C;
loc_8244B68C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r9,r6,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r11.u8 & 0x3F));
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bgt cr6,0x8244b68c
	if (ctx.cr6.gt) goto loc_8244B68C;
loc_8244B69C:
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// clrlwi r3,r8,16
	ctx.r3.u64 = ctx.r8.u32 & 0xFFFF;
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_8244B6BC:
	// bne cr6,0x8244b74c
	if (!ctx.cr6.eq) goto loc_8244B74C;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8244b6e0
	if (ctx.cr6.eq) goto loc_8244B6E0;
	// lwz r9,92(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r9,100
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 100, ctx.xer);
	// bne cr6,0x8244b6e0
	if (!ctx.cr6.eq) goto loc_8244B6E0;
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x8244b700
	goto loc_8244B700;
loc_8244B6E0:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8244b6ec
	if (ctx.cr6.eq) goto loc_8244B6EC;
	// li r10,64
	ctx.r10.s64 = 64;
loc_8244B6EC:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8244b700
	if (ctx.cr6.eq) goto loc_8244B700;
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// ori r10,r11,128
	ctx.r10.u64 = ctx.r11.u64 | 128;
loc_8244B700:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// ble cr6,0x8244b71c
	if (!ctx.cr6.gt) goto loc_8244B71C;
loc_8244B70C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r9,r6,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r11.u8 & 0x3F));
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bgt cr6,0x8244b70c
	if (ctx.cr6.gt) goto loc_8244B70C;
loc_8244B71C:
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// clrlwi r3,r8,16
	ctx.r3.u64 = ctx.r8.u32 & 0xFFFF;
	// clrlwi r7,r3,31
	ctx.r7.u64 = ctx.r3.u32 & 0x1;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8244b750
	if (ctx.cr6.eq) goto loc_8244B750;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// ori r3,r11,256
	ctx.r3.u64 = ctx.r11.u64 | 256;
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_8244B74C:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_8244B750:
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82453168) {
	REX_FUNC_PROLOGUE();
	PPCRegister r25{};
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
	// bl 0x822d4e7c
	ctx.lr = 0x82453170;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x822d4f20
	ctx.lr = 0x82453178;
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,28(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r30,0(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r31,4(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lfs f10,1992(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1992);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r28,20(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lfs f13,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lwz r27,32(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lfs f12,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,28(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,32(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,40(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,36(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,44(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f2.f64 = double(temp.f32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f13,140(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f12,152(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f11,156(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f9,104(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f8,108(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lfs f1,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f10,f10,f1
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f1.f64));
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f7,120(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f6,124(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f11,116(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f5,128(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f4,132(r1)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f3,144(r1)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f2,148(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f1,84(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bne cr6,0x82453284
	if (!ctx.cr6.eq) goto loc_82453284;
	// li r5,96
	ctx.r5.s64 = 96;
	// fmr f0,f9
	ctx.f0.f64 = ctx.f9.f64;
	// li r4,0
	ctx.r4.s64 = 0;
	// fmr f13,f8
	ctx.f13.f64 = ctx.f8.f64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// fmr f10,f7
	ctx.f10.f64 = ctx.f7.f64;
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fmr f12,f5
	ctx.f12.f64 = ctx.f5.f64;
	// stfs f13,164(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// fmr f11,f4
	ctx.f11.f64 = ctx.f4.f64;
	// stfs f5,168(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// fmr f9,f6
	ctx.f9.f64 = ctx.f6.f64;
	// stfs f4,172(r1)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// fmr f8,f3
	ctx.f8.f64 = ctx.f3.f64;
	// stfs f10,176(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// fmr f7,f2
	ctx.f7.f64 = ctx.f2.f64;
	// stfs f6,180(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f3,184(r1)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f2,188(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// bl 0x822d5870
	ctx.lr = 0x82453280;
	sub_822D5870(ctx, base);
	// b 0x82453394
	goto loc_82453394;
loc_82453284:
	// lfs f10,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// lfs f7,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f9,f13
	ctx.f6.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// lfs f5,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// fadds f4,f7,f12
	ctx.f4.f64 = double(float(ctx.f7.f64 + ctx.f12.f64));
	// fadds f2,f5,f11
	ctx.f2.f64 = double(float(ctx.f5.f64 + ctx.f11.f64));
	// lfs f3,16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,24(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,32(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,40(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,20(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,28(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// lfs f31,36(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 36);
	f31.f64 = double(temp.f32);
	// lfs f30,44(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 44);
	f30.f64 = double(temp.f32);
	// lfs f29,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	f29.f64 = double(temp.f32);
	// lfs f28,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	f28.f64 = double(temp.f32);
	// fadds f29,f29,f3
	f29.f64 = double(float(f29.f64 + ctx.f3.f64));
	// lfs f27,32(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32);
	f27.f64 = double(temp.f32);
	// fadds f28,f28,f1
	f28.f64 = double(float(f28.f64 + ctx.f1.f64));
	// lfs f26,40(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 40);
	f26.f64 = double(temp.f32);
	// fadds f27,f0,f27
	f27.f64 = double(float(ctx.f0.f64 + f27.f64));
	// lfs f25,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	f25.f64 = double(temp.f32);
	// fadds f26,f26,f13
	f26.f64 = double(float(f26.f64 + ctx.f13.f64));
	// lfs f24,28(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28);
	f24.f64 = double(temp.f32);
	// fadds f25,f25,f12
	f25.f64 = double(float(f25.f64 + ctx.f12.f64));
	// lfs f23,36(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 36);
	f23.f64 = double(temp.f32);
	// fadds f24,f24,f11
	f24.f64 = double(float(f24.f64 + ctx.f11.f64));
	// lfs f22,44(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 44);
	f22.f64 = double(temp.f32);
	// fadds f23,f23,f31
	f23.f64 = double(float(f23.f64 + f31.f64));
	// fadds f22,f22,f30
	f22.f64 = double(float(f22.f64 + f30.f64));
	// stfs f8,136(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f6,140(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f4,152(r1)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f2,156(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f10,192(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f9,196(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f3,200(r1)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f1,204(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// stfs f7,208(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stfs f5,212(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stfs f12,216(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stfs f11,220(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// stfs f29,160(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f28,164(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f27,168(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f26,172(r1)
	temp.f32 = float(f26.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f25,176(r1)
	temp.f32 = float(f25.f64);
	REX_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f24,180(r1)
	temp.f32 = float(f24.f64);
	REX_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f23,184(r1)
	temp.f32 = float(f23.f64);
	REX_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f22,188(r1)
	temp.f32 = float(f22.f64);
	REX_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f0,224(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stfs f13,228(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// stfs f10,232(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// stfs f9,236(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// stfs f31,240(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// stfs f30,244(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// stfs f7,248(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// stfs f5,252(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// stfs f3,256(r1)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// stfs f1,260(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// stfs f0,264(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 264, temp.u32);
	// stfs f13,268(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 268, temp.u32);
	// stfs f12,272(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 272, temp.u32);
	// stfs f11,276(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 276, temp.u32);
	// stfs f31,280(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 280, temp.u32);
	// stfs f30,284(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 284, temp.u32);
loc_82453394:
	// lwz r8,8(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 8);
	// li r11,16
	ctx.r11.s64 = 16;
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// addi r9,r1,224
	ctx.r9.s64 = ctx.r1.s64 + 224;
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// lfs f0,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r26,r1,128
	r26.s64 = ctx.r1.s64 + 128;
	// lfs f13,4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,288(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 288, temp.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stfs f13,292(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 292, temp.u32);
	// addi r29,r1,144
	r29.s64 = ctx.r1.s64 + 144;
	// lvrx128 v63,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lvlx128 v62,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lvlx128 v60,r0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lvrx128 v58,r11,r5
	temp.u32 = ctx.r11.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lvlx128 v57,r0,r4
	temp.u32 = ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// lvrx128 v49,r11,r26
	temp.u32 = ctx.r11.u32 + r26.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r26,r1,240
	r26.s64 = ctx.r1.s64 + 240;
	// addi r25,r1,240
	r25.s64 = ctx.r1.s64 + 240;
	// lvrx128 v51,r11,r3
	temp.u32 = ctx.r11.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v50,r0,r29
	temp.u32 = r29.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r7,r1,208
	ctx.r7.s64 = ctx.r1.s64 + 208;
	// lvlx128 v48,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r29,r1,84
	r29.s64 = ctx.r1.s64 + 84;
	// lvrx128 v47,r11,r9
	temp.u32 = ctx.r11.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lvrx128 v45,r11,r6
	temp.u32 = ctx.r11.u32 + ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// lvlx128 v44,r0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r6,r31,0,28,29
	ctx.r6.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xC;
	// lvrx128 v43,r11,r4
	temp.u32 = ctx.r11.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// li r9,4
	ctx.r9.s64 = 4;
	// lvrx128 v39,r11,r26
	temp.u32 = ctx.r11.u32 + r26.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// lvlx128 v38,r0,r25
	temp.u32 = r25.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v61,r11,r7
	temp.u32 = ctx.r11.u32 + ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// lvlx128 v41,r0,r29
	temp.u32 = r29.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v40,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v42,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v12,v41,0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v41.u32), 0xFF));
	// vspltw128 v56,v40,0
	simde_mm_store_si128((simde__m128i*)ctx.v56.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v40.u32), 0xFF));
	// lvlx128 v46,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r7,r8,4
	ctx.r7.s64 = ctx.r8.s64 + 4;
	// vor128 v54,v62,v63
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vor128 v53,v60,v61
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// vor128 v55,v38,v39
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)ctx.v39.u8)));
	// vor128 v59,v42,v43
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)ctx.v43.u8)));
	// vor128 v52,v57,v58
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8)));
	// vor128 v60,v50,v51
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8)));
	// vor128 v61,v48,v49
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8)));
	// vor128 v62,v46,v47
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8)));
	// vor128 v63,v44,v45
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v45.u8)));
	// beq cr6,0x8245352c
	if (ctx.cr6.eq) goto loc_8245352C;
	// cmplwi cr6,r28,7
	ctx.cr6.compare<uint32_t>(r28.u32, 7, ctx.xer);
	// ble cr6,0x8245352c
	if (!ctx.cr6.gt) goto loc_8245352C;
	// addi r10,r31,16
	ctx.r10.s64 = r31.s64 + 16;
loc_82453498:
	// vmulfp128 v13,v56,v59
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v56.f32), simde_mm_load_ps(ctx.v59.f32)));
	// lvlx v0,0,r30
	temp.u32 = r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// vmaddfp v0,v0,v12,v13
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vspltw128 v57,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v57.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xAA));
	// vor128 v59,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vspltw128 v58,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v58.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// vor128 v37,v57,v57
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_load_si128((simde__m128i*)ctx.v57.u8));
	// vmulfp128 v57,v57,v62
	simde_mm_store_ps(ctx.v57.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v57.f32), simde_mm_load_ps(ctx.v62.f32)));
	// vmulfp128 v51,v58,v63
	simde_mm_store_ps(ctx.v51.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v58.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vmulfp128 v58,v58,v61
	simde_mm_store_ps(ctx.v58.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v58.f32), simde_mm_load_ps(ctx.v61.f32)));
	// vaddfp128 v63,v63,v52
	simde_mm_store_ps(ctx.v63.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v52.f32)));
	// vmulfp128 v50,v37,v60
	simde_mm_store_ps(ctx.v50.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v37.f32), simde_mm_load_ps(ctx.v60.f32)));
	// vaddfp128 v62,v62,v53
	simde_mm_store_ps(ctx.v62.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v53.f32)));
	// vaddfp128 v61,v61,v54
	simde_mm_store_ps(ctx.v61.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v54.f32)));
	// vaddfp128 v60,v60,v55
	simde_mm_store_ps(ctx.v60.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_load_ps(ctx.v55.f32)));
	// beq cr6,0x824534f4
	if (ctx.cr6.eq) goto loc_824534F4;
	// lvlx128 v36,r0,r31
	temp.u32 = r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v35,r11,r31
	temp.u32 = ctx.r11.u32 + r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v34,v36,v35
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)ctx.v35.u8)));
	// lvlx128 v33,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vaddfp128 v58,v58,v33
	simde_mm_store_ps(ctx.v58.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v58.f32), simde_mm_load_ps(ctx.v33.f32)));
	// vaddfp128 v51,v51,v34
	simde_mm_store_ps(ctx.v51.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v51.f32), simde_mm_load_ps(ctx.v34.f32)));
loc_824534F4:
	// vaddfp128 v32,v58,v50
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v32.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v58.f32), simde_mm_load_ps(ctx.v50.f32)));
	// addi r28,r28,-2
	r28.s64 = r28.s64 + -2;
	// vaddfp128 v58,v51,v57
	simde_mm_store_ps(ctx.v58.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v51.f32), simde_mm_load_ps(ctx.v57.f32)));
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// vpermwi128 v57,v32,17
	simde_mm_store_si128((simde__m128i*)ctx.v57.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v32.u32), 0xEE));
	// stvlx128 v58,r0,r31
	ea = r31.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v58.u8[15 - i]);
	// stvrx128 v58,r31,r11
	ea = r31.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v58.u8[i]);
	// addi r31,r31,24
	r31.s64 = r31.s64 + 24;
	// rlwinm r6,r31,0,28,29
	ctx.r6.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xC;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// stvewx128 v57,r0,r10
	ea = (ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v57.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v57,r10,r9
	ea = (ctx.r10.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v57.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// bne cr6,0x82453498
	if (!ctx.cr6.eq) goto loc_82453498;
loc_8245352C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x824535cc
	if (ctx.cr6.eq) goto loc_824535CC;
	// addi r10,r28,-1
	ctx.r10.s64 = r28.s64 + -1;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82453544:
	// vmulfp128 v13,v56,v59
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v56.f32), simde_mm_load_ps(ctx.v59.f32)));
	// lvlx v0,0,r30
	temp.u32 = r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// vmaddfp v0,v0,v12,v13
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vspltw128 v57,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v57.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xAA));
	// vor128 v59,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vspltw128 v58,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v58.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// vor128 v50,v57,v57
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_load_si128((simde__m128i*)ctx.v57.u8));
	// vmulfp128 v57,v57,v62
	simde_mm_store_ps(ctx.v57.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v57.f32), simde_mm_load_ps(ctx.v62.f32)));
	// vmulfp128 v51,v58,v63
	simde_mm_store_ps(ctx.v51.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v58.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vmulfp128 v58,v58,v61
	simde_mm_store_ps(ctx.v58.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v58.f32), simde_mm_load_ps(ctx.v61.f32)));
	// vaddfp128 v63,v63,v52
	simde_mm_store_ps(ctx.v63.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v52.f32)));
	// vmulfp128 v50,v50,v60
	simde_mm_store_ps(ctx.v50.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v50.f32), simde_mm_load_ps(ctx.v60.f32)));
	// vaddfp128 v62,v62,v53
	simde_mm_store_ps(ctx.v62.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v53.f32)));
	// vaddfp128 v61,v61,v54
	simde_mm_store_ps(ctx.v61.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v54.f32)));
	// vaddfp128 v60,v60,v55
	simde_mm_store_ps(ctx.v60.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_load_ps(ctx.v55.f32)));
	// beq cr6,0x824535a0
	if (ctx.cr6.eq) goto loc_824535A0;
	// lvlx128 v49,r0,r31
	temp.u32 = r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v48,r11,r31
	temp.u32 = ctx.r11.u32 + r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v47,v49,v48
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8)));
	// lvlx128 v46,r31,r11
	temp.u32 = r31.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vaddfp128 v58,v58,v46
	simde_mm_store_ps(ctx.v58.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v58.f32), simde_mm_load_ps(ctx.v46.f32)));
	// vaddfp128 v51,v51,v47
	simde_mm_store_ps(ctx.v51.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v51.f32), simde_mm_load_ps(ctx.v47.f32)));
loc_824535A0:
	// vaddfp128 v45,v58,v50
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v45.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v58.f32), simde_mm_load_ps(ctx.v50.f32)));
	// addi r10,r31,16
	ctx.r10.s64 = r31.s64 + 16;
	// vaddfp128 v44,v51,v57
	simde_mm_store_ps(ctx.v44.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v51.f32), simde_mm_load_ps(ctx.v57.f32)));
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// vpermwi128 v43,v45,17
	simde_mm_store_si128((simde__m128i*)ctx.v43.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v45.u32), 0xEE));
	// stvlx128 v44,r0,r31
	ea = r31.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v44.u8[15 - i]);
	// stvrx128 v44,r31,r11
	ea = r31.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v44.u8[i]);
	// addi r31,r31,24
	r31.s64 = r31.s64 + 24;
	// stvewx128 v43,r0,r10
	ea = (ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v43.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v43,r10,r9
	ea = (ctx.r10.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v43.u32[3 - ((ea & 0xF) >> 2)]);
	// bdnz 0x82453544
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82453544;
loc_824535CC:
	// vspltw128 v42,v59,0
	simde_mm_store_si128((simde__m128i*)ctx.v42.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v59.u32), 0xFF));
	// vspltw128 v41,v59,1
	simde_mm_store_si128((simde__m128i*)ctx.v41.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v59.u32), 0xAA));
	// stvewx128 v42,r0,r8
	ea = (ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v42.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v41,r0,r7
	ea = (ctx.r7.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v41.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x822d4f6c
	ctx.lr = 0x824535E8;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_82473810) {
	REX_FUNC_PROLOGUE();
	// lwz r11,100(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 100);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824738A0) {
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
	// lwz r10,128(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 128);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82475f10
	ctx.lr = 0x824738D0;
	sub_82475F10(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824738e0
	if (ctx.cr0.eq) goto loc_824738E0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82473600
	ctx.lr = 0x824738E0;
	sub_82473600(ctx, base);
loc_824738E0:
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

DEFINE_REX_FUNC(sub_824742C8) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x824742d4
	if (!ctx.cr6.eq) goto loc_824742D4;
	// b 0x82475da8
	sub_82475DA8(ctx, base);
	return;
loc_824742D4:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,264(r3)
	REX_STORE_U32(ctx.r3.u32 + 264, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82474448) {
	REX_FUNC_PROLOGUE();
	// stw r4,268(r3)
	REX_STORE_U32(ctx.r3.u32 + 268, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824745D0) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8247468C) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82474708) {
	REX_FUNC_PROLOGUE();
	// lwz r10,184(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 184);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8247475c
	if (ctx.cr6.eq) goto loc_8247475C;
	// lwz r11,28(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// beq cr6,0x824747ac
	if (ctx.cr6.eq) goto loc_824747AC;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r9,192(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 192);
	// lwz r7,188(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 188);
	// lwz r8,28(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// lwz r11,20(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// mullw r9,r8,r9
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// lwz r8,16(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// subf r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x824747b0
	if (ctx.cr6.eq) goto loc_824747B0;
loc_8247475C:
	// lwz r9,168(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 168);
	// b 0x824747a0
	goto loc_824747A0;
loc_82474764:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8247477c
	if (ctx.cr6.eq) goto loc_8247477C;
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x82474780
	goto loc_82474780;
loc_8247477C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82474780:
	// lwz r7,32(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// cmplwi cr6,r7,255
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 255, ctx.xer);
	// beq cr6,0x824747ac
	if (ctx.cr6.eq) goto loc_824747AC;
	// lwz r6,28(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// lwz r8,20(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// mullw r10,r6,r7
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_824747A0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82474764
	if (!ctx.cr6.eq) goto loc_82474764;
	// b 0x824747b0
	goto loc_824747B0;
loc_824747AC:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_824747B0:
	// lwz r10,108(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 108);
	// lhz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 12);
	// mullw r10,r10,r4
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// subf r5,r11,r10
	ctx.r5.u64 = ctx.r10.u64 - ctx.r11.u64;
	// bgt cr6,0x824747cc
	if (ctx.cr6.gt) goto loc_824747CC;
	// li r5,0
	ctx.r5.s64 = 0;
loc_824747CC:
	// lwz r3,268(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 268);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82478530) {
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
	ctx.lr = 0x82478538;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lhz r11,34(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 34);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r8,r10,24512
	ctx.r8.s64 = ctx.r10.s64 + 24512;
	// addi r7,r9,24496
	ctx.r7.s64 = ctx.r9.s64 + 24496;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// lvx128 v63,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// beq cr6,0x82478664
	if (ctx.cr6.eq) goto loc_82478664;
	// clrlwi r30,r5,16
	r30.u64 = ctx.r5.u32 & 0xFFFF;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble cr6,0x824788e8
	if (!ctx.cr6.gt) goto loc_824788E8;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r31,0
	r31.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// lfs f13,2000(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2000);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,1996(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	ctx.f12.f64 = double(temp.f32);
loc_82478584:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82478648
	if (!ctx.cr6.gt) goto loc_82478648;
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r31,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r8,r11,-3
	ctx.r8.s64 = ctx.r11.s64 + -3;
loc_824785A4:
	// lwz r11,320(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 320);
	// mulli r9,r10,1776
	ctx.r9.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(1776));
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r9,60(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// lhz r11,110(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 110);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lfsx f0,r9,r7
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x824785f0
	if (!ctx.cr6.lt) goto loc_824785F0;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// slw r11,r5,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r11.u8 & 0x3F));
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// fctiwz f11,f0
	ctx.f11.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f11,-80(r1)
	REX_STORE_U64(ctx.r1.u32 + -80, ctx.f11.u64);
	// lwz r11,-76(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -76);
	// not r9,r9
	ctx.r9.u64 = ~ctx.r9.u64;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82478614
	if (!ctx.cr6.lt) goto loc_82478614;
	// b 0x82478610
	goto loc_82478610;
loc_824785F0:
	// fadds f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// slw r9,r5,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r11.u8 & 0x3F));
	// fctiwz f11,f0
	ctx.f11.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stfd f11,-80(r1)
	REX_STORE_U64(ctx.r1.u32 + -80, ctx.f11.u64);
	// lwz r11,-76(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -76);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x82478614
	if (!ctx.cr6.gt) goto loc_82478614;
loc_82478610:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82478614:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// srawi r11,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// stb r9,5(r8)
	REX_STORE_U8(ctx.r8.u32 + 5, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// srawi r9,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 8;
	// stb r11,4(r8)
	REX_STORE_U8(ctx.r8.u32 + 4, ctx.r11.u8);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stbu r9,3(r8)
	ea = 3 + ctx.r8.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r8.u32 = ea;
	// lhz r11,34(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 34);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x824785a4
	if (ctx.cr6.lt) goto loc_824785A4;
loc_82478648:
	// addi r10,r31,1
	ctx.r10.s64 = r31.s64 + 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mr r31,r9
	r31.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r30
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r30.s32, ctx.xer);
	// blt cr6,0x82478584
	if (ctx.cr6.lt) goto loc_82478584;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822d4ed4
	return;
loc_82478664:
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// extsh r30,r10
	r30.s64 = ctx.r10.s16;
	// subf r8,r30,r11
	ctx.r8.u64 = ctx.r11.u64 - r30.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// extsh r29,r8
	r29.s64 = ctx.r8.s16;
	// ble cr6,0x824787a4
	if (!ctx.cr6.gt) goto loc_824787A4;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r4,-3
	ctx.r11.s64 = ctx.r4.s64 + -3;
loc_8247868C:
	// lwz r5,320(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 320);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r1,-64
	r28.s64 = ctx.r1.s64 + -64;
	// addi r27,r1,-64
	r27.s64 = ctx.r1.s64 + -64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// lwz r8,60(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 60);
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// lwz r31,1836(r5)
	r31.u64 = REX_LOAD_U32(ctx.r5.u32 + 1836);
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// cmpw cr6,r7,r30
	ctx.cr6.compare<int32_t>(ctx.r7.s32, r30.s32, ctx.xer);
	// lfsx f0,r9,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + r31.u64;
	// stfs f0,-64(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -64, temp.u32);
	// lfs f13,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,-56(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -56, temp.u32);
	// lfs f12,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f12,-60(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -60, temp.u32);
	// stfs f11,-52(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + -52, temp.u32);
	// lvx128 v61,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaxfp128 v60,v63,v61
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v60.f32, simde_mm_max_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v61.f32)));
	// vminfp128 v59,v62,v60
	simde_mm_store_ps(ctx.v59.f32, simde_mm_min_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v60.f32)));
	// stvx128 v59,r0,r27
	ea = (r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f9,-56(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -56);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,-52(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -52);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,-64(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -64);
	ctx.f7.f64 = double(temp.f32);
	// lfs f10,-60(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -60);
	ctx.f10.f64 = double(temp.f32);
	// fctiwz f5,f10
	ctx.f5.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f5,-80(r1)
	REX_STORE_U64(ctx.r1.u32 + -80, ctx.f5.u64);
	// lwz r8,-76(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -76);
	// fctiwz f4,f9
	ctx.f4.s64 = std::isnan(ctx.f9.f64) ? int64_t(0x80000000U) : (ctx.f9.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f4,-80(r1)
	REX_STORE_U64(ctx.r1.u32 + -80, ctx.f4.u64);
	// lwz r5,-76(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -76);
	// fctiwz f3,f8
	ctx.f3.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f3,-80(r1)
	REX_STORE_U64(ctx.r1.u32 + -80, ctx.f3.u64);
	// lwz r31,-76(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -76);
	// fctiwz f6,f7
	ctx.f6.s64 = std::isnan(ctx.f7.f64) ? int64_t(0x80000000U) : (ctx.f7.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f6,-80(r1)
	REX_STORE_U64(ctx.r1.u32 + -80, ctx.f6.u64);
	// lwz r28,-76(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -76);
	// srawi r9,r28,8
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0xFF) != 0);
	ctx.r9.s64 = r28.s32 >> 8;
	// srawi r27,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	r27.s64 = ctx.r9.s32 >> 8;
	// stb r9,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r9.u8);
	// stb r28,5(r11)
	REX_STORE_U8(ctx.r11.u32 + 5, r28.u8);
	// srawi r9,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 8;
	// stb r27,3(r11)
	REX_STORE_U8(ctx.r11.u32 + 3, r27.u8);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// srawi r28,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	r28.s64 = ctx.r9.s32 >> 8;
	// extsb r27,r9
	r27.s64 = ctx.r9.s8;
	// srawi r9,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r5.s32 >> 8;
	// stb r8,5(r11)
	REX_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
	// srawi r8,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 8;
	// stb r28,3(r11)
	REX_STORE_U8(ctx.r11.u32 + 3, r28.u8);
	// extsb r28,r9
	r28.s64 = ctx.r9.s8;
	// stb r27,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, r27.u8);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// srawi r9,r31,8
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0xFF) != 0);
	ctx.r9.s64 = r31.s32 >> 8;
	// stb r5,5(r11)
	REX_STORE_U8(ctx.r11.u32 + 5, ctx.r5.u8);
	// extsb r5,r31
	ctx.r5.s64 = r31.s8;
	// stb r8,3(r11)
	REX_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// srawi r31,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	r31.s64 = ctx.r9.s32 >> 8;
	// stb r28,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, r28.u8);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// extsb r8,r31
	ctx.r8.s64 = r31.s8;
	// stb r5,5(r11)
	REX_STORE_U8(ctx.r11.u32 + 5, ctx.r5.u8);
	// stb r9,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r9.u8);
	// stbu r8,3(r11)
	ea = 3 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r8.u8);
	ctx.r11.u32 = ea;
	// blt cr6,0x8247868c
	if (ctx.cr6.lt) goto loc_8247868C;
loc_824787A4:
	// extsh r11,r29
	ctx.r11.s64 = r29.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824788e8
	if (ctx.cr6.eq) goto loc_824788E8;
	// lwz r11,320(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 320);
	// extsh r10,r7
	ctx.r10.s64 = ctx.r7.s16;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lhz r10,110(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 110);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lwz r8,60(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,1996(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r11,2000
	ctx.r11.s64 = ctx.r11.s64 + 2000;
	// lfsx f13,r8,r7
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// lfs f0,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// slw r11,r5,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r10.u8 & 0x3F));
	// bge cr6,0x82478814
	if (!ctx.cr6.lt) goto loc_82478814;
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// not r10,r9
	ctx.r10.u64 = ~ctx.r9.u64;
	// fctiwz f11,f13
	ctx.f11.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f11,-80(r1)
	REX_STORE_U64(ctx.r1.u32 + -80, ctx.f11.u64);
	// lwz r11,-76(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -76);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82478834
	if (!ctx.cr6.lt) goto loc_82478834;
	// b 0x82478830
	goto loc_82478830;
loc_82478814:
	// fadds f13,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// fctiwz f11,f13
	ctx.f11.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f11,-80(r1)
	REX_STORE_U64(ctx.r1.u32 + -80, ctx.f11.u64);
	// lwz r11,-76(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -76);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82478834
	if (!ctx.cr6.gt) goto loc_82478834;
loc_82478830:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82478834:
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// add r9,r6,r10
	ctx.r9.u64 = ctx.r6.u64 + ctx.r10.u64;
	// srawi r10,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 8;
	// add r11,r9,r4
	ctx.r11.u64 = ctx.r9.u64 + ctx.r4.u64;
	// srawi r30,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	r30.s64 = ctx.r10.s32 >> 8;
	// addi r8,r6,1
	ctx.r8.s64 = ctx.r6.s64 + 1;
	// stbx r30,r9,r4
	REX_STORE_U8(ctx.r9.u32 + ctx.r4.u32, r30.u8);
	// stb r31,2(r11)
	REX_STORE_U8(ctx.r11.u32 + 2, r31.u8);
	// stb r10,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r10.u8);
	// lwz r9,320(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 320);
	// lhz r11,110(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 110);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r6,1836(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 1836);
	// lfsx f13,r6,r7
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x824788a0
	if (!ctx.cr6.lt) goto loc_824788A0;
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// slw r11,r5,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r11.u8 & 0x3F));
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-80(r1)
	REX_STORE_U64(ctx.r1.u32 + -80, ctx.f13.u64);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// not r10,r10
	ctx.r10.u64 = ~ctx.r10.u64;
	// lwz r11,-76(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -76);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x824788c4
	if (!ctx.cr6.lt) goto loc_824788C4;
	// b 0x824788c0
	goto loc_824788C0;
loc_824788A0:
	// fadds f0,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// slw r10,r5,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r11.u8 & 0x3F));
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-80(r1)
	REX_STORE_U64(ctx.r1.u32 + -80, ctx.f13.u64);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lwz r11,-76(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -76);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x824788c4
	if (!ctx.cr6.gt) goto loc_824788C4;
loc_824788C0:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_824788C4:
	// rlwinm r9,r8,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r10,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 8;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// add r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 + ctx.r9.u64;
	// srawi r6,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r10.s32 >> 8;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// stb r7,2(r11)
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// stb r10,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r10.u8);
	// stb r6,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r6.u8);
loc_824788E8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_824A6790) {
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
	// addi r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 1;
	// vspltish v12,8
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x8)));
	// vspltish v11,-1
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_set1_epi16(short(0xFFFF)));
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r7,r11,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// vspltish v6,1
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_set1_epi16(short(0x1)));
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// vspltish v13,2
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x2)));
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// vslh v30,v11,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vspltish v10,4
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_set1_epi16(short(0x4)));
	// vor128 v63,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vspltish v5,5
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_set1_epi16(short(0x5)));
	// li r10,16
	ctx.r10.s64 = 16;
	// lvsl v7,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v4,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// bne cr6,0x824a68b8
	if (!ctx.cr6.eq) goto loc_824A68B8;
	// lvx128 v59,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lvx128 v62,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// lvx128 v60,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lvx128 v61,r3,r4
	ea = (ctx.r3.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v12,v62,v60,v7
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v58,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v8,v61,v59,v4
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// lvx128 v57,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v3,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v9,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v31,v57,v58,v3
	simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// vmrghb v12,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v11,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// ble cr6,0x824a69ec
	if (!ctx.cr6.gt) goto loc_824A69EC;
	// li r9,0
	ctx.r9.s64 = 0;
loc_824A6824:
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vslh v7,v12,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor128 v54,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_load_si128((simde__m128i*)ctx.v5.u8));
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// vslh v8,v12,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v4,v12,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// extsh r6,r9
	ctx.r6.s64 = ctx.r9.s16;
	// vslh v3,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v56,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v9,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// lvx128 v55,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v31,v8,v12
	simde_mm_store_si128((simde__m128i*)v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// lvsl v5,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vslh v29,v11,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v28,v11,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// vperm128 v27,v55,v56,v5
	simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vor v12,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
	// vadduhm v26,v4,v7
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// vsubshs v25,v0,v3
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vadduhm v24,v28,v29
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v28.u16), simde_mm_load_si128((simde__m128i*)v29.u16)));
	// vmrghb v11,v0,v27
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v27.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v5,v54,v54
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)ctx.v54.u8));
	// vadduhm v23,v31,v26
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v31.u16), simde_mm_load_si128((simde__m128i*)v26.u16)));
	// vslh v22,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v21,v23,v24
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)v24.u16)));
	// vsubshs v20,v11,v22
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)v22.s16)));
	// vadduhm v19,v21,v2
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vadduhm v18,v20,v25
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)v25.u16)));
	// vadduhm v8,v19,v18
	simde_mm_store_si128((simde__m128i*)ctx.v8.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v19.u16), simde_mm_load_si128((simde__m128i*)v18.u16)));
	// vsrah v17,v8,v1
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v17,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v17.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v63,v63,v17
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)v17.u8)));
	// addi r8,r8,48
	ctx.r8.s64 = ctx.r8.s64 + 48;
	// blt cr6,0x824a6824
	if (ctx.cr6.lt) goto loc_824A6824;
	// b 0x824a69ec
	goto loc_824A69EC;
loc_824A68B8:
	// lvx128 v50,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lvx128 v53,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lvx128 v51,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v52,r3,r4
	ea = (ctx.r3.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v9,v53,v51,v7
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v49,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v11,v52,v50,v4
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// lvx128 v48,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v7,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v4,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v8,v48,v49,v7
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vmrglb v3,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v12,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v11,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v9,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v8,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// ble cr6,0x824a69ec
	if (!ctx.cr6.gt) goto loc_824A69EC;
	// li r8,0
	ctx.r8.s64 = 0;
loc_824A6908:
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vslh v7,v12,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v31,v12,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// vslh v29,v12,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
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
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// vadduhm v26,v7,v12
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// lvx128 v47,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v27,v4,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v46,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v4,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// lvsl v7,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vslh v25,v9,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v9,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// vperm128 v7,v46,v47,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vslh v23,v11,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v22,v11,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// vor v12,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// vadduhm v20,v29,v31
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)v31.u16)));
	// vmrghb v9,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v21,v3,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v19,v28,v11
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vor v3,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
	// vslh v18,v8,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v17,v8,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor v11,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// vmrglb v8,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v15,v22,v23
	simde_mm_store_si128((simde__m128i*)v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)v23.u16)));
	// vadduhm v14,v24,v25
	simde_mm_store_si128((simde__m128i*)v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)v25.u16)));
	// vadduhm v7,v26,v20
	simde_mm_store_si128((simde__m128i*)ctx.v7.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v26.u16), simde_mm_load_si128((simde__m128i*)v20.u16)));
	// vslh v16,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v29,v17,v18
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v17.u16), simde_mm_load_si128((simde__m128i*)v18.u16)));
	// vslh v31,v8,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v28,v19,v15
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v19.u16), simde_mm_load_si128((simde__m128i*)v15.u16)));
	// vadduhm v26,v7,v14
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)v14.u16)));
	// vsubshs v25,v9,v16
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// vsubshs v27,v0,v27
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v27.s16)));
	// vsubshs v24,v0,v21
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v21.s16)));
	// vsubshs v22,v8,v31
	simde_mm_store_si128((simde__m128i*)v22.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// vadduhm v23,v28,v29
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v28.u16), simde_mm_load_si128((simde__m128i*)v29.u16)));
	// vadduhm v21,v26,v2
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v26.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vadduhm v20,v25,v27
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v25.u16), simde_mm_load_si128((simde__m128i*)v27.u16)));
	// vadduhm v18,v22,v24
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)v24.u16)));
	// vadduhm v19,v23,v2
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vadduhm v7,v21,v20
	simde_mm_store_si128((simde__m128i*)ctx.v7.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)v20.u16)));
	// vadduhm v31,v19,v18
	simde_mm_store_si128((simde__m128i*)v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v19.u16), simde_mm_load_si128((simde__m128i*)v18.u16)));
	// vsrah v17,v7,v1
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v16,v31,v1
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vor128 v45,v63,v17
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)v17.u8)));
	// stvx128 v17,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v17.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v16,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v16.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
	// vor128 v63,v45,v16
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)v16.u8)));
	// blt cr6,0x824a6908
	if (ctx.cr6.lt) goto loc_824A6908;
loc_824A69EC:
	// vand128 v13,v63,v30
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)v30.u8)));
	// vcmpgtuh. v12,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	ctx.cr6.setFromMask(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), 0xFFFF);
	// mfocrf r11,2
	ctx.r11.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824B1208) {
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
	// b 0x824afae8
	sub_824AFAE8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824B1268) {
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
	// b 0x824b0290
	sub_824B0290(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824B1AB8) {
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
	// b 0x824b0530
	sub_824B0530(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824B1AD8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r26{};
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e80
	ctx.lr = 0x824B1AE0;
	// stwu r1,-912(r1)
	ea = -912 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v63,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,16
	ctx.r11.s64 = 16;
	// lvsl v7,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lvx128 v62,r3,r4
	ea = (ctx.r3.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r9,r3,r4
	ctx.r9.u64 = ctx.r3.u64 + ctx.r4.u64;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// add r8,r10,r4
	ctx.r8.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vspltish v13,1
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x1)));
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// lvx128 v61,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r6,r4,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lvx128 v60,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r31,r1,80
	r31.s64 = ctx.r1.s64 + 80;
	// lvx128 v59,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v6,v63,v61,v7
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v58,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r1,128
	r30.s64 = ctx.r1.s64 + 128;
	// lvx128 v57,r10,r11
	ea = (ctx.r10.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r29,r1,176
	r29.s64 = ctx.r1.s64 + 176;
	// lvx128 v56,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r28,r1,224
	r28.s64 = ctx.r1.s64 + 224;
	// lvsl v5,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r9,r6,r3
	ctx.r9.u64 = ctx.r6.u64 + ctx.r3.u64;
	// lvsl v4,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v8,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v3,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v2,v62,v59,v5
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vperm128 v1,v60,v57,v4
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// lvx128 v55,r6,r3
	ea = (ctx.r6.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v31,v58,v56,v3
	simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// lvx128 v54,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v30,v8,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v12,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v7,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v11,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// rlwinm r7,r7,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// vmrghb v10,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v6,v55,v54,v7
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vadduhm v5,v30,v8
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vslh v4,v12,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// cmpwi cr6,r7,8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 8, ctx.xer);
	// vslh v3,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v2,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v9,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v1,v5,v12
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vadduhm v31,v4,v12
	simde_mm_store_si128((simde__m128i*)v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vadduhm v30,v3,v11
	simde_mm_store_si128((simde__m128i*)v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vadduhm v29,v2,v10
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// stvx128 v1,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v28,v31,v11
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vadduhm v27,v30,v10
	simde_mm_store_si128((simde__m128i*)v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vadduhm v26,v29,v9
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// stvx128 v28,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v27,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v27.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v26,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v26.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bne cr6,0x824b1c88
	if (!ctx.cr6.eq) goto loc_824B1C88;
	// add r10,r9,r4
	ctx.r10.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lvx128 v53,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r8,r4,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// vslh v12,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// add r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// add r31,r9,r4
	r31.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lvx128 v52,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v9,v12,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// lvx128 v51,r10,r11
	ea = (ctx.r10.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,272
	ctx.r6.s64 = ctx.r1.s64 + 272;
	// lvx128 v50,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r1,320
	r30.s64 = ctx.r1.s64 + 320;
	// lvx128 v49,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r29,r1,368
	r29.s64 = ctx.r1.s64 + 368;
	// lvx128 v48,r31,r11
	ea = (r31.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r28,r1,416
	r28.s64 = ctx.r1.s64 + 416;
	// lvsl v7,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v6,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v5,r0,r31
	temp.u32 = r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v4,v53,v51,v7
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vperm128 v3,v52,v49,v6
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v47,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v2,v50,v48,v5
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// lvx128 v46,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v1,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v12,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v11,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v10,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v31,v46,v47,v1
	simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// vslh v30,v12,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v29,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v28,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v27,v0,v31
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v26,v9,v12
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vadduhm v25,v30,v12
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vadduhm v24,v29,v11
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vadduhm v23,v28,v10
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// stvx128 v26,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v26.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v22,v25,v11
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vadduhm v21,v24,v10
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vadduhm v20,v23,v27
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)v27.u16)));
	// stvx128 v22,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v22.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v21,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v21.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v20,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v20.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x824b1c8c
	goto loc_824B1C8C;
loc_824B1C88:
	// blt cr6,0x824b1d04
	if (ctx.cr6.lt) goto loc_824B1D04;
loc_824B1C8C:
	// rlwinm r9,r4,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r3,8
	ctx.r10.s64 = ctx.r3.s64 + 8;
	// addi r31,r1,96
	r31.s64 = ctx.r1.s64 + 96;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x824b1d04
	if (!ctx.cr6.gt) goto loc_824B1D04;
	// addi r8,r7,-1
	ctx.r8.s64 = ctx.r7.s64 + -1;
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r8,r8,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// subf r3,r9,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r9.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// subf r27,r9,r4
	r27.u64 = ctx.r4.u64 - ctx.r9.u64;
	// addi r10,r31,-48
	ctx.r10.s64 = r31.s64 + -48;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_824B1CC0:
	// lbzux r8,r3,r9
	ea = ctx.r3.u32 + ctx.r9.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// lbzx r6,r27,r11
	ctx.r6.u64 = REX_LOAD_U8(r27.u32 + ctx.r11.u32);
	// rotlwi r30,r8,1
	r30.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// lbz r31,0(r11)
	r31.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r29,r6,1
	r29.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// add r30,r8,r30
	r30.u64 = ctx.r8.u64 + r30.u64;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// add r8,r6,r29
	ctx.r8.u64 = ctx.r6.u64 + r29.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// add r6,r30,r6
	ctx.r6.u64 = r30.u64 + ctx.r6.u64;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + r31.u64;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// sth r6,48(r10)
	REX_STORE_U16(ctx.r10.u32 + 48, ctx.r6.u16);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// sthu r8,96(r10)
	ea = 96 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x824b1cc0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824B1CC0;
loc_824B1D04:
	// li r11,1104
	ctx.r11.s64 = 1104;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lvx128 v1,r26,r11
	ea = (r26.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x824b0d48
	ctx.lr = 0x824B1D18;
	sub_824B0D48(ctx, base);
	// addi r1,r1,912
	ctx.r1.s64 = ctx.r1.s64 + 912;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_824D1600) {
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
	// addi r11,r31,7840
	ctx.r11.s64 = r31.s64 + 7840;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823d7748
	ctx.lr = 0x824D1620;
	sub_823D7748(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,21764
	ctx.r11.s64 = ctx.r11.s64 + 21764;
	// stw r11,7840(r31)
	REX_STORE_U32(r31.u32 + 7840, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_824D16C0) {
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
	// addi r11,r31,7960
	ctx.r11.s64 = r31.s64 + 7960;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823d7748
	ctx.lr = 0x824D16E0;
	sub_823D7748(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,21564
	ctx.r11.s64 = ctx.r11.s64 + 21564;
	// stw r11,7960(r31)
	REX_STORE_U32(r31.u32 + 7960, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_824D1900) {
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
	// addi r11,r31,8320
	ctx.r11.s64 = r31.s64 + 8320;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823d7748
	ctx.lr = 0x824D1920;
	sub_823D7748(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,21636
	ctx.r11.s64 = ctx.r11.s64 + 21636;
	// stw r11,8320(r31)
	REX_STORE_U32(r31.u32 + 8320, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_824D1B40) {
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
	// addi r11,r31,8684
	ctx.r11.s64 = r31.s64 + 8684;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823d7748
	ctx.lr = 0x824D1B60;
	sub_823D7748(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,21708
	ctx.r11.s64 = ctx.r11.s64 + 21708;
	// stw r11,8684(r31)
	REX_STORE_U32(r31.u32 + 8684, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_824D1D78) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// lis r10,-32176
	ctx.r10.s64 = -2108686336;
	// addi r9,r11,-27144
	ctx.r9.s64 = ctx.r11.s64 + -27144;
	// addi r11,r10,-23220
	ctx.r11.s64 = ctx.r10.s64 + -23220;
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

DEFINE_REX_FUNC(sub_824D1F30) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// lis r10,-32176
	ctx.r10.s64 = -2108686336;
	// addi r9,r11,-26800
	ctx.r9.s64 = ctx.r11.s64 + -26800;
	// addi r11,r10,-22648
	ctx.r11.s64 = ctx.r10.s64 + -22648;
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

DEFINE_REX_FUNC(sub_824D20E8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// lis r10,-32176
	ctx.r10.s64 = -2108686336;
	// addi r10,r10,-21272
	ctx.r10.s64 = ctx.r10.s64 + -21272;
	// lwz r11,-26680(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -26680);
	// stw r11,172(r10)
	REX_STORE_U32(ctx.r10.u32 + 172, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824D2438) {
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
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e50
	ctx.lr = 0x824D2440;
	// lis r11,-32175
	ctx.r11.s64 = -2108620800;
	// lis r17,-32175
	r17.s64 = -2108620800;
	// addi r15,r11,15432
	r15.s64 = ctx.r11.s64 + 15432;
	// addi r14,r17,23000
	r14.s64 = r17.s64 + 23000;
	// lwz r11,15432(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 15432);
	// lwz r7,92(r15)
	ctx.r7.u64 = REX_LOAD_U32(r15.u32 + 92);
	// lwz r6,96(r15)
	ctx.r6.u64 = REX_LOAD_U32(r15.u32 + 96);
	// lwz r10,4(r15)
	ctx.r10.u64 = REX_LOAD_U32(r15.u32 + 4);
	// lwz r9,8(r15)
	ctx.r9.u64 = REX_LOAD_U32(r15.u32 + 8);
	// lwz r8,12(r15)
	ctx.r8.u64 = REX_LOAD_U32(r15.u32 + 12);
	// stw r7,-192(r1)
	REX_STORE_U32(ctx.r1.u32 + -192, ctx.r7.u32);
	// stw r6,-188(r1)
	REX_STORE_U32(ctx.r1.u32 + -188, ctx.r6.u32);
	// lwz r7,16(r15)
	ctx.r7.u64 = REX_LOAD_U32(r15.u32 + 16);
	// lwz r6,20(r15)
	ctx.r6.u64 = REX_LOAD_U32(r15.u32 + 20);
	// lwz r5,24(r15)
	ctx.r5.u64 = REX_LOAD_U32(r15.u32 + 24);
	// lwz r4,28(r15)
	ctx.r4.u64 = REX_LOAD_U32(r15.u32 + 28);
	// lwz r3,32(r15)
	ctx.r3.u64 = REX_LOAD_U32(r15.u32 + 32);
	// lwz r31,36(r15)
	r31.u64 = REX_LOAD_U32(r15.u32 + 36);
	// lwz r30,40(r15)
	r30.u64 = REX_LOAD_U32(r15.u32 + 40);
	// lwz r29,44(r15)
	r29.u64 = REX_LOAD_U32(r15.u32 + 44);
	// lwz r28,48(r15)
	r28.u64 = REX_LOAD_U32(r15.u32 + 48);
	// lwz r27,52(r15)
	r27.u64 = REX_LOAD_U32(r15.u32 + 52);
	// lwz r26,56(r15)
	r26.u64 = REX_LOAD_U32(r15.u32 + 56);
	// lwz r25,60(r15)
	r25.u64 = REX_LOAD_U32(r15.u32 + 60);
	// lwz r24,64(r15)
	r24.u64 = REX_LOAD_U32(r15.u32 + 64);
	// lwz r23,68(r15)
	r23.u64 = REX_LOAD_U32(r15.u32 + 68);
	// lwz r22,72(r15)
	r22.u64 = REX_LOAD_U32(r15.u32 + 72);
	// lwz r21,76(r15)
	r21.u64 = REX_LOAD_U32(r15.u32 + 76);
	// lwz r20,80(r15)
	r20.u64 = REX_LOAD_U32(r15.u32 + 80);
	// lwz r19,84(r15)
	r19.u64 = REX_LOAD_U32(r15.u32 + 84);
	// lwz r16,-192(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -192);
	// lwz r18,88(r15)
	r18.u64 = REX_LOAD_U32(r15.u32 + 88);
	// stw r11,23000(r17)
	REX_STORE_U32(r17.u32 + 23000, ctx.r11.u32);
	// stw r10,8(r14)
	REX_STORE_U32(r14.u32 + 8, ctx.r10.u32);
	// stw r9,16(r14)
	REX_STORE_U32(r14.u32 + 16, ctx.r9.u32);
	// stw r16,-192(r1)
	REX_STORE_U32(ctx.r1.u32 + -192, r16.u32);
	// stw r8,24(r14)
	REX_STORE_U32(r14.u32 + 24, ctx.r8.u32);
	// stw r7,32(r14)
	REX_STORE_U32(r14.u32 + 32, ctx.r7.u32);
	// stw r6,40(r14)
	REX_STORE_U32(r14.u32 + 40, ctx.r6.u32);
	// stw r5,48(r14)
	REX_STORE_U32(r14.u32 + 48, ctx.r5.u32);
	// stw r4,56(r14)
	REX_STORE_U32(r14.u32 + 56, ctx.r4.u32);
	// stw r3,64(r14)
	REX_STORE_U32(r14.u32 + 64, ctx.r3.u32);
	// stw r31,72(r14)
	REX_STORE_U32(r14.u32 + 72, r31.u32);
	// stw r30,80(r14)
	REX_STORE_U32(r14.u32 + 80, r30.u32);
	// stw r29,88(r14)
	REX_STORE_U32(r14.u32 + 88, r29.u32);
	// stw r28,96(r14)
	REX_STORE_U32(r14.u32 + 96, r28.u32);
	// stw r27,104(r14)
	REX_STORE_U32(r14.u32 + 104, r27.u32);
	// stw r26,112(r14)
	REX_STORE_U32(r14.u32 + 112, r26.u32);
	// stw r25,120(r14)
	REX_STORE_U32(r14.u32 + 120, r25.u32);
	// stw r24,128(r14)
	REX_STORE_U32(r14.u32 + 128, r24.u32);
	// stw r23,136(r14)
	REX_STORE_U32(r14.u32 + 136, r23.u32);
	// stw r22,144(r14)
	REX_STORE_U32(r14.u32 + 144, r22.u32);
	// stw r21,152(r14)
	REX_STORE_U32(r14.u32 + 152, r21.u32);
	// stw r20,160(r14)
	REX_STORE_U32(r14.u32 + 160, r20.u32);
	// stw r19,168(r14)
	REX_STORE_U32(r14.u32 + 168, r19.u32);
	// stw r18,176(r14)
	REX_STORE_U32(r14.u32 + 176, r18.u32);
	// lwz r16,-188(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -188);
	// lwz r17,100(r15)
	r17.u64 = REX_LOAD_U32(r15.u32 + 100);
	// lwz r11,104(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 104);
	// lwz r10,108(r15)
	ctx.r10.u64 = REX_LOAD_U32(r15.u32 + 108);
	// lwz r9,112(r15)
	ctx.r9.u64 = REX_LOAD_U32(r15.u32 + 112);
	// lwz r8,116(r15)
	ctx.r8.u64 = REX_LOAD_U32(r15.u32 + 116);
	// lwz r7,120(r15)
	ctx.r7.u64 = REX_LOAD_U32(r15.u32 + 120);
	// lwz r6,124(r15)
	ctx.r6.u64 = REX_LOAD_U32(r15.u32 + 124);
	// lwz r5,128(r15)
	ctx.r5.u64 = REX_LOAD_U32(r15.u32 + 128);
	// lwz r4,132(r15)
	ctx.r4.u64 = REX_LOAD_U32(r15.u32 + 132);
	// lwz r3,136(r15)
	ctx.r3.u64 = REX_LOAD_U32(r15.u32 + 136);
	// lwz r31,140(r15)
	r31.u64 = REX_LOAD_U32(r15.u32 + 140);
	// lwz r30,144(r15)
	r30.u64 = REX_LOAD_U32(r15.u32 + 144);
	// lwz r29,148(r15)
	r29.u64 = REX_LOAD_U32(r15.u32 + 148);
	// lwz r28,152(r15)
	r28.u64 = REX_LOAD_U32(r15.u32 + 152);
	// lwz r27,156(r15)
	r27.u64 = REX_LOAD_U32(r15.u32 + 156);
	// lwz r26,160(r15)
	r26.u64 = REX_LOAD_U32(r15.u32 + 160);
	// lwz r25,164(r15)
	r25.u64 = REX_LOAD_U32(r15.u32 + 164);
	// lwz r24,168(r15)
	r24.u64 = REX_LOAD_U32(r15.u32 + 168);
	// lwz r23,172(r15)
	r23.u64 = REX_LOAD_U32(r15.u32 + 172);
	// lwz r22,176(r15)
	r22.u64 = REX_LOAD_U32(r15.u32 + 176);
	// lwz r21,180(r15)
	r21.u64 = REX_LOAD_U32(r15.u32 + 180);
	// lwz r20,184(r15)
	r20.u64 = REX_LOAD_U32(r15.u32 + 184);
	// lwz r19,188(r15)
	r19.u64 = REX_LOAD_U32(r15.u32 + 188);
	// lwz r18,-192(r1)
	r18.u64 = REX_LOAD_U32(ctx.r1.u32 + -192);
	// stw r18,184(r14)
	REX_STORE_U32(r14.u32 + 184, r18.u32);
	// lwz r18,200(r15)
	r18.u64 = REX_LOAD_U32(r15.u32 + 200);
	// stw r16,192(r14)
	REX_STORE_U32(r14.u32 + 192, r16.u32);
	// lwz r16,196(r15)
	r16.u64 = REX_LOAD_U32(r15.u32 + 196);
	// std r19,-176(r1)
	REX_STORE_U64(ctx.r1.u32 + -176, r19.u64);
	// lwz r19,204(r15)
	r19.u64 = REX_LOAD_U32(r15.u32 + 204);
	// stw r18,-188(r1)
	REX_STORE_U32(ctx.r1.u32 + -188, r18.u32);
	// stw r6,248(r14)
	REX_STORE_U32(r14.u32 + 248, ctx.r6.u32);
	// stw r16,-192(r1)
	REX_STORE_U32(ctx.r1.u32 + -192, r16.u32);
	// stw r5,256(r14)
	REX_STORE_U32(r14.u32 + 256, ctx.r5.u32);
	// stw r19,-184(r1)
	REX_STORE_U32(ctx.r1.u32 + -184, r19.u32);
	// stw r4,264(r14)
	REX_STORE_U32(r14.u32 + 264, ctx.r4.u32);
	// rotlwi r4,r19,0
	ctx.r4.u64 = __builtin_rotateleft32(r19.u32, 0);
	// lwz r19,304(r15)
	r19.u64 = REX_LOAD_U32(r15.u32 + 304);
	// stw r17,200(r14)
	REX_STORE_U32(r14.u32 + 200, r17.u32);
	// lwz r17,316(r15)
	r17.u64 = REX_LOAD_U32(r15.u32 + 316);
	// stw r30,288(r14)
	REX_STORE_U32(r14.u32 + 288, r30.u32);
	// stw r29,296(r14)
	REX_STORE_U32(r14.u32 + 296, r29.u32);
	// stw r19,-180(r1)
	REX_STORE_U32(ctx.r1.u32 + -180, r19.u32);
	// lwz r18,192(r15)
	r18.u64 = REX_LOAD_U32(r15.u32 + 192);
	// lwz r30,252(r15)
	r30.u64 = REX_LOAD_U32(r15.u32 + 252);
	// lwz r29,256(r15)
	r29.u64 = REX_LOAD_U32(r15.u32 + 256);
	// stw r11,208(r14)
	REX_STORE_U32(r14.u32 + 208, ctx.r11.u32);
	// stw r10,216(r14)
	REX_STORE_U32(r14.u32 + 216, ctx.r10.u32);
	// stw r9,224(r14)
	REX_STORE_U32(r14.u32 + 224, ctx.r9.u32);
	// ld r19,-176(r1)
	r19.u64 = REX_LOAD_U64(ctx.r1.u32 + -176);
	// std r17,-176(r1)
	REX_STORE_U64(ctx.r1.u32 + -176, r17.u64);
	// lwz r16,-188(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -188);
	// stw r8,232(r14)
	REX_STORE_U32(r14.u32 + 232, ctx.r8.u32);
	// lwz r6,-192(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -192);
	// stw r4,-192(r1)
	REX_STORE_U32(ctx.r1.u32 + -192, ctx.r4.u32);
	// stw r7,240(r14)
	REX_STORE_U32(r14.u32 + 240, ctx.r7.u32);
	// stw r16,-188(r1)
	REX_STORE_U32(ctx.r1.u32 + -188, r16.u32);
	// stw r3,272(r14)
	REX_STORE_U32(r14.u32 + 272, ctx.r3.u32);
	// stw r6,-184(r1)
	REX_STORE_U32(ctx.r1.u32 + -184, ctx.r6.u32);
	// stw r31,280(r14)
	REX_STORE_U32(r14.u32 + 280, r31.u32);
	// std r29,-160(r1)
	REX_STORE_U64(ctx.r1.u32 + -160, r29.u64);
	// std r30,-168(r1)
	REX_STORE_U64(ctx.r1.u32 + -168, r30.u64);
	// stw r28,304(r14)
	REX_STORE_U32(r14.u32 + 304, r28.u32);
	// stw r27,312(r14)
	REX_STORE_U32(r14.u32 + 312, r27.u32);
	// stw r26,320(r14)
	REX_STORE_U32(r14.u32 + 320, r26.u32);
	// stw r25,328(r14)
	REX_STORE_U32(r14.u32 + 328, r25.u32);
	// stw r24,336(r14)
	REX_STORE_U32(r14.u32 + 336, r24.u32);
	// stw r23,344(r14)
	REX_STORE_U32(r14.u32 + 344, r23.u32);
	// stw r22,352(r14)
	REX_STORE_U32(r14.u32 + 352, r22.u32);
	// stw r21,360(r14)
	REX_STORE_U32(r14.u32 + 360, r21.u32);
	// stw r20,368(r14)
	REX_STORE_U32(r14.u32 + 368, r20.u32);
	// stw r19,376(r14)
	REX_STORE_U32(r14.u32 + 376, r19.u32);
	// stw r18,384(r14)
	REX_STORE_U32(r14.u32 + 384, r18.u32);
	// lwz r16,208(r15)
	r16.u64 = REX_LOAD_U32(r15.u32 + 208);
	// lwz r11,212(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 212);
	// lwz r10,216(r15)
	ctx.r10.u64 = REX_LOAD_U32(r15.u32 + 216);
	// lwz r5,-188(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -188);
	// lwz r9,220(r15)
	ctx.r9.u64 = REX_LOAD_U32(r15.u32 + 220);
	// lwz r17,-184(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -184);
	// lwz r8,224(r15)
	ctx.r8.u64 = REX_LOAD_U32(r15.u32 + 224);
	// lwz r7,228(r15)
	ctx.r7.u64 = REX_LOAD_U32(r15.u32 + 228);
	// stw r5,-188(r1)
	REX_STORE_U32(ctx.r1.u32 + -188, ctx.r5.u32);
	// lwz r6,232(r15)
	ctx.r6.u64 = REX_LOAD_U32(r15.u32 + 232);
	// stw r17,392(r14)
	REX_STORE_U32(r14.u32 + 392, r17.u32);
	// lwz r5,236(r15)
	ctx.r5.u64 = REX_LOAD_U32(r15.u32 + 236);
	// lwz r4,240(r15)
	ctx.r4.u64 = REX_LOAD_U32(r15.u32 + 240);
	// lwz r3,244(r15)
	ctx.r3.u64 = REX_LOAD_U32(r15.u32 + 244);
	// lwz r31,248(r15)
	r31.u64 = REX_LOAD_U32(r15.u32 + 248);
	// lwz r29,308(r15)
	r29.u64 = REX_LOAD_U32(r15.u32 + 308);
	// lwz r30,312(r15)
	r30.u64 = REX_LOAD_U32(r15.u32 + 312);
	// lwz r28,260(r15)
	r28.u64 = REX_LOAD_U32(r15.u32 + 260);
	// lwz r27,264(r15)
	r27.u64 = REX_LOAD_U32(r15.u32 + 264);
	// lwz r26,268(r15)
	r26.u64 = REX_LOAD_U32(r15.u32 + 268);
	// lwz r25,272(r15)
	r25.u64 = REX_LOAD_U32(r15.u32 + 272);
	// lwz r24,276(r15)
	r24.u64 = REX_LOAD_U32(r15.u32 + 276);
	// lwz r23,280(r15)
	r23.u64 = REX_LOAD_U32(r15.u32 + 280);
	// lwz r22,284(r15)
	r22.u64 = REX_LOAD_U32(r15.u32 + 284);
	// lwz r21,288(r15)
	r21.u64 = REX_LOAD_U32(r15.u32 + 288);
	// lwz r20,292(r15)
	r20.u64 = REX_LOAD_U32(r15.u32 + 292);
	// lwz r19,296(r15)
	r19.u64 = REX_LOAD_U32(r15.u32 + 296);
	// lwz r18,300(r15)
	r18.u64 = REX_LOAD_U32(r15.u32 + 300);
	// lwz r17,-188(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -188);
	// stw r17,400(r14)
	REX_STORE_U32(r14.u32 + 400, r17.u32);
	// lwz r17,-192(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -192);
	// stw r17,408(r14)
	REX_STORE_U32(r14.u32 + 408, r17.u32);
	// stw r29,-184(r1)
	REX_STORE_U32(ctx.r1.u32 + -184, r29.u32);
	// stw r30,-188(r1)
	REX_STORE_U32(ctx.r1.u32 + -188, r30.u32);
	// lwz r17,-180(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -180);
	// stw r11,424(r14)
	REX_STORE_U32(r14.u32 + 424, ctx.r11.u32);
	// stw r10,432(r14)
	REX_STORE_U32(r14.u32 + 432, ctx.r10.u32);
	// stw r16,416(r14)
	REX_STORE_U32(r14.u32 + 416, r16.u32);
	// rotlwi r16,r17,0
	r16.u64 = __builtin_rotateleft32(r17.u32, 0);
	// ld r30,-168(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// stw r17,-180(r1)
	REX_STORE_U32(ctx.r1.u32 + -180, r17.u32);
	// stw r16,608(r14)
	REX_STORE_U32(r14.u32 + 608, r16.u32);
	// ld r29,-160(r1)
	r29.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// stw r9,440(r14)
	REX_STORE_U32(r14.u32 + 440, ctx.r9.u32);
	// stw r8,448(r14)
	REX_STORE_U32(r14.u32 + 448, ctx.r8.u32);
	// stw r7,456(r14)
	REX_STORE_U32(r14.u32 + 456, ctx.r7.u32);
	// stw r6,464(r14)
	REX_STORE_U32(r14.u32 + 464, ctx.r6.u32);
	// stw r5,472(r14)
	REX_STORE_U32(r14.u32 + 472, ctx.r5.u32);
	// stw r4,480(r14)
	REX_STORE_U32(r14.u32 + 480, ctx.r4.u32);
	// stw r3,488(r14)
	REX_STORE_U32(r14.u32 + 488, ctx.r3.u32);
	// stw r31,496(r14)
	REX_STORE_U32(r14.u32 + 496, r31.u32);
	// stw r30,504(r14)
	REX_STORE_U32(r14.u32 + 504, r30.u32);
	// stw r29,512(r14)
	REX_STORE_U32(r14.u32 + 512, r29.u32);
	// lwz r11,-184(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -184);
	// lwz r10,-188(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -188);
	// stw r28,520(r14)
	REX_STORE_U32(r14.u32 + 520, r28.u32);
	// stw r27,528(r14)
	REX_STORE_U32(r14.u32 + 528, r27.u32);
	// stw r26,536(r14)
	REX_STORE_U32(r14.u32 + 536, r26.u32);
	// stw r11,-180(r1)
	REX_STORE_U32(ctx.r1.u32 + -180, ctx.r11.u32);
	// stw r10,-184(r1)
	REX_STORE_U32(ctx.r1.u32 + -184, ctx.r10.u32);
	// stw r25,544(r14)
	REX_STORE_U32(r14.u32 + 544, r25.u32);
	// stw r24,552(r14)
	REX_STORE_U32(r14.u32 + 552, r24.u32);
	// stw r23,560(r14)
	REX_STORE_U32(r14.u32 + 560, r23.u32);
	// stw r22,568(r14)
	REX_STORE_U32(r14.u32 + 568, r22.u32);
	// lwz r11,320(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 320);
	// lwz r10,324(r15)
	ctx.r10.u64 = REX_LOAD_U32(r15.u32 + 324);
	// lwz r9,328(r15)
	ctx.r9.u64 = REX_LOAD_U32(r15.u32 + 328);
	// lwz r8,332(r15)
	ctx.r8.u64 = REX_LOAD_U32(r15.u32 + 332);
	// lwz r7,336(r15)
	ctx.r7.u64 = REX_LOAD_U32(r15.u32 + 336);
	// lwz r6,340(r15)
	ctx.r6.u64 = REX_LOAD_U32(r15.u32 + 340);
	// lwz r5,344(r15)
	ctx.r5.u64 = REX_LOAD_U32(r15.u32 + 344);
	// lwz r4,348(r15)
	ctx.r4.u64 = REX_LOAD_U32(r15.u32 + 348);
	// lwz r3,352(r15)
	ctx.r3.u64 = REX_LOAD_U32(r15.u32 + 352);
	// lwz r31,356(r15)
	r31.u64 = REX_LOAD_U32(r15.u32 + 356);
	// lwz r30,360(r15)
	r30.u64 = REX_LOAD_U32(r15.u32 + 360);
	// lwz r29,364(r15)
	r29.u64 = REX_LOAD_U32(r15.u32 + 364);
	// lwz r28,368(r15)
	r28.u64 = REX_LOAD_U32(r15.u32 + 368);
	// lwz r27,372(r15)
	r27.u64 = REX_LOAD_U32(r15.u32 + 372);
	// lwz r16,-180(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -180);
	// lwz r26,376(r15)
	r26.u64 = REX_LOAD_U32(r15.u32 + 376);
	// lwz r25,380(r15)
	r25.u64 = REX_LOAD_U32(r15.u32 + 380);
	// lwz r24,384(r15)
	r24.u64 = REX_LOAD_U32(r15.u32 + 384);
	// lwz r23,388(r15)
	r23.u64 = REX_LOAD_U32(r15.u32 + 388);
	// stw r16,616(r14)
	REX_STORE_U32(r14.u32 + 616, r16.u32);
	// lwz r22,392(r15)
	r22.u64 = REX_LOAD_U32(r15.u32 + 392);
	// lwz r16,-184(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -184);
	// ld r17,-176(r1)
	r17.u64 = REX_LOAD_U64(ctx.r1.u32 + -176);
	// stw r21,576(r14)
	REX_STORE_U32(r14.u32 + 576, r21.u32);
	// stw r20,584(r14)
	REX_STORE_U32(r14.u32 + 584, r20.u32);
	// stw r19,592(r14)
	REX_STORE_U32(r14.u32 + 592, r19.u32);
	// stw r18,600(r14)
	REX_STORE_U32(r14.u32 + 600, r18.u32);
	// stw r16,624(r14)
	REX_STORE_U32(r14.u32 + 624, r16.u32);
	// stw r17,632(r14)
	REX_STORE_U32(r14.u32 + 632, r17.u32);
	// stw r11,640(r14)
	REX_STORE_U32(r14.u32 + 640, ctx.r11.u32);
	// stw r10,648(r14)
	REX_STORE_U32(r14.u32 + 648, ctx.r10.u32);
	// stw r9,656(r14)
	REX_STORE_U32(r14.u32 + 656, ctx.r9.u32);
	// stw r8,664(r14)
	REX_STORE_U32(r14.u32 + 664, ctx.r8.u32);
	// stw r7,672(r14)
	REX_STORE_U32(r14.u32 + 672, ctx.r7.u32);
	// stw r6,680(r14)
	REX_STORE_U32(r14.u32 + 680, ctx.r6.u32);
	// stw r5,688(r14)
	REX_STORE_U32(r14.u32 + 688, ctx.r5.u32);
	// stw r4,696(r14)
	REX_STORE_U32(r14.u32 + 696, ctx.r4.u32);
	// stw r3,704(r14)
	REX_STORE_U32(r14.u32 + 704, ctx.r3.u32);
	// stw r31,712(r14)
	REX_STORE_U32(r14.u32 + 712, r31.u32);
	// stw r30,720(r14)
	REX_STORE_U32(r14.u32 + 720, r30.u32);
	// stw r29,728(r14)
	REX_STORE_U32(r14.u32 + 728, r29.u32);
	// stw r28,736(r14)
	REX_STORE_U32(r14.u32 + 736, r28.u32);
	// stw r27,744(r14)
	REX_STORE_U32(r14.u32 + 744, r27.u32);
	// stw r26,752(r14)
	REX_STORE_U32(r14.u32 + 752, r26.u32);
	// stw r25,760(r14)
	REX_STORE_U32(r14.u32 + 760, r25.u32);
	// stw r24,768(r14)
	REX_STORE_U32(r14.u32 + 768, r24.u32);
	// stw r23,776(r14)
	REX_STORE_U32(r14.u32 + 776, r23.u32);
	// stw r22,784(r14)
	REX_STORE_U32(r14.u32 + 784, r22.u32);
	// b 0x822d4ea0
	return;
}

