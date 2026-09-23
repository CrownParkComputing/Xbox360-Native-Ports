#include "soulcalibur2_funcs.43.h"

DEFINE_REX_FUNC(sub_820E1CF8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f0,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f0,8(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f0,12(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820E69F8) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r6,r10,15972
	ctx.r6.s64 = ctx.r10.s64 + 15972;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// addi r9,r8,6
	ctx.r9.s64 = ctx.r8.s64 + 6;
loc_820E6A14:
	// lbz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r5,0(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r7,r5,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r5.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x820e6a34
	if (!ctx.cr0.eq) goto loc_820E6A34;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x820e6a14
	if (!ctx.cr6.eq) goto loc_820E6A14;
loc_820E6A34:
	// cmpwi r7,0
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// li r5,0
	ctx.r5.s64 = 0;
loc_820E6A40:
	// lbz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820e6a50
	if (!ctx.cr0.eq) goto loc_820E6A50;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_820E6A50:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x820e6a9c
	if (ctx.cr6.gt) goto loc_820E6A9C;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r7,r8,6
	ctx.r7.s64 = ctx.r8.s64 + 6;
loc_820E6A70:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,0(r10)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r4,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r4.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x820e6a90
	if (!ctx.cr0.eq) goto loc_820E6A90;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x820e6a70
	if (!ctx.cr6.eq) goto loc_820E6A70;
loc_820E6A90:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x820e6a40
	if (!ctx.cr0.eq) goto loc_820E6A40;
	// blr 
	return;
loc_820E6A9C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820EBBF8) {
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
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r11,-28232
	ctx.r3.s64 = ctx.r11.s64 + -28232;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,-28232(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -28232);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820EBC30;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lfs f0,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 56, temp.u32);
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 52, temp.u32);
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 48, temp.u32);
	// bl 0x821fef70
	ctx.lr = 0x820EBC4C;
	sub_821FEF70(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f0,16656(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16656);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16652(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16652);
	ctx.f13.f64 = double(temp.f32);
	// fmsubs f0,f1,f0,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f1.f64, ctx.f0.f64, -ctx.f13.f64)));
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 24, temp.u32);
	// bl 0x822009d0
	ctx.lr = 0x820EBC6C;
	sub_822009D0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2384(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2384);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f31,f1,f0
	f31.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// bl 0x821fef70
	ctx.lr = 0x820EBC7C;
	sub_821FEF70(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,16308(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16308);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f1,f0,f31
	ctx.f0.f64 = double(float(std::fma(ctx.f1.f64, ctx.f0.f64, f31.f64)));
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 28, temp.u32);
	// bl 0x821fed88
	ctx.lr = 0x820EBC90;
	sub_821FED88(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,2008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2008);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16228(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16228);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f1,f0,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f1.f64, ctx.f0.f64, ctx.f13.f64)));
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 32, temp.u32);
	// bl 0x821fed88
	ctx.lr = 0x820EBCAC;
	sub_821FED88(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,180
	ctx.r8.s64 = 180;
	// stw r11,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r11.u32);
	// lfs f0,16260(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16260);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r8.u32);
	// lfs f13,16588(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16588);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// fmadds f0,f1,f0,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f1.f64, ctx.f0.f64, ctx.f13.f64)));
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 36, temp.u32);
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

DEFINE_REX_FUNC(sub_820F27D0) {
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
	// addi r11,r11,17460
	ctx.r11.s64 = ctx.r11.s64 + 17460;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x820f27fc
	if (ctx.cr0.eq) goto loc_820F27FC;
	// bl 0x822c80a8
	ctx.lr = 0x820F27FC;
	sub_822C80A8(ctx, base);
loc_820F27FC:
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

DEFINE_REX_FUNC(sub_820F40D0) {
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
	ctx.lr = 0x820F40D8;
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, f30.u64);
	// stfd f31,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x820fa0d0
	ctx.lr = 0x820F40EC;
	sub_820FA0D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x820f4228
	if (ctx.cr0.eq) goto loc_820F4228;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820fa0d8
	ctx.lr = 0x820F40FC;
	sub_820FA0D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x820f4228
	if (ctx.cr0.eq) goto loc_820F4228;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820fa0e0
	ctx.lr = 0x820F410C;
	sub_820FA0E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x820f4228
	if (ctx.cr0.eq) goto loc_820F4228;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820fa0e8
	ctx.lr = 0x820F411C;
	sub_820FA0E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x820f4228
	if (ctx.cr0.eq) goto loc_820F4228;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820fa0f0
	ctx.lr = 0x820F412C;
	sub_820FA0F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x820f4228
	if (ctx.cr0.eq) goto loc_820F4228;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820f94e8
	ctx.lr = 0x820F413C;
	sub_820F94E8(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820f3e90
	ctx.lr = 0x820F414C;
	sub_820F3E90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r30,88(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x820f97b0
	ctx.lr = 0x820F4160;
	sub_820F97B0(ctx, base);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820f4010
	ctx.lr = 0x820F4170;
	sub_820F4010(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r29,80(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x820f9878
	ctx.lr = 0x820F4184;
	sub_820F9878(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x820f9ad0
	ctx.lr = 0x820F4194;
	sub_820F9AD0(ctx, base);
	// bl 0x820fed40
	ctx.lr = 0x820F4198;
	sub_820FED40(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,16620(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16620);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x820f4200
	if (!ctx.cr6.gt) goto loc_820F4200;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r10,8336(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8336);
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// lfs f31,5732(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 5732);
	f31.f64 = double(temp.f32);
	// bge cr6,0x820f41f0
	if (!ctx.cr6.lt) goto loc_820F41F0;
	// bl 0x820fed40
	ctx.lr = 0x820F41C0;
	sub_820FED40(ctx, base);
	// lwz r11,8336(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8336);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// subfic r11,r11,5
	ctx.xer.ca = ctx.r11.u32 <= 5;
	ctx.r11.u64 = static_cast<uint64_t>(5) - ctx.r11.u64;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmadds f30,f1,f13,f0
	f30.f64 = double(float(std::fma(ctx.f1.f64, ctx.f13.f64, ctx.f0.f64)));
	// bl 0x820fed40
	ctx.lr = 0x820F41EC;
	sub_820FED40(ctx, base);
	// fmadds f31,f1,f30,f31
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(std::fma(ctx.f1.f64, f30.f64, f31.f64)));
loc_820F41F0:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820fb600
	ctx.lr = 0x820F4200;
	sub_820FB600(ctx, base);
loc_820F4200:
	// lwz r11,8484(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8484);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x820f421c
	if (!ctx.cr6.eq) goto loc_820F421C;
	// lwz r11,8528(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8528);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-2
	ctx.r4.s64 = ctx.r11.s64 + -2;
	// bl 0x820f96b8
	ctx.lr = 0x820F421C;
	sub_820F96B8(ctx, base);
loc_820F421C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820f9be8
	ctx.lr = 0x820F4224;
	sub_820F9BE8(ctx, base);
	// b 0x820f422c
	goto loc_820F422C;
loc_820F4228:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_820F422C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_820FCA30) {
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
	// addi r30,r3,4
	r30.s64 = ctx.r3.s64 + 4;
	// lwz r4,20(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820f8db8
	ctx.lr = 0x820FCA5C;
	sub_820F8DB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x820fca74
	if (!ctx.cr0.eq) goto loc_820FCA74;
	// li r5,64
	ctx.r5.s64 = 64;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820f8d58
	ctx.lr = 0x820FCA74;
	sub_820F8D58(ctx, base);
loc_820FCA74:
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

DEFINE_REX_FUNC(sub_820FDA20) {
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
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lbz r11,211(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 211);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820fdb60
	if (!ctx.cr0.eq) goto loc_820FDB60;
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x820fdb0c
	if (ctx.cr6.lt) goto loc_820FDB0C;
	// beq cr6,0x820fdad8
	if (ctx.cr6.eq) goto loc_820FDAD8;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x820fda88
	if (ctx.cr6.lt) goto loc_820FDA88;
	// bne cr6,0x820fdb60
	if (!ctx.cr6.eq) goto loc_820FDB60;
	// addi r30,r3,4
	r30.s64 = ctx.r3.s64 + 4;
	// lwz r4,20(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// li r5,29
	ctx.r5.s64 = 29;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820f8db8
	ctx.lr = 0x820FDA78;
	sub_820F8DB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x820fdacc
	if (!ctx.cr0.eq) goto loc_820FDACC;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820fdac8
	goto loc_820FDAC8;
loc_820FDA88:
	// addi r30,r31,4
	r30.s64 = r31.s64 + 4;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r5,29
	ctx.r5.s64 = 29;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820f8db8
	ctx.lr = 0x820FDA9C;
	sub_820F8DB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x820fdaac
	if (ctx.cr0.eq) goto loc_820FDAAC;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x820fdac8
	goto loc_820FDAC8;
loc_820FDAAC:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
	// cmpwi cr6,r11,60
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 60, ctx.xer);
	// ble cr6,0x820fdacc
	if (!ctx.cr6.gt) goto loc_820FDACC;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
loc_820FDAC8:
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
loc_820FDACC:
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x820fdb3c
	goto loc_820FDB3C;
loc_820FDAD8:
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,29
	ctx.r4.s64 = 29;
	// bl 0x821be318
	ctx.lr = 0x820FDAEC;
	sub_821BE318(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// bl 0x820f8d58
	ctx.lr = 0x820FDAFC;
	sub_820F8D58(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r10,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r10.u32);
	// b 0x820fdb5c
	goto loc_820FDB5C;
loc_820FDB0C:
	// addi r30,r31,4
	r30.s64 = r31.s64 + 4;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820f8db8
	ctx.lr = 0x820FDB20;
	sub_820F8DB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x820fdb48
	if (!ctx.cr0.eq) goto loc_820FDB48;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lhz r11,586(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 586);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820fdb48
	if (ctx.cr0.eq) goto loc_820FDB48;
	// li r5,64
	ctx.r5.s64 = 64;
loc_820FDB3C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820f8d58
	ctx.lr = 0x820FDB44;
	sub_820F8D58(ctx, base);
	// b 0x820fdb60
	goto loc_820FDB60;
loc_820FDB48:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820f8d58
	ctx.lr = 0x820FDB58;
	sub_820F8D58(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
loc_820FDB5C:
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
loc_820FDB60:
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

DEFINE_REX_FUNC(sub_821048A0) {
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
	// lwz r10,120(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x821048d0
	if (ctx.cr6.eq) goto loc_821048D0;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x821048d0
	if (ctx.cr6.eq) goto loc_821048D0;
	// lfs f11,36(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,40(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f10.f64 = double(temp.f32);
	// b 0x821048f0
	goto loc_821048F0;
loc_821048D0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,52(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,36(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,56(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,40(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,2000(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	ctx.f0.f64 = double(temp.f32);
	// fnmsubs f11,f13,f0,f12
	ctx.f11.f64 = double(float(-std::fma(ctx.f13.f64, ctx.f0.f64, -ctx.f12.f64)));
	// fnmsubs f10,f10,f0,f9
	ctx.f10.f64 = double(float(-std::fma(ctx.f10.f64, ctx.f0.f64, -ctx.f9.f64)));
loc_821048F0:
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lfs f13,56(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// subfic r11,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r11.u64 = static_cast<uint64_t>(16) - ctx.r11.u64;
	// lfs f0,52(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stfs f10,100(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfs f0,1992(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// frsp f9,f12
	ctx.f9.f64 = double(float(ctx.f12.f64));
	// lfs f13,26544(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 26544);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,26540(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 26540);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f0,192(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f0,196(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f0,200(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f0,204(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// fadds f11,f9,f0
	ctx.f11.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// fmadds f13,f11,f13,f12
	ctx.f13.f64 = double(float(std::fma(ctx.f11.f64, ctx.f13.f64, ctx.f12.f64)));
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r11,136(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 136);
	// rlwinm. r11,r11,0,8,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// beq 0x821049b4
	if (ctx.cr0.eq) goto loc_821049B4;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f13,16232(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16232);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,26944(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 26944);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,26940(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 26940);
	ctx.f11.f64 = double(temp.f32);
	// stfs f13,140(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f13,156(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f12,164(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f11,168(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f13,172(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f12,180(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f11,184(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f13,188(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// b 0x821049ec
	goto loc_821049EC;
loc_821049B4:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,140(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f0,172(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stfs f0,188(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f13,26944(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 26944);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,26940(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 26940);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,164(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f12,168(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f13,180(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f12,184(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 184, temp.u32);
loc_821049EC:
	// lfs f0,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfs f0,176(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// bl 0x821f7248
	ctx.lr = 0x82104A18;
	sub_821F7248(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821107C0) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lhz r9,130(r3)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 130);
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r30,r11,-16948
	r30.s64 = ctx.r11.s64 + -16948;
	// lfs f31,15632(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15632);
	f31.f64 = double(temp.f32);
	// beq 0x82110844
	if (ctx.cr0.eq) goto loc_82110844;
	// lha r11,140(r3)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r3.u32 + 140));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// lfs f0,29244(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 29244);
	ctx.f0.f64 = double(temp.f32);
	// stfs f31,20(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// addi r5,r9,29240
	ctx.r5.s64 = ctx.r9.s64 + 29240;
	// lbzx r11,r11,r30
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + r30.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
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
	ctx.lr = 0x82110844;
	sub_821EAF80(ctx, base);
loc_82110844:
	// lha r11,132(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 132));
	// lha r10,130(r31)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(r31.u32 + 130));
	// addi r11,r11,-6
	ctx.r11.s64 = ctx.r11.s64 + -6;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x821108a4
	if (ctx.cr6.eq) goto loc_821108A4;
	// lha r11,140(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 140));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// lfs f0,29236(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 29236);
	ctx.f0.f64 = double(temp.f32);
	// stfs f31,20(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// addi r5,r9,29232
	ctx.r5.s64 = ctx.r9.s64 + 29232;
	// lbzx r11,r11,r30
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + r30.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fsubs f2,f0,f13
	ctx.f2.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// bl 0x821eaf80
	ctx.lr = 0x821108A4;
	sub_821EAF80(ctx, base);
loc_821108A4:
	// lhz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 140);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// sth r11,140(r31)
	REX_STORE_U16(r31.u32 + 140, ctx.r11.u16);
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// blt cr6,0x821108c4
	if (ctx.cr6.lt) goto loc_821108C4;
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,140(r31)
	REX_STORE_U16(r31.u32 + 140, ctx.r11.u16);
loc_821108C4:
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

DEFINE_REX_FUNC(sub_82114DF0) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x822d4e7c
	ctx.lr = 0x82114DF8;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x822d4f34
	ctx.lr = 0x82114E00;
	// stwu r1,-608(r1)
	ea = -608 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r26,-32165
	r26.s64 = -2107965440;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lwz r11,-32480(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + -32480);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f27,31176(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 31176);
	f27.f64 = double(temp.f32);
	// lfs f29,16036(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16036);
	f29.f64 = double(temp.f32);
	// lfs f28,15632(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 15632);
	f28.f64 = double(temp.f32);
	// lfs f31,1992(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 1992);
	f31.f64 = double(temp.f32);
	// lwz r10,68(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// lfs f30,1996(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 1996);
	f30.f64 = double(temp.f32);
	// lha r9,42(r11)
	ctx.r9.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 42));
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// mr. r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r8,68(r11)
	REX_STORE_U32(ctx.r11.u32 + 68, ctx.r8.u32);
	// bne 0x821153c4
	if (!ctx.cr0.eq) goto loc_821153C4;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stfs f30,160(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stfs f31,172(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f30,176(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// stfs f31,188(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// stfs f28,192(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lfs f0,31172(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 31172);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16032(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 16032);
	ctx.f13.f64 = double(temp.f32);
	// li r11,3
	ctx.r11.s64 = 3;
	// lfs f12,28328(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 28328);
	ctx.f12.f64 = double(temp.f32);
	// li r8,1
	ctx.r8.s64 = 1;
	// lfs f11,31168(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 31168);
	ctx.f11.f64 = double(temp.f32);
	// li r7,5
	ctx.r7.s64 = 5;
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f10,31164(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 31164);
	ctx.f10.f64 = double(temp.f32);
	// li r29,2
	r29.s64 = 2;
	// stfs f13,180(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// li r30,4
	r30.s64 = 4;
	// stfs f13,212(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// li r10,8
	ctx.r10.s64 = 8;
	// stfs f13,244(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// stb r11,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, ctx.r11.u8);
	// stb r11,85(r1)
	REX_STORE_U8(ctx.r1.u32 + 85, ctx.r11.u8);
	// lfs f13,28252(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 28252);
	ctx.f13.f64 = double(temp.f32);
	// stb r11,88(r1)
	REX_STORE_U8(ctx.r1.u32 + 88, ctx.r11.u8);
	// stfs f12,164(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stb r11,91(r1)
	REX_STORE_U8(ctx.r1.u32 + 91, ctx.r11.u8);
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stb r8,84(r1)
	REX_STORE_U8(ctx.r1.u32 + 84, ctx.r8.u8);
	// stfs f0,184(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stb r7,90(r1)
	REX_STORE_U8(ctx.r1.u32 + 90, ctx.r7.u8);
	// stfs f10,196(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f0,200(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stb r9,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// stfs f31,204(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// stb r29,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, r29.u8);
	// stfs f28,208(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stb r9,83(r1)
	REX_STORE_U8(ctx.r1.u32 + 83, ctx.r9.u8);
	// stfs f0,216(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stb r30,86(r1)
	REX_STORE_U8(ctx.r1.u32 + 86, r30.u8);
	// stfs f31,220(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// stb r29,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, r29.u8);
	// stfs f29,224(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stb r30,89(r1)
	REX_STORE_U8(ctx.r1.u32 + 89, r30.u8);
	// stfs f12,228(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// stb r9,92(r1)
	REX_STORE_U8(ctx.r1.u32 + 92, ctx.r9.u8);
	// stfs f0,232(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// stb r5,93(r1)
	REX_STORE_U8(ctx.r1.u32 + 93, ctx.r5.u8);
	// stfs f31,236(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// stb r10,94(r1)
	REX_STORE_U8(ctx.r1.u32 + 94, ctx.r10.u8);
	// stfs f29,240(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// stb r10,95(r1)
	REX_STORE_U8(ctx.r1.u32 + 95, ctx.r10.u8);
	// stfs f0,248(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// li r11,9
	ctx.r11.s64 = 9;
	// stfs f31,252(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// li r6,10
	ctx.r6.s64 = 10;
	// stfs f30,256(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// li r7,7
	ctx.r7.s64 = 7;
	// stfs f11,260(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// stfs f0,264(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 264, temp.u32);
	// li r8,11
	ctx.r8.s64 = 11;
	// stfs f31,268(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 268, temp.u32);
	// lis r31,-32256
	r31.s64 = -2113929216;
	// stfs f29,272(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 272, temp.u32);
	// lis r28,-32256
	r28.s64 = -2113929216;
	// stfs f11,276(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 276, temp.u32);
	// lis r27,-32256
	r27.s64 = -2113929216;
	// stfs f0,280(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 280, temp.u32);
	// lis r25,-32256
	r25.s64 = -2113929216;
	// stfs f31,284(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 284, temp.u32);
	// stfs f0,296(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 296, temp.u32);
	// stfs f31,300(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 300, temp.u32);
	// stfs f0,312(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 312, temp.u32);
	// stfs f31,316(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 316, temp.u32);
	// lfs f12,31156(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 31156);
	ctx.f12.f64 = double(temp.f32);
	// stb r7,102(r1)
	REX_STORE_U8(ctx.r1.u32 + 102, ctx.r7.u8);
	// lfs f11,31160(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 31160);
	ctx.f11.f64 = double(temp.f32);
	// stb r8,105(r1)
	REX_STORE_U8(ctx.r1.u32 + 105, ctx.r8.u8);
	// lfs f10,31152(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 31152);
	ctx.f10.f64 = double(temp.f32);
	// stb r7,106(r1)
	REX_STORE_U8(ctx.r1.u32 + 106, ctx.r7.u8);
	// lfs f9,31148(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 31148);
	ctx.f9.f64 = double(temp.f32);
	// stb r8,108(r1)
	REX_STORE_U8(ctx.r1.u32 + 108, ctx.r8.u8);
	// lfs f8,26868(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 26868);
	ctx.f8.f64 = double(temp.f32);
	// li r7,14
	ctx.r7.s64 = 14;
	// stfs f13,288(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 288, temp.u32);
	// li r8,15
	ctx.r8.s64 = 15;
	// stfs f11,292(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 292, temp.u32);
	// li r4,12
	ctx.r4.s64 = 12;
	// stfs f12,304(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 304, temp.u32);
	// li r31,13
	r31.s64 = 13;
	// stfs f11,308(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 308, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f13,320(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 320, temp.u32);
	// stb r30,101(r1)
	REX_STORE_U8(ctx.r1.u32 + 101, r30.u8);
	// stfs f10,324(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 324, temp.u32);
	// stb r30,119(r1)
	REX_STORE_U8(ctx.r1.u32 + 119, r30.u8);
	// stfs f0,328(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 328, temp.u32);
	// stb r30,124(r1)
	REX_STORE_U8(ctx.r1.u32 + 124, r30.u8);
	// stfs f31,332(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 332, temp.u32);
	// stb r6,96(r1)
	REX_STORE_U8(ctx.r1.u32 + 96, ctx.r6.u8);
	// stfs f12,336(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 336, temp.u32);
	// stb r5,97(r1)
	REX_STORE_U8(ctx.r1.u32 + 97, ctx.r5.u8);
	// stfs f10,340(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 340, temp.u32);
	// stb r10,98(r1)
	REX_STORE_U8(ctx.r1.u32 + 98, ctx.r10.u8);
	// stfs f0,344(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 344, temp.u32);
	// stb r6,99(r1)
	REX_STORE_U8(ctx.r1.u32 + 99, ctx.r6.u8);
	// stfs f31,348(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 348, temp.u32);
	// stb r29,100(r1)
	REX_STORE_U8(ctx.r1.u32 + 100, r29.u8);
	// stfs f30,352(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 352, temp.u32);
	// stb r11,103(r1)
	REX_STORE_U8(ctx.r1.u32 + 103, ctx.r11.u8);
	// stfs f9,356(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 356, temp.u32);
	// stb r11,104(r1)
	REX_STORE_U8(ctx.r1.u32 + 104, ctx.r11.u8);
	// stfs f0,360(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 360, temp.u32);
	// stb r11,107(r1)
	REX_STORE_U8(ctx.r1.u32 + 107, ctx.r11.u8);
	// stfs f31,364(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 364, temp.u32);
	// stb r29,109(r1)
	REX_STORE_U8(ctx.r1.u32 + 109, r29.u8);
	// stfs f29,368(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 368, temp.u32);
	// stb r9,110(r1)
	REX_STORE_U8(ctx.r1.u32 + 110, ctx.r9.u8);
	// stfs f9,372(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 372, temp.u32);
	// stb r10,111(r1)
	REX_STORE_U8(ctx.r1.u32 + 111, ctx.r10.u8);
	// stfs f0,376(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 376, temp.u32);
	// stb r7,112(r1)
	REX_STORE_U8(ctx.r1.u32 + 112, ctx.r7.u8);
	// stfs f31,380(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 380, temp.u32);
	// stb r4,113(r1)
	REX_STORE_U8(ctx.r1.u32 + 113, ctx.r4.u8);
	// stfs f13,384(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 384, temp.u32);
	// stb r7,114(r1)
	REX_STORE_U8(ctx.r1.u32 + 114, ctx.r7.u8);
	// stfs f8,388(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 388, temp.u32);
	// stb r9,115(r1)
	REX_STORE_U8(ctx.r1.u32 + 115, ctx.r9.u8);
	// stfs f0,392(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 392, temp.u32);
	// stb r10,116(r1)
	REX_STORE_U8(ctx.r1.u32 + 116, ctx.r10.u8);
	// stfs f31,396(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 396, temp.u32);
	// stb r7,117(r1)
	REX_STORE_U8(ctx.r1.u32 + 117, ctx.r7.u8);
	// stfs f12,400(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 400, temp.u32);
	// stb r29,118(r1)
	REX_STORE_U8(ctx.r1.u32 + 118, r29.u8);
	// stfs f8,404(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 404, temp.u32);
	// stb r11,120(r1)
	REX_STORE_U8(ctx.r1.u32 + 120, ctx.r11.u8);
	// stfs f0,408(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 408, temp.u32);
	// stb r8,121(r1)
	REX_STORE_U8(ctx.r1.u32 + 121, ctx.r8.u8);
	// stfs f31,412(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 412, temp.u32);
	// stb r8,122(r1)
	REX_STORE_U8(ctx.r1.u32 + 122, ctx.r8.u8);
	// stb r31,123(r1)
	REX_STORE_U8(ctx.r1.u32 + 123, r31.u8);
	// stb r11,125(r1)
	REX_STORE_U8(ctx.r1.u32 + 125, ctx.r11.u8);
	// stb r8,126(r1)
	REX_STORE_U8(ctx.r1.u32 + 126, ctx.r8.u8);
	// stb r29,127(r1)
	REX_STORE_U8(ctx.r1.u32 + 127, r29.u8);
	// bl 0x821e78c8
	ctx.lr = 0x821150AC;
	sub_821E78C8(ctx, base);
	// addi r31,r1,80
	r31.s64 = ctx.r1.s64 + 80;
loc_821150B0:
	// lbz r10,1(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 1);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lbz r9,2(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 2);
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// lbz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U8(r31.u32 + 0);
	// rotlwi r3,r10,4
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// rotlwi r10,r9,4
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 4);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// rotlwi r27,r8,4
	r27.u64 = __builtin_rotateleft32(ctx.r8.u32, 4);
	// addi r28,r1,160
	r28.s64 = ctx.r1.s64 + 160;
	// add r4,r3,r4
	ctx.r4.u64 = ctx.r3.u64 + ctx.r4.u64;
	// li r9,2
	ctx.r9.s64 = 2;
	// li r8,255
	ctx.r8.s64 = 255;
	// li r7,255
	ctx.r7.s64 = 255;
	// li r6,255
	ctx.r6.s64 = 255;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r3,r27,r28
	ctx.r3.u64 = r27.u64 + r28.u64;
	// bl 0x821e8750
	ctx.lr = 0x821150F8;
	sub_821E8750(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r31,r31,3
	r31.s64 = r31.s64 + 3;
	// bne 0x821150b0
	if (!ctx.cr0.eq) goto loc_821150B0;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821e78c8
	ctx.lr = 0x8211510C;
	sub_821E78C8(ctx, base);
	// mr r30,r29
	r30.u64 = r29.u64;
loc_82115110:
	// lbz r10,1(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 1);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lbz r9,2(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 2);
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// lbz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U8(r31.u32 + 0);
	// rotlwi r3,r10,4
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// rotlwi r10,r9,4
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 4);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// rotlwi r27,r8,4
	r27.u64 = __builtin_rotateleft32(ctx.r8.u32, 4);
	// addi r28,r1,160
	r28.s64 = ctx.r1.s64 + 160;
	// add r4,r3,r4
	ctx.r4.u64 = ctx.r3.u64 + ctx.r4.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,208
	ctx.r8.s64 = 208;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,255
	ctx.r6.s64 = 255;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r3,r27,r28
	ctx.r3.u64 = r27.u64 + r28.u64;
	// bl 0x821e8750
	ctx.lr = 0x82115158;
	sub_821E8750(ctx, base);
	// addi r31,r31,3
	r31.s64 = r31.s64 + 3;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// addi r28,r1,160
	r28.s64 = ctx.r1.s64 + 160;
	// li r9,1
	ctx.r9.s64 = 1;
	// lbz r10,1(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 1);
	// li r8,0
	ctx.r8.s64 = 0;
	// lbz r6,2(r31)
	ctx.r6.u64 = REX_LOAD_U8(r31.u32 + 2);
	// li r7,0
	ctx.r7.s64 = 0;
	// lbz r5,0(r31)
	ctx.r5.u64 = REX_LOAD_U8(r31.u32 + 0);
	// rotlwi r3,r10,4
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// rotlwi r10,r6,4
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 4);
	// rotlwi r27,r5,4
	r27.u64 = __builtin_rotateleft32(ctx.r5.u32, 4);
	// add r4,r3,r4
	ctx.r4.u64 = ctx.r3.u64 + ctx.r4.u64;
	// li r6,208
	ctx.r6.s64 = 208;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r3,r27,r28
	ctx.r3.u64 = r27.u64 + r28.u64;
	// bl 0x821e8750
	ctx.lr = 0x821151A4;
	sub_821E8750(ctx, base);
	// addi r31,r31,3
	r31.s64 = r31.s64 + 3;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// addi r28,r1,160
	r28.s64 = ctx.r1.s64 + 160;
	// li r9,1
	ctx.r9.s64 = 1;
	// lbz r10,1(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 1);
	// li r8,0
	ctx.r8.s64 = 0;
	// lbz r6,2(r31)
	ctx.r6.u64 = REX_LOAD_U8(r31.u32 + 2);
	// li r7,0
	ctx.r7.s64 = 0;
	// lbz r5,0(r31)
	ctx.r5.u64 = REX_LOAD_U8(r31.u32 + 0);
	// rotlwi r3,r10,4
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// rotlwi r10,r6,4
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 4);
	// rotlwi r27,r5,4
	r27.u64 = __builtin_rotateleft32(ctx.r5.u32, 4);
	// add r4,r3,r4
	ctx.r4.u64 = ctx.r3.u64 + ctx.r4.u64;
	// li r6,208
	ctx.r6.s64 = 208;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r3,r27,r28
	ctx.r3.u64 = r27.u64 + r28.u64;
	// bl 0x821e8750
	ctx.lr = 0x821151F0;
	sub_821E8750(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r31,r31,3
	r31.s64 = r31.s64 + 3;
	// bne 0x82115110
	if (!ctx.cr0.eq) goto loc_82115110;
	// mr r30,r29
	r30.u64 = r29.u64;
loc_82115200:
	// lbz r10,1(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 1);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lbz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 0);
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// lbz r8,2(r31)
	ctx.r8.u64 = REX_LOAD_U8(r31.u32 + 2);
	// rotlwi r3,r10,4
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// rotlwi r28,r9,4
	r28.u64 = __builtin_rotateleft32(ctx.r9.u32, 4);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// rotlwi r10,r8,4
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 4);
	// addi r29,r1,160
	r29.s64 = ctx.r1.s64 + 160;
	// add r4,r3,r4
	ctx.r4.u64 = ctx.r3.u64 + ctx.r4.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,208
	ctx.r7.s64 = 208;
	// li r6,255
	ctx.r6.s64 = 255;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r3,r28,r29
	ctx.r3.u64 = r28.u64 + r29.u64;
	// bl 0x821e8750
	ctx.lr = 0x82115248;
	sub_821E8750(ctx, base);
	// lbzu r11,3(r31)
	ea = 3 + r31.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	r31.u32 = ea;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// rotlwi r11,r11,4
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 4);
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// lbz r7,2(r31)
	ctx.r7.u64 = REX_LOAD_U8(r31.u32 + 2);
	// li r9,1
	ctx.r9.s64 = 1;
	// lbz r6,1(r31)
	ctx.r6.u64 = REX_LOAD_U8(r31.u32 + 1);
	// li r8,255
	ctx.r8.s64 = 255;
	// rotlwi r4,r7,4
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r7.u32, 4);
	// rotlwi r29,r6,4
	r29.u64 = __builtin_rotateleft32(ctx.r6.u32, 4);
	// add r5,r4,r5
	ctx.r5.u64 = ctx.r4.u64 + ctx.r5.u64;
	// add r4,r29,r3
	ctx.r4.u64 = r29.u64 + ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x821e8750
	ctx.lr = 0x82115290;
	sub_821E8750(ctx, base);
	// lbzu r11,3(r31)
	ea = 3 + r31.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	r31.u32 = ea;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// rotlwi r11,r11,4
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 4);
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// addi r29,r1,160
	r29.s64 = ctx.r1.s64 + 160;
	// lbz r7,1(r31)
	ctx.r7.u64 = REX_LOAD_U8(r31.u32 + 1);
	// li r9,1
	ctx.r9.s64 = 1;
	// lbz r6,2(r31)
	ctx.r6.u64 = REX_LOAD_U8(r31.u32 + 2);
	// li r8,0
	ctx.r8.s64 = 0;
	// rotlwi r4,r7,4
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r7.u32, 4);
	// rotlwi r5,r6,4
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r6.u32, 4);
	// add r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 + ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,208
	ctx.r6.s64 = 208;
	// add r5,r5,r29
	ctx.r5.u64 = ctx.r5.u64 + r29.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x821e8750
	ctx.lr = 0x821152D8;
	sub_821E8750(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r31,r31,3
	r31.s64 = r31.s64 + 3;
	// bne 0x82115200
	if (!ctx.cr0.eq) goto loc_82115200;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stfs f30,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stfs f27,84(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lis r11,16
	ctx.r11.s64 = 1048576;
	// stfs f31,92(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lis r10,16
	ctx.r10.s64 = 1048576;
	// stfs f30,96(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// ori r11,r11,144
	ctx.r11.u64 = ctx.r11.u64 | 144;
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lfs f0,31144(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 31144);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r10.u32);
	// lfs f13,31140(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 31140);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stw r11,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stw r10,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r10.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stfs f28,112(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// stfs f27,116(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// li r3,4
	ctx.r3.s64 = 4;
	// stfs f31,124(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// stfs f28,128(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f31,140(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f29,432(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 432, temp.u32);
	// stfs f27,436(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 436, temp.u32);
	// stfs f0,440(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 440, temp.u32);
	// stfs f31,444(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 444, temp.u32);
	// stfs f29,448(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 448, temp.u32);
	// stfs f13,452(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 452, temp.u32);
	// stfs f0,456(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 456, temp.u32);
	// stfs f31,460(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 460, temp.u32);
	// stfs f28,464(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 464, temp.u32);
	// stfs f27,468(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 468, temp.u32);
	// stfs f0,472(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 472, temp.u32);
	// stfs f31,476(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 476, temp.u32);
	// stfs f28,480(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 480, temp.u32);
	// stfs f13,484(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 484, temp.u32);
	// stfs f0,488(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 488, temp.u32);
	// stfs f31,492(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 492, temp.u32);
	// bl 0x821e7d98
	ctx.lr = 0x821153A8;
	sub_821E7D98(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r4,r1,432
	ctx.r4.s64 = ctx.r1.s64 + 432;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x821e7d98
	ctx.lr = 0x821153C0;
	sub_821E7D98(ctx, base);
	// b 0x821153cc
	goto loc_821153CC;
loc_821153C4:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,42(r11)
	REX_STORE_U16(ctx.r11.u32 + 42, ctx.r10.u16);
loc_821153CC:
	// lwz r31,-32480(r26)
	r31.u64 = REX_LOAD_U32(r26.u32 + -32480);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f31.f64;
	// lfs f13,72(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,26528(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 26528);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// bl 0x82204b00
	ctx.lr = 0x821153E8;
	sub_82204B00(ctx, base);
	// stfs f1,72(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 72, temp.u32);
	// bl 0x820e0028
	ctx.lr = 0x821153F0;
	sub_820E0028(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f31,428(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 428, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f0,2012(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2012);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,17064(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 17064);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f1,f0,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f1.f64, ctx.f0.f64, ctx.f13.f64)));
	// stfs f0,416(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 416, temp.u32);
	// stfs f0,420(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 420, temp.u32);
	// stfs f0,424(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 424, temp.u32);
	// bl 0x821eb2c0
	ctx.lr = 0x8211541C;
	sub_821EB2C0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f28,20(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f1,f28
	ctx.f1.f64 = f28.f64;
	// addi r6,r1,416
	ctx.r6.s64 = ctx.r1.s64 + 416;
	// addi r5,r10,31040
	ctx.r5.s64 = ctx.r10.s64 + 31040;
	// lfs f2,31136(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 31136);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// bl 0x821eaf80
	ctx.lr = 0x82115448;
	sub_821EAF80(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f4,f29
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f29.f64;
	// li r9,1
	ctx.r9.s64 = 1;
	// fmr f2,f27
	ctx.f2.f64 = f27.f64;
	// li r8,255
	ctx.r8.s64 = 255;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// lfs f5,-8488(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -8488);
	ctx.f5.f64 = double(temp.f32);
	// lfs f3,31036(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 31036);
	ctx.f3.f64 = double(temp.f32);
	// bl 0x821e8688
	ctx.lr = 0x82115470;
	sub_821E8688(ctx, base);
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x822d4f80
	ctx.lr = 0x8211547C;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_8212C940) {
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
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,31920
	ctx.r11.s64 = ctx.r11.s64 + 31920;
	// lis r9,-32175
	ctx.r9.s64 = -2108620800;
	// li r3,29
	ctx.r3.s64 = 29;
	// addi r9,r9,-5720
	ctx.r9.s64 = ctx.r9.s64 + -5720;
	// lfs f0,31220(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 31220);
	ctx.f0.f64 = double(temp.f32);
	// lwa r11,84(r11)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(ctx.r11.u32 + 84));
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// lfs f13,128(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// bl 0x82202fd8
	ctx.lr = 0x8212C98C;
	sub_82202FD8(ctx, base);
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

DEFINE_REX_FUNC(sub_8212EB40) {
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
	ctx.lr = 0x8212EB48;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-32175
	r28.s64 = -2108620800;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,-9292(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + -9292);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x8212ec2c
	if (ctx.cr6.eq) goto loc_8212EC2C;
	// bl 0x8212c6a0
	ctx.lr = 0x8212EB64;
	sub_8212C6A0(ctx, base);
	// li r29,1
	r29.s64 = 1;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(r31.s32, 4, ctx.xer);
	// blt cr6,0x8212eba4
	if (ctx.cr6.lt) goto loc_8212EBA4;
	// cmpwi cr6,r31,8
	ctx.cr6.compare<int32_t>(r31.s32, 8, ctx.xer);
	// ble cr6,0x8212eba0
	if (!ctx.cr6.gt) goto loc_8212EBA0;
	// cmpwi cr6,r31,23
	ctx.cr6.compare<int32_t>(r31.s32, 23, ctx.xer);
	// ble cr6,0x8212eba4
	if (!ctx.cr6.gt) goto loc_8212EBA4;
	// cmpwi cr6,r31,25
	ctx.cr6.compare<int32_t>(r31.s32, 25, ctx.xer);
	// ble cr6,0x8212eba0
	if (!ctx.cr6.gt) goto loc_8212EBA0;
	// cmpwi cr6,r31,61
	ctx.cr6.compare<int32_t>(r31.s32, 61, ctx.xer);
	// ble cr6,0x8212eba4
	if (!ctx.cr6.gt) goto loc_8212EBA4;
	// cmpwi cr6,r31,66
	ctx.cr6.compare<int32_t>(r31.s32, 66, ctx.xer);
	// ble cr6,0x8212eba0
	if (!ctx.cr6.gt) goto loc_8212EBA0;
	// cmpwi cr6,r31,68
	ctx.cr6.compare<int32_t>(r31.s32, 68, ctx.xer);
	// bne cr6,0x8212eba4
	if (!ctx.cr6.eq) goto loc_8212EBA4;
loc_8212EBA0:
	// li r29,0
	r29.s64 = 0;
loc_8212EBA4:
	// lis r11,-32175
	ctx.r11.s64 = -2108620800;
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// addi r11,r11,10224
	ctx.r11.s64 = ctx.r11.s64 + 10224;
	// rlwinm r9,r31,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,15284
	ctx.r10.s64 = ctx.r10.s64 + 15284;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// addi r6,r8,-29112
	ctx.r6.s64 = ctx.r8.s64 + -29112;
	// addi r4,r7,-29124
	ctx.r4.s64 = ctx.r7.s64 + -29124;
	// lwzx r5,r9,r11
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r30,184(r10)
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + 184);
	// bl 0x822d55f8
	ctx.lr = 0x8212EBD8;
	sub_822D55F8(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822ccae0
	ctx.lr = 0x8212EBEC;
	sub_822CCAE0(ctx, base);
	// lis r11,-32175
	ctx.r11.s64 = -2108620800;
	// addi r11,r11,10792
	ctx.r11.s64 = ctx.r11.s64 + 10792;
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8212ec0c
	if (ctx.cr6.eq) goto loc_8212EC0C;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_8212EC0C:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r31,-9292(r28)
	REX_STORE_U32(r28.u32 + -9292, r31.u32);
	// lis r9,-32169
	ctx.r9.s64 = -2108227584;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,2
	ctx.r3.s64 = 2;
	// lfs f1,1992(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f1.f64 = double(temp.f32);
	// stw r11,-23040(r9)
	REX_STORE_U32(ctx.r9.u32 + -23040, ctx.r11.u32);
	// bl 0x8212c760
	ctx.lr = 0x8212EC2C;
	sub_8212C760(ctx, base);
loc_8212EC2C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82131960) {
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
	// lwz r11,-32480(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// lwz r31,80(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82131994
	if (ctx.cr6.eq) goto loc_82131994;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820e48c0
	ctx.lr = 0x8213198C;
	sub_820E48C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c80a8
	ctx.lr = 0x82131994;
	sub_822C80A8(ctx, base);
loc_82131994:
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

DEFINE_REX_FUNC(sub_82132CA8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32175
	ctx.r11.s64 = -2108620800;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addi r11,r11,22984
	ctx.r11.s64 = ctx.r11.s64 + 22984;
	// lbzx r11,r4,r11
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// bne cr6,0x82132cdc
	if (!ctx.cr6.eq) goto loc_82132CDC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// oris r10,r10,2048
	ctx.r10.u64 = ctx.r10.u64 | 134217728;
	// stwx r10,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u32);
	// blr 
	return;
loc_82132CDC:
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// addi r9,r11,58
	ctx.r9.s64 = ctx.r11.s64 + 58;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r3
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// lwzx r8,r11,r3
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// addi r9,r9,4096
	ctx.r9.s64 = ctx.r9.s64 + 4096;
	// oris r8,r8,2048
	ctx.r8.u64 = ctx.r8.u64 | 134217728;
	// stwx r9,r10,r3
	REX_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r9.u32);
	// stwx r8,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r8.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82133C58) {
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
	ctx.lr = 0x82133C6C;
	sub_82133B28(ctx, base);
	// cmpw cr6,r6,r3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x82133cb4
	if (!ctx.cr6.lt) goto loc_82133CB4;
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
	// lbz r11,9(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 9);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// b 0x82133cb8
	goto loc_82133CB8;
loc_82133CB4:
	// li r3,64
	ctx.r3.s64 = 64;
loc_82133CB8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821357D0) {
	REX_FUNC_PROLOGUE();
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82135828
	if (!ctx.cr6.gt) goto loc_82135828;
	// cmpwi cr6,r3,33
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 33, ctx.xer);
	// bge cr6,0x82135828
	if (!ctx.cr6.lt) goto loc_82135828;
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
	// beq cr6,0x82135828
	if (ctx.cr6.eq) goto loc_82135828;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x82135828
	if (ctx.cr6.lt) goto loc_82135828;
	// cmpwi cr6,r5,12
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 12, ctx.xer);
	// bge cr6,0x82135828
	if (!ctx.cr6.lt) goto loc_82135828;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// bge cr6,0x82135814
	if (!ctx.cr6.lt) goto loc_82135814;
	// clrlwi r5,r4,31
	ctx.r5.u64 = ctx.r4.u32 & 0x1;
loc_82135814:
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addis r3,r11,768
	ctx.r3.s64 = ctx.r11.s64 + 50331648;
	// addi r3,r3,26
	ctx.r3.s64 = ctx.r3.s64 + 26;
	// blr 
	return;
loc_82135828:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821365D0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// lwz r9,23912(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 23912);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,516(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 516);
	// add. r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x821365f4
	if (!ctx.cr0.lt) goto loc_821365F4;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82136608
	goto loc_82136608;
loc_821365F4:
	// lis r10,1525
	ctx.r10.s64 = 99942400;
	// ori r10,r10,57500
	ctx.r10.u64 = ctx.r10.u64 | 57500;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82136608
	if (!ctx.cr6.gt) goto loc_82136608;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82136608:
	// stw r11,516(r9)
	REX_STORE_U32(ctx.r9.u32 + 516, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8213A318) {
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
	ctx.lr = 0x8213A320;
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -56, f30.u64);
	// stfd f31,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r10,-32214
	ctx.r10.s64 = -2111176704;
	// lis r8,-32236
	ctx.r8.s64 = -2112618496;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r28,r9
	r28.u64 = ctx.r9.u64;
	// lwz r3,-32480(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// addi r9,r10,-22768
	ctx.r9.s64 = ctx.r10.s64 + -22768;
	// addi r8,r8,-27632
	ctx.r8.s64 = ctx.r8.s64 + -27632;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821f7d50
	ctx.lr = 0x8213A370;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8213a388
	if (ctx.cr0.eq) goto loc_8213A388;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,31764
	ctx.r11.s64 = ctx.r11.s64 + 31764;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8213a38c
	goto loc_8213A38C;
loc_8213A388:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8213A38C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8213a3fc
	if (ctx.cr6.eq) goto loc_8213A3FC;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stfs f31,100(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// stfs f30,104(r3)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// addi r11,r3,80
	ctx.r11.s64 = ctx.r3.s64 + 80;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// stw r10,96(r3)
	REX_STORE_U32(ctx.r3.u32 + 96, ctx.r10.u32);
	// beq cr6,0x8213a3d0
	if (ctx.cr6.eq) goto loc_8213A3D0;
	// li r9,4
	ctx.r9.s64 = 4;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// subf r8,r11,r31
	ctx.r8.u64 = r31.u64 - ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8213A3C0:
	// lwzx r9,r8,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8213a3c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8213A3C0;
loc_8213A3D0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8213a3f4
	if (ctx.cr6.eq) goto loc_8213A3F4;
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r10,r30,-4
	ctx.r10.s64 = r30.s64 + -4;
	// addi r9,r11,24
	ctx.r9.s64 = ctx.r11.s64 + 24;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8213A3E8:
	// lwzu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x8213a3e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8213A3E8;
loc_8213A3F4:
	// stw r29,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, r29.u32);
	// stw r28,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, r28.u32);
loc_8213A3FC:
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

DEFINE_REX_FUNC(sub_82140CE8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
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
	ctx.lr = 0x82140CF0;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x822d4f18
	ctx.lr = 0x82140CF8;
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lbz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// rlwinm r7,r4,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// lfs f0,17064(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 17064);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// rlwinm r29,r10,2,0,29
	r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f29,1996(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	f29.f64 = double(temp.f32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lfs f13,16232(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16232);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r1,104
	ctx.r11.s64 = ctx.r1.s64 + 104;
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f29,84(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// stfs f29,100(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// xori r10,r10,4
	ctx.r10.u64 = ctx.r10.u64 ^ 4;
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r27,r1,96
	r27.s64 = ctx.r1.s64 + 96;
	// stfs f29,104(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r31,r1,176
	r31.s64 = ctx.r1.s64 + 176;
	// lfsx f23,r7,r11
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	f23.f64 = double(temp.f32);
	// addi r28,r1,88
	r28.s64 = ctx.r1.s64 + 88;
	// stfs f29,180(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// stfs f23,176(r1)
	temp.f32 = float(f23.f64);
	REX_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lfsx f22,r7,r9
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	f22.f64 = double(temp.f32);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lfsx f25,r29,r8
	temp.u32 = REX_LOAD_U32(r29.u32 + ctx.r8.u32);
	f25.f64 = double(temp.f32);
	// addi r30,r1,192
	r30.s64 = ctx.r1.s64 + 192;
	// stfs f25,188(r1)
	temp.f32 = float(f25.f64);
	REX_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// lfs f0,-23384(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + -23384);
	ctx.f0.f64 = double(temp.f32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// stfs f22,184(r1)
	temp.f32 = float(f22.f64);
	REX_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lfsx f24,r10,r27
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + r27.u32);
	f24.f64 = double(temp.f32);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// stfs f29,88(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lfsx f21,r29,r28
	temp.u32 = REX_LOAD_U32(r29.u32 + r28.u32);
	f21.f64 = double(temp.f32);
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// lfs f26,-23388(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + -23388);
	f26.f64 = double(temp.f32);
	// stw r8,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r8.u32);
	// lfs f31,1992(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 1992);
	f31.f64 = double(temp.f32);
	// fadds f20,f21,f26
	f20.f64 = double(float(f21.f64 + f26.f64));
	// lfs f30,29340(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 29340);
	f30.f64 = double(temp.f32);
	// stw r9,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r9.u32);
	// lfs f28,-23392(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + -23392);
	f28.f64 = double(temp.f32);
	// stw r10,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r10.u32);
	// stfs f31,124(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// addi r25,r1,208
	r25.s64 = ctx.r1.s64 + 208;
	// stfs f31,140(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// addi r24,r1,224
	r24.s64 = ctx.r1.s64 + 224;
	// stfs f31,156(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stfs f31,172(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stfs f30,120(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// li r3,4
	ctx.r3.s64 = 4;
	// stfs f28,132(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// stfs f30,136(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f30,152(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f28,164(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f30,168(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f21,112(r1)
	temp.f32 = float(f21.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f21,128(r1)
	temp.f32 = float(f21.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f20,144(r1)
	temp.f32 = float(f20.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f20,160(r1)
	temp.f32 = float(f20.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f23,208(r1)
	temp.f32 = float(f23.f64);
	REX_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stfs f29,212(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stfs f22,216(r1)
	temp.f32 = float(f22.f64);
	REX_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stfs f24,220(r1)
	temp.f32 = float(f24.f64);
	REX_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// lwz r10,12(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 12);
	// lwz r9,0(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 0);
	// lwz r8,4(r25)
	ctx.r8.u64 = REX_LOAD_U32(r25.u32 + 4);
	// lwz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 8);
	// stw r11,8(r24)
	REX_STORE_U32(r24.u32 + 8, ctx.r11.u32);
	// stw r8,4(r24)
	REX_STORE_U32(r24.u32 + 4, ctx.r8.u32);
	// stw r9,0(r24)
	REX_STORE_U32(r24.u32 + 0, ctx.r9.u32);
	// stw r10,12(r24)
	REX_STORE_U32(r24.u32 + 12, ctx.r10.u32);
	// bl 0x821e7c08
	ctx.lr = 0x82140E6C;
	sub_821E7C08(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f31,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f31,140(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stfs f31,156(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// stfs f31,172(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lfs f27,-23396(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -23396);
	f27.f64 = double(temp.f32);
	// li r3,4
	ctx.r3.s64 = 4;
	// lfs f0,28328(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 28328);
	ctx.f0.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// stfs f21,112(r1)
	temp.f32 = float(f21.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f27,116(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f30,120(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f21,128(r1)
	temp.f32 = float(f21.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f30,136(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f20,144(r1)
	temp.f32 = float(f20.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f27,148(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f30,152(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f20,160(r1)
	temp.f32 = float(f20.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f0,164(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f30,168(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// bl 0x821e7c08
	ctx.lr = 0x82140ED4;
	sub_821E7C08(ctx, base);
	// stfs f25,188(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f25.f64);
	REX_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f29,184(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// stfs f29,176(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f29,180(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// addi r9,r1,192
	ctx.r9.s64 = ctx.r1.s64 + 192;
	// addi r8,r1,208
	ctx.r8.s64 = ctx.r1.s64 + 208;
	// stfs f31,124(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f31,140(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// addi r7,r1,224
	ctx.r7.s64 = ctx.r1.s64 + 224;
	// lfs f0,-23980(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -23980);
	ctx.f0.f64 = double(temp.f32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// lfsx f0,r29,r28
	temp.u32 = REX_LOAD_U32(r29.u32 + r28.u32);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stfs f31,156(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// li r3,4
	ctx.r3.s64 = 4;
	// stfs f31,172(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// stfs f28,116(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fadds f13,f0,f26
	ctx.f13.f64 = double(float(ctx.f0.f64 + f26.f64));
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stfs f30,120(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lwz r31,12(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stfs f27,132(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lwz r30,0(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stfs f30,136(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stfs f28,148(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stw r10,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// stfs f30,152(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stw r31,12(r9)
	REX_STORE_U32(ctx.r9.u32 + 12, r31.u32);
	// stfs f27,164(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stw r30,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, r30.u32);
	// stfs f30,168(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stw r11,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// stfs f23,208(r1)
	temp.f32 = float(f23.f64);
	REX_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stfs f29,212(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stfs f22,216(r1)
	temp.f32 = float(f22.f64);
	REX_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stfs f24,220(r1)
	temp.f32 = float(f24.f64);
	REX_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lwz r10,4(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lwz r9,8(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// stfs f13,144(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lwz r8,12(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// stfs f13,160(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stw r11,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// stw r10,4(r7)
	REX_STORE_U32(ctx.r7.u32 + 4, ctx.r10.u32);
	// stw r9,8(r7)
	REX_STORE_U32(ctx.r7.u32 + 8, ctx.r9.u32);
	// stw r8,12(r7)
	REX_STORE_U32(ctx.r7.u32 + 12, ctx.r8.u32);
	// bl 0x821e7c08
	ctx.lr = 0x82140FB0;
	sub_821E7C08(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,26832(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 26832);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x8212fe78
	ctx.lr = 0x82140FC0;
	sub_8212FE78(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// addi r27,r11,432
	r27.s64 = ctx.r11.s64 + 432;
	// lfs f31,26792(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 26792);
	f31.f64 = double(temp.f32);
	// beq cr6,0x82141050
	if (ctx.cr6.eq) goto loc_82141050;
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// lwz r11,220(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 220);
	// addi r30,r10,23912
	r30.s64 = ctx.r10.s64 + 23912;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lha r4,5454(r11)
	ctx.r4.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 5454));
	// bl 0x82130450
	ctx.lr = 0x82140FF0;
	sub_82130450(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x821410b8
	if (ctx.cr0.eq) goto loc_821410B8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r5,r11,-23408
	ctx.r5.s64 = ctx.r11.s64 + -23408;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821eb1a0
	ctx.lr = 0x82141010;
	sub_821EB1A0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fsubs f0,f31,f0
	ctx.f0.f64 = double(float(f31.f64 - ctx.f0.f64));
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lfsx f1,r29,r28
	temp.u32 = REX_LOAD_U32(r29.u32 + r28.u32);
	ctx.f1.f64 = double(temp.f32);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// stfd f1,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// addi r3,r10,-23436
	ctx.r3.s64 = ctx.r10.s64 + -23436;
	// lfd f2,-23416(r11)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r11.u32 + -23416);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stfd f2,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f2.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// bl 0x821eacb0
	ctx.lr = 0x8214104C;
	sub_821EACB0(ctx, base);
	// b 0x821410b8
	goto loc_821410B8;
loc_82141050:
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r30,r11,23912
	r30.s64 = ctx.r11.s64 + 23912;
	// lwz r31,23912(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 23912);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq 0x821410d4
	if (ctx.cr0.eq) goto loc_821410D4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r5,r11,30080
	ctx.r5.s64 = ctx.r11.s64 + 30080;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821eb1a0
	ctx.lr = 0x8214107C;
	sub_821EB1A0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fsubs f0,f31,f0
	ctx.f0.f64 = double(float(f31.f64 - ctx.f0.f64));
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lfsx f1,r29,r28
	temp.u32 = REX_LOAD_U32(r29.u32 + r28.u32);
	ctx.f1.f64 = double(temp.f32);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// stfd f1,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// addi r3,r10,-24640
	ctx.r3.s64 = ctx.r10.s64 + -24640;
	// lfd f2,-23416(r11)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r11.u32 + -23416);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stfd f2,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f2.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// bl 0x821eacb0
	ctx.lr = 0x821410B8;
	sub_821EACB0(ctx, base);
loc_821410B8:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// beq cr6,0x821410d4
	if (ctx.cr6.eq) goto loc_821410D4;
	// lwz r11,220(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 220);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lha r4,5454(r11)
	ctx.r4.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 5454));
	// bl 0x821304f8
	ctx.lr = 0x821410D0;
	sub_821304F8(ctx, base);
	// b 0x821410dc
	goto loc_821410DC;
loc_821410D4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82137518
	ctx.lr = 0x821410DC;
	sub_82137518(ctx, base);
loc_821410DC:
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r3,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82141178
	if (ctx.cr6.eq) goto loc_82141178;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r5,r10,-23448
	ctx.r5.s64 = ctx.r10.s64 + -23448;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfd f30,26672(r11)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r11.u32 + 26672);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfd f30,48(r1)
	REX_STORE_U64(ctx.r1.u32 + 48, f30.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// stfd f30,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, f30.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x821eb1a0
	ctx.lr = 0x82141124;
	sub_821EB1A0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfd f30,56(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 56, f30.u64);
	// ld r8,56(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 56);
	// stfd f30,48(r1)
	REX_STORE_U64(ctx.r1.u32 + 48, f30.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// lfs f0,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fsubs f0,f31,f0
	ctx.f0.f64 = double(float(f31.f64 - ctx.f0.f64));
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lfd f2,-23456(r11)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r11.u32 + -23456);
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// stfd f2,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f2.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// lfsx f1,r29,r28
	temp.u32 = REX_LOAD_U32(r29.u32 + r28.u32);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r10,-23472
	ctx.r3.s64 = ctx.r10.s64 + -23472;
	// stfd f1,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// li r6,-1
	ctx.r6.s64 = -1;
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// fmr f4,f30
	ctx.f4.f64 = f30.f64;
	// fmr f3,f30
	ctx.f3.f64 = f30.f64;
	// bl 0x821eacb0
	ctx.lr = 0x82141178;
	sub_821EACB0(ctx, base);
loc_82141178:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// beq cr6,0x82141190
	if (ctx.cr6.eq) goto loc_82141190;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82141190
	if (ctx.cr6.eq) goto loc_82141190;
	// lwz r11,216(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 216);
	// b 0x82141194
	goto loc_82141194;
loc_82141190:
	// lwz r11,220(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 220);
loc_82141194:
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// lha r5,140(r11)
	ctx.r5.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 140));
	// lha r4,100(r11)
	ctx.r4.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 100));
	// lha r3,90(r11)
	ctx.r3.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 90));
	// bl 0x821356e0
	ctx.lr = 0x821411A8;
	sub_821356E0(ctx, base);
	// lwz r31,104(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82141208
	if (ctx.cr6.eq) goto loc_82141208;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r5,r11,28092
	ctx.r5.s64 = ctx.r11.s64 + 28092;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821eb1a0
	ctx.lr = 0x821411CC;
	sub_821EB1A0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fsubs f0,f31,f0
	ctx.f0.f64 = double(float(f31.f64 - ctx.f0.f64));
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lfsx f1,r29,r28
	temp.u32 = REX_LOAD_U32(r29.u32 + r28.u32);
	ctx.f1.f64 = double(temp.f32);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// stfd f1,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// addi r3,r10,-23500
	ctx.r3.s64 = ctx.r10.s64 + -23500;
	// lfd f2,-23480(r11)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r11.u32 + -23480);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stfd f2,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f2.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// bl 0x821eacb0
	ctx.lr = 0x82141208;
	sub_821EACB0(ctx, base);
loc_82141208:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x822d4f64
	ctx.lr = 0x82141214;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_821612D8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x821612E0;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r10,r6,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 6) & 0xFFFFFFC0;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// add r31,r10,r3
	r31.u64 = ctx.r10.u64 + ctx.r3.u64;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x82161344
	if (ctx.cr6.lt) goto loc_82161344;
	// subf r10,r5,r6
	ctx.r10.u64 = ctx.r6.u64 - ctx.r5.u64;
	// addi r28,r11,4
	r28.s64 = ctx.r11.s64 + 4;
	// addi r29,r10,1
	r29.s64 = ctx.r10.s64 + 1;
loc_8216130C:
	// lwzu r11,-4(r28)
	ea = -4 + r28.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	r28.u32 = ea;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82161338
	if (ctx.cr6.lt) goto loc_82161338;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + r30.u64;
	// bl 0x820e02d8
	ctx.lr = 0x82161328;
	sub_820E02D8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820e0368
	ctx.lr = 0x82161338;
	sub_820E0368(ctx, base);
loc_82161338:
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r31,r31,-64
	r31.s64 = r31.s64 + -64;
	// bne 0x8216130c
	if (!ctx.cr0.eq) goto loc_8216130C;
loc_82161344:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82164B28) {
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
	ctx.lr = 0x82164B30;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x822d4f1c
	ctx.lr = 0x82164B38;
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// rlwinm r21,r6,0,30,28
	r21.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// rlwinm r20,r6,0,29,29
	r20.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x4;
	// stw r21,200(r3)
	REX_STORE_U32(ctx.r3.u32 + 200, r21.u32);
	// lfs f26,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f26.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f24,16272(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16272);
	f24.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// stfs f26,196(r3)
	temp.f32 = float(f26.f64);
	REX_STORE_U32(ctx.r3.u32 + 196, temp.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f21,16308(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16308);
	f21.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f27,2000(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2000);
	f27.f64 = double(temp.f32);
	// li r22,0
	r22.s64 = 0;
	// lfs f29,-11676(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -11676);
	f29.f64 = double(temp.f32);
	// addi r24,r3,4
	r24.s64 = ctx.r3.s64 + 4;
	// lfs f28,15944(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 15944);
	f28.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f25,16676(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 16676);
	f25.f64 = double(temp.f32);
	// lfs f22,1992(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 1992);
	f22.f64 = double(temp.f32);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lfs f23,32172(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 32172);
	f23.f64 = double(temp.f32);
	// mr r26,r22
	r26.u64 = r22.u64;
	// mr r31,r24
	r31.u64 = r24.u64;
	// li r19,1
	r19.s64 = 1;
	// addi r23,r11,-11992
	r23.s64 = ctx.r11.s64 + -11992;
loc_82164BB8:
	// lbzx r11,r26,r23
	ctx.r11.u64 = REX_LOAD_U8(r26.u32 + r23.u32);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// rotlwi r11,r11,6
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 6);
	// add r28,r11,r25
	r28.u64 = ctx.r11.u64 + r25.u64;
	// ble cr6,0x82164e5c
	if (!ctx.cr6.gt) goto loc_82164E5C;
	// cmpwi cr6,r26,2
	ctx.cr6.compare<int32_t>(r26.s32, 2, ctx.xer);
	// ble cr6,0x82164d98
	if (!ctx.cr6.gt) goto loc_82164D98;
	// cmpwi cr6,r26,3
	ctx.cr6.compare<int32_t>(r26.s32, 3, ctx.xer);
	// beq cr6,0x82164c90
	if (ctx.cr6.eq) goto loc_82164C90;
	// cmpwi cr6,r26,4
	ctx.cr6.compare<int32_t>(r26.s32, 4, ctx.xer);
	// beq cr6,0x82164c44
	if (ctx.cr6.eq) goto loc_82164C44;
	// ble cr6,0x82164e5c
	if (!ctx.cr6.gt) goto loc_82164E5C;
	// cmpwi cr6,r26,7
	ctx.cr6.compare<int32_t>(r26.s32, 7, ctx.xer);
	// bgt cr6,0x82164e5c
	if (ctx.cr6.gt) goto loc_82164E5C;
	// cmpwi cr6,r21,1
	ctx.cr6.compare<int32_t>(r21.s32, 1, ctx.xer);
	// beq cr6,0x82164c28
	if (ctx.cr6.eq) goto loc_82164C28;
	// lwz r11,80(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82164c28
	if (ctx.cr6.eq) goto loc_82164C28;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f2,56(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 56);
	ctx.f2.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f1,48(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 48);
	ctx.f1.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82125860
	ctx.lr = 0x82164C1C;
	sub_82125860(ctx, base);
	// lfs f0,220(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 220);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// b 0x82164c2c
	goto loc_82164C2C;
loc_82164C28:
	// lfs f0,76(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
loc_82164C2C:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// lfs f0,52(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-4(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + -4, temp.u32);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// b 0x82164e8c
	goto loc_82164E8C;
loc_82164C44:
	// stfs f26,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f26.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stfs f26,100(r1)
	temp.f32 = float(f26.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stfs f23,104(r1)
	temp.f32 = float(f23.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfs f22,108(r1)
	temp.f32 = float(f22.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x820e1df8
	ctx.lr = 0x82164C64;
	sub_820E1DF8(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f2,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f2.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f1,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82125860
	ctx.lr = 0x82164C7C;
	sub_82125860(ctx, base);
	// lfs f0,220(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 220);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// stw r19,8(r31)
	REX_STORE_U32(r31.u32 + 8, r19.u32);
	// stfs f13,-4(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + -4, temp.u32);
	// b 0x82164e84
	goto loc_82164E84;
loc_82164C90:
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f26,84(r1)
	temp.f32 = float(f26.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,8(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x820e2290
	ctx.lr = 0x82164CB0;
	sub_820E2290(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// fmr f1,f25
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f25.f64;
	// bl 0x820e1cc0
	ctx.lr = 0x82164CBC;
	sub_820E1CC0(ctx, base);
	// lfs f0,56(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,48(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f12,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f11,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// fadds f2,f12,f0
	ctx.f2.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fadds f1,f13,f11
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// bl 0x82125860
	ctx.lr = 0x82164CE4;
	sub_82125860(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// fmuls f13,f0,f29
	ctx.f13.f64 = double(float(ctx.f0.f64 * f29.f64));
	// lfs f12,220(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 220);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f0,f27
	ctx.f11.f64 = double(float(ctx.f0.f64 * f27.f64));
	// lfs f0,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,56(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 56);
	ctx.f10.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f9,48(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 48);
	ctx.f9.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// fadds f31,f1,f12
	f31.f64 = double(float(ctx.f1.f64 + ctx.f12.f64));
	// fmsubs f13,f0,f28,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f0.f64, f28.f64, -ctx.f13.f64)));
	// fmsubs f0,f0,f29,f11
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f29.f64, -ctx.f11.f64)));
	// fadds f2,f13,f10
	ctx.f2.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// fadds f1,f0,f9
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f9.f64));
	// bl 0x82125860
	ctx.lr = 0x82164D24;
	sub_82125860(ctx, base);
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// fmuls f13,f0,f27
	ctx.f13.f64 = double(float(ctx.f0.f64 * f27.f64));
	// lfs f12,220(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 220);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f0,f29
	ctx.f11.f64 = double(float(ctx.f0.f64 * f29.f64));
	// lfs f0,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,56(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 56);
	ctx.f10.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f9,48(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 48);
	ctx.f9.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// fadds f30,f1,f12
	f30.f64 = double(float(ctx.f1.f64 + ctx.f12.f64));
	// fmsubs f13,f0,f29,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f0.f64, f29.f64, -ctx.f13.f64)));
	// fmsubs f0,f0,f28,f11
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f28.f64, -ctx.f11.f64)));
	// fadds f2,f13,f10
	ctx.f2.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// fadds f1,f0,f9
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f9.f64));
	// bl 0x82125860
	ctx.lr = 0x82164D64;
	sub_82125860(ctx, base);
	// lfs f0,220(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 220);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f30
	ctx.cr6.compare(f31.f64, f30.f64);
	// fadds f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// bge cr6,0x82164d78
	if (!ctx.cr6.lt) goto loc_82164D78;
	// fmr f31,f30
	f31.f64 = f30.f64;
loc_82164D78:
	// fcmpu cr6,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f31.f64, ctx.f0.f64);
	// blt cr6,0x82164d84
	if (ctx.cr6.lt) goto loc_82164D84;
	// fmr f0,f31
	ctx.f0.f64 = f31.f64;
loc_82164D84:
	// stfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// lfs f0,52(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stw r22,8(r31)
	REX_STORE_U32(r31.u32 + 8, r22.u32);
	// stfs f0,-4(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + -4, temp.u32);
	// b 0x82164e8c
	goto loc_82164E8C;
loc_82164D98:
	// cmpwi cr6,r26,1
	ctx.cr6.compare<int32_t>(r26.s32, 1, ctx.xer);
	// bne cr6,0x82164dac
	if (!ctx.cr6.eq) goto loc_82164DAC;
	// addi r30,r25,1088
	r30.s64 = r25.s64 + 1088;
	// addi r29,r25,1152
	r29.s64 = r25.s64 + 1152;
	// b 0x82164db4
	goto loc_82164DB4;
loc_82164DAC:
	// addi r30,r25,1344
	r30.s64 = r25.s64 + 1344;
	// addi r29,r25,1408
	r29.s64 = r25.s64 + 1408;
loc_82164DB4:
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f2,56(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 56);
	ctx.f2.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f1,48(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 48);
	ctx.f1.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82125860
	ctx.lr = 0x82164DCC;
	sub_82125860(ctx, base);
	// lfs f0,220(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 220);
	ctx.f0.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// fadds f31,f1,f0
	f31.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f2,56(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 56);
	ctx.f2.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f1,48(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 48);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82125860
	ctx.lr = 0x82164DEC;
	sub_82125860(ctx, base);
	// lfs f13,52(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,220(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 220);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f13,f31
	ctx.f12.f64 = double(float(ctx.f13.f64 - f31.f64));
	// fadds f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// lfs f13,52(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f12,f26
	ctx.cr6.compare(ctx.f12.f64, f26.f64);
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// blt cr6,0x82164e38
	if (ctx.cr6.lt) goto loc_82164E38;
	// fcmpu cr6,f13,f26
	ctx.cr6.compare(ctx.f13.f64, f26.f64);
	// blt cr6,0x82164e48
	if (ctx.cr6.lt) goto loc_82164E48;
	// fsubs f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 - f31.f64));
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f24
	ctx.cr6.compare(ctx.f13.f64, f24.f64);
	// blt cr6,0x82164e48
	if (ctx.cr6.lt) goto loc_82164E48;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bge cr6,0x82164e48
	if (!ctx.cr6.lt) goto loc_82164E48;
loc_82164E2C:
	// stfs f31,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// lfs f0,52(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82164e50
	goto loc_82164E50;
loc_82164E38:
	// fcmpu cr6,f13,f26
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, f26.f64);
	// bge cr6,0x82164e48
	if (!ctx.cr6.lt) goto loc_82164E48;
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bgt cr6,0x82164e2c
	if (ctx.cr6.gt) goto loc_82164E2C;
loc_82164E48:
	// stfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// lfs f0,52(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
loc_82164E50:
	// stfs f0,-4(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + -4, temp.u32);
	// stw r19,8(r31)
	REX_STORE_U32(r31.u32 + 8, r19.u32);
	// b 0x82164e8c
	goto loc_82164E8C;
loc_82164E5C:
	// lfs f0,52(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stfs f0,-4(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + -4, temp.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f2,56(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 56);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,48(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 48);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82125860
	ctx.lr = 0x82164E7C;
	sub_82125860(ctx, base);
	// lfs f0,220(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 220);
	ctx.f0.f64 = double(temp.f32);
	// stw r22,8(r31)
	REX_STORE_U32(r31.u32 + 8, r22.u32);
loc_82164E84:
	// fadds f0,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
loc_82164E8C:
	// lfs f0,-4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// fsubs f0,f0,f21
	ctx.f0.f64 = double(float(ctx.f0.f64 - f21.f64));
	// beq cr6,0x82164f10
	if (ctx.cr6.eq) goto loc_82164F10;
	// lfs f13,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82164f1c
	if (ctx.cr6.lt) goto loc_82164F1C;
loc_82164EA8:
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
loc_82164EAC:
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// beq cr6,0x82164ec8
	if (ctx.cr6.eq) goto loc_82164EC8;
	// lfs f0,52(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,52(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
loc_82164EC8:
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r31,r31,24
	r31.s64 = r31.s64 + 24;
	// cmpwi cr6,r26,8
	ctx.cr6.compare<int32_t>(r26.s32, 8, ctx.xer);
	// blt cr6,0x82164bb8
	if (ctx.cr6.lt) goto loc_82164BB8;
	// lfs f0,28(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,52(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f0,f12
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fabs f11,f13
	ctx.f11.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f11,f24
	ctx.cr6.compare(ctx.f11.f64, f24.f64);
	// ble cr6,0x82164f3c
	if (!ctx.cr6.gt) goto loc_82164F3C;
	// fcmpu cr6,f13,f26
	ctx.cr6.compare(ctx.f13.f64, f26.f64);
	// ble cr6,0x82164f24
	if (!ctx.cr6.gt) goto loc_82164F24;
	// lfs f13,0(r24)
	temp.u32 = REX_LOAD_U32(r24.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fcmpu cr6,f13,f24
	ctx.cr6.compare(ctx.f13.f64, f24.f64);
	// bge cr6,0x82164f60
	if (!ctx.cr6.lt) goto loc_82164F60;
	// stfs f0,52(r27)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r27.u32 + 52, temp.u32);
	// b 0x82164f60
	goto loc_82164F60;
loc_82164F10:
	// lfs f13,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82164ea8
	if (ctx.cr6.gt) goto loc_82164EA8;
loc_82164F1C:
	// mr r11,r19
	ctx.r11.u64 = r19.u64;
	// b 0x82164eac
	goto loc_82164EAC;
loc_82164F24:
	// lfs f0,0(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r24.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fcmpu cr6,f0,f24
	ctx.cr6.compare(ctx.f0.f64, f24.f64);
	// bge cr6,0x82164f60
	if (!ctx.cr6.lt) goto loc_82164F60;
	// stfs f12,28(r27)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r27.u32 + 28, temp.u32);
	// b 0x82164f60
	goto loc_82164F60;
loc_82164F3C:
	// lwz r11,80(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82164f60
	if (!ctx.cr6.eq) goto loc_82164F60;
	// lfs f13,76(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 76);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fcmpu cr6,f0,f24
	ctx.cr6.compare(ctx.f0.f64, f24.f64);
	// ble cr6,0x82164f60
	if (!ctx.cr6.gt) goto loc_82164F60;
	// stfs f13,52(r27)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r27.u32 + 52, temp.u32);
	// stfs f13,28(r27)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r27.u32 + 28, temp.u32);
loc_82164F60:
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// bne cr6,0x821650d0
	if (!ctx.cr6.eq) goto loc_821650D0;
	// cmpwi cr6,r21,1
	ctx.cr6.compare<int32_t>(r21.s32, 1, ctx.xer);
	// beq cr6,0x8216506c
	if (ctx.cr6.eq) goto loc_8216506C;
	// lfs f0,24(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r27,24
	ctx.r11.s64 = r27.s64 + 24;
	// lfs f13,48(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r27,48
	ctx.r10.s64 = r27.s64 + 48;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82164f94
	if (!ctx.cr6.gt) goto loc_82164F94;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82164F94:
	// li r8,5
	ctx.r8.s64 = 5;
	// addi r7,r27,72
	ctx.r7.s64 = r27.s64 + 72;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82164FA4:
	// lwz r8,8(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8216503c
	if (ctx.cr6.eq) goto loc_8216503C;
	// lwz r8,12(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// blt cr6,0x8216503c
	if (ctx.cr6.lt) goto loc_8216503C;
	// bne cr6,0x82164ff8
	if (!ctx.cr6.eq) goto loc_82164FF8;
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bgt cr6,0x82165014
	if (ctx.cr6.gt) goto loc_82165014;
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82165014
	if (ctx.cr6.lt) goto loc_82165014;
	// lwz r8,12(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bgt cr6,0x82165038
	if (ctx.cr6.gt) goto loc_82165038;
	// lfs f13,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8216503c
	if (!ctx.cr6.lt) goto loc_8216503C;
	// b 0x82165038
	goto loc_82165038;
loc_82164FF8:
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82165020
	if (!ctx.cr6.lt) goto loc_82165020;
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x82165020
	if (!ctx.cr6.gt) goto loc_82165020;
loc_82165014:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x8216503c
	goto loc_8216503C;
loc_82165020:
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8216503c
	if (!ctx.cr6.lt) goto loc_8216503C;
	// lwz r8,12(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x8216503c
	if (!ctx.cr6.gt) goto loc_8216503C;
loc_82165038:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8216503C:
	// addi r9,r9,24
	ctx.r9.s64 = ctx.r9.s64 + 24;
	// bdnz 0x82164fa4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82164FA4;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82165060
	if (ctx.cr6.eq) goto loc_82165060;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x821650d8
	if (ctx.cr6.eq) goto loc_821650D8;
	// lwz r9,80(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 80);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821650d8
	if (ctx.cr6.eq) goto loc_821650D8;
loc_82165060:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x821650d8
	goto loc_821650D8;
loc_8216506C:
	// li r9,7
	ctx.r9.s64 = 7;
	// lfs f13,72(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
	// addi r10,r27,24
	ctx.r10.s64 = r27.s64 + 24;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82165080:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x821650b4
	if (ctx.cr6.gt) goto loc_821650B4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821650b0
	if (ctx.cr6.eq) goto loc_821650B0;
	// lfs f12,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f11,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x821650b4
	if (!ctx.cr6.lt) goto loc_821650B4;
loc_821650B0:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_821650B4:
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// bdnz 0x82165080
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82165080;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821650c8
	if (!ctx.cr6.eq) goto loc_821650C8;
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_821650C8:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x821650d8
	goto loc_821650D8;
loc_821650D0:
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_821650D8:
	// cmpwi cr6,r21,1
	ctx.cr6.compare<int32_t>(r21.s32, 1, ctx.xer);
	// beq cr6,0x8216515c
	if (ctx.cr6.eq) goto loc_8216515C;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// bne cr6,0x8216515c
	if (!ctx.cr6.eq) goto loc_8216515C;
	// lwz r9,12(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lfs f13,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// neg r7,r9
	ctx.r7.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// neg r6,r8
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r8.u64);
	// andc r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 & ~ctx.r9.u64;
	// andc r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 & ~ctx.r8.u64;
	// rlwinm r9,r9,2,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x2;
	// rlwinm r8,r8,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// blt cr6,0x8216513c
	if (ctx.cr6.lt) goto loc_8216513C;
	// lfs f0,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// beq cr6,0x82165144
	if (ctx.cr6.eq) goto loc_82165144;
	// lfs f12,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82165144
	if (!ctx.cr6.gt) goto loc_82165144;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x82165144
	goto loc_82165144;
loc_8216513C:
	// lfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
loc_82165144:
	// fmr f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f0.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,196(r27)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r27.u32 + 196, temp.u32);
	// lfs f0,2012(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2012);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// b 0x82165168
	goto loc_82165168;
loc_8216515C:
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
loc_82165168:
	// stfs f0,196(r27)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r27.u32 + 196, temp.u32);
	// stb r19,192(r27)
	REX_STORE_U8(r27.u32 + 192, r19.u8);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x822d4f68
	ctx.lr = 0x8216517C;
	// b 0x822d4eb4
	return;
}

DEFINE_REX_FUNC(sub_8217E778) {
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
	ctx.lr = 0x8217E780;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r11,13128
	ctx.r11.s64 = ctx.r11.s64 + 13128;
	// addi r10,r10,-4664
	ctx.r10.s64 = ctx.r10.s64 + -4664;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f0,1836(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1836);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f2
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// lfs f13,20484(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 20484);
	ctx.f13.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,192(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 192, temp.u32);
	// lfs f5,1992(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 1992);
	ctx.f5.f64 = double(temp.f32);
	// stw r9,368(r3)
	REX_STORE_U32(ctx.r3.u32 + 368, ctx.r9.u32);
	// stfs f3,196(r3)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r3.u32 + 196, temp.u32);
	// stw r11,200(r3)
	REX_STORE_U32(ctx.r3.u32 + 200, ctx.r11.u32);
	// stw r11,212(r3)
	REX_STORE_U32(ctx.r3.u32 + 212, ctx.r11.u32);
	// lfs f0,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,360(r3)
	REX_STORE_U32(ctx.r3.u32 + 360, ctx.r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,364(r3)
	REX_STORE_U32(ctx.r3.u32 + 364, ctx.r11.u32);
	// stfs f0,232(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 232, temp.u32);
	// stfs f0,236(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 236, temp.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// stfs f5,240(r3)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r3.u32 + 240, temp.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stfs f5,248(r3)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r3.u32 + 248, temp.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stfs f0,252(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 252, temp.u32);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stfs f5,256(r3)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r3.u32 + 256, temp.u32);
	// addic. r7,r3,112
	ctx.xer.ca = ctx.r3.u32 > 4294967183;
	ctx.r7.s64 = ctx.r3.s64 + 112;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stfs f0,264(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 264, temp.u32);
	// addi r10,r3,232
	ctx.r10.s64 = ctx.r3.s64 + 232;
	// stfs f5,268(r3)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r3.u32 + 268, temp.u32);
	// stfs f5,272(r3)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r3.u32 + 272, temp.u32);
	// stfs f5,280(r3)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r3.u32 + 280, temp.u32);
	// stfs f5,284(r3)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r3.u32 + 284, temp.u32);
	// stfs f5,288(r3)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r3.u32 + 288, temp.u32);
	// std r9,80(r3)
	REX_STORE_U64(ctx.r3.u32 + 80, ctx.r9.u64);
	// sth r8,88(r3)
	REX_STORE_U16(ctx.r3.u32 + 88, ctx.r8.u16);
	// stb r8,90(r3)
	REX_STORE_U8(ctx.r3.u32 + 90, ctx.r8.u8);
	// beq 0x8217e840
	if (ctx.cr0.eq) goto loc_8217E840;
	// stw r7,92(r3)
	REX_STORE_U32(ctx.r3.u32 + 92, ctx.r7.u32);
	// b 0x8217e844
	goto loc_8217E844;
loc_8217E840:
	// stw r11,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r11.u32);
loc_8217E844:
	// lis r6,-32166
	ctx.r6.s64 = -2108030976;
	// stw r10,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r10.u32);
	// lis r9,-32173
	ctx.r9.s64 = -2108489728;
	// stb r8,61(r31)
	REX_STORE_U8(r31.u32 + 61, ctx.r8.u8);
	// addi r28,r6,7808
	r28.s64 = ctx.r6.s64 + 7808;
	// stw r8,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r8.u32);
	// addi r7,r9,-4224
	ctx.r7.s64 = ctx.r9.s64 + -4224;
	// stb r11,105(r31)
	REX_STORE_U8(r31.u32 + 105, ctx.r11.u8);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// stb r11,106(r31)
	REX_STORE_U8(r31.u32 + 106, ctx.r11.u8);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,107(r31)
	REX_STORE_U8(r31.u32 + 107, ctx.r11.u8);
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r11,109(r31)
	REX_STORE_U8(r31.u32 + 109, ctx.r11.u8);
	// addi r8,r7,112
	ctx.r8.s64 = ctx.r7.s64 + 112;
	// stfs f0,7808(r6)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r6.u32 + 7808, temp.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stfs f0,4(r28)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r28.u32 + 4, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f0,8(r28)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r28.u32 + 8, temp.u32);
	// stfs f5,12(r28)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(r28.u32 + 12, temp.u32);
	// fmr f2,f1
	ctx.f2.f64 = ctx.f1.f64;
	// fmr f4,f5
	ctx.f4.f64 = ctx.f5.f64;
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// fmr f3,f5
	ctx.f3.f64 = ctx.f5.f64;
	// bl 0x8210ded0
	ctx.lr = 0x8217E8AC;
	sub_8210DED0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7888
	ctx.lr = 0x8217E8BC;
	sub_821E7888(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82181F78) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x82181F80;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,3092(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 3092);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r10,3088(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3088);
	// addi r30,r3,16
	r30.s64 = ctx.r3.s64 + 16;
	// li r31,0
	r31.s64 = 0;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82181fb4
	if (ctx.cr6.eq) goto loc_82181FB4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// mulli r11,r11,24
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(24));
	// lwzx r11,r11,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// addi r31,r11,1
	r31.s64 = ctx.r11.s64 + 1;
loc_82181FB4:
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
	// add r28,r11,r4
	r28.u64 = ctx.r11.u64 + ctx.r4.u64;
	// cmpw cr6,r31,r28
	ctx.cr6.compare<int32_t>(r31.s32, r28.s32, ctx.xer);
	// ble cr6,0x82181fcc
	if (!ctx.cr6.gt) goto loc_82181FCC;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82182034
	goto loc_82182034;
loc_82181FCC:
	// bge cr6,0x82182030
	if (!ctx.cr6.lt) goto loc_82182030;
loc_82181FD0:
	// lwz r11,3076(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 3076);
	// lwz r10,3072(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 3072);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82181ff4
	if (ctx.cr6.eq) goto loc_82181FF4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// mulli r11,r11,24
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(24));
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + r30.u64;
	// b 0x82182018
	goto loc_82182018;
loc_82181FF4:
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r5,18
	ctx.r5.s64 = 18;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r10,84(r1)
	REX_STORE_U8(ctx.r1.u32 + 84, ctx.r10.u8);
	// addi r3,r1,85
	ctx.r3.s64 = ctx.r1.s64 + 85;
	// bl 0x822d5870
	ctx.lr = 0x82182014;
	sub_822D5870(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_82182018:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82181f20
	ctx.lr = 0x82182024;
	sub_82181F20(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r28
	ctx.cr6.compare<int32_t>(r31.s32, r28.s32, ctx.xer);
	// blt cr6,0x82181fd0
	if (ctx.cr6.lt) goto loc_82181FD0;
loc_82182030:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_82182034:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_821843C0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x821843e0
	goto loc_821843E0;
loc_821843CC:
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 4);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_821843E0:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x821843cc
	if (!ctx.cr6.eq) goto loc_821843CC;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82184B38) {
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
	ctx.lr = 0x82184B40;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,76(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// bl 0x82184390
	ctx.lr = 0x82184B5C;
	sub_82184390(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82184b70
	if (ctx.cr0.eq) goto loc_82184B70;
	// lbz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82184d10
	if (!ctx.cr0.eq) goto loc_82184D10;
loc_82184B70:
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// lhz r11,64(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 64);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82184b88
	if (!ctx.cr0.eq) goto loc_82184B88;
	// li r4,18
	ctx.r4.s64 = 18;
	// b 0x82184ce8
	goto loc_82184CE8;
loc_82184B88:
	// lbz r11,101(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 101);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82184d10
	if (!ctx.cr0.eq) goto loc_82184D10;
	// ld r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U64(r30.u32 + 8);
	// li r28,0
	r28.s64 = 0;
	// li r25,1
	r25.s64 = 1;
	// lwz r3,96(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 96);
	// std r28,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, r28.u64);
	// li r7,0
	ctx.r7.s64 = 0;
	// std r28,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, r28.u64);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// std r28,136(r1)
	REX_STORE_U64(ctx.r1.u32 + 136, r28.u64);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// std r11,168(r31)
	REX_STORE_U64(r31.u32 + 168, ctx.r11.u64);
	// li r4,1
	ctx.r4.s64 = 1;
	// ld r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U64(r30.u32 + 32);
	// addi r27,r30,32
	r27.s64 = r30.s64 + 32;
	// stw r25,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r25.u32);
	// std r11,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// stw r28,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r28.u32);
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// bl 0x82233da0
	ctx.lr = 0x82184BE4;
	sub_82233DA0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82184cd8
	if (!ctx.cr0.eq) goto loc_82184CD8;
	// lwz r3,76(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 76);
	// lwz r29,20(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82184c14
	if (ctx.cr6.eq) goto loc_82184C14;
	// ld r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U64(r30.u32 + 0);
	// std r11,8(r29)
	REX_STORE_U64(r29.u32 + 8, ctx.r11.u64);
	// ld r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U64(r27.u32 + 0);
	// std r11,16(r29)
	REX_STORE_U64(r29.u32 + 16, ctx.r11.u64);
	// stw r26,40(r29)
	REX_STORE_U32(r29.u32 + 40, r26.u32);
	// b 0x82184c34
	goto loc_82184C34;
loc_82184C14:
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// ld r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U64(r30.u32 + 0);
	// addi r6,r30,16
	ctx.r6.s64 = r30.s64 + 16;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// bl 0x821845d8
	ctx.lr = 0x82184C28;
	sub_821845D8(ctx, base);
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r3,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r3.u32);
loc_82184C34:
	// bl 0x822094c8
	ctx.lr = 0x82184C38;
	sub_822094C8(ctx, base);
	// stw r3,48(r29)
	REX_STORE_U32(r29.u32 + 48, ctx.r3.u32);
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// lwz r10,40(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 40);
	// stw r10,92(r11)
	REX_STORE_U32(ctx.r11.u32 + 92, ctx.r10.u32);
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// lwz r10,44(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 44);
	// stw r10,96(r11)
	REX_STORE_U32(ctx.r11.u32 + 96, ctx.r10.u32);
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// lwz r10,48(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 48);
	// stw r10,100(r11)
	REX_STORE_U32(ctx.r11.u32 + 100, ctx.r10.u32);
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// lwz r10,52(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 52);
	// stw r10,104(r11)
	REX_STORE_U32(ctx.r11.u32 + 104, ctx.r10.u32);
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// lwz r10,56(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 56);
	// stw r10,108(r11)
	REX_STORE_U32(ctx.r11.u32 + 108, ctx.r10.u32);
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// lwz r10,60(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 60);
	// stw r10,112(r11)
	REX_STORE_U32(ctx.r11.u32 + 112, ctx.r10.u32);
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// lhz r10,66(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 66);
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r10,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stb r10,116(r11)
	REX_STORE_U8(ctx.r11.u32 + 116, ctx.r10.u8);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82188300
	ctx.lr = 0x82184CA0;
	sub_82188300(ctx, base);
	// lbz r11,437(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 437);
	// stw r3,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r28,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r28.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r28,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r28.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r28,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r28.u32);
	// lwz r3,96(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 96);
	// bl 0x82233cf0
	ctx.lr = 0x82184CD0;
	sub_82233CF0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82184cf4
	if (ctx.cr0.eq) goto loc_82184CF4;
loc_82184CD8:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82209598
	ctx.lr = 0x82184CE0;
	sub_82209598(ctx, base);
	// stw r25,4(r31)
	REX_STORE_U32(r31.u32 + 4, r25.u32);
	// li r4,16
	ctx.r4.s64 = 16;
loc_82184CE8:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82187d00
	ctx.lr = 0x82184CF0;
	sub_82187D00(ctx, base);
	// b 0x82184d10
	goto loc_82184D10;
loc_82184CF4:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82188300
	ctx.lr = 0x82184CFC;
	sub_82188300(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ld r4,88(r31)
	ctx.r4.u64 = REX_LOAD_U64(r31.u32 + 88);
	// lwz r3,76(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 76);
	// bl 0x82184578
	ctx.lr = 0x82184D0C;
	sub_82184578(ctx, base);
	// stb r25,101(r31)
	REX_STORE_U8(r31.u32 + 101, r25.u8);
loc_82184D10:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_8218BF28) {
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
	ctx.lr = 0x8218BF30;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// li r4,6
	ctx.r4.s64 = 6;
	// addi r3,r11,84
	ctx.r3.s64 = ctx.r11.s64 + 84;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// mr r30,r9
	r30.u64 = ctx.r9.u64;
	// mr r25,r10
	r25.u64 = ctx.r10.u64;
	// bl 0x821d6210
	ctx.lr = 0x8218BF64;
	sub_821D6210(ctx, base);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// addi r6,r8,2368
	ctx.r6.s64 = ctx.r8.s64 + 2368;
	// addi r9,r11,-19336
	ctx.r9.s64 = ctx.r11.s64 + -19336;
	// addi r8,r10,-17776
	ctx.r8.s64 = ctx.r10.s64 + -17776;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,128
	ctx.r4.s64 = 128;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821f7d50
	ctx.lr = 0x8218BF90;
	sub_821F7D50(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8218bfb0
	if (ctx.cr0.eq) goto loc_8218BFB0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r10,r10,31764
	ctx.r10.s64 = ctx.r10.s64 + 31764;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x8218bfb4
	goto loc_8218BFB4;
loc_8218BFB0:
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
loc_8218BFB4:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8218c08c
	if (ctx.cr6.eq) goto loc_8218C08C;
	// addi r31,r27,80
	r31.s64 = r27.s64 + 80;
	// stw r27,140(r27)
	REX_STORE_U32(r27.u32 + 140, r27.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// stw r26,144(r27)
	REX_STORE_U32(r27.u32 + 144, r26.u32);
	// stw r29,184(r27)
	REX_STORE_U32(r27.u32 + 184, r29.u32);
	// stw r11,88(r27)
	REX_STORE_U32(r27.u32 + 88, ctx.r11.u32);
	// stw r28,188(r27)
	REX_STORE_U32(r27.u32 + 188, r28.u32);
	// stw r11,192(r27)
	REX_STORE_U32(r27.u32 + 192, ctx.r11.u32);
	// stw r30,196(r27)
	REX_STORE_U32(r27.u32 + 196, r30.u32);
	// beq cr6,0x8218bfe8
	if (ctx.cr6.eq) goto loc_8218BFE8;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
loc_8218BFE8:
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
	// stw r10,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// beq cr6,0x8218c008
	if (ctx.cr6.eq) goto loc_8218C008;
	// stw r25,68(r31)
	REX_STORE_U32(r31.u32 + 68, r25.u32);
	// b 0x8218c010
	goto loc_8218C010;
loc_8218C008:
	// addi r11,r31,76
	ctx.r11.s64 = r31.s64 + 76;
	// stw r11,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r11.u32);
loc_8218C010:
	// lwz r10,228(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r11,236(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r10.u32);
	// bne cr6,0x8218c028
	if (!ctx.cr6.eq) goto loc_8218C028;
	// addi r11,r31,96
	ctx.r11.s64 = r31.s64 + 96;
loc_8218C028:
	// stw r11,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r11.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,244(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f2,16264(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16264);
	ctx.f2.f64 = double(temp.f32);
	// stw r11,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r11.u32);
	// lfs f1,1996(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821ff668
	ctx.lr = 0x8218C048;
	sub_821FF668(ctx, base);
	// addi r6,r31,32
	ctx.r6.s64 = r31.s64 + 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x821a16b8
	ctx.lr = 0x8218C05C;
	sub_821A16B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8218c084
	if (ctx.cr0.eq) goto loc_8218C084;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8218af10
	ctx.lr = 0x8218C070;
	sub_8218AF10(ctx, base);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x8218c07c
	if (ctx.cr6.eq) goto loc_8218C07C;
	// stw r31,0(r26)
	REX_STORE_U32(r26.u32 + 0, r31.u32);
loc_8218C07C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x8218c090
	goto loc_8218C090;
loc_8218C084:
	// li r11,12
	ctx.r11.s64 = 12;
	// stb r11,36(r27)
	REX_STORE_U8(r27.u32 + 36, ctx.r11.u8);
loc_8218C08C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8218C090:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_821918A0) {
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
	ctx.lr = 0x821918A8;
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r10,15636
	ctx.r6.s64 = ctx.r10.s64 + 15636;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,-32480(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// bl 0x821f7d50
	ctx.lr = 0x821918EC;
	sub_821F7D50(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82191908
	if (ctx.cr0.eq) goto loc_82191908;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,31764
	ctx.r11.s64 = ctx.r11.s64 + 31764;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8219190c
	goto loc_8219190C;
loc_82191908:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_8219190C:
	// addi r9,r3,80
	ctx.r9.s64 = ctx.r3.s64 + 80;
	// stw r29,100(r3)
	REX_STORE_U32(ctx.r3.u32 + 100, r29.u32);
	// lis r8,-32174
	ctx.r8.s64 = -2108555264;
	// stb r10,91(r3)
	REX_STORE_U8(ctx.r3.u32 + 91, ctx.r10.u8);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r28,104(r3)
	REX_STORE_U8(ctx.r3.u32 + 104, r28.u8);
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
	// addi r8,r8,-14872
	ctx.r8.s64 = ctx.r8.s64 + -14872;
	// stb r11,106(r3)
	REX_STORE_U8(ctx.r3.u32 + 106, ctx.r11.u8);
	// stw r9,92(r3)
	REX_STORE_U32(ctx.r3.u32 + 92, ctx.r9.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r8,96(r3)
	REX_STORE_U32(ctx.r3.u32 + 96, ctx.r8.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// std r11,80(r3)
	REX_STORE_U64(ctx.r3.u32 + 80, ctx.r11.u64);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// sth r11,88(r3)
	REX_STORE_U16(ctx.r3.u32 + 88, ctx.r11.u16);
	// li r5,-256
	ctx.r5.s64 = -256;
	// stb r11,90(r3)
	REX_STORE_U8(ctx.r3.u32 + 90, ctx.r11.u8);
	// lis r4,-32168
	ctx.r4.s64 = -2108162048;
	// stb r11,109(r3)
	REX_STORE_U8(ctx.r3.u32 + 109, ctx.r11.u8);
	// lfs f0,2028(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2028);
	ctx.f0.f64 = double(temp.f32);
	// stb r11,105(r3)
	REX_STORE_U8(ctx.r3.u32 + 105, ctx.r11.u8);
	// lfs f13,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,112(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// fmuls f0,f31,f0
	ctx.f0.f64 = double(float(f31.f64 * ctx.f0.f64));
	// lfs f13,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfs f13,116(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lfs f0,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,120(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// lfs f13,2000(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 2000);
	ctx.f13.f64 = double(temp.f32);
	// or r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 | ctx.r5.u64;
	// lfs f0,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,160(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 160, temp.u32);
	// lfs f12,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// stb r11,188(r3)
	REX_STORE_U8(ctx.r3.u32 + 188, ctx.r11.u8);
	// lfs f0,1992(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f13,164(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 164, temp.u32);
	// stb r10,189(r3)
	REX_STORE_U8(ctx.r3.u32 + 189, ctx.r10.u8);
	// stfs f0,176(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 176, temp.u32);
	// stb r10,187(r3)
	REX_STORE_U8(ctx.r3.u32 + 187, ctx.r10.u8);
	// stfs f0,180(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 180, temp.u32);
	// stw r9,144(r3)
	REX_STORE_U32(ctx.r3.u32 + 144, ctx.r9.u32);
	// stfs f0,168(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 168, temp.u32);
	// stw r11,192(r3)
	REX_STORE_U32(ctx.r3.u32 + 192, ctx.r11.u32);
	// lwz r11,-7176(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + -7176);
	// stw r11,196(r3)
	REX_STORE_U32(ctx.r3.u32 + 196, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_821998B0) {
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
	// bl 0x82199678
	ctx.lr = 0x821998C8;
	sub_82199678(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,4096
	ctx.r10.s64 = 268435456;
	// addi r11,r11,4540
	ctx.r11.s64 = ctx.r11.s64 + 4540;
	// ori r10,r10,102
	ctx.r10.u64 = ctx.r10.u64 | 102;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r10.u32);
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

DEFINE_REX_FUNC(sub_8219A0B8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// mulli r11,r4,88
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(88));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r6,-1
	ctx.r10.s64 = ctx.r6.s64 + -1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_8219A0DC:
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbzu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r7,r7
	ctx.r7.s64 = ctx.r7.s8;
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x8219a104
	if (!ctx.cr6.eq) goto loc_8219A104;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,88
	ctx.r11.s64 = ctx.r11.s64 + 88;
	// cmpw cr6,r8,r5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, ctx.xer);
	// ble cr6,0x8219a0dc
	if (!ctx.cr6.gt) goto loc_8219A0DC;
	// blr 
	return;
loc_8219A104:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8219B480) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8219B488;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// add r31,r10,r7
	r31.u64 = ctx.r10.u64 + ctx.r7.u64;
	// beq cr6,0x8219b4bc
	if (ctx.cr6.eq) goto loc_8219B4BC;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r5,8(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x820e1df8
	ctx.lr = 0x8219B4BC;
	sub_820E1DF8(ctx, base);
loc_8219B4BC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8219b4e8
	if (ctx.cr6.eq) goto loc_8219B4E8;
	// lfs f0,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 0, temp.u32);
	// lfs f0,52(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 4, temp.u32);
	// lfs f13,56(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r30.u32 + 8, temp.u32);
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 12, temp.u32);
loc_8219B4E8:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8219b508
	if (ctx.cr6.eq) goto loc_8219B508;
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 0, temp.u32);
	// lfs f0,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 4, temp.u32);
	// lfs f0,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 8, temp.u32);
loc_8219B508:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8219D288) {
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
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8218cb30
	ctx.lr = 0x8219D2A8;
	sub_8218CB30(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8219d2b8
	if (!ctx.cr0.eq) goto loc_8219D2B8;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8219d010
	ctx.lr = 0x8219D2B8;
	sub_8219D010(ctx, base);
loc_8219D2B8:
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

DEFINE_REX_FUNC(sub_8219E720) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r11,r11,-32480
	ctx.r11.s64 = ctx.r11.s64 + -32480;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,204(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 204);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8219ED80) {
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
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r7,-32230
	ctx.r7.s64 = -2112225280;
	// addi r6,r8,6428
	ctx.r6.s64 = ctx.r8.s64 + 6428;
	// addi r9,r11,-6368
	ctx.r9.s64 = ctx.r11.s64 + -6368;
	// addi r8,r10,-5056
	ctx.r8.s64 = ctx.r10.s64 + -5056;
	// addi r7,r7,-6416
	ctx.r7.s64 = ctx.r7.s64 + -6416;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,896
	ctx.r4.s64 = 896;
	// bl 0x821f7d50
	ctx.lr = 0x8219EDB8;
	sub_821F7D50(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq 0x8219edd4
	if (ctx.cr0.eq) goto loc_8219EDD4;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r9,r9,31764
	ctx.r9.s64 = ctx.r9.s64 + 31764;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// b 0x8219edd8
	goto loc_8219EDD8;
loc_8219EDD4:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8219EDD8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8219ede8
	if (!ctx.cr6.eq) goto loc_8219EDE8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8219ee04
	goto loc_8219EE04;
loc_8219EDE8:
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r11,288(r11)
	REX_STORE_U32(ctx.r11.u32 + 288, ctx.r11.u32);
	// addi r3,r11,80
	ctx.r3.s64 = ctx.r11.s64 + 80;
	// stw r10,272(r11)
	REX_STORE_U32(ctx.r11.u32 + 272, ctx.r10.u32);
	// stw r10,284(r11)
	REX_STORE_U32(ctx.r11.u32 + 284, ctx.r10.u32);
	// lfs f0,1996(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,280(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 280, temp.u32);
loc_8219EE04:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821A1228) {
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
	// rlwinm r31,r5,1,0,30
	r31.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r31,2
	ctx.r5.s64 = r31.s64 + 2;
	// bl 0x821a11d0
	ctx.lr = 0x821A1254;
	sub_821A11D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821a1278
	if (ctx.cr0.eq) goto loc_821A1278;
	// lbz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// stb r11,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// stbu r7,1(r3)
	ea = 1 + ctx.r3.u32;
	REX_STORE_U8(ea, ctx.r7.u8);
	ctx.r3.u32 = ea;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bl 0x821ff870
	ctx.lr = 0x821A1278;
	sub_821FF870(ctx, base);
loc_821A1278:
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

DEFINE_REX_FUNC(sub_821A28E8) {
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
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r31,32(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,124(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// lwz r11,128(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 128);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x821a2988
	if (!ctx.cr6.lt) goto loc_821A2988;
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821a2988
	if (ctx.cr0.eq) goto loc_821A2988;
	// mulli r11,r10,40
	ctx.r11.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(40));
	// lfs f13,20(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,16(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,12(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// frsp f10,f0
	ctx.f10.f64 = double(float(ctx.f0.f64));
	// lfs f0,16780(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16780);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f3,f13,f0
	ctx.f3.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f13,28292(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28292);
	ctx.f13.f64 = double(temp.f32);
	// fadds f2,f11,f13
	ctx.f2.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,-8488(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -8488);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f10,f12
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// fadds f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// bl 0x821a3a08
	ctx.lr = 0x821A2980;
	sub_821A3A08(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x821a298c
	goto loc_821A298C;
loc_821A2988:
	// li r4,0
	ctx.r4.s64 = 0;
loc_821A298C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821a3a30
	ctx.lr = 0x821A2994;
	sub_821A3A30(ctx, base);
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

DEFINE_REX_FUNC(sub_821A5758) {
	REX_FUNC_PROLOGUE();
	// lwz r3,208(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 208);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821A5778) {
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
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e74
	ctx.lr = 0x821A5780;
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -88, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// extsh r28,r4
	r28.s64 = ctx.r4.s16;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r28,494
	ctx.r11.s64 = r28.s64 + 494;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// lwzx r3,r11,r3
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// mr r23,r9
	r23.u64 = ctx.r9.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821a57d8
	if (!ctx.cr6.eq) goto loc_821A57D8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821a6830
	ctx.lr = 0x821A57C8;
	sub_821A6830(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x821a57d8
	if (!ctx.cr0.eq) goto loc_821A57D8;
loc_821A57D0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821a5894
	goto loc_821A5894;
loc_821A57D8:
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r7,-32230
	ctx.r7.s64 = -2112225280;
	// addi r6,r8,7232
	ctx.r6.s64 = ctx.r8.s64 + 7232;
	// addi r9,r11,22224
	ctx.r9.s64 = ctx.r11.s64 + 22224;
	// addi r8,r10,21376
	ctx.r8.s64 = ctx.r10.s64 + 21376;
	// addi r7,r7,-10000
	ctx.r7.s64 = ctx.r7.s64 + -10000;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,896
	ctx.r4.s64 = 896;
	// bl 0x821f7d50
	ctx.lr = 0x821A5804;
	sub_821F7D50(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821a5824
	if (ctx.cr0.eq) goto loc_821A5824;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r10,31764
	ctx.r10.s64 = ctx.r10.s64 + 31764;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x821a5828
	goto loc_821A5828;
loc_821A5824:
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
loc_821A5828:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x821a57d0
	if (ctx.cr6.eq) goto loc_821A57D0;
	// li r10,2
	ctx.r10.s64 = 2;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// li r9,-1
	ctx.r9.s64 = -1;
	// sth r10,40(r31)
	REX_STORE_U16(r31.u32 + 40, ctx.r10.u16);
	// mr r8,r23
	ctx.r8.u64 = r23.u64;
	// stw r30,80(r31)
	REX_STORE_U32(r31.u32 + 80, r30.u32);
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// sth r29,118(r31)
	REX_STORE_U16(r31.u32 + 118, r29.u16);
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// sth r9,120(r31)
	REX_STORE_U16(r31.u32 + 120, ctx.r9.u16);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// stw r11,220(r31)
	REX_STORE_U32(r31.u32 + 220, ctx.r11.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// stw r11,216(r31)
	REX_STORE_U32(r31.u32 + 216, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821a5120
	ctx.lr = 0x821A5870;
	sub_821A5120(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x821a6570
	ctx.lr = 0x821A5878;
	sub_821A6570(ctx, base);
	// mulli r11,r28,12
	ctx.r11.s64 = static_cast<int64_t>(r28.u64 * static_cast<uint64_t>(12));
	// sth r3,112(r31)
	REX_STORE_U16(r31.u32 + 112, ctx.r3.u16);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// sth r9,116(r31)
	REX_STORE_U16(r31.u32 + 116, ctx.r9.u16);
	// stw r31,5932(r11)
	REX_STORE_U32(ctx.r11.u32 + 5932, r31.u32);
loc_821A5894:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x822d4ec4
	return;
}

DEFINE_REX_FUNC(sub_821A9498) {
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
	// stwu r1,-2192(r1)
	ea = -2192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r11,432
	r31.s64 = ctx.r11.s64 + 432;
	// lis r3,4096
	ctx.r3.s64 = 268435456;
	// ori r3,r3,39
	ctx.r3.u64 = ctx.r3.u64 | 39;
	// lwz r4,344(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 344);
	// bl 0x820e68b8
	ctx.lr = 0x821A94C8;
	sub_820E68B8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// li r8,256
	ctx.r8.s64 = 256;
	// bl 0x82208750
	ctx.lr = 0x821A94E4;
	sub_82208750(ctx, base);
	// lwz r11,140(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 140);
	// cmpwi cr6,r11,1110
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1110, ctx.xer);
	// bgt cr6,0x821a9530
	if (ctx.cr6.gt) goto loc_821A9530;
	// beq cr6,0x821a9550
	if (ctx.cr6.eq) goto loc_821A9550;
	// cmpwi cr6,r11,-2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -2, ctx.xer);
	// beq cr6,0x821a9524
	if (ctx.cr6.eq) goto loc_821A9524;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x821a9518
	if (ctx.cr6.eq) goto loc_821A9518;
	// cmpwi cr6,r11,123
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 123, ctx.xer);
	// beq cr6,0x821a961c
	if (ctx.cr6.eq) goto loc_821A961C;
loc_821A950C:
	// lis r3,4096
	ctx.r3.s64 = 268435456;
	// ori r3,r3,25
	ctx.r3.u64 = ctx.r3.u64 | 25;
	// b 0x821a9558
	goto loc_821A9558;
loc_821A9518:
	// lis r3,4096
	ctx.r3.s64 = 268435456;
	// ori r3,r3,145
	ctx.r3.u64 = ctx.r3.u64 | 145;
	// b 0x821a9558
	goto loc_821A9558;
loc_821A9524:
	// lis r3,4096
	ctx.r3.s64 = 268435456;
	// ori r3,r3,188
	ctx.r3.u64 = ctx.r3.u64 | 188;
	// b 0x821a9558
	goto loc_821A9558;
loc_821A9530:
	// cmpwi cr6,r11,1167
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1167, ctx.xer);
	// beq cr6,0x821a9550
	if (ctx.cr6.eq) goto loc_821A9550;
	// cmpwi cr6,r11,1391
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1391, ctx.xer);
	// ble cr6,0x821a950c
	if (!ctx.cr6.gt) goto loc_821A950C;
	// cmpwi cr6,r11,1393
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1393, ctx.xer);
	// ble cr6,0x821a961c
	if (!ctx.cr6.gt) goto loc_821A961C;
	// cmpwi cr6,r11,1617
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1617, ctx.xer);
	// bne cr6,0x821a950c
	if (!ctx.cr6.eq) goto loc_821A950C;
loc_821A9550:
	// lis r3,4096
	ctx.r3.s64 = 268435456;
	// ori r3,r3,27
	ctx.r3.u64 = ctx.r3.u64 | 27;
loc_821A9558:
	// lwz r4,344(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 344);
	// bl 0x820e68b8
	ctx.lr = 0x821A9560;
	sub_820E68B8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r8,256
	ctx.r8.s64 = 256;
	// addi r7,r1,624
	ctx.r7.s64 = ctx.r1.s64 + 624;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82208750
	ctx.lr = 0x821A957C;
	sub_82208750(ctx, base);
	// lis r3,4096
	ctx.r3.s64 = 268435456;
	// lwz r4,344(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 344);
	// ori r3,r3,185
	ctx.r3.u64 = ctx.r3.u64 | 185;
	// bl 0x820e68b8
	ctx.lr = 0x821A958C;
	sub_820E68B8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r7,r1,1136
	ctx.r7.s64 = ctx.r1.s64 + 1136;
	// li r8,256
	ctx.r8.s64 = 256;
	// bl 0x82208750
	ctx.lr = 0x821A95A8;
	sub_82208750(ctx, base);
	// addi r31,r30,104
	r31.s64 = r30.s64 + 104;
	// addi r11,r1,1136
	ctx.r11.s64 = ctx.r1.s64 + 1136;
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d5870
	ctx.lr = 0x821A95C4;
	sub_822D5870(ctx, base);
	// addi r10,r30,132
	ctx.r10.s64 = r30.s64 + 132;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,624
	ctx.r5.s64 = ctx.r1.s64 + 624;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// li r3,255
	ctx.r3.s64 = 255;
	// bl 0x82208d50
	ctx.lr = 0x821A95EC;
	sub_82208D50(ctx, base);
	// cmplwi cr6,r3,5
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 5, ctx.xer);
	// beq cr6,0x821a9604
	if (ctx.cr6.eq) goto loc_821A9604;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,16
	ctx.r10.s64 = 16;
	// stb r11,88(r30)
	REX_STORE_U8(r30.u32 + 88, ctx.r11.u8);
	// stw r10,84(r30)
	REX_STORE_U32(r30.u32 + 84, ctx.r10.u32);
loc_821A9604:
	// addi r1,r1,2192
	ctx.r1.s64 = ctx.r1.s64 + 2192;
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
loc_821A961C:
	// lis r3,4096
	ctx.r3.s64 = 268435456;
	// ori r3,r3,15
	ctx.r3.u64 = ctx.r3.u64 | 15;
	// b 0x821a9558
	goto loc_821A9558;
}

DEFINE_REX_FUNC(sub_821B0858) {
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
	// lis r3,548
	ctx.r3.s64 = 35913728;
	// ori r3,r3,10240
	ctx.r3.u64 = ctx.r3.u64 | 10240;
	// bl 0x82202ea0
	ctx.lr = 0x821B0870;
	sub_82202EA0(ctx, base);
	// addi r10,r3,2047
	ctx.r10.s64 = ctx.r3.s64 + 2047;
	// lis r8,-32168
	ctx.r8.s64 = -2108162048;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// rlwinm r9,r10,0,0,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFF800;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r10,r11,-8304
	ctx.r10.s64 = ctx.r11.s64 + -8304;
	// stw r9,-9956(r8)
	REX_STORE_U32(ctx.r8.u32 + -9956, ctx.r9.u32);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// addi r9,r10,-46
	ctx.r9.s64 = ctx.r10.s64 + -46;
loc_821B0898:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// sthu r11,56(r9)
	ea = 56 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r11.u16);
	ctx.r9.u32 = ea;
	// clrlwi r11,r8,16
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFF;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 20, ctx.xer);
	// blt cr6,0x821b0898
	if (ctx.cr6.lt) goto loc_821B0898;
	// addi r11,r10,-4
	ctx.r11.s64 = ctx.r10.s64 + -4;
	// li r9,20
	ctx.r9.s64 = 20;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// ld r10,9004(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 9004);
loc_821B08C4:
	// li r9,-1
	ctx.r9.s64 = -1;
	// sth r9,12(r11)
	REX_STORE_U16(ctx.r11.u32 + 12, ctx.r9.u16);
	// std r10,16(r11)
	REX_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
	// stw r7,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r7.u32);
	// stw r7,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r7.u32);
	// stw r7,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, ctx.r7.u32);
	// stw r7,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r7.u32);
	// stwu r7,56(r11)
	ea = 56 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821b08c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821B08C4;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821b0030
	ctx.lr = 0x821B08F0;
	sub_821B0030(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821B25C8) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x822d4e80
	ctx.lr = 0x821B25D0;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x822d4f24
	ctx.lr = 0x821B25D8;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r9,r11,320
	ctx.r9.s64 = ctx.r11.s64 + 320;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// lwz r10,320(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 320);
	// lwz r11,4(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// srawi r10,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 8;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// beq cr6,0x821b2648
	if (ctx.cr6.eq) goto loc_821B2648;
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x821b2640
	if (ctx.cr6.eq) goto loc_821B2640;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// beq cr6,0x821b2638
	if (ctx.cr6.eq) goto loc_821B2638;
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// beq cr6,0x821b2630
	if (ctx.cr6.eq) goto loc_821B2630;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bne cr6,0x821b264c
	if (!ctx.cr6.eq) goto loc_821B264C;
	// addi r11,r10,29
	ctx.r11.s64 = ctx.r10.s64 + 29;
	// b 0x821b264c
	goto loc_821B264C;
loc_821B2630:
	// addi r11,r10,20
	ctx.r11.s64 = ctx.r10.s64 + 20;
	// b 0x821b264c
	goto loc_821B264C;
loc_821B2638:
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// b 0x821b264c
	goto loc_821B264C;
loc_821B2640:
	// addi r11,r10,14
	ctx.r11.s64 = ctx.r10.s64 + 14;
	// b 0x821b264c
	goto loc_821B264C;
loc_821B2648:
	// addi r11,r10,12
	ctx.r11.s64 = ctx.r10.s64 + 12;
loc_821B264C:
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// mulli r9,r11,20
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(20));
	// addi r30,r10,432
	r30.s64 = ctx.r10.s64 + 432;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r8,-32173
	ctx.r8.s64 = -2108489728;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lwz r11,496(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 496);
	// lfs f25,2000(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2000);
	f25.f64 = double(temp.f32);
	// addi r10,r8,-29056
	ctx.r10.s64 = ctx.r8.s64 + -29056;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f24,1992(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 1992);
	f24.f64 = double(temp.f32);
	// add r31,r9,r10
	r31.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r11,r11,1996
	ctx.r11.s64 = ctx.r11.s64 + 1996;
	// lfs f30,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	f30.f64 = double(temp.f32);
	// bne cr6,0x821b26c0
	if (!ctx.cr6.eq) goto loc_821B26C0;
	// lhz r10,10(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 10);
	// lfs f31,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	f31.f64 = double(temp.f32);
	// stfs f30,120(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f30,112(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x821b27a0
	if (ctx.cr0.eq) goto loc_821B27A0;
	// bl 0x82135998
	ctx.lr = 0x821B26A8;
	sub_82135998(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821b27a0
	if (ctx.cr0.eq) goto loc_821B27A0;
	// bl 0x821d5758
	ctx.lr = 0x821B26B4;
	sub_821D5758(ctx, base);
	// fadds f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 + f31.f64));
	// fadds f31,f0,f25
	f31.f64 = double(float(ctx.f0.f64 + f25.f64));
	// b 0x821b27a0
	goto loc_821B27A0;
loc_821B26C0:
	// lwz r10,400(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 400);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lwz r8,404(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 404);
	// lfs f13,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lwz r7,408(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 408);
	// lfs f12,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lwz r6,412(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 412);
	// lfs f0,16(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r30,400
	ctx.r5.s64 = r30.s64 + 400;
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// stw r10,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r8,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// stw r7,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r7.u32);
	// stw r6,12(r9)
	REX_STORE_U32(ctx.r9.u32 + 12, ctx.r6.u32);
	// lfs f10,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,120(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fsubs f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// ble cr6,0x821b2770
	if (!ctx.cr6.gt) goto loc_821B2770;
	// lfs f11,12(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fdivs f0,f24,f0
	ctx.f0.f64 = double(float(f24.f64 / ctx.f0.f64));
	// fdivs f11,f24,f11
	ctx.f11.f64 = double(float(f24.f64 / ctx.f11.f64));
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmuls f0,f11,f13
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bl 0x820e2308
	ctx.lr = 0x821B2738;
	sub_820E2308(ctx, base);
	// lfs f13,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f1,f24
	ctx.cr6.compare(ctx.f1.f64, f24.f64);
	// ble cr6,0x821b2758
	if (!ctx.cr6.gt) goto loc_821B2758;
	// fdivs f0,f24,f1
	ctx.f0.f64 = double(float(f24.f64 / ctx.f1.f64));
	// lfs f12,120(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// b 0x821b275c
	goto loc_821B275C;
loc_821B2758:
	// lfs f0,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
loc_821B275C:
	// lfs f12,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,16(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// b 0x821b2794
	goto loc_821B2794;
loc_821B2770:
	// bl 0x820e2308
	ctx.lr = 0x821B2774;
	sub_820E2308(ctx, base);
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x821b279c
	if (!ctx.cr6.gt) goto loc_821B279C;
	// fdivs f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f1.f64));
	// lfs f13,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,120(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
loc_821B2794:
	// stfs f0,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
loc_821B279C:
	// fmr f31,f30
	ctx.fpscr.disableFlushMode();
	f31.f64 = f30.f64;
loc_821B27A0:
	// lfs f2,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e0130
	ctx.lr = 0x821B27AC;
	sub_820E0130(ctx, base);
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// fsubs f13,f25,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(f25.f64 - ctx.f1.f64));
	// lfs f0,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,23240
	ctx.r11.s64 = ctx.r11.s64 + 23240;
	// lfs f11,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,120(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// lfs f10,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fadds f0,f10,f12
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// stfs f11,112(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// and. r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// fadds f27,f13,f31
	f27.f64 = double(float(ctx.f13.f64 + f31.f64));
	// bne 0x821b27fc
	if (!ctx.cr0.eq) goto loc_821B27FC;
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r11,304(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 304);
	// and. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b280c
	if (ctx.cr0.eq) goto loc_821B280C;
loc_821B27FC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,16264(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16264);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
loc_821B280C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,32252(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32252);
	f31.f64 = double(temp.f32);
	// bl 0x821b0d38
	ctx.lr = 0x821B2818;
	sub_821B0D38(ctx, base);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r29,r11,-7072
	r29.s64 = ctx.r11.s64 + -7072;
	// beq 0x821b2860
	if (ctx.cr0.eq) goto loc_821B2860;
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x821b2860
	if (!ctx.cr6.eq) goto loc_821B2860;
	// lhz r11,88(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 88);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x821b2854
	if (ctx.cr6.eq) goto loc_821B2854;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,3784
	ctx.r11.u64 = ctx.r11.u64 | 3784;
	// lhzx r11,r29,r11
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bne cr6,0x821b2874
	if (!ctx.cr6.eq) goto loc_821B2874;
loc_821B2854:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f31,9932(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 9932);
	f31.f64 = double(temp.f32);
	// b 0x821b2874
	goto loc_821B2874;
loc_821B2860:
	// lhz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 28);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x821b2874
	if (!ctx.cr6.eq) goto loc_821B2874;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f31,9928(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 9928);
	f31.f64 = double(temp.f32);
loc_821B2874:
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(r28.u32, 1, ctx.xer);
	// blt cr6,0x821b28b0
	if (ctx.cr6.lt) goto loc_821B28B0;
	// beq cr6,0x821b28a4
	if (ctx.cr6.eq) goto loc_821B28A4;
	// cmplwi cr6,r28,3
	ctx.cr6.compare<uint32_t>(r28.u32, 3, ctx.xer);
	// blt cr6,0x821b2898
	if (ctx.cr6.lt) goto loc_821B2898;
	// bne cr6,0x821b28b8
	if (!ctx.cr6.eq) goto loc_821B28B8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,16624(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16624);
	f31.f64 = double(temp.f32);
	// b 0x821b28b8
	goto loc_821B28B8;
loc_821B2898:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,16204(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16204);
	f31.f64 = double(temp.f32);
	// b 0x821b28b8
	goto loc_821B28B8;
loc_821B28A4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,16232(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16232);
	f31.f64 = double(temp.f32);
	// b 0x821b28b8
	goto loc_821B28B8;
loc_821B28B0:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f31,6400(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 6400);
	f31.f64 = double(temp.f32);
loc_821B28B8:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// fmr f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f27.f64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x820e00c0
	ctx.lr = 0x821B28C8;
	sub_820E00C0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(r27.s32, 1, ctx.xer);
	// lfs f13,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f29,f0,f31
	f29.f64 = double(float(ctx.f0.f64 * f31.f64));
	// stfs f30,88(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f28,f13,f31
	f28.f64 = double(float(ctx.f13.f64 * f31.f64));
	// stfs f30,92(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lfs f30,2012(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2012);
	f30.f64 = double(temp.f32);
	// beq cr6,0x821b2950
	if (ctx.cr6.eq) goto loc_821B2950;
	// cmpwi cr6,r27,2
	ctx.cr6.compare<int32_t>(r27.s32, 2, ctx.xer);
	// beq cr6,0x821b2948
	if (ctx.cr6.eq) goto loc_821B2948;
	// cmpwi cr6,r27,3
	ctx.cr6.compare<int32_t>(r27.s32, 3, ctx.xer);
	// beq cr6,0x821b2940
	if (ctx.cr6.eq) goto loc_821B2940;
	// cmpwi cr6,r27,4
	ctx.cr6.compare<int32_t>(r27.s32, 4, ctx.xer);
	// beq cr6,0x821b2938
	if (ctx.cr6.eq) goto loc_821B2938;
	// cmpwi cr6,r27,5
	ctx.cr6.compare<int32_t>(r27.s32, 5, ctx.xer);
	// beq cr6,0x821b2928
	if (ctx.cr6.eq) goto loc_821B2928;
	// cmpwi cr6,r27,6
	ctx.cr6.compare<int32_t>(r27.s32, 6, ctx.xer);
	// bne cr6,0x821b2954
	if (!ctx.cr6.eq) goto loc_821B2954;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2016(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2016);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// b 0x821b2954
	goto loc_821B2954;
loc_821B2928:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2016(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2016);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// b 0x821b2954
	goto loc_821B2954;
loc_821B2938:
	// stfs f25,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f25.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// b 0x821b2954
	goto loc_821B2954;
loc_821B2940:
	// stfs f25,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f25.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// b 0x821b2954
	goto loc_821B2954;
loc_821B2948:
	// stfs f30,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// b 0x821b2954
	goto loc_821B2954;
loc_821B2950:
	// stfs f30,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
loc_821B2954:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r31,0
	r31.s64 = 0;
	// lfs f26,2024(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2024);
	f26.f64 = double(temp.f32);
loc_821B2960:
	// cmpwi cr6,r26,-1
	ctx.cr6.compare<int32_t>(r26.s32, -1, ctx.xer);
	// beq cr6,0x821b2970
	if (ctx.cr6.eq) goto loc_821B2970;
	// cmpw cr6,r26,r31
	ctx.cr6.compare<int32_t>(r26.s32, r31.s32, ctx.xer);
	// bne cr6,0x821b2a54
	if (!ctx.cr6.eq) goto loc_821B2A54;
loc_821B2970:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// ori r11,r11,3696
	ctx.r11.u64 = ctx.r11.u64 | 3696;
	// mullw r11,r31,r11
	ctx.r11.s64 = int64_t(r31.s32) * int64_t(ctx.r11.s32);
	// add r30,r11,r29
	r30.u64 = ctx.r11.u64 + r29.u64;
	// bne cr6,0x821b2990
	if (!ctx.cr6.eq) goto loc_821B2990;
	// fmr f31,f26
	ctx.fpscr.disableFlushMode();
	f31.f64 = f26.f64;
	// b 0x821b2994
	goto loc_821B2994;
loc_821B2990:
	// fmr f31,f24
	ctx.fpscr.disableFlushMode();
	f31.f64 = f24.f64;
loc_821B2994:
	// li r6,15
	ctx.r6.s64 = 15;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,51
	ctx.r4.s64 = 51;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821bf940
	ctx.lr = 0x821B29A8;
	sub_821BF940(ctx, base);
	// li r6,15
	ctx.r6.s64 = 15;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,49
	ctx.r4.s64 = 49;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821bf940
	ctx.lr = 0x821B29BC;
	sub_821BF940(ctx, base);
	// li r6,15
	ctx.r6.s64 = 15;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,50
	ctx.r4.s64 = 50;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821bf940
	ctx.lr = 0x821B29D0;
	sub_821BF940(ctx, base);
	// li r6,15
	ctx.r6.s64 = 15;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,52
	ctx.r4.s64 = 52;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821bf940
	ctx.lr = 0x821B29E4;
	sub_821BF940(ctx, base);
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,120(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f23,f31,f29,f0
	f23.f64 = double(float(std::fma(f31.f64, f29.f64, ctx.f0.f64)));
	// fmadds f31,f31,f28,f13
	f31.f64 = double(float(std::fma(f31.f64, f28.f64, ctx.f13.f64)));
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f23
	ctx.f1.f64 = f23.f64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// bl 0x82125860
	ctx.lr = 0x821B2A0C;
	sub_82125860(ctx, base);
	// extsw r11,r31
	ctx.r11.s64 = r31.s32;
	// fmr f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f1.f64;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// std r11,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f0,96(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// lfsx f13,r10,r11
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f1,f23
	ctx.f1.f64 = f23.f64;
	// fmadds f0,f0,f25,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f25.f64, ctx.f13.f64)));
	// fsubs f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 - f27.f64));
	// fadds f4,f0,f30
	ctx.f4.f64 = double(float(ctx.f0.f64 + f30.f64));
	// bl 0x821ca5a0
	ctx.lr = 0x821B2A4C;
	sub_821CA5A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821c5e08
	ctx.lr = 0x821B2A54;
	sub_821C5E08(ctx, base);
loc_821B2A54:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(r31.s32, 2, ctx.xer);
	// blt cr6,0x821b2960
	if (ctx.cr6.lt) goto loc_821B2960;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x822d4f70
	ctx.lr = 0x821B2A6C;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_821C92D0) {
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
	// bl 0x821c3060
	ctx.lr = 0x821C92EC;
	sub_821C3060(ctx, base);
	// li r11,10
	ctx.r11.s64 = 10;
	// addi r10,r31,804
	ctx.r10.s64 = r31.s64 + 804;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821C9300:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x821c9300
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821C9300;
	// li r10,13
	ctx.r10.s64 = 13;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r11,r31,696
	ctx.r11.s64 = r31.s64 + 696;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f31,1996(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	f31.f64 = double(temp.f32);
	// lfs f0,2024(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2024);
	ctx.f0.f64 = double(temp.f32);
loc_821C9324:
	// stfs f31,-48(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + -48, temp.u32);
	// stfsu f0,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821c9324
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821C9324;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e0cc8
	ctx.lr = 0x821C9338;
	sub_821E0CC8(ctx, base);
	// addi r3,r31,12320
	ctx.r3.s64 = r31.s64 + 12320;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x821c2598
	ctx.lr = 0x821C9344;
	sub_821C2598(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,5636(r31)
	REX_STORE_U32(r31.u32 + 5636, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_821CB388) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x821CB390;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lha r31,88(r3)
	r31.s64 = int16_t(REX_LOAD_U16(ctx.r3.u32 + 88));
	// li r29,-1
	r29.s64 = -1;
	// lwz r30,8(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r31,19
	ctx.cr6.compare<int32_t>(r31.s32, 19, ctx.xer);
	// bne cr6,0x821cb3b0
	if (!ctx.cr6.eq) goto loc_821CB3B0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821cb408
	goto loc_821CB408;
loc_821CB3B0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821c8d20
	ctx.lr = 0x821CB3B8;
	sub_821C8D20(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x822d6060
	ctx.lr = 0x821CB3C0;
	sub_822D6060(ctx, base);
	// rotlwi r11,r3,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// divw r9,r3,r28
	ctx.r9.u64 = uint32_t((r28.s32 && !(ctx.r3.s32 == INT32_MIN && r28.s32 == -1)) ? ctx.r3.s32 / r28.s32 : 0);
	// lha r10,88(r30)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(r30.u32 + 88));
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mullw r9,r9,r28
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(r28.s32);
	// andc r11,r28,r11
	ctx.r11.u64 = r28.u64 & ~ctx.r11.u64;
	// twllei r28,0
	if (r28.s32 == 0 || r28.u32 < 0u) ppc_trap(ctx, base, 0);
	// twlgei r11,-1
	if (ctx.r11.s32 == -1 || ctx.r11.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// subf r11,r9,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r9.u64;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x821cb3f8
	if (!ctx.cr6.eq) goto loc_821CB3F8;
	// lha r10,100(r30)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(r30.u32 + 100));
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x821cb3fc
	if (ctx.cr6.eq) goto loc_821CB3FC;
loc_821CB3F8:
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
loc_821CB3FC:
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(r29.s32, -1, ctx.xer);
	// beq cr6,0x821cb3b0
	if (ctx.cr6.eq) goto loc_821CB3B0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_821CB408:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_821D0A98) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// addi r11,r11,-7176
	ctx.r11.s64 = ctx.r11.s64 + -7176;
	// lha r3,96(r11)
	ctx.r3.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 96));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821D0B08) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// addi r10,r11,-11568
	ctx.r10.s64 = ctx.r11.s64 + -11568;
	// lwz r11,-11568(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -11568);
	// b 0x821d0b24
	goto loc_821D0B24;
loc_821D0B18:
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x821d0b2c
	if (ctx.cr6.eq) goto loc_821D0B2C;
	// lwzu r11,16(r10)
	ea = 16 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
loc_821D0B24:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x821d0b18
	if (!ctx.cr6.eq) goto loc_821D0B18;
loc_821D0B2C:
	// lwz r3,12(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821D13A8) {
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
	// lis r30,-32165
	r30.s64 = -2107965440;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r31,-32480(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + -32480);
	// addi r11,r31,80
	ctx.r11.s64 = r31.s64 + 80;
	// bl 0x821b0030
	ctx.lr = 0x821D13D0;
	sub_821B0030(ctx, base);
	// stw r3,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r3.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,30
	ctx.r4.s64 = 30;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f3,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f3.f64 = double(temp.f32);
	// fmr f2,f3
	ctx.f2.f64 = ctx.f3.f64;
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// bl 0x821afa50
	ctx.lr = 0x821D13F0;
	sub_821AFA50(ctx, base);
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,-32480(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + -32480);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r8,-8532
	ctx.r6.s64 = ctx.r8.s64 + -8532;
	// stb r11,-8916(r10)
	REX_STORE_U8(ctx.r10.u32 + -8916, ctx.r11.u8);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r31,r10,-8916
	r31.s64 = ctx.r10.s64 + -8916;
	// bl 0x821f7d50
	ctx.lr = 0x821D1424;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821d1434
	if (ctx.cr0.eq) goto loc_821D1434;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821a85e0
	ctx.lr = 0x821D1434;
	sub_821A85E0(ctx, base);
loc_821D1434:
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

DEFINE_REX_FUNC(sub_821D2BC0) {
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
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r31,-32480(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// bl 0x821b0030
	ctx.lr = 0x821D2BE4;
	sub_821B0030(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// stw r3,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r3.u32);
	// addi r30,r11,432
	r30.s64 = ctx.r11.s64 + 432;
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 36);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// beq cr6,0x821d2c2c
	if (ctx.cr6.eq) goto loc_821D2C2C;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// beq cr6,0x821d2c18
	if (ctx.cr6.eq) goto loc_821D2C18;
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// bne cr6,0x821d2c70
	if (!ctx.cr6.eq) goto loc_821D2C70;
	// lis r7,-32239
	ctx.r7.s64 = -2112815104;
	// addi r7,r7,-4584
	ctx.r7.s64 = ctx.r7.s64 + -4584;
	// b 0x821d2c34
	goto loc_821D2C34;
loc_821D2C18:
	// lis r7,-32239
	ctx.r7.s64 = -2112815104;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r7,r7,-4600
	ctx.r7.s64 = ctx.r7.s64 + -4600;
	// addi r6,r8,13196
	ctx.r6.s64 = ctx.r8.s64 + 13196;
	// b 0x821d2c3c
	goto loc_821D2C3C;
loc_821D2C2C:
	// lis r7,-32239
	ctx.r7.s64 = -2112815104;
	// addi r7,r7,-4616
	ctx.r7.s64 = ctx.r7.s64 + -4616;
loc_821D2C34:
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r6,r8,13188
	ctx.r6.s64 = ctx.r8.s64 + 13188;
loc_821D2C3C:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-4568
	ctx.r9.s64 = ctx.r11.s64 + -4568;
	// addi r8,r10,-1264
	ctx.r8.s64 = ctx.r10.s64 + -1264;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821f7d50
	ctx.lr = 0x821D2C5C;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821d2c70
	if (ctx.cr0.eq) goto loc_821D2C70;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,31764
	ctx.r11.s64 = ctx.r11.s64 + 31764;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_821D2C70:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x8212eb40
	ctx.lr = 0x821D2C84;
	sub_8212EB40(ctx, base);
	// li r4,6
	ctx.r4.s64 = 6;
	// addi r3,r30,84
	ctx.r3.s64 = r30.s64 + 84;
	// bl 0x821d6210
	ctx.lr = 0x821D2C90;
	sub_821D6210(ctx, base);
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

DEFINE_REX_FUNC(sub_821D63E8) {
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
	ctx.lr = 0x821D63F0;
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, f30.u64);
	// stfd f31,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r11,r11,13128
	ctx.r11.s64 = ctx.r11.s64 + 13128;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r31,-1
	r31.s64 = -1;
	// lwz r11,1852(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1852);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821d6424
	if (ctx.cr0.eq) goto loc_821D6424;
	// lis r31,-256
	r31.s64 = -16777216;
	// ori r31,r31,255
	r31.u64 = r31.u64 | 255;
loc_821D6424:
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x821d6534
	if (ctx.cr6.eq) goto loc_821D6534;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x821d65f8
	if (!ctx.cr6.eq) goto loc_821D65F8;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821e78c8
	ctx.lr = 0x821D643C;
	sub_821E78C8(ctx, base);
	// extsw r11,r29
	ctx.r11.s64 = r29.s32;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// frsp f12,f0
	ctx.f12.f64 = double(float(ctx.f0.f64));
	// lfs f0,26552(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 26552);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-18116(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -18116);
	ctx.f13.f64 = double(temp.f32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f31,16204(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 16204);
	f31.f64 = double(temp.f32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,255
	ctx.r8.s64 = 255;
	// lfs f5,26840(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 26840);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,16036(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16036);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,2080(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 2080);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f30,f12,f0
	f30.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f1,1996(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 1996);
	ctx.f1.f64 = double(temp.f32);
	// fadds f0,f30,f13
	ctx.f0.f64 = double(float(f30.f64 + ctx.f13.f64));
	// fmuls f2,f0,f31
	ctx.f2.f64 = double(float(ctx.f0.f64 * f31.f64));
	// bl 0x821e8688
	ctx.lr = 0x821D64A0;
	sub_821E8688(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821e78c8
	ctx.lr = 0x821D64A8;
	sub_821E78C8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r3,r10,13684
	ctx.r3.s64 = ctx.r10.s64 + 13684;
	// lfd f1,13376(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + 13376);
	// stfd f1,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// bl 0x821eacb0
	ctx.lr = 0x821D64C8;
	sub_821EACB0(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r3,4096
	ctx.r3.s64 = 268435456;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// ori r3,r3,194
	ctx.r3.u64 = ctx.r3.u64 | 194;
	// lwz r4,344(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 344);
	// bl 0x820e68b8
	ctx.lr = 0x821D64E0;
	sub_820E68B8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,21804
	ctx.r4.s64 = ctx.r11.s64 + 21804;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822d55f8
	ctx.lr = 0x821D64F4;
	sub_822D55F8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r7,r30,1
	ctx.r7.s64 = r30.s64 + 1;
	// addi r5,r9,26656
	ctx.r5.s64 = ctx.r9.s64 + 26656;
	// lfs f0,13680(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 13680);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// fadds f0,f30,f0
	ctx.f0.f64 = double(float(f30.f64 + ctx.f0.f64));
	// lfs f1,15632(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15632);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,20(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// fmuls f2,f0,f31
	ctx.f2.f64 = double(float(ctx.f0.f64 * f31.f64));
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// bl 0x821eaf80
	ctx.lr = 0x821D6530;
	sub_821EAF80(ctx, base);
	// b 0x821d65f8
	goto loc_821D65F8;
loc_821D6534:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821e78c8
	ctx.lr = 0x821D653C;
	sub_821E78C8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f5,26840(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 26840);
	ctx.f5.f64 = double(temp.f32);
	// li r8,255
	ctx.r8.s64 = 255;
	// lfs f4,16036(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16036);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,2080(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 2080);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,-24952(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + -24952);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,1996(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 1996);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821e8688
	ctx.lr = 0x821D6570;
	sub_821E8688(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821e78c8
	ctx.lr = 0x821D6578;
	sub_821E78C8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f1,2860(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2860);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821f8c30
	ctx.lr = 0x821D6584;
	sub_821F8C30(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// rlwinm r8,r30,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-11020
	ctx.r11.s64 = ctx.r11.s64 + -11020;
	// lfs f2,13676(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 13676);
	ctx.f2.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f31,15632(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15632);
	f31.f64 = double(temp.f32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
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
	// addi r5,r10,13624
	ctx.r5.s64 = ctx.r10.s64 + 13624;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// lwzx r7,r8,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// bl 0x821f9730
	ctx.lr = 0x821D65CC;
	sub_821F9730(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f31,20(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r5,r10,13572
	ctx.r5.s64 = ctx.r10.s64 + 13572;
	// lfs f2,-10756(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -10756);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// bl 0x821f9730
	ctx.lr = 0x821D65F8;
	sub_821F9730(ctx, base);
loc_821D65F8:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_821DFE18) {
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
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,320
	ctx.r11.s64 = ctx.r11.s64 + 320;
	// addi r3,r11,56
	ctx.r3.s64 = ctx.r11.s64 + 56;
	// stw r10,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// bl 0x821f5538
	ctx.lr = 0x821DFE3C;
	sub_821F5538(ctx, base);
	// bl 0x8212bbf0
	ctx.lr = 0x821DFE40;
	sub_8212BBF0(ctx, base);
	// bl 0x82124998
	ctx.lr = 0x821DFE44;
	sub_82124998(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821E0CE8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// addi r11,r11,5496
	ctx.r11.s64 = ctx.r11.s64 + 5496;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// rlwinm r8,r10,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// subf r9,r4,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r4.u64;
loc_821E0D0C:
	// lbz r8,0(r7)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// extsb. r6,r8
	ctx.r6.s64 = ctx.r8.s8;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// stbx r8,r9,r7
	REX_STORE_U8(ctx.r9.u32 + ctx.r7.u32, ctx.r8.u8);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// bne 0x821e0d0c
	if (!ctx.cr0.eq) goto loc_821E0D0C;
	// addi r8,r11,80
	ctx.r8.s64 = ctx.r11.s64 + 80;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stwx r7,r9,r8
	REX_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r7.u32);
	// bne cr6,0x821e0d48
	if (!ctx.cr6.eq) goto loc_821E0D48;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,19796(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 19796);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// b 0x821e0d58
	goto loc_821E0D58;
loc_821E0D48:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// lfs f0,-17636(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -17636);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r9,r8
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r8.u32, temp.u32);
loc_821E0D58:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,30004(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 30004);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r9,r11
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821E2228) {
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
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x821e2fb8
	ctx.lr = 0x821E2244;
	sub_821E2FB8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,12160
	ctx.r11.s64 = ctx.r11.s64 + 12160;
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

DEFINE_REX_FUNC(sub_821E29E0) {
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
	// li r4,22
	ctx.r4.s64 = 22;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x821e2fb8
	ctx.lr = 0x821E29FC;
	sub_821E2FB8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,-25176
	ctx.r11.s64 = ctx.r11.s64 + -25176;
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

DEFINE_REX_FUNC(sub_821E2FB8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r4,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// addi r11,r11,16460
	ctx.r11.s64 = ctx.r11.s64 + 16460;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821E33A8) {
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
	// stw r4,84(r3)
	REX_STORE_U32(ctx.r3.u32 + 84, ctx.r4.u32);
	// lis r9,-32226
	ctx.r9.s64 = -2111963136;
	// addi r10,r10,15864
	ctx.r10.s64 = ctx.r10.s64 + 15864;
	// lis r7,-32226
	ctx.r7.s64 = -2111963136;
	// addi r9,r9,12288
	ctx.r9.s64 = ctx.r9.s64 + 12288;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lis r6,-32226
	ctx.r6.s64 = -2111963136;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r9,140(r3)
	REX_STORE_U32(ctx.r3.u32 + 140, ctx.r9.u32);
	// lis r5,-32226
	ctx.r5.s64 = -2111963136;
	// lis r4,-32231
	ctx.r4.s64 = -2112290816;
	// lis r8,-32226
	ctx.r8.s64 = -2111963136;
	// addi r10,r7,12512
	ctx.r10.s64 = ctx.r7.s64 + 12512;
	// addi r7,r6,13016
	ctx.r7.s64 = ctx.r6.s64 + 13016;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,148(r3)
	REX_STORE_U32(ctx.r3.u32 + 148, ctx.r10.u32);
	// addi r6,r5,12672
	ctx.r6.s64 = ctx.r5.s64 + 12672;
	// stw r7,152(r31)
	REX_STORE_U32(r31.u32 + 152, ctx.r7.u32);
	// addi r9,r4,-13536
	ctx.r9.s64 = ctx.r4.s64 + -13536;
	// stw r11,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// addi r8,r8,12328
	ctx.r8.s64 = ctx.r8.s64 + 12328;
	// stw r11,104(r3)
	REX_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// stw r11,136(r3)
	REX_STORE_U32(ctx.r3.u32 + 136, ctx.r11.u32);
	// li r5,28
	ctx.r5.s64 = 28;
	// stw r8,144(r3)
	REX_STORE_U32(ctx.r3.u32 + 144, ctx.r8.u32);
	// addi r3,r3,108
	ctx.r3.s64 = ctx.r3.s64 + 108;
	// stw r6,156(r31)
	REX_STORE_U32(r31.u32 + 156, ctx.r6.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r9,160(r31)
	REX_STORE_U32(r31.u32 + 160, ctx.r9.u32);
	// stw r11,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r11.u32);
	// stw r11,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r11.u32);
	// stw r11,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r11.u32);
	// stw r11,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r11.u32);
	// bl 0x822d5870
	ctx.lr = 0x821E3444;
	sub_822D5870(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_821E6A50) {
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
	ctx.lr = 0x821E6A58;
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r9,770
	ctx.r9.s64 = 770;
	// stw r6,236(r3)
	REX_STORE_U32(ctx.r3.u32 + 236, ctx.r6.u32);
	// lis r10,-32226
	ctx.r10.s64 = -2111963136;
	// stw r4,208(r3)
	REX_STORE_U32(ctx.r3.u32 + 208, ctx.r4.u32);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// sth r9,16(r3)
	REX_STORE_U16(ctx.r3.u32 + 16, ctx.r9.u16);
	// addi r10,r10,25192
	ctx.r10.s64 = ctx.r10.s64 + 25192;
	// stw r5,200(r3)
	REX_STORE_U32(ctx.r3.u32 + 200, ctx.r5.u32);
	// li r26,1
	r26.s64 = 1;
	// stw r6,100(r3)
	REX_STORE_U32(ctx.r3.u32 + 100, ctx.r6.u32);
	// li r27,0
	r27.s64 = 0;
	// stw r10,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// addi r11,r11,6304
	ctx.r11.s64 = ctx.r11.s64 + 6304;
	// stw r26,192(r3)
	REX_STORE_U32(ctx.r3.u32 + 192, r26.u32);
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r27,216(r3)
	REX_STORE_U32(ctx.r3.u32 + 216, r27.u32);
	// addi r9,r3,112
	ctx.r9.s64 = ctx.r3.s64 + 112;
	// std r26,80(r3)
	REX_STORE_U64(ctx.r3.u32 + 80, r26.u64);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// sth r26,88(r3)
	REX_STORE_U16(ctx.r3.u32 + 88, r26.u16);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stb r8,90(r3)
	REX_STORE_U8(ctx.r3.u32 + 90, ctx.r8.u8);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stw r9,92(r3)
	REX_STORE_U32(ctx.r3.u32 + 92, ctx.r9.u32);
	// stw r11,96(r3)
	REX_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// beq cr6,0x821e6ad0
	if (ctx.cr6.eq) goto loc_821E6AD0;
	// li r10,114
	ctx.r10.s64 = 114;
loc_821E6AD0:
	// stb r10,104(r31)
	REX_STORE_U8(r31.u32 + 104, ctx.r10.u8);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r30,r31,164
	r30.s64 = r31.s64 + 164;
	// addi r29,r31,160
	r29.s64 = r31.s64 + 160;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lfs f0,1996(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lfs f31,1992(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	f31.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f31,8(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f31,16(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f31,24(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stfs f0,32(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// stfs f31,36(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// stfs f31,40(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// stfs f31,48(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// stfs f31,52(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// stfs f31,56(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// lbz r6,104(r31)
	ctx.r6.u64 = REX_LOAD_U8(r31.u32 + 104);
	// lwz r5,100(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 100);
	// bl 0x821e3550
	ctx.lr = 0x821E6B30;
	sub_821E3550(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r10,200(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 200);
	// li r9,196
	ctx.r9.s64 = 196;
	// lfs f0,16088(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16088);
	ctx.f0.f64 = double(temp.f32);
	// stb r27,91(r31)
	REX_STORE_U8(r31.u32 + 91, r27.u8);
	// stfs f0,120(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 120, temp.u32);
	// stb r27,109(r31)
	REX_STORE_U8(r31.u32 + 109, r27.u8);
	// stfs f31,124(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 124, temp.u32);
	// stb r9,186(r31)
	REX_STORE_U8(r31.u32 + 186, ctx.r9.u8);
	// stfs f31,144(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 144, temp.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stfs f31,148(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 148, temp.u32);
	// stfs f31,152(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 152, temp.u32);
	// bne cr6,0x821e6b84
	if (!ctx.cr6.eq) goto loc_821E6B84;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,16060(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16060);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16640(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16640);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,176(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 176, temp.u32);
	// stfs f13,168(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 168, temp.u32);
	// b 0x821e6bd8
	goto loc_821E6BD8;
loc_821E6B84:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// subfic r10,r28,0
	ctx.xer.ca = r28.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - r28.u64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lfs f0,2008(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2008);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r11,r10,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f11,0(r29)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r29.u32 + 0, temp.u32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f0,20480(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 20480);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,228
	ctx.r11.s64 = ctx.r11.s64 + 228;
	// stfs f12,0(r30)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r30.u32 + 0, temp.u32);
	// lfs f13,16092(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 16092);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,168(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 168, temp.u32);
	// stb r11,186(r31)
	REX_STORE_U8(r31.u32 + 186, ctx.r11.u8);
	// fdivs f13,f0,f11
	ctx.f13.f64 = double(float(ctx.f0.f64 / ctx.f11.f64));
	// stfs f13,176(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 176, temp.u32);
	// fdivs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
loc_821E6BD8:
	// lbz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 104);
	// stfs f0,180(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 180, temp.u32);
	// cmplwi cr6,r11,114
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 114, ctx.xer);
	// beq cr6,0x821e6bf8
	if (ctx.cr6.eq) goto loc_821E6BF8;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x821e6bf8
	if (ctx.cr6.eq) goto loc_821E6BF8;
	// stb r26,189(r31)
	REX_STORE_U8(r31.u32 + 189, r26.u8);
	// b 0x821e6bfc
	goto loc_821E6BFC;
loc_821E6BF8:
	// stb r27,189(r31)
	REX_STORE_U8(r31.u32 + 189, r27.u8);
loc_821E6BFC:
	// stb r26,188(r31)
	REX_STORE_U8(r31.u32 + 188, r26.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_821EFA18) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r11,r11,-32032
	ctx.r11.s64 = ctx.r11.s64 + -32032;
	// stb r3,32(r11)
	REX_STORE_U8(ctx.r11.u32 + 32, ctx.r3.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821EFC80) {
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
	ctx.lr = 0x821EFC88;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r29,r11,-32032
	r29.s64 = ctx.r11.s64 + -32032;
	// addi r31,r3,16
	r31.s64 = ctx.r3.s64 + 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821f28a0
	ctx.lr = 0x821EFCA8;
	sub_821F28A0(ctx, base);
	// lis r27,-32166
	r27.s64 = -2108030976;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,7792(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 7792);
	// lwz r4,1684(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1684);
	// bl 0x821f2908
	ctx.lr = 0x821EFCBC;
	sub_821F2908(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r30,4(r28)
	r30.u64 = REX_LOAD_U32(r28.u32 + 4);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x821f2bf0
	ctx.lr = 0x821EFCD0;
	sub_821F2BF0(ctx, base);
	// lwz r11,7792(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 7792);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// lwz r11,1668(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1668);
	// lfs f13,40(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,56(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// ble cr6,0x821efd70
	if (!ctx.cr6.gt) goto loc_821EFD70;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// lfs f11,-13044(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -13044);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,1992(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
loc_821EFCFC:
	// lfs f10,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// li r9,4
	ctx.r9.s64 = 4;
	// stfs f10,-8(r11)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
	// lfs f10,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// addi r7,r31,12
	ctx.r7.s64 = r31.s64 + 12;
	// stfs f10,-4(r11)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f10,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fdivs f10,f12,f10
	ctx.f10.f64 = double(float(ctx.f12.f64 / ctx.f10.f64));
	// fadds f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// fneg f10,f10
	ctx.f10.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// stfs f10,0(r11)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
loc_821EFD3C:
	// lbzx r9,r10,r7
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r7.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f10,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// fmuls f10,f10,f11
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// stfsu f10,4(r8)
	ea = 4 + ctx.r8.u32;
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x821efd3c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821EFD3C;
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bgt cr6,0x821efcfc
	if (ctx.cr6.gt) goto loc_821EFCFC;
loc_821EFD70:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,0(r28)
	ctx.r5.u64 = REX_LOAD_U32(r28.u32 + 0);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x821f2c50
	ctx.lr = 0x821EFD90;
	sub_821F2C50(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_821F3C98) {
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
	ctx.lr = 0x821F3CA0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f3de0
	if (ctx.cr6.eq) goto loc_821F3DE0;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// li r28,0
	r28.s64 = 0;
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x821f3de0
	if (!ctx.cr6.gt) goto loc_821F3DE0;
	// li r30,0
	r30.s64 = 0;
loc_821F3CD0:
	// lwz r11,44(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 44);
	// add r31,r30,r11
	r31.u64 = r30.u64 + ctx.r11.u64;
	// lhzx r11,r30,r11
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x821f3d78
	if (ctx.cr6.eq) goto loc_821F3D78;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x821f3d4c
	if (ctx.cr6.eq) goto loc_821F3D4C;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x821f3dc8
	if (!ctx.cr6.eq) goto loc_821F3DC8;
	// lfs f0,428(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 428);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,28(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f12,f0,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f13.f64)));
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 20, temp.u32);
	// lfs f13,32(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,428(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 428);
	ctx.f12.f64 = double(temp.f32);
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// lfs f0,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f13,f12,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f12.f64, ctx.f0.f64)));
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 24, temp.u32);
	// bl 0x822d6130
	ctx.lr = 0x821F3D24;
	sub_822D6130(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lfs f13,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f1,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 20, temp.u32);
	// bl 0x822d6130
	ctx.lr = 0x821F3D3C;
	sub_822D6130(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lfs f13,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// b 0x821f3dc4
	goto loc_821F3DC4;
loc_821F3D4C:
	// lfs f13,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,428(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 428);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,28(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f0,f12,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f12.f64, ctx.f13.f64)));
	// lfs f13,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 20, temp.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x821f3dc8
	if (ctx.cr6.lt) goto loc_821F3DC8;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 20, temp.u32);
	// b 0x821f3dc8
	goto loc_821F3DC8;
loc_821F3D78:
	// lfs f0,428(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 428);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f13,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,28(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f12,f0,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f13.f64)));
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 20, temp.u32);
	// lfs f13,32(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,428(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 428);
	ctx.f12.f64 = double(temp.f32);
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// lfs f0,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f13,f12,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f12.f64, ctx.f0.f64)));
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 24, temp.u32);
	// bl 0x822d6500
	ctx.lr = 0x821F3DAC;
	sub_822D6500(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 20, temp.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lfs f1,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822d6500
	ctx.lr = 0x821F3DC0;
	sub_822D6500(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
loc_821F3DC4:
	// stfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 24, temp.u32);
loc_821F3DC8:
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,36
	r30.s64 = r30.s64 + 36;
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821f3cd0
	if (ctx.cr6.lt) goto loc_821F3CD0;
loc_821F3DE0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_821FB1B8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x821fb1e0
	if (!ctx.cr6.lt) goto loc_821FB1E0;
	// addi r11,r5,1569
	ctx.r11.s64 = ctx.r5.s64 + 1569;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r11,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// stfsx f0,r11,r3
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, temp.u32);
	// blr 
	return;
loc_821FB1E0:
	// clrlwi. r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// addi r10,r3,6276
	ctx.r10.s64 = ctx.r3.s64 + 6276;
loc_821FB1EC:
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x821fb200
	if (ctx.cr0.eq) goto loc_821FB200;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
loc_821FB200:
	// rlwinm. r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x821fb1ec
	if (!ctx.cr0.eq) goto loc_821FB1EC;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821FED88) {
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
	// bl 0x822d6060
	ctx.lr = 0x821FED98;
	sub_822D6060(ctx, base);
	// clrlwi r11,r3,17
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFF;
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
	// lfs f0,21052(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 21052);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821FF618) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// rlwinm r10,r3,23,27,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 23) & 0x1E;
	// addi r11,r11,3332
	ctx.r11.s64 = ctx.r11.s64 + 3332;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82200428) {
	REX_FUNC_PROLOGUE();
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
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x822d4f28
	ctx.lr = 0x82200440;
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,108(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,184(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 184);
	ctx.f13.f64 = double(temp.f32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f12,240(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 240);
	ctx.f12.f64 = double(temp.f32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// fmadds f30,f13,f0,f12
	f30.f64 = double(float(std::fma(ctx.f13.f64, ctx.f0.f64, ctx.f12.f64)));
	// lfs f13,216(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 216);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,112(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
	// lfs f31,2000(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	f31.f64 = double(temp.f32);
	// lfs f11,236(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 236);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f29,f13,f12,f11
	f29.f64 = double(float(std::fma(ctx.f13.f64, ctx.f12.f64, ctx.f11.f64)));
	// lfs f13,244(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 244);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,188(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 188);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f28,f10,f0,f13
	f28.f64 = double(float(std::fma(ctx.f10.f64, ctx.f0.f64, ctx.f13.f64)));
	// lfs f12,192(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 192);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,248(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 248);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f27,f12,f0,f13
	f27.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f13.f64)));
	// fadds f26,f30,f31
	f26.f64 = double(float(f30.f64 + f31.f64));
	// fmr f1,f26
	ctx.f1.f64 = f26.f64;
	// bl 0x820e0028
	ctx.lr = 0x82200498;
	sub_820E0028(ctx, base);
	// fmr f25,f1
	ctx.fpscr.disableFlushMode();
	f25.f64 = ctx.f1.f64;
	// fmr f1,f26
	ctx.f1.f64 = f26.f64;
	// bl 0x820e0088
	ctx.lr = 0x822004A4;
	sub_820E0088(ctx, base);
	// fmr f26,f1
	ctx.fpscr.disableFlushMode();
	f26.f64 = ctx.f1.f64;
	// fmr f1,f28
	ctx.f1.f64 = f28.f64;
	// bl 0x820e0028
	ctx.lr = 0x822004B0;
	sub_820E0028(ctx, base);
	// fmr f24,f1
	ctx.fpscr.disableFlushMode();
	f24.f64 = ctx.f1.f64;
	// fmr f1,f28
	ctx.f1.f64 = f28.f64;
	// bl 0x820e0088
	ctx.lr = 0x822004BC;
	sub_820E0088(ctx, base);
	// lfs f12,220(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 220);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f24,f26
	ctx.f11.f64 = double(float(f24.f64 * f26.f64));
	// lfs f0,200(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 200);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f1,f26
	ctx.f13.f64 = double(float(ctx.f1.f64 * f26.f64));
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// lfs f10,224(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 224);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,204(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 204);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// fadds f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// lfs f9,228(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 228);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,208(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 208);
	ctx.f10.f64 = double(temp.f32);
	// fadds f10,f9,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// fnmsubs f0,f11,f29,f0
	ctx.f0.f64 = double(float(-std::fma(ctx.f11.f64, f29.f64, -ctx.f0.f64)));
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// fnmsubs f0,f25,f29,f12
	ctx.f0.f64 = double(float(-std::fma(f25.f64, f29.f64, -ctx.f12.f64)));
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 16, temp.u32);
	// fnmsubs f0,f13,f29,f10
	ctx.f0.f64 = double(float(-std::fma(ctx.f13.f64, f29.f64, -ctx.f10.f64)));
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 20, temp.u32);
	// bl 0x820e01b0
	ctx.lr = 0x82200508;
	sub_820E01B0(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// fmr f3,f27
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f27.f64;
	// fadds f2,f28,f31
	ctx.f2.f64 = double(float(f28.f64 + f31.f64));
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x821ff9d0
	ctx.lr = 0x8220051C;
	sub_821FF9D0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f29.f64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lfs f31,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	f31.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x820e0d78
	ctx.lr = 0x8220053C;
	sub_820E0D78(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820e01b0
	ctx.lr = 0x82200544;
	sub_820E01B0(ctx, base);
	// lfs f0,220(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 220);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,224(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 224);
	ctx.f13.f64 = double(temp.f32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// lfs f12,228(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 228);
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
	// beq cr6,0x822005a0
	if (ctx.cr6.eq) goto loc_822005A0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f2,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f2.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f1,12(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82125860
	ctx.lr = 0x82200580;
	sub_82125860(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2352(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2352);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x8220059c
	if (ctx.cr6.lt) goto loc_8220059C;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_8220059C:
	// stfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 16, temp.u32);
loc_822005A0:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x822d4f74
	ctx.lr = 0x822005AC;
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

DEFINE_REX_FUNC(sub_82208188) {
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
	ctx.lr = 0x82208190;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r27,0
	r27.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82208220
	if (ctx.cr6.eq) goto loc_82208220;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r28,r27
	r28.u64 = r27.u64;
	// lbz r11,1(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8220820c
	if (ctx.cr0.eq) goto loc_8220820C;
	// mr r30,r27
	r30.u64 = r27.u64;
loc_822081C0:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwzx r10,r30,r11
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822081f4
	if (ctx.cr6.eq) goto loc_822081F4;
	// rotlwi r29,r10,0
	r29.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x822081ec
	if (ctx.cr6.eq) goto loc_822081EC;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x820e48c0
	ctx.lr = 0x822081E4;
	sub_820E48C0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822c80a8
	ctx.lr = 0x822081EC;
	sub_822C80A8(ctx, base);
loc_822081EC:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stwx r27,r30,r11
	REX_STORE_U32(r30.u32 + ctx.r11.u32, r27.u32);
loc_822081F4:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// lbz r11,1(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822081c0
	if (ctx.cr6.lt) goto loc_822081C0;
loc_8220820C:
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82208220
	if (ctx.cr6.eq) goto loc_82208220;
	// bl 0x822c80a8
	ctx.lr = 0x8220821C;
	sub_822C80A8(ctx, base);
	// stw r27,4(r31)
	REX_STORE_U32(r31.u32 + 4, r27.u32);
loc_82208220:
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82208234
	if (ctx.cr6.eq) goto loc_82208234;
	// bl 0x822c80a8
	ctx.lr = 0x82208230;
	sub_822C80A8(ctx, base);
	// stw r27,8(r31)
	REX_STORE_U32(r31.u32 + 8, r27.u32);
loc_82208234:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_8220A088) {
	REX_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x824d420c
	__imp__MmFreePhysicalMemory(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8220A1D8) {
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
	// stwu r1,-864(r1)
	ea = -864 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// li r3,10
	ctx.r3.s64 = 10;
	// mr r31,r30
	r31.u64 = r30.u64;
	// bl 0x824d411c
	ctx.lr = 0x8220A1FC;
	__imp__XexCheckExecutablePrivilege(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8220a414
	if (ctx.cr0.eq) goto loc_8220A414;
	// bl 0x824d40cc
	ctx.lr = 0x8220A208;
	__imp__XGetAVPack(ctx, base);
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// beq cr6,0x8220a414
	if (ctx.cr6.eq) goto loc_8220A414;
	// cmplwi cr6,r3,6
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 6, ctx.xer);
	// beq cr6,0x8220a414
	if (ctx.cr6.eq) goto loc_8220A414;
	// cmplwi cr6,r3,8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 8, ctx.xer);
	// beq cr6,0x8220a414
	if (ctx.cr6.eq) goto loc_8220A414;
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// beq cr6,0x8220a414
	if (ctx.cr6.eq) goto loc_8220A414;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x824d415c
	ctx.lr = 0x8220A240;
	__imp__ExGetXConfigSetting(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8220a414
	if (!ctx.cr0.eq) goto loc_8220A414;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r11,r11,0,16,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF00;
	// cmplwi cr6,r11,768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 768, ctx.xer);
	// bne cr6,0x8220a414
	if (!ctx.cr6.eq) goto loc_8220A414;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,10
	ctx.r4.s64 = 10;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x824d415c
	ctx.lr = 0x8220A270;
	__imp__ExGetXConfigSetting(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8220a414
	if (!ctx.cr0.eq) goto loc_8220A414;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm. r10,r11,0,8,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8220a28c
	if (!ctx.cr0.eq) goto loc_8220A28C;
	// rlwinm. r11,r11,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8220a414
	if (!ctx.cr0.eq) goto loc_8220A414;
loc_8220A28C:
	// bl 0x82209ef8
	ctx.lr = 0x8220A290;
	sub_82209EF8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,510
	ctx.r5.s64 = 510;
	// sth r30,320(r1)
	REX_STORE_U16(ctx.r1.u32 + 320, r30.u16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,322
	ctx.r3.s64 = ctx.r1.s64 + 322;
	// bl 0x822d5870
	ctx.lr = 0x8220A2A8;
	sub_822D5870(ctx, base);
	// li r5,62
	ctx.r5.s64 = 62;
	// li r4,0
	ctx.r4.s64 = 0;
	// sth r30,256(r1)
	REX_STORE_U16(ctx.r1.u32 + 256, r30.u16);
	// addi r3,r1,258
	ctx.r3.s64 = ctx.r1.s64 + 258;
	// bl 0x822d5870
	ctx.lr = 0x8220A2BC;
	sub_822D5870(ctx, base);
	// li r8,18
	ctx.r8.s64 = 18;
	// li r9,27
	ctx.r9.s64 = 27;
	// stw r30,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, r30.u32);
	// stw r8,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r8.u32);
	// li r7,20
	ctx.r7.s64 = 20;
	// stw r8,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r8.u32);
	// li r8,22
	ctx.r8.s64 = 22;
	// stw r9,216(r1)
	REX_STORE_U32(ctx.r1.u32 + 216, ctx.r9.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r9,244(r1)
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r9.u32);
	// li r9,19
	ctx.r9.s64 = 19;
	// stw r8,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, ctx.r8.u32);
	// li r8,28
	ctx.r8.s64 = 28;
	// stw r7,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r7.u32);
	// li r7,21
	ctx.r7.s64 = 21;
	// stw r9,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r9.u32);
	// li r9,23
	ctx.r9.s64 = 23;
	// stw r8,196(r1)
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r8.u32);
	// li r8,30
	ctx.r8.s64 = 30;
	// stw r7,200(r1)
	REX_STORE_U32(ctx.r1.u32 + 200, ctx.r7.u32);
	// li r7,25
	ctx.r7.s64 = 25;
	// stw r9,204(r1)
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r9.u32);
	// li r9,24
	ctx.r9.s64 = 24;
	// stw r8,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r8.u32);
	// li r8,26
	ctx.r8.s64 = 26;
	// stw r7,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r7.u32);
	// li r7,29
	ctx.r7.s64 = 29;
	// stw r9,220(r1)
	REX_STORE_U32(ctx.r1.u32 + 220, ctx.r9.u32);
	// li r9,31
	ctx.r9.s64 = 31;
	// stw r8,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r8.u32);
	// li r8,16
	ctx.r8.s64 = 16;
	// stw r7,228(r1)
	REX_STORE_U32(ctx.r1.u32 + 228, ctx.r7.u32);
	// li r7,17
	ctx.r7.s64 = 17;
	// stw r9,232(r1)
	REX_STORE_U32(ctx.r1.u32 + 232, ctx.r9.u32);
	// li r9,6
	ctx.r9.s64 = 6;
	// stw r8,236(r1)
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r8.u32);
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r7,240(r1)
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r7.u32);
	// li r7,3
	ctx.r7.s64 = 3;
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// li r6,12
	ctx.r6.s64 = 12;
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r9,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// li r9,7
	ctx.r9.s64 = 7;
	// stw r8,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// li r8,14
	ctx.r8.s64 = 14;
	// stw r7,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// li r7,9
	ctx.r7.s64 = 9;
	// stw r6,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r6.u32);
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r10,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// stw r9,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// li r10,10
	ctx.r10.s64 = 10;
	// stw r8,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r8.u32);
	// li r9,13
	ctx.r9.s64 = 13;
	// stw r7,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r7.u32);
	// li r8,15
	ctx.r8.s64 = 15;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r11,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// stw r6,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r6.u32);
	// cmplwi cr6,r31,18
	ctx.cr6.compare<uint32_t>(r31.u32, 18, ctx.xer);
	// stw r10,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// stw r9,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r9.u32);
	// stw r8,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r8.u32);
	// stw r7,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r7.u32);
	// stw r11,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// blt cr6,0x8220a3d4
	if (ctx.cr6.lt) goto loc_8220A3D4;
	// li r31,1
	r31.s64 = 1;
loc_8220A3D4:
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// rlwinm r31,r31,2,0,29
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// lwzx r3,r31,r11
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	// bl 0x8220a158
	ctx.lr = 0x8220A3EC;
	sub_8220A158(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// lwzx r3,r31,r11
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	// bl 0x8220a158
	ctx.lr = 0x8220A400;
	sub_8220A158(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x8220a0a0
	ctx.lr = 0x8220A410;
	sub_8220A0A0(ctx, base);
	// li r31,1
	r31.s64 = 1;
loc_8220A414:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,864
	ctx.r1.s64 = ctx.r1.s64 + 864;
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

DEFINE_REX_FUNC(sub_822123B8) {
	REX_FUNC_PROLOGUE();
	// mulli r11,r4,24
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(24));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,1168(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1168);
	// srawi r3,r11,27
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFF) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 27;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822126F0) {
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
	ctx.lr = 0x822126F8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,3209
	ctx.r11.s64 = ctx.r4.s64 + 3209;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// li r28,0
	r28.s64 = 0;
	// lwzx r31,r11,r3
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82212754
	if (ctx.cr6.eq) goto loc_82212754;
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// subfic r9,r4,239
	ctx.xer.ca = ctx.r4.u32 <= 239;
	ctx.r9.u64 = static_cast<uint64_t>(239) - ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r11,r10,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// lwzx r9,r9,r30
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + r30.u32);
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// subf r28,r10,r11
	r28.u64 = ctx.r11.u64 - ctx.r10.u64;
	// bl 0x82215e78
	ctx.lr = 0x82212754;
	sub_82215E78(ctx, base);
loc_82212754:
	// add r11,r30,r29
	ctx.r11.u64 = r30.u64 + r29.u64;
	// stw r28,0(r27)
	REX_STORE_U32(r27.u32 + 0, r28.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r11,12904(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 12904);
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// stw r11,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_82215870) {
	REX_FUNC_PROLOGUE();
	// lwz r9,156(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 156);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,16384
	ctx.r10.s64 = 1073741824;
	// lwz r11,152(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 152);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r9,r11,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r4,r9,512
	ctx.r4.s64 = ctx.r9.s64 + 512;
	// rlwinm r9,r10,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r8,r10,3
	ctx.r8.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// rlwinm r10,r4,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x1000;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// clrlwi r11,r11,3
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r4,r6,r9
	ctx.r4.u64 = ctx.r9.u64 - ctx.r6.u64;
	// subf r3,r6,r11
	ctx.r3.u64 = ctx.r11.u64 - ctx.r6.u64;
	// b 0x8221c548
	sub_8221C548(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82216EB8) {
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
	ctx.lr = 0x82216EC0;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rldicl r11,r4,32,32
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFF;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r20,r6
	r20.u64 = ctx.r6.u64;
	// mr r21,r7
	r21.u64 = ctx.r7.u64;
	// mr r22,r8
	r22.u64 = ctx.r8.u64;
	// mr r23,r9
	r23.u64 = ctx.r9.u64;
	// mr r24,r10
	r24.u64 = ctx.r10.u64;
	// cmpldi cr6,r4,0
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, 0, ctx.xer);
	// clrlwi r31,r11,27
	r31.u64 = ctx.r11.u32 & 0x1F;
	// beq cr6,0x82216f00
	if (ctx.cr6.eq) goto loc_82216F00;
	// lwz r11,276(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// ori r25,r11,2
	r25.u64 = ctx.r11.u64 | 2;
	// b 0x82216f04
	goto loc_82216F04;
loc_82216F00:
	// lwz r25,276(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
loc_82216F04:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// clrlwi r9,r11,28
	ctx.r9.u64 = ctx.r11.u32 & 0xF;
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// bne cr6,0x82216f30
	if (!ctx.cr6.eq) goto loc_82216F30;
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82216f30
	if (ctx.cr0.eq) goto loc_82216F30;
	// lwz r11,24(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82216f30
	if (ctx.cr6.eq) goto loc_82216F30;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82216F30:
	// andi. r11,r25,4112
	ctx.r11.u64 = r25.u64 & 4112;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r29,-32256
	r29.s64 = -2113929216;
	// lis r28,-32256
	r28.s64 = -2113929216;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// cmpldi cr6,r30,0
	ctx.cr6.compare<uint64_t>(r30.u64, 0, ctx.xer);
	// beq 0x82216f84
	if (ctx.cr0.eq) goto loc_82216F84;
	// beq cr6,0x82216f7c
	if (ctx.cr6.eq) goto loc_82216F7C;
	// bl 0x824d419c
	ctx.lr = 0x82216F50;
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x82216f60
	if (!ctx.cr6.eq) goto loc_82216F60;
	// lwz r11,1496(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 1496);
	// b 0x82216f64
	goto loc_82216F64;
loc_82216F60:
	// lwz r11,1500(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 1500);
loc_82216F64:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,24408(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24408);
	// rlwinm r11,r31,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r31,4(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82216fb8
	goto loc_82216FB8;
loc_82216F7C:
	// lwz r31,12(r10)
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// b 0x82216fb8
	goto loc_82216FB8;
loc_82216F84:
	// beq cr6,0x82216fb4
	if (ctx.cr6.eq) goto loc_82216FB4;
	// bl 0x824d419c
	ctx.lr = 0x82216F8C;
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x82216f9c
	if (!ctx.cr6.eq) goto loc_82216F9C;
	// lwz r11,1496(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 1496);
	// b 0x82216fa0
	goto loc_82216FA0;
loc_82216F9C:
	// lwz r11,1500(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 1500);
loc_82216FA0:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r31,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r11,24408(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24408);
	// lwzx r31,r11,r10
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// b 0x82216fb8
	goto loc_82216FB8;
loc_82216FB4:
	// lwz r31,8(r10)
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
loc_82216FB8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82217008
	if (ctx.cr6.eq) goto loc_82217008;
	// bl 0x824d419c
	ctx.lr = 0x82216FC4;
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x82216fd4
	if (!ctx.cr6.eq) goto loc_82216FD4;
	// lwz r11,1496(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 1496);
	// b 0x82216fd8
	goto loc_82216FD8;
loc_82216FD4:
	// lwz r11,1500(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 1500);
loc_82216FD8:
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpldi cr6,r30,0
	ctx.cr6.compare<uint64_t>(r30.u64, 0, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// bne cr6,0x82216ff0
	if (!ctx.cr6.eq) goto loc_82216FF0;
	// li r7,0
	ctx.r7.s64 = 0;
	// beq cr6,0x82216ff8
	if (ctx.cr6.eq) goto loc_82216FF8;
loc_82216FF0:
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x82216ffc
	goto loc_82216FFC;
loc_82216FF8:
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
loc_82216FFC:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82213c28
	ctx.lr = 0x82217008;
	sub_82213C28(ctx, base);
loc_82217008:
	// li r11,256
	ctx.r11.s64 = 256;
loc_8221700C:
	// mfmsr r8
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r8.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r10,0,r26
	ea = r26.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r26
	ea = r26.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x8221700c
	if (!ctx.cr0.eq) goto loc_8221700C;
	// lwsync 
	// andi. r11,r25,18
	ctx.r11.u64 = r25.u64 & 18;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8221713c
	if (!ctx.cr0.eq) goto loc_8221713C;
	// bl 0x824d419c
	ctx.lr = 0x8221703C;
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x8221704c
	if (!ctx.cr6.eq) goto loc_8221704C;
	// lwz r11,1496(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 1496);
	// b 0x82217050
	goto loc_82217050;
loc_8221704C:
	// lwz r11,1500(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 1500);
loc_82217050:
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lwz r11,-11428(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -11428);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8221707c
	if (!ctx.cr6.eq) goto loc_8221707C;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82216d48
	ctx.lr = 0x82217078;
	sub_82216D48(ctx, base);
	// b 0x8221713c
	goto loc_8221713C;
loc_8221707C:
	// rlwinm r11,r23,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r23,3
	ctx.r10.u64 = r23.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// add r30,r11,r10
	r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r29,r30,r24
	r29.u64 = r30.u64 + r24.u64;
	// bl 0x823cd280
	ctx.lr = 0x82217098;
	sub_823CD280(ctx, base);
	// lwz r11,11016(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 11016);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x822170b8
	if (ctx.cr6.eq) goto loc_822170B8;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,12248
	ctx.r3.s64 = r31.s64 + 12248;
	// bl 0x822138a0
	ctx.lr = 0x822170B4;
	sub_822138A0(ctx, base);
	// b 0x8221713c
	goto loc_8221713C;
loc_822170B8:
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x822170d0
	if (!ctx.cr6.gt) goto loc_822170D0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82215008
	ctx.lr = 0x822170D0;
	sub_82215008(ctx, base);
loc_822170D0:
	// li r11,2609
	ctx.r11.s64 = 2609;
	// lwz r10,284(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// addi r11,r29,4095
	ctx.r11.s64 = r29.s64 + 4095;
	// ori r9,r9,2607
	ctx.r9.u64 = ctx.r9.u64 | 2607;
	// rlwinm r8,r30,0,0,19
	ctx.r8.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFF000;
	// rlwinm r11,r11,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// lis r7,-16380
	ctx.r7.s64 = -1073479680;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// subf r11,r8,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r8.u64;
	// ori r10,r7,15360
	ctx.r10.u64 = ctx.r7.u64 | 15360;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,2609
	ctx.r6.s64 = 2609;
	// li r5,0
	ctx.r5.s64 = 0;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// li r30,8
	r30.s64 = 8;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
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
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
loc_8221713C:
	// rlwinm. r6,r25,0,27,27
	ctx.r6.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x82217150
	if (!ctx.cr0.eq) goto loc_82217150;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// rlwinm. r11,r11,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221721c
	if (ctx.cr0.eq) goto loc_8221721C;
loc_82217150:
	// clrlwi. r11,r25,31
	ctx.r11.u64 = r25.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822171fc
	if (!ctx.cr0.eq) goto loc_822171FC;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// beq cr6,0x82217174
	if (ctx.cr6.eq) goto loc_82217174;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x82217174
	if (ctx.cr6.eq) goto loc_82217174;
	// rlwinm r11,r22,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 0) & 0xFFFFFF80;
	// addi r7,r26,24
	ctx.r7.s64 = r26.s64 + 24;
	// b 0x8221717c
	goto loc_8221717C;
loc_82217174:
	// rlwinm r11,r21,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0xFFFFFF80;
	// addi r7,r26,20
	ctx.r7.s64 = r26.s64 + 20;
loc_8221717C:
	// subf r11,r11,r23
	ctx.r11.u64 = r23.u64 - ctx.r11.u64;
	// lwz r5,0(r7)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// add r10,r11,r24
	ctx.r10.u64 = ctx.r11.u64 + r24.u64;
	// rlwinm r8,r11,25,7,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1FFFFFF;
	// addi r11,r10,127
	ctx.r11.s64 = ctx.r10.s64 + 127;
	// rlwinm. r4,r5,16,16,16
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// rlwinm r9,r11,25,7,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1FFFFFF;
	// rlwinm r11,r5,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFFFF;
	// clrlwi r10,r5,16
	ctx.r10.u64 = ctx.r5.u32 & 0xFFFF;
	// beq 0x822171a8
	if (ctx.cr0.eq) goto loc_822171A8;
	// rlwinm r11,r11,4,13,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x7FFF0;
loc_822171A8:
	// rlwinm. r5,r10,0,16,16
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x822171b4
	if (ctx.cr0.eq) goto loc_822171B4;
	// rlwinm r10,r10,4,13,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0x7FFF0;
loc_822171B4:
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x822171c0
	if (!ctx.cr6.gt) goto loc_822171C0;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_822171C0:
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x822171cc
	if (!ctx.cr6.lt) goto loc_822171CC;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_822171CC:
	// cmplwi cr6,r11,32767
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32767, ctx.xer);
	// blt cr6,0x822171dc
	if (ctx.cr6.lt) goto loc_822171DC;
	// addis r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 524288;
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
loc_822171DC:
	// cmplwi cr6,r10,32767
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32767, ctx.xer);
	// blt cr6,0x822171f0
	if (ctx.cr6.lt) goto loc_822171F0;
	// addis r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 524288;
	// addi r10,r10,15
	ctx.r10.s64 = ctx.r10.s64 + 15;
	// rlwinm r10,r10,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
loc_822171F0:
	// rlwinm r11,r11,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
loc_822171FC:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8221721c
	if (ctx.cr6.eq) goto loc_8221721C;
	// rlwinm r11,r23,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r23,3
	ctx.r10.u64 = r23.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addis r23,r11,-16384
	r23.s64 = ctx.r11.s64 + -1073741824;
loc_8221721C:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4eb8
	return;
}

DEFINE_REX_FUNC(sub_82227CF8) {
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
	ctx.lr = 0x82227D00;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// ld r4,0(r3)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// ld r27,32(r3)
	r27.u64 = REX_LOAD_U64(ctx.r3.u32 + 32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// ld r28,24(r3)
	r28.u64 = REX_LOAD_U64(ctx.r3.u32 + 24);
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// ld r30,16(r3)
	r30.u64 = REX_LOAD_U64(ctx.r3.u32 + 16);
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// ld r29,8(r3)
	r29.u64 = REX_LOAD_U64(ctx.r3.u32 + 8);
	// li r26,0
	r26.s64 = 0;
	// cmpldi cr6,r4,0
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, 0, ctx.xer);
	// beq cr6,0x82227d44
	if (ctx.cr6.eq) goto loc_82227D44;
	// addi r6,r3,1920
	ctx.r6.s64 = ctx.r3.s64 + 1920;
	// li r5,16384
	ctx.r5.s64 = 16384;
	// bl 0x8221ead0
	ctx.lr = 0x82227D40;
	sub_8221EAD0(ctx, base);
	// std r26,0(r31)
	REX_STORE_U64(r31.u32 + 0, r26.u64);
loc_82227D44:
	// cmpldi cr6,r29,0
	ctx.cr6.compare<uint64_t>(r29.u64, 0, ctx.xer);
	// beq cr6,0x82227d64
	if (ctx.cr6.eq) goto loc_82227D64;
	// addi r6,r31,6016
	ctx.r6.s64 = r31.s64 + 6016;
	// li r5,17408
	ctx.r5.s64 = 17408;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8221ead0
	ctx.lr = 0x82227D60;
	sub_8221EAD0(ctx, base);
	// std r26,8(r31)
	REX_STORE_U64(r31.u32 + 8, r26.u64);
loc_82227D64:
	// cmpldi cr6,r30,0
	ctx.cr6.compare<uint64_t>(r30.u64, 0, ctx.xer);
	// beq cr6,0x82227e44
	if (ctx.cr6.eq) goto loc_82227E44;
	// rlwinm r11,r30,0,11,14
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x1E0000;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82227d88
	if (ctx.cr6.eq) goto loc_82227D88;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8221f868
	ctx.lr = 0x82227D84;
	sub_8221F868(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_82227D88:
	// ld r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 40);
	// and r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 & r30.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82227dac
	if (ctx.cr6.eq) goto loc_82227DAC;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r5,10560(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 10560);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8221e3a8
	ctx.lr = 0x82227DA8;
	sub_8221E3A8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_82227DAC:
	// clrldi r11,r30,52
	ctx.r11.u64 = r30.u64 & 0xFFF;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82227dcc
	if (ctx.cr6.eq) goto loc_82227DCC;
	// addi r6,r31,10548
	ctx.r6.s64 = r31.s64 + 10548;
	// li r5,8704
	ctx.r5.s64 = 8704;
	// rldicr r4,r30,52,11
	ctx.r4.u64 = __builtin_rotateleft64(r30.u64, 52) & 0xFFF0000000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8221e738
	ctx.lr = 0x82227DCC;
	sub_8221E738(ctx, base);
loc_82227DCC:
	// rlwinm r11,r30,0,15,19
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x1F000;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82227dec
	if (ctx.cr6.eq) goto loc_82227DEC;
	// addi r6,r31,10528
	ctx.r6.s64 = r31.s64 + 10528;
	// li r5,8576
	ctx.r5.s64 = 8576;
	// rldicr r4,r30,47,4
	ctx.r4.u64 = __builtin_rotateleft64(r30.u64, 47) & 0xF800000000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8221e738
	ctx.lr = 0x82227DEC;
	sub_8221E738(ctx, base);
loc_82227DEC:
	// lis r12,0
	ctx.r12.s64 = 0;
	// ori r12,r12,65535
	ctx.r12.u64 = ctx.r12.u64 | 65535;
	// rldicr r12,r12,42,21
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 42) & 0xFFFFFC0000000000;
	// and r11,r30,r12
	ctx.r11.u64 = r30.u64 & ctx.r12.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82227e18
	if (ctx.cr6.eq) goto loc_82227E18;
	// addi r6,r31,10368
	ctx.r6.s64 = r31.s64 + 10368;
	// li r5,8192
	ctx.r5.s64 = 8192;
	// rldicr r4,r30,6,15
	ctx.r4.u64 = __builtin_rotateleft64(r30.u64, 6) & 0xFFFF000000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8221e738
	ctx.lr = 0x82227E18;
	sub_8221E738(ctx, base);
loc_82227E18:
	// lis r12,-32
	ctx.r12.s64 = -2097152;
	// clrldi r12,r12,22
	ctx.r12.u64 = ctx.r12.u64 & 0x3FFFFFFFFFF;
	// and r11,r30,r12
	ctx.r11.u64 = r30.u64 & ctx.r12.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82227e40
	if (ctx.cr6.eq) goto loc_82227E40;
	// addi r6,r31,10444
	ctx.r6.s64 = r31.s64 + 10444;
	// li r5,8448
	ctx.r5.s64 = 8448;
	// rldicr r4,r30,22,20
	ctx.r4.u64 = __builtin_rotateleft64(r30.u64, 22) & 0xFFFFF80000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8221e738
	ctx.lr = 0x82227E40;
	sub_8221E738(ctx, base);
loc_82227E40:
	// std r26,16(r31)
	REX_STORE_U64(r31.u32 + 16, r26.u64);
loc_82227E44:
	// cmpldi cr6,r28,0
	ctx.cr6.compare<uint64_t>(r28.u64, 0, ctx.xer);
	// beq cr6,0x82227e94
	if (ctx.cr6.eq) goto loc_82227E94;
	// clrldi r11,r28,32
	ctx.r11.u64 = r28.u64 & 0xFFFFFFFF;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82227e64
	if (ctx.cr6.eq) goto loc_82227E64;
	// rldicr r4,r28,32,31
	ctx.r4.u64 = __builtin_rotateleft64(r28.u64, 32) & 0xFFFFFFFF00000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8221e978
	ctx.lr = 0x82227E64;
	sub_8221E978(ctx, base);
loc_82227E64:
	// lis r12,31
	ctx.r12.s64 = 2031616;
	// ori r12,r12,65535
	ctx.r12.u64 = ctx.r12.u64 | 65535;
	// rldicr r12,r12,34,29
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 34) & 0xFFFFFFFC00000000;
	// and r11,r28,r12
	ctx.r11.u64 = r28.u64 & ctx.r12.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82227e90
	if (ctx.cr6.eq) goto loc_82227E90;
	// addi r6,r31,10596
	ctx.r6.s64 = r31.s64 + 10596;
	// li r5,8832
	ctx.r5.s64 = 8832;
	// rldicr r4,r28,9,20
	ctx.r4.u64 = __builtin_rotateleft64(r28.u64, 9) & 0xFFFFF80000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8221e738
	ctx.lr = 0x82227E90;
	sub_8221E738(ctx, base);
loc_82227E90:
	// std r26,24(r31)
	REX_STORE_U64(r31.u32 + 24, r26.u64);
loc_82227E94:
	// cmpldi cr6,r27,0
	ctx.cr6.compare<uint64_t>(r27.u64, 0, ctx.xer);
	// beq cr6,0x82227f58
	if (ctx.cr6.eq) goto loc_82227F58;
	// li r12,255
	ctx.r12.s64 = 255;
	// rldicr r12,r12,38,25
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 38) & 0xFFFFFFC000000000;
	// and r11,r27,r12
	ctx.r11.u64 = r27.u64 & ctx.r12.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82227ec4
	if (ctx.cr6.eq) goto loc_82227EC4;
	// addi r6,r31,10832
	ctx.r6.s64 = r31.s64 + 10832;
	// li r5,9088
	ctx.r5.s64 = 9088;
	// rldicr r4,r27,18,7
	ctx.r4.u64 = __builtin_rotateleft64(r27.u64, 18) & 0xFF00000000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8221e738
	ctx.lr = 0x82227EC4;
	sub_8221E738(ctx, base);
loc_82227EC4:
	// li r12,63
	ctx.r12.s64 = 63;
	// rldicr r12,r12,49,14
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 49) & 0xFFFE000000000000;
	// and r11,r27,r12
	ctx.r11.u64 = r27.u64 & ctx.r12.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82227ee4
	if (ctx.cr6.eq) goto loc_82227EE4;
	// rldicr r4,r27,9,5
	ctx.r4.u64 = __builtin_rotateleft64(r27.u64, 9) & 0xFC00000000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8221e7f8
	ctx.lr = 0x82227EE4;
	sub_8221E7F8(ctx, base);
loc_82227EE4:
	// li r12,1
	ctx.r12.s64 = 1;
	// rldicr r12,r12,56,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 56) & 0xFFFFFFFFFFFFFFFF;
	// and r11,r27,r12
	ctx.r11.u64 = r27.u64 & ctx.r12.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82227f0c
	if (ctx.cr6.eq) goto loc_82227F0C;
	// addi r6,r31,10112
	ctx.r6.s64 = r31.s64 + 10112;
	// li r5,18688
	ctx.r5.s64 = 18688;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8221e738
	ctx.lr = 0x82227F0C;
	sub_8221E738(ctx, base);
loc_82227F0C:
	// clrldi r11,r27,26
	ctx.r11.u64 = r27.u64 & 0x3FFFFFFFFF;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82227f2c
	if (ctx.cr6.eq) goto loc_82227F2C;
	// addi r6,r31,10680
	ctx.r6.s64 = r31.s64 + 10680;
	// li r5,8960
	ctx.r5.s64 = 8960;
	// rldicr r4,r27,26,37
	ctx.r4.u64 = __builtin_rotateleft64(r27.u64, 26) & 0xFFFFFFFFFC000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8221e738
	ctx.lr = 0x82227F2C;
	sub_8221E738(ctx, base);
loc_82227F2C:
	// rldicr r11,r27,0,1
	ctx.r11.u64 = __builtin_rotateleft64(r27.u64, 0) & 0xC000000000000000;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82227f54
	if (ctx.cr6.eq) goto loc_82227F54;
	// lbz r11,11072(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 11072);
	// rlwinm. r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82227f4c
	if (!ctx.cr0.eq) goto loc_82227F4C;
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82227f54
	if (ctx.cr0.eq) goto loc_82227F54;
loc_82227F4C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8221a770
	ctx.lr = 0x82227F54;
	sub_8221A770(ctx, base);
loc_82227F54:
	// std r26,32(r31)
	REX_STORE_U64(r31.u32 + 32, r26.u64);
loc_82227F58:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r26,r31,12498
	r26.s64 = r31.s64 + 12498;
	// addi r27,r11,22128
	r27.s64 = ctx.r11.s64 + 22128;
loc_82227F64:
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82227f7c
	if (!ctx.cr6.gt) goto loc_82227F7C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82215008
	ctx.lr = 0x82227F7C;
	sub_82215008(ctx, base);
loc_82227F7C:
	// li r11,8450
	ctx.r11.s64 = 8450;
	// mr r29,r24
	r29.u64 = r24.u64;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// cmplwi cr6,r24,65535
	ctx.cr6.compare<uint32_t>(r24.u32, 65535, ctx.xer);
	// stwu r23,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r23.u32);
	ctx.r3.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// ble cr6,0x82227fb8
	if (!ctx.cr6.gt) goto loc_82227FB8;
	// rlwinm r11,r25,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// lwzx r11,r11,r27
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r27.u32);
	// divwu r10,r10,r11
	ctx.r10.u64 = uint32_t(ctx.r11.u32 ? ctx.r10.u32 / ctx.r11.u32 : 0);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// mullw r29,r10,r11
	r29.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
loc_82227FB8:
	// lbz r11,12563(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 12563);
	// lbz r10,11068(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 11068);
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subfe r9,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lbzx r11,r26,r11
	ctx.r11.u64 = REX_LOAD_U8(r26.u32 + ctx.r11.u32);
	// rlwimi r11,r9,8,23,23
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0x100) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFEFF);
	// clrlwi r28,r11,23
	r28.u64 = ctx.r11.u32 & 0x1FF;
	// rlwinm r28,r28,0,26,23
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFFFFFFFF3F;
	// bne 0x82228010
	if (!ctx.cr0.eq) goto loc_82228010;
	// lis r11,-16383
	ctx.r11.s64 = -1073676288;
	// rlwinm r10,r29,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 16) & 0xFFFF0000;
	// ori r11,r11,8705
	ctx.r11.u64 = ctx.r11.u64 | 8705;
	// clrlwi r9,r25,26
	ctx.r9.u64 = r25.u32 & 0x3F;
	// stwu r11,4(r30)
	ea = 4 + r30.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	r30.u32 = ea;
	// or r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 | ctx.r9.u64;
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// stwu r28,4(r30)
	ea = 4 + r30.u32;
	REX_STORE_U32(ea, r28.u32);
	r30.u32 = ea;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x822280dc
	goto loc_822280DC;
loc_82228010:
	// lwz r11,13628(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 13628);
	// addi r3,r31,13616
	ctx.r3.s64 = r31.s64 + 13616;
	// lwz r10,13632(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 13632);
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82228030
	if (!ctx.cr6.gt) goto loc_82228030;
	// bl 0x82214938
	ctx.lr = 0x8222802C;
	sub_82214938(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82228030:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r30.u32);
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// ori r9,r9,24576
	ctx.r9.u64 = ctx.r9.u64 | 24576;
	// stw r8,13628(r31)
	REX_STORE_U32(r31.u32 + 13628, ctx.r8.u32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// clrlwi r6,r25,26
	ctx.r6.u64 = r25.u32 & 0x3F;
	// rlwinm r7,r29,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 16) & 0xFFFF0000;
	// lis r9,-16383
	ctx.r9.s64 = -1073676288;
	// or r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 | ctx.r6.u64;
	// ori r9,r9,8705
	ctx.r9.u64 = ctx.r9.u64 | 8705;
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// ori r7,r7,128
	ctx.r7.u64 = ctx.r7.u64 | 128;
	// lis r5,-16384
	ctx.r5.s64 = -1073741824;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// ori r8,r5,24576
	ctx.r8.u64 = ctx.r5.u64 | 24576;
	// lis r5,-32768
	ctx.r5.s64 = -2147483648;
	// lis r10,-16383
	ctx.r10.s64 = -1073676288;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stwu r9,4(r6)
	ea = 4 + ctx.r6.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r6.u32 = ea;
	// ori r4,r10,23041
	ctx.r4.u64 = ctx.r10.u64 | 23041;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// rlwinm r11,r11,0,3,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1FFFFFFE;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// li r9,26
	ctx.r9.s64 = 26;
	// stwu r28,4(r6)
	ea = 4 + ctx.r6.u32;
	REX_STORE_U32(ea, r28.u32);
	ctx.r6.u32 = ea;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ori r10,r3,17921
	ctx.r10.u64 = ctx.r3.u64 | 17921;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stwu r7,4(r6)
	ea = 4 + ctx.r6.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r6.u32 = ea;
	// li r3,25
	ctx.r3.s64 = 25;
	// stwu r8,4(r6)
	ea = 4 + ctx.r6.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r6.u32 = ea;
	// stwu r5,4(r6)
	ea = 4 + ctx.r6.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r6.u32 = ea;
	// stwu r4,4(r6)
	ea = 4 + ctx.r6.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r6.u32 = ea;
	// stwu r9,4(r6)
	ea = 4 + ctx.r6.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r6.u32 = ea;
	// stwu r11,4(r6)
	ea = 4 + ctx.r6.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r6.u32 = ea;
	// stwu r10,4(r6)
	ea = 4 + ctx.r6.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r6.u32 = ea;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// stwu r3,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r11.u32 = ea;
loc_822280DC:
	// subf. r10,r29,r24
	ctx.r10.u64 = r24.u64 - r29.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// beq 0x82228104
	if (ctx.cr0.eq) goto loc_82228104;
	// addi r9,r27,4
	ctx.r9.s64 = r27.s64 + 4;
	// rlwinm r11,r25,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// subf r9,r11,r29
	ctx.r9.u64 = r29.u64 - ctx.r11.u64;
	// add r24,r11,r10
	r24.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r23,r9,r23
	r23.u64 = ctx.r9.u64 + r23.u64;
	// b 0x82227f64
	goto loc_82227F64;
loc_82228104:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec4
	return;
}

DEFINE_REX_FUNC(sub_82238E28) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82238E30;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,244
	r30.s64 = ctx.r3.s64 + 244;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x824d438c
	ctx.lr = 0x82238E48;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82238300
	ctx.lr = 0x82238E54;
	sub_82238300(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82238e68
	if (!ctx.cr0.eq) goto loc_82238E68;
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,87
	r31.u64 = r31.u64 | 87;
	// b 0x82238e70
	goto loc_82238E70;
loc_82238E68:
	// bl 0x8223de30
	ctx.lr = 0x82238E6C;
	sub_8223DE30(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_82238E70:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824d437c
	ctx.lr = 0x82238E78;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8223A2D0) {
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
	ctx.lr = 0x8223A2D8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r26,-32761
	r26.s64 = -2147024896;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// li r29,0
	r29.s64 = 0;
	// ori r26,r26,87
	r26.u64 = r26.u64 | 87;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8223a35c
	if (ctx.cr6.eq) goto loc_8223A35C;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r31,r3,36
	r31.s64 = ctx.r3.s64 + 36;
loc_8223A300:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x822399c0
	ctx.lr = 0x8223A30C;
	sub_822399C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8223a35c
	if (ctx.cr0.eq) goto loc_8223A35C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223A324;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr. r26,r3
	r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// blt 0x8223a34c
	if (ctx.cr0.lt) goto loc_8223A34C;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(r29.u32, r27.u32, ctx.xer);
	// blt cr6,0x8223a300
	if (ctx.cr6.lt) goto loc_8223A300;
	// b 0x8223a35c
	goto loc_8223A35C;
loc_8223A34C:
	// addi r11,r29,9
	ctx.r11.s64 = r29.s64 + 9;
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r11,r28
	REX_STORE_U32(ctx.r11.u32 + r28.u32, ctx.r10.u32);
loc_8223A35C:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_8223C698) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// addi r3,r11,-23772
	ctx.r3.s64 = ctx.r11.s64 + -23772;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8223C6B8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_8223C948) {
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
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCVRegister v127{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e60
	ctx.lr = 0x8223C950;
	// addi r12,r1,-120
	ctx.r12.s64 = ctx.r1.s64 + -120;
	// bl 0x822d4f34
	ctx.lr = 0x8223C958;
	// li r12,-176
	ctx.r12.s64 = -176;
	// stvx128 v127,r1,r12
	ea = (ctx.r1.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r22,0
	r22.s64 = 0;
	// addi r10,r10,-17312
	ctx.r10.s64 = ctx.r10.s64 + -17312;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// lwz r9,1220(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 1220);
	// mr r20,r7
	r20.u64 = ctx.r7.u64;
	// li r19,1
	r19.s64 = 1;
	// lvx128 v127,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r21,r22
	r21.u64 = r22.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8223c9a8
	if (ctx.cr6.eq) goto loc_8223C9A8;
	// lwz r10,1216(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 1216);
	// mr r24,r19
	r24.u64 = r19.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8223c9ac
	if (!ctx.cr6.eq) goto loc_8223C9AC;
loc_8223C9A8:
	// mr r24,r22
	r24.u64 = r22.u64;
loc_8223C9AC:
	// lwz r10,72(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mr r18,r22
	r18.u64 = r22.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8223cf84
	if (ctx.cr6.eq) goto loc_8223CF84;
	// stw r19,76(r11)
	REX_STORE_U32(ctx.r11.u32 + 76, r19.u32);
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8223cea4
	if (!ctx.cr6.eq) goto loc_8223CEA4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r26,0(r23)
	r26.u64 = REX_LOAD_U32(r23.u32 + 0);
	// mr r27,r22
	r27.u64 = r22.u64;
	// addi r31,r28,2100
	r31.s64 = r28.s64 + 2100;
	// addi r29,r28,40
	r29.s64 = r28.s64 + 40;
	// subfic r25,r28,-2016
	ctx.xer.ca = r28.u32 <= 4294965280;
	r25.u64 = static_cast<uint64_t>(-2016) - r28.u64;
	// lfs f31,-6484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -6484);
	f31.f64 = double(temp.f32);
loc_8223C9E8:
	// lwz r11,32(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 32);
	// add r10,r25,r31
	ctx.r10.u64 = r25.u64 + r31.u64;
	// lwzx r30,r10,r11
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8223cae0
	if (ctx.cr6.eq) goto loc_8223CAE0;
	// lwz r11,212(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 212);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8223cae0
	if (ctx.cr0.eq) goto loc_8223CAE0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82239978
	ctx.lr = 0x8223CA10;
	sub_82239978(ctx, base);
	// lis r11,28672
	ctx.r11.s64 = 1879048192;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8223cae0
	if (ctx.cr6.eq) goto loc_8223CAE0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lfs f0,196(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 196);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,8(r23)
	ctx.r9.u64 = REX_LOAD_U32(r23.u32 + 8);
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// mulli r11,r11,172
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(172));
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// ble cr6,0x8223ca98
	if (!ctx.cr6.gt) goto loc_8223CA98;
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
loc_8223CA48:
	// lfs f13,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * f31.f64));
	// fctiwz f13,f13
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r8,32767
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 32767, ctx.xer);
	// blt cr6,0x8223ca70
	if (ctx.cr6.lt) goto loc_8223CA70;
	// li r8,32767
	ctx.r8.s64 = 32767;
	// b 0x8223ca7c
	goto loc_8223CA7C;
loc_8223CA70:
	// cmpwi cr6,r8,-32768
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -32768, ctx.xer);
	// bgt cr6,0x8223ca7c
	if (ctx.cr6.gt) goto loc_8223CA7C;
	// li r8,-32738
	ctx.r8.s64 = -32738;
loc_8223CA7C:
	// sth r8,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// lwz r8,8(r23)
	ctx.r8.u64 = REX_LOAD_U32(r23.u32 + 8);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8223ca48
	if (ctx.cr6.lt) goto loc_8223CA48;
loc_8223CA98:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x8223cae4
	if (ctx.cr6.lt) goto loc_8223CAE4;
	// li r11,128
	ctx.r11.s64 = 128;
	// stw r22,0(r31)
	REX_STORE_U32(r31.u32 + 0, r22.u32);
	// addi r4,r29,-4
	ctx.r4.s64 = r29.s64 + -4;
	// addi r9,r29,-4
	ctx.r9.s64 = r29.s64 + -4;
	// addi r10,r29,-4
	ctx.r10.s64 = r29.s64 + -4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8223CAC4:
	// lhzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// sthu r11,2(r9)
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r11.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x8223cac4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8223CAC4;
	// li r5,258
	ctx.r5.s64 = 258;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82239dd8
	ctx.lr = 0x8223CADC;
	sub_82239DD8(ctx, base);
	// b 0x8223cae4
	goto loc_8223CAE4;
loc_8223CAE0:
	// stw r22,0(r31)
	REX_STORE_U32(r31.u32 + 0, r22.u32);
loc_8223CAE4:
	// addi r27,r27,3
	r27.s64 = r27.s64 + 3;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// addi r29,r29,516
	r29.s64 = r29.s64 + 516;
	// cmplwi cr6,r27,12
	ctx.cr6.compare<uint32_t>(r27.u32, 12, ctx.xer);
	// blt cr6,0x8223c9e8
	if (ctx.cr6.lt) goto loc_8223C9E8;
	// li r11,4
	ctx.r11.s64 = 4;
	// lwz r9,32(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 32);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// subfic r8,r8,84
	ctx.xer.ca = ctx.r8.u32 <= 84;
	ctx.r8.u64 = static_cast<uint64_t>(84) - ctx.r8.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stvx128 v127,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f27,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f27.f64 = double(temp.f32);
loc_8223CB24:
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223cb48
	if (ctx.cr6.eq) goto loc_8223CB48;
	// lfs f0,208(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 208);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f27
	ctx.cr6.compare(ctx.f0.f64, f27.f64);
	// ble cr6,0x8223cb44
	if (!ctx.cr6.gt) goto loc_8223CB44;
	// mr r18,r19
	r18.u64 = r19.u64;
loc_8223CB44:
	// stfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
loc_8223CB48:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8223cb24
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8223CB24;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// li r9,1376
	ctx.r9.s64 = 1376;
	// beq cr6,0x8223ce54
	if (ctx.cr6.eq) goto loc_8223CE54;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// vor128 v13,v127,v127
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)v127.u8));
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// stvx128 v13,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// dcbt r9,r11
	// lwz r10,8(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 8);
	// mr r9,r22
	ctx.r9.u64 = r22.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8223cba0
	if (ctx.cr6.eq) goto loc_8223CBA0;
loc_8223CB80:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v13,v0,v0,v13
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8223cb80
	if (ctx.cr6.lt) goto loc_8223CB80;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stvx128 v13,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_8223CBA0:
	// clrldi r11,r10,32
	ctx.r11.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// lfs f29,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	f29.f64 = double(temp.f32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// fdivs f0,f29,f0
	ctx.f0.f64 = double(float(f29.f64 / ctx.f0.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v63,v13,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v63.f32)));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x824d499c
	ctx.lr = 0x8223CBE8;
	__imp__XAudioGetDuckerThreshold(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// lfs f28,-6456(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -6456);
	f28.f64 = double(temp.f32);
	// bge cr6,0x8223cc2c
	if (!ctx.cr6.lt) goto loc_8223CC2C;
	// bl 0x824d499c
	ctx.lr = 0x8223CC00;
	__imp__XAudioGetDuckerThreshold(ctx, base);
	// lfs f0,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bge cr6,0x8223cc2c
	if (!ctx.cr6.lt) goto loc_8223CC2C;
	// bl 0x824d499c
	ctx.lr = 0x8223CC10;
	__imp__XAudioGetDuckerThreshold(ctx, base);
	// lfs f0,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bge cr6,0x8223cc2c
	if (!ctx.cr6.lt) goto loc_8223CC2C;
	// bl 0x824d499c
	ctx.lr = 0x8223CC20;
	__imp__XAudioGetDuckerThreshold(ctx, base);
	// lfs f0,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// blt cr6,0x8223cc5c
	if (ctx.cr6.lt) goto loc_8223CC5C;
loc_8223CC2C:
	// bl 0x824d498c
	ctx.lr = 0x8223CC30;
	__imp__XAudioGetDuckerHoldTime(ctx, base);
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 8);
	// fmuls f0,f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * f28.f64));
	// li r10,2120
	ctx.r10.s64 = 2120;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,r28,r10
	REX_STORE_U32(r28.u32 + ctx.r10.u32, ctx.f0.u32);
	// b 0x8223cc70
	goto loc_8223CC70;
loc_8223CC5C:
	// lwz r11,2120(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 2120);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8223cc74
	if (!ctx.cr6.gt) goto loc_8223CC74;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,2120(r28)
	REX_STORE_U32(r28.u32 + 2120, ctx.r11.u32);
loc_8223CC70:
	// mr r21,r19
	r21.u64 = r19.u64;
loc_8223CC74:
	// lwz r11,2128(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 2128);
	// cmpw cr6,r21,r11
	ctx.cr6.compare<int32_t>(r21.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8223ccc0
	if (ctx.cr6.eq) goto loc_8223CCC0;
	// lwz r11,2124(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 2124);
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// stw r21,2128(r28)
	REX_STORE_U32(r28.u32 + 2128, r21.u32);
	// beq cr6,0x8223cca8
	if (ctx.cr6.eq) goto loc_8223CCA8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8223cca0
	if (ctx.cr6.eq) goto loc_8223CCA0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8223ccc0
	if (!ctx.cr6.eq) goto loc_8223CCC0;
loc_8223CCA0:
	// stw r19,2124(r28)
	REX_STORE_U32(r28.u32 + 2124, r19.u32);
	// b 0x8223ccc0
	goto loc_8223CCC0;
loc_8223CCA8:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8223ccb8
	if (ctx.cr6.eq) goto loc_8223CCB8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8223ccc0
	if (!ctx.cr6.eq) goto loc_8223CCC0;
loc_8223CCB8:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,2124(r28)
	REX_STORE_U32(r28.u32 + 2124, ctx.r11.u32);
loc_8223CCC0:
	// lwz r11,2124(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 2124);
	// fmr f31,f29
	ctx.fpscr.disableFlushMode();
	f31.f64 = f29.f64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8223ccd8
	if (!ctx.cr6.eq) goto loc_8223CCD8;
	// fmr f30,f29
	f30.f64 = f29.f64;
	// b 0x8223cd0c
	goto loc_8223CD0C;
loc_8223CCD8:
	// bl 0x824d494c
	ctx.lr = 0x8223CCDC;
	__imp__XAudioGetDuckerLevel(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,-6460(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -6460);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x8223ccf8
	if (!ctx.cr6.lt) goto loc_8223CCF8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f31,-6464(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -6464);
	f31.f64 = double(temp.f32);
	// b 0x8223ccfc
	goto loc_8223CCFC;
loc_8223CCF8:
	// fdivs f31,f29,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(f29.f64 / ctx.f1.f64));
loc_8223CCFC:
	// lwz r11,2124(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 2124);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8223cd18
	if (!ctx.cr6.eq) goto loc_8223CD18;
	// fmr f30,f31
	ctx.fpscr.disableFlushMode();
	f30.f64 = f31.f64;
loc_8223CD0C:
	// mr r31,r22
	r31.u64 = r22.u64;
	// fmr f0,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = f27.f64;
	// b 0x8223cd44
	goto loc_8223CD44;
loc_8223CD18:
	// lfs f30,2116(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 2116);
	f30.f64 = double(temp.f32);
	// mr r31,r19
	r31.u64 = r19.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8223cd34
	if (!ctx.cr6.eq) goto loc_8223CD34;
	// bl 0x824d497c
	ctx.lr = 0x8223CD2C;
	__imp__XAudioGetDuckerAttackTime(ctx, base);
	// fsubs f13,f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(f31.f64 - f29.f64));
	// b 0x8223cd3c
	goto loc_8223CD3C;
loc_8223CD34:
	// bl 0x824d496c
	ctx.lr = 0x8223CD38;
	__imp__XAudioGetDuckerReleaseTime(ctx, base);
	// fsubs f13,f29,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(f29.f64 - f31.f64));
loc_8223CD3C:
	// fmuls f0,f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * f28.f64));
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
loc_8223CD44:
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// stfs f30,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stfs f30,84(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f30,88(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// stfs f30,92(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r10,0(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 0);
	// lwz r11,0(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 0);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lvx128 v62,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r9,1376
	ctx.r9.s64 = 1376;
	// lvx128 v63,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v63,v63,v62
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v62.f32)));
	// stfs f0,116(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stvx128 v63,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// dcbt r9,r10
	// dcbt r9,r11
	// mr r9,r22
	ctx.r9.u64 = r22.u64;
	// lwz r8,8(r23)
	ctx.r8.u64 = REX_LOAD_U32(r23.u32 + 8);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// ble cr6,0x8223ce48
	if (!ctx.cr6.gt) goto loc_8223CE48;
	// subf r8,r11,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r11.u64;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r10,r10,-6480
	ctx.r10.s64 = ctx.r10.s64 + -6480;
loc_8223CDB0:
	// lvx128 v61,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// clrlwi. r7,r31,24
	ctx.r7.u64 = r31.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// vmulfp128 v61,v61,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v61.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v63.f32)));
	// stvx128 v61,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// beq 0x8223ce34
	if (ctx.cr0.eq) goto loc_8223CE34;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lvx128 v61,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp128 v63,v63,v61
	simde_mm_store_ps(ctx.v63.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v61.f32)));
	// stvx128 v63,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// ble cr6,0x8223ce00
	if (!ctx.cr6.gt) goto loc_8223CE00;
	// li r7,2
	ctx.r7.s64 = 2;
	// stfs f31,80(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f31,88(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stw r7,2124(r28)
	REX_STORE_U32(r28.u32 + 2124, ctx.r7.u32);
	// stfs f31,92(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// b 0x8223ce1c
	goto loc_8223CE1C;
loc_8223CE00:
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, f29.f64);
	// bge cr6,0x8223ce20
	if (!ctx.cr6.lt) goto loc_8223CE20;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r22,2124(r28)
	REX_STORE_U32(r28.u32 + 2124, r22.u32);
	// stvx128 v63,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_8223CE1C:
	// mr r31,r22
	r31.u64 = r22.u64;
loc_8223CE20:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lvx128 v63,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v63,v63,v62
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v62.f32)));
	// stvx128 v63,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_8223CE34:
	// lwz r7,8(r23)
	ctx.r7.u64 = REX_LOAD_U32(r23.u32 + 8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x8223cdb0
	if (ctx.cr6.lt) goto loc_8223CDB0;
loc_8223CE48:
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2116(r28)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r28.u32 + 2116, temp.u32);
	// b 0x8223cf7c
	goto loc_8223CF7C;
loc_8223CE54:
	// lwz r10,0(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 0);
	// lwz r11,0(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 0);
	// dcbt r9,r10
	// li r9,1376
	ctx.r9.s64 = 1376;
	// dcbt r9,r11
	// mr r9,r22
	ctx.r9.u64 = r22.u64;
	// lwz r8,8(r23)
	ctx.r8.u64 = REX_LOAD_U32(r23.u32 + 8);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8223cf7c
	if (ctx.cr6.eq) goto loc_8223CF7C;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
loc_8223CE7C:
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// lvx128 v63,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// lvx128 v62,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v63,v63,v62
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v62.f32)));
	// stvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// blt cr6,0x8223ce7c
	if (ctx.cr6.lt) goto loc_8223CE7C;
	// b 0x8223cf7c
	goto loc_8223CF7C;
loc_8223CEA4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8223cf7c
	if (!ctx.cr6.eq) goto loc_8223CF7C;
	// mr r30,r22
	r30.u64 = r22.u64;
	// addi r31,r28,2100
	r31.s64 = r28.s64 + 2100;
	// addi r27,r28,36
	r27.s64 = r28.s64 + 36;
	// subfic r26,r28,-2016
	ctx.xer.ca = r28.u32 <= 4294965280;
	r26.u64 = static_cast<uint64_t>(-2016) - r28.u64;
loc_8223CEBC:
	// lwz r11,32(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 32);
	// add r10,r31,r26
	ctx.r10.u64 = r31.u64 + r26.u64;
	// lwzx r29,r10,r11
	r29.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8223cf4c
	if (ctx.cr6.eq) goto loc_8223CF4C;
	// lwz r11,212(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 212);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8223cf4c
	if (ctx.cr0.eq) goto loc_8223CF4C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82239978
	ctx.lr = 0x8223CEE4;
	sub_82239978(ctx, base);
	// lis r11,28672
	ctx.r11.s64 = 1879048192;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8223cf4c
	if (ctx.cr6.eq) goto loc_8223CF4C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r5,172
	ctx.r5.s64 = 172;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// mulli r11,r11,172
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(172));
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// addi r3,r11,36
	ctx.r3.s64 = ctx.r11.s64 + 36;
	// bl 0x823cd980
	ctx.lr = 0x8223CF10;
	sub_823CD980(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x8223cf50
	if (ctx.cr6.lt) goto loc_8223CF50;
	// stw r22,0(r31)
	REX_STORE_U32(r31.u32 + 0, r22.u32);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r27,2
	ctx.r3.s64 = r27.s64 + 2;
	// bl 0x823cd980
	ctx.lr = 0x8223CF38;
	sub_823CD980(ctx, base);
	// li r5,258
	ctx.r5.s64 = 258;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82239dd8
	ctx.lr = 0x8223CF48;
	sub_82239DD8(ctx, base);
	// b 0x8223cf50
	goto loc_8223CF50;
loc_8223CF4C:
	// stw r22,0(r31)
	REX_STORE_U32(r31.u32 + 0, r22.u32);
loc_8223CF50:
	// addi r30,r30,3
	r30.s64 = r30.s64 + 3;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// addi r27,r27,516
	r27.s64 = r27.s64 + 516;
	// cmplwi cr6,r30,12
	ctx.cr6.compare<uint32_t>(r30.u32, 12, ctx.xer);
	// blt cr6,0x8223cebc
	if (ctx.cr6.lt) goto loc_8223CEBC;
	// lwz r11,2120(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 2120);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8223cf7c
	if (!ctx.cr6.gt) goto loc_8223CF7C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r21,r19
	r21.u64 = r19.u64;
	// stw r11,2120(r28)
	REX_STORE_U32(r28.u32 + 2120, ctx.r11.u32);
loc_8223CF7C:
	// lwz r11,32(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 32);
	// stw r22,76(r11)
	REX_STORE_U32(ctx.r11.u32 + 76, r22.u32);
loc_8223CF84:
	// lwz r11,32(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 32);
	// lwz r11,1220(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1220);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8223cfb0
	if (ctx.cr6.eq) goto loc_8223CFB0;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// beq cr6,0x8223cfa8
	if (ctx.cr6.eq) goto loc_8223CFA8;
	// clrlwi. r11,r18,24
	ctx.r11.u64 = r18.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bne 0x8223cfac
	if (!ctx.cr0.eq) goto loc_8223CFAC;
loc_8223CFA8:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
loc_8223CFAC:
	// bl 0x824d495c
	ctx.lr = 0x8223CFB0;
	__imp__XAudioEnableDucker(ctx, base);
loc_8223CFB0:
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 8);
	// stw r11,8(r20)
	REX_STORE_U32(r20.u32 + 8, ctx.r11.u32);
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 4);
	// stw r11,4(r20)
	REX_STORE_U32(r20.u32 + 4, ctx.r11.u32);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// li r0,-176
	ctx.r0.s64 = -176;
	// lvx128 v127,r1,r0
	ea = (ctx.r1.u32 + ctx.r0.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r12,r1,-120
	ctx.r12.s64 = ctx.r1.s64 + -120;
	// bl 0x822d4f80
	ctx.lr = 0x8223CFD4;
	// b 0x822d4eb0
	return;
}

DEFINE_REX_FUNC(sub_8225DEC0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8225DEC8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// bl 0x8225ddf0
	ctx.lr = 0x8225DEE0;
	sub_8225DDF0(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8225de30
	ctx.lr = 0x8225DEF0;
	sub_8225DE30(ctx, base);
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8225E4F8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x8225E500;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r4,2017
	ctx.r4.s64 = 2017;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// bl 0x8225da70
	ctx.lr = 0x8225E520;
	sub_8225DA70(ctx, base);
	// li r5,28
	ctx.r5.s64 = 28;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8227c2b8
	ctx.lr = 0x8225E52C;
	sub_8227C2B8(ctx, base);
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
	// stw r28,8(r31)
	REX_STORE_U32(r31.u32 + 8, r28.u32);
	// stw r29,4(r31)
	REX_STORE_U32(r31.u32 + 4, r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8225F218) {
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
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8225e540
	ctx.lr = 0x8225F248;
	sub_8225E540(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822469c0
	ctx.lr = 0x8225F250;
	sub_822469C0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8224da00
	ctx.lr = 0x8225F258;
	sub_8224DA00(ctx, base);
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

DEFINE_REX_FUNC(sub_82261E18) {
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
	ctx.lr = 0x82261E20;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// lwz r30,16(r4)
	r30.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r5,22592
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 22592, ctx.xer);
	// lwz r11,-2144(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -2144);
	// li r28,1
	r28.s64 = 1;
	// stw r11,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// beq cr6,0x82261e7c
	if (ctx.cr6.eq) goto loc_82261E7C;
	// cmplwi cr6,r5,22593
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 22593, ctx.xer);
	// beq cr6,0x82261e64
	if (ctx.cr6.eq) goto loc_82261E64;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x82261eb0
	if (!ctx.cr6.eq) goto loc_82261EB0;
	// b 0x82261eac
	goto loc_82261EAC;
loc_82261E64:
	// cmplwi cr6,r11,22529
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 22529, ctx.xer);
	// beq cr6,0x82261eac
	if (ctx.cr6.eq) goto loc_82261EAC;
	// cmplwi cr6,r11,22549
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 22549, ctx.xer);
	// beq cr6,0x82261eac
	if (ctx.cr6.eq) goto loc_82261EAC;
	// cmplwi cr6,r11,27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 27, ctx.xer);
	// b 0x82261e98
	goto loc_82261E98;
loc_82261E7C:
	// cmplwi cr6,r11,22528
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 22528, ctx.xer);
	// beq cr6,0x82261eac
	if (ctx.cr6.eq) goto loc_82261EAC;
	// cmplwi cr6,r11,22548
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 22548, ctx.xer);
	// beq cr6,0x82261eac
	if (ctx.cr6.eq) goto loc_82261EAC;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// beq cr6,0x82261e9c
	if (ctx.cr6.eq) goto loc_82261E9C;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
loc_82261E98:
	// bne cr6,0x82261eb0
	if (!ctx.cr6.eq) goto loc_82261EB0;
loc_82261E9C:
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lwz r11,23824(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 23824);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82261eb0
	if (!ctx.cr0.eq) goto loc_82261EB0;
loc_82261EAC:
	// mr r31,r28
	r31.u64 = r28.u64;
loc_82261EB0:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8225ef18
	ctx.lr = 0x82261EB8;
	sub_8225EF18(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x82261ee0
	if (ctx.cr0.eq) goto loc_82261EE0;
	// stw r28,8(r29)
	REX_STORE_U32(r29.u32 + 8, r28.u32);
	// beq cr6,0x82261f18
	if (ctx.cr6.eq) goto loc_82261F18;
	// li r5,1
	ctx.r5.s64 = 1;
	// lbz r4,12(r30)
	ctx.r4.u64 = REX_LOAD_U8(r30.u32 + 12);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82260d70
	ctx.lr = 0x82261EDC;
	sub_82260D70(ctx, base);
	// b 0x82261f18
	goto loc_82261F18;
loc_82261EE0:
	// beq cr6,0x82261f18
	if (ctx.cr6.eq) goto loc_82261F18;
	// stw r28,8(r29)
	REX_STORE_U32(r29.u32 + 8, r28.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82261f18
	if (ctx.cr6.eq) goto loc_82261F18;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// lbz r5,12(r30)
	ctx.r5.u64 = REX_LOAD_U8(r30.u32 + 12);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8225e730
	ctx.lr = 0x82261F08;
	sub_8225E730(ctx, base);
	// stw r28,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8224da00
	ctx.lr = 0x82261F18;
	sub_8224DA00(ctx, base);
loc_82261F18:
	// lwz r3,116(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x822d7b58
	ctx.lr = 0x82261F20;
	sub_822D7B58(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82267DA0) {
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
	// addi r31,r11,29876
	r31.s64 = ctx.r11.s64 + 29876;
	// lwz r11,29896(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 29896);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82267dec
	if (!ctx.cr0.eq) goto loc_82267DEC;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r11,29896(r10)
	REX_STORE_U32(ctx.r10.u32 + 29896, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,16788(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16788);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8227ad28
	ctx.lr = 0x82267DE0;
	sub_8227AD28(ctx, base);
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r3,r11,15840
	ctx.r3.s64 = ctx.r11.s64 + 15840;
	// bl 0x822d5848
	ctx.lr = 0x82267DEC;
	sub_822D5848(ctx, base);
loc_82267DEC:
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

DEFINE_REX_FUNC(sub_82269A18) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x822d4e7c
	ctx.lr = 0x82269A20;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x822d4f30
	ctx.lr = 0x82269A28;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// lwz r10,160(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 160);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lwz r11,-2144(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -2144);
	// rlwinm r25,r10,27,31,31
	r25.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// beq cr6,0x82269a70
	if (ctx.cr6.eq) goto loc_82269A70;
	// lwz r11,236(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 236);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82269a70
	if (ctx.cr6.lt) goto loc_82269A70;
	// lwz r10,232(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 232);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82269a70
	if (!ctx.cr6.lt) goto loc_82269A70;
	// stw r11,232(r3)
	REX_STORE_U32(ctx.r3.u32 + 232, ctx.r11.u32);
loc_82269A70:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,236(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 236);
	// lwz r4,232(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 232);
	// bl 0x82269158
	ctx.lr = 0x82269A80;
	sub_82269158(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82269ee4
	if (ctx.cr0.lt) goto loc_82269EE4;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82264958
	ctx.lr = 0x82269A98;
	sub_82264958(ctx, base);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// beq cr6,0x82269ab4
	if (ctx.cr6.eq) goto loc_82269AB4;
	// lfs f13,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,148(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f13,140(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 140);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82269ac4
	goto loc_82269AC4;
loc_82269AB4:
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,144(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f13,136(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 136);
	ctx.f13.f64 = double(temp.f32);
loc_82269AC4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r29,232(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 232);
	// lwz r10,240(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 240);
	// fsubs f28,f0,f13
	ctx.fpscr.disableFlushMode();
	f28.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// li r28,0
	r28.s64 = 0;
	// li r27,0
	r27.s64 = 0;
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r10.s32, ctx.xer);
	// lfs f29,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f29.f64 = double(temp.f32);
	// fmr f31,f29
	f31.f64 = f29.f64;
	// bge cr6,0x82269d74
	if (!ctx.cr6.lt) goto loc_82269D74;
	// addi r30,r31,188
	r30.s64 = r31.s64 + 188;
loc_82269AF0:
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 12);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// lwz r7,232(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 232);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// subf r8,r7,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r7.u64;
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// add r6,r8,r29
	ctx.r6.u64 = ctx.r8.u64 + r29.u64;
	// divw r5,r6,r11
	ctx.r5.u64 = uint32_t((ctx.r11.s32 && !(ctx.r6.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r6.s32 / ctx.r11.s32 : 0);
	// rotlwi r8,r6,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// mullw r5,r5,r11
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r11.s32);
	// subf r6,r5,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r5.u64;
	// addi r5,r8,-1
	ctx.r5.s64 = ctx.r8.s64 + -1;
	// mulli r8,r6,20
	ctx.r8.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(20));
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// andc r6,r11,r5
	ctx.r6.u64 = ctx.r11.u64 & ~ctx.r5.u64;
	// twlgei r6,-1
	if (ctx.r6.s32 == -1 || ctx.r6.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// ld r8,4(r8)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r8.u32 + 4);
	// std r8,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfs f27,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	f27.f64 = double(temp.f32);
	// lfs f26,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	f26.f64 = double(temp.f32);
	// beq cr6,0x82269b50
	if (ctx.cr6.eq) goto loc_82269B50;
	// fmr f30,f26
	f30.f64 = f26.f64;
	// b 0x82269b54
	goto loc_82269B54;
loc_82269B50:
	// fmr f30,f27
	ctx.fpscr.disableFlushMode();
	f30.f64 = f27.f64;
loc_82269B54:
	// fadds f0,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f30.f64 + f31.f64));
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, f28.f64);
	// ble cr6,0x82269c28
	if (!ctx.cr6.gt) goto loc_82269C28;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne cr6,0x82269d6c
	if (!ctx.cr6.eq) goto loc_82269D6C;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// beq cr6,0x82269d6c
	if (ctx.cr6.eq) goto loc_82269D6C;
	// fcmpu cr6,f30,f28
	ctx.cr6.compare(f30.f64, f28.f64);
	// ble cr6,0x82269b88
	if (!ctx.cr6.gt) goto loc_82269B88;
	// stw r29,232(r31)
	REX_STORE_U32(r31.u32 + 232, r29.u32);
	// li r27,0
	r27.s64 = 0;
	// fmr f31,f29
	f31.f64 = f29.f64;
	// b 0x82269cc4
	goto loc_82269CC4;
loc_82269B88:
	// lwz r8,4(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// lwz r9,12(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 12);
	// twllei r8,0
	if (ctx.r8.s32 == 0 || ctx.r8.u32 < 0u) ppc_trap(ctx, base, 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// divw r7,r9,r8
	ctx.r7.u64 = uint32_t((ctx.r8.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r8.s32 == -1)) ? ctx.r9.s32 / ctx.r8.s32 : 0);
	// rotlwi r11,r9,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// mullw r7,r7,r8
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subf r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	// andc r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 & ~ctx.r11.u64;
	// mulli r11,r9,20
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(20));
	// twlgei r8,-1
	if (ctx.r8.s32 == -1 || ctx.r8.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// beq cr6,0x82269bcc
	if (ctx.cr6.eq) goto loc_82269BCC;
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82269bd0
	goto loc_82269BD0;
loc_82269BCC:
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
loc_82269BD0:
	// fsubs f31,f31,f0
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(f31.f64 - ctx.f0.f64));
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// ble cr6,0x82269c00
	if (!ctx.cr6.gt) goto loc_82269C00;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// beq cr6,0x82269bec
	if (ctx.cr6.eq) goto loc_82269BEC;
	// lfs f0,84(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82269bf0
	goto loc_82269BF0;
loc_82269BEC:
	// lfs f0,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
loc_82269BF0:
	// fsubs f31,f31,f0
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(f31.f64 - ctx.f0.f64));
	// fcmpu cr6,f31,f29
	ctx.cr6.compare(f31.f64, f29.f64);
	// bge cr6,0x82269c00
	if (!ctx.cr6.lt) goto loc_82269C00;
	// fmr f31,f29
	f31.f64 = f29.f64;
loc_82269C00:
	// lwz r11,232(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 232);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r27,r27,-1
	r27.s64 = r27.s64 + -1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,232(r31)
	REX_STORE_U32(r31.u32 + 232, ctx.r11.u32);
	// bl 0x8225d788
	ctx.lr = 0x82269C18;
	sub_8225D788(ctx, base);
	// fadds f0,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f30.f64 + f31.f64));
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, f28.f64);
	// bgt cr6,0x82269b88
	if (ctx.cr6.gt) goto loc_82269B88;
	// b 0x82269cc4
	goto loc_82269CC4;
loc_82269C28:
	// lwz r8,172(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 172);
	// cmpw cr6,r27,r8
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82269cc4
	if (!ctx.cr6.eq) goto loc_82269CC4;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne cr6,0x82269d6c
	if (!ctx.cr6.eq) goto loc_82269D6C;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// beq cr6,0x82269d6c
	if (ctx.cr6.eq) goto loc_82269D6C;
	// divw r6,r10,r11
	ctx.r6.u64 = uint32_t((ctx.r11.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r10.s32 / ctx.r11.s32 : 0);
	// rotlwi r8,r10,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// mullw r6,r6,r11
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r11.s32);
	// subf r10,r6,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r6.u64;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// andc r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r8.u64;
	// mulli r10,r10,20
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(20));
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// twlgei r11,-1
	if (ctx.r11.s32 == -1 || ctx.r11.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// beq cr6,0x82269c7c
	if (ctx.cr6.eq) goto loc_82269C7C;
	// lfs f0,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82269c80
	goto loc_82269C80;
loc_82269C7C:
	// lfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
loc_82269C80:
	// fsubs f31,f31,f0
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(f31.f64 - ctx.f0.f64));
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// ble cr6,0x82269cb0
	if (!ctx.cr6.gt) goto loc_82269CB0;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// beq cr6,0x82269c9c
	if (ctx.cr6.eq) goto loc_82269C9C;
	// lfs f0,84(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82269ca0
	goto loc_82269CA0;
loc_82269C9C:
	// lfs f0,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
loc_82269CA0:
	// fsubs f31,f31,f0
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(f31.f64 - ctx.f0.f64));
	// fcmpu cr6,f31,f29
	ctx.cr6.compare(f31.f64, f29.f64);
	// bge cr6,0x82269cb0
	if (!ctx.cr6.lt) goto loc_82269CB0;
	// fmr f31,f29
	f31.f64 = f29.f64;
loc_82269CB0:
	// addi r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,232(r31)
	REX_STORE_U32(r31.u32 + 232, ctx.r11.u32);
	// addi r27,r27,-1
	r27.s64 = r27.s64 + -1;
	// bl 0x8225d788
	ctx.lr = 0x82269CC4;
	sub_8225D788(ctx, base);
loc_82269CC4:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// beq cr6,0x82269cdc
	if (ctx.cr6.eq) goto loc_82269CDC;
	// lfs f0,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f26
	ctx.f0.f64 = double(float(ctx.f0.f64 + f26.f64));
	// b 0x82269ce4
	goto loc_82269CE4;
loc_82269CDC:
	// lfs f0,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 + f27.f64));
loc_82269CE4:
	// lwz r11,196(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 196);
	// fadds f31,f0,f31
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(ctx.f0.f64 + f31.f64));
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82269d34
	if (ctx.cr6.eq) goto loc_82269D34;
	// lwz r9,4(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r8,0(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 0);
	// twllei r9,0
	if (ctx.r9.s32 == 0 || ctx.r9.u32 < 0u) ppc_trap(ctx, base, 0);
	// divw r7,r10,r9
	ctx.r7.u64 = uint32_t((ctx.r9.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r10.s32 / ctx.r9.s32 : 0);
	// lwz r6,232(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 232);
	// rotlwi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// mullw r7,r7,r9
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// subf r10,r7,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r7.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mulli r10,r10,20
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(20));
	// lwzx r10,r10,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// andc r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ~ctx.r11.u64;
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// twlgei r11,-1
	if (ctx.r11.s32 == -1 || ctx.r11.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// beq cr6,0x82269d4c
	if (ctx.cr6.eq) goto loc_82269D4C;
loc_82269D34:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,236(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 236);
	// lwz r4,232(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 232);
	// bl 0x82269158
	ctx.lr = 0x82269D44;
	sub_82269158(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82269ee4
	if (ctx.cr0.lt) goto loc_82269EE4;
loc_82269D4C:
	// lwz r11,236(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 236);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82269d5c
	if (!ctx.cr6.eq) goto loc_82269D5C;
	// li r28,1
	r28.s64 = 1;
loc_82269D5C:
	// lwz r11,240(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 240);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82269af0
	if (ctx.cr6.lt) goto loc_82269AF0;
loc_82269D6C:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// bne cr6,0x82269d84
	if (!ctx.cr6.eq) goto loc_82269D84;
loc_82269D74:
	// lwz r11,240(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 240);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82269d84
	if (!ctx.cr6.gt) goto loc_82269D84;
	// li r27,1
	r27.s64 = 1;
loc_82269D84:
	// lwz r11,144(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 144);
	// li r30,0
	r30.s64 = 0;
	// lwz r10,148(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 148);
	// lwz r9,152(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 152);
	// lwz r8,172(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 172);
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r9,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// ble cr6,0x82269ebc
	if (!ctx.cr6.gt) goto loc_82269EBC;
	// li r29,0
	r29.s64 = 0;
loc_82269DB0:
	// lwz r11,176(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 176);
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(r30.s32, r27.s32, ctx.xer);
	// lwzx r3,r29,r11
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// bge cr6,0x82269ea0
	if (!ctx.cr6.lt) goto loc_82269EA0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82256c60
	ctx.lr = 0x82269DC8;
	sub_82256C60(ctx, base);
	// addi r9,r31,188
	ctx.r9.s64 = r31.s64 + 188;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// addi r11,r9,12
	ctx.r11.s64 = ctx.r9.s64 + 12;
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// add r6,r30,r8
	ctx.r6.u64 = r30.u64 + ctx.r8.u64;
	// twllei r7,0
	if (ctx.r7.s32 == 0 || ctx.r7.u32 < 0u) ppc_trap(ctx, base, 0);
	// divw r5,r6,r7
	ctx.r5.u64 = uint32_t((ctx.r7.s32 && !(ctx.r6.s32 == INT32_MIN && ctx.r7.s32 == -1)) ? ctx.r6.s32 / ctx.r7.s32 : 0);
	// rotlwi r8,r6,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// mullw r5,r5,r7
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r7.s32);
	// lwz r9,188(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 188);
	// subf r6,r5,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r5.u64;
	// addi r5,r8,-1
	ctx.r5.s64 = ctx.r8.s64 + -1;
	// mulli r8,r6,20
	ctx.r8.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(20));
	// andc r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 & ~ctx.r5.u64;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// twlgei r7,-1
	if (ctx.r7.s32 == -1 || ctx.r7.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// beq cr6,0x82269e30
	if (ctx.cr6.eq) goto loc_82269E30;
	// lfs f12,8(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,84(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// lfs f13,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// b 0x82269e48
	goto loc_82269E48;
loc_82269E30:
	// lfs f12,4(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,88(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// lfs f13,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
loc_82269E48:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f1,4(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// add r8,r30,r11
	ctx.r8.u64 = r30.u64 + ctx.r11.u64;
	// lwz r7,176(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 176);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// divw r6,r8,r10
	ctx.r6.u64 = uint32_t((ctx.r10.s32 && !(ctx.r8.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r8.s32 / ctx.r10.s32 : 0);
	// rotlwi r11,r8,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// mullw r6,r6,r10
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// lwzx r3,r29,r7
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + ctx.r7.u32);
	// subf r8,r6,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r6.u64;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// mulli r11,r8,20
	ctx.r11.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(20));
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// andc r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 & ~ctx.r7.u64;
	// twlgei r10,-1
	if (ctx.r10.s32 == -1 || ctx.r10.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// lfs f2,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x82258b88
	ctx.lr = 0x82269E90;
	sub_82258B88(ctx, base);
	// lwz r11,176(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 176);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwzx r3,r29,r11
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// b 0x82269ea4
	goto loc_82269EA4;
loc_82269EA0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82269EA4:
	// bl 0x8225e9f8
	ctx.lr = 0x82269EA8;
	sub_8225E9F8(ctx, base);
	// lwz r11,172(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 172);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82269db0
	if (ctx.cr6.lt) goto loc_82269DB0;
loc_82269EBC:
	// lwz r11,236(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 236);
	// lwz r10,232(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 232);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82269edc
	if (ctx.cr6.lt) goto loc_82269EDC;
	// add r9,r10,r27
	ctx.r9.u64 = ctx.r10.u64 + r27.u64;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// blt cr6,0x82269ee0
	if (ctx.cr6.lt) goto loc_82269EE0;
loc_82269EDC:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_82269EE0:
	// stw r11,220(r31)
	REX_STORE_U32(r31.u32 + 220, ctx.r11.u32);
loc_82269EE4:
	// lwz r3,108(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// bl 0x822d7b58
	ctx.lr = 0x82269EEC;
	sub_822D7B58(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x822d4f7c
	ctx.lr = 0x82269EF8;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_82280228) {
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
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f1
	ctx.f13.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// stfd f13,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8228028c
	if (!ctx.cr6.eq) goto loc_8228028C;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82255318
	ctx.lr = 0x82280274;
	sub_82255318(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8228028c
	if (!ctx.cr0.eq) goto loc_8228028C;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82280290
	if (ctx.cr6.eq) goto loc_82280290;
loc_8228028C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82280290:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
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

DEFINE_REX_FUNC(sub_82283AA0) {
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
	ctx.lr = 0x82283AA8;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x822d4f20
	ctx.lr = 0x82283AB0;
	// stwu r1,-624(r1)
	ea = -624 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 20);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r4,652(r1)
	REX_STORE_U32(ctx.r1.u32 + 652, ctx.r4.u32);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// stw r6,668(r1)
	REX_STORE_U32(ctx.r1.u32 + 668, ctx.r6.u32);
	// mr r14,r7
	r14.u64 = ctx.r7.u64;
	// fmr f25,f1
	ctx.fpscr.disableFlushMode();
	f25.f64 = ctx.f1.f64;
	// mr r31,r8
	r31.u64 = ctx.r8.u64;
	// mr r15,r9
	r15.u64 = ctx.r9.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82283af0
	if (!ctx.cr0.eq) goto loc_82283AF0;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// b 0x82284444
	goto loc_82284444;
loc_82283AF0:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// beq cr6,0x82284440
	if (ctx.cr6.eq) goto loc_82284440;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82284440
	if (ctx.cr6.eq) goto loc_82284440;
	// lhz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82284440
	if (ctx.cr0.eq) goto loc_82284440;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82280900
	ctx.lr = 0x82283B18;
	sub_82280900(ctx, base);
	// lwz r11,12(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 12);
	// lwz r10,4(r15)
	ctx.r10.u64 = REX_LOAD_U32(r15.u32 + 4);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// lwz r9,0(r15)
	ctx.r9.u64 = REX_LOAD_U32(r15.u32 + 0);
	// lwz r8,8(r15)
	ctx.r8.u64 = REX_LOAD_U32(r15.u32 + 8);
	// subf. r29,r10,r11
	r29.u64 = ctx.r11.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// stw r3,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// subf r16,r9,r8
	r16.u64 = ctx.r8.u64 - ctx.r9.u64;
	// ble 0x82284440
	if (!ctx.cr0.gt) goto loc_82284440;
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(r16.s32, 0, ctx.xer);
	// ble cr6,0x82284440
	if (!ctx.cr6.gt) goto loc_82284440;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// li r18,0
	r18.s64 = 0;
	// addi r24,r11,30492
	r24.s64 = ctx.r11.s64 + 30492;
	// mr r17,r18
	r17.u64 = r18.u64;
	// stw r18,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r18.u32);
	// stw r18,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r18.u32);
	// mr r28,r18
	r28.u64 = r18.u64;
	// stw r24,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r24.u32);
	// stw r18,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r18.u32);
	// lbz r11,4(r24)
	ctx.r11.u64 = REX_LOAD_U8(r24.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82283b80
	if (ctx.cr0.eq) goto loc_82283B80;
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// stw r11,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// b 0x82283bc0
	goto loc_82283BC0;
loc_82283B80:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// bge cr6,0x82283b98
	if (!ctx.cr6.lt) goto loc_82283B98;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822d6a10
	ctx.lr = 0x82283B90;
	sub_822D6A10(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// stw r3,668(r1)
	REX_STORE_U32(ctx.r1.u32 + 668, ctx.r3.u32);
loc_82283B98:
	// mulli r3,r26,20
	ctx.r3.s64 = static_cast<int64_t>(r26.u64 * static_cast<uint64_t>(20));
	// bl 0x82255b48
	ctx.lr = 0x82283BA0;
	sub_82255B48(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// stw r28,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r28.u32);
	// bne 0x82283bb8
	if (!ctx.cr0.eq) goto loc_82283BB8;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82284444
	goto loc_82284444;
loc_82283BB8:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82255b50
	ctx.lr = 0x82283BC0;
	sub_82255B50(ctx, base);
loc_82283BC0:
	// rlwinm. r11,r14,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(r14.u32 | (r14.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r18,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r18.u32);
	// mr r20,r18
	r20.u64 = r18.u64;
	// beq 0x82283c3c
	if (ctx.cr0.eq) goto loc_82283C3C;
	// addi r10,r1,136
	ctx.r10.s64 = ctx.r1.s64 + 136;
	// stw r18,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r18.u32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// stw r18,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, r18.u32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r7,-1
	ctx.r7.s64 = -1;
	// mr r6,r16
	ctx.r6.u64 = r16.u64;
	// mr r5,r14
	ctx.r5.u64 = r14.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82283938
	ctx.lr = 0x82283BFC;
	sub_82283938(ctx, base);
	// lfs f1,52(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822d60f0
	ctx.lr = 0x82283C04;
	sub_822D60F0(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,136(r1)
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.f0.u64);
	// lwz r11,140(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82283c24
	if (!ctx.cr6.gt) goto loc_82283C24;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
loc_82283C24:
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// mullw r10,r10,r25
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r25.s32);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addze r20,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	r20.s64 = temp.s64;
loc_82283C3C:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r18,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, r18.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r18,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r18.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r30,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stw r26,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, r26.u32);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// stw r18,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, r18.u32);
	// lfs f23,1992(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	f23.f64 = double(temp.f32);
	// mr r21,r18
	r21.u64 = r18.u64;
	// lfs f24,2000(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2000);
	f24.f64 = double(temp.f32);
	// mr r19,r18
	r19.u64 = r18.u64;
	// lfs f22,1996(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1996);
	f22.f64 = double(temp.f32);
loc_82283C78:
	// lhz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822843a4
	if (ctx.cr0.eq) goto loc_822843A4;
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// addi r10,r1,136
	ctx.r10.s64 = ctx.r1.s64 + 136;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r8,r1,120
	ctx.r8.s64 = ctx.r1.s64 + 120;
	// mr r7,r16
	ctx.r7.u64 = r16.u64;
	// mr r5,r14
	ctx.r5.u64 = r14.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82283208
	ctx.lr = 0x82283CAC;
	sub_82283208(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822843a4
	if (ctx.cr0.lt) goto loc_822843A4;
	// lwz r22,96(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x822843a4
	if (ctx.cr6.eq) goto loc_822843A4;
	// lwz r11,144(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// mr r28,r18
	r28.u64 = r18.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82283d50
	if (ctx.cr6.eq) goto loc_82283D50;
	// rlwinm. r11,r14,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(r14.u32 | (r14.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82283d50
	if (ctx.cr0.eq) goto loc_82283D50;
	// li r4,8230
	ctx.r4.s64 = 8230;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82282e58
	ctx.lr = 0x82283CE4;
	sub_82282E58(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpw cr6,r16,r3
	ctx.cr6.compare<int32_t>(r16.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x82283d50
	if (ctx.cr6.lt) goto loc_82283D50;
	// lwz r23,120(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r25,112(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r23,1
	ctx.cr6.compare<int32_t>(r23.s32, 1, ctx.xer);
	// ble cr6,0x82283d34
	if (!ctx.cr6.gt) goto loc_82283D34;
	// rlwinm r11,r23,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r29,r3,r16
	r29.u64 = r16.u64 - ctx.r3.u64;
	// add r31,r11,r22
	r31.u64 = ctx.r11.u64 + r22.u64;
loc_82283D0C:
	// cmpw cr6,r25,r29
	ctx.cr6.compare<int32_t>(r25.s32, r29.s32, ctx.xer);
	// ble cr6,0x82283d34
	if (!ctx.cr6.gt) goto loc_82283D34;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lhzu r4,-2(r31)
	ea = -2 + r31.u32;
	ctx.r4.u64 = REX_LOAD_U16(ea);
	r31.u32 = ea;
	// bl 0x82282e58
	ctx.lr = 0x82283D20;
	sub_82282E58(ctx, base);
	// addi r23,r23,-1
	r23.s64 = r23.s64 + -1;
	// subf r25,r3,r25
	r25.u64 = r25.u64 - ctx.r3.u64;
	// cmpwi cr6,r23,1
	ctx.cr6.compare<int32_t>(r23.s32, 1, ctx.xer);
	// stw r25,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r25.u32);
	// bgt cr6,0x82283d0c
	if (ctx.cr6.gt) goto loc_82283D0C;
loc_82283D34:
	// subf r11,r30,r16
	ctx.r11.u64 = r16.u64 - r30.u64;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(r25.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x82283d58
	if (ctx.cr6.gt) goto loc_82283D58;
	// add r25,r30,r25
	r25.u64 = r30.u64 + r25.u64;
	// li r28,1
	r28.s64 = 1;
	// stw r25,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r25.u32);
	// b 0x82283d58
	goto loc_82283D58;
loc_82283D50:
	// lwz r23,120(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r25,112(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
loc_82283D58:
	// rlwinm. r11,r14,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(r14.u32 | (r14.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82283d78
	if (ctx.cr0.eq) goto loc_82283D78;
	// subf r10,r25,r16
	ctx.r10.u64 = r16.u64 - r25.u64;
	// lwz r11,0(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 0);
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// add r29,r10,r11
	r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82283d94
	goto loc_82283D94;
loc_82283D78:
	// rlwinm. r11,r14,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(r14.u32 | (r14.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82283d90
	if (ctx.cr0.eq) goto loc_82283D90;
	// lwz r11,0(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 0);
	// subf r11,r25,r11
	ctx.r11.u64 = ctx.r11.u64 - r25.u64;
	// add r29,r11,r16
	r29.u64 = ctx.r11.u64 + r16.u64;
	// b 0x82283d94
	goto loc_82283D94;
loc_82283D90:
	// lwz r29,0(r15)
	r29.u64 = REX_LOAD_U32(r15.u32 + 0);
loc_82283D94:
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// clrlwi r10,r28,24
	ctx.r10.u64 = r28.u32 & 0xFF;
	// rlwinm r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r28,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	r28.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// subfe r11,r11,r10
	temp.u8 = (~ctx.r11.u32 + ctx.r10.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add r24,r11,r23
	r24.u64 = ctx.r11.u64 + r23.u64;
	// cmpw cr6,r28,r24
	ctx.cr6.compare<int32_t>(r28.s32, r24.s32, ctx.xer);
	// bge cr6,0x822842fc
	if (!ctx.cr6.lt) goto loc_822842FC;
	// lwz r11,124(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// mulli r11,r11,20
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(20));
	// add r26,r11,r10
	r26.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82283DCC:
	// stfs f22,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f22.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// cmpwi cr6,r28,-1
	ctx.cr6.compare<int32_t>(r28.s32, -1, ctx.xer);
	// bne cr6,0x82283de0
	if (!ctx.cr6.eq) goto loc_82283DE0;
	// li r4,-2
	ctx.r4.s64 = -2;
	// b 0x82283df8
	goto loc_82283DF8;
loc_82283DE0:
	// cmpw cr6,r28,r23
	ctx.cr6.compare<int32_t>(r28.s32, r23.s32, ctx.xer);
	// bge cr6,0x82283df4
	if (!ctx.cr6.lt) goto loc_82283DF4;
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r4,r11,r22
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + r22.u32);
	// b 0x82283df8
	goto loc_82283DF8;
loc_82283DF4:
	// li r4,8230
	ctx.r4.s64 = 8230;
loc_82283DF8:
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822825e8
	ctx.lr = 0x82283E08;
	sub_822825E8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82283e30
	if (!ctx.cr6.eq) goto loc_82283E30;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822825e8
	ctx.lr = 0x82283E28;
	sub_822825E8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x82284390
	if (ctx.cr0.eq) goto loc_82284390;
loc_82283E30:
	// lfs f0,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f0,f24
	ctx.f1.f64 = double(float(ctx.f0.f64 + f24.f64));
	// bl 0x822d6130
	ctx.lr = 0x82283E3C;
	sub_822D6130(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lbz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8228426c
	if (ctx.cr0.eq) goto loc_8228426C;
	// lfs f1,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822d6130
	ctx.lr = 0x82283E5C;
	sub_822D6130(ctx, base);
	// extsw r11,r29
	ctx.r11.s64 = r29.s32;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lbz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 28);
	// std r11,312(r1)
	REX_STORE_U64(ctx.r1.u32 + 312, ctx.r11.u64);
	// lfd f13,312(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 312);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fadds f26,f0,f13
	f26.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// beq 0x82283f70
	if (ctx.cr0.eq) goto loc_82283F70;
	// lhz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 44);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82283ea0
	if (!ctx.cr0.eq) goto loc_82283EA0;
	// extsw r11,r20
	ctx.r11.s64 = r20.s32;
	// std r11,368(r1)
	REX_STORE_U64(ctx.r1.u32 + 368, ctx.r11.u64);
	// lfd f0,368(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 368);
	// b 0x82283f7c
	goto loc_82283F7C;
loc_82283EA0:
	// lfs f0,228(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 228);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82283ee8
	if (!ctx.cr6.eq) goto loc_82283EE8;
	// extsw r10,r20
	ctx.r10.s64 = r20.s32;
	// lhz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 52);
	// std r10,384(r1)
	REX_STORE_U64(ctx.r1.u32 + 384, ctx.r10.u64);
	// lfd f13,384(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 384);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// std r11,296(r1)
	REX_STORE_U64(ctx.r1.u32 + 296, ctx.r11.u64);
	// lfd f12,296(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 296);
	// fsubs f13,f13,f25
	ctx.f13.f64 = double(float(ctx.f13.f64 - f25.f64));
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fcfid f13,f12
	ctx.f13.f64 = double(ctx.f12.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// b 0x82283f88
	goto loc_82283F88;
loc_82283EE8:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// lhz r10,52(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 52);
	// extsw r11,r20
	ctx.r11.s64 = r20.s32;
	// bne cr6,0x82283f34
	if (!ctx.cr6.eq) goto loc_82283F34;
	// std r11,216(r1)
	REX_STORE_U64(ctx.r1.u32 + 216, ctx.r11.u64);
	// lfd f13,216(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 216);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// extsw r11,r10
	ctx.r11.s64 = ctx.r10.s32;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// std r11,344(r1)
	REX_STORE_U64(ctx.r1.u32 + 344, ctx.r11.u64);
	// lfd f12,344(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 344);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fsubs f13,f13,f25
	ctx.f13.f64 = double(float(ctx.f13.f64 - f25.f64));
	// lfs f11,232(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 232);
	ctx.f11.f64 = double(temp.f32);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fsubs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// b 0x82283f88
	goto loc_82283F88;
loc_82283F34:
	// std r11,192(r1)
	REX_STORE_U64(ctx.r1.u32 + 192, ctx.r11.u64);
	// extsw r11,r10
	ctx.r11.s64 = ctx.r10.s32;
	// lfs f13,232(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 232);
	ctx.f13.f64 = double(temp.f32);
	// std r11,232(r1)
	REX_STORE_U64(ctx.r1.u32 + 232, ctx.r11.u64);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfd f11,192(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 192);
	// fcfid f13,f11
	ctx.f13.f64 = double(ctx.f11.s64);
	// lfd f12,232(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 232);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fsubs f13,f13,f25
	ctx.f13.f64 = double(float(ctx.f13.f64 - f25.f64));
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fmadds f0,f0,f24,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f24.f64, ctx.f13.f64)));
	// b 0x82283f88
	goto loc_82283F88;
loc_82283F70:
	// extsw r11,r20
	ctx.r11.s64 = r20.s32;
	// std r11,248(r1)
	REX_STORE_U64(ctx.r1.u32 + 248, ctx.r11.u64);
	// lfd f0,248(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 248);
loc_82283F7C:
	// fcfid f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fsubs f0,f0,f25
	ctx.f0.f64 = double(float(ctx.f0.f64 - f25.f64));
loc_82283F88:
	// lhz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 52);
	// lfs f13,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f29,f0,f13
	f29.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lhz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 0);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// cmplwi cr6,r10,65534
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65534, ctx.xer);
	// std r11,376(r1)
	REX_STORE_U64(ctx.r1.u32 + 376, ctx.r11.u64);
	// lfd f0,376(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 376);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fadds f28,f0,f29
	f28.f64 = double(float(ctx.f0.f64 + f29.f64));
	// bne cr6,0x82283ffc
	if (!ctx.cr6.eq) goto loc_82283FFC;
	// lwa r10,8(r15)
	ctx.r10.s64 = int32_t(REX_LOAD_U32(r15.u32 + 8));
	// extsw r11,r25
	ctx.r11.s64 = r25.s32;
	// std r10,264(r1)
	REX_STORE_U64(ctx.r1.u32 + 264, ctx.r10.u64);
	// std r11,328(r1)
	REX_STORE_U64(ctx.r1.u32 + 328, ctx.r11.u64);
	// lfd f12,328(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 328);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lfd f0,264(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 264);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// fcfid f0,f12
	ctx.f0.f64 = double(ctx.f12.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fadds f0,f0,f26
	ctx.f0.f64 = double(float(ctx.f0.f64 + f26.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82283ff4
	if (ctx.cr6.lt) goto loc_82283FF4;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82283FF4:
	// fadds f27,f0,f23
	ctx.fpscr.disableFlushMode();
	f27.f64 = double(float(ctx.f0.f64 + f23.f64));
	// b 0x82284018
	goto loc_82284018;
loc_82283FFC:
	// lhz r11,50(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 50);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,280(r1)
	REX_STORE_U64(ctx.r1.u32 + 280, ctx.r11.u64);
	// lfd f0,280(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 280);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fadds f27,f0,f26
	f27.f64 = double(float(ctx.f0.f64 + f26.f64));
loc_82284018:
	// lwa r11,4(r15)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(r15.u32 + 4));
	// std r11,360(r1)
	REX_STORE_U64(ctx.r1.u32 + 360, ctx.r11.u64);
	// lfd f0,360(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 360);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fcmpu cr6,f28,f0
	ctx.cr6.compare(f28.f64, ctx.f0.f64);
	// blt cr6,0x822842e8
	if (ctx.cr6.lt) goto loc_822842E8;
	// lwa r11,12(r15)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(r15.u32 + 12));
	// std r11,200(r1)
	REX_STORE_U64(ctx.r1.u32 + 200, ctx.r11.u64);
	// lfd f0,200(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 200);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fcmpu cr6,f29,f0
	ctx.cr6.compare(f29.f64, ctx.f0.f64);
	// bgt cr6,0x822842e8
	if (ctx.cr6.gt) goto loc_822842E8;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822820a0
	ctx.lr = 0x8228405C;
	sub_822820A0(ctx, base);
	// stw r3,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82284098
	if (!ctx.cr0.lt) goto loc_82284098;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822825e8
	ctx.lr = 0x8228407C;
	sub_822825E8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x82284390
	if (ctx.cr0.eq) goto loc_82284390;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822820a0
	ctx.lr = 0x82284090;
	sub_822820A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82284390
	if (ctx.cr0.lt) goto loc_82284390;
loc_82284098:
	// lwa r11,4(r15)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(r15.u32 + 4));
	// lfs f13,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// std r11,208(r1)
	REX_STORE_U64(ctx.r1.u32 + 208, ctx.r11.u64);
	// lfs f12,68(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 68);
	ctx.f12.f64 = double(temp.f32);
	// fmr f30,f13
	f30.f64 = ctx.f13.f64;
	// fmr f31,f12
	f31.f64 = ctx.f12.f64;
	// lfd f0,208(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 208);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fcmpu cr6,f29,f0
	ctx.cr6.compare(f29.f64, ctx.f0.f64);
	// bge cr6,0x82284118
	if (!ctx.cr6.lt) goto loc_82284118;
	// lbz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 28);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822840f0
	if (ctx.cr0.eq) goto loc_822840F0;
	// lhz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 52);
	// fsubs f10,f0,f29
	ctx.f10.f64 = double(float(ctx.f0.f64 - f29.f64));
	// fsubs f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,224(r1)
	REX_STORE_U64(ctx.r1.u32 + 224, ctx.r11.u64);
	// fmuls f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// lfd f10,224(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 224);
	// b 0x82284104
	goto loc_82284104;
loc_822840F0:
	// lhz r11,72(r27)
	ctx.r11.u64 = REX_LOAD_U16(r27.u32 + 72);
	// fsubs f11,f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f0.f64 - f29.f64));
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,240(r1)
	REX_STORE_U64(ctx.r1.u32 + 240, ctx.r11.u64);
	// lfd f10,240(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 240);
loc_82284104:
	// fcfid f10,f10
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(ctx.f10.s64);
	// fmr f29,f0
	f29.f64 = ctx.f0.f64;
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// fdivs f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 / ctx.f10.f64));
	// fadds f30,f11,f30
	f30.f64 = double(float(ctx.f11.f64 + f30.f64));
loc_82284118:
	// lwa r11,12(r15)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(r15.u32 + 12));
	// std r11,256(r1)
	REX_STORE_U64(ctx.r1.u32 + 256, ctx.r11.u64);
	// lfd f0,256(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 256);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fcmpu cr6,f28,f0
	ctx.cr6.compare(f28.f64, ctx.f0.f64);
	// ble cr6,0x82284188
	if (!ctx.cr6.gt) goto loc_82284188;
	// lbz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 28);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82284160
	if (ctx.cr0.eq) goto loc_82284160;
	// lhz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 52);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fsubs f11,f28,f0
	ctx.f11.f64 = double(float(f28.f64 - ctx.f0.f64));
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,272(r1)
	REX_STORE_U64(ctx.r1.u32 + 272, ctx.r11.u64);
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfd f12,272(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 272);
	// b 0x82284174
	goto loc_82284174;
loc_82284160:
	// lhz r11,72(r27)
	ctx.r11.u64 = REX_LOAD_U16(r27.u32 + 72);
	// fsubs f13,f28,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(f28.f64 - ctx.f0.f64));
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,288(r1)
	REX_STORE_U64(ctx.r1.u32 + 288, ctx.r11.u64);
	// lfd f12,288(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 288);
loc_82284174:
	// fcfid f12,f12
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(ctx.f12.s64);
	// fmr f28,f0
	f28.f64 = ctx.f0.f64;
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fdivs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// fsubs f31,f31,f13
	f31.f64 = double(float(f31.f64 - ctx.f13.f64));
loc_82284188:
	// lbz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 28);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8228419c
	if (ctx.cr0.eq) goto loc_8228419C;
	// lwz r30,32(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 32);
	// b 0x822841a8
	goto loc_822841A8;
loc_8228419C:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r30,0(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_822841A8:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x822841f0
	if (ctx.cr6.eq) goto loc_822841F0;
	// cmplw cr6,r21,r30
	ctx.cr6.compare<uint32_t>(r21.u32, r30.u32, ctx.xer);
	// bne cr6,0x822841c8
	if (!ctx.cr6.eq) goto loc_822841C8;
	// addi r11,r17,4
	ctx.r11.s64 = r17.s64 + 4;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// cmplwi cr6,r11,6400
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6400, ctx.xer);
	// blt cr6,0x822841f4
	if (ctx.cr6.lt) goto loc_822841F4;
loc_822841C8:
	// mr r9,r19
	ctx.r9.u64 = r19.u64;
	// lwz r6,128(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// mr r8,r14
	ctx.r8.u64 = r14.u64;
	// lwz r4,652(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 652);
	// mr r7,r17
	ctx.r7.u64 = r17.u64;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82280348
	ctx.lr = 0x822841E8;
	sub_82280348(ctx, base);
	// stw r3,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// mr r17,r18
	r17.u64 = r18.u64;
loc_822841F0:
	// mr r21,r30
	r21.u64 = r30.u64;
loc_822841F4:
	// lwz r3,652(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 652);
	// lbz r19,28(r31)
	r19.u64 = REX_LOAD_U8(r31.u32 + 28);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,228(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 228);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228420C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,56(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,128(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// stfs f0,176(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// fsubs f0,f26,f1
	ctx.f0.f64 = double(float(f26.f64 - ctx.f1.f64));
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fsubs f0,f29,f1
	ctx.f0.f64 = double(float(f29.f64 - ctx.f1.f64));
	// stfs f0,164(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// fsubs f0,f27,f1
	ctx.f0.f64 = double(float(f27.f64 - ctx.f1.f64));
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// fsubs f0,f28,f1
	ctx.f0.f64 = double(float(f28.f64 - ctx.f1.f64));
	// lfs f13,64(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// subfic r9,r17,400
	ctx.xer.ca = r17.u32 <= 400;
	ctx.r9.u64 = static_cast<uint64_t>(400) - r17.u64;
	// stfs f13,184(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// rlwinm r11,r17,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 4) & 0xFFFFFFF0;
	// stfs f30,180(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// rlwinm r6,r9,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// stfs f31,188(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f0,172(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x822802b0
	ctx.lr = 0x82284264;
	sub_822802B0(ctx, base);
	// add r17,r3,r17
	r17.u64 = ctx.r3.u64 + r17.u64;
	// b 0x822842e8
	goto loc_822842E8;
loc_8228426C:
	// lhz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 0);
	// cmplwi cr6,r10,65534
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65534, ctx.xer);
	// beq cr6,0x822842e8
	if (ctx.cr6.eq) goto loc_822842E8;
	// lwz r9,124(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// clrlwi. r8,r14,31
	ctx.r8.u64 = r14.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// sth r10,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// addi r26,r26,20
	r26.s64 = r26.s64 + 20;
	// stw r18,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r18.u32);
	// stw r9,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// beq 0x822842a4
	if (ctx.cr0.eq) goto loc_822842A4;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_822842A4:
	// extsw r10,r20
	ctx.r10.s64 = r20.s32;
	// lwz r9,652(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 652);
	// extsw r8,r29
	ctx.r8.s64 = r29.s32;
	// std r10,304(r1)
	REX_STORE_U64(ctx.r1.u32 + 304, ctx.r10.u64);
	// std r8,320(r1)
	REX_STORE_U64(ctx.r1.u32 + 320, ctx.r8.u64);
	// lwz r10,164(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 164);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lfd f13,304(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 304);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfd f12,320(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 320);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// stfs f12,12(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// fsubs f13,f13,f25
	ctx.f13.f64 = double(float(ctx.f13.f64 - f25.f64));
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
loc_822842E8:
	// lhz r11,2(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 2);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// add r29,r11,r29
	r29.u64 = ctx.r11.u64 + r29.u64;
	// cmpw cr6,r28,r24
	ctx.cr6.compare<int32_t>(r28.s32, r24.s32, ctx.xer);
	// blt cr6,0x82283dcc
	if (ctx.cr6.lt) goto loc_82283DCC;
loc_822842FC:
	// lwz r11,136(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r10,148(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// cmplw cr6,r22,r11
	ctx.cr6.compare<uint32_t>(r22.u32, ctx.r11.u32, ctx.xer);
	// add r20,r20,r10
	r20.u64 = r20.u64 + ctx.r10.u64;
	// bne cr6,0x82284320
	if (!ctx.cr6.eq) goto loc_82284320;
	// lhz r10,0(r22)
	ctx.r10.u64 = REX_LOAD_U16(r22.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82284320
	if (ctx.cr0.eq) goto loc_82284320;
	// addi r11,r22,2
	ctx.r11.s64 = r22.s64 + 2;
loc_82284320:
	// lwz r10,668(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 668);
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x8228433c
	if (ctx.cr6.lt) goto loc_8228433C;
	// subf r6,r23,r10
	ctx.r6.u64 = ctx.r10.u64 - r23.u64;
	// stw r6,668(r1)
	REX_STORE_U32(ctx.r1.u32 + 668, ctx.r6.u32);
	// b 0x82284340
	goto loc_82284340;
loc_8228433C:
	// li r6,-1
	ctx.r6.s64 = -1;
loc_82284340:
	// extsw r10,r20
	ctx.r10.s64 = r20.s32;
	// lwa r9,12(r15)
	ctx.r9.s64 = int32_t(REX_LOAD_U32(r15.u32 + 12));
	// std r10,336(r1)
	REX_STORE_U64(ctx.r1.u32 + 336, ctx.r10.u64);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// std r9,352(r1)
	REX_STORE_U64(ctx.r1.u32 + 352, ctx.r9.u64);
	// lwz r28,104(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r24,116(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// stw r6,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r6.u32);
	// lfd f0,336(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 336);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lfd f13,352(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 352);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fsubs f0,f0,f25
	ctx.f0.f64 = double(float(ctx.f0.f64 - f25.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x822843a4
	if (ctx.cr6.gt) goto loc_822843A4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82283c78
	if (!ctx.cr6.eq) goto loc_82283C78;
	// b 0x822843a4
	goto loc_822843A4;
loc_82284390:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// lwz r24,116(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r28,104(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// ori r11,r11,16389
	ctx.r11.u64 = ctx.r11.u64 | 16389;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
loc_822843A4:
	// lbz r11,4(r24)
	ctx.r11.u64 = REX_LOAD_U8(r24.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x822843fc
	if (!ctx.cr0.eq) goto loc_822843FC;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82284434
	if (ctx.cr6.eq) goto loc_82284434;
	// lwz r6,124(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r31,100(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x822843e8
	if (!ctx.cr6.gt) goto loc_822843E8;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt cr6,0x822843e8
	if (ctx.cr6.lt) goto loc_822843E8;
	// mr r7,r15
	ctx.r7.u64 = r15.u64;
	// lwz r4,652(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 652);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822806b0
	ctx.lr = 0x822843E4;
	sub_822806B0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_822843E8:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82255b50
	ctx.lr = 0x822843F0;
	sub_82255B50(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82255b70
	ctx.lr = 0x822843F8;
	sub_82255B70(ctx, base);
	// b 0x82284438
	goto loc_82284438;
loc_822843FC:
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(r17.s32, 0, ctx.xer);
	// ble cr6,0x82284434
	if (!ctx.cr6.gt) goto loc_82284434;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x82284434
	if (ctx.cr6.eq) goto loc_82284434;
	// mr r9,r19
	ctx.r9.u64 = r19.u64;
	// lwz r6,128(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// mr r8,r14
	ctx.r8.u64 = r14.u64;
	// lwz r4,652(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 652);
	// mr r7,r17
	ctx.r7.u64 = r17.u64;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82280348
	ctx.lr = 0x8228442C;
	sub_82280348(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82284438
	goto loc_82284438;
loc_82284434:
	// lwz r31,100(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
loc_82284438:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82284444
	goto loc_82284444;
loc_82284440:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82284444:
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x822d4f6c
	ctx.lr = 0x82284450;
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_822AD068) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x822AD070;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x822ad098
	if (!ctx.cr6.gt) goto loc_822AD098;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-4224
	ctx.r3.s64 = ctx.r11.s64 + -4224;
	// bl 0x822d4588
	ctx.lr = 0x822AD098;
	sub_822D4588(ctx, base);
loc_822AD098:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// bge cr6,0x822ad110
	if (!ctx.cr6.lt) goto loc_822AD110;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822abfe8
	ctx.lr = 0x822AD0BC;
	sub_822ABFE8(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// subf r11,r4,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r4.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822d6840
	ctx.lr = 0x822AD0D8;
	sub_822D6840(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// subf r11,r3,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r3.u64;
	// srawi r28,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	r28.s64 = ctx.r11.s32 >> 2;
	// beq cr6,0x822ad0f4
	if (ctx.cr6.eq) goto loc_822AD0F4;
	// bl 0x822c80a8
	ctx.lr = 0x822AD0F4;
	sub_822C80A8(ctx, base);
loc_822AD0F4:
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
loc_822AD110:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_822B07C8) {
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
	ctx.lr = 0x822B07D0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r3,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r3.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// ble cr6,0x822b08bc
	if (!ctx.cr6.gt) goto loc_822B08BC;
loc_822B07F4:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x822b0880
	if (!ctx.cr6.gt) goto loc_822B0880;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822ada98
	ctx.lr = 0x822B0810;
	sub_822ADA98(ctx, base);
	// srawi r11,r29,1
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x1) != 0);
	ctx.r11.s64 = r29.s32 >> 1;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// add r29,r10,r11
	r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r27,84(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r26,80(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// subf r11,r27,r31
	ctx.r11.u64 = r31.u64 - r27.u64;
	// subf r10,r30,r26
	ctx.r10.u64 = r26.u64 - r30.u64;
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x822b0860
	if (!ctx.cr6.lt) goto loc_822B0860;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822b07c8
	ctx.lr = 0x822B0858;
	sub_822B07C8(ctx, base);
	// mr r30,r27
	r30.u64 = r27.u64;
	// b 0x822b0870
	goto loc_822B0870;
loc_822B0860:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822b07c8
	ctx.lr = 0x822B086C;
	sub_822B07C8(ctx, base);
	// mr r31,r26
	r31.u64 = r26.u64;
loc_822B0870:
	// subf r11,r30,r31
	ctx.r11.u64 = r31.u64 - r30.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bgt cr6,0x822b07f4
	if (ctx.cr6.gt) goto loc_822B07F4;
loc_822B0880:
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// ble cr6,0x822b08bc
	if (!ctx.cr6.gt) goto loc_822B08BC;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x822b08a8
	if (!ctx.cr6.gt) goto loc_822B08A8;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822ad230
	ctx.lr = 0x822B08A8;
	sub_822AD230(ctx, base);
loc_822B08A8:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822aeb70
	ctx.lr = 0x822B08B8;
	sub_822AEB70(ctx, base);
	// b 0x822b08d8
	goto loc_822B08D8;
loc_822B08BC:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x822b08d8
	if (!ctx.cr6.gt) goto loc_822B08D8;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822ac618
	ctx.lr = 0x822B08D8;
	sub_822AC618(ctx, base);
loc_822B08D8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_822B68F0) {
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
	ctx.lr = 0x822B68F8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,112(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 112);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// li r28,0
	r28.s64 = 0;
	// lwz r11,264(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 264);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822b6920
	if (ctx.cr6.eq) goto loc_822B6920;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822b6974
	goto loc_822B6974;
loc_822B6920:
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lwz r11,31492(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 31492);
	// lwz r3,8(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x822a99c0
	ctx.lr = 0x822B6930;
	sub_822A99C0(ctx, base);
	// rlwinm r11,r3,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r29,68(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// lwzx r31,r10,r30
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + r30.u32);
	// b 0x822b6968
	goto loc_822B6968;
loc_822B694C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x822b65d0
	ctx.lr = 0x822B6960;
	sub_822B65D0(ctx, base);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// add r28,r3,r28
	r28.u64 = ctx.r3.u64 + r28.u64;
loc_822B6968:
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(r31.u32, r29.u32, ctx.xer);
	// bne cr6,0x822b694c
	if (!ctx.cr6.eq) goto loc_822B694C;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_822B6974:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_822B9268) {
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
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x822c5ac0
	ctx.lr = 0x822B9284;
	sub_822C5AC0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822b9298
	if (!ctx.cr0.eq) goto loc_822B9298;
	// lbz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 72);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822b9300
	if (ctx.cr0.eq) goto loc_822B9300;
loc_822B9298:
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
loc_822B9300:
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

DEFINE_REX_FUNC(sub_822BA928) {
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
	ctx.lr = 0x822BA930;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r5,31
	ctx.r5.s64 = 31;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x822d6450
	ctx.lr = 0x822BA94C;
	sub_822D6450(ctx, base);
	// lwz r3,36(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 36);
	// bl 0x822b1d30
	ctx.lr = 0x822BA954;
	sub_822B1D30(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x822ba970
	goto loc_822BA970;
loc_822BA960:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// beq cr6,0x822ba978
	if (ctx.cr6.eq) goto loc_822BA978;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
loc_822BA970:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822ba960
	if (!ctx.cr6.eq) goto loc_822BA960;
loc_822BA978:
	// addi r30,r30,40
	r30.s64 = r30.s64 + 40;
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
	// li r28,0
	r28.s64 = 0;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi. r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822ba9f8
	if (ctx.cr0.eq) goto loc_822BA9F8;
	// li r29,0
	r29.s64 = 0;
loc_822BA99C:
	// lwzx r27,r29,r11
	r27.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// lwz r3,0(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 0);
	// bl 0x822b1d30
	ctx.lr = 0x822BA9A8;
	sub_822B1D30(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x822ba9c4
	goto loc_822BA9C4;
loc_822BA9B4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// beq cr6,0x822ba9cc
	if (ctx.cr6.eq) goto loc_822BA9CC;
	// lwz r4,12(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
loc_822BA9C4:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x822ba9b4
	if (!ctx.cr6.eq) goto loc_822BA9B4;
loc_822BA9CC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,4(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822ba778
	ctx.lr = 0x822BA9D8;
	sub_822BA778(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x822ba99c
	if (ctx.cr6.lt) goto loc_822BA99C;
loc_822BA9F8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_822C2140) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stw r11,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r11,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stb r11,4(r3)
	REX_STORE_U8(ctx.r3.u32 + 4, ctx.r11.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C27C8) {
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
	// lwz r3,80(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822c27f4
	if (ctx.cr6.eq) goto loc_822C27F4;
	// bl 0x822c80a8
	ctx.lr = 0x822C27EC;
	sub_822C80A8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r11.u32);
loc_822C27F4:
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

DEFINE_REX_FUNC(sub_822C36A8) {
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
	ctx.lr = 0x822C36B0;
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r17,r3
	r17.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,80
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 80, ctx.xer);
	// beq cr6,0x822c36e8
	if (ctx.cr6.eq) goto loc_822C36E8;
	// lbz r11,1(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 1);
	// cmplwi cr6,r11,77
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 77, ctx.xer);
	// beq cr6,0x822c36e8
	if (ctx.cr6.eq) goto loc_822C36E8;
	// lbz r11,2(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 2);
	// cmplwi cr6,r11,68
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 68, ctx.xer);
	// beq cr6,0x822c36e8
	if (ctx.cr6.eq) goto loc_822C36E8;
loc_822C36E0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822c477c
	goto loc_822C477C;
loc_822C36E8:
	// lbz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 4);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x822c36e0
	if (ctx.cr6.lt) goto loc_822C36E0;
	// lbz r11,3(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 3);
	// extsb r30,r11
	r30.s64 = ctx.r11.s8;
	// bl 0x822c9130
	ctx.lr = 0x822C3704;
	sub_822C9130(ctx, base);
	// addic r11,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	ctx.r11.s64 = r30.s64 + -1;
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// subfe r11,r11,r30
	temp.u8 = (~ctx.r11.u32 + r30.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + r30.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + r30.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x822c3728
	if (ctx.cr6.eq) goto loc_822C3728;
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// bl 0x822c9160
	ctx.lr = 0x822C3720;
	sub_822C9160(ctx, base);
	// bl 0x822c9130
	ctx.lr = 0x822C3724;
	sub_822C9130(ctx, base);
	// stb r3,3(r31)
	REX_STORE_U8(r31.u32 + 3, ctx.r3.u8);
loc_822C3728:
	// li r10,82
	ctx.r10.s64 = 82;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r19,80
	r19.s64 = 80;
	// li r18,84
	r18.s64 = 84;
	// stb r10,130(r1)
	REX_STORE_U8(ctx.r1.u32 + 130, ctx.r10.u8);
	// stb r19,128(r1)
	REX_STORE_U8(ctx.r1.u32 + 128, r19.u8);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + r31.u64;
	// stb r18,129(r1)
	REX_STORE_U8(ctx.r1.u32 + 129, r18.u8);
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r7,r1,232
	ctx.r7.s64 = ctx.r1.s64 + 232;
	// addi r6,r1,260
	ctx.r6.s64 = ctx.r1.s64 + 260;
	// addi r5,r1,200
	ctx.r5.s64 = ctx.r1.s64 + 200;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x822b86d0
	ctx.lr = 0x822C3764;
	sub_822B86D0(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x822c36e0
	if (ctx.cr0.eq) goto loc_822C36E0;
	// lwz r11,144(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// li r29,0
	r29.s64 = 0;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x822c37d8
	if (!ctx.cr6.gt) goto loc_822C37D8;
	// li r31,0
	r31.s64 = 0;
loc_822C3784:
	// lwz r10,200(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// lbz r9,3(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// lwz r11,232(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 232);
	// extsb r27,r9
	r27.s64 = ctx.r9.s8;
	// lwzx r10,r31,r10
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + ctx.r10.u32);
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x822c9130
	ctx.lr = 0x822C37A0;
	sub_822C9130(ctx, base);
	// addic r11,r27,-1
	ctx.xer.ca = r27.u32 > 0;
	ctx.r11.s64 = r27.s64 + -1;
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// subfe r11,r11,r27
	temp.u8 = (~ctx.r11.u32 + r27.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + r27.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + r27.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x822c37c0
	if (ctx.cr6.eq) goto loc_822C37C0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,144(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x822c2ab8
	ctx.lr = 0x822C37C0;
	sub_822C2AB8(ctx, base);
loc_822C37C0:
	// lwz r11,144(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x822c3784
	if (ctx.cr6.lt) goto loc_822C3784;
loc_822C37D8:
	// bl 0x822c9130
	ctx.lr = 0x822C37DC;
	sub_822C9130(ctx, base);
	// lwz r11,144(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// li r20,77
	r20.s64 = 77;
	// li r23,69
	r23.s64 = 69;
	// li r9,3
	ctx.r9.s64 = 3;
	// addi r8,r1,120
	ctx.r8.s64 = ctx.r1.s64 + 120;
	// stb r3,3(r11)
	REX_STORE_U8(ctx.r11.u32 + 3, ctx.r3.u8);
	// addi r7,r1,240
	ctx.r7.s64 = ctx.r1.s64 + 240;
	// stb r19,120(r1)
	REX_STORE_U8(ctx.r1.u32 + 120, r19.u8);
	// addi r6,r1,304
	ctx.r6.s64 = ctx.r1.s64 + 304;
	// stb r20,121(r1)
	REX_STORE_U8(ctx.r1.u32 + 121, r20.u8);
	// addi r5,r1,184
	ctx.r5.s64 = ctx.r1.s64 + 184;
	// stb r23,122(r1)
	REX_STORE_U8(ctx.r1.u32 + 122, r23.u8);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822b86d0
	ctx.lr = 0x822C3818;
	sub_822B86D0(ctx, base);
	// mr. r26,r3
	r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// beq 0x822c36e0
	if (ctx.cr0.eq) goto loc_822C36E0;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r27,0
	r27.s64 = 0;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x822c38d0
	if (!ctx.cr6.gt) goto loc_822C38D0;
	// li r28,0
	r28.s64 = 0;
loc_822C3838:
	// lwz r10,184(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// lbz r9,3(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// lwz r11,240(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// extsb r31,r9
	r31.s64 = ctx.r9.s8;
	// lwzx r10,r28,r10
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + ctx.r10.u32);
	// add r29,r10,r11
	r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x822c9130
	ctx.lr = 0x822C3854;
	sub_822C9130(ctx, base);
	// addic r11,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	ctx.r11.s64 = r31.s64 + -1;
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// subfe r11,r11,r31
	temp.u8 = (~ctx.r11.u32 + r31.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + r31.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + r31.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x822c38b8
	if (ctx.cr6.eq) goto loc_822C38B8;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x822c2ba8
	ctx.lr = 0x822C3874;
	sub_822C2BA8(ctx, base);
	// li r6,9
	ctx.r6.s64 = 9;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x822b8668
	ctx.lr = 0x822C3888;
	sub_822B8668(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822c38ac
	if (ctx.cr0.eq) goto loc_822C38AC;
	// addi r30,r29,272
	r30.s64 = r29.s64 + 272;
	// li r31,10
	r31.s64 = 10;
loc_822C3898:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c9160
	ctx.lr = 0x822C38A0;
	sub_822C9160(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x822c3898
	if (!ctx.cr0.eq) goto loc_822C3898;
loc_822C38AC:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x822c2e80
	ctx.lr = 0x822C38B8;
	sub_822C2E80(ctx, base);
loc_822C38B8:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpw cr6,r27,r10
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x822c3838
	if (ctx.cr6.lt) goto loc_822C3838;
loc_822C38D0:
	// bl 0x822c9130
	ctx.lr = 0x822C38D4;
	sub_822C9130(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r10,65
	ctx.r10.s64 = 65;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r8,r1,100
	ctx.r8.s64 = ctx.r1.s64 + 100;
	// addi r7,r1,248
	ctx.r7.s64 = ctx.r1.s64 + 248;
	// stb r3,3(r11)
	REX_STORE_U8(ctx.r11.u32 + 3, ctx.r3.u8);
	// addi r6,r1,272
	ctx.r6.s64 = ctx.r1.s64 + 272;
	// stb r19,100(r1)
	REX_STORE_U8(ctx.r1.u32 + 100, r19.u8);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// stb r20,101(r1)
	REX_STORE_U8(ctx.r1.u32 + 101, r20.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r10,102(r1)
	REX_STORE_U8(ctx.r1.u32 + 102, ctx.r10.u8);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822b86d0
	ctx.lr = 0x822C390C;
	sub_822B86D0(ctx, base);
	// mr. r24,r3
	r24.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r24.s32, 0, ctx.xer);
	// beq 0x822c36e0
	if (ctx.cr0.eq) goto loc_822C36E0;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r25,0
	r25.s64 = 0;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x822c3ba8
	if (!ctx.cr6.gt) goto loc_822C3BA8;
	// li r26,0
	r26.s64 = 0;
loc_822C392C:
	// lwz r10,192(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// lbz r9,3(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// lwz r11,248(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 248);
	// extsb r30,r9
	r30.s64 = ctx.r9.s8;
	// lwzx r10,r26,r10
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + ctx.r10.u32);
	// add r31,r10,r11
	r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x822c9130
	ctx.lr = 0x822C3948;
	sub_822C9130(ctx, base);
	// addic r11,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	ctx.r11.s64 = r30.s64 + -1;
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// subfe r11,r11,r30
	temp.u8 = (~ctx.r11.u32 + r30.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + r30.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + r30.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x822c3b90
	if (ctx.cr6.eq) goto loc_822C3B90;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c9160
	ctx.lr = 0x822C3964;
	sub_822C9160(ctx, base);
	// addi r28,r31,4
	r28.s64 = r31.s64 + 4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822c9160
	ctx.lr = 0x822C3970;
	sub_822C9160(ctx, base);
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// bl 0x822c9160
	ctx.lr = 0x822C3978;
	sub_822C9160(ctx, base);
	// addi r3,r31,44
	ctx.r3.s64 = r31.s64 + 44;
	// bl 0x822c9160
	ctx.lr = 0x822C3980;
	sub_822C9160(ctx, base);
	// addi r3,r31,48
	ctx.r3.s64 = r31.s64 + 48;
	// bl 0x822c9160
	ctx.lr = 0x822C3988;
	sub_822C9160(ctx, base);
	// addi r29,r31,52
	r29.s64 = r31.s64 + 52;
	// li r30,16
	r30.s64 = 16;
loc_822C3990:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822c9160
	ctx.lr = 0x822C3998;
	sub_822C9160(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// bne 0x822c3990
	if (!ctx.cr0.eq) goto loc_822C3990;
	// addi r3,r31,116
	ctx.r3.s64 = r31.s64 + 116;
	// bl 0x822c9188
	ctx.lr = 0x822C39AC;
	sub_822C9188(ctx, base);
	// addi r3,r31,132
	ctx.r3.s64 = r31.s64 + 132;
	// bl 0x822c9188
	ctx.lr = 0x822C39B4;
	sub_822C9188(ctx, base);
	// addi r3,r31,148
	ctx.r3.s64 = r31.s64 + 148;
	// bl 0x822c9188
	ctx.lr = 0x822C39BC;
	sub_822C9188(ctx, base);
	// addi r3,r31,164
	ctx.r3.s64 = r31.s64 + 164;
	// bl 0x822c9188
	ctx.lr = 0x822C39C4;
	sub_822C9188(ctx, base);
	// addi r3,r31,180
	ctx.r3.s64 = r31.s64 + 180;
	// bl 0x822c9160
	ctx.lr = 0x822C39CC;
	sub_822C9160(ctx, base);
	// addi r3,r31,184
	ctx.r3.s64 = r31.s64 + 184;
	// bl 0x822c9160
	ctx.lr = 0x822C39D4;
	sub_822C9160(ctx, base);
	// addi r3,r31,188
	ctx.r3.s64 = r31.s64 + 188;
	// bl 0x822c9160
	ctx.lr = 0x822C39DC;
	sub_822C9160(ctx, base);
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// bl 0x822c9160
	ctx.lr = 0x822C39E4;
	sub_822C9160(ctx, base);
	// addi r3,r31,196
	ctx.r3.s64 = r31.s64 + 196;
	// bl 0x822c9160
	ctx.lr = 0x822C39EC;
	sub_822C9160(ctx, base);
	// addi r3,r31,200
	ctx.r3.s64 = r31.s64 + 200;
	// bl 0x822c9160
	ctx.lr = 0x822C39F4;
	sub_822C9160(ctx, base);
	// addi r3,r31,204
	ctx.r3.s64 = r31.s64 + 204;
	// bl 0x822c9160
	ctx.lr = 0x822C39FC;
	sub_822C9160(ctx, base);
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// bl 0x822c9160
	ctx.lr = 0x822C3A04;
	sub_822C9160(ctx, base);
	// addi r3,r31,212
	ctx.r3.s64 = r31.s64 + 212;
	// bl 0x822c9160
	ctx.lr = 0x822C3A0C;
	sub_822C9160(ctx, base);
	// addi r3,r31,216
	ctx.r3.s64 = r31.s64 + 216;
	// bl 0x822c9160
	ctx.lr = 0x822C3A14;
	sub_822C9160(ctx, base);
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x822b8668
	ctx.lr = 0x822C3A28;
	sub_822B8668(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822c3a38
	if (ctx.cr0.eq) goto loc_822C3A38;
	// addi r3,r31,220
	ctx.r3.s64 = r31.s64 + 220;
	// bl 0x822c9160
	ctx.lr = 0x822C3A38;
	sub_822C9160(ctx, base);
loc_822C3A38:
	// li r6,5
	ctx.r6.s64 = 5;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x822b8668
	ctx.lr = 0x822C3A4C;
	sub_822B8668(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822c3a68
	if (ctx.cr0.eq) goto loc_822C3A68;
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// bl 0x822c9188
	ctx.lr = 0x822C3A5C;
	sub_822C9188(ctx, base);
	// addi r3,r31,240
	ctx.r3.s64 = r31.s64 + 240;
	// bl 0x822c9188
	ctx.lr = 0x822C3A64;
	sub_822C9188(ctx, base);
	// b 0x822c3a94
	goto loc_822C3A94;
loc_822C3A68:
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x822b8668
	ctx.lr = 0x822C3A7C;
	sub_822B8668(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822c3a94
	if (ctx.cr0.eq) goto loc_822C3A94;
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// bl 0x822c9188
	ctx.lr = 0x822C3A8C;
	sub_822C9188(ctx, base);
	// addi r3,r31,240
	ctx.r3.s64 = r31.s64 + 240;
	// bl 0x822c9160
	ctx.lr = 0x822C3A94;
	sub_822C9160(ctx, base);
loc_822C3A94:
	// li r6,6
	ctx.r6.s64 = 6;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x822b8668
	ctx.lr = 0x822C3AA8;
	sub_822B8668(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822c3ab8
	if (ctx.cr0.eq) goto loc_822C3AB8;
	// addi r3,r31,256
	ctx.r3.s64 = r31.s64 + 256;
	// bl 0x822c9160
	ctx.lr = 0x822C3AB8;
	sub_822C9160(ctx, base);
loc_822C3AB8:
	// li r6,8
	ctx.r6.s64 = 8;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x822b8668
	ctx.lr = 0x822C3ACC;
	sub_822B8668(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822c3b4c
	if (ctx.cr0.eq) goto loc_822C3B4C;
	// addi r30,r31,260
	r30.s64 = r31.s64 + 260;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c9160
	ctx.lr = 0x822C3AE0;
	sub_822C9160(ctx, base);
	// addi r3,r31,264
	ctx.r3.s64 = r31.s64 + 264;
	// bl 0x822c9160
	ctx.lr = 0x822C3AE8;
	sub_822C9160(ctx, base);
	// addi r27,r31,268
	r27.s64 = r31.s64 + 268;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822c9160
	ctx.lr = 0x822C3AF4;
	sub_822C9160(ctx, base);
	// lwz r11,264(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 264);
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// li r29,0
	r29.s64 = 0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// add r28,r11,r10
	r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 260);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822c3b4c
	if (!ctx.cr6.gt) goto loc_822C3B4C;
loc_822C3B14:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822c9160
	ctx.lr = 0x822C3B1C;
	sub_822C9160(ctx, base);
	// lwz r10,0(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// rotlwi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// divw r10,r10,r9
	ctx.r10.u64 = uint32_t((ctx.r9.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r10.s32 / ctx.r9.s32 : 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// twllei r9,0
	if (ctx.r9.s32 == 0 || ctx.r9.u32 < 0u) ppc_trap(ctx, base, 0);
	// andc r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ~ctx.r11.u64;
	// add r28,r10,r28
	r28.u64 = ctx.r10.u64 + r28.u64;
	// cmpw cr6,r29,r9
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r9.s32, ctx.xer);
	// twlgei r11,-1
	if (ctx.r11.s32 == -1 || ctx.r11.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// blt cr6,0x822c3b14
	if (ctx.cr6.lt) goto loc_822C3B14;
loc_822C3B4C:
	// li r6,9
	ctx.r6.s64 = 9;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x822b8668
	ctx.lr = 0x822C3B60;
	sub_822B8668(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822c3b90
	if (ctx.cr0.eq) goto loc_822C3B90;
	// addi r3,r31,272
	ctx.r3.s64 = r31.s64 + 272;
	// bl 0x822c9160
	ctx.lr = 0x822C3B70;
	sub_822C9160(ctx, base);
	// addi r3,r31,276
	ctx.r3.s64 = r31.s64 + 276;
	// bl 0x822c9160
	ctx.lr = 0x822C3B78;
	sub_822C9160(ctx, base);
	// addi r3,r31,280
	ctx.r3.s64 = r31.s64 + 280;
	// bl 0x822c9160
	ctx.lr = 0x822C3B80;
	sub_822C9160(ctx, base);
	// addi r3,r31,284
	ctx.r3.s64 = r31.s64 + 284;
	// bl 0x822c9160
	ctx.lr = 0x822C3B88;
	sub_822C9160(ctx, base);
	// addi r3,r31,288
	ctx.r3.s64 = r31.s64 + 288;
	// bl 0x822c9188
	ctx.lr = 0x822C3B90;
	sub_822C9188(ctx, base);
loc_822C3B90:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpw cr6,r25,r10
	ctx.cr6.compare<int32_t>(r25.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x822c392c
	if (ctx.cr6.lt) goto loc_822C392C;
loc_822C3BA8:
	// bl 0x822c9130
	ctx.lr = 0x822C3BAC;
	sub_822C9130(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r9,3
	ctx.r9.s64 = 3;
	// addi r8,r1,104
	ctx.r8.s64 = ctx.r1.s64 + 104;
	// addi r7,r1,256
	ctx.r7.s64 = ctx.r1.s64 + 256;
	// addi r6,r1,296
	ctx.r6.s64 = ctx.r1.s64 + 296;
	// stb r3,3(r11)
	REX_STORE_U8(ctx.r11.u32 + 3, ctx.r3.u8);
	// addi r5,r1,172
	ctx.r5.s64 = ctx.r1.s64 + 172;
	// stb r19,104(r1)
	REX_STORE_U8(ctx.r1.u32 + 104, r19.u8);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stb r18,105(r1)
	REX_STORE_U8(ctx.r1.u32 + 105, r18.u8);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// stb r23,106(r1)
	REX_STORE_U8(ctx.r1.u32 + 106, r23.u8);
	// bl 0x822b86d0
	ctx.lr = 0x822C3BE0;
	sub_822B86D0(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x822c36e0
	if (ctx.cr0.eq) goto loc_822C36E0;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// li r29,0
	r29.s64 = 0;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x822c3d24
	if (!ctx.cr6.gt) goto loc_822C3D24;
	// li r30,0
	r30.s64 = 0;
loc_822C3C00:
	// lwz r10,172(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// lbz r9,3(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// lwz r11,256(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// extsb r27,r9
	r27.s64 = ctx.r9.s8;
	// lwzx r10,r30,r10
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + ctx.r10.u32);
	// add r31,r10,r11
	r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x822c9130
	ctx.lr = 0x822C3C1C;
	sub_822C9130(ctx, base);
	// addic r11,r27,-1
	ctx.xer.ca = r27.u32 > 0;
	ctx.r11.s64 = r27.s64 + -1;
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// subfe r11,r11,r27
	temp.u8 = (~ctx.r11.u32 + r27.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + r27.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + r27.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x822c3d0c
	if (ctx.cr6.eq) goto loc_822C3D0C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c9160
	ctx.lr = 0x822C3C38;
	sub_822C9160(ctx, base);
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x822c9160
	ctx.lr = 0x822C3C40;
	sub_822C9160(ctx, base);
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// bl 0x822c9160
	ctx.lr = 0x822C3C48;
	sub_822C9160(ctx, base);
	// addi r3,r31,304
	ctx.r3.s64 = r31.s64 + 304;
	// bl 0x822c9160
	ctx.lr = 0x822C3C50;
	sub_822C9160(ctx, base);
	// addi r3,r31,308
	ctx.r3.s64 = r31.s64 + 308;
	// bl 0x822c9160
	ctx.lr = 0x822C3C58;
	sub_822C9160(ctx, base);
	// addi r3,r31,312
	ctx.r3.s64 = r31.s64 + 312;
	// bl 0x822c91e8
	ctx.lr = 0x822C3C60;
	sub_822C91E8(ctx, base);
	// addi r3,r31,320
	ctx.r3.s64 = r31.s64 + 320;
	// bl 0x822c91e8
	ctx.lr = 0x822C3C68;
	sub_822C91E8(ctx, base);
	// addi r3,r31,328
	ctx.r3.s64 = r31.s64 + 328;
	// bl 0x822c9160
	ctx.lr = 0x822C3C70;
	sub_822C9160(ctx, base);
	// addi r3,r31,332
	ctx.r3.s64 = r31.s64 + 332;
	// bl 0x822c9160
	ctx.lr = 0x822C3C78;
	sub_822C9160(ctx, base);
	// addi r3,r31,336
	ctx.r3.s64 = r31.s64 + 336;
	// bl 0x822c9160
	ctx.lr = 0x822C3C80;
	sub_822C9160(ctx, base);
	// addi r3,r31,340
	ctx.r3.s64 = r31.s64 + 340;
	// bl 0x822c9160
	ctx.lr = 0x822C3C88;
	sub_822C9160(ctx, base);
	// addi r3,r31,344
	ctx.r3.s64 = r31.s64 + 344;
	// bl 0x822c9160
	ctx.lr = 0x822C3C90;
	sub_822C9160(ctx, base);
	// addi r3,r31,348
	ctx.r3.s64 = r31.s64 + 348;
	// bl 0x822c9160
	ctx.lr = 0x822C3C98;
	sub_822C9160(ctx, base);
	// addi r3,r31,352
	ctx.r3.s64 = r31.s64 + 352;
	// bl 0x822c9160
	ctx.lr = 0x822C3CA0;
	sub_822C9160(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,88(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x822b8668
	ctx.lr = 0x822C3CB4;
	sub_822B8668(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822c3cc4
	if (ctx.cr0.eq) goto loc_822C3CC4;
	// addi r3,r31,356
	ctx.r3.s64 = r31.s64 + 356;
	// bl 0x822c9160
	ctx.lr = 0x822C3CC4;
	sub_822C9160(ctx, base);
loc_822C3CC4:
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,88(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x822b8668
	ctx.lr = 0x822C3CD8;
	sub_822B8668(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822c3ce8
	if (ctx.cr0.eq) goto loc_822C3CE8;
	// addi r3,r31,360
	ctx.r3.s64 = r31.s64 + 360;
	// bl 0x822c9160
	ctx.lr = 0x822C3CE8;
	sub_822C9160(ctx, base);
loc_822C3CE8:
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r3,88(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x822b8668
	ctx.lr = 0x822C3CFC;
	sub_822B8668(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822c3d0c
	if (ctx.cr0.eq) goto loc_822C3D0C;
	// addi r3,r31,364
	ctx.r3.s64 = r31.s64 + 364;
	// bl 0x822c9160
	ctx.lr = 0x822C3D0C;
	sub_822C9160(ctx, base);
loc_822C3D0C:
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x822c3c00
	if (ctx.cr6.lt) goto loc_822C3C00;
loc_822C3D24:
	// bl 0x822c9130
	ctx.lr = 0x822C3D28;
	sub_822C9130(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// li r22,66
	r22.s64 = 66;
	// li r24,76
	r24.s64 = 76;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// stb r3,3(r11)
	REX_STORE_U8(ctx.r11.u32 + 3, ctx.r3.u8);
	// addi r7,r1,212
	ctx.r7.s64 = ctx.r1.s64 + 212;
	// stb r19,112(r1)
	REX_STORE_U8(ctx.r1.u32 + 112, r19.u8);
	// addi r6,r1,280
	ctx.r6.s64 = ctx.r1.s64 + 280;
	// stb r22,113(r1)
	REX_STORE_U8(ctx.r1.u32 + 113, r22.u8);
	// addi r5,r1,244
	ctx.r5.s64 = ctx.r1.s64 + 244;
	// stb r24,114(r1)
	REX_STORE_U8(ctx.r1.u32 + 114, r24.u8);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822b86d0
	ctx.lr = 0x822C3D64;
	sub_822B86D0(ctx, base);
	// mr. r25,r3
	r25.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r25.s32, 0, ctx.xer);
	// beq 0x822c36e0
	if (ctx.cr0.eq) goto loc_822C36E0;
	// lwz r11,160(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// li r26,0
	r26.s64 = 0;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x822c3e6c
	if (!ctx.cr6.gt) goto loc_822C3E6C;
	// li r27,0
	r27.s64 = 0;
loc_822C3D84:
	// lwz r10,244(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// lbz r9,3(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// lwz r11,212(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// extsb r30,r9
	r30.s64 = ctx.r9.s8;
	// lwzx r10,r27,r10
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + ctx.r10.u32);
	// add r31,r10,r11
	r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x822c9130
	ctx.lr = 0x822C3DA0;
	sub_822C9130(ctx, base);
	// addic r11,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	ctx.r11.s64 = r30.s64 + -1;
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// subfe r11,r11,r30
	temp.u8 = (~ctx.r11.u32 + r30.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + r30.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + r30.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x822c3e54
	if (ctx.cr6.eq) goto loc_822C3E54;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c9160
	ctx.lr = 0x822C3DBC;
	sub_822C9160(ctx, base);
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x822c9160
	ctx.lr = 0x822C3DC4;
	sub_822C9160(ctx, base);
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// bl 0x822c9160
	ctx.lr = 0x822C3DCC;
	sub_822C9160(ctx, base);
	// addi r3,r31,44
	ctx.r3.s64 = r31.s64 + 44;
	// bl 0x822c9160
	ctx.lr = 0x822C3DD4;
	sub_822C9160(ctx, base);
	// addi r30,r31,48
	r30.s64 = r31.s64 + 48;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c9160
	ctx.lr = 0x822C3DE0;
	sub_822C9160(ctx, base);
	// addi r3,r31,52
	ctx.r3.s64 = r31.s64 + 52;
	// bl 0x822c9160
	ctx.lr = 0x822C3DE8;
	sub_822C9160(ctx, base);
	// addi r28,r31,56
	r28.s64 = r31.s64 + 56;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822c9160
	ctx.lr = 0x822C3DF4;
	sub_822C9160(ctx, base);
	// lwz r10,52(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r29,0
	r29.s64 = 0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 48);
	// add r31,r11,r31
	r31.u64 = ctx.r11.u64 + r31.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x822c3e54
	if (!ctx.cr6.gt) goto loc_822C3E54;
loc_822C3E14:
	// addi r3,r31,32
	ctx.r3.s64 = r31.s64 + 32;
	// bl 0x822c9160
	ctx.lr = 0x822C3E1C;
	sub_822C9160(ctx, base);
	// addi r3,r31,36
	ctx.r3.s64 = r31.s64 + 36;
	// bl 0x822c9160
	ctx.lr = 0x822C3E24;
	sub_822C9160(ctx, base);
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// rotlwi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// divw r10,r10,r9
	ctx.r10.u64 = uint32_t((ctx.r9.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r10.s32 / ctx.r9.s32 : 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// twllei r9,0
	if (ctx.r9.s32 == 0 || ctx.r9.u32 < 0u) ppc_trap(ctx, base, 0);
	// andc r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ~ctx.r11.u64;
	// add r31,r10,r31
	r31.u64 = ctx.r10.u64 + r31.u64;
	// cmpw cr6,r29,r9
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r9.s32, ctx.xer);
	// twlgei r11,-1
	if (ctx.r11.s32 == -1 || ctx.r11.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// blt cr6,0x822c3e14
	if (ctx.cr6.lt) goto loc_822C3E14;
loc_822C3E54:
	// lwz r11,160(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpw cr6,r26,r10
	ctx.cr6.compare<int32_t>(r26.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x822c3d84
	if (ctx.cr6.lt) goto loc_822C3D84;
loc_822C3E6C:
	// bl 0x822c9130
	ctx.lr = 0x822C3E70;
	sub_822C9130(ctx, base);
	// lwz r11,160(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// li r23,79
	r23.s64 = 79;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r8,r1,124
	ctx.r8.s64 = ctx.r1.s64 + 124;
	// addi r7,r1,220
	ctx.r7.s64 = ctx.r1.s64 + 220;
	// stb r3,3(r11)
	REX_STORE_U8(ctx.r11.u32 + 3, ctx.r3.u8);
	// addi r6,r1,312
	ctx.r6.s64 = ctx.r1.s64 + 312;
	// stb r19,124(r1)
	REX_STORE_U8(ctx.r1.u32 + 124, r19.u8);
	// addi r5,r1,236
	ctx.r5.s64 = ctx.r1.s64 + 236;
	// stb r24,125(r1)
	REX_STORE_U8(ctx.r1.u32 + 125, r24.u8);
	// addi r4,r1,164
	ctx.r4.s64 = ctx.r1.s64 + 164;
	// stb r23,126(r1)
	REX_STORE_U8(ctx.r1.u32 + 126, r23.u8);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x822b86d0
	ctx.lr = 0x822C3EA8;
	sub_822B86D0(ctx, base);
	// lwz r11,164(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// li r26,0
	r26.s64 = 0;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x822c3fac
	if (!ctx.cr6.gt) goto loc_822C3FAC;
	// li r27,0
	r27.s64 = 0;
loc_822C3EC4:
	// lwz r10,236(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// lbz r9,3(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// lwz r11,220(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// extsb r30,r9
	r30.s64 = ctx.r9.s8;
	// lwzx r10,r27,r10
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + ctx.r10.u32);
	// add r31,r10,r11
	r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x822c9130
	ctx.lr = 0x822C3EE0;
	sub_822C9130(ctx, base);
	// addic r11,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	ctx.r11.s64 = r30.s64 + -1;
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// subfe r11,r11,r30
	temp.u8 = (~ctx.r11.u32 + r30.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + r30.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + r30.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x822c3f94
	if (ctx.cr6.eq) goto loc_822C3F94;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c9160
	ctx.lr = 0x822C3EFC;
	sub_822C9160(ctx, base);
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x822c9160
	ctx.lr = 0x822C3F04;
	sub_822C9160(ctx, base);
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// bl 0x822c9160
	ctx.lr = 0x822C3F0C;
	sub_822C9160(ctx, base);
	// addi r3,r31,44
	ctx.r3.s64 = r31.s64 + 44;
	// bl 0x822c9160
	ctx.lr = 0x822C3F14;
	sub_822C9160(ctx, base);
	// addi r30,r31,48
	r30.s64 = r31.s64 + 48;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c9160
	ctx.lr = 0x822C3F20;
	sub_822C9160(ctx, base);
	// addi r3,r31,52
	ctx.r3.s64 = r31.s64 + 52;
	// bl 0x822c9160
	ctx.lr = 0x822C3F28;
	sub_822C9160(ctx, base);
	// addi r28,r31,56
	r28.s64 = r31.s64 + 56;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822c9160
	ctx.lr = 0x822C3F34;
	sub_822C9160(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lwz r9,48(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 48);
	// li r29,0
	r29.s64 = 0;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// add r11,r31,r11
	ctx.r11.u64 = r31.u64 + ctx.r11.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// add r31,r11,r10
	r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ble cr6,0x822c3f94
	if (!ctx.cr6.gt) goto loc_822C3F94;
loc_822C3F54:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c9160
	ctx.lr = 0x822C3F5C;
	sub_822C9160(ctx, base);
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x822c9160
	ctx.lr = 0x822C3F64;
	sub_822C9160(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// divw r11,r11,r9
	ctx.r11.u64 = uint32_t((ctx.r9.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r11.s32 / ctx.r9.s32 : 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// add r31,r11,r31
	r31.u64 = ctx.r11.u64 + r31.u64;
	// andc r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// twllei r9,0
	if (ctx.r9.s32 == 0 || ctx.r9.u32 < 0u) ppc_trap(ctx, base, 0);
	// cmpw cr6,r29,r9
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r9.s32, ctx.xer);
	// twlgei r11,-1
	if (ctx.r11.s32 == -1 || ctx.r11.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// blt cr6,0x822c3f54
	if (ctx.cr6.lt) goto loc_822C3F54;
loc_822C3F94:
	// lwz r11,164(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpw cr6,r26,r10
	ctx.cr6.compare<int32_t>(r26.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x822c3ec4
	if (ctx.cr6.lt) goto loc_822C3EC4;
loc_822C3FAC:
	// bl 0x822c9130
	ctx.lr = 0x822C3FB0;
	sub_822C9130(ctx, base);
	// lwz r11,164(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// li r10,85
	ctx.r10.s64 = 85;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r8,r1,108
	ctx.r8.s64 = ctx.r1.s64 + 108;
	// addi r7,r1,228
	ctx.r7.s64 = ctx.r1.s64 + 228;
	// stb r3,3(r11)
	REX_STORE_U8(ctx.r11.u32 + 3, ctx.r3.u8);
	// addi r6,r1,288
	ctx.r6.s64 = ctx.r1.s64 + 288;
	// stb r19,108(r1)
	REX_STORE_U8(ctx.r1.u32 + 108, r19.u8);
	// addi r5,r1,252
	ctx.r5.s64 = ctx.r1.s64 + 252;
	// stb r20,109(r1)
	REX_STORE_U8(ctx.r1.u32 + 109, r20.u8);
	// addi r4,r1,168
	ctx.r4.s64 = ctx.r1.s64 + 168;
	// stb r10,110(r1)
	REX_STORE_U8(ctx.r1.u32 + 110, ctx.r10.u8);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x822b86d0
	ctx.lr = 0x822C3FE8;
	sub_822B86D0(ctx, base);
	// mr. r21,r3
	r21.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r21.s32, 0, ctx.xer);
	// beq 0x822c36e0
	if (ctx.cr0.eq) goto loc_822C36E0;
	// lwz r11,168(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// li r28,0
	r28.s64 = 0;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x822c40d4
	if (!ctx.cr6.gt) goto loc_822C40D4;
	// li r29,0
	r29.s64 = 0;
loc_822C4008:
	// lwz r9,252(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// lbz r11,3(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// lwz r10,228(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// extsb r31,r11
	r31.s64 = ctx.r11.s8;
	// lwzx r11,r29,r9
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + ctx.r9.u32);
	// add r30,r11,r10
	r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x822c9130
	ctx.lr = 0x822C4024;
	sub_822C9130(ctx, base);
	// addic r11,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	ctx.r11.s64 = r31.s64 + -1;
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// subfe r11,r11,r31
	temp.u8 = (~ctx.r11.u32 + r31.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + r31.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + r31.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x822c40bc
	if (ctx.cr6.eq) goto loc_822C40BC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c9160
	ctx.lr = 0x822C4040;
	sub_822C9160(ctx, base);
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// bl 0x822c9160
	ctx.lr = 0x822C4048;
	sub_822C9160(ctx, base);
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// bl 0x822c9160
	ctx.lr = 0x822C4050;
	sub_822C9160(ctx, base);
	// addi r3,r30,44
	ctx.r3.s64 = r30.s64 + 44;
	// bl 0x822c9160
	ctx.lr = 0x822C4058;
	sub_822C9160(ctx, base);
	// li r31,0
	r31.s64 = 0;
loc_822C405C:
	// addi r11,r31,12
	ctx.r11.s64 = r31.s64 + 12;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + r30.u64;
	// bl 0x822c9160
	ctx.lr = 0x822C406C;
	sub_822C9160(ctx, base);
	// addi r11,r31,16
	ctx.r11.s64 = r31.s64 + 16;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + r30.u64;
	// bl 0x822c9160
	ctx.lr = 0x822C407C;
	sub_822C9160(ctx, base);
	// addi r11,r31,20
	ctx.r11.s64 = r31.s64 + 20;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + r30.u64;
	// bl 0x822c9160
	ctx.lr = 0x822C408C;
	sub_822C9160(ctx, base);
	// addi r11,r31,24
	ctx.r11.s64 = r31.s64 + 24;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + r30.u64;
	// bl 0x822c9160
	ctx.lr = 0x822C409C;
	sub_822C9160(ctx, base);
	// addi r11,r31,28
	ctx.r11.s64 = r31.s64 + 28;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + r30.u64;
	// bl 0x822c9160
	ctx.lr = 0x822C40AC;
	sub_822C9160(ctx, base);
	// addi r11,r31,1
	ctx.r11.s64 = r31.s64 + 1;
	// clrlwi r31,r11,24
	r31.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(r31.u32, 4, ctx.xer);
	// blt cr6,0x822c405c
	if (ctx.cr6.lt) goto loc_822C405C;
loc_822C40BC:
	// lwz r11,168(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpw cr6,r28,r10
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x822c4008
	if (ctx.cr6.lt) goto loc_822C4008;
loc_822C40D4:
	// bl 0x822c9130
	ctx.lr = 0x822C40D8;
	sub_822C9130(ctx, base);
	// lwz r11,168(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,2
	ctx.r4.s64 = 2;
	// stb r3,3(r11)
	REX_STORE_U8(ctx.r11.u32 + 3, ctx.r3.u8);
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x822b8668
	ctx.lr = 0x822C40F4;
	sub_822B8668(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r28,67
	r28.s64 = 67;
	// beq 0x822c41fc
	if (ctx.cr0.eq) goto loc_822C41FC;
	// stb r19,132(r1)
	REX_STORE_U8(ctx.r1.u32 + 132, r19.u8);
	// li r9,2
	ctx.r9.s64 = 2;
	// stb r28,133(r1)
	REX_STORE_U8(ctx.r1.u32 + 133, r28.u8);
	// addi r8,r1,132
	ctx.r8.s64 = ctx.r1.s64 + 132;
	// stb r23,134(r1)
	REX_STORE_U8(ctx.r1.u32 + 134, r23.u8);
	// addi r7,r1,208
	ctx.r7.s64 = ctx.r1.s64 + 208;
	// addi r6,r1,264
	ctx.r6.s64 = ctx.r1.s64 + 264;
	// addi r5,r1,204
	ctx.r5.s64 = ctx.r1.s64 + 204;
	// addi r4,r1,156
	ctx.r4.s64 = ctx.r1.s64 + 156;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x822b86d0
	ctx.lr = 0x822C412C;
	sub_822B86D0(ctx, base);
	// mr. r21,r3
	r21.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r21.s32, 0, ctx.xer);
	// beq 0x822c36e0
	if (ctx.cr0.eq) goto loc_822C36E0;
	// lwz r11,156(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// li r29,0
	r29.s64 = 0;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x822c41f0
	if (!ctx.cr6.gt) goto loc_822C41F0;
	// li r30,0
	r30.s64 = 0;
loc_822C414C:
	// lwz r9,204(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 204);
	// lbz r11,3(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// lwz r10,208(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// extsb r27,r11
	r27.s64 = ctx.r11.s8;
	// lwzx r11,r30,r9
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + ctx.r9.u32);
	// add r31,r11,r10
	r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x822c9130
	ctx.lr = 0x822C4168;
	sub_822C9130(ctx, base);
	// addic r11,r27,-1
	ctx.xer.ca = r27.u32 > 0;
	ctx.r11.s64 = r27.s64 + -1;
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// subfe r11,r11,r27
	temp.u8 = (~ctx.r11.u32 + r27.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + r27.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + r27.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x822c41d8
	if (ctx.cr6.eq) goto loc_822C41D8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c9160
	ctx.lr = 0x822C4184;
	sub_822C9160(ctx, base);
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x822c9160
	ctx.lr = 0x822C418C;
	sub_822C9160(ctx, base);
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// bl 0x822c9160
	ctx.lr = 0x822C4194;
	sub_822C9160(ctx, base);
	// addi r3,r31,44
	ctx.r3.s64 = r31.s64 + 44;
	// bl 0x822c9160
	ctx.lr = 0x822C419C;
	sub_822C9160(ctx, base);
	// addi r3,r31,48
	ctx.r3.s64 = r31.s64 + 48;
	// bl 0x822c9160
	ctx.lr = 0x822C41A4;
	sub_822C9160(ctx, base);
	// addi r3,r31,52
	ctx.r3.s64 = r31.s64 + 52;
	// bl 0x822c9188
	ctx.lr = 0x822C41AC;
	sub_822C9188(ctx, base);
	// addi r3,r31,68
	ctx.r3.s64 = r31.s64 + 68;
	// bl 0x822c9160
	ctx.lr = 0x822C41B4;
	sub_822C9160(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,156(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x822b8668
	ctx.lr = 0x822C41C8;
	sub_822B8668(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822c41d8
	if (ctx.cr0.eq) goto loc_822C41D8;
	// addi r3,r31,72
	ctx.r3.s64 = r31.s64 + 72;
	// bl 0x822c9160
	ctx.lr = 0x822C41D8;
	sub_822C9160(ctx, base);
loc_822C41D8:
	// lwz r11,156(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x822c414c
	if (ctx.cr6.lt) goto loc_822C414C;
loc_822C41F0:
	// bl 0x822c9130
	ctx.lr = 0x822C41F4;
	sub_822C9130(ctx, base);
	// lwz r11,156(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// stb r3,3(r11)
	REX_STORE_U8(ctx.r11.u32 + 3, ctx.r3.u8);
loc_822C41FC:
	// li r6,7
	ctx.r6.s64 = 7;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x822b8668
	ctx.lr = 0x822C4210;
	sub_822B8668(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822c4460
	if (ctx.cr0.eq) goto loc_822C4460;
	// stb r19,116(r1)
	REX_STORE_U8(ctx.r1.u32 + 116, r19.u8);
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r28,117(r1)
	REX_STORE_U8(ctx.r1.u32 + 117, r28.u8);
	// addi r8,r1,116
	ctx.r8.s64 = ctx.r1.s64 + 116;
	// stb r20,118(r1)
	REX_STORE_U8(ctx.r1.u32 + 118, r20.u8);
	// addi r7,r1,224
	ctx.r7.s64 = ctx.r1.s64 + 224;
	// addi r6,r1,268
	ctx.r6.s64 = ctx.r1.s64 + 268;
	// addi r5,r1,216
	ctx.r5.s64 = ctx.r1.s64 + 216;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x822b86d0
	ctx.lr = 0x822C4244;
	sub_822B86D0(ctx, base);
	// mr. r21,r3
	r21.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r21.s32, 0, ctx.xer);
	// beq 0x822c36e0
	if (ctx.cr0.eq) goto loc_822C36E0;
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// li r23,0
	r23.s64 = 0;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x822c4450
	if (!ctx.cr6.gt) goto loc_822C4450;
	// li r24,0
	r24.s64 = 0;
loc_822C4264:
	// lwz r9,216(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// lbz r11,3(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// lwz r10,224(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// extsb r30,r11
	r30.s64 = ctx.r11.s8;
	// lwzx r11,r24,r9
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + ctx.r9.u32);
	// add r31,r11,r10
	r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x822c9130
	ctx.lr = 0x822C4280;
	sub_822C9130(ctx, base);
	// addic r11,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	ctx.r11.s64 = r30.s64 + -1;
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// subfe r11,r11,r30
	temp.u8 = (~ctx.r11.u32 + r30.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + r30.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + r30.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x822c4438
	if (ctx.cr6.eq) goto loc_822C4438;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c9160
	ctx.lr = 0x822C429C;
	sub_822C9160(ctx, base);
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x822c9160
	ctx.lr = 0x822C42A4;
	sub_822C9160(ctx, base);
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// bl 0x822c9160
	ctx.lr = 0x822C42AC;
	sub_822C9160(ctx, base);
	// addi r30,r31,44
	r30.s64 = r31.s64 + 44;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c9160
	ctx.lr = 0x822C42B8;
	sub_822C9160(ctx, base);
	// addi r3,r31,48
	ctx.r3.s64 = r31.s64 + 48;
	// bl 0x822c9160
	ctx.lr = 0x822C42C0;
	sub_822C9160(ctx, base);
	// addi r3,r31,52
	ctx.r3.s64 = r31.s64 + 52;
	// bl 0x822c9160
	ctx.lr = 0x822C42C8;
	sub_822C9160(ctx, base);
	// addi r29,r31,56
	r29.s64 = r31.s64 + 56;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822c9160
	ctx.lr = 0x822C42D4;
	sub_822C9160(ctx, base);
	// addi r28,r31,60
	r28.s64 = r31.s64 + 60;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822c9160
	ctx.lr = 0x822C42E0;
	sub_822C9160(ctx, base);
	// addi r3,r31,64
	ctx.r3.s64 = r31.s64 + 64;
	// bl 0x822c9160
	ctx.lr = 0x822C42E8;
	sub_822C9160(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// li r26,0
	r26.s64 = 0;
	// add r27,r10,r31
	r27.u64 = ctx.r10.u64 + r31.u64;
	// add r11,r27,r11
	ctx.r11.u64 = r27.u64 + ctx.r11.u64;
	// lwz r10,44(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x822c4328
	if (!ctx.cr6.gt) goto loc_822C4328;
	// mr r25,r11
	r25.u64 = ctx.r11.u64;
loc_822C430C:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x822c91b8
	ctx.lr = 0x822C4314;
	sub_822C91B8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r25,r25,12
	r25.s64 = r25.s64 + 12;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822c430c
	if (ctx.cr6.lt) goto loc_822C430C;
loc_822C4328:
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r3,92(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822b8668
	ctx.lr = 0x822C433C;
	sub_822B8668(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822c43b4
	if (ctx.cr0.eq) goto loc_822C43B4;
	// addi r3,r31,100
	ctx.r3.s64 = r31.s64 + 100;
	// lwz r30,100(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 100);
	// bl 0x822c9160
	ctx.lr = 0x822C4350;
	sub_822C9160(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x822c43b4
	if (ctx.cr6.eq) goto loc_822C43B4;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// li r28,0
	r28.s64 = 0;
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// add r11,r27,r11
	ctx.r11.u64 = r27.u64 + ctx.r11.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x822c440c
	if (!ctx.cr6.gt) goto loc_822C440C;
	// addi r30,r11,20
	r30.s64 = ctx.r11.s64 + 20;
loc_822C4374:
	// addi r3,r30,-4
	ctx.r3.s64 = r30.s64 + -4;
	// bl 0x822c9160
	ctx.lr = 0x822C437C;
	sub_822C9160(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c9160
	ctx.lr = 0x822C4384;
	sub_822C9160(ctx, base);
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// bl 0x822c9160
	ctx.lr = 0x822C438C;
	sub_822C9160(ctx, base);
	// addi r3,r30,-20
	ctx.r3.s64 = r30.s64 + -20;
	// bl 0x822c91b8
	ctx.lr = 0x822C4394;
	sub_822C91B8(ctx, base);
	// addi r3,r30,-8
	ctx.r3.s64 = r30.s64 + -8;
	// bl 0x822c9160
	ctx.lr = 0x822C439C;
	sub_822C9160(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,32
	r30.s64 = r30.s64 + 32;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822c4374
	if (ctx.cr6.lt) goto loc_822C4374;
	// b 0x822c440c
	goto loc_822C440C;
loc_822C43B4:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// li r28,0
	r28.s64 = 0;
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// add r11,r27,r11
	ctx.r11.u64 = r27.u64 + ctx.r11.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x822c440c
	if (!ctx.cr6.gt) goto loc_822C440C;
	// addi r30,r11,18
	r30.s64 = ctx.r11.s64 + 18;
loc_822C43D0:
	// addi r3,r30,-2
	ctx.r3.s64 = r30.s64 + -2;
	// bl 0x822c9148
	ctx.lr = 0x822C43D8;
	sub_822C9148(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c9148
	ctx.lr = 0x822C43E0;
	sub_822C9148(ctx, base);
	// addi r3,r30,2
	ctx.r3.s64 = r30.s64 + 2;
	// bl 0x822c9148
	ctx.lr = 0x822C43E8;
	sub_822C9148(ctx, base);
	// addi r3,r30,-18
	ctx.r3.s64 = r30.s64 + -18;
	// bl 0x822c91b8
	ctx.lr = 0x822C43F0;
	sub_822C91B8(ctx, base);
	// addi r3,r30,-6
	ctx.r3.s64 = r30.s64 + -6;
	// bl 0x822c9160
	ctx.lr = 0x822C43F8;
	sub_822C9160(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,24
	r30.s64 = r30.s64 + 24;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822c43d0
	if (ctx.cr6.lt) goto loc_822C43D0;
loc_822C440C:
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,92(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822b8668
	ctx.lr = 0x822C4420;
	sub_822B8668(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822c4438
	if (ctx.cr0.eq) goto loc_822C4438;
	// addi r3,r31,68
	ctx.r3.s64 = r31.s64 + 68;
	// bl 0x822c9188
	ctx.lr = 0x822C4430;
	sub_822C9188(ctx, base);
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x822c9188
	ctx.lr = 0x822C4438;
	sub_822C9188(ctx, base);
loc_822C4438:
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// addi r24,r24,4
	r24.s64 = r24.s64 + 4;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpw cr6,r23,r10
	ctx.cr6.compare<int32_t>(r23.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x822c4264
	if (ctx.cr6.lt) goto loc_822C4264;
loc_822C4450:
	// bl 0x822c9130
	ctx.lr = 0x822C4454;
	sub_822C9130(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// stb r3,3(r11)
	REX_STORE_U8(ctx.r11.u32 + 3, ctx.r3.u8);
	// b 0x822c44b0
	goto loc_822C44B0;
loc_822C4460:
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x822b8668
	ctx.lr = 0x822C4474;
	sub_822B8668(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822c44b0
	if (ctx.cr0.eq) goto loc_822C44B0;
	// stb r19,140(r1)
	REX_STORE_U8(ctx.r1.u32 + 140, r19.u8);
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r22,141(r1)
	REX_STORE_U8(ctx.r1.u32 + 141, r22.u8);
	// addi r8,r1,140
	ctx.r8.s64 = ctx.r1.s64 + 140;
	// stb r18,142(r1)
	REX_STORE_U8(ctx.r1.u32 + 142, r18.u8);
	// addi r7,r1,276
	ctx.r7.s64 = ctx.r1.s64 + 276;
	// addi r6,r1,284
	ctx.r6.s64 = ctx.r1.s64 + 284;
	// addi r5,r1,292
	ctx.r5.s64 = ctx.r1.s64 + 292;
	// addi r4,r1,300
	ctx.r4.s64 = ctx.r1.s64 + 300;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x822b86d0
	ctx.lr = 0x822C44A8;
	sub_822B86D0(ctx, base);
	// mr. r21,r3
	r21.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r21.s32, 0, ctx.xer);
	// beq 0x822c36e0
	if (ctx.cr0.eq) goto loc_822C36E0;
loc_822C44B0:
	// li r6,12
	ctx.r6.s64 = 12;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x822b8668
	ctx.lr = 0x822C44C4;
	sub_822B8668(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822c4690
	if (ctx.cr0.eq) goto loc_822C4690;
	// stb r19,136(r1)
	REX_STORE_U8(ctx.r1.u32 + 136, r19.u8);
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r22,137(r1)
	REX_STORE_U8(ctx.r1.u32 + 137, r22.u8);
	// addi r8,r1,136
	ctx.r8.s64 = ctx.r1.s64 + 136;
	// stb r18,138(r1)
	REX_STORE_U8(ctx.r1.u32 + 138, r18.u8);
	// addi r7,r1,180
	ctx.r7.s64 = ctx.r1.s64 + 180;
	// addi r6,r1,308
	ctx.r6.s64 = ctx.r1.s64 + 308;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x822b86d0
	ctx.lr = 0x822C44F8;
	sub_822B86D0(ctx, base);
	// mr. r21,r3
	r21.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r21.s32, 0, ctx.xer);
	// beq 0x822c36e0
	if (ctx.cr0.eq) goto loc_822C36E0;
	// lwz r11,152(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// lbz r11,3(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// extsb r31,r11
	r31.s64 = ctx.r11.s8;
	// bl 0x822c9130
	ctx.lr = 0x822C4510;
	sub_822C9130(ctx, base);
	// addic r11,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	ctx.r11.s64 = r31.s64 + -1;
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// subfe r11,r11,r31
	temp.u8 = (~ctx.r11.u32 + r31.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + r31.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + r31.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x822c4684
	if (ctx.cr6.eq) goto loc_822C4684;
	// lwz r11,152(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// li r22,0
	r22.s64 = 0;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822c4684
	if (!ctx.cr6.gt) goto loc_822C4684;
	// li r23,0
	r23.s64 = 0;
loc_822C453C:
	// lwz r11,176(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r10,180(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// lwzx r11,r23,r11
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + ctx.r11.u32);
	// add r31,r11,r10
	r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c9160
	ctx.lr = 0x822C4554;
	sub_822C9160(ctx, base);
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x822c9160
	ctx.lr = 0x822C455C;
	sub_822C9160(ctx, base);
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// bl 0x822c9160
	ctx.lr = 0x822C4564;
	sub_822C9160(ctx, base);
	// addi r30,r31,44
	r30.s64 = r31.s64 + 44;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c9160
	ctx.lr = 0x822C4570;
	sub_822C9160(ctx, base);
	// addi r3,r31,48
	ctx.r3.s64 = r31.s64 + 48;
	// bl 0x822c9160
	ctx.lr = 0x822C4578;
	sub_822C9160(ctx, base);
	// addi r3,r31,52
	ctx.r3.s64 = r31.s64 + 52;
	// bl 0x822c9160
	ctx.lr = 0x822C4580;
	sub_822C9160(ctx, base);
	// addi r29,r31,56
	r29.s64 = r31.s64 + 56;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822c9160
	ctx.lr = 0x822C458C;
	sub_822C9160(ctx, base);
	// addi r28,r31,60
	r28.s64 = r31.s64 + 60;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822c9160
	ctx.lr = 0x822C4598;
	sub_822C9160(ctx, base);
	// addi r3,r31,64
	ctx.r3.s64 = r31.s64 + 64;
	// bl 0x822c9160
	ctx.lr = 0x822C45A0;
	sub_822C9160(ctx, base);
	// addi r27,r31,68
	r27.s64 = r31.s64 + 68;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822c9160
	ctx.lr = 0x822C45AC;
	sub_822C9160(ctx, base);
	// addi r25,r31,72
	r25.s64 = r31.s64 + 72;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x822c9160
	ctx.lr = 0x822C45B8;
	sub_822C9160(ctx, base);
	// addi r3,r31,76
	ctx.r3.s64 = r31.s64 + 76;
	// bl 0x822c9160
	ctx.lr = 0x822C45C0;
	sub_822C9160(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// li r26,0
	r26.s64 = 0;
	// lwz r9,44(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 44);
	// add r31,r31,r10
	r31.u64 = r31.u64 + ctx.r10.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x822c4600
	if (!ctx.cr6.gt) goto loc_822C4600;
	// mr r24,r11
	r24.u64 = ctx.r11.u64;
loc_822C45E4:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x822c9160
	ctx.lr = 0x822C45EC;
	sub_822C9160(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r24,r24,4
	r24.s64 = r24.s64 + 4;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822c45e4
	if (ctx.cr6.lt) goto loc_822C45E4;
loc_822C4600:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// add r11,r31,r11
	ctx.r11.u64 = r31.u64 + ctx.r11.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x822c4638
	if (!ctx.cr6.gt) goto loc_822C4638;
	// addi r28,r11,32
	r28.s64 = ctx.r11.s64 + 32;
loc_822C461C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822c9160
	ctx.lr = 0x822C4624;
	sub_822C9160(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r28,r28,36
	r28.s64 = r28.s64 + 36;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822c461c
	if (ctx.cr6.lt) goto loc_822C461C;
loc_822C4638:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// lwz r10,0(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 0);
	// add r31,r31,r11
	r31.u64 = r31.u64 + ctx.r11.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x822c466c
	if (!ctx.cr6.gt) goto loc_822C466C;
loc_822C4650:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c9160
	ctx.lr = 0x822C4658;
	sub_822C9160(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822c4650
	if (ctx.cr6.lt) goto loc_822C4650;
loc_822C466C:
	// lwz r11,152(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// addi r23,r23,4
	r23.s64 = r23.s64 + 4;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpw cr6,r22,r11
	ctx.cr6.compare<int32_t>(r22.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822c453c
	if (ctx.cr6.lt) goto loc_822C453C;
loc_822C4684:
	// bl 0x822c9130
	ctx.lr = 0x822C4688;
	sub_822C9130(ctx, base);
	// lwz r11,152(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// stb r3,3(r11)
	REX_STORE_U8(ctx.r11.u32 + 3, ctx.r3.u8);
loc_822C4690:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x822b8668
	ctx.lr = 0x822C46A4;
	sub_822B8668(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822c4778
	if (ctx.cr0.eq) goto loc_822C4778;
	// li r11,73
	ctx.r11.s64 = 73;
	// stb r19,96(r1)
	REX_STORE_U8(ctx.r1.u32 + 96, r19.u8);
	// li r10,75
	ctx.r10.s64 = 75;
	// stb r11,97(r1)
	REX_STORE_U8(ctx.r1.u32 + 97, ctx.r11.u8);
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r10,98(r1)
	REX_STORE_U8(ctx.r1.u32 + 98, ctx.r10.u8);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,196
	ctx.r7.s64 = ctx.r1.s64 + 196;
	// addi r6,r1,316
	ctx.r6.s64 = ctx.r1.s64 + 316;
	// addi r5,r1,188
	ctx.r5.s64 = ctx.r1.s64 + 188;
	// addi r4,r1,148
	ctx.r4.s64 = ctx.r1.s64 + 148;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x822b86d0
	ctx.lr = 0x822C46E0;
	sub_822B86D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822c36e0
	if (ctx.cr0.eq) goto loc_822C36E0;
	// lwz r11,148(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lbz r11,3(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// extsb r31,r11
	r31.s64 = ctx.r11.s8;
	// bl 0x822c9130
	ctx.lr = 0x822C46F8;
	sub_822C9130(ctx, base);
	// addic r11,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	ctx.r11.s64 = r31.s64 + -1;
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// subfe r11,r11,r31
	temp.u8 = (~ctx.r11.u32 + r31.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + r31.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + r31.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x822c476c
	if (ctx.cr6.eq) goto loc_822C476C;
	// lwz r11,148(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// li r29,0
	r29.s64 = 0;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822c476c
	if (!ctx.cr6.gt) goto loc_822C476C;
	// li r30,0
	r30.s64 = 0;
loc_822C4724:
	// lwz r11,188(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r10,196(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// lwzx r11,r30,r11
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// add r31,r11,r10
	r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r31,44
	ctx.r3.s64 = r31.s64 + 44;
	// bl 0x822c9160
	ctx.lr = 0x822C473C;
	sub_822C9160(ctx, base);
	// addi r3,r31,48
	ctx.r3.s64 = r31.s64 + 48;
	// bl 0x822c9160
	ctx.lr = 0x822C4744;
	sub_822C9160(ctx, base);
	// addi r3,r31,52
	ctx.r3.s64 = r31.s64 + 52;
	// bl 0x822c9160
	ctx.lr = 0x822C474C;
	sub_822C9160(ctx, base);
	// addi r3,r31,56
	ctx.r3.s64 = r31.s64 + 56;
	// bl 0x822c9188
	ctx.lr = 0x822C4754;
	sub_822C9188(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822c4724
	if (ctx.cr6.lt) goto loc_822C4724;
loc_822C476C:
	// bl 0x822c9130
	ctx.lr = 0x822C4770;
	sub_822C9130(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// stb r3,3(r11)
	REX_STORE_U8(ctx.r11.u32 + 3, ctx.r3.u8);
loc_822C4778:
	// li r3,1
	ctx.r3.s64 = 1;
loc_822C477C:
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x822d4eac
	return;
}

DEFINE_REX_FUNC(sub_822F5E00) {
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
	// lwz r10,252(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 252);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F5E2C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,31
	ctx.r9.u64 = ctx.r3.u32 & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x822f5e68
	if (!ctx.cr6.eq) goto loc_822F5E68;
	// lwz r3,44(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 44);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,76(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F5E54;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// ble cr6,0x822f5e68
	if (!ctx.cr6.gt) goto loc_822F5E68;
	// addi r3,r11,-5
	ctx.r3.s64 = ctx.r11.s64 + -5;
	// bl 0x823cd320
	ctx.lr = 0x822F5E68;
	sub_823CD320(ctx, base);
loc_822F5E68:
	// lwz r3,44(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 44);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,88(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F5E7C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,240(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 240);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822f5e98
	if (ctx.cr6.eq) goto loc_822F5E98;
	// lwz r3,272(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 272);
	// bl 0x823cde90
	ctx.lr = 0x822F5E90;
	sub_823CDE90(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,240(r31)
	REX_STORE_U32(r31.u32 + 240, ctx.r11.u32);
loc_822F5E98:
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

DEFINE_REX_FUNC(sub_822F9320) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x822F9328;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// extsb r30,r11
	r30.s64 = ctx.r11.s8;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x822f9384
	if (ctx.cr6.eq) goto loc_822F9384;
loc_822F9344:
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f9384
	if (ctx.cr6.eq) goto loc_822F9384;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x822d8d60
	ctx.lr = 0x822F935C;
	sub_822D8D60(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822d8d60
	ctx.lr = 0x822F9368;
	sub_822D8D60(ctx, base);
	// cmpw cr6,r3,r28
	ctx.cr6.compare<int32_t>(ctx.r3.s32, r28.s32, ctx.xer);
	// bne cr6,0x822f9384
	if (!ctx.cr6.eq) goto loc_822F9384;
	// lbzu r11,1(r29)
	ea = 1 + r29.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	r29.u32 = ea;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// extsb r30,r11
	r30.s64 = ctx.r11.s8;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne cr6,0x822f9344
	if (!ctx.cr6.eq) goto loc_822F9344;
loc_822F9384:
	// lbz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 0);
	// extsb r30,r11
	r30.s64 = ctx.r11.s8;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne cr6,0x822f93ac
	if (!ctx.cr6.eq) goto loc_822F93AC;
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822f93ac
	if (!ctx.cr6.eq) goto loc_822F93AC;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
loc_822F93AC:
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x822d8d60
	ctx.lr = 0x822F93B8;
	sub_822D8D60(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822d8d60
	ctx.lr = 0x822F93C4;
	sub_822D8D60(ctx, base);
	// cmpw cr6,r3,r31
	ctx.cr6.compare<int32_t>(ctx.r3.s32, r31.s32, ctx.xer);
	// li r3,-1
	ctx.r3.s64 = -1;
	// blt cr6,0x822f93d4
	if (ctx.cr6.lt) goto loc_822F93D4;
	// li r3,1
	ctx.r3.s64 = 1;
loc_822F93D4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_822FBE00) {
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
	ctx.lr = 0x822FBE08;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bne cr6,0x822fbe2c
	if (!ctx.cr6.eq) goto loc_822FBE2C;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec8
	return;
loc_822FBE2C:
	// addi r24,r4,-24
	r24.s64 = ctx.r4.s64 + -24;
	// cmplwi cr6,r24,80
	ctx.cr6.compare<uint32_t>(r24.u32, 80, ctx.xer);
	// bge cr6,0x822fbe44
	if (!ctx.cr6.lt) goto loc_822FBE44;
loc_822FBE38:
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec8
	return;
loc_822FBE44:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ld r4,0(r25)
	ctx.r4.u64 = REX_LOAD_U64(r25.u32 + 0);
	// li r5,80
	ctx.r5.s64 = 80;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x822ec1e8
	ctx.lr = 0x822FBE58;
	sub_822EC1E8(ctx, base);
	// cmplwi cr6,r3,80
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 80, ctx.xer);
	// bne cr6,0x822fbe38
	if (!ctx.cr6.eq) goto loc_822FBE38;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lbz r9,2(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r5,7(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 7);
	// lbz r4,6(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r7,1(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,5(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r3,3(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// rotlwi r10,r3,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r3.u32, 8);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// rotlwi r5,r5,8
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r5.u32, 8);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// add r4,r10,r7
	ctx.r4.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// rlwinm r10,r4,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// rlwinm r7,r5,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// add r27,r10,r8
	r27.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r3,r7,r6
	ctx.r3.u64 = ctx.r7.u64 + ctx.r6.u64;
	// lbz r8,7(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 7);
	// lbz r28,2(r11)
	r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// rlwinm r10,r3,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r30,6(r11)
	r30.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// add r26,r10,r9
	r26.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r31,1(r11)
	r31.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,5(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r10,3(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// rotlwi r29,r10,8
	r29.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rotlwi r3,r8,8
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// add r9,r29,r28
	ctx.r9.u64 = r29.u64 + r28.u64;
	// add r30,r3,r30
	r30.u64 = ctx.r3.u64 + r30.u64;
	// rlwinm r3,r9,8,0,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r7,2(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r8,1(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// add r29,r3,r31
	r29.u64 = ctx.r3.u64 + r31.u64;
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r3,3(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// rotlwi r10,r3,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r3.u32, 8);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r7,r30,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// add r4,r10,r8
	ctx.r4.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwinm r8,r7,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r7,r29,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 8) & 0xFFFFFF00;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// rlwinm r10,r4,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// add r4,r7,r5
	ctx.r4.u64 = ctx.r7.u64 + ctx.r5.u64;
	// lbz r7,2(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// add r3,r8,r6
	ctx.r3.u64 = ctx.r8.u64 + ctx.r6.u64;
	// lbz r8,1(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// add r31,r10,r9
	r31.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r10,3(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r10,r7,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// add r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r6,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r5,3(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r8,2(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// add r30,r10,r9
	r30.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r9,1(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r10,r5,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r5.u32, 8);
	// lbz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r8,3(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// rlwinm r10,r9,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r6,2(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// rotlwi r7,r8,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// lbz r8,1(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// rlwinm r11,r7,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r11,r6,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822fc054
	if (!ctx.cr6.eq) goto loc_822FC054;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// bne cr6,0x822fbfec
	if (!ctx.cr6.eq) goto loc_822FBFEC;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x822fc054
	if (ctx.cr6.eq) goto loc_822FC054;
loc_822FBFEC:
	// clrldi r10,r3,32
	ctx.r10.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// stw r11,20(r25)
	REX_STORE_U32(r25.u32 + 20, ctx.r11.u32);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// ld r9,0(r25)
	ctx.r9.u64 = REX_LOAD_U64(r25.u32 + 0);
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// li r7,10000
	ctx.r7.s64 = 10000;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfd f0,-25256(r8)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r8.u32 + -25256);
	// clrldi r11,r24,32
	ctx.r11.u64 = r24.u64 & 0xFFFFFFFF;
	// stw r27,28(r25)
	REX_STORE_U32(r25.u32 + 28, r27.u32);
	// divwu r10,r4,r7
	ctx.r10.u64 = uint32_t(ctx.r7.u32 ? ctx.r4.u32 / ctx.r7.u32 : 0);
	// stw r31,36(r25)
	REX_STORE_U32(r25.u32 + 36, r31.u32);
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r30,56(r25)
	REX_STORE_U32(r25.u32 + 56, r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// std r6,0(r25)
	REX_STORE_U64(r25.u32 + 0, ctx.r6.u64);
	// fmul f11,f12,f0
	ctx.f11.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fctidz f10,f11
	ctx.f10.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r5,32(r25)
	REX_STORE_U32(r25.u32 + 32, ctx.r5.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec8
	return;
loc_822FC054:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_8230C558) {
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
	ctx.lr = 0x8230C560;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r28,28(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r10,0(r5)
	REX_STORE_U16(ctx.r5.u32 + 0, ctx.r10.u16);
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// sth r11,0(r6)
	REX_STORE_U16(ctx.r6.u32 + 0, ctx.r11.u16);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// lwz r9,4(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 4);
	// lwz r3,124(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 124);
	// bl 0x822f9900
	ctx.lr = 0x8230C5A4;
	sub_822F9900(ctx, base);
	// lis r8,-32688
	ctx.r8.s64 = -2142240768;
	// ori r31,r8,22
	r31.u64 = ctx.r8.u64 | 22;
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r31.u32, ctx.xer);
	// bne cr6,0x8230c5c0
	if (!ctx.cr6.eq) goto loc_8230C5C0;
loc_8230C5B4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
loc_8230C5C0:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// stw r10,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 4);
	// lwz r3,128(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 128);
	// bl 0x822f9900
	ctx.lr = 0x8230C5E0;
	sub_822F9900(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r31.u32, ctx.xer);
	// beq cr6,0x8230c5b4
	if (ctx.cr6.eq) goto loc_8230C5B4;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lhz r10,84(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 84);
	// sth r10,0(r27)
	REX_STORE_U16(r27.u32 + 0, ctx.r10.u16);
	// lhz r9,86(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 86);
	// sth r9,0(r26)
	REX_STORE_U16(r26.u32 + 0, ctx.r9.u16);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_8230DB00) {
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
	ctx.lr = 0x8230DB08;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r23,0
	r23.s64 = 0;
	// lwz r30,28(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r23,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r23.u32);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// stw r23,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r23.u32);
	// stw r23,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r23.u32);
	// li r27,2
	r27.s64 = 2;
	// stw r23,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r23.u32);
	// li r26,3
	r26.s64 = 3;
	// addi r29,r11,-24976
	r29.s64 = ctx.r11.s64 + -24976;
loc_8230DB3C:
	// lwz r11,80(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 80);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x8230dce0
	if (ctx.cr6.gt) goto loc_8230DCE0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8230db5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8230DB5C;
	// bdzf 4*cr6+eq,0x8230db88
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8230DB88;
	// bne cr6,0x8230dbd8
	if (!ctx.cr6.eq) goto loc_8230DBD8;
loc_8230DB5C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8230d8a8
	ctx.lr = 0x8230DB64;
	sub_8230D8A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230e0a0
	if (ctx.cr6.lt) goto loc_8230E0A0;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r27,80(r30)
	REX_STORE_U32(r30.u32 + 80, r27.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r11,50
	ctx.r10.s64 = ctx.r11.s64 + 50;
	// clrldi r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// std r9,16(r30)
	REX_STORE_U64(r30.u32 + 16, ctx.r9.u64);
	// b 0x8230dcf0
	goto loc_8230DCF0;
loc_8230DB88:
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8230da20
	ctx.lr = 0x8230DB98;
	sub_8230DA20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230e0a0
	if (ctx.cr6.lt) goto loc_8230E0A0;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// ld r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// addi r9,r30,84
	ctx.r9.s64 = r30.s64 + 84;
	// stw r26,80(r30)
	REX_STORE_U32(r30.u32 + 80, r26.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,8(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r5,12(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// std r10,104(r30)
	REX_STORE_U64(r30.u32 + 104, ctx.r10.u64);
	// stw r8,84(r30)
	REX_STORE_U32(r30.u32 + 84, ctx.r8.u32);
	// stw r7,88(r30)
	REX_STORE_U32(r30.u32 + 88, ctx.r7.u32);
	// stw r6,92(r30)
	REX_STORE_U32(r30.u32 + 92, ctx.r6.u32);
	// stw r5,96(r30)
	REX_STORE_U32(r30.u32 + 96, ctx.r5.u32);
	// b 0x8230dcf0
	goto loc_8230DCF0;
loc_8230DBD8:
	// lwz r11,84(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 84);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lwz r9,88(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 88);
	// addi r8,r30,84
	ctx.r8.s64 = r30.s64 + 84;
	// lwz r6,92(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 92);
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// lwz r5,96(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 96);
	// ld r4,104(r30)
	ctx.r4.u64 = REX_LOAD_U64(r30.u32 + 104);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// rotlwi r4,r4,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// stw r6,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r6.u32);
	// stw r23,112(r30)
	REX_STORE_U32(r30.u32 + 112, r23.u32);
	// stw r5,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r5.u32);
loc_8230DC10:
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r6,r29
	ctx.r11.u64 = ctx.r6.u64 + r29.u64;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
loc_8230DC28:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r5,0(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r5,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r5.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8230dc48
	if (!ctx.cr0.eq) goto loc_8230DC48;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8230dc28
	if (!ctx.cr6.eq) goto loc_8230DC28;
loc_8230DC48:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8230dc68
	if (ctx.cr6.eq) goto loc_8230DC68;
	// addi r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,15
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 15, ctx.xer);
	// blt cr6,0x8230dc10
	if (ctx.cr6.lt) goto loc_8230DC10;
	// b 0x8230dc74
	goto loc_8230DC74;
loc_8230DC68:
	// addi r11,r29,16
	ctx.r11.s64 = r29.s64 + 16;
	// lwzx r10,r6,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// stw r10,112(r30)
	REX_STORE_U32(r30.u32 + 112, ctx.r10.u32);
loc_8230DC74:
	// lwz r11,112(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230dca0
	if (ctx.cr6.eq) goto loc_8230DCA0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8230DC8C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230e0a0
	if (ctx.cr6.lt) goto loc_8230E0A0;
	// stw r27,80(r30)
	REX_STORE_U32(r30.u32 + 80, r27.u32);
	// stw r23,112(r30)
	REX_STORE_U32(r30.u32 + 112, r23.u32);
	// b 0x8230dcf0
	goto loc_8230DCF0;
loc_8230DCA0:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r31,r4,-24
	r31.s64 = ctx.r4.s64 + -24;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8230DCBC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230e0a0
	if (ctx.cr6.lt) goto loc_8230E0A0;
	// ld r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U64(r30.u32 + 8);
	// clrldi r10,r31,32
	ctx.r10.u64 = r31.u64 & 0xFFFFFFFF;
	// stw r27,80(r30)
	REX_STORE_U32(r30.u32 + 80, r27.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r23,112(r30)
	REX_STORE_U32(r30.u32 + 112, r23.u32);
	// std r11,8(r30)
	REX_STORE_U64(r30.u32 + 8, ctx.r11.u64);
	// b 0x8230dcf0
	goto loc_8230DCF0;
loc_8230DCE0:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8230dcf0
	if (ctx.cr6.eq) goto loc_8230DCF0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8230dd04
	if (!ctx.cr6.eq) goto loc_8230DD04;
loc_8230DCF0:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// ld r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U64(r30.u32 + 8);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpld cr6,r10,r9
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r9.u64, ctx.xer);
	// blt cr6,0x8230db3c
	if (ctx.cr6.lt) goto loc_8230DB3C;
loc_8230DD04:
	// ld r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U64(r30.u32 + 16);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// std r10,32(r30)
	REX_STORE_U64(r30.u32 + 32, ctx.r10.u64);
	// std r10,40(r30)
	REX_STORE_U64(r30.u32 + 40, ctx.r10.u64);
	// std r10,24(r30)
	REX_STORE_U64(r30.u32 + 24, ctx.r10.u64);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8230dd3c
	if (ctx.cr6.eq) goto loc_8230DD3C;
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r7,r9,-1
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// mulld r9,r7,r8
	ctx.r9.s64 = static_cast<int64_t>(ctx.r7.u64 * ctx.r8.u64);
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// std r6,24(r30)
	REX_STORE_U64(r30.u32 + 24, ctx.r6.u64);
loc_8230DD3C:
	// lwz r9,32(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8230dd60
	if (ctx.cr6.eq) goto loc_8230DD60;
	// li r9,-1
	ctx.r9.s64 = -1;
	// std r9,24(r30)
	REX_STORE_U64(r30.u32 + 24, ctx.r9.u64);
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// subfic r7,r8,-1
	ctx.xer.ca = ctx.r8.u32 <= 4294967295;
	ctx.r7.u64 = static_cast<uint64_t>(-1) - ctx.r8.u64;
	// std r7,24(r30)
	REX_STORE_U64(r30.u32 + 24, ctx.r7.u64);
loc_8230DD60:
	// ld r9,8(r30)
	ctx.r9.u64 = REX_LOAD_U64(r30.u32 + 8);
	// addi r8,r10,-50
	ctx.r8.s64 = ctx.r10.s64 + -50;
	// cmpld cr6,r9,r8
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r8.u64, ctx.xer);
	// bne cr6,0x8230e0b4
	if (!ctx.cr6.eq) goto loc_8230E0B4;
	// lhz r10,42(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 42);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x8230e0b4
	if (!ctx.cr6.eq) goto loc_8230E0B4;
	// lhz r10,66(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 66);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x8230e0b4
	if (!ctx.cr6.eq) goto loc_8230E0B4;
	// lhz r10,44(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 44);
	// lhz r9,36(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 36);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8230e0b4
	if (!ctx.cr6.eq) goto loc_8230E0B4;
	// li r31,1
	r31.s64 = 1;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r31,72(r30)
	REX_STORE_U32(r30.u32 + 72, r31.u32);
	// lis r9,-32688
	ctx.r9.s64 = -2142240768;
	// stw r10,80(r30)
	REX_STORE_U32(r30.u32 + 80, ctx.r10.u32);
	// ori r25,r9,22
	r25.u64 = ctx.r9.u64 | 22;
	// lhz r8,72(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 72);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x8230df20
	if (!ctx.cr6.gt) goto loc_8230DF20;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,148(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 148);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x822f9928
	ctx.lr = 0x8230DDD4;
	sub_822F9928(ctx, base);
	// cmplw cr6,r3,r25
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r25.u32, ctx.xer);
	// beq cr6,0x8230df04
	if (ctx.cr6.eq) goto loc_8230DF04;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230e0a0
	if (ctx.cr6.lt) goto loc_8230E0A0;
loc_8230DDE4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230e0a0
	if (ctx.cr6.lt) goto loc_8230E0A0;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,80(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8230dee8
	if (ctx.cr6.eq) goto loc_8230DEE8;
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8230dee8
	if (!ctx.cr6.eq) goto loc_8230DEE8;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// lwz r3,124(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// bl 0x822f9928
	ctx.lr = 0x8230DE20;
	sub_822F9928(ctx, base);
	// cmplw cr6,r3,r25
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r25.u32, ctx.xer);
	// beq cr6,0x8230dec8
	if (ctx.cr6.eq) goto loc_8230DEC8;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230e0a0
	if (ctx.cr6.lt) goto loc_8230E0A0;
loc_8230DE30:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230e0a0
	if (ctx.cr6.lt) goto loc_8230E0A0;
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,88(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// srawi r7,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 5;
	// rlwinm r11,r8,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x7FFFFFF;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// addi r5,r11,21
	ctx.r5.s64 = ctx.r11.s64 + 21;
	// rlwinm r4,r6,5,0,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r3,r5,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r11,r4,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r4.u64;
	// slw r8,r31,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (r31.u32 << (ctx.r11.u8 & 0x3F));
	// lwzx r7,r3,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	// and r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 & ctx.r8.u64;
	// cmplw cr6,r6,r8
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8230de98
	if (ctx.cr6.eq) goto loc_8230DE98;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r4,92(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r3,124(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// bl 0x822f9990
	ctx.lr = 0x8230DE8C;
	sub_822F9990(ctx, base);
	// cmplw cr6,r3,r25
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r25.u32, ctx.xer);
	// bne cr6,0x8230de30
	if (!ctx.cr6.eq) goto loc_8230DE30;
	// b 0x8230dec8
	goto loc_8230DEC8;
loc_8230DE98:
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,48(r9)
	REX_STORE_U32(ctx.r9.u32 + 48, ctx.r11.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r8,24(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
	// stw r8,64(r10)
	REX_STORE_U32(ctx.r10.u32 + 64, ctx.r8.u32);
	// lwz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// ld r6,16(r7)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r7.u32 + 16);
	// lwz r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// std r6,56(r5)
	REX_STORE_U64(ctx.r5.u32 + 56, ctx.r6.u64);
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r31,68(r4)
	REX_STORE_U32(ctx.r4.u32 + 68, r31.u32);
loc_8230DEC8:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r4,92(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r3,124(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// bl 0x822f99f8
	ctx.lr = 0x8230DED8;
	sub_822F99F8(ctx, base);
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r9,68(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 68);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8230e0a8
	if (ctx.cr6.eq) goto loc_8230E0A8;
loc_8230DEE8:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,148(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 148);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r4,96(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x822f9990
	ctx.lr = 0x8230DEFC;
	sub_822F9990(ctx, base);
	// cmplw cr6,r3,r25
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r25.u32, ctx.xer);
	// bne cr6,0x8230dde4
	if (!ctx.cr6.eq) goto loc_8230DDE4;
loc_8230DF04:
	// lwz r4,96(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r3,148(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 148);
	// bl 0x822f99f8
	ctx.lr = 0x8230DF10;
	sub_822F99F8(ctx, base);
	// subf r11,r25,r3
	ctx.r11.u64 = ctx.r3.u64 - r25.u64;
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 & ctx.r3.u64;
loc_8230DF20:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r10,96(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8230e0a0
	if (ctx.cr6.eq) goto loc_8230E0A0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,124(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// bl 0x822f9928
	ctx.lr = 0x8230DF44;
	sub_822F9928(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r3,r25
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r25.u32, ctx.xer);
	// lwz r10,96(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// lwz r26,4(r10)
	r26.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lhz r24,0(r10)
	r24.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// beq cr6,0x8230e080
	if (ctx.cr6.eq) goto loc_8230E080;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230e0a0
	if (ctx.cr6.lt) goto loc_8230E0A0;
loc_8230DF64:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230e0a0
	if (ctx.cr6.lt) goto loc_8230E0A0;
	// clrlwi r27,r24,16
	r27.u64 = r24.u32 & 0xFFFF;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// ble cr6,0x8230e060
	if (!ctx.cr6.gt) goto loc_8230E060;
	// mr r28,r23
	r28.u64 = r23.u64;
loc_8230DF7C:
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// add r9,r28,r11
	ctx.r9.u64 = r28.u64 + ctx.r11.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r11,r26
	r29.u64 = ctx.r11.u64 + r26.u64;
	// lhz r11,2(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 2);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8230dfa4
	if (ctx.cr6.eq) goto loc_8230DFA4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8230e04c
	if (!ctx.cr6.eq) goto loc_8230E04C;
loc_8230DFA4:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r6,r11,28
	ctx.r6.s64 = ctx.r11.s64 + 28;
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8230e024
	if (!ctx.cr6.eq) goto loc_8230E024;
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r3,224(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 224);
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x822f9490
	ctx.lr = 0x8230DFC8;
	sub_822F9490(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230e0a0
	if (ctx.cr6.lt) goto loc_8230E0A0;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r31,r27,2,0,29
	r31.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// stw r23,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r23.u32);
	// stw r23,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, r23.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,224(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 224);
	// lwz r11,28(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 28);
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// bl 0x822f9490
	ctx.lr = 0x8230E000;
	sub_822F9490(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230e0a0
	if (ctx.cr6.lt) goto loc_8230E0A0;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r3,4(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x822d5870
	ctx.lr = 0x8230E020;
	sub_822D5870(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_8230E024:
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rotlwi r8,r10,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// stwx r29,r8,r9
	REX_STORE_U32(ctx.r8.u32 + ctx.r9.u32, r29.u32);
	// lwz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r6,28(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 28);
	// lhz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r6.u32 + 0);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// sth r5,0(r6)
	REX_STORE_U16(ctx.r6.u32 + 0, ctx.r5.u16);
loc_8230E04C:
	// addi r11,r28,1
	ctx.r11.s64 = r28.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
	// cmpw cr6,r10,r27
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r27.s32, ctx.xer);
	// blt cr6,0x8230df7c
	if (ctx.cr6.lt) goto loc_8230DF7C;
loc_8230E060:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r4,92(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r3,124(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// bl 0x822f9990
	ctx.lr = 0x8230E078;
	sub_822F9990(ctx, base);
	// cmplw cr6,r3,r25
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r25.u32, ctx.xer);
	// bne cr6,0x8230df64
	if (!ctx.cr6.eq) goto loc_8230DF64;
loc_8230E080:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r4,92(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r3,124(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// bl 0x822f99f8
	ctx.lr = 0x8230E090;
	sub_822F99F8(ctx, base);
	// subf r10,r25,r3
	ctx.r10.u64 = ctx.r3.u64 - r25.u64;
	// subfic r9,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r7,r3
	ctx.r3.u64 = ctx.r7.u64 & ctx.r3.u64;
loc_8230E0A0:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822d4ec4
	return;
loc_8230E0A8:
	// lwz r4,96(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r3,148(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 148);
	// bl 0x822f99f8
	ctx.lr = 0x8230E0B4;
	sub_822F99F8(ctx, base);
loc_8230E0B4:
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,12
	ctx.r3.u64 = ctx.r3.u64 | 12;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822d4ec4
	return;
}

DEFINE_REX_FUNC(sub_82328470) {
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
	ctx.lr = 0x82328478;
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
	// ble 0x823284ec
	if (!ctx.cr0.gt) goto loc_823284EC;
	// lwz r9,0(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82328540
	if (!ctx.cr6.gt) goto loc_82328540;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
loc_823284B0:
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
	// blt cr6,0x823284b0
	if (ctx.cr6.lt) goto loc_823284B0;
	// b 0x82328540
	goto loc_82328540;
loc_823284EC:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82328540
	if (!ctx.cr6.lt) goto loc_82328540;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82328540
	if (!ctx.cr6.gt) goto loc_82328540;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
loc_82328508:
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
	// blt cr6,0x82328508
	if (ctx.cr6.lt) goto loc_82328508;
loc_82328540:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82328584
	if (!ctx.cr6.eq) goto loc_82328584;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r5,r29
	ctx.r3.u64 = ctx.r5.u64 + r29.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x82328560;
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
	ctx.lr = 0x82328574;
	sub_822D4FA0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// stw r9,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r9.u32);
	// b 0x8232858c
	goto loc_8232858C;
loc_82328584:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
loc_8232858C:
	// lwz r11,720(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 720);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x823285a8
	if (!ctx.cr6.gt) goto loc_823285A8;
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r9,r29
	REX_STORE_U32(ctx.r9.u32 + r29.u32, ctx.r11.u32);
	// b 0x823285d0
	goto loc_823285D0;
loc_823285A8:
	// lwz r11,724(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 724);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x823285c4
	if (!ctx.cr6.lt) goto loc_823285C4;
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r9,r29
	REX_STORE_U32(ctx.r9.u32 + r29.u32, ctx.r11.u32);
	// b 0x823285d0
	goto loc_823285D0;
loc_823285C4:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r28,r10,r29
	REX_STORE_U32(ctx.r10.u32 + r29.u32, r28.u32);
loc_823285D0:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// ble cr6,0x823285e0
	if (!ctx.cr6.gt) goto loc_823285E0;
	// lhz r10,30(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 30);
	// b 0x82328604
	goto loc_82328604;
loc_823285E0:
	// bge cr6,0x82328600
	if (!ctx.cr6.lt) goto loc_82328600;
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
	// b 0x82328610
	goto loc_82328610;
loc_82328600:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82328604:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r10,r9,r30
	REX_STORE_U16(ctx.r9.u32 + r30.u32, ctx.r10.u16);
loc_82328610:
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

DEFINE_REX_FUNC(sub_82332DF0) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82332e18
	if (!ctx.cr6.eq) goto loc_82332E18;
	// li r3,-3
	ctx.r3.s64 = -3;
	// b 0x82332eb8
	goto loc_82332EB8;
loc_82332E18:
	// lwz r30,24688(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 24688);
	// lwz r11,712(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 712);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82332e30
	if (ctx.cr6.eq) goto loc_82332E30;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82332eb8
	goto loc_82332EB8;
loc_82332E30:
	// lwz r11,22036(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22036);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82332e58
	if (!ctx.cr6.eq) goto loc_82332E58;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// li r10,-7
	ctx.r10.s64 = -7;
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 & ctx.r10.u64;
	// b 0x82332eb8
	goto loc_82332EB8;
loc_82332E58:
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r10,22032(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 22032);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// ori r8,r11,45384
	ctx.r8.u64 = ctx.r11.u64 | 45384;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r9,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r5,92
	ctx.r5.s64 = 92;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwzx r7,r31,r8
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + ctx.r8.u32);
	// stw r7,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// bl 0x822d4fa0
	ctx.lr = 0x82332E88;
	sub_822D4FA0(ctx, base);
	// lwz r6,21888(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 21888);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,22056(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 22056);
	// lwz r4,22060(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 22060);
	// addic r11,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r11.s64 = ctx.r6.s64 + -1;
	// subfe r10,r11,r6
	temp.u8 = (~ctx.r11.u32 + ctx.r6.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r5,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// stw r4,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r4.u32);
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// lwz r9,192(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 192);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82332EB8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82332EB8:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
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

DEFINE_REX_FUNC(sub_8233AA80) {
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
	ctx.lr = 0x8233AA88;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,15
	ctx.r11.s64 = ctx.r4.s64 + 15;
	// addi r10,r5,15
	ctx.r10.s64 = ctx.r5.s64 + 15;
	// rlwinm r9,r11,0,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// lwz r11,24688(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24688);
	// rlwinm r8,r10,0,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// srawi r21,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	r21.s64 = ctx.r9.s32 >> 4;
	// stw r9,180(r3)
	REX_STORE_U32(ctx.r3.u32 + 180, ctx.r9.u32);
	// srawi r20,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	r20.s64 = ctx.r8.s32 >> 4;
	// stw r8,188(r3)
	REX_STORE_U32(ctx.r3.u32 + 188, ctx.r8.u32);
	// stw r21,136(r3)
	REX_STORE_U32(ctx.r3.u32 + 136, r21.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r20,140(r3)
	REX_STORE_U32(ctx.r3.u32 + 140, r20.u32);
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// mullw r22,r20,r21
	r22.s64 = int64_t(r20.s32) * int64_t(r21.s32);
	// addi r29,r11,8
	r29.s64 = ctx.r11.s64 + 8;
	// bl 0x823657e0
	ctx.lr = 0x8233AAD0;
	sub_823657E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233b338
	if (!ctx.cr6.eq) goto loc_8233B338;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// lis r8,-32161
	ctx.r8.s64 = -2107703296;
	// ori r7,r11,45252
	ctx.r7.u64 = ctx.r11.u64 | 45252;
	// li r11,32
	ctx.r11.s64 = 32;
	// li r10,16
	ctx.r10.s64 = 16;
	// lis r6,0
	ctx.r6.s64 = 0;
	// stw r11,5308(r9)
	REX_STORE_U32(ctx.r9.u32 + 5308, ctx.r11.u32);
	// lis r5,0
	ctx.r5.s64 = 0;
	// stw r10,5304(r8)
	REX_STORE_U32(ctx.r8.u32 + 5304, ctx.r10.u32);
	// lwzx r4,r31,r7
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + ctx.r7.u32);
	// ori r27,r6,45244
	r27.u64 = ctx.r6.u64 | 45244;
	// ori r28,r5,45248
	r28.u64 = ctx.r5.u64 | 45248;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8233ab20
	if (ctx.cr6.eq) goto loc_8233AB20;
	// stwx r25,r31,r27
	REX_STORE_U32(r31.u32 + r27.u32, r25.u32);
	// stwx r23,r31,r28
	REX_STORE_U32(r31.u32 + r28.u32, r23.u32);
	// b 0x8233ab3c
	goto loc_8233AB3C;
loc_8233AB20:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8233a300
	ctx.lr = 0x8233AB34;
	sub_8233A300(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233b338
	if (!ctx.cr6.eq) goto loc_8233B338;
loc_8233AB3C:
	// addis r26,r31,1
	r26.s64 = r31.s64 + 65536;
	// lwz r11,24688(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24688);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r26,r26,-20060
	r26.s64 = r26.s64 + -20060;
	// li r24,0
	r24.s64 = 0;
	// addi r30,r10,15387
	r30.s64 = ctx.r10.s64 + 15387;
	// stw r24,0(r26)
	REX_STORE_U32(r26.u32 + 0, r24.u32);
	// lwz r10,712(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 712);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8233ac20
	if (ctx.cr6.eq) goto loc_8233AC20;
	// lwz r11,18464(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 18464);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233ac20
	if (ctx.cr6.eq) goto loc_8233AC20;
	// lwzx r11,r31,r27
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + r27.u32);
	// addis r19,r31,1
	r19.s64 = r31.s64 + 65536;
	// lwzx r10,r31,r28
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + r28.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r11,r11,15
	ctx.r11.s64 = ctx.r11.s64 + 15;
	// addi r10,r10,15
	ctx.r10.s64 = ctx.r10.s64 + 15;
	// srawi r9,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addze r27,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	r27.s64 = temp.s64;
	// srawi r8,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 4;
	// addi r19,r19,-20080
	r19.s64 = r19.s64 + -20080;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// mullw r28,r7,r27
	r28.s64 = int64_t(ctx.r7.s32) * int64_t(r27.s32);
	// rlwinm r4,r28,5,0,26
	ctx.r4.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 5) & 0xFFFFFFE0;
	// bl 0x8233feb8
	ctx.lr = 0x8233ABAC;
	sub_8233FEB8(ctx, base);
	// stw r3,0(r19)
	REX_STORE_U32(r19.u32 + 0, ctx.r3.u32);
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// add r6,r28,r11
	ctx.r6.u64 = r28.u64 + ctx.r11.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// rlwinm r11,r6,9,0,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 9) & 0xFFFFFE00;
	// addi r4,r11,127
	ctx.r4.s64 = ctx.r11.s64 + 127;
	// bl 0x8233ff60
	ctx.lr = 0x8233ABCC;
	sub_8233FF60(ctx, base);
	// addis r28,r31,1
	r28.s64 = r31.s64 + 65536;
	// addi r4,r3,127
	ctx.r4.s64 = ctx.r3.s64 + 127;
	// stw r3,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r3.u32);
	// addi r28,r28,-20076
	r28.s64 = r28.s64 + -20076;
	// rlwinm r3,r4,0,0,24
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFF80;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mulli r4,r27,216
	ctx.r4.s64 = static_cast<int64_t>(r27.u64 * static_cast<uint64_t>(216));
	// stw r3,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8233feb8
	ctx.lr = 0x8233ABF4;
	sub_8233FEB8(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r10,0(r19)
	ctx.r10.u64 = REX_LOAD_U32(r19.u32 + 0);
	// ori r9,r11,45480
	ctx.r9.u64 = ctx.r11.u64 | 45480;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stwx r3,r31,r9
	REX_STORE_U32(r31.u32 + ctx.r9.u32, ctx.r3.u32);
	// beq cr6,0x8233ae00
	if (ctx.cr6.eq) goto loc_8233AE00;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233ae00
	if (ctx.cr6.eq) goto loc_8233AE00;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233ae00
	if (ctx.cr6.eq) goto loc_8233AE00;
loc_8233AC20:
	// addi r26,r20,2
	r26.s64 = r20.s64 + 2;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// rlwinm r28,r26,2,0,29
	r28.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8233feb8
	ctx.lr = 0x8233AC38;
	sub_8233FEB8(ctx, base);
	// stw r3,21944(r31)
	REX_STORE_U32(r31.u32 + 21944, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233ae00
	if (ctx.cr6.eq) goto loc_8233AE00;
	// stw r24,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r24.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8233feb8
	ctx.lr = 0x8233AC58;
	sub_8233FEB8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,21972(r31)
	REX_STORE_U32(r31.u32 + 21972, ctx.r3.u32);
	// beq cr6,0x8233ae00
	if (ctx.cr6.eq) goto loc_8233AE00;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822d5870
	ctx.lr = 0x8233AC70;
	sub_822D5870(ctx, base);
	// lwz r11,21972(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 21972);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,21968(r31)
	REX_STORE_U32(r31.u32 + 21968, ctx.r11.u32);
	// bl 0x8233feb8
	ctx.lr = 0x8233AC88;
	sub_8233FEB8(ctx, base);
	// stw r3,21956(r31)
	REX_STORE_U32(r31.u32 + 21956, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233ae00
	if (ctx.cr6.eq) goto loc_8233AE00;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822d5870
	ctx.lr = 0x8233ACA0;
	sub_822D5870(ctx, base);
	// lwz r11,15536(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15536);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x8233ad3c
	if (!ctx.cr6.eq) goto loc_8233AD3C;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// rlwinm r4,r21,9,0,22
	ctx.r4.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 9) & 0xFFFFFE00;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8233ff60
	ctx.lr = 0x8233ACBC;
	sub_8233FF60(ctx, base);
	// stw r3,20696(r31)
	REX_STORE_U32(r31.u32 + 20696, ctx.r3.u32);
	// rlwinm r28,r21,7,0,24
	r28.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 7) & 0xFFFFFF80;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8233ff60
	ctx.lr = 0x8233ACD4;
	sub_8233FF60(ctx, base);
	// stw r3,20700(r31)
	REX_STORE_U32(r31.u32 + 20700, ctx.r3.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8233ff60
	ctx.lr = 0x8233ACE8;
	sub_8233FF60(ctx, base);
	// lwz r4,22344(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 22344);
	// stw r3,20704(r31)
	REX_STORE_U32(r31.u32 + 20704, ctx.r3.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8233ad04
	if (ctx.cr6.eq) goto loc_8233AD04;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8233ff78
	ctx.lr = 0x8233AD00;
	sub_8233FF78(ctx, base);
	// stw r24,22344(r31)
	REX_STORE_U32(r31.u32 + 22344, r24.u32);
loc_8233AD04:
	// addi r11,r20,1
	ctx.r11.s64 = r20.s64 + 1;
	// addi r10,r21,1
	ctx.r10.s64 = r21.s64 + 1;
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// srawi r8,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 1;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mullw r4,r9,r8
	ctx.r4.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8233feb8
	ctx.lr = 0x8233AD24;
	sub_8233FEB8(ctx, base);
	// stw r3,22344(r31)
	REX_STORE_U32(r31.u32 + 22344, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8233ad3c
	if (!ctx.cr6.eq) goto loc_8233AD3C;
	// li r3,-3
	ctx.r3.s64 = -3;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4eb4
	return;
loc_8233AD3C:
	// lwz r11,4012(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4012);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233b00c
	if (ctx.cr6.eq) goto loc_8233B00C;
	// lwz r11,3392(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3392);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// li r11,1536
	ctx.r11.s64 = 1536;
	// beq cr6,0x8233ad5c
	if (ctx.cr6.eq) goto loc_8233AD5C;
	// li r11,640
	ctx.r11.s64 = 640;
loc_8233AD5C:
	// mullw r11,r11,r21
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r21.s32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8233ff60
	ctx.lr = 0x8233AD74;
	sub_8233FF60(ctx, base);
	// stw r3,3012(r31)
	REX_STORE_U32(r31.u32 + 3012, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233ae00
	if (ctx.cr6.eq) goto loc_8233AE00;
	// lwz r11,3980(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3980);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// stw r24,464(r31)
	REX_STORE_U32(r31.u32 + 464, r24.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233ada0
	if (ctx.cr6.eq) goto loc_8233ADA0;
	// mulli r4,r22,224
	ctx.r4.s64 = static_cast<int64_t>(r22.u64 * static_cast<uint64_t>(224));
	// b 0x8233adac
	goto loc_8233ADAC;
loc_8233ADA0:
	// rlwinm r11,r22,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r22,r11
	ctx.r11.u64 = r22.u64 + ctx.r11.u64;
	// rlwinm r4,r11,6,0,25
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
loc_8233ADAC:
	// bl 0x8233ff60
	ctx.lr = 0x8233ADB0;
	sub_8233FF60(ctx, base);
	// rotlwi r11,r3,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// stw r3,464(r31)
	REX_STORE_U32(r31.u32 + 464, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233ae00
	if (ctx.cr6.eq) goto loc_8233AE00;
	// lwz r11,24688(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24688);
	// lwz r10,712(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 712);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8233addc
	if (ctx.cr6.eq) goto loc_8233ADDC;
	// lwz r10,17376(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 17376);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8233ae0c
	if (!ctx.cr6.eq) goto loc_8233AE0C;
loc_8233ADDC:
	// rlwinm r11,r22,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// add r11,r22,r11
	ctx.r11.u64 = r22.u64 + ctx.r11.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// rlwinm r4,r11,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x8233ff60
	ctx.lr = 0x8233ADF4;
	sub_8233FF60(ctx, base);
	// stw r3,3084(r31)
	REX_STORE_U32(r31.u32 + 3084, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8233ae18
	if (!ctx.cr6.eq) goto loc_8233AE18;
loc_8233AE00:
	// li r3,-9
	ctx.r3.s64 = -9;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4eb4
	return;
loc_8233AE0C:
	// lwz r11,17376(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 17376);
	// lwz r10,3084(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 3084);
	// stw r10,3084(r31)
	REX_STORE_U32(r31.u32 + 3084, ctx.r10.u32);
loc_8233AE18:
	// lwz r11,3392(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3392);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// rlwinm r10,r11,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// rlwinm r4,r9,5,0,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// bl 0x8233feb8
	ctx.lr = 0x8233AE38;
	sub_8233FEB8(ctx, base);
	// stw r3,15304(r31)
	REX_STORE_U32(r31.u32 + 15304, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233ae00
	if (ctx.cr6.eq) goto loc_8233AE00;
	// rlwinm r11,r25,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r24,15248(r31)
	REX_STORE_U32(r31.u32 + 15248, r24.u32);
	// addi r10,r23,72
	ctx.r10.s64 = r23.s64 + 72;
	// add r9,r25,r11
	ctx.r9.u64 = r25.u64 + ctx.r11.u64;
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r4,r11,160
	ctx.r4.s64 = ctx.r11.s64 + 160;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8233ae6c
	if (!ctx.cr6.lt) goto loc_8233AE6C;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
loc_8233AE6C:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8233ff60
	ctx.lr = 0x8233AE78;
	sub_8233FF60(ctx, base);
	// stw r3,15248(r31)
	REX_STORE_U32(r31.u32 + 15248, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233ae00
	if (ctx.cr6.eq) goto loc_8233AE00;
	// addi r11,r3,31
	ctx.r11.s64 = ctx.r3.s64 + 31;
	// lwz r10,3980(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 3980);
	// lwz r3,464(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 464);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r9,r11,0,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,15252(r31)
	REX_STORE_U32(r31.u32 + 15252, ctx.r9.u32);
	// beq cr6,0x8233aeac
	if (ctx.cr6.eq) goto loc_8233AEAC;
	// mulli r5,r22,224
	ctx.r5.s64 = static_cast<int64_t>(r22.u64 * static_cast<uint64_t>(224));
	// b 0x8233aeb8
	goto loc_8233AEB8;
loc_8233AEAC:
	// rlwinm r11,r22,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r22,r11
	ctx.r11.u64 = r22.u64 + ctx.r11.u64;
	// rlwinm r5,r11,6,0,25
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
loc_8233AEB8:
	// bl 0x822d5870
	ctx.lr = 0x8233AEBC;
	sub_822D5870(ctx, base);
	// lwz r11,24688(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24688);
	// lwz r10,712(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 712);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8233af84
	if (ctx.cr6.eq) goto loc_8233AF84;
	// lwz r10,17376(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 17376);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8233af28
	if (!ctx.cr6.eq) goto loc_8233AF28;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// rlwinm r4,r22,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8233ff60
	ctx.lr = 0x8233AEE8;
	sub_8233FF60(ctx, base);
	// stw r3,15272(r31)
	REX_STORE_U32(r31.u32 + 15272, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233ae00
	if (ctx.cr6.eq) goto loc_8233AE00;
	// mullw r11,r26,r21
	ctx.r11.s64 = int64_t(r26.s32) * int64_t(r21.s32);
	// rlwinm r28,r11,4,0,27
	r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8233ff60
	ctx.lr = 0x8233AF0C;
	sub_8233FF60(ctx, base);
	// stw r3,15332(r31)
	REX_STORE_U32(r31.u32 + 15332, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233ae00
	if (ctx.cr6.eq) goto loc_8233AE00;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822d5870
	ctx.lr = 0x8233AF24;
	sub_822D5870(ctx, base);
	// b 0x8233af3c
	goto loc_8233AF3C;
loc_8233AF28:
	// lwz r11,17376(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 17376);
	// lwz r10,15272(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 15272);
	// stw r10,15272(r31)
	REX_STORE_U32(r31.u32 + 15272, ctx.r10.u32);
	// lwz r9,15332(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 15332);
	// stw r9,15332(r31)
	REX_STORE_U32(r31.u32 + 15332, ctx.r9.u32);
loc_8233AF3C:
	// rlwinm r28,r22,4,0,27
	r28.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8233ff60
	ctx.lr = 0x8233AF50;
	sub_8233FF60(ctx, base);
	// stw r3,15340(r31)
	REX_STORE_U32(r31.u32 + 15340, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233ae00
	if (ctx.cr6.eq) goto loc_8233AE00;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8233ff60
	ctx.lr = 0x8233AF6C;
	sub_8233FF60(ctx, base);
	// stw r3,15348(r31)
	REX_STORE_U32(r31.u32 + 15348, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8233b00c
	if (!ctx.cr6.eq) goto loc_8233B00C;
	// li r3,-9
	ctx.r3.s64 = -9;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4eb4
	return;
loc_8233AF84:
	// rlwinm r27,r22,4,0,27
	r27.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8233ff60
	ctx.lr = 0x8233AF98;
	sub_8233FF60(ctx, base);
	// stw r3,15272(r31)
	REX_STORE_U32(r31.u32 + 15272, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233ae00
	if (ctx.cr6.eq) goto loc_8233AE00;
	// mullw r11,r26,r21
	ctx.r11.s64 = int64_t(r26.s32) * int64_t(r21.s32);
	// rlwinm r28,r11,4,0,27
	r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8233ff60
	ctx.lr = 0x8233AFBC;
	sub_8233FF60(ctx, base);
	// stw r3,15332(r31)
	REX_STORE_U32(r31.u32 + 15332, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233ae00
	if (ctx.cr6.eq) goto loc_8233AE00;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822d5870
	ctx.lr = 0x8233AFD4;
	sub_822D5870(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8233ff60
	ctx.lr = 0x8233AFE4;
	sub_8233FF60(ctx, base);
	// stw r3,15340(r31)
	REX_STORE_U32(r31.u32 + 15340, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233ae00
	if (ctx.cr6.eq) goto loc_8233AE00;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8233ff60
	ctx.lr = 0x8233B000;
	sub_8233FF60(ctx, base);
	// stw r3,15348(r31)
	REX_STORE_U32(r31.u32 + 15348, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233ae00
	if (ctx.cr6.eq) goto loc_8233AE00;
loc_8233B00C:
	// add r28,r22,r21
	r28.u64 = r22.u64 + r21.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// add r11,r28,r11
	ctx.r11.u64 = r28.u64 + ctx.r11.u64;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x8233ff60
	ctx.lr = 0x8233B028;
	sub_8233FF60(ctx, base);
	// stw r3,3972(r31)
	REX_STORE_U32(r31.u32 + 3972, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233ae00
	if (ctx.cr6.eq) goto loc_8233AE00;
	// stw r3,3976(r31)
	REX_STORE_U32(r31.u32 + 3976, ctx.r3.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// rlwinm r4,r28,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8233ff60
	ctx.lr = 0x8233B048;
	sub_8233FF60(ctx, base);
	// stw r3,22284(r31)
	REX_STORE_U32(r31.u32 + 22284, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233ae00
	if (ctx.cr6.eq) goto loc_8233AE00;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// rlwinm r4,r21,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8233ff60
	ctx.lr = 0x8233B064;
	sub_8233FF60(ctx, base);
	// stw r3,268(r31)
	REX_STORE_U32(r31.u32 + 268, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233ae00
	if (ctx.cr6.eq) goto loc_8233AE00;
	// lwz r11,14852(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 14852);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233b098
	if (ctx.cr6.eq) goto loc_8233B098;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// rlwinm r4,r21,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8233ff60
	ctx.lr = 0x8233B08C;
	sub_8233FF60(ctx, base);
	// stw r3,14872(r31)
	REX_STORE_U32(r31.u32 + 14872, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233ae00
	if (ctx.cr6.eq) goto loc_8233AE00;
loc_8233B098:
	// addi r26,r20,1
	r26.s64 = r20.s64 + 1;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// srawi r11,r26,1
	ctx.xer.ca = (r26.s32 < 0) & ((r26.u32 & 0x1) != 0);
	ctx.r11.s64 = r26.s32 >> 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mullw r28,r11,r21
	r28.s64 = int64_t(ctx.r11.s32) * int64_t(r21.s32);
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r28,r11
	ctx.r10.u64 = r28.u64 + ctx.r11.u64;
	// rlwinm r27,r10,9,0,22
	r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0xFFFFFE00;
	// addi r4,r27,256
	ctx.r4.s64 = r27.s64 + 256;
	// bl 0x8233ff60
	ctx.lr = 0x8233B0C0;
	sub_8233FF60(ctx, base);
	// stw r3,22272(r31)
	REX_STORE_U32(r31.u32 + 22272, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233ae00
	if (ctx.cr6.eq) goto loc_8233AE00;
	// addi r11,r3,127
	ctx.r11.s64 = ctx.r3.s64 + 127;
	// rlwinm r10,r28,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// add r9,r28,r10
	ctx.r9.u64 = r28.u64 + ctx.r10.u64;
	// add r10,r11,r27
	ctx.r10.u64 = ctx.r11.u64 + r27.u64;
	// stw r11,22264(r31)
	REX_STORE_U32(r31.u32 + 22264, ctx.r11.u32);
	// rlwinm r28,r9,4,0,27
	r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r8,r10,128
	ctx.r8.s64 = ctx.r10.s64 + 128;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// rlwinm r7,r8,0,0,24
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFF80;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r7,22268(r31)
	REX_STORE_U32(r31.u32 + 22268, ctx.r7.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8233ff60
	ctx.lr = 0x8233B104;
	sub_8233FF60(ctx, base);
	// stw r3,22276(r31)
	REX_STORE_U32(r31.u32 + 22276, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233ae00
	if (ctx.cr6.eq) goto loc_8233AE00;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r28,260
	ctx.r4.s64 = r28.s64 + 260;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8233ff60
	ctx.lr = 0x8233B120;
	sub_8233FF60(ctx, base);
	// stw r3,22280(r31)
	REX_STORE_U32(r31.u32 + 22280, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233ae00
	if (ctx.cr6.eq) goto loc_8233AE00;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8233ff60
	ctx.lr = 0x8233B13C;
	sub_8233FF60(ctx, base);
	// stw r3,272(r31)
	REX_STORE_U32(r31.u32 + 272, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233ae00
	if (ctx.cr6.eq) goto loc_8233AE00;
	// lwz r11,14852(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 14852);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233b188
	if (ctx.cr6.eq) goto loc_8233B188;
	// rlwinm r11,r22,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// add r11,r22,r11
	ctx.r11.u64 = r22.u64 + ctx.r11.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// rlwinm r28,r11,3,0,28
	r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8233ff60
	ctx.lr = 0x8233B170;
	sub_8233FF60(ctx, base);
	// stw r3,280(r31)
	REX_STORE_U32(r31.u32 + 280, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233ae00
	if (ctx.cr6.eq) goto loc_8233AE00;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822d5870
	ctx.lr = 0x8233B188;
	sub_822D5870(ctx, base);
loc_8233B188:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8233ff60
	ctx.lr = 0x8233B198;
	sub_8233FF60(ctx, base);
	// stw r3,276(r31)
	REX_STORE_U32(r31.u32 + 276, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233ae00
	if (ctx.cr6.eq) goto loc_8233AE00;
	// rlwinm r11,r21,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r21,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r21,r11
	ctx.r11.u64 = r21.u64 + ctx.r11.u64;
	// add r10,r21,r10
	ctx.r10.u64 = r21.u64 + ctx.r10.u64;
	// rlwinm r9,r11,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// stw r9,1892(r31)
	REX_STORE_U32(r31.u32 + 1892, ctx.r9.u32);
	// rlwinm r4,r10,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8233ff60
	ctx.lr = 0x8233B1CC;
	sub_8233FF60(ctx, base);
	// stw r3,1896(r31)
	REX_STORE_U32(r31.u32 + 1896, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233ae00
	if (ctx.cr6.eq) goto loc_8233AE00;
	// rlwinm r11,r21,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// add r11,r21,r11
	ctx.r11.u64 = r21.u64 + ctx.r11.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// rlwinm r4,r11,5,0,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// bl 0x8233feb8
	ctx.lr = 0x8233B1F0;
	sub_8233FEB8(ctx, base);
	// stw r3,1900(r31)
	REX_STORE_U32(r31.u32 + 1900, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233ae00
	if (ctx.cr6.eq) goto loc_8233AE00;
	// lwz r11,15536(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15536);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// blt cr6,0x8233b220
	if (ctx.cr6.lt) goto loc_8233B220;
	// li r4,2
	ctx.r4.s64 = 2;
	// rlwinm r3,r21,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x823963f0
	ctx.lr = 0x8233B214;
	sub_823963F0(ctx, base);
	// stw r3,1972(r31)
	REX_STORE_U32(r31.u32 + 1972, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233ae00
	if (ctx.cr6.eq) goto loc_8233AE00;
loc_8233B220:
	// lwz r11,24688(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24688);
	// lwz r10,712(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 712);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8233b2b0
	if (ctx.cr6.eq) goto loc_8233B2B0;
	// lwz r10,17376(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 17376);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8233b28c
	if (!ctx.cr6.eq) goto loc_8233B28C;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// rlwinm r4,r22,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8233ff60
	ctx.lr = 0x8233B24C;
	sub_8233FF60(ctx, base);
	// rlwinm r11,r22,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r3,1776(r31)
	REX_STORE_U32(r31.u32 + 1776, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r11,1780(r31)
	REX_STORE_U32(r31.u32 + 1780, ctx.r11.u32);
	// beq cr6,0x8233ae00
	if (ctx.cr6.eq) goto loc_8233AE00;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// rlwinm r4,r22,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8233ff60
	ctx.lr = 0x8233B274;
	sub_8233FF60(ctx, base);
	// stw r3,1784(r31)
	REX_STORE_U32(r31.u32 + 1784, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8233b2f8
	if (!ctx.cr6.eq) goto loc_8233B2F8;
	// li r3,-9
	ctx.r3.s64 = -9;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4eb4
	return;
loc_8233B28C:
	// lwz r9,17376(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 17376);
	// rlwinm r10,r22,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,1776(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 1776);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,1780(r31)
	REX_STORE_U32(r31.u32 + 1780, ctx.r8.u32);
	// stw r11,1776(r31)
	REX_STORE_U32(r31.u32 + 1776, ctx.r11.u32);
	// lwz r7,1784(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 1784);
	// stw r7,1784(r31)
	REX_STORE_U32(r31.u32 + 1784, ctx.r7.u32);
	// b 0x8233b2f8
	goto loc_8233B2F8;
loc_8233B2B0:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// rlwinm r4,r22,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8233ff60
	ctx.lr = 0x8233B2C0;
	sub_8233FF60(ctx, base);
	// rlwinm r11,r22,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 3) & 0xFFFFFFF8;
	// rotlwi r10,r3,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// stw r3,1776(r31)
	REX_STORE_U32(r31.u32 + 1776, ctx.r3.u32);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,1780(r31)
	REX_STORE_U32(r31.u32 + 1780, ctx.r11.u32);
	// beq cr6,0x8233ae00
	if (ctx.cr6.eq) goto loc_8233AE00;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// rlwinm r4,r22,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8233ff60
	ctx.lr = 0x8233B2EC;
	sub_8233FF60(ctx, base);
	// stw r3,1784(r31)
	REX_STORE_U32(r31.u32 + 1784, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233ae00
	if (ctx.cr6.eq) goto loc_8233AE00;
loc_8233B2F8:
	// addi r3,r31,3772
	ctx.r3.s64 = r31.s64 + 3772;
	// lwz r4,3744(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 3744);
	// bl 0x82353018
	ctx.lr = 0x8233B304;
	sub_82353018(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8233b334
	if (!ctx.cr6.eq) goto loc_8233B334;
	// mullw r11,r26,r21
	ctx.r11.s64 = int64_t(r26.s32) * int64_t(r21.s32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// rlwinm r4,r11,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8233ff60
	ctx.lr = 0x8233B324;
	sub_8233FF60(ctx, base);
	// stw r3,3088(r31)
	REX_STORE_U32(r31.u32 + 3088, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r3,-9
	ctx.r3.s64 = -9;
	// beq cr6,0x8233b338
	if (ctx.cr6.eq) goto loc_8233B338;
loc_8233B334:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8233B338:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4eb4
	return;
}

DEFINE_REX_FUNC(sub_82365DD0) {
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
	ctx.lr = 0x82365DD8;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// li r21,0
	r21.s64 = 0;
	// lwz r10,80(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// li r24,1
	r24.s64 = 1;
	// lwz r26,22024(r3)
	r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 22024);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r22,22020(r3)
	r22.u64 = REX_LOAD_U32(ctx.r3.u32 + 22020);
	// mr r14,r6
	r14.u64 = ctx.r6.u64;
	// stw r4,268(r1)
	REX_STORE_U32(ctx.r1.u32 + 268, ctx.r4.u32);
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// stw r5,276(r1)
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r5.u32);
	// mr r15,r8
	r15.u64 = ctx.r8.u64;
	// stw r21,22048(r3)
	REX_STORE_U32(ctx.r3.u32 + 22048, r21.u32);
	// mr r23,r21
	r23.u64 = r21.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r25,r21
	r25.u64 = r21.u64;
	// stw r24,32(r10)
	REX_STORE_U32(ctx.r10.u32 + 32, r24.u32);
	// mr r16,r21
	r16.u64 = r21.u64;
	// lwz r9,3732(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 3732);
	// mr r19,r21
	r19.u64 = r21.u64;
	// stw r7,292(r1)
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r7.u32);
	// mr r31,r21
	r31.u64 = r21.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r21,22052(r3)
	REX_STORE_U32(ctx.r3.u32 + 22052, r21.u32);
	// mr r17,r21
	r17.u64 = r21.u64;
	// bne cr6,0x82365e64
	if (!ctx.cr6.eq) goto loc_82365E64;
	// stw r21,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r21.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r7,22048(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 22048);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823319d8
	ctx.lr = 0x82365E5C;
	sub_823319D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823666f0
	if (!ctx.cr6.eq) goto loc_823666F0;
loc_82365E64:
	// lwz r4,268(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823666ec
	if (ctx.cr6.eq) goto loc_823666EC;
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(r14.u32, 0, ctx.xer);
	// beq cr6,0x823666ec
	if (ctx.cr6.eq) goto loc_823666EC;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x823666ec
	if (ctx.cr6.eq) goto loc_823666EC;
	// lwz r3,276(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// bge cr6,0x82365ea4
	if (!ctx.cr6.lt) goto loc_82365EA4;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x82365E98;
	sub_822D4FA0(ctx, base);
	// lwz r3,276(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r4,268(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_82365EA4:
	// lwz r11,22028(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 22028);
	// add r5,r31,r3
	ctx.r5.u64 = r31.u64 + ctx.r3.u64;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82365ed8
	if (!ctx.cr6.gt) goto loc_82365ED8;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82365c70
	ctx.lr = 0x82365EC0;
	sub_82365C70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823666f0
	if (!ctx.cr6.eq) goto loc_823666F0;
	// lwz r26,22024(r30)
	r26.u64 = REX_LOAD_U32(r30.u32 + 22024);
	// lwz r3,276(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r4,268(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// lwz r22,22020(r30)
	r22.u64 = REX_LOAD_U32(r30.u32 + 22020);
loc_82365ED8:
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// bge cr6,0x82365f74
	if (!ctx.cr6.lt) goto loc_82365F74;
loc_82365EE0:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82365f9c
	if (ctx.cr6.eq) goto loc_82365F9C;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r3,3376(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 3376);
	// addi r7,r1,276
	ctx.r7.s64 = ctx.r1.s64 + 276;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,268
	ctx.r5.s64 = ctx.r1.s64 + 268;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82366ea0
	ctx.lr = 0x82365F08;
	sub_82366EA0(ctx, base);
	// lwz r11,80(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 80);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// lwz r8,22028(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 22028);
	// lwz r9,276(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// add r5,r31,r9
	ctx.r5.u64 = r31.u64 + ctx.r9.u64;
	// cmplw cr6,r5,r8
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x82365f44
	if (!ctx.cr6.gt) goto loc_82365F44;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82365c70
	ctx.lr = 0x82365F34;
	sub_82365C70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823666f0
	if (!ctx.cr6.eq) goto loc_823666F0;
	// lwz r26,22024(r30)
	r26.u64 = REX_LOAD_U32(r30.u32 + 22024);
	// lwz r22,22020(r30)
	r22.u64 = REX_LOAD_U32(r30.u32 + 22020);
loc_82365F44:
	// add r3,r31,r26
	ctx.r3.u64 = r31.u64 + r26.u64;
	// lwz r5,276(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r4,268(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// bl 0x822d4fa0
	ctx.lr = 0x82365F54;
	sub_822D4FA0(ctx, base);
	// lwz r11,276(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// stw r26,268(r1)
	REX_STORE_U32(ctx.r1.u32 + 268, r26.u32);
	// add r31,r31,r11
	r31.u64 = r31.u64 + ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r31,276(r1)
	REX_STORE_U32(ctx.r1.u32 + 276, r31.u32);
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(r31.u32, 4, ctx.xer);
	// blt cr6,0x82365ee0
	if (ctx.cr6.lt) goto loc_82365EE0;
loc_82365F74:
	// lbz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82365f9c
	if (!ctx.cr6.eq) goto loc_82365F9C;
	// lbz r11,1(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 1);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82365f9c
	if (!ctx.cr6.eq) goto loc_82365F9C;
	// lbz r11,2(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 2);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
	// beq cr6,0x82365fa0
	if (ctx.cr6.eq) goto loc_82365FA0;
loc_82365F9C:
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
loc_82365FA0:
	// stw r11,21996(r30)
	REX_STORE_U32(r30.u32 + 21996, ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r21,22044(r30)
	REX_STORE_U32(r30.u32 + 22044, r21.u32);
	// beq cr6,0x82365fcc
	if (ctx.cr6.eq) goto loc_82365FCC;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r3,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,0(r14)
	REX_STORE_U32(r14.u32 + 0, ctx.r4.u32);
	// stw r11,0(r15)
	REX_STORE_U32(r15.u32 + 0, ctx.r11.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822d4ea0
	return;
loc_82365FCC:
	// li r20,3
	r20.s64 = 3;
	// li r18,2
	r18.s64 = 2;
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// blt cr6,0x82366594
	if (ctx.cr6.lt) goto loc_82366594;
loc_82365FDC:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// bne cr6,0x82366594
	if (!ctx.cr6.eq) goto loc_82366594;
loc_82365FE4:
	// addi r11,r4,4
	ctx.r11.s64 = ctx.r4.s64 + 4;
	// lbz r5,3(r4)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r4.u32 + 3);
	// cmplwi cr6,r3,8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 8, ctx.xer);
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
	// blt cr6,0x8236608c
	if (ctx.cr6.lt) goto loc_8236608C;
	// addi r6,r3,-1
	ctx.r6.s64 = ctx.r3.s64 + -1;
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// li r9,6
	ctx.r9.s64 = 6;
	// cmplwi cr6,r6,6
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 6, ctx.xer);
	// ble cr6,0x8236608c
	if (!ctx.cr6.gt) goto loc_8236608C;
loc_82366010:
	// lhz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// and r31,r10,r7
	r31.u64 = ctx.r10.u64 & ctx.r7.u64;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// clrlwi r31,r31,16
	r31.u64 = r31.u32 & 0xFFFF;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82366060
	if (!ctx.cr6.eq) goto loc_82366060;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82366040
	if (!ctx.cr6.eq) goto loc_82366040;
	// rlwinm r31,r7,0,16,23
	r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFF00;
	// cmplwi cr6,r31,256
	ctx.cr6.compare<uint32_t>(r31.u32, 256, ctx.xer);
	// beq cr6,0x82366078
	if (ctx.cr6.eq) goto loc_82366078;
loc_82366040:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82366060
	if (!ctx.cr6.eq) goto loc_82366060;
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bne cr6,0x82366060
	if (!ctx.cr6.eq) goto loc_82366060;
	// addi r10,r9,2
	ctx.r10.s64 = ctx.r9.s64 + 2;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82366080
	if (ctx.cr6.gt) goto loc_82366080;
loc_82366060:
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x82366010
	if (ctx.cr6.lt) goto loc_82366010;
	// b 0x8236608c
	goto loc_8236608C;
loc_82366078:
	// addi r27,r11,-2
	r27.s64 = ctx.r11.s64 + -2;
	// b 0x82366084
	goto loc_82366084;
loc_82366080:
	// addi r27,r11,-1
	r27.s64 = ctx.r11.s64 + -1;
loc_82366084:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// bne cr6,0x82366094
	if (!ctx.cr6.eq) goto loc_82366094;
loc_8236608C:
	// add r27,r4,r3
	r27.u64 = ctx.r4.u64 + ctx.r3.u64;
	// mr r25,r24
	r25.u64 = r24.u64;
loc_82366094:
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// stw r10,22000(r30)
	REX_STORE_U32(r30.u32 + 22000, ctx.r10.u32);
	// cmplwi cr6,r10,13
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 13, ctx.xer);
	// beq cr6,0x823660b4
	if (ctx.cr6.eq) goto loc_823660B4;
	// cmplwi cr6,r10,12
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 12, ctx.xer);
	// beq cr6,0x823660b4
	if (ctx.cr6.eq) goto loc_823660B4;
	// cmplwi cr6,r10,11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 11, ctx.xer);
	// bne cr6,0x823660b8
	if (!ctx.cr6.eq) goto loc_823660B8;
loc_823660B4:
	// mr r16,r24
	r16.u64 = r24.u64;
loc_823660B8:
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(r25.s32, 1, ctx.xer);
	// bne cr6,0x82366168
	if (!ctx.cr6.eq) goto loc_82366168;
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(r16.s32, 0, ctx.xer);
	// bne cr6,0x82366168
	if (!ctx.cr6.eq) goto loc_82366168;
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x8236616c
	if (!ctx.cr6.eq) goto loc_8236616C;
	// subf r31,r4,r27
	r31.u64 = r27.u64 - ctx.r4.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x823660E4;
	sub_822D4FA0(ctx, base);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,276
	ctx.r7.s64 = ctx.r1.s64 + 276;
	// lwz r3,3376(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 3376);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,268
	ctx.r5.s64 = ctx.r1.s64 + 268;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82366ea0
	ctx.lr = 0x82366100;
	sub_82366EA0(ctx, base);
	// lwz r11,80(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 80);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// lwz r9,22028(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 22028);
	// lwz r8,276(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// add r5,r31,r8
	ctx.r5.u64 = r31.u64 + ctx.r8.u64;
	// cmplw cr6,r5,r9
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8236613c
	if (!ctx.cr6.gt) goto loc_8236613C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82365c70
	ctx.lr = 0x8236612C;
	sub_82365C70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823666f0
	if (!ctx.cr6.eq) goto loc_823666F0;
	// lwz r26,22024(r30)
	r26.u64 = REX_LOAD_U32(r30.u32 + 22024);
	// lwz r22,22020(r30)
	r22.u64 = REX_LOAD_U32(r30.u32 + 22020);
loc_8236613C:
	// add r3,r31,r26
	ctx.r3.u64 = r31.u64 + r26.u64;
	// lwz r5,276(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r4,268(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// bl 0x822d4fa0
	ctx.lr = 0x8236614C;
	sub_822D4FA0(ctx, base);
	// lwz r11,276(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// stw r26,268(r1)
	REX_STORE_U32(ctx.r1.u32 + 268, r26.u32);
	// add r3,r31,r11
	ctx.r3.u64 = r31.u64 + ctx.r11.u64;
	// mr r25,r21
	r25.u64 = r21.u64;
	// stw r3,276(r1)
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r3.u32);
	// b 0x82365fe4
	goto loc_82365FE4;
loc_82366168:
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8236616C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82366224
	if (ctx.cr6.eq) goto loc_82366224;
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(r25.s32, 1, ctx.xer);
	// bne cr6,0x82366224
	if (!ctx.cr6.eq) goto loc_82366224;
	// subf r11,r28,r27
	ctx.r11.u64 = r27.u64 - r28.u64;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// ble cr6,0x823661c0
	if (!ctx.cr6.gt) goto loc_823661C0;
	// lbz r8,-1(r27)
	ctx.r8.u64 = REX_LOAD_U8(r27.u32 + -1);
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bne cr6,0x823661c0
	if (!ctx.cr6.eq) goto loc_823661C0;
	// lbz r8,-2(r27)
	ctx.r8.u64 = REX_LOAD_U8(r27.u32 + -2);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x823661c0
	if (!ctx.cr6.eq) goto loc_823661C0;
	// lbz r8,-3(r27)
	ctx.r8.u64 = REX_LOAD_U8(r27.u32 + -3);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x823661c0
	if (!ctx.cr6.eq) goto loc_823661C0;
	// stb r21,22016(r30)
	REX_STORE_U8(r30.u32 + 22016, r21.u8);
	// stw r20,22004(r30)
	REX_STORE_U32(r30.u32 + 22004, r20.u32);
	// stb r21,22017(r30)
	REX_STORE_U8(r30.u32 + 22017, r21.u8);
	// stb r24,22018(r30)
	REX_STORE_U8(r30.u32 + 22018, r24.u8);
	// b 0x82366214
	goto loc_82366214;
loc_823661C0:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x823661f0
	if (!ctx.cr6.gt) goto loc_823661F0;
	// lbz r8,-1(r27)
	ctx.r8.u64 = REX_LOAD_U8(r27.u32 + -1);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x823661f0
	if (!ctx.cr6.eq) goto loc_823661F0;
	// lbz r8,-2(r27)
	ctx.r8.u64 = REX_LOAD_U8(r27.u32 + -2);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x823661f0
	if (!ctx.cr6.eq) goto loc_823661F0;
	// stb r21,22016(r30)
	REX_STORE_U8(r30.u32 + 22016, r21.u8);
	// stw r18,22004(r30)
	REX_STORE_U32(r30.u32 + 22004, r18.u32);
	// stb r21,22017(r30)
	REX_STORE_U8(r30.u32 + 22017, r21.u8);
	// b 0x82366214
	goto loc_82366214;
loc_823661F0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82366210
	if (ctx.cr6.eq) goto loc_82366210;
	// lbz r8,-1(r27)
	ctx.r8.u64 = REX_LOAD_U8(r27.u32 + -1);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82366210
	if (!ctx.cr6.eq) goto loc_82366210;
	// stb r21,22016(r30)
	REX_STORE_U8(r30.u32 + 22016, r21.u8);
	// stw r24,22004(r30)
	REX_STORE_U32(r30.u32 + 22004, r24.u32);
	// b 0x82366214
	goto loc_82366214;
loc_82366210:
	// stw r21,22004(r30)
	REX_STORE_U32(r30.u32 + 22004, r21.u32);
loc_82366214:
	// lwz r8,22004(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 22004);
	// mr r19,r24
	r19.u64 = r24.u64;
	// subf r11,r8,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r8.u64;
	// add r27,r11,r28
	r27.u64 = ctx.r11.u64 + r28.u64;
loc_82366224:
	// cmplwi cr6,r10,13
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 13, ctx.xer);
	// beq cr6,0x8236644c
	if (ctx.cr6.eq) goto loc_8236644C;
	// cmplwi cr6,r10,12
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 12, ctx.xer);
	// beq cr6,0x8236644c
	if (ctx.cr6.eq) goto loc_8236644C;
	// cmplwi cr6,r10,11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 11, ctx.xer);
	// beq cr6,0x8236644c
	if (ctx.cr6.eq) goto loc_8236644C;
	// subf r5,r28,r27
	ctx.r5.u64 = r27.u64 - r28.u64;
	// cmpwi cr6,r10,28
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 28, ctx.xer);
	// bgt cr6,0x82366370
	if (ctx.cr6.gt) goto loc_82366370;
	// beq cr6,0x82366338
	if (ctx.cr6.eq) goto loc_82366338;
	// cmpwi cr6,r10,15
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 15, ctx.xer);
	// bgt cr6,0x823662f8
	if (ctx.cr6.gt) goto loc_823662F8;
	// beq cr6,0x823662b8
	if (ctx.cr6.eq) goto loc_823662B8;
	// cmpwi cr6,r10,10
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10, ctx.xer);
	// beq cr6,0x823662b0
	if (ctx.cr6.eq) goto loc_823662B0;
	// cmpwi cr6,r10,14
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 14, ctx.xer);
	// bne cr6,0x82366444
	if (!ctx.cr6.eq) goto loc_82366444;
	// lwz r11,15536(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 15536);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,80(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 80);
	// addi r11,r11,-7
	ctx.r11.s64 = ctx.r11.s64 + -7;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r7,r10,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x82337cb0
	ctx.lr = 0x82366288;
	sub_82337CB0(ctx, base);
	// lwz r9,3732(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 3732);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8236666c
	if (!ctx.cr6.eq) goto loc_8236666C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82336dc8
	ctx.lr = 0x8236629C;
	sub_82336DC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823666f0
	if (!ctx.cr6.eq) goto loc_823666F0;
	// lwz r3,276(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r4,268(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// b 0x82366578
	goto loc_82366578;
loc_823662B0:
	// stw r24,3736(r30)
	REX_STORE_U32(r30.u32 + 3736, r24.u32);
	// b 0x82366578
	goto loc_82366578;
loc_823662B8:
	// lwz r11,15536(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 15536);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,80(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 80);
	// addi r11,r11,-7
	ctx.r11.s64 = ctx.r11.s64 + -7;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r7,r10,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x82337cb0
	ctx.lr = 0x823662D8;
	sub_82337CB0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8233c7e0
	ctx.lr = 0x823662E4;
	sub_8233C7E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82366658
	if (!ctx.cr6.eq) goto loc_82366658;
	// lwz r3,276(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r4,268(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// b 0x82366578
	goto loc_82366578;
loc_823662F8:
	// cmpwi cr6,r10,27
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 27, ctx.xer);
	// bne cr6,0x82366444
	if (!ctx.cr6.eq) goto loc_82366444;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x82366314
	if (!ctx.cr6.eq) goto loc_82366314;
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(r25.s32, 1, ctx.xer);
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// beq cr6,0x82366318
	if (ctx.cr6.eq) goto loc_82366318;
loc_82366314:
	// mr r7,r21
	ctx.r7.u64 = r21.u64;
loc_82366318:
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82365b48
	ctx.lr = 0x8236632C;
	sub_82365B48(ctx, base);
	// lwz r3,276(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r4,268(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// b 0x82366578
	goto loc_82366578;
loc_82366338:
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x8236634c
	if (!ctx.cr6.eq) goto loc_8236634C;
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(r25.s32, 1, ctx.xer);
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// beq cr6,0x82366350
	if (ctx.cr6.eq) goto loc_82366350;
loc_8236634C:
	// mr r7,r21
	ctx.r7.u64 = r21.u64;
loc_82366350:
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82365b48
	ctx.lr = 0x82366364;
	sub_82365B48(ctx, base);
	// lwz r3,276(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r4,268(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// b 0x82366578
	goto loc_82366578;
loc_82366370:
	// cmpwi cr6,r10,31
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 31, ctx.xer);
	// bgt cr6,0x82366434
	if (ctx.cr6.gt) goto loc_82366434;
	// beq cr6,0x823663fc
	if (ctx.cr6.eq) goto loc_823663FC;
	// cmpwi cr6,r10,29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 29, ctx.xer);
	// beq cr6,0x823663c4
	if (ctx.cr6.eq) goto loc_823663C4;
	// cmpwi cr6,r10,30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 30, ctx.xer);
	// bne cr6,0x82366444
	if (!ctx.cr6.eq) goto loc_82366444;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x823663a0
	if (!ctx.cr6.eq) goto loc_823663A0;
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(r25.s32, 1, ctx.xer);
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// beq cr6,0x823663a4
	if (ctx.cr6.eq) goto loc_823663A4;
loc_823663A0:
	// mr r7,r21
	ctx.r7.u64 = r21.u64;
loc_823663A4:
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82365b48
	ctx.lr = 0x823663B8;
	sub_82365B48(ctx, base);
	// lwz r3,276(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r4,268(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// b 0x82366578
	goto loc_82366578;
loc_823663C4:
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x823663d8
	if (!ctx.cr6.eq) goto loc_823663D8;
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(r25.s32, 1, ctx.xer);
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// beq cr6,0x823663dc
	if (ctx.cr6.eq) goto loc_823663DC;
loc_823663D8:
	// mr r7,r21
	ctx.r7.u64 = r21.u64;
loc_823663DC:
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82365b48
	ctx.lr = 0x823663F0;
	sub_82365B48(ctx, base);
	// lwz r3,276(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r4,268(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// b 0x82366578
	goto loc_82366578;
loc_823663FC:
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x82366410
	if (!ctx.cr6.eq) goto loc_82366410;
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(r25.s32, 1, ctx.xer);
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// beq cr6,0x82366414
	if (ctx.cr6.eq) goto loc_82366414;
loc_82366410:
	// mr r7,r21
	ctx.r7.u64 = r21.u64;
loc_82366414:
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82365b48
	ctx.lr = 0x82366428;
	sub_82365B48(ctx, base);
	// lwz r3,276(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r4,268(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// b 0x82366578
	goto loc_82366578;
loc_82366434:
	// cmpwi cr6,r10,32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32, ctx.xer);
	// blt cr6,0x82366444
	if (ctx.cr6.lt) goto loc_82366444;
	// cmpwi cr6,r10,64
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 64, ctx.xer);
	// ble cr6,0x82366578
	if (!ctx.cr6.gt) goto loc_82366578;
loc_82366444:
	// mr r17,r24
	r17.u64 = r24.u64;
	// b 0x82366578
	goto loc_82366578;
loc_8236644C:
	// subf. r31,r28,r27
	r31.u64 = r27.u64 - r28.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x82366474
	if (ctx.cr0.eq) goto loc_82366474;
	// add r11,r31,r28
	ctx.r11.u64 = r31.u64 + r28.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_8236645C:
	// lbz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82366474
	if (!ctx.cr6.eq) goto loc_82366474;
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// bne 0x8236645c
	if (!ctx.cr0.eq) goto loc_8236645C;
loc_82366474:
	// lwz r11,3732(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 3732);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82366550
	if (!ctx.cr6.eq) goto loc_82366550;
	// cmplwi cr6,r10,12
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 12, ctx.xer);
	// bne cr6,0x8236649c
	if (!ctx.cr6.eq) goto loc_8236649C;
	// lwz r11,21948(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 21948);
	// stw r31,21964(r30)
	REX_STORE_U32(r30.u32 + 21964, r31.u32);
	// stw r23,22052(r30)
	REX_STORE_U32(r30.u32 + 22052, r23.u32);
	// stw r24,22048(r30)
	REX_STORE_U32(r30.u32 + 22048, r24.u32);
	// stw r11,21952(r30)
	REX_STORE_U32(r30.u32 + 21952, ctx.r11.u32);
loc_8236649C:
	// cmplwi cr6,r10,13
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 13, ctx.xer);
	// bne cr6,0x823664b4
	if (!ctx.cr6.eq) goto loc_823664B4;
	// lwz r11,21992(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 21992);
	// stw r31,21960(r30)
	REX_STORE_U32(r30.u32 + 21960, r31.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,21992(r30)
	REX_STORE_U32(r30.u32 + 21992, ctx.r11.u32);
loc_823664B4:
	// cmplwi cr6,r10,11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 11, ctx.xer);
	// bne cr6,0x82366550
	if (!ctx.cr6.eq) goto loc_82366550;
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(r31.u32, 1, ctx.xer);
	// ble cr6,0x823665f8
	if (!ctx.cr6.gt) goto loc_823665F8;
	// lbz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 0);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// lbz r9,1(r28)
	ctx.r9.u64 = REX_LOAD_U8(r28.u32 + 1);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lwz r7,22048(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 22048);
	// rlwinm r11,r9,25,7,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 25) & 0x1FFFFFF;
	// li r4,1
	ctx.r4.s64 = 1;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r29,r28,1
	r29.s64 = r28.s64 + 1;
	// bl 0x823319d8
	ctx.lr = 0x823664F8;
	sub_823319D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82366544
	if (ctx.cr6.eq) goto loc_82366544;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82366664
	if (!ctx.cr6.eq) goto loc_82366664;
	// lwz r11,22028(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 22028);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(r23.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823666f0
	if (ctx.cr6.gt) goto loc_823666F0;
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r23,1
	ctx.r11.s64 = r23.s64 + 1;
	// mr r17,r24
	r17.u64 = r24.u64;
	// rlwinm r9,r10,31,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0xFF;
	// addi r31,r31,-2
	r31.s64 = r31.s64 + -2;
	// stbx r9,r22,r23
	REX_STORE_U8(r22.u32 + r23.u32, ctx.r9.u8);
	// addi r28,r28,2
	r28.s64 = r28.s64 + 2;
	// lbz r8,0(r29)
	ctx.r8.u64 = REX_LOAD_U8(r29.u32 + 0);
	// clrlwi r7,r8,25
	ctx.r7.u64 = ctx.r8.u32 & 0x7F;
	// stbx r7,r22,r11
	REX_STORE_U8(r22.u32 + ctx.r11.u32, ctx.r7.u8);
	// addi r23,r11,1
	r23.s64 = ctx.r11.s64 + 1;
loc_82366544:
	// lwz r29,292(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r4,268(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// lwz r3,276(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
loc_82366550:
	// lwz r11,22028(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 22028);
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(r23.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82366574
	if (!ctx.cr6.lt) goto loc_82366574;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// add r3,r22,r23
	ctx.r3.u64 = r22.u64 + r23.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x8236656C;
	sub_822D4FA0(ctx, base);
	// lwz r3,276(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r4,268(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
loc_82366574:
	// add r23,r31,r23
	r23.u64 = r31.u64 + r23.u64;
loc_82366578:
	// subf r11,r27,r4
	ctx.r11.u64 = ctx.r4.u64 - r27.u64;
	// stw r27,268(r1)
	REX_STORE_U32(ctx.r1.u32 + 268, r27.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r3,276(r1)
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r3.u32);
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// bge cr6,0x82365fdc
	if (!ctx.cr6.lt) goto loc_82365FDC;
loc_82366594:
	// lwz r11,22028(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 22028);
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(r23.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8236666c
	if (!ctx.cr6.lt) goto loc_8236666C;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823666d4
	if (ctx.cr6.eq) goto loc_823666D4;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// bne cr6,0x823666d4
	if (!ctx.cr6.eq) goto loc_823666D4;
	// add r11,r22,r23
	ctx.r11.u64 = r22.u64 + r23.u64;
	// cmplwi cr6,r23,2
	ctx.cr6.compare<uint32_t>(r23.u32, 2, ctx.xer);
	// ble cr6,0x82366678
	if (!ctx.cr6.gt) goto loc_82366678;
	// lbz r9,-1(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x82366678
	if (!ctx.cr6.eq) goto loc_82366678;
	// lbz r9,-2(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + -2);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82366678
	if (!ctx.cr6.eq) goto loc_82366678;
	// lbz r9,-3(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + -3);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82366678
	if (!ctx.cr6.eq) goto loc_82366678;
	// stb r21,22016(r30)
	REX_STORE_U8(r30.u32 + 22016, r21.u8);
	// stw r20,22004(r30)
	REX_STORE_U32(r30.u32 + 22004, r20.u32);
	// stb r21,22017(r30)
	REX_STORE_U8(r30.u32 + 22017, r21.u8);
	// stb r24,22018(r30)
	REX_STORE_U8(r30.u32 + 22018, r24.u8);
	// b 0x823666cc
	goto loc_823666CC;
loc_823665F8:
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x82366550
	if (!ctx.cr6.eq) goto loc_82366550;
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(r31.u32, 1, ctx.xer);
	// stw r24,22044(r30)
	REX_STORE_U32(r30.u32 + 22044, r24.u32);
	// bne cr6,0x82366550
	if (!ctx.cr6.eq) goto loc_82366550;
	// lwz r11,22004(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 22004);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bgt cr6,0x8236666c
	if (ctx.cr6.gt) goto loc_8236666C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8236663c
	if (ctx.cr6.eq) goto loc_8236663C;
	// addi r10,r30,22015
	ctx.r10.s64 = r30.s64 + 22015;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r9,r30,22016
	ctx.r9.s64 = r30.s64 + 22016;
loc_8236662C:
	// lbzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// stbx r8,r9,r11
	REX_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r8.u8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// bdnz 0x8236662c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236662C;
loc_8236663C:
	// lbz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U8(r28.u32 + 0);
	// mr r31,r21
	r31.u64 = r21.u64;
	// lwz r11,22004(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 22004);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stb r10,22016(r30)
	REX_STORE_U8(r30.u32 + 22016, ctx.r10.u8);
	// stw r9,22004(r30)
	REX_STORE_U32(r30.u32 + 22004, ctx.r9.u32);
	// b 0x82366550
	goto loc_82366550;
loc_82366658:
	// stw r24,3732(r30)
	REX_STORE_U32(r30.u32 + 3732, r24.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822d4ea0
	return;
loc_82366664:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x823666f0
	if (!ctx.cr6.eq) goto loc_823666F0;
loc_8236666C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822d4ea0
	return;
loc_82366678:
	// cmplwi cr6,r23,1
	ctx.cr6.compare<uint32_t>(r23.u32, 1, ctx.xer);
	// ble cr6,0x823666a8
	if (!ctx.cr6.gt) goto loc_823666A8;
	// lbz r9,-1(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x823666a8
	if (!ctx.cr6.eq) goto loc_823666A8;
	// lbz r9,-2(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + -2);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x823666a8
	if (!ctx.cr6.eq) goto loc_823666A8;
	// stb r21,22016(r30)
	REX_STORE_U8(r30.u32 + 22016, r21.u8);
	// stw r18,22004(r30)
	REX_STORE_U32(r30.u32 + 22004, r18.u32);
	// stb r21,22017(r30)
	REX_STORE_U8(r30.u32 + 22017, r21.u8);
	// b 0x823666cc
	goto loc_823666CC;
loc_823666A8:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x823666c8
	if (ctx.cr6.eq) goto loc_823666C8;
	// lbz r11,-1(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823666c8
	if (!ctx.cr6.eq) goto loc_823666C8;
	// stb r21,22016(r30)
	REX_STORE_U8(r30.u32 + 22016, r21.u8);
	// stw r24,22004(r30)
	REX_STORE_U32(r30.u32 + 22004, r24.u32);
	// b 0x823666cc
	goto loc_823666CC;
loc_823666C8:
	// stw r21,22004(r30)
	REX_STORE_U32(r30.u32 + 22004, r21.u32);
loc_823666CC:
	// lwz r11,22004(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 22004);
	// subf r23,r11,r23
	r23.u64 = r23.u64 - ctx.r11.u64;
loc_823666D4:
	// stw r22,0(r14)
	REX_STORE_U32(r14.u32 + 0, r22.u32);
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// stw r23,0(r29)
	REX_STORE_U32(r29.u32 + 0, r23.u32);
	// stw r10,0(r15)
	REX_STORE_U32(r15.u32 + 0, ctx.r10.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822d4ea0
	return;
loc_823666EC:
	// li r3,-3
	ctx.r3.s64 = -3;
loc_823666F0:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_8238D7B8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,15632(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 15632);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8238d7d8
	if (ctx.cr6.eq) goto loc_8238D7D8;
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8238d7d4
	if (ctx.cr6.eq) goto loc_8238D7D4;
	// b 0x8238c910
	sub_8238C910(ctx, base);
	return;
loc_8238D7D4:
	// b 0x8238d438
	sub_8238D438(ctx, base);
	return;
loc_8238D7D8:
	// lwz r11,3980(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 3980);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8238d7e8
	if (ctx.cr6.eq) goto loc_8238D7E8;
	// b 0x8238d2b0
	sub_8238D2B0(ctx, base);
	return;
loc_8238D7E8:
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8238d7f8
	if (ctx.cr6.eq) goto loc_8238D7F8;
	// b 0x8238c910
	sub_8238C910(ctx, base);
	return;
loc_8238D7F8:
	// b 0x8238d030
	sub_8238D030(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8238DCE8) {
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
	ctx.lr = 0x8238DCF0;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,332(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// mr r31,r9
	r31.u64 = ctx.r9.u64;
	// mr r25,r10
	r25.u64 = ctx.r10.u64;
	// lwz r10,152(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 152);
	// rlwinm r26,r11,0,0,30
	r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r9,340(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// srawi r23,r26,1
	ctx.xer.ca = (r26.s32 < 0) & ((r26.u32 & 0x1) != 0);
	r23.s64 = r26.s32 >> 1;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// srawi r27,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	r27.s64 = ctx.r9.s32 >> 1;
	// beq cr6,0x8238dd5c
	if (ctx.cr6.eq) goto loc_8238DD5C;
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// lwz r11,15948(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 15948);
	// lwz r27,324(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// lwz r31,316(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// lwz r26,308(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// stw r27,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r27.u32);
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// bctrl 
	ctx.lr = 0x8238DD54;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822d4eb4
	return;
loc_8238DD5C:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// ble cr6,0x8238ddd8
	if (!ctx.cr6.gt) goto loc_8238DDD8;
	// lwz r20,324(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// subf r22,r31,r8
	r22.u64 = ctx.r8.u64 - r31.u64;
	// lwz r24,316(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// subf r21,r30,r5
	r21.u64 = ctx.r5.u64 - r30.u64;
	// lwz r19,308(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
loc_8238DD78:
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x8238DD88;
	sub_822D4FA0(ctx, base);
	// add r29,r29,r25
	r29.u64 = r29.u64 + r25.u64;
	// add r28,r28,r24
	r28.u64 = r28.u64 + r24.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x8238DDA0;
	sub_822D4FA0(ctx, base);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// add r4,r22,r31
	ctx.r4.u64 = r22.u64 + r31.u64;
	// add r3,r21,r30
	ctx.r3.u64 = r21.u64 + r30.u64;
	// add r29,r29,r25
	r29.u64 = r29.u64 + r25.u64;
	// add r28,r28,r24
	r28.u64 = r28.u64 + r24.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x8238DDB8;
	sub_822D4FA0(ctx, base);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x8238DDC8;
	sub_822D4FA0(ctx, base);
	// addic. r27,r27,-1
	ctx.xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// add r31,r31,r19
	r31.u64 = r31.u64 + r19.u64;
	// add r30,r30,r20
	r30.u64 = r30.u64 + r20.u64;
	// bne 0x8238dd78
	if (!ctx.cr0.eq) goto loc_8238DD78;
loc_8238DDD8:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822d4eb4
	return;
}

DEFINE_REX_FUNC(sub_82391F00) {
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
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e64
	ctx.lr = 0x82391F08;
	// lwz r7,180(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 180);
	// lwz r8,3980(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 3980);
	// srawi r11,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 1;
	// lwz r9,188(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 188);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lwz r10,20400(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20400);
	// addi r5,r11,15
	ctx.r5.s64 = ctx.r11.s64 + 15;
	// lwz r6,156(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 156);
	// lwz r4,160(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 160);
	// rlwinm r11,r5,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFF0;
	// srawi r8,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 1;
	// srawi r9,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 1;
	// add r27,r10,r11
	r27.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r5,r9,15
	ctx.r5.s64 = ctx.r9.s64 + 15;
	// rlwinm r10,r5,0,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFF0;
	// srawi r30,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	r30.s64 = ctx.r10.s32 >> 1;
	// srawi r31,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	r31.s64 = ctx.r6.s32 >> 1;
	// srawi r21,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	r21.s64 = ctx.r4.s32 >> 1;
	// srawi r28,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	r28.s64 = ctx.r11.s32 >> 4;
	// srawi r22,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	r22.s64 = ctx.r10.s32 >> 4;
	// addi r20,r28,-1
	r20.s64 = r28.s64 + -1;
	// beq cr6,0x82391f68
	if (ctx.cr6.eq) goto loc_82391F68;
	// srawi r8,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 2;
	// srawi r30,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	r30.s64 = ctx.r10.s32 >> 2;
loc_82391F68:
	// lwz r9,20404(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 20404);
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r31.s32, ctx.xer);
	// lwz r26,20400(r3)
	r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 20400);
	// stw r7,14896(r3)
	REX_STORE_U32(ctx.r3.u32 + 14896, ctx.r7.u32);
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r6,r26,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r7,r8
	ctx.r4.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r5,r6,r11
	ctx.r5.u64 = ctx.r6.u64 + ctx.r11.u64;
	// addi r24,r4,1
	r24.s64 = ctx.r4.s64 + 1;
	// addi r25,r5,1
	r25.s64 = ctx.r5.s64 + 1;
	// add r29,r9,r8
	r29.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mullw r26,r25,r26
	r26.s64 = int64_t(r25.s32) * int64_t(r26.s32);
	// mullw r9,r24,r9
	ctx.r9.s64 = int64_t(r24.s32) * int64_t(ctx.r9.s32);
	// lwz r25,192(r3)
	r25.u64 = REX_LOAD_U32(ctx.r3.u32 + 192);
	// stw r25,14900(r3)
	REX_STORE_U32(ctx.r3.u32 + 14900, r25.u32);
	// lwz r25,188(r3)
	r25.u64 = REX_LOAD_U32(ctx.r3.u32 + 188);
	// stw r25,14904(r3)
	REX_STORE_U32(ctx.r3.u32 + 14904, r25.u32);
	// add r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 + ctx.r10.u64;
	// lwz r24,200(r3)
	r24.u64 = REX_LOAD_U32(ctx.r3.u32 + 200);
	// add r7,r7,r30
	ctx.r7.u64 = ctx.r7.u64 + r30.u64;
	// stw r24,14908(r3)
	REX_STORE_U32(ctx.r3.u32 + 14908, r24.u32);
	// rlwinm r25,r5,4,0,27
	r25.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r23,156(r3)
	r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 156);
	// rlwinm r24,r4,3,0,28
	r24.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r23,14912(r3)
	REX_STORE_U32(ctx.r3.u32 + 14912, r23.u32);
	// lwz r23,160(r3)
	r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 160);
	// stw r23,14916(r3)
	REX_STORE_U32(ctx.r3.u32 + 14916, r23.u32);
	// lwz r23,184(r3)
	r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 184);
	// stw r23,14920(r3)
	REX_STORE_U32(ctx.r3.u32 + 14920, r23.u32);
	// lwz r23,196(r3)
	r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 196);
	// stw r23,14924(r3)
	REX_STORE_U32(ctx.r3.u32 + 14924, r23.u32);
	// lwz r23,152(r3)
	r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 152);
	// stw r23,14928(r3)
	REX_STORE_U32(ctx.r3.u32 + 14928, r23.u32);
	// lwz r23,136(r3)
	r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// stw r23,14932(r3)
	REX_STORE_U32(ctx.r3.u32 + 14932, r23.u32);
	// lwz r23,140(r3)
	r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// stw r23,14936(r3)
	REX_STORE_U32(ctx.r3.u32 + 14936, r23.u32);
	// lwz r23,144(r3)
	r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 144);
	// stw r23,14940(r3)
	REX_STORE_U32(ctx.r3.u32 + 14940, r23.u32);
	// lwz r23,148(r3)
	r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 148);
	// stw r23,14944(r3)
	REX_STORE_U32(ctx.r3.u32 + 14944, r23.u32);
	// lwz r23,204(r3)
	r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 204);
	// stw r23,14948(r3)
	REX_STORE_U32(ctx.r3.u32 + 14948, r23.u32);
	// lwz r23,208(r3)
	r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 208);
	// stw r23,14952(r3)
	REX_STORE_U32(ctx.r3.u32 + 14952, r23.u32);
	// lwz r23,212(r3)
	r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 212);
	// stw r23,14956(r3)
	REX_STORE_U32(ctx.r3.u32 + 14956, r23.u32);
	// lwz r23,216(r3)
	r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 216);
	// stw r23,14960(r3)
	REX_STORE_U32(ctx.r3.u32 + 14960, r23.u32);
	// lwz r23,220(r3)
	r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 220);
	// stw r23,14964(r3)
	REX_STORE_U32(ctx.r3.u32 + 14964, r23.u32);
	// lwz r23,224(r3)
	r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 224);
	// stw r23,14968(r3)
	REX_STORE_U32(ctx.r3.u32 + 14968, r23.u32);
	// lwz r23,228(r3)
	r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 228);
	// stw r23,14972(r3)
	REX_STORE_U32(ctx.r3.u32 + 14972, r23.u32);
	// lwz r23,232(r3)
	r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 232);
	// stw r23,14976(r3)
	REX_STORE_U32(ctx.r3.u32 + 14976, r23.u32);
	// stw r11,14980(r3)
	REX_STORE_U32(ctx.r3.u32 + 14980, ctx.r11.u32);
	// stw r8,14984(r3)
	REX_STORE_U32(ctx.r3.u32 + 14984, ctx.r8.u32);
	// lwz r23,188(r3)
	r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 188);
	// stw r23,14988(r3)
	REX_STORE_U32(ctx.r3.u32 + 14988, r23.u32);
	// lwz r23,200(r3)
	r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 200);
	// stw r23,14992(r3)
	REX_STORE_U32(ctx.r3.u32 + 14992, r23.u32);
	// stw r31,14996(r3)
	REX_STORE_U32(ctx.r3.u32 + 14996, r31.u32);
	// lwz r23,160(r3)
	r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 160);
	// stw r23,15000(r3)
	REX_STORE_U32(ctx.r3.u32 + 15000, r23.u32);
	// stw r27,15004(r3)
	REX_STORE_U32(ctx.r3.u32 + 15004, r27.u32);
	// stw r29,15008(r3)
	REX_STORE_U32(ctx.r3.u32 + 15008, r29.u32);
	// bne cr6,0x82392090
	if (!ctx.cr6.eq) goto loc_82392090;
	// lwz r23,188(r3)
	r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 188);
	// lwz r19,160(r3)
	r19.u64 = REX_LOAD_U32(ctx.r3.u32 + 160);
	// cmpw cr6,r23,r19
	ctx.cr6.compare<int32_t>(r23.s32, r19.s32, ctx.xer);
	// li r23,1
	r23.s64 = 1;
	// beq cr6,0x82392094
	if (ctx.cr6.eq) goto loc_82392094;
loc_82392090:
	// li r23,0
	r23.s64 = 0;
loc_82392094:
	// stw r23,15012(r3)
	REX_STORE_U32(ctx.r3.u32 + 15012, r23.u32);
	// stw r28,15016(r3)
	REX_STORE_U32(ctx.r3.u32 + 15016, r28.u32);
	// lwz r23,140(r3)
	r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// stw r23,15020(r3)
	REX_STORE_U32(ctx.r3.u32 + 15020, r23.u32);
	// lwz r23,140(r3)
	r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// mullw r23,r23,r28
	r23.s64 = int64_t(r23.s32) * int64_t(r28.s32);
	// stw r23,15024(r3)
	REX_STORE_U32(ctx.r3.u32 + 15024, r23.u32);
	// stw r20,15028(r3)
	REX_STORE_U32(ctx.r3.u32 + 15028, r20.u32);
	// stw r5,15032(r3)
	REX_STORE_U32(ctx.r3.u32 + 15032, ctx.r5.u32);
	// stw r4,15036(r3)
	REX_STORE_U32(ctx.r3.u32 + 15036, ctx.r4.u32);
	// lwz r23,212(r3)
	r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 212);
	// stw r23,15040(r3)
	REX_STORE_U32(ctx.r3.u32 + 15040, r23.u32);
	// lwz r23,216(r3)
	r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 216);
	// stw r23,15044(r3)
	REX_STORE_U32(ctx.r3.u32 + 15044, r23.u32);
	// stw r9,15052(r3)
	REX_STORE_U32(ctx.r3.u32 + 15052, ctx.r9.u32);
	// stw r25,15056(r3)
	REX_STORE_U32(ctx.r3.u32 + 15056, r25.u32);
	// stw r24,15060(r3)
	REX_STORE_U32(ctx.r3.u32 + 15060, r24.u32);
	// stw r26,15048(r3)
	REX_STORE_U32(ctx.r3.u32 + 15048, r26.u32);
	// lwz r23,180(r3)
	r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 180);
	// stw r23,15064(r3)
	REX_STORE_U32(ctx.r3.u32 + 15064, r23.u32);
	// lwz r23,192(r3)
	r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 192);
	// stw r23,15068(r3)
	REX_STORE_U32(ctx.r3.u32 + 15068, r23.u32);
	// stw r10,15072(r3)
	REX_STORE_U32(ctx.r3.u32 + 15072, ctx.r10.u32);
	// stw r30,15076(r3)
	REX_STORE_U32(ctx.r3.u32 + 15076, r30.u32);
	// lwz r23,156(r3)
	r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 156);
	// stw r23,15080(r3)
	REX_STORE_U32(ctx.r3.u32 + 15080, r23.u32);
	// stw r21,15084(r3)
	REX_STORE_U32(ctx.r3.u32 + 15084, r21.u32);
	// lwz r23,184(r3)
	r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 184);
	// stw r23,15088(r3)
	REX_STORE_U32(ctx.r3.u32 + 15088, r23.u32);
	// lwz r23,196(r3)
	r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 196);
	// stw r23,15092(r3)
	REX_STORE_U32(ctx.r3.u32 + 15092, r23.u32);
	// lwz r23,180(r3)
	r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 180);
	// lwz r19,156(r3)
	r19.u64 = REX_LOAD_U32(ctx.r3.u32 + 156);
	// cmpw cr6,r23,r19
	ctx.cr6.compare<int32_t>(r23.s32, r19.s32, ctx.xer);
	// bne cr6,0x8239212c
	if (!ctx.cr6.eq) goto loc_8239212C;
	// cmpw cr6,r10,r21
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r21.s32, ctx.xer);
	// li r23,1
	r23.s64 = 1;
	// beq cr6,0x82392130
	if (ctx.cr6.eq) goto loc_82392130;
loc_8239212C:
	// li r23,0
	r23.s64 = 0;
loc_82392130:
	// stw r23,15096(r3)
	REX_STORE_U32(ctx.r3.u32 + 15096, r23.u32);
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r31.s32, ctx.xer);
	// lwz r23,136(r3)
	r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// stw r22,15104(r3)
	REX_STORE_U32(ctx.r3.u32 + 15104, r22.u32);
	// stw r23,15100(r3)
	REX_STORE_U32(ctx.r3.u32 + 15100, r23.u32);
	// lwz r23,136(r3)
	r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// mullw r23,r23,r22
	r23.s64 = int64_t(r23.s32) * int64_t(r22.s32);
	// stw r23,15108(r3)
	REX_STORE_U32(ctx.r3.u32 + 15108, r23.u32);
	// lwz r23,148(r3)
	r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 148);
	// stw r23,15112(r3)
	REX_STORE_U32(ctx.r3.u32 + 15112, r23.u32);
	// lwz r23,204(r3)
	r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 204);
	// stw r23,15116(r3)
	REX_STORE_U32(ctx.r3.u32 + 15116, r23.u32);
	// lwz r23,208(r3)
	r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 208);
	// stw r23,15120(r3)
	REX_STORE_U32(ctx.r3.u32 + 15120, r23.u32);
	// stw r6,15124(r3)
	REX_STORE_U32(ctx.r3.u32 + 15124, ctx.r6.u32);
	// stw r7,15128(r3)
	REX_STORE_U32(ctx.r3.u32 + 15128, ctx.r7.u32);
	// lwz r23,220(r3)
	r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 220);
	// stw r23,15132(r3)
	REX_STORE_U32(ctx.r3.u32 + 15132, r23.u32);
	// lwz r23,224(r3)
	r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 224);
	// stw r23,15136(r3)
	REX_STORE_U32(ctx.r3.u32 + 15136, r23.u32);
	// lwz r23,228(r3)
	r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 228);
	// stw r23,15140(r3)
	REX_STORE_U32(ctx.r3.u32 + 15140, r23.u32);
	// lwz r23,232(r3)
	r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 232);
	// stw r23,15144(r3)
	REX_STORE_U32(ctx.r3.u32 + 15144, r23.u32);
	// stw r11,15148(r3)
	REX_STORE_U32(ctx.r3.u32 + 15148, ctx.r11.u32);
	// stw r8,15152(r3)
	REX_STORE_U32(ctx.r3.u32 + 15152, ctx.r8.u32);
	// stw r10,15156(r3)
	REX_STORE_U32(ctx.r3.u32 + 15156, ctx.r10.u32);
	// stw r30,15160(r3)
	REX_STORE_U32(ctx.r3.u32 + 15160, r30.u32);
	// stw r31,15164(r3)
	REX_STORE_U32(ctx.r3.u32 + 15164, r31.u32);
	// stw r21,15168(r3)
	REX_STORE_U32(ctx.r3.u32 + 15168, r21.u32);
	// stw r27,15172(r3)
	REX_STORE_U32(ctx.r3.u32 + 15172, r27.u32);
	// stw r29,15176(r3)
	REX_STORE_U32(ctx.r3.u32 + 15176, r29.u32);
	// bne cr6,0x823921c0
	if (!ctx.cr6.eq) goto loc_823921C0;
	// cmpw cr6,r10,r21
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r21.s32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x823921c4
	if (ctx.cr6.eq) goto loc_823921C4;
loc_823921C0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823921C4:
	// mullw r10,r22,r28
	ctx.r10.s64 = int64_t(r22.s32) * int64_t(r28.s32);
	// stw r11,15180(r3)
	REX_STORE_U32(ctx.r3.u32 + 15180, ctx.r11.u32);
	// stw r28,15184(r3)
	REX_STORE_U32(ctx.r3.u32 + 15184, r28.u32);
	// stw r22,15188(r3)
	REX_STORE_U32(ctx.r3.u32 + 15188, r22.u32);
	// stw r10,15192(r3)
	REX_STORE_U32(ctx.r3.u32 + 15192, ctx.r10.u32);
	// stw r20,15196(r3)
	REX_STORE_U32(ctx.r3.u32 + 15196, r20.u32);
	// stw r5,15200(r3)
	REX_STORE_U32(ctx.r3.u32 + 15200, ctx.r5.u32);
	// stw r4,15204(r3)
	REX_STORE_U32(ctx.r3.u32 + 15204, ctx.r4.u32);
	// stw r6,15208(r3)
	REX_STORE_U32(ctx.r3.u32 + 15208, ctx.r6.u32);
	// stw r7,15212(r3)
	REX_STORE_U32(ctx.r3.u32 + 15212, ctx.r7.u32);
	// stw r26,15216(r3)
	REX_STORE_U32(ctx.r3.u32 + 15216, r26.u32);
	// stw r9,15220(r3)
	REX_STORE_U32(ctx.r3.u32 + 15220, ctx.r9.u32);
	// stw r25,15224(r3)
	REX_STORE_U32(ctx.r3.u32 + 15224, r25.u32);
	// stw r24,15228(r3)
	REX_STORE_U32(ctx.r3.u32 + 15228, r24.u32);
	// b 0x822d4eb4
	return;
}

DEFINE_REX_FUNC(sub_82397A10) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// li r11,1024
	ctx.r11.s64 = 1024;
	// stw r4,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r4.u32);
	// li r31,1
	r31.s64 = 1;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// beq cr6,0x82397a3c
	if (ctx.cr6.eq) goto loc_82397A3C;
	// stw r31,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, r31.u32);
	// stw r7,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// b 0x82397a40
	goto loc_82397A40;
loc_82397A3C:
	// stw r7,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, ctx.r7.u32);
loc_82397A40:
	// lwz r11,64(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82397b3c
	if (!ctx.cr6.gt) goto loc_82397B3C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r8,r3,12
	ctx.r8.s64 = ctx.r3.s64 + 12;
	// li r6,146
	ctx.r6.s64 = 146;
	// addi r9,r11,14312
	ctx.r9.s64 = ctx.r11.s64 + 14312;
loc_82397A5C:
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82397af8
	if (ctx.cr6.eq) goto loc_82397AF8;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82397af8
	if (ctx.cr6.eq) goto loc_82397AF8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82397ae4
	if (ctx.cr6.eq) goto loc_82397AE4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82397ae4
	if (ctx.cr6.eq) goto loc_82397AE4;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82397aa0
	if (!ctx.cr6.eq) goto loc_82397AA0;
	// cmpwi cr6,r4,13
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 13, ctx.xer);
	// addi r11,r9,-1480
	ctx.r11.s64 = ctx.r9.s64 + -1480;
	// blt cr6,0x82397b08
	if (ctx.cr6.lt) goto loc_82397B08;
	// addi r11,r9,-1496
	ctx.r11.s64 = ctx.r9.s64 + -1496;
	// b 0x82397b08
	goto loc_82397B08;
loc_82397AA0:
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x82397ad4
	if (ctx.cr6.eq) goto loc_82397AD4;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x82397acc
	if (ctx.cr6.eq) goto loc_82397ACC;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// ble cr6,0x82397b0c
	if (!ctx.cr6.gt) goto loc_82397B0C;
	// cmpwi cr6,r4,13
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 13, ctx.xer);
	// addi r11,r9,-144
	ctx.r11.s64 = ctx.r9.s64 + -144;
	// blt cr6,0x82397b08
	if (ctx.cr6.lt) goto loc_82397B08;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x82397b08
	goto loc_82397B08;
loc_82397ACC:
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x82397b28
	if (!ctx.cr6.eq) goto loc_82397B28;
loc_82397AD4:
	// addi r11,r9,-1744
	ctx.r11.s64 = ctx.r9.s64 + -1744;
	// stw r6,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r6.u32);
	// stw r11,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// b 0x82397b28
	goto loc_82397B28;
loc_82397AE4:
	// cmpwi cr6,r4,13
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 13, ctx.xer);
	// addi r11,r9,-464
	ctx.r11.s64 = ctx.r9.s64 + -464;
	// blt cr6,0x82397b08
	if (ctx.cr6.lt) goto loc_82397B08;
	// addi r11,r9,-784
	ctx.r11.s64 = ctx.r9.s64 + -784;
	// b 0x82397b08
	goto loc_82397B08;
loc_82397AF8:
	// cmpwi cr6,r4,13
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 13, ctx.xer);
	// addi r11,r9,-1104
	ctx.r11.s64 = ctx.r9.s64 + -1104;
	// blt cr6,0x82397b08
	if (ctx.cr6.lt) goto loc_82397B08;
	// addi r11,r9,-1424
	ctx.r11.s64 = ctx.r9.s64 + -1424;
loc_82397B08:
	// stw r11,32(r10)
	REX_STORE_U32(ctx.r10.u32 + 32, ctx.r11.u32);
loc_82397B0C:
	// lwz r11,32(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stw r5,32(r10)
	REX_STORE_U32(ctx.r10.u32 + 32, ctx.r5.u32);
	// slw r5,r31,r11
	ctx.r5.u64 = ctx.r11.u8 & 0x20 ? 0 : (r31.u32 << (ctx.r11.u8 & 0x3F));
	// stw r11,28(r10)
	REX_STORE_U32(ctx.r10.u32 + 28, ctx.r11.u32);
	// stw r5,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, ctx.r5.u32);
loc_82397B28:
	// lwz r11,64(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82397a5c
	if (ctx.cr6.lt) goto loc_82397A5C;
loc_82397B3C:
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8239F2F0) {
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
	ctx.lr = 0x8239F2F8;
	// addi r10,r1,-241
	ctx.r10.s64 = ctx.r1.s64 + -241;
	// lwz r11,256(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 256);
	// stw r4,28(r1)
	REX_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// rlwinm r16,r10,0,0,27
	r16.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r16,-336(r1)
	REX_STORE_U32(ctx.r1.u32 + -336, r16.u32);
	// beq cr6,0x8239f89c
	if (ctx.cr6.eq) goto loc_8239F89C;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8239f438
	if (ctx.cr6.eq) goto loc_8239F438;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r11,r5,-1
	ctx.r11.s64 = ctx.r5.s64 + -1;
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8239F32C:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x8239f32c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8239F32C;
	// li r9,8
	ctx.r9.s64 = 8;
	// add r11,r5,r6
	ctx.r11.u64 = ctx.r5.u64 + ctx.r6.u64;
	// add r10,r4,r6
	ctx.r10.u64 = ctx.r4.u64 + ctx.r6.u64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8239F350:
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// stbu r9,1(r7)
	ea = 1 + ctx.r7.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r7.u32 = ea;
	// bdnz 0x8239f350
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8239F350;
	// li r9,8
	ctx.r9.s64 = 8;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8239F374:
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// stbu r9,1(r7)
	ea = 1 + ctx.r7.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r7.u32 = ea;
	// bdnz 0x8239f374
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8239F374;
	// li r9,8
	ctx.r9.s64 = 8;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8239F398:
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// stbu r9,1(r7)
	ea = 1 + ctx.r7.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r7.u32 = ea;
	// bdnz 0x8239f398
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8239F398;
	// li r9,8
	ctx.r9.s64 = 8;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8239F3BC:
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// stbu r9,1(r7)
	ea = 1 + ctx.r7.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r7.u32 = ea;
	// bdnz 0x8239f3bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8239F3BC;
	// li r9,8
	ctx.r9.s64 = 8;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8239F3E0:
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// stbu r9,1(r7)
	ea = 1 + ctx.r7.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r7.u32 = ea;
	// bdnz 0x8239f3e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8239F3E0;
	// li r9,8
	ctx.r9.s64 = 8;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8239F404:
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// stbu r9,1(r7)
	ea = 1 + ctx.r7.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r7.u32 = ea;
	// bdnz 0x8239f404
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8239F404;
	// li r9,8
	ctx.r9.s64 = 8;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8239F428:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x8239f428
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8239F428;
	// b 0x822d4ea0
	return;
loc_8239F438:
	// addi r10,r5,1
	ctx.r10.s64 = ctx.r5.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r5,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r5.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// subf r8,r4,r5
	ctx.r8.u64 = ctx.r5.u64 - ctx.r4.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bne cr6,0x8239f60c
	if (!ctx.cr6.eq) goto loc_8239F60C;
loc_8239F45C:
	// lbz r5,0(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r7,-1(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + -1);
	// lbz r4,-2(r10)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + -2);
	// add r7,r5,r7
	ctx.r7.u64 = ctx.r5.u64 + ctx.r7.u64;
	// lbzx r3,r8,r9
	ctx.r3.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// rlwinm r5,r7,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// subf r5,r4,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r4.u64;
	// subf r7,r3,r5
	ctx.r7.u64 = ctx.r5.u64 - ctx.r3.u64;
	// addi r4,r7,8
	ctx.r4.s64 = ctx.r7.s64 + 8;
	// srawi r3,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 4;
	// lbzx r7,r3,r11
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// stb r7,-2(r9)
	REX_STORE_U8(ctx.r9.u32 + -2, ctx.r7.u8);
	// lbz r4,2(r10)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// lbz r3,-1(r10)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + -1);
	// lbzx r5,r8,r9
	ctx.r5.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// add r7,r5,r7
	ctx.r7.u64 = ctx.r5.u64 + ctx.r7.u64;
	// rlwinm r5,r7,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// subf r5,r4,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r4.u64;
	// subf r7,r3,r5
	ctx.r7.u64 = ctx.r5.u64 - ctx.r3.u64;
	// addi r4,r7,8
	ctx.r4.s64 = ctx.r7.s64 + 8;
	// srawi r3,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 4;
	// lbzx r7,r3,r11
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// stb r7,-1(r9)
	REX_STORE_U8(ctx.r9.u32 + -1, ctx.r7.u8);
	// lbz r4,3(r10)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// lbz r3,0(r10)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r5,2(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// lbzx r7,r8,r9
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// add r7,r5,r7
	ctx.r7.u64 = ctx.r5.u64 + ctx.r7.u64;
	// rlwinm r5,r7,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// subf r5,r4,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r4.u64;
	// subf r7,r3,r5
	ctx.r7.u64 = ctx.r5.u64 - ctx.r3.u64;
	// addi r4,r7,8
	ctx.r4.s64 = ctx.r7.s64 + 8;
	// srawi r3,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 4;
	// lbzx r7,r3,r11
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// stb r7,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r7.u8);
	// lbz r4,4(r10)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// lbzx r3,r8,r9
	ctx.r3.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// lbz r5,3(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// lbz r7,2(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// add r7,r5,r7
	ctx.r7.u64 = ctx.r5.u64 + ctx.r7.u64;
	// rlwinm r5,r7,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// subf r5,r4,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r4.u64;
	// subf r7,r3,r5
	ctx.r7.u64 = ctx.r5.u64 - ctx.r3.u64;
	// addi r4,r7,8
	ctx.r4.s64 = ctx.r7.s64 + 8;
	// srawi r3,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 4;
	// lbzx r7,r3,r11
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// stb r7,1(r9)
	REX_STORE_U8(ctx.r9.u32 + 1, ctx.r7.u8);
	// lbz r4,5(r10)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// lbz r3,2(r10)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// lbz r5,4(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// lbz r7,3(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// add r7,r5,r7
	ctx.r7.u64 = ctx.r5.u64 + ctx.r7.u64;
	// rlwinm r5,r7,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// subf r5,r4,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r4.u64;
	// subf r7,r3,r5
	ctx.r7.u64 = ctx.r5.u64 - ctx.r3.u64;
	// addi r4,r7,8
	ctx.r4.s64 = ctx.r7.s64 + 8;
	// srawi r3,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 4;
	// lbzx r7,r3,r11
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// stb r7,2(r9)
	REX_STORE_U8(ctx.r9.u32 + 2, ctx.r7.u8);
	// lbz r4,6(r10)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 6);
	// lbz r3,3(r10)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// lbz r5,5(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// lbz r7,4(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// add r7,r5,r7
	ctx.r7.u64 = ctx.r5.u64 + ctx.r7.u64;
	// rlwinm r5,r7,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// subf r5,r4,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r4.u64;
	// subf r7,r3,r5
	ctx.r7.u64 = ctx.r5.u64 - ctx.r3.u64;
	// addi r4,r7,8
	ctx.r4.s64 = ctx.r7.s64 + 8;
	// srawi r3,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 4;
	// lbzx r7,r3,r11
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// stb r7,3(r9)
	REX_STORE_U8(ctx.r9.u32 + 3, ctx.r7.u8);
	// lbz r5,6(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 6);
	// lbz r7,5(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// add r7,r5,r7
	ctx.r7.u64 = ctx.r5.u64 + ctx.r7.u64;
	// rlwinm r5,r7,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r4,7(r10)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 7);
	// lbz r3,4(r10)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// subf r5,r4,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r4.u64;
	// subf r7,r3,r5
	ctx.r7.u64 = ctx.r5.u64 - ctx.r3.u64;
	// addi r4,r7,8
	ctx.r4.s64 = ctx.r7.s64 + 8;
	// srawi r3,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 4;
	// lbzx r7,r3,r11
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// stb r7,4(r9)
	REX_STORE_U8(ctx.r9.u32 + 4, ctx.r7.u8);
	// lbz r3,8(r10)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + 8);
	// lbz r4,5(r10)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// lbz r5,7(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 7);
	// lbz r7,6(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 6);
	// add r7,r5,r7
	ctx.r7.u64 = ctx.r5.u64 + ctx.r7.u64;
	// rlwinm r5,r7,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// subf r5,r3,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r3.u64;
	// subf r7,r4,r5
	ctx.r7.u64 = ctx.r5.u64 - ctx.r4.u64;
	// addi r4,r7,8
	ctx.r4.s64 = ctx.r7.s64 + 8;
	// srawi r3,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 4;
	// lbzx r7,r3,r11
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// stb r7,5(r9)
	REX_STORE_U8(ctx.r9.u32 + 5, ctx.r7.u8);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// bdnz 0x8239f45c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8239F45C;
	// b 0x822d4ea0
	return;
loc_8239F60C:
	// lbz r5,-1(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + -1);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r4,-2(r10)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + -2);
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// lbzx r3,r9,r8
	ctx.r3.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// rlwinm r5,r7,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// subf r5,r4,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r4.u64;
	// subf r7,r3,r5
	ctx.r7.u64 = ctx.r5.u64 - ctx.r3.u64;
	// addi r4,r7,8
	ctx.r4.s64 = ctx.r7.s64 + 8;
	// srawi r3,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 4;
	// lbzx r7,r3,r11
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// stb r7,-2(r9)
	REX_STORE_U8(ctx.r9.u32 + -2, ctx.r7.u8);
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// lbz r5,0(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// addi r5,r7,1
	ctx.r5.s64 = ctx.r7.s64 + 1;
	// srawi r4,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 1;
	// lbzx r3,r4,r11
	ctx.r3.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// stb r3,-2(r9)
	REX_STORE_U8(ctx.r9.u32 + -2, ctx.r3.u8);
	// lbz r4,2(r10)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// lbz r3,-1(r10)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + -1);
	// lbz r5,0(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbzx r7,r9,r8
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// rlwinm r5,r7,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// subf r5,r4,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r4.u64;
	// subf r7,r3,r5
	ctx.r7.u64 = ctx.r5.u64 - ctx.r3.u64;
	// addi r4,r7,8
	ctx.r4.s64 = ctx.r7.s64 + 8;
	// srawi r3,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 4;
	// lbzx r7,r3,r11
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// stb r7,-1(r9)
	REX_STORE_U8(ctx.r9.u32 + -1, ctx.r7.u8);
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// lbzx r5,r9,r8
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// addi r5,r7,1
	ctx.r5.s64 = ctx.r7.s64 + 1;
	// srawi r4,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 1;
	// lbzx r3,r4,r11
	ctx.r3.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// stb r3,-1(r9)
	REX_STORE_U8(ctx.r9.u32 + -1, ctx.r3.u8);
	// lbz r4,3(r10)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// lbz r3,0(r10)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbzx r5,r9,r8
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// lbz r7,2(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// rlwinm r5,r7,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// subf r5,r4,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r4.u64;
	// subf r7,r3,r5
	ctx.r7.u64 = ctx.r5.u64 - ctx.r3.u64;
	// addi r4,r7,8
	ctx.r4.s64 = ctx.r7.s64 + 8;
	// srawi r3,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 4;
	// lbzx r7,r3,r11
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// stb r7,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r7.u8);
	// lbz r7,2(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// lbz r5,0(r9)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// addi r5,r7,1
	ctx.r5.s64 = ctx.r7.s64 + 1;
	// srawi r4,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 1;
	// lbzx r3,r4,r11
	ctx.r3.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// stb r3,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r3.u8);
	// lbz r4,4(r10)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// lbzx r3,r9,r8
	ctx.r3.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// lbz r5,2(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// lbz r7,3(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// rlwinm r5,r7,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// subf r5,r4,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r4.u64;
	// subf r7,r3,r5
	ctx.r7.u64 = ctx.r5.u64 - ctx.r3.u64;
	// addi r4,r7,8
	ctx.r4.s64 = ctx.r7.s64 + 8;
	// srawi r3,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 4;
	// lbzx r7,r3,r11
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// stb r7,1(r9)
	REX_STORE_U8(ctx.r9.u32 + 1, ctx.r7.u8);
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// lbz r5,3(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// addi r5,r7,1
	ctx.r5.s64 = ctx.r7.s64 + 1;
	// srawi r4,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 1;
	// lbzx r3,r4,r11
	ctx.r3.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// stb r3,1(r9)
	REX_STORE_U8(ctx.r9.u32 + 1, ctx.r3.u8);
	// lbz r7,4(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// lbz r5,3(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// lbz r4,5(r10)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// lbz r3,2(r10)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// rlwinm r5,r7,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// subf r5,r4,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r4.u64;
	// subf r7,r3,r5
	ctx.r7.u64 = ctx.r5.u64 - ctx.r3.u64;
	// addi r4,r7,8
	ctx.r4.s64 = ctx.r7.s64 + 8;
	// srawi r3,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 4;
	// lbzx r7,r3,r11
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// stb r7,2(r9)
	REX_STORE_U8(ctx.r9.u32 + 2, ctx.r7.u8);
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// lbz r5,4(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// addi r5,r7,1
	ctx.r5.s64 = ctx.r7.s64 + 1;
	// srawi r4,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 1;
	// lbzx r3,r4,r11
	ctx.r3.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// stb r3,2(r9)
	REX_STORE_U8(ctx.r9.u32 + 2, ctx.r3.u8);
	// lbz r3,6(r10)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + 6);
	// lbz r4,3(r10)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// lbz r5,4(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// lbz r7,5(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// rlwinm r5,r7,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// subf r5,r3,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r3.u64;
	// subf r7,r4,r5
	ctx.r7.u64 = ctx.r5.u64 - ctx.r4.u64;
	// addi r4,r7,8
	ctx.r4.s64 = ctx.r7.s64 + 8;
	// srawi r3,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 4;
	// lbzx r7,r3,r11
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// stb r7,3(r9)
	REX_STORE_U8(ctx.r9.u32 + 3, ctx.r7.u8);
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// lbz r5,5(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// addi r5,r7,1
	ctx.r5.s64 = ctx.r7.s64 + 1;
	// srawi r4,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 1;
	// lbzx r3,r4,r11
	ctx.r3.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// stb r3,3(r9)
	REX_STORE_U8(ctx.r9.u32 + 3, ctx.r3.u8);
	// lbz r4,7(r10)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 7);
	// lbz r3,4(r10)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// lbz r5,5(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// lbz r7,6(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 6);
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// rlwinm r5,r7,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// subf r5,r4,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r4.u64;
	// subf r7,r3,r5
	ctx.r7.u64 = ctx.r5.u64 - ctx.r3.u64;
	// addi r4,r7,8
	ctx.r4.s64 = ctx.r7.s64 + 8;
	// srawi r3,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 4;
	// lbzx r7,r3,r11
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// stb r7,4(r9)
	REX_STORE_U8(ctx.r9.u32 + 4, ctx.r7.u8);
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// lbz r5,6(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 6);
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// addi r5,r7,1
	ctx.r5.s64 = ctx.r7.s64 + 1;
	// srawi r4,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 1;
	// lbzx r3,r4,r11
	ctx.r3.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// stb r3,4(r9)
	REX_STORE_U8(ctx.r9.u32 + 4, ctx.r3.u8);
	// lbz r4,8(r10)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 8);
	// lbz r3,5(r10)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// lbz r5,6(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 6);
	// lbz r7,7(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 7);
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// rlwinm r5,r7,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// subf r5,r4,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r4.u64;
	// subf r7,r3,r5
	ctx.r7.u64 = ctx.r5.u64 - ctx.r3.u64;
	// addi r4,r7,8
	ctx.r4.s64 = ctx.r7.s64 + 8;
	// srawi r3,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 4;
	// lbzx r7,r3,r11
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// stb r7,5(r9)
	REX_STORE_U8(ctx.r9.u32 + 5, ctx.r7.u8);
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// lbz r5,7(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 7);
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// addi r5,r7,1
	ctx.r5.s64 = ctx.r7.s64 + 1;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// srawi r4,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 1;
	// lbzx r3,r4,r11
	ctx.r3.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// stb r3,5(r9)
	REX_STORE_U8(ctx.r9.u32 + 5, ctx.r3.u8);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// bdnz 0x8239f60c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8239F60C;
	// b 0x822d4ea0
	return;
loc_8239F89C:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// add r10,r5,r6
	ctx.r10.u64 = ctx.r5.u64 + ctx.r6.u64;
	// beq cr6,0x8239ff78
	if (ctx.cr6.eq) goto loc_8239FF78;
	// subf r7,r6,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r6.u64;
	// stw r10,-324(r1)
	REX_STORE_U32(ctx.r1.u32 + -324, ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// subf r31,r6,r7
	r31.u64 = ctx.r7.u64 - ctx.r6.u64;
	// bne cr6,0x8239faa8
	if (!ctx.cr6.eq) goto loc_8239FAA8;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r8,r4,2
	ctx.r8.s64 = ctx.r4.s64 + 2;
	// addi r9,r10,2
	ctx.r9.s64 = ctx.r10.s64 + 2;
	// addi r10,r7,2
	ctx.r10.s64 = ctx.r7.s64 + 2;
	// addi r4,r6,-1
	ctx.r4.s64 = ctx.r6.s64 + -1;
	// addi r3,r6,1
	ctx.r3.s64 = ctx.r6.s64 + 1;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// addi r30,r6,2
	r30.s64 = ctx.r6.s64 + 2;
	// addi r29,r6,3
	r29.s64 = ctx.r6.s64 + 3;
	// addi r28,r6,4
	r28.s64 = ctx.r6.s64 + 4;
	// addi r27,r6,5
	r27.s64 = ctx.r6.s64 + 5;
	// addi r26,r6,-2
	r26.s64 = ctx.r6.s64 + -2;
loc_8239F8F0:
	// lbz r5,-2(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + -2);
	// lbzx r7,r10,r26
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + r26.u32);
	// lbz r25,-2(r9)
	r25.u64 = REX_LOAD_U8(ctx.r9.u32 + -2);
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// lbz r24,0(r31)
	r24.u64 = REX_LOAD_U8(r31.u32 + 0);
	// rlwinm r5,r7,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// subf r5,r25,r7
	ctx.r5.u64 = ctx.r7.u64 - r25.u64;
	// subf r7,r24,r5
	ctx.r7.u64 = ctx.r5.u64 - r24.u64;
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// srawi r5,r7,4
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 4;
	// lbzx r7,r5,r11
	ctx.r7.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r11.u32);
	// stb r7,-2(r8)
	REX_STORE_U8(ctx.r8.u32 + -2, ctx.r7.u8);
	// lbz r25,-1(r9)
	r25.u64 = REX_LOAD_U8(ctx.r9.u32 + -1);
	// lbz r24,1(r31)
	r24.u64 = REX_LOAD_U8(r31.u32 + 1);
	// lbzx r7,r10,r4
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// lbz r5,-1(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + -1);
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// rlwinm r5,r7,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r7,r5
	ctx.r5.u64 = ctx.r7.u64 + ctx.r5.u64;
	// subf r7,r25,r5
	ctx.r7.u64 = ctx.r5.u64 - r25.u64;
	// subf r7,r24,r7
	ctx.r7.u64 = ctx.r7.u64 - r24.u64;
	// addi r5,r7,8
	ctx.r5.s64 = ctx.r7.s64 + 8;
	// srawi r7,r5,4
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r5.s32 >> 4;
	// lbzx r5,r7,r11
	ctx.r5.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// stb r5,-1(r8)
	REX_STORE_U8(ctx.r8.u32 + -1, ctx.r5.u8);
	// lbz r25,2(r31)
	r25.u64 = REX_LOAD_U8(r31.u32 + 2);
	// lbz r24,0(r9)
	r24.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// lbz r5,0(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbzx r7,r10,r6
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r6.u32);
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// rlwinm r5,r7,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// subf r5,r25,r7
	ctx.r5.u64 = ctx.r7.u64 - r25.u64;
	// subf r7,r24,r5
	ctx.r7.u64 = ctx.r5.u64 - r24.u64;
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// srawi r5,r7,4
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 4;
	// lbzx r7,r5,r11
	ctx.r7.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r11.u32);
	// stb r7,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r7.u8);
	// lbz r25,1(r9)
	r25.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// lbz r24,3(r31)
	r24.u64 = REX_LOAD_U8(r31.u32 + 3);
	// lbz r5,1(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// lbzx r7,r10,r3
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r3.u32);
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// rlwinm r5,r7,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r7,r5
	ctx.r5.u64 = ctx.r7.u64 + ctx.r5.u64;
	// subf r7,r25,r5
	ctx.r7.u64 = ctx.r5.u64 - r25.u64;
	// subf r7,r24,r7
	ctx.r7.u64 = ctx.r7.u64 - r24.u64;
	// addi r5,r7,8
	ctx.r5.s64 = ctx.r7.s64 + 8;
	// srawi r7,r5,4
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r5.s32 >> 4;
	// lbzx r5,r7,r11
	ctx.r5.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// stb r5,1(r8)
	REX_STORE_U8(ctx.r8.u32 + 1, ctx.r5.u8);
	// lbz r25,2(r9)
	r25.u64 = REX_LOAD_U8(ctx.r9.u32 + 2);
	// lbz r24,4(r31)
	r24.u64 = REX_LOAD_U8(r31.u32 + 4);
	// lbz r5,2(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// lbzx r7,r10,r30
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + r30.u32);
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// rlwinm r5,r7,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// subf r5,r25,r7
	ctx.r5.u64 = ctx.r7.u64 - r25.u64;
	// subf r7,r24,r5
	ctx.r7.u64 = ctx.r5.u64 - r24.u64;
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// srawi r5,r7,4
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 4;
	// lbzx r7,r5,r11
	ctx.r7.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r11.u32);
	// stb r7,2(r8)
	REX_STORE_U8(ctx.r8.u32 + 2, ctx.r7.u8);
	// lbz r24,3(r9)
	r24.u64 = REX_LOAD_U8(ctx.r9.u32 + 3);
	// lbz r25,5(r31)
	r25.u64 = REX_LOAD_U8(r31.u32 + 5);
	// lbz r5,3(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// lbzx r7,r10,r29
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + r29.u32);
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// rlwinm r5,r7,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r7,r5
	ctx.r5.u64 = ctx.r7.u64 + ctx.r5.u64;
	// subf r7,r24,r5
	ctx.r7.u64 = ctx.r5.u64 - r24.u64;
	// subf r7,r25,r7
	ctx.r7.u64 = ctx.r7.u64 - r25.u64;
	// addi r5,r7,8
	ctx.r5.s64 = ctx.r7.s64 + 8;
	// srawi r7,r5,4
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r5.s32 >> 4;
	// lbzx r5,r7,r11
	ctx.r5.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// stb r5,3(r8)
	REX_STORE_U8(ctx.r8.u32 + 3, ctx.r5.u8);
	// lbz r5,4(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// lbzx r7,r10,r28
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + r28.u32);
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// rlwinm r5,r7,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r25,4(r9)
	r25.u64 = REX_LOAD_U8(ctx.r9.u32 + 4);
	// lbz r24,6(r31)
	r24.u64 = REX_LOAD_U8(r31.u32 + 6);
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// subf r5,r25,r7
	ctx.r5.u64 = ctx.r7.u64 - r25.u64;
	// subf r7,r24,r5
	ctx.r7.u64 = ctx.r5.u64 - r24.u64;
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// srawi r5,r7,4
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 4;
	// lbzx r7,r5,r11
	ctx.r7.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r11.u32);
	// stb r7,4(r8)
	REX_STORE_U8(ctx.r8.u32 + 4, ctx.r7.u8);
	// lbz r24,7(r31)
	r24.u64 = REX_LOAD_U8(r31.u32 + 7);
	// add r31,r31,r6
	r31.u64 = r31.u64 + ctx.r6.u64;
	// lbz r5,5(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// lbzx r7,r10,r27
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + r27.u32);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// lbz r25,5(r9)
	r25.u64 = REX_LOAD_U8(ctx.r9.u32 + 5);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// rlwinm r5,r7,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r7,r5
	ctx.r5.u64 = ctx.r7.u64 + ctx.r5.u64;
	// subf r7,r25,r5
	ctx.r7.u64 = ctx.r5.u64 - r25.u64;
	// subf r7,r24,r7
	ctx.r7.u64 = ctx.r7.u64 - r24.u64;
	// addi r5,r7,8
	ctx.r5.s64 = ctx.r7.s64 + 8;
	// srawi r7,r5,4
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r5.s32 >> 4;
	// lbzx r5,r7,r11
	ctx.r5.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// stb r5,5(r8)
	REX_STORE_U8(ctx.r8.u32 + 5, ctx.r5.u8);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// bdnz 0x8239f8f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8239F8F0;
	// b 0x822d4ea0
	return;
loc_8239FAA8:
	// li r8,11
	ctx.r8.s64 = 11;
	// addi r10,r31,2
	ctx.r10.s64 = r31.s64 + 2;
	// addi r9,r16,-1
	ctx.r9.s64 = r16.s64 + -1;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8239FAB8:
	// lbz r29,0(r10)
	r29.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r27,-1(r10)
	r27.u64 = REX_LOAD_U8(ctx.r10.u32 + -1);
	// lbz r18,-2(r10)
	r18.u64 = REX_LOAD_U8(ctx.r10.u32 + -2);
	// add r25,r27,r29
	r25.u64 = r27.u64 + r29.u64;
	// lbz r30,1(r10)
	r30.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// add r26,r18,r27
	r26.u64 = r18.u64 + r27.u64;
	// lbz r3,2(r10)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// rlwinm r17,r25,3,0,28
	r17.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r5,3(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// add r24,r29,r30
	r24.u64 = r29.u64 + r30.u64;
	// lbz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// add r25,r25,r17
	r25.u64 = r25.u64 + r17.u64;
	// lbz r28,5(r10)
	r28.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// rlwinm r16,r26,3,0,28
	r16.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r15,-3(r10)
	r15.u64 = REX_LOAD_U8(ctx.r10.u32 + -3);
	// stw r25,-328(r1)
	REX_STORE_U32(ctx.r1.u32 + -328, r25.u32);
	// add r23,r3,r30
	r23.u64 = ctx.r3.u64 + r30.u64;
	// rlwinm r4,r24,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r19,6(r10)
	r19.u64 = REX_LOAD_U8(ctx.r10.u32 + 6);
	// add r16,r26,r16
	r16.u64 = r26.u64 + r16.u64;
	// lbz r14,7(r10)
	r14.u64 = REX_LOAD_U8(ctx.r10.u32 + 7);
	// add r22,r5,r3
	r22.u64 = ctx.r5.u64 + ctx.r3.u64;
	// add r4,r24,r4
	ctx.r4.u64 = r24.u64 + ctx.r4.u64;
	// rlwinm r26,r23,3,0,28
	r26.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 3) & 0xFFFFFFF8;
	// add r21,r8,r5
	r21.u64 = ctx.r8.u64 + ctx.r5.u64;
	// add r20,r28,r8
	r20.u64 = r28.u64 + ctx.r8.u64;
	// subf r24,r15,r16
	r24.u64 = r16.u64 - r15.u64;
	// add r23,r23,r26
	r23.u64 = r23.u64 + r26.u64;
	// rlwinm r17,r22,3,0,28
	r17.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r4,r27,r4
	ctx.r4.u64 = ctx.r4.u64 - r27.u64;
	// rlwinm r26,r20,3,0,28
	r26.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r25,r21,3,0,28
	r25.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r27,r29,r24
	r27.u64 = r24.u64 - r29.u64;
	// subf r24,r29,r23
	r24.u64 = r23.u64 - r29.u64;
	// add r22,r22,r17
	r22.u64 = r22.u64 + r17.u64;
	// add r23,r20,r26
	r23.u64 = r20.u64 + r26.u64;
	// add r25,r21,r25
	r25.u64 = r21.u64 + r25.u64;
	// subf r26,r3,r4
	r26.u64 = ctx.r4.u64 - ctx.r3.u64;
	// lwz r16,-328(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -328);
	// addi r4,r27,8
	ctx.r4.s64 = r27.s64 + 8;
	// subf r22,r8,r22
	r22.u64 = r22.u64 - ctx.r8.u64;
	// subf r18,r18,r16
	r18.u64 = r16.u64 - r18.u64;
	// subf r27,r5,r24
	r27.u64 = r24.u64 - ctx.r5.u64;
	// subf r29,r30,r18
	r29.u64 = r18.u64 - r30.u64;
	// subf r25,r28,r25
	r25.u64 = r25.u64 - r28.u64;
	// addi r24,r29,8
	r24.s64 = r29.s64 + 8;
	// subf r29,r30,r22
	r29.u64 = r22.u64 - r30.u64;
	// subf r30,r3,r25
	r30.u64 = r25.u64 - ctx.r3.u64;
	// srawi r4,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 4;
	// subf r23,r19,r23
	r23.u64 = r23.u64 - r19.u64;
	// add r3,r19,r28
	ctx.r3.u64 = r19.u64 + r28.u64;
	// addi r26,r26,8
	r26.s64 = r26.s64 + 8;
	// addi r28,r27,8
	r28.s64 = r27.s64 + 8;
	// subf r5,r5,r23
	ctx.r5.u64 = r23.u64 - ctx.r5.u64;
	// lbzx r4,r4,r11
	ctx.r4.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// srawi r27,r24,4
	ctx.xer.ca = (r24.s32 < 0) & ((r24.u32 & 0xF) != 0);
	r27.s64 = r24.s32 >> 4;
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// srawi r26,r26,4
	ctx.xer.ca = (r26.s32 < 0) & ((r26.u32 & 0xF) != 0);
	r26.s64 = r26.s32 >> 4;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// srawi r28,r28,4
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0xF) != 0);
	r28.s64 = r28.s32 >> 4;
	// stb r4,1(r9)
	REX_STORE_U8(ctx.r9.u32 + 1, ctx.r4.u8);
	// addi r25,r5,8
	r25.s64 = ctx.r5.s64 + 8;
	// lbzx r27,r27,r11
	r27.u64 = REX_LOAD_U8(r27.u32 + ctx.r11.u32);
	// srawi r29,r29,4
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0xF) != 0);
	r29.s64 = r29.s32 >> 4;
	// rlwinm r5,r3,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// lbzx r26,r26,r11
	r26.u64 = REX_LOAD_U8(r26.u32 + ctx.r11.u32);
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// add r3,r3,r5
	ctx.r3.u64 = ctx.r3.u64 + ctx.r5.u64;
	// lbzx r5,r28,r11
	ctx.r5.u64 = REX_LOAD_U8(r28.u32 + ctx.r11.u32);
	// srawi r4,r25,4
	ctx.xer.ca = (r25.s32 < 0) & ((r25.u32 & 0xF) != 0);
	ctx.r4.s64 = r25.s32 >> 4;
	// stb r27,2(r9)
	REX_STORE_U8(ctx.r9.u32 + 2, r27.u8);
	// lbzx r29,r29,r11
	r29.u64 = REX_LOAD_U8(r29.u32 + ctx.r11.u32);
	// subf r3,r14,r3
	ctx.r3.u64 = ctx.r3.u64 - r14.u64;
	// stb r26,3(r9)
	REX_STORE_U8(ctx.r9.u32 + 3, r26.u8);
	// lbzx r30,r30,r11
	r30.u64 = REX_LOAD_U8(r30.u32 + ctx.r11.u32);
	// subf r8,r8,r3
	ctx.r8.u64 = ctx.r3.u64 - ctx.r8.u64;
	// stb r5,4(r9)
	REX_STORE_U8(ctx.r9.u32 + 4, ctx.r5.u8);
	// lbzx r4,r4,r11
	ctx.r4.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// addi r3,r8,8
	ctx.r3.s64 = ctx.r8.s64 + 8;
	// stb r29,5(r9)
	REX_STORE_U8(ctx.r9.u32 + 5, r29.u8);
	// stb r30,6(r9)
	REX_STORE_U8(ctx.r9.u32 + 6, r30.u8);
	// srawi r8,r3,4
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 4;
	// stb r4,7(r9)
	REX_STORE_U8(ctx.r9.u32 + 7, ctx.r4.u8);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// lbzx r5,r8,r11
	ctx.r5.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// stbu r5,8(r9)
	ea = 8 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r5.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x8239fab8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8239FAB8;
	// lwz r4,-324(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -324);
	// subfic r8,r6,-1
	ctx.xer.ca = ctx.r6.u32 <= 4294967295;
	ctx.r8.u64 = static_cast<uint64_t>(-1) - ctx.r6.u64;
	// lwz r3,28(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// add r10,r7,r6
	ctx.r10.u64 = ctx.r7.u64 + ctx.r6.u64;
	// subf r9,r4,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r4.u64;
	// lwz r5,-336(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -336);
	// subf r4,r3,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r3.u64;
	// stw r8,-276(r1)
	REX_STORE_U32(ctx.r1.u32 + -276, ctx.r8.u32);
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// stw r4,-328(r1)
	REX_STORE_U32(ctx.r1.u32 + -328, ctx.r4.u32);
	// subfic r3,r6,1
	ctx.xer.ca = ctx.r6.u32 <= 1;
	ctx.r3.u64 = static_cast<uint64_t>(1) - ctx.r6.u64;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// stw r3,-324(r1)
	REX_STORE_U32(ctx.r1.u32 + -324, ctx.r3.u32);
	// addi r8,r5,8
	ctx.r8.s64 = ctx.r5.s64 + 8;
	// addi r5,r10,2
	ctx.r5.s64 = ctx.r10.s64 + 2;
	// stw r4,-336(r1)
	REX_STORE_U32(ctx.r1.u32 + -336, ctx.r4.u32);
	// addi r30,r9,1
	r30.s64 = ctx.r9.s64 + 1;
loc_8239FC5C:
	// li r9,2
	ctx.r9.s64 = 2;
	// lwz r27,-276(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -276);
	// subf r28,r7,r8
	r28.u64 = ctx.r8.u64 - ctx.r7.u64;
	// lwz r19,-328(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + -328);
	// subf r3,r7,r5
	ctx.r3.u64 = ctx.r5.u64 - ctx.r7.u64;
	// addi r16,r28,-8
	r16.s64 = r28.s64 + -8;
	// addi r28,r8,18
	r28.s64 = ctx.r8.s64 + 18;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r9,r6,-1
	ctx.r9.s64 = ctx.r6.s64 + -1;
	// subf r29,r7,r5
	r29.u64 = ctx.r5.u64 - ctx.r7.u64;
	// stw r28,-296(r1)
	REX_STORE_U32(ctx.r1.u32 + -296, r28.u32);
	// add r10,r9,r5
	ctx.r10.u64 = ctx.r9.u64 + ctx.r5.u64;
	// stw r16,-284(r1)
	REX_STORE_U32(ctx.r1.u32 + -284, r16.u32);
	// addi r9,r6,1
	ctx.r9.s64 = ctx.r6.s64 + 1;
	// stw r10,-280(r1)
	REX_STORE_U32(ctx.r1.u32 + -280, ctx.r10.u32);
	// subf r4,r7,r30
	ctx.r4.u64 = r30.u64 - ctx.r7.u64;
	// add r10,r9,r5
	ctx.r10.u64 = ctx.r9.u64 + ctx.r5.u64;
	// addi r9,r6,-2
	ctx.r9.s64 = ctx.r6.s64 + -2;
	// addi r17,r8,-6
	r17.s64 = ctx.r8.s64 + -6;
	// stw r10,-332(r1)
	REX_STORE_U32(ctx.r1.u32 + -332, ctx.r10.u32);
	// add r15,r3,r9
	r15.u64 = ctx.r3.u64 + ctx.r9.u64;
	// addi r28,r29,-2
	r28.s64 = r29.s64 + -2;
	// stw r17,-288(r1)
	REX_STORE_U32(ctx.r1.u32 + -288, r17.u32);
	// addi r9,r4,-1
	ctx.r9.s64 = ctx.r4.s64 + -1;
	// stw r15,-304(r1)
	REX_STORE_U32(ctx.r1.u32 + -304, r15.u32);
	// stw r28,-292(r1)
	REX_STORE_U32(ctx.r1.u32 + -292, r28.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r26,r8,8
	r26.s64 = ctx.r8.s64 + 8;
	// stw r9,-316(r1)
	REX_STORE_U32(ctx.r1.u32 + -316, ctx.r9.u32);
	// addi r25,r8,16
	r25.s64 = ctx.r8.s64 + 16;
	// addi r24,r8,9
	r24.s64 = ctx.r8.s64 + 9;
	// addi r23,r8,1
	r23.s64 = ctx.r8.s64 + 1;
	// addi r22,r8,17
	r22.s64 = ctx.r8.s64 + 17;
	// addi r21,r8,-7
	r21.s64 = ctx.r8.s64 + -7;
	// add r20,r27,r5
	r20.u64 = r27.u64 + ctx.r5.u64;
	// add r19,r19,r30
	r19.u64 = r19.u64 + r30.u64;
	// b 0x8239fd00
	goto loc_8239FD00;
loc_8239FCF0:
	// lwz r28,-292(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -292);
	// lwz r16,-284(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -284);
	// lwz r17,-288(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -288);
	// lwz r15,-304(r1)
	r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -304);
loc_8239FD00:
	// add r9,r10,r7
	ctx.r9.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lbzx r3,r8,r10
	ctx.r3.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// lbzx r4,r26,r10
	ctx.r4.u64 = REX_LOAD_U8(r26.u32 + ctx.r10.u32);
	// subf r18,r7,r31
	r18.u64 = r31.u64 - ctx.r7.u64;
	// lbzx r27,r10,r7
	r27.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r7.u32);
	// add r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 + ctx.r3.u64;
	// lbzx r14,r25,r10
	r14.u64 = REX_LOAD_U8(r25.u32 + ctx.r10.u32);
	// lbzx r29,r23,r10
	r29.u64 = REX_LOAD_U8(r23.u32 + ctx.r10.u32);
	// lbzx r3,r28,r9
	ctx.r3.u64 = REX_LOAD_U8(r28.u32 + ctx.r9.u32);
	// rlwinm r28,r4,3,0,28
	r28.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lbzx r16,r9,r16
	r16.u64 = REX_LOAD_U8(ctx.r9.u32 + r16.u32);
	// add r3,r3,r27
	ctx.r3.u64 = ctx.r3.u64 + r27.u64;
	// lbzx r27,r18,r9
	r27.u64 = REX_LOAD_U8(r18.u32 + ctx.r9.u32);
	// add r18,r4,r28
	r18.u64 = ctx.r4.u64 + r28.u64;
	// lbzx r15,r15,r9
	r15.u64 = REX_LOAD_U8(r15.u32 + ctx.r9.u32);
	// rlwinm r28,r3,3,0,28
	r28.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// lbzx r4,r24,r10
	ctx.r4.u64 = REX_LOAD_U8(r24.u32 + ctx.r10.u32);
	// subf r18,r14,r18
	r18.u64 = r18.u64 - r14.u64;
	// lbzx r17,r17,r10
	r17.u64 = REX_LOAD_U8(r17.u32 + ctx.r10.u32);
	// add r3,r3,r28
	ctx.r3.u64 = ctx.r3.u64 + r28.u64;
	// lbzx r28,r21,r10
	r28.u64 = REX_LOAD_U8(r21.u32 + ctx.r10.u32);
	// add r4,r29,r4
	ctx.r4.u64 = r29.u64 + ctx.r4.u64;
	// lwz r14,-316(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -316);
	// stw r28,-308(r1)
	REX_STORE_U32(ctx.r1.u32 + -308, r28.u32);
	// subf r28,r16,r18
	r28.u64 = r18.u64 - r16.u64;
	// subf r16,r27,r3
	r16.u64 = ctx.r3.u64 - r27.u64;
	// lbzx r3,r22,r10
	ctx.r3.u64 = REX_LOAD_U8(r22.u32 + ctx.r10.u32);
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// lwz r27,-280(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -280);
	// stw r27,-320(r1)
	REX_STORE_U32(ctx.r1.u32 + -320, r27.u32);
	// addi r27,r8,10
	r27.s64 = ctx.r8.s64 + 10;
	// stw r28,-312(r1)
	REX_STORE_U32(ctx.r1.u32 + -312, r28.u32);
	// subf r28,r15,r16
	r28.u64 = r16.u64 - r15.u64;
	// lwz r16,-312(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -312);
	// srawi r16,r16,4
	ctx.xer.ca = (r16.s32 < 0) & ((r16.u32 & 0xF) != 0);
	r16.s64 = r16.s32 >> 4;
	// stw r3,-300(r1)
	REX_STORE_U32(ctx.r1.u32 + -300, ctx.r3.u32);
	// addi r3,r8,2
	ctx.r3.s64 = ctx.r8.s64 + 2;
	// addi r29,r28,8
	r29.s64 = r28.s64 + 8;
	// lbzx r27,r27,r10
	r27.u64 = REX_LOAD_U8(r27.u32 + ctx.r10.u32);
	// rlwinm r28,r4,3,0,28
	r28.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r18,-296(r1)
	r18.u64 = REX_LOAD_U32(ctx.r1.u32 + -296);
	// srawi r15,r29,4
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0xF) != 0);
	r15.s64 = r29.s32 >> 4;
	// lbzx r29,r16,r11
	r29.u64 = REX_LOAD_U8(r16.u32 + ctx.r11.u32);
	// lwz r16,-308(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// lbzx r3,r3,r10
	ctx.r3.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r10.u32);
	// add r3,r3,r27
	ctx.r3.u64 = ctx.r3.u64 + r27.u64;
	// lbzx r18,r18,r10
	r18.u64 = REX_LOAD_U8(r18.u32 + ctx.r10.u32);
	// add r27,r4,r28
	r27.u64 = ctx.r4.u64 + r28.u64;
	// lbzx r4,r15,r11
	ctx.r4.u64 = REX_LOAD_U8(r15.u32 + ctx.r11.u32);
	// rlwinm r28,r3,3,0,28
	r28.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r27,r16,r27
	r27.u64 = r27.u64 - r16.u64;
	// lwz r16,-300(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -300);
	// add r28,r3,r28
	r28.u64 = ctx.r3.u64 + r28.u64;
	// add r3,r29,r4
	ctx.r3.u64 = r29.u64 + ctx.r4.u64;
	// subf r4,r16,r27
	ctx.r4.u64 = r27.u64 - r16.u64;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// subf r29,r17,r28
	r29.u64 = r28.u64 - r17.u64;
	// lwz r17,-320(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -320);
	// srawi r28,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	r28.s64 = ctx.r3.s32 >> 1;
	// addi r27,r4,8
	r27.s64 = ctx.r4.s64 + 8;
	// subf r4,r18,r29
	ctx.r4.u64 = r29.u64 - r18.u64;
	// add r3,r5,r6
	ctx.r3.u64 = ctx.r5.u64 + ctx.r6.u64;
	// addi r18,r4,8
	r18.s64 = ctx.r4.s64 + 8;
	// lbzx r4,r28,r11
	ctx.r4.u64 = REX_LOAD_U8(r28.u32 + ctx.r11.u32);
	// stbx r4,r14,r9
	REX_STORE_U8(r14.u32 + ctx.r9.u32, ctx.r4.u8);
	// addi r9,r31,1
	ctx.r9.s64 = r31.s64 + 1;
	// lbzx r28,r17,r10
	r28.u64 = REX_LOAD_U8(r17.u32 + ctx.r10.u32);
	// lbzx r4,r19,r10
	ctx.r4.u64 = REX_LOAD_U8(r19.u32 + ctx.r10.u32);
	// lbzx r29,r9,r10
	r29.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// lbzx r9,r20,r10
	ctx.r9.u64 = REX_LOAD_U8(r20.u32 + ctx.r10.u32);
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// rlwinm r4,r9,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// subf r4,r28,r9
	ctx.r4.u64 = ctx.r9.u64 - r28.u64;
	// subf r9,r29,r4
	ctx.r9.u64 = ctx.r4.u64 - r29.u64;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// srawi r4,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r4.s64 = ctx.r9.s32 >> 4;
	// srawi r29,r27,4
	ctx.xer.ca = (r27.s32 < 0) & ((r27.u32 & 0xF) != 0);
	r29.s64 = r27.s32 >> 4;
	// lbzx r9,r4,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// lbzx r4,r29,r11
	ctx.r4.u64 = REX_LOAD_U8(r29.u32 + ctx.r11.u32);
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r17,-332(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -332);
	// addi r4,r7,2
	ctx.r4.s64 = ctx.r7.s64 + 2;
	// lwz r27,-324(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -324);
	// srawi r9,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 1;
	// addi r29,r8,-5
	r29.s64 = ctx.r8.s64 + -5;
	// lbzx r9,r9,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// stbx r9,r30,r10
	REX_STORE_U8(r30.u32 + ctx.r10.u32, ctx.r9.u8);
	// lbzx r28,r3,r10
	r28.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r10.u32);
	// addi r3,r8,11
	ctx.r3.s64 = ctx.r8.s64 + 11;
	// lbzx r4,r4,r10
	ctx.r4.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r10.u32);
	// lbzx r9,r5,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r10.u32);
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// rlwinm r4,r9,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lbzx r3,r3,r10
	ctx.r3.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r10.u32);
	// add r4,r9,r4
	ctx.r4.u64 = ctx.r9.u64 + ctx.r4.u64;
	// addi r9,r31,2
	ctx.r9.s64 = r31.s64 + 2;
	// subf r4,r28,r4
	ctx.r4.u64 = ctx.r4.u64 - r28.u64;
	// lbzx r28,r29,r10
	r28.u64 = REX_LOAD_U8(r29.u32 + ctx.r10.u32);
	// lbzx r9,r9,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// subf r9,r9,r4
	ctx.r9.u64 = ctx.r4.u64 - ctx.r9.u64;
	// addi r4,r9,8
	ctx.r4.s64 = ctx.r9.s64 + 8;
	// addi r9,r8,3
	ctx.r9.s64 = ctx.r8.s64 + 3;
	// srawi r4,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 4;
	// srawi r29,r18,4
	ctx.xer.ca = (r18.s32 < 0) & ((r18.u32 & 0xF) != 0);
	r29.s64 = r18.s32 >> 4;
	// lbzx r9,r9,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// lbzx r4,r4,r11
	ctx.r4.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// lbzx r29,r29,r11
	r29.u64 = REX_LOAD_U8(r29.u32 + ctx.r11.u32);
	// addi r3,r8,19
	ctx.r3.s64 = ctx.r8.s64 + 19;
	// add r4,r4,r29
	ctx.r4.u64 = ctx.r4.u64 + r29.u64;
	// addi r29,r4,1
	r29.s64 = ctx.r4.s64 + 1;
	// addi r4,r5,1
	ctx.r4.s64 = ctx.r5.s64 + 1;
	// lbzx r18,r3,r10
	r18.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r10.u32);
	// rlwinm r3,r9,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// srawi r29,r29,1
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x1) != 0);
	r29.s64 = r29.s32 >> 1;
	// add r3,r9,r3
	ctx.r3.u64 = ctx.r9.u64 + ctx.r3.u64;
	// subf r9,r28,r3
	ctx.r9.u64 = ctx.r3.u64 - r28.u64;
	// subf r9,r18,r9
	ctx.r9.u64 = ctx.r9.u64 - r18.u64;
	// lbzx r3,r29,r11
	ctx.r3.u64 = REX_LOAD_U8(r29.u32 + ctx.r11.u32);
	// addi r29,r9,8
	r29.s64 = ctx.r9.s64 + 8;
	// addi r9,r30,1
	ctx.r9.s64 = r30.s64 + 1;
	// stbx r3,r9,r10
	REX_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r3.u8);
	// add r9,r27,r5
	ctx.r9.u64 = r27.u64 + ctx.r5.u64;
	// lbzx r3,r17,r10
	ctx.r3.u64 = REX_LOAD_U8(r17.u32 + ctx.r10.u32);
	// lbzx r4,r4,r10
	ctx.r4.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r10.u32);
	// lbzx r9,r9,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// addi r4,r31,3
	ctx.r4.s64 = r31.s64 + 3;
	// lbzx r28,r4,r10
	r28.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r10.u32);
	// rlwinm r4,r9,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// subf r4,r3,r9
	ctx.r4.u64 = ctx.r9.u64 - ctx.r3.u64;
	// subf r9,r28,r4
	ctx.r9.u64 = ctx.r4.u64 - r28.u64;
	// addi r3,r9,8
	ctx.r3.s64 = ctx.r9.s64 + 8;
	// srawi r9,r3,4
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 4;
	// srawi r4,r29,4
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0xF) != 0);
	ctx.r4.s64 = r29.s32 >> 4;
	// lbzx r9,r9,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// lbzx r4,r4,r11
	ctx.r4.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// addi r3,r9,1
	ctx.r3.s64 = ctx.r9.s64 + 1;
	// addi r9,r30,2
	ctx.r9.s64 = r30.s64 + 2;
	// srawi r4,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r3.s32 >> 1;
	// lbzx r3,r4,r11
	ctx.r3.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// stbx r3,r9,r10
	REX_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r3.u8);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8239fcf0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8239FCF0;
	// lwz r10,-336(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -336);
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// add r31,r31,r6
	r31.u64 = r31.u64 + ctx.r6.u64;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// stw r10,-336(r1)
	REX_STORE_U32(ctx.r1.u32 + -336, ctx.r10.u32);
	// add r5,r5,r6
	ctx.r5.u64 = ctx.r5.u64 + ctx.r6.u64;
	// add r30,r30,r6
	r30.u64 = r30.u64 + ctx.r6.u64;
	// bne 0x8239fc5c
	if (!ctx.cr0.eq) goto loc_8239FC5C;
	// b 0x822d4ea0
	return;
loc_8239FF78:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// li r8,11
	ctx.r8.s64 = 11;
	// subf r7,r6,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r6.u64;
	// stw r10,-320(r1)
	REX_STORE_U32(ctx.r1.u32 + -320, ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r18,r6,r7
	r18.u64 = ctx.r7.u64 - ctx.r6.u64;
	// addi r9,r16,-1
	ctx.r9.s64 = r16.s64 + -1;
	// stw r18,-328(r1)
	REX_STORE_U32(ctx.r1.u32 + -328, r18.u32);
	// addi r10,r18,1
	ctx.r10.s64 = r18.s64 + 1;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bne cr6,0x823a02c0
	if (!ctx.cr6.eq) goto loc_823A02C0;
loc_8239FFA4:
	// lbz r31,0(r10)
	r31.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r29,-1(r10)
	r29.u64 = REX_LOAD_U8(ctx.r10.u32 + -1);
	// lbz r20,-2(r10)
	r20.u64 = REX_LOAD_U8(ctx.r10.u32 + -2);
	// add r27,r29,r31
	r27.u64 = r29.u64 + r31.u64;
	// lbz r3,1(r10)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// add r28,r29,r20
	r28.u64 = r29.u64 + r20.u64;
	// lbz r5,2(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// rlwinm r19,r27,3,0,28
	r19.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r7,3(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// add r26,r3,r31
	r26.u64 = ctx.r3.u64 + r31.u64;
	// lbz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// add r27,r27,r19
	r27.u64 = r27.u64 + r19.u64;
	// lbz r30,5(r10)
	r30.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// rlwinm r17,r28,3,0,28
	r17.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r15,-3(r10)
	r15.u64 = REX_LOAD_U8(ctx.r10.u32 + -3);
	// stw r27,-332(r1)
	REX_STORE_U32(ctx.r1.u32 + -332, r27.u32);
	// add r25,r3,r5
	r25.u64 = ctx.r3.u64 + ctx.r5.u64;
	// rlwinm r18,r26,3,0,28
	r18.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r21,6(r10)
	r21.u64 = REX_LOAD_U8(ctx.r10.u32 + 6);
	// add r17,r28,r17
	r17.u64 = r28.u64 + r17.u64;
	// lbz r14,7(r10)
	r14.u64 = REX_LOAD_U8(ctx.r10.u32 + 7);
	// add r24,r7,r5
	r24.u64 = ctx.r7.u64 + ctx.r5.u64;
	// rlwinm r28,r25,3,0,28
	r28.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 3) & 0xFFFFFFF8;
	// add r26,r26,r18
	r26.u64 = r26.u64 + r18.u64;
	// add r22,r30,r8
	r22.u64 = r30.u64 + ctx.r8.u64;
	// rlwinm r19,r24,3,0,28
	r19.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r18,r15,r17
	r18.u64 = r17.u64 - r15.u64;
	// add r23,r8,r7
	r23.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r25,r25,r28
	r25.u64 = r25.u64 + r28.u64;
	// add r24,r24,r19
	r24.u64 = r24.u64 + r19.u64;
	// rlwinm r28,r22,3,0,28
	r28.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r26,r29,r26
	r26.u64 = r26.u64 - r29.u64;
	// rlwinm r27,r23,3,0,28
	r27.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r29,r31,r18
	r29.u64 = r18.u64 - r31.u64;
	// subf r25,r31,r25
	r25.u64 = r25.u64 - r31.u64;
	// subf r24,r3,r24
	r24.u64 = r24.u64 - ctx.r3.u64;
	// add r28,r22,r28
	r28.u64 = r22.u64 + r28.u64;
	// add r27,r23,r27
	r27.u64 = r23.u64 + r27.u64;
	// lwz r17,-332(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -332);
	// subf r28,r21,r28
	r28.u64 = r28.u64 - r21.u64;
	// subf r27,r30,r27
	r27.u64 = r27.u64 - r30.u64;
	// subf r17,r3,r17
	r17.u64 = r17.u64 - ctx.r3.u64;
	// subf r3,r5,r26
	ctx.r3.u64 = r26.u64 - ctx.r5.u64;
	// subf r31,r20,r17
	r31.u64 = r17.u64 - r20.u64;
	// addi r26,r29,8
	r26.s64 = r29.s64 + 8;
	// subf r29,r7,r25
	r29.u64 = r25.u64 - ctx.r7.u64;
	// addi r25,r31,8
	r25.s64 = r31.s64 + 8;
	// subf r31,r8,r24
	r31.u64 = r24.u64 - ctx.r8.u64;
	// subf r7,r7,r28
	ctx.r7.u64 = r28.u64 - ctx.r7.u64;
	// addi r24,r3,8
	r24.s64 = ctx.r3.s64 + 8;
	// subf r3,r5,r27
	ctx.r3.u64 = r27.u64 - ctx.r5.u64;
	// srawi r28,r26,4
	ctx.xer.ca = (r26.s32 < 0) & ((r26.u32 & 0xF) != 0);
	r28.s64 = r26.s32 >> 4;
	// add r5,r21,r30
	ctx.r5.u64 = r21.u64 + r30.u64;
	// addi r30,r29,8
	r30.s64 = r29.s64 + 8;
	// srawi r29,r25,4
	ctx.xer.ca = (r25.s32 < 0) & ((r25.u32 & 0xF) != 0);
	r29.s64 = r25.s32 >> 4;
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// srawi r27,r24,4
	ctx.xer.ca = (r24.s32 < 0) & ((r24.u32 & 0xF) != 0);
	r27.s64 = r24.s32 >> 4;
	// lbzx r28,r28,r11
	r28.u64 = REX_LOAD_U8(r28.u32 + ctx.r11.u32);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// addi r26,r7,8
	r26.s64 = ctx.r7.s64 + 8;
	// lbzx r29,r29,r11
	r29.u64 = REX_LOAD_U8(r29.u32 + ctx.r11.u32);
	// srawi r31,r31,4
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0xF) != 0);
	r31.s64 = r31.s32 >> 4;
	// rlwinm r7,r5,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// stb r28,1(r9)
	REX_STORE_U8(ctx.r9.u32 + 1, r28.u8);
	// srawi r3,r3,4
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 4;
	// lbzx r27,r27,r11
	r27.u64 = REX_LOAD_U8(r27.u32 + ctx.r11.u32);
	// add r7,r5,r7
	ctx.r7.u64 = ctx.r5.u64 + ctx.r7.u64;
	// lbzx r5,r30,r11
	ctx.r5.u64 = REX_LOAD_U8(r30.u32 + ctx.r11.u32);
	// srawi r28,r26,4
	ctx.xer.ca = (r26.s32 < 0) & ((r26.u32 & 0xF) != 0);
	r28.s64 = r26.s32 >> 4;
	// stb r29,2(r9)
	REX_STORE_U8(ctx.r9.u32 + 2, r29.u8);
	// lbzx r31,r31,r11
	r31.u64 = REX_LOAD_U8(r31.u32 + ctx.r11.u32);
	// subf r7,r14,r7
	ctx.r7.u64 = ctx.r7.u64 - r14.u64;
	// lbzx r3,r3,r11
	ctx.r3.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// subf r8,r8,r7
	ctx.r8.u64 = ctx.r7.u64 - ctx.r8.u64;
	// stb r27,3(r9)
	REX_STORE_U8(ctx.r9.u32 + 3, r27.u8);
	// lbzx r30,r28,r11
	r30.u64 = REX_LOAD_U8(r28.u32 + ctx.r11.u32);
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// stb r5,4(r9)
	REX_STORE_U8(ctx.r9.u32 + 4, ctx.r5.u8);
	// stb r31,5(r9)
	REX_STORE_U8(ctx.r9.u32 + 5, r31.u8);
	// stb r3,6(r9)
	REX_STORE_U8(ctx.r9.u32 + 6, ctx.r3.u8);
	// srawi r7,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 4;
	// stb r30,7(r9)
	REX_STORE_U8(ctx.r9.u32 + 7, r30.u8);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// lbzx r5,r7,r11
	ctx.r5.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// stbu r5,8(r9)
	ea = 8 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r5.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x8239ffa4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8239FFA4;
	// li r8,8
	ctx.r8.s64 = 8;
	// addi r9,r4,2
	ctx.r9.s64 = ctx.r4.s64 + 2;
	// addi r10,r16,8
	ctx.r10.s64 = r16.s64 + 8;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_823A0110:
	// lbz r7,8(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 8);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r5,1(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbz r7,9(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 9);
	// lbz r31,16(r10)
	r31.u64 = REX_LOAD_U8(ctx.r10.u32 + 16);
	// rlwinm r4,r8,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r30,-8(r10)
	r30.u64 = REX_LOAD_U8(ctx.r10.u32 + -8);
	// lbz r29,17(r10)
	r29.u64 = REX_LOAD_U8(ctx.r10.u32 + 17);
	// add r4,r8,r4
	ctx.r4.u64 = ctx.r8.u64 + ctx.r4.u64;
	// lbz r28,-7(r10)
	r28.u64 = REX_LOAD_U8(ctx.r10.u32 + -7);
	// add r8,r7,r5
	ctx.r8.u64 = ctx.r7.u64 + ctx.r5.u64;
	// lbz r3,10(r10)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + 10);
	// subf r5,r31,r4
	ctx.r5.u64 = ctx.r4.u64 - r31.u64;
	// lbz r31,2(r10)
	r31.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// rlwinm r7,r8,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r25,18(r10)
	r25.u64 = REX_LOAD_U8(ctx.r10.u32 + 18);
	// subf r5,r30,r5
	ctx.r5.u64 = ctx.r5.u64 - r30.u64;
	// lbz r27,19(r10)
	r27.u64 = REX_LOAD_U8(ctx.r10.u32 + 19);
	// add r4,r8,r7
	ctx.r4.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbz r7,11(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 11);
	// addi r8,r5,8
	ctx.r8.s64 = ctx.r5.s64 + 8;
	// lbz r5,3(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// subf r4,r29,r4
	ctx.r4.u64 = ctx.r4.u64 - r29.u64;
	// lbz r26,-5(r10)
	r26.u64 = REX_LOAD_U8(ctx.r10.u32 + -5);
	// srawi r24,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	r24.s64 = ctx.r8.s32 >> 4;
	// lbz r30,12(r10)
	r30.u64 = REX_LOAD_U8(ctx.r10.u32 + 12);
	// subf r4,r28,r4
	ctx.r4.u64 = ctx.r4.u64 - r28.u64;
	// lbz r29,4(r10)
	r29.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// add r8,r3,r31
	ctx.r8.u64 = ctx.r3.u64 + r31.u64;
	// lbz r31,-6(r10)
	r31.u64 = REX_LOAD_U8(ctx.r10.u32 + -6);
	// addi r28,r4,8
	r28.s64 = ctx.r4.s64 + 8;
	// lbz r3,5(r10)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// rlwinm r4,r8,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r23,20(r10)
	r23.u64 = REX_LOAD_U8(ctx.r10.u32 + 20);
	// lbzx r24,r24,r11
	r24.u64 = REX_LOAD_U8(r24.u32 + ctx.r11.u32);
	// srawi r28,r28,4
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0xF) != 0);
	r28.s64 = r28.s32 >> 4;
	// add r22,r8,r4
	r22.u64 = ctx.r8.u64 + ctx.r4.u64;
	// lbz r4,13(r10)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 13);
	// add r8,r7,r5
	ctx.r8.u64 = ctx.r7.u64 + ctx.r5.u64;
	// lbz r21,-4(r10)
	r21.u64 = REX_LOAD_U8(ctx.r10.u32 + -4);
	// subf r5,r25,r22
	ctx.r5.u64 = r22.u64 - r25.u64;
	// lbz r25,21(r10)
	r25.u64 = REX_LOAD_U8(ctx.r10.u32 + 21);
	// rlwinm r7,r8,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r22,-3(r10)
	r22.u64 = REX_LOAD_U8(ctx.r10.u32 + -3);
	// subf r5,r31,r5
	ctx.r5.u64 = ctx.r5.u64 - r31.u64;
	// stb r24,-2(r9)
	REX_STORE_U8(ctx.r9.u32 + -2, r24.u8);
	// add r31,r8,r7
	r31.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbz r7,14(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 14);
	// add r8,r30,r29
	ctx.r8.u64 = r30.u64 + r29.u64;
	// subf r31,r27,r31
	r31.u64 = r31.u64 - r27.u64;
	// addi r30,r5,8
	r30.s64 = ctx.r5.s64 + 8;
	// lbz r5,6(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 6);
	// subf r31,r26,r31
	r31.u64 = r31.u64 - r26.u64;
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// addi r29,r31,8
	r29.s64 = r31.s64 + 8;
	// rlwinm r31,r8,3,0,28
	r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// srawi r29,r29,4
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0xF) != 0);
	r29.s64 = r29.s32 >> 4;
	// add r31,r8,r31
	r31.u64 = ctx.r8.u64 + r31.u64;
	// add r8,r4,r3
	ctx.r8.u64 = ctx.r4.u64 + ctx.r3.u64;
	// subf r4,r23,r31
	ctx.r4.u64 = r31.u64 - r23.u64;
	// rlwinm r3,r8,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r4,r21,r4
	ctx.r4.u64 = ctx.r4.u64 - r21.u64;
	// add r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 + ctx.r3.u64;
	// addi r8,r4,8
	ctx.r8.s64 = ctx.r4.s64 + 8;
	// subf r4,r25,r3
	ctx.r4.u64 = ctx.r3.u64 - r25.u64;
	// srawi r3,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r8.s32 >> 4;
	// subf r8,r22,r4
	ctx.r8.u64 = ctx.r4.u64 - r22.u64;
	// lbzx r4,r28,r11
	ctx.r4.u64 = REX_LOAD_U8(r28.u32 + ctx.r11.u32);
	// addi r31,r8,8
	r31.s64 = ctx.r8.s64 + 8;
	// add r8,r7,r5
	ctx.r8.u64 = ctx.r7.u64 + ctx.r5.u64;
	// srawi r7,r31,4
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0xF) != 0);
	ctx.r7.s64 = r31.s32 >> 4;
	// stb r4,-1(r9)
	REX_STORE_U8(ctx.r9.u32 + -1, ctx.r4.u8);
	// lbzx r5,r30,r11
	ctx.r5.u64 = REX_LOAD_U8(r30.u32 + ctx.r11.u32);
	// stb r5,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r5.u8);
	// lbzx r4,r29,r11
	ctx.r4.u64 = REX_LOAD_U8(r29.u32 + ctx.r11.u32);
	// stb r4,1(r9)
	REX_STORE_U8(ctx.r9.u32 + 1, ctx.r4.u8);
	// lbzx r3,r3,r11
	ctx.r3.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// stb r3,2(r9)
	REX_STORE_U8(ctx.r9.u32 + 2, ctx.r3.u8);
	// lbzx r7,r7,r11
	ctx.r7.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// stb r7,3(r9)
	REX_STORE_U8(ctx.r9.u32 + 3, ctx.r7.u8);
	// rlwinm r5,r8,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r4,7(r10)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 7);
	// lbz r7,15(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 15);
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// lbz r3,22(r10)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + 22);
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// lbz r5,-2(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + -2);
	// subf r4,r3,r8
	ctx.r4.u64 = ctx.r8.u64 - ctx.r3.u64;
	// lbz r3,23(r10)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + 23);
	// rlwinm r8,r7,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r31,-1(r10)
	r31.u64 = REX_LOAD_U8(ctx.r10.u32 + -1);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// subf r8,r5,r4
	ctx.r8.u64 = ctx.r4.u64 - ctx.r5.u64;
	// subf r5,r3,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r3.u64;
	// addi r4,r8,8
	ctx.r4.s64 = ctx.r8.s64 + 8;
	// subf r8,r31,r5
	ctx.r8.u64 = ctx.r5.u64 - r31.u64;
	// srawi r3,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 4;
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// srawi r7,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 4;
	// lbzx r5,r3,r11
	ctx.r5.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// stb r5,4(r9)
	REX_STORE_U8(ctx.r9.u32 + 4, ctx.r5.u8);
	// lbzx r4,r7,r11
	ctx.r4.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// stb r4,5(r9)
	REX_STORE_U8(ctx.r9.u32 + 5, ctx.r4.u8);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// bdnz 0x823a0110
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823A0110;
	// b 0x822d4ea0
	return;
loc_823A02C0:
	// lbz r30,0(r10)
	r30.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r28,-1(r10)
	r28.u64 = REX_LOAD_U8(ctx.r10.u32 + -1);
	// lbz r19,-2(r10)
	r19.u64 = REX_LOAD_U8(ctx.r10.u32 + -2);
	// add r26,r30,r28
	r26.u64 = r30.u64 + r28.u64;
	// lbz r31,1(r10)
	r31.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// add r27,r28,r19
	r27.u64 = r28.u64 + r19.u64;
	// lbz r3,2(r10)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// rlwinm r17,r26,3,0,28
	r17.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r5,3(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// add r25,r30,r31
	r25.u64 = r30.u64 + r31.u64;
	// lbz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// add r26,r26,r17
	r26.u64 = r26.u64 + r17.u64;
	// lbz r15,-3(r10)
	r15.u64 = REX_LOAD_U8(ctx.r10.u32 + -3);
	// rlwinm r16,r27,3,0,28
	r16.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r29,5(r10)
	r29.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// stw r26,-332(r1)
	REX_STORE_U32(ctx.r1.u32 + -332, r26.u32);
	// rlwinm r4,r25,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 3) & 0xFFFFFFF8;
	// add r24,r3,r31
	r24.u64 = ctx.r3.u64 + r31.u64;
	// lbz r20,6(r10)
	r20.u64 = REX_LOAD_U8(ctx.r10.u32 + 6);
	// add r16,r27,r16
	r16.u64 = r27.u64 + r16.u64;
	// lbz r14,7(r10)
	r14.u64 = REX_LOAD_U8(ctx.r10.u32 + 7);
	// add r22,r8,r5
	r22.u64 = ctx.r8.u64 + ctx.r5.u64;
	// add r23,r5,r3
	r23.u64 = ctx.r5.u64 + ctx.r3.u64;
	// add r4,r25,r4
	ctx.r4.u64 = r25.u64 + ctx.r4.u64;
	// rlwinm r27,r24,3,0,28
	r27.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r25,r15,r16
	r25.u64 = r16.u64 - r15.u64;
	// add r21,r29,r8
	r21.u64 = r29.u64 + ctx.r8.u64;
	// rlwinm r26,r22,3,0,28
	r26.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r17,r23,3,0,28
	r17.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 3) & 0xFFFFFFF8;
	// add r24,r24,r27
	r24.u64 = r24.u64 + r27.u64;
	// add r22,r22,r26
	r22.u64 = r22.u64 + r26.u64;
	// rlwinm r27,r21,3,0,28
	r27.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r26,r30,r25
	r26.u64 = r25.u64 - r30.u64;
	// subf r4,r3,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r3.u64;
	// add r23,r23,r17
	r23.u64 = r23.u64 + r17.u64;
	// subf r25,r30,r24
	r25.u64 = r24.u64 - r30.u64;
	// add r24,r21,r27
	r24.u64 = r21.u64 + r27.u64;
	// subf r27,r28,r4
	r27.u64 = ctx.r4.u64 - r28.u64;
	// lwz r16,-332(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -332);
	// subf r23,r8,r23
	r23.u64 = r23.u64 - ctx.r8.u64;
	// subf r28,r5,r25
	r28.u64 = r25.u64 - ctx.r5.u64;
	// subf r16,r31,r16
	r16.u64 = r16.u64 - r31.u64;
	// subf r4,r29,r22
	ctx.r4.u64 = r22.u64 - r29.u64;
	// subf r30,r19,r16
	r30.u64 = r16.u64 - r19.u64;
	// addi r26,r26,8
	r26.s64 = r26.s64 + 8;
	// addi r25,r30,8
	r25.s64 = r30.s64 + 8;
	// subf r30,r31,r23
	r30.u64 = r23.u64 - r31.u64;
	// subf r31,r3,r4
	r31.u64 = ctx.r4.u64 - ctx.r3.u64;
	// addi r4,r27,8
	ctx.r4.s64 = r27.s64 + 8;
	// srawi r27,r26,4
	ctx.xer.ca = (r26.s32 < 0) & ((r26.u32 & 0xF) != 0);
	r27.s64 = r26.s32 >> 4;
	// subf r24,r20,r24
	r24.u64 = r24.u64 - r20.u64;
	// add r3,r20,r29
	ctx.r3.u64 = r20.u64 + r29.u64;
	// addi r29,r28,8
	r29.s64 = r28.s64 + 8;
	// subf r5,r5,r24
	ctx.r5.u64 = r24.u64 - ctx.r5.u64;
	// srawi r28,r25,4
	ctx.xer.ca = (r25.s32 < 0) & ((r25.u32 & 0xF) != 0);
	r28.s64 = r25.s32 >> 4;
	// lbzx r27,r27,r11
	r27.u64 = REX_LOAD_U8(r27.u32 + ctx.r11.u32);
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// srawi r4,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 4;
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// srawi r29,r29,4
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0xF) != 0);
	r29.s64 = r29.s32 >> 4;
	// addi r26,r5,8
	r26.s64 = ctx.r5.s64 + 8;
	// stb r27,1(r9)
	REX_STORE_U8(ctx.r9.u32 + 1, r27.u8);
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// lbzx r28,r28,r11
	r28.u64 = REX_LOAD_U8(r28.u32 + ctx.r11.u32);
	// rlwinm r5,r3,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// lbzx r4,r4,r11
	ctx.r4.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// srawi r31,r31,4
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0xF) != 0);
	r31.s64 = r31.s32 >> 4;
	// add r3,r3,r5
	ctx.r3.u64 = ctx.r3.u64 + ctx.r5.u64;
	// lbzx r5,r29,r11
	ctx.r5.u64 = REX_LOAD_U8(r29.u32 + ctx.r11.u32);
	// srawi r27,r26,4
	ctx.xer.ca = (r26.s32 < 0) & ((r26.u32 & 0xF) != 0);
	r27.s64 = r26.s32 >> 4;
	// lbzx r30,r30,r11
	r30.u64 = REX_LOAD_U8(r30.u32 + ctx.r11.u32);
	// subf r3,r14,r3
	ctx.r3.u64 = ctx.r3.u64 - r14.u64;
	// stb r28,2(r9)
	REX_STORE_U8(ctx.r9.u32 + 2, r28.u8);
	// lbzx r31,r31,r11
	r31.u64 = REX_LOAD_U8(r31.u32 + ctx.r11.u32);
	// subf r8,r8,r3
	ctx.r8.u64 = ctx.r3.u64 - ctx.r8.u64;
	// stb r4,3(r9)
	REX_STORE_U8(ctx.r9.u32 + 3, ctx.r4.u8);
	// lbzx r29,r27,r11
	r29.u64 = REX_LOAD_U8(r27.u32 + ctx.r11.u32);
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// stb r5,4(r9)
	REX_STORE_U8(ctx.r9.u32 + 4, ctx.r5.u8);
	// stb r30,5(r9)
	REX_STORE_U8(ctx.r9.u32 + 5, r30.u8);
	// stb r31,6(r9)
	REX_STORE_U8(ctx.r9.u32 + 6, r31.u8);
	// srawi r5,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 4;
	// stb r29,7(r9)
	REX_STORE_U8(ctx.r9.u32 + 7, r29.u8);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// lbzx r4,r5,r11
	ctx.r4.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r11.u32);
	// stbu r4,8(r9)
	ea = 8 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r4.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x823a02c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823A02C0;
	// lwz r4,-320(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -320);
	// subfic r8,r6,-1
	ctx.xer.ca = ctx.r6.u32 <= 4294967295;
	ctx.r8.u64 = static_cast<uint64_t>(-1) - ctx.r6.u64;
	// lwz r3,28(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// add r10,r7,r6
	ctx.r10.u64 = ctx.r7.u64 + ctx.r6.u64;
	// subf r9,r4,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r4.u64;
	// lwz r5,-336(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -336);
	// subf r4,r3,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r3.u64;
	// stw r8,-276(r1)
	REX_STORE_U32(ctx.r1.u32 + -276, ctx.r8.u32);
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// stw r4,-332(r1)
	REX_STORE_U32(ctx.r1.u32 + -332, ctx.r4.u32);
	// subfic r3,r6,1
	ctx.xer.ca = ctx.r6.u32 <= 1;
	ctx.r3.u64 = static_cast<uint64_t>(1) - ctx.r6.u64;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// stw r3,-324(r1)
	REX_STORE_U32(ctx.r1.u32 + -324, ctx.r3.u32);
	// addi r8,r5,8
	ctx.r8.s64 = ctx.r5.s64 + 8;
	// addi r5,r10,2
	ctx.r5.s64 = ctx.r10.s64 + 2;
	// stw r4,-336(r1)
	REX_STORE_U32(ctx.r1.u32 + -336, ctx.r4.u32);
	// addi r31,r9,1
	r31.s64 = ctx.r9.s64 + 1;
loc_823A0464:
	// li r9,2
	ctx.r9.s64 = 2;
	// lwz r28,-276(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -276);
	// subf r29,r7,r8
	r29.u64 = ctx.r8.u64 - ctx.r7.u64;
	// lwz r20,-332(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + -332);
	// subf r3,r7,r5
	ctx.r3.u64 = ctx.r5.u64 - ctx.r7.u64;
	// addi r16,r29,-8
	r16.s64 = r29.s64 + -8;
	// addi r29,r8,18
	r29.s64 = ctx.r8.s64 + 18;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r9,r6,-1
	ctx.r9.s64 = ctx.r6.s64 + -1;
	// subf r30,r7,r5
	r30.u64 = ctx.r5.u64 - ctx.r7.u64;
	// stw r29,-296(r1)
	REX_STORE_U32(ctx.r1.u32 + -296, r29.u32);
	// add r10,r9,r5
	ctx.r10.u64 = ctx.r9.u64 + ctx.r5.u64;
	// stw r16,-312(r1)
	REX_STORE_U32(ctx.r1.u32 + -312, r16.u32);
	// addi r9,r6,1
	ctx.r9.s64 = ctx.r6.s64 + 1;
	// stw r10,-316(r1)
	REX_STORE_U32(ctx.r1.u32 + -316, ctx.r10.u32);
	// subf r4,r7,r31
	ctx.r4.u64 = r31.u64 - ctx.r7.u64;
	// add r10,r9,r5
	ctx.r10.u64 = ctx.r9.u64 + ctx.r5.u64;
	// addi r9,r6,-2
	ctx.r9.s64 = ctx.r6.s64 + -2;
	// addi r17,r8,-6
	r17.s64 = ctx.r8.s64 + -6;
	// stw r10,-272(r1)
	REX_STORE_U32(ctx.r1.u32 + -272, ctx.r10.u32);
	// add r15,r3,r9
	r15.u64 = ctx.r3.u64 + ctx.r9.u64;
	// addi r29,r30,-2
	r29.s64 = r30.s64 + -2;
	// stw r17,-308(r1)
	REX_STORE_U32(ctx.r1.u32 + -308, r17.u32);
	// addi r9,r4,-1
	ctx.r9.s64 = ctx.r4.s64 + -1;
	// stw r15,-300(r1)
	REX_STORE_U32(ctx.r1.u32 + -300, r15.u32);
	// stw r29,-320(r1)
	REX_STORE_U32(ctx.r1.u32 + -320, r29.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r27,r8,8
	r27.s64 = ctx.r8.s64 + 8;
	// stw r9,-280(r1)
	REX_STORE_U32(ctx.r1.u32 + -280, ctx.r9.u32);
	// addi r26,r8,16
	r26.s64 = ctx.r8.s64 + 16;
	// addi r25,r8,9
	r25.s64 = ctx.r8.s64 + 9;
	// addi r24,r8,1
	r24.s64 = ctx.r8.s64 + 1;
	// addi r23,r8,17
	r23.s64 = ctx.r8.s64 + 17;
	// addi r22,r8,-7
	r22.s64 = ctx.r8.s64 + -7;
	// add r21,r28,r5
	r21.u64 = r28.u64 + ctx.r5.u64;
	// add r20,r20,r31
	r20.u64 = r20.u64 + r31.u64;
	// addi r19,r18,1
	r19.s64 = r18.s64 + 1;
	// b 0x823a050c
	goto loc_823A050C;
loc_823A04FC:
	// lwz r29,-320(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -320);
	// lwz r15,-300(r1)
	r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -300);
	// lwz r17,-308(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// lwz r16,-312(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -312);
loc_823A050C:
	// add r9,r10,r7
	ctx.r9.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lbzx r3,r10,r8
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r8.u32);
	// lbzx r4,r27,r10
	ctx.r4.u64 = REX_LOAD_U8(r27.u32 + ctx.r10.u32);
	// subf r18,r7,r18
	r18.u64 = r18.u64 - ctx.r7.u64;
	// lbzx r28,r10,r7
	r28.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r7.u32);
	// add r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 + ctx.r3.u64;
	// lbzx r14,r26,r10
	r14.u64 = REX_LOAD_U8(r26.u32 + ctx.r10.u32);
	// lbzx r30,r25,r10
	r30.u64 = REX_LOAD_U8(r25.u32 + ctx.r10.u32);
	// lbzx r3,r29,r9
	ctx.r3.u64 = REX_LOAD_U8(r29.u32 + ctx.r9.u32);
	// rlwinm r29,r4,3,0,28
	r29.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lbzx r16,r16,r9
	r16.u64 = REX_LOAD_U8(r16.u32 + ctx.r9.u32);
	// add r3,r3,r28
	ctx.r3.u64 = ctx.r3.u64 + r28.u64;
	// lbzx r28,r18,r9
	r28.u64 = REX_LOAD_U8(r18.u32 + ctx.r9.u32);
	// add r18,r4,r29
	r18.u64 = ctx.r4.u64 + r29.u64;
	// lbzx r15,r15,r9
	r15.u64 = REX_LOAD_U8(r15.u32 + ctx.r9.u32);
	// rlwinm r29,r3,3,0,28
	r29.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// lbzx r4,r24,r10
	ctx.r4.u64 = REX_LOAD_U8(r24.u32 + ctx.r10.u32);
	// subf r18,r14,r18
	r18.u64 = r18.u64 - r14.u64;
	// lbzx r17,r17,r10
	r17.u64 = REX_LOAD_U8(r17.u32 + ctx.r10.u32);
	// add r3,r3,r29
	ctx.r3.u64 = ctx.r3.u64 + r29.u64;
	// lbzx r29,r22,r10
	r29.u64 = REX_LOAD_U8(r22.u32 + ctx.r10.u32);
	// add r4,r30,r4
	ctx.r4.u64 = r30.u64 + ctx.r4.u64;
	// lwz r14,-280(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -280);
	// stw r29,-288(r1)
	REX_STORE_U32(ctx.r1.u32 + -288, r29.u32);
	// subf r29,r16,r18
	r29.u64 = r18.u64 - r16.u64;
	// subf r16,r28,r3
	r16.u64 = ctx.r3.u64 - r28.u64;
	// lbzx r3,r23,r10
	ctx.r3.u64 = REX_LOAD_U8(r23.u32 + ctx.r10.u32);
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// lwz r28,-316(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -316);
	// lwz r18,-296(r1)
	r18.u64 = REX_LOAD_U32(ctx.r1.u32 + -296);
	// stw r29,-304(r1)
	REX_STORE_U32(ctx.r1.u32 + -304, r29.u32);
	// subf r29,r15,r16
	r29.u64 = r16.u64 - r15.u64;
	// stw r3,-284(r1)
	REX_STORE_U32(ctx.r1.u32 + -284, ctx.r3.u32);
	// addi r3,r8,2
	ctx.r3.s64 = ctx.r8.s64 + 2;
	// stw r28,-292(r1)
	REX_STORE_U32(ctx.r1.u32 + -292, r28.u32);
	// addi r28,r8,10
	r28.s64 = ctx.r8.s64 + 10;
	// addi r30,r29,8
	r30.s64 = r29.s64 + 8;
	// lbzx r18,r18,r10
	r18.u64 = REX_LOAD_U8(r18.u32 + ctx.r10.u32);
	// rlwinm r29,r4,3,0,28
	r29.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lbzx r3,r3,r10
	ctx.r3.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r10.u32);
	// lbzx r28,r28,r10
	r28.u64 = REX_LOAD_U8(r28.u32 + ctx.r10.u32);
	// add r3,r3,r28
	ctx.r3.u64 = ctx.r3.u64 + r28.u64;
	// add r28,r4,r29
	r28.u64 = ctx.r4.u64 + r29.u64;
	// rlwinm r29,r3,3,0,28
	r29.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r29,r3,r29
	r29.u64 = ctx.r3.u64 + r29.u64;
	// lwz r16,-304(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -304);
	// srawi r16,r16,4
	ctx.xer.ca = (r16.s32 < 0) & ((r16.u32 & 0xF) != 0);
	r16.s64 = r16.s32 >> 4;
	// srawi r15,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r15.s64 = r30.s32 >> 4;
	// lbzx r30,r16,r11
	r30.u64 = REX_LOAD_U8(r16.u32 + ctx.r11.u32);
	// lbzx r4,r15,r11
	ctx.r4.u64 = REX_LOAD_U8(r15.u32 + ctx.r11.u32);
	// lwz r16,-288(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -288);
	// add r3,r30,r4
	ctx.r3.u64 = r30.u64 + ctx.r4.u64;
	// subf r28,r16,r28
	r28.u64 = r28.u64 - r16.u64;
	// lwz r16,-284(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -284);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// subf r4,r16,r28
	ctx.r4.u64 = r28.u64 - r16.u64;
	// subf r30,r17,r29
	r30.u64 = r29.u64 - r17.u64;
	// srawi r29,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	r29.s64 = ctx.r3.s32 >> 1;
	// addi r28,r4,8
	r28.s64 = ctx.r4.s64 + 8;
	// subf r4,r18,r30
	ctx.r4.u64 = r30.u64 - r18.u64;
	// lwz r18,-292(r1)
	r18.u64 = REX_LOAD_U32(ctx.r1.u32 + -292);
	// add r3,r5,r6
	ctx.r3.u64 = ctx.r5.u64 + ctx.r6.u64;
	// addi r17,r4,8
	r17.s64 = ctx.r4.s64 + 8;
	// lbzx r4,r29,r11
	ctx.r4.u64 = REX_LOAD_U8(r29.u32 + ctx.r11.u32);
	// stbx r4,r14,r9
	REX_STORE_U8(r14.u32 + ctx.r9.u32, ctx.r4.u8);
	// lbzx r29,r10,r19
	r29.u64 = REX_LOAD_U8(ctx.r10.u32 + r19.u32);
	// lbzx r4,r20,r10
	ctx.r4.u64 = REX_LOAD_U8(r20.u32 + ctx.r10.u32);
	// lbzx r9,r21,r10
	ctx.r9.u64 = REX_LOAD_U8(r21.u32 + ctx.r10.u32);
	// lbzx r30,r18,r10
	r30.u64 = REX_LOAD_U8(r18.u32 + ctx.r10.u32);
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// rlwinm r4,r9,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// subf r4,r30,r9
	ctx.r4.u64 = ctx.r9.u64 - r30.u64;
	// subf r9,r29,r4
	ctx.r9.u64 = ctx.r4.u64 - r29.u64;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// srawi r4,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r4.s64 = ctx.r9.s32 >> 4;
	// srawi r30,r28,4
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0xF) != 0);
	r30.s64 = r28.s32 >> 4;
	// lbzx r9,r4,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// lbzx r4,r30,r11
	ctx.r4.u64 = REX_LOAD_U8(r30.u32 + ctx.r11.u32);
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// addi r4,r7,2
	ctx.r4.s64 = ctx.r7.s64 + 2;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r18,-328(r1)
	r18.u64 = REX_LOAD_U32(ctx.r1.u32 + -328);
	// addi r30,r8,-5
	r30.s64 = ctx.r8.s64 + -5;
	// lwz r28,-272(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -272);
	// srawi r9,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 1;
	// lwz r16,-324(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -324);
	// lbzx r15,r30,r10
	r15.u64 = REX_LOAD_U8(r30.u32 + ctx.r10.u32);
	// lbzx r9,r9,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// stbx r9,r10,r31
	REX_STORE_U8(ctx.r10.u32 + r31.u32, ctx.r9.u8);
	// lbzx r9,r10,r5
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r5.u32);
	// lbzx r4,r10,r4
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// lbzx r29,r3,r10
	r29.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r10.u32);
	// addi r3,r8,11
	ctx.r3.s64 = ctx.r8.s64 + 11;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// addi r4,r18,2
	ctx.r4.s64 = r18.s64 + 2;
	// lbzx r3,r3,r10
	ctx.r3.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r10.u32);
	// lbzx r30,r10,r4
	r30.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// rlwinm r4,r9,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r9,r4
	ctx.r4.u64 = ctx.r9.u64 + ctx.r4.u64;
	// subf r9,r29,r4
	ctx.r9.u64 = ctx.r4.u64 - r29.u64;
	// subf r9,r30,r9
	ctx.r9.u64 = ctx.r9.u64 - r30.u64;
	// addi r4,r9,8
	ctx.r4.s64 = ctx.r9.s64 + 8;
	// addi r9,r8,3
	ctx.r9.s64 = ctx.r8.s64 + 3;
	// srawi r4,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 4;
	// srawi r30,r17,4
	ctx.xer.ca = (r17.s32 < 0) & ((r17.u32 & 0xF) != 0);
	r30.s64 = r17.s32 >> 4;
	// lbzx r9,r9,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// lbzx r4,r4,r11
	ctx.r4.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// lbzx r30,r30,r11
	r30.u64 = REX_LOAD_U8(r30.u32 + ctx.r11.u32);
	// addi r3,r8,19
	ctx.r3.s64 = ctx.r8.s64 + 19;
	// add r4,r4,r30
	ctx.r4.u64 = ctx.r4.u64 + r30.u64;
	// lbzx r29,r3,r10
	r29.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r10.u32);
	// rlwinm r3,r9,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// add r3,r9,r3
	ctx.r3.u64 = ctx.r9.u64 + ctx.r3.u64;
	// srawi r4,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 1;
	// subf r9,r15,r3
	ctx.r9.u64 = ctx.r3.u64 - r15.u64;
	// addi r30,r18,3
	r30.s64 = r18.s64 + 3;
	// subf r9,r29,r9
	ctx.r9.u64 = ctx.r9.u64 - r29.u64;
	// addi r3,r9,8
	ctx.r3.s64 = ctx.r9.s64 + 8;
	// lbzx r4,r4,r11
	ctx.r4.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// addi r9,r31,1
	ctx.r9.s64 = r31.s64 + 1;
	// srawi r29,r3,4
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xF) != 0);
	r29.s64 = ctx.r3.s32 >> 4;
	// stbx r4,r9,r10
	REX_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r4.u8);
	// addi r9,r5,1
	ctx.r9.s64 = ctx.r5.s64 + 1;
	// lbzx r28,r28,r10
	r28.u64 = REX_LOAD_U8(r28.u32 + ctx.r10.u32);
	// lbzx r30,r30,r10
	r30.u64 = REX_LOAD_U8(r30.u32 + ctx.r10.u32);
	// lbzx r3,r9,r10
	ctx.r3.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// add r9,r16,r5
	ctx.r9.u64 = r16.u64 + ctx.r5.u64;
	// lbzx r9,r9,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// rlwinm r3,r9,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lbzx r4,r29,r11
	ctx.r4.u64 = REX_LOAD_U8(r29.u32 + ctx.r11.u32);
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// subf r3,r28,r9
	ctx.r3.u64 = ctx.r9.u64 - r28.u64;
	// subf r9,r30,r3
	ctx.r9.u64 = ctx.r3.u64 - r30.u64;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// srawi r3,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r9.s32 >> 4;
	// lbzx r9,r3,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// add r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 + ctx.r9.u64;
	// addi r4,r9,1
	ctx.r4.s64 = ctx.r9.s64 + 1;
	// addi r9,r31,2
	ctx.r9.s64 = r31.s64 + 2;
	// srawi r3,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 1;
	// lbzx r4,r3,r11
	ctx.r4.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// stbx r4,r9,r10
	REX_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r4.u8);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x823a04fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823A04FC;
	// lwz r10,-336(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -336);
	// add r18,r18,r6
	r18.u64 = r18.u64 + ctx.r6.u64;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r18,-328(r1)
	REX_STORE_U32(ctx.r1.u32 + -328, r18.u32);
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// stw r10,-336(r1)
	REX_STORE_U32(ctx.r1.u32 + -336, ctx.r10.u32);
	// add r5,r5,r6
	ctx.r5.u64 = ctx.r5.u64 + ctx.r6.u64;
	// add r31,r31,r6
	r31.u64 = r31.u64 + ctx.r6.u64;
	// bne 0x823a0464
	if (!ctx.cr0.eq) goto loc_823A0464;
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_823E7170) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823cd118
	ctx.lr = 0x823E7198;
	sub_823CD118(ctx, base);
	// stw r3,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x823e71b0
	if (!ctx.cr0.eq) goto loc_823E71B0;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x823e71b8
	goto loc_823E71B8;
loc_823E71B0:
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_823E71B8:
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

DEFINE_REX_FUNC(sub_823E7CB0) {
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
	// beq 0x823e7ce8
	if (ctx.cr0.eq) goto loc_823E7CE8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// subf r11,r6,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r6.u64;
loc_823E7CD0:
	// lwzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addic r8,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r9,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r8.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x823e7cd0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823E7CD0;
loc_823E7CE8:
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// bl 0x822265f0
	ctx.lr = 0x823E7CF0;
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

DEFINE_REX_FUNC(sub_823EACD8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x823EACE0;
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
	// b 0x823ead04
	goto loc_823EAD04;
loc_823EACF8:
	// lwz r31,36(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x823ead28
	if (ctx.cr6.eq) goto loc_823EAD28;
loc_823EAD04:
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
	// bl 0x823e8638
	ctx.lr = 0x823EAD1C;
	sub_823E8638(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x823eacf8
	if (!ctx.cr0.lt) goto loc_823EACF8;
	// b 0x823ead2c
	goto loc_823EAD2C;
loc_823EAD28:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823EAD2C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_823EBBE8) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r30,r11,-1
	r30.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// stw r30,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// bne cr6,0x823ebc24
	if (!ctx.cr6.eq) goto loc_823EBC24;
	// bl 0x823eab68
	ctx.lr = 0x823EBC18;
	sub_823EAB68(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823cd250
	ctx.lr = 0x823EBC24;
	sub_823CD250(ctx, base);
loc_823EBC24:
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

DEFINE_REX_FUNC(sub_823EE860) {
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
	ctx.lr = 0x823EE868;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,24(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r29,0(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r31,4(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 4);
loc_823EE87C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x823ee8a4
	if (!ctx.cr6.eq) goto loc_823EE8A4;
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823EE894;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823ee96c
	if (ctx.cr6.eq) goto loc_823EE96C;
	// lwz r29,0(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r31,4(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 4);
loc_823EE8A4:
	// lbz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 0);
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// beq cr6,0x823ee90c
	if (ctx.cr6.eq) goto loc_823EE90C;
loc_823EE8B8:
	// lwz r11,444(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 444);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
	// stw r31,4(r30)
	REX_STORE_U32(r30.u32 + 4, r31.u32);
	// bne cr6,0x823ee8f8
	if (!ctx.cr6.eq) goto loc_823EE8F8;
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823EE8E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823ee96c
	if (ctx.cr6.eq) goto loc_823EE96C;
	// lwz r29,0(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r31,4(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 4);
loc_823EE8F8:
	// lbz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 0);
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// bne cr6,0x823ee8b8
	if (!ctx.cr6.eq) goto loc_823EE8B8;
loc_823EE90C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x823ee934
	if (!ctx.cr6.eq) goto loc_823EE934;
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823EE924;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823ee96c
	if (ctx.cr6.eq) goto loc_823EE96C;
	// lwz r29,0(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r31,4(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 4);
loc_823EE934:
	// lbz r28,0(r29)
	r28.u64 = REX_LOAD_U8(r29.u32 + 0);
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpwi cr6,r28,255
	ctx.cr6.compare<int32_t>(r28.s32, 255, ctx.xer);
	// beq cr6,0x823ee90c
	if (ctx.cr6.eq) goto loc_823EE90C;
	// lwz r11,444(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 444);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// bne cr6,0x823ee978
	if (!ctx.cr6.eq) goto loc_823EE978;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// stw r10,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
	// stw r31,4(r30)
	REX_STORE_U32(r30.u32 + 4, r31.u32);
	// b 0x823ee87c
	goto loc_823EE87C;
loc_823EE96C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
loc_823EE978:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823ee9c8
	if (ctx.cr6.eq) goto loc_823EE9C8;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// li r10,116
	ctx.r10.s64 = 116;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,444(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 444);
	// lwz r8,0(r27)
	ctx.r8.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lwz r7,24(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
	// stw r7,24(r8)
	REX_STORE_U32(ctx.r8.u32 + 24, ctx.r7.u32);
	// lwz r6,0(r27)
	ctx.r6.u64 = REX_LOAD_U32(r27.u32 + 0);
	// stw r28,28(r6)
	REX_STORE_U32(ctx.r6.u32 + 28, r28.u32);
	// lwz r5,0(r27)
	ctx.r5.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lwz r11,4(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823EE9BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,444(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 444);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,24(r9)
	REX_STORE_U32(ctx.r9.u32 + 24, ctx.r10.u32);
loc_823EE9C8:
	// stw r28,420(r27)
	REX_STORE_U32(r27.u32 + 420, r28.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
	// stw r31,4(r30)
	REX_STORE_U32(r30.u32 + 4, r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_823F2B10) {
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
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e50
	ctx.lr = 0x823F2B18;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x822d4f14
	ctx.lr = 0x823F2B20;
	// stwu r1,-1040(r1)
	ea = -1040 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r3,1060(r1)
	REX_STORE_U32(ctx.r1.u32 + 1060, ctx.r3.u32);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// stw r6,1084(r1)
	REX_STORE_U32(ctx.r1.u32 + 1084, ctx.r6.u32);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lfs f23,2000(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	f23.f64 = double(temp.f32);
	// beq cr6,0x823f2ba0
	if (ctx.cr6.eq) goto loc_823F2BA0;
	// li r11,16
	ctx.r11.s64 = 16;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r4,12
	ctx.r9.s64 = ctx.r4.s64 + 12;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823F2B54:
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f23
	ctx.cr6.compare(ctx.f0.f64, f23.f64);
	// bge cr6,0x823f2b64
	if (!ctx.cr6.lt) goto loc_823F2B64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_823F2B64:
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// bdnz 0x823f2b54
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823F2B54;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// bne cr6,0x823f2b90
	if (!ctx.cr6.eq) goto loc_823F2B90;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r9,0
	ctx.r9.s64 = 0;
	// sth r11,2(r8)
	REX_STORE_U16(ctx.r8.u32 + 2, ctx.r11.u16);
	// stw r10,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// sth r9,0(r8)
	REX_STORE_U16(ctx.r8.u32 + 0, ctx.r9.u16);
	// b 0x823f34ec
	goto loc_823F34EC;
loc_823F2B90:
	// subfic r11,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x823f2ba4
	goto loc_823F2BA4;
loc_823F2BA0:
	// li r11,4
	ctx.r11.s64 = 4;
loc_823F2BA4:
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x823f2bc0
	if (ctx.cr6.eq) goto loc_823F2BC0;
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x822d5870
	ctx.lr = 0x823F2BC0;
	sub_822D5870(ctx, base);
loc_823F2BC0:
	// addi r4,r1,532
	ctx.r4.s64 = ctx.r1.s64 + 532;
	// lwz r16,1084(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 1084);
	// addi r28,r1,328
	r28.s64 = ctx.r1.s64 + 328;
	// addi r9,r1,284
	ctx.r9.s64 = ctx.r1.s64 + 284;
	// addi r6,r1,320
	ctx.r6.s64 = ctx.r1.s64 + 320;
	// addi r18,r1,344
	r18.s64 = ctx.r1.s64 + 344;
	// subf r3,r31,r4
	ctx.r3.u64 = ctx.r4.u64 - r31.u64;
	// subf r4,r31,r28
	ctx.r4.u64 = r28.u64 - r31.u64;
	// subf r24,r31,r9
	r24.u64 = ctx.r9.u64 - r31.u64;
	// subf r21,r31,r6
	r21.u64 = ctx.r6.u64 - r31.u64;
	// subf r28,r31,r18
	r28.u64 = r18.u64 - r31.u64;
	// stw r24,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, r24.u32);
	// lis r9,-32172
	ctx.r9.s64 = -2108424192;
	// stw r21,228(r1)
	REX_STORE_U32(ctx.r1.u32 + 228, r21.u32);
	// li r11,16
	ctx.r11.s64 = 16;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r18,-32256
	r18.s64 = -2113929216;
	// addi r8,r1,288
	ctx.r8.s64 = ctx.r1.s64 + 288;
	// addi r27,r1,332
	r27.s64 = ctx.r1.s64 + 332;
	// lfs f27,11624(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 11624);
	f27.f64 = double(temp.f32);
	// addi r5,r1,352
	ctx.r5.s64 = ctx.r1.s64 + 352;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r17,r1,528
	r17.s64 = ctx.r1.s64 + 528;
	// lfs f19,16288(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 16288);
	f19.f64 = double(temp.f32);
	// subf r23,r31,r8
	r23.u64 = ctx.r8.u64 - r31.u64;
	// lfs f21,17176(r18)
	temp.u32 = REX_LOAD_U32(r18.u32 + 17176);
	f21.f64 = double(temp.f32);
	// subf r26,r31,r27
	r26.u64 = r27.u64 - r31.u64;
	// addi r27,r9,11624
	r27.s64 = ctx.r9.s64 + 11624;
	// stw r23,256(r1)
	REX_STORE_U32(ctx.r1.u32 + 256, r23.u32);
	// subf r19,r31,r5
	r19.u64 = ctx.r5.u64 - r31.u64;
	// addi r10,r1,272
	ctx.r10.s64 = ctx.r1.s64 + 272;
	// subf r8,r31,r17
	ctx.r8.u64 = r17.u64 - r31.u64;
	// stw r19,232(r1)
	REX_STORE_U32(ctx.r1.u32 + 232, r19.u32);
	// addi r7,r1,316
	ctx.r7.s64 = ctx.r1.s64 + 316;
	// addi r11,r1,348
	ctx.r11.s64 = ctx.r1.s64 + 348;
	// lfs f29,8(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 8);
	f29.f64 = double(temp.f32);
	// lis r5,-32249
	ctx.r5.s64 = -2113470464;
	// lfs f28,4(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 4);
	f28.f64 = double(temp.f32);
	// lis r17,-32249
	r17.s64 = -2113470464;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r6,-32249
	ctx.r6.s64 = -2113470464;
	// lis r15,-32254
	r15.s64 = -2113798144;
	// lis r14,-32255
	r14.s64 = -2113863680;
	// lfs f20,-7224(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + -7224);
	f20.f64 = double(temp.f32);
	// lis r18,-32256
	r18.s64 = -2113929216;
	// lfs f22,22428(r17)
	temp.u32 = REX_LOAD_U32(r17.u32 + 22428);
	f22.f64 = double(temp.f32);
	// subf r10,r31,r10
	ctx.r10.u64 = ctx.r10.u64 - r31.u64;
	// lfs f6,1992(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	ctx.f6.f64 = double(temp.f32);
	// subf r22,r31,r7
	r22.u64 = ctx.r7.u64 - r31.u64;
	// lfs f30,-7220(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + -7220);
	f30.f64 = double(temp.f32);
	// subf r20,r31,r11
	r20.u64 = ctx.r11.u64 - r31.u64;
	// stw r10,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r10.u32);
	// addi r30,r1,280
	r30.s64 = ctx.r1.s64 + 280;
	// lfs f7,25732(r15)
	temp.u32 = REX_LOAD_U32(r15.u32 + 25732);
	ctx.f7.f64 = double(temp.f32);
	// addi r29,r1,312
	r29.s64 = ctx.r1.s64 + 312;
	// lfs f31,9952(r14)
	temp.u32 = REX_LOAD_U32(r14.u32 + 9952);
	f31.f64 = double(temp.f32);
	// addi r25,r1,336
	r25.s64 = ctx.r1.s64 + 336;
	// lfs f8,32280(r18)
	temp.u32 = REX_LOAD_U32(r18.u32 + 32280);
	ctx.f8.f64 = double(temp.f32);
	// stw r22,236(r1)
	REX_STORE_U32(ctx.r1.u32 + 236, r22.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r20,260(r1)
	REX_STORE_U32(ctx.r1.u32 + 260, r20.u32);
	// addi r11,r31,8
	ctx.r11.s64 = r31.s64 + 8;
	// subf r30,r31,r30
	r30.u64 = r30.u64 - r31.u64;
	// subf r29,r31,r29
	r29.u64 = r29.u64 - r31.u64;
	// subf r25,r31,r25
	r25.u64 = r25.u64 - r31.u64;
	// li r10,0
	ctx.r10.s64 = 0;
loc_823F2CC8:
	// lfs f13,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(r16.s32, 0, ctx.xer);
	// lfs f12,-4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// beq cr6,0x823f2d00
	if (ctx.cr6.eq) goto loc_823F2D00;
	// lwz r6,176(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// addi r9,r1,276
	ctx.r9.s64 = ctx.r1.s64 + 276;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lfsx f11,r6,r11
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	ctx.f11.f64 = double(temp.f32);
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// lfs f11,-4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fadds f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// fadds f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
loc_823F2D00:
	// fmadds f11,f13,f8,f23
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(std::fma(ctx.f13.f64, ctx.f8.f64, f23.f64)));
	// addi r6,r1,528
	ctx.r6.s64 = ctx.r1.s64 + 528;
	// fmadds f10,f12,f7,f23
	ctx.f10.f64 = double(float(std::fma(ctx.f12.f64, ctx.f7.f64, f23.f64)));
	// addi r5,r1,532
	ctx.r5.s64 = ctx.r1.s64 + 532;
	// fmadds f9,f0,f8,f23
	ctx.f9.f64 = double(float(std::fma(ctx.f0.f64, ctx.f8.f64, f23.f64)));
	// stfsx f6,r3,r11
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r3.u32 + ctx.r11.u32, temp.u32);
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(r16.s32, 0, ctx.xer);
	// fctiwz f11,f11
	ctx.f11.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f11,192(r1)
	REX_STORE_U64(ctx.r1.u32 + 192, ctx.f11.u64);
	// fctiwz f11,f10
	ctx.f11.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// lwa r9,196(r1)
	ctx.r9.s64 = int32_t(REX_LOAD_U32(ctx.r1.u32 + 196));
	// fctiwz f10,f9
	ctx.f10.s64 = std::isnan(ctx.f9.f64) ? int64_t(0x80000000U) : (ctx.f9.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f10,240(r1)
	REX_STORE_U64(ctx.r1.u32 + 240, ctx.f10.u64);
	// stfd f11,192(r1)
	REX_STORE_U64(ctx.r1.u32 + 192, ctx.f11.u64);
	// std r9,208(r1)
	REX_STORE_U64(ctx.r1.u32 + 208, ctx.r9.u64);
	// lwa r17,244(r1)
	r17.s64 = int32_t(REX_LOAD_U32(ctx.r1.u32 + 244));
	// lfd f10,208(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 208);
	// std r17,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, r17.u64);
	// lfd f9,80(r1)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// lwa r18,196(r1)
	r18.s64 = int32_t(REX_LOAD_U32(ctx.r1.u32 + 196));
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// std r18,264(r1)
	REX_STORE_U64(ctx.r1.u32 + 264, r18.u64);
	// lfd f11,264(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 264);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// mr r18,r17
	r18.u64 = r17.u64;
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// fmuls f10,f10,f31
	ctx.f10.f64 = double(float(ctx.f10.f64 * f31.f64));
	// stfsx f10,r10,r6
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r6.u32, temp.u32);
	// fmuls f11,f11,f30
	ctx.f11.f64 = double(float(ctx.f11.f64 * f30.f64));
	// stfsx f11,r10,r5
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r5.u32, temp.u32);
	// fmuls f9,f9,f31
	ctx.f9.f64 = double(float(ctx.f9.f64 * f31.f64));
	// stfsx f9,r8,r11
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r8.u32 + ctx.r11.u32, temp.u32);
	// beq cr6,0x823f2e50
	if (ctx.cr6.eq) goto loc_823F2E50;
	// clrlwi r9,r7,30
	ctx.r9.u64 = ctx.r7.u32 & 0x3;
	// fsubs f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// fsubs f0,f0,f9
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f9.f64));
	// beq cr6,0x823f2dcc
	if (ctx.cr6.eq) goto loc_823F2DCC;
	// lfsx f5,r30,r11
	temp.u32 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	ctx.f5.f64 = double(temp.f32);
	// lfsx f4,r24,r11
	temp.u32 = REX_LOAD_U32(r24.u32 + ctx.r11.u32);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f5,f13,f22,f5
	ctx.f5.f64 = double(float(std::fma(ctx.f13.f64, f22.f64, ctx.f5.f64)));
	// lfsx f3,r23,r11
	temp.u32 = REX_LOAD_U32(r23.u32 + ctx.r11.u32);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f4,f12,f22,f4
	ctx.f4.f64 = double(float(std::fma(ctx.f12.f64, f22.f64, ctx.f4.f64)));
	// fmadds f3,f0,f22,f3
	ctx.f3.f64 = double(float(std::fma(ctx.f0.f64, f22.f64, ctx.f3.f64)));
	// stfsx f5,r30,r11
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(r30.u32 + ctx.r11.u32, temp.u32);
	// stfsx f4,r24,r11
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(r24.u32 + ctx.r11.u32, temp.u32);
	// stfsx f3,r23,r11
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(r23.u32 + ctx.r11.u32, temp.u32);
loc_823F2DCC:
	// cmplwi cr6,r7,12
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 12, ctx.xer);
	// bge cr6,0x823f2e50
	if (!ctx.cr6.lt) goto loc_823F2E50;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823f2e00
	if (ctx.cr6.eq) goto loc_823F2E00;
	// lfsx f5,r29,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	ctx.f5.f64 = double(temp.f32);
	// lfsx f4,r22,r11
	temp.u32 = REX_LOAD_U32(r22.u32 + ctx.r11.u32);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f5,f13,f21,f5
	ctx.f5.f64 = double(float(std::fma(ctx.f13.f64, f21.f64, ctx.f5.f64)));
	// lfsx f3,r21,r11
	temp.u32 = REX_LOAD_U32(r21.u32 + ctx.r11.u32);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f4,f12,f21,f4
	ctx.f4.f64 = double(float(std::fma(ctx.f12.f64, f21.f64, ctx.f4.f64)));
	// fmadds f3,f0,f21,f3
	ctx.f3.f64 = double(float(std::fma(ctx.f0.f64, f21.f64, ctx.f3.f64)));
	// stfsx f5,r29,r11
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(r29.u32 + ctx.r11.u32, temp.u32);
	// stfsx f4,r22,r11
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(r22.u32 + ctx.r11.u32, temp.u32);
	// stfsx f3,r21,r11
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(r21.u32 + ctx.r11.u32, temp.u32);
loc_823F2E00:
	// lfsx f5,r4,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	ctx.f5.f64 = double(temp.f32);
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// lfsx f4,r26,r11
	temp.u32 = REX_LOAD_U32(r26.u32 + ctx.r11.u32);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f5,f13,f20,f5
	ctx.f5.f64 = double(float(std::fma(ctx.f13.f64, f20.f64, ctx.f5.f64)));
	// lfsx f3,r25,r11
	temp.u32 = REX_LOAD_U32(r25.u32 + ctx.r11.u32);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f4,f12,f20,f4
	ctx.f4.f64 = double(float(std::fma(ctx.f12.f64, f20.f64, ctx.f4.f64)));
	// fmadds f3,f0,f20,f3
	ctx.f3.f64 = double(float(std::fma(ctx.f0.f64, f20.f64, ctx.f3.f64)));
	// stfsx f5,r4,r11
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r4.u32 + ctx.r11.u32, temp.u32);
	// stfsx f4,r26,r11
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(r26.u32 + ctx.r11.u32, temp.u32);
	// stfsx f3,r25,r11
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(r25.u32 + ctx.r11.u32, temp.u32);
	// beq cr6,0x823f2e50
	if (ctx.cr6.eq) goto loc_823F2E50;
	// lfsx f5,r28,r11
	temp.u32 = REX_LOAD_U32(r28.u32 + ctx.r11.u32);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f13,f13,f19,f5
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, f19.f64, ctx.f5.f64)));
	// lfsx f4,r20,r11
	temp.u32 = REX_LOAD_U32(r20.u32 + ctx.r11.u32);
	ctx.f4.f64 = double(temp.f32);
	// lfsx f5,r19,r11
	temp.u32 = REX_LOAD_U32(r19.u32 + ctx.r11.u32);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f12,f12,f19,f4
	ctx.f12.f64 = double(float(std::fma(ctx.f12.f64, f19.f64, ctx.f4.f64)));
	// fmadds f0,f0,f19,f5
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f19.f64, ctx.f5.f64)));
	// stfsx f13,r28,r11
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r28.u32 + ctx.r11.u32, temp.u32);
	// stfsx f12,r20,r11
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r20.u32 + ctx.r11.u32, temp.u32);
	// stfsx f0,r19,r11
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r19.u32 + ctx.r11.u32, temp.u32);
loc_823F2E50:
	// fmuls f0,f10,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f10.f64 * f27.f64));
	// stfsx f0,r10,r6
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r6.u32, temp.u32);
	// fmuls f0,f11,f28
	ctx.f0.f64 = double(float(ctx.f11.f64 * f28.f64));
	// stfsx f0,r10,r5
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r5.u32, temp.u32);
	// fmuls f0,f9,f29
	ctx.f0.f64 = double(float(ctx.f9.f64 * f29.f64));
	// stfsx f0,r8,r11
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r8.u32 + ctx.r11.u32, temp.u32);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bdnz 0x823f2cc8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823F2CC8;
	// lwz r18,96(r1)
	r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r5,r1,528
	ctx.r5.s64 = ctx.r1.s64 + 528;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// mr r6,r18
	ctx.r6.u64 = r18.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x823f2690
	ctx.lr = 0x823F2E90;
	sub_823F2690(ctx, base);
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// lfs f11,192(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f11.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r11,11640
	ctx.r10.s64 = ctx.r11.s64 + 11640;
	// lfs f10,196(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,200(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,11640(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 11640);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f13,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f9,f9,f12
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f9,88(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f11,240(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 240);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f10,244(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 244);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,248(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 248);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stfs f0,208(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stfs f13,212(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stfs f12,216(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// bl 0x823f22d8
	ctx.lr = 0x823F2EF4;
	sub_823F22D8(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x823f22d8
	ctx.lr = 0x823F2F00;
	sub_823F22D8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r18,4
	ctx.cr6.compare<uint32_t>(r18.u32, 4, ctx.xer);
	// bne cr6,0x823f2f34
	if (!ctx.cr6.eq) goto loc_823F2F34;
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// clrlwi r9,r8,16
	ctx.r9.u64 = ctx.r8.u32 & 0xFFFF;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823f2f34
	if (!ctx.cr6.eq) goto loc_823F2F34;
	// lwz r10,1060(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1060);
	// li r9,0
	ctx.r9.s64 = 0;
	// sth r8,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r8.u16);
	// sth r3,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r3.u16);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// b 0x823f34ec
	goto loc_823F34EC;
loc_823F2F34:
	// rlwinm r9,r8,21,27,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 21) & 0x1F;
	// lwz r17,1060(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 1060);
	// clrlwi r10,r11,27
	ctx.r10.u64 = ctx.r11.u32 & 0x1F;
	// std r9,208(r1)
	REX_STORE_U64(ctx.r1.u32 + 208, ctx.r9.u64);
	// rlwinm r7,r11,27,26,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3F;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// rlwinm r10,r11,21,27,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1F;
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r7,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// rlwinm r9,r8,27,26,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x3F;
	// lfd f12,80(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// clrlwi r7,r11,16
	ctx.r7.u64 = ctx.r11.u32 & 0xFFFF;
	// lfd f13,208(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 208);
	// std r10,208(r1)
	REX_STORE_U64(ctx.r1.u32 + 208, ctx.r10.u64);
	// clrlwi r10,r8,27
	ctx.r10.u64 = ctx.r8.u32 & 0x1F;
	// std r9,264(r1)
	REX_STORE_U64(ctx.r1.u32 + 264, ctx.r9.u64);
	// lfd f9,264(r1)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + 264);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// lfd f10,208(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 208);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// clrlwi r9,r8,16
	ctx.r9.u64 = ctx.r8.u32 & 0xFFFF;
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// addi r6,r18,-3
	ctx.r6.s64 = r18.s64 + -3;
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// li r5,-1
	ctx.r5.s64 = -1;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// subfc r10,r9,r7
	ctx.xer.ca = ctx.r7.u32 >= ctx.r9.u32;
	ctx.r10.u64 = ctx.r7.u64 - ctx.r9.u64;
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// cntlzw r6,r6
	ctx.r6.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// subfze r10,r5
	temp.u8 = ~ctx.r5.u32 + ctx.xer.ca < ~ctx.r5.u32;
	ctx.r10.u64 = ~ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r6,r6,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// cmpw cr6,r6,r10
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r10.s32, ctx.xer);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * f31.f64));
	// fmuls f10,f10,f31
	ctx.f10.f64 = double(float(ctx.f10.f64 * f31.f64));
	// fmuls f7,f0,f31
	ctx.f7.f64 = double(float(ctx.f0.f64 * f31.f64));
	// fmuls f11,f11,f31
	ctx.f11.f64 = double(float(ctx.f11.f64 * f31.f64));
	// fmuls f9,f9,f30
	ctx.f9.f64 = double(float(ctx.f9.f64 * f30.f64));
	// fmuls f8,f12,f30
	ctx.f8.f64 = double(float(ctx.f12.f64 * f30.f64));
	// fmuls f0,f27,f13
	ctx.f0.f64 = double(float(f27.f64 * ctx.f13.f64));
	// fmuls f12,f11,f29
	ctx.f12.f64 = double(float(ctx.f11.f64 * f29.f64));
	// fmuls f11,f10,f27
	ctx.f11.f64 = double(float(ctx.f10.f64 * f27.f64));
	// fmuls f13,f9,f28
	ctx.f13.f64 = double(float(ctx.f9.f64 * f28.f64));
	// fmuls f10,f8,f28
	ctx.f10.f64 = double(float(ctx.f8.f64 * f28.f64));
	// fmuls f9,f7,f29
	ctx.f9.f64 = double(float(ctx.f7.f64 * f29.f64));
	// bne cr6,0x823f3034
	if (!ctx.cr6.eq) goto loc_823F3034;
	// lfs f8,204(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 204);
	ctx.f8.f64 = double(temp.f32);
	// sth r8,0(r17)
	REX_STORE_U16(r17.u32 + 0, ctx.r8.u16);
	// lfs f7,252(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 252);
	ctx.f7.f64 = double(temp.f32);
	// sth r11,2(r17)
	REX_STORE_U16(r17.u32 + 2, ctx.r11.u16);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f11,128(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f10,132(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f9,136(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// b 0x823f305c
	goto loc_823F305C;
loc_823F3034:
	// lfs f8,252(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 252);
	ctx.f8.f64 = double(temp.f32);
	// sth r11,0(r17)
	REX_STORE_U16(r17.u32 + 0, ctx.r11.u16);
	// lfs f7,204(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 204);
	ctx.f7.f64 = double(temp.f32);
	// sth r8,2(r17)
	REX_STORE_U16(r17.u32 + 2, ctx.r8.u16);
	// stfs f11,112(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f10,116(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f9,120(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
loc_823F305C:
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stfs f7,140(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stfs f8,124(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// cmplwi cr6,r18,3
	ctx.cr6.compare<uint32_t>(r18.u32, 3, ctx.xer);
	// addi r30,r1,144
	r30.s64 = ctx.r1.s64 + 144;
	// lvsl v0,r0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lvsl v7,r0,r4
	temp.u32 = ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bne cr6,0x823f3108
	if (!ctx.cr6.eq) goto loc_823F3108;
	// addi r11,r1,127
	ctx.r11.s64 = ctx.r1.s64 + 127;
	// stfs f23,92(r1)
	temp.f32 = float(f23.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// stfs f23,84(r1)
	temp.f32 = float(f23.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r8,r1,143
	ctx.r8.s64 = ctx.r1.s64 + 143;
	// stfs f23,88(r1)
	temp.f32 = float(f23.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stfs f23,80(r1)
	temp.f32 = float(f23.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r3,8
	ctx.r3.s64 = 8;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// lvx128 v62,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lvx128 v61,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// lvx128 v60,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v0,v62,v63,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// li r6,4
	ctx.r6.s64 = 4;
	// vperm128 v63,v60,v61,v7
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvsr v7,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableR[(temp.u32 & 0xF) * 16]));
	// li r29,12
	r29.s64 = 12;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// vsubfp128 v13,v63,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v0.f32)));
	// addi r28,r11,-14736
	r28.s64 = ctx.r11.s64 + -14736;
	// lvx128 v12,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v0,v13,v12,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vperm128 v63,v0,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// stvewx128 v63,r0,r8
	ea = (ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v63,r5,r6
	ea = (ctx.r5.u32 + ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v63,r4,r3
	ea = (ctx.r4.u32 + ctx.r3.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v63,r30,r29
	ea = (r30.u32 + r29.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// b 0x823f324c
	goto loc_823F324C;
loc_823F3108:
	// addi r10,r1,127
	ctx.r10.s64 = ctx.r1.s64 + 127;
	// lwz r18,96(r1)
	r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lwz r17,1060(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 1060);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,143
	ctx.r6.s64 = ctx.r1.s64 + 143;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lvx128 v62,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,12
	ctx.r11.s64 = 12;
	// lvx128 v61,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r8,4
	ctx.r8.s64 = 4;
	// lvx128 v60,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v0,v63,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// lfs f0,-31056(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -31056);
	ctx.f0.f64 = double(temp.f32);
	// vperm128 v63,v61,v60,v7
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// li r10,8
	ctx.r10.s64 = 8;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r14,r11
	r14.u64 = ctx.r11.u64;
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r22,r1,143
	r22.s64 = ctx.r1.s64 + 143;
	// vsubfp128 v13,v63,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v0.f32)));
	// stfs f0,88(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lvsr v7,r0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableR[(temp.u32 & 0xF) * 16]));
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// addi r21,r1,128
	r21.s64 = ctx.r1.s64 + 128;
	// addi r23,r1,80
	r23.s64 = ctx.r1.s64 + 80;
	// addi r24,r1,112
	r24.s64 = ctx.r1.s64 + 112;
	// addi r29,r1,127
	r29.s64 = ctx.r1.s64 + 127;
	// lis r20,-32255
	r20.s64 = -2113863680;
	// addi r28,r1,112
	r28.s64 = ctx.r1.s64 + 112;
	// addi r19,r1,128
	r19.s64 = ctx.r1.s64 + 128;
	// addi r16,r1,160
	r16.s64 = ctx.r1.s64 + 160;
	// addi r15,r1,160
	r15.s64 = ctx.r1.s64 + 160;
	// lvsr v6,r0,r16
	temp.u32 = r16.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableR[(temp.u32 & 0xF) * 16]));
	// addi r16,r1,160
	r16.s64 = ctx.r1.s64 + 160;
	// lvx128 v12,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v0,v13,v12,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vperm128 v63,v0,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lvsl v7,r0,r19
	temp.u32 = r19.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// lvsl v0,r0,r28
	temp.u32 = r28.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// addi r19,r1,160
	r19.s64 = ctx.r1.s64 + 160;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r28,r11,-14752
	r28.s64 = ctx.r11.s64 + -14752;
	// stvewx128 v63,r0,r5
	ea = (ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v63,r4,r8
	ea = (ctx.r4.u32 + ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v63,r6,r10
	ea = (ctx.r6.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r6,96(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// stvewx128 v63,r30,r14
	ea = (r30.u32 + r14.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// lvx128 v61,r0,r22
	ea = (r22.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r22,236(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// lvx128 v60,r0,r21
	ea = (r21.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r21,228(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// lfs f0,-30672(r20)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(r20.u32 + -30672);
	ctx.f0.f64 = double(temp.f32);
	// lwz r20,260(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// lvx128 v63,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r0,r24
	ea = (r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v0,v62,v63,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v61,v60,v61,v7
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r24,224(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// vsubfp128 v13,v61,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v0.f32)));
	// lvx128 v12,r0,r23
	ea = (r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r23,256(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// vmaddfp v0,v13,v12,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vperm128 v63,v0,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// stvewx128 v63,r0,r19
	ea = (r19.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r19,232(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 232);
	// stvewx128 v63,r16,r8
	ea = (r16.u32 + ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r16,1084(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 1084);
	// stvewx128 v63,r15,r10
	ea = (r15.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v63,r6,r14
	ea = (ctx.r6.u32 + r14.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
loc_823F324C:
	// addi r11,r18,-1
	ctx.r11.s64 = r18.s64 + -1;
	// lfs f0,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// lfs f27,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	f27.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// fsubs f13,f0,f27
	ctx.f13.f64 = double(float(ctx.f0.f64 - f27.f64));
	// lfs f26,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	f26.f64 = double(temp.f32);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lfs f12,132(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f12.f64 = double(temp.f32);
	// lfs f25,120(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	f25.f64 = double(temp.f32);
	// fsubs f12,f12,f26
	ctx.f12.f64 = double(float(ctx.f12.f64 - f26.f64));
	// lfs f11,136(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f11.f64 = double(temp.f32);
	// frsp f24,f0
	f24.f64 = double(float(ctx.f0.f64));
	// lfs f28,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	f28.f64 = double(temp.f32);
	// fsubs f11,f11,f25
	ctx.f11.f64 = double(float(ctx.f11.f64 - f25.f64));
	// beq cr6,0x823f32ac
	if (ctx.cr6.eq) goto loc_823F32AC;
	// fmuls f0,f12,f12
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f0,f11,f11,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f11.f64, ctx.f11.f64, ctx.f0.f64)));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f0.f64)));
	// fdivs f0,f24,f0
	ctx.f0.f64 = double(float(f24.f64 / ctx.f0.f64));
	// b 0x823f32b0
	goto loc_823F32B0;
loc_823F32AC:
	// fmr f0,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = f28.f64;
loc_823F32B0:
	// fmuls f31,f0,f13
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// li r29,0
	r29.s64 = 0;
	// fmuls f30,f0,f12
	f30.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(r16.s32, 0, ctx.xer);
	// fmuls f29,f0,f11
	f29.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// beq cr6,0x823f32d8
	if (ctx.cr6.eq) goto loc_823F32D8;
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x822d5870
	ctx.lr = 0x823F32D8;
	sub_822D5870(ctx, base);
loc_823F32D8:
	// li r11,16
	ctx.r11.s64 = 16;
	// lfs f10,8(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// addi r7,r1,536
	ctx.r7.s64 = ctx.r1.s64 + 536;
	// lfs f9,4(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// addi r4,r1,340
	ctx.r4.s64 = ctx.r1.s64 + 340;
	// lfs f8,0(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// addi r10,r1,276
	ctx.r10.s64 = ctx.r1.s64 + 276;
	// addi r6,r1,292
	ctx.r6.s64 = ctx.r1.s64 + 292;
	// addi r5,r1,324
	ctx.r5.s64 = ctx.r1.s64 + 324;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r15,r1,356
	r15.s64 = ctx.r1.s64 + 356;
	// subf r3,r31,r7
	ctx.r3.u64 = ctx.r7.u64 - r31.u64;
	// subf r7,r31,r4
	ctx.r7.u64 = ctx.r4.u64 - r31.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,272
	ctx.r8.s64 = ctx.r1.s64 + 272;
	// addi r11,r31,4
	ctx.r11.s64 = r31.s64 + 4;
	// subf r30,r31,r10
	r30.u64 = ctx.r10.u64 - r31.u64;
	// subf r6,r31,r6
	ctx.r6.u64 = ctx.r6.u64 - r31.u64;
	// subf r5,r31,r5
	ctx.r5.u64 = ctx.r5.u64 - r31.u64;
	// subf r4,r31,r15
	ctx.r4.u64 = r15.u64 - r31.u64;
loc_823F3328:
	// cmplwi cr6,r18,3
	ctx.cr6.compare<uint32_t>(r18.u32, 3, ctx.xer);
	// bne cr6,0x823f3348
	if (!ctx.cr6.eq) goto loc_823F3348;
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f23
	ctx.cr6.compare(ctx.f0.f64, f23.f64);
	// bge cr6,0x823f3348
	if (!ctx.cr6.lt) goto loc_823F3348;
	// rlwinm r10,r29,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 30) & 0x3FFFFFFF;
	// oris r29,r10,49152
	r29.u64 = ctx.r10.u64 | 3221225472;
	// b 0x823f34d4
	goto loc_823F34D4;
loc_823F3348:
	// lfs f0,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(r16.s32, 0, ctx.xer);
	// fmuls f13,f0,f8
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// lfs f12,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f12,f9
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// fmuls f11,f0,f10
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// beq cr6,0x823f3384
	if (ctx.cr6.eq) goto loc_823F3384;
	// lwz r10,176(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// lfs f0,0(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfsx f7,r30,r11
	temp.u32 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	ctx.f7.f64 = double(temp.f32);
	// fadds f11,f7,f11
	ctx.f11.f64 = double(float(ctx.f7.f64 + ctx.f11.f64));
	// lfsx f0,r10,r11
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// fadds f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
loc_823F3384:
	// fsubs f0,f12,f26
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f12.f64 - f26.f64));
	// fsubs f7,f11,f25
	ctx.f7.f64 = double(float(ctx.f11.f64 - f25.f64));
	// fsubs f6,f13,f27
	ctx.f6.f64 = double(float(ctx.f13.f64 - f27.f64));
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * f30.f64));
	// fmadds f0,f7,f29,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f7.f64, f29.f64, ctx.f0.f64)));
	// fmadds f0,f6,f31,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f6.f64, f31.f64, ctx.f0.f64)));
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, f28.f64);
	// bgt cr6,0x823f33ac
	if (ctx.cr6.gt) goto loc_823F33AC;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x823f33d4
	goto loc_823F33D4;
loc_823F33AC:
	// fcmpu cr6,f0,f24
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f24.f64);
	// blt cr6,0x823f33bc
	if (ctx.cr6.lt) goto loc_823F33BC;
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x823f33d4
	goto loc_823F33D4;
loc_823F33BC:
	// fadds f0,f0,f23
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + f23.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r28
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r28.u32);
loc_823F33D4:
	// rlwinm r31,r10,30,0,1
	r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0xC0000000;
	// rlwinm r29,r29,30,2,31
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 30) & 0x3FFFFFFF;
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(r16.s32, 0, ctx.xer);
	// or r29,r31,r29
	r29.u64 = r31.u64 | r29.u64;
	// beq cr6,0x823f34d4
	if (ctx.cr6.eq) goto loc_823F34D4;
	// rlwinm r31,r10,4,0,27
	r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lfsx f7,r3,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	ctx.f7.f64 = double(temp.f32);
	// addi r27,r1,112
	r27.s64 = ctx.r1.s64 + 112;
	// addi r15,r1,116
	r15.s64 = ctx.r1.s64 + 116;
	// addi r14,r1,120
	r14.s64 = ctx.r1.s64 + 120;
	// clrlwi r10,r9,30
	ctx.r10.u64 = ctx.r9.u32 & 0x3;
	// lfsx f0,r31,r27
	temp.u32 = REX_LOAD_U32(r31.u32 + r27.u32);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// lfsx f6,r31,r15
	temp.u32 = REX_LOAD_U32(r31.u32 + r15.u32);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfsx f13,r31,r14
	temp.u32 = REX_LOAD_U32(r31.u32 + r14.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f12,f6
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f6.f64));
	// fsubs f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// fmuls f0,f0,f7
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f7.f64));
	// fmuls f13,f12,f7
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// fmuls f12,f11,f7
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f7.f64));
	// beq cr6,0x823f3450
	if (ctx.cr6.eq) goto loc_823F3450;
	// lfsx f11,r24,r11
	temp.u32 = REX_LOAD_U32(r24.u32 + ctx.r11.u32);
	ctx.f11.f64 = double(temp.f32);
	// lfsx f7,r23,r11
	temp.u32 = REX_LOAD_U32(r23.u32 + ctx.r11.u32);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f11,f0,f22,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f0.f64, f22.f64, ctx.f11.f64)));
	// lfsx f6,r6,r11
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f7,f13,f22,f7
	ctx.f7.f64 = double(float(std::fma(ctx.f13.f64, f22.f64, ctx.f7.f64)));
	// fmadds f6,f12,f22,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f12.f64, f22.f64, ctx.f6.f64)));
	// stfsx f11,r24,r11
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r24.u32 + ctx.r11.u32, temp.u32);
	// stfsx f7,r23,r11
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(r23.u32 + ctx.r11.u32, temp.u32);
	// stfsx f6,r6,r11
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r6.u32 + ctx.r11.u32, temp.u32);
loc_823F3450:
	// cmplwi cr6,r9,12
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 12, ctx.xer);
	// bge cr6,0x823f34d4
	if (!ctx.cr6.lt) goto loc_823F34D4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823f3484
	if (ctx.cr6.eq) goto loc_823F3484;
	// lfsx f11,r22,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r22.u32 + ctx.r11.u32);
	ctx.f11.f64 = double(temp.f32);
	// lfsx f7,r21,r11
	temp.u32 = REX_LOAD_U32(r21.u32 + ctx.r11.u32);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f11,f0,f21,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f0.f64, f21.f64, ctx.f11.f64)));
	// lfsx f6,r5,r11
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f7,f13,f21,f7
	ctx.f7.f64 = double(float(std::fma(ctx.f13.f64, f21.f64, ctx.f7.f64)));
	// fmadds f6,f12,f21,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f12.f64, f21.f64, ctx.f6.f64)));
	// stfsx f11,r22,r11
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r22.u32 + ctx.r11.u32, temp.u32);
	// stfsx f7,r21,r11
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(r21.u32 + ctx.r11.u32, temp.u32);
	// stfsx f6,r5,r11
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r5.u32 + ctx.r11.u32, temp.u32);
loc_823F3484:
	// lfsx f11,r26,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r26.u32 + ctx.r11.u32);
	ctx.f11.f64 = double(temp.f32);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// lfsx f7,r25,r11
	temp.u32 = REX_LOAD_U32(r25.u32 + ctx.r11.u32);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f11,f0,f20,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f0.f64, f20.f64, ctx.f11.f64)));
	// lfsx f6,r7,r11
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f7,f13,f20,f7
	ctx.f7.f64 = double(float(std::fma(ctx.f13.f64, f20.f64, ctx.f7.f64)));
	// fmadds f6,f12,f20,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f12.f64, f20.f64, ctx.f6.f64)));
	// stfsx f11,r26,r11
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r26.u32 + ctx.r11.u32, temp.u32);
	// stfsx f7,r25,r11
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(r25.u32 + ctx.r11.u32, temp.u32);
	// stfsx f6,r7,r11
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r7.u32 + ctx.r11.u32, temp.u32);
	// beq cr6,0x823f34d4
	if (ctx.cr6.eq) goto loc_823F34D4;
	// lfsx f11,r20,r11
	temp.u32 = REX_LOAD_U32(r20.u32 + ctx.r11.u32);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f0,f0,f19,f11
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f19.f64, ctx.f11.f64)));
	// lfsx f7,r19,r11
	temp.u32 = REX_LOAD_U32(r19.u32 + ctx.r11.u32);
	ctx.f7.f64 = double(temp.f32);
	// lfsx f11,r4,r11
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f13,f13,f19,f7
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, f19.f64, ctx.f7.f64)));
	// fmadds f12,f12,f19,f11
	ctx.f12.f64 = double(float(std::fma(ctx.f12.f64, f19.f64, ctx.f11.f64)));
	// stfsx f0,r20,r11
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r20.u32 + ctx.r11.u32, temp.u32);
	// stfsx f13,r19,r11
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r19.u32 + ctx.r11.u32, temp.u32);
	// stfsx f12,r4,r11
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r4.u32 + ctx.r11.u32, temp.u32);
loc_823F34D4:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// bdnz 0x823f3328
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823F3328;
	// rotlwi r11,r29,16
	ctx.r11.u64 = __builtin_rotateleft32(r29.u32, 16);
	// stw r11,4(r17)
	REX_STORE_U32(r17.u32 + 4, ctx.r11.u32);
loc_823F34EC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,1040
	ctx.r1.s64 = ctx.r1.s64 + 1040;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x822d4f60
	ctx.lr = 0x823F34FC;
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_824205C8) {
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
	ctx.lr = 0x824205D0;
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
	// bne cr6,0x82420610
	if (!ctx.cr6.eq) goto loc_82420610;
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
	// li r7,2426
	ctx.r7.s64 = 2426;
	// bl 0x8240e308
	ctx.lr = 0x82420610;
	sub_8240E308(ctx, base);
loc_82420610:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,37
	ctx.r4.s64 = 37;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8240e880
	ctx.lr = 0x82420620;
	sub_8240E880(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bne cr6,0x82420688
	if (!ctx.cr6.eq) goto loc_82420688;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82420644
	if (ctx.cr6.eq) goto loc_82420644;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,36
	ctx.r4.s64 = 36;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8240e930
	ctx.lr = 0x82420644;
	sub_8240E930(ctx, base);
loc_82420644:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82420680
	if (ctx.cr6.eq) goto loc_82420680;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x82420680
	if (ctx.cr6.eq) goto loc_82420680;
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
	// li r6,59
	ctx.r6.s64 = 59;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r5,236(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 236);
	// bctrl 
	ctx.lr = 0x82420680;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82420680:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x824206e4
	goto loc_824206E4;
loc_82420688:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x824206a4
	if (ctx.cr6.eq) goto loc_824206A4;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,36
	ctx.r4.s64 = 36;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8240e930
	ctx.lr = 0x824206A4;
	sub_8240E930(ctx, base);
loc_824206A4:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x824206e0
	if (ctx.cr6.eq) goto loc_824206E0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x824206e0
	if (ctx.cr6.eq) goto loc_824206E0;
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
	// li r6,59
	ctx.r6.s64 = 59;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r5,236(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 236);
	// bctrl 
	ctx.lr = 0x824206E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824206E0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824206E4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_824247F8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82424800;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stw r5,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r5.u32);
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// stw r4,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r4.u32);
	// lwz r4,24(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82426d18
	ctx.lr = 0x8242482C;
	sub_82426D18(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82424844
	if (!ctx.cr0.eq) goto loc_82424844;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82424730
	ctx.lr = 0x82424844;
	sub_82424730(ctx, base);
loc_82424844:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82426AE8) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82426b14
	if (!ctx.cr6.gt) goto loc_82426B14;
	// stw r4,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
loc_82426B14:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82426b38
	if (!ctx.cr6.gt) goto loc_82426B38;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82426a60
	ctx.lr = 0x82426B38;
	sub_82426A60(ctx, base);
loc_82426B38:
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// subf r9,r30,r9
	ctx.r9.u64 = ctx.r9.u64 - r30.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// beq 0x82426b74
	if (ctx.cr0.eq) goto loc_82426B74;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82426B60:
	// lwz r9,-4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// addi r11,r10,-4
	ctx.r11.s64 = ctx.r10.s64 + -4;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// bdnz 0x82426b60
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82426B60;
loc_82426B74:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_82428CE0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-3400
	ctx.r3.s64 = ctx.r11.s64 + -3400;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82428DC8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-3168
	ctx.r3.s64 = ctx.r11.s64 + -3168;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82428EC8) {
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
	// li r4,125
	ctx.r4.s64 = 125;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x82428a88
	ctx.lr = 0x82428EEC;
	sub_82428A88(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-2912
	ctx.r11.s64 = ctx.r11.s64 + -2912;
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,228(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 228);
	// ori r11,r11,24
	ctx.r11.u64 = ctx.r11.u64 | 24;
	// stw r11,228(r3)
	REX_STORE_U32(ctx.r3.u32 + 228, ctx.r11.u32);
	// lwz r3,2736(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 2736);
	// bl 0x824228e0
	ctx.lr = 0x82428F18;
	sub_824228E0(ctx, base);
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

DEFINE_REX_FUNC(sub_82429BB0) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r4,116(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 116);
	// bl 0x824269c8
	ctx.lr = 0x82429BD8;
	sub_824269C8(ctx, base);
	// stw r31,948(r30)
	REX_STORE_U32(r30.u32 + 948, r31.u32);
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

DEFINE_REX_FUNC(sub_8242A6E8) {
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
	// lhz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,1
	r30.s64 = 1;
	// cmplwi cr6,r11,357
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 357, ctx.xer);
	// beq cr6,0x8242a730
	if (ctx.cr6.eq) goto loc_8242A730;
	// lhz r11,2(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 2);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// and r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 & r30.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r30,r10,r11
	r30.u64 = ctx.r10.u64 & ctx.r11.u64;
loc_8242A730:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8242a1e8
	ctx.lr = 0x8242A738;
	sub_8242A1E8(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8242a87c
	if (ctx.cr6.eq) goto loc_8242A87C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8242a868
	if (ctx.cr6.eq) goto loc_8242A868;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8242a7dc
	if (ctx.cr6.eq) goto loc_8242A7DC;
	// cmpwi cr6,r11,352
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 352, ctx.xer);
	// ble cr6,0x8242a890
	if (!ctx.cr6.gt) goto loc_8242A890;
	// cmpwi cr6,r11,354
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 354, ctx.xer);
	// ble cr6,0x8242a78c
	if (!ctx.cr6.gt) goto loc_8242A78C;
	// cmpwi cr6,r11,357
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 357, ctx.xer);
	// beq cr6,0x8242a780
	if (ctx.cr6.eq) goto loc_8242A780;
	// cmpwi cr6,r11,358
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 358, ctx.xer);
	// bne cr6,0x8242a890
	if (!ctx.cr6.eq) goto loc_8242A890;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8242a5b8
	ctx.lr = 0x8242A77C;
	sub_8242A5B8(ctx, base);
	// b 0x8242a870
	goto loc_8242A870;
loc_8242A780:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8243a778
	ctx.lr = 0x8242A788;
	sub_8243A778(ctx, base);
	// b 0x8242a870
	goto loc_8242A870;
loc_8242A78C:
	// lhz r10,14(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 14);
	// li r11,1
	ctx.r11.s64 = 1;
	// lhz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 0);
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
	// cmplwi cr6,r9,65534
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 65534, ctx.xer);
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// bne cr6,0x8242a7c4
	if (!ctx.cr6.eq) goto loc_8242A7C4;
	// lhz r10,18(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 18);
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
loc_8242A7C4:
	// lhz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 12);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r9,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r9.u64;
	// b 0x8242a84c
	goto loc_8242A84C;
loc_8242A7DC:
	// lhz r10,14(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 14);
	// li r11,1
	ctx.r11.s64 = 1;
	// lhz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 0);
	// addi r8,r10,-32
	ctx.r8.s64 = ctx.r10.s64 + -32;
	// cmplwi cr6,r9,65534
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 65534, ctx.xer);
	// addic r9,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r9.s64 = ctx.r8.s64 + -1;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	// bne cr6,0x8242a818
	if (!ctx.cr6.eq) goto loc_8242A818;
	// lhz r9,18(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 18);
	// cmplwi cr6,r9,32
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 32, ctx.xer);
	// beq cr6,0x8242a818
	if (ctx.cr6.eq) goto loc_8242A818;
	// addic r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
loc_8242A818:
	// lhz r9,2(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 2);
	// lhz r8,12(r31)
	ctx.r8.u64 = REX_LOAD_U16(r31.u32 + 12);
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r7,8(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 8);
	// srawi r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// mullw r9,r9,r8
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// subf r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	// subf r10,r8,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r8.u64;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
loc_8242A84C:
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// subfe r10,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8242a890
	if (!ctx.cr6.eq) goto loc_8242A890;
loc_8242A860:
	// li r30,0
	r30.s64 = 0;
	// b 0x8242a890
	goto loc_8242A890;
loc_8242A868:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8242a250
	ctx.lr = 0x8242A870;
	sub_8242A250(ctx, base);
loc_8242A870:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8242a890
	if (!ctx.cr0.eq) goto loc_8242A890;
	// b 0x8242a860
	goto loc_8242A860;
loc_8242A87C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8243a398
	ctx.lr = 0x8242A884;
	sub_8243A398(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r3.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r30,r11,r30
	r30.u64 = ctx.r11.u64 & r30.u64;
loc_8242A890:
	// lhz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 0);
	// cmplwi cr6,r11,65534
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65534, ctx.xer);
	// bne cr6,0x8242a8e4
	if (!ctx.cr6.eq) goto loc_8242A8E4;
	// lhz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 16);
	// cmplwi cr6,r11,22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 22, ctx.xer);
	// blt cr6,0x8242a8e0
	if (ctx.cr6.lt) goto loc_8242A8E0;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8242a8e4
	if (ctx.cr6.eq) goto loc_8242A8E4;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8242A8B8:
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
	// bne 0x8242a8b8
	if (!ctx.cr0.eq) goto loc_8242A8B8;
	// lhz r11,2(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 2);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8242a8e4
	if (ctx.cr6.eq) goto loc_8242A8E4;
loc_8242A8E0:
	// li r30,0
	r30.s64 = 0;
loc_8242A8E4:
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

DEFINE_REX_FUNC(sub_82436DA8) {
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
	// lwz r11,732(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 732);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82436e08
	if (ctx.cr6.eq) goto loc_82436E08;
	// addi r3,r3,700
	ctx.r3.s64 = ctx.r3.s64 + 700;
	// bl 0x824344e8
	ctx.lr = 0x82436DD4;
	sub_824344E8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x82436e08
	if (ctx.cr0.eq) goto loc_82436E08;
	// addi r3,r30,180
	ctx.r3.s64 = r30.s64 + 180;
	// lwz r5,0(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x824351e8
	ctx.lr = 0x82436DEC;
	sub_824351E8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// bne cr6,0x82436e00
	if (!ctx.cr6.eq) goto loc_82436E00;
	// li r11,0
	ctx.r11.s64 = 0;
	// std r11,536(r30)
	REX_STORE_U64(r30.u32 + 536, ctx.r11.u64);
loc_82436E00:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82473600
	ctx.lr = 0x82436E08;
	sub_82473600(ctx, base);
loc_82436E08:
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

DEFINE_REX_FUNC(sub_824380CC) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824380D0) {
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
	ctx.lr = 0x824380FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// lwz r3,184(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 184);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	// addi r4,r11,1024
	ctx.r4.s64 = ctx.r11.s64 + 1024;
	// lwz r11,56(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82438124;
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
	ctx.lr = 0x82438140;
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

DEFINE_REX_FUNC(sub_82439CE8) {
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
	ctx.lr = 0x82439CF0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,204(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 204);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r27,0
	r27.s64 = 0;
	// b 0x82439d30
	goto loc_82439D30;
loc_82439D08:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82439d20
	if (ctx.cr6.eq) goto loc_82439D20;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,0(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x82439d24
	goto loc_82439D24;
loc_82439D20:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82439D24:
	// lwz r10,260(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r29.u32, ctx.xer);
	// bge cr6,0x82439d3c
	if (!ctx.cr6.lt) goto loc_82439D3C;
loc_82439D30:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82439d08
	if (!ctx.cr6.eq) goto loc_82439D08;
	// b 0x82439d4c
	goto loc_82439D4C;
loc_82439D3C:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82439410
	ctx.lr = 0x82439D44;
	sub_82439410(ctx, base);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// bne 0x82439df8
	if (!ctx.cr0.eq) goto loc_82439DF8;
loc_82439D4C:
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,7712
	ctx.r3.s64 = ctx.r11.s64 + 7712;
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// li r4,264
	ctx.r4.s64 = 264;
	// bl 0x8242c3b0
	ctx.lr = 0x82439D64;
	sub_8242C3B0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82439d7c
	if (ctx.cr0.eq) goto loc_82439D7C;
	// lwz r4,220(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 220);
	// bl 0x82439308
	ctx.lr = 0x82439D74;
	sub_82439308(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82439d80
	goto loc_82439D80;
loc_82439D7C:
	// li r31,0
	r31.s64 = 0;
loc_82439D80:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82439df8
	if (ctx.cr6.eq) goto loc_82439DF8;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8242d770
	ctx.lr = 0x82439D94;
	sub_8242D770(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82439de8
	if (ctx.cr0.eq) goto loc_82439DE8;
	// lwz r11,224(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 224);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// bgt cr6,0x82439dac
	if (ctx.cr6.gt) goto loc_82439DAC;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
loc_82439DAC:
	// addi r11,r11,4095
	ctx.r11.s64 = ctx.r11.s64 + 4095;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r4,r11,0,0,19
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// bl 0x82439360
	ctx.lr = 0x82439DBC;
	sub_82439360(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x82439dd8
	if (ctx.cr0.lt) goto loc_82439DD8;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82439410
	ctx.lr = 0x82439DD0;
	sub_82439410(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// b 0x82439de0
	goto loc_82439DE0;
loc_82439DD8:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82438670
	ctx.lr = 0x82439DE0;
	sub_82438670(ctx, base);
loc_82439DE0:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge cr6,0x82439df8
	if (!ctx.cr6.lt) goto loc_82439DF8;
loc_82439DE8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8242e508
	ctx.lr = 0x82439DF0;
	sub_8242E508(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82473600
	ctx.lr = 0x82439DF8;
	sub_82473600(ctx, base);
loc_82439DF8:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_8243D5B8) {
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
	// bl 0x8243d560
	ctx.lr = 0x8243D5D8;
	sub_8243D560(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8243d5e8
	if (ctx.cr0.eq) goto loc_8243D5E8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82473600
	ctx.lr = 0x8243D5E8;
	sub_82473600(ctx, base);
loc_8243D5E8:
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

DEFINE_REX_FUNC(sub_8243E068) {
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
	ctx.lr = 0x8243E070;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,232(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 232);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r30,28(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lwz r29,32(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// addi r25,r4,12
	r25.s64 = ctx.r4.s64 + 12;
	// li r28,0
	r28.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8243e09c
	if (ctx.cr6.eq) goto loc_8243E09C;
	// li r28,4
	r28.s64 = 4;
loc_8243E09C:
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(r30.u32, r29.u32, ctx.xer);
	// bne cr6,0x8243e0a8
	if (!ctx.cr6.eq) goto loc_8243E0A8;
	// ori r28,r28,3
	r28.u64 = r28.u64 | 3;
loc_8243E0A8:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8243e120
	if (ctx.cr6.eq) goto loc_8243E120;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f0,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
loc_8243E0C0:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8243e110
	if (ctx.cr6.eq) goto loc_8243E110;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8243E0D0:
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// beq cr6,0x8243e0f4
	if (ctx.cr6.eq) goto loc_8243E0F4;
	// lfsx f13,r8,r25
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + r25.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x8243e108
	if (ctx.cr6.eq) goto loc_8243E108;
	// rlwinm r28,r28,0,0,29
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFC;
	// b 0x8243e108
	goto loc_8243E108;
loc_8243E0F4:
	// lfs f13,0(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r25.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f12,r8,r25
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + r25.u32);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// beq cr6,0x8243e108
	if (ctx.cr6.eq) goto loc_8243E108;
	// rlwinm r28,r28,0,0,30
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFE;
loc_8243E108:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8243e0d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8243E0D0;
loc_8243E110:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// cmplw cr6,r9,r29
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r29.u32, ctx.xer);
	// blt cr6,0x8243e0c0
	if (ctx.cr6.lt) goto loc_8243E0C0;
loc_8243E120:
	// lwz r11,156(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8243e154
	if (!ctx.cr6.eq) goto loc_8243E154;
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r8,r31,152
	ctx.r8.s64 = r31.s64 + 152;
loc_8243E134:
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
	// bne 0x8243e134
	if (!ctx.cr0.eq) goto loc_8243E134;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stw r10,156(r31)
	REX_STORE_U32(r31.u32 + 156, ctx.r10.u32);
loc_8243E154:
	// mullw r11,r29,r30
	ctx.r11.s64 = int64_t(r29.s32) * int64_t(r30.s32);
	// lwz r10,156(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 156);
	// lwz r3,16(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// rlwinm r27,r11,2,0,29
	r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// bl 0x822091c8
	ctx.lr = 0x8243E170;
	sub_822091C8(ctx, base);
	// lwz r11,156(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 156);
	// lwz r10,0(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 0);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lfs f0,4(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r26.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,156(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 156);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lwz r11,156(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 156);
	// lfs f0,8(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lwz r11,156(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 156);
	// stw r28,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, r28.u32);
	// lwz r11,224(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 224);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8243e234
	if (!ctx.cr6.eq) goto loc_8243E234;
	// lwz r11,164(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 164);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x8243e1ec
	if (!ctx.cr6.eq) goto loc_8243E1EC;
	// lwz r11,168(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 168);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bne cr6,0x8243e1c8
	if (!ctx.cr6.eq) goto loc_8243E1C8;
	// li r3,6
	ctx.r3.s64 = 6;
	// b 0x8243e238
	goto loc_8243E238;
loc_8243E1C8:
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bne cr6,0x8243e1e4
	if (!ctx.cr6.eq) goto loc_8243E1E4;
	// li r3,5
	ctx.r3.s64 = 5;
	// b 0x8243e244
	goto loc_8243E244;
loc_8243E1E4:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8243e244
	goto loc_8243E244;
loc_8243E1EC:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bne cr6,0x8243e21c
	if (!ctx.cr6.eq) goto loc_8243E21C;
	// lwz r11,168(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 168);
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bne cr6,0x8243e214
	if (!ctx.cr6.eq) goto loc_8243E214;
	// li r3,4
	ctx.r3.s64 = 4;
	// b 0x8243e244
	goto loc_8243E244;
loc_8243E214:
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x8243e244
	goto loc_8243E244;
loc_8243E21C:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x8243e22c
	if (!ctx.cr6.eq) goto loc_8243E22C;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8243e244
	goto loc_8243E244;
loc_8243E22C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8243e244
	goto loc_8243E244;
loc_8243E234:
	// li r3,7
	ctx.r3.s64 = 7;
loc_8243E238:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
loc_8243E244:
	// bl 0x82434088
	ctx.lr = 0x8243E248;
	sub_82434088(ctx, base);
	// lwz r11,156(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 156);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// stw r3,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
	// lwz r3,144(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 144);
	// bl 0x822091c8
	ctx.lr = 0x8243E260;
	sub_822091C8(ctx, base);
	// lwz r10,156(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 156);
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r28,148(r31)
	REX_STORE_U32(r31.u32 + 148, r28.u32);
	// stw r10,140(r31)
	REX_STORE_U32(r31.u32 + 140, ctx.r10.u32);
	// lwz r10,0(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 0);
	// stw r10,128(r31)
	REX_STORE_U32(r31.u32 + 128, ctx.r10.u32);
	// lfs f0,4(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r26.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,132(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 132, temp.u32);
	// lfs f0,8(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,220(r31)
	REX_STORE_U32(r31.u32 + 220, ctx.r11.u32);
	// stfs f0,136(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 136, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_8244B988) {
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
	ctx.lr = 0x8244B990;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,0(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// li r11,32000
	ctx.r11.s64 = 32000;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// subfc r10,r11,r4
	ctx.xer.ca = ctx.r4.u32 >= ctx.r11.u32;
	ctx.r10.u64 = ctx.r4.u64 - ctx.r11.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// rlwinm r11,r9,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r29,r11,5
	r29.s64 = ctx.r11.s64 + 5;
	// bl 0x8246e320
	ctx.lr = 0x8244B9C4;
	sub_8246E320(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8244b9d4
	if (!ctx.cr6.eq) goto loc_8244B9D4;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
loc_8244B9D4:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne cr6,0x8244ba00
	if (!ctx.cr6.eq) goto loc_8244BA00;
	// lbz r11,7(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 7);
	// mullw r10,r11,r3
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r3.s32);
	// divwu r9,r31,r10
	ctx.r9.u64 = uint32_t(ctx.r10.u32 ? r31.u32 / ctx.r10.u32 : 0);
	// cmplw cr6,r9,r29
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r29.u32, ctx.xer);
	// bge cr6,0x8244ba00
	if (!ctx.cr6.lt) goto loc_8244BA00;
	// mullw r11,r3,r29
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(r29.s32);
	// divwu r3,r31,r11
	ctx.r3.u64 = uint32_t(ctx.r11.u32 ? r31.u32 / ctx.r11.u32 : 0);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
loc_8244BA00:
	// lbz r3,7(r30)
	ctx.r3.u64 = REX_LOAD_U8(r30.u32 + 7);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_824506E8) {
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
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e50
	ctx.lr = 0x824506F0;
	// stfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -168, f30.u64);
	// stfd f31,-160(r1)
	REX_STORE_U64(ctx.r1.u32 + -160, f31.u64);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,16(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r17,r3
	r17.u64 = ctx.r3.u64;
	// lwz r31,32(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// li r26,0
	r26.s64 = 0;
	// lwz r8,12(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r31,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r22,4(r3)
	r22.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r9,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// lfs f0,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f13.u64);
	// lwz r7,100(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// std r6,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r6.u64);
	// lfd f12,96(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lwz r15,24(r3)
	r15.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// lwz r20,28(r3)
	r20.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// add r16,r10,r11
	r16.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// mullw r18,r7,r31
	r18.s64 = int64_t(ctx.r7.s32) * int64_t(r31.s32);
	// lfs f31,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	f31.f64 = double(temp.f32);
	// lwz r23,0(r3)
	r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r30,36(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r5,20(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// stw r3,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// stw r22,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, r22.u32);
	// stw r15,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r15.u32);
	// stw r20,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r20.u32);
	// stw r16,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r16.u32);
	// fsubs f30,f0,f10
	f30.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// stw r18,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r18.u32);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x824507b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_824507B4;
	// bdzf 4*cr6+eq,0x824507c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_824507C4;
	// bdzf 4*cr6+eq,0x824507e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_824507E4;
	// bdzf 4*cr6+eq,0x824507d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_824507D4;
	// bdzf 4*cr6+eq,0x824507f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_824507F0;
	// bne cr6,0x824507fc
	if (!ctx.cr6.eq) goto loc_824507FC;
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// li r14,1
	r14.s64 = 1;
	// addi r11,r11,15192
	ctx.r11.s64 = ctx.r11.s64 + 15192;
	// b 0x82450808
	goto loc_82450808;
loc_824507B4:
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// li r14,2
	r14.s64 = 2;
	// addi r11,r11,1616
	ctx.r11.s64 = ctx.r11.s64 + 1616;
	// b 0x82450808
	goto loc_82450808;
loc_824507C4:
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// li r14,3
	r14.s64 = 3;
	// addi r11,r11,1656
	ctx.r11.s64 = ctx.r11.s64 + 1656;
	// b 0x82450808
	goto loc_82450808;
loc_824507D4:
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// li r14,3
	r14.s64 = 3;
	// addi r11,r11,15240
	ctx.r11.s64 = ctx.r11.s64 + 15240;
	// b 0x82450808
	goto loc_82450808;
loc_824507E4:
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// addi r11,r11,15312
	ctx.r11.s64 = ctx.r11.s64 + 15312;
	// b 0x82450804
	goto loc_82450804;
loc_824507F0:
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// addi r11,r11,15360
	ctx.r11.s64 = ctx.r11.s64 + 15360;
	// b 0x82450804
	goto loc_82450804;
loc_824507FC:
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// addi r11,r11,1728
	ctx.r11.s64 = ctx.r11.s64 + 1728;
loc_82450804:
	// li r14,4
	r14.s64 = 4;
loc_82450808:
	// stw r14,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r14.u32);
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x8245084c
	if (ctx.cr6.eq) goto loc_8245084C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8245084c
	if (ctx.cr6.eq) goto loc_8245084C;
	// addi r27,r16,-4
	r27.s64 = r16.s64 + -4;
	// mr r28,r23
	r28.u64 = r23.u64;
	// mr r29,r31
	r29.u64 = r31.u64;
	// rotlwi r25,r11,0
	r25.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82450830:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mtctr r25
	ctx.ctr.u64 = r25.u64;
	// bctrl 
	ctx.lr = 0x8245083C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfsu f1,4(r27)
	ctx.fpscr.disableFlushMode();
	ea = 4 + r27.u32;
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ea, temp.u32);
	r27.u32 = ea;
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// add r28,r28,r14
	r28.u64 = r28.u64 + r14.u64;
	// bne 0x82450830
	if (!ctx.cr0.eq) goto loc_82450830;
loc_8245084C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmpw cr6,r30,r31
	ctx.cr6.compare<int32_t>(r30.s32, r31.s32, ctx.xer);
	// lfs f6,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f6.f64 = double(temp.f32);
	// bge cr6,0x824509b4
	if (!ctx.cr6.lt) goto loc_824509B4;
	// subf r11,r31,r30
	ctx.r11.u64 = r30.u64 - r31.u64;
	// addi r10,r30,2
	ctx.r10.s64 = r30.s64 + 2;
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r30,r31
	ctx.r11.u64 = r30.u64 + r31.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r30,r31
	ctx.r6.u64 = r30.u64 + r31.u64;
	// rlwinm r29,r31,2,0,29
	r29.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r28,r18,2,0,29
	r28.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r10,r16
	ctx.r4.u64 = ctx.r10.u64 + r16.u64;
	// addi r5,r11,-3
	ctx.r5.s64 = ctx.r11.s64 + -3;
	// add r3,r9,r16
	ctx.r3.u64 = ctx.r9.u64 + r16.u64;
loc_8245088C:
	// cmplw cr6,r26,r20
	ctx.cr6.compare<uint32_t>(r26.u32, r20.u32, ctx.xer);
	// bge cr6,0x82450df8
	if (!ctx.cr6.lt) goto loc_82450DF8;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// cmpw cr6,r30,r6
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x82450974
	if (!ctx.cr6.lt) goto loc_82450974;
	// subf r10,r30,r6
	ctx.r10.u64 = ctx.r6.u64 - r30.u64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x82450920
	if (ctx.cr6.lt) goto loc_82450920;
	// rlwinm r10,r26,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r4,-12
	ctx.r9.s64 = ctx.r4.s64 + -12;
	// add r8,r10,r22
	ctx.r8.u64 = ctx.r10.u64 + r22.u64;
	// addi r10,r3,-12
	ctx.r10.s64 = ctx.r3.s64 + -12;
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
loc_824508C0:
	// lfs f12,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lfs f9,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// lfs f11,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f7,f9,f12
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// lfs f10,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// lfs f8,8(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f5,12(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f8,f11
	ctx.f4.f64 = double(float(ctx.f8.f64 - ctx.f11.f64));
	// lfsu f0,16(r10)
	ea = 16 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// fsubs f3,f5,f10
	ctx.f3.f64 = double(float(ctx.f5.f64 - ctx.f10.f64));
	// lfsu f13,16(r9)
	ea = 16 + ctx.r9.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r9.u32 = ea;
	// fsubs f2,f13,f0
	ctx.f2.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fmadds f1,f7,f31,f12
	ctx.f1.f64 = double(float(std::fma(ctx.f7.f64, f31.f64, ctx.f12.f64)));
	// stfs f1,4(r8)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// fmadds f13,f4,f31,f11
	ctx.f13.f64 = double(float(std::fma(ctx.f4.f64, f31.f64, ctx.f11.f64)));
	// stfs f13,8(r8)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// fmadds f12,f3,f31,f10
	ctx.f12.f64 = double(float(std::fma(ctx.f3.f64, f31.f64, ctx.f10.f64)));
	// stfs f12,12(r8)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r8.u32 + 12, temp.u32);
	// fmadds f11,f2,f31,f0
	ctx.f11.f64 = double(float(std::fma(ctx.f2.f64, f31.f64, ctx.f0.f64)));
	// stfsu f11,16(r8)
	ea = 16 + ctx.r8.u32;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r8.u32 = ea;
	// blt cr6,0x824508c0
	if (ctx.cr6.lt) goto loc_824508C0;
loc_82450920:
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x82450974
	if (!ctx.cr6.lt) goto loc_82450974;
	// subf r9,r31,r11
	ctx.r9.u64 = ctx.r11.u64 - r31.u64;
	// rlwinm r8,r26,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r11,r6
	ctx.r10.u64 = ctx.r6.u64 - ctx.r11.u64;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r27,r9,-1
	r27.s64 = ctx.r9.s64 + -1;
	// add r11,r8,r22
	ctx.r11.u64 = ctx.r8.u64 + r22.u64;
	// add r9,r7,r16
	ctx.r9.u64 = ctx.r7.u64 + r16.u64;
	// rlwinm r8,r27,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r7,r11,-4
	ctx.r7.s64 = ctx.r11.s64 + -4;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// add r11,r8,r16
	ctx.r11.u64 = ctx.r8.u64 + r16.u64;
	// add r26,r10,r26
	r26.u64 = ctx.r10.u64 + r26.u64;
loc_8245095C:
	// lfsu f0,4(r11)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// lfsu f13,4(r9)
	ea = 4 + ctx.r9.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r9.u32 = ea;
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fmadds f12,f13,f31,f0
	ctx.f12.f64 = double(float(std::fma(ctx.f13.f64, f31.f64, ctx.f0.f64)));
	// stfsu f12,4(r7)
	ea = 4 + ctx.r7.u32;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r7.u32 = ea;
	// bdnz 0x8245095c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8245095C;
loc_82450974:
	// fadds f31,f30,f31
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(f30.f64 + f31.f64));
	// add r30,r18,r30
	r30.u64 = r18.u64 + r30.u64;
	// add r6,r6,r18
	ctx.r6.u64 = ctx.r6.u64 + r18.u64;
	// add r5,r5,r18
	ctx.r5.u64 = ctx.r5.u64 + r18.u64;
	// add r4,r28,r4
	ctx.r4.u64 = r28.u64 + ctx.r4.u64;
	// add r3,r28,r3
	ctx.r3.u64 = r28.u64 + ctx.r3.u64;
	// fcmpu cr6,f31,f6
	ctx.cr6.compare(f31.f64, ctx.f6.f64);
	// blt cr6,0x824509ac
	if (ctx.cr6.lt) goto loc_824509AC;
	// fsubs f31,f31,f6
	f31.f64 = double(float(f31.f64 - ctx.f6.f64));
	// add r6,r6,r31
	ctx.r6.u64 = ctx.r6.u64 + r31.u64;
	// add r30,r30,r31
	r30.u64 = r30.u64 + r31.u64;
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + r31.u64;
	// add r4,r29,r4
	ctx.r4.u64 = r29.u64 + ctx.r4.u64;
	// add r3,r29,r3
	ctx.r3.u64 = r29.u64 + ctx.r3.u64;
loc_824509AC:
	// cmpw cr6,r30,r31
	ctx.cr6.compare<int32_t>(r30.s32, r31.s32, ctx.xer);
	// blt cr6,0x8245088c
	if (ctx.cr6.lt) goto loc_8245088C;
loc_824509B4:
	// cmplw cr6,r26,r20
	ctx.cr6.compare<uint32_t>(r26.u32, r20.u32, ctx.xer);
	// bge cr6,0x82450df8
	if (!ctx.cr6.lt) goto loc_82450DF8;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r18,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r5,r31,r30
	ctx.r5.u64 = r30.u64 - r31.u64;
	// add r4,r18,r9
	ctx.r4.u64 = r18.u64 + ctx.r9.u64;
	// add r21,r31,r11
	r21.u64 = r31.u64 + ctx.r11.u64;
	// rlwinm r6,r5,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r4,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r30,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r30,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r30,r31
	ctx.r11.u64 = r30.u64 + r31.u64;
	// add r29,r30,r10
	r29.u64 = r30.u64 + ctx.r10.u64;
	// add r25,r8,r23
	r25.u64 = ctx.r8.u64 + r23.u64;
	// add r28,r7,r23
	r28.u64 = ctx.r7.u64 + r23.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// add r24,r6,r23
	r24.u64 = ctx.r6.u64 + r23.u64;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f7,9776(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 9776);
	ctx.f7.f64 = double(temp.f32);
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f11,21056(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 21056);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,-25472(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -25472);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm r19,r31,1,0,30
	r19.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lfs f8,21052(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 21052);
	ctx.f8.f64 = double(temp.f32);
	// add r27,r5,r23
	r27.u64 = ctx.r5.u64 + r23.u64;
	// lfs f9,32024(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 32024);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,28452(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 28452);
	ctx.f10.f64 = double(temp.f32);
loc_82450A38:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// cmpw cr6,r30,r4
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r4.s32, ctx.xer);
	// bge cr6,0x82450d98
	if (!ctx.cr6.lt) goto loc_82450D98;
	// rlwinm r10,r26,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r20,20(r17)
	r20.u64 = REX_LOAD_U32(r17.u32 + 20);
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// add r10,r10,r22
	ctx.r10.u64 = ctx.r10.u64 + r22.u64;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// addi r5,r10,-4
	ctx.r5.s64 = ctx.r10.s64 + -4;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// subf r22,r31,r23
	r22.u64 = r23.u64 - r31.u64;
loc_82450A6C:
	// mtctr r20
	ctx.ctr.u64 = r20.u64;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82450ac8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82450AC8;
	// bdzf 4*cr6+eq,0x82450b04
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82450B04;
	// bdzf 4*cr6+eq,0x82450c9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82450C9C;
	// bdzf 4*cr6+eq,0x82450bd0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82450BD0;
	// bdzf 4*cr6+eq,0x82450ce0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82450CE0;
	// bne cr6,0x82450d24
	if (!ctx.cr6.eq) goto loc_82450D24;
	// lbzx r14,r22,r3
	r14.u64 = REX_LOAD_U8(r22.u32 + ctx.r3.u32);
	// lbzx r10,r3,r23
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + r23.u32);
	// std r14,200(r1)
	REX_STORE_U64(ctx.r1.u32 + 200, r14.u64);
	// lfd f13,200(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 200);
	// std r10,264(r1)
	REX_STORE_U64(ctx.r1.u32 + 264, ctx.r10.u64);
	// lfd f0,264(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 264);
	// fcfid f4,f0
	ctx.f4.f64 = double(ctx.f0.s64);
	// fcfid f5,f13
	ctx.f5.f64 = double(ctx.f13.s64);
	// frsp f2,f4
	ctx.f2.f64 = double(float(ctx.f4.f64));
	// frsp f3,f5
	ctx.f3.f64 = double(float(ctx.f5.f64));
	// fsubs f13,f2,f10
	ctx.f13.f64 = double(float(ctx.f2.f64 - ctx.f10.f64));
	// fsubs f1,f3,f10
	ctx.f1.f64 = double(float(ctx.f3.f64 - ctx.f10.f64));
	// fmuls f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// fmuls f0,f1,f9
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f9.f64));
	// b 0x82450d5c
	goto loc_82450D5C;
loc_82450AC8:
	// lhz r10,0(r7)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r7.u32 + 0);
	// lhz r14,0(r6)
	r14.u64 = REX_LOAD_U16(ctx.r6.u32 + 0);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// extsh r14,r14
	r14.s64 = r14.s16;
	// std r10,168(r1)
	REX_STORE_U64(ctx.r1.u32 + 168, ctx.r10.u64);
	// std r14,216(r1)
	REX_STORE_U64(ctx.r1.u32 + 216, r14.u64);
	// lfd f0,168(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 168);
	// lfd f13,216(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 216);
	// fcfid f4,f0
	ctx.f4.f64 = double(ctx.f0.s64);
	// fcfid f5,f13
	ctx.f5.f64 = double(ctx.f13.s64);
	// frsp f2,f4
	ctx.f2.f64 = double(float(ctx.f4.f64));
	// frsp f3,f5
	ctx.f3.f64 = double(float(ctx.f5.f64));
	// fmuls f0,f2,f8
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f8.f64));
	// fmuls f13,f3,f8
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f8.f64));
	// b 0x82450d5c
	goto loc_82450D5C;
loc_82450B04:
	// add r17,r11,r23
	r17.u64 = ctx.r11.u64 + r23.u64;
	// std r7,136(r1)
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.r7.u64);
	// add r18,r11,r23
	r18.u64 = ctx.r11.u64 + r23.u64;
	// lbzx r14,r11,r23
	r14.u64 = REX_LOAD_U8(ctx.r11.u32 + r23.u32);
	// stw r17,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r17.u32);
	// subf r10,r21,r11
	ctx.r10.u64 = ctx.r11.u64 - r21.u64;
	// lwz r7,112(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r18,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r18.u32);
	// add r10,r10,r23
	ctx.r10.u64 = ctx.r10.u64 + r23.u64;
	// std r11,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.r11.u64);
	// std r8,160(r1)
	REX_STORE_U64(ctx.r1.u32 + 160, ctx.r8.u64);
	// lwz r18,124(r1)
	r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r15,128(r1)
	r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lbz r8,1(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// lwz r16,88(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r17,120(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// std r9,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// lbz r9,2(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// lbz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lbz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// ld r8,160(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 160);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// ld r9,104(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// srawi r10,r10,12
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 12;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r10,184(r1)
	REX_STORE_U64(ctx.r1.u32 + 184, ctx.r10.u64);
	// lfd f0,184(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 184);
	// lbz r7,1(r7)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r7.u32 + 1);
	// fcfid f5,f0
	ctx.f5.f64 = double(ctx.f0.s64);
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// frsp f3,f5
	ctx.f3.f64 = double(float(ctx.f5.f64));
	// ld r7,136(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 136);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r14,r11,r14
	r14.u64 = ctx.r11.u64 | r14.u64;
	// ld r11,144(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// rlwinm r14,r14,8,0,23
	r14.u64 = __builtin_rotateleft64(r14.u32 | (r14.u64 << 32), 8) & 0xFFFFFF00;
	// srawi r14,r14,12
	ctx.xer.ca = (r14.s32 < 0) & ((r14.u32 & 0xFFF) != 0);
	r14.s64 = r14.s32 >> 12;
	// extsw r14,r14
	r14.s64 = r14.s32;
	// fmuls f0,f3,f12
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f12.f64));
	// std r14,232(r1)
	REX_STORE_U64(ctx.r1.u32 + 232, r14.u64);
	// lfd f13,232(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 232);
	// fcfid f4,f13
	ctx.f4.f64 = double(ctx.f13.s64);
	// frsp f2,f4
	ctx.f2.f64 = double(float(ctx.f4.f64));
	// fmuls f13,f2,f12
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f12.f64));
	// b 0x82450d5c
	goto loc_82450D5C;
loc_82450BD0:
	// add r18,r11,r23
	r18.u64 = ctx.r11.u64 + r23.u64;
	// lbzx r14,r11,r23
	r14.u64 = REX_LOAD_U8(ctx.r11.u32 + r23.u32);
	// add r17,r11,r23
	r17.u64 = ctx.r11.u64 + r23.u64;
	// std r11,136(r1)
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.r11.u64);
	// subf r10,r21,r11
	ctx.r10.u64 = ctx.r11.u64 - r21.u64;
	// stw r18,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r18.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// std r7,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r7.u64);
	// add r10,r10,r23
	ctx.r10.u64 = ctx.r10.u64 + r23.u64;
	// stw r17,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r17.u32);
	// lwz r7,104(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// std r9,160(r1)
	REX_STORE_U64(ctx.r1.u32 + 160, ctx.r9.u64);
	// std r8,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.r8.u64);
	// lbz r9,2(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// lbz r8,1(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lbz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lwz r18,124(r1)
	r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// lwz r15,128(r1)
	r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r16,88(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r17,120(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// ld r8,144(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// ld r9,160(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 160);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// srawi r10,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 8;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r10,248(r1)
	REX_STORE_U64(ctx.r1.u32 + 248, ctx.r10.u64);
	// lbz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lfd f0,248(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 248);
	// lbz r7,1(r7)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r7.u32 + 1);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// ld r7,112(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r14,r11,r14
	r14.u64 = ctx.r11.u64 | r14.u64;
	// ld r11,136(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 136);
	// rlwinm r14,r14,8,0,23
	r14.u64 = __builtin_rotateleft64(r14.u32 | (r14.u64 << 32), 8) & 0xFFFFFF00;
	// srawi r14,r14,8
	ctx.xer.ca = (r14.s32 < 0) & ((r14.u32 & 0xFF) != 0);
	r14.s64 = r14.s32 >> 8;
	// frsp f4,f13
	ctx.f4.f64 = double(float(ctx.f13.f64));
	// extsw r14,r14
	r14.s64 = r14.s32;
	// std r14,176(r1)
	REX_STORE_U64(ctx.r1.u32 + 176, r14.u64);
	// lfd f5,176(r1)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + 176);
	// fcfid f3,f5
	ctx.f3.f64 = double(ctx.f5.s64);
	// frsp f2,f3
	ctx.f2.f64 = double(float(ctx.f3.f64));
	// fmuls f0,f4,f11
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f11.f64));
	// fmuls f13,f2,f11
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f11.f64));
	// b 0x82450d5c
	goto loc_82450D5C;
loc_82450C9C:
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r14,0(r8)
	r14.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// srawi r10,r10,12
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 12;
	// srawi r14,r14,12
	ctx.xer.ca = (r14.s32 < 0) & ((r14.u32 & 0xFFF) != 0);
	r14.s64 = r14.s32 >> 12;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// extsw r14,r14
	r14.s64 = r14.s32;
	// std r10,208(r1)
	REX_STORE_U64(ctx.r1.u32 + 208, ctx.r10.u64);
	// lfd f5,208(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + 208);
	// std r14,192(r1)
	REX_STORE_U64(ctx.r1.u32 + 192, r14.u64);
	// lfd f0,192(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 192);
	// fcfid f3,f5
	ctx.f3.f64 = double(ctx.f5.s64);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f2,f3
	ctx.f2.f64 = double(float(ctx.f3.f64));
	// frsp f4,f13
	ctx.f4.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f2,f12
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f12.f64));
	// fmuls f13,f4,f12
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f12.f64));
	// b 0x82450d5c
	goto loc_82450D5C;
loc_82450CE0:
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r14,0(r8)
	r14.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// srawi r10,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 8;
	// srawi r14,r14,8
	ctx.xer.ca = (r14.s32 < 0) & ((r14.u32 & 0xFF) != 0);
	r14.s64 = r14.s32 >> 8;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// extsw r14,r14
	r14.s64 = r14.s32;
	// std r10,224(r1)
	REX_STORE_U64(ctx.r1.u32 + 224, ctx.r10.u64);
	// std r14,240(r1)
	REX_STORE_U64(ctx.r1.u32 + 240, r14.u64);
	// lfd f13,240(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 240);
	// fcfid f4,f13
	ctx.f4.f64 = double(ctx.f13.s64);
	// lfd f0,224(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 224);
	// frsp f2,f4
	ctx.f2.f64 = double(float(ctx.f4.f64));
	// fcfid f5,f0
	ctx.f5.f64 = double(ctx.f0.s64);
	// fmuls f13,f2,f11
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f11.f64));
	// frsp f3,f5
	ctx.f3.f64 = double(float(ctx.f5.f64));
	// fmuls f0,f3,f11
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f11.f64));
	// b 0x82450d5c
	goto loc_82450D5C;
loc_82450D24:
	// lwz r14,0(r8)
	r14.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// extsw r14,r14
	r14.s64 = r14.s32;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r14,272(r1)
	REX_STORE_U64(ctx.r1.u32 + 272, r14.u64);
	// std r10,256(r1)
	REX_STORE_U64(ctx.r1.u32 + 256, ctx.r10.u64);
	// lfd f0,256(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 256);
	// fcfid f5,f0
	ctx.f5.f64 = double(ctx.f0.s64);
	// lfd f13,272(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 272);
	// frsp f3,f5
	ctx.f3.f64 = double(float(ctx.f5.f64));
	// fcfid f4,f13
	ctx.f4.f64 = double(ctx.f13.s64);
	// fmuls f0,f3,f7
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f7.f64));
	// frsp f2,f4
	ctx.f2.f64 = double(float(ctx.f4.f64));
	// fmuls f13,f2,f7
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f7.f64));
loc_82450D5C:
	// fsubs f13,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r7,r7,2
	ctx.r7.s64 = ctx.r7.s64 + 2;
	// addi r6,r6,2
	ctx.r6.s64 = ctx.r6.s64 + 2;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmpw cr6,r3,r4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r4.s32, ctx.xer);
	// fmadds f5,f13,f31,f0
	ctx.f5.f64 = double(float(std::fma(ctx.f13.f64, f31.f64, ctx.f0.f64)));
	// stfsu f5,4(r5)
	ea = 4 + ctx.r5.u32;
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r5.u32 = ea;
	// blt cr6,0x82450a6c
	if (ctx.cr6.lt) goto loc_82450A6C;
	// lwz r22,152(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r14,84(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r20,132(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
loc_82450D98:
	// fadds f31,f30,f31
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(f30.f64 + f31.f64));
	// rlwinm r11,r18,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// add r30,r18,r30
	r30.u64 = r18.u64 + r30.u64;
	// add r28,r11,r28
	r28.u64 = ctx.r11.u64 + r28.u64;
	// add r27,r11,r27
	r27.u64 = ctx.r11.u64 + r27.u64;
	// rlwinm r11,r18,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r4,r18
	ctx.r4.u64 = ctx.r4.u64 + r18.u64;
	// add r29,r10,r29
	r29.u64 = ctx.r10.u64 + r29.u64;
	// add r25,r11,r25
	r25.u64 = ctx.r11.u64 + r25.u64;
	// add r24,r11,r24
	r24.u64 = ctx.r11.u64 + r24.u64;
	// fcmpu cr6,f31,f6
	ctx.cr6.compare(f31.f64, ctx.f6.f64);
	// blt cr6,0x82450df0
	if (ctx.cr6.lt) goto loc_82450DF0;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// fsubs f31,f31,f6
	f31.f64 = double(float(f31.f64 - ctx.f6.f64));
	// add r4,r4,r31
	ctx.r4.u64 = ctx.r4.u64 + r31.u64;
	// add r30,r30,r31
	r30.u64 = r30.u64 + r31.u64;
	// add r29,r21,r29
	r29.u64 = r21.u64 + r29.u64;
	// add r28,r11,r28
	r28.u64 = ctx.r11.u64 + r28.u64;
	// add r27,r11,r27
	r27.u64 = ctx.r11.u64 + r27.u64;
	// add r25,r19,r25
	r25.u64 = r19.u64 + r25.u64;
	// add r24,r19,r24
	r24.u64 = r19.u64 + r24.u64;
loc_82450DF0:
	// cmplw cr6,r26,r20
	ctx.cr6.compare<uint32_t>(r26.u32, r20.u32, ctx.xer);
	// blt cr6,0x82450a38
	if (ctx.cr6.lt) goto loc_82450A38;
loc_82450DF8:
	// subf r11,r31,r15
	ctx.r11.u64 = r15.u64 - r31.u64;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82450e08
	if (!ctx.cr6.lt) goto loc_82450E08;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
loc_82450E08:
	// stfs f31,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// stw r11,12(r17)
	REX_STORE_U32(r17.u32 + 12, ctx.r11.u32);
	// cmpw cr6,r30,r15
	ctx.cr6.compare<int32_t>(r30.s32, r15.s32, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x82450e24
	if (ctx.cr6.eq) goto loc_82450E24;
	// neg r11,r31
	ctx.r11.s64 = static_cast<int64_t>(-r31.u64);
loc_82450E24:
	// stw r11,36(r17)
	REX_STORE_U32(r17.u32 + 36, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// neg r5,r15
	ctx.r5.s64 = static_cast<int64_t>(-r15.u64);
	// subf r11,r31,r11
	ctx.r11.u64 = ctx.r11.u64 - r31.u64;
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x82450ee8
	if (!ctx.cr6.lt) goto loc_82450EE8;
	// subf r10,r11,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r11.u64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x82450eac
	if (ctx.cr6.lt) goto loc_82450EAC;
	// add r10,r11,r15
	ctx.r10.u64 = ctx.r11.u64 + r15.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,-3
	ctx.r8.s64 = ctx.r10.s64 + -3;
	// add r10,r9,r16
	ctx.r10.u64 = ctx.r9.u64 + r16.u64;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r15,2
	ctx.r8.s64 = r15.s64 + 2;
	// addi r7,r15,3
	ctx.r7.s64 = r15.s64 + 3;
	// addi r6,r5,-3
	ctx.r6.s64 = ctx.r5.s64 + -3;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// add r9,r9,r16
	ctx.r9.u64 = ctx.r9.u64 + r16.u64;
loc_82450E70:
	// lfs f0,12(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// add r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// add r3,r11,r7
	ctx.r3.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// lfsu f0,16(r9)
	ea = 16 + ctx.r9.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r9.u32 = ea;
	// stfs f0,8(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lfsx f13,r4,r16
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + r16.u32);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,12(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lfsx f12,r3,r16
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + r16.u32);
	ctx.f12.f64 = double(temp.f32);
	// stfsu f12,16(r10)
	ea = 16 + ctx.r10.u32;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// blt cr6,0x82450e70
	if (ctx.cr6.lt) goto loc_82450E70;
loc_82450EAC:
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x82450ee8
	if (!ctx.cr6.lt) goto loc_82450EE8;
	// add r8,r11,r15
	ctx.r8.u64 = ctx.r11.u64 + r15.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r11,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r11.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r16
	ctx.r9.u64 = ctx.r9.u64 + r16.u64;
	// add r8,r8,r16
	ctx.r8.u64 = ctx.r8.u64 + r16.u64;
	// addi r7,r9,-4
	ctx.r7.s64 = ctx.r9.s64 + -4;
	// addi r9,r8,-4
	ctx.r9.s64 = ctx.r8.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82450EDC:
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
	// bdnz 0x82450edc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82450EDC;
loc_82450EE8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82450f2c
	if (!ctx.cr6.lt) goto loc_82450F2C;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r28,80(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r9,r11,r15
	ctx.r9.u64 = ctx.r11.u64 + r15.u64;
	// add r10,r10,r16
	ctx.r10.u64 = ctx.r10.u64 + r16.u64;
	// mullw r9,r9,r14
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(r14.s32);
	// addi r29,r10,-4
	r29.s64 = ctx.r10.s64 + -4;
	// add r30,r9,r23
	r30.u64 = ctx.r9.u64 + r23.u64;
	// neg r31,r11
	r31.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_82450F10:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r28
	ctx.ctr.u64 = r28.u64;
	// bctrl 
	ctx.lr = 0x82450F1C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfsu f1,4(r29)
	ctx.fpscr.disableFlushMode();
	ea = 4 + r29.u32;
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ea, temp.u32);
	r29.u32 = ea;
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// add r30,r30,r14
	r30.u64 = r30.u64 + r14.u64;
	// bne 0x82450f10
	if (!ctx.cr0.eq) goto loc_82450F10;
loc_82450F2C:
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_82474690) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r3,240
	ctx.r8.s64 = ctx.r3.s64 + 240;
loc_82474698:
	// mfmsr r10
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r10.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r11,0,r8
	ea = ctx.r8.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// stwcx. r9,0,r8
	ea = ctx.r8.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x82474698
	if (!ctx.cr0.eq) goto loc_82474698;
	// lwz r10,184(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 184);
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824746e0
	if (ctx.cr6.eq) goto loc_824746E0;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,184(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 184);
	// lwz r9,188(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 188);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// subf r10,r10,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r10.u64;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// b 0x824746e8
	goto loc_824746E8;
loc_824746E0:
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
loc_824746E8:
	// ld r10,200(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 200);
	// std r10,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// lwsync 
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// stw r10,248(r3)
	REX_STORE_U32(ctx.r3.u32 + 248, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82475D70) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82475D78) {
	REX_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824765E0) {
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
	ctx.lr = 0x824765E8;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x822d4f38
	ctx.lr = 0x824765F0;
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// li r29,0
	r29.s64 = 0;
	// lwz r10,12(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// lwz r9,4(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r8,64(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 64);
	// mr r19,r29
	r19.u64 = r29.u64;
	// lwz r7,172(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 172);
	// mr r20,r29
	r20.u64 = r29.u64;
	// stw r4,476(r1)
	REX_STORE_U32(ctx.r1.u32 + 476, ctx.r4.u32);
	// lwz r23,20(r4)
	r23.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// lwz r24,16(r4)
	r24.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r18,56(r4)
	r18.u64 = REX_LOAD_U32(ctx.r4.u32 + 56);
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r10,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// stw r9,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// beq cr6,0x82476650
	if (ctx.cr6.eq) goto loc_82476650;
	// lwz r25,176(r4)
	r25.u64 = REX_LOAD_U32(ctx.r4.u32 + 176);
	// b 0x82476654
	goto loc_82476654;
loc_82476650:
	// mr r25,r29
	r25.u64 = r29.u64;
loc_82476654:
	// lwz r11,224(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 224);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x824774f0
	if (!ctx.cr6.gt) goto loc_824774F0;
	// lhz r11,118(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 118);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x824774f0
	if (!ctx.cr6.gt) goto loc_824774F0;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x82476688
	if (ctx.cr6.eq) goto loc_82476688;
	// li r5,100
	ctx.r5.s64 = 100;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x822d5870
	ctx.lr = 0x82476688;
	sub_822D5870(ctx, base);
loc_82476688:
	// lhz r11,118(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 118);
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// lwz r10,224(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 224);
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// rlwinm r8,r10,6,0,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// divw r11,r8,r7
	ctx.r11.u64 = uint32_t((ctx.r7.s32 && !(ctx.r8.s32 == INT32_MIN && ctx.r7.s32 == -1)) ? ctx.r8.s32 / ctx.r7.s32 : 0);
	// stw r11,240(r1)
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r11.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x824766c4
	if (!ctx.cr6.gt) goto loc_824766C4;
loc_824766B0:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// srw r8,r11,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r9.u8 & 0x3F));
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bgt cr6,0x824766b0
	if (ctx.cr6.gt) goto loc_824766B0;
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
loc_824766C4:
	// lwz r8,256(r21)
	ctx.r8.u64 = REX_LOAD_U32(r21.u32 + 256);
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// stw r9,244(r1)
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r9.u32);
	// divw r10,r8,r10
	ctx.r10.u64 = uint32_t((ctx.r10.s32 && !(ctx.r8.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r8.s32 / ctx.r10.s32 : 0);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x824766ec
	if (!ctx.cr6.gt) goto loc_824766EC;
loc_824766DC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r9,r10,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bgt cr6,0x824766dc
	if (ctx.cr6.gt) goto loc_824766DC;
loc_824766EC:
	// lwz r9,344(r21)
	ctx.r9.u64 = REX_LOAD_U32(r21.u32 + 344);
	// mulli r11,r11,116
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(116));
	// add r17,r11,r9
	r17.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x82476714
	if (!ctx.cr6.gt) goto loc_82476714;
loc_82476704:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r9,r10,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bgt cr6,0x82476704
	if (ctx.cr6.gt) goto loc_82476704;
loc_82476714:
	// lwz r10,340(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 340);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,308(r21)
	r30.u64 = REX_LOAD_U32(r21.u32 + 308);
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// ld r14,240(r1)
	r14.u64 = REX_LOAD_U64(ctx.r1.u32 + 240);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r7,r14
	ctx.r7.u64 = r14.u64;
	// lwzx r15,r9,r10
	r15.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// stw r30,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// rldicr r8,r15,32,63
	ctx.r8.u64 = __builtin_rotateleft64(r15.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x824760c0
	ctx.lr = 0x82476748;
	sub_824760C0(ctx, base);
	// mr r7,r14
	ctx.r7.u64 = r14.u64;
	// rldicr r8,r15,32,63
	ctx.r8.u64 = __builtin_rotateleft64(r15.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r5,264(r21)
	ctx.r5.u64 = REX_LOAD_U32(r21.u32 + 264);
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823288d0
	ctx.lr = 0x82476764;
	sub_823288D0(ctx, base);
	// lwz r8,4(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addi r11,r30,4
	ctx.r11.s64 = r30.s64 + 4;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bgt cr6,0x82476784
	if (ctx.cr6.gt) goto loc_82476784;
loc_82476774:
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// addi r19,r19,1
	r19.s64 = r19.s64 + 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82476774
	if (!ctx.cr6.gt) goto loc_82476774;
loc_82476784:
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lwz r22,80(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,25
	ctx.r10.s64 = 1638400;
	// lis r9,15470
	ctx.r9.s64 = 1013841920;
	// addi r16,r11,3356
	r16.s64 = ctx.r11.s64 + 3356;
	// ori r30,r10,26125
	r30.u64 = ctx.r10.u64 | 26125;
	// ori r31,r9,62303
	r31.u64 = ctx.r9.u64 | 62303;
	// stw r16,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r16.u32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x8247686c
	if (!ctx.cr6.gt) goto loc_8247686C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f29,0(r21)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r21.u32 + 0);
	f29.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r28,r21,540
	r28.s64 = r21.s64 + 540;
	// rlwinm r26,r22,2,0,29
	r26.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r27,r18,-4
	r27.s64 = r18.s64 + -4;
	// lfd f30,-6032(r11)
	f30.u64 = REX_LOAD_U64(ctx.r11.u32 + -6032);
	// lfs f31,16288(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16288);
	f31.f64 = double(temp.f32);
loc_824767CC:
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// lfs f0,4(r16)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r16.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,0(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 0);
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// mullw r8,r11,r30
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(r30.s32);
	// lwz r7,96(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r6,112(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// add r5,r8,r31
	ctx.r5.u64 = ctx.r8.u64 + r31.u64;
	// srawi r11,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 2;
	// stw r5,4(r28)
	REX_STORE_U32(r28.u32 + 4, ctx.r5.u32);
	// srawi r10,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r4,r9,r11
	ctx.r4.u64 = ctx.r11.u64 - ctx.r9.u64;
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
	// lfs f13,292(r21)
	temp.u32 = REX_LOAD_U32(r21.u32 + 292);
	ctx.f13.f64 = double(temp.f32);
	// lwzx r3,r26,r7
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + ctx.r7.u32);
	// extsw r11,r4
	ctx.r11.s64 = ctx.r4.s32;
	// subf r10,r6,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r6.u64;
	// std r11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfd f12,104(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r9.u64);
	// lfd f11,120(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// fcfid f9,f12
	ctx.f9.f64 = double(ctx.f12.s64);
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// frsp f7,f9
	ctx.f7.f64 = double(float(ctx.f9.f64));
	// fmuls f2,f8,f31
	ctx.f2.f64 = double(float(ctx.f8.f64 * f31.f64));
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f28,f6,f13
	f28.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// bl 0x822d5b48
	ctx.lr = 0x82476848;
	sub_822D5B48(ctx, base);
	// frsp f5,f1
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = double(float(ctx.f1.f64));
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// fmuls f4,f5,f28
	ctx.f4.f64 = double(float(ctx.f5.f64 * f28.f64));
	// fmul f3,f4,f29
	ctx.f3.f64 = ctx.f4.f64 * f29.f64;
	// frsp f2,f3
	ctx.f2.f64 = double(float(ctx.f3.f64));
	// stfsu f2,4(r27)
	ea = 4 + r27.u32;
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ea, temp.u32);
	r27.u32 = ea;
	// lwz r8,264(r21)
	ctx.r8.u64 = REX_LOAD_U32(r21.u32 + 264);
	// cmpw cr6,r29,r8
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x824767cc
	if (ctx.cr6.lt) goto loc_824767CC;
loc_8247686C:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r5,404(r21)
	ctx.r5.u64 = REX_LOAD_U32(r21.u32 + 404);
	// li r16,1
	r16.s64 = 1;
	// cmpw cr6,r29,r5
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r5.s32, ctx.xer);
	// lfs f31,23640(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 23640);
	f31.f64 = double(temp.f32);
	// bge cr6,0x82476c10
	if (!ctx.cr6.lt) goto loc_82476C10;
	// lwz r26,476(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 476);
	// lwz r27,92(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
loc_8247688C:
	// mr r7,r14
	ctx.r7.u64 = r14.u64;
	// rldicr r8,r15,32,31
	ctx.r8.u64 = __builtin_rotateleft64(r15.u64, 32) & 0xFFFFFFFF00000000;
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823288d0
	ctx.lr = 0x824768A4;
	sub_823288D0(ctx, base);
	// lwz r22,80(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82469b38
	ctx.lr = 0x824768BC;
	sub_82469B38(ctx, base);
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(r29.s32, r28.s32, ctx.xer);
	// bge cr6,0x82476bac
	if (!ctx.cr6.lt) goto loc_82476BAC;
	// subf r11,r29,r28
	ctx.r11.u64 = r28.u64 - r29.u64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x82476af8
	if (ctx.cr6.lt) goto loc_82476AF8;
	// addi r11,r20,2
	ctx.r11.s64 = r20.s64 + 2;
	// addi r9,r29,2
	ctx.r9.s64 = r29.s64 + 2;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r21,540
	ctx.r11.s64 = r21.s64 + 540;
	// addi r6,r28,-3
	ctx.r6.s64 = r28.s64 + -3;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + r27.u64;
	// add r9,r9,r18
	ctx.r9.u64 = ctx.r9.u64 + r18.u64;
loc_824768F0:
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mullw r4,r8,r30
	ctx.r4.s64 = int64_t(ctx.r8.s32) * int64_t(r30.s32);
	// add r3,r4,r31
	ctx.r3.u64 = ctx.r4.u64 + r31.u64;
	// srawi r8,r3,2
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 2;
	// stw r3,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// srawi r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// subf r7,r5,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r5.u64;
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r5,-8(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + -8);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// extsw r3,r7
	ctx.r3.s64 = ctx.r7.s32;
	// std r4,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r4.u64);
	// lfd f0,120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// std r3,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r3.u64);
	// lfd f12,104(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// frsp f9,f13
	ctx.f9.f64 = double(float(ctx.f13.f64));
	// fmadds f8,f10,f31,f9
	ctx.f8.f64 = double(float(std::fma(ctx.f10.f64, f31.f64, ctx.f9.f64)));
	// fmuls f7,f8,f1
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f1.f64));
	// stfs f7,-8(r9)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r9.u32 + -8, temp.u32);
	// beq cr6,0x8247696c
	if (ctx.cr6.eq) goto loc_8247696C;
	// lwz r8,-8(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + -8);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8247696c
	if (ctx.cr6.eq) goto loc_8247696C;
	// rlwinm r8,r19,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r16,r8,r25
	REX_STORE_U32(ctx.r8.u32 + r25.u32, r16.u32);
loc_8247696C:
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mullw r4,r8,r30
	ctx.r4.s64 = int64_t(ctx.r8.s32) * int64_t(r30.s32);
	// add r3,r4,r31
	ctx.r3.u64 = ctx.r4.u64 + r31.u64;
	// srawi r8,r3,2
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 2;
	// stw r3,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// srawi r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// subf r8,r5,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r5.u64;
	// lwz r5,-4(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// std r4,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.r4.u64);
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,232(r1)
	REX_STORE_U64(ctx.r1.u32 + 232, ctx.r7.u64);
	// lfd f0,232(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 232);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfd f11,144(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmadds f8,f12,f31,f9
	ctx.f8.f64 = double(float(std::fma(ctx.f12.f64, f31.f64, ctx.f9.f64)));
	// fmuls f7,f8,f1
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f1.f64));
	// stfs f7,-4(r9)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r9.u32 + -4, temp.u32);
	// beq cr6,0x824769e8
	if (ctx.cr6.eq) goto loc_824769E8;
	// lwz r8,-4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x824769e8
	if (ctx.cr6.eq) goto loc_824769E8;
	// rlwinm r8,r19,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r16,r8,r25
	REX_STORE_U32(ctx.r8.u32 + r25.u32, r16.u32);
loc_824769E8:
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mullw r4,r8,r30
	ctx.r4.s64 = int64_t(ctx.r8.s32) * int64_t(r30.s32);
	// add r3,r4,r31
	ctx.r3.u64 = ctx.r4.u64 + r31.u64;
	// srawi r8,r3,2
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 2;
	// stw r3,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// srawi r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// subf r8,r5,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r5.u64;
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,168(r1)
	REX_STORE_U64(ctx.r1.u32 + 168, ctx.r7.u64);
	// lfd f0,168(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 168);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lwz r5,0(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// std r4,176(r1)
	REX_STORE_U64(ctx.r1.u32 + 176, ctx.r4.u64);
	// lfd f11,176(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 176);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmadds f8,f12,f31,f9
	ctx.f8.f64 = double(float(std::fma(ctx.f12.f64, f31.f64, ctx.f9.f64)));
	// fmuls f7,f8,f1
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f1.f64));
	// stfs f7,0(r9)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// beq cr6,0x82476a64
	if (ctx.cr6.eq) goto loc_82476A64;
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82476a64
	if (ctx.cr6.eq) goto loc_82476A64;
	// rlwinm r8,r19,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r16,r8,r25
	REX_STORE_U32(ctx.r8.u32 + r25.u32, r16.u32);
loc_82476A64:
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mullw r4,r8,r30
	ctx.r4.s64 = int64_t(ctx.r8.s32) * int64_t(r30.s32);
	// add r3,r4,r31
	ctx.r3.u64 = ctx.r4.u64 + r31.u64;
	// srawi r8,r3,2
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 2;
	// stw r3,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// srawi r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// subf r8,r5,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r5.u64;
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,184(r1)
	REX_STORE_U64(ctx.r1.u32 + 184, ctx.r7.u64);
	// lwz r5,4(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// std r4,216(r1)
	REX_STORE_U64(ctx.r1.u32 + 216, ctx.r4.u64);
	// lfd f0,184(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 184);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfd f11,216(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 216);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmadds f8,f12,f31,f9
	ctx.f8.f64 = double(float(std::fma(ctx.f12.f64, f31.f64, ctx.f9.f64)));
	// fmuls f7,f8,f1
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f1.f64));
	// stfs f7,4(r9)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// beq cr6,0x82476ae0
	if (ctx.cr6.eq) goto loc_82476AE0;
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82476ae0
	if (ctx.cr6.eq) goto loc_82476AE0;
	// rlwinm r8,r19,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r16,r8,r25
	REX_STORE_U32(ctx.r8.u32 + r25.u32, r16.u32);
loc_82476AE0:
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// addi r20,r20,4
	r20.s64 = r20.s64 + 4;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// cmpw cr6,r29,r6
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x824768f0
	if (ctx.cr6.lt) goto loc_824768F0;
loc_82476AF8:
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(r29.s32, r28.s32, ctx.xer);
	// bge cr6,0x82476bac
	if (!ctx.cr6.lt) goto loc_82476BAC;
	// subf r10,r29,r28
	ctx.r10.u64 = r28.u64 - r29.u64;
	// rlwinm r9,r20,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r29,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r21,540
	ctx.r11.s64 = r21.s64 + 540;
	// add r8,r9,r27
	ctx.r8.u64 = ctx.r9.u64 + r27.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// add r7,r7,r18
	ctx.r7.u64 = ctx.r7.u64 + r18.u64;
	// add r20,r10,r20
	r20.u64 = ctx.r10.u64 + r20.u64;
	// add r29,r10,r29
	r29.u64 = ctx.r10.u64 + r29.u64;
loc_82476B24:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mullw r5,r10,r30
	ctx.r5.s64 = int64_t(ctx.r10.s32) * int64_t(r30.s32);
	// add r4,r5,r31
	ctx.r4.u64 = ctx.r5.u64 + r31.u64;
	// srawi r10,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 2;
	// stw r4,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// srawi r9,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// subf r3,r6,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r6.u64;
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// std r10,200(r1)
	REX_STORE_U64(ctx.r1.u32 + 200, ctx.r10.u64);
	// lwz r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// extsw r6,r9
	ctx.r6.s64 = ctx.r9.s32;
	// lfd f0,200(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 200);
	// std r6,152(r1)
	REX_STORE_U64(ctx.r1.u32 + 152, ctx.r6.u64);
	// lfd f11,152(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 152);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmadds f8,f12,f31,f9
	ctx.f8.f64 = double(float(std::fma(ctx.f12.f64, f31.f64, ctx.f9.f64)));
	// fmuls f7,f8,f1
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f1.f64));
	// stfs f7,0(r7)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// beq cr6,0x82476ba0
	if (ctx.cr6.eq) goto loc_82476BA0;
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82476ba0
	if (ctx.cr6.eq) goto loc_82476BA0;
	// rlwinm r10,r19,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r16,r10,r25
	REX_STORE_U32(ctx.r10.u32 + r25.u32, r16.u32);
loc_82476BA0:
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// bdnz 0x82476b24
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82476B24;
loc_82476BAC:
	// addi r11,r22,1
	ctx.r11.s64 = r22.s64 + 1;
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r9,r29,1
	ctx.r9.s64 = r29.s64 + 1;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r7,r9,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// lwzx r6,r8,r17
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + r17.u32);
	// srawi r5,r7,6
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3F) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 6;
	// cmpw cr6,r5,r6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x82476bd8
	if (ctx.cr6.lt) goto loc_82476BD8;
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// stw r22,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r22.u32);
loc_82476BD8:
	// addi r11,r19,1
	ctx.r11.s64 = r19.s64 + 1;
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r29,r9
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82476c04
	if (ctx.cr6.lt) goto loc_82476C04;
loc_82476BF4:
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// addi r19,r19,1
	r19.s64 = r19.s64 + 1;
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82476bf4
	if (!ctx.cr6.lt) goto loc_82476BF4;
loc_82476C04:
	// lwz r5,404(r21)
	ctx.r5.u64 = REX_LOAD_U32(r21.u32 + 404);
	// cmpw cr6,r29,r5
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x8247688c
	if (ctx.cr6.lt) goto loc_8247688C;
loc_82476C10:
	// lwz r5,268(r21)
	ctx.r5.u64 = REX_LOAD_U32(r21.u32 + 268);
	// cmpw cr6,r29,r5
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x82477258
	if (!ctx.cr6.lt) goto loc_82477258;
	// subf r23,r24,r23
	r23.u64 = r23.u64 - r24.u64;
loc_82476C20:
	// lwz r11,160(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// lbzx r10,r11,r19
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + r19.u32);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x82476ecc
	if (!ctx.cr6.eq) goto loc_82476ECC;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x82476c40
	if (ctx.cr6.eq) goto loc_82476C40;
	// rlwinm r11,r19,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r16,r11,r25
	REX_STORE_U32(ctx.r11.u32 + r25.u32, r16.u32);
loc_82476C40:
	// lwzx r3,r23,r24
	ctx.r3.u64 = REX_LOAD_U32(r23.u32 + r24.u32);
	// bl 0x82466cd0
	ctx.lr = 0x82476C48;
	sub_82466CD0(ctx, base);
	// addi r10,r19,1
	ctx.r10.s64 = r19.s64 + 1;
	// lwz r9,88(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,268(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 268);
	// lfs f0,0(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r24.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// fmuls f9,f1,f0
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// add r26,r10,r9
	r26.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r10,0(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 0);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
	// blt cr6,0x82476c78
	if (ctx.cr6.lt) goto loc_82476C78;
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
loc_82476C78:
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(r29.s32, r28.s32, ctx.xer);
	// bge cr6,0x82476ec4
	if (!ctx.cr6.lt) goto loc_82476EC4;
	// lwz r10,128(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// rlwinm r11,r22,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f10,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
loc_82476C8C:
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r9,112(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwzx r8,r11,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// subf r3,r9,r8
	ctx.r3.u64 = ctx.r8.u64 - ctx.r9.u64;
	// bl 0x82476020
	ctx.lr = 0x82476CA0;
	sub_82476020(ctx, base);
	// mr r7,r14
	ctx.r7.u64 = r14.u64;
	// rldicr r8,r15,32,31
	ctx.r8.u64 = __builtin_rotateleft64(r15.u64, 32) & 0xFFFFFFFF00000000;
	// fmuls f0,f1,f9
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f9.f64));
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823288d0
	ctx.lr = 0x82476CC0;
	sub_823288D0(ctx, base);
	// cmpw cr6,r29,r3
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x82476e88
	if (!ctx.cr6.lt) goto loc_82476E88;
	// subf r11,r29,r3
	ctx.r11.u64 = ctx.r3.u64 - r29.u64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x82476e18
	if (ctx.cr6.lt) goto loc_82476E18;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r21,540
	ctx.r11.s64 = r21.s64 + 540;
	// add r10,r10,r18
	ctx.r10.u64 = ctx.r10.u64 + r18.u64;
	// addi r7,r3,-3
	ctx.r7.s64 = ctx.r3.s64 + -3;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_82476CE8:
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mullw r5,r9,r30
	ctx.r5.s64 = int64_t(ctx.r9.s32) * int64_t(r30.s32);
	// add r4,r5,r31
	ctx.r4.u64 = ctx.r5.u64 + r31.u64;
	// cmpw cr6,r29,r7
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r7.s32, ctx.xer);
	// srawi r9,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 2;
	// stw r4,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// srawi r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// subf r8,r6,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r6.u64;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// extsw r6,r8
	ctx.r6.s64 = ctx.r8.s32;
	// std r6,152(r1)
	REX_STORE_U64(ctx.r1.u32 + 152, ctx.r6.u64);
	// lfd f13,152(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 152);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f8,f11,f10
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f7,4(r10)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r9,r4,r30
	ctx.r9.s64 = int64_t(ctx.r4.s32) * int64_t(r30.s32);
	// add r8,r9,r31
	ctx.r8.u64 = ctx.r9.u64 + r31.u64;
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// srawi r9,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 2;
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// srawi r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// subf r6,r5,r9
	ctx.r6.u64 = ctx.r9.u64 - ctx.r5.u64;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// std r5,200(r1)
	REX_STORE_U64(ctx.r1.u32 + 200, ctx.r5.u64);
	// lfd f6,200(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 200);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f10
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f10.f64));
	// fmuls f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfs f2,8(r10)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r8,r9,r30
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(r30.s32);
	// add r6,r8,r31
	ctx.r6.u64 = ctx.r8.u64 + r31.u64;
	// srawi r9,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r6.s32 >> 2;
	// stw r6,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// srawi r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// subf r5,r4,r9
	ctx.r5.u64 = ctx.r9.u64 - ctx.r4.u64;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// std r4,216(r1)
	REX_STORE_U64(ctx.r1.u32 + 216, ctx.r4.u64);
	// lfd f1,216(r1)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + 216);
	// fcfid f13,f1
	ctx.f13.f64 = double(ctx.f1.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f10
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// fmuls f8,f11,f0
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f8,12(r10)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r4,r5,r30
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(r30.s32);
	// add r8,r4,r31
	ctx.r8.u64 = ctx.r4.u64 + r31.u64;
	// srawi r9,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 2;
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// srawi r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// subf r6,r6,r9
	ctx.r6.u64 = ctx.r9.u64 - ctx.r6.u64;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// std r5,184(r1)
	REX_STORE_U64(ctx.r1.u32 + 184, ctx.r5.u64);
	// lfd f7,184(r1)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + 184);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// frsp f5,f6
	ctx.f5.f64 = double(float(ctx.f6.f64));
	// fmuls f4,f5,f10
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f10.f64));
	// fmuls f3,f4,f0
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stfsu f3,16(r10)
	ea = 16 + ctx.r10.u32;
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// blt cr6,0x82476ce8
	if (ctx.cr6.lt) goto loc_82476CE8;
	// ld r14,240(r1)
	r14.u64 = REX_LOAD_U64(ctx.r1.u32 + 240);
loc_82476E18:
	// cmpw cr6,r29,r3
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x82476e88
	if (!ctx.cr6.lt) goto loc_82476E88;
	// rlwinm r9,r29,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r29,r3
	ctx.r10.u64 = ctx.r3.u64 - r29.u64;
	// add r9,r9,r18
	ctx.r9.u64 = ctx.r9.u64 + r18.u64;
	// addi r11,r21,540
	ctx.r11.s64 = r21.s64 + 540;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// add r29,r10,r29
	r29.u64 = ctx.r10.u64 + r29.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82476E3C:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mullw r6,r10,r30
	ctx.r6.s64 = int64_t(ctx.r10.s32) * int64_t(r30.s32);
	// add r5,r6,r31
	ctx.r5.u64 = ctx.r6.u64 + r31.u64;
	// srawi r10,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 2;
	// stw r5,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// srawi r8,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 2;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// subf r4,r7,r10
	ctx.r4.u64 = ctx.r10.u64 - ctx.r7.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// std r3,176(r1)
	REX_STORE_U64(ctx.r1.u32 + 176, ctx.r3.u64);
	// lfd f13,176(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 176);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f8,f11,f10
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfsu f7,4(r9)
	ea = 4 + ctx.r9.u32;
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x82476e3c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82476E3C;
loc_82476E88:
	// lwz r22,80(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r29,1
	ctx.r11.s64 = r29.s64 + 1;
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r9,r22,1
	ctx.r9.s64 = r22.s64 + 1;
	// slw r8,r11,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r6,r8,6
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3F) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 6;
	// lwzx r5,r7,r17
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + r17.u32);
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x82476eb8
	if (ctx.cr6.lt) goto loc_82476EB8;
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// stw r22,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r22.u32);
loc_82476EB8:
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(r29.s32, r28.s32, ctx.xer);
	// rlwinm r11,r22,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 2) & 0xFFFFFFFC;
	// blt cr6,0x82476c8c
	if (ctx.cr6.lt) goto loc_82476C8C;
loc_82476EC4:
	// addi r24,r24,4
	r24.s64 = r24.s64 + 4;
	// b 0x82477200
	goto loc_82477200;
loc_82476ECC:
	// mr r7,r14
	ctx.r7.u64 = r14.u64;
	// rldicr r8,r15,32,31
	ctx.r8.u64 = __builtin_rotateleft64(r15.u64, 32) & 0xFFFFFFFF00000000;
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823288d0
	ctx.lr = 0x82476EE4;
	sub_823288D0(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r27,r19,2,0,29
	r27.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// add r11,r27,r11
	ctx.r11.u64 = r27.u64 + ctx.r11.u64;
	// addi r26,r11,4
	r26.s64 = ctx.r11.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82476f08
	if (!ctx.cr6.gt) goto loc_82476F08;
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
loc_82476F08:
	// lwz r22,80(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// lwz r4,476(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 476);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// bl 0x82469b38
	ctx.lr = 0x82476F1C;
	sub_82469B38(ctx, base);
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(r29.s32, r28.s32, ctx.xer);
	// bge cr6,0x82477200
	if (!ctx.cr6.lt) goto loc_82477200;
	// subf r11,r29,r28
	ctx.r11.u64 = r28.u64 - r29.u64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x8247714c
	if (ctx.cr6.lt) goto loc_8247714C;
	// addi r11,r20,2
	ctx.r11.s64 = r20.s64 + 2;
	// lwz r8,92(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// addi r7,r29,2
	ctx.r7.s64 = r29.s64 + 2;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r21,540
	ctx.r11.s64 = r21.s64 + 540;
	// addi r6,r28,-3
	ctx.r6.s64 = r28.s64 + -3;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r9,r9,r18
	ctx.r9.u64 = ctx.r9.u64 + r18.u64;
loc_82476F54:
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mullw r4,r8,r30
	ctx.r4.s64 = int64_t(ctx.r8.s32) * int64_t(r30.s32);
	// add r3,r4,r31
	ctx.r3.u64 = ctx.r4.u64 + r31.u64;
	// stw r3,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// srawi r8,r3,2
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 2;
	// srawi r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// subf r8,r5,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r5.u64;
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,168(r1)
	REX_STORE_U64(ctx.r1.u32 + 168, ctx.r7.u64);
	// lwz r5,-8(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + -8);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// std r4,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.r4.u64);
	// lfd f0,168(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 168);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfd f11,144(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmadds f8,f12,f31,f9
	ctx.f8.f64 = double(float(std::fma(ctx.f12.f64, f31.f64, ctx.f9.f64)));
	// fmuls f7,f8,f1
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f1.f64));
	// stfs f7,-8(r9)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r9.u32 + -8, temp.u32);
	// beq cr6,0x82476fcc
	if (ctx.cr6.eq) goto loc_82476FCC;
	// lwz r8,-8(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + -8);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82476fcc
	if (ctx.cr6.eq) goto loc_82476FCC;
	// stwx r16,r27,r25
	REX_STORE_U32(r27.u32 + r25.u32, r16.u32);
loc_82476FCC:
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mullw r4,r8,r30
	ctx.r4.s64 = int64_t(ctx.r8.s32) * int64_t(r30.s32);
	// add r3,r4,r31
	ctx.r3.u64 = ctx.r4.u64 + r31.u64;
	// srawi r8,r3,2
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 2;
	// stw r3,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// srawi r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// subf r8,r5,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r5.u64;
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,232(r1)
	REX_STORE_U64(ctx.r1.u32 + 232, ctx.r7.u64);
	// lwz r5,-4(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// std r4,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r4.u64);
	// lfd f0,232(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 232);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfd f11,120(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmadds f8,f12,f31,f9
	ctx.f8.f64 = double(float(std::fma(ctx.f12.f64, f31.f64, ctx.f9.f64)));
	// fmuls f7,f8,f1
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f1.f64));
	// stfs f7,-4(r9)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r9.u32 + -4, temp.u32);
	// beq cr6,0x82477044
	if (ctx.cr6.eq) goto loc_82477044;
	// lwz r8,-4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82477044
	if (ctx.cr6.eq) goto loc_82477044;
	// stwx r16,r27,r25
	REX_STORE_U32(r27.u32 + r25.u32, r16.u32);
loc_82477044:
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mullw r4,r8,r30
	ctx.r4.s64 = int64_t(ctx.r8.s32) * int64_t(r30.s32);
	// add r3,r4,r31
	ctx.r3.u64 = ctx.r4.u64 + r31.u64;
	// srawi r8,r3,2
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 2;
	// stw r3,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// srawi r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// subf r8,r5,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r5.u64;
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r7.u64);
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lwz r5,0(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// std r4,256(r1)
	REX_STORE_U64(ctx.r1.u32 + 256, ctx.r4.u64);
	// lfd f11,256(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 256);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmadds f8,f12,f31,f9
	ctx.f8.f64 = double(float(std::fma(ctx.f12.f64, f31.f64, ctx.f9.f64)));
	// fmuls f7,f8,f1
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f1.f64));
	// stfs f7,0(r9)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// beq cr6,0x824770bc
	if (ctx.cr6.eq) goto loc_824770BC;
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x824770bc
	if (ctx.cr6.eq) goto loc_824770BC;
	// stwx r16,r27,r25
	REX_STORE_U32(r27.u32 + r25.u32, r16.u32);
loc_824770BC:
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mullw r4,r8,r30
	ctx.r4.s64 = int64_t(ctx.r8.s32) * int64_t(r30.s32);
	// add r3,r4,r31
	ctx.r3.u64 = ctx.r4.u64 + r31.u64;
	// srawi r8,r3,2
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 2;
	// stw r3,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// srawi r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// subf r8,r5,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r5.u64;
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,192(r1)
	REX_STORE_U64(ctx.r1.u32 + 192, ctx.r7.u64);
	// lwz r5,4(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// std r4,208(r1)
	REX_STORE_U64(ctx.r1.u32 + 208, ctx.r4.u64);
	// lfd f0,192(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 192);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfd f11,208(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 208);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmadds f8,f12,f31,f9
	ctx.f8.f64 = double(float(std::fma(ctx.f12.f64, f31.f64, ctx.f9.f64)));
	// fmuls f7,f8,f1
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f1.f64));
	// stfs f7,4(r9)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// beq cr6,0x82477134
	if (ctx.cr6.eq) goto loc_82477134;
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82477134
	if (ctx.cr6.eq) goto loc_82477134;
	// stwx r16,r27,r25
	REX_STORE_U32(r27.u32 + r25.u32, r16.u32);
loc_82477134:
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// addi r20,r20,4
	r20.s64 = r20.s64 + 4;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// cmpw cr6,r29,r6
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x82476f54
	if (ctx.cr6.lt) goto loc_82476F54;
loc_8247714C:
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(r29.s32, r28.s32, ctx.xer);
	// bge cr6,0x82477200
	if (!ctx.cr6.lt) goto loc_82477200;
	// subf r10,r29,r28
	ctx.r10.u64 = r28.u64 - r29.u64;
	// lwz r8,92(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r9,r20,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r29,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r21,540
	ctx.r11.s64 = r21.s64 + 540;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// add r7,r7,r18
	ctx.r7.u64 = ctx.r7.u64 + r18.u64;
	// add r20,r10,r20
	r20.u64 = ctx.r10.u64 + r20.u64;
	// add r29,r10,r29
	r29.u64 = ctx.r10.u64 + r29.u64;
loc_8247717C:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mullw r5,r10,r30
	ctx.r5.s64 = int64_t(ctx.r10.s32) * int64_t(r30.s32);
	// add r4,r5,r31
	ctx.r4.u64 = ctx.r5.u64 + r31.u64;
	// srawi r10,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 2;
	// stw r4,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// srawi r9,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// subf r3,r6,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r6.u64;
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// std r10,224(r1)
	REX_STORE_U64(ctx.r1.u32 + 224, ctx.r10.u64);
	// lwz r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// extsw r6,r9
	ctx.r6.s64 = ctx.r9.s32;
	// std r6,136(r1)
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.r6.u64);
	// lfd f0,224(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 224);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfd f11,136(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmadds f8,f12,f31,f9
	ctx.f8.f64 = double(float(std::fma(ctx.f12.f64, f31.f64, ctx.f9.f64)));
	// fmuls f7,f8,f1
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f1.f64));
	// stfs f7,0(r7)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// beq cr6,0x824771f4
	if (ctx.cr6.eq) goto loc_824771F4;
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x824771f4
	if (ctx.cr6.eq) goto loc_824771F4;
	// stwx r16,r27,r25
	REX_STORE_U32(r27.u32 + r25.u32, r16.u32);
loc_824771F4:
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// bdnz 0x8247717c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8247717C;
loc_82477200:
	// addi r11,r22,1
	ctx.r11.s64 = r22.s64 + 1;
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r9,r29,1
	ctx.r9.s64 = r29.s64 + 1;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r7,r9,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// lwzx r6,r8,r17
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + r17.u32);
	// srawi r5,r7,6
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3F) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 6;
	// cmpw cr6,r5,r6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x8247722c
	if (ctx.cr6.lt) goto loc_8247722C;
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// stw r22,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r22.u32);
loc_8247722C:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8247724c
	if (ctx.cr6.lt) goto loc_8247724C;
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
loc_8247723C:
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// addi r19,r19,1
	r19.s64 = r19.s64 + 1;
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8247723c
	if (!ctx.cr6.lt) goto loc_8247723C;
loc_8247724C:
	// lwz r5,268(r21)
	ctx.r5.u64 = REX_LOAD_U32(r21.u32 + 268);
	// cmpw cr6,r29,r5
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x82476c20
	if (ctx.cr6.lt) goto loc_82476C20;
loc_82477258:
	// lwz r11,476(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 476);
	// lhz r10,118(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 118);
	// extsh r28,r10
	r28.s64 = ctx.r10.s16;
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(r29.s32, r28.s32, ctx.xer);
	// bge cr6,0x82477478
	if (!ctx.cr6.lt) goto loc_82477478;
	// rlwinm r11,r22,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r8,r5,-1
	ctx.r8.s64 = ctx.r5.s64 + -1;
	// add r10,r11,r17
	ctx.r10.u64 = ctx.r11.u64 + r17.u64;
	// slw r7,r8,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r6,r11,r17
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + r17.u32);
	// srawi r11,r7,6
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 6;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x824772a0
	if (!ctx.cr6.lt) goto loc_824772A0;
loc_82477290:
	// lwzu r9,-4(r10)
	ea = -4 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// addi r22,r22,-1
	r22.s64 = r22.s64 + -1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82477290
	if (ctx.cr6.lt) goto loc_82477290;
loc_824772A0:
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// lwz r4,476(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 476);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82469b38
	ctx.lr = 0x824772B0;
	sub_82469B38(ctx, base);
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// subf r10,r29,r28
	ctx.r10.u64 = r28.u64 - r29.u64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// blt cr6,0x8247740c
	if (ctx.cr6.lt) goto loc_8247740C;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r21,540
	ctx.r11.s64 = r21.s64 + 540;
	// add r10,r10,r18
	ctx.r10.u64 = ctx.r10.u64 + r18.u64;
	// addi r7,r28,-3
	ctx.r7.s64 = r28.s64 + -3;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_824772E0:
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mullw r5,r9,r30
	ctx.r5.s64 = int64_t(ctx.r9.s32) * int64_t(r30.s32);
	// add r4,r5,r31
	ctx.r4.u64 = ctx.r5.u64 + r31.u64;
	// cmpw cr6,r29,r7
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r7.s32, ctx.xer);
	// srawi r9,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 2;
	// stw r4,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// srawi r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// subf r3,r6,r9
	ctx.r3.u64 = ctx.r9.u64 - ctx.r6.u64;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// extsw r9,r3
	ctx.r9.s64 = ctx.r3.s32;
	// std r9,136(r1)
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.r9.u64);
	// lfd f12,136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f8,4(r10)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r5,r8,r30
	ctx.r5.s64 = int64_t(ctx.r8.s32) * int64_t(r30.s32);
	// add r4,r5,r31
	ctx.r4.u64 = ctx.r5.u64 + r31.u64;
	// stw r4,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// srawi r9,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 2;
	// srawi r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// subf r3,r6,r9
	ctx.r3.u64 = ctx.r9.u64 - ctx.r6.u64;
	// extsw r9,r3
	ctx.r9.s64 = ctx.r3.s32;
	// std r9,224(r1)
	REX_STORE_U64(ctx.r1.u32 + 224, ctx.r9.u64);
	// lfd f7,224(r1)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + 224);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// frsp f5,f6
	ctx.f5.f64 = double(float(ctx.f6.f64));
	// fmuls f4,f5,f13
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// fmuls f3,f4,f0
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stfs f3,8(r10)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r5,r8,r30
	ctx.r5.s64 = int64_t(ctx.r8.s32) * int64_t(r30.s32);
	// add r4,r5,r31
	ctx.r4.u64 = ctx.r5.u64 + r31.u64;
	// stw r4,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// srawi r9,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 2;
	// srawi r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// subf r3,r6,r9
	ctx.r3.u64 = ctx.r9.u64 - ctx.r6.u64;
	// extsw r9,r3
	ctx.r9.s64 = ctx.r3.s32;
	// std r9,208(r1)
	REX_STORE_U64(ctx.r1.u32 + 208, ctx.r9.u64);
	// lfd f2,208(r1)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r1.u32 + 208);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// frsp f12,f1
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// fmuls f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,12(r10)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r5,r8,r30
	ctx.r5.s64 = int64_t(ctx.r8.s32) * int64_t(r30.s32);
	// add r4,r5,r31
	ctx.r4.u64 = ctx.r5.u64 + r31.u64;
	// srawi r9,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 2;
	// stw r4,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// srawi r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// subf r3,r6,r9
	ctx.r3.u64 = ctx.r9.u64 - ctx.r6.u64;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// extsw r9,r3
	ctx.r9.s64 = ctx.r3.s32;
	// std r9,192(r1)
	REX_STORE_U64(ctx.r1.u32 + 192, ctx.r9.u64);
	// lfd f9,192(r1)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + 192);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fmuls f6,f7,f13
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fmuls f5,f6,f0
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfsu f5,16(r10)
	ea = 16 + ctx.r10.u32;
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// blt cr6,0x824772e0
	if (ctx.cr6.lt) goto loc_824772E0;
loc_8247740C:
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(r29.s32, r28.s32, ctx.xer);
	// bge cr6,0x82477478
	if (!ctx.cr6.lt) goto loc_82477478;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r8,r29,r28
	ctx.r8.u64 = r28.u64 - r29.u64;
	// add r10,r10,r18
	ctx.r10.u64 = ctx.r10.u64 + r18.u64;
	// addi r11,r21,540
	ctx.r11.s64 = r21.s64 + 540;
	// addi r9,r10,-4
	ctx.r9.s64 = ctx.r10.s64 + -4;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8247742C:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mullw r6,r10,r30
	ctx.r6.s64 = int64_t(ctx.r10.s32) * int64_t(r30.s32);
	// add r5,r6,r31
	ctx.r5.u64 = ctx.r6.u64 + r31.u64;
	// srawi r10,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 2;
	// stw r5,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// srawi r8,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 2;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// subf r4,r7,r10
	ctx.r4.u64 = ctx.r10.u64 - ctx.r7.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// std r3,136(r1)
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.r3.u64);
	// lfd f12,136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfsu f8,4(r9)
	ea = 4 + ctx.r9.u32;
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x8247742c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8247742C;
loc_82477478:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x824774dc
	if (ctx.cr6.eq) goto loc_824774DC;
	// lwz r11,304(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 304);
	// addic. r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt 0x824774dc
	if (ctx.cr0.lt) goto loc_824774DC;
	// lwz r8,88(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,268(r21)
	ctx.r9.u64 = REX_LOAD_U32(r21.u32 + 268);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
loc_8247749C:
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x824774b4
	if (ctx.cr6.lt) goto loc_824774B4;
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x824774d4
	if (ctx.cr6.lt) goto loc_824774D4;
loc_824774B4:
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// bge 0x8247749c
	if (!ctx.cr0.lt) goto loc_8247749C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x822d4f84
	ctx.lr = 0x824774D0;
	// b 0x822d4ea0
	return;
loc_824774D4:
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r16,r11,r25
	REX_STORE_U32(ctx.r11.u32 + r25.u32, r16.u32);
loc_824774DC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x822d4f84
	ctx.lr = 0x824774EC;
	// b 0x822d4ea0
	return;
loc_824774F0:
	// lis r3,-32764
	ctx.r3.s64 = -2147221504;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x822d4f84
	ctx.lr = 0x82477504;
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_824B8DE0) {
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
	ctx.lr = 0x824B8DE8;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// add r8,r3,r5
	ctx.r8.u64 = ctx.r3.u64 + ctx.r5.u64;
	// lwz r11,24(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 24);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// lwz r7,0(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lbz r26,668(r8)
	r26.u64 = REX_LOAD_U8(ctx.r8.u32 + 668);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r27,r3,232
	r27.s64 = ctx.r3.s64 + 232;
	// lwz r4,632(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 632);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r6,4(r29)
	ctx.r6.u64 = REX_LOAD_U32(r29.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r30,40(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 40);
	// clrlwi r28,r26,30
	r28.u64 = r26.u32 & 0x3;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// stw r5,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r5.u32);
	// dcbzl r0,r30
	ea = (r30.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// cmplwi cr6,r8,128
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 128, ctx.xer);
	// blt cr6,0x824b8e5c
	if (ctx.cr6.lt) goto loc_824B8E5C;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// bl 0x8235f5b0
	ctx.lr = 0x824B8E54;
	sub_8235F5B0(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// b 0x824b8ebc
	goto loc_824B8EBC;
loc_824B8E5C:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x824b8eb8
	if (!ctx.cr6.gt) goto loc_824B8EB8;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_824B8E68:
	// lhz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// clrlwi r8,r5,26
	ctx.r8.u64 = ctx.r5.u32 & 0x3F;
	// rlwinm r3,r5,24,8,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFFFFFF;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// mullw r8,r3,r7
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r7.s32);
	// clrlwi r10,r10,26
	ctx.r10.u64 = ctx.r10.u32 & 0x3F;
	// rlwinm r5,r5,25,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 25) & 0x1;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// neg r5,r5
	ctx.r5.s64 = static_cast<int64_t>(-ctx.r5.u64);
	// lbzx r3,r10,r4
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// xor r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r5.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// subf r5,r5,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r5.u64;
	// extsh r8,r5
	ctx.r8.s64 = ctx.r5.s16;
	// lbzx r23,r27,r3
	r23.u64 = REX_LOAD_U8(r27.u32 + ctx.r3.u32);
	// rotlwi r3,r3,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// or r9,r23,r9
	ctx.r9.u64 = r23.u64 | ctx.r9.u64;
	// sthx r8,r3,r30
	REX_STORE_U16(ctx.r3.u32 + r30.u32, ctx.r8.u16);
	// bdnz 0x824b8e68
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824B8E68;
loc_824B8EB8:
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
loc_824B8EBC:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x824b8f28
	if (!ctx.cr6.eq) goto loc_824B8F28;
	// lhz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 0);
	// clrlwi r10,r28,31
	ctx.r10.u64 = r28.u32 & 0x1;
	// rlwinm r9,r28,2,28,28
	ctx.r9.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0x8;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r9,r24
	ctx.r11.u64 = ctx.r9.u64 + r24.u64;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// srawi r10,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 3;
	// srawi r9,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 4;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// srawi r6,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 3;
	// clrlwi r5,r6,16
	ctx.r5.u64 = ctx.r6.u32 & 0xFFFF;
	// rlwinm r4,r5,16,0,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFFFF0000;
	// or r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 | ctx.r5.u64;
	// rldicr r10,r3,32,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF00000000;
	// or r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 | ctx.r3.u64;
	// std r9,48(r11)
	REX_STORE_U64(ctx.r11.u32 + 48, ctx.r9.u64);
	// std r9,32(r11)
	REX_STORE_U64(ctx.r11.u32 + 32, ctx.r9.u64);
	// std r9,16(r11)
	REX_STORE_U64(ctx.r11.u32 + 16, ctx.r9.u64);
	// std r9,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// b 0x824b8f44
	goto loc_824B8F44;
loc_824B8F28:
	// rlwinm r10,r28,2,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0x8;
	// clrlwi r11,r28,31
	ctx.r11.u64 = r28.u32 & 0x1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r24
	ctx.r4.u64 = ctx.r11.u64 + r24.u64;
	// bl 0x824a64e0
	ctx.lr = 0x824B8F44;
	sub_824A64E0(ctx, base);
loc_824B8F44:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// rlwinm r26,r26,30,26,31
	r26.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 30) & 0x3F;
	// lwz r4,632(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 632);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// lwz r7,0(r29)
	ctx.r7.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r6,4(r29)
	ctx.r6.u64 = REX_LOAD_U32(r29.u32 + 4);
	// clrlwi r28,r26,30
	r28.u64 = r26.u32 & 0x3;
	// lwz r30,40(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 40);
	// li r9,0
	ctx.r9.s64 = 0;
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// stw r5,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r5.u32);
	// dcbzl r0,r30
	ea = (r30.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// cmplwi cr6,r8,128
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 128, ctx.xer);
	// blt cr6,0x824b8fa0
	if (ctx.cr6.lt) goto loc_824B8FA0;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8235f5b0
	ctx.lr = 0x824B8F98;
	sub_8235F5B0(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// b 0x824b9000
	goto loc_824B9000;
loc_824B8FA0:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x824b8ffc
	if (!ctx.cr6.gt) goto loc_824B8FFC;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_824B8FAC:
	// lhz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// clrlwi r8,r5,26
	ctx.r8.u64 = ctx.r5.u32 & 0x3F;
	// rlwinm r3,r5,24,8,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFFFFFF;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// mullw r8,r3,r7
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r7.s32);
	// clrlwi r10,r10,26
	ctx.r10.u64 = ctx.r10.u32 & 0x3F;
	// rlwinm r5,r5,25,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 25) & 0x1;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// neg r5,r5
	ctx.r5.s64 = static_cast<int64_t>(-ctx.r5.u64);
	// lbzx r3,r10,r4
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// xor r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r5.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// subf r5,r5,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r5.u64;
	// extsh r8,r5
	ctx.r8.s64 = ctx.r5.s16;
	// lbzx r23,r27,r3
	r23.u64 = REX_LOAD_U8(r27.u32 + ctx.r3.u32);
	// rotlwi r3,r3,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// or r9,r23,r9
	ctx.r9.u64 = r23.u64 | ctx.r9.u64;
	// sthx r8,r3,r30
	REX_STORE_U16(ctx.r3.u32 + r30.u32, ctx.r8.u16);
	// bdnz 0x824b8fac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824B8FAC;
loc_824B8FFC:
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
loc_824B9000:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x824b906c
	if (!ctx.cr6.eq) goto loc_824B906C;
	// lhz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 0);
	// clrlwi r10,r28,31
	ctx.r10.u64 = r28.u32 & 0x1;
	// rlwinm r9,r28,2,28,28
	ctx.r9.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0x8;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r9,r24
	ctx.r11.u64 = ctx.r9.u64 + r24.u64;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// srawi r10,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 3;
	// srawi r9,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 4;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// srawi r6,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 3;
	// clrlwi r5,r6,16
	ctx.r5.u64 = ctx.r6.u32 & 0xFFFF;
	// rlwinm r4,r5,16,0,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFFFF0000;
	// or r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 | ctx.r5.u64;
	// rldicr r10,r3,32,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF00000000;
	// or r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 | ctx.r3.u64;
	// std r9,48(r11)
	REX_STORE_U64(ctx.r11.u32 + 48, ctx.r9.u64);
	// std r9,32(r11)
	REX_STORE_U64(ctx.r11.u32 + 32, ctx.r9.u64);
	// std r9,16(r11)
	REX_STORE_U64(ctx.r11.u32 + 16, ctx.r9.u64);
	// std r9,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// b 0x824b9088
	goto loc_824B9088;
loc_824B906C:
	// rlwinm r10,r28,2,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0x8;
	// clrlwi r11,r28,31
	ctx.r11.u64 = r28.u32 & 0x1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r24
	ctx.r4.u64 = ctx.r11.u64 + r24.u64;
	// bl 0x824a64e0
	ctx.lr = 0x824B9088;
	sub_824A64E0(ctx, base);
loc_824B9088:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// rlwinm r26,r26,30,26,31
	r26.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 30) & 0x3F;
	// lwz r4,632(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 632);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// lwz r7,0(r29)
	ctx.r7.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r6,4(r29)
	ctx.r6.u64 = REX_LOAD_U32(r29.u32 + 4);
	// clrlwi r28,r26,30
	r28.u64 = r26.u32 & 0x3;
	// lwz r30,40(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 40);
	// li r9,0
	ctx.r9.s64 = 0;
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// stw r5,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r5.u32);
	// dcbzl r0,r30
	ea = (r30.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// cmplwi cr6,r8,128
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 128, ctx.xer);
	// blt cr6,0x824b90e4
	if (ctx.cr6.lt) goto loc_824B90E4;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8235f5b0
	ctx.lr = 0x824B90DC;
	sub_8235F5B0(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// b 0x824b9144
	goto loc_824B9144;
loc_824B90E4:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x824b9140
	if (!ctx.cr6.gt) goto loc_824B9140;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_824B90F0:
	// lhz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// clrlwi r8,r5,26
	ctx.r8.u64 = ctx.r5.u32 & 0x3F;
	// rlwinm r3,r5,24,8,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFFFFFF;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// mullw r8,r3,r7
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r7.s32);
	// clrlwi r10,r10,26
	ctx.r10.u64 = ctx.r10.u32 & 0x3F;
	// rlwinm r5,r5,25,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 25) & 0x1;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// neg r5,r5
	ctx.r5.s64 = static_cast<int64_t>(-ctx.r5.u64);
	// lbzx r3,r10,r4
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// xor r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r5.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// subf r5,r5,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r5.u64;
	// extsh r8,r5
	ctx.r8.s64 = ctx.r5.s16;
	// lbzx r23,r27,r3
	r23.u64 = REX_LOAD_U8(r27.u32 + ctx.r3.u32);
	// rotlwi r3,r3,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// or r9,r23,r9
	ctx.r9.u64 = r23.u64 | ctx.r9.u64;
	// sthx r8,r3,r30
	REX_STORE_U16(ctx.r3.u32 + r30.u32, ctx.r8.u16);
	// bdnz 0x824b90f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824B90F0;
loc_824B9140:
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
loc_824B9144:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x824b91b0
	if (!ctx.cr6.eq) goto loc_824B91B0;
	// lhz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 0);
	// clrlwi r10,r28,31
	ctx.r10.u64 = r28.u32 & 0x1;
	// rlwinm r9,r28,2,28,28
	ctx.r9.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0x8;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r9,r24
	ctx.r11.u64 = ctx.r9.u64 + r24.u64;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// srawi r10,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 3;
	// srawi r9,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 4;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// srawi r6,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 3;
	// clrlwi r5,r6,16
	ctx.r5.u64 = ctx.r6.u32 & 0xFFFF;
	// rlwinm r4,r5,16,0,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFFFF0000;
	// or r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 | ctx.r5.u64;
	// rldicr r10,r3,32,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF00000000;
	// or r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 | ctx.r3.u64;
	// std r9,48(r11)
	REX_STORE_U64(ctx.r11.u32 + 48, ctx.r9.u64);
	// std r9,32(r11)
	REX_STORE_U64(ctx.r11.u32 + 32, ctx.r9.u64);
	// std r9,16(r11)
	REX_STORE_U64(ctx.r11.u32 + 16, ctx.r9.u64);
	// std r9,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// b 0x824b91cc
	goto loc_824B91CC;
loc_824B91B0:
	// rlwinm r10,r28,2,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0x8;
	// clrlwi r11,r28,31
	ctx.r11.u64 = r28.u32 & 0x1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r24
	ctx.r4.u64 = ctx.r11.u64 + r24.u64;
	// bl 0x824a64e0
	ctx.lr = 0x824B91CC;
	sub_824A64E0(ctx, base);
loc_824B91CC:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// rlwinm r9,r26,30,26,31
	ctx.r9.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 30) & 0x3F;
	// lwz r4,632(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 632);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// lwz r7,0(r29)
	ctx.r7.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r6,4(r29)
	ctx.r6.u64 = REX_LOAD_U32(r29.u32 + 4);
	// clrlwi r28,r9,30
	r28.u64 = ctx.r9.u32 & 0x3;
	// lwz r30,40(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 40);
	// li r9,0
	ctx.r9.s64 = 0;
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// stw r5,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r5.u32);
	// dcbzl r0,r30
	ea = (r30.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// cmplwi cr6,r8,128
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 128, ctx.xer);
	// blt cr6,0x824b9228
	if (ctx.cr6.lt) goto loc_824B9228;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8235f5b0
	ctx.lr = 0x824B9220;
	sub_8235F5B0(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// b 0x824b9288
	goto loc_824B9288;
loc_824B9228:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x824b9284
	if (!ctx.cr6.gt) goto loc_824B9284;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_824B9234:
	// lhz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// clrlwi r8,r5,26
	ctx.r8.u64 = ctx.r5.u32 & 0x3F;
	// rlwinm r3,r5,24,8,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFFFFFF;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// mullw r8,r3,r7
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r7.s32);
	// clrlwi r10,r10,26
	ctx.r10.u64 = ctx.r10.u32 & 0x3F;
	// rlwinm r5,r5,25,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 25) & 0x1;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// neg r5,r5
	ctx.r5.s64 = static_cast<int64_t>(-ctx.r5.u64);
	// lbzx r3,r10,r4
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// xor r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r5.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// subf r5,r5,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r5.u64;
	// extsh r8,r5
	ctx.r8.s64 = ctx.r5.s16;
	// lbzx r29,r27,r3
	r29.u64 = REX_LOAD_U8(r27.u32 + ctx.r3.u32);
	// rotlwi r3,r3,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// or r9,r29,r9
	ctx.r9.u64 = r29.u64 | ctx.r9.u64;
	// sthx r8,r3,r30
	REX_STORE_U16(ctx.r3.u32 + r30.u32, ctx.r8.u16);
	// bdnz 0x824b9234
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824B9234;
loc_824B9284:
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
loc_824B9288:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x824b92f8
	if (!ctx.cr6.eq) goto loc_824B92F8;
	// lhz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 0);
	// clrlwi r9,r28,31
	ctx.r9.u64 = r28.u32 & 0x1;
	// rlwinm r10,r28,2,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0x8;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r11,r10,r24
	ctx.r11.u64 = ctx.r10.u64 + r24.u64;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// srawi r10,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 3;
	// srawi r9,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 4;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// srawi r7,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 3;
	// clrlwi r6,r7,16
	ctx.r6.u64 = ctx.r7.u32 & 0xFFFF;
	// rlwinm r5,r6,16,0,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xFFFF0000;
	// or r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 | ctx.r6.u64;
	// rldicr r3,r4,32,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFF00000000;
	// or r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 | ctx.r4.u64;
	// std r10,48(r11)
	REX_STORE_U64(ctx.r11.u32 + 48, ctx.r10.u64);
	// std r10,32(r11)
	REX_STORE_U64(ctx.r11.u32 + 32, ctx.r10.u64);
	// std r10,16(r11)
	REX_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
	// std r10,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec4
	return;
loc_824B92F8:
	// clrlwi r10,r28,31
	ctx.r10.u64 = r28.u32 & 0x1;
	// rlwinm r11,r28,2,28,28
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0x8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r24
	ctx.r4.u64 = ctx.r11.u64 + r24.u64;
	// bl 0x824a64e0
	ctx.lr = 0x824B9314;
	sub_824A64E0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec4
	return;
}

