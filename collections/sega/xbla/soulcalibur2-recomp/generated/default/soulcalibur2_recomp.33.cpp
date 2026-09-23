#include "soulcalibur2_funcs.33.h"

DEFINE_REX_FUNC(sub_820E1730) {
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
	ctx.lr = 0x820E1738;
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x820e1c50
	ctx.lr = 0x820E1754;
	sub_820E1C50(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820e1c28
	ctx.lr = 0x820E1760;
	sub_820E1C28(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bl 0x820e2128
	ctx.lr = 0x820E176C;
	sub_820E2128(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2004(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2004);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x820e17b4
	if (!ctx.cr6.lt) goto loc_820E17B4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(f31.f64, ctx.f0.f64);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// ble cr6,0x820e17a4
	if (!ctx.cr6.gt) goto loc_820E17A4;
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// lfs f0,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// b 0x820e1838
	goto loc_820E1838;
loc_820E17A4:
	// stfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// lfs f0,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// b 0x820e183c
	goto loc_820E183C;
loc_820E17B4:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x820e2290
	ctx.lr = 0x820E17C0;
	sub_820E2290(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x820e2290
	ctx.lr = 0x820E17CC;
	sub_820E2290(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820e1c50
	ctx.lr = 0x820E17DC;
	sub_820E1C50(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x820e1c28
	ctx.lr = 0x820E17E8;
	sub_820E1C28(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f11,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f10,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// fadds f8,f1,f0
	ctx.f8.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// lfs f13,2008(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2008);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,2000(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2000);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f8,f13
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fsqrts f13,f13
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fmuls f13,f11,f0
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f13,0(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// fmuls f13,f10,f0
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// fmuls f13,f9,f0
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f13,8(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// fdivs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
loc_820E1838:
	// stfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
loc_820E183C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_820EDED0) {
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
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lhz r11,30(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 30);
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// bne cr6,0x820edf04
	if (!ctx.cr6.eq) goto loc_820EDF04;
	// bl 0x82135998
	ctx.lr = 0x820EDEF4;
	sub_82135998(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x820edf04
	if (ctx.cr0.eq) goto loc_820EDF04;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x820edf14
	goto loc_820EDF14;
loc_820EDF04:
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// addi r11,r11,32336
	ctx.r11.s64 = ctx.r11.s64 + 32336;
	// lwz r11,4892(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4892);
	// lwz r3,140(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 140);
loc_820EDF14:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820F01E0) {
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
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,32336
	ctx.r11.s64 = ctx.r11.s64 + 32336;
	// lwz r11,4892(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4892);
	// lwz r11,148(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 148);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820f024c
	if (ctx.cr6.eq) goto loc_820F024C;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820f024c
	if (ctx.cr6.eq) goto loc_820F024C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f0,68(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// stfs f0,64(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stfs f0,84(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// stfs f0,76(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// bl 0x820efdb8
	ctx.lr = 0x820F0244;
	sub_820EFDB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820edf60
	ctx.lr = 0x820F024C;
	sub_820EDF60(ctx, base);
loc_820F024C:
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

DEFINE_REX_FUNC(sub_820F3480) {
	REX_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// stw r10,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// stw r10,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// stw r10,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r10.u32);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// stw r11,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820F4240) {
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
	ctx.lr = 0x820F4248;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// bl 0x820fa0d0
	ctx.lr = 0x820F4258;
	sub_820FA0D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x820f4334
	if (ctx.cr0.eq) goto loc_820F4334;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820fa0d8
	ctx.lr = 0x820F4268;
	sub_820FA0D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x820f4334
	if (ctx.cr0.eq) goto loc_820F4334;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820fa0e0
	ctx.lr = 0x820F4278;
	sub_820FA0E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x820f4334
	if (ctx.cr0.eq) goto loc_820F4334;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820fa0e8
	ctx.lr = 0x820F4288;
	sub_820FA0E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x820f4334
	if (ctx.cr0.eq) goto loc_820F4334;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820fa0f0
	ctx.lr = 0x820F4298;
	sub_820FA0F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x820f4334
	if (ctx.cr0.eq) goto loc_820F4334;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820f94e8
	ctx.lr = 0x820F42A8;
	sub_820F94E8(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820f3e90
	ctx.lr = 0x820F42B8;
	sub_820F3E90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r30,84(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x820f97b0
	ctx.lr = 0x820F42CC;
	sub_820F97B0(ctx, base);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820f4010
	ctx.lr = 0x820F42DC;
	sub_820F4010(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r29,80(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x820f9878
	ctx.lr = 0x820F42F0;
	sub_820F9878(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x820f9ad0
	ctx.lr = 0x820F4300;
	sub_820F9AD0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820f9738
	ctx.lr = 0x820F4308;
	sub_820F9738(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,5732(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 5732);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820f9a10
	ctx.lr = 0x820F431C;
	sub_820F9A10(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820f96b8
	ctx.lr = 0x820F4328;
	sub_820F96B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820f9be8
	ctx.lr = 0x820F4330;
	sub_820F9BE8(ctx, base);
	// b 0x820f4338
	goto loc_820F4338;
loc_820F4334:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_820F4338:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_820FB528) {
	REX_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lbz r11,174(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 174);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,6396(r3)
	REX_STORE_U32(ctx.r3.u32 + 6396, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820FB600) {
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
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lhz r30,2076(r3)
	r30.u64 = REX_LOAD_U16(ctx.r3.u32 + 2076);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r31,0
	r31.s64 = 0;
	// mr. r11,r30
	ctx.r11.u64 = r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lfs f8,1996(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	ctx.f8.f64 = double(temp.f32);
	// beq 0x820fb834
	if (ctx.cr0.eq) goto loc_820FB834;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x820fb658
	if (!ctx.cr6.gt) goto loc_820FB658;
	// addi r11,r3,1038
	ctx.r11.s64 = ctx.r3.s64 + 1038;
loc_820FB640:
	// lhz r8,-990(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + -990);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// sthu r8,2(r11)
	ea = 2 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r11.u32 = ea;
	// lhz r8,2076(r10)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 2076);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x820fb640
	if (ctx.cr6.lt) goto loc_820FB640;
loc_820FB658:
	// lwz r11,20(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lhz r11,606(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 606);
	// lfs f10,2008(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2008);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,1992(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1992);
	ctx.f9.f64 = double(temp.f32);
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// blt cr6,0x820fb6c4
	if (ctx.cr6.lt) goto loc_820FB6C4;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// ble cr6,0x820fb6a4
	if (!ctx.cr6.gt) goto loc_820FB6A4;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bne cr6,0x820fb6c4
	if (!ctx.cr6.eq) goto loc_820FB6C4;
	// fcmpu cr6,f1,f10
	ctx.cr6.compare(ctx.f1.f64, ctx.f10.f64);
	// bge cr6,0x820fb698
	if (!ctx.cr6.lt) goto loc_820FB698;
	// fadds f1,f1,f9
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f9.f64));
	// b 0x820fb6c4
	goto loc_820FB6C4;
loc_820FB698:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,16228(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16228);
	ctx.f0.f64 = double(temp.f32);
	// b 0x820fb6c0
	goto loc_820FB6C0;
loc_820FB6A4:
	// fcmpu cr6,f1,f10
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f10.f64);
	// bge cr6,0x820fb6b8
	if (!ctx.cr6.lt) goto loc_820FB6B8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,16232(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16232);
	ctx.f0.f64 = double(temp.f32);
	// b 0x820fb6c0
	goto loc_820FB6C0;
loc_820FB6B8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,16300(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16300);
	ctx.f0.f64 = double(temp.f32);
loc_820FB6C0:
	// fadds f1,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
loc_820FB6C4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f13,2000(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,16172(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16172);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,2388(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 2388);
	ctx.f12.f64 = double(temp.f32);
loc_820FB6DC:
	// lhz r9,2076(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 2076);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x820fb7d0
	if (ctx.cr0.eq) goto loc_820FB7D0;
	// clrlwi r4,r31,16
	ctx.r4.u64 = r31.u32 & 0xFFFF;
	// addi r6,r10,48
	ctx.r6.s64 = ctx.r10.s64 + 48;
loc_820FB6F8:
	// lhz r9,0(r6)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r6.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// lwz r8,40(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// mulli r7,r7,48
	ctx.r7.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(48));
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lhz r8,40(r8)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r8.u32 + 40);
	// extsw r8,r8
	ctx.r8.s64 = ctx.r8.s32;
	// std r8,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// bne cr6,0x820fb790
	if (!ctx.cr6.eq) goto loc_820FB790;
	// cmplwi cr6,r5,32
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 32, ctx.xer);
	// beq cr6,0x820fb784
	if (ctx.cr6.eq) goto loc_820FB784;
	// cmplwi cr6,r5,16
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 16, ctx.xer);
	// beq cr6,0x820fb784
	if (ctx.cr6.eq) goto loc_820FB784;
	// fcmpu cr6,f1,f11
	ctx.cr6.compare(ctx.f1.f64, ctx.f11.f64);
	// bge cr6,0x820fb774
	if (!ctx.cr6.lt) goto loc_820FB774;
	// fsubs f7,f0,f1
	ctx.f7.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// fabs f7,f7
	ctx.f7.u64 = ctx.f7.u64 & ~0x8000000000000000;
	// fcmpu cr6,f7,f13
	ctx.cr6.compare(ctx.f7.f64, ctx.f13.f64);
	// ble cr6,0x820fb7a4
	if (!ctx.cr6.gt) goto loc_820FB7A4;
	// fcmpu cr6,f1,f10
	ctx.cr6.compare(ctx.f1.f64, ctx.f10.f64);
	// bgt cr6,0x820fb7bc
	if (ctx.cr6.gt) goto loc_820FB7BC;
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bgt cr6,0x820fb7bc
	if (ctx.cr6.gt) goto loc_820FB7BC;
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// ble cr6,0x820fb7bc
	if (!ctx.cr6.gt) goto loc_820FB7BC;
	// b 0x820fb7a4
	goto loc_820FB7A4;
loc_820FB774:
	// fsubs f0,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f9
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// b 0x820fb7a0
	goto loc_820FB7A0;
loc_820FB784:
	// fcmpu cr6,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x820fb7bc
	if (!ctx.cr6.lt) goto loc_820FB7BC;
	// b 0x820fb7a4
	goto loc_820FB7A4;
loc_820FB790:
	// fsubs f0,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// fadds f7,f8,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 + ctx.f9.f64));
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f7
	ctx.cr6.compare(ctx.f0.f64, ctx.f7.f64);
loc_820FB7A0:
	// bgt cr6,0x820fb7bc
	if (ctx.cr6.gt) goto loc_820FB7BC;
loc_820FB7A4:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// addi r8,r11,24
	ctx.r8.s64 = ctx.r11.s64 + 24;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sthx r9,r8,r10
	REX_STORE_U16(ctx.r8.u32 + ctx.r10.u32, ctx.r9.u16);
loc_820FB7BC:
	// lhz r9,2076(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 2076);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r6,r6,2
	ctx.r6.s64 = ctx.r6.s64 + 2;
	// cmpw cr6,r3,r9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x820fb6f8
	if (ctx.cr6.lt) goto loc_820FB6F8;
loc_820FB7D0:
	// clrlwi. r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// sth r11,2076(r10)
	REX_STORE_U16(ctx.r10.u32 + 2076, ctx.r11.u16);
	// bne 0x820fb834
	if (!ctx.cr0.eq) goto loc_820FB834;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x820fa248
	ctx.lr = 0x820FB7E4;
	sub_820FA248(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x820fb834
	if (ctx.cr0.eq) goto loc_820FB834;
	// clrlwi r8,r31,16
	ctx.r8.u64 = r31.u32 & 0xFFFF;
	// cmplwi cr6,r8,4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 4, ctx.xer);
	// bge cr6,0x820fb834
	if (!ctx.cr6.lt) goto loc_820FB834;
	// clrlwi. r9,r30,16
	ctx.r9.u64 = r30.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// sth r30,2076(r10)
	REX_STORE_U16(ctx.r10.u32 + 2076, r30.u16);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x820fb824
	if (ctx.cr0.eq) goto loc_820FB824;
	// addi r9,r10,46
	ctx.r9.s64 = ctx.r10.s64 + 46;
loc_820FB80C:
	// lhz r7,994(r9)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r9.u32 + 994);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sthu r7,2(r9)
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r7.u16);
	ctx.r9.u32 = ea;
	// lhz r7,2076(r10)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + 2076);
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x820fb80c
	if (ctx.cr6.lt) goto loc_820FB80C;
loc_820FB824:
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// fadds f8,f8,f10
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f8.f64 + ctx.f10.f64));
	// clrlwi r31,r11,16
	r31.u64 = ctx.r11.u32 & 0xFFFF;
	// b 0x820fb6dc
	goto loc_820FB6DC;
loc_820FB834:
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

DEFINE_REX_FUNC(sub_82107538) {
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
	ctx.lr = 0x8210754C;
	sub_82106650(ctx, base);
	// lis r10,-32170
	ctx.r10.s64 = -2108293120;
	// li r11,14
	ctx.r11.s64 = 14;
	// addi r31,r10,22960
	r31.s64 = ctx.r10.s64 + 22960;
	// li r4,22
	ctx.r4.s64 = 22;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// bl 0x82106c48
	ctx.lr = 0x82107568;
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
	ctx.lr = 0x8210757C;
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

DEFINE_REX_FUNC(sub_82108EB0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// mulli r11,r11,276
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(276));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,228(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 228);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82108f04
	if (!ctx.cr6.eq) goto loc_82108F04;
	// lwz r11,280(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 280);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8210909c
	if (!ctx.cr6.eq) goto loc_8210909C;
loc_82108F04:
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8210909c
	if (ctx.cr6.eq) goto loc_8210909C;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// addi r6,r8,27904
	ctx.r6.s64 = ctx.r8.s64 + 27904;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r10,26608
	ctx.r8.s64 = ctx.r10.s64 + 26608;
	// lwz r3,-32480(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821f7d50
	ctx.lr = 0x82108F3C;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82108f58
	if (ctx.cr0.eq) goto loc_82108F58;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,31764
	ctx.r11.s64 = ctx.r11.s64 + 31764;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82108f5c
	goto loc_82108F5C;
loc_82108F58:
	// li r31,0
	r31.s64 = 0;
loc_82108F5C:
	// fctiwz f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(f31.f64) ? int64_t(0x80000000U) : (f31.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&f31.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,2000(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2000);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f31,f13
	ctx.f13.f64 = double(float(f31.f64 - ctx.f13.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82108f94
	if (!ctx.cr6.gt) goto loc_82108F94;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82108F94:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r11,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r11.u32);
	// lfs f13,2344(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2344);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f30,f13
	ctx.f13.f64 = double(float(f30.f64 * ctx.f13.f64));
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82108fd4
	if (!ctx.cr6.gt) goto loc_82108FD4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82108FD4:
	// stw r11,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r11.u32);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// addi r3,r11,-7072
	ctx.r3.s64 = ctx.r11.s64 + -7072;
	// addis r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 65536;
	// addi r4,r11,3696
	ctx.r4.s64 = ctx.r11.s64 + 3696;
	// bl 0x820fef70
	ctx.lr = 0x82108FEC;
	sub_820FEF70(ctx, base);
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 24);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82109014
	if (ctx.cr6.eq) goto loc_82109014;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,27900(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 27900);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82109024
	goto loc_82109024;
loc_82109014:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,27896(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 27896);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2024(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2024);
	ctx.f13.f64 = double(temp.f32);
loc_82109024:
	// lis r10,-32170
	ctx.r10.s64 = -2108293120;
	// stfs f0,100(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 100, temp.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stfs f13,96(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 96, temp.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lwz r11,23640(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 23640);
	// li r5,255
	ctx.r5.s64 = 255;
	// lfs f13,16788(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 16788);
	ctx.f13.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// extsw r3,r11
	ctx.r3.s64 = ctx.r11.s32;
	// stb r5,108(r31)
	REX_STORE_U8(r31.u32 + 108, ctx.r5.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lfs f12,27892(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 27892);
	ctx.f12.f64 = double(temp.f32);
	// std r3,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// subf r9,r11,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r11.u64;
	// xoris r8,r11,32768
	ctx.r8.u64 = ctx.r11.u64 ^ 2147483648;
	// frsp f11,f0
	ctx.f11.f64 = double(float(ctx.f0.f64));
	// lfs f0,2340(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 2340);
	ctx.f0.f64 = double(temp.f32);
	// stw r4,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r4.u32);
	// addc r9,r9,r8
	ctx.xer.ca = ctx.r9.u32 + ctx.r8.u32 < ctx.r9.u32;
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stfs f0,92(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 92, temp.u32);
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	// stw r11,23640(r10)
	REX_STORE_U32(ctx.r10.u32 + 23640, ctx.r11.u32);
	// fmadds f0,f11,f13,f12
	ctx.f0.f64 = double(float(std::fma(ctx.f11.f64, ctx.f13.f64, ctx.f12.f64)));
	// stfs f0,104(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 104, temp.u32);
loc_8210909C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

DEFINE_REX_FUNC(sub_82113FD0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82113FD8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lwz r31,-32480(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// bl 0x8212c6a0
	ctx.lr = 0x82113FE8;
	sub_8212C6A0(ctx, base);
	// lis r9,-32170
	ctx.r9.s64 = -2108293120;
	// lis r8,-32170
	ctx.r8.s64 = -2108293120;
	// li r29,0
	r29.s64 = 0;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// stb r29,23957(r9)
	REX_STORE_U8(ctx.r9.u32 + 23957, r29.u8);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// stb r29,23956(r8)
	REX_STORE_U8(ctx.r8.u32 + 23956, r29.u8);
	// lwz r11,176(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 176);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82114018
	if (ctx.cr6.eq) goto loc_82114018;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,36(r11)
	REX_STORE_U8(ctx.r11.u32 + 36, ctx.r10.u8);
loc_82114018:
	// lwz r30,200(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 200);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82114038
	if (ctx.cr6.eq) goto loc_82114038;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820e48c0
	ctx.lr = 0x8211402C;
	sub_820E48C0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c80a8
	ctx.lr = 0x82114034;
	sub_822C80A8(ctx, base);
	// stw r29,200(r31)
	REX_STORE_U32(r31.u32 + 200, r29.u32);
loc_82114038:
	// lwz r30,204(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 204);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82114058
	if (ctx.cr6.eq) goto loc_82114058;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820e48c0
	ctx.lr = 0x8211404C;
	sub_820E48C0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c80a8
	ctx.lr = 0x82114054;
	sub_822C80A8(ctx, base);
	// stw r29,204(r31)
	REX_STORE_U32(r31.u32 + 204, r29.u32);
loc_82114058:
	// lwz r30,208(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 208);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82114078
	if (ctx.cr6.eq) goto loc_82114078;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820e48c0
	ctx.lr = 0x8211406C;
	sub_820E48C0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c80a8
	ctx.lr = 0x82114074;
	sub_822C80A8(ctx, base);
	// stw r29,208(r31)
	REX_STORE_U32(r31.u32 + 208, r29.u32);
loc_82114078:
	// lwz r30,212(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 212);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82114098
	if (ctx.cr6.eq) goto loc_82114098;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820e48c0
	ctx.lr = 0x8211408C;
	sub_820E48C0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c80a8
	ctx.lr = 0x82114094;
	sub_822C80A8(ctx, base);
	// stw r29,212(r31)
	REX_STORE_U32(r31.u32 + 212, r29.u32);
loc_82114098:
	// lwz r30,216(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 216);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x821140b8
	if (ctx.cr6.eq) goto loc_821140B8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820e48c0
	ctx.lr = 0x821140AC;
	sub_820E48C0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c80a8
	ctx.lr = 0x821140B4;
	sub_822C80A8(ctx, base);
	// stw r29,216(r31)
	REX_STORE_U32(r31.u32 + 216, r29.u32);
loc_821140B8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82117648) {
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
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// lis r7,-32239
	ctx.r7.s64 = -2112815104;
	// addi r6,r8,31888
	ctx.r6.s64 = ctx.r8.s64 + 31888;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,-32480(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// addi r8,r10,28472
	ctx.r8.s64 = ctx.r10.s64 + 28472;
	// addi r7,r7,28368
	ctx.r7.s64 = ctx.r7.s64 + 28368;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821f7d50
	ctx.lr = 0x82117684;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82117698
	if (ctx.cr0.eq) goto loc_82117698;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,31764
	ctx.r11.s64 = ctx.r11.s64 + 31764;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_82117698:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82118360) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,-28236(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -28236);
	// lfs f31,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	f31.f64 = double(temp.f32);
	// fmr f30,f31
	f30.f64 = f31.f64;
	// lwz r3,20(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x82202070
	ctx.lr = 0x821183A0;
	sub_82202070(ctx, base);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// addi r31,r11,-7072
	r31.s64 = ctx.r11.s64 + -7072;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82118404
	if (ctx.cr6.eq) goto loc_82118404;
	// lbz r11,103(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 103);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82118404
	if (ctx.cr0.eq) goto loc_82118404;
	// lwz r11,10532(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 10532);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r9,10536(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 10536);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r8,10540(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 10540);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r7,10544(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 10544);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r6,r31,10532
	ctx.r6.s64 = r31.s64 + 10532;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r8,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// stw r7,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r7.u32);
	// bl 0x820e1ba8
	ctx.lr = 0x821183F8;
	sub_820E1BA8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820e22e8
	ctx.lr = 0x82118400;
	sub_820E22E8(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
loc_82118404:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,3708
	ctx.r11.u64 = ctx.r11.u64 | 3708;
	// lwzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82118474
	if (ctx.cr6.eq) goto loc_82118474;
	// lbz r11,103(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 103);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82118474
	if (ctx.cr0.eq) goto loc_82118474;
	// addis r11,r31,1
	ctx.r11.s64 = r31.s64 + 65536;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r8,r11,14228
	ctx.r8.s64 = ctx.r11.s64 + 14228;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r9,14228(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 14228);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r8,14232(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 14232);
	// lwz r7,14236(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 14236);
	// lwz r11,14240(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 14240);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r7,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// stw r11,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// bl 0x820e1ba8
	ctx.lr = 0x82118460;
	sub_820E1BA8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820e22e8
	ctx.lr = 0x82118468;
	sub_820E22E8(ctx, base);
	// fcmpu cr6,f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f30.f64, ctx.f1.f64);
	// bge cr6,0x82118474
	if (!ctx.cr6.lt) goto loc_82118474;
	// fmr f30,f1
	f30.f64 = ctx.f1.f64;
loc_82118474:
	// fcmpu cr6,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f30.f64, f31.f64);
	// bne cr6,0x82118488
	if (!ctx.cr6.eq) goto loc_82118488;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x820e22e8
	ctx.lr = 0x82118484;
	sub_820E22E8(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
loc_82118488:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f31.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	f31.f64 = double(temp.f32);
	// lfs f3,32100(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32100);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f1,f30,f31
	ctx.f1.f64 = double(float(f30.f64 - f31.f64));
	// bl 0x82204ae0
	ctx.lr = 0x821184A4;
	sub_82204AE0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,80(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,16628(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16628);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f0,16272(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16272);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f30,f1,f0,f13
	f30.f64 = double(float(std::fma(ctx.f1.f64, ctx.f0.f64, ctx.f13.f64)));
	// bl 0x821fef70
	ctx.lr = 0x821184C4;
	sub_821FEF70(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,84(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// lfs f0,26528(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 26528);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f1,f1,f0,f13
	ctx.f1.f64 = double(float(std::fma(ctx.f1.f64, ctx.f0.f64, ctx.f13.f64)));
	// bl 0x82204b00
	ctx.lr = 0x821184DC;
	sub_82204B00(ctx, base);
	// stfs f1,84(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r30.u32 + 84, temp.u32);
	// bl 0x820e0028
	ctx.lr = 0x821184E4;
	sub_820E0028(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f13,16228(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16228);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-8492(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -8492);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,16908(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16908);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f13,f1,f13,f12
	ctx.f13.f64 = double(float(std::fma(ctx.f1.f64, ctx.f13.f64, ctx.f12.f64)));
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(f30.f64, ctx.f0.f64);
	// blt cr6,0x82118510
	if (ctx.cr6.lt) goto loc_82118510;
	// fmr f12,f30
	ctx.f12.f64 = f30.f64;
	// b 0x82118514
	goto loc_82118514;
loc_82118510:
	// fmr f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f0.f64;
loc_82118514:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f11,15624(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15624);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// ble cr6,0x82118528
	if (!ctx.cr6.gt) goto loc_82118528;
	// fmr f12,f11
	ctx.f12.f64 = ctx.f11.f64;
loc_82118528:
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// fadds f13,f13,f30
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 + f30.f64));
	// lwz r10,504(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 504);
	// stfs f12,96(r10)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r10.u32 + 96, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82118544
	if (ctx.cr6.lt) goto loc_82118544;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82118544:
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x82118550
	if (!ctx.cr6.gt) goto loc_82118550;
	// fmr f0,f11
	ctx.f0.f64 = ctx.f11.f64;
loc_82118550:
	// lwz r11,504(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 504);
	// stfs f0,100(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 100, temp.u32);
	// stfs f30,80(r30)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r30.u32 + 80, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
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

DEFINE_REX_FUNC(sub_8211FF18) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e6c
	ctx.lr = 0x8211FF20;
	// stfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -104, f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lwz r11,-32480(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// addi r29,r11,80
	r29.s64 = ctx.r11.s64 + 80;
	// lbz r10,203(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 203);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x8211ff4c
	if (!ctx.cr0.eq) goto loc_8211FF4C;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r10,40(r11)
	REX_STORE_U16(ctx.r11.u32 + 40, ctx.r10.u16);
	// b 0x821200d0
	goto loc_821200D0;
loc_8211FF4C:
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// li r23,0
	r23.s64 = 0;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// addi r3,r11,84
	ctx.r3.s64 = ctx.r11.s64 + 84;
	// bl 0x821d6398
	ctx.lr = 0x8211FF60;
	sub_821D6398(ctx, base);
	// lhz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 8);
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// li r25,0
	r25.s64 = 0;
	// rlwinm r22,r10,27,31,31
	r22.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821200d0
	if (ctx.cr0.eq) goto loc_821200D0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// li r28,0
	r28.s64 = 0;
	// li r26,0
	r26.s64 = 0;
	// lis r24,-32170
	r24.s64 = -2108293120;
	// lfs f31,2008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2008);
	f31.f64 = double(temp.f32);
	// addi r27,r11,30008
	r27.s64 = ctx.r11.s64 + 30008;
loc_8211FF94:
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
	// add r31,r11,r26
	r31.u64 = ctx.r11.u64 + r26.u64;
	// lbz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 76);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821200a8
	if (ctx.cr0.eq) goto loc_821200A8;
	// li r23,1
	r23.s64 = 1;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// beq cr6,0x821200a8
	if (ctx.cr6.eq) goto loc_821200A8;
	// lwz r11,160(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 160);
	// lfs f0,136(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// add r30,r11,r28
	r30.u64 = ctx.r11.u64 + r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lfs f13,12(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 12, temp.u32);
	// fctiwz f0,f13
	ctx.f0.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r21,84(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x820e1b70
	ctx.lr = 0x8211FFE8;
	sub_820E1B70(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r5,r29,64
	ctx.r5.s64 = r29.s64 + 64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820e1b70
	ctx.lr = 0x8211FFF8;
	sub_820E1B70(ctx, base);
	// addi r11,r27,4
	ctx.r11.s64 = r27.s64 + 4;
	// lfs f13,148(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// add r30,r28,r11
	r30.u64 = r28.u64 + ctx.r11.u64;
	// lfs f0,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 8, temp.u32);
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lbz r11,87(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 87);
	// stb r11,35(r31)
	REX_STORE_U8(r31.u32 + 35, ctx.r11.u8);
	// lha r11,116(r29)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r29.u32 + 116));
	// cmpw cr6,r21,r11
	ctx.cr6.compare<int32_t>(r21.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82120034
	if (ctx.cr6.lt) goto loc_82120034;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,76(r31)
	REX_STORE_U8(r31.u32 + 76, ctx.r11.u8);
loc_82120034:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r3,29428(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 29428);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8211e968
	ctx.lr = 0x82120044;
	sub_8211E968(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f1,168(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 168);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e1cc0
	ctx.lr = 0x82120054;
	sub_820E1CC0(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820e1b28
	ctx.lr = 0x82120064;
	sub_820E1B28(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x820e22e8
	ctx.lr = 0x8212006C;
	sub_820E22E8(ctx, base);
	// fmuls f1,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 * f31.f64));
	// stfs f1,0(r30)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r30.u32 + 0, temp.u32);
	// bl 0x820e0088
	ctx.lr = 0x82120078;
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
	// lfs f1,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e0088
	ctx.lr = 0x8212008C;
	sub_820E0088(ctx, base);
	// lfs f0,88(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 68, temp.u32);
	// lfs f0,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,4(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 4, temp.u32);
loc_821200A8:
	// lhz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 8);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r26,r26,80
	r26.s64 = r26.s64 + 80;
	// addi r28,r28,16
	r28.s64 = r28.s64 + 16;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8211ff94
	if (ctx.cr6.lt) goto loc_8211FF94;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// beq cr6,0x821200d0
	if (ctx.cr6.eq) goto loc_821200D0;
	// lbz r3,24(r29)
	ctx.r3.u64 = REX_LOAD_U8(r29.u32 + 24);
	// bl 0x8218c0a8
	ctx.lr = 0x821200D0;
	sub_8218C0A8(ctx, base);
loc_821200D0:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x822d4ebc
	return;
}

DEFINE_REX_FUNC(sub_82126EE8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// fabs f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f13,-30108(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -30108);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,1992(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f0,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// blt cr6,0x82126f30
	if (ctx.cr6.lt) goto loc_82126F30;
	// fabs f0,f1
	ctx.f0.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// ble cr6,0x82126f28
	if (!ctx.cr6.gt) goto loc_82126F28;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
	// b 0x82126f30
	goto loc_82126F30;
loc_82126F28:
	// fabs f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
loc_82126F30:
	// fcmpu cr6,f0,f2
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f2.f64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// bge cr6,0x82126f48
	if (!ctx.cr6.lt) goto loc_82126F48;
	// lfs f13,2384(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2384);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f13,f13,f2
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f2.f64));
	// b 0x82126fd4
	goto loc_82126FD4;
loc_82126F48:
	// lfs f11,2384(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2384);
	ctx.f11.f64 = double(temp.f32);
	// fadds f13,f2,f11
	ctx.f13.f64 = double(float(ctx.f2.f64 + ctx.f11.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82126f60
	if (!ctx.cr6.lt) goto loc_82126F60;
	// fsubs f13,f11,f2
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f2.f64));
	// b 0x82126fb4
	goto loc_82126FB4;
loc_82126F60:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,16308(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16308);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f2,f13
	ctx.f13.f64 = double(float(ctx.f2.f64 + ctx.f13.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82126f94
	if (!ctx.cr6.lt) goto loc_82126F94;
	// fsubs f12,f0,f2
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f2.f64));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,-30112(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -30112);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16264(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16264);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// blr 
	return;
loc_82126F94:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,2352(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2352);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fadds f13,f2,f13
	ctx.f13.f64 = double(float(ctx.f2.f64 + ctx.f13.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// lfs f13,16628(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16628);
	ctx.f13.f64 = double(temp.f32);
	// bge cr6,0x82126fbc
	if (!ctx.cr6.lt) goto loc_82126FBC;
	// fsubs f13,f13,f2
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f2.f64));
loc_82126FB4:
	// fadds f1,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// blr 
	return;
loc_82126FBC:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmadds f0,f0,f11,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f11.f64, ctx.f13.f64)));
	// lfs f12,2356(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2356);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f12,f2
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f2.f64));
	// fsubs f0,f0,f2
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f2.f64));
	// fdivs f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 / ctx.f13.f64));
loc_82126FD4:
	// fmuls f1,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8212AAA0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// addi r11,r10,-23680
	ctx.r11.s64 = ctx.r10.s64 + -23680;
	// mulli r10,r9,304
	ctx.r10.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(304));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,300(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 300);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r10,24
	ctx.r10.s64 = 24;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8212AAD4:
	// li r9,-1
	ctx.r9.s64 = -1;
	// sth r10,6(r11)
	REX_STORE_U16(ctx.r11.u32 + 6, ctx.r10.u16);
	// sth r10,8(r11)
	REX_STORE_U16(ctx.r11.u32 + 8, ctx.r10.u16);
	// sth r9,4(r11)
	REX_STORE_U16(ctx.r11.u32 + 4, ctx.r9.u16);
	// stwu r10,12(r11)
	ea = 12 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8212aad4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8212AAD4;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8212B920) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x8212b948
	if (ctx.cr6.eq) goto loc_8212B948;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,5
	ctx.r5.s64 = 5;
	// b 0x8212b950
	goto loc_8212B950;
loc_8212B948:
	// li r4,3
	ctx.r4.s64 = 3;
	// li r5,0
	ctx.r5.s64 = 0;
loc_8212B950:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// clrlwi r6,r9,26
	ctx.r6.u64 = ctx.r9.u32 & 0x3F;
	// beq cr6,0x8212b97c
	if (ctx.cr6.eq) goto loc_8212B97C;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// lis r7,-32165
	ctx.r7.s64 = -2107965440;
	// mulli r10,r10,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(12));
	// addi r11,r11,20148
	ctx.r11.s64 = ctx.r11.s64 + 20148;
	// addi r3,r7,15284
	ctx.r3.s64 = ctx.r7.s64 + 15284;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x822042f8
	sub_822042F8(ctx, base);
	return;
loc_8212B97C:
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r11,15284
	ctx.r3.s64 = ctx.r11.s64 + 15284;
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x822042f8
	sub_822042F8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8212C838) {
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
	// lis r11,-32175
	ctx.r11.s64 = -2108620800;
	// addi r4,r11,10792
	ctx.r4.s64 = ctx.r11.s64 + 10792;
	// lwz r3,4(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8212c8a0
	if (ctx.cr6.eq) goto loc_8212C8A0;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,31920
	ctx.r11.s64 = ctx.r11.s64 + 31920;
	// lis r9,-32169
	ctx.r9.s64 = -2108227584;
	// lis r8,-32175
	ctx.r8.s64 = -2108620800;
	// lfs f0,31220(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 31220);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r8,-5720
	ctx.r10.s64 = ctx.r8.s64 + -5720;
	// lwa r11,76(r11)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(ctx.r11.u32 + 76));
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lfs f13,-22928(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -22928);
	ctx.f13.f64 = double(temp.f32);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// lfs f12,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmuls f1,f0,f12
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// bl 0x822ccf20
	ctx.lr = 0x8212C8A0;
	sub_822CCF20(ctx, base);
loc_8212C8A0:
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

DEFINE_REX_FUNC(sub_8212F440) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lwz r11,-32480(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// lwz r3,80(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x8212f370
	sub_8212F370(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8212FCA8) {
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
	// addi r11,r11,-25184
	ctx.r11.s64 = ctx.r11.s64 + -25184;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x821e2fd0
	ctx.lr = 0x8212FCD4;
	sub_821E2FD0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8212fce4
	if (ctx.cr0.eq) goto loc_8212FCE4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c80a8
	ctx.lr = 0x8212FCE4;
	sub_822C80A8(ctx, base);
loc_8212FCE4:
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

DEFINE_REX_FUNC(sub_821301E0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r10,8
	ctx.r10.s64 = 8;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r3,100
	ctx.r9.s64 = ctx.r3.s64 + 100;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lfs f0,1996(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stfs f0,84(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// stw r11,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r11,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r11,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r11,64(r3)
	REX_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stw r11,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// stw r11,72(r3)
	REX_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// stw r11,76(r3)
	REX_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// stw r11,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// stw r11,88(r3)
	REX_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// stw r11,92(r3)
	REX_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// stw r11,96(r3)
	REX_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
loc_82130250:
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x82130250
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82130250;
	// stw r11,132(r3)
	REX_STORE_U32(ctx.r3.u32 + 132, ctx.r11.u32);
	// stw r11,136(r3)
	REX_STORE_U32(ctx.r3.u32 + 136, ctx.r11.u32);
	// stw r11,140(r3)
	REX_STORE_U32(ctx.r3.u32 + 140, ctx.r11.u32);
	// stw r11,144(r3)
	REX_STORE_U32(ctx.r3.u32 + 144, ctx.r11.u32);
	// stw r11,148(r3)
	REX_STORE_U32(ctx.r3.u32 + 148, ctx.r11.u32);
	// stw r11,152(r3)
	REX_STORE_U32(ctx.r3.u32 + 152, ctx.r11.u32);
	// stw r11,156(r3)
	REX_STORE_U32(ctx.r3.u32 + 156, ctx.r11.u32);
	// stw r11,160(r3)
	REX_STORE_U32(ctx.r3.u32 + 160, ctx.r11.u32);
	// stw r11,164(r3)
	REX_STORE_U32(ctx.r3.u32 + 164, ctx.r11.u32);
	// stw r11,180(r3)
	REX_STORE_U32(ctx.r3.u32 + 180, ctx.r11.u32);
	// stw r11,176(r3)
	REX_STORE_U32(ctx.r3.u32 + 176, ctx.r11.u32);
	// stw r11,172(r3)
	REX_STORE_U32(ctx.r3.u32 + 172, ctx.r11.u32);
	// stw r11,168(r3)
	REX_STORE_U32(ctx.r3.u32 + 168, ctx.r11.u32);
	// stw r11,184(r3)
	REX_STORE_U32(ctx.r3.u32 + 184, ctx.r11.u32);
	// stw r11,200(r3)
	REX_STORE_U32(ctx.r3.u32 + 200, ctx.r11.u32);
	// stw r11,196(r3)
	REX_STORE_U32(ctx.r3.u32 + 196, ctx.r11.u32);
	// stw r11,192(r3)
	REX_STORE_U32(ctx.r3.u32 + 192, ctx.r11.u32);
	// stw r11,188(r3)
	REX_STORE_U32(ctx.r3.u32 + 188, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82133180) {
	REX_FUNC_PROLOGUE();
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// add r9,r11,r5
	ctx.r9.u64 = ctx.r11.u64 + ctx.r5.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r9,142
	ctx.r9.s64 = ctx.r9.s64 + 142;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r9,r9,r8
	ctx.r9.s64 = int16_t(REX_LOAD_U16(ctx.r9.u32 + ctx.r8.u32));
	// mulli r8,r9,24
	ctx.r8.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(24));
	// b 0x821331b4
	goto loc_821331B4;
loc_821331A8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mulli r8,r8,24
	ctx.r8.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(24));
loc_821331B4:
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lbz r8,8(r8)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + 8);
	// cmplwi cr6,r8,255
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 255, ctx.xer);
	// bne cr6,0x821331a8
	if (!ctx.cr6.eq) goto loc_821331A8;
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x821331e0
	if (!ctx.cr6.lt) goto loc_821331E0;
	// add r11,r9,r6
	ctx.r11.u64 = ctx.r9.u64 + ctx.r6.u64;
	// mulli r11,r11,24
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(24));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lha r3,10(r11)
	ctx.r3.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 10));
	// blr 
	return;
loc_821331E0:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82134288) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82134398
	if (!ctx.cr6.gt) goto loc_82134398;
	// cmpwi cr6,r4,33
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 33, ctx.xer);
	// bge cr6,0x82134398
	if (!ctx.cr6.lt) goto loc_82134398;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// lwz r11,20556(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20556);
	// lbzx r11,r11,r4
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// beq cr6,0x82134398
	if (ctx.cr6.eq) goto loc_82134398;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x82134398
	if (ctx.cr6.lt) goto loc_82134398;
	// cmpwi cr6,r5,12
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 12, ctx.xer);
	// bge cr6,0x82134398
	if (!ctx.cr6.lt) goto loc_82134398;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lbzx r11,r11,r4
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// lfs f0,26528(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 26528);
	ctx.f0.f64 = double(temp.f32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// stw r10,4(r6)
	REX_STORE_U32(ctx.r6.u32 + 4, ctx.r10.u32);
	// lfs f13,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,12(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// lfs f13,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,16(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 16, temp.u32);
	// lfs f13,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,20(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 20, temp.u32);
	// lfs f13,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,24(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 24, temp.u32);
	// lfs f13,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,28(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 28, temp.u32);
	// lfs f13,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,32(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 32, temp.u32);
	// lfs f13,28(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,36(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 36, temp.u32);
	// lfs f13,32(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,40(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 40, temp.u32);
	// lfs f13,36(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,44(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 44, temp.u32);
	// lbz r10,53(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 53);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// std r10,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,48(r6)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r6.u32 + 48, temp.u32);
	// lbz r10,54(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 54);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// std r10,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f0,-16(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,52(r6)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r6.u32 + 52, temp.u32);
	// lbz r10,57(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 57);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// sth r10,56(r6)
	REX_STORE_U16(ctx.r6.u32 + 56, ctx.r10.u16);
	// lbz r10,55(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 55);
	// stb r10,58(r6)
	REX_STORE_U8(ctx.r6.u32 + 58, ctx.r10.u8);
	// lbz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 56);
	// stb r11,59(r6)
	REX_STORE_U8(ctx.r6.u32 + 59, ctx.r11.u8);
	// blr 
	return;
loc_82134398:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f13,1992(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,4(r6)
	REX_STORE_U32(ctx.r6.u32 + 4, ctx.r11.u32);
	// lfs f0,1996(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// sth r11,56(r6)
	REX_STORE_U16(ctx.r6.u32 + 56, ctx.r11.u16);
	// lfs f12,16336(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 16336);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,12(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// stfs f13,8(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// stfs f0,20(r6)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r6.u32 + 20, temp.u32);
	// stfs f0,16(r6)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r6.u32 + 16, temp.u32);
	// stfs f0,28(r6)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r6.u32 + 28, temp.u32);
	// stfs f0,24(r6)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r6.u32 + 24, temp.u32);
	// stfs f13,36(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 36, temp.u32);
	// stfs f13,32(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 32, temp.u32);
	// stfs f12,40(r6)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r6.u32 + 40, temp.u32);
	// stfs f13,44(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 44, temp.u32);
	// stfs f0,52(r6)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r6.u32 + 52, temp.u32);
	// stfs f0,48(r6)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r6.u32 + 48, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82140540) {
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
	ctx.lr = 0x82140548;
	// stfd f29,-88(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -88, f29.u64);
	// stfd f30,-80(r1)
	REX_STORE_U64(ctx.r1.u32 + -80, f30.u64);
	// stfd f31,-72(r1)
	REX_STORE_U64(ctx.r1.u32 + -72, f31.u64);
	// stwu r1,-576(r1)
	ea = -576 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32165
	r31.s64 = -2107965440;
	// lwz r11,-32480(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + -32480);
	// addi r27,r11,80
	r27.s64 = ctx.r11.s64 + 80;
	// addi r25,r11,68
	r25.s64 = ctx.r11.s64 + 68;
	// lwz r10,68(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r11,92(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x821408d4
	if (!ctx.cr6.gt) goto loc_821408D4;
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
	// li r26,-1
	r26.s64 = -1;
	// lfs f3,26936(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 26936);
	ctx.f3.f64 = double(temp.f32);
	// lfs f29,2008(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2008);
	f29.f64 = double(temp.f32);
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// lfs f4,-23576(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -23576);
	ctx.f4.f64 = double(temp.f32);
	// lfs f2,-23580(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + -23580);
	ctx.f2.f64 = double(temp.f32);
	// fmr f5,f29
	ctx.f5.f64 = f29.f64;
	// lfs f1,-23584(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + -23584);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821e8688
	ctx.lr = 0x821405B4;
	sub_821E8688(ctx, base);
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// lis r10,-32175
	ctx.r10.s64 = -2108620800;
	// addi r9,r11,23912
	ctx.r9.s64 = ctx.r11.s64 + 23912;
	// addi r8,r10,22984
	ctx.r8.s64 = ctx.r10.s64 + 22984;
	// lwz r10,20(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// lwz r11,76(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 76);
	// lwz r9,24(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lbzx r11,r10,r8
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r8.u32);
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r10,23232
	ctx.r11.s64 = ctx.r10.s64 + 23232;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwzx r11,r9,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// clrlwi r4,r11,20
	ctx.r4.u64 = ctx.r11.u32 & 0xFFF;
	// beq cr6,0x82140600
	if (ctx.cr6.eq) goto loc_82140600;
	// rlwinm r4,r11,20,20,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xFFF;
loc_82140600:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821300e0
	ctx.lr = 0x82140608;
	sub_821300E0(ctx, base);
	// bl 0x821363f0
	ctx.lr = 0x8214060C;
	sub_821363F0(ctx, base);
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// li r8,100
	ctx.r8.s64 = 100;
	// addi r29,r11,432
	r29.s64 = ctx.r11.s64 + 432;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,220(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 220);
	// lha r11,5452(r11)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 5452));
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r9,r9,99
	ctx.r9.s64 = ctx.r9.s64 + 99;
	// divw r9,r9,r8
	ctx.r9.u64 = uint32_t((ctx.r8.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r8.s32 == -1)) ? ctx.r9.s32 / ctx.r8.s32 : 0);
	// mulli r30,r9,100
	r30.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(100));
	// ble cr6,0x8214066c
	if (!ctx.cr6.gt) goto loc_8214066C;
loc_8214065C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r30,r30,1,0,30
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8214065c
	if (ctx.cr6.lt) goto loc_8214065C;
loc_8214066C:
	// lwz r11,12(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 12);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 0);
	// addi r11,r11,90
	ctx.r11.s64 = ctx.r11.s64 + 90;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82140688
	if (!ctx.cr6.gt) goto loc_82140688;
	// bl 0x821307d0
	ctx.lr = 0x82140688;
	sub_821307D0(ctx, base);
loc_82140688:
	// andi. r11,r3,32832
	ctx.r11.u64 = ctx.r3.u64 & 32832;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821406c8
	if (ctx.cr0.eq) goto loc_821406C8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,26
	ctx.r3.s64 = 26;
	// lfs f1,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8212bc38
	ctx.lr = 0x821406A4;
	sub_8212BC38(ctx, base);
	// lwz r11,64(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821406b8
	if (ctx.cr6.eq) goto loc_821406B8;
	// lwz r10,24(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 24);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_821406B8:
	// lwz r11,-32480(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + -32480);
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r10,40(r11)
	REX_STORE_U16(ctx.r11.u32 + 40, ctx.r10.u16);
	// b 0x821406f8
	goto loc_821406F8;
loc_821406C8:
	// rlwinm. r11,r3,0,18,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x3000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821406f8
	if (ctx.cr0.eq) goto loc_821406F8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,18
	ctx.r3.s64 = 18;
	// lfs f1,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8212bc38
	ctx.lr = 0x821406E0;
	sub_8212BC38(ctx, base);
	// lwz r11,24(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 24);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,24(r27)
	REX_STORE_U32(r27.u32 + 24, ctx.r11.u32);
loc_821406F8:
	// bl 0x8212fe30
	ctx.lr = 0x821406FC;
	sub_8212FE30(ctx, base);
	// lis r3,2048
	ctx.r3.s64 = 134217728;
	// lwz r4,344(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 344);
	// ori r3,r3,20
	ctx.r3.u64 = ctx.r3.u64 | 20;
	// bl 0x820e68b8
	ctx.lr = 0x8214070C;
	sub_820E68B8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r4,-103
	ctx.r4.s64 = -6750208;
	// addi r31,r11,26976
	r31.s64 = ctx.r11.s64 + 26976;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ori r4,r4,6655
	ctx.r4.u64 = ctx.r4.u64 | 6655;
	// bl 0x821eacb0
	ctx.lr = 0x82140728;
	sub_821EACB0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x820e6af0
	ctx.lr = 0x8214073C;
	sub_820E6AF0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lfs f30,-23588(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -23588);
	f30.f64 = double(temp.f32);
	// lfs f31,15632(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15632);
	f31.f64 = double(temp.f32);
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// stfs f30,28(r1)
	temp.f32 = float(f30.f64);
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
	// bl 0x820e6e20
	ctx.lr = 0x8214076C;
	sub_820E6E20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x821eacb0
	ctx.lr = 0x82140778;
	sub_821EACB0(ctx, base);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r5,20
	ctx.r5.s64 = 20;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x820e6af0
	ctx.lr = 0x8214078C;
	sub_820E6AF0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x820e6960
	ctx.lr = 0x82140794;
	sub_820E6960(ctx, base);
	// fadds f2,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(ctx.f1.f64 + f30.f64));
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
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// bl 0x820e6e20
	ctx.lr = 0x821407B8;
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
	// beq 0x821407d8
	if (ctx.cr0.eq) goto loc_821407D8;
	// lis r28,-1
	r28.s64 = -65536;
	// ori r28,r28,255
	r28.u64 = r28.u64 | 255;
	// b 0x821407dc
	goto loc_821407DC;
loc_821407D8:
	// mr r28,r26
	r28.u64 = r26.u64;
loc_821407DC:
	// lwz r11,24(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 24);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x821407f0
	if (ctx.cr6.eq) goto loc_821407F0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
loc_821407F0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821eacb0
	ctx.lr = 0x821407F8;
	sub_821EACB0(ctx, base);
	// lis r3,2048
	ctx.r3.s64 = 134217728;
	// lwz r4,344(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 344);
	// ori r3,r3,63
	ctx.r3.u64 = ctx.r3.u64 | 63;
	// bl 0x820e68b8
	ctx.lr = 0x82140808;
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
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// lfs f2,-23592(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -23592);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// bl 0x820e6e20
	ctx.lr = 0x82140830;
	sub_820E6E20(ctx, base);
	// lwz r11,24(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 24);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82140844
	if (ctx.cr6.eq) goto loc_82140844;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
loc_82140844:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821eacb0
	ctx.lr = 0x8214084C;
	sub_821EACB0(ctx, base);
	// lis r3,2048
	ctx.r3.s64 = 134217728;
	// lwz r4,344(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 344);
	// ori r3,r3,64
	ctx.r3.u64 = ctx.r3.u64 | 64;
	// bl 0x820e68b8
	ctx.lr = 0x8214085C;
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
	// rlwinm r6,r30,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// lfs f2,-23596(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -23596);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// bl 0x820e6e20
	ctx.lr = 0x82140884;
	sub_820E6E20(ctx, base);
	// lwz r11,24(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 24);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8214089c
	if (!ctx.cr6.eq) goto loc_8214089C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,29236(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 29236);
	ctx.f0.f64 = double(temp.f32);
	// b 0x821408a4
	goto loc_821408A4;
loc_8214089C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-23600(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -23600);
	ctx.f0.f64 = double(temp.f32);
loc_821408A4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f2,f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(ctx.f0.f64 - f29.f64));
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,2
	ctx.r8.s64 = 2;
	// lfs f5,26552(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 26552);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,-23604(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -23604);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,29340(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 29340);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,30004(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 30004);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82102518
	ctx.lr = 0x821408D4;
	sub_82102518(ctx, base);
loc_821408D4:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r11.u32);
	// addi r1,r1,576
	ctx.r1.s64 = ctx.r1.s64 + 576;
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

DEFINE_REX_FUNC(sub_82156698) {
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
	ctx.lr = 0x821566AC;
	// stwu r1,-624(r1)
	ea = -624 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,112(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 112);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82156b78
	if (ctx.cr6.eq) goto loc_82156B78;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,140(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 140);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f30,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f30.f64 = double(temp.f32);
	// lfs f0,16336(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16336);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f30
	ctx.cr6.compare(ctx.f12.f64, f30.f64);
	// lfs f31,1992(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	f31.f64 = double(temp.f32);
	// lfs f13,16308(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 16308);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,208(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stfs f0,212(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stfs f31,216(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stfs f30,220(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// stfs f13,272(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 272, temp.u32);
	// stfs f13,276(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 276, temp.u32);
	// stfs f30,280(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 280, temp.u32);
	// stfs f30,284(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 284, temp.u32);
	// ble cr6,0x82156738
	if (!ctx.cr6.gt) goto loc_82156738;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2348(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2348);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// bl 0x820e0028
	ctx.lr = 0x8215671C;
	sub_820E0028(ctx, base);
	// lfs f0,140(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 140);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f12,124(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 124);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,17176(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 17176);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f13,f0,f12
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f0.f64, ctx.f12.f64)));
	// b 0x8215673c
	goto loc_8215673C;
loc_82156738:
	// lfs f0,124(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
loc_8215673C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,220(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// lfs f13,124(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,28444(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28444);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,284(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 284, temp.u32);
	// lfs f0,17064(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 17064);
	ctx.f0.f64 = double(temp.f32);
	// lfs f29,2012(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2012);
	f29.f64 = double(temp.f32);
	// fmadds f1,f13,f29,f0
	ctx.f1.f64 = double(float(std::fma(ctx.f13.f64, f29.f64, ctx.f0.f64)));
	// bl 0x820e0028
	ctx.lr = 0x8215676C;
	sub_820E0028(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,124(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// fadds f28,f1,f31
	f28.f64 = double(float(ctx.f1.f64 + f31.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// lfs f27,2000(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	f27.f64 = double(temp.f32);
	// bge cr6,0x821567a8
	if (!ctx.cr6.lt) goto loc_821567A8;
	// fmsubs f1,f0,f27,f29
	ctx.f1.f64 = double(float(std::fma(ctx.f0.f64, f27.f64, -f29.f64)));
	// bl 0x820e0028
	ctx.lr = 0x8215678C;
	sub_820E0028(ctx, base);
	// fadds f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 + f31.f64));
	// addi r5,r31,96
	ctx.r5.s64 = r31.s64 + 96;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fmuls f1,f0,f27
	ctx.f1.f64 = double(float(ctx.f0.f64 * f27.f64));
	// bl 0x820e2028
	ctx.lr = 0x821567A4;
	sub_820E2028(ctx, base);
	// b 0x821567d0
	goto loc_821567D0;
loc_821567A8:
	// addi r8,r31,96
	ctx.r8.s64 = r31.s64 + 96;
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// lwz r9,100(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 100);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwz r8,104(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 104);
	// lwz r7,108(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 108);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r8,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// stw r7,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r7.u32);
loc_821567D0:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,136(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fmuls f29,f0,f28
	f29.f64 = double(float(ctx.f0.f64 * f28.f64));
	// addi r3,r10,-23788
	ctx.r3.s64 = ctx.r10.s64 + -23788;
	// lfd f1,-18632(r11)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + -18632);
	// stfd f1,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// bl 0x821eacb0
	ctx.lr = 0x821567F4;
	sub_821EACB0(ctx, base);
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// lwz r5,112(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 112);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8215690c
	if (!ctx.cr6.eq) goto loc_8215690C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,-17456
	ctx.r4.s64 = ctx.r11.s64 + -17456;
	// bl 0x822d55f8
	ctx.lr = 0x82156814;
	sub_822D55F8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f28,f29
	ctx.fpscr.disableFlushMode();
	f28.f64 = f29.f64;
	// lfs f2,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stfd f2,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f2.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// stfd f1,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// lfd f29,28216(r11)
	f29.u64 = REX_LOAD_U64(ctx.r11.u32 + 28216);
	// addi r7,r1,208
	ctx.r7.s64 = ctx.r1.s64 + 208;
	// stfd f29,64(r1)
	REX_STORE_U64(ctx.r1.u32 + 64, f29.u64);
	// ld r9,64(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 64);
	// stfd f28,56(r1)
	REX_STORE_U64(ctx.r1.u32 + 56, f28.u64);
	// ld r8,56(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 56);
	// li r6,14
	ctx.r6.s64 = 14;
	// fmr f4,f29
	ctx.f4.f64 = f29.f64;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// fmr f3,f28
	ctx.f3.f64 = f28.f64;
	// bl 0x821eacb0
	ctx.lr = 0x82156864;
	sub_821EACB0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f12,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stfd f29,64(r1)
	REX_STORE_U64(ctx.r1.u32 + 64, f29.u64);
	// ld r9,64(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 64);
	// stfd f28,56(r1)
	REX_STORE_U64(ctx.r1.u32 + 56, f28.u64);
	// ld r8,56(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 56);
	// lfs f0,16228(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16228);
	ctx.f0.f64 = double(temp.f32);
	// addi r7,r1,272
	ctx.r7.s64 = ctx.r1.s64 + 272;
	// lfs f13,16172(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 16172);
	ctx.f13.f64 = double(temp.f32);
	// fadds f2,f12,f0
	ctx.f2.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fadds f1,f11,f13
	ctx.f1.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// stfd f2,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f2.u64);
	// stfd f1,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// fmr f4,f29
	ctx.f4.f64 = f29.f64;
	// fmr f3,f28
	ctx.f3.f64 = f28.f64;
	// bl 0x821eacb0
	ctx.lr = 0x821568C0;
	sub_821EACB0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stfs f30,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stfs f30,144(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// stfs f30,176(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f12,-17460(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -17460);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,-17464(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -17464);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-17468(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -17468);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,-17472(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -17472);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,16032(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 16032);
	ctx.f10.f64 = double(temp.f32);
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f12,132(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f13,160(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f13,192(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// b 0x82156a60
	goto loc_82156A60;
loc_8215690C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r11,31004
	ctx.r4.s64 = ctx.r11.s64 + 31004;
	// bl 0x822d55f8
	ctx.lr = 0x82156918;
	sub_822D55F8(ctx, base);
	// fmr f28,f29
	ctx.fpscr.disableFlushMode();
	f28.f64 = f29.f64;
	// stfd f28,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, f28.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r5,r1,304
	ctx.r5.s64 = ctx.r1.s64 + 304;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfd f29,28216(r11)
	f29.u64 = REX_LOAD_U64(ctx.r11.u32 + 28216);
	// stfd f29,48(r1)
	REX_STORE_U64(ctx.r1.u32 + 48, f29.u64);
	// fmr f2,f29
	ctx.f2.f64 = f29.f64;
	// fmr f1,f28
	ctx.f1.f64 = f28.f64;
	// ld r7,48(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// bl 0x821eb1a0
	ctx.lr = 0x8215694C;
	sub_821EB1A0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// lwz r5,112(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 112);
	// addi r4,r11,-17456
	ctx.r4.s64 = ctx.r11.s64 + -17456;
	// bl 0x822d55f8
	ctx.lr = 0x82156960;
	sub_822D55F8(ctx, base);
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f2,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfd f29,64(r1)
	REX_STORE_U64(ctx.r1.u32 + 64, f29.u64);
	// ld r9,64(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 64);
	// stfd f2,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f2.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// stfd f1,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// stfd f28,56(r1)
	REX_STORE_U64(ctx.r1.u32 + 56, f28.u64);
	// addi r7,r1,208
	ctx.r7.s64 = ctx.r1.s64 + 208;
	// li r6,14
	ctx.r6.s64 = 14;
	// fmr f3,f28
	ctx.f3.f64 = f28.f64;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// fmr f4,f29
	ctx.f4.f64 = f29.f64;
	// ld r8,56(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 56);
	// bl 0x821eacb0
	ctx.lr = 0x821569AC;
	sub_821EACB0(ctx, base);
	// lfs f11,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stfd f28,56(r1)
	REX_STORE_U64(ctx.r1.u32 + 56, f28.u64);
	// li r10,1
	ctx.r10.s64 = 1;
	// stfd f29,64(r1)
	REX_STORE_U64(ctx.r1.u32 + 64, f29.u64);
	// addi r7,r1,272
	ctx.r7.s64 = ctx.r1.s64 + 272;
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f4,f29
	ctx.f4.f64 = f29.f64;
	// lfs f0,16228(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16228);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// lfs f13,16172(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 16172);
	ctx.f13.f64 = double(temp.f32);
	// ld r8,56(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 56);
	// fmr f3,f28
	ctx.f3.f64 = f28.f64;
	// fsubs f1,f12,f13
	ctx.f1.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// stfd f1,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// lfs f11,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// fadds f2,f11,f0
	ctx.f2.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfd f2,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f2.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// ld r9,64(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 64);
	// bl 0x821eacb0
	ctx.lr = 0x82156A10;
	sub_821EACB0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f13,16036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16036);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f11,-17460(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -17460);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,-17476(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -17476);
	ctx.f12.f64 = double(temp.f32);
	// stfs f11,116(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f11,132(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lfs f0,-17468(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -17468);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,-17472(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -17472);
	ctx.f11.f64 = double(temp.f32);
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f12,128(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f13,144(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lfs f10,16032(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16032);
	ctx.f10.f64 = double(temp.f32);
	// stfs f12,160(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f13,176(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f12,192(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 192, temp.u32);
loc_82156A60:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,124(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 124);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,200(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f0,184(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// addi r8,r1,240
	ctx.r8.s64 = ctx.r1.s64 + 240;
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// addi r7,r1,224
	ctx.r7.s64 = ctx.r1.s64 + 224;
	// lfs f13,17220(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 17220);
	ctx.f13.f64 = double(temp.f32);
	// addi r6,r1,224
	ctx.r6.s64 = ctx.r1.s64 + 224;
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lfs f0,2352(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2352);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stfs f31,124(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stfs f31,204(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// stfs f10,196(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f31,188(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f10,180(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f31,172(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f11,164(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f11,148(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f31,156(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f31,140(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f30,228(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// stfs f27,232(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// stfs f30,236(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// stfs f30,244(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// stfs f0,224(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stfs f0,240(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// stfs f27,248(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// stfs f13,252(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// stfs f30,256(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// stfs f30,260(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// stfs f30,264(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 264, temp.u32);
	// stfs f31,268(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 268, temp.u32);
	// bl 0x821e8770
	ctx.lr = 0x82156B0C;
	sub_821E8770(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r1,224
	ctx.r8.s64 = ctx.r1.s64 + 224;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r7,r1,240
	ctx.r7.s64 = ctx.r1.s64 + 240;
	// addi r6,r1,240
	ctx.r6.s64 = ctx.r1.s64 + 240;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x821e8770
	ctx.lr = 0x82156B30;
	sub_821E8770(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r1,256
	ctx.r8.s64 = ctx.r1.s64 + 256;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r7,r1,240
	ctx.r7.s64 = ctx.r1.s64 + 240;
	// addi r6,r1,240
	ctx.r6.s64 = ctx.r1.s64 + 240;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x821e8770
	ctx.lr = 0x82156B54;
	sub_821E8770(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r1,240
	ctx.r8.s64 = ctx.r1.s64 + 240;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r7,r1,256
	ctx.r7.s64 = ctx.r1.s64 + 256;
	// addi r6,r1,256
	ctx.r6.s64 = ctx.r1.s64 + 256;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x821e8770
	ctx.lr = 0x82156B78;
	sub_821E8770(ctx, base);
loc_82156B78:
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x822d4f80
	ctx.lr = 0x82156B84;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82170370) {
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
	// addi r10,r3,212
	ctx.r10.s64 = ctx.r3.s64 + 212;
	// lwz r10,212(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 212);
	// lwz r11,232(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 232);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,216(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 216);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,220(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 220);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,224(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 224);
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r3,232(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 232);
	// bl 0x8245e260
	ctx.lr = 0x821703C4;
	sub_8245E260(ctx, base);
	// cmplwi cr6,r3,5
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 5, ctx.xer);
	// bne cr6,0x821703e0
	if (!ctx.cr6.eq) goto loc_821703E0;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,-32480(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// sth r10,40(r11)
	REX_STORE_U16(ctx.r11.u32 + 40, ctx.r10.u16);
	// b 0x8217050c
	goto loc_8217050C;
loc_821703E0:
	// lwz r3,232(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 232);
	// bl 0x8245e260
	ctx.lr = 0x821703E8;
	sub_8245E260(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// beq cr6,0x8217050c
	if (ctx.cr6.eq) goto loc_8217050C;
	// lwz r3,232(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 232);
	// bl 0x8245e260
	ctx.lr = 0x821703F8;
	sub_8245E260(ctx, base);
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// beq cr6,0x8217050c
	if (ctx.cr6.eq) goto loc_8217050C;
	// lbz r11,208(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 208);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8217050c
	if (ctx.cr0.eq) goto loc_8217050C;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821eb2c0
	ctx.lr = 0x82170414;
	sub_821EB2C0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r3,r10,-23996
	ctx.r3.s64 = ctx.r10.s64 + -23996;
	// lfd f31,26664(r11)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r11.u32 + 26664);
	// stfd f31,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, f31.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// stfd f31,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, f31.u64);
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// bl 0x821eacb0
	ctx.lr = 0x82170440;
	sub_821EACB0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r30,r11,15387
	r30.s64 = ctx.r11.s64 + 15387;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x821eb1a0
	ctx.lr = 0x82170458;
	sub_821EB1A0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f1,228(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 228);
	ctx.f1.f64 = double(temp.f32);
	// stfd f1,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lfs f30,20480(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20480);
	f30.f64 = double(temp.f32);
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// fsubs f13,f30,f13
	ctx.f13.f64 = double(float(f30.f64 - ctx.f13.f64));
	// lfs f29,2000(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2000);
	f29.f64 = double(temp.f32);
	// lfs f0,31836(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 31836);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r8,-7648
	ctx.r3.s64 = ctx.r8.s64 + -7648;
	// fmadds f2,f13,f29,f0
	ctx.f2.f64 = double(float(std::fma(ctx.f13.f64, f29.f64, ctx.f0.f64)));
	// stfd f2,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f2.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x821eacb0
	ctx.lr = 0x821704A0;
	sub_821EACB0(ctx, base);
	// lbz r11,209(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 209);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8217050c
	if (ctx.cr0.eq) goto loc_8217050C;
	// stfd f31,32(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 32, f31.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// stfd f31,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, f31.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// addi r3,r11,-7656
	ctx.r3.s64 = ctx.r11.s64 + -7656;
	// bl 0x821eacb0
	ctx.lr = 0x821704D0;
	sub_821EACB0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x821eb1a0
	ctx.lr = 0x821704E0;
	sub_821EB1A0(ctx, base);
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f30,f13
	ctx.f13.f64 = double(float(f30.f64 - ctx.f13.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r5,r31,144
	ctx.r5.s64 = r31.s64 + 144;
	// addi r3,r10,-7416
	ctx.r3.s64 = ctx.r10.s64 + -7416;
	// lfs f0,26616(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 26616);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f1,f13,f29,f0
	ctx.f1.f64 = double(float(std::fma(ctx.f13.f64, f29.f64, ctx.f0.f64)));
	// stfd f1,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// bl 0x821eacb0
	ctx.lr = 0x8217050C;
	sub_821EACB0(ctx, base);
loc_8217050C:
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

DEFINE_REX_FUNC(sub_82176250) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,13
	ctx.r4.s64 = 13;
	// bl 0x821f7d50
	ctx.lr = 0x82176288;
	sub_821F7D50(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq 0x821762a4
	if (ctx.cr0.eq) goto loc_821762A4;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r9,r9,31764
	ctx.r9.s64 = ctx.r9.s64 + 31764;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// b 0x821762a8
	goto loc_821762A8;
loc_821762A4:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_821762A8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82176308
	if (ctx.cr6.eq) goto loc_82176308;
	// extsw r9,r30
	ctx.r9.s64 = r30.s32;
	// stw r31,100(r11)
	REX_STORE_U32(ctx.r11.u32 + 100, r31.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r10,96(r11)
	REX_STORE_U32(ctx.r11.u32 + 96, ctx.r10.u32);
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// frsp f12,f0
	ctx.f12.f64 = double(float(ctx.f0.f64));
	// lfs f13,26936(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 26936);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2392(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 2392);
	ctx.f0.f64 = double(temp.f32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r10,104(r11)
	REX_STORE_U8(ctx.r11.u32 + 104, ctx.r10.u8);
	// stb r9,90(r11)
	REX_STORE_U8(ctx.r11.u32 + 90, ctx.r9.u8);
	// stb r9,105(r11)
	REX_STORE_U8(ctx.r11.u32 + 105, ctx.r9.u8);
	// stb r9,106(r11)
	REX_STORE_U8(ctx.r11.u32 + 106, ctx.r9.u8);
	// stb r10,107(r11)
	REX_STORE_U8(ctx.r11.u32 + 107, ctx.r10.u8);
	// stb r10,108(r11)
	REX_STORE_U8(ctx.r11.u32 + 108, ctx.r10.u8);
	// stb r10,109(r11)
	REX_STORE_U8(ctx.r11.u32 + 109, ctx.r10.u8);
	// stb r9,91(r11)
	REX_STORE_U8(ctx.r11.u32 + 91, ctx.r9.u8);
	// fmadds f0,f12,f0,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f13.f64)));
	// stfs f0,92(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 92, temp.u32);
loc_82176308:
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

DEFINE_REX_FUNC(sub_82178C08) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r9,12(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lwz r9,128(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 128);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82178c2c
	if (ctx.cr6.eq) goto loc_82178C2C;
	// lwz r11,136(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_82178C2C:
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// addic. r9,r3,148
	ctx.xer.ca = ctx.r3.u32 > 4294967147;
	ctx.r9.s64 = ctx.r3.s64 + 148;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lfs f0,1992(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// li r7,4
	ctx.r7.s64 = 4;
	// stfs f0,44(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// stfs f0,108(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 108, temp.u32);
	// stfs f0,172(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 172, temp.u32);
	// stfs f0,236(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 236, temp.u32);
	// stb r10,110(r3)
	REX_STORE_U8(ctx.r3.u32 + 110, ctx.r10.u8);
	// lfs f0,16304(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 16304);
	ctx.f0.f64 = double(temp.f32);
	// std r5,80(r3)
	REX_STORE_U64(ctx.r3.u32 + 80, ctx.r5.u64);
	// stfs f0,120(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// sth r7,88(r3)
	REX_STORE_U16(ctx.r3.u32 + 88, ctx.r7.u16);
	// stb r8,90(r3)
	REX_STORE_U8(ctx.r3.u32 + 90, ctx.r8.u8);
	// stb r10,91(r3)
	REX_STORE_U8(ctx.r3.u32 + 91, ctx.r10.u8);
	// stw r11,92(r3)
	REX_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// beq 0x82178c80
	if (ctx.cr0.eq) goto loc_82178C80;
	// stw r9,96(r3)
	REX_STORE_U32(ctx.r3.u32 + 96, ctx.r9.u32);
loc_82178C80:
	// stb r8,109(r3)
	REX_STORE_U8(ctx.r3.u32 + 109, ctx.r8.u8);
	// stb r10,105(r3)
	REX_STORE_U8(ctx.r3.u32 + 105, ctx.r10.u8);
	// stb r10,106(r3)
	REX_STORE_U8(ctx.r3.u32 + 106, ctx.r10.u8);
	// stb r10,107(r3)
	REX_STORE_U8(ctx.r3.u32 + 107, ctx.r10.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8217A034) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8217A1D8) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r3,84
	ctx.r4.s64 = ctx.r3.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r31,0
	r31.s64 = 0;
	// bl 0x820e1df8
	ctx.lr = 0x8217A1FC;
	sub_820E1DF8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,2024(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2024);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x8217a238
	if (!ctx.cr6.gt) goto loc_8217A238;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8217a238
	if (!ctx.cr6.lt) goto loc_8217A238;
	// lfs f0,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x8217a238
	if (!ctx.cr6.gt) goto loc_8217A238;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8217a238
	if (!ctx.cr6.lt) goto loc_8217A238;
	// li r31,1
	r31.s64 = 1;
loc_8217A238:
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

DEFINE_REX_FUNC(sub_8217BD30) {
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
	ctx.lr = 0x8217BD38;
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -56, f30.u64);
	// stfd f31,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,180(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 180);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r30,12(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8217bd78
	if (!ctx.cr6.eq) goto loc_8217BD78;
	// lwz r11,112(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 112);
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,112(r30)
	REX_STORE_U32(r30.u32 + 112, ctx.r11.u32);
	// lwz r11,-32480(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -32480);
	// sth r9,40(r11)
	REX_STORE_U16(ctx.r11.u32 + 40, ctx.r9.u16);
	// b 0x8217bf14
	goto loc_8217BF14;
loc_8217BD78:
	// lwz r10,160(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 160);
	// stw r11,184(r31)
	REX_STORE_U32(r31.u32 + 184, ctx.r11.u32);
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r10,132(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 132);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// stw r11,188(r31)
	REX_STORE_U32(r31.u32 + 188, ctx.r11.u32);
	// stw r11,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r11.u32);
	// blt cr6,0x8217bee4
	if (ctx.cr6.lt) goto loc_8217BEE4;
	// beq cr6,0x8217be04
	if (ctx.cr6.eq) goto loc_8217BE04;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// blt cr6,0x8217bdd0
	if (ctx.cr6.lt) goto loc_8217BDD0;
	// bne cr6,0x8217bf14
	if (!ctx.cr6.eq) goto loc_8217BF14;
	// lwz r11,108(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 108);
	// lwz r10,112(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 112);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8217bf14
	if (!ctx.cr6.eq) goto loc_8217BF14;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,4
	ctx.r10.s64 = 4;
	// stb r11,110(r31)
	REX_STORE_U8(r31.u32 + 110, ctx.r11.u8);
	// stw r10,132(r31)
	REX_STORE_U32(r31.u32 + 132, ctx.r10.u32);
	// b 0x8217bf14
	goto loc_8217BF14;
loc_8217BDD0:
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// lwz r11,27608(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 27608);
	// lwz r10,116(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 116);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8217bf14
	if (ctx.cr6.eq) goto loc_8217BF14;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,116(r11)
	REX_STORE_U32(ctx.r11.u32 + 116, ctx.r10.u32);
	// bl 0x8217bb18
	ctx.lr = 0x8217BDF4;
	sub_8217BB18(ctx, base);
	// lwz r11,112(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 112);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,112(r30)
	REX_STORE_U32(r30.u32 + 112, ctx.r11.u32);
	// b 0x8217bf08
	goto loc_8217BF08;
loc_8217BE04:
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// lwz r11,27608(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 27608);
	// lwz r10,116(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 116);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8217bf14
	if (ctx.cr6.eq) goto loc_8217BF14;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// li r28,0
	r28.s64 = 0;
	// stw r10,116(r11)
	REX_STORE_U32(ctx.r11.u32 + 116, ctx.r10.u32);
	// lwz r11,160(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 160);
	// rlwinm. r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r30,r28
	r30.u64 = r28.u64;
	// beq 0x8217bec4
	if (ctx.cr0.eq) goto loc_8217BEC4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r29,r28
	r29.u64 = r28.u64;
	// lfs f30,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	f30.f64 = double(temp.f32);
	// lfs f31,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	f31.f64 = double(temp.f32);
loc_8217BE48:
	// lwz r10,168(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 168);
	// lfs f0,172(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 172);
	ctx.f0.f64 = double(temp.f32);
	// stfs f31,80(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stw r28,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r28.u32);
	// stfs f31,84(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// stfs f31,96(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r11,188(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 188);
	// stfs f31,100(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f13,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// add r3,r29,r11
	ctx.r3.u64 = r29.u64 + ctx.r11.u64;
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f31,104(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f30,108(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// li r5,64
	ctx.r5.s64 = 64;
	// stfs f30,112(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f30,116(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f30,120(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f31,128(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f31,132(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f31,136(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f31,140(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// bl 0x822d4fa0
	ctx.lr = 0x8217BEAC;
	sub_822D4FA0(ctx, base);
	// lwz r11,160(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 160);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r29,r29,64
	r29.s64 = r29.s64 + 64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8217be48
	if (ctx.cr6.lt) goto loc_8217BE48;
loc_8217BEC4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r7,164(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 164);
	// lwz r6,184(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 184);
	// lfs f1,148(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 148);
	ctx.f1.f64 = double(temp.f32);
	// lwz r4,188(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 188);
	// bl 0x82178258
	ctx.lr = 0x8217BEDC;
	sub_82178258(ctx, base);
	// sth r3,88(r31)
	REX_STORE_U16(r31.u32 + 88, ctx.r3.u16);
	// b 0x8217bf08
	goto loc_8217BF08;
loc_8217BEE4:
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// lwz r11,27608(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 27608);
	// lwz r10,116(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 116);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8217bf14
	if (ctx.cr6.eq) goto loc_8217BF14;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,116(r11)
	REX_STORE_U32(ctx.r11.u32 + 116, ctx.r10.u32);
	// bl 0x82177f78
	ctx.lr = 0x8217BF08;
	sub_82177F78(ctx, base);
loc_8217BF08:
	// lwz r11,132(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 132);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,132(r31)
	REX_STORE_U32(r31.u32 + 132, ctx.r11.u32);
loc_8217BF14:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82182158) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82182160;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r4,0(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x82181f78
	ctx.lr = 0x8218217C;
	sub_82181F78(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82182198
	if (ctx.cr6.eq) goto loc_82182198;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82181f20
	ctx.lr = 0x82182198;
	sub_82181F20(ctx, base);
loc_82182198:
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82182E18) {
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
	// addis r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 262144;
	// addi r3,r3,2624
	ctx.r3.s64 = ctx.r3.s64 + 2624;
	// lwz r11,1792(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1792);
	// lwz r10,1796(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 1796);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82182e44
	if (!ctx.cr6.eq) goto loc_82182E44;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82182e4c
	goto loc_82182E4C;
loc_82182E44:
	// bl 0x82182ad8
	ctx.lr = 0x82182E48;
	sub_82182AD8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82182E4C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82183CF8) {
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
	// lhz r11,18(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 18);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lhz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82183d34
	if (ctx.cr6.eq) goto loc_82183D34;
	// lbz r11,2(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 2);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82183d34
	if (ctx.cr6.eq) goto loc_82183D34;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82183d8c
	if (!ctx.cr6.eq) goto loc_82183D8C;
loc_82183D34:
	// lbz r11,2(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 2);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r10,r10,-4292
	ctx.r10.s64 = ctx.r10.s64 + -4292;
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82183D54;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82183d8c
	if (ctx.cr0.eq) goto loc_82183D8C;
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
	// bne 0x82183d7c
	if (!ctx.cr0.eq) goto loc_82183D7C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82208828
	ctx.lr = 0x82183D7C;
	sub_82208828(ctx, base);
loc_82183D7C:
	// lis r10,4
	ctx.r10.s64 = 262144;
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// ori r10,r10,6664
	ctx.r10.u64 = ctx.r10.u64 | 6664;
	// stdx r11,r30,r10
	REX_STORE_U64(r30.u32 + ctx.r10.u32, ctx.r11.u64);
loc_82183D8C:
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

DEFINE_REX_FUNC(sub_82186338) {
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
	ctx.lr = 0x82186340;
	// stwu r1,-1440(r1)
	ea = -1440 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82185c60
	ctx.lr = 0x8218634C;
	sub_82185C60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82185e30
	ctx.lr = 0x82186354;
	sub_82185E30(ctx, base);
	// lbz r11,436(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 436);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82186400
	if (!ctx.cr0.eq) goto loc_82186400;
	// addi r30,r31,404
	r30.s64 = r31.s64 + 404;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822d5870
	ctx.lr = 0x82186378;
	sub_822D5870(ctx, base);
	// lwz r11,432(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 432);
	// li r8,0
	ctx.r8.s64 = 0;
	// ld r5,168(r31)
	ctx.r5.u64 = REX_LOAD_U64(r31.u32 + 168);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,96(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 96);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,416(r31)
	REX_STORE_U32(r31.u32 + 416, ctx.r11.u32);
	// bl 0x82233ef8
	ctx.lr = 0x8218639C;
	sub_82233EF8(ctx, base);
	// cmplwi cr6,r3,122
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 122, ctx.xer);
	// bne cr6,0x821863e4
	if (!ctx.cr6.eq) goto loc_821863E4;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821863e4
	if (ctx.cr6.eq) goto loc_821863E4;
	// bl 0x822c80d0
	ctx.lr = 0x821863B4;
	sub_822C80D0(ctx, base);
	// stw r3,176(r31)
	REX_STORE_U32(r31.u32 + 176, ctx.r3.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// ld r5,168(r31)
	ctx.r5.u64 = REX_LOAD_U64(r31.u32 + 168);
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// lwz r3,96(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 96);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82233ef8
	ctx.lr = 0x821863D4;
	sub_82233EF8(ctx, base);
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x821863f4
	if (ctx.cr6.eq) goto loc_821863F4;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82209598
	ctx.lr = 0x821863E4;
	sub_82209598(ctx, base);
loc_821863E4:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// b 0x821865e4
	goto loc_821865E4;
loc_821863F4:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,436(r31)
	REX_STORE_U8(r31.u32 + 436, ctx.r11.u8);
	// b 0x821865e0
	goto loc_821865E0;
loc_82186400:
	// lwz r11,404(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 404);
	// addi r3,r31,404
	ctx.r3.s64 = r31.s64 + 404;
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x821865e0
	if (ctx.cr6.eq) goto loc_821865E0;
	// bl 0x82209598
	ctx.lr = 0x82186414;
	sub_82209598(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82186434
	if (!ctx.cr0.lt) goto loc_82186434;
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
	// b 0x821865e4
	goto loc_821865E4;
loc_82186434:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82187bd8
	ctx.lr = 0x8218643C;
	sub_82187BD8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r28,0
	r28.s64 = 0;
	// bne 0x82186484
	if (!ctx.cr0.eq) goto loc_82186484;
	// li r4,6
	ctx.r4.s64 = 6;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82184a00
	ctx.lr = 0x82186454;
	sub_82184A00(ctx, base);
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x821855a0
	ctx.lr = 0x82186478;
	sub_821855A0(ctx, base);
	// bl 0x822094c8
	ctx.lr = 0x8218647C;
	sub_822094C8(ctx, base);
	// stw r3,480(r31)
	REX_STORE_U32(r31.u32 + 480, ctx.r3.u32);
	// b 0x821865c0
	goto loc_821865C0;
loc_82186484:
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// li r27,1
	r27.s64 = 1;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi. r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82186534
	if (ctx.cr0.eq) goto loc_82186534;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
loc_821864A8:
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwzx r10,r11,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// lbz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82186510
	if (!ctx.cr0.eq) goto loc_82186510;
	// stb r28,45(r10)
	REX_STORE_U8(ctx.r10.u32 + 45, r28.u8);
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// lwz r11,176(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 176);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82186510
	if (!ctx.cr6.gt) goto loc_82186510;
	// ld r8,8(r10)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
loc_821864E0:
	// lwz r5,176(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 176);
	// lwz r5,4(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// ldx r5,r5,r11
	ctx.r5.u64 = REX_LOAD_U64(ctx.r5.u32 + ctx.r11.u32);
	// cmpld cr6,r8,r5
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r5.u64, ctx.xer);
	// bne cr6,0x821864f8
	if (!ctx.cr6.eq) goto loc_821864F8;
	// stb r27,45(r10)
	REX_STORE_U8(ctx.r10.u32 + 45, r27.u8);
loc_821864F8:
	// lwz r5,176(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 176);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// lwz r5,0(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x821864e0
	if (ctx.cr6.lt) goto loc_821864E0;
loc_82186510:
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821864a8
	if (ctx.cr6.lt) goto loc_821864A8;
loc_82186534:
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// mr r30,r28
	r30.u64 = r28.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// srawi. r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821865b8
	if (ctx.cr0.eq) goto loc_821865B8;
	// mr r29,r28
	r29.u64 = r28.u64;
loc_82186558:
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwzx r11,r11,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// lbz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x82186594
	if (!ctx.cr0.eq) goto loc_82186594;
	// lbz r9,45(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 45);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x82186594
	if (!ctx.cr0.eq) goto loc_82186594;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82184f28
	ctx.lr = 0x82186590;
	sub_82184F28(ctx, base);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
loc_82186594:
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82186558
	if (ctx.cr6.lt) goto loc_82186558;
loc_821865B8:
	// clrlwi. r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821865cc
	if (ctx.cr0.eq) goto loc_821865CC;
loc_821865C0:
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// b 0x821865dc
	goto loc_821865DC;
loc_821865CC:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x821865dc
	if (!ctx.cr6.eq) goto loc_821865DC;
	// stw r27,4(r31)
	REX_STORE_U32(r31.u32 + 4, r27.u32);
loc_821865DC:
	// stb r28,436(r31)
	REX_STORE_U8(r31.u32 + 436, r28.u8);
loc_821865E0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_821865E4:
	// addi r1,r1,1440
	ctx.r1.s64 = ctx.r1.s64 + 1440;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82190770) {
	REX_FUNC_PROLOGUE();
	// clrlwi. r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82190780
	if (!ctx.cr0.eq) goto loc_82190780;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82190780:
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lwz r4,344(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 344);
	// b 0x820e68b8
	sub_820E68B8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82191560) {
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
	// lwz r3,30848(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 30848);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821915b0
	if (ctx.cr6.eq) goto loc_821915B0;
	// bl 0x822cb390
	ctx.lr = 0x82191588;
	sub_822CB390(ctx, base);
	// lwz r31,30848(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 30848);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x821915ac
	if (ctx.cr6.eq) goto loc_821915AC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822cb5f0
	ctx.lr = 0x8219159C;
	sub_822CB5F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c80a8
	ctx.lr = 0x821915A4;
	sub_822C80A8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,30848(r30)
	REX_STORE_U32(r30.u32 + 30848, ctx.r11.u32);
loc_821915AC:
	// bl 0x823caf88
	ctx.lr = 0x821915B0;
	sub_823CAF88(ctx, base);
loc_821915B0:
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

DEFINE_REX_FUNC(sub_82193A28) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,13128
	ctx.r11.s64 = ctx.r11.s64 + 13128;
	// lbz r11,1888(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 1888);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82193a58
	if (ctx.cr0.eq) goto loc_82193A58;
	// lwz r3,116(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x82102798
	ctx.lr = 0x82193A58;
	sub_82102798(ctx, base);
loc_82193A58:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82192f98
	ctx.lr = 0x82193A60;
	sub_82192F98(ctx, base);
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

DEFINE_REX_FUNC(sub_821945B8) {
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
	ctx.lr = 0x821945C0;
	// stfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -88, f30.u64);
	// stfd f31,-80(r1)
	REX_STORE_U64(ctx.r1.u32 + -80, f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82187b58
	ctx.lr = 0x821945D4;
	sub_82187B58(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 100);
	// li r24,0
	r24.s64 = 0;
	// lis r26,3840
	r26.s64 = 251658240;
	// lwz r11,92(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// stb r24,76(r11)
	REX_STORE_U8(ctx.r11.u32 + 76, r24.u8);
	// lwz r11,192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 192);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x821945fc
	if (ctx.cr6.eq) goto loc_821945FC;
	// ori r26,r26,51
	r26.u64 = r26.u64 | 51;
	// b 0x82194600
	goto loc_82194600;
loc_821945FC:
	// ori r26,r26,52
	r26.u64 = r26.u64 | 52;
loc_82194600:
	// lwz r11,180(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 180);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x821947c4
	if (ctx.cr6.lt) goto loc_821947C4;
	// beq cr6,0x82194688
	if (ctx.cr6.eq) goto loc_82194688;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x8219465c
	if (ctx.cr6.lt) goto loc_8219465C;
	// bne cr6,0x82194ec0
	if (!ctx.cr6.eq) goto loc_82194EC0;
	// lbz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 204);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82194630
	if (ctx.cr0.eq) goto loc_82194630;
	// bl 0x82191f40
	ctx.lr = 0x8219462C;
	sub_82191F40(ctx, base);
	// b 0x82194634
	goto loc_82194634;
loc_82194630:
	// bl 0x82191f30
	ctx.lr = 0x82194634;
	sub_82191F30(ctx, base);
loc_82194634:
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// li r25,1
	r25.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82194648
	if (ctx.cr6.eq) goto loc_82194648;
	// stw r25,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r25.u32);
loc_82194648:
	// bl 0x821affa8
	ctx.lr = 0x8219464C;
	sub_821AFFA8(ctx, base);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lwz r11,-32480(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// sth r25,40(r11)
	REX_STORE_U16(ctx.r11.u32 + 40, r25.u16);
	// b 0x82194ec0
	goto loc_82194EC0;
loc_8219465C:
	// lwz r3,104(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 104);
	// bl 0x82197d78
	ctx.lr = 0x82194664;
	sub_82197D78(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82194ec0
	if (ctx.cr6.eq) goto loc_82194EC0;
	// lwz r3,104(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 104);
	// bl 0x82197d78
	ctx.lr = 0x82194674;
	sub_82197D78(ctx, base);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// beq cr6,0x82194ec0
	if (ctx.cr6.eq) goto loc_82194EC0;
	// lwz r11,176(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 176);
loc_82194680:
	// stw r11,180(r31)
	REX_STORE_U32(r31.u32 + 180, ctx.r11.u32);
	// b 0x82194ec0
	goto loc_82194EC0;
loc_82194688:
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lfs f13,196(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 196);
	ctx.f13.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,212(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 212);
	// addi r11,r11,13128
	ctx.r11.s64 = ctx.r11.s64 + 13128;
	// lfs f0,1840(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1840);
	ctx.f0.f64 = double(temp.f32);
	// stw r24,200(r31)
	REX_STORE_U32(r31.u32 + 200, r24.u32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,196(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 196, temp.u32);
	// bl 0x82199a88
	ctx.lr = 0x821946B0;
	sub_82199A88(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,216(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 216);
	// bl 0x82199a88
	ctx.lr = 0x821946BC;
	sub_82199A88(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,220(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 220);
	// bl 0x82199a88
	ctx.lr = 0x821946C8;
	sub_82199A88(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,224(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 224);
	// bl 0x82199a88
	ctx.lr = 0x821946D4;
	sub_82199A88(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,196(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 196);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,29356(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 29356);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82194750
	if (ctx.cr6.lt) goto loc_82194750;
	// lwz r10,104(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 104);
	// li r9,12
	ctx.r9.s64 = 12;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r11,r31,128
	ctx.r11.s64 = r31.s64 + 128;
	// stb r9,36(r10)
	REX_STORE_U8(ctx.r10.u32 + 36, ctx.r9.u8);
	// lwz r10,108(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 108);
	// stw r10,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r10.u32);
	// stb r8,244(r10)
	REX_STORE_U8(ctx.r10.u32 + 244, ctx.r8.u8);
	// lwz r10,104(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 104);
	// lwz r9,88(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 88);
	// stw r24,108(r31)
	REX_STORE_U32(r31.u32 + 108, r24.u32);
	// stw r9,88(r10)
	REX_STORE_U32(ctx.r10.u32 + 88, ctx.r9.u32);
	// lwz r9,112(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 112);
	// lwz r8,116(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 116);
	// lwz r6,120(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 120);
	// lwz r7,104(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 104);
	// lwz r10,124(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 124);
	// stw r10,140(r31)
	REX_STORE_U32(r31.u32 + 140, ctx.r10.u32);
	// stw r6,136(r31)
	REX_STORE_U32(r31.u32 + 136, ctx.r6.u32);
	// stw r8,132(r31)
	REX_STORE_U32(r31.u32 + 132, ctx.r8.u32);
	// stw r9,128(r31)
	REX_STORE_U32(r31.u32 + 128, ctx.r9.u32);
	// stw r11,84(r7)
	REX_STORE_U32(ctx.r7.u32 + 84, ctx.r11.u32);
	// lwz r11,184(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 184);
	// stw r11,192(r31)
	REX_STORE_U32(r31.u32 + 192, ctx.r11.u32);
	// stw r24,180(r31)
	REX_STORE_U32(r31.u32 + 180, r24.u32);
	// b 0x82194cf8
	goto loc_82194CF8;
loc_82194750:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,-30112(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -30112);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f0,2012(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2012);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x820e0028
	ctx.lr = 0x8219476C;
	sub_820E0028(ctx, base);
	// fmuls f31,f1,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// addi r30,r31,160
	r30.s64 = r31.s64 + 160;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x820e1cc0
	ctx.lr = 0x82194784;
	sub_820E1CC0(ctx, base);
	// addi r29,r31,112
	r29.s64 = r31.s64 + 112;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x820e1b28
	ctx.lr = 0x82194798;
	sub_820E1B28(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f0,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 - f31.f64));
	// bl 0x820e1cc0
	ctx.lr = 0x821947B0;
	sub_820E1CC0(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x820e1ba8
	ctx.lr = 0x821947C0;
	sub_820E1BA8(ctx, base);
	// b 0x82194cf8
	goto loc_82194CF8;
loc_821947C4:
	// lwz r3,104(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 104);
	// bl 0x82197db8
	ctx.lr = 0x821947CC;
	sub_82197DB8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821948a4
	if (!ctx.cr0.eq) goto loc_821948A4;
	// lwz r11,200(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 200);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm. r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,200(r31)
	REX_STORE_U32(r31.u32 + 200, ctx.r11.u32);
	// beq 0x82194848
	if (ctx.cr0.eq) goto loc_82194848;
	// lwz r3,220(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 220);
	// bl 0x82195578
	ctx.lr = 0x821947F0;
	sub_82195578(ctx, base);
	// lwz r3,224(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 224);
	// bl 0x82195578
	ctx.lr = 0x821947F8;
	sub_82195578(ctx, base);
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// lwz r3,212(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 212);
	// lwz r11,252(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 252);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82194818
	if (!ctx.cr6.eq) goto loc_82194818;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82199a88
	ctx.lr = 0x82194814;
	sub_82199A88(ctx, base);
	// b 0x8219481c
	goto loc_8219481C;
loc_82194818:
	// bl 0x82195578
	ctx.lr = 0x8219481C;
	sub_82195578(ctx, base);
loc_8219481C:
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// lwz r3,216(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 216);
	// lwz r10,252(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 252);
	// lwz r11,256(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 256);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82194840
	if (ctx.cr6.lt) goto loc_82194840;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82199a88
	ctx.lr = 0x8219483C;
	sub_82199A88(ctx, base);
	// b 0x821948a4
	goto loc_821948A4;
loc_82194840:
	// bl 0x82195578
	ctx.lr = 0x82194844;
	sub_82195578(ctx, base);
	// b 0x821948a4
	goto loc_821948A4;
loc_82194848:
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// lwz r3,212(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 212);
	// lwz r11,252(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 252);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82194868
	if (!ctx.cr6.eq) goto loc_82194868;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82199a88
	ctx.lr = 0x82194864;
	sub_82199A88(ctx, base);
	// b 0x8219486c
	goto loc_8219486C;
loc_82194868:
	// bl 0x821955a0
	ctx.lr = 0x8219486C;
	sub_821955A0(ctx, base);
loc_8219486C:
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// lwz r3,216(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 216);
	// lwz r10,252(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 252);
	// lwz r11,256(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 256);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82194890
	if (ctx.cr6.lt) goto loc_82194890;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82199a88
	ctx.lr = 0x8219488C;
	sub_82199A88(ctx, base);
	// b 0x82194894
	goto loc_82194894;
loc_82194890:
	// bl 0x821955a0
	ctx.lr = 0x82194894;
	sub_821955A0(ctx, base);
loc_82194894:
	// lwz r3,220(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 220);
	// bl 0x821955a0
	ctx.lr = 0x8219489C;
	sub_821955A0(ctx, base);
	// lwz r3,224(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 224);
	// bl 0x821955a0
	ctx.lr = 0x821948A4;
	sub_821955A0(ctx, base);
loc_821948A4:
	// lwz r11,228(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 228);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82194ac8
	if (ctx.cr6.lt) goto loc_82194AC8;
	// beq cr6,0x82194974
	if (ctx.cr6.eq) goto loc_82194974;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82194948
	if (ctx.cr6.lt) goto loc_82194948;
	// bne cr6,0x82194ec0
	if (!ctx.cr6.eq) goto loc_82194EC0;
	// lwz r11,208(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 208);
	// lwz r11,144(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 144);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bne cr6,0x82194ec0
	if (!ctx.cr6.eq) goto loc_82194EC0;
	// bl 0x82191ca0
	ctx.lr = 0x821948D4;
	sub_82191CA0(ctx, base);
	// li r25,1
	r25.s64 = 1;
	// cmpwi cr6,r3,8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 8, ctx.xer);
	// beq cr6,0x8219490c
	if (ctx.cr6.eq) goto loc_8219490C;
	// cmpwi cr6,r3,9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 9, ctx.xer);
	// beq cr6,0x82194910
	if (ctx.cr6.eq) goto loc_82194910;
	// cmpwi cr6,r3,12
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 12, ctx.xer);
	// ble cr6,0x82194914
	if (!ctx.cr6.gt) goto loc_82194914;
	// cmpwi cr6,r3,14
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 14, ctx.xer);
	// ble cr6,0x8219490c
	if (!ctx.cr6.gt) goto loc_8219490C;
	// cmpwi cr6,r3,20
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 20, ctx.xer);
	// ble cr6,0x82194914
	if (!ctx.cr6.gt) goto loc_82194914;
	// cmpwi cr6,r3,22
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 22, ctx.xer);
	// ble cr6,0x82194910
	if (!ctx.cr6.gt) goto loc_82194910;
	// b 0x82194914
	goto loc_82194914;
loc_8219490C:
	// stb r25,204(r31)
	REX_STORE_U8(r31.u32 + 204, r25.u8);
loc_82194910:
	// stb r25,205(r31)
	REX_STORE_U8(r31.u32 + 205, r25.u8);
loc_82194914:
	// bl 0x82191c68
	ctx.lr = 0x82194918;
	sub_82191C68(ctx, base);
	// bl 0x82191cc0
	ctx.lr = 0x8219491C;
	sub_82191CC0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82194940
	if (ctx.cr0.eq) goto loc_82194940;
	// lbz r11,205(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 205);
	// stw r24,208(r31)
	REX_STORE_U32(r31.u32 + 208, r24.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r24,228(r31)
	REX_STORE_U32(r31.u32 + 228, r24.u32);
	// beq 0x82194ec0
	if (ctx.cr0.eq) goto loc_82194EC0;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82194680
	goto loc_82194680;
loc_82194940:
	// stw r25,228(r31)
	REX_STORE_U32(r31.u32 + 228, r25.u32);
	// b 0x82194ec0
	goto loc_82194EC0;
loc_82194948:
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r11,r11,13128
	ctx.r11.s64 = ctx.r11.s64 + 13128;
	// lwz r11,1092(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1092);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82194ec0
	if (ctx.cr0.eq) goto loc_82194EC0;
	// li r11,3
	ctx.r11.s64 = 3;
	// lwz r10,208(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 208);
	// stw r11,228(r31)
	REX_STORE_U32(r31.u32 + 228, ctx.r11.u32);
	// lwz r3,140(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 140);
	// bl 0x82101d68
	ctx.lr = 0x82194970;
	sub_82101D68(ctx, base);
	// b 0x82194ec0
	goto loc_82194EC0;
loc_82194974:
	// bl 0x82191cc0
	ctx.lr = 0x82194978;
	sub_82191CC0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82194ec0
	if (!ctx.cr0.eq) goto loc_82194EC0;
	// mr r30,r24
	r30.u64 = r24.u64;
	// bl 0x82191cc0
	ctx.lr = 0x82194988;
	sub_82191CC0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821949ec
	if (!ctx.cr0.eq) goto loc_821949EC;
	// li r25,1
	r25.s64 = 1;
loc_82194994:
	// bl 0x82191ca0
	ctx.lr = 0x82194998;
	sub_82191CA0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x821949d0
	if (ctx.cr6.eq) goto loc_821949D0;
	// cmpwi cr6,r3,8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 8, ctx.xer);
	// beq cr6,0x821949c8
	if (ctx.cr6.eq) goto loc_821949C8;
	// cmpwi cr6,r3,12
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 12, ctx.xer);
	// ble cr6,0x821949b8
	if (!ctx.cr6.gt) goto loc_821949B8;
	// cmpwi cr6,r3,14
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 14, ctx.xer);
	// ble cr6,0x821949c8
	if (!ctx.cr6.gt) goto loc_821949C8;
loc_821949B8:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x821949c8
	if (ctx.cr6.eq) goto loc_821949C8;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(r30.s32, 1, ctx.xer);
	// bne cr6,0x821949dc
	if (!ctx.cr6.eq) goto loc_821949DC;
loc_821949C8:
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x821949dc
	goto loc_821949DC;
loc_821949D0:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne cr6,0x821949dc
	if (!ctx.cr6.eq) goto loc_821949DC;
	// mr r30,r25
	r30.u64 = r25.u64;
loc_821949DC:
	// bl 0x82191c68
	ctx.lr = 0x821949E0;
	sub_82191C68(ctx, base);
	// bl 0x82191cc0
	ctx.lr = 0x821949E4;
	sub_82191CC0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82194994
	if (ctx.cr0.eq) goto loc_82194994;
loc_821949EC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82191be0
	ctx.lr = 0x821949F4;
	sub_82191BE0(ctx, base);
	// lwz r10,88(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 88);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lbz r9,206(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 206);
	// mulli r10,r10,136
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(136));
	// addi r11,r11,13128
	ctx.r11.s64 = ctx.r11.s64 + 13128;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// beq 0x82194a68
	if (ctx.cr0.eq) goto loc_82194A68;
	// bl 0x82191ca0
	ctx.lr = 0x82194A18;
	sub_82191CA0(ctx, base);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// cmpwi cr6,r3,13
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 13, ctx.xer);
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
	// addi r6,r10,-12792
	ctx.r6.s64 = ctx.r10.s64 + -12792;
	// bne cr6,0x82194a8c
	if (!ctx.cr6.eq) goto loc_82194A8C;
	// bl 0x821f7d50
	ctx.lr = 0x82194A48;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82194ab4
	if (ctx.cr0.eq) goto loc_82194AB4;
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,190
	ctx.r5.u64 = ctx.r5.u64 | 190;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82192908
	ctx.lr = 0x82194A64;
	sub_82192908(ctx, base);
	// b 0x82194ab8
	goto loc_82194AB8;
loc_82194A68:
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
	// lwz r3,-32480(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82194A8C:
	// bl 0x821f7d50
	ctx.lr = 0x82194A90;
	sub_821F7D50(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x82194ab4
	if (ctx.cr0.eq) goto loc_82194AB4;
	// bl 0x82191ca0
	ctx.lr = 0x82194A9C;
	sub_82191CA0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82192960
	ctx.lr = 0x82194AB0;
	sub_82192960(ctx, base);
	// b 0x82194ab8
	goto loc_82194AB8;
loc_82194AB4:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
loc_82194AB8:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r3,208(r31)
	REX_STORE_U32(r31.u32 + 208, ctx.r3.u32);
	// stw r11,228(r31)
	REX_STORE_U32(r31.u32 + 228, ctx.r11.u32);
	// b 0x82194ec0
	goto loc_82194EC0;
loc_82194AC8:
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lwz r10,88(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 88);
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,2984
	ctx.r11.s64 = ctx.r11.s64 + 2984;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82194b04
	if (ctx.cr6.eq) goto loc_82194B04;
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// li r4,9
	ctx.r4.s64 = 9;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82194B00;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82194ec0
	goto loc_82194EC0;
loc_82194B04:
	// lwz r3,104(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 104);
	// bl 0x82197db8
	ctx.lr = 0x82194B0C;
	sub_82197DB8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82194ec0
	if (!ctx.cr0.eq) goto loc_82194EC0;
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 100);
	// li r25,1
	r25.s64 = 1;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r3,101
	ctx.r3.s64 = 101;
	// lwz r11,92(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// lfs f0,15632(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15632);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stb r25,76(r11)
	REX_STORE_U8(ctx.r11.u32 + 76, r25.u8);
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// lwz r11,264(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 264);
	// mulli r11,r11,37
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(37));
	// addi r11,r11,263
	ctx.r11.s64 = ctx.r11.s64 + 263;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x82191bb0
	ctx.lr = 0x82194B60;
	sub_82191BB0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// stfs f1,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r8,100(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 100);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r11,r11,13128
	ctx.r11.s64 = ctx.r11.s64 + 13128;
	// lfs f30,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	f30.f64 = double(temp.f32);
	// stfs f30,108(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r7,12(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r6,4(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r8,92(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 92);
	// stw r10,8(r8)
	REX_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// stw r7,12(r8)
	REX_STORE_U32(ctx.r8.u32 + 12, ctx.r7.u32);
	// stw r6,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r6.u32);
	// stw r9,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// lwz r10,88(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 88);
	// mulli r10,r10,136
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(136));
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// andi. r9,r10,16416
	ctx.r9.u64 = ctx.r10.u64 & 16416;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x82194e60
	if (!ctx.cr0.eq) goto loc_82194E60;
	// lbz r11,1888(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 1888);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82194e60
	if (!ctx.cr0.eq) goto loc_82194E60;
	// rlwinm. r11,r10,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82194bdc
	if (ctx.cr0.eq) goto loc_82194BDC;
	// lwz r3,104(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 104);
	// bl 0x82197de0
	ctx.lr = 0x82194BDC;
	sub_82197DE0(ctx, base);
loc_82194BDC:
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// rlwinm. r7,r10,0,22,22
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f31,1996(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1996);
	f31.f64 = double(temp.f32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r27,r11,3868
	r27.s64 = ctx.r11.s64 + 3868;
	// addi r28,r10,3852
	r28.s64 = ctx.r10.s64 + 3852;
	// addi r29,r9,3840
	r29.s64 = ctx.r9.s64 + 3840;
	// beq 0x82194cec
	if (ctx.cr0.eq) goto loc_82194CEC;
	// li r3,13
	ctx.r3.s64 = 13;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x8212bc38
	ctx.lr = 0x82194C14;
	sub_8212BC38(ctx, base);
	// lwz r11,188(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 188);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,188(r31)
	REX_STORE_U32(r31.u32 + 188, ctx.r11.u32);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x82194c2c
	if (ctx.cr6.lt) goto loc_82194C2C;
	// stw r24,188(r31)
	REX_STORE_U32(r31.u32 + 188, r24.u32);
loc_82194C2C:
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// li r10,12
	ctx.r10.s64 = 12;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r10,36(r11)
	REX_STORE_U8(ctx.r11.u32 + 36, ctx.r10.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,184(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 184);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// blt cr6,0x82194ca0
	if (ctx.cr6.lt) goto loc_82194CA0;
	// beq cr6,0x82194c88
	if (ctx.cr6.eq) goto loc_82194C88;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82194c80
	if (ctx.cr6.lt) goto loc_82194C80;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
loc_82194C6C:
	// bl 0x821f7d50
	ctx.lr = 0x82194C70;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82194cc8
	if (ctx.cr0.eq) goto loc_82194CC8;
	// li r6,2
	ctx.r6.s64 = 2;
	// b 0x82194cb4
	goto loc_82194CB4;
loc_82194C80:
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// b 0x82194c6c
	goto loc_82194C6C;
loc_82194C88:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// bl 0x821f7d50
	ctx.lr = 0x82194C90;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82194cc8
	if (ctx.cr0.eq) goto loc_82194CC8;
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x82194cb4
	goto loc_82194CB4;
loc_82194CA0:
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// bl 0x821f7d50
	ctx.lr = 0x82194CA8;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82194cc8
	if (ctx.cr0.eq) goto loc_82194CC8;
	// li r6,0
	ctx.r6.s64 = 0;
loc_82194CB4:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r7,188(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 188);
	// addi r4,r31,128
	ctx.r4.s64 = r31.s64 + 128;
	// bl 0x82198320
	ctx.lr = 0x82194CC4;
	sub_82198320(ctx, base);
	// b 0x82194ccc
	goto loc_82194CCC;
loc_82194CC8:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
loc_82194CCC:
	// rotlwi r11,r3,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// stw r3,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r3.u32);
	// stw r11,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r11.u32);
	// stb r25,244(r11)
	REX_STORE_U8(ctx.r11.u32 + 244, r25.u8);
	// lwz r10,104(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 104);
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// stw r11,88(r10)
	REX_STORE_U32(ctx.r10.u32 + 88, ctx.r11.u32);
	// stw r24,108(r31)
	REX_STORE_U32(r31.u32 + 108, r24.u32);
loc_82194CEC:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// rlwinm. r10,r11,0,18,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82194d28
	if (ctx.cr0.eq) goto loc_82194D28;
loc_82194CF8:
	// lis r8,4096
	ctx.r8.s64 = 268435456;
	// lis r7,1536
	ctx.r7.s64 = 100663296;
	// lis r6,1536
	ctx.r6.s64 = 100663296;
	// lis r5,3840
	ctx.r5.s64 = 251658240;
	// ori r8,r8,177
	ctx.r8.u64 = ctx.r8.u64 | 177;
	// ori r7,r7,1
	ctx.r7.u64 = ctx.r7.u64 | 1;
	// ori r6,r6,2
	ctx.r6.u64 = ctx.r6.u64 | 2;
	// ori r5,r5,67
	ctx.r5.u64 = ctx.r5.u64 | 67;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82191f50
	ctx.lr = 0x82194D24;
	sub_82191F50(ctx, base);
	// b 0x82194ec0
	goto loc_82194EC0;
loc_82194D28:
	// rlwinm. r10,r11,0,20,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC00;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82194cf8
	if (ctx.cr0.eq) goto loc_82194CF8;
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82194d68
	if (ctx.cr0.eq) goto loc_82194D68;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f30,172(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 172, temp.u32);
	// stfs f31,164(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 164, temp.u32);
	// stfs f31,168(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 168, temp.u32);
	// lfs f0,-24020(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -24020);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,160(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 160, temp.u32);
	// lwz r11,184(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 184);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,184(r31)
	REX_STORE_U32(r31.u32 + 184, ctx.r11.u32);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x82194d68
	if (ctx.cr6.lt) goto loc_82194D68;
	// stw r24,184(r31)
	REX_STORE_U32(r31.u32 + 184, r24.u32);
loc_82194D68:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// rlwinm. r11,r11,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82194da4
	if (ctx.cr0.eq) goto loc_82194DA4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f31,164(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 164, temp.u32);
	// stfs f31,168(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 168, temp.u32);
	// stfs f30,172(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 172, temp.u32);
	// lfs f0,16036(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16036);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,160(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 160, temp.u32);
	// lwz r11,184(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 184);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,184(r31)
	REX_STORE_U32(r31.u32 + 184, ctx.r11.u32);
	// bge 0x82194da4
	if (!ctx.cr0.lt) goto loc_82194DA4;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,184(r31)
	REX_STORE_U32(r31.u32 + 184, ctx.r11.u32);
loc_82194DA4:
	// li r3,18
	ctx.r3.s64 = 18;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x8212bc38
	ctx.lr = 0x82194DB0;
	sub_8212BC38(ctx, base);
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r24,88(r11)
	REX_STORE_U32(ctx.r11.u32 + 88, r24.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r24,188(r31)
	REX_STORE_U32(r31.u32 + 188, r24.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,184(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 184);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82194e24
	if (ctx.cr6.lt) goto loc_82194E24;
	// beq cr6,0x82194e0c
	if (ctx.cr6.eq) goto loc_82194E0C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82194e04
	if (ctx.cr6.lt) goto loc_82194E04;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
loc_82194DF0:
	// bl 0x821f7d50
	ctx.lr = 0x82194DF4;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82194e4c
	if (ctx.cr0.eq) goto loc_82194E4C;
	// li r6,2
	ctx.r6.s64 = 2;
	// b 0x82194e38
	goto loc_82194E38;
loc_82194E04:
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// b 0x82194df0
	goto loc_82194DF0;
loc_82194E0C:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// bl 0x821f7d50
	ctx.lr = 0x82194E14;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82194e4c
	if (ctx.cr0.eq) goto loc_82194E4C;
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x82194e38
	goto loc_82194E38;
loc_82194E24:
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// bl 0x821f7d50
	ctx.lr = 0x82194E2C;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82194e4c
	if (ctx.cr0.eq) goto loc_82194E4C;
	// li r6,0
	ctx.r6.s64 = 0;
loc_82194E38:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r7,188(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 188);
	// addi r4,r31,144
	ctx.r4.s64 = r31.s64 + 144;
	// bl 0x82198320
	ctx.lr = 0x82194E48;
	sub_82198320(ctx, base);
	// b 0x82194e50
	goto loc_82194E50;
loc_82194E4C:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
loc_82194E50:
	// stfs f31,196(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 196, temp.u32);
	// stw r3,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r3.u32);
	// stw r25,180(r31)
	REX_STORE_U32(r31.u32 + 180, r25.u32);
	// b 0x82194ec0
	goto loc_82194EC0;
loc_82194E60:
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// stw r24,88(r11)
	REX_STORE_U32(ctx.r11.u32 + 88, r24.u32);
	// lwz r3,104(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 104);
	// bl 0x82197d98
	ctx.lr = 0x82194E70;
	sub_82197D98(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,212(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 212);
	// bl 0x82199a88
	ctx.lr = 0x82194E7C;
	sub_82199A88(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,216(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 216);
	// bl 0x82199a88
	ctx.lr = 0x82194E88;
	sub_82199A88(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,220(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 220);
	// bl 0x82199a88
	ctx.lr = 0x82194E94;
	sub_82199A88(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,224(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 224);
	// bl 0x82199a88
	ctx.lr = 0x82194EA0;
	sub_82199A88(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,15
	ctx.r3.s64 = 15;
	// lfs f1,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8212bc38
	ctx.lr = 0x82194EB0;
	sub_8212BC38(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,176(r31)
	REX_STORE_U32(r31.u32 + 176, ctx.r11.u32);
	// stw r10,180(r31)
	REX_STORE_U32(r31.u32 + 180, ctx.r10.u32);
loc_82194EC0:
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

DEFINE_REX_FUNC(sub_821BF800) {
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
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x821bf630
	ctx.lr = 0x821BF814;
	sub_821BF630(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821BFCA0) {
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
	// mulli r11,r4,896
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(896));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r11,r11,7224
	ctx.r11.s64 = ctx.r11.s64 + 7224;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// stw r11,10008(r3)
	REX_STORE_U32(ctx.r3.u32 + 10008, ctx.r11.u32);
	// lha r10,0(r11)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 0));
	// stw r10,10016(r3)
	REX_STORE_U32(ctx.r3.u32 + 10016, ctx.r10.u32);
	// lha r10,0(r11)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 0));
	// slw r10,r7,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r10.u8 & 0x3F));
	// stw r10,10024(r3)
	REX_STORE_U32(ctx.r3.u32 + 10024, ctx.r10.u32);
	// lhz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// sth r10,10032(r3)
	REX_STORE_U16(ctx.r3.u32 + 10032, ctx.r10.u16);
	// lha r10,0(r11)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 0));
	// subfic r10,r10,1
	ctx.xer.ca = ctx.r10.u32 <= 1;
	ctx.r10.u64 = static_cast<uint64_t>(1) - ctx.r10.u64;
	// mulli r9,r10,896
	ctx.r9.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(896));
	// stw r10,10020(r3)
	REX_STORE_U32(ctx.r3.u32 + 10020, ctx.r10.u32);
	// add r10,r9,r3
	ctx.r10.u64 = ctx.r9.u64 + ctx.r3.u64;
	// addi r10,r10,7224
	ctx.r10.s64 = ctx.r10.s64 + 7224;
	// stw r10,10012(r3)
	REX_STORE_U32(ctx.r3.u32 + 10012, ctx.r10.u32);
	// lha r4,2(r11)
	ctx.r4.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 2));
	// cmpwi cr6,r4,-2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -2, ctx.xer);
	// blt cr6,0x821bfd10
	if (ctx.cr6.lt) goto loc_821BFD10;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x821bfd28
	if (ctx.cr6.lt) goto loc_821BFD28;
loc_821BFD10:
	// sth r7,72(r11)
	REX_STORE_U16(ctx.r11.u32 + 72, ctx.r7.u16);
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x821bede8
	ctx.lr = 0x821BFD1C;
	sub_821BEDE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x821a4c80
	ctx.lr = 0x821BFD28;
	sub_821A4C80(ctx, base);
loc_821BFD28:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821C1718) {
	REX_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r3,7224
	ctx.r4.s64 = ctx.r3.s64 + 7224;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// b 0x821c1680
	sub_821C1680(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821C2198) {
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
	// lhz r11,82(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 82);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// beq cr6,0x821c22a8
	if (ctx.cr6.eq) goto loc_821C22A8;
	// lhz r11,84(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 84);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// beq cr6,0x821c21dc
	if (ctx.cr6.eq) goto loc_821C21DC;
	// lbz r10,217(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 217);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x821c21dc
	if (ctx.cr0.eq) goto loc_821C21DC;
	// sth r11,82(r4)
	REX_STORE_U16(ctx.r4.u32 + 82, ctx.r11.u16);
loc_821C21DC:
	// lhz r11,86(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 86);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// beq cr6,0x821c21f8
	if (ctx.cr6.eq) goto loc_821C21F8;
	// lbz r10,194(r30)
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + 194);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x821c21f8
	if (ctx.cr0.eq) goto loc_821C21F8;
	// sth r11,82(r31)
	REX_STORE_U16(r31.u32 + 82, ctx.r11.u16);
loc_821C21F8:
	// lhz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 88);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// beq cr6,0x821c2224
	if (ctx.cr6.eq) goto loc_821C2224;
	// lbz r10,194(r30)
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + 194);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x821c2224
	if (ctx.cr0.eq) goto loc_821C2224;
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwz r10,5560(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 5560);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x821c2224
	if (ctx.cr6.lt) goto loc_821C2224;
	// sth r11,82(r31)
	REX_STORE_U16(r31.u32 + 82, ctx.r11.u16);
loc_821C2224:
	// lha r11,78(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 78));
	// lha r4,0(r31)
	ctx.r4.s64 = int16_t(REX_LOAD_U16(r31.u32 + 0));
	// mulli r11,r11,896
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(896));
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x821c2250
	if (!ctx.cr6.eq) goto loc_821C2250;
	// lhz r10,7224(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 7224);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x821c2250
	if (!ctx.cr0.eq) goto loc_821C2250;
	// lfs f0,7256(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 7256);
	ctx.f0.f64 = double(temp.f32);
	// b 0x821c2254
	goto loc_821C2254;
loc_821C2250:
	// lfs f0,7232(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 7232);
	ctx.f0.f64 = double(temp.f32);
loc_821C2254:
	// lfs f13,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x821c22a8
	if (ctx.cr6.gt) goto loc_821C22A8;
	// lha r5,82(r31)
	ctx.r5.s64 = int16_t(REX_LOAD_U16(r31.u32 + 82));
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// cmpwi cr6,r5,-3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -3, ctx.xer);
	// beq cr6,0x821c22a0
	if (ctx.cr6.eq) goto loc_821C22A0;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f1,92(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 92);
	ctx.f1.f64 = double(temp.f32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r7,-1
	ctx.r7.s64 = -1;
	// bl 0x821c1760
	ctx.lr = 0x821C2288;
	sub_821C1760(ctx, base);
	// lha r11,0(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 0));
	// mulli r11,r11,896
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(896));
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,7268(r11)
	REX_STORE_U32(ctx.r11.u32 + 7268, ctx.r10.u32);
	// b 0x821c22a8
	goto loc_821C22A8;
loc_821C22A0:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821c15b8
	ctx.lr = 0x821C22A8;
	sub_821C15B8(ctx, base);
loc_821C22A8:
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

DEFINE_REX_FUNC(sub_821C5838) {
	REX_FUNC_PROLOGUE();
	// lwz r3,100(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 100);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821C5840) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,112(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// stfs f2,116(r3)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// stfs f3,120(r3)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821C5948) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x821c58f8
	ctx.lr = 0x821C5968;
	sub_821C58F8(ctx, base);
	// addi r11,r31,4
	ctx.r11.s64 = r31.s64 + 4;
loc_821C596C:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// beq 0x821c5990
	if (ctx.cr0.eq) goto loc_821C5990;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821c596c
	if (ctx.cr6.eq) goto loc_821C596C;
loc_821C5990:
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
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

DEFINE_REX_FUNC(sub_821C7088) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x821C7090;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,5452(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 5452);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r10,5460(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 5460);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stw r10,5460(r3)
	REX_STORE_U32(ctx.r3.u32 + 5460, ctx.r10.u32);
	// sth r11,5452(r3)
	REX_STORE_U16(ctx.r3.u32 + 5452, ctx.r11.u16);
	// blt cr6,0x821c70e8
	if (ctx.cr6.lt) goto loc_821C70E8;
	// beq cr6,0x821c7100
	if (ctx.cr6.eq) goto loc_821C7100;
	// lis r29,-32168
	r29.s64 = -2108162048;
loc_821C70C8:
	// lbz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 0);
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// lwz r3,-9828(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + -9828);
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// bl 0x821e5e58
	ctx.lr = 0x821C70DC;
	sub_821E5E58(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne cr6,0x821c70c8
	if (!ctx.cr6.eq) goto loc_821C70C8;
	// b 0x821c7100
	goto loc_821C7100;
loc_821C70E8:
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// lbz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U8(r30.u32 + 0);
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// extsb r4,r9
	ctx.r4.s64 = ctx.r9.s8;
	// lwz r3,-9828(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + -9828);
	// bl 0x821e5d80
	ctx.lr = 0x821C7100;
	sub_821E5D80(ctx, base);
loc_821C7100:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_821C8B00) {
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
	// lwz r11,10140(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10140);
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// rlwinm r11,r11,14,0,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0xFFFFC000;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// beq cr6,0x821c8b74
	if (ctx.cr6.eq) goto loc_821C8B74;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x821c8b68
	if (ctx.cr6.eq) goto loc_821C8B68;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x821c8b4c
	if (ctx.cr6.eq) goto loc_821C8B4C;
	// lfs f1,20156(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20156);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,20164(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20164);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x820e0130
	ctx.lr = 0x821C8B3C;
	sub_820E0130(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2000(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// b 0x821c8b80
	goto loc_821C8B80;
loc_821C8B4C:
	// lfs f1,20172(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20172);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,20180(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20180);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x820e0130
	ctx.lr = 0x821C8B58;
	sub_820E0130(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2000(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f1,f0,f1
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// b 0x821c8b80
	goto loc_821C8B80;
loc_821C8B68:
	// lfs f1,20172(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20172);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,20180(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20180);
	ctx.f2.f64 = double(temp.f32);
	// b 0x821c8b7c
	goto loc_821C8B7C;
loc_821C8B74:
	// lfs f1,20156(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20156);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,20164(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20164);
	ctx.f2.f64 = double(temp.f32);
loc_821C8B7C:
	// bl 0x820e0130
	ctx.lr = 0x821C8B80;
	sub_820E0130(ctx, base);
loc_821C8B80:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821CABA8) {
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
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 36);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x821cac00
	if (!ctx.cr6.eq) goto loc_821CAC00;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge cr6,0x821cac00
	if (!ctx.cr6.lt) goto loc_821CAC00;
	// extsw r11,r4
	ctx.r11.s64 = ctx.r4.s32;
	// li r5,1
	ctx.r5.s64 = 1;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fneg f1,f0
	ctx.f1.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// bl 0x821c8f80
	ctx.lr = 0x821CABFC;
	sub_821C8F80(ctx, base);
	// li r4,-480
	ctx.r4.s64 = -480;
loc_821CAC00:
	// extsw r11,r4
	ctx.r11.s64 = ctx.r4.s32;
	// lfs f13,5468(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 5468);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,5472(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 5472);
	ctx.f12.f64 = double(temp.f32);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmadds f13,f12,f0,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f13.f64)));
	// stfs f13,5468(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 5468, temp.u32);
	// lhz r11,30(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 30);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bne cr6,0x821cac7c
	if (!ctx.cr6.eq) goto loc_821CAC7C;
	// lbz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 0);
	// lbz r11,22(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 22);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x821cac60
	if (ctx.cr6.eq) goto loc_821CAC60;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fneg f1,f0
	ctx.f1.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lis r10,-32170
	ctx.r10.s64 = -2108293120;
	// addi r3,r10,22960
	ctx.r3.s64 = ctx.r10.s64 + 22960;
	// lfs f2,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x821090c0
	ctx.lr = 0x821CAC60;
	sub_821090C0(ctx, base);
loc_821CAC60:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5468(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 5468);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2384(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2384);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x821cac78
	if (!ctx.cr6.lt) goto loc_821CAC78;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_821CAC78:
	// stfs f0,5468(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 5468, temp.u32);
loc_821CAC7C:
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

DEFINE_REX_FUNC(sub_821D1218) {
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
	// lis r30,-32168
	r30.s64 = -2108162048;
	// lwz r31,-8924(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + -8924);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x821d1254
	if (ctx.cr6.eq) goto loc_821D1254;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820e48c0
	ctx.lr = 0x821D1244;
	sub_820E48C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c80a8
	ctx.lr = 0x821D124C;
	sub_822C80A8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-8924(r30)
	REX_STORE_U32(r30.u32 + -8924, ctx.r11.u32);
loc_821D1254:
	// bl 0x8212c018
	ctx.lr = 0x821D1258;
	sub_8212C018(ctx, base);
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

DEFINE_REX_FUNC(sub_821D1AE8) {
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
	ctx.lr = 0x821D1AF0;
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r31,r11,432
	r31.s64 = ctx.r11.s64 + 432;
	// lwz r3,720(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 720);
	// bl 0x821b30e0
	ctx.lr = 0x821D1B08;
	sub_821B30E0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x821c4fd0
	ctx.lr = 0x821D1B10;
	sub_821C4FD0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lha r28,128(r3)
	r28.s64 = int16_t(REX_LOAD_U16(ctx.r3.u32 + 128));
	// lfs f31,19792(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 19792);
	f31.f64 = double(temp.f32);
loc_821D1B1C:
	// bl 0x821fedc8
	ctx.lr = 0x821D1B20;
	sub_821FEDC8(ctx, base);
	// fmuls f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * f31.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// lwz r3,100(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x821b30e0
	ctx.lr = 0x821D1B34;
	sub_821B30E0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpw cr6,r3,r30
	ctx.cr6.compare<int32_t>(ctx.r3.s32, r30.s32, ctx.xer);
	// beq cr6,0x821d1b1c
	if (ctx.cr6.eq) goto loc_821D1B1C;
	// cmpw cr6,r3,r28
	ctx.cr6.compare<int32_t>(ctx.r3.s32, r28.s32, ctx.xer);
	// beq cr6,0x821d1b1c
	if (ctx.cr6.eq) goto loc_821D1B1C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x821c7f28
	ctx.lr = 0x821D1B54;
	sub_821C7F28(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821d1b1c
	if (ctx.cr0.eq) goto loc_821D1B1C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821c8d20
	ctx.lr = 0x821D1B64;
	sub_821C8D20(ctx, base);
	// lwz r11,724(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 724);
	// twllei r3,0
	if (ctx.r3.s32 == 0 || ctx.r3.u32 < 0u) ppc_trap(ctx, base, 0);
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// divw r9,r11,r3
	ctx.r9.u64 = uint32_t((ctx.r3.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r3.s32 == -1)) ? ctx.r11.s32 / ctx.r3.s32 : 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mullw r9,r9,r3
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r3.s32);
	// andc r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 & ~ctx.r10.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// twlgei r10,-1
	if (ctx.r10.s32 == -1 || ctx.r10.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// subf r28,r9,r11
	r28.u64 = ctx.r11.u64 - ctx.r9.u64;
	// bl 0x821c8d20
	ctx.lr = 0x821D1B90;
	sub_821C8D20(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,724(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 724);
	// twllei r3,0
	if (ctx.r3.s32 == 0 || ctx.r3.u32 < 0u) ppc_trap(ctx, base, 0);
	// stw r10,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// divw r9,r11,r3
	ctx.r9.u64 = uint32_t((ctx.r3.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r3.s32 == -1)) ? ctx.r11.s32 / ctx.r3.s32 : 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mullw r9,r9,r3
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r3.s32);
	// andc r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 & ~ctx.r10.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// twlgei r10,-1
	if (ctx.r10.s32 == -1 || ctx.r10.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// subf r27,r9,r11
	r27.u64 = ctx.r11.u64 - ctx.r9.u64;
	// bl 0x821c4fd0
	ctx.lr = 0x821D1BC4;
	sub_821C4FD0(ctx, base);
	// lha r11,140(r3)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r3.u32 + 140));
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821bb5d8
	ctx.lr = 0x821D1BF8;
	sub_821BB5D8(ctx, base);
	// li r4,30
	ctx.r4.s64 = 30;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x821d45b0
	ctx.lr = 0x821D1C04;
	sub_821D45B0(ctx, base);
	// lwz r11,720(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 720);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// stw r3,720(r31)
	REX_STORE_U32(r31.u32 + 720, ctx.r3.u32);
	// cmpwi cr6,r3,25
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 25, ctx.xer);
	// blt cr6,0x821d1c38
	if (ctx.cr6.lt) goto loc_821D1C38;
	// lwz r11,724(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 724);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r3,720(r31)
	REX_STORE_U32(r31.u32 + 720, ctx.r3.u32);
	// stw r11,724(r31)
	REX_STORE_U32(r31.u32 + 724, ctx.r11.u32);
	// b 0x821d1c38
	goto loc_821D1C38;
loc_821D1C30:
	// bl 0x821d1a70
	ctx.lr = 0x821D1C34;
	sub_821D1A70(ctx, base);
	// lwz r3,720(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 720);
loc_821D1C38:
	// bl 0x821b30e0
	ctx.lr = 0x821D1C3C;
	sub_821B30E0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x821c7f28
	ctx.lr = 0x821D1C48;
	sub_821C7F28(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821d1c30
	if (ctx.cr0.eq) goto loc_821D1C30;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_821D81C8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// addi r11,r11,-15
	ctx.r11.s64 = ctx.r11.s64 + -15;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821D8370) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x821d8414
	if (ctx.cr6.eq) goto loc_821D8414;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x821d83e0
	if (ctx.cr6.eq) goto loc_821D83E0;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x821d83ac
	if (ctx.cr6.eq) goto loc_821D83AC;
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,-9488
	ctx.r11.s64 = ctx.r11.s64 + -9488;
	// addi r11,r11,-1376
	ctx.r11.s64 = ctx.r11.s64 + -1376;
loc_821D83A4:
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
loc_821D83AC:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,120
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 120, ctx.xer);
	// ble cr6,0x821d83d0
	if (!ctx.cr6.gt) goto loc_821D83D0;
	// addi r11,r3,-121
	ctx.r11.s64 = ctx.r3.s64 + -121;
	// li r10,30
	ctx.r10.s64 = 30;
	// divw r10,r11,r10
	ctx.r10.u64 = uint32_t((ctx.r10.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r11.s32 / ctx.r10.s32 : 0);
	// mulli r10,r10,30
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(30));
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addi r11,r11,91
	ctx.r11.s64 = ctx.r11.s64 + 91;
loc_821D83D0:
	// lis r9,-32173
	ctx.r9.s64 = -2108489728;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r9,-9488
	ctx.r11.s64 = ctx.r9.s64 + -9488;
	// b 0x821d83a4
	goto loc_821D83A4;
loc_821D83E0:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,120
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 120, ctx.xer);
	// ble cr6,0x821d8404
	if (!ctx.cr6.gt) goto loc_821D8404;
	// addi r11,r3,-121
	ctx.r11.s64 = ctx.r3.s64 + -121;
	// li r10,30
	ctx.r10.s64 = 30;
	// divw r10,r11,r10
	ctx.r10.u64 = uint32_t((ctx.r10.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r11.s32 / ctx.r10.s32 : 0);
	// mulli r10,r10,30
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(30));
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addi r11,r11,91
	ctx.r11.s64 = ctx.r11.s64 + 91;
loc_821D8404:
	// lis r10,-32173
	ctx.r10.s64 = -2108489728;
	// addi r10,r10,-9488
	ctx.r10.s64 = ctx.r10.s64 + -9488;
	// addi r10,r10,968
	ctx.r10.s64 = ctx.r10.s64 + 968;
	// b 0x821d8444
	goto loc_821D8444;
loc_821D8414:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,120
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 120, ctx.xer);
	// ble cr6,0x821d8438
	if (!ctx.cr6.gt) goto loc_821D8438;
	// addi r11,r3,-121
	ctx.r11.s64 = ctx.r3.s64 + -121;
	// li r10,30
	ctx.r10.s64 = 30;
	// divw r10,r11,r10
	ctx.r10.u64 = uint32_t((ctx.r10.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r11.s32 / ctx.r10.s32 : 0);
	// mulli r10,r10,30
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(30));
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addi r11,r11,91
	ctx.r11.s64 = ctx.r11.s64 + 91;
loc_821D8438:
	// lis r10,-32173
	ctx.r10.s64 = -2108489728;
	// addi r10,r10,-9488
	ctx.r10.s64 = ctx.r10.s64 + -9488;
	// addi r10,r10,-968
	ctx.r10.s64 = ctx.r10.s64 + -968;
loc_821D8444:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821DCE30) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x821dce40
	if (!ctx.cr6.eq) goto loc_821DCE40;
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_821DCE40:
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,5128
	ctx.r11.s64 = ctx.r11.s64 + 5128;
	// lbzx r11,r3,r11
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// subfic r11,r4,0
	ctx.xer.ca = ctx.r4.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r4.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 & ctx.r3.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821DD5D8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x821DD5E0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r31,0
	r31.s64 = 0;
	// li r30,0
	r30.s64 = 0;
	// addi r29,r11,5128
	r29.s64 = ctx.r11.s64 + 5128;
loc_821DD5F8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821dd490
	ctx.lr = 0x821DD600;
	sub_821DD490(ctx, base);
	// lha r11,0(r3)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r3.u32 + 0));
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r28.s32, ctx.xer);
	// bne cr6,0x821dd650
	if (!ctx.cr6.eq) goto loc_821DD650;
	// lbzx r11,r30,r29
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + r29.u32);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(r31.s32, 1, ctx.xer);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// beq cr6,0x821dd640
	if (ctx.cr6.eq) goto loc_821DD640;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(r31.s32, 2, ctx.xer);
	// beq cr6,0x821dd638
	if (ctx.cr6.eq) goto loc_821DD638;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(r31.s32, 3, ctx.xer);
	// bne cr6,0x821dd64c
	if (!ctx.cr6.eq) goto loc_821DD64C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x821dd64c
	if (ctx.cr6.eq) goto loc_821DD64C;
	// b 0x821dd650
	goto loc_821DD650;
loc_821DD638:
	// li r31,2
	r31.s64 = 2;
	// b 0x821dd650
	goto loc_821DD650;
loc_821DD640:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r31,0
	r31.s64 = 0;
	// beq cr6,0x821dd650
	if (ctx.cr6.eq) goto loc_821DD650;
loc_821DD64C:
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
loc_821DD650:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpwi cr6,r30,309
	ctx.cr6.compare<int32_t>(r30.s32, 309, ctx.xer);
	// blt cr6,0x821dd5f8
	if (ctx.cr6.lt) goto loc_821DD5F8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_821E02E0) {
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
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lwz r31,-32480(r10)
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + -32480);
	// lhz r11,432(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 432);
	// addi r30,r31,80
	r30.s64 = r31.s64 + 80;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lha r11,16(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 16));
	// beq 0x821e0320
	if (ctx.cr0.eq) goto loc_821E0320;
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwimi r11,r10,10,20,21
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0xC00) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF3FF);
	// b 0x821e0324
	goto loc_821E0324;
loc_821E0320:
	// rlwinm r11,r11,0,22,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFF3FF;
loc_821E0324:
	// sth r11,16(r31)
	REX_STORE_U16(r31.u32 + 16, ctx.r11.u16);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,320
	ctx.r11.s64 = ctx.r11.s64 + 320;
	// lha r11,20(r11)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 20));
	// addi r11,r11,-5
	ctx.r11.s64 = ctx.r11.s64 + -5;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stb r11,23(r30)
	REX_STORE_U8(r30.u32 + 23, ctx.r11.u8);
	// bl 0x821e0c10
	ctx.lr = 0x821E0348;
	sub_821E0C10(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821e0360
	if (ctx.cr0.eq) goto loc_821E0360;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x821e0360
	if (ctx.cr6.eq) goto loc_821E0360;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,23(r30)
	REX_STORE_U8(r30.u32 + 23, ctx.r11.u8);
loc_821E0360:
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_821E2070) {
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
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x821e2fb8
	ctx.lr = 0x821E208C;
	sub_821E2FB8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,9812
	ctx.r11.s64 = ctx.r11.s64 + 9812;
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

DEFINE_REX_FUNC(sub_821E25C0) {
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
	// bne 0x821e2650
	if (!ctx.cr0.eq) goto loc_821E2650;
	// lbz r10,2973(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 2973);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x821e2650
	if (!ctx.cr0.eq) goto loc_821E2650;
	// lhz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x821e2650
	if (!ctx.cr6.eq) goto loc_821E2650;
	// lha r10,30(r11)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 30));
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// blt cr6,0x821e2600
	if (ctx.cr6.lt) goto loc_821E2600;
	// cmpwi cr6,r10,10
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10, ctx.xer);
	// ble cr6,0x821e2650
	if (!ctx.cr6.gt) goto loc_821E2650;
loc_821E2600:
	// lbz r10,6(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 6);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x821e2650
	if (!ctx.cr0.eq) goto loc_821E2650;
	// lbz r10,2(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 2);
	// lwz r11,2980(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 2980);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821e2650
	if (!ctx.cr6.eq) goto loc_821E2650;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// li r10,10000
	ctx.r10.s64 = 10000;
	// addi r9,r11,5608
	ctx.r9.s64 = ctx.r11.s64 + 5608;
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// lwz r11,32(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srawi r7,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 31;
	// stw r11,32(r9)
	REX_STORE_U32(ctx.r9.u32 + 32, ctx.r11.u32);
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
loc_821E2650:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821E4BB8) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821E4BC0) {
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
	ctx.lr = 0x821E4BC8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x821e4c08
	if (ctx.cr6.eq) goto loc_821E4C08;
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e4c08
	if (ctx.cr6.eq) goto loc_821E4C08;
	// lwz r10,4(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x821e4c08
	if (!ctx.cr6.gt) goto loc_821E4C08;
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r30,84(r11)
	REX_STORE_U32(ctx.r11.u32 + 84, r30.u32);
	// stw r10,76(r11)
	REX_STORE_U32(ctx.r11.u32 + 76, ctx.r10.u32);
	// stw r10,80(r11)
	REX_STORE_U32(ctx.r11.u32 + 80, ctx.r10.u32);
loc_821E4C08:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// li r29,1
	r29.s64 = 1;
	// addi r11,r31,192
	ctx.r11.s64 = r31.s64 + 192;
	// lfs f13,1996(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f13.f64 = double(temp.f32);
	// li r10,770
	ctx.r10.s64 = 770;
	// li r7,2
	ctx.r7.s64 = 2;
	// stfs f13,192(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 192, temp.u32);
	// addi r27,r31,112
	r27.s64 = r31.s64 + 112;
	// stfs f13,196(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 196, temp.u32);
	// li r26,4
	r26.s64 = 4;
	// stfs f13,212(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 212, temp.u32);
	// stfs f13,224(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 224, temp.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f0,1992(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r31,164
	ctx.r4.s64 = r31.s64 + 164;
	// stfs f0,200(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 200, temp.u32);
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// stfs f0,208(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 208, temp.u32);
	// stfs f0,216(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 216, temp.u32);
	// stfs f0,228(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 228, temp.u32);
	// stfs f0,232(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 232, temp.u32);
	// stfs f0,240(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 240, temp.u32);
	// stfs f0,244(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 244, temp.u32);
	// stfs f0,248(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 248, temp.u32);
	// sth r10,16(r31)
	REX_STORE_U16(r31.u32 + 16, ctx.r10.u16);
	// lfs f13,16088(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 16088);
	ctx.f13.f64 = double(temp.f32);
	// stw r30,24(r31)
	REX_STORE_U32(r31.u32 + 24, r30.u32);
	// stfs f13,120(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 120, temp.u32);
	// std r29,80(r31)
	REX_STORE_U64(r31.u32 + 80, r29.u64);
	// stfs f0,124(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 124, temp.u32);
	// sth r29,88(r31)
	REX_STORE_U16(r31.u32 + 88, r29.u16);
	// stfs f0,144(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 144, temp.u32);
	// stb r7,90(r31)
	REX_STORE_U8(r31.u32 + 90, ctx.r7.u8);
	// stfs f0,156(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 156, temp.u32);
	// stw r27,92(r31)
	REX_STORE_U32(r31.u32 + 92, r27.u32);
	// stfs f0,148(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 148, temp.u32);
	// stw r11,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r11.u32);
	// stfs f0,152(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 152, temp.u32);
	// stw r5,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r5.u32);
	// stb r30,104(r31)
	REX_STORE_U8(r31.u32 + 104, r30.u8);
	// stb r29,105(r31)
	REX_STORE_U8(r31.u32 + 105, r29.u8);
	// stb r30,106(r31)
	REX_STORE_U8(r31.u32 + 106, r30.u8);
	// stb r30,91(r31)
	REX_STORE_U8(r31.u32 + 91, r30.u8);
	// stb r30,109(r31)
	REX_STORE_U8(r31.u32 + 109, r30.u8);
	// stb r26,186(r31)
	REX_STORE_U8(r31.u32 + 186, r26.u8);
	// bl 0x821e3550
	ctx.lr = 0x821E4CC8;
	sub_821E3550(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stb r29,188(r31)
	REX_STORE_U8(r31.u32 + 188, r29.u8);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// lfs f13,16276(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16276);
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
	// beq cr6,0x821e4cf8
	if (ctx.cr6.eq) goto loc_821E4CF8;
	// stb r29,189(r31)
	REX_STORE_U8(r31.u32 + 189, r29.u8);
	// b 0x821e4cfc
	goto loc_821E4CFC;
loc_821E4CF8:
	// stb r30,189(r31)
	REX_STORE_U8(r31.u32 + 189, r30.u8);
loc_821E4CFC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_821EB400) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r9,-32165
	ctx.r9.s64 = -2107965440;
	// lwz r10,-32480(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + -32480);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lwz r8,196(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 196);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821eb420
	if (ctx.cr6.eq) goto loc_821EB420;
	// lfs f0,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// b 0x821eb450
	goto loc_821EB450;
loc_821EB420:
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// lfs f12,192(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 192);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,200(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 200);
	ctx.f11.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r10,r10,13128
	ctx.r10.s64 = ctx.r10.s64 + 13128;
	// lfs f13,1992(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,1840(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1840);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f0,192(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 192, temp.u32);
	// lwz r10,-32480(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + -32480);
	// fdivs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f11.f64));
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
loc_821EB450:
	// lfs f13,192(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 192);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,200(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 200);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x821eb46c
	if (!ctx.cr6.gt) goto loc_821EB46C;
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r11,40(r10)
	REX_STORE_U16(ctx.r10.u32 + 40, ctx.r11.u16);
	// blr 
	return;
loc_821EB46C:
	// stfs f0,156(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 156, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821ECFF0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r9,4
	ctx.r9.s64 = 4;
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f0,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r4,12
	ctx.r8.s64 = ctx.r4.s64 + 12;
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f13,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 + 12;
	// lfs f0,1992(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f0,-13044(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -13044);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,8(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 8, temp.u32);
loc_821ED030:
	// lbzx r9,r11,r8
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// std r9,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f13,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfsu f13,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x821ed030
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821ED030;
	// lfs f0,16(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lfs f0,20(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821F02E8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x821F02F0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32166
	r30.s64 = -2108030976;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r29,r11,-32032
	r29.s64 = ctx.r11.s64 + -32032;
	// lwz r11,7792(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 7792);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,1644(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1644);
	// bl 0x821f28a0
	ctx.lr = 0x821F0314;
	sub_821F28A0(ctx, base);
	// lwz r11,7792(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 7792);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,1652(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1652);
	// bl 0x821f2908
	ctx.lr = 0x821F0324;
	sub_821F2908(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821f2bf0
	ctx.lr = 0x821F0334;
	sub_821F2BF0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821f0280
	ctx.lr = 0x821F033C;
	sub_821F0280(ctx, base);
	// addi r4,r31,16
	ctx.r4.s64 = r31.s64 + 16;
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// bl 0x821f0280
	ctx.lr = 0x821F0348;
	sub_821F0280(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r5,32(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 32);
	// bl 0x821f2c50
	ctx.lr = 0x821F0368;
	sub_821F2C50(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_821F1CD0) {
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
	ctx.lr = 0x821F1CD8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// addis r27,r11,1
	r27.s64 = ctx.r11.s64 + 65536;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// addi r27,r27,-32768
	r27.s64 = r27.s64 + -32768;
	// bl 0x821efa18
	ctx.lr = 0x821F1CF4;
	sub_821EFA18(ctx, base);
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// li r28,128
	r28.s64 = 128;
	// addi r26,r11,224
	r26.s64 = ctx.r11.s64 + 224;
loc_821F1D00:
	// lbz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821f1d54
	if (ctx.cr0.eq) goto loc_821F1D54;
	// li r29,64
	r29.s64 = 64;
loc_821F1D10:
	// lwz r31,0(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 0);
	// b 0x821f1d3c
	goto loc_821F1D3C;
loc_821F1D18:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 19, ctx.xer);
	// bge cr6,0x821f1d38
	if (!ctx.cr6.lt) goto loc_821F1D38;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// lwzx r11,r11,r26
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r26.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821F1D38;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821F1D38:
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_821F1D3C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x821f1d18
	if (!ctx.cr6.eq) goto loc_821F1D18;
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x821f1d10
	if (!ctx.cr0.eq) goto loc_821F1D10;
	// b 0x821f1d58
	goto loc_821F1D58;
loc_821F1D54:
	// addi r30,r30,256
	r30.s64 = r30.s64 + 256;
loc_821F1D58:
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// bne 0x821f1d00
	if (!ctx.cr0.eq) goto loc_821F1D00;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_821F3E98) {
	REX_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f3ecc
	if (ctx.cr6.eq) goto loc_821F3ECC;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// blt cr6,0x821f3ecc
	if (ctx.cr6.lt) goto loc_821F3ECC;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x821f3ecc
	if (!ctx.cr6.lt) goto loc_821F3ECC;
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// mulli r10,r4,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(12));
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
loc_821F3ECC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821F68E0) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// li r5,448
	ctx.r5.s64 = 448;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r11,480(r3)
	REX_STORE_U8(ctx.r3.u32 + 480, ctx.r11.u8);
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// b 0x822d5870
	sub_822D5870(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821F6C58) {
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
	ctx.lr = 0x821F6C60;
	// stfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -88, f30.u64);
	// stfd f31,-80(r1)
	REX_STORE_U64(ctx.r1.u32 + -80, f31.u64);
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f1,460(r3)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 460, temp.u32);
	// addi r27,r10,1280
	r27.s64 = ctx.r10.s64 + 1280;
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// stw r11,448(r3)
	REX_STORE_U32(ctx.r3.u32 + 448, ctx.r11.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stb r11,480(r3)
	REX_STORE_U8(ctx.r3.u32 + 480, ctx.r11.u8);
	// mr r26,r11
	r26.u64 = ctx.r11.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r31,r10,-32032
	r31.s64 = ctx.r10.s64 + -32032;
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
	// mr r24,r11
	r24.u64 = ctx.r11.u64;
	// ble cr6,0x821f6ed4
	if (!ctx.cr6.gt) goto loc_821F6ED4;
	// mr r25,r11
	r25.u64 = ctx.r11.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f30,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f30.f64 = double(temp.f32);
	// lfs f31,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	f31.f64 = double(temp.f32);
loc_821F6CBC:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// add r11,r25,r11
	ctx.r11.u64 = r25.u64 + ctx.r11.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x821f6e28
	if (ctx.cr6.lt) goto loc_821F6E28;
	// beq cr6,0x821f6e1c
	if (ctx.cr6.eq) goto loc_821F6E1C;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// beq cr6,0x821f6d68
	if (ctx.cr6.eq) goto loc_821F6D68;
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// beq cr6,0x821f6d50
	if (ctx.cr6.eq) goto loc_821F6D50;
	// cmplwi cr6,r10,10
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 10, ctx.xer);
	// beq cr6,0x821f6d10
	if (ctx.cr6.eq) goto loc_821F6D10;
	// cmplwi cr6,r10,11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 11, ctx.xer);
	// bne cr6,0x821f6ec0
	if (!ctx.cr6.eq) goto loc_821F6EC0;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lfs f1,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,72(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821F6D0C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x821f6ec0
	goto loc_821F6EC0;
loc_821F6D10:
	// lwz r10,448(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 448);
	// cmpwi cr6,r10,16
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16, ctx.xer);
	// bge cr6,0x821f6ec0
	if (!ctx.cr6.lt) goto loc_821F6EC0;
	// addi r10,r10,96
	ctx.r10.s64 = ctx.r10.s64 + 96;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r10,r30
	REX_STORE_U32(ctx.r10.u32 + r30.u32, ctx.r11.u32);
	// lwz r11,448(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 448);
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// stfs f31,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lwz r11,448(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 448);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,448(r30)
	REX_STORE_U32(r30.u32 + 448, ctx.r11.u32);
	// b 0x821f6ec0
	goto loc_821F6EC0;
loc_821F6D50:
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r3,r30,32
	ctx.r3.s64 = r30.s64 + 32;
	// li r5,192
	ctx.r5.s64 = 192;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x821F6D64;
	sub_822D4FA0(ctx, base);
	// b 0x821f6ec0
	goto loc_821F6EC0;
loc_821F6D68:
	// lbz r10,5(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x821f6ddc
	if (!ctx.cr0.eq) goto loc_821F6DDC;
	// addi r29,r30,224
	r29.s64 = r30.s64 + 224;
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x821F6D88;
	sub_822D4FA0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821f28a0
	ctx.lr = 0x821F6D94;
	sub_821F28A0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x820e02d8
	ctx.lr = 0x821F6DA0;
	sub_820E02D8(ctx, base);
	// lfs f0,240(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 240);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,244(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 244);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,248(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 248);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,224(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 224);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,228(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 228);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,232(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 232);
	ctx.f9.f64 = double(temp.f32);
	// stfs f31,364(r30)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 364, temp.u32);
	// stfs f0,352(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 352, temp.u32);
	// stfs f13,356(r30)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r30.u32 + 356, temp.u32);
	// stfs f12,360(r30)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r30.u32 + 360, temp.u32);
	// stfs f11,368(r30)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r30.u32 + 368, temp.u32);
	// stfs f10,372(r30)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r30.u32 + 372, temp.u32);
	// stfs f9,376(r30)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(r30.u32 + 376, temp.u32);
	// stfs f30,380(r30)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r30.u32 + 380, temp.u32);
	// b 0x821f6ec0
	goto loc_821F6EC0;
loc_821F6DDC:
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x821f6e08
	if (!ctx.cr6.eq) goto loc_821F6E08;
	// addi r29,r30,288
	r29.s64 = r30.s64 + 288;
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x821F6DF8;
	sub_822D4FA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x821f2908
	ctx.lr = 0x821F6E04;
	sub_821F2908(ctx, base);
	// b 0x821f6ec0
	goto loc_821F6EC0;
loc_821F6E08:
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x821f6ec0
	if (!ctx.cr6.eq) goto loc_821F6EC0;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,456(r30)
	REX_STORE_U32(r30.u32 + 456, ctx.r11.u32);
	// b 0x821f6ec0
	goto loc_821F6EC0;
loc_821F6E1C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,480(r30)
	REX_STORE_U8(r30.u32 + 480, ctx.r11.u8);
	// b 0x821f6ec0
	goto loc_821F6EC0;
loc_821F6E28:
	// lbz r10,7(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 7);
	// lwz r9,236(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 236);
	// lwz r28,0(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r11,r9,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,464(r30)
	REX_STORE_U32(r30.u32 + 464, ctx.r10.u32);
	// beq 0x821f6e48
	if (ctx.cr0.eq) goto loc_821F6E48;
	// oris r11,r10,32768
	ctx.r11.u64 = ctx.r10.u64 | 2147483648;
	// stw r11,464(r30)
	REX_STORE_U32(r30.u32 + 464, ctx.r11.u32);
loc_821F6E48:
	// addi r4,r30,32
	ctx.r4.s64 = r30.s64 + 32;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821f4978
	ctx.lr = 0x821F6E54;
	sub_821F4978(ctx, base);
	// lwz r29,24(r28)
	r29.u64 = REX_LOAD_U32(r28.u32 + 24);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x821f6ec0
	if (ctx.cr6.eq) goto loc_821F6EC0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82424880
	ctx.lr = 0x821F6E68;
	sub_82424880(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x821f6ec0
	if (!ctx.cr0.gt) goto loc_821F6EC0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
loc_821F6E74:
	// lwz r10,0(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 0);
	// addi r11,r27,8
	ctx.r11.s64 = r27.s64 + 8;
	// addi r9,r27,8
	ctx.r9.s64 = r27.s64 + 8;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stwx r26,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, r26.u32);
	// stwx r29,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, r29.u32);
	// bl 0x821f62c8
	ctx.lr = 0x821F6E98;
	sub_821F62C8(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// addi r10,r27,8
	ctx.r10.s64 = r27.s64 + 8;
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// addi r29,r29,24
	r29.s64 = r29.s64 + 24;
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
	// stfsx f1,r9,r10
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, temp.u32);
	// bne 0x821f6e74
	if (!ctx.cr0.eq) goto loc_821F6E74;
loc_821F6EC0:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// addi r25,r25,8
	r25.s64 = r25.s64 + 8;
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(r24.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821f6cbc
	if (ctx.cr6.lt) goto loc_821F6CBC;
loc_821F6ED4:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x821f6f84
	if (!ctx.cr6.gt) goto loc_821F6F84;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
loc_821F6EEC:
	// addi r11,r27,8
	ctx.r11.s64 = r27.s64 + 8;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_821F6EF4:
	// lfs f0,28(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x821f6f70
	if (!ctx.cr6.gt) goto loc_821F6F70;
	// lwz r7,16(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lwz r5,20(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// addi r29,r11,16
	r29.s64 = ctx.r11.s64 + 16;
	// lwz r3,24(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r29,28(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r28,0(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r7,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r7.u32);
	// stw r5,4(r6)
	REX_STORE_U32(ctx.r6.u32 + 4, ctx.r5.u32);
	// stw r3,8(r6)
	REX_STORE_U32(ctx.r6.u32 + 8, ctx.r3.u32);
	// stw r29,12(r6)
	REX_STORE_U32(ctx.r6.u32 + 12, r29.u32);
	// lwz r5,4(r4)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r29,8(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r26,12(r11)
	r26.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r28,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, r28.u32);
	// stw r5,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// lwz r7,12(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r6,0(r4)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r4,8(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// stw r3,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r3.u32);
	// stw r29,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, r29.u32);
	// stw r26,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, r26.u32);
	// stw r7,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// stw r4,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
loc_821F6F70:
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bne 0x821f6ef4
	if (!ctx.cr0.eq) goto loc_821F6EF4;
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x821f6eec
	if (!ctx.cr0.eq) goto loc_821F6EEC;
loc_821F6F84:
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lbz r5,480(r30)
	ctx.r5.u64 = REX_LOAD_U8(r30.u32 + 480);
	// bl 0x822a1098
	ctx.lr = 0x821F6F94;
	sub_822A1098(ctx, base);
	// lbz r11,480(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 480);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821f7238
	if (ctx.cr0.eq) goto loc_821F7238;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x822a9aa8
	ctx.lr = 0x821F6FAC;
	sub_822A9AA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x821f3f40
	ctx.lr = 0x821F6FB8;
	sub_821F3F40(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x822a9aa8
	ctx.lr = 0x821F6FC4;
	sub_822A9AA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x821f3f40
	ctx.lr = 0x821F6FD0;
	sub_821F3F40(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x822a9c78
	ctx.lr = 0x821F6FDC;
	sub_822A9C78(ctx, base);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f0,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lfs f0,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lwz r30,7792(r10)
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + 7792);
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// addi r3,r30,1700
	ctx.r3.s64 = r30.s64 + 1700;
	// bl 0x82202070
	ctx.lr = 0x821F700C;
	sub_82202070(ctx, base);
	// lwz r10,1728(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 1728);
	// lwz r9,1732(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 1732);
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,1736(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 1736);
	// lfs f13,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// lwz r7,1740(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 1740);
	// lfs f12,120(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,176(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stfs f13,180(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// stfs f12,184(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r8,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// stw r7,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
	// bl 0x822a9b70
	ctx.lr = 0x821F7054;
	sub_822A9B70(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lfs f12,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// bl 0x822a9bb0
	ctx.lr = 0x821F7078;
	sub_822A9BB0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lfs f0,2384(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2384);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2344(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2344);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x822a9c18
	ctx.lr = 0x821F709C;
	sub_822A9C18(ctx, base);
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lfs f1,384(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 384);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822a9bf0
	ctx.lr = 0x821F70AC;
	sub_822A9BF0(ctx, base);
	// lis r29,-32173
	r29.s64 = -2108489728;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// lwz r30,508(r29)
	r30.u64 = REX_LOAD_U32(r29.u32 + 508);
	// bl 0x821fa860
	ctx.lr = 0x821F70C0;
	sub_821FA860(ctx, base);
	// addi r11,r3,112
	ctx.r11.s64 = ctx.r3.s64 + 112;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x821f6bf0
	ctx.lr = 0x821F70F0;
	sub_821F6BF0(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x822aa6f0
	ctx.lr = 0x821F7100;
	sub_822AA6F0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// lwz r29,508(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 508);
	// lwz r30,2956(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 2956);
	// bl 0x821fa860
	ctx.lr = 0x821F7118;
	sub_821FA860(ctx, base);
	// addi r11,r3,336
	ctx.r11.s64 = ctx.r3.s64 + 336;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f0,16308(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16308);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f11,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fadds f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f12,164(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f13,168(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// bl 0x822a5980
	ctx.lr = 0x821F715C;
	sub_822A5980(ctx, base);
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r9,r11,3360
	ctx.r9.s64 = ctx.r11.s64 + 3360;
	// lwz r11,3376(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 3376);
	// clrlwi. r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x821f719c
	if (!ctx.cr0.eq) goto loc_821F719C;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,3376(r10)
	REX_STORE_U32(ctx.r10.u32 + 3376, ctx.r11.u32);
	// lfs f0,18508(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 18508);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2024(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 2024);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,0(r9)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// stfs f13,4(r9)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// stfs f0,8(r9)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// b 0x821f71a0
	goto loc_821F71A0;
loc_821F719C:
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
loc_821F71A0:
	// lis r8,-32165
	ctx.r8.s64 = -2107965440;
	// rlwinm. r7,r11,0,30,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r8,r8,3344
	ctx.r8.s64 = ctx.r8.s64 + 3344;
	// bne 0x821f71d4
	if (!ctx.cr0.eq) goto loc_821F71D4;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,3376(r10)
	REX_STORE_U32(ctx.r10.u32 + 3376, ctx.r11.u32);
	// lfs f13,-18552(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + -18552);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,16188(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 16188);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,0(r8)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// stfs f12,4(r8)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// stfs f13,8(r8)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r8.u32 + 8, temp.u32);
loc_821F71D4:
	// stfs f0,64(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 64, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f0,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 68, temp.u32);
	// lfs f0,8(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,72(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 72, temp.u32);
	// lfs f0,0(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 80, temp.u32);
	// lfs f0,4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 84, temp.u32);
	// lfs f0,8(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 88, temp.u32);
	// bl 0x822a8a60
	ctx.lr = 0x821F7208;
	sub_822A8A60(ctx, base);
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x822a99f0
	ctx.lr = 0x821F7218;
	sub_822A99F0(ctx, base);
	// addi r5,r1,320
	ctx.r5.s64 = ctx.r1.s64 + 320;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x822a99f0
	ctx.lr = 0x821F7228;
	sub_822A99F0(ctx, base);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x822aa6f0
	ctx.lr = 0x821F7238;
	sub_822AA6F0(ctx, base);
loc_821F7238:
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// lfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_82211808) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10556(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10556);
	// rlwimi r11,r4,24,0,7
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xFF000000) | (ctx.r11.u64 & 0xFFFFFFFF00FFFFFF);
	// stw r11,10556(r3)
	REX_STORE_U32(ctx.r3.u32 + 10556, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82211F10) {
	REX_FUNC_PROLOGUE();
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lbz r3,10864(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 10864);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82212308) {
	REX_FUNC_PROLOGUE();
	// mulli r11,r4,24
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(24));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,1172(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1172);
	// rlwinm r3,r11,29,30,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x3;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822125D0) {
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
	ctx.lr = 0x822125D8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82212640
	if (ctx.cr6.eq) goto loc_82212640;
	// lwz r10,24(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 24);
	// subfic r11,r4,17
	ctx.xer.ca = ctx.r4.u32 <= 17;
	ctx.r11.u64 = static_cast<uint64_t>(17) - ctx.r4.u64;
	// lwz r5,28(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 28);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// addi r4,r11,222
	ctx.r4.s64 = ctx.r11.s64 + 222;
	// rlwinm r7,r10,12,20,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r7,512
	ctx.r11.s64 = ctx.r7.s64 + 512;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// rlwinm r7,r4,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r6,r6,r5
	ctx.r6.u64 = ctx.r5.u64 - ctx.r6.u64;
	// stwx r11,r7,r3
	REX_STORE_U32(ctx.r7.u32 + ctx.r3.u32, ctx.r11.u32);
	// stw r6,1780(r9)
	REX_STORE_U32(ctx.r9.u32 + 1780, ctx.r6.u32);
	// ld r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// std r11,24(r3)
	REX_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
loc_82212640:
	// addi r11,r29,3209
	ctx.r11.s64 = r29.s64 + 3209;
	// rlwinm r27,r11,2,0,29
	r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r28,r27,r31
	r28.u64 = REX_LOAD_U32(r27.u32 + r31.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x822126b8
	if (ctx.cr6.eq) goto loc_822126B8;
	// lwz r11,11036(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 11036);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82212668
	if (ctx.cr6.eq) goto loc_82212668;
	// stw r11,8(r28)
	REX_STORE_U32(r28.u32 + 8, ctx.r11.u32);
	// b 0x822126b8
	goto loc_822126B8;
loc_82212668:
	// lwz r11,11040(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 11040);
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822126b8
	if (ctx.cr0.eq) goto loc_822126B8;
	// lwz r11,13932(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 13932);
	// lwz r3,13928(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 13928);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82212690
	if (ctx.cr6.lt) goto loc_82212690;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822158d0
	ctx.lr = 0x82212690;
	sub_822158D0(ctx, base);
loc_82212690:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
	// rlwimi r11,r28,30,2,31
	ctx.r11.u64 = (__builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 30) & 0x3FFFFFFF) | (ctx.r11.u64 & 0xFFFFFFFFC0000000);
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// rlwinm r11,r11,0,2,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// ld r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// stw r9,13928(r31)
	REX_STORE_U32(r31.u32 + 13928, ctx.r9.u32);
loc_822126B8:
	// add r11,r31,r29
	ctx.r11.u64 = r31.u64 + r29.u64;
	// stwx r30,r27,r31
	REX_STORE_U32(r27.u32 + r31.u32, r30.u32);
	// rlwinm r9,r26,30,24,31
	ctx.r9.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 30) & 0xFF;
	// rlwinm. r10,r26,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 30) & 0x3FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r9,12904(r11)
	REX_STORE_U8(ctx.r11.u32 + 12904, ctx.r9.u8);
	// beq 0x822126e8
	if (ctx.cr0.eq) goto loc_822126E8;
	// lbz r11,12264(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 12264);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822126e8
	if (ctx.cr6.eq) goto loc_822126E8;
	// ld r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 16);
	// oris r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 524288;
	// std r11,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r11.u64);
loc_822126E8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_82217C00) {
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
	// lwz r11,11044(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 11044);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,56(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r3,48(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// rlwimi r11,r4,12,18,19
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 12) & 0x3000) | (ctx.r11.u64 & 0xFFFFFFFFFFFFCFFF);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// stw r11,11044(r31)
	REX_STORE_U32(r31.u32 + 11044, ctx.r11.u32);
	// ble cr6,0x82217c38
	if (!ctx.cr6.gt) goto loc_82217C38;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82215008
	ctx.lr = 0x82217C38;
	sub_82215008(ctx, base);
loc_82217C38:
	// li r11,1480
	ctx.r11.s64 = 1480;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// li r11,3841
	ctx.r11.s64 = 3841;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lwz r11,11044(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 11044);
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
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

DEFINE_REX_FUNC(sub_8221A920) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8221A928;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// addi r29,r3,12816
	r29.s64 = ctx.r3.s64 + 12816;
loc_8221A938:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r10,15236(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 15236);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8221a958
	if (ctx.cr6.eq) goto loc_8221A958;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82212f10
	ctx.lr = 0x8221A958;
	sub_82212F10(ctx, base);
loc_8221A958:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(r30.u32, 4, ctx.xer);
	// blt cr6,0x8221a938
	if (ctx.cr6.lt) goto loc_8221A938;
	// lwz r11,12832(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12832);
	// lwz r10,15228(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 15228);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8221a984
	if (ctx.cr6.eq) goto loc_8221A984;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822132a0
	ctx.lr = 0x8221A984;
	sub_822132A0(ctx, base);
loc_8221A984:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822268e0
	ctx.lr = 0x8221A990;
	sub_822268E0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822266d8
	ctx.lr = 0x8221A99C;
	sub_822266D8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82226af8
	ctx.lr = 0x8221A9A8;
	sub_82226AF8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82212778
	ctx.lr = 0x8221A9B4;
	sub_82212778(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r30,0
	r30.s64 = 0;
	// rldicr r29,r11,63,63
	r29.u64 = __builtin_rotateleft64(ctx.r11.u64, 63) & 0xFFFFFFFFFFFFFFFF;
loc_8221A9C0:
	// subfic r11,r30,95
	ctx.xer.ca = r30.u32 <= 95;
	ctx.r11.u64 = static_cast<uint64_t>(95) - r30.u64;
	// li r7,4
	ctx.r7.s64 = 4;
	// mulli r11,r11,21846
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(21846));
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// srd r8,r29,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x40 ? 0 : (r29.u64 >> (ctx.r11.u8 & 0x7F));
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822125d0
	ctx.lr = 0x8221A9F0;
	sub_822125D0(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplwi cr6,r30,16
	ctx.cr6.compare<uint32_t>(r30.u32, 16, ctx.xer);
	// blt cr6,0x8221a9c0
	if (ctx.cr6.lt) goto loc_8221A9C0;
	// li r30,0
	r30.s64 = 0;
loc_8221AA00:
	// addi r11,r30,32
	ctx.r11.s64 = r30.s64 + 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// srd r6,r29,r11
	ctx.r6.u64 = ctx.r11.u8 & 0x40 ? 0 : (r29.u64 >> (ctx.r11.u8 & 0x7F));
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82223398
	ctx.lr = 0x8221AA1C;
	sub_82223398(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplwi cr6,r30,26
	ctx.cr6.compare<uint32_t>(r30.u32, 26, ctx.xer);
	// blt cr6,0x8221aa00
	if (ctx.cr6.lt) goto loc_8221AA00;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8221F678) {
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
	ctx.lr = 0x8221F680;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221f720
	if (ctx.cr6.eq) goto loc_8221F720;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r31,r11,20
	r31.s64 = ctx.r11.s64 + 20;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// add r27,r11,r31
	r27.u64 = ctx.r11.u64 + r31.u64;
	// b 0x8221f718
	goto loc_8221F718;
loc_8221F6AC:
	// lhz r28,2(r31)
	r28.u64 = REX_LOAD_U16(r31.u32 + 2);
	// addi r11,r31,4
	ctx.r11.s64 = r31.s64 + 4;
	// lhz r26,0(r31)
	r26.u64 = REX_LOAD_U16(r31.u32 + 0);
	// cmplwi r28,0
	ctx.cr0.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq 0x8221f720
	if (ctx.cr0.eq) goto loc_8221F720;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r31,r11,4
	r31.s64 = ctx.r11.s64 + 4;
	// lwz r11,56(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 56);
	// lwz r3,48(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 48);
	// add r30,r10,r25
	r30.u64 = ctx.r10.u64 + r25.u64;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8221f6e4
	if (!ctx.cr6.gt) goto loc_8221F6E4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82215008
	ctx.lr = 0x8221F6E4;
	sub_82215008(ctx, base);
loc_8221F6E4:
	// lis r10,-16382
	ctx.r10.s64 = -1073610752;
	// rlwinm r11,r30,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 12) & 0xFFF;
	// ori r10,r10,12032
	ctx.r10.u64 = ctx.r10.u64 | 12032;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// clrlwi r10,r30,3
	ctx.r10.u64 = r30.u32 & 0x1FFFFFFF;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r26,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// stwu r28,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r28.u32);
	ctx.r3.u32 = ea;
	// stw r3,48(r29)
	REX_STORE_U32(r29.u32 + 48, ctx.r3.u32);
loc_8221F718:
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(r31.u32, r27.u32, ctx.xer);
	// blt cr6,0x8221f6ac
	if (ctx.cr6.lt) goto loc_8221F6AC;
loc_8221F720:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_82222848) {
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
	ctx.lr = 0x82222850;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r20,340(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// rlwinm r11,r20,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r22,r7
	r22.u64 = ctx.r7.u64;
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// mr r31,r9
	r31.u64 = ctx.r9.u64;
	// mr r26,r10
	r26.u64 = ctx.r10.u64;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// addi r25,r11,1
	r25.s64 = ctx.r11.s64 + 1;
	// beq cr6,0x822228f8
	if (ctx.cr6.eq) goto loc_822228F8;
	// cmpwi cr6,r3,17
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 17, ctx.xer);
	// beq cr6,0x822228bc
	if (ctx.cr6.eq) goto loc_822228BC;
	// cmpwi cr6,r3,18
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 18, ctx.xer);
	// beq cr6,0x822228b4
	if (ctx.cr6.eq) goto loc_822228B4;
	// cmpwi cr6,r3,19
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 19, ctx.xer);
	// beq cr6,0x822228f8
	if (ctx.cr6.eq) goto loc_822228F8;
	// cmpwi cr6,r3,20
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 20, ctx.xer);
	// bne cr6,0x82222900
	if (!ctx.cr6.eq) goto loc_82222900;
	// li r30,0
	r30.s64 = 0;
	// li r26,0
	r26.s64 = 0;
	// b 0x8222290c
	goto loc_8222290C;
loc_822228B4:
	// li r30,3
	r30.s64 = 3;
	// b 0x8222290c
	goto loc_8222290C;
loc_822228BC:
	// li r30,2
	r30.s64 = 2;
loc_822228C0:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
loc_822228C4:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// bne cr6,0x822228e0
	if (!ctx.cr6.eq) goto loc_822228E0;
	// mr r6,r20
	ctx.r6.u64 = r20.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822214f8
	ctx.lr = 0x822228DC;
	sub_822214F8(ctx, base);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
loc_822228E0:
	// cmpwi cr6,r26,2
	ctx.cr6.compare<int32_t>(r26.s32, 2, ctx.xer);
	// bne cr6,0x82222914
	if (!ctx.cr6.eq) goto loc_82222914;
	// subfic r11,r22,1
	ctx.xer.ca = r22.u32 <= 1;
	ctx.r11.u64 = static_cast<uint64_t>(1) - r22.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r23,r11,31
	r23.u64 = ctx.r11.u32 & 0x1;
	// b 0x82222918
	goto loc_82222918;
loc_822228F8:
	// li r30,1
	r30.s64 = 1;
	// b 0x82222904
	goto loc_82222904;
loc_82222900:
	// lwz r30,136(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
loc_82222904:
	// cmpwi cr6,r19,17
	ctx.cr6.compare<int32_t>(r19.s32, 17, ctx.xer);
	// beq cr6,0x822228c0
	if (ctx.cr6.eq) goto loc_822228C0;
loc_8222290C:
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x822228c4
	goto loc_822228C4;
loc_82222914:
	// mr r23,r26
	r23.u64 = r26.u64;
loc_82222918:
	// lwz r11,356(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// addi r10,r1,136
	ctx.r10.s64 = ctx.r1.s64 + 136;
	// lwz r21,348(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// addi r9,r1,132
	ctx.r9.s64 = ctx.r1.s64 + 132;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r10,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// clrlwi r26,r31,26
	r26.u64 = r31.u32 & 0x3F;
	// stw r9,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// stw r6,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// rlwinm r9,r31,24,31,31
	ctx.r9.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 24) & 0x1;
	// stw r20,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r20.u32);
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// stw r21,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r21.u32);
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822216a0
	ctx.lr = 0x8222296C;
	sub_822216A0(ctx, base);
	// lis r10,16
	ctx.r10.s64 = 1048576;
	// rlwinm. r11,r24,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ori r10,r10,3
	ctx.r10.u64 = ctx.r10.u64 | 3;
	// beq 0x82222984
	if (ctx.cr0.eq) goto loc_82222984;
	// lis r10,48
	ctx.r10.s64 = 3145728;
	// ori r10,r10,3
	ctx.r10.u64 = ctx.r10.u64 | 3;
loc_82222984:
	// rlwinm. r11,r24,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82222990
	if (ctx.cr0.eq) goto loc_82222990;
	// oris r10,r10,64
	ctx.r10.u64 = ctx.r10.u64 | 4194304;
loc_82222990:
	// lwz r11,364(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// lis r9,-1
	ctx.r9.s64 = -65536;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(r30.u32, 1, ctx.xer);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// rlwimi r10,r30,9,21,22
	ctx.r10.u64 = (__builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 9) & 0x600) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF9FF);
	// stw r9,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// stw r9,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r9.u32);
	// stw r7,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// stw r10,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// blt cr6,0x82222a58
	if (ctx.cr6.lt) goto loc_82222A58;
	// beq cr6,0x82222a20
	if (ctx.cr6.eq) goto loc_82222A20;
	// cmplwi cr6,r30,3
	ctx.cr6.compare<uint32_t>(r30.u32, 3, ctx.xer);
	// blt cr6,0x822229f0
	if (ctx.cr6.lt) goto loc_822229F0;
	// bne cr6,0x82222a68
	if (!ctx.cr6.eq) goto loc_82222A68;
	// subf r9,r25,r28
	ctx.r9.u64 = r28.u64 - r25.u64;
	// subf r8,r25,r29
	ctx.r8.u64 = r29.u64 - r25.u64;
	// addi r7,r27,-1
	ctx.r7.s64 = r27.s64 + -1;
	// rlwimi r8,r9,13,6,18
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 13) & 0x3FFE000) | (ctx.r8.u64 & 0xFFFFFFFFFC001FFF);
	// rlwimi r8,r7,26,0,5
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 26) & 0xFC000000) | (ctx.r8.u64 & 0xFFFFFFFF03FFFFFF);
	// b 0x82222a64
	goto loc_82222A64;
loc_822229F0:
	// lwz r9,36(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// subf r8,r25,r29
	ctx.r8.u64 = r29.u64 - r25.u64;
	// subf r7,r25,r28
	ctx.r7.u64 = r28.u64 - r25.u64;
	// rlwimi r8,r9,0,0,20
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFF800) | (ctx.r8.u64 & 0xFFFFFFFF000007FF);
	// subf r6,r25,r27
	ctx.r6.u64 = r27.u64 - r25.u64;
	// rlwinm r9,r7,11,10,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 11) & 0x3FF800;
	// stw r8,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r8.u32);
	// rlwinm r7,r6,22,0,9
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 22) & 0xFFC00000;
	// rotlwi r8,r8,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// clrlwi r8,r8,21
	ctx.r8.u64 = ctx.r8.u32 & 0x7FF;
	// b 0x82222a4c
	goto loc_82222A4C;
loc_82222A20:
	// lwz r9,36(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// subf r8,r25,r29
	ctx.r8.u64 = r29.u64 - r25.u64;
	// subf r7,r25,r28
	ctx.r7.u64 = r28.u64 - r25.u64;
	// rlwimi r8,r9,0,0,18
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFE000) | (ctx.r8.u64 & 0xFFFFFFFF00001FFF);
	// addi r9,r27,-1
	ctx.r9.s64 = r27.s64 + -1;
	// stw r8,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r8.u32);
	// rlwinm r8,r7,13,6,18
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 13) & 0x3FFE000;
	// rlwinm r9,r9,26,0,5
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0xFC000000;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// lwz r8,36(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi r8,r8,19
	ctx.r8.u64 = ctx.r8.u32 & 0x1FFF;
loc_82222A4C:
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stw r9,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r9.u32);
	// b 0x82222a68
	goto loc_82222A68;
loc_82222A58:
	// lwz r9,36(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// subf r8,r25,r29
	ctx.r8.u64 = r29.u64 - r25.u64;
	// rlwimi r8,r9,0,0,7
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFF000000) | (ctx.r8.u64 & 0xFFFFFFFF00FFFFFF);
loc_82222A64:
	// stw r8,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r8.u32);
loc_82222A68:
	// srawi r9,r31,15
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x7FFF) != 0);
	ctx.r9.s64 = r31.s32 >> 15;
	// lwz r8,128(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// srawi r7,r31,13
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1FFF) != 0);
	ctx.r7.s64 = r31.s32 >> 13;
	// lwz r6,28(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// srawi r5,r31,11
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x7FF) != 0);
	ctx.r5.s64 = r31.s32 >> 11;
	// lwz r4,32(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// srawi r3,r31,9
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1FF) != 0);
	ctx.r3.s64 = r31.s32 >> 9;
	// lwz r30,40(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// rlwimi r7,r9,2,28,29
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xC) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFFF3);
	// lwz r28,44(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// srawi r29,r31,8
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0xFF) != 0);
	r29.s64 = r31.s32 >> 8;
	// lwz r9,372(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// addi r27,r19,-19
	r27.s64 = r19.s64 + -19;
	// lwz r25,132(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// rlwimi r8,r29,14,0,17
	ctx.r8.u64 = (__builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 14) & 0xFFFFC000) | (ctx.r8.u64 & 0xFFFFFFFF00003FFF);
	// lwz r24,380(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// clrlwi r7,r7,28
	ctx.r7.u64 = ctx.r7.u32 & 0xF;
	// lwz r29,136(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// cntlzw r27,r27
	r27.u64 = r27.u32 == 0 ? 32 : __builtin_clz(r27.u32);
	// rlwimi r5,r7,2,0,29
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r5.u64 & 0xFFFFFFFF00000003);
	// rlwimi r6,r8,17,0,9
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 17) & 0xFFC00000) | (ctx.r6.u64 & 0xFFFFFFFF003FFFFF);
	// srawi r19,r31,6
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x3F) != 0);
	r19.s64 = r31.s32 >> 6;
	// rlwinm r8,r27,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 27) & 0x1;
	// rlwimi r3,r5,2,0,29
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r3.u64 & 0xFFFFFFFF00000003);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// rlwimi r19,r8,4,27,27
	r19.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0x10) | (r19.u64 & 0xFFFFFFFFFFFFFFEF);
	// rlwinm r8,r4,0,0,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFC0;
	// rlwinm r5,r20,18,0,13
	ctx.r5.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 18) & 0xFFFC0000;
	// clrlwi r6,r21,26
	ctx.r6.u64 = r21.u32 & 0x3F;
	// rlwinm r7,r7,0,0,21
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFC00;
	// rlwinm r4,r3,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// or r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 | ctx.r5.u64;
	// or r7,r4,r7
	ctx.r7.u64 = ctx.r4.u64 | ctx.r7.u64;
	// srawi r5,r31,17
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1FFFF) != 0);
	ctx.r5.s64 = r31.s32 >> 17;
	// or r8,r8,r26
	ctx.r8.u64 = ctx.r8.u64 | r26.u64;
	// rlwimi r5,r6,13,0,18
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 13) & 0xFFFFE000) | (ctx.r5.u64 & 0xFFFFFFFF00001FFF);
	// ori r7,r7,2
	ctx.r7.u64 = ctx.r7.u64 | 2;
	// addi r4,r22,-1
	ctx.r4.s64 = r22.s64 + -1;
	// rlwimi r8,r19,6,24,25
	ctx.r8.u64 = (__builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 6) & 0xC0) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFF3F);
	// stw r7,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r7.u32);
	// rlwinm r6,r30,0,1,12
	ctx.r6.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x7FF80000;
	// rlwimi r28,r4,6,22,25
	r28.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 6) & 0x3C0) | (r28.u64 & 0xFFFFFFFFFFFFFC3F);
	// rlwimi r8,r19,6,21,21
	ctx.r8.u64 = (__builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 6) & 0x400) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFBFF);
	// rlwimi r10,r23,11,20,20
	ctx.r10.u64 = (__builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 11) & 0x800) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF7FF);
	// stw r28,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, r28.u32);
	// or r7,r5,r6
	ctx.r7.u64 = ctx.r5.u64 | ctx.r6.u64;
	// stw r8,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r8.u32);
	// stw r10,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// stw r7,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r7.u32);
	// stw r25,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, r25.u32);
	// stw r29,0(r24)
	REX_STORE_U32(r24.u32 + 0, r29.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822d4eb4
	return;
}

DEFINE_REX_FUNC(sub_82232888) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e6c
	ctx.lr = 0x82232890;
	// stfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -104, f31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r21,r8
	r21.u64 = ctx.r8.u64;
	// mr r23,r10
	r23.u64 = ctx.r10.u64;
	// rlwinm. r11,r10,16,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r27,1
	r27.s64 = 1;
	// bne 0x822328c8
	if (!ctx.cr0.eq) goto loc_822328C8;
	// li r26,1
	r26.s64 = 1;
	// b 0x822328d8
	goto loc_822328D8;
loc_822328C8:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// li r26,0
	r26.s64 = 0;
	// beq cr6,0x822328d8
	if (ctx.cr6.eq) goto loc_822328D8;
	// li r27,0
	r27.s64 = 0;
loc_822328D8:
	// li r11,40
	ctx.r11.s64 = 40;
	// li r10,8
	ctx.r10.s64 = 8;
	// slw r11,r11,r27
	ctx.r11.u64 = r27.u8 & 0x20 ? 0 : (ctx.r11.u32 << (r27.u8 & 0x3F));
	// slw r10,r10,r26
	ctx.r10.u64 = r26.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r26.u8 & 0x3F));
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r8,r10,r28
	ctx.r8.u64 = ctx.r10.u64 + r28.u64;
	// addi r4,r9,-1
	ctx.r4.s64 = ctx.r9.s64 + -1;
	// addi r30,r8,-1
	r30.s64 = ctx.r8.s64 + -1;
	// rotlwi r6,r4,1
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r4.u32, 1);
	// rotlwi r8,r29,1
	ctx.r8.u64 = __builtin_rotateleft32(r29.u32, 1);
	// divw r4,r4,r11
	ctx.r4.u64 = uint32_t((ctx.r11.s32 && !(ctx.r4.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r4.s32 / ctx.r11.s32 : 0);
	// rotlwi r5,r30,1
	ctx.r5.u64 = __builtin_rotateleft32(r30.u32, 1);
	// rotlwi r9,r7,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// divw r25,r29,r11
	r25.u64 = uint32_t((ctx.r11.s32 && !(r29.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? r29.s32 / ctx.r11.s32 : 0);
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// mullw r31,r4,r11
	r31.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r11.s32);
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// divw r4,r30,r10
	ctx.r4.u64 = uint32_t((ctx.r10.s32 && !(r30.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? r30.s32 / ctx.r10.s32 : 0);
	// mullw r30,r25,r11
	r30.s64 = int64_t(r25.s32) * int64_t(ctx.r11.s32);
	// andc r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 & ~ctx.r6.u64;
	// andc r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 & ~ctx.r8.u64;
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// andc r5,r10,r5
	ctx.r5.u64 = ctx.r10.u64 & ~ctx.r5.u64;
	// divw r11,r7,r10
	ctx.r11.u64 = uint32_t((ctx.r10.s32 && !(ctx.r7.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r7.s32 / ctx.r10.s32 : 0);
	// andc r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 & ~ctx.r9.u64;
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// twlgei r6,-1
	if (ctx.r6.s32 == -1 || ctx.r6.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// twlgei r5,-1
	if (ctx.r5.s32 == -1 || ctx.r5.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// mullw r25,r4,r10
	r25.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r10.s32);
	// twlgei r8,-1
	if (ctx.r8.s32 == -1 || ctx.r8.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// twlgei r9,-1
	if (ctx.r9.s32 == -1 || ctx.r9.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// mullw r24,r11,r10
	r24.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// cmpw cr6,r31,r30
	ctx.cr6.compare<int32_t>(r31.s32, r30.s32, ctx.xer);
	// bge cr6,0x82232aa8
	if (!ctx.cr6.lt) goto loc_82232AA8;
	// cmpw cr6,r25,r24
	ctx.cr6.compare<int32_t>(r25.s32, r24.s32, ctx.xer);
	// bge cr6,0x82232aa8
	if (!ctx.cr6.lt) goto loc_82232AA8;
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// lwz r11,11232(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 11232);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82232aa8
	if (ctx.cr6.eq) goto loc_82232AA8;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// cmpw cr6,r31,r3
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r3.s32, ctx.xer);
	// ble cr6,0x822329a8
	if (!ctx.cr6.gt) goto loc_822329A8;
	// stw r3,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// stw r28,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r28.u32);
	// stw r31,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, r31.u32);
	// stw r7,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r7.u32);
loc_822329A8:
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(r30.s32, r29.s32, ctx.xer);
	// bge cr6,0x822329c4
	if (!ctx.cr6.lt) goto loc_822329C4;
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r30.u32);
	// stw r28,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r28.u32);
	// stw r29,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r29.u32);
	// stw r7,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
loc_822329C4:
	// cmpw cr6,r25,r28
	ctx.cr6.compare<int32_t>(r25.s32, r28.s32, ctx.xer);
	// ble cr6,0x822329e0
	if (!ctx.cr6.gt) goto loc_822329E0;
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r31.u32);
	// stw r28,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r28.u32);
	// stw r30,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r30.u32);
	// stw r25,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r25.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
loc_822329E0:
	// cmpw cr6,r24,r7
	ctx.cr6.compare<int32_t>(r24.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x822329fc
	if (!ctx.cr6.lt) goto loc_822329FC;
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r31.u32);
	// stw r24,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r24.u32);
	// stw r30,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r30.u32);
	// stw r7,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
loc_822329FC:
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lwz r29,372(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// srawi. r4,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 4;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x82232a38
	if (ctx.cr0.eq) goto loc_82232A38;
	// lwz r11,396(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// mr r8,r23
	ctx.r8.u64 = r23.u64;
	// lwz r10,380(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x822325d0
	ctx.lr = 0x82232A38;
	sub_822325D0(ctx, base);
loc_82232A38:
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r9,404(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// sraw r8,r31,r27
	temp.u32 = r27.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (r31.s32 < 0) & (((r31.s32 >> temp.u32) << temp.u32) != r31.s32);
	ctx.r8.s64 = r31.s32 >> temp.u32;
	// lwz r10,388(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// rlwimi r23,r11,17,14,15
	r23.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x30000) | (r23.u64 & 0xFFFFFFFFFFFCFFFF);
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// sraw r11,r25,r26
	temp.u32 = r26.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (r25.s32 < 0) & (((r25.s32 >> temp.u32) << temp.u32) != r25.s32);
	ctx.r11.s64 = r25.s32 >> temp.u32;
	// stw r8,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// sraw r11,r30,r27
	temp.u32 = r27.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (r30.s32 < 0) & (((r30.s32 >> temp.u32) << temp.u32) != r30.s32);
	ctx.r11.s64 = r30.s32 >> temp.u32;
	// sraw r9,r24,r26
	temp.u32 = r26.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (r24.s32 < 0) & (((r24.s32 >> temp.u32) << temp.u32) != r24.s32);
	ctx.r9.s64 = r24.s32 >> temp.u32;
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r9,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// clrlwi r11,r23,18
	ctx.r11.u64 = r23.u32 & 0x3FFF;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// srw r11,r11,r27
	ctx.r11.u64 = r27.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (r27.u8 & 0x3F));
	// rlwimi r11,r23,0,0,17
	ctx.r11.u64 = (__builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0xFFFFC000) | (ctx.r11.u64 & 0xFFFFFFFF00003FFF);
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// rlwinm r11,r11,14,18,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// srw r11,r11,r27
	ctx.r11.u64 = r27.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (r27.u8 & 0x3F));
	// rlwimi r8,r11,18,0,13
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0xFFFC0000) | (ctx.r8.u64 & 0xFFFFFFFF0003FFFF);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x822325d0
	ctx.lr = 0x82232AA4;
	sub_822325D0(ctx, base);
	// b 0x82232ae4
	goto loc_82232AE4;
loc_82232AA8:
	// lwz r11,396(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// mr r8,r23
	ctx.r8.u64 = r23.u64;
	// stw r3,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r10,380(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r9,372(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// stw r28,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r28.u32);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// stw r29,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r29.u32);
	// stw r7,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// bl 0x822325d0
	ctx.lr = 0x82232AE4;
	sub_822325D0(ctx, base);
loc_82232AE4:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x822d4ebc
	return;
}

DEFINE_REX_FUNC(sub_8223ADD8) {
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
	ctx.lr = 0x8223ADE0;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r21,0
	r21.s64 = 0;
	// addi r24,r3,8
	r24.s64 = ctx.r3.s64 + 8;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// lwz r25,8(r10)
	r25.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mr r20,r21
	r20.u64 = r21.u64;
	// li r23,1
	r23.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
loc_8223AE14:
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223ae50
	if (ctx.cr6.eq) goto loc_8223AE50;
	// lwz r8,8(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// bne cr6,0x8223ae38
	if (!ctx.cr6.eq) goto loc_8223AE38;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x8223ae3c
	goto loc_8223AE3C;
loc_8223AE38:
	// stw r21,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r21.u32);
loc_8223AE3C:
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223ae54
	if (ctx.cr6.eq) goto loc_8223AE54;
	// addi r20,r20,1
	r20.s64 = r20.s64 + 1;
	// b 0x8223ae54
	goto loc_8223AE54;
loc_8223AE50:
	// stw r21,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r21.u32);
loc_8223AE54:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8223ae14
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8223AE14;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x8223afac
	if (ctx.cr6.eq) goto loc_8223AFAC;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// beq cr6,0x8223afac
	if (ctx.cr6.eq) goto loc_8223AFAC;
	// mr r23,r21
	r23.u64 = r21.u64;
	// b 0x8223afa4
	goto loc_8223AFA4;
loc_8223AE78:
	// addi r22,r22,-1
	r22.s64 = r22.s64 + -1;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x8223afac
	if (ctx.cr6.eq) goto loc_8223AFAC;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// beq cr6,0x8223afac
	if (ctx.cr6.eq) goto loc_8223AFAC;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// addi r30,r31,1408
	r30.s64 = r31.s64 + 1408;
	// lwz r9,24(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 24);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r5,24(r9)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x8223AEB0;
	sub_822D4FA0(ctx, base);
	// addi r29,r31,2048
	r29.s64 = r31.s64 + 2048;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,64
	ctx.r3.s64 = r31.s64 + 64;
	// bl 0x822405a8
	ctx.lr = 0x8223AEC8;
	sub_822405A8(ctx, base);
	// mr r23,r21
	r23.u64 = r21.u64;
	// addi r28,r1,96
	r28.s64 = ctx.r1.s64 + 96;
	// mr r27,r24
	r27.u64 = r24.u64;
	// li r26,2
	r26.s64 = 2;
loc_8223AED8:
	// lwz r30,0(r28)
	r30.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8223af4c
	if (ctx.cr6.eq) goto loc_8223AF4C;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r5,40
	ctx.r5.s64 = 40;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x8223AF00;
	sub_822D4FA0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r9,r9,40
	ctx.r9.s64 = ctx.r9.s64 + 40;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8223af1c
	if (!ctx.cr6.lt) goto loc_8223AF1C;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8223AF1C:
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8223af4c
	if (!ctx.cr6.eq) goto loc_8223AF4C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,0(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 0);
	// bl 0x8223b600
	ctx.lr = 0x8223AF3C;
	sub_8223B600(ctx, base);
	// stw r3,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8223af4c
	if (!ctx.cr0.eq) goto loc_8223AF4C;
	// addi r20,r20,-1
	r20.s64 = r20.s64 + -1;
loc_8223AF4C:
	// addic. r26,r26,-1
	ctx.xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// bne 0x8223aed8
	if (!ctx.cr0.eq) goto loc_8223AED8;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,24(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8223af80
	if (!ctx.cr6.lt) goto loc_8223AF80;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8223AF80:
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8223afa4
	if (!ctx.cr6.eq) goto loc_8223AFA4;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x8223b600
	ctx.lr = 0x8223AFA0;
	sub_8223B600(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
loc_8223AFA4:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// bne cr6,0x8223ae78
	if (!ctx.cr6.eq) goto loc_8223AE78;
loc_8223AFAC:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822d4eb8
	return;
}

DEFINE_REX_FUNC(sub_82245AA8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82245ad8
	if (ctx.cr6.eq) goto loc_82245AD8;
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82245ad8
	if (!ctx.cr6.eq) goto loc_82245AD8;
	// lwz r11,132(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 132);
	// lfs f0,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,64(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 64, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,132(r4)
	REX_STORE_U32(ctx.r4.u32 + 132, ctx.r11.u32);
	// blr 
	return;
loc_82245AD8:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82246118) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x82246120;
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
	// beq cr6,0x82246178
	if (ctx.cr6.eq) goto loc_82246178;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x822d6a10
	ctx.lr = 0x8224613C;
	sub_822D6A10(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x82246178
	if (ctx.cr0.eq) goto loc_82246178;
	// addi r11,r30,1
	ctx.r11.s64 = r30.s64 + 1;
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x82245ff0
	ctx.lr = 0x82246150;
	sub_82245FF0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x82246164
	if (!ctx.cr0.eq) goto loc_82246164;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82246184
	goto loc_82246184;
loc_82246164:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r30,1
	ctx.r4.s64 = r30.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d6c18
	ctx.lr = 0x82246174;
	sub_822D6C18(ctx, base);
	// b 0x8224617c
	goto loc_8224617C;
loc_82246178:
	// li r31,0
	r31.s64 = 0;
loc_8224617C:
	// stw r31,0(r28)
	REX_STORE_U32(r28.u32 + 0, r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82246184:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82246B70) {
	REX_FUNC_PROLOGUE();
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bne cr6,0x82246b90
	if (!ctx.cr6.eq) goto loc_82246B90;
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_82246B90:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82246E38) {
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
	// lwz r3,8(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82255b70
	ctx.lr = 0x82246E5C;
	sub_82255B70(ctx, base);
	// lwz r3,28(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82246e6c
	if (ctx.cr6.eq) goto loc_82246E6C;
	// bl 0x82288ee8
	ctx.lr = 0x82246E6C;
	sub_82288EE8(ctx, base);
loc_82246E6C:
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82246e7c
	if (ctx.cr0.eq) goto loc_82246E7C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82255b70
	ctx.lr = 0x82246E7C;
	sub_82255B70(ctx, base);
loc_82246E7C:
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

DEFINE_REX_FUNC(sub_82247C28) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x82247C30;
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
	// beq 0x82247c88
	if (ctx.cr0.eq) goto loc_82247C88;
	// lwz r10,-4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + -4);
	// addi r29,r3,-4
	r29.s64 = ctx.r3.s64 + -4;
	// mulli r11,r10,20
	ctx.r11.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(20));
	// addic. r31,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	r31.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// add r30,r11,r30
	r30.u64 = ctx.r11.u64 + r30.u64;
	// blt 0x82247c70
	if (ctx.cr0.lt) goto loc_82247C70;
loc_82247C5C:
	// addi r30,r30,-20
	r30.s64 = r30.s64 + -20;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8227b2c8
	ctx.lr = 0x82247C68;
	sub_8227B2C8(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bge 0x82247c5c
	if (!ctx.cr0.lt) goto loc_82247C5C;
loc_82247C70:
	// clrlwi. r11,r28,31
	ctx.r11.u64 = r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82247c80
	if (ctx.cr0.eq) goto loc_82247C80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82255b70
	ctx.lr = 0x82247C80;
	sub_82255B70(ctx, base);
loc_82247C80:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x82247ca4
	goto loc_82247CA4;
loc_82247C88:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8227b2c8
	ctx.lr = 0x82247C90;
	sub_8227B2C8(ctx, base);
	// clrlwi. r11,r28,31
	ctx.r11.u64 = r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82247ca0
	if (ctx.cr0.eq) goto loc_82247CA0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82255b70
	ctx.lr = 0x82247CA0;
	sub_82255B70(ctx, base);
loc_82247CA0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82247CA4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82249998) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82246220
	ctx.lr = 0x822499B0;
	sub_82246220(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822499e4
	if (ctx.cr6.eq) goto loc_822499E4;
	// lwz r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// bne cr6,0x822499e4
	if (!ctx.cr6.eq) goto loc_822499E4;
	// lfs f0,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f0,172(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 172, temp.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// b 0x822499ec
	goto loc_822499EC;
loc_822499E4:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_822499EC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8224B3A0) {
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
	// bl 0x8224b198
	ctx.lr = 0x8224B3B8;
	sub_8224B198(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x8224b208
	ctx.lr = 0x8224B3C4;
	sub_8224B208(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// bl 0x8224b278
	ctx.lr = 0x8224B3D0;
	sub_8224B278(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// bl 0x8224b2e0
	ctx.lr = 0x8224B3E8;
	sub_8224B2E0(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// bl 0x8224b340
	ctx.lr = 0x8224B3F4;
	sub_8224B340(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_8224CE20) {
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
	// addi r31,r11,26372
	r31.s64 = ctx.r11.s64 + 26372;
	// lwz r11,26392(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 26392);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8224ce64
	if (!ctx.cr0.eq) goto loc_8224CE64;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,26392(r10)
	REX_STORE_U32(ctx.r10.u32 + 26392, ctx.r11.u32);
	// bl 0x8227acf8
	ctx.lr = 0x8224CE58;
	sub_8227ACF8(ctx, base);
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r3,r11,15528
	ctx.r3.s64 = ctx.r11.s64 + 15528;
	// bl 0x822d5848
	ctx.lr = 0x8224CE64;
	sub_822D5848(ctx, base);
loc_8224CE64:
	// li r11,5
	ctx.r11.s64 = 5;
	// li r10,0
	ctx.r10.s64 = 0;
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

DEFINE_REX_FUNC(sub_8224E688) {
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
	// beq cr6,0x8224e6b4
	if (ctx.cr6.eq) goto loc_8224E6B4;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x8228f988
	ctx.lr = 0x8224E6AC;
	sub_8228F988(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82255b70
	ctx.lr = 0x8224E6B4;
	sub_82255B70(ctx, base);
loc_8224E6B4:
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

DEFINE_REX_FUNC(sub_8224FF20) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8224FF28;
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
	// addi r31,r11,-8512
	r31.s64 = ctx.r11.s64 + -8512;
	// lwz r11,27816(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 27816);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82250064
	if (!ctx.cr0.eq) goto loc_82250064;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r30,0
	r30.s64 = 0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r10,-2940
	ctx.r9.s64 = ctx.r10.s64 + -2940;
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// stw r11,27816(r8)
	REX_STORE_U32(ctx.r8.u32 + 27816, ctx.r11.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r9,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r9.u32);
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r30,12(r31)
	REX_STORE_U32(r31.u32 + 12, r30.u32);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// stw r10,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// bl 0x8224dc30
	ctx.lr = 0x8224FF84;
	sub_8224DC30(ctx, base);
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stw r30,28(r31)
	REX_STORE_U32(r31.u32 + 28, r30.u32);
	// addi r9,r9,32520
	ctx.r9.s64 = ctx.r9.s64 + 32520;
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
	// addi r9,r11,-2964
	ctx.r9.s64 = ctx.r11.s64 + -2964;
	// std r30,40(r31)
	REX_STORE_U64(r31.u32 + 40, r30.u64);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r9,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r9.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r10,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r10.u32);
	// li r10,5
	ctx.r10.s64 = 5;
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
	// bl 0x8224dc30
	ctx.lr = 0x8224FFE0;
	sub_8224DC30(ctx, base);
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stw r30,76(r31)
	REX_STORE_U32(r31.u32 + 76, r30.u32);
	// addi r9,r9,32640
	ctx.r9.s64 = ctx.r9.s64 + 32640;
	// stw r30,80(r31)
	REX_STORE_U32(r31.u32 + 80, r30.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r3,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r3.u32);
	// stw r9,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r9.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r9,r11,-2992
	ctx.r9.s64 = ctx.r11.s64 + -2992;
	// std r30,88(r31)
	REX_STORE_U64(r31.u32 + 88, r30.u64);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r9,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r9.u32);
	// li r9,12
	ctx.r9.s64 = 12;
	// stw r10,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r10.u32);
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r30,96(r31)
	REX_STORE_U32(r31.u32 + 96, r30.u32);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stw r30,108(r31)
	REX_STORE_U32(r31.u32 + 108, r30.u32);
	// addi r11,r31,88
	ctx.r11.s64 = r31.s64 + 88;
	// stw r9,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r9.u32);
	// stw r10,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r10.u32);
	// bl 0x8224dc30
	ctx.lr = 0x8225003C;
	sub_8224DC30(ctx, base);
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stw r30,124(r31)
	REX_STORE_U32(r31.u32 + 124, r30.u32);
	// addi r11,r31,136
	ctx.r11.s64 = r31.s64 + 136;
	// stw r3,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r3.u32);
	// addi r11,r9,32760
	ctx.r11.s64 = ctx.r9.s64 + 32760;
	// stw r30,128(r31)
	REX_STORE_U32(r31.u32 + 128, r30.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r11,132(r31)
	REX_STORE_U32(r31.u32 + 132, ctx.r11.u32);
	// std r30,136(r31)
	REX_STORE_U64(r31.u32 + 136, r30.u64);
loc_82250064:
	// li r11,3
	ctx.r11.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82254B20) {
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
	// addi r10,r10,-5788
	ctx.r10.s64 = ctx.r10.s64 + -5788;
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
	// addi r8,r8,19048
	ctx.r8.s64 = ctx.r8.s64 + 19048;
	// addi r11,r7,19168
	ctx.r11.s64 = ctx.r7.s64 + 19168;
	// stw r9,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// addi r10,r6,27544
	ctx.r10.s64 = ctx.r6.s64 + 27544;
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
	// bl 0x8224c210
	ctx.lr = 0x82254B94;
	sub_8224C210(ctx, base);
	// stw r3,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// stw r31,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,23552
	ctx.r4.s64 = ctx.r11.s64 + 23552;
	// bl 0x822512d8
	ctx.lr = 0x82254BAC;
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

DEFINE_REX_FUNC(sub_82256918) {
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
	ctx.lr = 0x82256940;
	sub_82255C88(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82256954
	if (!ctx.cr0.eq) goto loc_82256954;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
	// b 0x82256978
	goto loc_82256978;
loc_82256954:
	// lwz r11,40(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8225696c
	if (ctx.cr6.eq) goto loc_8225696C;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x822469c0
	ctx.lr = 0x82256968;
	sub_822469C0(ctx, base);
	// b 0x82256970
	goto loc_82256970;
loc_8225696C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82256970:
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82256978:
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

DEFINE_REX_FUNC(sub_82257AF0) {
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
	// bl 0x822578f0
	ctx.lr = 0x82257B10;
	sub_822578F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822469c0
	ctx.lr = 0x82257B18;
	sub_822469C0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8224db90
	ctx.lr = 0x82257B20;
	sub_8224DB90(ctx, base);
	// rlwinm r11,r3,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
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

DEFINE_REX_FUNC(sub_8225AE58) {
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
	ctx.lr = 0x8225AE60;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// lis r28,-32163
	r28.s64 = -2107834368;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8225ae84
	if (ctx.cr6.eq) goto loc_8225AE84;
	// lwz r11,29616(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 29616);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,29616(r28)
	REX_STORE_U32(r28.u32 + 29616, ctx.r11.u32);
loc_8225AE84:
	// bl 0x822469c0
	ctx.lr = 0x8225AE88;
	sub_822469C0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82257748
	ctx.lr = 0x8225AE98;
	sub_82257748(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8224da00
	ctx.lr = 0x8225AEA4;
	sub_8224DA00(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x8225af34
	if (ctx.cr0.lt) goto loc_8225AF34;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8225aecc
	if (ctx.cr6.eq) goto loc_8225AECC;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822596e0
	ctx.lr = 0x8225AEC4;
	sub_822596E0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x8225af34
	goto loc_8225AF34;
loc_8225AECC:
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8225af2c
	if (!ctx.cr6.eq) goto loc_8225AF2C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82256990
	ctx.lr = 0x8225AEE8;
	sub_82256990(ctx, base);
	// lwz r31,80(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8225af2c
	if (ctx.cr6.eq) goto loc_8225AF2C;
loc_8225AEF4:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8225ae58
	ctx.lr = 0x8225AF04;
	sub_8225AE58(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8225af24
	if (ctx.cr0.eq) goto loc_8225AF24;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82256a80
	ctx.lr = 0x8225AF18;
	sub_82256A80(ctx, base);
	// lwz r31,80(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8225aef4
	if (!ctx.cr6.eq) goto loc_8225AEF4;
loc_8225AF24:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8225af34
	if (!ctx.cr6.eq) goto loc_8225AF34;
loc_8225AF2C:
	// lis r30,-32768
	r30.s64 = -2147483648;
	// ori r30,r30,16389
	r30.u64 = r30.u64 | 16389;
loc_8225AF34:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq cr6,0x8225af48
	if (ctx.cr6.eq) goto loc_8225AF48;
	// lwz r11,29616(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 29616);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,29616(r28)
	REX_STORE_U32(r28.u32 + 29616, ctx.r11.u32);
loc_8225AF48:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_8225DB88) {
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
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// bl 0x8225da70
	ctx.lr = 0x8225DBA4;
	sub_8225DA70(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// bl 0x8227c2b8
	ctx.lr = 0x8225DBB0;
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

DEFINE_REX_FUNC(sub_8225E128) {
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
	// li r4,2039
	ctx.r4.s64 = 2039;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// bl 0x8225da70
	ctx.lr = 0x8225E144;
	sub_8225DA70(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// bl 0x8227c2b8
	ctx.lr = 0x8225E150;
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

DEFINE_REX_FUNC(sub_8225EA40) {
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
	// stw r3,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r3.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x8225eac4
	if (!ctx.cr6.eq) goto loc_8225EAC4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8225dcd8
	ctx.lr = 0x8225EA6C;
	sub_8225DCD8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8224da00
	ctx.lr = 0x8225EA78;
	sub_8224DA00(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8225EA7C:
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
loc_8225EA90:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8225dcd8
	ctx.lr = 0x8225EA9C;
	sub_8225DCD8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8224da00
	ctx.lr = 0x8225EAA8;
	sub_8224DA00(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8225ead4
	if (!ctx.cr6.eq) goto loc_8225EAD4;
	// addi r4,r1,164
	ctx.r4.s64 = ctx.r1.s64 + 164;
	// lwz r3,164(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// bl 0x82256918
	ctx.lr = 0x8225EAC0;
	sub_82256918(ctx, base);
	// lwz r31,164(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
loc_8225EAC4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8225ea90
	if (!ctx.cr6.eq) goto loc_8225EA90;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8225ea7c
	goto loc_8225EA7C;
loc_8225EAD4:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8225ea7c
	goto loc_8225EA7C;
}

DEFINE_REX_FUNC(sub_82263C50) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x822586e0
	ctx.lr = 0x82263C80;
	sub_822586E0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82263d1c
	if (ctx.cr6.eq) goto loc_82263D1C;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x822469c0
	ctx.lr = 0x82263C94;
	sub_822469C0(ctx, base);
	// bl 0x8225ee88
	ctx.lr = 0x82263C98;
	sub_8225EE88(ctx, base);
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(r30.u32, 1, ctx.xer);
	// blt cr6,0x82263d14
	if (ctx.cr6.lt) goto loc_82263D14;
	// beq cr6,0x82263cd4
	if (ctx.cr6.eq) goto loc_82263CD4;
	// cmplwi cr6,r30,3
	ctx.cr6.compare<uint32_t>(r30.u32, 3, ctx.xer);
	// bge cr6,0x82263d1c
	if (!ctx.cr6.lt) goto loc_82263D1C;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82263d1c
	if (ctx.cr6.eq) goto loc_82263D1C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-1308
	ctx.r5.s64 = ctx.r11.s64 + -1308;
	// addi r4,r10,-1280
	ctx.r4.s64 = ctx.r10.s64 + -1280;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x82263d0c
	goto loc_82263D0C;
loc_82263CD4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// beq cr6,0x82263cfc
	if (ctx.cr6.eq) goto loc_82263CFC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-1260
	ctx.r5.s64 = ctx.r11.s64 + -1260;
	// addi r4,r10,-1232
	ctx.r4.s64 = ctx.r10.s64 + -1232;
	// b 0x82263d0c
	goto loc_82263D0C;
loc_82263CFC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,-1388
	ctx.r5.s64 = ctx.r11.s64 + -1388;
	// addi r4,r10,-1344
	ctx.r4.s64 = ctx.r10.s64 + -1344;
loc_82263D0C:
	// bl 0x822588e0
	ctx.lr = 0x82263D10;
	sub_822588E0(ctx, base);
	// b 0x82263d1c
	goto loc_82263D1C;
loc_82263D14:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x822561a8
	ctx.lr = 0x82263D1C;
	sub_822561A8(ctx, base);
loc_82263D1C:
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

DEFINE_REX_FUNC(sub_82267190) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r7,8(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmpw cr6,r7,r9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x8226721c
	if (ctx.cr6.eq) goto loc_8226721C;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8226721c
	if (ctx.cr6.eq) goto loc_8226721C;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// twllei r9,0
	if (ctx.r9.s32 == 0 || ctx.r9.u32 < 0u) ppc_trap(ctx, base, 0);
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwz r6,0(r4)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// divw r5,r7,r9
	ctx.r5.u64 = uint32_t((ctx.r9.s32 && !(ctx.r7.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r7.s32 / ctx.r9.s32 : 0);
	// rotlwi r11,r7,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// mullw r5,r5,r9
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// subf r7,r5,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r5.u64;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// mulli r11,r7,20
	ctx.r11.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(20));
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// andc r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 & ~ctx.r5.u64;
	// twlgei r9,-1
	if (ctx.r9.s32 == -1 || ctx.r9.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
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
loc_8226721C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,122
	ctx.r3.u64 = ctx.r3.u64 | 122;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8226B080) {
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
	ctx.lr = 0x8226B088;
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -56, f30.u64);
	// stfd f31,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// beq cr6,0x8226b12c
	if (ctx.cr6.eq) goto loc_8226B12C;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// beq cr6,0x8226b114
	if (ctx.cr6.eq) goto loc_8226B114;
	// cmplwi cr6,r11,19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 19, ctx.xer);
	// beq cr6,0x8226b104
	if (ctx.cr6.eq) goto loc_8226B104;
	// cmplwi cr6,r11,2006
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2006, ctx.xer);
	// beq cr6,0x8226b0f8
	if (ctx.cr6.eq) goto loc_8226B0F8;
	// cmplwi cr6,r11,2015
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2015, ctx.xer);
	// bne cr6,0x8226b1dc
	if (!ctx.cr6.eq) goto loc_8226B1DC;
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8226b1dc
	if (!ctx.cr6.eq) goto loc_8226B1DC;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8226b1dc
	if (!ctx.cr6.eq) goto loc_8226B1DC;
	// addi r10,r3,20
	ctx.r10.s64 = ctx.r3.s64 + 20;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r9,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r9.u32);
	// b 0x8226b1dc
	goto loc_8226B1DC;
loc_8226B0F8:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// b 0x8226b1d4
	goto loc_8226B1D4;
loc_8226B104:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x8226b018
	ctx.lr = 0x8226B110;
	sub_8226B018(ctx, base);
	// b 0x8226b1dc
	goto loc_8226B1DC;
loc_8226B114:
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r10.u32);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// b 0x8226b1dc
	goto loc_8226B1DC;
loc_8226B12C:
	// li r28,0
	r28.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r28,4(r31)
	REX_STORE_U32(r31.u32 + 4, r28.u32);
	// addi r29,r31,4
	r29.s64 = r31.s64 + 4;
	// bl 0x822462c8
	ctx.lr = 0x8226B144;
	sub_822462C8(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226b1dc
	if (ctx.cr6.eq) goto loc_8226B1DC;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8224da00
	ctx.lr = 0x8226B158;
	sub_8224DA00(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x822586e0
	ctx.lr = 0x8226B170;
	sub_822586E0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226b1dc
	if (ctx.cr6.eq) goto loc_8226B1DC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r11,908
	ctx.r4.s64 = ctx.r11.s64 + 908;
	// bl 0x82256ea0
	ctx.lr = 0x8226B18C;
	sub_82256EA0(ctx, base);
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// bl 0x8225d0f8
	ctx.lr = 0x8226B194;
	sub_8225D0F8(ctx, base);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8225e988
	ctx.lr = 0x8226B1A4;
	sub_8225E988(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lfs f0,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	f31.f64 = double(temp.f32);
	// lfs f30,92(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 92);
	f30.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fadds f1,f30,f0
	ctx.f1.f64 = double(float(f30.f64 + ctx.f0.f64));
	// bl 0x82258b88
	ctx.lr = 0x8226B1C4;
	sub_82258B88(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x82258b88
	ctx.lr = 0x8226B1D4;
	sub_82258B88(ctx, base);
loc_8226B1D4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82264d30
	ctx.lr = 0x8226B1DC;
	sub_82264D30(ctx, base);
loc_8226B1DC:
	// li r3,0
	ctx.r3.s64 = 0;
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

DEFINE_REX_FUNC(sub_82270C70) {
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
	// lwz r11,148(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 148);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82270d3c
	if (ctx.cr6.eq) goto loc_82270D3C;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8225ee88
	ctx.lr = 0x82270CA4;
	sub_8225EE88(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82270d3c
	if (ctx.cr0.eq) goto loc_82270D3C;
	// lwz r3,92(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82270cc4
	if (!ctx.cr6.eq) goto loc_82270CC4;
loc_82270CB8:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82270d44
	goto loc_82270D44;
loc_82270CC4:
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82270d3c
	if (ctx.cr6.eq) goto loc_82270D3C;
	// bl 0x822d6a10
	ctx.lr = 0x82270CD4;
	sub_822D6A10(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r3.u32, ctx.xer);
	// ble cr6,0x82270cf4
	if (!ctx.cr6.gt) goto loc_82270CF4;
	// b 0x82270cb8
	goto loc_82270CB8;
loc_82270CE0:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8226f6c8
	ctx.lr = 0x82270CEC;
	sub_8226F6C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82270d44
	if (ctx.cr0.lt) goto loc_82270D44;
loc_82270CF4:
	// lwz r10,116(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 116);
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82270ce0
	if (ctx.cr6.lt) goto loc_82270CE0;
	// ble cr6,0x82270d34
	if (!ctx.cr6.gt) goto loc_82270D34;
loc_82270D0C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8226f7a8
	ctx.lr = 0x82270D18;
	sub_8226F7A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82270d44
	if (ctx.cr0.lt) goto loc_82270D44;
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// lwz r10,116(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 116);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82270d0c
	if (ctx.cr6.gt) goto loc_82270D0C;
loc_82270D34:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82270d44
	goto loc_82270D44;
loc_82270D3C:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
loc_82270D44:
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

DEFINE_REX_FUNC(sub_82277218) {
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
	ctx.lr = 0x82277220;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// lbz r11,29952(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 29952);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82277248
	if (!ctx.cr0.eq) goto loc_82277248;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// b 0x822773a8
	goto loc_822773A8;
loc_82277248:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822773a0
	if (ctx.cr6.eq) goto loc_822773A0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x822773a0
	if (ctx.cr6.eq) goto loc_822773A0;
	// li r24,0
	r24.s64 = 0;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r24,0(r29)
	REX_STORE_U32(r29.u32 + 0, r24.u32);
	// stw r24,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r24.u32);
	// bl 0x82276648
	ctx.lr = 0x8227726C;
	sub_82276648(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822773a8
	if (ctx.cr0.lt) goto loc_822773A8;
	// stw r24,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r24.u32);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x822764a0
	ctx.lr = 0x8227728C;
	sub_822764A0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82277388
	if (ctx.cr0.lt) goto loc_82277388;
	// bl 0x82246ab8
	ctx.lr = 0x82277298;
	sub_82246AB8(ctx, base);
	// lwz r27,88(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r26,92(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// lwz r30,96(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// beq 0x8227736c
	if (ctx.cr0.eq) goto loc_8227736C;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x822772f8
	if (ctx.cr6.eq) goto loc_822772F8;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8227d0d8
	ctx.lr = 0x822772C4;
	sub_8227D0D8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82277388
	if (ctx.cr0.lt) goto loc_82277388;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82276e90
	ctx.lr = 0x822772E4;
	sub_82276E90(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bge 0x82277388
	if (!ctx.cr0.lt) goto loc_82277388;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82255b70
	ctx.lr = 0x822772F4;
	sub_82255B70(ctx, base);
	// stw r24,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r24.u32);
loc_822772F8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,1364
	ctx.r4.s64 = ctx.r11.s64 + 1364;
	// bl 0x822d7938
	ctx.lr = 0x82277308;
	sub_822D7938(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8227736c
	if (ctx.cr0.eq) goto loc_8227736C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,1348
	ctx.r4.s64 = ctx.r11.s64 + 1348;
	// bl 0x822d7938
	ctx.lr = 0x82277320;
	sub_822D7938(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8227736c
	if (ctx.cr0.eq) goto loc_8227736C;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8227d0d8
	ctx.lr = 0x82277338;
	sub_8227D0D8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82277388
	if (ctx.cr0.lt) goto loc_82277388;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82276e90
	ctx.lr = 0x82277358;
	sub_82276E90(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bge 0x82277388
	if (!ctx.cr0.lt) goto loc_82277388;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82255b70
	ctx.lr = 0x82277368;
	sub_82255B70(ctx, base);
	// stw r24,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r24.u32);
loc_8227736C:
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82276e90
	ctx.lr = 0x82277384;
	sub_82276E90(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_82277388:
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82255b70
	ctx.lr = 0x82277390;
	sub_82255B70(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82255b70
	ctx.lr = 0x82277398;
	sub_82255B70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x822773a8
	goto loc_822773A8;
loc_822773A0:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_822773A8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_8227B6B0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x8227B6B8;
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
	// beq 0x8227b710
	if (ctx.cr0.eq) goto loc_8227B710;
	// lwz r10,-4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + -4);
	// addi r29,r3,-4
	r29.s64 = ctx.r3.s64 + -4;
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addic. r31,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	r31.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// add r30,r11,r30
	r30.u64 = ctx.r11.u64 + r30.u64;
	// blt 0x8227b6f8
	if (ctx.cr0.lt) goto loc_8227B6F8;
loc_8227B6E4:
	// addi r30,r30,-16
	r30.s64 = r30.s64 + -16;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8227fe48
	ctx.lr = 0x8227B6F0;
	sub_8227FE48(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bge 0x8227b6e4
	if (!ctx.cr0.lt) goto loc_8227B6E4;
loc_8227B6F8:
	// clrlwi. r11,r28,31
	ctx.r11.u64 = r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8227b708
	if (ctx.cr0.eq) goto loc_8227B708;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82255b70
	ctx.lr = 0x8227B708;
	sub_82255B70(ctx, base);
loc_8227B708:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x8227b72c
	goto loc_8227B72C;
loc_8227B710:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8227fe48
	ctx.lr = 0x8227B718;
	sub_8227FE48(ctx, base);
	// clrlwi. r11,r28,31
	ctx.r11.u64 = r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8227b728
	if (ctx.cr0.eq) goto loc_8227B728;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82255b70
	ctx.lr = 0x8227B728;
	sub_82255B70(ctx, base);
loc_8227B728:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_8227B72C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8227CDD8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lhz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8227ce08
	if (ctx.cr0.eq) goto loc_8227CE08;
	// li r11,5
	ctx.r11.s64 = 5;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addi r9,r4,-4
	ctx.r9.s64 = ctx.r4.s64 + -4;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8227CDF8:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x8227cdf8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8227CDF8;
	// blr 
	return;
loc_8227CE08:
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// ble cr6,0x8227ceac
	if (!ctx.cr6.gt) goto loc_8227CEAC;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x8227ce78
	if (ctx.cr6.eq) goto loc_8227CE78;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x8227ceac
	if (ctx.cr6.eq) goto loc_8227CEAC;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x8227ce64
	if (ctx.cr6.eq) goto loc_8227CE64;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// addi r5,r4,4
	ctx.r5.s64 = ctx.r4.s64 + 4;
	// lwz r4,8(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r3,r10,24
	ctx.r3.s64 = ctx.r10.s64 + 24;
	// b 0x82278a08
	sub_82278A08(ctx, base);
	return;
loc_8227CE64:
	// addi r5,r4,4
	ctx.r5.s64 = ctx.r4.s64 + 4;
	// lwz r4,8(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// li r6,12
	ctx.r6.s64 = 12;
	// addi r3,r10,12
	ctx.r3.s64 = ctx.r10.s64 + 12;
	// b 0x82278a08
	sub_82278A08(ctx, base);
	return;
loc_8227CE78:
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8227ce8c
	if (!ctx.cr6.eq) goto loc_8227CE8C;
loc_8227CE84:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8227ceb0
	goto loc_8227CEB0;
loc_8227CE8C:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x8227ce84
	if (ctx.cr6.gt) goto loc_8227CE84;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// b 0x8227ceb0
	goto loc_8227CEB0;
loc_8227CEAC:
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
loc_8227CEB0:
	// stw r11,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8227F700) {
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
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8227f734
	if (ctx.cr6.eq) goto loc_8227F734;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227F734;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8227F734:
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
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

DEFINE_REX_FUNC(sub_82280900) {
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
	// lfs f1,52(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x822d60f0
	ctx.lr = 0x82280924;
	sub_822D60F0(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82280948
	if (!ctx.cr6.lt) goto loc_82280948;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82280964
	goto loc_82280964;
loc_82280948:
	// lfs f1,52(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822d60f0
	ctx.lr = 0x82280950;
	sub_822D60F0(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + r31.u64;
loc_82280964:
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

DEFINE_REX_FUNC(sub_82284458) {
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
	ctx.lr = 0x82284460;
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -72, f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// lwz r11,-2144(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -2144);
	// mr r31,r8
	r31.u64 = ctx.r8.u64;
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// bl 0x8229a710
	ctx.lr = 0x82284490;
	sub_8229A710(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x82284580
	if (ctx.cr0.eq) goto loc_82284580;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82284580
	if (ctx.cr6.eq) goto loc_82284580;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// bne cr6,0x822844b8
	if (!ctx.cr6.eq) goto loc_822844B8;
	// lwz r3,112(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x822d7b58
	ctx.lr = 0x822844B0;
	sub_822D7B58(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82284590
	goto loc_82284590;
loc_822844B8:
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// lfs f12,12(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fctiwz f13,f13
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f0,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// fctiwz f12,f12
	ctx.f12.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f13,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// stfd f12,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f12.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,92(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lfs f0,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r8,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r10,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r9,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// lwz r31,152(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 152);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82284580
	if (ctx.cr6.eq) goto loc_82284580;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r28,r11,30464
	r28.s64 = ctx.r11.s64 + 30464;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824d438c
	ctx.lr = 0x82284524;
	__imp__RtlEnterCriticalSection(ctx, base);
	// bl 0x82288590
	ctx.lr = 0x82284528;
	sub_82288590(ctx, base);
	// rlwinm. r11,r30,0,10,15
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x3F0000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r3,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// bne 0x82284540
	if (!ctx.cr0.eq) goto loc_82284540;
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// lwz r11,-6908(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -6908);
	// or r30,r11,r30
	r30.u64 = ctx.r11.u64 | r30.u64;
loc_82284540:
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82283aa0
	ctx.lr = 0x82284564;
	sub_82283AA0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824d437c
	ctx.lr = 0x82284570;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lwz r3,112(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x822d7b58
	ctx.lr = 0x82284578;
	sub_822D7B58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82284590
	goto loc_82284590;
loc_82284580:
	// lwz r3,112(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x822d7b58
	ctx.lr = 0x82284588;
	sub_822D7B58(ctx, base);
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_82284590:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_82288A80) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82288a94
	if (!ctx.cr6.eq) goto loc_82288A94;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
loc_82288A94:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82288E30) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82288e44
	if (!ctx.cr6.eq) goto loc_82288E44;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
loc_82288E44:
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

DEFINE_REX_FUNC(sub_822893F0) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82289428) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lwz r11,31384(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 31384);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8228944c
	if (ctx.cr6.eq) goto loc_8228944C;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,31380(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 31380);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_8228944C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8228A168) {
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
	// addi r11,r11,7296
	ctx.r11.s64 = ctx.r11.s64 + 7296;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x8228a194
	if (ctx.cr0.eq) goto loc_8228A194;
	// bl 0x82255b70
	ctx.lr = 0x8228A194;
	sub_82255B70(ctx, base);
loc_8228A194:
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

DEFINE_REX_FUNC(sub_8228B050) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r11,r3,128
	ctx.r11.s64 = ctx.r3.s64 + 128;
loc_8228B054:
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
	// bne 0x8228b054
	if (!ctx.cr0.eq) goto loc_8228B054;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8228C110) {
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
	ctx.lr = 0x8228C118;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r25,r3,100
	r25.s64 = ctx.r3.s64 + 100;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x824d438c
	ctx.lr = 0x8228C12C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r28,-32163
	r28.s64 = -2107834368;
	// addi r27,r30,4
	r27.s64 = r30.s64 + 4;
	// li r26,17
	r26.s64 = 17;
	// lis r24,-32163
	r24.s64 = -2107834368;
	// lwz r10,31372(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 31372);
loc_8228C140:
	// lwz r31,0(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8228c1d4
	if (ctx.cr6.eq) goto loc_8228C1D4;
loc_8228C14C:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r29,60(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8228c1c8
	if (!ctx.cr6.eq) goto loc_8228C1C8;
	// lwz r11,31368(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 31368);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8228c180
	if (ctx.cr0.eq) goto loc_8228C180;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8228c1c8
	if (ctx.cr6.eq) goto loc_8228C1C8;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8228c1c8
	if (ctx.cr6.eq) goto loc_8228C1C8;
loc_8228C180:
	// lwz r11,84(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 84);
	// lwz r10,56(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 56);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stw r11,84(r30)
	REX_STORE_U32(r30.u32 + 84, ctx.r11.u32);
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8228c1a8
	if (ctx.cr6.eq) goto loc_8228C1A8;
	// lwz r11,92(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 92);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,92(r30)
	REX_STORE_U32(r30.u32 + 92, ctx.r11.u32);
loc_8228C1A8:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8228b750
	ctx.lr = 0x8228C1B4;
	sub_8228B750(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8228b2b0
	ctx.lr = 0x8228C1BC;
	sub_8228B2B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82255b70
	ctx.lr = 0x8228C1C4;
	sub_82255B70(ctx, base);
	// lwz r10,31372(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 31372);
loc_8228C1C8:
	// mr r31,r29
	r31.u64 = r29.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x8228c14c
	if (!ctx.cr6.eq) goto loc_8228C14C;
loc_8228C1D4:
	// addic. r26,r26,-1
	ctx.xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// bne 0x8228c140
	if (!ctx.cr0.eq) goto loc_8228C140;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x824d437c
	ctx.lr = 0x8228C1E8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_82291130) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// addi r10,r1,36
	ctx.r10.s64 = ctx.r1.s64 + 36;
	// stfs f2,36(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 36, temp.u32);
	// vspltisw128 v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_set1_epi32(int(0x0)));
	// addi r11,r1,28
	ctx.r11.s64 = ctx.r1.s64 + 28;
	// addi r8,r1,44
	ctx.r8.s64 = ctx.r1.s64 + 44;
	// stfs f1,28(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// li r9,16
	ctx.r9.s64 = 16;
	// stfs f3,44(r1)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r1.u32 + 44, temp.u32);
	// lvlx128 v58,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v62,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// vupkd3d128 v61,v63,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v63.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v63.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v61 = vTemp;
	// lvlx128 v60,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v59,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// li r10,32
	ctx.r10.s64 = 32;
	// vrlimi128 v60,v63,7,0
	simde_mm_store_ps(ctx.v60.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v63.f32), 228), 7));
	// lvlx128 v63,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v62,v58,4,3
	simde_mm_store_ps(ctx.v62.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v58.f32), 57), 4));
	// vpermwi128 v61,v61,171
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0x54));
	// vrlimi128 v59,v63,2,2
	simde_mm_store_ps(ctx.v59.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v63.f32), 78), 2));
	// li r11,48
	ctx.r11.s64 = 48;
	// stvlx128 v60,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v60.u8[15 - i]);
	// li r8,64
	ctx.r8.s64 = 64;
	// stvrx128 v60,r3,r9
	ea = ctx.r3.u32 + ctx.r9.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v60.u8[i]);
	// stvlx128 v62,r3,r9
	ea = ctx.r3.u32 + ctx.r9.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v62.u8[15 - i]);
	// stvrx128 v62,r3,r10
	ea = ctx.r3.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v62.u8[i]);
	// stvlx128 v59,r3,r10
	ea = ctx.r3.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v59.u8[15 - i]);
	// stvrx128 v59,r3,r11
	ea = ctx.r3.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v59.u8[i]);
	// stvlx128 v61,r3,r11
	ea = ctx.r3.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v61.u8[15 - i]);
	// stvrx128 v61,r3,r8
	ea = ctx.r3.u32 + ctx.r8.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v61.u8[i]);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82293660) {
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
	ctx.lr = 0x82293668;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// lwz r10,-2144(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + -2144);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82293690;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r29,0
	r29.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r29,0(r27)
	REX_STORE_U32(r27.u32 + 0, r29.u32);
	// bl 0x82222db0
	ctx.lr = 0x822936A0;
	sub_82222DB0(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// mr r31,r29
	r31.u64 = r29.u64;
	// beq 0x82293700
	if (ctx.cr0.eq) goto loc_82293700;
loc_822936AC:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82222dc0
	ctx.lr = 0x822936BC;
	sub_82222DC0(ctx, base);
	// bl 0x822893f8
	ctx.lr = 0x822936C0;
	sub_822893F8(ctx, base);
	// ori r7,r3,16
	ctx.r7.u64 = ctx.r3.u64 | 16;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82222e80
	ctx.lr = 0x822936D8;
	sub_82222E80(ctx, base);
	// lwz r11,124(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// add r29,r11,r29
	r29.u64 = ctx.r11.u64 + r29.u64;
	// bl 0x822213c0
	ctx.lr = 0x822936F4;
	sub_822213C0(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(r31.u32, r28.u32, ctx.xer);
	// blt cr6,0x822936ac
	if (ctx.cr6.lt) goto loc_822936AC;
loc_82293700:
	// lwz r3,128(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// stw r29,0(r27)
	REX_STORE_U32(r27.u32 + 0, r29.u32);
	// bl 0x822d7b58
	ctx.lr = 0x8229370C;
	sub_822D7B58(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82295D20) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82295E28) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,416
	ctx.r5.s64 = 416;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d5870
	ctx.lr = 0x82295E54;
	sub_822D5870(ctx, base);
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
	// li r3,4096
	ctx.r3.s64 = 4096;
	// bl 0x82255b48
	ctx.lr = 0x82295E60;
	sub_82255B48(ctx, base);
	// stw r3,292(r31)
	REX_STORE_U32(r31.u32 + 292, ctx.r3.u32);
	// addi r4,r31,384
	ctx.r4.s64 = r31.s64 + 384;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82297920
	ctx.lr = 0x82295E70;
	sub_82297920(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,408(r31)
	REX_STORE_U32(r31.u32 + 408, ctx.r11.u32);
	// stw r11,412(r31)
	REX_STORE_U32(r31.u32 + 412, ctx.r11.u32);
	// stw r11,296(r31)
	REX_STORE_U32(r31.u32 + 296, ctx.r11.u32);
	// stw r11,300(r31)
	REX_STORE_U32(r31.u32 + 300, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_8229A1B0) {
	REX_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,15
	ctx.r4.s64 = 15;
	// b 0x8229a058
	sub_8229A058(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8229A710) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8229A910) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r11,r5,725
	ctx.r11.s64 = ctx.r5.s64 + 725;
	// lwz r10,5192(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 5192);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// lwzx r6,r9,r3
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// bgt cr6,0x8229a9e8
	if (ctx.cr6.gt) goto loc_8229A9E8;
	// rlwinm r31,r6,2,0,29
	r31.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
loc_8229A938:
	// bge cr6,0x8229a98c
	if (!ctx.cr6.lt) goto loc_8229A98C;
	// addi r10,r11,726
	ctx.r10.s64 = ctx.r11.s64 + 726;
	// addi r9,r11,725
	ctx.r9.s64 = ctx.r11.s64 + 725;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r3
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// lwzx r7,r9,r3
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r10,r10,r4
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r4.u32);
	// lhzx r9,r9,r4
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r4.u32);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8229a988
	if (ctx.cr6.lt) goto loc_8229A988;
	// bne cr6,0x8229a98c
	if (!ctx.cr6.eq) goto loc_8229A98C;
	// add r10,r7,r3
	ctx.r10.u64 = ctx.r7.u64 + ctx.r3.u64;
	// add r9,r8,r3
	ctx.r9.u64 = ctx.r8.u64 + ctx.r3.u64;
	// lbz r10,5200(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 5200);
	// lbz r9,5200(r9)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 5200);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8229a98c
	if (ctx.cr6.gt) goto loc_8229A98C;
loc_8229A988:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8229A98C:
	// addi r10,r11,725
	ctx.r10.s64 = ctx.r11.s64 + 725;
	// lhzx r9,r31,r4
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + ctx.r4.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r8,r8,r4
	ctx.r8.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r4.u32);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8229a9e8
	if (ctx.cr6.lt) goto loc_8229A9E8;
	// bne cr6,0x8229a9c8
	if (!ctx.cr6.eq) goto loc_8229A9C8;
	// add r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 + ctx.r3.u64;
	// add r8,r6,r3
	ctx.r8.u64 = ctx.r6.u64 + ctx.r3.u64;
	// lbz r9,5200(r9)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 5200);
	// lbz r8,5200(r8)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + 5200);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8229a9e8
	if (!ctx.cr6.gt) goto loc_8229A9E8;
loc_8229A9C8:
	// addi r9,r5,725
	ctx.r9.s64 = ctx.r5.s64 + 725;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r10,r9,r3
	REX_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r10.u32);
	// lwz r10,5192(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 5192);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x8229a938
	if (!ctx.cr6.gt) goto loc_8229A938;
loc_8229A9E8:
	// addi r11,r5,725
	ctx.r11.s64 = ctx.r5.s64 + 725;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r6,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r6.u32);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8229EF30) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8229EF38;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12036(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12036);
	// addi r30,r3,12036
	r30.s64 = ctx.r3.s64 + 12036;
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
	ctx.lr = 0x8229EF5C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,12024
	ctx.r3.s64 = r31.s64 + 12024;
	// bl 0x822ac2c0
	ctx.lr = 0x8229EF68;
	sub_822AC2C0(ctx, base);
	// lwz r11,12036(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12036);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8229EF80;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8229FBC0) {
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
	ctx.lr = 0x8229FBC8;
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -56, f30.u64);
	// stfd f31,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r31,0
	r31.s64 = 0;
	// lwz r11,31492(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 31492);
	// lfs f31,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	f31.f64 = double(temp.f32);
	// lwz r30,8(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lfs f30,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	f30.f64 = double(temp.f32);
loc_8229FBF8:
	// lfs f0,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r29,84(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x822a9c68
	ctx.lr = 0x8229FC14;
	sub_822A9C68(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8229fc3c
	if (!ctx.cr0.eq) goto loc_8229FC3C;
	// rlwinm r11,r29,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r1,136
	ctx.r10.s64 = ctx.r1.s64 + 136;
	// addi r9,r1,132
	ctx.r9.s64 = ctx.r1.s64 + 132;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// stfsx f31,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, temp.u32);
	// stfsx f31,r11,r9
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, temp.u32);
	// stfsx f31,r11,r8
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, temp.u32);
	// b 0x8229fcac
	goto loc_8229FCAC;
loc_8229FC3C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822a9c78
	ctx.lr = 0x8229FC48;
	sub_822A9C78(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822a9d08
	ctx.lr = 0x8229FC58;
	sub_822A9D08(ctx, base);
	// li r9,3
	ctx.r9.s64 = 3;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r8,r29,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// subf r7,r3,r28
	ctx.r7.u64 = r28.u64 - ctx.r3.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8229FC70:
	// add r9,r8,r10
	ctx.r9.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lfsx f0,r7,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stfsx f0,r9,r6
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r6.u32, temp.u32);
	// lfs f0,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stfsx f0,r9,r5
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r5.u32, temp.u32);
	// bdnz 0x8229fc70
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8229FC70;
	// lfs f0,108(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + f30.f64));
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
loc_8229FCAC:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplwi cr6,r31,2
	ctx.cr6.compare<uint32_t>(r31.u32, 2, ctx.xer);
	// blt cr6,0x8229fbf8
	if (ctx.cr6.lt) goto loc_8229FBF8;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,4
	ctx.r4.s64 = 4;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x822b9570
	ctx.lr = 0x8229FCC8;
	sub_822B9570(ctx, base);
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

DEFINE_REX_FUNC(sub_822A5240) {
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
	// lwz r3,96(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// bl 0x8229e988
	ctx.lr = 0x822A525C;
	sub_8229E988(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// lfs f0,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
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

DEFINE_REX_FUNC(sub_822A7000) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lfs f31,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	f31.f64 = double(temp.f32);
	// lfs f30,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	f30.f64 = double(temp.f32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stfs f31,80(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r5,r3,64
	ctx.r5.s64 = ctx.r3.s64 + 64;
	// stfs f30,84(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f29,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	f29.f64 = double(temp.f32);
	// stfs f29,88(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x822a4ed0
	ctx.lr = 0x822A7050;
	sub_822A4ED0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
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
	// bl 0x822a4f30
	ctx.lr = 0x822A707C;
	sub_822A4F30(ctx, base);
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f30,f0
	ctx.f12.f64 = double(float(f30.f64 - ctx.f0.f64));
	// lfs f0,8(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f11,f29,f0
	ctx.f11.f64 = double(float(f29.f64 - ctx.f0.f64));
	// lfs f0,0(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f10,f31,f0
	ctx.f10.f64 = double(float(f31.f64 - ctx.f0.f64));
	// lfs f13,16(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f0,23044(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 23044);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f12,f11,f11,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f11.f64, ctx.f11.f64, ctx.f12.f64)));
	// fmadds f12,f10,f10,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f10.f64, ctx.f10.f64, ctx.f12.f64)));
	// fsqrts f12,f12
	ctx.f12.f64 = double(float(sqrt(ctx.f12.f64)));
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x822a70c4
	if (!ctx.cr6.lt) goto loc_822A70C4;
	// li r3,1
	ctx.r3.s64 = 1;
loc_822A70C4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
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

DEFINE_REX_FUNC(sub_822AA9E0) {
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
	ctx.lr = 0x822AA9E8;
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,256(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 256);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822aab64
	if (ctx.cr0.eq) goto loc_822AAB64;
	// lwz r11,452(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 452);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822aaa24
	if (!ctx.cr6.eq) goto loc_822AAA24;
	// lwz r3,2956(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 2956);
	// bl 0x822a7000
	ctx.lr = 0x822AAA20;
	sub_822A7000(ctx, base);
	// b 0x822aab9c
	goto loc_822AAB9C;
loc_822AAA24:
	// lwz r11,1428(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1428);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822aaa88
	if (ctx.cr0.eq) goto loc_822AAA88;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822aaa74
	if (ctx.cr0.eq) goto loc_822AAA74;
	// addi r6,r31,1136
	ctx.r6.s64 = r31.s64 + 1136;
	// addi r5,r31,1120
	ctx.r5.s64 = r31.s64 + 1120;
	// addi r4,r31,1104
	ctx.r4.s64 = r31.s64 + 1104;
	// addi r3,r31,560
	ctx.r3.s64 = r31.s64 + 560;
	// bl 0x822cab38
	ctx.lr = 0x822AAA4C;
	sub_822CAB38(ctx, base);
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r9,945(r31)
	REX_STORE_U8(r31.u32 + 945, ctx.r9.u8);
	// lwz r11,31464(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 31464);
	// stb r10,1536(r11)
	REX_STORE_U8(ctx.r11.u32 + 1536, ctx.r10.u8);
	// stb r10,1538(r11)
	REX_STORE_U8(ctx.r11.u32 + 1538, ctx.r10.u8);
	// lwz r11,1428(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1428);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,1428(r31)
	REX_STORE_U32(r31.u32 + 1428, ctx.r11.u32);
loc_822AAA74:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822aa808
	ctx.lr = 0x822AAA7C;
	sub_822AA808(ctx, base);
	// lwz r11,1428(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1428);
	// rlwinm r11,r11,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stw r11,1428(r31)
	REX_STORE_U32(r31.u32 + 1428, ctx.r11.u32);
loc_822AAA88:
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r31,960
	ctx.r4.s64 = r31.s64 + 960;
	// lfs f13,12(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f12,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x822a5ac8
	ctx.lr = 0x822AAAB4;
	sub_822A5AC8(ctx, base);
	// lfs f0,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fneg f31,f0
	f31.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f12,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f31
	ctx.cr6.compare(ctx.f12.f64, f31.f64);
	// blt cr6,0x822aab5c
	if (ctx.cr6.lt) goto loc_822AAB5C;
	// lfs f13,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, f31.f64);
	// blt cr6,0x822aab5c
	if (ctx.cr6.lt) goto loc_822AAB5C;
	// lfs f0,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// blt cr6,0x822aab5c
	if (ctx.cr6.lt) goto loc_822AAB5C;
	// lfs f11,92(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f11,f31
	ctx.cr6.compare(ctx.f11.f64, f31.f64);
	// blt cr6,0x822aab5c
	if (ctx.cr6.lt) goto loc_822AAB5C;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x822aab08
	if (ctx.cr6.eq) goto loc_822AAB08;
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f0,f0,f0,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f0.f64, ctx.f13.f64)));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f12.f64, ctx.f0.f64)));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// stfs f0,0(r28)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r28.u32 + 0, temp.u32);
loc_822AAB08:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r4,r31,1024
	ctx.r4.s64 = r31.s64 + 1024;
	// lfs f13,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f12,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x822a5ac8
	ctx.lr = 0x822AAB38;
	sub_822A5AC8(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// blt cr6,0x822aab5c
	if (ctx.cr6.lt) goto loc_822AAB5C;
	// lfs f0,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// blt cr6,0x822aab5c
	if (ctx.cr6.lt) goto loc_822AAB5C;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x822aab98
	if (ctx.cr6.eq) goto loc_822AAB98;
	// b 0x822aab90
	goto loc_822AAB90;
loc_822AAB5C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822aab9c
	goto loc_822AAB9C;
loc_822AAB64:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x822aab98
	if (ctx.cr6.eq) goto loc_822AAB98;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r31,1024
	ctx.r4.s64 = r31.s64 + 1024;
	// lfs f13,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f12,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
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
	// bl 0x822aa078
	ctx.lr = 0x822AAB90;
	sub_822AA078(ctx, base);
loc_822AAB90:
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 0, temp.u32);
loc_822AAB98:
	// li r3,1
	ctx.r3.s64 = 1;
loc_822AAB9C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_822B4080) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,31492(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 31492);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822b40d4
	if (ctx.cr6.eq) goto loc_822B40D4;
	// lwz r3,112(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 112);
	// bl 0x822c52d8
	ctx.lr = 0x822B40B0;
	sub_822C52D8(ctx, base);
	// lwz r3,116(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b40c0
	if (ctx.cr6.eq) goto loc_822B40C0;
	// bl 0x822ba018
	ctx.lr = 0x822B40C0;
	sub_822BA018(ctx, base);
loc_822B40C0:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r11.u32);
	// stw r10,136(r31)
	REX_STORE_U32(r31.u32 + 136, ctx.r10.u32);
	// stw r11,140(r31)
	REX_STORE_U32(r31.u32 + 140, ctx.r11.u32);
loc_822B40D4:
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

DEFINE_REX_FUNC(sub_822B71E0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x822B71E8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r3,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r3.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// rlwinm r10,r11,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// ble cr6,0x822b7244
	if (!ctx.cr6.gt) goto loc_822B7244;
	// addi r29,r3,-4
	r29.s64 = ctx.r3.s64 + -4;
loc_822B7208:
	// lwzx r10,r29,r11
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// addi r31,r11,-4
	r31.s64 = ctx.r11.s64 + -4;
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// srawi r5,r31,2
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x3) != 0);
	ctx.r5.s64 = r31.s32 >> 2;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stwx r9,r29,r11
	REX_STORE_U32(r29.u32 + ctx.r11.u32, ctx.r9.u32);
	// bl 0x822b5d40
	ctx.lr = 0x822B7234;
	sub_822B5D40(ctx, base);
	// rlwinm r10,r31,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFC;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// bgt cr6,0x822b7208
	if (ctx.cr6.gt) goto loc_822B7208;
loc_822B7244:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_822B9138) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,23548
	ctx.r11.s64 = ctx.r11.s64 + 23548;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x822c5aa0
	sub_822C5AA0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822B9318) {
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
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x822c5ac0
	ctx.lr = 0x822B9334;
	sub_822C5AC0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822b9348
	if (!ctx.cr0.eq) goto loc_822B9348;
	// lbz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 72);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822b93b0
	if (ctx.cr0.eq) goto loc_822B93B0;
loc_822B9348:
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// lhz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 80);
	// li r8,1
	ctx.r8.s64 = 1;
	// lfs f0,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// addi r7,r11,120
	ctx.r7.s64 = ctx.r11.s64 + 120;
	// rotlwi r9,r11,4
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 4);
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r10,31492(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 31492);
	// rldicr r8,r8,63,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// rlwinm r7,r7,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// srd r8,r8,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r11.u8 & 0x7F));
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stfsx f0,r7,r11
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r7.u32 + ctx.r11.u32, temp.u32);
	// lfs f0,40(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1924(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 1924, temp.u32);
	// lfs f0,44(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1928(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 1928, temp.u32);
	// lfs f0,48(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1932(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 1932, temp.u32);
	// ld r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// std r10,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// stb r6,72(r31)
	REX_STORE_U8(r31.u32 + 72, ctx.r6.u8);
loc_822B93B0:
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

DEFINE_REX_FUNC(sub_822BAA50) {
	REX_FUNC_PROLOGUE();
	// lwz r11,32(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 32);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// lwzx r11,r11,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_822BBB08) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x822BBB10;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r4,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r5,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r5.u32);
	// li r30,0
	r30.s64 = 0;
	// addi r10,r10,24128
	ctx.r10.s64 = ctx.r10.s64 + 24128;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r30,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, r30.u32);
	// lfs f0,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stfs f0,128(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 128, temp.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stfs f0,132(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 132, temp.u32);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r30,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, r30.u32);
	// stw r30,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, r30.u32);
	// stw r30,188(r3)
	REX_STORE_U32(ctx.r3.u32 + 188, r30.u32);
	// stb r30,64(r3)
	REX_STORE_U8(ctx.r3.u32 + 64, r30.u8);
	// stb r30,96(r3)
	REX_STORE_U8(ctx.r3.u32 + 96, r30.u8);
	// beq cr6,0x822bbb7c
	if (ctx.cr6.eq) goto loc_822BBB7C;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x822b11e8
	ctx.lr = 0x822BBB70;
	sub_822B11E8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b1128
	ctx.lr = 0x822BBB7C;
	sub_822B1128(ctx, base);
loc_822BBB7C:
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r30,136(r31)
	REX_STORE_U32(r31.u32 + 136, r30.u32);
	// stw r30,140(r31)
	REX_STORE_U32(r31.u32 + 140, r30.u32);
	// addi r9,r31,156
	ctx.r9.s64 = r31.s64 + 156;
	// stw r30,144(r31)
	REX_STORE_U32(r31.u32 + 144, r30.u32);
	// addi r10,r31,136
	ctx.r10.s64 = r31.s64 + 136;
	// stw r30,148(r31)
	REX_STORE_U32(r31.u32 + 148, r30.u32);
	// addi r10,r9,-4
	ctx.r10.s64 = ctx.r9.s64 + -4;
	// stw r30,152(r31)
	REX_STORE_U32(r31.u32 + 152, r30.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_822BBBA4:
	// stwu r30,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, r30.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x822bbba4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822BBBA4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_822C2090) {
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
	// bl 0x822bbb08
	ctx.lr = 0x822C20AC;
	sub_822BBB08(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r9,-32212
	ctx.r9.s64 = -2111045632;
	// addi r11,r11,24312
	ctx.r11.s64 = ctx.r11.s64 + 24312;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-4280
	ctx.r11.s64 = ctx.r9.s64 + -4280;
	// addi r10,r10,27816
	ctx.r10.s64 = ctx.r10.s64 + 27816;
	// lis r8,-32212
	ctx.r8.s64 = -2111045632;
	// stw r11,196(r31)
	REX_STORE_U32(r31.u32 + 196, ctx.r11.u32);
	// lis r7,-32212
	ctx.r7.s64 = -2111045632;
	// stw r10,192(r31)
	REX_STORE_U32(r31.u32 + 192, ctx.r10.u32);
	// lis r6,-32212
	ctx.r6.s64 = -2111045632;
	// addi r9,r8,-4016
	ctx.r9.s64 = ctx.r8.s64 + -4016;
	// addi r10,r7,2088
	ctx.r10.s64 = ctx.r7.s64 + 2088;
	// addi r11,r6,2088
	ctx.r11.s64 = ctx.r6.s64 + 2088;
	// stw r9,200(r31)
	REX_STORE_U32(r31.u32 + 200, ctx.r9.u32);
	// lis r3,-32220
	ctx.r3.s64 = -2111569920;
	// stw r10,204(r31)
	REX_STORE_U32(r31.u32 + 204, ctx.r10.u32);
	// lis r5,-32212
	ctx.r5.s64 = -2111045632;
	// stw r11,208(r31)
	REX_STORE_U32(r31.u32 + 208, ctx.r11.u32);
	// lis r4,-32220
	ctx.r4.s64 = -2111569920;
	// addi r11,r3,27816
	ctx.r11.s64 = ctx.r3.s64 + 27816;
	// li r30,1
	r30.s64 = 1;
	// addi r9,r5,-13968
	ctx.r9.s64 = ctx.r5.s64 + -13968;
	// stw r11,220(r31)
	REX_STORE_U32(r31.u32 + 220, ctx.r11.u32);
	// addi r10,r4,27816
	ctx.r10.s64 = ctx.r4.s64 + 27816;
	// stw r30,32(r31)
	REX_STORE_U32(r31.u32 + 32, r30.u32);
	// stw r9,212(r31)
	REX_STORE_U32(r31.u32 + 212, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,216(r31)
	REX_STORE_U32(r31.u32 + 216, ctx.r10.u32);
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

DEFINE_REX_FUNC(sub_822C5658) {
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
	ctx.lr = 0x822C5660;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// mr r25,r10
	r25.u64 = ctx.r10.u64;
	// bl 0x822c4b70
	ctx.lr = 0x822C5684;
	sub_822C4B70(ctx, base);
	// rlwinm. r11,r30,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822c56ac
	if (ctx.cr0.eq) goto loc_822C56AC;
	// rlwinm. r11,r30,0,17,20
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x7800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822c569c
	if (ctx.cr0.eq) goto loc_822C569C;
	// rlwinm r11,r30,0,21,16
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFF87FF;
	// ori r30,r11,384
	r30.u64 = ctx.r11.u64 | 384;
loc_822C569C:
	// rlwinm. r11,r30,0,9,15
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x7F0000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822c56a8
	if (ctx.cr0.eq) goto loc_822C56A8;
	// rlwinm r30,r30,0,16,8
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFF80FFFF;
loc_822C56A8:
	// rlwinm r30,r30,0,22,20
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFBFF;
loc_822C56AC:
	// addi r11,r29,-2
	ctx.r11.s64 = r29.s64 + -2;
	// stw r28,24(r31)
	REX_STORE_U32(r31.u32 + 24, r28.u32);
	// li r24,0
	r24.s64 = 0;
	// stw r30,32(r31)
	REX_STORE_U32(r31.u32 + 32, r30.u32);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// stw r27,36(r31)
	REX_STORE_U32(r31.u32 + 36, r27.u32);
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// stw r26,136(r31)
	REX_STORE_U32(r31.u32 + 136, r26.u32);
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stb r24,260(r31)
	REX_STORE_U8(r31.u32 + 260, r24.u8);
	// and r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 & r29.u64;
	// stw r10,132(r31)
	REX_STORE_U32(r31.u32 + 132, ctx.r10.u32);
loc_822C56DC:
	// li r10,4
	ctx.r10.s64 = 4;
	// slw r10,r10,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// and. r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 & r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822c56f8
	if (ctx.cr0.eq) goto loc_822C56F8;
	// lbz r10,260(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 260);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r10,260(r31)
	REX_STORE_U8(r31.u32 + 260, ctx.r10.u8);
loc_822C56F8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x822c56dc
	if (ctx.cr6.lt) goto loc_822C56DC;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x822c5720
	if (ctx.cr6.eq) goto loc_822C5720;
	// addi r3,r31,44
	ctx.r3.s64 = r31.s64 + 44;
	// li r5,40
	ctx.r5.s64 = 40;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x822C5720;
	sub_822D4FA0(ctx, base);
loc_822C5720:
	// std r24,88(r31)
	REX_STORE_U64(r31.u32 + 88, r24.u64);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// std r24,96(r31)
	REX_STORE_U64(r31.u32 + 96, r24.u64);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// std r24,104(r31)
	REX_STORE_U64(r31.u32 + 104, r24.u64);
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// std r24,112(r31)
	REX_STORE_U64(r31.u32 + 112, r24.u64);
	// addi r8,r10,23304
	ctx.r8.s64 = ctx.r10.s64 + 23304;
	// std r24,120(r31)
	REX_STORE_U64(r31.u32 + 120, r24.u64);
	// stw r24,40(r31)
	REX_STORE_U32(r31.u32 + 40, r24.u32);
	// addi r7,r9,23316
	ctx.r7.s64 = ctx.r9.s64 + 23316;
loc_822C574C:
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,32(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 32);
	// slw r10,r10,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// and. r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822c5794
	if (ctx.cr0.eq) goto loc_822C5794;
	// addi r10,r11,22
	ctx.r10.s64 = ctx.r11.s64 + 22;
	// lwz r9,40(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 40);
	// addi r6,r11,11
	ctx.r6.s64 = ctx.r11.s64 + 11;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r10,r31
	REX_STORE_U32(ctx.r10.u32 + r31.u32, ctx.r9.u32);
	// lwz r10,40(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lwzx r9,r6,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + r31.u32);
	// lbzx r6,r11,r8
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// lbzx r9,r9,r7
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r7.u32);
	// mullw r9,r9,r6
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r6.s32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r10.u32);
loc_822C5794:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// blt cr6,0x822c574c
	if (ctx.cr6.lt) goto loc_822C574C;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// lwz r9,40(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// mullw r3,r9,r11
	ctx.r3.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// stw r3,128(r31)
	REX_STORE_U32(r31.u32 + 128, ctx.r3.u32);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x822c58e8
	if (ctx.cr6.lt) goto loc_822C58E8;
	// bne cr6,0x822c591c
	if (!ctx.cr6.eq) goto loc_822C591C;
	// lis r10,-17408
	ctx.r10.s64 = -1140850688;
	// lis r28,-32163
	r28.s64 = -2107834368;
	// ori r10,r10,16386
	ctx.r10.u64 = ctx.r10.u64 | 16386;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// beq cr6,0x822c5844
	if (ctx.cr6.eq) goto loc_822C5844;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x822c80d0
	ctx.lr = 0x822C57E4;
	sub_822C80D0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x822c5804
	if (ctx.cr0.eq) goto loc_822C5804;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822d5870
	ctx.lr = 0x822C57FC;
	sub_822D5870(ctx, base);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// b 0x822c5808
	goto loc_822C5808;
loc_822C5804:
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
loc_822C5808:
	// stw r7,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r7.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,128(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 128);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x824047d8
	ctx.lr = 0x822C5820;
	sub_824047D8(ctx, base);
	// lwz r3,31492(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 31492);
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r4,128(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 128);
	// bl 0x822a98e0
	ctx.lr = 0x822C5830;
	sub_822A98E0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r11,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r11.u32);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x82404e00
	ctx.lr = 0x822C5844;
	sub_82404E00(ctx, base);
loc_822C5844:
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x822c591c
	if (!ctx.cr6.gt) goto loc_822C591C;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x822c80d0
	ctx.lr = 0x822C5858;
	sub_822C80D0(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x822c5874
	if (ctx.cr0.eq) goto loc_822C5874;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822d5870
	ctx.lr = 0x822C5870;
	sub_822D5870(ctx, base);
	// b 0x822c5878
	goto loc_822C5878;
loc_822C5874:
	// mr r29,r24
	r29.u64 = r24.u64;
loc_822C5878:
	// lwz r11,132(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 132);
	// li r30,6
	r30.s64 = 6;
	// stw r29,8(r31)
	REX_STORE_U32(r31.u32 + 8, r29.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x822c5890
	if (ctx.cr6.eq) goto loc_822C5890;
	// li r30,1
	r30.s64 = 1;
loc_822C5890:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822b85b8
	ctx.lr = 0x822C5898;
	sub_822B85B8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// bl 0x82404870
	ctx.lr = 0x822C58B0;
	sub_82404870(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r29,12(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r30,31492(r28)
	r30.u64 = REX_LOAD_U32(r28.u32 + 31492);
	// bl 0x822b85b8
	ctx.lr = 0x822C58C0;
	sub_822B85B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x822a98e0
	ctx.lr = 0x822C58D0;
	sub_822A98E0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r11,140(r31)
	REX_STORE_U32(r31.u32 + 140, ctx.r11.u32);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x82404e00
	ctx.lr = 0x822C58E4;
	sub_82404E00(ctx, base);
	// b 0x822c591c
	goto loc_822C591C;
loc_822C58E8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c58fc
	if (ctx.cr6.eq) goto loc_822C58FC;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x822c80c8
	ctx.lr = 0x822C58F8;
	sub_822C80C8(ctx, base);
	// stw r3,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r3.u32);
loc_822C58FC:
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x822c591c
	if (!ctx.cr6.gt) goto loc_822C591C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822b85b8
	ctx.lr = 0x822C5910;
	sub_822B85B8(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x822c80c8
	ctx.lr = 0x822C5918;
	sub_822C80C8(ctx, base);
	// stw r3,140(r31)
	REX_STORE_U32(r31.u32 + 140, ctx.r3.u32);
loc_822C591C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_822CD540) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x822CD548;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8242f1c8
	ctx.lr = 0x822CD55C;
	sub_8242F1C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x822cd56c
	if (!ctx.cr0.lt) goto loc_822CD56C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822cd668
	goto loc_822CD668;
loc_822CD56C:
	// li r28,0
	r28.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822CD58C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822cd5e4
	if (ctx.cr6.eq) goto loc_822CD5E4;
	// addi r29,r31,12
	r29.s64 = r31.s64 + 12;
	// mr r30,r28
	r30.u64 = r28.u64;
loc_822CD5A0:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822CD5BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r11,1042(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 1042);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822cd5d0
	if (ctx.cr0.eq) goto loc_822CD5D0;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// ble cr6,0x822cd5e4
	if (!ctx.cr6.gt) goto loc_822CD5E4;
loc_822CD5D0:
	// addi r11,r30,1
	ctx.r11.s64 = r30.s64 + 1;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r30,r11,24
	r30.u64 = ctx.r11.u32 & 0xFF;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x822cd5a0
	if (ctx.cr6.lt) goto loc_822CD5A0;
loc_822CD5E4:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822CD610;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x822cd638
	if (!ctx.cr0.lt) goto loc_822CD638;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822CD62C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r28,0(r31)
	REX_STORE_U32(r31.u32 + 0, r28.u32);
	// b 0x822cd668
	goto loc_822CD668;
loc_822CD638:
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x822c80d0
	ctx.lr = 0x822CD640;
	sub_822C80D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822cd650
	if (ctx.cr0.eq) goto loc_822CD650;
	// bl 0x822ce140
	ctx.lr = 0x822CD64C;
	sub_822CE140(ctx, base);
	// b 0x822cd654
	goto loc_822CD654;
loc_822CD650:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_822CD654:
	// stw r3,1080(r31)
	REX_STORE_U32(r31.u32 + 1080, ctx.r3.u32);
	// bl 0x822ce198
	ctx.lr = 0x822CD65C;
	sub_822CE198(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,1084(r31)
	REX_STORE_U8(r31.u32 + 1084, ctx.r11.u8);
loc_822CD668:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_822D14E8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x822D14F0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r29,r4,24
	r29.u64 = ctx.r4.u32 & 0xFF;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r29,32
	ctx.cr6.compare<uint32_t>(r29.u32, 32, ctx.xer);
	// blt cr6,0x822d1510
	if (ctx.cr6.lt) goto loc_822D1510;
loc_822D1508:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822d1574
	goto loc_822D1574;
loc_822D1510:
	// lwz r11,4600(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4600);
	// addi r31,r30,4600
	r31.s64 = r30.s64 + 4600;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D1528;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r10,r29,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
	// clrlwi r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x822d1508
	if (!ctx.cr6.lt) goto loc_822D1508;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822d1558
	if (ctx.cr6.eq) goto loc_822D1558;
	// mulli r11,r11,148
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(148));
	// add r30,r11,r10
	r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x822d155c
	goto loc_822D155C;
loc_822D1558:
	// li r30,0
	r30.s64 = 0;
loc_822D155C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D1570;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_822D1574:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_822D3128) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822d3178
	if (ctx.cr6.eq) goto loc_822D3178;
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x822d3144
	if (ctx.cr6.lt) goto loc_822D3144;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x822d3148
	goto loc_822D3148;
loc_822D3144:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_822D3148:
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822d3178
	if (ctx.cr6.lt) goto loc_822D3178;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x822d3160
	if (ctx.cr6.lt) goto loc_822D3160;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x822d3164
	goto loc_822D3164;
loc_822D3160:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_822D3164:
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// li r3,1
	ctx.r3.s64 = 1;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
loc_822D3178:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822D4500) {
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
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x822d4568
	if (ctx.cr6.eq) goto loc_822D4568;
	// lbz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822d4538
	if (ctx.cr0.eq) goto loc_822D4538;
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x822d98f0
	ctx.lr = 0x822D4538;
	sub_822D98F0(ctx, base);
loc_822D4538:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,8(r31)
	REX_STORE_U8(r31.u32 + 8, ctx.r11.u8);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// lbz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822d4560
	if (ctx.cr0.eq) goto loc_822D4560;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 4);
	// bl 0x822d43c0
	ctx.lr = 0x822D455C;
	sub_822D43C0(ctx, base);
	// b 0x822d4568
	goto loc_822D4568;
loc_822D4560:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
loc_822D4568:
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

DEFINE_REX_FUNC(__savefpr_24) {
	REX_FUNC_PROLOGUE();
	PPCRegister f24{};
	PPCRegister f25{};
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	// stfd f24,-64(r12)
	ctx.fpscr.disableFlushMode();
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

DEFINE_REX_FUNC(sub_822D56E0) {
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
	// li r4,4
	ctx.r4.s64 = 4;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x822dba28
	ctx.lr = 0x822D56F8;
	sub_822DBA28(ctx, base);
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,-11312(r10)
	REX_STORE_U32(ctx.r10.u32 + -11312, ctx.r11.u32);
	// stw r11,-11316(r9)
	REX_STORE_U32(ctx.r9.u32 + -11316, ctx.r11.u32);
	// bne 0x822d5718
	if (!ctx.cr0.eq) goto loc_822D5718;
	// li r3,24
	ctx.r3.s64 = 24;
	// b 0x822d5724
	goto loc_822D5724;
loc_822D5718:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_822D5724:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822D6F20) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x822D6F28;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x822098c8
	ctx.lr = 0x822D6F30;
	sub_822098C8(ctx, base);
	// lis r30,-32172
	r30.s64 = -2108424192;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,-2160(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + -2160);
	// bl 0x824d49dc
	ctx.lr = 0x822D6F40;
	__imp__KeTlsGetValue(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x822d6fd0
	if (!ctx.cr0.eq) goto loc_822D6FD0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-2160(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + -2160);
	// bl 0x824d49cc
	ctx.lr = 0x822D6F54;
	__imp__KeTlsSetValue(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822d6fe0
	if (ctx.cr0.eq) goto loc_822D6FE0;
	// li r4,196
	ctx.r4.s64 = 196;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822dba28
	ctx.lr = 0x822D6F68;
	sub_822DBA28(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// lwz r3,-2160(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + -2160);
	// beq 0x822d6fc4
	if (ctx.cr0.eq) goto loc_822D6FC4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x824d49cc
	ctx.lr = 0x822D6F7C;
	__imp__KeTlsSetValue(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822d6fb4
	if (ctx.cr0.eq) goto loc_822D6FB4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,29928
	ctx.r11.s64 = ctx.r11.s64 + 29928;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// stw r11,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r11.u32);
	// stw r9,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// bl 0x823cd280
	ctx.lr = 0x822D6FA4;
	sub_823CD280(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// b 0x822d6fe0
	goto loc_822D6FE0;
loc_822D6FB4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d98f0
	ctx.lr = 0x822D6FBC;
	sub_822D98F0(ctx, base);
	// li r31,0
	r31.s64 = 0;
	// b 0x822d6fe0
	goto loc_822D6FE0;
loc_822D6FC4:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x824d49cc
	ctx.lr = 0x822D6FCC;
	__imp__KeTlsSetValue(ctx, base);
	// b 0x822d6fe0
	goto loc_822D6FE0;
loc_822D6FD0:
	// addi r11,r31,-1
	ctx.r11.s64 = r31.s64 + -1;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r11,r31
	r31.u64 = ctx.r11.u64 & r31.u64;
loc_822D6FE0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8220a618
	ctx.lr = 0x822D6FE8;
	sub_8220A618(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(__savevmx_87) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(__restvmx_100) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(sub_822DB7F0) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// and r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 & ctx.r4.u64;
	// lwz r3,-1664(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + -1664);
	// andc r9,r3,r4
	ctx.r9.u64 = ctx.r3.u64 & ~ctx.r4.u64;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// stw r11,-1664(r10)
	REX_STORE_U32(ctx.r10.u32 + -1664, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822DBA90) {
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
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// addi r30,r11,-1656
	r30.s64 = ctx.r11.s64 + -1656;
	// mr r31,r30
	r31.u64 = r30.u64;
loc_822DBAB0:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822dbad4
	if (ctx.cr6.eq) goto loc_822DBAD4;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x822dbad4
	if (ctx.cr6.eq) goto loc_822DBAD4;
	// bl 0x822d98f0
	ctx.lr = 0x822DBACC;
	sub_822D98F0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_822DBAD4:
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// addi r11,r30,288
	ctx.r11.s64 = r30.s64 + 288;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822dbab0
	if (ctx.cr6.lt) goto loc_822DBAB0;
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

DEFINE_REX_FUNC(sub_822DEC08) {
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
	ctx.lr = 0x822DEC10;
	// stwu r1,-1328(r1)
	ea = -1328 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r30,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r30.u32);
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// stw r30,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// mr r27,r30
	r27.u64 = r30.u64;
	// stw r30,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r30.u32);
	// mr r25,r30
	r25.u64 = r30.u64;
	// mr r16,r30
	r16.u64 = r30.u64;
	// bne cr6,0x822dec60
	if (!ctx.cr6.eq) goto loc_822DEC60;
loc_822DEC48:
	// bl 0x822db6c0
	ctx.lr = 0x822DEC4C;
	sub_822DB6C0(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x822d6910
	ctx.lr = 0x822DEC58;
	sub_822D6910(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x822df748
	goto loc_822DF748;
loc_822DEC60:
	// lwz r11,12(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 12);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822decfc
	if (!ctx.cr0.eq) goto loc_822DECFC;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x822e15a8
	ctx.lr = 0x822DEC74;
	sub_822E15A8(ctx, base);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// addi r11,r11,-11584
	ctx.r11.s64 = ctx.r11.s64 + -11584;
	// addi r8,r10,104
	ctx.r8.s64 = ctx.r10.s64 + 104;
	// beq cr6,0x822decb0
	if (ctx.cr6.eq) goto loc_822DECB0;
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// beq cr6,0x822decb0
	if (ctx.cr6.eq) goto loc_822DECB0;
	// srawi r10,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 5;
	// clrlwi r9,r3,27
	ctx.r9.u64 = ctx.r3.u32 & 0x1F;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r10,r9,72
	ctx.r10.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(72));
	// lwzx r9,r7,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// b 0x822decb4
	goto loc_822DECB4;
loc_822DECB0:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_822DECB4:
	// lbz r10,40(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 40);
	// rlwinm. r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822dec48
	if (!ctx.cr0.eq) goto loc_822DEC48;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x822decec
	if (ctx.cr6.eq) goto loc_822DECEC;
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// beq cr6,0x822decec
	if (ctx.cr6.eq) goto loc_822DECEC;
	// srawi r10,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 5;
	// clrlwi r9,r3,27
	ctx.r9.u64 = ctx.r3.u32 & 0x1F;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r10,r9,72
	ctx.r10.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(72));
	// lwzx r11,r8,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x822decf0
	goto loc_822DECF0;
loc_822DECEC:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_822DECF0:
	// lbz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 40);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822dec48
	if (!ctx.cr0.eq) goto loc_822DEC48;
loc_822DECFC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x822dec48
	if (ctx.cr6.eq) goto loc_822DEC48;
	// bl 0x822dcb08
	ctx.lr = 0x822DED08;
	sub_822DCB08(ctx, base);
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// cmplw cr6,r18,r11
	ctx.cr6.compare<uint32_t>(r18.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822df714
	if (ctx.cr6.eq) goto loc_822DF714;
	// bl 0x822dcb08
	ctx.lr = 0x822DED18;
	sub_822DCB08(ctx, base);
	// addi r11,r3,64
	ctx.r11.s64 = ctx.r3.s64 + 64;
	// cmplw cr6,r18,r11
	ctx.cr6.compare<uint32_t>(r18.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822df714
	if (ctx.cr6.eq) goto loc_822DF714;
	// lbz r29,0(r31)
	r29.u64 = REX_LOAD_U8(r31.u32 + 0);
	// mr r24,r30
	r24.u64 = r30.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// extsb. r8,r29
	ctx.r8.s64 = r29.s8;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// mr r14,r30
	r14.u64 = r30.u64;
	// beq 0x822df70c
	if (ctx.cr0.eq) goto loc_822DF70C;
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// lwz r21,112(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// lwz r28,112(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r19,r31,-1
	r19.s64 = r31.s64 + -1;
	// lis r15,-32254
	r15.s64 = -2113798144;
	// lis r20,-32254
	r20.s64 = -2113798144;
	// addi r23,r11,88
	r23.s64 = ctx.r11.s64 + 88;
	// addi r22,r10,-2112
	r22.s64 = ctx.r10.s64 + -2112;
	// addi r17,r9,31400
	r17.s64 = ctx.r9.s64 + 31400;
loc_822DED74:
	// addi r19,r19,1
	r19.s64 = r19.s64 + 1;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// blt cr6,0x822df6f8
	if (ctx.cr6.lt) goto loc_822DF6F8;
	// cmpwi cr6,r8,32
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 32, ctx.xer);
	// blt cr6,0x822deda0
	if (ctx.cr6.lt) goto loc_822DEDA0;
	// cmpwi cr6,r8,120
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 120, ctx.xer);
	// bgt cr6,0x822deda0
	if (ctx.cr6.gt) goto loc_822DEDA0;
	// add r11,r8,r17
	ctx.r11.u64 = ctx.r8.u64 + r17.u64;
	// lbz r11,-32(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -32);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// b 0x822deda4
	goto loc_822DEDA4;
loc_822DEDA0:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_822DEDA4:
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// mulli r11,r11,9
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(9));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbzx r11,r11,r17
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + r17.u32);
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x822dec48
	if (ctx.cr6.eq) goto loc_822DEC48;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x822df6e0
	if (ctx.cr6.gt) goto loc_822DF6E0;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822defc4
	if (ctx.cr6.eq) goto loc_822DEFC4;
	// bdz 0x822dedf8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_822DEDF8;
	// bdz 0x822dee18
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_822DEE18;
	// bdz 0x822dee68
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_822DEE68;
	// bdz 0x822deeb4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_822DEEB4;
	// bdz 0x822deebc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_822DEEBC;
	// bdz 0x822deef4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_822DEEF4;
	// b 0x822df010
	goto loc_822DF010;
loc_822DEDF8:
	// li r27,0
	r27.s64 = 0;
	// li r25,-1
	r25.s64 = -1;
	// mr r21,r27
	r21.u64 = r27.u64;
	// stw r27,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r27.u32);
	// stw r27,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r27.u32);
	// mr r16,r27
	r16.u64 = r27.u64;
	// stw r27,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r27.u32);
	// b 0x822df6e0
	goto loc_822DF6E0;
loc_822DEE18:
	// cmpwi cr6,r8,32
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 32, ctx.xer);
	// beq cr6,0x822dee60
	if (ctx.cr6.eq) goto loc_822DEE60;
	// cmpwi cr6,r8,35
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 35, ctx.xer);
	// beq cr6,0x822dee58
	if (ctx.cr6.eq) goto loc_822DEE58;
	// cmpwi cr6,r8,43
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 43, ctx.xer);
	// beq cr6,0x822dee50
	if (ctx.cr6.eq) goto loc_822DEE50;
	// cmpwi cr6,r8,45
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 45, ctx.xer);
	// beq cr6,0x822dee48
	if (ctx.cr6.eq) goto loc_822DEE48;
	// cmpwi cr6,r8,48
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 48, ctx.xer);
	// bne cr6,0x822df6e0
	if (!ctx.cr6.eq) goto loc_822DF6E0;
	// ori r27,r27,8
	r27.u64 = r27.u64 | 8;
	// b 0x822df6e0
	goto loc_822DF6E0;
loc_822DEE48:
	// ori r27,r27,4
	r27.u64 = r27.u64 | 4;
	// b 0x822df6e0
	goto loc_822DF6E0;
loc_822DEE50:
	// ori r27,r27,1
	r27.u64 = r27.u64 | 1;
	// b 0x822df6e0
	goto loc_822DF6E0;
loc_822DEE58:
	// ori r27,r27,128
	r27.u64 = r27.u64 | 128;
	// b 0x822df6e0
	goto loc_822DF6E0;
loc_822DEE60:
	// ori r27,r27,2
	r27.u64 = r27.u64 | 2;
	// b 0x822df6e0
	goto loc_822DF6E0;
loc_822DEE68:
	// cmpwi cr6,r8,42
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 42, ctx.xer);
	// bne cr6,0x822dee9c
	if (!ctx.cr6.eq) goto loc_822DEE9C;
	// addi r11,r26,7
	ctx.r11.s64 = r26.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r26,r11,8
	r26.s64 = ctx.r11.s64 + 8;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bge cr6,0x822df6e0
	if (!ctx.cr6.lt) goto loc_822DF6E0;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// ori r27,r27,4
	r27.u64 = r27.u64 | 4;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// b 0x822deeac
	goto loc_822DEEAC;
loc_822DEE9C:
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// mulli r11,r11,10
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(10));
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
loc_822DEEAC:
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// b 0x822df6e0
	goto loc_822DF6E0;
loc_822DEEB4:
	// li r25,0
	r25.s64 = 0;
	// b 0x822df6e0
	goto loc_822DF6E0;
loc_822DEEBC:
	// cmpwi cr6,r8,42
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 42, ctx.xer);
	// bne cr6,0x822deee4
	if (!ctx.cr6.eq) goto loc_822DEEE4;
	// addi r11,r26,7
	ctx.r11.s64 = r26.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r26,r11,8
	r26.s64 = ctx.r11.s64 + 8;
	// lwz r25,4(r11)
	r25.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// bge cr6,0x822df6e0
	if (!ctx.cr6.lt) goto loc_822DF6E0;
	// li r25,-1
	r25.s64 = -1;
	// b 0x822df6e0
	goto loc_822DF6E0;
loc_822DEEE4:
	// mulli r11,r25,10
	ctx.r11.s64 = static_cast<int64_t>(r25.u64 * static_cast<uint64_t>(10));
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r25,r11,-48
	r25.s64 = ctx.r11.s64 + -48;
	// b 0x822df6e0
	goto loc_822DF6E0;
loc_822DEEF4:
	// cmpwi cr6,r8,73
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 73, ctx.xer);
	// beq cr6,0x822def44
	if (ctx.cr6.eq) goto loc_822DEF44;
	// cmpwi cr6,r8,104
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 104, ctx.xer);
	// beq cr6,0x822def3c
	if (ctx.cr6.eq) goto loc_822DEF3C;
	// cmpwi cr6,r8,108
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 108, ctx.xer);
	// beq cr6,0x822def1c
	if (ctx.cr6.eq) goto loc_822DEF1C;
	// cmpwi cr6,r8,119
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 119, ctx.xer);
	// bne cr6,0x822df6e0
	if (!ctx.cr6.eq) goto loc_822DF6E0;
	// ori r27,r27,2048
	r27.u64 = r27.u64 | 2048;
	// b 0x822df6e0
	goto loc_822DF6E0;
loc_822DEF1C:
	// lbz r11,1(r19)
	ctx.r11.u64 = REX_LOAD_U8(r19.u32 + 1);
	// cmplwi cr6,r11,108
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 108, ctx.xer);
	// bne cr6,0x822def34
	if (!ctx.cr6.eq) goto loc_822DEF34;
	// addi r19,r19,1
	r19.s64 = r19.s64 + 1;
	// ori r27,r27,4096
	r27.u64 = r27.u64 | 4096;
	// b 0x822df6e0
	goto loc_822DF6E0;
loc_822DEF34:
	// ori r27,r27,16
	r27.u64 = r27.u64 | 16;
	// b 0x822df6e0
	goto loc_822DF6E0;
loc_822DEF3C:
	// ori r27,r27,32
	r27.u64 = r27.u64 | 32;
	// b 0x822df6e0
	goto loc_822DF6E0;
loc_822DEF44:
	// lbz r11,1(r19)
	ctx.r11.u64 = REX_LOAD_U8(r19.u32 + 1);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,54
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 54, ctx.xer);
	// bne cr6,0x822def6c
	if (!ctx.cr6.eq) goto loc_822DEF6C;
	// lbz r10,2(r19)
	ctx.r10.u64 = REX_LOAD_U8(r19.u32 + 2);
	// cmplwi cr6,r10,52
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 52, ctx.xer);
	// bne cr6,0x822def6c
	if (!ctx.cr6.eq) goto loc_822DEF6C;
	// addi r19,r19,2
	r19.s64 = r19.s64 + 2;
	// ori r27,r27,32768
	r27.u64 = r27.u64 | 32768;
	// b 0x822df6e0
	goto loc_822DF6E0;
loc_822DEF6C:
	// cmpwi cr6,r11,51
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 51, ctx.xer);
	// bne cr6,0x822def8c
	if (!ctx.cr6.eq) goto loc_822DEF8C;
	// lbz r10,2(r19)
	ctx.r10.u64 = REX_LOAD_U8(r19.u32 + 2);
	// cmplwi cr6,r10,50
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 50, ctx.xer);
	// bne cr6,0x822def8c
	if (!ctx.cr6.eq) goto loc_822DEF8C;
	// addi r19,r19,2
	r19.s64 = r19.s64 + 2;
	// rlwinm r27,r27,0,17,15
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// b 0x822df6e0
	goto loc_822DF6E0;
loc_822DEF8C:
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// beq cr6,0x822df6e0
	if (ctx.cr6.eq) goto loc_822DF6E0;
	// cmpwi cr6,r11,105
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 105, ctx.xer);
	// beq cr6,0x822df6e0
	if (ctx.cr6.eq) goto loc_822DF6E0;
	// cmpwi cr6,r11,111
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 111, ctx.xer);
	// beq cr6,0x822df6e0
	if (ctx.cr6.eq) goto loc_822DF6E0;
	// cmpwi cr6,r11,117
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 117, ctx.xer);
	// beq cr6,0x822df6e0
	if (ctx.cr6.eq) goto loc_822DF6E0;
	// cmpwi cr6,r11,120
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 120, ctx.xer);
	// beq cr6,0x822df6e0
	if (ctx.cr6.eq) goto loc_822DF6E0;
	// cmpwi cr6,r11,88
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 88, ctx.xer);
	// beq cr6,0x822df6e0
	if (ctx.cr6.eq) goto loc_822DF6E0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
loc_822DEFC4:
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// clrlwi r3,r29,24
	ctx.r3.u64 = r29.u32 & 0xFF;
	// li r16,0
	r16.s64 = 0;
	// bl 0x822e17e0
	ctx.lr = 0x822DEFD4;
	sub_822E17E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822deff8
	if (ctx.cr0.eq) goto loc_822DEFF8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822deaa0
	ctx.lr = 0x822DEFEC;
	sub_822DEAA0(ctx, base);
	// lbzu r29,1(r19)
	ea = 1 + r19.u32;
	r29.u64 = REX_LOAD_U8(ea);
	r19.u32 = ea;
	// cmplwi r29,0
	ctx.cr0.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq 0x822dec48
	if (ctx.cr0.eq) goto loc_822DEC48;
loc_822DEFF8:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822deaa0
	ctx.lr = 0x822DF008;
	sub_822DEAA0(ctx, base);
	// lwz r24,80(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x822df6e0
	goto loc_822DF6E0;
loc_822DF010:
	// addi r11,r8,-65
	ctx.r11.s64 = ctx.r8.s64 + -65;
	// cmplwi cr6,r11,55
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 55, ctx.xer);
	// bgt cr6,0x822df510
	if (ctx.cr6.gt) goto loc_822DF510;
	// lis r12,-32254
	ctx.r12.s64 = -2113798144;
	// rlwinm r0,r11,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r12,r12,31496
	ctx.r12.s64 = ctx.r12.s64 + 31496;
	// lhzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32210
	ctx.r12.s64 = -2110914560;
	// addi r12,r12,-4028
	ctx.r12.s64 = ctx.r12.s64 + -4028;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_822DF220;
	case 1:
		goto loc_822DF510;
	case 2:
		goto loc_822DF044;
	case 3:
		goto loc_822DF510;
	case 4:
		goto loc_822DF220;
	case 5:
		goto loc_822DF510;
	case 6:
		goto loc_822DF220;
	case 7:
		goto loc_822DF510;
	case 8:
		goto loc_822DF510;
	case 9:
		goto loc_822DF510;
	case 10:
		goto loc_822DF510;
	case 11:
		goto loc_822DF510;
	case 12:
		goto loc_822DF510;
	case 13:
		goto loc_822DF510;
	case 14:
		goto loc_822DF510;
	case 15:
		goto loc_822DF510;
	case 16:
		goto loc_822DF510;
	case 17:
		goto loc_822DF510;
	case 18:
		goto loc_822DF12C;
	case 19:
		goto loc_822DF510;
	case 20:
		goto loc_822DF510;
	case 21:
		goto loc_822DF510;
	case 22:
		goto loc_822DF510;
	case 23:
		goto loc_822DF360;
	case 24:
		goto loc_822DF510;
	case 25:
		goto loc_822DF0B0;
	case 26:
		goto loc_822DF510;
	case 27:
		goto loc_822DF510;
	case 28:
		goto loc_822DF510;
	case 29:
		goto loc_822DF510;
	case 30:
		goto loc_822DF510;
	case 31:
		goto loc_822DF510;
	case 32:
		goto loc_822DF22C;
	case 33:
		goto loc_822DF510;
	case 34:
		goto loc_822DF054;
	case 35:
		goto loc_822DF350;
	case 36:
		goto loc_822DF22C;
	case 37:
		goto loc_822DF22C;
	case 38:
		goto loc_822DF22C;
	case 39:
		goto loc_822DF510;
	case 40:
		goto loc_822DF350;
	case 41:
		goto loc_822DF510;
	case 42:
		goto loc_822DF510;
	case 43:
		goto loc_822DF510;
	case 44:
		goto loc_822DF510;
	case 45:
		goto loc_822DF1E4;
	case 46:
		goto loc_822DF398;
	case 47:
		goto loc_822DF35C;
	case 48:
		goto loc_822DF510;
	case 49:
		goto loc_822DF510;
	case 50:
		goto loc_822DF13C;
	case 51:
		goto loc_822DF510;
	case 52:
		goto loc_822DF354;
	case 53:
		goto loc_822DF510;
	case 54:
		goto loc_822DF510;
	case 55:
		goto loc_822DF368;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_822DF044:
	// andi. r11,r27,2096
	ctx.r11.u64 = r27.u64 & 2096;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822df054
	if (!ctx.cr0.eq) goto loc_822DF054;
	// ori r27,r27,2048
	r27.u64 = r27.u64 | 2048;
loc_822DF054:
	// andi. r11,r27,2064
	ctx.r11.u64 = r27.u64 & 2064;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r26,7
	ctx.r11.s64 = r26.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r26,r11,8
	r26.s64 = ctx.r11.s64 + 8;
	// beq 0x822df094
	if (ctx.cr0.eq) goto loc_822DF094;
	// li r5,512
	ctx.r5.s64 = 512;
	// lhz r6,6(r11)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x822e17d8
	ctx.lr = 0x822DF080;
	sub_822E17D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822df0a4
	if (ctx.cr0.eq) goto loc_822DF0A4;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// b 0x822df0a4
	goto loc_822DF0A4;
loc_822DF094:
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stb r11,144(r1)
	REX_STORE_U8(ctx.r1.u32 + 144, ctx.r11.u8);
loc_822DF0A4:
	// lwz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r28,r1,144
	r28.s64 = ctx.r1.s64 + 144;
	// b 0x822df510
	goto loc_822DF510;
loc_822DF0B0:
	// addi r11,r26,7
	ctx.r11.s64 = r26.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r26,r11,8
	r26.s64 = ctx.r11.s64 + 8;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822df100
	if (ctx.cr6.eq) goto loc_822DF100;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822df100
	if (ctx.cr6.eq) goto loc_822DF100;
	// rlwinm. r9,r27,0,20,20
	ctx.r9.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
	// beq 0x822df0f4
	if (ctx.cr0.eq) goto loc_822DF0F4;
	// lha r11,0(r11)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 0));
	// li r16,1
	r16.s64 = 1;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addze r7,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r7.s64 = temp.s64;
	// b 0x822df50c
	goto loc_822DF50C;
loc_822DF0F4:
	// lha r7,0(r11)
	ctx.r7.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 0));
	// li r16,0
	r16.s64 = 0;
	// b 0x822df50c
	goto loc_822DF50C;
loc_822DF100:
	// lwz r28,27144(r20)
	r28.u64 = REX_LOAD_U32(r20.u32 + 27144);
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
loc_822DF10C:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822df10c
	if (!ctx.cr6.eq) goto loc_822DF10C;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
loc_822DF120:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x822df50c
	goto loc_822DF50C;
loc_822DF12C:
	// andi. r11,r27,2096
	ctx.r11.u64 = r27.u64 & 2096;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822df13c
	if (!ctx.cr0.eq) goto loc_822DF13C;
	// ori r27,r27,2048
	r27.u64 = r27.u64 | 2048;
loc_822DF13C:
	// cmpwi cr6,r25,-1
	ctx.cr6.compare<int32_t>(r25.s32, -1, ctx.xer);
	// bne cr6,0x822df150
	if (!ctx.cr6.eq) goto loc_822DF150;
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// b 0x822df154
	goto loc_822DF154;
loc_822DF150:
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
loc_822DF154:
	// addi r11,r26,7
	ctx.r11.s64 = r26.s64 + 7;
	// andi. r9,r27,2064
	ctx.r9.u64 = r27.u64 & 2064;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r26,r11,8
	r26.s64 = ctx.r11.s64 + 8;
	// lwz r28,4(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq 0x822df1b0
	if (ctx.cr0.eq) goto loc_822DF1B0;
	// bne cr6,0x822df17c
	if (!ctx.cr6.eq) goto loc_822DF17C;
	// lwz r28,27148(r15)
	r28.u64 = REX_LOAD_U32(r15.u32 + 27148);
loc_822DF17C:
	// li r16,1
	r16.s64 = 1;
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// b 0x822df19c
	goto loc_822DF19C;
loc_822DF188:
	// lhz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x822df1a4
	if (ctx.cr0.eq) goto loc_822DF1A4;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
loc_822DF19C:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822df188
	if (!ctx.cr6.eq) goto loc_822DF188;
loc_822DF1A4:
	// subf r11,r28,r11
	ctx.r11.u64 = ctx.r11.u64 - r28.u64;
	// srawi r7,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 1;
	// b 0x822df50c
	goto loc_822DF50C;
loc_822DF1B0:
	// bne cr6,0x822df1b8
	if (!ctx.cr6.eq) goto loc_822DF1B8;
	// lwz r28,27144(r20)
	r28.u64 = REX_LOAD_U32(r20.u32 + 27144);
loc_822DF1B8:
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// b 0x822df1d4
	goto loc_822DF1D4;
loc_822DF1C0:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x822df1dc
	if (ctx.cr0.eq) goto loc_822DF1DC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_822DF1D4:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822df1c0
	if (!ctx.cr6.eq) goto loc_822DF1C0;
loc_822DF1DC:
	// subf r7,r28,r11
	ctx.r7.u64 = ctx.r11.u64 - r28.u64;
	// b 0x822df50c
	goto loc_822DF50C;
loc_822DF1E4:
	// addi r11,r26,7
	ctx.r11.s64 = r26.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r26,r11,8
	r26.s64 = ctx.r11.s64 + 8;
	// lwz r31,4(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x822d6e70
	ctx.lr = 0x822DF1F8;
	sub_822D6E70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822dec48
	if (ctx.cr0.eq) goto loc_822DEC48;
	// rlwinm. r11,r27,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822df210
	if (ctx.cr0.eq) goto loc_822DF210;
	// sth r24,0(r31)
	REX_STORE_U16(r31.u32 + 0, r24.u16);
	// b 0x822df214
	goto loc_822DF214;
loc_822DF210:
	// stw r24,0(r31)
	REX_STORE_U32(r31.u32 + 0, r24.u32);
loc_822DF214:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// b 0x822df6cc
	goto loc_822DF6CC;
loc_822DF220:
	// addi r11,r8,32
	ctx.r11.s64 = ctx.r8.s64 + 32;
	// li r21,1
	r21.s64 = 1;
	// extsb r29,r11
	r29.s64 = ctx.r11.s8;
loc_822DF22C:
	// ori r27,r27,64
	r27.u64 = r27.u64 | 64;
	// addi r28,r1,144
	r28.s64 = ctx.r1.s64 + 144;
	// li r30,512
	r30.s64 = 512;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// bge cr6,0x822df248
	if (!ctx.cr6.lt) goto loc_822DF248;
	// li r25,6
	r25.s64 = 6;
	// b 0x822df298
	goto loc_822DF298;
loc_822DF248:
	// bne cr6,0x822df260
	if (!ctx.cr6.eq) goto loc_822DF260;
	// extsb r11,r29
	ctx.r11.s64 = r29.s8;
	// cmpwi cr6,r11,103
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 103, ctx.xer);
	// bne cr6,0x822df298
	if (!ctx.cr6.eq) goto loc_822DF298;
	// li r25,1
	r25.s64 = 1;
	// b 0x822df298
	goto loc_822DF298;
loc_822DF260:
	// cmpwi cr6,r25,512
	ctx.cr6.compare<int32_t>(r25.s32, 512, ctx.xer);
	// ble cr6,0x822df26c
	if (!ctx.cr6.gt) goto loc_822DF26C;
	// li r25,512
	r25.s64 = 512;
loc_822DF26C:
	// cmpwi cr6,r25,163
	ctx.cr6.compare<int32_t>(r25.s32, 163, ctx.xer);
	// ble cr6,0x822df298
	if (!ctx.cr6.gt) goto loc_822DF298;
	// addi r31,r25,349
	r31.s64 = r25.s64 + 349;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d9828
	ctx.lr = 0x822DF280;
	sub_822D9828(ctx, base);
	// mr. r14,r3
	r14.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r14.s32, 0, ctx.xer);
	// beq 0x822df294
	if (ctx.cr0.eq) goto loc_822DF294;
	// mr r28,r14
	r28.u64 = r14.u64;
	// mr r30,r31
	r30.u64 = r31.u64;
	// b 0x822df298
	goto loc_822DF298;
loc_822DF294:
	// li r25,163
	r25.s64 = 163;
loc_822DF298:
	// addi r11,r26,7
	ctx.r11.s64 = r26.s64 + 7;
	// lwz r10,24(r22)
	ctx.r10.u64 = REX_LOAD_U32(r22.u32 + 24);
	// extsb r31,r29
	r31.s64 = r29.s8;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// mr r8,r21
	ctx.r8.u64 = r21.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// ld r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r26,r11,8
	r26.s64 = ctx.r11.s64 + 8;
	// std r10,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r10.u64);
	// bctrl 
	ctx.lr = 0x822DF2D8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm. r30,r27,0,24,24
	r30.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x822df2fc
	if (ctx.cr0.eq) goto loc_822DF2FC;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// bne cr6,0x822df2fc
	if (!ctx.cr6.eq) goto loc_822DF2FC;
	// lwz r11,36(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 36);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822DF2FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822DF2FC:
	// cmpwi cr6,r31,103
	ctx.cr6.compare<int32_t>(r31.s32, 103, ctx.xer);
	// bne cr6,0x822df320
	if (!ctx.cr6.eq) goto loc_822DF320;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne cr6,0x822df320
	if (!ctx.cr6.eq) goto loc_822DF320;
	// lwz r11,32(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 32);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822DF320;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822DF320:
	// lbz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 0);
	// cmplwi cr6,r11,45
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 45, ctx.xer);
	// bne cr6,0x822df334
	if (!ctx.cr6.eq) goto loc_822DF334;
	// ori r27,r27,256
	r27.u64 = r27.u64 | 256;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
loc_822DF334:
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
loc_822DF338:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822df338
	if (!ctx.cr6.eq) goto loc_822DF338;
	// subf r11,r28,r11
	ctx.r11.u64 = ctx.r11.u64 - r28.u64;
	// b 0x822df120
	goto loc_822DF120;
loc_822DF350:
	// ori r27,r27,64
	r27.u64 = r27.u64 | 64;
loc_822DF354:
	// li r8,10
	ctx.r8.s64 = 10;
	// b 0x822df3a8
	goto loc_822DF3A8;
loc_822DF35C:
	// li r25,8
	r25.s64 = 8;
loc_822DF360:
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x822df36c
	goto loc_822DF36C;
loc_822DF368:
	// li r11,39
	ctx.r11.s64 = 39;
loc_822DF36C:
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// rlwinm. r10,r27,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r8,16
	ctx.r8.s64 = 16;
	// beq 0x822df3a8
	if (ctx.cr0.eq) goto loc_822DF3A8;
	// addi r11,r11,81
	ctx.r11.s64 = ctx.r11.s64 + 81;
	// li r10,48
	ctx.r10.s64 = 48;
	// li r9,2
	ctx.r9.s64 = 2;
	// stb r11,89(r1)
	REX_STORE_U8(ctx.r1.u32 + 89, ctx.r11.u8);
	// stb r10,88(r1)
	REX_STORE_U8(ctx.r1.u32 + 88, ctx.r10.u8);
	// stw r9,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// b 0x822df3a8
	goto loc_822DF3A8;
loc_822DF398:
	// rlwinm. r11,r27,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r8,8
	ctx.r8.s64 = 8;
	// beq 0x822df3a8
	if (ctx.cr0.eq) goto loc_822DF3A8;
	// ori r27,r27,512
	r27.u64 = r27.u64 | 512;
loc_822DF3A8:
	// rlwinm. r11,r27,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822df3b8
	if (!ctx.cr0.eq) goto loc_822DF3B8;
	// rlwinm. r11,r27,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822df3cc
	if (ctx.cr0.eq) goto loc_822DF3CC;
loc_822DF3B8:
	// addi r11,r26,7
	ctx.r11.s64 = r26.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r26,r11,8
	r26.s64 = ctx.r11.s64 + 8;
	// ld r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// b 0x822df41c
	goto loc_822DF41C;
loc_822DF3CC:
	// rlwinm. r11,r27,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822df3fc
	if (ctx.cr0.eq) goto loc_822DF3FC;
	// rlwinm. r11,r27,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r26,7
	ctx.r11.s64 = r26.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r26,r11,8
	r26.s64 = ctx.r11.s64 + 8;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// beq 0x822df3f4
	if (ctx.cr0.eq) goto loc_822DF3F4;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// b 0x822df41c
	goto loc_822DF41C;
loc_822DF3F4:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// b 0x822df41c
	goto loc_822DF41C;
loc_822DF3FC:
	// rlwinm. r11,r27,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r26,7
	ctx.r11.s64 = r26.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r26,r11,8
	r26.s64 = ctx.r11.s64 + 8;
	// beq 0x822df418
	if (ctx.cr0.eq) goto loc_822DF418;
	// lwa r11,4(r11)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(ctx.r11.u32 + 4));
	// b 0x822df41c
	goto loc_822DF41C;
loc_822DF418:
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_822DF41C:
	// rlwinm. r10,r27,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822df434
	if (ctx.cr0.eq) goto loc_822DF434;
	// cmpdi cr6,r11,0
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 0, ctx.xer);
	// bge cr6,0x822df434
	if (!ctx.cr6.lt) goto loc_822DF434;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// ori r27,r27,256
	r27.u64 = r27.u64 | 256;
loc_822DF434:
	// rlwinm. r10,r27,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822df448
	if (!ctx.cr0.eq) goto loc_822DF448;
	// rlwinm. r10,r27,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822df448
	if (!ctx.cr0.eq) goto loc_822DF448;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
loc_822DF448:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// bge cr6,0x822df458
	if (!ctx.cr6.lt) goto loc_822DF458;
	// li r25,1
	r25.s64 = 1;
	// b 0x822df468
	goto loc_822DF468;
loc_822DF458:
	// rlwinm r27,r27,0,29,27
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// cmpwi cr6,r25,512
	ctx.cr6.compare<int32_t>(r25.s32, 512, ctx.xer);
	// ble cr6,0x822df468
	if (!ctx.cr6.gt) goto loc_822DF468;
	// li r25,512
	r25.s64 = 512;
loc_822DF468:
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// bne cr6,0x822df478
	if (!ctx.cr6.eq) goto loc_822DF478;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
loc_822DF478:
	// addi r9,r1,655
	ctx.r9.s64 = ctx.r1.s64 + 655;
loc_822DF47C:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// addi r25,r25,-1
	r25.s64 = r25.s64 + -1;
	// bgt cr6,0x822df490
	if (ctx.cr6.gt) goto loc_822DF490;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x822df4d4
	if (ctx.cr6.eq) goto loc_822DF4D4;
loc_822DF490:
	// extsw r10,r8
	ctx.r10.s64 = ctx.r8.s32;
	// divdu r7,r11,r10
	ctx.r7.u64 = ctx.r10.u64 ? ctx.r11.u64 / ctx.r10.u64 : 0;
	// tdllei r10,0
	if (ctx.r10.s64 == 0ll || ctx.r10.u64 < 0ull) ppc_trap(ctx, base, 0);
	// mulld r7,r7,r10
	ctx.r7.s64 = static_cast<int64_t>(ctx.r7.u64 * ctx.r10.u64);
	// subf r7,r7,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r7.u64;
	// divdu r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 ? ctx.r11.u64 / ctx.r10.u64 : 0;
	// tdllei r10,0
	if (ctx.r10.s64 == 0ll || ctx.r10.u64 < 0ull) ppc_trap(ctx, base, 0);
	// rotlwi r10,r7,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// cmpwi cr6,r10,57
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 57, ctx.xer);
	// ble cr6,0x822df4c4
	if (!ctx.cr6.gt) goto loc_822DF4C4;
	// lwz r7,108(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
loc_822DF4C4:
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// stb r10,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// b 0x822df47c
	goto loc_822DF47C;
loc_822DF4D4:
	// addi r11,r1,655
	ctx.r11.s64 = ctx.r1.s64 + 655;
	// rlwinm. r10,r27,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subf r7,r9,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r9.u64;
	// addi r28,r9,1
	r28.s64 = ctx.r9.s64 + 1;
	// stw r7,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// beq 0x822df510
	if (ctx.cr0.eq) goto loc_822DF510;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x822df500
	if (ctx.cr6.eq) goto loc_822DF500;
	// lbz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 0);
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// beq cr6,0x822df510
	if (ctx.cr6.eq) goto loc_822DF510;
loc_822DF500:
	// li r11,48
	ctx.r11.s64 = 48;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stbu r11,-1(r28)
	ea = -1 + r28.u32;
	REX_STORE_U8(ea, ctx.r11.u8);
	r28.u32 = ea;
loc_822DF50C:
	// stw r7,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
loc_822DF510:
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822df6cc
	if (!ctx.cr6.eq) goto loc_822DF6CC;
	// rlwinm. r11,r27,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822df560
	if (ctx.cr0.eq) goto loc_822DF560;
	// rlwinm. r11,r27,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822df534
	if (ctx.cr0.eq) goto loc_822DF534;
	// li r11,45
	ctx.r11.s64 = 45;
	// b 0x822df540
	goto loc_822DF540;
loc_822DF534:
	// clrlwi. r11,r27,31
	ctx.r11.u64 = r27.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822df550
	if (ctx.cr0.eq) goto loc_822DF550;
	// li r11,43
	ctx.r11.s64 = 43;
loc_822DF540:
	// li r30,1
	r30.s64 = 1;
	// stb r11,88(r1)
	REX_STORE_U8(ctx.r1.u32 + 88, ctx.r11.u8);
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// b 0x822df564
	goto loc_822DF564;
loc_822DF550:
	// rlwinm. r11,r27,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822df560
	if (ctx.cr0.eq) goto loc_822DF560;
	// li r11,32
	ctx.r11.s64 = 32;
	// b 0x822df540
	goto loc_822DF540;
loc_822DF560:
	// lwz r30,92(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
loc_822DF564:
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm. r10,r27,0,28,29
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xC;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subf r11,r7,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r7.u64;
	// subf r29,r30,r11
	r29.u64 = ctx.r11.u64 - r30.u64;
	// bne 0x822df5ac
	if (!ctx.cr0.eq) goto loc_822DF5AC;
	// mr r31,r29
	r31.u64 = r29.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x822df5ac
	if (!ctx.cr6.gt) goto loc_822DF5AC;
loc_822DF584:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// li r3,32
	ctx.r3.s64 = 32;
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// bl 0x822deaa0
	ctx.lr = 0x822DF598;
	sub_822DEAA0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x822df5ac
	if (ctx.cr6.eq) goto loc_822DF5AC;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bgt cr6,0x822df584
	if (ctx.cr6.gt) goto loc_822DF584;
loc_822DF5AC:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x822deb38
	ctx.lr = 0x822DF5C0;
	sub_822DEB38(ctx, base);
	// rlwinm. r11,r27,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822df604
	if (ctx.cr0.eq) goto loc_822DF604;
	// rlwinm. r11,r27,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822df604
	if (!ctx.cr0.eq) goto loc_822DF604;
	// mr r31,r29
	r31.u64 = r29.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x822df604
	if (!ctx.cr6.gt) goto loc_822DF604;
loc_822DF5DC:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// bl 0x822deaa0
	ctx.lr = 0x822DF5F0;
	sub_822DEAA0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x822df604
	if (ctx.cr6.eq) goto loc_822DF604;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bgt cr6,0x822df5dc
	if (ctx.cr6.gt) goto loc_822DF5DC;
loc_822DF604:
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(r16.s32, 0, ctx.xer);
	// beq cr6,0x822df674
	if (ctx.cr6.eq) goto loc_822DF674;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x822df674
	if (!ctx.cr6.gt) goto loc_822DF674;
	// addi r30,r28,-2
	r30.s64 = r28.s64 + -2;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
loc_822DF620:
	// li r5,6
	ctx.r5.s64 = 6;
	// lhzu r6,2(r30)
	ea = 2 + r30.u32;
	ctx.r6.u64 = REX_LOAD_U16(ea);
	r30.u32 = ea;
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// bl 0x822e17d8
	ctx.lr = 0x822DF638;
	sub_822E17D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822df668
	if (!ctx.cr0.eq) goto loc_822DF668;
	// lwz r4,112(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x822df668
	if (ctx.cr6.eq) goto loc_822DF668;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x822deb38
	ctx.lr = 0x822DF65C;
	sub_822DEB38(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne cr6,0x822df620
	if (!ctx.cr6.eq) goto loc_822DF620;
	// b 0x822df684
	goto loc_822DF684;
loc_822DF668:
	// li r24,-1
	r24.s64 = -1;
	// stw r24,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r24.u32);
	// b 0x822df688
	goto loc_822DF688;
loc_822DF674:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822deb38
	ctx.lr = 0x822DF684;
	sub_822DEB38(ctx, base);
loc_822DF684:
	// lwz r24,80(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_822DF688:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// blt cr6,0x822df6cc
	if (ctx.cr6.lt) goto loc_822DF6CC;
	// rlwinm. r11,r27,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822df6cc
	if (ctx.cr0.eq) goto loc_822DF6CC;
	// mr r31,r29
	r31.u64 = r29.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x822df6cc
	if (!ctx.cr6.gt) goto loc_822DF6CC;
loc_822DF6A4:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// li r3,32
	ctx.r3.s64 = 32;
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// bl 0x822deaa0
	ctx.lr = 0x822DF6B8;
	sub_822DEAA0(ctx, base);
	// lwz r24,80(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r24,-1
	ctx.cr6.compare<int32_t>(r24.s32, -1, ctx.xer);
	// beq cr6,0x822df6cc
	if (ctx.cr6.eq) goto loc_822DF6CC;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bgt cr6,0x822df6a4
	if (ctx.cr6.gt) goto loc_822DF6A4;
loc_822DF6CC:
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(r14.u32, 0, ctx.xer);
	// beq cr6,0x822df6e0
	if (ctx.cr6.eq) goto loc_822DF6E0;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x822d98f0
	ctx.lr = 0x822DF6DC;
	sub_822D98F0(ctx, base);
	// li r14,0
	r14.s64 = 0;
loc_822DF6E0:
	// lbz r29,1(r19)
	r29.u64 = REX_LOAD_U8(r19.u32 + 1);
	// extsb. r8,r29
	ctx.r8.s64 = r29.s8;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x822df6f8
	if (ctx.cr0.eq) goto loc_822DF6F8;
	// lwz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r30,0
	r30.s64 = 0;
	// b 0x822ded74
	goto loc_822DED74;
loc_822DF6F8:
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822df70c
	if (ctx.cr6.eq) goto loc_822DF70C;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x822dec48
	if (!ctx.cr6.eq) goto loc_822DEC48;
loc_822DF70C:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// b 0x822df748
	goto loc_822DF748;
loc_822DF714:
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,512
	ctx.r4.s64 = 512;
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// bl 0x822e16d0
	ctx.lr = 0x822DF728;
	sub_822E16D0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x822df73c
	if (!ctx.cr6.eq) goto loc_822DF73C;
	// li r31,511
	r31.s64 = 511;
	// stb r30,1167(r1)
	REX_STORE_U8(ctx.r1.u32 + 1167, r30.u8);
loc_822DF73C:
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// bl 0x823cd328
	ctx.lr = 0x822DF744;
	sub_823CD328(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_822DF748:
	// addi r1,r1,1328
	ctx.r1.s64 = ctx.r1.s64 + 1328;
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_82317978) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lwz r11,256(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 256);
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// rotlwi r6,r11,1
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// divw r10,r11,r31
	ctx.r10.u64 = uint32_t((r31.s32 && !(ctx.r11.s32 == INT32_MIN && r31.s32 == -1)) ? ctx.r11.s32 / r31.s32 : 0);
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// twllei r31,0
	if (r31.s32 == 0 || r31.u32 < 0u) ppc_trap(ctx, base, 0);
	// andc r6,r31,r6
	ctx.r6.u64 = r31.u64 & ~ctx.r6.u64;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// twlgei r6,-1
	if (ctx.r6.s32 == -1 || ctx.r6.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// ble cr6,0x823179b8
	if (!ctx.cr6.gt) goto loc_823179B8;
loc_823179A8:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// srw r6,r10,r5
	ctx.r6.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r5.u8 & 0x3F));
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// bgt cr6,0x823179a8
	if (ctx.cr6.gt) goto loc_823179A8;
loc_823179B8:
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// divw r11,r11,r8
	ctx.r11.u64 = uint32_t((ctx.r8.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r8.s32 == -1)) ? ctx.r11.s32 / ctx.r8.s32 : 0);
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// twllei r8,0
	if (ctx.r8.s32 == 0 || ctx.r8.u32 < 0u) ppc_trap(ctx, base, 0);
	// andc r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 & ~ctx.r6.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// twlgei r8,-1
	if (ctx.r8.s32 == -1 || ctx.r8.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// ble cr6,0x823179ec
	if (!ctx.cr6.gt) goto loc_823179EC;
loc_823179DC:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// srw r8,r11,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bgt cr6,0x823179dc
	if (ctx.cr6.gt) goto loc_823179DC;
loc_823179EC:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82317a2c
	if (!ctx.cr6.gt) goto loc_82317A2C;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r7,-4
	ctx.r10.s64 = ctx.r7.s64 + -4;
loc_82317A08:
	// lwz r7,348(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 348);
	// lwzx r6,r7,r9
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// lwzx r5,r6,r8
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// lbzx r7,r5,r11
	ctx.r7.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rotlwi r6,r7,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// lwzx r5,r6,r4
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r4.u32);
	// stwu r5,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82317a08
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82317A08;
loc_82317A2C:
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82320518) {
	REX_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// subf r9,r11,r4
	ctx.r9.u64 = ctx.r4.u64 - ctx.r11.u64;
	// lwz r8,20(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r7,24(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// and r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 & ctx.r9.u64;
	// lwz r6,28(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// and r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 & ctx.r9.u64;
	// srw r10,r5,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r8.u8 & 0x3F));
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// beq cr6,0x82320564
	if (ctx.cr6.eq) goto loc_82320564;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r8,4(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwzx r7,r11,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwzx r11,r8,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// mullw r10,r7,r9
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
loc_82320564:
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r7,1
	ctx.r7.s64 = 1;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// slw r6,r7,r8
	ctx.r6.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r8.u8 & 0x3F));
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// twllei r6,0
	if (ctx.r6.s32 == 0 || ctx.r6.u32 < 0u) ppc_trap(ctx, base, 0);
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// subf r4,r10,r5
	ctx.r4.u64 = ctx.r5.u64 - ctx.r10.u64;
	// mullw r3,r4,r9
	ctx.r3.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// rotlwi r9,r3,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// divw r11,r3,r6
	ctx.r11.u64 = uint32_t((ctx.r6.s32 && !(ctx.r3.s32 == INT32_MIN && ctx.r6.s32 == -1)) ? ctx.r3.s32 / ctx.r6.s32 : 0);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// andc r8,r6,r9
	ctx.r8.u64 = ctx.r6.u64 & ~ctx.r9.u64;
	// twlgei r8,-1
	if (ctx.r8.s32 == -1 || ctx.r8.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82322F98) {
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
	// beq cr6,0x82322ff4
	if (ctx.cr6.eq) goto loc_82322FF4;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,36(r4)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 36);
	// bl 0x82322620
	ctx.lr = 0x82322FD0;
	sub_82322620(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82322ff8
	if (ctx.cr6.lt) goto loc_82322FF8;
	// lhz r11,490(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 490);
	// lhz r10,730(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 730);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82322fec
	if (!ctx.cr6.gt) goto loc_82322FEC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82322FEC:
	// sth r11,730(r30)
	REX_STORE_U16(r30.u32 + 730, ctx.r11.u16);
	// b 0x82322ff8
	goto loc_82322FF8;
loc_82322FF4:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_82322FF8:
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

DEFINE_REX_FUNC(sub_823250D8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x823250E0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,0(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r31,r3,516
	r31.s64 = ctx.r3.s64 + 516;
	// lwz r11,816(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 816);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82325170
	if (!ctx.cr6.eq) goto loc_82325170;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r3,224
	ctx.r3.s64 = ctx.r3.s64 + 224;
	// bl 0x82319780
	ctx.lr = 0x82325110;
	sub_82319780(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823251cc
	if (ctx.cr6.lt) goto loc_823251CC;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82325144
	if (!ctx.cr6.eq) goto loc_82325144;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r8,r11,28936
	ctx.r8.s64 = ctx.r11.s64 + 28936;
	// addi r7,r10,30952
	ctx.r7.s64 = ctx.r10.s64 + 30952;
	// addi r6,r9,31440
	ctx.r6.s64 = ctx.r9.s64 + 31440;
	// li r5,52
	ctx.r5.s64 = 52;
	// b 0x82325160
	goto loc_82325160;
loc_82325144:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r8,r11,29888
	ctx.r8.s64 = ctx.r11.s64 + 29888;
	// addi r7,r10,31928
	ctx.r7.s64 = ctx.r10.s64 + 31928;
	// addi r6,r9,32472
	ctx.r6.s64 = ctx.r9.s64 + 32472;
	// li r5,28
	ctx.r5.s64 = 28;
loc_82325160:
	// stw r8,24(r29)
	REX_STORE_U32(r29.u32 + 24, ctx.r8.u32);
	// stw r7,28(r29)
	REX_STORE_U32(r29.u32 + 28, ctx.r7.u32);
	// stw r6,32(r29)
	REX_STORE_U32(r29.u32 + 32, ctx.r6.u32);
	// sth r5,314(r30)
	REX_STORE_U16(r30.u32 + 314, ctx.r5.u16);
loc_82325170:
	// li r9,4
	ctx.r9.s64 = 4;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// addi r10,r31,96
	ctx.r10.s64 = r31.s64 + 96;
	// stw r8,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// stw r11,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r11.u32);
	// stw r11,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r11.u32);
	// stw r11,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r11.u32);
	// stw r11,132(r31)
	REX_STORE_U32(r31.u32 + 132, ctx.r11.u32);
loc_823251A0:
	// stw r11,-12(r10)
	REX_STORE_U32(ctx.r10.u32 + -12, ctx.r11.u32);
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823251a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823251A0;
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r10,r11,19280
	ctx.r10.s64 = ctx.r11.s64 + 19280;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,484(r28)
	REX_STORE_U32(r28.u32 + 484, ctx.r10.u32);
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823251CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823251CC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82327EE0) {
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
	ctx.lr = 0x82327EE8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,48(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 48);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r30,40(r4)
	r30.u64 = REX_LOAD_U32(ctx.r4.u32 + 40);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r29,36(r4)
	r29.u64 = REX_LOAD_U32(ctx.r4.u32 + 36);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// subf. r11,r6,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82327f5c
	if (!ctx.cr0.gt) goto loc_82327F5C;
	// lwz r9,0(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82327fb0
	if (!ctx.cr6.gt) goto loc_82327FB0;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
loc_82327F20:
	// lwz r9,32(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lhz r8,2(r10)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// extsh r9,r8
	ctx.r9.s64 = ctx.r8.s16;
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lhzx r5,r6,r30
	ctx.r5.u64 = REX_LOAD_U16(ctx.r6.u32 + r30.u32);
	// extsh r8,r5
	ctx.r8.s64 = ctx.r5.s16;
	// add r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 + ctx.r9.u64;
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// sthu r3,2(r10)
	ea = 2 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r3.u16);
	ctx.r10.u32 = ea;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82327f20
	if (ctx.cr6.lt) goto loc_82327F20;
	// b 0x82327fb0
	goto loc_82327FB0;
loc_82327F5C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82327fb0
	if (!ctx.cr6.lt) goto loc_82327FB0;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82327fb0
	if (!ctx.cr6.gt) goto loc_82327FB0;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
loc_82327F78:
	// lwz r9,32(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lhz r8,2(r10)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// rlwinm r5,r7,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lhzx r4,r5,r30
	ctx.r4.u64 = REX_LOAD_U16(ctx.r5.u32 + r30.u32);
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// subf r9,r3,r6
	ctx.r9.u64 = ctx.r6.u64 - ctx.r3.u64;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// sthu r8,2(r10)
	ea = 2 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r10.u32 = ea;
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82327f78
	if (ctx.cr6.lt) goto loc_82327F78;
loc_82327FB0:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82327ff4
	if (!ctx.cr6.eq) goto loc_82327FF4;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r5,r29
	ctx.r3.u64 = ctx.r5.u64 + r29.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x82327FD0;
	sub_822D4FA0(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// rlwinm r5,r10,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r5,r30
	ctx.r3.u64 = ctx.r5.u64 + r30.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x82327FE4;
	sub_822D4FA0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// stw r9,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r9.u32);
	// b 0x82327ffc
	goto loc_82327FFC;
loc_82327FF4:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
loc_82327FFC:
	// lwz r11,720(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 720);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82328018
	if (!ctx.cr6.gt) goto loc_82328018;
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r11,r8,r29
	REX_STORE_U16(ctx.r8.u32 + r29.u32, ctx.r11.u16);
	// b 0x82328040
	goto loc_82328040;
loc_82328018:
	// lwz r11,724(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 724);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82328034
	if (!ctx.cr6.lt) goto loc_82328034;
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r11,r8,r29
	REX_STORE_U16(ctx.r8.u32 + r29.u32, ctx.r11.u16);
	// b 0x82328040
	goto loc_82328040;
loc_82328034:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r28,r9,r29
	REX_STORE_U16(ctx.r9.u32 + r29.u32, r28.u16);
loc_82328040:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// ble cr6,0x82328050
	if (!ctx.cr6.gt) goto loc_82328050;
	// lhz r10,30(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 30);
	// b 0x82328074
	goto loc_82328074;
loc_82328050:
	// bge cr6,0x82328070
	if (!ctx.cr6.lt) goto loc_82328070;
	// lhz r11,30(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 30);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// neg r7,r9
	ctx.r7.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// sthx r7,r8,r30
	REX_STORE_U16(ctx.r8.u32 + r30.u32, ctx.r7.u16);
	// b 0x82328080
	goto loc_82328080;
loc_82328070:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82328074:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r10,r9,r30
	REX_STORE_U16(ctx.r9.u32 + r30.u32, ctx.r10.u16);
loc_82328080:
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r11,r30
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + r30.u32);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// srawi r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// sthx r8,r11,r30
	REX_STORE_U16(ctx.r11.u32 + r30.u32, ctx.r8.u16);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r11,r30
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + r30.u32);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// srawi r4,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 1;
	// sthx r4,r11,r30
	REX_STORE_U16(ctx.r11.u32 + r30.u32, ctx.r4.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82332B68) {
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
	// lwz r11,20680(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 20680);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82332bd0
	if (ctx.cr6.eq) goto loc_82332BD0;
	// lwz r11,20684(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 20684);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82332bd0
	if (ctx.cr6.eq) goto loc_82332BD0;
	// lwz r11,21780(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 21780);
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// lwz r10,21776(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 21776);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r5,r7,-30856
	ctx.r5.s64 = ctx.r7.s64 + -30856;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r5
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// b 0x82332bd8
	goto loc_82332BD8;
loc_82332BD0:
	// lwz r11,288(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 288);
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
loc_82332BD8:
	// lwz r11,21864(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 21864);
	// rlwinm r5,r8,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// addi r3,r30,24
	ctx.r3.s64 = r30.s64 + 24;
	// stw r11,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r11.u32);
	// lwz r10,21540(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 21540);
	// stw r10,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r10.u32);
	// lwz r9,21544(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 21544);
	// stw r9,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r9.u32);
	// lwz r7,21868(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 21868);
	// stw r7,16(r30)
	REX_STORE_U32(r30.u32 + 16, ctx.r7.u32);
	// stw r8,20(r30)
	REX_STORE_U32(r30.u32 + 20, ctx.r8.u32);
	// bl 0x822d4fa0
	ctx.lr = 0x82332C0C;
	sub_822D4FA0(ctx, base);
	// lwz r6,21680(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 21680);
	// stw r6,88(r30)
	REX_STORE_U32(r30.u32 + 88, ctx.r6.u32);
	// lwz r5,3484(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3484);
	// stw r5,92(r30)
	REX_STORE_U32(r30.u32 + 92, ctx.r5.u32);
	// lwz r4,3488(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 3488);
	// stw r4,96(r30)
	REX_STORE_U32(r30.u32 + 96, ctx.r4.u32);
	// lwz r3,21572(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 21572);
	// stw r3,100(r30)
	REX_STORE_U32(r30.u32 + 100, ctx.r3.u32);
	// lwz r11,21576(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 21576);
	// stw r11,104(r30)
	REX_STORE_U32(r30.u32 + 104, ctx.r11.u32);
	// lwz r10,22140(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 22140);
	// stw r10,108(r30)
	REX_STORE_U32(r30.u32 + 108, ctx.r10.u32);
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

DEFINE_REX_FUNC(sub_8233A300) {
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
	ctx.lr = 0x8233A308;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// lwz r9,3980(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 3980);
	// lwz r6,24688(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 24688);
	// addi r8,r4,15
	ctx.r8.s64 = ctx.r4.s64 + 15;
	// addi r7,r5,15
	ctx.r7.s64 = ctx.r5.s64 + 15;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm r10,r8,0,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFF0;
	// rlwinm r11,r7,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFF0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r21,r6,8
	r21.s64 = ctx.r6.s64 + 8;
	// beq cr6,0x8233a344
	if (ctx.cr6.eq) goto loc_8233A344;
	// srawi r7,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 2;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// b 0x8233a34c
	goto loc_8233A34C;
loc_8233A344:
	// srawi r7,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 1;
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
loc_8233A34C:
	// lwz r5,15536(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 15536);
	// cmpwi cr6,r5,7
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 7, ctx.xer);
	// bne cr6,0x8233a364
	if (!ctx.cr6.eq) goto loc_8233A364;
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// rlwinm r11,r11,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
loc_8233A364:
	// lwz r4,15364(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 15364);
	// addi r8,r10,64
	ctx.r8.s64 = ctx.r10.s64 + 64;
	// addi r3,r11,64
	ctx.r3.s64 = ctx.r11.s64 + 64;
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
	// addi r7,r7,32
	ctx.r7.s64 = ctx.r7.s64 + 32;
	// srawi r23,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	r23.s64 = ctx.r10.s32 >> 4;
	// li r25,1
	r25.s64 = 1;
	// srawi r22,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	r22.s64 = ctx.r11.s32 >> 4;
	// mullw r24,r3,r8
	r24.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// mullw r27,r9,r7
	r27.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x8233a658
	if (!ctx.cr6.eq) goto loc_8233A658;
	// lwz r11,22288(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22288);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233a3a8
	if (ctx.cr6.eq) goto loc_8233A3A8;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
loc_8233A3A8:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x8233a3b4
	if (ctx.cr6.eq) goto loc_8233A3B4;
	// addi r7,r30,-6
	ctx.r7.s64 = r30.s64 + -6;
loc_8233A3B4:
	// lwz r11,712(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 712);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233a3d0
	if (ctx.cr6.eq) goto loc_8233A3D0;
	// lwz r11,18464(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 18464);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x8233a3d4
	goto loc_8233A3D4;
loc_8233A3D0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8233A3D4:
	// addi r9,r5,-7
	ctx.r9.s64 = ctx.r5.s64 + -7;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r7,r7,6
	ctx.r7.s64 = ctx.r7.s64 + 6;
	// lwz r10,22060(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 22060);
	// cntlzw r5,r9
	ctx.r5.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// lwz r9,22056(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 22056);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// lwz r4,15268(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 15268);
	// rlwinm r11,r5,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// rlwinm r29,r11,3,0,28
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// subf r11,r11,r29
	ctx.r11.u64 = r29.u64 - ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mullw r8,r11,r8
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// bl 0x823959a8
	ctx.lr = 0x8233A414;
	sub_823959A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233a80c
	if (!ctx.cr6.eq) goto loc_8233A80C;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x8233a4b0
	if (ctx.cr6.eq) goto loc_8233A4B0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r30,24688(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 24688);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82353220
	ctx.lr = 0x8233A434;
	sub_82353220(ctx, base);
	// lwz r11,18408(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 18408);
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8233a808
	if (!ctx.cr6.gt) goto loc_8233A808;
	// addi r11,r22,1
	ctx.r11.s64 = r22.s64 + 1;
	// addi r31,r30,17892
	r31.s64 = r30.s64 + 17892;
	// mullw r10,r11,r23
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(r23.s32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// rlwinm r28,r10,4,0,27
	r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r27,r11,15387
	r27.s64 = ctx.r11.s64 + 15387;
loc_8233A45C:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r26,0(r31)
	r26.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x8233ff60
	ctx.lr = 0x8233A470;
	sub_8233FF60(ctx, base);
	// stw r3,624(r26)
	REX_STORE_U32(r26.u32 + 624, ctx.r3.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,624(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 624);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8233a4a4
	if (ctx.cr6.eq) goto loc_8233A4A4;
	// lwz r11,18408(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 18408);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8233a45c
	if (ctx.cr6.lt) goto loc_8233A45C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4ebc
	return;
loc_8233A4A4:
	// li r3,-9
	ctx.r3.s64 = -9;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4ebc
	return;
loc_8233A4B0:
	// addi r4,r31,3756
	ctx.r4.s64 = r31.s64 + 3756;
	// lwz r3,15268(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 15268);
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x823957c8
	ctx.lr = 0x8233A4C0;
	sub_823957C8(ctx, base);
	// lwz r11,3756(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3756);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233a4a4
	if (ctx.cr6.eq) goto loc_8233A4A4;
	// stw r25,620(r11)
	REX_STORE_U32(ctx.r11.u32 + 620, r25.u32);
	// addi r4,r31,3748
	ctx.r4.s64 = r31.s64 + 3748;
	// li r5,-1
	ctx.r5.s64 = -1;
	// lwz r3,15268(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 15268);
	// bl 0x823957c8
	ctx.lr = 0x8233A4E0;
	sub_823957C8(ctx, base);
	// lwz r11,3748(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3748);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233a4a4
	if (ctx.cr6.eq) goto loc_8233A4A4;
	// stw r25,620(r11)
	REX_STORE_U32(ctx.r11.u32 + 620, r25.u32);
loc_8233A4F0:
	// addi r30,r31,3744
	r30.s64 = r31.s64 + 3744;
	// lwz r3,15268(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 15268);
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x823957c8
	ctx.lr = 0x8233A504;
	sub_823957C8(ctx, base);
	// lwz r11,3744(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3744);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233a4a4
	if (ctx.cr6.eq) goto loc_8233A4A4;
	// stw r25,620(r11)
	REX_STORE_U32(ctx.r11.u32 + 620, r25.u32);
	// addi r29,r31,3752
	r29.s64 = r31.s64 + 3752;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,15268(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 15268);
	// bl 0x823957c8
	ctx.lr = 0x8233A528;
	sub_823957C8(ctx, base);
	// lwz r11,3752(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3752);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233a4a4
	if (ctx.cr6.eq) goto loc_8233A4A4;
	// stw r25,620(r11)
	REX_STORE_U32(ctx.r11.u32 + 620, r25.u32);
	// addi r26,r31,3760
	r26.s64 = r31.s64 + 3760;
	// li r5,-1
	ctx.r5.s64 = -1;
	// lwz r3,15268(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 15268);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x823957c8
	ctx.lr = 0x8233A54C;
	sub_823957C8(ctx, base);
	// lwz r11,3760(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3760);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233a4a4
	if (ctx.cr6.eq) goto loc_8233A4A4;
	// stw r25,620(r11)
	REX_STORE_U32(ctx.r11.u32 + 620, r25.u32);
	// addi r28,r31,3764
	r28.s64 = r31.s64 + 3764;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,15268(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 15268);
	// bl 0x823957c8
	ctx.lr = 0x8233A570;
	sub_823957C8(ctx, base);
	// lwz r11,3764(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3764);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233a4a4
	if (ctx.cr6.eq) goto loc_8233A4A4;
	// stw r25,620(r11)
	REX_STORE_U32(ctx.r11.u32 + 620, r25.u32);
	// rlwinm r10,r23,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 4) & 0xFFFFFFF0;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// add r11,r10,r22
	ctx.r11.u64 = ctx.r10.u64 + r22.u64;
	// addi r5,r9,15387
	ctx.r5.s64 = ctx.r9.s64 + 15387;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x8233ff60
	ctx.lr = 0x8233A59C;
	sub_8233FF60(ctx, base);
	// lwz r8,0(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 0);
	// stw r3,624(r8)
	REX_STORE_U32(ctx.r8.u32 + 624, ctx.r3.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r7,624(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 624);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8233a4a4
	if (ctx.cr6.eq) goto loc_8233A4A4;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// lwz r10,224(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 224);
	// li r4,0
	ctx.r4.s64 = 0;
	// rotlwi r3,r9,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,3776(r31)
	REX_STORE_U32(r31.u32 + 3776, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rotlwi r9,r8,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r8,3780(r31)
	REX_STORE_U32(r31.u32 + 3780, ctx.r8.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rotlwi r8,r7,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r11,220(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 220);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stw r7,3784(r31)
	REX_STORE_U32(r31.u32 + 3784, ctx.r7.u32);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r6,3860(r31)
	REX_STORE_U32(r31.u32 + 3860, ctx.r6.u32);
	// stw r10,3864(r31)
	REX_STORE_U32(r31.u32 + 3864, ctx.r10.u32);
	// stw r11,3856(r31)
	REX_STORE_U32(r31.u32 + 3856, ctx.r11.u32);
	// bl 0x822d5870
	ctx.lr = 0x8233A604;
	sub_822D5870(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r3,3780(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 3780);
	// li r4,128
	ctx.r4.s64 = 128;
	// bl 0x822d5870
	ctx.lr = 0x8233A614;
	sub_822D5870(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,128
	ctx.r4.s64 = 128;
	// lwz r3,3784(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 3784);
	// bl 0x822d5870
	ctx.lr = 0x8233A624;
	sub_822D5870(ctx, base);
	// lwz r9,0(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rotlwi r11,r8,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,3788(r31)
	REX_STORE_U32(r31.u32 + 3788, ctx.r8.u32);
	// lwz r7,4(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stw r7,3792(r31)
	REX_STORE_U32(r31.u32 + 3792, ctx.r7.u32);
	// lwz r6,8(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// stw r6,3796(r31)
	REX_STORE_U32(r31.u32 + 3796, ctx.r6.u32);
	// beq cr6,0x8233a754
	if (ctx.cr6.eq) goto loc_8233A754;
	// lwz r10,220(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 220);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8233a758
	goto loc_8233A758;
loc_8233A658:
	// lwz r11,712(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 712);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233a674
	if (ctx.cr6.eq) goto loc_8233A674;
	// lwz r11,18464(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 18464);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x8233a678
	goto loc_8233A678;
loc_8233A674:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8233A678:
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(r30.s32, 4, ctx.xer);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// bgt cr6,0x8233a688
	if (ctx.cr6.gt) goto loc_8233A688;
	// li r7,4
	ctx.r7.s64 = 4;
loc_8233A688:
	// addi r9,r5,-7
	ctx.r9.s64 = ctx.r5.s64 + -7;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// lwz r10,22060(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 22060);
	// cntlzw r5,r9
	ctx.r5.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// lwz r9,22056(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 22056);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// lwz r4,15268(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 15268);
	// rlwinm r11,r5,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// rlwinm r29,r11,3,0,28
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r11,r11,r29
	ctx.r11.u64 = r29.u64 - ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mullw r8,r11,r8
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// bl 0x823959a8
	ctx.lr = 0x8233A6C4;
	sub_823959A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233a80c
	if (!ctx.cr6.eq) goto loc_8233A80C;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x8233a4f0
	if (ctx.cr6.eq) goto loc_8233A4F0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r30,24688(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 24688);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82353220
	ctx.lr = 0x8233A6E4;
	sub_82353220(ctx, base);
	// lwz r11,18408(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 18408);
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8233a808
	if (!ctx.cr6.gt) goto loc_8233A808;
	// addi r11,r22,1
	ctx.r11.s64 = r22.s64 + 1;
	// addi r31,r30,17892
	r31.s64 = r30.s64 + 17892;
	// mullw r10,r11,r23
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(r23.s32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// rlwinm r28,r10,4,0,27
	r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r27,r11,15387
	r27.s64 = ctx.r11.s64 + 15387;
loc_8233A70C:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r26,0(r31)
	r26.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x8233ff60
	ctx.lr = 0x8233A720;
	sub_8233FF60(ctx, base);
	// stw r3,624(r26)
	REX_STORE_U32(r26.u32 + 624, ctx.r3.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,624(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 624);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8233a4a4
	if (ctx.cr6.eq) goto loc_8233A4A4;
	// lwz r11,18408(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 18408);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8233a70c
	if (ctx.cr6.lt) goto loc_8233A70C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4ebc
	return;
loc_8233A754:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8233A758:
	// stw r11,3812(r31)
	REX_STORE_U32(r31.u32 + 3812, ctx.r11.u32);
	// lwz r10,0(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 0);
	// lwz r9,0(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r11,3756(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3756);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r8,3832(r31)
	REX_STORE_U32(r31.u32 + 3832, ctx.r8.u32);
	// lwz r7,4(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r7,3836(r31)
	REX_STORE_U32(r31.u32 + 3836, ctx.r7.u32);
	// lwz r6,8(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// stw r6,3840(r31)
	REX_STORE_U32(r31.u32 + 3840, ctx.r6.u32);
	// lwz r5,0(r9)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// stw r5,3844(r31)
	REX_STORE_U32(r31.u32 + 3844, ctx.r5.u32);
	// lwz r4,4(r9)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stw r4,3848(r31)
	REX_STORE_U32(r31.u32 + 3848, ctx.r4.u32);
	// lwz r3,8(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// stw r3,3852(r31)
	REX_STORE_U32(r31.u32 + 3852, ctx.r3.u32);
	// beq cr6,0x8233a7b8
	if (ctx.cr6.eq) goto loc_8233A7B8;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,3800(r31)
	REX_STORE_U32(r31.u32 + 3800, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,3804(r31)
	REX_STORE_U32(r31.u32 + 3804, ctx.r9.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r8,3808(r31)
	REX_STORE_U32(r31.u32 + 3808, ctx.r8.u32);
loc_8233A7B8:
	// lwz r11,3748(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3748);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233a808
	if (ctx.cr6.eq) goto loc_8233A808;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,3816(r31)
	REX_STORE_U32(r31.u32 + 3816, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,3820(r31)
	REX_STORE_U32(r31.u32 + 3820, ctx.r9.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r8,3824(r31)
	REX_STORE_U32(r31.u32 + 3824, ctx.r8.u32);
	// beq cr6,0x8233a800
	if (ctx.cr6.eq) goto loc_8233A800;
	// lwz r11,220(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 220);
	// li r3,0
	ctx.r3.s64 = 0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,3828(r31)
	REX_STORE_U32(r31.u32 + 3828, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4ebc
	return;
loc_8233A800:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,3828(r31)
	REX_STORE_U32(r31.u32 + 3828, ctx.r11.u32);
loc_8233A808:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8233A80C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4ebc
	return;
}

DEFINE_REX_FUNC(sub_8235B4D8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8235B4E0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f3,f0
	ctx.cr6.compare(ctx.f3.f64, ctx.f0.f64);
	// ble cr6,0x8235ba1c
	if (!ctx.cr6.gt) goto loc_8235BA1C;
	// fcmpu cr6,f4,f0
	ctx.cr6.compare(ctx.f4.f64, ctx.f0.f64);
	// ble cr6,0x8235ba1c
	if (!ctx.cr6.gt) goto loc_8235BA1C;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// std r8,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, ctx.r8.u64);
	// lfd f13,-64(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// lfs f0,2000(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2000);
	ctx.f0.f64 = double(temp.f32);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// fmuls f11,f4,f0
	ctx.f11.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// lfs f0,15944(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15944);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f3,f0
	ctx.f10.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// frsp f0,f12
	ctx.f0.f64 = double(float(ctx.f12.f64));
	// fsubs f13,f2,f11
	ctx.f13.f64 = double(float(ctx.f2.f64 - ctx.f11.f64));
	// fneg f9,f11
	ctx.f9.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// fadds f11,f10,f1
	ctx.f11.f64 = double(float(ctx.f10.f64 + ctx.f1.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// fsubs f10,f2,f9
	ctx.f10.f64 = double(float(ctx.f2.f64 - ctx.f9.f64));
	// bgt cr6,0x8235b544
	if (ctx.cr6.gt) goto loc_8235B544;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_8235B544:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fctiwz f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stfd f0,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, ctx.f0.u64);
	// lwz r5,-60(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -60);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// lfd f0,4000(r10)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 4000);
	// lfs f9,1992(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	ctx.f9.f64 = double(temp.f32);
	// blt cr6,0x8235b5c4
	if (ctx.cr6.lt) goto loc_8235B5C4;
	// fadds f12,f1,f9
	ctx.f12.f64 = double(float(ctx.f1.f64 + ctx.f9.f64));
	// addi r6,r5,-3
	ctx.r6.s64 = ctx.r5.s64 + -3;
	// li r10,0
	ctx.r10.s64 = 0;
	// fadd f8,f12,f0
	ctx.f8.f64 = ctx.f12.f64 + ctx.f0.f64;
	// fctiwz f7,f8
	ctx.f7.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f7,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, ctx.f7.u64);
	// lwz r9,-60(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -60);
loc_8235B588:
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
	// blt cr6,0x8235b588
	if (ctx.cr6.lt) goto loc_8235B588;
loc_8235B5C4:
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x8235b600
	if (!ctx.cr6.lt) goto loc_8235B600;
	// fadds f12,f1,f9
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64 + ctx.f9.f64));
	// subf r9,r11,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r11.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// fadd f8,f12,f0
	ctx.f8.f64 = ctx.f12.f64 + ctx.f0.f64;
	// fctiwz f7,f8
	ctx.f7.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f7,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, ctx.f7.u64);
	// lwz r9,-60(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -60);
loc_8235B5F0:
	// lwz r8,20(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// stwx r9,r10,r8
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8235b5f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8235B5F0;
loc_8235B600:
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, ctx.r9.u64);
	// lfd f12,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// fcfid f8,f12
	ctx.f8.f64 = double(ctx.f12.s64);
	// frsp f12,f8
	ctx.f12.f64 = double(float(ctx.f8.f64));
	// fcmpu cr6,f2,f12
	ctx.cr6.compare(ctx.f2.f64, ctx.f12.f64);
	// bgt cr6,0x8235b624
	if (ctx.cr6.gt) goto loc_8235B624;
	// fmr f12,f2
	ctx.f12.f64 = ctx.f2.f64;
loc_8235B624:
	// fsubs f8,f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f1.f64));
	// li r4,4
	ctx.r4.s64 = 4;
	// fsubs f7,f2,f13
	ctx.f7.f64 = double(float(ctx.f2.f64 - ctx.f13.f64));
	// li r5,-4
	ctx.r5.s64 = -4;
	// fctiwz f12,f12
	ctx.f12.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f12,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, ctx.f12.u64);
	// lwz r31,-60(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -60);
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r31.s32, ctx.xer);
	// fdivs f12,f8,f7
	ctx.f12.f64 = double(float(ctx.f8.f64 / ctx.f7.f64));
	// bge cr6,0x8235b788
	if (!ctx.cr6.lt) goto loc_8235B788;
	// subf r10,r11,r31
	ctx.r10.u64 = r31.u64 - ctx.r11.u64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x8235b73c
	if (ctx.cr6.lt) goto loc_8235B73C;
	// addi r6,r31,-3
	ctx.r6.s64 = r31.s64 + -3;
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_8235B664:
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r30,r10,1
	r30.s64 = ctx.r10.s64 + 1;
	// extsw r8,r8
	ctx.r8.s64 = ctx.r8.s32;
	// extsw r29,r10
	r29.s64 = ctx.r10.s32;
	// std r8,-56(r1)
	REX_STORE_U64(ctx.r1.u32 + -56, ctx.r8.u64);
	// extsw r8,r30
	ctx.r8.s64 = r30.s32;
	// extsw r30,r11
	r30.s64 = ctx.r11.s32;
	// lfd f6,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// std r8,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, ctx.r8.u64);
	// addi r8,r9,12
	ctx.r8.s64 = ctx.r9.s64 + 12;
	// std r30,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, r30.u64);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// std r29,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, r29.u64);
	// lfd f3,-48(r1)
	ctx.f3.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// lfd f8,-64(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// lfd f8,-40(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// frsp f5,f7
	ctx.f5.f64 = double(float(ctx.f7.f64));
	// fcfid f7,f3
	ctx.f7.f64 = double(ctx.f3.s64);
	// fcfid f4,f6
	ctx.f4.f64 = double(ctx.f6.s64);
	// fcfid f6,f8
	ctx.f6.f64 = double(ctx.f8.s64);
	// fsubs f5,f5,f13
	ctx.f5.f64 = double(float(ctx.f5.f64 - ctx.f13.f64));
	// frsp f3,f7
	ctx.f3.f64 = double(float(ctx.f7.f64));
	// frsp f4,f4
	ctx.f4.f64 = double(float(ctx.f4.f64));
	// frsp f8,f6
	ctx.f8.f64 = double(float(ctx.f6.f64));
	// fmadds f7,f5,f12,f1
	ctx.f7.f64 = double(float(std::fma(ctx.f5.f64, ctx.f12.f64, ctx.f1.f64)));
	// fsubs f5,f3,f13
	ctx.f5.f64 = double(float(ctx.f3.f64 - ctx.f13.f64));
	// fsubs f6,f4,f13
	ctx.f6.f64 = double(float(ctx.f4.f64 - ctx.f13.f64));
	// fsubs f4,f8,f13
	ctx.f4.f64 = double(float(ctx.f8.f64 - ctx.f13.f64));
	// fadd f3,f7,f0
	ctx.f3.f64 = ctx.f7.f64 + ctx.f0.f64;
	// fmadds f7,f5,f12,f1
	ctx.f7.f64 = double(float(std::fma(ctx.f5.f64, ctx.f12.f64, ctx.f1.f64)));
	// fmadds f8,f6,f12,f1
	ctx.f8.f64 = double(float(std::fma(ctx.f6.f64, ctx.f12.f64, ctx.f1.f64)));
	// fmadds f6,f4,f12,f1
	ctx.f6.f64 = double(float(std::fma(ctx.f4.f64, ctx.f12.f64, ctx.f1.f64)));
	// fctiwz f5,f3
	ctx.f5.s64 = std::isnan(ctx.f3.f64) ? int64_t(0x80000000U) : (ctx.f3.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f3.f64));
	// stfiwx f5,r7,r9
	REX_STORE_U32(ctx.r7.u32 + ctx.r9.u32, ctx.f5.u32);
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// fadd f4,f8,f0
	ctx.f4.f64 = ctx.f8.f64 + ctx.f0.f64;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// fadd f3,f7,f0
	ctx.f3.f64 = ctx.f7.f64 + ctx.f0.f64;
	// fadd f8,f6,f0
	ctx.f8.f64 = ctx.f6.f64 + ctx.f0.f64;
	// fctiwz f7,f4
	ctx.f7.s64 = std::isnan(ctx.f4.f64) ? int64_t(0x80000000U) : (ctx.f4.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f4.f64));
	// stfiwx f7,r7,r4
	REX_STORE_U32(ctx.r7.u32 + ctx.r4.u32, ctx.f7.u32);
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// fctiwz f6,f3
	ctx.f6.s64 = std::isnan(ctx.f3.f64) ? int64_t(0x80000000U) : (ctx.f3.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f3.f64));
	// stfiwx f6,r7,r5
	REX_STORE_U32(ctx.r7.u32 + ctx.r5.u32, ctx.f6.u32);
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// fctiwz f5,f8
	ctx.f5.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfiwx f5,r7,r8
	REX_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.f5.u32);
	// blt cr6,0x8235b664
	if (ctx.cr6.lt) goto loc_8235B664;
loc_8235B73C:
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r31.s32, ctx.xer);
	// bge cr6,0x8235b788
	if (!ctx.cr6.lt) goto loc_8235B788;
	// subf r9,r11,r31
	ctx.r9.u64 = r31.u64 - ctx.r11.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8235B750:
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// lwz r8,20(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// std r9,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, ctx.r9.u64);
	// lfd f8,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// fsubs f5,f6,f13
	ctx.f5.f64 = double(float(ctx.f6.f64 - ctx.f13.f64));
	// fmadds f4,f5,f12,f1
	ctx.f4.f64 = double(float(std::fma(ctx.f5.f64, ctx.f12.f64, ctx.f1.f64)));
	// fadd f3,f4,f0
	ctx.f3.f64 = ctx.f4.f64 + ctx.f0.f64;
	// fctiwz f8,f3
	ctx.f8.s64 = std::isnan(ctx.f3.f64) ? int64_t(0x80000000U) : (ctx.f3.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f3.f64));
	// stfiwx f8,r8,r10
	REX_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.f8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8235b750
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8235B750;
loc_8235B788:
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, ctx.r9.u64);
	// lfd f13,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f13,f12
	ctx.f13.f64 = double(float(ctx.f12.f64));
	// fcmpu cr6,f10,f13
	ctx.cr6.compare(ctx.f10.f64, ctx.f13.f64);
	// bgt cr6,0x8235b7ac
	if (ctx.cr6.gt) goto loc_8235B7AC;
	// fmr f13,f10
	ctx.f13.f64 = ctx.f10.f64;
loc_8235B7AC:
	// fctiwz f8,f13
	ctx.fpscr.disableFlushMode();
	ctx.f8.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f8,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, ctx.f8.u64);
	// fsubs f12,f1,f11
	ctx.f12.f64 = double(float(ctx.f1.f64 - ctx.f11.f64));
	// fsubs f10,f10,f2
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f2.f64));
	// fdivs f13,f12,f10
	ctx.f13.f64 = double(float(ctx.f12.f64 / ctx.f10.f64));
	// lwz r31,-36(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -36);
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r31.s32, ctx.xer);
	// bge cr6,0x8235b908
	if (!ctx.cr6.lt) goto loc_8235B908;
	// subf r10,r11,r31
	ctx.r10.u64 = r31.u64 - ctx.r11.u64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x8235b8bc
	if (ctx.cr6.lt) goto loc_8235B8BC;
	// addi r6,r31,-3
	ctx.r6.s64 = r31.s64 + -3;
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_8235B7E4:
	// extsw r30,r11
	r30.s64 = ctx.r11.s32;
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// std r30,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, r30.u64);
	// addi r30,r10,1
	r30.s64 = ctx.r10.s64 + 1;
	// extsw r8,r8
	ctx.r8.s64 = ctx.r8.s32;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// std r8,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, ctx.r8.u64);
	// extsw r8,r30
	ctx.r8.s64 = r30.s32;
	// extsw r30,r10
	r30.s64 = ctx.r10.s32;
	// std r8,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, ctx.r8.u64);
	// addi r8,r9,12
	ctx.r8.s64 = ctx.r9.s64 + 12;
	// std r30,-56(r1)
	REX_STORE_U64(ctx.r1.u32 + -56, r30.u64);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// lfd f6,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// fcfid f4,f6
	ctx.f4.f64 = double(ctx.f6.s64);
	// lfd f12,-40(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// fcfid f5,f12
	ctx.f5.f64 = double(ctx.f12.s64);
	// lfd f10,-48(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f8,-56(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// fcfid f12,f10
	ctx.f12.f64 = double(ctx.f10.s64);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f8,f4
	ctx.f8.f64 = double(float(ctx.f4.f64));
	// frsp f10,f5
	ctx.f10.f64 = double(float(ctx.f5.f64));
	// frsp f6,f12
	ctx.f6.f64 = double(float(ctx.f12.f64));
	// frsp f3,f7
	ctx.f3.f64 = double(float(ctx.f7.f64));
	// fsubs f4,f8,f2
	ctx.f4.f64 = double(float(ctx.f8.f64 - ctx.f2.f64));
	// fsubs f5,f10,f2
	ctx.f5.f64 = double(float(ctx.f10.f64 - ctx.f2.f64));
	// fsubs f12,f6,f2
	ctx.f12.f64 = double(float(ctx.f6.f64 - ctx.f2.f64));
	// fsubs f7,f3,f2
	ctx.f7.f64 = double(float(ctx.f3.f64 - ctx.f2.f64));
	// fmadds f8,f4,f13,f11
	ctx.f8.f64 = double(float(std::fma(ctx.f4.f64, ctx.f13.f64, ctx.f11.f64)));
	// fmadds f10,f5,f13,f11
	ctx.f10.f64 = double(float(std::fma(ctx.f5.f64, ctx.f13.f64, ctx.f11.f64)));
	// fmadds f6,f12,f13,f11
	ctx.f6.f64 = double(float(std::fma(ctx.f12.f64, ctx.f13.f64, ctx.f11.f64)));
	// fmadds f3,f7,f13,f11
	ctx.f3.f64 = double(float(std::fma(ctx.f7.f64, ctx.f13.f64, ctx.f11.f64)));
	// fadd f4,f8,f0
	ctx.f4.f64 = ctx.f8.f64 + ctx.f0.f64;
	// fadd f5,f10,f0
	ctx.f5.f64 = ctx.f10.f64 + ctx.f0.f64;
	// fadd f12,f6,f0
	ctx.f12.f64 = ctx.f6.f64 + ctx.f0.f64;
	// fadd f7,f3,f0
	ctx.f7.f64 = ctx.f3.f64 + ctx.f0.f64;
	// fctiwz f8,f4
	ctx.f8.s64 = std::isnan(ctx.f4.f64) ? int64_t(0x80000000U) : (ctx.f4.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f4.f64));
	// stfiwx f8,r7,r9
	REX_STORE_U32(ctx.r7.u32 + ctx.r9.u32, ctx.f8.u32);
	// fctiwz f10,f5
	ctx.f10.s64 = std::isnan(ctx.f5.f64) ? int64_t(0x80000000U) : (ctx.f5.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f5.f64));
	// fctiwz f3,f7
	ctx.f3.s64 = std::isnan(ctx.f7.f64) ? int64_t(0x80000000U) : (ctx.f7.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f7.f64));
	// fctiwz f7,f12
	ctx.f7.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// stfiwx f10,r7,r4
	REX_STORE_U32(ctx.r7.u32 + ctx.r4.u32, ctx.f10.u32);
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stfiwx f3,r7,r5
	REX_STORE_U32(ctx.r7.u32 + ctx.r5.u32, ctx.f3.u32);
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// stfiwx f7,r7,r8
	REX_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.f7.u32);
	// blt cr6,0x8235b7e4
	if (ctx.cr6.lt) goto loc_8235B7E4;
loc_8235B8BC:
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r31.s32, ctx.xer);
	// bge cr6,0x8235b908
	if (!ctx.cr6.lt) goto loc_8235B908;
	// subf r9,r11,r31
	ctx.r9.u64 = r31.u64 - ctx.r11.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8235B8D0:
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// lwz r8,20(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// std r9,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, ctx.r9.u64);
	// lfd f12,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// fsubs f7,f8,f2
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f2.f64));
	// fmadds f6,f7,f13,f11
	ctx.f6.f64 = double(float(std::fma(ctx.f7.f64, ctx.f13.f64, ctx.f11.f64)));
	// fadd f5,f6,f0
	ctx.f5.f64 = ctx.f6.f64 + ctx.f0.f64;
	// fctiwz f4,f5
	ctx.f4.s64 = std::isnan(ctx.f5.f64) ? int64_t(0x80000000U) : (ctx.f5.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f5.f64));
	// stfiwx f4,r8,r10
	REX_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.f4.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8235b8d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8235B8D0;
loc_8235B908:
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8235b948
	if (!ctx.cr6.lt) goto loc_8235B948;
	// fadds f13,f1,f9
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f9.f64));
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// fadd f12,f13,f0
	ctx.f12.f64 = ctx.f13.f64 + ctx.f0.f64;
	// fctiwz f11,f12
	ctx.f11.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, ctx.f11.u64);
	// lwz r8,-36(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -36);
loc_8235B92C:
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r8,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8235b92c
	if (ctx.cr6.lt) goto loc_8235B92C;
loc_8235B948:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8235b984
	if (!ctx.cr6.gt) goto loc_8235B984;
	// fadd f13,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f1.f64 + ctx.f0.f64;
	// li r11,0
	ctx.r11.s64 = 0;
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, ctx.f12.u64);
	// lwz r8,-36(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -36);
loc_8235B968:
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
	// blt cr6,0x8235b968
	if (ctx.cr6.lt) goto loc_8235B968;
loc_8235B984:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8235baac
	if (!ctx.cr6.gt) goto loc_8235BAAC;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f13,2008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2008);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f1,f13
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
loc_8235B9A0:
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r8,28(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lwzx r7,r10,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// std r6,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, ctx.r6.u64);
	// lfd f12,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
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
	// stfiwx f7,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.f7.u32);
	// lwz r4,32(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r5,24(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lwzx r10,r11,r5
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// std r8,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, ctx.r8.u64);
	// lfd f6,-48(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
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
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8235b9a0
	if (ctx.cr6.lt) goto loc_8235B9A0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822d4edc
	return;
loc_8235BA1C:
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8235baac
	if (!ctx.cr6.gt) goto loc_8235BAAC;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f13,1992(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
	// fadds f11,f1,f13
	ctx.f11.f64 = double(float(ctx.f1.f64 + ctx.f13.f64));
	// lfd f0,4000(r9)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r9.u32 + 4000);
	// fadd f12,f1,f0
	ctx.f12.f64 = ctx.f1.f64 + ctx.f0.f64;
	// fsubs f10,f1,f13
	ctx.f10.f64 = double(float(ctx.f1.f64 - ctx.f13.f64));
	// fadd f8,f11,f0
	ctx.f8.f64 = ctx.f11.f64 + ctx.f0.f64;
	// fctiwz f9,f12
	ctx.f9.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f9,-56(r1)
	REX_STORE_U64(ctx.r1.u32 + -56, ctx.f9.u64);
	// fadd f7,f10,f0
	ctx.f7.f64 = ctx.f10.f64 + ctx.f0.f64;
	// fctiwz f6,f8
	ctx.f6.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f6,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, ctx.f6.u64);
	// fctiwz f5,f7
	ctx.f5.s64 = std::isnan(ctx.f7.f64) ? int64_t(0x80000000U) : (ctx.f7.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f5,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, ctx.f5.u64);
	// lwz r8,-36(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -36);
	// lwz r9,-52(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -52);
	// lwz r7,-44(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -44);
loc_8235BA78:
	// lwz r6,20(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r7,r6,r11
	REX_STORE_U32(ctx.r6.u32 + ctx.r11.u32, ctx.r7.u32);
	// lwz r5,24(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// stwx r9,r11,r5
	REX_STORE_U32(ctx.r11.u32 + ctx.r5.u32, ctx.r9.u32);
	// lwz r4,28(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// stwx r8,r11,r4
	REX_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r8.u32);
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
	// blt cr6,0x8235ba78
	if (ctx.cr6.lt) goto loc_8235BA78;
loc_8235BAAC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82375748) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82375750;
	// lwz r11,20688(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20688);
	// li r9,71
	ctx.r9.s64 = 71;
	// lwz r6,21668(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 21668);
	// li r10,2
	ctx.r10.s64 = 2;
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r4,21672(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 21672);
	// lwz r7,372(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 372);
	// addic r5,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r5.s64 = ctx.r6.s64 + -1;
	// add r3,r11,r8
	ctx.r3.u64 = ctx.r11.u64 + ctx.r8.u64;
	// subfe r5,r5,r6
	temp.u8 = (~ctx.r5.u32 + ctx.r6.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r5.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// rlwinm r11,r3,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// addic r9,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r9.s64 = ctx.r4.s64 + -1;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// subfe r3,r9,r4
	temp.u8 = (~ctx.r9.u32 + ctx.r4.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r9.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r29,9
	r29.s64 = 9;
	// stw r5,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,14563
	ctx.r11.s64 = 954400768;
	// lis r30,256
	r30.s64 = 16777216;
	// ori r31,r11,36409
	r31.u64 = ctx.r11.u64 | 36409;
loc_823757A8:
	// mulhw r11,r10,r31
	ctx.r11.s64 = (int64_t(ctx.r10.s32) * int64_t(r31.s32)) >> 32;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// subf. r11,r9,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823757e0
	if (ctx.cr0.eq) goto loc_823757E0;
	// add r9,r11,r5
	ctx.r9.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r7,r11,r5
	ctx.r7.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// slw r9,r6,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r11.u8 & 0x3F));
	// subf r9,r5,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r5.u64;
	// b 0x823757e8
	goto loc_823757E8;
loc_823757E0:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
loc_823757E8:
	// divw. r11,r10,r29
	ctx.r11.u64 = uint32_t((r29.s32 && !(ctx.r10.s32 == INT32_MIN && r29.s32 == -1)) ? ctx.r10.s32 / r29.s32 : 0);
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82375808
	if (ctx.cr0.eq) goto loc_82375808;
	// add r8,r11,r3
	ctx.r8.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// slw r8,r6,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r8.u8 & 0x3F));
	// subf r8,r3,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r3.u64;
	// b 0x82375810
	goto loc_82375810;
loc_82375808:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
loc_82375810:
	// rlwimi r9,r8,8,16,23
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFF00) | (ctx.r9.u64 & 0xFFFFFFFFFFFF00FF);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// slw r11,r6,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r11.u8 & 0x3F));
	// rlwimi r8,r9,4,0,27
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0) | (ctx.r8.u64 & 0xFFFFFFFF0000000F);
	// rlwinm r9,r11,24,0,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF000000;
	// rlwinm r8,r8,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r11,r30,r9
	ctx.r11.u64 = ctx.r9.u64 - r30.u64;
	// clrlwi r9,r7,28
	ctx.r9.u64 = ctx.r7.u32 & 0xF;
	// or r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 | ctx.r11.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// or r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stwu r7,4(r4)
	ea = 4 + ctx.r4.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r4.u32 = ea;
	// bdnz 0x823757a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823757A8;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82378B50) {
	REX_FUNC_PROLOGUE();
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
	// vspltisb v0,15
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0xF)));
	// srawi. r10,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// vspltisb v13,1
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_set1_epi8(char(0x1)));
	// vslb v0,v0,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi8(0x7));
		simde_mm_store_si128((simde__m128i*)ctx.v0.u8, rex::ppc::simde_mm_sllv_epi8(a, shift));
	}
	// blelr 
	if (!ctx.cr0.gt) return;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// subf r10,r5,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r5.u64;
	// li r7,-32
	ctx.r7.s64 = -32;
	// li r8,-16
	ctx.r8.s64 = -16;
	// li r9,16
	ctx.r9.s64 = 16;
loc_82378B7C:
	// lvx128 v12,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v11,r11,r7
	ea = (ctx.r11.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsububm v10,v12,v0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_sub_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v9,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsububm v8,v11,v0
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_sub_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v7,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsububm v6,v9,v0
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_sub_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v5,r10,r5
	ea = (ctx.r10.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsububm v4,v7,v0
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_sub_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v3,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsububm v2,v5,v0
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_sub_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsububm v1,v3,v0
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_sub_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsrab v31,v10,v13
	v31.s8[0] = ctx.v10.s8[0] >> (ctx.v13.u8[0] & 0x7);
	v31.s8[1] = ctx.v10.s8[1] >> (ctx.v13.u8[1] & 0x7);
	v31.s8[2] = ctx.v10.s8[2] >> (ctx.v13.u8[2] & 0x7);
	v31.s8[3] = ctx.v10.s8[3] >> (ctx.v13.u8[3] & 0x7);
	v31.s8[4] = ctx.v10.s8[4] >> (ctx.v13.u8[4] & 0x7);
	v31.s8[5] = ctx.v10.s8[5] >> (ctx.v13.u8[5] & 0x7);
	v31.s8[6] = ctx.v10.s8[6] >> (ctx.v13.u8[6] & 0x7);
	v31.s8[7] = ctx.v10.s8[7] >> (ctx.v13.u8[7] & 0x7);
	v31.s8[8] = ctx.v10.s8[8] >> (ctx.v13.u8[8] & 0x7);
	v31.s8[9] = ctx.v10.s8[9] >> (ctx.v13.u8[9] & 0x7);
	v31.s8[10] = ctx.v10.s8[10] >> (ctx.v13.u8[10] & 0x7);
	v31.s8[11] = ctx.v10.s8[11] >> (ctx.v13.u8[11] & 0x7);
	v31.s8[12] = ctx.v10.s8[12] >> (ctx.v13.u8[12] & 0x7);
	v31.s8[13] = ctx.v10.s8[13] >> (ctx.v13.u8[13] & 0x7);
	v31.s8[14] = ctx.v10.s8[14] >> (ctx.v13.u8[14] & 0x7);
	v31.s8[15] = ctx.v10.s8[15] >> (ctx.v13.u8[15] & 0x7);
	// vsrab v30,v8,v13
	v30.s8[0] = ctx.v8.s8[0] >> (ctx.v13.u8[0] & 0x7);
	v30.s8[1] = ctx.v8.s8[1] >> (ctx.v13.u8[1] & 0x7);
	v30.s8[2] = ctx.v8.s8[2] >> (ctx.v13.u8[2] & 0x7);
	v30.s8[3] = ctx.v8.s8[3] >> (ctx.v13.u8[3] & 0x7);
	v30.s8[4] = ctx.v8.s8[4] >> (ctx.v13.u8[4] & 0x7);
	v30.s8[5] = ctx.v8.s8[5] >> (ctx.v13.u8[5] & 0x7);
	v30.s8[6] = ctx.v8.s8[6] >> (ctx.v13.u8[6] & 0x7);
	v30.s8[7] = ctx.v8.s8[7] >> (ctx.v13.u8[7] & 0x7);
	v30.s8[8] = ctx.v8.s8[8] >> (ctx.v13.u8[8] & 0x7);
	v30.s8[9] = ctx.v8.s8[9] >> (ctx.v13.u8[9] & 0x7);
	v30.s8[10] = ctx.v8.s8[10] >> (ctx.v13.u8[10] & 0x7);
	v30.s8[11] = ctx.v8.s8[11] >> (ctx.v13.u8[11] & 0x7);
	v30.s8[12] = ctx.v8.s8[12] >> (ctx.v13.u8[12] & 0x7);
	v30.s8[13] = ctx.v8.s8[13] >> (ctx.v13.u8[13] & 0x7);
	v30.s8[14] = ctx.v8.s8[14] >> (ctx.v13.u8[14] & 0x7);
	v30.s8[15] = ctx.v8.s8[15] >> (ctx.v13.u8[15] & 0x7);
	// vsrab v29,v6,v13
	v29.s8[0] = ctx.v6.s8[0] >> (ctx.v13.u8[0] & 0x7);
	v29.s8[1] = ctx.v6.s8[1] >> (ctx.v13.u8[1] & 0x7);
	v29.s8[2] = ctx.v6.s8[2] >> (ctx.v13.u8[2] & 0x7);
	v29.s8[3] = ctx.v6.s8[3] >> (ctx.v13.u8[3] & 0x7);
	v29.s8[4] = ctx.v6.s8[4] >> (ctx.v13.u8[4] & 0x7);
	v29.s8[5] = ctx.v6.s8[5] >> (ctx.v13.u8[5] & 0x7);
	v29.s8[6] = ctx.v6.s8[6] >> (ctx.v13.u8[6] & 0x7);
	v29.s8[7] = ctx.v6.s8[7] >> (ctx.v13.u8[7] & 0x7);
	v29.s8[8] = ctx.v6.s8[8] >> (ctx.v13.u8[8] & 0x7);
	v29.s8[9] = ctx.v6.s8[9] >> (ctx.v13.u8[9] & 0x7);
	v29.s8[10] = ctx.v6.s8[10] >> (ctx.v13.u8[10] & 0x7);
	v29.s8[11] = ctx.v6.s8[11] >> (ctx.v13.u8[11] & 0x7);
	v29.s8[12] = ctx.v6.s8[12] >> (ctx.v13.u8[12] & 0x7);
	v29.s8[13] = ctx.v6.s8[13] >> (ctx.v13.u8[13] & 0x7);
	v29.s8[14] = ctx.v6.s8[14] >> (ctx.v13.u8[14] & 0x7);
	v29.s8[15] = ctx.v6.s8[15] >> (ctx.v13.u8[15] & 0x7);
	// vsrab v28,v4,v13
	v28.s8[0] = ctx.v4.s8[0] >> (ctx.v13.u8[0] & 0x7);
	v28.s8[1] = ctx.v4.s8[1] >> (ctx.v13.u8[1] & 0x7);
	v28.s8[2] = ctx.v4.s8[2] >> (ctx.v13.u8[2] & 0x7);
	v28.s8[3] = ctx.v4.s8[3] >> (ctx.v13.u8[3] & 0x7);
	v28.s8[4] = ctx.v4.s8[4] >> (ctx.v13.u8[4] & 0x7);
	v28.s8[5] = ctx.v4.s8[5] >> (ctx.v13.u8[5] & 0x7);
	v28.s8[6] = ctx.v4.s8[6] >> (ctx.v13.u8[6] & 0x7);
	v28.s8[7] = ctx.v4.s8[7] >> (ctx.v13.u8[7] & 0x7);
	v28.s8[8] = ctx.v4.s8[8] >> (ctx.v13.u8[8] & 0x7);
	v28.s8[9] = ctx.v4.s8[9] >> (ctx.v13.u8[9] & 0x7);
	v28.s8[10] = ctx.v4.s8[10] >> (ctx.v13.u8[10] & 0x7);
	v28.s8[11] = ctx.v4.s8[11] >> (ctx.v13.u8[11] & 0x7);
	v28.s8[12] = ctx.v4.s8[12] >> (ctx.v13.u8[12] & 0x7);
	v28.s8[13] = ctx.v4.s8[13] >> (ctx.v13.u8[13] & 0x7);
	v28.s8[14] = ctx.v4.s8[14] >> (ctx.v13.u8[14] & 0x7);
	v28.s8[15] = ctx.v4.s8[15] >> (ctx.v13.u8[15] & 0x7);
	// vsrab v27,v2,v13
	v27.s8[0] = ctx.v2.s8[0] >> (ctx.v13.u8[0] & 0x7);
	v27.s8[1] = ctx.v2.s8[1] >> (ctx.v13.u8[1] & 0x7);
	v27.s8[2] = ctx.v2.s8[2] >> (ctx.v13.u8[2] & 0x7);
	v27.s8[3] = ctx.v2.s8[3] >> (ctx.v13.u8[3] & 0x7);
	v27.s8[4] = ctx.v2.s8[4] >> (ctx.v13.u8[4] & 0x7);
	v27.s8[5] = ctx.v2.s8[5] >> (ctx.v13.u8[5] & 0x7);
	v27.s8[6] = ctx.v2.s8[6] >> (ctx.v13.u8[6] & 0x7);
	v27.s8[7] = ctx.v2.s8[7] >> (ctx.v13.u8[7] & 0x7);
	v27.s8[8] = ctx.v2.s8[8] >> (ctx.v13.u8[8] & 0x7);
	v27.s8[9] = ctx.v2.s8[9] >> (ctx.v13.u8[9] & 0x7);
	v27.s8[10] = ctx.v2.s8[10] >> (ctx.v13.u8[10] & 0x7);
	v27.s8[11] = ctx.v2.s8[11] >> (ctx.v13.u8[11] & 0x7);
	v27.s8[12] = ctx.v2.s8[12] >> (ctx.v13.u8[12] & 0x7);
	v27.s8[13] = ctx.v2.s8[13] >> (ctx.v13.u8[13] & 0x7);
	v27.s8[14] = ctx.v2.s8[14] >> (ctx.v13.u8[14] & 0x7);
	v27.s8[15] = ctx.v2.s8[15] >> (ctx.v13.u8[15] & 0x7);
	// vsrab v26,v1,v13
	v26.s8[0] = ctx.v1.s8[0] >> (ctx.v13.u8[0] & 0x7);
	v26.s8[1] = ctx.v1.s8[1] >> (ctx.v13.u8[1] & 0x7);
	v26.s8[2] = ctx.v1.s8[2] >> (ctx.v13.u8[2] & 0x7);
	v26.s8[3] = ctx.v1.s8[3] >> (ctx.v13.u8[3] & 0x7);
	v26.s8[4] = ctx.v1.s8[4] >> (ctx.v13.u8[4] & 0x7);
	v26.s8[5] = ctx.v1.s8[5] >> (ctx.v13.u8[5] & 0x7);
	v26.s8[6] = ctx.v1.s8[6] >> (ctx.v13.u8[6] & 0x7);
	v26.s8[7] = ctx.v1.s8[7] >> (ctx.v13.u8[7] & 0x7);
	v26.s8[8] = ctx.v1.s8[8] >> (ctx.v13.u8[8] & 0x7);
	v26.s8[9] = ctx.v1.s8[9] >> (ctx.v13.u8[9] & 0x7);
	v26.s8[10] = ctx.v1.s8[10] >> (ctx.v13.u8[10] & 0x7);
	v26.s8[11] = ctx.v1.s8[11] >> (ctx.v13.u8[11] & 0x7);
	v26.s8[12] = ctx.v1.s8[12] >> (ctx.v13.u8[12] & 0x7);
	v26.s8[13] = ctx.v1.s8[13] >> (ctx.v13.u8[13] & 0x7);
	v26.s8[14] = ctx.v1.s8[14] >> (ctx.v13.u8[14] & 0x7);
	v26.s8[15] = ctx.v1.s8[15] >> (ctx.v13.u8[15] & 0x7);
	// vaddubm v25,v30,v0
	simde_mm_store_si128((simde__m128i*)v25.u8, simde_mm_add_epi8(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddubm v24,v29,v0
	simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_add_epi8(simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddubm v23,v31,v0
	simde_mm_store_si128((simde__m128i*)v23.u8, simde_mm_add_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddubm v22,v28,v0
	simde_mm_store_si128((simde__m128i*)v22.u8, simde_mm_add_epi8(simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddubm v21,v27,v0
	simde_mm_store_si128((simde__m128i*)v21.u8, simde_mm_add_epi8(simde_mm_load_si128((simde__m128i*)v27.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx128 v25,r11,r7
	ea = (ctx.r11.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddubm v20,v26,v0
	simde_mm_store_si128((simde__m128i*)v20.u8, simde_mm_add_epi8(simde_mm_load_si128((simde__m128i*)v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx128 v24,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v24.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v23,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v23.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v22,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v22.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// stvx128 v21,r10,r5
	ea = (ctx.r10.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v21.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v20,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v20.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r5,16
	ctx.r5.s64 = ctx.r5.s64 + 16;
	// bdnz 0x82378b7c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82378B7C;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82386E00) {
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
	ctx.lr = 0x82386E08;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r23,128(r3)
	r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 128);
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// lwz r11,228(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 228);
	// mr r14,r3
	r14.u64 = ctx.r3.u64;
	// lwz r10,132(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 132);
	// rlwinm r9,r23,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r24,112(r3)
	r24.u64 = REX_LOAD_U32(ctx.r3.u32 + 112);
	// srawi r21,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	r21.s64 = ctx.r11.s32 >> 1;
	// addi r20,r10,-1
	r20.s64 = ctx.r10.s64 + -1;
	// lwz r31,204(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 204);
	// lwz r30,208(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 208);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lwz r5,248(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 248);
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// addi r29,r4,3
	r29.s64 = ctx.r4.s64 + 3;
	// stw r23,332(r1)
	REX_STORE_U32(ctx.r1.u32 + 332, r23.u32);
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r21,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r21.u32);
	// stw r20,348(r1)
	REX_STORE_U32(ctx.r1.u32 + 348, r20.u32);
	// stw r24,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r24.u32);
	// ble 0x82386e80
	if (!ctx.cr0.gt) goto loc_82386E80;
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
loc_82386E64:
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82386c80
	ctx.lr = 0x82386E74;
	sub_82386C80(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// bne 0x82386e64
	if (!ctx.cr0.eq) goto loc_82386E64;
loc_82386E80:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r17,r27
	r17.u64 = r27.u64;
	// subfic r15,r11,-1
	ctx.xer.ca = ctx.r11.u32 <= 4294967295;
	r15.u64 = static_cast<uint64_t>(-1) - ctx.r11.u64;
	// li r18,0
	r18.s64 = 0;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// ble cr6,0x82387054
	if (!ctx.cr6.gt) goto loc_82387054;
	// rlwinm r10,r31,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r24,r26
	ctx.r11.u64 = r24.u64 + r26.u64;
	// add r10,r10,r21
	ctx.r10.u64 = ctx.r10.u64 + r21.u64;
	// subf r9,r26,r25
	ctx.r9.u64 = r25.u64 - r26.u64;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// add r16,r24,r25
	r16.u64 = r24.u64 + r25.u64;
	// addi r19,r11,4
	r19.s64 = ctx.r11.s64 + 4;
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
loc_82386EB8:
	// add r29,r17,r21
	r29.u64 = r17.u64 + r21.u64;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// add r28,r11,r17
	r28.u64 = ctx.r11.u64 + r17.u64;
	// li r22,8
	r22.s64 = 8;
	// li r25,-4
	r25.s64 = -4;
	// bl 0x82386b00
	ctx.lr = 0x82386EDC;
	sub_82386B00(ctx, base);
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r27,r29,4
	r27.s64 = r29.s64 + 4;
	// bl 0x82386b00
	ctx.lr = 0x82386EEC;
	sub_82386B00(ctx, base);
	// addi r26,r28,4
	r26.s64 = r28.s64 + 4;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(r18.s32, 0, ctx.xer);
	// bne cr6,0x82386f00
	if (!ctx.cr6.eq) goto loc_82386F00;
	// li r25,-8
	r25.s64 = -8;
	// b 0x82386f10
	goto loc_82386F10;
loc_82386F00:
	// addi r11,r20,-1
	ctx.r11.s64 = r20.s64 + -1;
	// cmpw cr6,r18,r11
	ctx.cr6.compare<int32_t>(r18.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82386f14
	if (!ctx.cr6.eq) goto loc_82386F14;
	// li r25,-4
	r25.s64 = -4;
loc_82386F10:
	// li r22,12
	r22.s64 = 12;
loc_82386F14:
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r19,-4
	ctx.r3.s64 = r19.s64 + -4;
	// bl 0x82386b00
	ctx.lr = 0x82386F24;
	sub_82386B00(ctx, base);
	// mullw r11,r25,r30
	ctx.r11.s64 = int64_t(r25.s32) * int64_t(r30.s32);
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// mr r29,r19
	r29.u64 = r19.u64;
	// addi r23,r11,-1
	r23.s64 = ctx.r11.s64 + -1;
	// bl 0x82386b00
	ctx.lr = 0x82386F3C;
	sub_82386B00(ctx, base);
	// lwz r11,332(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r25,r11,-1
	r25.s64 = ctx.r11.s64 + -1;
	// add r28,r19,r10
	r28.u64 = r19.u64 + ctx.r10.u64;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// ble cr6,0x82386ff0
	if (!ctx.cr6.gt) goto loc_82386FF0;
loc_82386F54:
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// add r24,r27,r15
	r24.u64 = r27.u64 + r15.u64;
	// add r21,r23,r29
	r21.u64 = r23.u64 + r29.u64;
	// add r20,r28,r23
	r20.u64 = r28.u64 + r23.u64;
	// bl 0x82386b00
	ctx.lr = 0x82386F70;
	sub_82386B00(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r27,r27,16
	r27.s64 = r27.s64 + 16;
	// bl 0x82386b00
	ctx.lr = 0x82386F80;
	sub_82386B00(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r26,r26,16
	r26.s64 = r26.s64 + 16;
	// bl 0x82386c80
	ctx.lr = 0x82386F90;
	sub_82386C80(ctx, base);
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82386b00
	ctx.lr = 0x82386FA0;
	sub_82386B00(ctx, base);
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// bl 0x82386b00
	ctx.lr = 0x82386FB0;
	sub_82386B00(ctx, base);
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// bl 0x82386c80
	ctx.lr = 0x82386FC0;
	sub_82386C80(ctx, base);
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x82386c80
	ctx.lr = 0x82386FCC;
	sub_82386C80(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r24,8
	ctx.r3.s64 = r24.s64 + 8;
	// bl 0x82386c80
	ctx.lr = 0x82386FDC;
	sub_82386C80(ctx, base);
	// addic. r25,r25,-1
	ctx.xer.ca = r25.u32 > 0;
	r25.s64 = r25.s64 + -1;
	ctx.cr0.compare<int32_t>(r25.s32, 0, ctx.xer);
	// bne 0x82386f54
	if (!ctx.cr0.eq) goto loc_82386F54;
	// lwz r20,348(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// lwz r21,88(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r24,92(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
loc_82386FF0:
	// li r6,12
	ctx.r6.s64 = 12;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82386b00
	ctx.lr = 0x82387000;
	sub_82386B00(ctx, base);
	// li r6,12
	ctx.r6.s64 = 12;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82386b00
	ctx.lr = 0x8238700C;
	sub_82386B00(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// add r3,r27,r15
	ctx.r3.u64 = r27.u64 + r15.u64;
	// bl 0x82386c80
	ctx.lr = 0x82387018;
	sub_82386C80(ctx, base);
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82386b00
	ctx.lr = 0x82387028;
	sub_82386B00(ctx, base);
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82386b00
	ctx.lr = 0x82387034;
	sub_82386B00(ctx, base);
	// lwz r11,100(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 100);
	// addi r18,r18,1
	r18.s64 = r18.s64 + 1;
	// add r19,r19,r24
	r19.u64 = r19.u64 + r24.u64;
	// add r16,r16,r24
	r16.u64 = r16.u64 + r24.u64;
	// cmpw cr6,r18,r20
	ctx.cr6.compare<int32_t>(r18.s32, r20.s32, ctx.xer);
	// add r17,r17,r11
	r17.u64 = r17.u64 + ctx.r11.u64;
	// blt cr6,0x82386eb8
	if (ctx.cr6.lt) goto loc_82386EB8;
	// lwz r23,332(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
loc_82387054:
	// add r30,r17,r21
	r30.u64 = r17.u64 + r21.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82386b00
	ctx.lr = 0x82387068;
	sub_82386B00(ctx, base);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// ble cr6,0x823870cc
	if (!ctx.cr6.gt) goto loc_823870CC;
	// addi r27,r23,-1
	r27.s64 = r23.s64 + -1;
loc_8238707C:
	// add r28,r30,r15
	r28.u64 = r30.u64 + r15.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(r29.s32, r27.s32, ctx.xer);
	// bne cr6,0x82387090
	if (!ctx.cr6.eq) goto loc_82387090;
	// li r6,12
	ctx.r6.s64 = 12;
loc_82387090:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82386b00
	ctx.lr = 0x8238709C;
	sub_82386B00(ctx, base);
	// li r6,12
	ctx.r6.s64 = 12;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// bl 0x82386c80
	ctx.lr = 0x823870AC;
	sub_82386C80(ctx, base);
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(r29.s32, r27.s32, ctx.xer);
	// bge cr6,0x823870c0
	if (!ctx.cr6.lt) goto loc_823870C0;
	// li r6,12
	ctx.r6.s64 = 12;
	// addi r3,r28,8
	ctx.r3.s64 = r28.s64 + 8;
	// bl 0x82386c80
	ctx.lr = 0x823870C0;
	sub_82386C80(ctx, base);
loc_823870C0:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpw cr6,r29,r23
	ctx.cr6.compare<int32_t>(r29.s32, r23.s32, ctx.xer);
	// blt cr6,0x8238707c
	if (ctx.cr6.lt) goto loc_8238707C;
loc_823870CC:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_8238E610) {
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
	ctx.lr = 0x8238E618;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,300(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// mr r23,r10
	r23.u64 = ctx.r10.u64;
	// lwz r10,308(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// rlwinm r24,r11,0,0,30
	r24.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// srawi r22,r24,1
	ctx.xer.ca = (r24.s32 < 0) & ((r24.u32 & 0x1) != 0);
	r22.s64 = r24.s32 >> 1;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r31,r9
	r31.u64 = ctx.r9.u64;
	// srawi. r25,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	r25.s64 = ctx.r10.s32 >> 1;
	ctx.cr0.compare<int32_t>(r25.s32, 0, ctx.xer);
	// ble 0x8238e6cc
	if (!ctx.cr0.gt) goto loc_8238E6CC;
	// lwz r20,276(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// subf r21,r9,r8
	r21.u64 = ctx.r8.u64 - ctx.r9.u64;
loc_8238E658:
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x8238E668;
	sub_822D4FA0(ctx, base);
	// lwz r11,22160(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 22160);
	// add r29,r29,r23
	r29.u64 = r29.u64 + r23.u64;
	// add r28,r11,r28
	r28.u64 = ctx.r11.u64 + r28.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x8238E684;
	sub_822D4FA0(ctx, base);
	// lwz r11,22160(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 22160);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// add r4,r21,r31
	ctx.r4.u64 = r21.u64 + r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// add r29,r29,r23
	r29.u64 = r29.u64 + r23.u64;
	// add r28,r11,r28
	r28.u64 = ctx.r11.u64 + r28.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x8238E6A0;
	sub_822D4FA0(ctx, base);
	// lwz r11,22164(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 22164);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// add r27,r11,r27
	r27.u64 = ctx.r11.u64 + r27.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x8238E6B8;
	sub_822D4FA0(ctx, base);
	// lwz r11,22168(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 22168);
	// addic. r25,r25,-1
	ctx.xer.ca = r25.u32 > 0;
	r25.s64 = r25.s64 + -1;
	ctx.cr0.compare<int32_t>(r25.s32, 0, ctx.xer);
	// add r31,r31,r20
	r31.u64 = r31.u64 + r20.u64;
	// add r26,r11,r26
	r26.u64 = ctx.r11.u64 + r26.u64;
	// bne 0x8238e658
	if (!ctx.cr0.eq) goto loc_8238E658;
loc_8238E6CC:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4eb8
	return;
}

DEFINE_REX_FUNC(sub_823904E8) {
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
	ctx.lr = 0x823904F0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4036(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4036);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82390550
	if (ctx.cr6.eq) goto loc_82390550;
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r9,r10,20,12,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0xFFFFF;
	// and r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 & ctx.r11.u64;
	// clrlwi r7,r8,28
	ctx.r7.u64 = ctx.r8.u32 & 0xF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82390534
	if (ctx.cr6.eq) goto loc_82390534;
	// lwz r11,4044(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4044);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r11,255
	ctx.r10.s64 = ctx.r11.s64 + 255;
	// stb r10,4(r4)
	REX_STORE_U8(ctx.r4.u32 + 4, ctx.r10.u8);
	// b 0x82390650
	goto loc_82390650;
loc_82390534:
	// lwz r10,248(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 248);
	// lwz r11,252(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 252);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r9,r11,255
	ctx.r9.s64 = ctx.r11.s64 + 255;
	// stb r9,4(r27)
	REX_STORE_U8(r27.u32 + 4, ctx.r9.u8);
	// b 0x82390650
	goto loc_82390650;
loc_82390550:
	// lwz r11,476(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 476);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82390640
	if (ctx.cr6.eq) goto loc_82390640;
	// lwz r31,84(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 84);
	// li r30,1
	r30.s64 = 1;
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x823905d0
	if (!ctx.cr6.lt) goto loc_823905D0;
loc_82390578:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823905d0
	if (ctx.cr6.eq) goto loc_823905D0;
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
	// bge 0x823905c0
	if (!ctx.cr0.lt) goto loc_823905C0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823905C0;
	sub_823380C8(ctx, base);
loc_823905C0:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82390578
	if (ctx.cr6.gt) goto loc_82390578;
loc_823905D0:
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
	// bge 0x82390608
	if (!ctx.cr0.lt) goto loc_82390608;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82390608;
	sub_823380C8(ctx, base);
loc_82390608:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82390624
	if (ctx.cr6.eq) goto loc_82390624;
	// lwz r11,4044(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4044);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stb r11,4(r27)
	REX_STORE_U8(r27.u32 + 4, ctx.r11.u8);
	// b 0x82390650
	goto loc_82390650;
loc_82390624:
	// lwz r11,248(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 248);
	// lwz r10,252(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 252);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stb r11,4(r27)
	REX_STORE_U8(r27.u32 + 4, ctx.r11.u8);
	// b 0x82390650
	goto loc_82390650;
loc_82390640:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8238ecc0
	ctx.lr = 0x8239064C;
	sub_8238ECC0(ctx, base);
	// stb r3,4(r27)
	REX_STORE_U8(r27.u32 + 4, ctx.r3.u8);
loc_82390650:
	// lbz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 4);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82390668
	if (ctx.cr6.lt) goto loc_82390668;
	// cmplwi cr6,r11,62
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 62, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// ble cr6,0x8239066c
	if (!ctx.cr6.gt) goto loc_8239066C;
loc_82390668:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8239066C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82394530) {
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
	ctx.lr = 0x82394538;
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r30,r7,1,0,30
	r30.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r9,r4
	ctx.r8.u64 = ctx.r9.u64 + ctx.r4.u64;
	// mulli r10,r10,34
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(34));
	// lbzx r9,r11,r4
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// lbz r29,0(r8)
	r29.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// rotlwi r31,r9,1
	r31.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// add r30,r7,r30
	r30.u64 = ctx.r7.u64 + r30.u64;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + r31.u64;
	// rlwinm r31,r30,1,0,30
	r31.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r9,r9,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r9.u64;
	// addi r24,r6,-4
	r24.s64 = ctx.r6.s64 + -4;
	// add r30,r9,r29
	r30.u64 = ctx.r9.u64 + r29.u64;
	// add r9,r31,r4
	ctx.r9.u64 = r31.u64 + ctx.r4.u64;
	// addi r31,r30,16
	r31.s64 = r30.s64 + 16;
	// add r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 + ctx.r4.u64;
	// srawi r31,r31,5
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1F) != 0);
	r31.s64 = r31.s32 >> 5;
	// cmpwi cr6,r24,4
	ctx.cr6.compare<int32_t>(r24.s32, 4, ctx.xer);
	// stw r31,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, r31.u32);
	// lbz r31,0(r4)
	r31.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// lbzx r29,r11,r4
	r29.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// rotlwi r28,r29,3
	r28.u64 = __builtin_rotateleft32(r29.u32, 3);
	// mulli r30,r31,25
	r30.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(25));
	// subf r31,r29,r28
	r31.u64 = r28.u64 - r29.u64;
	// add r31,r30,r31
	r31.u64 = r30.u64 + r31.u64;
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// srawi r31,r31,5
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1F) != 0);
	r31.s64 = r31.s32 >> 5;
	// stw r31,4(r5)
	REX_STORE_U32(ctx.r5.u32 + 4, r31.u32);
	// lbz r31,0(r8)
	r31.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// lbzx r28,r11,r4
	r28.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// lbz r29,0(r9)
	r29.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// lbz r30,0(r4)
	r30.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// rotlwi r30,r30,1
	r30.u64 = __builtin_rotateleft32(r30.u32, 1);
	// subf r31,r31,r30
	r31.u64 = r30.u64 - r31.u64;
	// rotlwi r27,r28,3
	r27.u64 = __builtin_rotateleft32(r28.u32, 3);
	// rlwinm r30,r31,1,0,30
	r30.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r28,r28,r27
	r28.u64 = r27.u64 - r28.u64;
	// add r30,r31,r30
	r30.u64 = r31.u64 + r30.u64;
	// rlwinm r31,r28,2,0,29
	r31.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r30,r31
	r31.u64 = r30.u64 + r31.u64;
	// add r31,r31,r29
	r31.u64 = r31.u64 + r29.u64;
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// srawi r31,r31,5
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1F) != 0);
	r31.s64 = r31.s32 >> 5;
	// stw r31,8(r5)
	REX_STORE_U32(ctx.r5.u32 + 8, r31.u32);
	// lbz r31,0(r8)
	r31.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// lbz r28,0(r4)
	r28.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// lbzx r30,r11,r4
	r30.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// rotlwi r27,r30,3
	r27.u64 = __builtin_rotateleft32(r30.u32, 3);
	// rotlwi r29,r31,1
	r29.u64 = __builtin_rotateleft32(r31.u32, 1);
	// subf r30,r30,r27
	r30.u64 = r27.u64 - r30.u64;
	// add r31,r31,r29
	r31.u64 = r31.u64 + r29.u64;
	// rlwinm r30,r30,1,0,30
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r31,r31,r30
	r31.u64 = r31.u64 + r30.u64;
	// subf r31,r28,r31
	r31.u64 = r31.u64 - r28.u64;
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// rlwinm r31,r31,1,0,30
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r31,r31,5
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1F) != 0);
	r31.s64 = r31.s32 >> 5;
	// stw r31,12(r5)
	REX_STORE_U32(ctx.r5.u32 + 12, r31.u32);
	// ble cr6,0x823946e0
	if (!ctx.cr6.gt) goto loc_823946E0;
	// addi r31,r24,-5
	r31.s64 = r24.s64 + -5;
	// rlwinm r30,r7,3,0,28
	r30.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r31,r31,31,1,31
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 31) & 0x7FFFFFFF;
	// subf r29,r11,r30
	r29.u64 = r30.u64 - ctx.r11.u64;
	// addi r30,r31,1
	r30.s64 = r31.s64 + 1;
	// addi r31,r5,12
	r31.s64 = ctx.r5.s64 + 12;
	// subf r28,r11,r4
	r28.u64 = ctx.r4.u64 - ctx.r11.u64;
	// add r29,r29,r4
	r29.u64 = r29.u64 + ctx.r4.u64;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_82394650:
	// lbz r30,0(r10)
	r30.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r26,0(r8)
	r26.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// rotlwi r30,r30,1
	r30.u64 = __builtin_rotateleft32(r30.u32, 1);
	// lbz r25,0(r9)
	r25.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// rotlwi r23,r26,3
	r23.u64 = __builtin_rotateleft32(r26.u32, 3);
	// lbzux r27,r29,r11
	ea = r29.u32 + ctx.r11.u32;
	r27.u64 = REX_LOAD_U8(ea);
	r29.u32 = ea;
	// subf r30,r25,r30
	r30.u64 = r30.u64 - r25.u64;
	// subf r26,r26,r23
	r26.u64 = r23.u64 - r26.u64;
	// rlwinm r25,r30,1,0,30
	r25.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r26,r26,2,0,29
	r26.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r30,r25
	r30.u64 = r30.u64 + r25.u64;
	// add r30,r30,r26
	r30.u64 = r30.u64 + r26.u64;
	// add r30,r30,r27
	r30.u64 = r30.u64 + r27.u64;
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// srawi r30,r30,5
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x1F) != 0);
	r30.s64 = r30.s32 >> 5;
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// lbz r26,0(r8)
	r26.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lbz r30,0(r10)
	r30.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbzux r27,r28,r11
	ea = r28.u32 + ctx.r11.u32;
	r27.u64 = REX_LOAD_U8(ea);
	r28.u32 = ea;
	// lbz r25,0(r9)
	r25.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// rotlwi r25,r25,1
	r25.u64 = __builtin_rotateleft32(r25.u32, 1);
	// subf r30,r30,r25
	r30.u64 = r25.u64 - r30.u64;
	// rotlwi r23,r26,3
	r23.u64 = __builtin_rotateleft32(r26.u32, 3);
	// rlwinm r25,r30,1,0,30
	r25.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r26,r26,r23
	r26.u64 = r23.u64 - r26.u64;
	// add r30,r30,r25
	r30.u64 = r30.u64 + r25.u64;
	// rlwinm r26,r26,2,0,29
	r26.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r30,r30,r26
	r30.u64 = r30.u64 + r26.u64;
	// add r30,r30,r27
	r30.u64 = r30.u64 + r27.u64;
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// srawi r30,r30,5
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x1F) != 0);
	r30.s64 = r30.s32 >> 5;
	// stwu r30,8(r31)
	ea = 8 + r31.u32;
	REX_STORE_U32(ea, r30.u32);
	r31.u32 = ea;
	// bdnz 0x82394650
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82394650;
loc_823946E0:
	// addi r11,r6,-6
	ctx.r11.s64 = ctx.r6.s64 + -6;
	// mullw r10,r24,r7
	ctx.r10.s64 = int64_t(r24.s32) * int64_t(ctx.r7.s32);
	// lbzx r29,r10,r4
	r29.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// mullw r9,r11,r7
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// lbzx r31,r9,r4
	r31.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r4.u32);
	// rotlwi r28,r29,3
	r28.u64 = __builtin_rotateleft32(r29.u32, 3);
	// addi r8,r6,-2
	ctx.r8.s64 = ctx.r6.s64 + -2;
	// rotlwi r30,r31,1
	r30.u64 = __builtin_rotateleft32(r31.u32, 1);
	// mullw r11,r8,r7
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// lbzx r27,r11,r4
	r27.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// subf r29,r29,r28
	r29.u64 = r28.u64 - r29.u64;
	// add r31,r31,r30
	r31.u64 = r31.u64 + r30.u64;
	// rlwinm r30,r29,1,0,30
	r30.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r29,r6,-8
	r29.s64 = ctx.r6.s64 + -8;
	// add r31,r31,r30
	r31.u64 = r31.u64 + r30.u64;
	// rlwinm r30,r24,2,0,29
	r30.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r31,r27,r31
	r31.u64 = r31.u64 - r27.u64;
	// mullw r29,r29,r7
	r29.s64 = int64_t(r29.s32) * int64_t(ctx.r7.s32);
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// rlwinm r28,r8,2,0,29
	r28.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r31,r31,1,0,30
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r31,r31,5
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1F) != 0);
	r31.s64 = r31.s32 >> 5;
	// add r27,r8,r5
	r27.u64 = ctx.r8.u64 + ctx.r5.u64;
	// stwx r31,r30,r5
	REX_STORE_U32(r30.u32 + ctx.r5.u32, r31.u32);
	// addi r8,r6,-3
	ctx.r8.s64 = ctx.r6.s64 + -3;
	// lbzx r30,r29,r4
	r30.u64 = REX_LOAD_U8(r29.u32 + ctx.r4.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lbzx r29,r9,r4
	r29.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r4.u32);
	// rlwinm r26,r8,2,0,29
	r26.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzx r25,r10,r4
	r25.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// lbzx r31,r11,r4
	r31.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// rotlwi r31,r31,1
	r31.u64 = __builtin_rotateleft32(r31.u32, 1);
	// subf r8,r29,r31
	ctx.r8.u64 = r31.u64 - r29.u64;
	// rotlwi r29,r25,3
	r29.u64 = __builtin_rotateleft32(r25.u32, 3);
	// rlwinm r31,r8,1,0,30
	r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r29,r25,r29
	r29.u64 = r29.u64 - r25.u64;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + r31.u64;
	// rlwinm r31,r29,2,0,29
	r31.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 + r30.u64;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + r31.u64;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// srawi r8,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 5;
	// stwx r8,r26,r5
	REX_STORE_U32(r26.u32 + ctx.r5.u32, ctx.r8.u32);
	// lbzx r8,r11,r4
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// lbzx r31,r10,r4
	r31.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// rotlwi r30,r31,3
	r30.u64 = __builtin_rotateleft32(r31.u32, 3);
	// mulli r8,r8,25
	ctx.r8.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(25));
	// subf r31,r31,r30
	r31.u64 = r30.u64 - r31.u64;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + r31.u64;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// srawi r8,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 5;
	// stwx r8,r28,r5
	REX_STORE_U32(r28.u32 + ctx.r5.u32, ctx.r8.u32);
	// lbzx r10,r10,r4
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// lbzx r9,r9,r4
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r4.u32);
	// lbzx r11,r11,r4
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// mulli r8,r11,34
	ctx.r8.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(34));
	// rotlwi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r11,r4,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r4.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// srawi r10,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 5;
	// stw r10,-4(r27)
	REX_STORE_U32(r27.u32 + -4, ctx.r10.u32);
	// ble cr6,0x82394818
	if (!ctx.cr6.gt) goto loc_82394818;
	// subf r10,r7,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r7.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// li r9,255
	ctx.r9.s64 = 255;
loc_823947F0:
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// ble cr6,0x82394808
	if (!ctx.cr6.gt) goto loc_82394808;
	// rlwinm r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
loc_82394808:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// stbux r11,r10,r7
	ea = ctx.r10.u32 + ctx.r7.u32;
	REX_STORE_U8(ea, ctx.r11.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x823947f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823947F0;
loc_82394818:
	// b 0x822d4ec4
	return;
}

DEFINE_REX_FUNC(sub_823A4130) {
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
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e70
	ctx.lr = 0x823A4138;
	// mullw r11,r5,r6
	ctx.r11.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	// lwz r31,92(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r27,84(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// rlwinm r25,r5,6,0,25
	r25.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 6) & 0xFFFFFFC0;
	// li r24,0
	r24.s64 = 0;
	// rlwinm r26,r4,6,0,25
	r26.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne cr6,0x823a4320
	if (!ctx.cr6.eq) goto loc_823A4320;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x823a4180
	if (ctx.cr6.eq) goto loc_823A4180;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r3,r11,r8
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r8.u32);
	// lhzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// extsh r28,r11
	r28.s64 = ctx.r11.s16;
	// b 0x823a41d4
	goto loc_823A41D4;
loc_823A4180:
	// lwz r11,136(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x823a41cc
	if (!ctx.cr6.eq) goto loc_823A41CC;
	// subf r11,r6,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r6.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_823A4198:
	// lhzx r8,r11,r8
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r8.u32);
	// extsh r5,r8
	ctx.r5.s64 = ctx.r8.s16;
	// stw r5,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
	// lhzx r4,r11,r9
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// stw r3,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r3.u32);
loc_823A41B0:
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,16384
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16384, ctx.xer);
	// bne cr6,0x823a4340
	if (!ctx.cr6.eq) goto loc_823A4340;
	// stw r24,0(r27)
	REX_STORE_U32(r27.u32 + 0, r24.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r24,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r24.u32);
	// b 0x822d4ec0
	return;
loc_823A41CC:
	// mr r28,r24
	r28.u64 = r24.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
loc_823A41D4:
	// addi r11,r6,-1
	ctx.r11.s64 = ctx.r6.s64 + -1;
	// subf r5,r6,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r6.u64;
	// subfc r31,r11,r4
	ctx.xer.ca = ctx.r4.u32 >= ctx.r11.u32;
	r31.u64 = ctx.r4.u64 - ctx.r11.u64;
	// eqv r4,r11,r4
	ctx.r4.u64 = ~(ctx.r11.u64 ^ ctx.r4.u64);
	// addi r11,r5,1
	ctx.r11.s64 = ctx.r5.s64 + 1;
	// rlwinm r5,r4,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addze r5,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r5.s64 = temp.s64;
	// addi r31,r3,-16384
	r31.s64 = ctx.r3.s64 + -16384;
	// rlwinm r5,r5,1,30,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x2;
	// cntlzw r31,r31
	r31.u64 = r31.u32 == 0 ? 32 : __builtin_clz(r31.u32);
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// lhzx r29,r4,r8
	r29.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r8.u32);
	// lhzx r4,r4,r9
	ctx.r4.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r9.u32);
	// rlwinm r30,r31,27,31,31
	r30.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 27) & 0x1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsh r5,r29
	ctx.r5.s64 = r29.s16;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r31,r5,-16384
	r31.s64 = ctx.r5.s64 + -16384;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// cntlzw r31,r31
	r31.u64 = r31.u32 == 0 ? 32 : __builtin_clz(r31.u32);
	// lhzx r8,r11,r8
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r8.u32);
	// rlwinm r31,r31,27,31,31
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 27) & 0x1;
	// lhzx r9,r11,r9
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// addi r8,r11,-16384
	ctx.r8.s64 = ctx.r11.s64 + -16384;
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + r31.u64;
	// add r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 + r30.u64;
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// ble cr6,0x823a4270
	if (!ctx.cr6.gt) goto loc_823A4270;
	// li r11,16384
	ctx.r11.s64 = 16384;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r24,0(r27)
	REX_STORE_U32(r27.u32 + 0, r24.u32);
	// stw r24,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r24.u32);
	// b 0x822d4ec0
	return;
loc_823A4270:
	// bne cr6,0x823a42ac
	if (!ctx.cr6.eq) goto loc_823A42AC;
	// cmpwi cr6,r5,16384
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 16384, ctx.xer);
	// bne cr6,0x823a4288
	if (!ctx.cr6.eq) goto loc_823A4288;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// b 0x823a42ac
	goto loc_823A42AC;
loc_823A4288:
	// cmpwi cr6,r11,16384
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16384, ctx.xer);
	// bne cr6,0x823a429c
	if (!ctx.cr6.eq) goto loc_823A429C;
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// b 0x823a42ac
	goto loc_823A42AC;
loc_823A429C:
	// cmpwi cr6,r3,16384
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 16384, ctx.xer);
	// bne cr6,0x823a42ac
	if (!ctx.cr6.eq) goto loc_823A42AC;
	// mr r28,r24
	r28.u64 = r24.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
loc_823A42AC:
	// subf r8,r5,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r5.u64;
	// subf r31,r3,r11
	r31.u64 = ctx.r11.u64 - ctx.r3.u64;
	// subf r30,r5,r3
	r30.u64 = ctx.r3.u64 - ctx.r5.u64;
	// subf r29,r4,r9
	r29.u64 = ctx.r9.u64 - ctx.r4.u64;
	// subf r23,r28,r9
	r23.u64 = ctx.r9.u64 - r28.u64;
	// xor r31,r31,r8
	r31.u64 = r31.u64 ^ ctx.r8.u64;
	// subf r22,r4,r28
	r22.u64 = r28.u64 - ctx.r4.u64;
	// xor r30,r30,r8
	r30.u64 = r30.u64 ^ ctx.r8.u64;
	// xor r23,r23,r29
	r23.u64 = r23.u64 ^ r29.u64;
	// srawi r8,r31,31
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = r31.s32 >> 31;
	// xor r29,r22,r29
	r29.u64 = r22.u64 ^ r29.u64;
	// srawi r31,r30,31
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x7FFFFFFF) != 0);
	r31.s64 = r30.s32 >> 31;
	// srawi r30,r23,31
	ctx.xer.ca = (r23.s32 < 0) & ((r23.u32 & 0x7FFFFFFF) != 0);
	r30.s64 = r23.s32 >> 31;
	// srawi r29,r29,31
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x7FFFFFFF) != 0);
	r29.s64 = r29.s32 >> 31;
	// or r23,r8,r31
	r23.u64 = ctx.r8.u64 | r31.u64;
	// or r22,r30,r29
	r22.u64 = r30.u64 | r29.u64;
	// and r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 & ctx.r11.u64;
	// andc r3,r3,r23
	ctx.r3.u64 = ctx.r3.u64 & ~r23.u64;
	// andc r8,r28,r22
	ctx.r8.u64 = r28.u64 & ~r22.u64;
	// and r9,r30,r9
	ctx.r9.u64 = r30.u64 & ctx.r9.u64;
	// or r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 | ctx.r11.u64;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// and r11,r31,r5
	ctx.r11.u64 = r31.u64 & ctx.r5.u64;
	// and r8,r29,r4
	ctx.r8.u64 = r29.u64 & ctx.r4.u64;
	// or r5,r3,r11
	ctx.r5.u64 = ctx.r3.u64 | ctx.r11.u64;
	// or r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stw r5,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
	// stw r4,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r4.u32);
	// b 0x823a41b0
	goto loc_823A41B0;
loc_823A4320:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x823a4330
	if (!ctx.cr6.gt) goto loc_823A4330;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x823a4198
	goto loc_823A4198;
loc_823A4330:
	// lwz r27,84(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r24,0
	r24.s64 = 0;
	// stw r24,0(r27)
	REX_STORE_U32(r27.u32 + 0, r24.u32);
	// stw r24,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r24.u32);
loc_823A4340:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r6,r6,6,0,25
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 6) & 0xFFFFFFC0;
	// lwz r8,0(r27)
	ctx.r8.u64 = REX_LOAD_U32(r27.u32 + 0);
	// rlwinm r7,r7,6,0,25
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r9,r26
	ctx.r11.u64 = ctx.r9.u64 + r26.u64;
	// add r5,r8,r25
	ctx.r5.u64 = ctx.r8.u64 + r25.u64;
	// addi r8,r6,-4
	ctx.r8.s64 = ctx.r6.s64 + -4;
	// addi r7,r7,-4
	ctx.r7.s64 = ctx.r7.s64 + -4;
	// cmpwi cr6,r11,-60
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -60, ctx.xer);
	// bge cr6,0x823a4374
	if (!ctx.cr6.lt) goto loc_823A4374;
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// addi r11,r11,-60
	ctx.r11.s64 = ctx.r11.s64 + -60;
	// b 0x823a4384
	goto loc_823A4384;
loc_823A4374:
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x823a4388
	if (!ctx.cr6.gt) goto loc_823A4388;
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
loc_823A4384:
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_823A4388:
	// cmpwi cr6,r5,-60
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -60, ctx.xer);
	// bge cr6,0x823a43a8
	if (!ctx.cr6.lt) goto loc_823A43A8;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// subf r11,r5,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r5.u64;
	// addi r10,r11,-60
	ctx.r10.s64 = ctx.r11.s64 + -60;
	// stw r10,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r10.u32);
	// b 0x822d4ec0
	return;
loc_823A43A8:
	// cmpw cr6,r5,r7
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x823a43c0
	if (!ctx.cr6.gt) goto loc_823A43C0;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// subf r11,r5,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r5.u64;
	// add r10,r11,r7
	ctx.r10.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stw r10,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r10.u32);
loc_823A43C0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822d4ec0
	return;
}

DEFINE_REX_FUNC(sub_823AE920) {
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
	PPCVRegister v69{};
	PPCVRegister v72{};
	uint32_t ea{};
	// dcbt r0,r4
	// mr r12,r9
	ctx.r12.u64 = ctx.r9.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// lvx v8,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,32
	ctx.r10.s64 = 32;
	// lvx v28,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,48
	ctx.r11.s64 = 48;
	// lvx v0,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r6,80
	ctx.r6.s64 = 80;
	// vspltish v29,-1
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_set1_epi16(short(0xFFFF)));
	// rldicr r2,r7,32,31
	ctx.r2.u64 = __builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000;
	// vupkhsh v10,v0
	simde_mm_store_si128((simde__m128i*)ctx.v10.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16))));
	// lvx v9,r9,r5
	ea = (ctx.r9.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r7,112
	ctx.r7.s64 = 112;
	// lvx v18,r10,r5
	ea = (ctx.r10.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v18.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r2,r8,r2
	ctx.r2.u64 = ctx.r8.u64 + ctx.r2.u64;
	// lvx v19,r11,r5
	ea = (ctx.r11.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v19.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r5,r12
	ctx.r5.u64 = ctx.r12.u64;
	// li r12,64
	ctx.r12.s64 = 64;
	// lvx v1,r9,r3
	ea = (ctx.r9.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx v2,r10,r3
	ea = (ctx.r10.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r8,96
	ctx.r8.s64 = 96;
	// lvx v3,r11,r3
	ea = (ctx.r11.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vupkhsh v11,v1
	simde_mm_store_si128((simde__m128i*)ctx.v11.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16))));
	// lvx v5,r6,r3
	ea = (ctx.r6.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vupkhsh v12,v2
	simde_mm_store_si128((simde__m128i*)ctx.v12.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16))));
	// vupkhsh v13,v3
	simde_mm_store_si128((simde__m128i*)ctx.v13.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16))));
	// vcfsx v10,v10,0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v10.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// lvx v4,r12,r3
	ea = (ctx.r12.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vupkhsh v15,v5
	simde_mm_store_si128((simde__m128i*)v15.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16))));
	// vcfsx v11,v11,0
	simde_mm_store_ps(ctx.v11.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// lvx v6,r8,r3
	ea = (ctx.r8.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vupkhsh v14,v4
	simde_mm_store_si128((simde__m128i*)v14.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16))));
	// vcfsx v12,v12,0
	simde_mm_store_ps(ctx.v12.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v12.u32)));
	// vcfsx v13,v13,0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v13.u32)));
	// lvx v7,r7,r3
	ea = (ctx.r7.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfsx v15,v15,0
	simde_mm_store_ps(v15.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)v15.u32)));
	// vupkhsh v16,v6
	simde_mm_store_si128((simde__m128i*)v16.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16))));
	// vupkhsh v17,v7
	simde_mm_store_si128((simde__m128i*)v17.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16))));
	// vcfsx v14,v14,0
	simde_mm_store_ps(v14.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)v14.u32)));
	// vupklsh v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vupklsh v1,v1
	simde_mm_store_si128((simde__m128i*)ctx.v1.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vupklsh v2,v2
	simde_mm_store_si128((simde__m128i*)ctx.v2.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vcfsx v16,v16,0
	simde_mm_store_ps(v16.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)v16.u32)));
	// vupklsh v3,v3
	simde_mm_store_si128((simde__m128i*)ctx.v3.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vcfsx v17,v17,0
	simde_mm_store_ps(v17.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)v17.u32)));
	// vupklsh v4,v4
	simde_mm_store_si128((simde__m128i*)ctx.v4.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vcfsx v0,v0,0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// vupklsh v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vcfsx v1,v1,0
	simde_mm_store_ps(ctx.v1.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v1.u32)));
	// vupklsh v6,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vcfsx v2,v2,0
	simde_mm_store_ps(ctx.v2.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v2.u32)));
	// vupklsh v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vcfsx v3,v3,0
	simde_mm_store_ps(ctx.v3.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v3.u32)));
	// vcfsx v4,v4,0
	simde_mm_store_ps(ctx.v4.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v4.u32)));
	// vspltish v30,0
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_set1_epi16(short(0x0)));
	// vcfsx v5,v5,0
	simde_mm_store_ps(ctx.v5.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v5.u32)));
	// vcfsx v6,v6,0
	simde_mm_store_ps(ctx.v6.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v6.u32)));
	// vcfsx v7,v7,0
	simde_mm_store_ps(ctx.v7.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v7.u32)));
	// vmulfp128 v10,v10,v9
	simde_mm_store_ps(ctx.v10.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v9.f32)));
	// vmulfp128 v11,v11,v8
	simde_mm_store_ps(ctx.v11.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v8.f32)));
	// vmulfp128 v12,v12,v8
	simde_mm_store_ps(ctx.v12.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v8.f32)));
	// vmulfp128 v13,v13,v8
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v8.f32)));
	// vmulfp128 v14,v14,v8
	simde_mm_store_ps(v14.f32, simde_mm_mul_ps(simde_mm_load_ps(v14.f32), simde_mm_load_ps(ctx.v8.f32)));
	// vmulfp128 v15,v15,v8
	simde_mm_store_ps(v15.f32, simde_mm_mul_ps(simde_mm_load_ps(v15.f32), simde_mm_load_ps(ctx.v8.f32)));
	// vmulfp128 v16,v16,v8
	simde_mm_store_ps(v16.f32, simde_mm_mul_ps(simde_mm_load_ps(v16.f32), simde_mm_load_ps(ctx.v8.f32)));
	// vmulfp128 v17,v17,v8
	simde_mm_store_ps(v17.f32, simde_mm_mul_ps(simde_mm_load_ps(v17.f32), simde_mm_load_ps(ctx.v8.f32)));
	// vmulfp128 v0,v0,v8
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v8.f32)));
	// vmulfp128 v1,v1,v8
	simde_mm_store_ps(ctx.v1.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v1.f32), simde_mm_load_ps(ctx.v8.f32)));
	// vmulfp128 v2,v2,v8
	simde_mm_store_ps(ctx.v2.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v2.f32), simde_mm_load_ps(ctx.v8.f32)));
	// vmulfp128 v3,v3,v8
	simde_mm_store_ps(ctx.v3.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v3.f32), simde_mm_load_ps(ctx.v8.f32)));
	// vmulfp128 v4,v4,v8
	simde_mm_store_ps(ctx.v4.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v4.f32), simde_mm_load_ps(ctx.v8.f32)));
	// vmulfp128 v5,v5,v8
	simde_mm_store_ps(ctx.v5.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_load_ps(ctx.v8.f32)));
	// vmulfp128 v6,v6,v8
	simde_mm_store_ps(ctx.v6.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v8.f32)));
	// vmulfp128 v7,v7,v8
	simde_mm_store_ps(ctx.v7.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v8.f32)));
	// vctsxs v10,v10,0
	simde_mm_store_si128((simde__m128i*)ctx.v10.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v10.f32)));
	// vctsxs v11,v11,0
	simde_mm_store_si128((simde__m128i*)ctx.v11.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v11.f32)));
	// vctsxs v12,v12,0
	simde_mm_store_si128((simde__m128i*)ctx.v12.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v12.f32)));
	// vctsxs v13,v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v13.f32)));
	// vctsxs v14,v14,0
	simde_mm_store_si128((simde__m128i*)v14.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(v14.f32)));
	// vctsxs v15,v15,0
	simde_mm_store_si128((simde__m128i*)v15.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(v15.f32)));
	// vctsxs v3,v3,0
	simde_mm_store_si128((simde__m128i*)ctx.v3.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v3.f32)));
	// vspltish v31,4
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_set1_epi16(short(0x4)));
	// vctsxs v4,v4,0
	simde_mm_store_si128((simde__m128i*)ctx.v4.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v4.f32)));
	// vctsxs v1,v1,0
	simde_mm_store_si128((simde__m128i*)ctx.v1.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v1.f32)));
	// vctsxs v17,v17,0
	simde_mm_store_si128((simde__m128i*)v17.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(v17.f32)));
	// vctsxs v7,v7,0
	simde_mm_store_si128((simde__m128i*)ctx.v7.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v7.f32)));
	// vctsxs v2,v2,0
	simde_mm_store_si128((simde__m128i*)ctx.v2.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v2.f32)));
	// vctsxs v16,v16,0
	simde_mm_store_si128((simde__m128i*)v16.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(v16.f32)));
	// vctsxs v5,v5,0
	simde_mm_store_si128((simde__m128i*)ctx.v5.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v5.f32)));
	// vctsxs v6,v6,0
	simde_mm_store_si128((simde__m128i*)ctx.v6.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v6.f32)));
	// vctsxs v0,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v0.f32)));
	// vpkswss v23,v13,v3
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v3.s32), simde_mm_load_si128((simde__m128i*)ctx.v13.s32)));
	// vpkswss v24,v14,v4
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v4.s32), simde_mm_load_si128((simde__m128i*)v14.s32)));
	// vpkswss v21,v11,v1
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v1.s32), simde_mm_load_si128((simde__m128i*)ctx.v11.s32)));
	// vpkswss v27,v17,v7
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v7.s32), simde_mm_load_si128((simde__m128i*)v17.s32)));
	// vsrah v13,v23,v29
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkswss v22,v12,v2
	simde_mm_store_si128((simde__m128i*)v22.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v2.s32), simde_mm_load_si128((simde__m128i*)ctx.v12.s32)));
	// vsrah v14,v24,v29
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v14.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v11,v21,v29
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkswss v25,v15,v5
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v5.s32), simde_mm_load_si128((simde__m128i*)v15.s32)));
	// vcmpequh v4,v30,v24
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_cmpeq_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)v24.u16)));
	// vpkswss v26,v16,v6
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v6.s32), simde_mm_load_si128((simde__m128i*)v16.s32)));
	// vsrah v17,v27,v29
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkswss v20,v10,v0
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.s32), simde_mm_load_si128((simde__m128i*)ctx.v10.s32)));
	// vsrah v12,v22,v29
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vcmpequh v3,v30,v23
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_cmpeq_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)v23.u16)));
	// vsrah v15,v25,v29
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v16,v26,v29
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v10,v20,v29
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v20.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vspltish v29,1
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_set1_epi16(short(0x1)));
	// vsel v13,v18,v19,v13
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)v18.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)v19.u8))));
	// vsel v14,v18,v19,v14
	simde_mm_store_si128((simde__m128i*)v14.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)v14.u8), simde_mm_load_si128((simde__m128i*)v18.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)v14.u8), simde_mm_load_si128((simde__m128i*)v19.u8))));
	// vsel v11,v18,v19,v11
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)v18.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)v19.u8))));
	// vcmpequh v1,v30,v21
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_cmpeq_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)v21.u16)));
	// vcmpequh v7,v30,v27
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_cmpeq_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)v27.u16)));
	// vsel v17,v18,v19,v17
	simde_mm_store_si128((simde__m128i*)v17.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)v17.u8), simde_mm_load_si128((simde__m128i*)v18.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)v17.u8), simde_mm_load_si128((simde__m128i*)v19.u8))));
	// vcmpequh v5,v30,v25
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_cmpeq_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)v25.u16)));
	// vsel v10,v18,v19,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)v18.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)v19.u8))));
	// vcmpequh v6,v30,v26
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_cmpeq_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)v26.u16)));
	// vcmpequh v2,v30,v22
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_cmpeq_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)v22.u16)));
	// vcmpequh v0,v30,v20
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_cmpeq_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)v20.u16)));
	// vsel v12,v18,v19,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)v18.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)v19.u8))));
	// vsel v15,v18,v19,v15
	simde_mm_store_si128((simde__m128i*)v15.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)v15.u8), simde_mm_load_si128((simde__m128i*)v18.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)v15.u8), simde_mm_load_si128((simde__m128i*)v19.u8))));
	// vsel v16,v18,v19,v16
	simde_mm_store_si128((simde__m128i*)v16.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)v16.u8), simde_mm_load_si128((simde__m128i*)v18.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)v16.u8), simde_mm_load_si128((simde__m128i*)v19.u8))));
	// vsel v13,v13,v30,v3
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)v30.u8))));
	// vsel v14,v14,v30,v4
	simde_mm_store_si128((simde__m128i*)v14.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)v14.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)v30.u8))));
	// vsel v11,v11,v30,v1
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)v30.u8))));
	// vsel v17,v17,v30,v7
	simde_mm_store_si128((simde__m128i*)v17.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)v17.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)v30.u8))));
	// vsel v12,v12,v30,v2
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)v30.u8))));
	// vsel v10,v10,v30,v0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)v30.u8))));
	// vsel v15,v15,v30,v5
	simde_mm_store_si128((simde__m128i*)v15.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)v15.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)v30.u8))));
	// vsel v16,v16,v30,v6
	simde_mm_store_si128((simde__m128i*)v16.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)v16.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)v30.u8))));
	// vspltish v30,2
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_set1_epi16(short(0x2)));
	// vaddshs v2,v24,v14
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)v14.s16)));
	// vaddshs v8,v23,v13
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vspltish v13,3
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x3)));
	// vaddshs v5,v21,v11
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v6,v27,v17
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)v17.s16)));
	// vand v10,v10,v28
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)v28.u8)));
	// vslh v24,v2,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v4,v22,v12
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vslh v2,v2,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v12,v5,v6
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vaddshs v1,v20,v10
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v3,v26,v16
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// vaddshs v2,v2,v24
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)v24.s16)));
	// vslh v24,v12,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v26,v5,v29
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v11,v5,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v7,v25,v15
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v25.s16), simde_mm_load_si128((simde__m128i*)v15.s16)));
	// vslh v25,v1,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v1,v1,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v9,v24,v12
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vslh v10,v6,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v11,v26,v11
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v1,v1,v25
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)v25.s16)));
	// vslh v25,v6,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v10,v9,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vor128 v14,v69,v69
	simde_mm_store_si128((simde__m128i*)v14.u8, simde_mm_load_si128((simde__m128i*)v69.u8));
	// vsubuhm v11,v9,v11
	simde_mm_store_si128((simde__m128i*)ctx.v11.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vor128 v15,v72,v72
	simde_mm_store_si128((simde__m128i*)v15.u8, simde_mm_load_si128((simde__m128i*)v72.u8));
	// vslh v27,v5,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v6,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v9,v12,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v6,v6,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v5,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v12,v7,v8
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vslh v26,v7,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v6,v9,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vaddshs v5,v27,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vslh v27,v7,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v10,v10,v25
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)v25.u16)));
	// vsubuhm v6,v6,v24
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)v24.u16)));
	// vaddshs v5,v9,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vslh v9,v12,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v8,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v26,v26,v27
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)v27.s16)));
	// vslh v25,v8,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v1,v1,v31
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// vsubuhm v24,v9,v24
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)v24.u16)));
	// vaddshs v26,v9,v26
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)v26.s16)));
	// vslh v27,v8,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v24,v24,v25
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)v25.u16)));
	// vsubuhm v10,v10,v26
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)v26.u16)));
	// vslh v26,v12,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v25,v7,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v11,v11,v24
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)v24.s16)));
	// vslh v24,v7,v29
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v9,v26,v12
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)v26.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vslh v26,v8,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v24,v24,v25
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)v25.s16)));
	// vslh v25,v4,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v26,v9,v26
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)v26.u16)));
	// vsubuhm v24,v9,v24
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)v24.u16)));
	// vaddshs v9,v1,v2
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vsubuhm v26,v26,v27
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)v26.u16), simde_mm_load_si128((simde__m128i*)v27.u16)));
	// vsubuhm v1,v1,v2
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vor v2,v3,v3
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)ctx.v3.u8));
	// vaddshs v5,v5,v24
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)v24.s16)));
	// vaddshs v6,v6,v26
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)v26.s16)));
	// vslh v24,v4,v29
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v27,v2,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v26,v2,v29
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v4,v4,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v24,v24,v25
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)v25.s16)));
	// vslh v3,v3,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v26,v26,v27
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)v27.s16)));
	// vsubuhm v3,v24,v3
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vaddshs v4,v26,v4
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vaddshs v8,v9,v4
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vsubuhm v9,v9,v4
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vaddshs v4,v1,v3
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vsubuhm v1,v1,v3
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vaddshs v24,v8,v5
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vaddshs v27,v9,v6
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vaddshs v25,v4,v10
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v26,v1,v11
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsubuhm v29,v1,v11
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vsubuhm v28,v9,v6
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vsubuhm v30,v4,v10
	simde_mm_store_si128((simde__m128i*)v30.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vsubuhm v31,v8,v5
	simde_mm_store_si128((simde__m128i*)v31.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vsrah v24,v24,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v25,v25,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v26,v26,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v28,v28,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v29,v29,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v27,v27,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vmrglh v20,v24,v25
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)v25.u16), simde_mm_load_si128((simde__m128i*)v24.u16)));
	// vsrah v30,v30,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vmrghh v16,v24,v25
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)v25.u16), simde_mm_load_si128((simde__m128i*)v24.u16)));
	// vsrah v31,v31,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vmrghh v18,v28,v29
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// vmrghh v17,v26,v27
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)v27.u16), simde_mm_load_si128((simde__m128i*)v26.u16)));
	// vmrglh v21,v26,v27
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)v27.u16), simde_mm_load_si128((simde__m128i*)v26.u16)));
	// vmrghh v19,v30,v31
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)v31.u16), simde_mm_load_si128((simde__m128i*)v30.u16)));
	// vmrglh v22,v28,v29
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// vmrglh v23,v30,v31
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)v31.u16), simde_mm_load_si128((simde__m128i*)v30.u16)));
	// vmrghw v24,v16,v17
	simde_mm_store_si128((simde__m128i*)v24.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)v17.u32), simde_mm_load_si128((simde__m128i*)v16.u32)));
	// vmrglw v25,v16,v17
	simde_mm_store_si128((simde__m128i*)v25.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)v17.u32), simde_mm_load_si128((simde__m128i*)v16.u32)));
	// vmrghw v28,v18,v19
	simde_mm_store_si128((simde__m128i*)v28.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)v19.u32), simde_mm_load_si128((simde__m128i*)v18.u32)));
	// vmrglw v29,v18,v19
	simde_mm_store_si128((simde__m128i*)v29.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)v19.u32), simde_mm_load_si128((simde__m128i*)v18.u32)));
	// vmrghw v26,v20,v21
	simde_mm_store_si128((simde__m128i*)v26.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)v21.u32), simde_mm_load_si128((simde__m128i*)v20.u32)));
	// vmrglw v27,v20,v21
	simde_mm_store_si128((simde__m128i*)v27.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)v21.u32), simde_mm_load_si128((simde__m128i*)v20.u32)));
	// vmrglw v31,v22,v23
	simde_mm_store_si128((simde__m128i*)v31.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)v23.u32), simde_mm_load_si128((simde__m128i*)v22.u32)));
	// vperm v5,v24,v28,v15
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v24.u8), simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)v15.u8)));
	// vmrghw v30,v22,v23
	simde_mm_store_si128((simde__m128i*)v30.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)v23.u32), simde_mm_load_si128((simde__m128i*)v22.u32)));
	// vperm v8,v25,v29,v15
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)v15.u8)));
	// vperm v6,v27,v31,v15
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v27.u8), simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)v15.u8)));
	// vperm v3,v27,v31,v14
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v27.u8), simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)v14.u8)));
	// vspltish v27,3
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_set1_epi16(short(0x3)));
	// vperm v4,v25,v29,v14
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)v14.u8)));
	// vaddshs v13,v5,v6
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vspltish v25,1
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_set1_epi16(short(0x1)));
	// vperm v7,v26,v30,v15
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v26.u8), simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)v15.u8)));
	// vperm v2,v26,v30,v14
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v26.u8), simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)v14.u8)));
	// vslh v10,v6,v27
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vperm v1,v24,v28,v14
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v24.u8), simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)v14.u8)));
	// vspltish v26,2
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_set1_epi16(short(0x2)));
	// vslh v9,v13,v27
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vspltish v17,8
	simde_mm_store_si128((simde__m128i*)v17.s16, simde_mm_set1_epi16(short(0x8)));
	// vslh v20,v6,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v19,v2,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vspltish v21,6
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_set1_epi16(short(0x6)));
	// vslh v18,v1,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v2,v2,v26
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v1,v1,v26
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v9,v9,v13
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// vslh v29,v17,v26
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v2,v2,v19
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)v19.s16)));
	// vaddshs v1,v1,v18
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)v18.s16)));
	// vsubuhm v11,v9,v5
	simde_mm_store_si128((simde__m128i*)ctx.v11.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vslh v18,v5,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v19,v5,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v10,v9,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vslh v17,v6,v26
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v5,v5,v26
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v6,v6,v27
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v9,v13,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v10,v10,v17
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)v17.u16)));
	// vaddshs v5,v5,v19
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)v19.s16)));
	// vsubuhm v11,v11,v18
	simde_mm_store_si128((simde__m128i*)ctx.v11.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)v18.u16)));
	// vaddshs v12,v7,v8
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vslh v18,v7,v26
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v17,v7,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v6,v9,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vaddshs v5,v9,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vslh v9,v12,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v17,v17,v18
	simde_mm_store_si128((simde__m128i*)v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v17.s16), simde_mm_load_si128((simde__m128i*)v18.s16)));
	// vslh v19,v8,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v6,v6,v20
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)v20.u16)));
	// vslh v20,v8,v27
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v17,v9,v17
	simde_mm_store_si128((simde__m128i*)v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)v17.s16)));
	// vsubuhm v19,v9,v19
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)v19.u16)));
	// vslh v9,v12,v27
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v1,v1,v29
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
	// vsubuhm v10,v10,v17
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)v17.u16)));
	// vsubuhm v19,v19,v20
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)v19.u16), simde_mm_load_si128((simde__m128i*)v20.u16)));
	// vslh v17,v7,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v9,v9,v12
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vslh v20,v8,v27
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v11,v11,v19
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)v19.s16)));
	// vaddshs v17,v17,v7
	simde_mm_store_si128((simde__m128i*)v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vslh v19,v8,v26
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v7,v3,v26
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsrah v23,v12,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsubuhm v17,v9,v17
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)v17.u16)));
	// vsubuhm v19,v9,v19
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)v19.u16)));
	// vaddshs v9,v1,v2
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vsubuhm v1,v1,v2
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vaddshs v2,v3,v4
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vaddshs v7,v7,v3
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vsubuhm v19,v19,v20
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)v19.u16), simde_mm_load_si128((simde__m128i*)v20.u16)));
	// vaddshs v5,v5,v17
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)v17.s16)));
	// vslh v2,v2,v27
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v17,v4,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v6,v6,v19
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)v19.s16)));
	// vslh v18,v4,v27
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v7,v2,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// vsrah v22,v13,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsubuhm v2,v2,v17
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)v17.u16)));
	// vaddshs v5,v5,v23
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)v23.s16)));
	// vaddshs v8,v9,v7
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vaddshs v6,v6,v23
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)v23.s16)));
	// vsubuhm v2,v2,v18
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)v18.u16)));
	// vsubuhm v9,v9,v7
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// vadduhm v10,v10,v22
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)v22.u16)));
	// vaddshs v11,v11,v22
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)v22.s16)));
	// vsubuhm v2,v2,v4
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vaddshs v24,v8,v5
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vaddshs v27,v9,v6
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vsubuhm v28,v9,v6
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vsubuhm v7,v1,v2
	simde_mm_store_si128((simde__m128i*)ctx.v7.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vaddshs v1,v1,v2
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vsrah v24,v24,v21
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsubuhm v31,v8,v5
	simde_mm_store_si128((simde__m128i*)v31.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vaddshs v15,v7,v10
	simde_mm_store_si128((simde__m128i*)v15.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v26,v1,v11
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsubuhm v29,v1,v11
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// stvx v24,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v24.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubuhm v30,v7,v10
	simde_mm_store_si128((simde__m128i*)v30.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vsrah v15,v15,v21
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v15.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v26,v26,v21
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v27,v27,v21
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v28,v28,v21
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v29,v29,v21
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx v15,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v15.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v30,v30,v21
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx v26,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v26.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v31,v31,v21
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx v27,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v27.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v28,r12,r4
	ea = (ctx.r12.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v29,r6,r4
	ea = (ctx.r6.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v30,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v31,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823E74D8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x823E74E0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r11,5
	ctx.r11.s64 = 5;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// addi r10,r5,-4
	ctx.r10.s64 = ctx.r5.s64 + -4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823E7508:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x823e7508
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823E7508;
	// li r30,0
	r30.s64 = 0;
	// stw r7,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r7.u32);
	// stw r8,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r8.u32);
	// addi r7,r31,44
	ctx.r7.s64 = r31.s64 + 44;
	// stw r29,24(r31)
	REX_STORE_U32(r31.u32 + 24, r29.u32);
	// addi r8,r31,52
	ctx.r8.s64 = r31.s64 + 52;
	// stw r30,36(r31)
	REX_STORE_U32(r31.u32 + 36, r30.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r30,44(r31)
	REX_STORE_U32(r31.u32 + 44, r30.u32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// stw r30,52(r31)
	REX_STORE_U32(r31.u32 + 52, r30.u32);
	// bl 0x823e73c8
	ctx.lr = 0x823E7544;
	sub_823E73C8(ctx, base);
	// lhz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 8);
	// lwz r10,44(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 44);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,52(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 52);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
	// lhz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 8);
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// stw r30,56(r31)
	REX_STORE_U32(r31.u32 + 56, r30.u32);
	// stw r30,60(r31)
	REX_STORE_U32(r31.u32 + 60, r30.u32);
	// stw r30,64(r31)
	REX_STORE_U32(r31.u32 + 64, r30.u32);
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_823E9B28) {
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
	ctx.lr = 0x823E9B30;
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
	// blt cr6,0x823e9e1c
	if (ctx.cr6.lt) goto loc_823E9E1C;
	// beq cr6,0x823e9d9c
	if (ctx.cr6.eq) goto loc_823E9D9C;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// blt cr6,0x823e9cf8
	if (ctx.cr6.lt) goto loc_823E9CF8;
	// beq cr6,0x823e9c5c
	if (ctx.cr6.eq) goto loc_823E9C5C;
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// beq cr6,0x823e9b80
	if (ctx.cr6.eq) goto loc_823E9B80;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16385
	ctx.r3.u64 = ctx.r3.u64 | 16385;
	// b 0x823ea01c
	goto loc_823EA01C;
loc_823E9B80:
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
	// ble cr6,0x823e9ba0
	if (!ctx.cr6.gt) goto loc_823E9BA0;
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
loc_823E9BA0:
	// mullw. r10,r10,r27
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r27.s32);
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x823e9bdc
	if (ctx.cr0.eq) goto loc_823E9BDC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r10,r6,-4
	ctx.r10.s64 = ctx.r6.s64 + -4;
loc_823E9BB4:
	// rlwinm r8,r11,0,28,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC;
	// clrlwi r9,r11,30
	ctx.r9.u64 = ctx.r11.u32 & 0x3;
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
	// bdnz 0x823e9bb4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823E9BB4;
loc_823E9BDC:
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x823e9c54
	if (ctx.cr6.eq) goto loc_823E9C54;
loc_823E9BEC:
	// lhz r11,10(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 10);
	// li r28,0
	r28.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x823e9c48
	if (ctx.cr0.eq) goto loc_823E9C48;
	// li r30,0
	r30.s64 = 0;
loc_823E9C00:
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
	ctx.lr = 0x823E9C20;
	sub_823E8D70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823ea01c
	if (ctx.cr0.lt) goto loc_823EA01C;
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
	// blt cr6,0x823e9c00
	if (ctx.cr6.lt) goto loc_823E9C00;
loc_823E9C48:
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// cmplw cr6,r26,r27
	ctx.cr6.compare<uint32_t>(r26.u32, r27.u32, ctx.xer);
	// blt cr6,0x823e9bec
	if (ctx.cr6.lt) goto loc_823E9BEC;
loc_823E9C54:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823ea01c
	goto loc_823EA01C;
loc_823E9C5C:
	// lhz r10,8(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 8);
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x823e9c70
	if (!ctx.cr6.gt) goto loc_823E9C70;
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
loc_823E9C70:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x823e9e6c
	if (ctx.cr6.eq) goto loc_823E9E6C;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
	// addi r8,r6,-4
	ctx.r8.s64 = ctx.r6.s64 + -4;
loc_823E9C80:
	// lhz r11,6(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 6);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x823e9cec
	if (ctx.cr0.eq) goto loc_823E9CEC;
	// lhz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 4);
loc_823E9C94:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823e9cdc
	if (ctx.cr6.eq) goto loc_823E9CDC;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
loc_823E9CA4:
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bgt cr6,0x823e9cc0
	if (ctx.cr6.gt) goto loc_823E9CC0;
	// cmplwi cr6,r7,4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 4, ctx.xer);
	// bgt cr6,0x823e9cc0
	if (ctx.cr6.gt) goto loc_823E9CC0;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// b 0x823e9cc4
	goto loc_823E9CC4;
loc_823E9CC0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823E9CC4:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwu r11,4(r8)
	ea = 4 + ctx.r8.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r8.u32 = ea;
	// lhz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 4);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823e9ca4
	if (ctx.cr6.lt) goto loc_823E9CA4;
loc_823E9CDC:
	// lhz r10,6(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 6);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823e9c94
	if (ctx.cr6.lt) goto loc_823E9C94;
loc_823E9CEC:
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// bdnz 0x823e9c80
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823E9C80;
	// b 0x823e9e6c
	goto loc_823E9E6C;
loc_823E9CF8:
	// lhz r10,8(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 8);
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x823e9d0c
	if (!ctx.cr6.gt) goto loc_823E9D0C;
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
loc_823E9D0C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x823e9e6c
	if (ctx.cr6.eq) goto loc_823E9E6C;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
	// addi r8,r6,-4
	ctx.r8.s64 = ctx.r6.s64 + -4;
loc_823E9D1C:
	// lhz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 4);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x823e9d90
	if (ctx.cr0.eq) goto loc_823E9D90;
	// lhz r10,6(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 6);
	// li r9,0
	ctx.r9.s64 = 0;
loc_823E9D34:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823e9d7c
	if (ctx.cr6.eq) goto loc_823E9D7C;
loc_823E9D40:
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// bgt cr6,0x823e9d64
	if (ctx.cr6.gt) goto loc_823E9D64;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x823e9d64
	if (ctx.cr6.gt) goto loc_823E9D64;
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r5,0(r4)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r5
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// b 0x823e9d68
	goto loc_823E9D68;
loc_823E9D64:
	// li r10,0
	ctx.r10.s64 = 0;
loc_823E9D68:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwu r10,4(r8)
	ea = 4 + ctx.r8.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r8.u32 = ea;
	// lhz r10,6(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 6);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823e9d40
	if (ctx.cr6.lt) goto loc_823E9D40;
loc_823E9D7C:
	// lhz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 4);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823e9d34
	if (ctx.cr6.lt) goto loc_823E9D34;
loc_823E9D90:
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// bdnz 0x823e9d1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823E9D1C;
	// b 0x823e9e6c
	goto loc_823E9E6C;
loc_823E9D9C:
	// lhz r10,8(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 8);
	// rlwinm r31,r11,2,0,29
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x823e9db0
	if (!ctx.cr6.gt) goto loc_823E9DB0;
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
loc_823E9DB0:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x823e9e6c
	if (ctx.cr6.eq) goto loc_823E9E6C;
	// lhz r10,6(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 6);
	// addi r8,r6,-4
	ctx.r8.s64 = ctx.r6.s64 + -4;
loc_823E9DC4:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823e9e0c
	if (ctx.cr6.eq) goto loc_823E9E0C;
loc_823E9DD0:
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// ble cr6,0x823e9de0
	if (!ctx.cr6.gt) goto loc_823E9DE0;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x823e9df8
	goto loc_823E9DF8;
loc_823E9DE0:
	// rlwinm r10,r9,2,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xC;
	// rlwinm r7,r9,0,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r7,r4
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r4.u32);
	// lwzx r10,r10,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
loc_823E9DF8:
	// stwu r10,4(r8)
	ea = 4 + ctx.r8.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r8.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lhz r10,6(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 6);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823e9dd0
	if (ctx.cr6.lt) goto loc_823E9DD0;
loc_823E9E0C:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r9,r31
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r31.u32, ctx.xer);
	// blt cr6,0x823e9dc4
	if (ctx.cr6.lt) goto loc_823E9DC4;
	// b 0x823e9e6c
	goto loc_823E9E6C;
loc_823E9E1C:
	// lhz r10,8(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 8);
	// rlwinm r31,r11,4,0,27
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x823e9e30
	if (!ctx.cr6.gt) goto loc_823E9E30;
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
loc_823E9E30:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x823e9e6c
	if (ctx.cr6.eq) goto loc_823E9E6C;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
	// addi r10,r6,-4
	ctx.r10.s64 = ctx.r6.s64 + -4;
loc_823E9E44:
	// rlwinm r8,r11,0,28,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC;
	// clrlwi r9,r11,30
	ctx.r9.u64 = ctx.r11.u32 & 0x3;
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
	// bdnz 0x823e9e44
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823E9E44;
loc_823E9E6C:
	// lhz r10,2(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 2);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// beq cr6,0x823e9ef0
	if (ctx.cr6.eq) goto loc_823E9EF0;
	// lwz r11,52(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 52);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// mullw r11,r11,r31
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r31.s32);
	// beq cr6,0x823e9ebc
	if (ctx.cr6.eq) goto loc_823E9EBC;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x823e9ef0
	if (!ctx.cr6.eq) goto loc_823E9EF0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823e9ef0
	if (ctx.cr6.eq) goto loc_823E9EF0;
	// addi r10,r6,-4
	ctx.r10.s64 = ctx.r6.s64 + -4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823E9EA0:
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
	// bdnz 0x823e9ea0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823E9EA0;
	// b 0x823e9ef0
	goto loc_823E9EF0;
loc_823E9EBC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823e9ef0
	if (ctx.cr6.eq) goto loc_823E9EF0;
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
loc_823E9ED4:
	// lfs f13,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x823e9ee8
	if (!ctx.cr6.eq) goto loc_823E9EE8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823E9EE8:
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823e9ed4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823E9ED4;
loc_823E9EF0:
	// lhz r9,8(r24)
	ctx.r9.u64 = REX_LOAD_U16(r24.u32 + 8);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x823e9fcc
	if (ctx.cr0.eq) goto loc_823E9FCC;
	// lhz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 0);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x823e9f14
	if (ctx.cr6.eq) goto loc_823E9F14;
	// lhz r11,6(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 6);
	// lhz r10,4(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 4);
	// b 0x823e9f1c
	goto loc_823E9F1C;
loc_823E9F14:
	// lhz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 4);
	// lhz r10,6(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 6);
loc_823E9F1C:
	// clrlwi. r8,r11,30
	ctx.r8.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x823e9fcc
	if (ctx.cr0.eq) goto loc_823E9FCC;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x823e9f38
	if (!ctx.cr6.eq) goto loc_823E9F38;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r3,r9,9268
	ctx.r3.s64 = ctx.r9.s64 + 9268;
	// b 0x823e9f40
	goto loc_823E9F40;
loc_823E9F38:
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r3,r9,9252
	ctx.r3.s64 = ctx.r9.s64 + 9252;
loc_823E9F40:
	// addi r8,r11,3
	ctx.r8.s64 = ctx.r11.s64 + 3;
	// mullw. r9,r10,r31
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(r31.s32);
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r7,r8,0,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC;
	// beq 0x823e9fcc
	if (ctx.cr0.eq) goto loc_823E9FCC;
	// mullw r8,r9,r7
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// mullw r4,r9,r11
	ctx.r4.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
loc_823E9F58:
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
	// ble cr6,0x823e9f94
	if (!ctx.cr6.gt) goto loc_823E9F94;
	// subf r5,r11,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r11.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_823E9F78:
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
	// bdnz 0x823e9f78
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823E9F78;
loc_823E9F94:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823e9fc4
	if (ctx.cr6.eq) goto loc_823E9FC4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823E9FA4:
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
	// bdnz 0x823e9fa4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823E9FA4;
loc_823E9FC4:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x823e9f58
	if (!ctx.cr6.eq) goto loc_823E9F58;
loc_823E9FCC:
	// lwz r10,44(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 44);
	// lhz r11,12(r24)
	ctx.r11.u64 = REX_LOAD_U16(r24.u32 + 12);
	// mullw r7,r10,r31
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(r31.s32);
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x823e9fe4
	if (!ctx.cr6.gt) goto loc_823E9FE4;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
loc_823E9FE4:
	// lwz r10,28(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 28);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823e9ffc
	if (!ctx.cr6.eq) goto loc_823E9FFC;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x823ea01c
	goto loc_823EA01C;
loc_823E9FFC:
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
	ctx.lr = 0x823EA014;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// srawi r11,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 31;
	// and r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 & ctx.r3.u64;
loc_823EA01C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ec0
	return;
}

DEFINE_REX_FUNC(sub_823FCE60) {
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
	ctx.lr = 0x823FCE68;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,416(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 416);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,280(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 280);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r30,448(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 448);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// slw r26,r10,r11
	r26.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823fceb4
	if (ctx.cr6.eq) goto loc_823FCEB4;
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823fceb4
	if (!ctx.cr6.eq) goto loc_823FCEB4;
	// bl 0x823fc908
	ctx.lr = 0x823FCEA0;
	sub_823FC908(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823fceb4
	if (!ctx.cr6.eq) goto loc_823FCEB4;
loc_823FCEA8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ed0
	return;
loc_823FCEB4:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// li r27,0
	r27.s64 = 0;
	// stw r31,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// lwz r10,360(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 360);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// lwz r4,12(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r5,16(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 16);
	// ble cr6,0x823fcf40
	if (!ctx.cr6.gt) goto loc_823FCF40;
loc_823FCEE4:
	// lwz r28,0(r29)
	r28.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bge cr6,0x823fcf0c
	if (!ctx.cr6.lt) goto loc_823FCF0C;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823fbf88
	ctx.lr = 0x823FCEFC;
	sub_823FBF88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823fcea8
	if (ctx.cr6.eq) goto loc_823FCEA8;
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r5,92(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
loc_823FCF0C:
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// sraw r11,r4,r5
	temp.u32 = ctx.r5.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r4.s32 < 0) & (((ctx.r4.s32 >> temp.u32) << temp.u32) != ctx.r4.s32);
	ctx.r11.s64 = ctx.r4.s32 >> temp.u32;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823fcf2c
	if (ctx.cr6.eq) goto loc_823FCF2C;
	// lhz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U16(r28.u32 + 0);
	// or r9,r10,r26
	ctx.r9.u64 = ctx.r10.u64 | r26.u64;
	// sth r9,0(r28)
	REX_STORE_U16(r28.u32 + 0, ctx.r9.u16);
loc_823FCF2C:
	// lwz r11,360(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 360);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823fcee4
	if (ctx.cr6.lt) goto loc_823FCEE4;
loc_823FCF40:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,24(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 24);
	// stw r8,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// stw r4,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r4.u32);
	// stw r5,16(r30)
	REX_STORE_U32(r30.u32 + 16, ctx.r5.u32);
	// stw r7,40(r30)
	REX_STORE_U32(r30.u32 + 40, ctx.r7.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_82401338) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82401340;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mullw r29,r4,r5
	r29.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r5.s32);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x823cd118
	ctx.lr = 0x82401358;
	sub_823CD118(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x82401388
	if (ctx.cr0.eq) goto loc_82401388;
	// divwu r11,r31,r30
	ctx.r11.u64 = uint32_t(r30.u32 ? r31.u32 / r30.u32 : 0);
	// twllei r30,0
	if (r30.s32 == 0 || r30.u32 < 0u) ppc_trap(ctx, base, 0);
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r30.s32);
	// subf. r11,r11,r31
	ctx.r11.u64 = r31.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82401378
	if (ctx.cr0.eq) goto loc_82401378;
	// twi 31,r0,22
	ppc_trap(ctx, base, 22);
loc_82401378:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d5870
	ctx.lr = 0x82401388;
	sub_822D5870(ctx, base);
loc_82401388:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82403AB8) {
	REX_FUNC_PROLOGUE();
	// lwz r10,36(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 36);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,40(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824043A8) {
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
	ctx.lr = 0x824043B0;
	// lwz r11,48(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 48);
	// lwz r9,52(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 52);
	// lwz r24,0(r8)
	r24.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r25,4(r8)
	r25.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// lwz r29,32(r7)
	r29.u64 = REX_LOAD_U32(ctx.r7.u32 + 32);
	// lwz r30,28(r7)
	r30.u64 = REX_LOAD_U32(ctx.r7.u32 + 28);
	// bge cr6,0x824043dc
	if (!ctx.cr6.lt) goto loc_824043DC;
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// addi r26,r11,-1
	r26.s64 = ctx.r11.s64 + -1;
	// b 0x824043e4
	goto loc_824043E4;
loc_824043DC:
	// lwz r11,44(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 44);
	// subf r26,r9,r11
	r26.u64 = ctx.r11.u64 - ctx.r9.u64;
loc_824043E4:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r27,r11,12352
	r27.s64 = ctx.r11.s64 + 12352;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r22,r10,r27
	r22.u64 = REX_LOAD_U32(ctx.r10.u32 + r27.u32);
	// lwzx r23,r11,r27
	r23.u64 = REX_LOAD_U32(ctx.r11.u32 + r27.u32);
loc_824043FC:
	// cmplwi cr6,r30,20
	ctx.cr6.compare<uint32_t>(r30.u32, 20, ctx.xer);
	// bge cr6,0x82404430
	if (!ctx.cr6.lt) goto loc_82404430;
	// subfic r11,r30,19
	ctx.xer.ca = r30.u32 <= 19;
	ctx.r11.u64 = static_cast<uint64_t>(19) - r30.u64;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82404414:
	// lbz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U8(r24.u32 + 0);
	// addi r25,r25,-1
	r25.s64 = r25.s64 + -1;
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// slw r11,r11,r30
	ctx.r11.u64 = r30.u8 & 0x20 ? 0 : (ctx.r11.u32 << (r30.u8 & 0x3F));
	// or r29,r11,r29
	r29.u64 = ctx.r11.u64 | r29.u64;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// bdnz 0x82404414
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82404414;
loc_82404430:
	// and r11,r22,r29
	ctx.r11.u64 = r22.u64 & r29.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r5
	ctx.r4.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lbzx r3,r11,r5
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82404460
	if (!ctx.cr0.eq) goto loc_82404460;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lbz r10,1(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 1);
	// srw r29,r29,r10
	r29.u64 = ctx.r10.u8 & 0x20 ? 0 : (r29.u32 >> (ctx.r10.u8 & 0x3F));
	// stb r11,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r11.u8);
	// subf r30,r10,r30
	r30.u64 = r30.u64 - ctx.r10.u64;
	// b 0x82404694
	goto loc_82404694;
loc_82404460:
	// lbz r11,1(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 1);
	// rlwinm. r31,r3,0,27,27
	r31.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// srw r10,r29,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (r29.u32 >> (ctx.r11.u8 & 0x3F));
	// subf r11,r11,r30
	ctx.r11.u64 = r30.u64 - ctx.r11.u64;
	// bne 0x824044b4
	if (!ctx.cr0.eq) goto loc_824044B4;
loc_82404474:
	// rlwinm. r31,r3,0,25,25
	r31.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x8240475c
	if (!ctx.cr0.eq) goto loc_8240475C;
	// rlwinm r31,r3,2,0,29
	r31.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,4(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwzx r31,r31,r27
	r31.u64 = REX_LOAD_U32(r31.u32 + r27.u32);
	// and r31,r31,r10
	r31.u64 = r31.u64 & ctx.r10.u64;
	// add r3,r31,r3
	ctx.r3.u64 = r31.u64 + ctx.r3.u64;
	// rlwinm r3,r3,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// lbzux r3,r4,r3
	ea = ctx.r4.u32 + ctx.r3.u32;
	ctx.r3.u64 = REX_LOAD_U8(ea);
	ctx.r4.u32 = ea;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82404680
	if (ctx.cr0.eq) goto loc_82404680;
	// lbz r31,1(r4)
	r31.u64 = REX_LOAD_U8(ctx.r4.u32 + 1);
	// rlwinm. r30,r3,0,27,27
	r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// srw r10,r10,r31
	ctx.r10.u64 = r31.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (r31.u8 & 0x3F));
	// subf r11,r31,r11
	ctx.r11.u64 = ctx.r11.u64 - r31.u64;
	// beq 0x82404474
	if (ctx.cr0.eq) goto loc_82404474;
loc_824044B4:
	// clrlwi r31,r3,28
	r31.u64 = ctx.r3.u32 & 0xF;
	// lwz r4,4(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// rlwinm r3,r31,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r11,r31,r11
	ctx.r11.u64 = ctx.r11.u64 - r31.u64;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// lwzx r3,r3,r27
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + r27.u32);
	// and r3,r3,r10
	ctx.r3.u64 = ctx.r3.u64 & ctx.r10.u64;
	// srw r10,r10,r31
	ctx.r10.u64 = r31.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (r31.u8 & 0x3F));
	// add r28,r3,r4
	r28.u64 = ctx.r3.u64 + ctx.r4.u64;
	// bge cr6,0x82404508
	if (!ctx.cr6.lt) goto loc_82404508;
	// subfic r4,r11,14
	ctx.xer.ca = ctx.r11.u32 <= 14;
	ctx.r4.u64 = static_cast<uint64_t>(14) - ctx.r11.u64;
	// rlwinm r4,r4,29,3,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
loc_824044EC:
	// lbz r4,0(r24)
	ctx.r4.u64 = REX_LOAD_U8(r24.u32 + 0);
	// addi r25,r25,-1
	r25.s64 = r25.s64 + -1;
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// slw r4,r4,r11
	ctx.r4.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r11.u8 & 0x3F));
	// or r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 | ctx.r10.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x824044ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824044EC;
loc_82404508:
	// and r4,r23,r10
	ctx.r4.u64 = r23.u64 & ctx.r10.u64;
	// rlwinm r4,r4,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r4,r6
	ctx.r4.u64 = ctx.r4.u64 + ctx.r6.u64;
	// lbz r3,0(r4)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// rlwinm. r30,r3,0,27,27
	r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// b 0x82404548
	goto loc_82404548;
loc_82404520:
	// rlwinm. r31,r3,0,25,25
	r31.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x824046fc
	if (!ctx.cr0.eq) goto loc_824046FC;
	// rlwinm r31,r3,2,0,29
	r31.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,4(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwzx r31,r31,r27
	r31.u64 = REX_LOAD_U32(r31.u32 + r27.u32);
	// and r31,r31,r10
	r31.u64 = r31.u64 & ctx.r10.u64;
	// add r3,r31,r3
	ctx.r3.u64 = r31.u64 + ctx.r3.u64;
	// rlwinm r3,r3,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// lbzux r3,r4,r3
	ea = ctx.r4.u32 + ctx.r3.u32;
	ctx.r3.u64 = REX_LOAD_U8(ea);
	ctx.r4.u32 = ea;
	// rlwinm. r31,r3,0,27,27
	r31.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
loc_82404548:
	// lbz r31,1(r4)
	r31.u64 = REX_LOAD_U8(ctx.r4.u32 + 1);
	// subf r11,r31,r11
	ctx.r11.u64 = ctx.r11.u64 - r31.u64;
	// srw r10,r10,r31
	ctx.r10.u64 = r31.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (r31.u8 & 0x3F));
	// beq 0x82404520
	if (ctx.cr0.eq) goto loc_82404520;
	// clrlwi r3,r3,28
	ctx.r3.u64 = ctx.r3.u32 & 0xF;
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x82404594
	if (!ctx.cr6.lt) goto loc_82404594;
	// subf r31,r11,r3
	r31.u64 = ctx.r3.u64 - ctx.r11.u64;
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// rlwinm r31,r31,29,3,31
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
loc_82404578:
	// lbz r31,0(r24)
	r31.u64 = REX_LOAD_U8(r24.u32 + 0);
	// addi r25,r25,-1
	r25.s64 = r25.s64 + -1;
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// slw r31,r31,r11
	r31.u64 = ctx.r11.u8 & 0x20 ? 0 : (r31.u32 << (ctx.r11.u8 & 0x3F));
	// or r10,r31,r10
	ctx.r10.u64 = r31.u64 | ctx.r10.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x82404578
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82404578;
loc_82404594:
	// rlwinm r21,r3,2,0,29
	r21.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r31,4(r4)
	r31.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// subf r30,r3,r11
	r30.u64 = ctx.r11.u64 - ctx.r3.u64;
	// lwz r4,40(r7)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r7.u32 + 40);
	// subf r26,r28,r26
	r26.u64 = r26.u64 - r28.u64;
	// srw r29,r10,r3
	r29.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r3.u8 & 0x3F));
	// lwzx r11,r21,r27
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + r27.u32);
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x82404650
	if (!ctx.cr6.lt) goto loc_82404650;
	// lwz r10,44(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 44);
loc_824045C8:
	// subf r3,r4,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r4.u64;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x824045c8
	if (ctx.cr6.lt) goto loc_824045C8;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82404620
	if (!ctx.cr6.gt) goto loc_82404620;
	// subf r4,r10,r28
	ctx.r4.u64 = r28.u64 - ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_824045EC:
	// lbzu r3,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r3.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r3,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r3.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bne 0x824045ec
	if (!ctx.cr0.eq) goto loc_824045EC;
	// lwz r11,40(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 40);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_82404608:
	// lbzu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stb r10,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bne 0x82404608
	if (!ctx.cr0.eq) goto loc_82404608;
	// b 0x8240469c
	goto loc_8240469C;
loc_82404620:
	// lbz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r10,r28,-2
	ctx.r10.s64 = r28.s64 + -2;
	// stb r4,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r4.u8);
	// lbzu r4,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r4.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r4,1(r9)
	ea = 1 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r4.u8);
	ctx.r9.u32 = ea;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_82404638:
	// lbzu r4,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r4.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r4,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r4.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bne 0x82404638
	if (!ctx.cr0.eq) goto loc_82404638;
	// b 0x8240469c
	goto loc_8240469C;
loc_82404650:
	// lbz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r10,r28,-2
	ctx.r10.s64 = r28.s64 + -2;
	// stb r4,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r4.u8);
	// lbzu r4,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r4.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r4,1(r9)
	ea = 1 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r4.u8);
	ctx.r9.u32 = ea;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_82404668:
	// lbzu r4,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r4.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r4,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r4.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bne 0x82404668
	if (!ctx.cr0.eq) goto loc_82404668;
	// b 0x8240469c
	goto loc_8240469C;
loc_82404680:
	// lwz r3,4(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lbz r4,1(r4)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r4.u32 + 1);
	// srw r29,r10,r4
	r29.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r4.u8 & 0x3F));
	// stb r3,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r3.u8);
	// subf r30,r4,r11
	r30.u64 = ctx.r11.u64 - ctx.r4.u64;
loc_82404694:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r26,r26,-1
	r26.s64 = r26.s64 + -1;
loc_8240469C:
	// cmplwi cr6,r26,258
	ctx.cr6.compare<uint32_t>(r26.u32, 258, ctx.xer);
	// blt cr6,0x824046ac
	if (ctx.cr6.lt) goto loc_824046AC;
	// cmplwi cr6,r25,10
	ctx.cr6.compare<uint32_t>(r25.u32, 10, ctx.xer);
	// bge cr6,0x824043fc
	if (!ctx.cr6.lt) goto loc_824043FC;
loc_824046AC:
	// lwz r11,4(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// rlwinm r10,r30,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 29) & 0x1FFFFFFF;
	// subf r11,r25,r11
	ctx.r11.u64 = ctx.r11.u64 - r25.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x824046c4
	if (!ctx.cr6.lt) goto loc_824046C4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_824046C4:
	// rlwinm r6,r11,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r29,32(r7)
	REX_STORE_U32(ctx.r7.u32 + 32, r29.u32);
	// subf r10,r11,r24
	ctx.r10.u64 = r24.u64 - ctx.r11.u64;
	// subf r6,r6,r30
	ctx.r6.u64 = r30.u64 - ctx.r6.u64;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + r25.u64;
	// stw r6,28(r7)
	REX_STORE_U32(ctx.r7.u32 + 28, ctx.r6.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r6,8(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// subf r11,r11,r6
	ctx.r11.u64 = ctx.r6.u64 - ctx.r11.u64;
	// stw r10,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x824047cc
	goto loc_824047CC;
loc_824046FC:
	// lwz r6,4(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// rlwinm r5,r11,29,3,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r4,r4,17424
	ctx.r4.s64 = ctx.r4.s64 + 17424;
	// subf r6,r25,r6
	ctx.r6.u64 = ctx.r6.u64 - r25.u64;
	// stw r4,24(r8)
	REX_STORE_U32(ctx.r8.u32 + 24, ctx.r4.u32);
	// cmplw cr6,r5,r6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x82404720
	if (!ctx.cr6.lt) goto loc_82404720;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
loc_82404720:
	// li r3,-3
	ctx.r3.s64 = -3;
loc_82404724:
	// rlwinm r5,r6,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r10,32(r7)
	REX_STORE_U32(ctx.r7.u32 + 32, ctx.r10.u32);
	// add r4,r6,r25
	ctx.r4.u64 = ctx.r6.u64 + r25.u64;
	// subf r10,r5,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r5.u64;
	// subf r11,r6,r24
	ctx.r11.u64 = r24.u64 - ctx.r6.u64;
	// stw r10,28(r7)
	REX_STORE_U32(ctx.r7.u32 + 28, ctx.r10.u32);
	// stw r4,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r4.u32);
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// stw r11,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// lwz r6,8(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// subf r10,r10,r6
	ctx.r10.u64 = ctx.r6.u64 - ctx.r10.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r10,8(r8)
	REX_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// b 0x824047d0
	goto loc_824047D0;
loc_8240475C:
	// rlwinm. r6,r3,0,26,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lwz r6,4(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// rlwinm r5,r11,29,3,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// subf r6,r25,r6
	ctx.r6.u64 = ctx.r6.u64 - r25.u64;
	// cmplw cr6,r5,r6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, ctx.xer);
	// beq 0x82404784
	if (ctx.cr0.eq) goto loc_82404784;
	// bge cr6,0x8240477c
	if (!ctx.cr6.lt) goto loc_8240477C;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
loc_8240477C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82404724
	goto loc_82404724;
loc_82404784:
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// addi r4,r4,17396
	ctx.r4.s64 = ctx.r4.s64 + 17396;
	// stw r4,24(r8)
	REX_STORE_U32(ctx.r8.u32 + 24, ctx.r4.u32);
	// bge cr6,0x82404798
	if (!ctx.cr6.lt) goto loc_82404798;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
loc_82404798:
	// stw r10,32(r7)
	REX_STORE_U32(ctx.r7.u32 + 32, ctx.r10.u32);
	// rlwinm r5,r6,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r6,r25
	ctx.r10.u64 = ctx.r6.u64 + r25.u64;
	// subf r5,r5,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r5.u64;
	// subf r11,r6,r24
	ctx.r11.u64 = r24.u64 - ctx.r6.u64;
	// stw r5,28(r7)
	REX_STORE_U32(ctx.r7.u32 + 28, ctx.r5.u32);
	// li r3,-3
	ctx.r3.s64 = -3;
	// stw r10,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r6,0(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// subf r10,r6,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r6.u64;
	// stw r11,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_824047CC:
	// stw r11,8(r8)
	REX_STORE_U32(ctx.r8.u32 + 8, ctx.r11.u32);
loc_824047D0:
	// stw r9,52(r7)
	REX_STORE_U32(ctx.r7.u32 + 52, ctx.r9.u32);
	// b 0x822d4ebc
	return;
}

DEFINE_REX_FUNC(sub_824176B0) {
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
	ctx.lr = 0x824176B8;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x822d4f38
	ctx.lr = 0x824176C0;
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
	// beq cr6,0x824176ec
	if (ctx.cr6.eq) goto loc_824176EC;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x82413040
	ctx.lr = 0x824176E8;
	sub_82413040(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_824176EC:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82417708
	if (ctx.cr6.eq) goto loc_82417708;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82413dd0
	ctx.lr = 0x82417704;
	sub_82413DD0(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_82417708:
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
	// bne 0x82417778
	if (!ctx.cr0.eq) goto loc_82417778;
	// li r29,0
	r29.s64 = 0;
	// li r30,1
	r30.s64 = 1;
	// b 0x82417780
	goto loc_82417780;
loc_82417778:
	// addi r29,r11,-1
	r29.s64 = ctx.r11.s64 + -1;
	// li r30,-1
	r30.s64 = -1;
loc_82417780:
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82417798
	if (ctx.cr6.eq) goto loc_82417798;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823dc658
	ctx.lr = 0x82417798;
	sub_823DC658(ctx, base);
loc_82417798:
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82417b34
	if (!ctx.cr6.gt) goto loc_82417B34;
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
loc_82417804:
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
	// beq cr6,0x82417a3c
	if (ctx.cr6.eq) goto loc_82417A3C;
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
loc_82417A3C:
	// cmpw cr6,r3,r30
	ctx.cr6.compare<int32_t>(ctx.r3.s32, r30.s32, ctx.xer);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// blt cr6,0x82417a4c
	if (ctx.cr6.lt) goto loc_82417A4C;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
loc_82417A4C:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82417a64
	if (!ctx.cr6.gt) goto loc_82417A64;
	// cmpw cr6,r3,r30
	ctx.cr6.compare<int32_t>(ctx.r3.s32, r30.s32, ctx.xer);
	// blt cr6,0x82417a68
	if (ctx.cr6.lt) goto loc_82417A68;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x82417a68
	goto loc_82417A68;
loc_82417A64:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82417A68:
	// cmpw cr6,r4,r30
	ctx.cr6.compare<int32_t>(ctx.r4.s32, r30.s32, ctx.xer);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// blt cr6,0x82417a78
	if (ctx.cr6.lt) goto loc_82417A78;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
loc_82417A78:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82417a90
	if (!ctx.cr6.gt) goto loc_82417A90;
	// cmpw cr6,r4,r30
	ctx.cr6.compare<int32_t>(ctx.r4.s32, r30.s32, ctx.xer);
	// blt cr6,0x82417a94
	if (ctx.cr6.lt) goto loc_82417A94;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// b 0x82417a94
	goto loc_82417A94;
loc_82417A90:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82417A94:
	// cmpw cr6,r5,r30
	ctx.cr6.compare<int32_t>(ctx.r5.s32, r30.s32, ctx.xer);
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// blt cr6,0x82417aa4
	if (ctx.cr6.lt) goto loc_82417AA4;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
loc_82417AA4:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82417abc
	if (!ctx.cr6.gt) goto loc_82417ABC;
	// cmpw cr6,r5,r30
	ctx.cr6.compare<int32_t>(ctx.r5.s32, r30.s32, ctx.xer);
	// blt cr6,0x82417ac0
	if (ctx.cr6.lt) goto loc_82417AC0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// b 0x82417ac0
	goto loc_82417AC0;
loc_82417ABC:
	// li r5,0
	ctx.r5.s64 = 0;
loc_82417AC0:
	// cmpw cr6,r6,r30
	ctx.cr6.compare<int32_t>(ctx.r6.s32, r30.s32, ctx.xer);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// blt cr6,0x82417ad0
	if (ctx.cr6.lt) goto loc_82417AD0;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
loc_82417AD0:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82417ae8
	if (!ctx.cr6.gt) goto loc_82417AE8;
	// cmpw cr6,r6,r30
	ctx.cr6.compare<int32_t>(ctx.r6.s32, r30.s32, ctx.xer);
	// blt cr6,0x82417aec
	if (ctx.cr6.lt) goto loc_82417AEC;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// b 0x82417aec
	goto loc_82417AEC;
loc_82417AE8:
	// li r6,0
	ctx.r6.s64 = 0;
loc_82417AEC:
	// extsw r10,r6
	ctx.r10.s64 = ctx.r6.s32;
	// extsw r7,r5
	ctx.r7.s64 = ctx.r5.s32;
	// rldicr r10,r10,16,47
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 16) & 0xFFFFFFFFFFFF0000;
	// extsw r6,r4
	ctx.r6.s64 = ctx.r4.s32;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// extsw r7,r3
	ctx.r7.s64 = ctx.r3.s32;
	// rldicr r10,r10,16,47
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 16) & 0xFFFFFFFFFFFF0000;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// or r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 | ctx.r6.u64;
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
	// blt cr6,0x82417804
	if (ctx.cr6.lt) goto loc_82417804;
loc_82417B34:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x822d4f84
	ctx.lr = 0x82417B40;
	// b 0x822d4ec4
	return;
}

DEFINE_REX_FUNC(sub_82426A28) {
	REX_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// subf r11,r4,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r4.u64;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// b 0x822d4fa0
	sub_822D4FA0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82427658) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x82427660;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// bl 0x82427100
	ctx.lr = 0x82427678;
	sub_82427100(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// stw r29,16(r30)
	REX_STORE_U32(r30.u32 + 16, r29.u32);
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(r28.s32, 1, ctx.xer);
	// addi r11,r11,-5872
	ctx.r11.s64 = ctx.r11.s64 + -5872;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// lwz r11,1416(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1416);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1416(r31)
	REX_STORE_U32(r31.u32 + 1416, ctx.r11.u32);
	// beq cr6,0x824276f4
	if (ctx.cr6.eq) goto loc_824276F4;
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(r28.s32, 2, ctx.xer);
	// beq cr6,0x824276d0
	if (ctx.cr6.eq) goto loc_824276D0;
	// cmpwi cr6,r28,3
	ctx.cr6.compare<int32_t>(r28.s32, 3, ctx.xer);
	// bne cr6,0x82427718
	if (!ctx.cr6.eq) goto loc_82427718;
	// lwz r11,1360(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1360);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82427718
	if (ctx.cr6.lt) goto loc_82427718;
	// li r11,30
	ctx.r11.s64 = 30;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,1364(r31)
	REX_STORE_U32(r31.u32 + 1364, ctx.r11.u32);
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// bl 0x8247c9b0
	ctx.lr = 0x824276D0;
	ppc_longjmp(ctx.r3.u32, ctx.r4.s32);
loc_824276D0:
	// lwz r11,1360(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1360);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82427718
	if (ctx.cr6.lt) goto loc_82427718;
	// li r11,28
	ctx.r11.s64 = 28;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,1364(r31)
	REX_STORE_U32(r31.u32 + 1364, ctx.r11.u32);
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// bl 0x8247c9b0
	ctx.lr = 0x824276F4;
	ppc_longjmp(ctx.r3.u32, ctx.r4.s32);
loc_824276F4:
	// lwz r11,1360(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1360);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82427718
	if (ctx.cr6.lt) goto loc_82427718;
	// li r11,29
	ctx.r11.s64 = 29;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,1364(r31)
	REX_STORE_U32(r31.u32 + 1364, ctx.r11.u32);
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// bl 0x8247c9b0
	ctx.lr = 0x82427718;
	ppc_longjmp(ctx.r3.u32, ctx.r4.s32);
loc_82427718:
	// lwz r29,1452(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 1452);
	// li r4,964
	ctx.r4.s64 = 964;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82412d18
	ctx.lr = 0x82427728;
	sub_82412D18(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r29.u32);
	// beq 0x8242774c
	if (ctx.cr0.eq) goto loc_8242774C;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82428d50
	ctx.lr = 0x82427744;
	sub_82428D50(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x82427750
	goto loc_82427750;
loc_8242774C:
	// li r29,0
	r29.s64 = 0;
loc_82427750:
	// lwz r11,2736(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2736);
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
	ctx.lr = 0x8242776C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824288c8
	ctx.lr = 0x8242777C;
	sub_824288C8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82427208
	ctx.lr = 0x82427788;
	sub_82427208(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8242A250) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lhz r9,2(r3)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 2);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// beq cr6,0x8242a274
	if (ctx.cr6.eq) goto loc_8242A274;
	// addi r9,r9,-2
	ctx.r9.s64 = ctx.r9.s64 + -2;
	// addic r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
loc_8242A274:
	// lhz r9,14(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 14);
	// lhz r8,16(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 16);
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// addi r8,r8,-32
	ctx.r8.s64 = ctx.r8.s64 + -32;
	// addic r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// subfe r9,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 & ctx.r10.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lhz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 7, ctx.xer);
	// beq cr6,0x8242a2b8
	if (ctx.cr6.eq) goto loc_8242A2B8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8242a314
	goto loc_8242A314;
loc_8242A2B8:
	// li r8,7
	ctx.r8.s64 = 7;
	// addi r10,r11,24
	ctx.r10.s64 = ctx.r11.s64 + 24;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// addi r8,r8,9588
	ctx.r8.s64 = ctx.r8.s64 + 9588;
loc_8242A2D0:
	// addi r6,r8,16
	ctx.r6.s64 = ctx.r8.s64 + 16;
	// lhzx r5,r9,r8
	ctx.r5.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r8.u32);
	// lhz r7,-2(r10)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + -2);
	// lhz r4,0(r10)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// subf r7,r7,r5
	ctx.r7.u64 = ctx.r5.u64 - ctx.r7.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lhzx r6,r9,r6
	ctx.r6.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r6.u32);
	// addic r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// subf r6,r4,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r4.u64;
	// subfe r7,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// and r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 & ctx.r3.u64;
	// subfe r6,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r6,r7
	ctx.r3.u64 = ctx.r6.u64 & ctx.r7.u64;
	// bdnz 0x8242a2d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242A2D0;
loc_8242A314:
	// lhz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 12);
	// mulli r8,r10,7
	ctx.r8.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(7));
	// lhz r7,18(r11)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 18);
	// subf r11,r8,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r8.u64;
	// rotlwi r10,r10,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// divw r11,r11,r10
	ctx.r11.u64 = uint32_t((ctx.r10.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r11.s32 / ctx.r10.s32 : 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// subf r11,r7,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r7.u64;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r10,r7,0
	ctx.xer.ca = ctx.r7.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r7.u64;
	// and r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 & ctx.r3.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 & ctx.r11.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82433BD0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// srawi r9,r11,12
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 12;
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// lfs f0,-25472(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -25472);
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

DEFINE_REX_FUNC(sub_824344E8) {
	REX_FUNC_PROLOGUE();
	// lwz r10,24(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8243453c
	if (ctx.cr6.eq) goto loc_8243453C;
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r3,0(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r9,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r9.u32);
	// beq cr6,0x82434518
	if (ctx.cr6.eq) goto loc_82434518;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r8,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r8.u32);
	// b 0x82434520
	goto loc_82434520;
loc_82434518:
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
loc_82434520:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r9,32(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// stw r10,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// blr 
	return;
loc_8243453C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82434FB0) {
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
	// lwz r11,88(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
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
	ctx.lr = 0x82434FDC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,184(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 184);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82434FF0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8243500C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

DEFINE_REX_FUNC(sub_82435AC0) {
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
	// bl 0x82435690
	ctx.lr = 0x82435AE0;
	sub_82435690(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82435b24
	if (ctx.cr0.eq) goto loc_82435B24;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82435b10
	if (ctx.cr6.eq) goto loc_82435B10;
	// stw r3,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// b 0x82435b14
	goto loc_82435B14;
loc_82435B10:
	// stw r3,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r3.u32);
loc_82435B14:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// stw r3,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r3.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
loc_82435B24:
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

DEFINE_REX_FUNC(sub_82437128) {
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
	// lwz r11,640(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 640);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82437190
	if (ctx.cr6.eq) goto loc_82437190;
	// lwz r11,684(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 684);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82437164
	if (ctx.cr6.eq) goto loc_82437164;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82437168
	goto loc_82437168;
loc_82437164:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_82437168:
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// beq cr6,0x8243717c
	if (ctx.cr6.eq) goto loc_8243717C;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
loc_8243717C:
	// addi r3,r31,180
	ctx.r3.s64 = r31.s64 + 180;
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,24(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x82434af8
	ctx.lr = 0x8243718C;
	sub_82434AF8(ctx, base);
	// b 0x824371ac
	goto loc_824371AC;
loc_82437190:
	// addi r3,r31,660
	ctx.r3.s64 = r31.s64 + 660;
	// bl 0x824344e8
	ctx.lr = 0x82437198;
	sub_824344E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,700
	ctx.r3.s64 = r31.s64 + 700;
	// bl 0x82435ac0
	ctx.lr = 0x824371A4;
	sub_82435AC0(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// stw r30,644(r31)
	REX_STORE_U32(r31.u32 + 644, r30.u32);
loc_824371AC:
	// stw r30,496(r31)
	REX_STORE_U32(r31.u32 + 496, r30.u32);
	// stw r30,500(r31)
	REX_STORE_U32(r31.u32 + 500, r30.u32);
	// stw r30,508(r31)
	REX_STORE_U32(r31.u32 + 508, r30.u32);
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

DEFINE_REX_FUNC(sub_82438AE0) {
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
	ctx.lr = 0x82438AE8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,512(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 512);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82438ba8
	if (!ctx.cr6.eq) goto loc_82438BA8;
	// bl 0x824382b0
	ctx.lr = 0x82438B00;
	sub_824382B0(ctx, base);
	// lbz r11,510(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 510);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// subf. r11,r3,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82438ba8
	if (ctx.cr0.eq) goto loc_82438BA8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82438b68
	if (ctx.cr6.eq) goto loc_82438B68;
	// addi r28,r30,544
	r28.s64 = r30.s64 + 544;
	// addi r29,r30,180
	r29.s64 = r30.s64 + 180;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
loc_82438B24:
	// lwz r11,24(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82438b38
	if (ctx.cr6.eq) goto loc_82438B38;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82438b3c
	goto loc_82438B3C;
loc_82438B38:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82438B3C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82438b4c
	if (ctx.cr6.eq) goto loc_82438B4C;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82438b50
	goto loc_82438B50;
loc_82438B4C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82438B50:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,0(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r4,32(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x82434af8
	ctx.lr = 0x82438B60;
	sub_82434AF8(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x82438b24
	if (!ctx.cr0.eq) goto loc_82438B24;
loc_82438B68:
	// lwz r11,568(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 568);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82438b7c
	if (ctx.cr6.eq) goto loc_82438B7C;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82438b80
	goto loc_82438B80;
loc_82438B7C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82438B80:
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x82438ba4
	if (!ctx.cr6.eq) goto loc_82438BA4;
	// li r4,254
	ctx.r4.s64 = 254;
	// lwz r3,516(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 516);
	// bl 0x8243bef0
	ctx.lr = 0x82438B98;
	sub_8243BEF0(ctx, base);
	// li r11,254
	ctx.r11.s64 = 254;
	// stb r11,510(r30)
	REX_STORE_U8(r30.u32 + 510, ctx.r11.u8);
	// b 0x82438ba8
	goto loc_82438BA8;
loc_82438BA4:
	// stb r27,510(r30)
	REX_STORE_U8(r30.u32 + 510, r27.u8);
loc_82438BA8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_8243B668) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,10720
	ctx.r10.s64 = ctx.r10.s64 + 10720;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r31,r3,4
	r31.s64 = ctx.r3.s64 + 4;
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// bl 0x8242d868
	ctx.lr = 0x8243B69C;
	sub_8242D868(ctx, base);
	// addi r3,r31,44
	ctx.r3.s64 = r31.s64 + 44;
	// bl 0x8242d868
	ctx.lr = 0x8243B6A4;
	sub_8242D868(ctx, base);
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x8242c4b8
	ctx.lr = 0x8243B6AC;
	sub_8242C4B8(ctx, base);
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

DEFINE_REX_FUNC(sub_8243C8C0) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x82443c50
	sub_82443C50(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8243C8E0) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x82443590
	sub_82443590(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8243C928) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x8243b508
	sub_8243B508(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8243CEA8) {
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
	// li r31,0
	r31.s64 = 0;
	// addi r10,r11,11052
	ctx.r10.s64 = ctx.r11.s64 + 11052;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r9,r4,16
	ctx.r9.s64 = ctx.r4.s64 + 16;
loc_8243CECC:
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8243ceec
	if (!ctx.cr0.eq) goto loc_8243CEEC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8243cecc
	if (!ctx.cr6.eq) goto loc_8243CECC;
loc_8243CEEC:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8243cefc
	if (!ctx.cr0.eq) goto loc_8243CEFC;
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// b 0x8243cf38
	goto loc_8243CF38;
loc_8243CEFC:
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r10,r10,11036
	ctx.r10.s64 = ctx.r10.s64 + 11036;
	// addi r8,r4,16
	ctx.r8.s64 = ctx.r4.s64 + 16;
loc_8243CF0C:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8243cf2c
	if (!ctx.cr0.eq) goto loc_8243CF2C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8243cf0c
	if (!ctx.cr6.eq) goto loc_8243CF0C;
loc_8243CF2C:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8243cf5c
	if (!ctx.cr0.eq) goto loc_8243CF5C;
	// addi r11,r3,36
	ctx.r11.s64 = ctx.r3.s64 + 36;
loc_8243CF38:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8243cf44
	if (!ctx.cr6.eq) goto loc_8243CF44;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8243CF44:
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8243CF58;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8243cf64
	goto loc_8243CF64;
loc_8243CF5C:
	// bl 0x8223c758
	ctx.lr = 0x8243CF60;
	sub_8223C758(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_8243CF64:
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

DEFINE_REX_FUNC(sub_82440668) {
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
	// lwz r11,204(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 204);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x824406fc
	if (!ctx.cr6.eq) goto loc_824406FC;
	// addi r9,r3,180
	ctx.r9.s64 = ctx.r3.s64 + 180;
loc_8244068C:
	// lwz r11,188(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 188);
	// xori r6,r11,1
	ctx.r6.u64 = ctx.r11.u64 ^ 1;
	// mulli r10,r11,56
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(56));
	// mulli r11,r6,56
	ctx.r11.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(56));
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
loc_824406AC:
	// mfmsr r7
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r7.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r8,0,r9
	ea = ctx.r9.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r8.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x824406d0
	if (!ctx.cr6.eq) goto loc_824406D0;
	// stwcx. r11,0,r9
	ea = ctx.r9.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x824406ac
	if (!ctx.cr0.eq) goto loc_824406AC;
	// b 0x824406d8
	goto loc_824406D8;
loc_824406D0:
	// stwcx. r8,0,r9
	ea = ctx.r9.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
loc_824406D8:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// lwsync 
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// bne cr6,0x824406f0
	if (!ctx.cr6.eq) goto loc_824406F0;
	// db16cyc 
	std::this_thread::yield();
	// b 0x8244068c
	goto loc_8244068C;
loc_824406F0:
	// lwz r11,188(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 188);
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// stw r11,188(r31)
	REX_STORE_U32(r31.u32 + 188, ctx.r11.u32);
loc_824406FC:
	// lwz r11,188(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 188);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r5,56
	ctx.r5.s64 = 56;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// mulli r11,r11,56
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(56));
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// bl 0x822d4fa0
	ctx.lr = 0x8244071C;
	sub_822D4FA0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,204(r31)
	REX_STORE_U32(r31.u32 + 204, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_82443000) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-32761
	ctx.r10.s64 = -2147024896;
	// ori r10,r10,14
	ctx.r10.u64 = ctx.r10.u64 | 14;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// ori r10,r10,16385
	ctx.r10.u64 = ctx.r10.u64 | 16385;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// srawi r10,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 16;
	// clrlwi r10,r10,19
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFF;
	// cmpwi cr6,r10,2198
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2198, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-30600
	ctx.r10.s64 = -2005401600;
	// ori r10,r10,120
	ctx.r10.u64 = ctx.r10.u64 | 120;
	// subf. r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82443080
	if (ctx.cr0.eq) goto loc_82443080;
	// cmplwi cr6,r11,30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 30, ctx.xer);
	// beq cr6,0x82443080
	if (ctx.cr6.eq) goto loc_82443080;
	// lis r10,15
	ctx.r10.s64 = 983040;
	// ori r10,r10,65417
	ctx.r10.u64 = ctx.r10.u64 | 65417;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82443080
	if (ctx.cr6.eq) goto loc_82443080;
	// lis r10,30
	ctx.r10.s64 = 1966080;
	// ori r10,r10,65417
	ctx.r10.u64 = ctx.r10.u64 | 65417;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,-30570
	ctx.r11.s64 = -2003435520;
	// ori r11,r11,3
	ctx.r11.u64 = ctx.r11.u64 | 3;
	// b 0x82443088
	goto loc_82443088;
loc_82443080:
	// lis r11,-30570
	ctx.r11.s64 = -2003435520;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
loc_82443088:
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82446A78) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r10,316(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 316);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82446a9c
	if (ctx.cr6.eq) goto loc_82446A9C;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82446a9c
	if (!ctx.cr6.gt) goto loc_82446A9C;
	// rlwinm r3,r3,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// blr 
	return;
loc_82446A9C:
	// lwz r10,324(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 324);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lwz r10,332(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 332);
	// lwz r9,340(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 340);
	// mullw r8,r10,r3
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r3.s32);
	// lwz r7,328(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 328);
	// subf r6,r9,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r9.u64;
	// divw r11,r6,r7
	ctx.r11.u64 = uint32_t((ctx.r7.s32 && !(ctx.r6.s32 == INT32_MIN && ctx.r7.s32 == -1)) ? ctx.r6.s32 / ctx.r7.s32 : 0);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8244AC10) {
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
	ctx.lr = 0x8244AC18;
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r24,0
	r24.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r18,r7
	r18.u64 = ctx.r7.u64;
	// mr r21,r8
	r21.u64 = ctx.r8.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r28,r24
	r28.u64 = r24.u64;
	// mr r26,r24
	r26.u64 = r24.u64;
	// beq cr6,0x8244b538
	if (ctx.cr6.eq) goto loc_8244B538;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8244b538
	if (ctx.cr6.eq) goto loc_8244B538;
	// lhz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 0);
	// mr r19,r24
	r19.u64 = r24.u64;
	// addi r11,r11,-352
	ctx.r11.s64 = ctx.r11.s64 + -352;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x8244affc
	if (ctx.cr6.gt) goto loc_8244AFFC;
	// li r20,1
	r20.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8244ad00
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8244AD00;
	// bdzf 4*cr6+eq,0x8244ad08
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8244AD08;
	// bdzf 4*cr6+eq,0x8244ad10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8244AD10;
	// bdzf 4*cr6+eq,0x8244affc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8244AFFC;
	// bdzf 4*cr6+eq,0x8244ad1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8244AD1C;
	// bdzf 4*cr6+eq,0x8244ad2c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8244AD2C;
	// bne cr6,0x8244ad3c
	if (!ctx.cr6.eq) goto loc_8244AD3C;
	// mr r30,r20
	r30.u64 = r20.u64;
loc_8244AC90:
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82445760
	ctx.lr = 0x8244ACA4;
	sub_82445760(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8244b540
	if (ctx.cr6.lt) goto loc_8244B540;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82445528
	ctx.lr = 0x8244ACB8;
	sub_82445528(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8244b540
	if (ctx.cr6.lt) goto loc_8244B540;
	// bl 0x82462940
	ctx.lr = 0x8244ACC8;
	sub_82462940(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8244b498
	if (ctx.cr6.eq) goto loc_8244B498;
	// lis r11,-32185
	ctx.r11.s64 = -2109276160;
	// lis r10,-32208
	ctx.r10.s64 = -2110783488;
	// addi r9,r11,-6504
	ctx.r9.s64 = ctx.r11.s64 + -6504;
	// addi r8,r10,-432
	ctx.r8.s64 = ctx.r10.s64 + -432;
	// stw r9,484(r3)
	REX_STORE_U32(ctx.r3.u32 + 484, ctx.r9.u32);
	// stw r8,712(r31)
	REX_STORE_U32(r31.u32 + 712, ctx.r8.u32);
loc_8244ACF0:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x8244ad50
	if (ctx.cr6.eq) goto loc_8244AD50;
	// lwz r11,12(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 12);
	// b 0x8244ad54
	goto loc_8244AD54;
loc_8244AD00:
	// li r30,2
	r30.s64 = 2;
	// b 0x8244ac90
	goto loc_8244AC90;
loc_8244AD08:
	// li r30,3
	r30.s64 = 3;
	// b 0x8244ac90
	goto loc_8244AC90;
loc_8244AD10:
	// li r30,3
	r30.s64 = 3;
	// mr r19,r20
	r19.u64 = r20.u64;
	// b 0x8244ac90
	goto loc_8244AC90;
loc_8244AD1C:
	// li r20,1
	r20.s64 = 1;
	// li r30,2
	r30.s64 = 2;
	// mr r26,r20
	r26.u64 = r20.u64;
	// b 0x8244acf0
	goto loc_8244ACF0;
loc_8244AD2C:
	// li r20,1
	r20.s64 = 1;
	// li r30,3
	r30.s64 = 3;
	// mr r26,r20
	r26.u64 = r20.u64;
	// b 0x8244acf0
	goto loc_8244ACF0;
loc_8244AD3C:
	// li r20,1
	r20.s64 = 1;
	// li r30,3
	r30.s64 = 3;
	// mr r26,r20
	r26.u64 = r20.u64;
	// mr r19,r20
	r19.u64 = r20.u64;
	// b 0x8244acf0
	goto loc_8244ACF0;
loc_8244AD50:
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
loc_8244AD54:
	// stw r11,704(r31)
	REX_STORE_U32(r31.u32 + 704, ctx.r11.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// stw r11,708(r31)
	REX_STORE_U32(r31.u32 + 708, ctx.r11.u32);
	// lhz r6,20(r25)
	ctx.r6.u64 = REX_LOAD_U16(r25.u32 + 20);
	// lwz r3,4(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 4);
	// lwz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 8);
	// rlwinm r4,r11,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x8246e320
	ctx.lr = 0x8244AD74;
	sub_8246E320(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8244affc
	if (!ctx.cr6.gt) goto loc_8244AFFC;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// addi r11,r31,476
	ctx.r11.s64 = r31.s64 + 476;
	// beq cr6,0x8244adac
	if (ctx.cr6.eq) goto loc_8244ADAC;
	// li r8,7
	ctx.r8.s64 = 7;
	// addi r10,r27,-4
	ctx.r10.s64 = r27.s64 + -4;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8244AD9C:
	// lwzu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x8244ad9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8244AD9C;
	// b 0x8244adc4
	goto loc_8244ADC4;
loc_8244ADAC:
	// li r9,7
	ctx.r9.s64 = 7;
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8244ADBC:
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8244adbc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8244ADBC;
loc_8244ADC4:
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r27,480(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 480);
	// rlwinm r8,r10,0,22,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x200;
	// mr r22,r10
	r22.u64 = ctx.r10.u64;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8244ade4
	if (ctx.cr6.eq) goto loc_8244ADE4;
	// stw r20,412(r31)
	REX_STORE_U32(r31.u32 + 412, r20.u32);
loc_8244ADE4:
	// lhz r8,500(r31)
	ctx.r8.u64 = REX_LOAD_U16(r31.u32 + 500);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8244ae04
	if (ctx.cr6.eq) goto loc_8244AE04;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// ori r8,r10,128
	ctx.r8.u64 = ctx.r10.u64 | 128;
	// ori r22,r9,128
	r22.u64 = ctx.r9.u64 | 128;
	// sth r8,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
loc_8244AE04:
	// lhz r10,14(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 14);
	// lwz r9,16(r23)
	ctx.r9.u64 = REX_LOAD_U32(r23.u32 + 16);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r8,r8,7
	ctx.r8.s64 = ctx.r8.s64 + 7;
	// rlwinm r8,r8,29,3,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFF;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x8244ae24
	if (ctx.cr6.gt) goto loc_8244AE24;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_8244AE24:
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// lwz r29,20(r23)
	r29.u64 = REX_LOAD_U32(r23.u32 + 20);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r17,0(r23)
	r17.u64 = REX_LOAD_U32(r23.u32 + 0);
	// lhz r16,22(r25)
	r16.u64 = REX_LOAD_U16(r25.u32 + 22);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lhz r15,20(r25)
	r15.u64 = REX_LOAD_U16(r25.u32 + 20);
	// lhz r26,12(r25)
	r26.u64 = REX_LOAD_U16(r25.u32 + 12);
	// lwz r30,8(r25)
	r30.u64 = REX_LOAD_U32(r25.u32 + 8);
	// lwz r14,16(r25)
	r14.u64 = REX_LOAD_U32(r25.u32 + 16);
	// lhz r8,2(r25)
	ctx.r8.u64 = REX_LOAD_U16(r25.u32 + 2);
	// lwz r7,4(r25)
	ctx.r7.u64 = REX_LOAD_U32(r25.u32 + 4);
	// stw r11,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// stw r29,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r29.u32);
	// stw r17,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r17.u32);
	// sth r16,118(r1)
	REX_STORE_U16(ctx.r1.u32 + 118, r16.u16);
	// sth r15,110(r1)
	REX_STORE_U16(ctx.r1.u32 + 110, r15.u16);
	// stw r26,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r26.u32);
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// stw r14,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r14.u32);
	// bl 0x82463388
	ctx.lr = 0x8244AE78;
	sub_82463388(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8244b540
	if (ctx.cr6.lt) goto loc_8244B540;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822ff460
	ctx.lr = 0x8244AE8C;
	sub_822FF460(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bgt cr6,0x8244affc
	if (ctx.cr6.gt) goto loc_8244AFFC;
	// lhz r11,34(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 34);
	// mulli r3,r11,1776
	ctx.r3.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(1776));
	// bl 0x82460ed8
	ctx.lr = 0x8244AEA4;
	sub_82460ED8(ctx, base);
	// stw r3,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8244b498
	if (ctx.cr6.eq) goto loc_8244B498;
	// lhz r11,34(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 34);
	// li r4,0
	ctx.r4.s64 = 0;
	// mulli r5,r11,1776
	ctx.r5.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(1776));
	// bl 0x822d5870
	ctx.lr = 0x8244AEC0;
	sub_822D5870(ctx, base);
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82461560
	ctx.lr = 0x8244AECC;
	sub_82461560(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8244b540
	if (ctx.cr6.lt) goto loc_8244B540;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x82445638
	ctx.lr = 0x8244AEE4;
	sub_82445638(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8244b540
	if (ctx.cr6.lt) goto loc_8244B540;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x82461b08
	ctx.lr = 0x8244AEFC;
	sub_82461B08(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8244b540
	if (ctx.cr6.lt) goto loc_8244B540;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,320(r28)
	REX_STORE_U32(r28.u32 + 320, ctx.r11.u32);
	// bl 0x82448890
	ctx.lr = 0x8244AF18;
	sub_82448890(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8244b540
	if (ctx.cr6.lt) goto loc_8244B540;
	// lwz r11,588(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 588);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8244af4c
	if (ctx.cr6.eq) goto loc_8244AF4C;
	// lis r11,-32185
	ctx.r11.s64 = -2109276160;
	// stw r24,516(r31)
	REX_STORE_U32(r31.u32 + 516, r24.u32);
	// lis r10,-32185
	ctx.r10.s64 = -2109276160;
	// addi r9,r11,-7432
	ctx.r9.s64 = ctx.r11.s64 + -7432;
	// addi r8,r10,-7688
	ctx.r8.s64 = ctx.r10.s64 + -7688;
	// stw r9,512(r31)
	REX_STORE_U32(r31.u32 + 512, ctx.r9.u32);
	// stw r8,484(r28)
	REX_STORE_U32(r28.u32 + 484, ctx.r8.u32);
loc_8244AF4C:
	// stw r24,420(r31)
	REX_STORE_U32(r31.u32 + 420, r24.u32);
	// stw r24,352(r31)
	REX_STORE_U32(r31.u32 + 352, r24.u32);
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 4);
	// stw r11,360(r31)
	REX_STORE_U32(r31.u32 + 360, ctx.r11.u32);
	// lwz r7,360(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 360);
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 8);
	// stw r11,364(r31)
	REX_STORE_U32(r31.u32 + 364, ctx.r11.u32);
	// lhz r10,34(r28)
	ctx.r10.u64 = REX_LOAD_U16(r28.u32 + 34);
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x8244af80
	if (!ctx.cr6.eq) goto loc_8244AF80;
	// lwz r10,104(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 104);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8244af90
	if (ctx.cr6.eq) goto loc_8244AF90;
loc_8244AF80:
	// lwz r11,60(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x8244affc
	if (!ctx.cr6.gt) goto loc_8244AFFC;
	// stw r20,352(r31)
	REX_STORE_U32(r31.u32 + 352, r20.u32);
loc_8244AF90:
	// lwz r11,352(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 352);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8244b0b4
	if (!ctx.cr6.eq) goto loc_8244B0B4;
	// rlwinm r11,r22,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8244afac
	if (ctx.cr6.eq) goto loc_8244AFAC;
	// stw r20,420(r31)
	REX_STORE_U32(r31.u32 + 420, r20.u32);
loc_8244AFAC:
	// lwz r11,420(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 420);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8244afcc
	if (!ctx.cr6.eq) goto loc_8244AFCC;
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// bne cr6,0x8244afcc
	if (!ctx.cr6.eq) goto loc_8244AFCC;
	// lhz r11,34(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 34);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bgt cr6,0x8244afd0
	if (ctx.cr6.gt) goto loc_8244AFD0;
loc_8244AFCC:
	// stw r24,420(r31)
	REX_STORE_U32(r31.u32 + 420, r24.u32);
loc_8244AFD0:
	// lwz r11,420(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 420);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8244b00c
	if (!ctx.cr6.eq) goto loc_8244B00C;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r8,364(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 364);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,104(r28)
	ctx.r6.u64 = REX_LOAD_U32(r28.u32 + 104);
	// lhz r5,34(r28)
	ctx.r5.u64 = REX_LOAD_U16(r28.u32 + 34);
	// bl 0x82449980
	ctx.lr = 0x8244AFF4;
	sub_82449980(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8244b0b4
	if (ctx.cr6.eq) goto loc_8244B0B4;
loc_8244AFFC:
	// lis r29,-32764
	r29.s64 = -2147221504;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x822d4ea0
	return;
loc_8244B00C:
	// stw r24,424(r31)
	REX_STORE_U32(r31.u32 + 424, r24.u32);
	// lhz r5,34(r28)
	ctx.r5.u64 = REX_LOAD_U16(r28.u32 + 34);
	// cmplwi cr6,r5,6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 6, ctx.xer);
	// bne cr6,0x8244b028
	if (!ctx.cr6.eq) goto loc_8244B028;
	// lwz r11,104(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 104);
	// cmplwi cr6,r11,63
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 63, ctx.xer);
	// beq cr6,0x8244b050
	if (ctx.cr6.eq) goto loc_8244B050;
loc_8244B028:
	// li r8,63
	ctx.r8.s64 = 63;
	// lwz r6,104(r28)
	ctx.r6.u64 = REX_LOAD_U32(r28.u32 + 104);
	// li r7,6
	ctx.r7.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82449980
	ctx.lr = 0x8244B040;
	sub_82449980(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8244b540
	if (ctx.cr6.lt) goto loc_8244B540;
	// stw r20,424(r31)
	REX_STORE_U32(r31.u32 + 424, r20.u32);
loc_8244B050:
	// li r3,168
	ctx.r3.s64 = 168;
	// bl 0x82460ed8
	ctx.lr = 0x8244B058;
	sub_82460ED8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,428(r31)
	REX_STORE_U32(r31.u32 + 428, ctx.r3.u32);
	// beq cr6,0x8244b498
	if (ctx.cr6.eq) goto loc_8244B498;
	// bl 0x824638e0
	ctx.lr = 0x8244B068;
	sub_824638E0(ctx, base);
	// li r11,1000
	ctx.r11.s64 = 1000;
	// li r7,1000
	ctx.r7.s64 = 1000;
	// lwz r3,428(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 428);
	// stw r11,432(r31)
	REX_STORE_U32(r31.u32 + 432, ctx.r11.u32);
	// li r4,40
	ctx.r4.s64 = 40;
	// lwz r5,452(r28)
	ctx.r5.u64 = REX_LOAD_U32(r28.u32 + 452);
	// lhz r11,110(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 110);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// slw r11,r20,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (r20.u32 << (ctx.r10.u8 & 0x3F));
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.r8.u64);
	// lfd f0,144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// bl 0x824639f0
	ctx.lr = 0x8244B0A8;
	sub_824639F0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8244b540
	if (ctx.cr6.lt) goto loc_8244B540;
loc_8244B0B4:
	// stw r24,448(r31)
	REX_STORE_U32(r31.u32 + 448, r24.u32);
	// stw r24,468(r31)
	REX_STORE_U32(r31.u32 + 468, r24.u32);
	// stw r24,464(r31)
	REX_STORE_U32(r31.u32 + 464, r24.u32);
	// stw r24,460(r31)
	REX_STORE_U32(r31.u32 + 460, r24.u32);
	// stw r24,440(r31)
	REX_STORE_U32(r31.u32 + 440, r24.u32);
	// lwz r11,60(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x8244b128
	if (!ctx.cr6.gt) goto loc_8244B128;
	// lhz r11,34(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 34);
	// mullw r10,r11,r11
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r11.s32);
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82460ed8
	ctx.lr = 0x8244B0E4;
	sub_82460ED8(ctx, base);
	// stw r3,448(r31)
	REX_STORE_U32(r31.u32 + 448, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8244b498
	if (ctx.cr6.eq) goto loc_8244B498;
	// lhz r11,34(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 34);
	// mullw r10,r11,r11
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r11.s32);
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82460ed8
	ctx.lr = 0x8244B100;
	sub_82460ED8(ctx, base);
	// stw r3,464(r31)
	REX_STORE_U32(r31.u32 + 464, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8244b498
	if (ctx.cr6.eq) goto loc_8244B498;
	// lhz r11,34(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 34);
	// mullw r10,r11,r11
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r11.s32);
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82460ed8
	ctx.lr = 0x8244B11C;
	sub_82460ED8(ctx, base);
	// stw r3,468(r31)
	REX_STORE_U32(r31.u32 + 468, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8244b498
	if (ctx.cr6.eq) goto loc_8244B498;
loc_8244B128:
	// lhz r11,34(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 34);
	// lwz r10,360(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 360);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x8244b13c
	if (ctx.cr6.gt) goto loc_8244B13C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8244B13C:
	// lwz r10,424(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 424);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8244b154
	if (ctx.cr6.eq) goto loc_8244B154;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bgt cr6,0x8244b154
	if (ctx.cr6.gt) goto loc_8244B154;
	// li r11,6
	ctx.r11.s64 = 6;
loc_8244B154:
	// rlwinm r30,r11,2,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82460ed8
	ctx.lr = 0x8244B160;
	sub_82460ED8(ctx, base);
	// stw r3,380(r31)
	REX_STORE_U32(r31.u32 + 380, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8244b498
	if (ctx.cr6.eq) goto loc_8244B498;
	// stw r3,384(r31)
	REX_STORE_U32(r31.u32 + 384, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82460ed8
	ctx.lr = 0x8244B178;
	sub_82460ED8(ctx, base);
	// stw r3,388(r31)
	REX_STORE_U32(r31.u32 + 388, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8244b498
	if (ctx.cr6.eq) goto loc_8244B498;
	// stw r3,392(r31)
	REX_STORE_U32(r31.u32 + 392, ctx.r3.u32);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82445988
	ctx.lr = 0x8244B194;
	sub_82445988(ctx, base);
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// stw r24,316(r31)
	REX_STORE_U32(r31.u32 + 316, r24.u32);
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r24,324(r31)
	REX_STORE_U32(r31.u32 + 324, r24.u32);
	// stw r24,320(r31)
	REX_STORE_U32(r31.u32 + 320, r24.u32);
	// stw r11,336(r31)
	REX_STORE_U32(r31.u32 + 336, ctx.r11.u32);
	// lwz r11,452(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 452);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r5,r10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8244b1c4
	if (!ctx.cr6.eq) goto loc_8244B1C4;
	// stw r20,316(r31)
	REX_STORE_U32(r31.u32 + 316, r20.u32);
	// b 0x8244b1e0
	goto loc_8244B1E0;
loc_8244B1C4:
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8244b1e0
	if (ctx.cr6.eq) goto loc_8244B1E0;
	// stw r20,324(r31)
	REX_STORE_U32(r31.u32 + 324, r20.u32);
	// lwz r11,452(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 452);
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8244b1e0
	if (!ctx.cr6.lt) goto loc_8244B1E0;
	// stw r20,320(r31)
	REX_STORE_U32(r31.u32 + 320, r20.u32);
loc_8244B1E0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,452(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 452);
	// bl 0x82446a28
	ctx.lr = 0x8244B1EC;
	sub_82446A28(ctx, base);
	// lwz r11,332(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 332);
	// lwz r10,328(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 328);
	// cmpwi cr6,r10,10000
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10000, ctx.xer);
	// stw r11,340(r31)
	REX_STORE_U32(r31.u32 + 340, ctx.r11.u32);
	// bge cr6,0x8244affc
	if (!ctx.cr6.lt) goto loc_8244AFFC;
	// cmpwi cr6,r11,10000
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10000, ctx.xer);
	// bge cr6,0x8244affc
	if (!ctx.cr6.lt) goto loc_8244AFFC;
	// lwz r11,316(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 316);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8244b220
	if (!ctx.cr6.eq) goto loc_8244B220;
	// lwz r11,324(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 324);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8244b280
	if (ctx.cr6.eq) goto loc_8244B280;
loc_8244B220:
	// lwz r11,360(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 360);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82460ed8
	ctx.lr = 0x8244B22C;
	sub_82460ED8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,344(r31)
	REX_STORE_U32(r31.u32 + 344, ctx.r3.u32);
	// beq cr6,0x8244b498
	if (ctx.cr6.eq) goto loc_8244B498;
	// lwz r11,360(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 360);
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8244b268
	if (!ctx.cr6.gt) goto loc_8244B268;
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
loc_8244B24C:
	// lwz r9,344(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 344);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r24,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, r24.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r8,360(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 360);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8244b24c
	if (ctx.cr6.lt) goto loc_8244B24C;
loc_8244B268:
	// lwz r11,360(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 360);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82460ed8
	ctx.lr = 0x8244B274;
	sub_82460ED8(ctx, base);
	// stw r3,348(r31)
	REX_STORE_U32(r31.u32 + 348, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8244b498
	if (ctx.cr6.eq) goto loc_8244B498;
loc_8244B280:
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// rlwinm r10,r22,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 0) & 0x80;
	// addi r9,r11,-23040
	ctx.r9.s64 = ctx.r11.s64 + -23040;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,492(r28)
	REX_STORE_U32(r28.u32 + 492, ctx.r9.u32);
	// stw r24,472(r31)
	REX_STORE_U32(r31.u32 + 472, r24.u32);
	// beq cr6,0x8244b2b8
	if (ctx.cr6.eq) goto loc_8244B2B8;
	// lhz r11,500(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 500);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// extsh r4,r11
	ctx.r4.s64 = ctx.r11.s16;
	// bl 0x8244a1e8
	ctx.lr = 0x8244B2AC;
	sub_8244A1E8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8244b540
	if (ctx.cr6.lt) goto loc_8244B540;
loc_8244B2B8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82445a00
	ctx.lr = 0x8244B2C0;
	sub_82445A00(ctx, base);
	// lhz r11,2(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 2);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8244b2d8
	if (!ctx.cr6.eq) goto loc_8244B2D8;
	// lis r11,-32185
	ctx.r11.s64 = -2109276160;
	// addi r10,r11,-16216
	ctx.r10.s64 = ctx.r11.s64 + -16216;
	// b 0x8244b2e0
	goto loc_8244B2E0;
loc_8244B2D8:
	// lis r11,-32185
	ctx.r11.s64 = -2109276160;
	// addi r10,r11,-16088
	ctx.r10.s64 = ctx.r11.s64 + -16088;
loc_8244B2E0:
	// stw r10,508(r31)
	REX_STORE_U32(r31.u32 + 508, ctx.r10.u32);
	// addi r25,r31,224
	r25.s64 = r31.s64 + 224;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82319550
	ctx.lr = 0x8244B2F4;
	sub_82319550(ctx, base);
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x8244b30c
	if (ctx.cr6.eq) goto loc_8244B30C;
	// lwz r11,4(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 4);
	// stw r11,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r11.u32);
	// lwz r10,8(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 8);
	// stw r10,228(r31)
	REX_STORE_U32(r31.u32 + 228, ctx.r10.u32);
loc_8244B30C:
	// lwz r11,288(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 288);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8244b344
	if (!ctx.cr6.eq) goto loc_8244B344;
	// lwz r11,320(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 320);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r8,r10,-24744
	ctx.r8.s64 = ctx.r10.s64 + -24744;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// addi r6,r9,-6264
	ctx.r6.s64 = ctx.r9.s64 + -6264;
	// stw r8,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r8.u32);
	// addi r5,r7,-5312
	ctx.r5.s64 = ctx.r7.s64 + -5312;
	// lwz r4,320(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 320);
	// stw r6,28(r4)
	REX_STORE_U32(ctx.r4.u32 + 28, ctx.r6.u32);
	// b 0x8244b398
	goto loc_8244B398;
loc_8244B344:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8244b368
	if (!ctx.cr6.eq) goto loc_8244B368;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// addi r8,r10,-11600
	ctx.r8.s64 = ctx.r10.s64 + -11600;
	// addi r7,r9,7016
	ctx.r7.s64 = ctx.r9.s64 + 7016;
	// addi r5,r6,8344
	ctx.r5.s64 = ctx.r6.s64 + 8344;
	// b 0x8244b388
	goto loc_8244B388;
loc_8244B368:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8244b538
	if (!ctx.cr6.eq) goto loc_8244B538;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// addi r8,r10,-23000
	ctx.r8.s64 = ctx.r10.s64 + -23000;
	// addi r7,r9,-2616
	ctx.r7.s64 = ctx.r9.s64 + -2616;
	// addi r5,r6,56
	ctx.r5.s64 = ctx.r6.s64 + 56;
loc_8244B388:
	// lwz r11,320(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 320);
	// stw r8,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r8.u32);
	// lwz r4,320(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 320);
	// stw r7,28(r4)
	REX_STORE_U32(ctx.r4.u32 + 28, ctx.r7.u32);
loc_8244B398:
	// lwz r3,320(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 320);
	// li r11,-2
	ctx.r11.s64 = -2;
	// li r10,3
	ctx.r10.s64 = 3;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// stw r5,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r5.u32);
	// stw r11,4(r28)
	REX_STORE_U32(r28.u32 + 4, ctx.r11.u32);
	// stw r10,72(r28)
	REX_STORE_U32(r28.u32 + 72, ctx.r10.u32);
	// beq cr6,0x8244b3c0
	if (ctx.cr6.eq) goto loc_8244B3C0;
	// bl 0x82246ca8
	ctx.lr = 0x8244B3BC;
	sub_82246CA8(ctx, base);
	// stw r3,0(r21)
	REX_STORE_U32(r21.u32 + 0, ctx.r3.u32);
loc_8244B3C0:
	// stw r24,116(r31)
	REX_STORE_U32(r31.u32 + 116, r24.u32);
	// addi r27,r31,120
	r27.s64 = r31.s64 + 120;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lhz r4,34(r28)
	ctx.r4.u64 = REX_LOAD_U16(r28.u32 + 34);
	// bl 0x82464f10
	ctx.lr = 0x8244B3D4;
	sub_82464F10(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8244b540
	if (ctx.cr6.lt) goto loc_8244B540;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r26,r24
	r26.u64 = r24.u64;
	// lhz r10,34(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 34);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8244b460
	if (ctx.cr6.eq) goto loc_8244B460;
	// mr r30,r24
	r30.u64 = r24.u64;
loc_8244B3F8:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// stw r24,144(r11)
	REX_STORE_U32(ctx.r11.u32 + 144, r24.u32);
	// lhz r10,34(r28)
	ctx.r10.u64 = REX_LOAD_U16(r28.u32 + 34);
	// mullw r9,r10,r10
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r10.s32);
	// rlwinm r3,r9,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82460ed8
	ctx.lr = 0x8244B414;
	sub_82460ED8(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// add r8,r30,r11
	ctx.r8.u64 = r30.u64 + ctx.r11.u64;
	// stw r3,148(r8)
	REX_STORE_U32(ctx.r8.u32 + 148, ctx.r3.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// add r7,r30,r11
	ctx.r7.u64 = r30.u64 + ctx.r11.u64;
	// lwz r3,148(r7)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r7.u32 + 148);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8244b498
	if (ctx.cr6.eq) goto loc_8244B498;
	// lhz r11,34(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 34);
	// li r4,0
	ctx.r4.s64 = 0;
	// mullw r10,r11,r11
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r11.s32);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822d5870
	ctx.lr = 0x8244B448;
	sub_822D5870(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r30,r30,152
	r30.s64 = r30.s64 + 152;
	// lhz r8,34(r9)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + 34);
	// cmpw cr6,r26,r8
	ctx.cr6.compare<int32_t>(r26.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8244b3f8
	if (ctx.cr6.lt) goto loc_8244B3F8;
loc_8244B460:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lwz r10,60(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 60);
	// stw r24,572(r28)
	REX_STORE_U32(r28.u32 + 572, r24.u32);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// stw r11,576(r28)
	REX_STORE_U32(r28.u32 + 576, ctx.r11.u32);
	// blt cr6,0x8244b488
	if (ctx.cr6.lt) goto loc_8244B488;
	// lwz r11,64(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 64);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8244b490
	if (!ctx.cr6.eq) goto loc_8244B490;
loc_8244B488:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// beq cr6,0x8244b4ac
	if (ctx.cr6.eq) goto loc_8244B4AC;
loc_8244B490:
	// stw r20,176(r28)
	REX_STORE_U32(r28.u32 + 176, r20.u32);
	// b 0x8244b4b0
	goto loc_8244B4B0;
loc_8244B498:
	// lis r29,-32761
	r29.s64 = -2147024896;
	// ori r29,r29,14
	r29.u64 = r29.u64 | 14;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x822d4ea0
	return;
loc_8244B4AC:
	// stw r24,176(r28)
	REX_STORE_U32(r28.u32 + 176, r24.u32);
loc_8244B4B0:
	// stw r24,124(r28)
	REX_STORE_U32(r28.u32 + 124, r24.u32);
	// stw r20,732(r28)
	REX_STORE_U32(r28.u32 + 732, r20.u32);
	// lhz r11,34(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 34);
	// rotlwi r3,r11,2
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// bl 0x82460ed8
	ctx.lr = 0x8244B4C4;
	sub_82460ED8(ctx, base);
	// stw r3,192(r31)
	REX_STORE_U32(r31.u32 + 192, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8244b498
	if (ctx.cr6.eq) goto loc_8244B498;
	// lhz r11,34(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 34);
	// li r4,0
	ctx.r4.s64 = 0;
	// rotlwi r5,r11,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// bl 0x822d5870
	ctx.lr = 0x8244B4E0;
	sub_822D5870(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8229a710
	ctx.lr = 0x8244B4F0;
	sub_8229A710(ctx, base);
	// lwz r9,0(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r20,696(r31)
	REX_STORE_U32(r31.u32 + 696, r20.u32);
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// stw r24,300(r31)
	REX_STORE_U32(r31.u32 + 300, r24.u32);
	// rldicr r11,r10,63,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// stw r24,156(r31)
	REX_STORE_U32(r31.u32 + 156, r24.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// sth r24,154(r31)
	REX_STORE_U16(r31.u32 + 154, r24.u16);
	// std r11,168(r31)
	REX_STORE_U64(r31.u32 + 168, ctx.r11.u64);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// std r11,176(r31)
	REX_STORE_U64(r31.u32 + 176, ctx.r11.u64);
	// xori r11,r7,1
	ctx.r11.u64 = ctx.r7.u64 ^ 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,692(r31)
	REX_STORE_U32(r31.u32 + 692, ctx.r11.u32);
	// stw r11,0(r18)
	REX_STORE_U32(r18.u32 + 0, ctx.r11.u32);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x822d4ea0
	return;
loc_8244B538:
	// lis r29,-32761
	r29.s64 = -2147024896;
	// ori r29,r29,87
	r29.u64 = r29.u64 | 87;
loc_8244B540:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_82472E98) {
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
	ctx.lr = 0x82472EA0;
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82472fc0
	if (ctx.cr6.eq) goto loc_82472FC0;
	// li r27,0
	r27.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r10,64(r3)
	REX_STORE_U32(ctx.r3.u32 + 64, ctx.r10.u32);
	// beq cr6,0x82472fc0
	if (ctx.cr6.eq) goto loc_82472FC0;
	// lwz r9,56(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
loc_82472ED8:
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r8,4(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82472efc
	if (!ctx.cr6.eq) goto loc_82472EFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x82472ed8
	if (ctx.cr6.lt) goto loc_82472ED8;
	// b 0x82472f04
	goto loc_82472F04;
loc_82472EFC:
	// stw r11,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82472F04:
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x82472fc0
	if (!ctx.cr6.lt) goto loc_82472FC0;
	// mulli r30,r11,12
	r30.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// subf r28,r11,r4
	r28.u64 = ctx.r4.u64 - ctx.r11.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r29,1
	r29.s64 = 1;
	// lfs f31,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	f31.f64 = double(temp.f32);
loc_82472F20:
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82472fb4
	if (ctx.cr6.eq) goto loc_82472FB4;
	// li r6,7
	ctx.r6.s64 = 7;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x82434088
	ctx.lr = 0x82472F48;
	sub_82434088(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,64(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 64);
	// lwz r9,52(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 52);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mulli r10,r10,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(12));
	// lwzx r7,r30,r11
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// stw r7,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// li r7,7
	ctx.r7.s64 = 7;
	// rlwinm r10,r9,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r8,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r27,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r27.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// stw r10,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stw r29,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, r29.u32);
	// stw r29,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r29.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// stw r29,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r29.u32);
	// stw r29,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r29.u32);
	// bctrl 
	ctx.lr = 0x82472FA8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// stw r27,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r27.u32);
loc_82472FB4:
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// addi r30,r30,12
	r30.s64 = r30.s64 + 12;
	// bne 0x82472f20
	if (!ctx.cr0.eq) goto loc_82472F20;
loc_82472FC0:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82474E88) {
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
	// addi r3,r3,132
	ctx.r3.s64 = ctx.r3.s64 + 132;
	// bl 0x82474838
	ctx.lr = 0x82474EA4;
	sub_82474838(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,184(r31)
	REX_STORE_U32(r31.u32 + 184, ctx.r11.u32);
	// beq 0x82474f1c
	if (ctx.cr0.eq) goto loc_82474F1C;
	// lwz r3,268(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 268);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82474ed4
	if (ctx.cr6.eq) goto loc_82474ED4;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,8(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,32(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82474ED4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82474ED4:
	// lwz r11,184(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 184);
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,188(r31)
	REX_STORE_U32(r31.u32 + 188, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r8,28(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r7,24(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82474f14
	if (!ctx.cr6.lt) goto loc_82474F14;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// b 0x82474f18
	goto loc_82474F18;
loc_82474F14:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82474F18:
	// stw r11,192(r31)
	REX_STORE_U32(r31.u32 + 192, ctx.r11.u32);
loc_82474F1C:
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

DEFINE_REX_FUNC(sub_82478EA8) {
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
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCVRegister v124{};
	PPCVRegister v125{};
	PPCVRegister v126{};
	PPCVRegister v127{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e68
	ctx.lr = 0x82478EB0;
	// stfd f29,-128(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -128, f29.u64);
	// stfd f30,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, f30.u64);
	// stfd f31,-112(r1)
	REX_STORE_U64(ctx.r1.u32 + -112, f31.u64);
	// addi r12,r1,-128
	ctx.r12.s64 = ctx.r1.s64 + -128;
	// bl 0x822d8aa4
	ctx.lr = 0x82478EC4;
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// srawi r11,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 1;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r20,r5
	r20.u64 = ctx.r5.u64;
	// mr r22,r7
	r22.u64 = ctx.r7.u64;
	// mr r21,r8
	r21.u64 = ctx.r8.u64;
	// li r24,0
	r24.s64 = 0;
	// addze r26,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	r26.s64 = temp.s64;
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// ble cr6,0x82478efc
	if (!ctx.cr6.gt) goto loc_82478EFC;
loc_82478EEC:
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// srw r11,r6,r24
	ctx.r11.u64 = r24.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (r24.u8 & 0x3F));
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bgt cr6,0x82478eec
	if (ctx.cr6.gt) goto loc_82478EEC;
loc_82478EFC:
	// addi r11,r26,-1
	ctx.r11.s64 = r26.s64 + -1;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// addi r10,r6,-4
	ctx.r10.s64 = ctx.r6.s64 + -4;
	// and r9,r11,r26
	ctx.r9.u64 = ctx.r11.u64 & r26.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// add r25,r11,r29
	r25.u64 = ctx.r11.u64 + r29.u64;
	// rlwinm r23,r8,27,31,31
	r23.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// mr r30,r29
	r30.u64 = r29.u64;
	// mr r28,r25
	r28.u64 = r25.u64;
	// cmpwi cr6,r6,64
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 64, ctx.xer);
	// blt cr6,0x82478fa4
	if (ctx.cr6.lt) goto loc_82478FA4;
	// cmpwi cr6,r6,2048
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2048, ctx.xer);
	// bgt cr6,0x82478fa4
	if (ctx.cr6.gt) goto loc_82478FA4;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// beq cr6,0x82478fa4
	if (ctx.cr6.eq) goto loc_82478FA4;
	// srawi r11,r6,7
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7F) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 7;
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,12800
	ctx.r8.s64 = ctx.r10.s64 + 12800;
	// lwzx r7,r9,r8
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lfs f13,0(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,4(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,12(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f8,8(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f10,f0
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f6,40(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 40);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f8,f0
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f4,20(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 20);
	ctx.f4.f64 = double(temp.f32);
	// fneg f3,f6
	ctx.f3.u64 = ctx.f6.u64 ^ 0x8000000000000000;
	// lfs f2,16(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// stfs f9,80(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f7,144(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f5,96(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f4,160(r1)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fneg f1,f12
	ctx.f1.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f3,112(r1)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f1,128(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// b 0x82479078
	goto loc_82479078;
loc_82478FA4:
	// extsw r11,r6
	ctx.r11.s64 = ctx.r6.s32;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f30,f0
	f30.f64 = double(ctx.f0.s64);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lfd f0,26912(r10)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 26912);
	// fdiv f13,f0,f30
	ctx.f13.f64 = ctx.f0.f64 / f30.f64;
	// lfd f0,23800(r9)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r9.u32 + 23800);
	// fmul f29,f13,f0
	f29.f64 = ctx.f13.f64 * ctx.f0.f64;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// bl 0x822d4d68
	ctx.lr = 0x82478FD4;
	sub_822D4D68(ctx, base);
	// fmul f12,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f1.f64 * f31.f64;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x822d4c88
	ctx.lr = 0x82478FE8;
	sub_822D4C88(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// fmul f10,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f1.f64 * f31.f64;
	// lfd f0,26664(r8)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r8.u32 + 26664);
	// fdiv f30,f0,f30
	f30.f64 = ctx.f0.f64 / f30.f64;
	// lfd f0,23792(r7)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r7.u32 + 23792);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// stfs f9,128(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmul f29,f30,f0
	f29.f64 = f30.f64 * ctx.f0.f64;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// bl 0x822d4d68
	ctx.lr = 0x82479014;
	sub_822D4D68(ctx, base);
	// fmul f8,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = ctx.f1.f64 * f31.f64;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// stfs f7,144(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// bl 0x822d4c88
	ctx.lr = 0x82479028;
	sub_822D4C88(ctx, base);
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// fmul f6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = ctx.f1.f64 * f31.f64;
	// lfd f0,23784(r6)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r6.u32 + 23784);
	// fmul f31,f30,f0
	f31.f64 = f30.f64 * ctx.f0.f64;
	// frsp f5,f6
	ctx.f5.f64 = double(float(ctx.f6.f64));
	// stfs f5,96(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x822d4c88
	ctx.lr = 0x82479048;
	sub_822D4C88(ctx, base);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lfd f0,-25040(r5)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r5.u32 + -25040);
	// fmul f4,f1,f0
	ctx.f4.f64 = ctx.f1.f64 * ctx.f0.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// frsp f31,f4
	f31.f64 = double(float(ctx.f4.f64));
	// stfs f31,112(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bl 0x822d4d68
	ctx.lr = 0x82479064;
	sub_822D4D68(ctx, base);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// frsp f3,f1
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = double(float(ctx.f1.f64));
	// stfs f3,160(r1)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// lfs f0,15944(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 15944);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f2,f31,f0
	ctx.f2.f64 = double(float(f31.f64 * ctx.f0.f64));
loc_82479078:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stfs f2,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// lvx128 v62,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r31,r11,3648
	r31.s64 = ctx.r11.s64 + 3648;
	// vspltw128 v13,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// lvx128 v61,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v60,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r5,32
	ctx.r5.s64 = 32;
	// vspltw128 v12,v62,0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xFF));
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// vspltw128 v0,v60,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0xFF));
	// lvx128 v59,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v127,v61,0
	simde_mm_store_si128((simde__m128i*)v127.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0xFF));
	// vor v9,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// vspltw128 v10,v59,0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v59.u32), 0xFF));
	// li r11,16
	ctx.r11.s64 = 16;
	// lvx128 v62,r31,r5
	ea = (r31.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// vor v8,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vsldoi v11,v12,v0,8
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 8));
	// vmaddcfp128 v9,v127,v9,v12
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(v127.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vxor128 v126,v127,v62
	simde_mm_store_si128((simde__m128i*)v126.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)v127.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8)));
	// srawi r10,r26,2
	ctx.xer.ca = (r26.s32 < 0) & ((r26.u32 & 0x3) != 0);
	ctx.r10.s64 = r26.s32 >> 2;
	// lvx128 v58,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r31,r11
	ea = (r31.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsldoi v12,v10,v13,8
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8), 8));
	// addze r27,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	r27.s64 = temp.s64;
	// lvx128 v57,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddcfp128 v8,v126,v8,v10
	simde_mm_store_ps(ctx.v8.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(v126.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v10.f32)));
	// vspltw128 v125,v58,0
	simde_mm_store_si128((simde__m128i*)v125.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v58.u32), 0xFF));
	// vspltw128 v124,v57,0
	simde_mm_store_si128((simde__m128i*)v124.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v57.u32), 0xFF));
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// vsldoi v0,v0,v9,8
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8), 8));
	// vsldoi v13,v13,v8,8
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8), 8));
	// vxor128 v10,v0,v63
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// ble cr6,0x824791ac
	if (!ctx.cr6.gt) goto loc_824791AC;
	// mtctr r27
	ctx.ctr.u64 = r27.u64;
loc_82479124:
	// lvx128 v56,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp128 v12,v126,v0,v12
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(v126.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vor128 v55,v56,v56
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_load_si128((simde__m128i*)ctx.v56.u8));
	// lvx128 v54,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp128 v11,v127,v13,v11
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(v127.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// vor128 v53,v54,v54
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_load_si128((simde__m128i*)ctx.v54.u8));
	// vrlimi128 v55,v54,5,2
	simde_mm_store_ps(ctx.v55.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v55.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v54.f32), 78), 5));
	// vrlimi128 v53,v56,5,2
	simde_mm_store_ps(ctx.v53.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v53.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v56.f32), 78), 5));
	// vmulfp128 v9,v13,v55
	simde_mm_store_ps(ctx.v9.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v55.f32)));
	// vpermwi128 v8,v55,78
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v55.u32), 0xB1));
	// stvx128 v53,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r28,r28,-16
	r28.s64 = r28.s64 + -16;
	// vmaddfp128 v0,v127,v12,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(v127.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp128 v13,v126,v11,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(v126.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vmaddfp v10,v10,v8,v9
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v9.f32)));
	// stvx128 v10,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// vxor128 v10,v0,v63
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// bdnz 0x82479124
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82479124;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// ble cr6,0x824791ac
	if (!ctx.cr6.gt) goto loc_824791AC;
	// mtctr r27
	ctx.ctr.u64 = r27.u64;
loc_8247917C:
	// lvx128 v52,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp128 v12,v126,v0,v12
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(v126.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v9,v13,v52
	simde_mm_store_ps(ctx.v9.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v52.f32)));
	// vpermwi128 v8,v52,78
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v52.u32), 0xB1));
	// vmaddfp128 v11,v127,v13,v11
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(v127.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// vmaddfp128 v0,v127,v12,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(v127.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v10,v10,v8,v9
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v9.f32)));
	// vmaddfp128 v13,v126,v11,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(v126.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// stvx128 v10,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// vxor128 v10,v0,v63
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// bdnz 0x8247917c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8247917C;
loc_824791AC:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// addi r5,r24,-1
	ctx.r5.s64 = r24.s64 + -1;
	// bne cr6,0x824791bc
	if (!ctx.cr6.eq) goto loc_824791BC;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
loc_824791BC:
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r22
	ctx.ctr.u64 = r22.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bctrl 
	ctx.lr = 0x824791D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,48
	ctx.r9.s64 = 48;
	// lvx128 v0,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r8,16
	ctx.r8.s64 = 16;
	// vor v9,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// li r7,32
	ctx.r7.s64 = 32;
	// vsldoi128 v11,v124,v0,12
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)v124.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 4));
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// lvx128 v10,r31,r9
	ea = (r31.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// vmaddcfp128 v9,v126,v9,v125
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(v126.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(v125.f32)));
	// vor v8,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// vsldoi128 v12,v125,v10,12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)v125.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8), 4));
	// lvx128 v63,r31,r8
	ea = (r31.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v61,r31,r7
	ea = (r31.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddcfp128 v8,v127,v8,v124
	simde_mm_store_ps(ctx.v8.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(v127.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(v124.f32)));
	// vor v7,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// vsldoi v13,v10,v9,12
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8), 4));
	// vrlimi128 v12,v9,1,0
	simde_mm_store_ps(ctx.v12.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v9.f32), 228), 1));
	// vmaddcfp128 v7,v127,v7,v0
	simde_mm_store_ps(ctx.v7.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(v127.f32), simde_mm_load_ps(ctx.v7.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vsldoi v0,v0,v8,12
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8), 4));
	// vmaddfp128 v10,v126,v8,v10
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(v126.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v10.f32)));
	// vrlimi128 v11,v8,1,0
	simde_mm_store_ps(ctx.v11.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v8.f32), 228), 1));
	// vrlimi128 v0,v7,1,0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v7.f32), 228), 1));
	// vrlimi128 v13,v10,1,0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v10.f32), 228), 1));
	// vxor128 v8,v0,v63
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vxor128 v9,v13,v63
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vxor128 v62,v0,v61
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// ble cr6,0x824792ac
	if (!ctx.cr6.gt) goto loc_824792AC;
	// mtctr r27
	ctx.ctr.u64 = r27.u64;
loc_82479248:
	// lvx128 v51,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v10,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vor128 v50,v51,v51
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_load_si128((simde__m128i*)ctx.v51.u8));
	// lvx128 v49,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp128 v11,v127,v13,v11
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(v127.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// vmaddcfp128 v10,v126,v10,v12
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(v126.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vpermwi128 v12,v51,78
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v51.u32), 0xB1));
	// vrlimi128 v50,v49,5,1
	simde_mm_store_ps(ctx.v50.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v50.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v49.f32), 147), 5));
	// vrlimi128 v12,v49,5,2
	simde_mm_store_ps(ctx.v12.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v49.f32), 78), 5));
	// vmulfp128 v6,v62,v50
	simde_mm_store_ps(ctx.v6.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v50.f32)));
	// vmulfp128 v7,v13,v50
	simde_mm_store_ps(ctx.v7.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v50.f32)));
	// vmaddfp128 v13,v126,v11,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(v126.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vmaddfp128 v0,v127,v10,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(v127.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v9,v9,v12,v6
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v6.f32)));
	// vmaddfp v8,v8,v12,v7
	simde_mm_store_ps(ctx.v8.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v7.f32)));
	// vor v12,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// vxor128 v62,v0,v61
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// vpermwi128 v48,v9,228
	simde_mm_store_si128((simde__m128i*)ctx.v48.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v9.u32), 0x1B));
	// vxor128 v9,v13,v63
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// stvx128 v8,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// vxor128 v8,v0,v63
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// stvx128 v48,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
	// bdnz 0x82479248
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82479248;
loc_824792AC:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x824792c0
	if (ctx.cr6.eq) goto loc_824792C0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r20)
	REX_STORE_U32(r20.u32 + 0, ctx.r11.u32);
loc_824792C0:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// addi r12,r1,-128
	ctx.r12.s64 = ctx.r1.s64 + -128;
	// bl 0x822d8d3c
	ctx.lr = 0x824792CC;
	// lfd f29,-128(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -128);
	// lfd f30,-120(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f31,-112(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x822d4eb8
	return;
}

DEFINE_REX_FUNC(sub_824AB3E0) {
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
	ctx.lr = 0x824AB3E8;
	// stwu r1,-1024(r1)
	ea = -1024 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 1;
	// stw r6,1068(r1)
	REX_STORE_U32(ctx.r1.u32 + 1068, ctx.r6.u32);
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// stw r5,1060(r1)
	REX_STORE_U32(ctx.r1.u32 + 1060, ctx.r5.u32);
	// rlwinm r6,r11,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// vspltish v13,1
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x1)));
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// stw r6,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// cmpwi cr6,r6,4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 4, ctx.xer);
	// beq cr6,0x824ab890
	if (ctx.cr6.eq) goto loc_824AB890;
	// cmpwi cr6,r6,8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 8, ctx.xer);
	// beq cr6,0x824ab6cc
	if (ctx.cr6.eq) goto loc_824AB6CC;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x824ab65c
	if (!ctx.cr6.gt) goto loc_824AB65C;
	// addi r11,r6,-1
	ctx.r11.s64 = ctx.r6.s64 + -1;
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
	// li r4,-48
	ctx.r4.s64 = -48;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r6,96
	ctx.r6.s64 = 96;
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
loc_824AB484:
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lvx128 v63,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r31,r9,1,0,30
	r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v61,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lvsl v7,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r31,r31,r8
	r31.u64 = r31.u64 + ctx.r8.u64;
	// lwz r28,84(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r30,r7,r9
	r30.u64 = ctx.r7.u64 + ctx.r9.u64;
	// vperm128 v5,v63,v61,v7
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// add r26,r8,r9
	r26.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lvx128 v62,r8,r9
	ea = (ctx.r8.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r27,r31,r9
	r27.u64 = r31.u64 + ctx.r9.u64;
	// add r29,r30,r9
	r29.u64 = r30.u64 + ctx.r9.u64;
	// lvx128 v60,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v28,v0,v5
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r28,r28,r8
	r28.u64 = r28.u64 + ctx.r8.u64;
	// vmrglb v27,v0,v5
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r25,r29,r9
	r25.u64 = r29.u64 + ctx.r9.u64;
	// lvx128 v56,r26,r10
	ea = (r26.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v7,r0,r26
	temp.u32 = r26.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvx128 v59,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v58,r7,r9
	ea = (ctx.r7.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v12,v62,v56,v7
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v57,r31,r9
	ea = (r31.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v55,r31,r10
	ea = (r31.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v54,r27,r10
	ea = (r27.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v53,r7,r10
	ea = (ctx.r7.u32 + ctx.r10.u32) & ~0xF;
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
	// lvsl v4,r0,r7
	temp.u32 = ctx.r7.u32;
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
	// lvx128 v51,r30,r9
	ea = (r30.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v8,v58,v52,v3
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// lvx128 v50,r29,r9
	ea = (r29.u32 + ctx.r9.u32) & ~0xF;
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
	// stvx128 v12,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v30,v7,v8
	simde_mm_store_si128((simde__m128i*)v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// stvx128 v5,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v29,v6,v7
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// stvx128 v4,r11,r5
	ea = (ctx.r11.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v28,v14,v6
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v14.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// stvx128 v3,r11,r6
	ea = (ctx.r11.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v27,v18,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v18.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
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
	// bdnz 0x824ab484
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824AB484;
	// lwz r29,1068(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 1068);
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_824AB65C:
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r3,16
	ctx.r8.s64 = ctx.r3.s64 + 16;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x824ab950
	if (!ctx.cr6.gt) goto loc_824AB950;
	// addi r7,r6,-1
	ctx.r7.s64 = ctx.r6.s64 + -1;
	// add r11,r10,r8
	ctx.r11.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r7,r7,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// subf r30,r10,r9
	r30.u64 = ctx.r9.u64 - ctx.r10.u64;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// subf r8,r10,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r10.u64;
	// addi r9,r4,-48
	ctx.r9.s64 = ctx.r4.s64 + -48;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_824AB690:
	// lbzx r3,r30,r11
	ctx.r3.u64 = REX_LOAD_U8(r30.u32 + ctx.r11.u32);
	// lbzux r4,r8,r10
	ea = ctx.r8.u32 + ctx.r10.u32;
	ctx.r4.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lbz r31,0(r11)
	r31.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r7,r4,r7
	ctx.r7.u64 = ctx.r4.u64 + ctx.r7.u64;
	// add r5,r31,r3
	ctx.r5.u64 = r31.u64 + ctx.r3.u64;
	// rlwinm r4,r7,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r3,r5,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r7,r4
	ctx.r7.s64 = ctx.r4.s16;
	// extsh r5,r3
	ctx.r5.s64 = ctx.r3.s16;
	// sth r7,48(r9)
	REX_STORE_U16(ctx.r9.u32 + 48, ctx.r7.u16);
	// sthu r5,96(r9)
	ea = 96 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r5.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x824ab690
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824AB690;
	// b 0x824ab950
	goto loc_824AB950;
loc_824AB6CC:
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v45,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lvx128 v44,r3,r9
	ea = (ctx.r3.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,16
	ctx.r10.s64 = 16;
	// lvsl v7,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r30,r3,r9
	r30.u64 = ctx.r3.u64 + ctx.r9.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// add r31,r11,r9
	r31.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lvx128 v43,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v38,r30,r10
	ea = (r30.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lvsl v2,r0,r30
	temp.u32 = r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v6,v45,v43,v7
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v42,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lvx128 v41,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v30,v44,v38,v2
	simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// lvx128 v40,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r28,r1,192
	r28.s64 = ctx.r1.s64 + 192;
	// lvsl v5,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r11,r7,r9
	ctx.r11.u64 = ctx.r7.u64 + ctx.r9.u64;
	// lvx128 v39,r31,r10
	ea = (r31.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v31,v0,v6
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v4,r0,r31
	temp.u32 = r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r31,r11,r9
	r31.u64 = ctx.r11.u64 + ctx.r9.u64;
	// vperm128 v3,v42,v41,v5
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// lvx128 v35,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v1,v40,v39,v4
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// lvx128 v34,r8,r9
	ea = (ctx.r8.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v12,v0,v30
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v37,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v36,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r1,240
	r30.s64 = ctx.r1.s64 + 240;
	// lvx128 v62,r31,r10
	ea = (r31.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v11,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v33,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v10,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v32,r7,r10
	ea = (ctx.r7.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v5,v12,v31
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)v31.u16)));
	// lvx128 v63,r7,r9
	ea = (ctx.r7.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r27,r1,288
	r27.s64 = ctx.r1.s64 + 288;
	// lvsl v7,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lvsl v2,r0,r31
	temp.u32 = r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vadduhm v30,v11,v12
	simde_mm_store_si128((simde__m128i*)v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// lvsl v6,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v3,v63,v37,v7
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvsl v4,r0,r7
	temp.u32 = ctx.r7.u32;
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
	// stvx128 v26,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v26.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v4,v7,v8
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// stvx128 v27,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
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
	// li r4,4
	ctx.r4.s64 = 4;
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
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r3,8
	ctx.r7.s64 = ctx.r3.s64 + 8;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// addi r8,r1,64
	ctx.r8.s64 = ctx.r1.s64 + 64;
	// stvx128 v2,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// subf r4,r11,r9
	ctx.r4.u64 = ctx.r9.u64 - ctx.r11.u64;
	// stvx128 v31,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v26,v27,v6
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// add r10,r11,r7
	ctx.r10.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stvx128 v30,r0,r27
	ea = (r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v29,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// subf r9,r11,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r11.u64;
	// stvx128 v28,r0,r26
	ea = (r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
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
loc_824AB850:
	// lbzx r5,r10,r4
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// lbzux r31,r9,r11
	ea = ctx.r9.u32 + ctx.r11.u32;
	r31.u64 = REX_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// lbz r3,0(r10)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// add r5,r31,r5
	ctx.r5.u64 = r31.u64 + ctx.r5.u64;
	// add r3,r3,r7
	ctx.r3.u64 = ctx.r3.u64 + ctx.r7.u64;
	// rlwinm r7,r5,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r3,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r3,r7
	ctx.r3.s64 = ctx.r7.s16;
	// extsh r7,r5
	ctx.r7.s64 = ctx.r5.s16;
	// sth r3,48(r8)
	REX_STORE_U16(ctx.r8.u32 + 48, ctx.r3.u16);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sthu r7,96(r8)
	ea = 96 + ctx.r8.u32;
	REX_STORE_U16(ea, ctx.r7.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x824ab850
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824AB850;
	// b 0x824ab950
	goto loc_824AB950;
loc_824AB890:
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v59,r3,r9
	ea = (ctx.r3.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r8,r3,r9
	ctx.r8.u64 = ctx.r3.u64 + ctx.r9.u64;
	// lvx128 v58,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lvsl v7,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// li r10,16
	ctx.r10.s64 = 16;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lvsl v6,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// lvx128 v57,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v56,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lvx128 v55,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// lvx128 v54,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v5,v59,v56,v6
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v53,r7,r10
	ea = (ctx.r7.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r31,r1,240
	r31.s64 = ctx.r1.s64 + 240;
	// lvx128 v52,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v51,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v50,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v4,v58,v52,v7
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvsl v3,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v12,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v2,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v1,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v31,v57,v54,v3
	simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// vperm128 v30,v55,v53,v2
	simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// vperm128 v29,v50,v51,v1
	simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// vmrghb v28,v0,v4
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v11,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v10,v0,v30
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v27,v0,v29
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v26,v12,v28
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// vadduhm v25,v11,v12
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vadduhm v24,v10,v11
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
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
	// stvx128 v22,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v22.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v21,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v21.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v20,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v20.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v19,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v19.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_824AB950:
	// li r11,1104
	ctx.r11.s64 = 1104;
	// lwz r4,1060(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1060);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// lvx128 v1,r29,r11
	ea = (r29.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x824a9ce0
	ctx.lr = 0x824AB968;
	sub_824A9CE0(ctx, base);
	// addi r1,r1,1024
	ctx.r1.s64 = ctx.r1.s64 + 1024;
	// b 0x822d4ea0
	return;
}

