#include "hydrothunder_funcs.27.h"

DEFINE_REX_FUNC(sub_82121690) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821216e4
	if (ctx.cr6.eq) goto loc_821216E4;
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x821216c8
	if (ctx.cr6.gt) goto loc_821216C8;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x822f6280
	ctx.lr = 0x821216C0;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x821216e4
	if (!ctx.cr0.eq) goto loc_821216E4;
loc_821216C8:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,18624
	ctx.r11.s64 = ctx.r11.s64 + 18624;
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82120018
	ctx.lr = 0x821216E4;
	sub_82120018(ctx, base);
loc_821216E4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821286E8) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r3,164
	ctx.r4.s64 = ctx.r3.s64 + 164;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821501a8
	ctx.lr = 0x8212870C;
	sub_821501A8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,168(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 168);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82128724
	if (ctx.cr6.eq) goto loc_82128724;
	// lwz r3,40(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
loc_82128724:
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

DEFINE_REX_FUNC(sub_8212BF78) {
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
	// bl 0x826a1cb0
	ctx.lr = 0x8212BF80;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8212c050
	if (ctx.cr6.eq) goto loc_8212C050;
	// addi r31,r3,28
	r31.s64 = ctx.r3.s64 + 28;
	// cmplw cr6,r31,r4
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8212c050
	if (ctx.cr6.eq) goto loc_8212C050;
	// addi r27,r31,-28
	r27.s64 = r31.s64 + -28;
loc_8212BFA4:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r29,r31
	r29.u64 = r31.u64;
	// bl 0x82120670
	ctx.lr = 0x8212BFB4;
	sub_82120670(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120780
	ctx.lr = 0x8212BFC0;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8212bff4
	if (!ctx.cr0.lt) goto loc_8212BFF4;
	// mr r30,r31
	r30.u64 = r31.u64;
	// cmplw cr6,r28,r31
	ctx.cr6.compare<uint32_t>(r28.u32, r31.u32, ctx.xer);
	// beq cr6,0x8212bfec
	if (ctx.cr6.eq) goto loc_8212BFEC;
loc_8212BFD4:
	// addi r30,r30,-28
	r30.s64 = r30.s64 + -28;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r30,28
	ctx.r3.s64 = r30.s64 + 28;
	// bl 0x82120700
	ctx.lr = 0x8212BFE4;
	sub_82120700(ctx, base);
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(r30.u32, r28.u32, ctx.xer);
	// bne cr6,0x8212bfd4
	if (!ctx.cr6.eq) goto loc_8212BFD4;
loc_8212BFEC:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// b 0x8212c028
	goto loc_8212C028;
loc_8212BFF4:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r30,r27
	r30.u64 = r27.u64;
	// b 0x8212c014
	goto loc_8212C014;
loc_8212C000:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82120700
	ctx.lr = 0x8212C008;
	sub_82120700(ctx, base);
	// mr r29,r30
	r29.u64 = r30.u64;
	// addi r30,r30,-28
	r30.s64 = r30.s64 + -28;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
loc_8212C014:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120780
	ctx.lr = 0x8212C01C;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// blt 0x8212c000
	if (ctx.cr0.lt) goto loc_8212C000;
loc_8212C028:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82120700
	ctx.lr = 0x8212C030;
	sub_82120700(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x8212C040;
	sub_82120AC0(ctx, base);
	// addi r31,r31,28
	r31.s64 = r31.s64 + 28;
	// addi r27,r27,28
	r27.s64 = r27.s64 + 28;
	// cmplw cr6,r31,r26
	ctx.cr6.compare<uint32_t>(r31.u32, r26.u32, ctx.xer);
	// bne cr6,0x8212bfa4
	if (!ctx.cr6.eq) goto loc_8212BFA4;
loc_8212C050:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_821327F0) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-20616
	ctx.r11.s64 = ctx.r11.s64 + -20616;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x8213281c
	if (ctx.cr0.eq) goto loc_8213281C;
	// bl 0x8269ce98
	ctx.lr = 0x8213281C;
	sub_8269CE98(ctx, base);
loc_8213281C:
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

DEFINE_REX_FUNC(sub_82134530) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lfs f13,212(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 212);
	ctx.f13.f64 = double(temp.f32);
	// addi r30,r3,212
	r30.s64 = ctx.r3.s64 + 212;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82134590
	if (!ctx.cr6.eq) goto loc_82134590;
	// lfs f13,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bne cr6,0x82134590
	if (!ctx.cr6.eq) goto loc_82134590;
	// lfs f13,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bne cr6,0x82134590
	if (!ctx.cr6.eq) goto loc_82134590;
	// lfs f13,12(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f12,12(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// beq cr6,0x82134594
	if (ctx.cr6.eq) goto loc_82134594;
loc_82134590:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82134594:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82134648
	if (ctx.cr0.eq) goto loc_82134648;
	// lfs f13,196(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 196);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f12,200(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 200);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// fmuls f9,f0,f12
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// lfs f10,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,12(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// fmuls f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lfs f0,15048(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lfs f0,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fctiw f11,f11
	ctx.f11.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvtsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfd f11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// fctiw f0,f9
	ctx.f0.s64 = std::isnan(ctx.f9.f64) ? int64_t(0x80000000U) : (ctx.f9.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvtsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// fctiw f0,f13
	ctx.f0.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvtsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f0,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// fctiw f0,f12
	ctx.f0.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvtsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f0,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,92(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r8,100(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r10,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stw r9,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// stw r8,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// bl 0x822c45e0
	ctx.lr = 0x82134628;
	sub_822C45E0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r11,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// stw r11,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r11.u32);
loc_82134648:
	// li r3,1
	ctx.r3.s64 = 1;
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

DEFINE_REX_FUNC(sub_82140BF0) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-15524
	ctx.r11.s64 = ctx.r11.s64 + -15524;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x82140c1c
	if (ctx.cr0.eq) goto loc_82140C1C;
	// bl 0x8269ce98
	ctx.lr = 0x82140C1C;
	sub_8269CE98(ctx, base);
loc_82140C1C:
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

DEFINE_REX_FUNC(sub_82142FE8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82142FF0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,192(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 192);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8214302c
	if (ctx.cr0.eq) goto loc_8214302C;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r4,284(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 284);
	// li r5,-1
	ctx.r5.s64 = -1;
	// lwz r3,6044(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6044);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214302C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8214302C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82143040;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r31,-32(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + -32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r11,-28(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + -28);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82143084
	if (ctx.cr6.eq) goto loc_82143084;
	// clrlwi r29,r29,31
	r29.u64 = r29.u32 & 0x1;
loc_82143058:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82143074;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-28(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + -28);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82143058
	if (!ctx.cr6.eq) goto loc_82143058;
loc_82143084:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_821484B0) {
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
	// bl 0x826a1ca0
	ctx.lr = 0x821484B8;
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x826a2c98
	ctx.lr = 0x821484C0;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// beq cr6,0x8214883c
	if (ctx.cr6.eq) goto loc_8214883C;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6116(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6116);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821484FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r28,r10,-7264
	r28.s64 = ctx.r10.s64 + -7264;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r27,r9,16592
	r27.s64 = ctx.r9.s64 + 16592;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lfs f24,22312(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 22312);
	f24.f64 = double(temp.f32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// fmr f28,f24
	f28.f64 = f24.f64;
	// bne cr6,0x82148560
	if (!ctx.cr6.eq) goto loc_82148560;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822c1808
	ctx.lr = 0x82148530;
	sub_822C1808(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lfs f0,284(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 284);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f31,f13,f0
	f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// b 0x82148564
	goto loc_82148564;
loc_82148560:
	// lfs f31,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	f31.f64 = double(temp.f32);
loc_82148564:
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// addi r26,r11,-14240
	r26.s64 = ctx.r11.s64 + -14240;
	// lwz r25,100(r10)
	r25.u64 = REX_LOAD_U32(ctx.r10.u32 + 100);
	// ble cr6,0x821485a0
	if (!ctx.cr6.gt) goto loc_821485A0;
	// mr r29,r23
	r29.u64 = r23.u64;
loc_82148580:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82148598;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne 0x82148580
	if (!ctx.cr0.eq) goto loc_82148580;
loc_821485A0:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r10,-14236
	ctx.r4.s64 = ctx.r10.s64 + -14236;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821485BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// ble cr6,0x821485e8
	if (!ctx.cr6.gt) goto loc_821485E8;
	// mr r29,r23
	r29.u64 = r23.u64;
loc_821485C8:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821485E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne 0x821485c8
	if (!ctx.cr0.eq) goto loc_821485C8;
loc_821485E8:
	// stfd f31,40(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 40, f31.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-14200
	ctx.r4.s64 = ctx.r11.s64 + -14200;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r5,0(r9)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82148618;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lfs f26,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 0);
	f26.f64 = double(temp.f32);
	// li r24,0
	r24.s64 = 0;
	// lfs f27,920(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 920);
	f27.f64 = double(temp.f32);
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821486fc
	if (ctx.cr6.eq) goto loc_821486FC;
	// extsw r11,r25
	ctx.r11.s64 = r25.s32;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r27,r11,-14148
	r27.s64 = ctx.r11.s64 + -14148;
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f25,f0
	f25.f64 = double(ctx.f0.s64);
loc_8214864C:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// fcmpu cr6,f31,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f31.f64, f27.f64);
	// lfs f30,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	f30.f64 = double(temp.f32);
	// fadds f28,f30,f28
	f28.f64 = double(float(f30.f64 + f28.f64));
	// ble cr6,0x82148670
	if (!ctx.cr6.gt) goto loc_82148670;
	// fdivs f0,f30,f31
	ctx.f0.f64 = double(float(f30.f64 / f31.f64));
	// fmuls f29,f0,f26
	f29.f64 = double(float(ctx.f0.f64 * f26.f64));
	// b 0x82148674
	goto loc_82148674;
loc_82148670:
	// fmr f29,f24
	ctx.fpscr.disableFlushMode();
	f29.f64 = f24.f64;
loc_82148674:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// ble cr6,0x821486a0
	if (!ctx.cr6.gt) goto loc_821486A0;
	// mr r29,r23
	r29.u64 = r23.u64;
loc_82148680:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82148698;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne 0x82148680
	if (!ctx.cr0.eq) goto loc_82148680;
loc_821486A0:
	// stfd f29,48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 48, f29.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// fdiv f2,f30,f25
	ctx.f2.f64 = f30.f64 / f25.f64;
	// stfd f2,56(r1)
	REX_STORE_U64(ctx.r1.u32 + 56, ctx.f2.u64);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// ld r8,56(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 56);
	// bctrl 
	ctx.lr = 0x821486E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// stw r11,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8214864c
	if (!ctx.cr6.eq) goto loc_8214864C;
loc_821486FC:
	// fcmpu cr6,f31,f28
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f31.f64, f28.f64);
	// bge cr6,0x82148720
	if (!ctx.cr6.lt) goto loc_82148720;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r10,-14096
	ctx.r4.s64 = ctx.r10.s64 + -14096;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82148720;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82148720:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// ble cr6,0x8214874c
	if (!ctx.cr6.gt) goto loc_8214874C;
	// mr r29,r23
	r29.u64 = r23.u64;
loc_8214872C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82148744;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne 0x8214872c
	if (!ctx.cr0.eq) goto loc_8214872C;
loc_8214874C:
	// fcmpu cr6,f31,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f31.f64, f27.f64);
	// ble cr6,0x82148764
	if (!ctx.cr6.gt) goto loc_82148764;
	// fsubs f0,f31,f28
	ctx.f0.f64 = double(float(f31.f64 - f28.f64));
	// fdivs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 / f31.f64));
	// fmuls f1,f0,f26
	ctx.f1.f64 = double(float(ctx.f0.f64 * f26.f64));
	// b 0x82148768
	goto loc_82148768;
loc_82148764:
	// fmr f1,f24
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f24.f64;
loc_82148768:
	// fsubs f2,f31,f28
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(f31.f64 - f28.f64));
	// stfd f1,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// stfd f2,48(r1)
	REX_STORE_U64(ctx.r1.u32 + 48, ctx.f2.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// ld r7,48(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r5,r10,-14080
	ctx.r5.s64 = ctx.r10.s64 + -14080;
	// addi r4,r9,-14064
	ctx.r4.s64 = ctx.r9.s64 + -14064;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821487A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// ble cr6,0x8214883c
	if (!ctx.cr6.gt) goto loc_8214883C;
	// addi r29,r23,3
	r29.s64 = r23.s64 + 3;
loc_821487B0:
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// lwz r10,24(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// stw r10,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// b 0x821487e0
	goto loc_821487E0;
loc_821487C4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821487e8
	if (ctx.cr6.eq) goto loc_821487E8;
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r10,28(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// stw r10,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
loc_821487E0:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821487c4
	if (!ctx.cr6.eq) goto loc_821487C4;
loc_821487E8:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82148800
	if (ctx.cr6.eq) goto loc_82148800;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// stw r11,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r11.u32);
loc_82148800:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x821484b0
	ctx.lr = 0x82148810;
	sub_821484B0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82148824
	if (ctx.cr6.eq) goto loc_82148824;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
loc_82148824:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r24
	ctx.cr6.compare<int32_t>(r31.s32, r24.s32, ctx.xer);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// stw r11,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r11.u32);
	// blt cr6,0x821487b0
	if (ctx.cr6.lt) goto loc_821487B0;
loc_8214883C:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x826a2ce4
	ctx.lr = 0x82148848;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_82162BB8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82162BC0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lbz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r29,0
	r29.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r31,r3,8
	r31.s64 = ctx.r3.s64 + 8;
	// li r3,60
	ctx.r3.s64 = 60;
	// stw r11,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r11.u32);
	// stb r10,8(r30)
	REX_STORE_U8(r30.u32 + 8, ctx.r10.u8);
	// stw r29,16(r30)
	REX_STORE_U32(r30.u32 + 16, r29.u32);
	// bl 0x822f6280
	ctx.lr = 0x82162BF0;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82162c3c
	if (ctx.cr0.eq) goto loc_82162C3C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r3,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// stw r3,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r10,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stw r29,16(r31)
	REX_STORE_U32(r31.u32 + 16, r29.u32);
	// stw r29,20(r31)
	REX_STORE_U32(r31.u32 + 20, r29.u32);
	// stw r29,24(r31)
	REX_STORE_U32(r31.u32 + 24, r29.u32);
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 40, temp.u32);
	// bl 0x82162298
	ctx.lr = 0x82162C30;
	sub_82162298(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
loc_82162C3C:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r29,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r11,r11,18624
	ctx.r11.s64 = ctx.r11.s64 + 18624;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82120018
	ctx.lr = 0x82162C54;
	sub_82120018(ctx, base);
}

DEFINE_REX_FUNC(sub_82169AF8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82169B00;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,165(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 165);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// b 0x82169b48
	goto loc_82169B48;
loc_82169B18:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x82169af8
	ctx.lr = 0x82169B24;
	sub_82169AF8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r30,12
	ctx.r3.s64 = r30.s64 + 12;
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82120ac0
	ctx.lr = 0x82169B38;
	sub_82120AC0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8269ce98
	ctx.lr = 0x82169B40;
	sub_8269CE98(ctx, base);
	// lbz r11,165(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 165);
	// mr r30,r31
	r30.u64 = r31.u64;
loc_82169B48:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82169b18
	if (ctx.cr0.eq) goto loc_82169B18;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8216BE80) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8216BE88;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82162af8
	ctx.lr = 0x8216BEA0;
	sub_82162AF8(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8216bdb0
	ctx.lr = 0x8216BEB4;
	sub_8216BDB0(ctx, base);
	// lwz r30,4(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// b 0x8216bedc
	goto loc_8216BEDC;
loc_8216BEC0:
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r29.u32, ctx.xer);
	// bge cr6,0x8216bed4
	if (!ctx.cr6.lt) goto loc_8216BED4;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8216bedc
	goto loc_8216BEDC;
loc_8216BED4:
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_8216BEDC:
	// lbz r10,21(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8216bec0
	if (ctx.cr0.eq) goto loc_8216BEC0;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8216bf04
	if (ctx.cr6.eq) goto loc_8216BF04;
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 12);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8216bf5c
	if (!ctx.cr6.lt) goto loc_8216BF5C;
loc_8216BF04:
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x822f6280
	ctx.lr = 0x8216BF0C;
	sub_822F6280(ctx, base);
	// mr. r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq 0x8216bf68
	if (ctx.cr0.eq) goto loc_8216BF68;
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addic. r11,r6,12
	ctx.xer.ca = ctx.r6.u32 > 4294967283;
	ctx.r11.s64 = ctx.r6.s64 + 12;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r9,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r9.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r9,4(r6)
	REX_STORE_U32(ctx.r6.u32 + 4, ctx.r9.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r9,8(r6)
	REX_STORE_U32(ctx.r6.u32 + 8, ctx.r9.u32);
	// stb r10,20(r6)
	REX_STORE_U8(ctx.r6.u32 + 20, ctx.r10.u8);
	// stb r10,21(r6)
	REX_STORE_U8(ctx.r6.u32 + 21, ctx.r10.u8);
	// beq 0x8216bf48
	if (ctx.cr0.eq) goto loc_8216BF48;
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r29.u32);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_8216BF48:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8214af28
	ctx.lr = 0x8216BF58;
	sub_8214AF28(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8216BF5C:
	// stw r28,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, r28.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d08
	return;
loc_8216BF68:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r10,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r11,r11,18624
	ctx.r11.s64 = ctx.r11.s64 + 18624;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82120018
	ctx.lr = 0x8216BF80;
	sub_82120018(ctx, base);
}

DEFINE_REX_FUNC(sub_821739D0) {
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
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-4672
	ctx.r4.s64 = ctx.r11.s64 + -4672;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821a4270
	ctx.lr = 0x821739FC;
	sub_821A4270(ctx, base);
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-3664
	ctx.r4.s64 = ctx.r11.s64 + -3664;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821a4270
	ctx.lr = 0x82173A14;
	sub_821A4270(ctx, base);
	// stw r3,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-1752
	ctx.r4.s64 = ctx.r11.s64 + -1752;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821a4270
	ctx.lr = 0x82173A2C;
	sub_821A4270(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// bne 0x82173a3c
	if (!ctx.cr0.eq) goto loc_82173A3C;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82173A3C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// addi r30,r9,27528
	r30.s64 = ctx.r9.s64 + 27528;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82173A6C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r3,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82173A94;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r3,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// addi r4,r10,27544
	ctx.r4.s64 = ctx.r10.s64 + 27544;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82173AC0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r3,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r3.u32);
	// addi r4,r10,26176
	ctx.r4.s64 = ctx.r10.s64 + 26176;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82173AEC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r3.u32);
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

DEFINE_REX_FUNC(sub_8217BE30) {
	REX_FUNC_PROLOGUE();
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb4
	ctx.lr = 0x8217BE38;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r27,r11,-20
	r27.s64 = ctx.r11.s64 + -20;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// stw r27,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x8217a928
	ctx.lr = 0x8217BE64;
	sub_8217A928(ctx, base);
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x8217a928
	ctx.lr = 0x8217BE70;
	sub_8217A928(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x8217beac
	if (!ctx.cr6.gt) goto loc_8217BEAC;
	// lbz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// b 0x8217be98
	goto loc_8217BE98;
loc_8217BE8C:
	// cmpwi cr6,r9,34
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 34, ctx.xer);
	// beq cr6,0x8217bf1c
	if (ctx.cr6.eq) goto loc_8217BF1C;
	// lbzu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
loc_8217BE98:
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8217be8c
	if (!ctx.cr0.eq) goto loc_8217BE8C;
	// li r11,-1
	ctx.r11.s64 = -1;
loc_8217BEA4:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8217bf28
	if (!ctx.cr6.eq) goto loc_8217BF28;
loc_8217BEAC:
	// lwz r30,80(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// lwz r31,84(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// beq cr6,0x8217bed4
	if (ctx.cr6.eq) goto loc_8217BED4;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r6,r31,8
	ctx.r6.s64 = r31.s64 + 8;
	// addi r4,r11,28516
	ctx.r4.s64 = ctx.r11.s64 + 28516;
	// addi r5,r30,8
	ctx.r5.s64 = r30.s64 + 8;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8269f3c0
	ctx.lr = 0x8217BED4;
	sub_8269F3C0(ctx, base);
loc_8217BED4:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8217bfa0
	if (ctx.cr6.eq) goto loc_8217BFA0;
	// addi r4,r30,8
	ctx.r4.s64 = r30.s64 + 8;
	// lwz r5,0(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8217a438
	ctx.lr = 0x8217BEEC;
	sub_8217A438(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r11,28524
	ctx.r4.s64 = ctx.r11.s64 + 28524;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8217a438
	ctx.lr = 0x8217BF00;
	sub_8217A438(ctx, base);
	// addi r4,r31,8
	ctx.r4.s64 = r31.s64 + 8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8217a438
	ctx.lr = 0x8217BF10;
	sub_8217A438(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,28528
	ctx.r4.s64 = ctx.r11.s64 + 28528;
	// b 0x8217bf94
	goto loc_8217BF94;
loc_8217BF1C:
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// b 0x8217bea4
	goto loc_8217BEA4;
loc_8217BF28:
	// lwz r30,80(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// lwz r31,84(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// beq cr6,0x8217bf50
	if (ctx.cr6.eq) goto loc_8217BF50;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r6,r31,8
	ctx.r6.s64 = r31.s64 + 8;
	// addi r4,r11,28532
	ctx.r4.s64 = ctx.r11.s64 + 28532;
	// addi r5,r30,8
	ctx.r5.s64 = r30.s64 + 8;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8269f3c0
	ctx.lr = 0x8217BF50;
	sub_8269F3C0(ctx, base);
loc_8217BF50:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8217bfa0
	if (ctx.cr6.eq) goto loc_8217BFA0;
	// addi r4,r30,8
	ctx.r4.s64 = r30.s64 + 8;
	// lwz r5,0(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8217a438
	ctx.lr = 0x8217BF68;
	sub_8217A438(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r11,28540
	ctx.r4.s64 = ctx.r11.s64 + 28540;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8217a438
	ctx.lr = 0x8217BF7C;
	sub_8217A438(ctx, base);
	// addi r4,r31,8
	ctx.r4.s64 = r31.s64 + 8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8217a438
	ctx.lr = 0x8217BF8C;
	sub_8217A438(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,28544
	ctx.r4.s64 = ctx.r11.s64 + 28544;
loc_8217BF94:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8217a438
	ctx.lr = 0x8217BFA0;
	sub_8217A438(ctx, base);
loc_8217BFA0:
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(r31.u32, r27.u32, ctx.xer);
	// beq cr6,0x8217bfb0
	if (ctx.cr6.eq) goto loc_8217BFB0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269d6a0
	ctx.lr = 0x8217BFB0;
	sub_8269D6A0(ctx, base);
loc_8217BFB0:
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(r30.u32, r27.u32, ctx.xer);
	// beq cr6,0x8217bfc0
	if (ctx.cr6.eq) goto loc_8217BFC0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8269d6a0
	ctx.lr = 0x8217BFC0;
	sub_8269D6A0(ctx, base);
loc_8217BFC0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8218A6C0) {
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
	// bl 0x8218a7b8
	ctx.lr = 0x8218A6D8;
	sub_8218A7B8(ctx, base);
	// lwz r5,112(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 112);
	// lwz r4,156(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 156);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// lwz r3,152(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 152);
	// bl 0x821d3ef8
	ctx.lr = 0x8218A6EC;
	sub_821D3EF8(ctx, base);
	// lwz r10,164(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 164);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r9,r11,16592
	ctx.r9.s64 = ctx.r11.s64 + 16592;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// lfs f0,12(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// lwz r10,184(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 184);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8218a784
	if (!ctx.cr6.gt) goto loc_8218A784;
	// lfs f12,8(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r10,-4
	ctx.r7.s64 = ctx.r10.s64 + -4;
loc_8218A724:
	// lwz r9,152(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 152);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// ble cr6,0x8218a770
	if (!ctx.cr6.gt) goto loc_8218A770;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
loc_8218A748:
	// lfsu f13,4(r9)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r9.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r9.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lfs f11,104(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfsu f13,4(r7)
	ea = 4 + ctx.r7.u32;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r7.u32 = ea;
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8218a748
	if (ctx.cr6.lt) goto loc_8218A748;
loc_8218A770:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// fmuls f0,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8218a724
	if (ctx.cr6.lt) goto loc_8218A724;
loc_8218A784:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8218a960
	ctx.lr = 0x8218A78C;
	sub_8218A960(ctx, base);
	// lwz r11,164(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 164);
	// lfd f0,136(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(r31.u32 + 136);
	// addi r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 + 11;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// stfdx f0,r11,r31
	REX_STORE_U64(ctx.r11.u32 + r31.u32, ctx.f0.u64);
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

DEFINE_REX_FUNC(sub_821903C8) {
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
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r31,6096(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 6096);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82135fb8
	ctx.lr = 0x821903F0;
	sub_82135FB8(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,120
	ctx.r10.s64 = ctx.r1.s64 + 120;
	// addi r9,r3,-8
	ctx.r9.s64 = ctx.r3.s64 + -8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82190400:
	// ldu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r9.u32 = ea;
	// stdu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x82190400
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82190400;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f0,80(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f13,84(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f0,15048(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x8216d040
	ctx.lr = 0x82190434;
	sub_8216D040(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r31,28
	ctx.r3.s64 = r31.s64 + 28;
	// bl 0x82139870
	ctx.lr = 0x82190440;
	sub_82139870(ctx, base);
	// lfs f0,100(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// li r11,64
	ctx.r11.s64 = 64;
	// li r10,255
	ctx.r10.s64 = 255;
	// li r9,128
	ctx.r9.s64 = 128;
	// stb r11,83(r1)
	REX_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stb r10,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, ctx.r10.u8);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stb r11,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stb r9,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bl 0x82186550
	ctx.lr = 0x8219048C;
	sub_82186550(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82136b58
	ctx.lr = 0x821904A0;
	sub_82136B58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82135f08
	ctx.lr = 0x821904A8;
	sub_82135F08(ctx, base);
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

DEFINE_REX_FUNC(sub_821962D0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lfs f1,72(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 72);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82196BA0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82196D78) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lfs f31,44(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 44);
	f31.f64 = double(temp.f32);
	// bl 0x8215f0f0
	ctx.lr = 0x82196DA0;
	sub_8215F0F0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stfs f31,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
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

DEFINE_REX_FUNC(sub_82199920) {
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
	// bl 0x826a1ca8
	ctx.lr = 0x82199928;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x826a2ca4
	ctx.lr = 0x82199930;
	// stwu r1,-992(r1)
	ea = -992 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-32106
	r28.s64 = -2104098816;
	// lwz r27,4(r4)
	r27.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// lwz r4,12(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,6092(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 6092);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,164(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 164);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8219995C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lfs f1,172(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 172);
	ctx.f1.f64 = double(temp.f32);
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82199984;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r30,-32106
	r30.s64 = -2104098816;
	// addi r10,r11,16592
	ctx.r10.s64 = ctx.r11.s64 + 16592;
	// lfs f31,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	f31.f64 = double(temp.f32);
	// lwz r11,6176(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 6176);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821999b0
	if (ctx.cr6.eq) goto loc_821999B0;
	// lfs f0,176(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// blt cr6,0x821999b4
	if (ctx.cr6.lt) goto loc_821999B4;
loc_821999B0:
	// li r10,0
	ctx.r10.s64 = 0;
loc_821999B4:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// clrlwi r29,r10,24
	r29.u64 = ctx.r10.u32 & 0xFF;
	// lwz r4,28(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 28);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821999E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r29,0
	ctx.cr0.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq 0x82199a10
	if (ctx.cr0.eq) goto loc_82199A10;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lfs f1,176(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 176);
	ctx.f1.f64 = double(temp.f32);
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82199A10;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82199A10:
	// lwz r11,192(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 192);
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82199a28
	if (ctx.cr6.eq) goto loc_82199A28;
	// lwz r5,96(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// b 0x82199a34
	goto loc_82199A34;
loc_82199A28:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r11,6096(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 6096);
	// lwz r5,24(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
loc_82199A34:
	// lwz r3,6092(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 6092);
	// lwz r4,64(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 64);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,212(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82199A4C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 6092);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,64(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 64);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,216(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 216);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82199A6C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 6092);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r4,64(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 64);
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,220(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 220);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82199A90;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r3,6092(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 6092);
	// lwz r4,64(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 64);
	// lfs f30,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	f30.f64 = double(temp.f32);
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,228(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 228);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82199AB4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r26,r11,224
	r26.s64 = ctx.r11.s64 + 224;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82199bfc
	if (ctx.cr6.eq) goto loc_82199BFC;
	// lbz r11,180(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 180);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82199bfc
	if (ctx.cr0.eq) goto loc_82199BFC;
	// lwz r3,6176(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6176);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82199AE8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82199bfc
	if (ctx.cr0.eq) goto loc_82199BFC;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lbz r5,180(r27)
	ctx.r5.u64 = REX_LOAD_U8(r27.u32 + 180);
	// lwz r4,32(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82199B18;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lfs f1,184(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 184);
	ctx.f1.f64 = double(temp.f32);
	// lwz r4,36(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 36);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82199B40;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r5,r26,240
	ctx.r5.s64 = r26.s64 + 240;
	// lwz r4,40(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82199B68;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6176(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6176);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r30,6092(r28)
	r30.u64 = REX_LOAD_U32(r28.u32 + 6092);
	// lwz r29,0(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bctrl 
	ctx.lr = 0x82199B84;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,212(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 212);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,68(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82199B9C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 6092);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,68(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 68);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,216(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 216);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82199BBC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 6092);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r4,68(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 68);
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,220(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 220);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82199BE0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 6092);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// lwz r4,68(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 68);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,228(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 228);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82199BFC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82199BFC:
	// lbz r11,188(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 188);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82199d00
	if (ctx.cr0.eq) goto loc_82199D00;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// addi r4,r25,80
	ctx.r4.s64 = r25.s64 + 80;
	// lwz r3,6216(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6216);
	// bl 0x821595c0
	ctx.lr = 0x82199C1C;
	sub_821595C0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r5,864(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 864);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r4,44(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 44);
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82199C44;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,864(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 864);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82199d28
	if (ctx.cr6.eq) goto loc_82199D28;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// lwz r4,48(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82199C78;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r5,r1,352
	ctx.r5.s64 = ctx.r1.s64 + 352;
	// lwz r6,864(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 864);
	// lwz r4,52(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82199CA4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r5,r1,480
	ctx.r5.s64 = ctx.r1.s64 + 480;
	// lwz r6,864(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 864);
	// lwz r4,56(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82199CD0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r5,r1,736
	ctx.r5.s64 = ctx.r1.s64 + 736;
	// lwz r6,864(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 864);
	// lwz r4,60(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 60);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82199CFC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82199d28
	goto loc_82199D28;
loc_82199D00:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,44(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 44);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82199D28;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82199D28:
	// lwz r10,84(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 84);
	// lis r11,-32118
	ctx.r11.s64 = -2104885248;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r30,r11,-2544
	r30.s64 = ctx.r11.s64 + -2544;
	// ld r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U64(r26.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ld r10,8(r26)
	ctx.r10.u64 = REX_LOAD_U64(r26.u32 + 8);
	// addi r31,r25,128
	r31.s64 = r25.s64 + 128;
	// addis r29,r30,4
	r29.s64 = r30.s64 + 262144;
	// std r11,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, ctx.r11.u64);
	// std r10,8(r9)
	REX_STORE_U64(ctx.r9.u32 + 8, ctx.r10.u64);
	// bne cr6,0x8219a198
	if (!ctx.cr6.eq) goto loc_8219A198;
	// addi r27,r25,16
	r27.s64 = r25.s64 + 16;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x823fbd18
	ctx.lr = 0x82199D6C;
	sub_823FBD18(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ld r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r29,r31,48
	r29.s64 = r31.s64 + 48;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// std r9,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r11,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// bl 0x823fbd18
	ctx.lr = 0x82199D98;
	sub_823FBD18(ctx, base);
	// ld r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// std r9,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// lfs f0,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// ld r7,8(r3)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r3.u32 + 8);
	// lfs f13,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lfs f29,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	f29.f64 = double(temp.f32);
	// lis r10,4
	ctx.r10.s64 = 262144;
	// fsubs f11,f0,f29
	ctx.f11.f64 = double(float(ctx.f0.f64 - f29.f64));
	// lfs f12,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// lfs f28,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	f28.f64 = double(temp.f32);
	// lis r8,4
	ctx.r8.s64 = 262144;
	// lfs f27,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	f27.f64 = double(temp.f32);
	// fsubs f10,f13,f28
	ctx.f10.f64 = double(float(ctx.f13.f64 - f28.f64));
	// std r7,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r7.u64);
	// fsubs f9,f12,f27
	ctx.f9.f64 = double(float(ctx.f12.f64 - f27.f64));
	// lfs f8,40(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 40);
	ctx.f8.f64 = double(temp.f32);
	// lis r6,4
	ctx.r6.s64 = 262144;
	// ori r5,r10,4
	ctx.r5.u64 = ctx.r10.u64 | 4;
	// lis r10,4
	ctx.r10.s64 = 262144;
	// lis r9,4
	ctx.r9.s64 = 262144;
	// ori r7,r6,8
	ctx.r7.u64 = ctx.r6.u64 | 8;
	// addi r11,r31,32
	ctx.r11.s64 = r31.s64 + 32;
	// ori r4,r9,16
	ctx.r4.u64 = ctx.r9.u64 | 16;
	// ori r6,r10,12
	ctx.r6.u64 = ctx.r10.u64 | 12;
	// addi r10,r31,36
	ctx.r10.s64 = r31.s64 + 36;
	// addis r9,r30,4
	ctx.r9.s64 = r30.s64 + 262144;
	// li r26,1
	r26.s64 = 1;
	// addi r31,r9,48
	r31.s64 = ctx.r9.s64 + 48;
	// lis r3,4
	ctx.r3.s64 = 262144;
	// lfs f7,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,120(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f5,f5,f13
	ctx.f5.f64 = double(float(ctx.f5.f64 - ctx.f13.f64));
	// fsubs f7,f7,f12
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f12.f64));
	// fsubs f6,f6,f0
	ctx.f6.f64 = double(float(ctx.f6.f64 - ctx.f0.f64));
	// fmuls f4,f11,f5
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f5.f64));
	// fmuls f3,f7,f10
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f10.f64));
	// fmuls f2,f6,f9
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f9.f64));
	// fmsubs f10,f6,f10,f4
	ctx.f10.f64 = double(float(std::fma(ctx.f6.f64, ctx.f10.f64, -ctx.f4.f64)));
	// fmsubs f9,f9,f5,f3
	ctx.f9.f64 = double(float(std::fma(ctx.f9.f64, ctx.f5.f64, -ctx.f3.f64)));
	// fmsubs f11,f7,f11,f2
	ctx.f11.f64 = double(float(std::fma(ctx.f7.f64, ctx.f11.f64, -ctx.f2.f64)));
	// fmuls f7,f10,f10
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmadds f7,f9,f9,f7
	ctx.f7.f64 = double(float(std::fma(ctx.f9.f64, ctx.f9.f64, ctx.f7.f64)));
	// fmadds f7,f11,f11,f7
	ctx.f7.f64 = double(float(std::fma(ctx.f11.f64, ctx.f11.f64, ctx.f7.f64)));
	// fsqrts f7,f7
	ctx.f7.f64 = double(float(sqrt(ctx.f7.f64)));
	// fdivs f7,f31,f7
	ctx.f7.f64 = double(float(f31.f64 / ctx.f7.f64));
	// fmuls f11,f7,f11
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// fmuls f10,f10,f7
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f7.f64));
	// fmuls f9,f9,f7
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f7.f64));
	// fmuls f7,f11,f8
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f8.f64));
	// fmuls f10,f10,f8
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f8.f64));
	// fmuls f9,f9,f8
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f8.f64));
	// fadds f11,f7,f13
	ctx.f11.f64 = double(float(ctx.f7.f64 + ctx.f13.f64));
	// stfsx f11,r30,r8
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r30.u32 + ctx.r8.u32, temp.u32);
	// fadds f11,f10,f12
	ctx.f11.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// stfsx f11,r30,r5
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r30.u32 + ctx.r5.u32, temp.u32);
	// fadds f11,f9,f0
	ctx.f11.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// stfsx f11,r30,r7
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r30.u32 + ctx.r7.u32, temp.u32);
	// lfs f11,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lis r8,4
	ctx.r8.s64 = 262144;
	// stfsx f11,r30,r6
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r30.u32 + ctx.r6.u32, temp.u32);
	// lis r7,4
	ctx.r7.s64 = 262144;
	// stfsx f30,r30,r4
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r30.u32 + ctx.r4.u32, temp.u32);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// ori r3,r3,20
	ctx.r3.u64 = ctx.r3.u64 | 20;
	// fsubs f13,f13,f7
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f7.f64));
	// ori r8,r8,24
	ctx.r8.u64 = ctx.r8.u64 | 24;
	// fsubs f0,f0,f9
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f9.f64));
	// lis r6,4
	ctx.r6.s64 = 262144;
	// fsubs f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// lis r5,4
	ctx.r5.s64 = 262144;
	// lis r4,4
	ctx.r4.s64 = 262144;
	// ori r7,r7,28
	ctx.r7.u64 = ctx.r7.u64 | 28;
	// stwx r9,r30,r3
	REX_STORE_U32(r30.u32 + ctx.r3.u32, ctx.r9.u32);
	// ori r6,r6,32
	ctx.r6.u64 = ctx.r6.u64 | 32;
	// stfsx f13,r30,r8
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r30.u32 + ctx.r8.u32, temp.u32);
	// lis r24,4
	r24.s64 = 262144;
	// ori r5,r5,36
	ctx.r5.u64 = ctx.r5.u64 | 36;
	// ori r9,r4,40
	ctx.r9.u64 = ctx.r4.u64 | 40;
	// ori r8,r24,44
	ctx.r8.u64 = r24.u64 | 44;
	// stfsx f12,r30,r7
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r30.u32 + ctx.r7.u32, temp.u32);
	// stfsx f0,r30,r6
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + ctx.r6.u32, temp.u32);
	// lfs f0,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r30,r5
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + ctx.r5.u32, temp.u32);
	// stfsx f31,r30,r9
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + ctx.r9.u32, temp.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stwx r11,r30,r8
	REX_STORE_U32(r30.u32 + ctx.r8.u32, ctx.r11.u32);
	// lwz r11,112(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 112);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x8219a058
	if (!ctx.cr6.gt) goto loc_8219A058;
loc_82199F08:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r24,r29,40
	r24.s64 = r29.s64 + 40;
	// ld r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// ld r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// addi r4,r24,8
	ctx.r4.s64 = r24.s64 + 8;
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// ld r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// std r7,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, ctx.r7.u64);
	// std r6,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, ctx.r6.u64);
	// std r11,8(r9)
	REX_STORE_U64(ctx.r9.u32 + 8, ctx.r11.u64);
	// std r10,8(r8)
	REX_STORE_U64(ctx.r8.u32 + 8, ctx.r10.u64);
	// bl 0x823fbd18
	ctx.lr = 0x82199F4C;
	sub_823FBD18(ctx, base);
	// ld r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// ld r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r3.u32 + 8);
	// lfs f9,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,104(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// lfs f11,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f0,f29
	ctx.f10.f64 = double(float(ctx.f0.f64 - f29.f64));
	// lfs f13,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// std r10,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// lfs f7,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f7.f64 = double(temp.f32);
	// std r9,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lfs f4,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f9,f4,f9
	ctx.f9.f64 = double(float(ctx.f4.f64 - ctx.f9.f64));
	// lfs f4,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f11,f4,f11
	ctx.f11.f64 = double(float(ctx.f4.f64 - ctx.f11.f64));
	// lfs f4,120(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f8,f13,f28
	ctx.f8.f64 = double(float(ctx.f13.f64 - f28.f64));
	// lfs f12,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f7,f4,f7
	ctx.f7.f64 = double(float(ctx.f4.f64 - ctx.f7.f64));
	// lfs f5,40(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 40);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f3,f10,f11
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// fmuls f4,f9,f8
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f8.f64));
	// fsubs f6,f12,f27
	ctx.f6.f64 = double(float(ctx.f12.f64 - f27.f64));
	// fmsubs f8,f7,f8,f3
	ctx.f8.f64 = double(float(std::fma(ctx.f7.f64, ctx.f8.f64, -ctx.f3.f64)));
	// fmsubs f11,f6,f11,f4
	ctx.f11.f64 = double(float(std::fma(ctx.f6.f64, ctx.f11.f64, -ctx.f4.f64)));
	// fmuls f7,f7,f6
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f6.f64));
	// fmuls f6,f8,f8
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f8.f64));
	// fmsubs f10,f9,f10,f7
	ctx.f10.f64 = double(float(std::fma(ctx.f9.f64, ctx.f10.f64, -ctx.f7.f64)));
	// fmadds f9,f11,f11,f6
	ctx.f9.f64 = double(float(std::fma(ctx.f11.f64, ctx.f11.f64, ctx.f6.f64)));
	// fmadds f9,f10,f10,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f10.f64, ctx.f10.f64, ctx.f9.f64)));
	// fsqrts f9,f9
	ctx.f9.f64 = double(float(sqrt(ctx.f9.f64)));
	// fdivs f9,f31,f9
	ctx.f9.f64 = double(float(f31.f64 / ctx.f9.f64));
	// fmuls f10,f9,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// fmuls f8,f9,f8
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f8.f64));
	// fmuls f11,f9,f11
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// fmuls f10,f10,f5
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f5.f64));
	// fmuls f9,f8,f5
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f5.f64));
	// fmuls f11,f11,f5
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f5.f64));
	// fadds f8,f10,f13
	ctx.f8.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// stfs f8,0(r31)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// fadds f8,f9,f12
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// stfs f8,4(r31)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// fadds f8,f11,f0
	ctx.f8.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f8,8(r31)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// lfs f8,32(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 32);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// stfs f8,12(r31)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// fsubs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// stfs f30,16(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 16, temp.u32);
	// lwz r11,36(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 36);
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// stfsu f13,24(r31)
	ea = 24 + r31.u32;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ea, temp.u32);
	r31.u32 = ea;
	// fsubs f12,f12,f9
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f9.f64));
	// stfs f12,4(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// lfs f0,32(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// stfs f31,16(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 16, temp.u32);
	// lwz r11,36(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 36);
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// addi r31,r31,24
	r31.s64 = r31.s64 + 24;
	// lwz r11,112(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 112);
	// addi r29,r29,48
	r29.s64 = r29.s64 + 48;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82199f08
	if (ctx.cr6.lt) goto loc_82199F08;
loc_8219A058:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// ld r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// std r9,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r11,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// bl 0x823fbd18
	ctx.lr = 0x8219A080;
	sub_823FBD18(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f12,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lfs f11,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// lwz r3,6092(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 6092);
	// lfs f9,40(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 40);
	ctx.f9.f64 = double(temp.f32);
	// li r7,24
	ctx.r7.s64 = 24;
	// li r4,4
	ctx.r4.s64 = 4;
	// ld r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// addis r6,r30,4
	ctx.r6.s64 = r30.s64 + 262144;
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// std r9,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r11,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// lfs f0,104(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f8,f0,f29
	ctx.f8.f64 = double(float(ctx.f0.f64 - f29.f64));
	// lfs f13,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f7,f13,f12
	ctx.f7.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f12,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f11
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fsubs f6,f13,f28
	ctx.f6.f64 = double(float(ctx.f13.f64 - f28.f64));
	// fsubs f10,f0,f10
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// fmuls f5,f8,f7
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f7.f64));
	// fsubs f4,f12,f27
	ctx.f4.f64 = double(float(ctx.f12.f64 - f27.f64));
	// fmuls f3,f11,f6
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f6.f64));
	// fmsubs f6,f10,f6,f5
	ctx.f6.f64 = double(float(std::fma(ctx.f10.f64, ctx.f6.f64, -ctx.f5.f64)));
	// fmuls f10,f10,f4
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f4.f64));
	// fmsubs f7,f4,f7,f3
	ctx.f7.f64 = double(float(std::fma(ctx.f4.f64, ctx.f7.f64, -ctx.f3.f64)));
	// fmuls f5,f6,f6
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f6.f64));
	// fmsubs f11,f11,f8,f10
	ctx.f11.f64 = double(float(std::fma(ctx.f11.f64, ctx.f8.f64, -ctx.f10.f64)));
	// fmadds f10,f7,f7,f5
	ctx.f10.f64 = double(float(std::fma(ctx.f7.f64, ctx.f7.f64, ctx.f5.f64)));
	// fmadds f10,f11,f11,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f11.f64, ctx.f11.f64, ctx.f10.f64)));
	// fsqrts f10,f10
	ctx.f10.f64 = double(float(sqrt(ctx.f10.f64)));
	// fdivs f10,f31,f10
	ctx.f10.f64 = double(float(f31.f64 / ctx.f10.f64));
	// fmuls f11,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// fmuls f8,f10,f6
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f6.f64));
	// fmuls f10,f10,f7
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f7.f64));
	// fmuls f11,f11,f9
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// fmuls f8,f8,f9
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// fmuls f10,f10,f9
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// fadds f9,f11,f13
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// stfs f9,0(r31)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// fadds f9,f8,f12
	ctx.f9.f64 = double(float(ctx.f8.f64 + ctx.f12.f64));
	// stfs f9,4(r31)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// fadds f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// stfs f9,8(r31)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// lfs f9,32(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 32);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// stfs f9,12(r31)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// fsubs f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// stfs f30,16(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 16, temp.u32);
	// lwz r11,36(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 36);
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// stfsu f13,24(r31)
	ea = 24 + r31.u32;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ea, temp.u32);
	r31.u32 = ea;
	// fsubs f12,f12,f8
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f8.f64));
	// stfs f12,4(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// lfs f0,32(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// stfs f31,16(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 16, temp.u32);
	// lwz r11,36(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 36);
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,112(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 112);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,248(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 248);
	// addi r5,r11,-2
	ctx.r5.s64 = ctx.r11.s64 + -2;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8219A194;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8219a2f0
	goto loc_8219A2F0;
loc_8219A198:
	// lwz r11,112(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 112);
	// li r27,0
	r27.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8219a294
	if (!ctx.cr6.gt) goto loc_8219A294;
	// addi r24,r25,16
	r24.s64 = r25.s64 + 16;
loc_8219A1AC:
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x823fbd18
	ctx.lr = 0x8219A1BC;
	sub_823FBD18(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ld r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r26,r31,40
	r26.s64 = r31.s64 + 40;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// addi r4,r26,-24
	ctx.r4.s64 = r26.s64 + -24;
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// std r9,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r11,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// bl 0x823fbe48
	ctx.lr = 0x8219A1E8;
	sub_823FBE48(ctx, base);
	// ld r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// ld r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r3.u32 + 8);
	// lfs f11,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// lfs f13,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// std r10,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lfs f10,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f10,f10,f11
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// lfs f9,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// lfs f7,120(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f9,f9,f11
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// fmuls f11,f7,f11
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// stfs f8,0(r29)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(r29.u32 + 0, temp.u32);
	// fsubs f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// fadds f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// stfs f8,4(r29)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(r29.u32 + 4, temp.u32);
	// fadds f8,f11,f12
	ctx.f8.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// stfs f8,8(r29)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(r29.u32 + 8, temp.u32);
	// lfs f8,32(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// stfs f8,12(r29)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(r29.u32 + 12, temp.u32);
	// stfs f30,16(r29)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r29.u32 + 16, temp.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// stw r11,20(r29)
	REX_STORE_U32(r29.u32 + 20, ctx.r11.u32);
	// stfsu f0,24(r29)
	ea = 24 + r29.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	r29.u32 = ea;
	// fsubs f0,f13,f9
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// stfs f12,8(r29)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r29.u32 + 8, temp.u32);
	// stfs f0,4(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 4, temp.u32);
	// lfs f0,32(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 12, temp.u32);
	// stfs f31,16(r29)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r29.u32 + 16, temp.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// stw r11,20(r29)
	REX_STORE_U32(r29.u32 + 20, ctx.r11.u32);
	// addi r31,r31,48
	r31.s64 = r31.s64 + 48;
	// lwz r11,112(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 112);
	// addi r29,r29,24
	r29.s64 = r29.s64 + 24;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8219a1ac
	if (ctx.cr6.lt) goto loc_8219A1AC;
loc_8219A294:
	// lwz r3,6092(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 6092);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,200(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 200);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8219A2AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 6092);
	// li r7,24
	ctx.r7.s64 = 24;
	// lwz r11,112(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 112);
	// li r4,4
	ctx.r4.s64 = 4;
	// addis r6,r30,4
	ctx.r6.s64 = r30.s64 + 262144;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r5,r11,-2
	ctx.r5.s64 = ctx.r11.s64 + -2;
	// lwz r10,248(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 248);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8219A2D8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 6092);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,200(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 200);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8219A2F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8219A2F0:
	// addi r1,r1,992
	ctx.r1.s64 = ctx.r1.s64 + 992;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x826a2cf0
	ctx.lr = 0x8219A2FC;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_821E58F8) {
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
	// bl 0x822a3928
	ctx.lr = 0x821E5918;
	sub_822A3928(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r9,r30,24
	ctx.r9.s64 = r30.s64 + 24;
	// addi r10,r31,28
	ctx.r10.s64 = r31.s64 + 28;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821E5928:
	// lfsu f0,4(r10)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// stfsu f0,4(r9)
	ea = 4 + ctx.r9.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x821e5928
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821E5928;
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r9,r30,8
	ctx.r9.s64 = r30.s64 + 8;
	// addi r10,r31,12
	ctx.r10.s64 = r31.s64 + 12;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821E5944:
	// lfsu f0,4(r10)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// stfsu f0,4(r9)
	ea = 4 + ctx.r9.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x821e5944
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821E5944;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f0,48(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 44, temp.u32);
	// addi r3,r11,14416
	ctx.r3.s64 = ctx.r11.s64 + 14416;
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

DEFINE_REX_FUNC(sub_821EA660) {
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
	// bl 0x821ea6b0
	ctx.lr = 0x821EA680;
	sub_821EA6B0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821ea690
	if (ctx.cr0.eq) goto loc_821EA690;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x821EA690;
	sub_8269CE98(ctx, base);
loc_821EA690:
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

DEFINE_REX_FUNC(sub_821ECED8) {
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
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ecf34
	if (ctx.cr6.eq) goto loc_821ECF34;
	// lbz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 16);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x821ecf30
	if (ctx.cr0.eq) goto loc_821ECF30;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// lwz r3,-4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// lis r9,-32126
	ctx.r9.s64 = -2105409536;
	// lwz r11,112(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 112);
	// lwz r9,-19400(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + -19400);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,112(r10)
	REX_STORE_U32(ctx.r10.u32 + 112, ctx.r11.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x821ECF30;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821ECF30:
	// stw r30,12(r31)
	REX_STORE_U32(r31.u32 + 12, r30.u32);
loc_821ECF34:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,12(r31)
	REX_STORE_U32(r31.u32 + 12, r30.u32);
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// stb r11,16(r31)
	REX_STORE_U8(r31.u32 + 16, ctx.r11.u8);
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

DEFINE_REX_FUNC(sub_821F4A40) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x821F4A48;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821f4a7c
	if (ctx.cr6.eq) goto loc_821F4A7C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r4,r11,22816
	ctx.r4.s64 = ctx.r11.s64 + 22816;
	// addi r3,r10,22864
	ctx.r3.s64 = ctx.r10.s64 + 22864;
	// li r5,177
	ctx.r5.s64 = 177;
	// bl 0x821231d0
	ctx.lr = 0x821F4A7C;
	sub_821231D0(ctx, base);
loc_821F4A7C:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r10,22808
	ctx.r4.s64 = ctx.r10.s64 + 22808;
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// bl 0x8215f338
	ctx.lr = 0x821F4A90;
	sub_8215F338(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,23064
	ctx.r4.s64 = ctx.r11.s64 + 23064;
	// bl 0x8215f338
	ctx.lr = 0x821F4A9C;
	sub_8215F338(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x821f6130
	ctx.lr = 0x821F4AA8;
	sub_821F6130(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_821F6444) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821F6700) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x821F6708;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,45(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 45);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// b 0x821f6750
	goto loc_821F6750;
loc_821F6720:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x821f6700
	ctx.lr = 0x821F672C;
	sub_821F6700(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r30,12
	ctx.r3.s64 = r30.s64 + 12;
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82120ac0
	ctx.lr = 0x821F6740;
	sub_82120AC0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8269ce98
	ctx.lr = 0x821F6748;
	sub_8269CE98(ctx, base);
	// lbz r11,45(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 45);
	// mr r30,r31
	r30.u64 = r31.u64;
loc_821F6750:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821f6720
	if (ctx.cr0.eq) goto loc_821F6720;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_821F9468) {
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
	// bl 0x826a1cb0
	ctx.lr = 0x821F9470;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,24536
	ctx.r4.s64 = ctx.r11.s64 + 24536;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// bl 0x82120600
	ctx.lr = 0x821F949C;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,17388
	ctx.r4.s64 = ctx.r11.s64 + 17388;
	// bl 0x82120600
	ctx.lr = 0x821F94AC;
	sub_82120600(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821F94DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x821F94F0;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82120ac0
	ctx.lr = 0x821F9500;
	sub_82120AC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_821FC4C0) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,25816
	ctx.r4.s64 = ctx.r11.s64 + 25816;
	// bl 0x82120600
	ctx.lr = 0x821FC4E8;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// addi r4,r11,25792
	ctx.r4.s64 = ctx.r11.s64 + 25792;
	// bl 0x82120600
	ctx.lr = 0x821FC4F8;
	sub_82120600(ctx, base);
	// addi r30,r31,168
	r30.s64 = r31.s64 + 168;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821fce18
	ctx.lr = 0x821FC508;
	sub_821FCE18(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82120ac0
	ctx.lr = 0x821FC518;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x821FC528;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,25848
	ctx.r4.s64 = ctx.r11.s64 + 25848;
	// bl 0x82120600
	ctx.lr = 0x821FC538;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// addi r4,r11,25824
	ctx.r4.s64 = ctx.r11.s64 + 25824;
	// bl 0x82120600
	ctx.lr = 0x821FC548;
	sub_82120600(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821fce18
	ctx.lr = 0x821FC554;
	sub_821FCE18(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// bl 0x82120ac0
	ctx.lr = 0x821FC564;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82120ac0
	ctx.lr = 0x821FC574;
	sub_82120AC0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,112(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821FC588;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
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

DEFINE_REX_FUNC(sub_82202048) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r10,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// lwz r3,6048(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6048);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_822039C8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb4
	ctx.lr = 0x822039D0;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,4(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// lbz r10,77(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 77);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82203a1c
	if (!ctx.cr0.eq) goto loc_82203A1C;
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
loc_822039F4:
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82203a08
	if (!ctx.cr6.lt) goto loc_82203A08;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82203a10
	goto loc_82203A10;
loc_82203A08:
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_82203A10:
	// lbz r9,77(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 77);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x822039f4
	if (ctx.cr0.eq) goto loc_822039F4;
loc_82203A1C:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// mr r31,r28
	r31.u64 = r28.u64;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82203a3c
	if (ctx.cr6.eq) goto loc_82203A3C;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lwz r10,12(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82203b34
	if (!ctx.cr6.lt) goto loc_82203B34;
loc_82203A3C:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x82203A4C;
	sub_82120AC0(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r30,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r30.u32);
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// stw r30,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, r30.u32);
	// stw r30,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, r30.u32);
	// stw r30,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, r30.u32);
	// stw r30,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, r30.u32);
	// stw r11,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// bl 0x82203f48
	ctx.lr = 0x82203A78;
	sub_82203F48(ctx, base);
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x822f6280
	ctx.lr = 0x82203A80;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x82203b40
	if (ctx.cr0.eq) goto loc_82203B40;
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 4);
	// addic. r11,r31,12
	ctx.xer.ca = r31.u32 > 4294967283;
	ctx.r11.s64 = r31.s64 + 12;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 4);
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 4);
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// stb r30,76(r31)
	REX_STORE_U8(r31.u32 + 76, r30.u8);
	// stb r30,77(r31)
	REX_STORE_U8(r31.u32 + 77, r30.u8);
	// beq 0x82203ac4
	if (ctx.cr0.eq) goto loc_82203AC4;
	// lwz r10,160(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// addi r4,r1,164
	ctx.r4.s64 = ctx.r1.s64 + 164;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x82203f48
	ctx.lr = 0x82203AC4;
	sub_82203F48(ctx, base);
loc_82203AC4:
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82204210
	ctx.lr = 0x82203AD8;
	sub_82204210(ctx, base);
	// lwz r3,200(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r31,80(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// beq cr6,0x82203aec
	if (ctx.cr6.eq) goto loc_82203AEC;
	// bl 0x8269ce98
	ctx.lr = 0x82203AEC;
	sub_8269CE98(ctx, base);
loc_82203AEC:
	// stw r30,200(r1)
	REX_STORE_U32(ctx.r1.u32 + 200, r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,204(r1)
	REX_STORE_U32(ctx.r1.u32 + 204, r30.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r30,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, r30.u32);
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// bl 0x82120ac0
	ctx.lr = 0x82203B08;
	sub_82120AC0(ctx, base);
	// lwz r3,132(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82203b18
	if (ctx.cr6.eq) goto loc_82203B18;
	// bl 0x8269ce98
	ctx.lr = 0x82203B18;
	sub_8269CE98(ctx, base);
loc_82203B18:
	// stw r30,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, r30.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r30,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, r30.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x82203B34;
	sub_82120AC0(ctx, base);
loc_82203B34:
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x826a1d04
	return;
loc_82203B40:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r11,r11,18624
	ctx.r11.s64 = ctx.r11.s64 + 18624;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82120018
	ctx.lr = 0x82203B58;
	sub_82120018(ctx, base);
}

DEFINE_REX_FUNC(sub_8220C5E8) {
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
	// li r3,640
	ctx.r3.s64 = 640;
	// bl 0x822f6280
	ctx.lr = 0x8220C600;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8220c624
	if (ctx.cr0.eq) goto loc_8220C624;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82268f38
	ctx.lr = 0x8220C610;
	sub_82268F38(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,-32184
	ctx.r11.s64 = ctx.r11.s64 + -32184;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// b 0x8220c628
	goto loc_8220C628;
loc_8220C624:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8220C628:
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

DEFINE_REX_FUNC(sub_8220EAF8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-14188
	ctx.r3.s64 = ctx.r11.s64 + -14188;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8220F330) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-14172
	ctx.r3.s64 = ctx.r11.s64 + -14172;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8220F628) {
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
	// lwz r11,128(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 128);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r4,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x8216b740
	ctx.lr = 0x8220F650;
	sub_8216B740(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x8220f6ac
	if (ctx.cr0.eq) goto loc_8220F6AC;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8220F65C:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220f65c
	if (!ctx.cr6.eq) goto loc_8220F65C;
	// subf r11,r4,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r4.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi. r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8220f6ac
	if (ctx.cr0.eq) goto loc_8220F6AC;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8220F680:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220f680
	if (!ctx.cr6.eq) goto loc_8220F680;
	// subf r11,r4,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r4.u64;
	// addi r3,r31,260
	ctx.r3.s64 = r31.s64 + 260;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82120c08
	ctx.lr = 0x8220F6A4;
	sub_82120C08(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8220f6b0
	goto loc_8220F6B0;
loc_8220F6AC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8220F6B0:
	// stb r11,120(r31)
	REX_STORE_U8(r31.u32 + 120, ctx.r11.u8);
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

DEFINE_REX_FUNC(sub_82215148) {
	REX_FUNC_PROLOGUE();
	// clrlwi. r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// addi r3,r3,-112
	ctx.r3.s64 = ctx.r3.s64 + -112;
	// b 0x822166e8
	sub_822166E8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82216CE8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82216CF0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x821dbb48
	ctx.lr = 0x82216D0C;
	sub_821DBB48(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r11,r11,-23836
	ctx.r11.s64 = ctx.r11.s64 + -23836;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x82216D20;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82216d44
	if (ctx.cr0.eq) goto loc_82216D44;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r30,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// std r29,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, r29.u64);
	// addi r10,r10,-19528
	ctx.r10.s64 = ctx.r10.s64 + -19528;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x82216d48
	goto loc_82216D48;
loc_82216D44:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82216D48:
	// stw r11,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8221B498) {
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
	// bl 0x826a1c80
	ctx.lr = 0x8221B4A0;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r16,r3,800
	r16.s64 = ctx.r3.s64 + 800;
	// addi r15,r11,-26728
	r15.s64 = ctx.r11.s64 + -26728;
	// mr r17,r3
	r17.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// mr r18,r6
	r18.u64 = ctx.r6.u64;
	// bl 0x8215f670
	ctx.lr = 0x8221B4CC;
	sub_8215F670(ctx, base);
	// mr r14,r3
	r14.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// ble cr6,0x8221b788
	if (!ctx.cr6.gt) goto loc_8221B788;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// addi r20,r11,22808
	r20.s64 = ctx.r11.s64 + 22808;
	// addi r23,r10,16192
	r23.s64 = ctx.r10.s64 + 16192;
	// addi r19,r9,-26688
	r19.s64 = ctx.r9.s64 + -26688;
	// addi r21,r8,16176
	r21.s64 = ctx.r8.s64 + 16176;
	// addi r25,r7,-17264
	r25.s64 = ctx.r7.s64 + -17264;
loc_8221B504:
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x8215f270
	ctx.lr = 0x8221B50C;
	sub_8215F270(ctx, base);
	// lwz r11,4(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 4);
	// lwz r10,0(r22)
	ctx.r10.u64 = REX_LOAD_U32(r22.u32 + 0);
	// li r9,28
	ctx.r9.s64 = 28;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// divw r31,r11,r9
	r31.u64 = uint32_t((ctx.r9.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r11.s32 / ctx.r9.s32 : 0);
	// bl 0x821a33a0
	ctx.lr = 0x8221B52C;
	sub_821A33A0(ctx, base);
	// clrldi r10,r31,32
	ctx.r10.u64 = r31.u64 & 0xFFFFFFFF;
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// std r10,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// mulli r10,r10,28
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(28));
	// add r31,r10,r11
	r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8215f670
	ctx.lr = 0x8221B568;
	sub_8215F670(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// bl 0x8215f670
	ctx.lr = 0x8221B570;
	sub_8215F670(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8221b584
	if (ctx.cr6.lt) goto loc_8221B584;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// b 0x8221b588
	goto loc_8221B588;
loc_8221B584:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
loc_8221B588:
	// bl 0x8215fbf8
	ctx.lr = 0x8221B58C;
	sub_8215FBF8(ctx, base);
	// lwz r11,796(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 796);
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// bl 0x8215f338
	ctx.lr = 0x8221B59C;
	sub_8215F338(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8215f2d0
	ctx.lr = 0x8221B5A4;
	sub_8215F2D0(ctx, base);
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// bl 0x8215f338
	ctx.lr = 0x8221B5AC;
	sub_8215F338(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8221b5d4
	if (!ctx.cr6.eq) goto loc_8221B5D4;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// subf r10,r10,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r10.u64;
	// srawi r10,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// b 0x8221b5d8
	goto loc_8221B5D8;
loc_8221B5D4:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8221B5D8:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8221b778
	if (ctx.cr6.eq) goto loc_8221B778;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8221b600
	if (!ctx.cr6.eq) goto loc_8221B600;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r31,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	r31.s64 = ctx.r11.s32 >> 4;
	// b 0x8221b604
	goto loc_8221B604;
loc_8221B600:
	// li r31,0
	r31.s64 = 0;
loc_8221B604:
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x821a33a0
	ctx.lr = 0x8221B60C;
	sub_821A33A0(ctx, base);
	// extsw r11,r31
	ctx.r11.s64 = r31.s32;
	// li r26,8
	r26.s64 = 8;
	// std r11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// lwz r27,100(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
loc_8221B634:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x8221B640;
	sub_8215F1B0(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x8221B644;
	sub_8215FA30(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x8215f670
	ctx.lr = 0x8221B654;
	sub_8215F670(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r31,0
	r31.s64 = 0;
loc_8221B65C:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8221b680
	if (!ctx.cr6.eq) goto loc_8221B680;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// b 0x8221b684
	goto loc_8221B684;
loc_8221B680:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8221B684:
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8221b6cc
	if (!ctx.cr6.lt) goto loc_8221B6CC;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x8221B698;
	sub_8215F1B0(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x8215f338
	ctx.lr = 0x8221B6A0;
	sub_8215F338(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// bl 0x8215f338
	ctx.lr = 0x8221B6A8;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x8221B6AC;
	sub_8215FA30(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82120780
	ctx.lr = 0x8221B6B4;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8221b6c4
	if (ctx.cr0.eq) goto loc_8221B6C4;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// b 0x8221b65c
	goto loc_8221B65C;
loc_8221B6C4:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8221b6d0
	goto loc_8221B6D0;
loc_8221B6CC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8221B6D0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221b72c
	if (ctx.cr0.eq) goto loc_8221B72C;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8221b6fc
	if (!ctx.cr6.eq) goto loc_8221B6FC;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r31,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	r31.s64 = ctx.r11.s32 >> 4;
	// b 0x8221b700
	goto loc_8221B700;
loc_8221B6FC:
	// li r31,0
	r31.s64 = 0;
loc_8221B700:
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x821a33a0
	ctx.lr = 0x8221B708;
	sub_821A33A0(ctx, base);
	// extsw r11,r31
	ctx.r11.s64 = r31.s32;
	// std r11,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// lwz r27,100(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
loc_8221B72C:
	// addic. r26,r26,-1
	ctx.xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// bne 0x8221b634
	if (!ctx.cr0.eq) goto loc_8221B634;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x8221B740;
	sub_8215F1B0(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x8221B744;
	sub_8215FA30(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8215f670
	ctx.lr = 0x8221B754;
	sub_8215F670(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// bl 0x8215f670
	ctx.lr = 0x8221B75C;
	sub_8215F670(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8221b770
	if (ctx.cr6.lt) goto loc_8221B770;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// b 0x8221b774
	goto loc_8221B774;
loc_8221B770:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
loc_8221B774:
	// bl 0x8215fbf8
	ctx.lr = 0x8221B778;
	sub_8215FBF8(ctx, base);
loc_8221B778:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bne 0x8221b504
	if (!ctx.cr0.eq) goto loc_8221B504;
loc_8221B788:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_822319F0) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stb r10,167(r4)
	REX_STORE_U8(ctx.r4.u32 + 167, ctx.r10.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822322C0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-13572
	ctx.r3.s64 = ctx.r11.s64 + -13572;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82232570) {
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
	// bl 0x826a1c84
	ctx.lr = 0x82232578;
	// stwu r1,-864(r1)
	ea = -864 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r22,0
	r22.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r22,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r22.u32);
	// mr r30,r22
	r30.u64 = r22.u64;
	// bl 0x82178268
	ctx.lr = 0x82232594;
	sub_82178268(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r11,r11,-14552
	ctx.r11.s64 = ctx.r11.s64 + -14552;
	// addi r10,r10,-18396
	ctx.r10.s64 = ctx.r10.s64 + -18396;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// stw r11,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r11.u32);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// stw r10,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r10.u32);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// addi r11,r8,-19544
	ctx.r11.s64 = ctx.r8.s64 + -19544;
	// addi r9,r9,-19584
	ctx.r9.s64 = ctx.r9.s64 + -19584;
	// addi r10,r7,-19540
	ctx.r10.s64 = ctx.r7.s64 + -19540;
	// stw r11,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r11.u32);
	// stw r9,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// addi r27,r31,140
	r27.s64 = r31.s64 + 140;
	// stw r10,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r29,r31,116
	r29.s64 = r31.s64 + 116;
	// bl 0x82120ac0
	ctx.lr = 0x822325E8;
	sub_82120AC0(ctx, base);
	// addi r26,r31,168
	r26.s64 = r31.s64 + 168;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x821e2700
	ctx.lr = 0x822325F8;
	sub_821E2700(ctx, base);
	// addi r25,r31,480
	r25.s64 = r31.s64 + 480;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x821e36b0
	ctx.lr = 0x82232604;
	sub_821E36B0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// addi r21,r31,760
	r21.s64 = r31.s64 + 760;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f13,-19392(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -19392);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// lfs f0,1300(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1300);
	ctx.f0.f64 = double(temp.f32);
	// addi r24,r31,752
	r24.s64 = r31.s64 + 752;
	// stfs f0,752(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 752, temp.u32);
	// addi r23,r31,756
	r23.s64 = r31.s64 + 756;
	// stfs f13,756(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 756, temp.u32);
	// bl 0x82120ac0
	ctx.lr = 0x8223263C;
	sub_82120AC0(ctx, base);
	// addi r20,r31,788
	r20.s64 = r31.s64 + 788;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x82120ac0
	ctx.lr = 0x82232650;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r31,848
	ctx.r3.s64 = r31.s64 + 848;
	// addi r19,r31,816
	r19.s64 = r31.s64 + 816;
	// addi r18,r31,820
	r18.s64 = r31.s64 + 820;
	// addi r17,r31,824
	r17.s64 = r31.s64 + 824;
	// lfs f9,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f9.f64 = double(temp.f32);
	// addi r16,r31,828
	r16.s64 = r31.s64 + 828;
	// stfs f9,816(r31)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(r31.u32 + 816, temp.u32);
	// addi r15,r31,832
	r15.s64 = r31.s64 + 832;
	// stfs f9,820(r31)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(r31.u32 + 820, temp.u32);
	// stfs f9,824(r31)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(r31.u32 + 824, temp.u32);
	// stfs f9,828(r31)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(r31.u32 + 828, temp.u32);
	// stfs f9,832(r31)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(r31.u32 + 832, temp.u32);
	// bl 0x822ee8f0
	ctx.lr = 0x82232688;
	sub_822EE8F0(ctx, base);
	// stfs f9,980(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(r31.u32 + 980, temp.u32);
	// stw r22,976(r31)
	REX_STORE_U32(r31.u32 + 976, r22.u32);
	// stfs f9,992(r31)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(r31.u32 + 992, temp.u32);
	// li r3,112
	ctx.r3.s64 = 112;
	// stfs f9,996(r31)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(r31.u32 + 996, temp.u32);
	// stfs f9,1000(r31)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(r31.u32 + 1000, temp.u32);
	// stw r22,1008(r31)
	REX_STORE_U32(r31.u32 + 1008, r22.u32);
	// bl 0x822f6280
	ctx.lr = 0x822326A8;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822326c0
	if (ctx.cr0.eq) goto loc_822326C0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821a1e80
	ctx.lr = 0x822326B8;
	sub_821A1E80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x822326c4
	goto loc_822326C4;
loc_822326C0:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
loc_822326C4:
	// stw r4,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r4.u32);
	// addi r28,r31,96
	r28.s64 = r31.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821d3988
	ctx.lr = 0x822326D4;
	sub_821D3988(ctx, base);
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x822f6280
	ctx.lr = 0x822326DC;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822326f8
	if (ctx.cr0.eq) goto loc_822326F8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821912a0
	ctx.lr = 0x822326F0;
	sub_821912A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x822326fc
	goto loc_822326FC;
loc_822326F8:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
loc_822326FC:
	// stw r4,124(r31)
	REX_STORE_U32(r31.u32 + 124, ctx.r4.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821d3988
	ctx.lr = 0x82232708;
	sub_821D3988(ctx, base);
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x822f6280
	ctx.lr = 0x82232710;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8223273c
	if (ctx.cr0.eq) goto loc_8223273C;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// stw r22,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r22.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r11,r11,13656
	ctx.r11.s64 = ctx.r11.s64 + 13656;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// ld r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82233df8
	ctx.lr = 0x82232734;
	sub_82233DF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82232740
	goto loc_82232740;
loc_8223273C:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
loc_82232740:
	// stw r4,128(r31)
	REX_STORE_U32(r31.u32 + 128, ctx.r4.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821d3988
	ctx.lr = 0x8223274C;
	sub_821D3988(ctx, base);
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x822f6280
	ctx.lr = 0x82232754;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82232774
	if (ctx.cr0.eq) goto loc_82232774;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,150
	ctx.r5.s64 = 150;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821dc550
	ctx.lr = 0x8223276C;
	sub_821DC550(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82232778
	goto loc_82232778;
loc_82232774:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
loc_82232778:
	// stw r4,132(r31)
	REX_STORE_U32(r31.u32 + 132, ctx.r4.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821d3988
	ctx.lr = 0x82232784;
	sub_821D3988(ctx, base);
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x822f6280
	ctx.lr = 0x8223278C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822327a8
	if (ctx.cr0.eq) goto loc_822327A8;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821dd570
	ctx.lr = 0x822327A0;
	sub_821DD570(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x822327ac
	goto loc_822327AC;
loc_822327A8:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
loc_822327AC:
	// stw r4,136(r31)
	REX_STORE_U32(r31.u32 + 136, ctx.r4.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821d3988
	ctx.lr = 0x822327B8;
	sub_821D3988(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r22,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r22.u32);
	// addi r11,r11,13808
	ctx.r11.s64 = ctx.r11.s64 + 13808;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r29,124(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 124);
	// bl 0x822f6280
	ctx.lr = 0x822327D4;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82232800
	if (ctx.cr0.eq) goto loc_82232800;
	// lwz r10,12(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 12);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// ld r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r9,-12728
	ctx.r9.s64 = ctx.r9.s64 + -12728;
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// std r8,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r8.u64);
	// b 0x82232804
	goto loc_82232804;
loc_82232800:
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
loc_82232804:
	// stw r11,16(r29)
	REX_STORE_U32(r29.u32 + 16, ctx.r11.u32);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// li r3,16
	ctx.r3.s64 = 16;
	// lwz r29,124(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 124);
	// addi r11,r11,14104
	ctx.r11.s64 = ctx.r11.s64 + 14104;
	// stw r22,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r22.u32);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x82232824;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82232850
	if (ctx.cr0.eq) goto loc_82232850;
	// lwz r10,12(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 12);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// ld r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r9,-12728
	ctx.r9.s64 = ctx.r9.s64 + -12728;
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// std r8,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r8.u64);
	// b 0x82232854
	goto loc_82232854;
loc_82232850:
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
loc_82232854:
	// stw r11,20(r29)
	REX_STORE_U32(r29.u32 + 20, ctx.r11.u32);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r22,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r22.u32);
	// addi r11,r11,13800
	ctx.r11.s64 = ctx.r11.s64 + 13800;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r29,128(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 128);
	// bl 0x822f6280
	ctx.lr = 0x82232874;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8223289c
	if (ctx.cr0.eq) goto loc_8223289C;
	// ld r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r9,-12728
	ctx.r9.s64 = ctx.r9.s64 + -12728;
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// std r10,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r10.u64);
	// b 0x822328a0
	goto loc_822328A0;
loc_8223289C:
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
loc_822328A0:
	// stw r11,20(r29)
	REX_STORE_U32(r29.u32 + 20, ctx.r11.u32);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r22,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r22.u32);
	// addi r11,r11,14144
	ctx.r11.s64 = ctx.r11.s64 + 14144;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r29,120(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 120);
	// bl 0x822f6280
	ctx.lr = 0x822328C0;
	sub_822F6280(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r28,r11,-13900
	r28.s64 = ctx.r11.s64 + -13900;
	// beq 0x822328ec
	if (ctx.cr0.eq) goto loc_822328EC;
	// lwz r10,12(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 12);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ld r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// stw r28,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// std r9,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r9.u64);
	// b 0x822328f0
	goto loc_822328F0;
loc_822328EC:
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
loc_822328F0:
	// stw r11,96(r29)
	REX_STORE_U32(r29.u32 + 96, ctx.r11.u32);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// li r3,104
	ctx.r3.s64 = 104;
	// stw r22,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r22.u32);
	// addi r11,r11,14128
	ctx.r11.s64 = ctx.r11.s64 + 14128;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x8223290C;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x82232950
	if (ctx.cr0.eq) goto loc_82232950;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,688
	ctx.r3.s64 = ctx.r1.s64 + 688;
	// addi r4,r11,-19920
	ctx.r4.s64 = ctx.r11.s64 + -19920;
	// bl 0x82120600
	ctx.lr = 0x82232924;
	sub_82120600(ctx, base);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// lwz r4,-15376(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + -15376);
	// bl 0x82120600
	ctx.lr = 0x82232934;
	sub_82120600(ctx, base);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r5,r1,688
	ctx.r5.s64 = ctx.r1.s64 + 688;
	// addi r4,r1,400
	ctx.r4.s64 = ctx.r1.s64 + 400;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r30,3
	r30.s64 = 3;
	// bl 0x821d58c8
	ctx.lr = 0x8223294C;
	sub_821D58C8(ctx, base);
	// b 0x82232954
	goto loc_82232954;
loc_82232950:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
loc_82232954:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r27,r31,80
	r27.s64 = r31.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82145710
	ctx.lr = 0x82232968;
	sub_82145710(ctx, base);
	// lwz r29,80(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,36(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 36);
	// bl 0x8269ce98
	ctx.lr = 0x82232974;
	sub_8269CE98(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x822f6280
	ctx.lr = 0x8223297C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8223299c
	if (ctx.cr0.eq) goto loc_8223299C;
	// ld r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// stw r28,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// std r10,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r10.u64);
	// b 0x822329a0
	goto loc_822329A0;
loc_8223299C:
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
loc_822329A0:
	// rlwinm. r10,r30,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,36(r29)
	REX_STORE_U32(r29.u32 + 36, ctx.r11.u32);
	// stb r22,33(r29)
	REX_STORE_U8(r29.u32 + 33, r22.u8);
	// beq 0x822329c4
	if (ctx.cr0.eq) goto loc_822329C4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// rlwinm r30,r30,0,31,29
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// bl 0x82120ac0
	ctx.lr = 0x822329C4;
	sub_82120AC0(ctx, base);
loc_822329C4:
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822329e0
	if (ctx.cr0.eq) goto loc_822329E0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,688
	ctx.r3.s64 = ctx.r1.s64 + 688;
	// rlwinm r30,r30,0,0,30
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
	// bl 0x82120ac0
	ctx.lr = 0x822329E0;
	sub_82120AC0(ctx, base);
loc_822329E0:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x821e28b8
	ctx.lr = 0x822329EC;
	sub_821E28B8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x821e37c0
	ctx.lr = 0x822329F8;
	sub_821E37C0(ctx, base);
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x82232A00;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x82232a30
	if (ctx.cr0.eq) goto loc_82232A30;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r4,r11,-19896
	ctx.r4.s64 = ctx.r11.s64 + -19896;
	// bl 0x82120600
	ctx.lr = 0x82232A18;
	sub_82120600(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,4
	r30.u64 = r30.u64 | 4;
	// bl 0x82196ba8
	ctx.lr = 0x82232A2C;
	sub_82196BA8(ctx, base);
	// b 0x82232a34
	goto loc_82232A34;
loc_82232A30:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
loc_82232A34:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82145710
	ctx.lr = 0x82232A44;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82232a60
	if (ctx.cr0.eq) goto loc_82232A60;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// rlwinm r30,r30,0,30,28
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// bl 0x82120ac0
	ctx.lr = 0x82232A60;
	sub_82120AC0(ctx, base);
loc_82232A60:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x82232A68;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x82232a98
	if (ctx.cr0.eq) goto loc_82232A98;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// addi r4,r11,-19872
	ctx.r4.s64 = ctx.r11.s64 + -19872;
	// bl 0x82120600
	ctx.lr = 0x82232A80;
	sub_82120600(ctx, base);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// addi r4,r1,464
	ctx.r4.s64 = ctx.r1.s64 + 464;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,8
	r30.u64 = r30.u64 | 8;
	// bl 0x82196ba8
	ctx.lr = 0x82232A94;
	sub_82196BA8(ctx, base);
	// b 0x82232a9c
	goto loc_82232A9C;
loc_82232A98:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
loc_82232A9C:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82145710
	ctx.lr = 0x82232AAC;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82232ac8
	if (ctx.cr0.eq) goto loc_82232AC8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// rlwinm r30,r30,0,29,27
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// bl 0x82120ac0
	ctx.lr = 0x82232AC8;
	sub_82120AC0(ctx, base);
loc_82232AC8:
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x822f6280
	ctx.lr = 0x82232AD0;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x82232b00
	if (ctx.cr0.eq) goto loc_82232B00;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// addi r4,r11,-19860
	ctx.r4.s64 = ctx.r11.s64 + -19860;
	// bl 0x82120600
	ctx.lr = 0x82232AE8;
	sub_82120600(ctx, base);
	// addi r5,r31,880
	ctx.r5.s64 = r31.s64 + 880;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,16
	r30.u64 = r30.u64 | 16;
	// bl 0x8219db58
	ctx.lr = 0x82232AFC;
	sub_8219DB58(ctx, base);
	// b 0x82232b04
	goto loc_82232B04;
loc_82232B00:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
loc_82232B04:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82145710
	ctx.lr = 0x82232B14;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82232b30
	if (ctx.cr0.eq) goto loc_82232B30;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// rlwinm r30,r30,0,28,26
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// bl 0x82120ac0
	ctx.lr = 0x82232B30;
	sub_82120AC0(ctx, base);
loc_82232B30:
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x822f6280
	ctx.lr = 0x82232B38;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x82232b68
	if (ctx.cr0.eq) goto loc_82232B68;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// addi r4,r11,-19840
	ctx.r4.s64 = ctx.r11.s64 + -19840;
	// bl 0x82120600
	ctx.lr = 0x82232B50;
	sub_82120600(ctx, base);
	// addi r5,r31,896
	ctx.r5.s64 = r31.s64 + 896;
	// addi r4,r1,592
	ctx.r4.s64 = ctx.r1.s64 + 592;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,32
	r30.u64 = r30.u64 | 32;
	// bl 0x8219db58
	ctx.lr = 0x82232B64;
	sub_8219DB58(ctx, base);
	// b 0x82232b6c
	goto loc_82232B6C;
loc_82232B68:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
loc_82232B6C:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82145710
	ctx.lr = 0x82232B7C;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82232b98
	if (ctx.cr0.eq) goto loc_82232B98;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// rlwinm r30,r30,0,27,25
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// bl 0x82120ac0
	ctx.lr = 0x82232B98;
	sub_82120AC0(ctx, base);
loc_82232B98:
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x822f6280
	ctx.lr = 0x82232BA0;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x82232bd0
	if (ctx.cr0.eq) goto loc_82232BD0;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// addi r4,r11,-19820
	ctx.r4.s64 = ctx.r11.s64 + -19820;
	// bl 0x82120600
	ctx.lr = 0x82232BB8;
	sub_82120600(ctx, base);
	// addi r5,r31,912
	ctx.r5.s64 = r31.s64 + 912;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,64
	r30.u64 = r30.u64 | 64;
	// bl 0x8219e240
	ctx.lr = 0x82232BCC;
	sub_8219E240(ctx, base);
	// b 0x82232bd4
	goto loc_82232BD4;
loc_82232BD0:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
loc_82232BD4:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82145710
	ctx.lr = 0x82232BE4;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82232c00
	if (ctx.cr0.eq) goto loc_82232C00;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// rlwinm r30,r30,0,26,24
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// bl 0x82120ac0
	ctx.lr = 0x82232C00;
	sub_82120AC0(ctx, base);
loc_82232C00:
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x822f6280
	ctx.lr = 0x82232C08;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x82232c38
	if (ctx.cr0.eq) goto loc_82232C38;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// addi r4,r11,-19800
	ctx.r4.s64 = ctx.r11.s64 + -19800;
	// bl 0x82120600
	ctx.lr = 0x82232C20;
	sub_82120600(ctx, base);
	// addi r5,r31,928
	ctx.r5.s64 = r31.s64 + 928;
	// addi r4,r1,528
	ctx.r4.s64 = ctx.r1.s64 + 528;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,128
	r30.u64 = r30.u64 | 128;
	// bl 0x8219e240
	ctx.lr = 0x82232C34;
	sub_8219E240(ctx, base);
	// b 0x82232c3c
	goto loc_82232C3C;
loc_82232C38:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
loc_82232C3C:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82145710
	ctx.lr = 0x82232C4C;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82232c68
	if (ctx.cr0.eq) goto loc_82232C68;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// rlwinm r30,r30,0,25,23
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// bl 0x82120ac0
	ctx.lr = 0x82232C68;
	sub_82120AC0(ctx, base);
loc_82232C68:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x82232C70;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x82232ca0
	if (ctx.cr0.eq) goto loc_82232CA0;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,-19780
	ctx.r4.s64 = ctx.r11.s64 + -19780;
	// bl 0x82120600
	ctx.lr = 0x82232C88;
	sub_82120600(ctx, base);
	// addi r5,r31,944
	ctx.r5.s64 = r31.s64 + 944;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,256
	r30.u64 = r30.u64 | 256;
	// bl 0x82196ba8
	ctx.lr = 0x82232C9C;
	sub_82196BA8(ctx, base);
	// b 0x82232ca4
	goto loc_82232CA4;
loc_82232CA0:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
loc_82232CA4:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82145710
	ctx.lr = 0x82232CB4;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82232cd0
	if (ctx.cr0.eq) goto loc_82232CD0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// rlwinm r30,r30,0,24,22
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// bl 0x82120ac0
	ctx.lr = 0x82232CD0;
	sub_82120AC0(ctx, base);
loc_82232CD0:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x82232CD8;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x82232d08
	if (ctx.cr0.eq) goto loc_82232D08;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// addi r4,r11,-19756
	ctx.r4.s64 = ctx.r11.s64 + -19756;
	// bl 0x82120600
	ctx.lr = 0x82232CF0;
	sub_82120600(ctx, base);
	// addi r5,r31,948
	ctx.r5.s64 = r31.s64 + 948;
	// addi r4,r1,656
	ctx.r4.s64 = ctx.r1.s64 + 656;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,512
	r30.u64 = r30.u64 | 512;
	// bl 0x82196ba8
	ctx.lr = 0x82232D04;
	sub_82196BA8(ctx, base);
	// b 0x82232d0c
	goto loc_82232D0C;
loc_82232D08:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
loc_82232D0C:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82145710
	ctx.lr = 0x82232D1C;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82232d38
	if (ctx.cr0.eq) goto loc_82232D38;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// rlwinm r30,r30,0,23,21
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// bl 0x82120ac0
	ctx.lr = 0x82232D38;
	sub_82120AC0(ctx, base);
loc_82232D38:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x82232D40;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x82232d70
	if (ctx.cr0.eq) goto loc_82232D70;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r4,r11,-23100
	ctx.r4.s64 = ctx.r11.s64 + -23100;
	// bl 0x82120600
	ctx.lr = 0x82232D58;
	sub_82120600(ctx, base);
	// addi r5,r31,952
	ctx.r5.s64 = r31.s64 + 952;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,1024
	r30.u64 = r30.u64 | 1024;
	// bl 0x82196ba8
	ctx.lr = 0x82232D6C;
	sub_82196BA8(ctx, base);
	// b 0x82232d74
	goto loc_82232D74;
loc_82232D70:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
loc_82232D74:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82145710
	ctx.lr = 0x82232D84;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82232da0
	if (ctx.cr0.eq) goto loc_82232DA0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// rlwinm r30,r30,0,22,20
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFBFF;
	// bl 0x82120ac0
	ctx.lr = 0x82232DA0;
	sub_82120AC0(ctx, base);
loc_82232DA0:
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x822f6280
	ctx.lr = 0x82232DA8;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x82232de8
	if (ctx.cr0.eq) goto loc_82232DE8;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// addi r4,r11,-19732
	ctx.r4.s64 = ctx.r11.s64 + -19732;
	// bl 0x82120600
	ctx.lr = 0x82232DC0;
	sub_82120600(ctx, base);
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,2048
	r30.u64 = r30.u64 | 2048;
	// bl 0x821bf110
	ctx.lr = 0x82232DD4;
	sub_821BF110(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// addi r10,r10,-14480
	ctx.r10.s64 = ctx.r10.s64 + -14480;
	// stw r10,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// b 0x82232dec
	goto loc_82232DEC;
loc_82232DE8:
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
loc_82232DEC:
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82145710
	ctx.lr = 0x82232DFC;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82232e18
	if (ctx.cr0.eq) goto loc_82232E18;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// rlwinm r30,r30,0,21,19
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFF7FF;
	// bl 0x82120ac0
	ctx.lr = 0x82232E18;
	sub_82120AC0(ctx, base);
loc_82232E18:
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x822f6280
	ctx.lr = 0x82232E20;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x82232e50
	if (ctx.cr0.eq) goto loc_82232E50;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// addi r4,r11,-19712
	ctx.r4.s64 = ctx.r11.s64 + -19712;
	// bl 0x82120600
	ctx.lr = 0x82232E38;
	sub_82120600(ctx, base);
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,4096
	r30.u64 = r30.u64 | 4096;
	// bl 0x821bf110
	ctx.lr = 0x82232E4C;
	sub_821BF110(ctx, base);
	// b 0x82232e54
	goto loc_82232E54;
loc_82232E50:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
loc_82232E54:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82145710
	ctx.lr = 0x82232E64;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82232e80
	if (ctx.cr0.eq) goto loc_82232E80;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// rlwinm r30,r30,0,20,18
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFEFFF;
	// bl 0x82120ac0
	ctx.lr = 0x82232E80;
	sub_82120AC0(ctx, base);
loc_82232E80:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x82232E88;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x82232eb8
	if (ctx.cr0.eq) goto loc_82232EB8;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// addi r4,r11,-19700
	ctx.r4.s64 = ctx.r11.s64 + -19700;
	// bl 0x82120600
	ctx.lr = 0x82232EA0;
	sub_82120600(ctx, base);
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,8192
	r30.u64 = r30.u64 | 8192;
	// bl 0x82196ba8
	ctx.lr = 0x82232EB4;
	sub_82196BA8(ctx, base);
	// b 0x82232ebc
	goto loc_82232EBC;
loc_82232EB8:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
loc_82232EBC:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82145710
	ctx.lr = 0x82232ECC;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82232ee8
	if (ctx.cr0.eq) goto loc_82232EE8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// rlwinm r30,r30,0,19,17
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFDFFF;
	// bl 0x82120ac0
	ctx.lr = 0x82232EE8;
	sub_82120AC0(ctx, base);
loc_82232EE8:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x82232EF0;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x82232f20
	if (ctx.cr0.eq) goto loc_82232F20;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// addi r4,r11,-19680
	ctx.r4.s64 = ctx.r11.s64 + -19680;
	// bl 0x82120600
	ctx.lr = 0x82232F08;
	sub_82120600(ctx, base);
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// addi r4,r1,432
	ctx.r4.s64 = ctx.r1.s64 + 432;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,16384
	r30.u64 = r30.u64 | 16384;
	// bl 0x82196ba8
	ctx.lr = 0x82232F1C;
	sub_82196BA8(ctx, base);
	// b 0x82232f24
	goto loc_82232F24;
loc_82232F20:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
loc_82232F24:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82145710
	ctx.lr = 0x82232F34;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82232f50
	if (ctx.cr0.eq) goto loc_82232F50;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// rlwinm r30,r30,0,18,16
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFBFFF;
	// bl 0x82120ac0
	ctx.lr = 0x82232F50;
	sub_82120AC0(ctx, base);
loc_82232F50:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x82232F58;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x82232f88
	if (ctx.cr0.eq) goto loc_82232F88;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// addi r4,r11,-19660
	ctx.r4.s64 = ctx.r11.s64 + -19660;
	// bl 0x82120600
	ctx.lr = 0x82232F70;
	sub_82120600(ctx, base);
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// addi r4,r1,496
	ctx.r4.s64 = ctx.r1.s64 + 496;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,32768
	r30.u64 = r30.u64 | 32768;
	// bl 0x82196ba8
	ctx.lr = 0x82232F84;
	sub_82196BA8(ctx, base);
	// b 0x82232f8c
	goto loc_82232F8C;
loc_82232F88:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
loc_82232F8C:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82145710
	ctx.lr = 0x82232F9C;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82232fb8
	if (ctx.cr0.eq) goto loc_82232FB8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// rlwinm r30,r30,0,17,15
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// bl 0x82120ac0
	ctx.lr = 0x82232FB8;
	sub_82120AC0(ctx, base);
loc_82232FB8:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x82232FC0;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x82232ff0
	if (ctx.cr0.eq) goto loc_82232FF0;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// addi r4,r11,-19636
	ctx.r4.s64 = ctx.r11.s64 + -19636;
	// bl 0x82120600
	ctx.lr = 0x82232FD8;
	sub_82120600(ctx, base);
	// mr r5,r16
	ctx.r5.u64 = r16.u64;
	// addi r4,r1,560
	ctx.r4.s64 = ctx.r1.s64 + 560;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// oris r30,r30,1
	r30.u64 = r30.u64 | 65536;
	// bl 0x82196ba8
	ctx.lr = 0x82232FEC;
	sub_82196BA8(ctx, base);
	// b 0x82232ff4
	goto loc_82232FF4;
loc_82232FF0:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
loc_82232FF4:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82145710
	ctx.lr = 0x82233004;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82233020
	if (ctx.cr0.eq) goto loc_82233020;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// rlwinm r30,r30,0,16,14
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFEFFFF;
	// bl 0x82120ac0
	ctx.lr = 0x82233020;
	sub_82120AC0(ctx, base);
loc_82233020:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x82233028;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x82233058
	if (ctx.cr0.eq) goto loc_82233058;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// addi r4,r11,-19620
	ctx.r4.s64 = ctx.r11.s64 + -19620;
	// bl 0x82120600
	ctx.lr = 0x82233040;
	sub_82120600(ctx, base);
	// mr r5,r15
	ctx.r5.u64 = r15.u64;
	// addi r4,r1,624
	ctx.r4.s64 = ctx.r1.s64 + 624;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// oris r30,r30,2
	r30.u64 = r30.u64 | 131072;
	// bl 0x82196ba8
	ctx.lr = 0x82233054;
	sub_82196BA8(ctx, base);
	// b 0x8223305c
	goto loc_8223305C;
loc_82233058:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
loc_8223305C:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82145710
	ctx.lr = 0x8223306C;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,14,14
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82233084
	if (ctx.cr0.eq) goto loc_82233084;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// bl 0x82120ac0
	ctx.lr = 0x82233084;
	sub_82120AC0(ctx, base);
loc_82233084:
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x8223308C;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x8223310c
	if (ctx.cr0.eq) goto loc_8223310C;
	// stw r22,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r22.u32);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r22,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r22.u32);
	// addi r11,r11,13624
	ctx.r11.s64 = ctx.r11.s64 + 13624;
	// addi r4,r10,-19600
	ctx.r4.s64 = ctx.r10.s64 + -19600;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821dbb48
	ctx.lr = 0x822330C0;
	sub_821DBB48(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r11,r11,-23836
	ctx.r11.s64 = ctx.r11.s64 + -23836;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x822330D4;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822330fc
	if (ctx.cr0.eq) goto loc_822330FC;
	// ld r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r9,-19528
	ctx.r9.s64 = ctx.r9.s64 + -19528;
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// std r10,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r10.u64);
	// b 0x82233100
	goto loc_82233100;
loc_822330FC:
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
loc_82233100:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r11,104(r30)
	REX_STORE_U32(r30.u32 + 104, ctx.r11.u32);
	// b 0x82233110
	goto loc_82233110;
loc_8223310C:
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
loc_82233110:
	// lwz r11,132(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 132);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r11,80(r10)
	REX_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// bl 0x82264568
	ctx.lr = 0x82233128;
	sub_82264568(ctx, base);
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x822f6280
	ctx.lr = 0x82233130;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x82233168
	if (ctx.cr0.eq) goto loc_82233168;
	// stw r22,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r22.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-19592
	ctx.r4.s64 = ctx.r11.s64 + -19592;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821dbb48
	ctx.lr = 0x82233154;
	sub_821DBB48(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r11,r11,-23824
	ctx.r11.s64 = ctx.r11.s64 + -23824;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// b 0x8223316c
	goto loc_8223316C;
loc_82233168:
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
loc_8223316C:
	// lwz r11,132(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 132);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r11,80(r10)
	REX_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// bl 0x82264568
	ctx.lr = 0x82233184;
	sub_82264568(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,864
	ctx.r1.s64 = ctx.r1.s64 + 864;
	// b 0x826a1cd4
	return;
}

DEFINE_REX_FUNC(sub_82287250) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82287258;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// std r11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfs f0,15048(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// addi r29,r10,-608
	r29.s64 = ctx.r10.s64 + -608;
	// stw r11,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// bne cr6,0x822872a8
	if (!ctx.cr6.eq) goto loc_822872A8;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r11,30052
	ctx.r3.s64 = ctx.r11.s64 + 30052;
	// li r5,172
	ctx.r5.s64 = 172;
	// bl 0x821231d0
	ctx.lr = 0x822872A8;
	sub_821231D0(ctx, base);
loc_822872A8:
	// cmplwi cr6,r28,5
	ctx.cr6.compare<uint32_t>(r28.u32, 5, ctx.xer);
	// bge cr6,0x822872c4
	if (!ctx.cr6.lt) goto loc_822872C4;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r11,30080
	ctx.r3.s64 = ctx.r11.s64 + 30080;
	// li r5,173
	ctx.r5.s64 = 173;
	// bl 0x821231d0
	ctx.lr = 0x822872C4;
	sub_821231D0(ctx, base);
loc_822872C4:
	// lhz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 0);
	// cmplwi cr6,r11,32770
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32770, ctx.xer);
	// beq cr6,0x822872e4
	if (ctx.cr6.eq) goto loc_822872E4;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r11,30128
	ctx.r3.s64 = ctx.r11.s64 + 30128;
	// li r5,177
	ctx.r5.s64 = 177;
	// bl 0x821231d0
	ctx.lr = 0x822872E4;
	sub_821231D0(ctx, base);
loc_822872E4:
	// lbz r10,3(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 3);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lbz r8,2(r31)
	ctx.r8.u64 = REX_LOAD_U8(r31.u32 + 2);
	// li r11,5
	ctx.r11.s64 = 5;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// lbz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U8(r31.u32 + 4);
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r8,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// rlwinm r8,r7,0,0,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFF80;
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// addi r9,r9,16592
	ctx.r9.s64 = ctx.r9.s64 + 16592;
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// addic r6,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r6.s64 = ctx.r8.s64 + -1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// rlwinm r11,r7,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 26) & 0x1;
	// subfe r8,r6,r8
	temp.u8 = (~ctx.r6.u32 + ctx.r8.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r6.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// stb r11,124(r1)
	REX_STORE_U8(ctx.r1.u32 + 124, ctx.r11.u8);
	// lfs f0,552(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 552);
	ctx.f0.f64 = double(temp.f32);
	// stb r8,125(r1)
	REX_STORE_U8(ctx.r1.u32 + 125, ctx.r8.u8);
	// rlwinm r8,r7,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// addi r9,r30,56
	ctx.r9.s64 = r30.s64 + 56;
	// addi r11,r10,-4
	ctx.r11.s64 = ctx.r10.s64 + -4;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
loc_82287364:
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x82287364
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82287364;
	// stb r8,153(r30)
	REX_STORE_U8(r30.u32 + 153, ctx.r8.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8215f0f0
	ctx.lr = 0x8228737C;
	sub_8215F0F0(ctx, base);
	// li r3,5
	ctx.r3.s64 = 5;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8228D730) {
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
	// lwz r11,128(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 128);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r4,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x8216b740
	ctx.lr = 0x8228D758;
	sub_8216B740(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120600
	ctx.lr = 0x8228D764;
	sub_82120600(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82171fa0
	ctx.lr = 0x8228D770;
	sub_82171FA0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x8228D780;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x8226afb8
	ctx.lr = 0x8228D78C;
	sub_8226AFB8(ctx, base);
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

DEFINE_REX_FUNC(sub_82290288) {
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
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,4552
	ctx.r11.s64 = ctx.r11.s64 + 4552;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x822902b4
	if (ctx.cr0.eq) goto loc_822902B4;
	// bl 0x8269ce98
	ctx.lr = 0x822902B4;
	sub_8269CE98(ctx, base);
loc_822902B4:
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

DEFINE_REX_FUNC(sub_82291250) {
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
	// ld r7,0(r5)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r5.u32 + 0);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// ld r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r4.u32 + 0);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// ld r9,8(r4)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r4.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// ld r5,8(r5)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r5.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r6,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// std r11,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// std r9,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// std r7,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, ctx.r7.u64);
	// std r5,8(r8)
	REX_STORE_U64(ctx.r8.u32 + 8, ctx.r5.u64);
	// beq cr6,0x822912a8
	if (ctx.cr6.eq) goto loc_822912A8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82292588
	ctx.lr = 0x822912A8;
	sub_82292588(ctx, base);
loc_822912A8:
	// lwz r3,44(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822912c0
	if (ctx.cr6.eq) goto loc_822912C0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82292588
	ctx.lr = 0x822912C0;
	sub_82292588(ctx, base);
loc_822912C0:
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

DEFINE_REX_FUNC(sub_82296610) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	PPCRegister temp{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r11,r11,5296
	ctx.r11.s64 = ctx.r11.s64 + 5296;
	// addi r31,r10,16592
	r31.s64 = ctx.r10.s64 + 16592;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r9,r3,80
	ctx.r9.s64 = ctx.r3.s64 + 80;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// stw r11,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// addi r11,r3,48
	ctx.r11.s64 = ctx.r3.s64 + 48;
	// lwz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lfs f0,15048(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r10.u32);
	// lfs f13,12(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,8(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// addi r10,r3,64
	ctx.r10.s64 = ctx.r3.s64 + 64;
	// stw r9,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r9.u32);
	// addi r9,r3,144
	ctx.r9.s64 = ctx.r3.s64 + 144;
	// lwz r9,12(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// stw r9,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, ctx.r9.u32);
	// lwz r9,0(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// stw r9,64(r3)
	REX_STORE_U32(ctx.r3.u32 + 64, ctx.r9.u32);
	// lwz r9,4(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// stw r9,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r9.u32);
	// lwz r9,8(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// stw r9,72(r3)
	REX_STORE_U32(ctx.r3.u32 + 72, ctx.r9.u32);
	// lwz r9,12(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// stw r9,76(r3)
	REX_STORE_U32(ctx.r3.u32 + 76, ctx.r9.u32);
	// stw r6,224(r3)
	REX_STORE_U32(ctx.r3.u32 + 224, ctx.r6.u32);
	// stw r7,228(r3)
	REX_STORE_U32(ctx.r3.u32 + 228, ctx.r7.u32);
	// stfs f13,80(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// stfs f0,84(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// stfs f0,88(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// stfs f0,92(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// stfs f0,96(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// stfs f13,100(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// stfs f0,104(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// stfs f0,108(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// stfs f0,112(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// stfs f0,116(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// stfs f13,120(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// stfs f0,124(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 124, temp.u32);
	// stfs f0,128(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 128, temp.u32);
	// stfs f0,132(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 132, temp.u32);
	// stfs f0,136(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 136, temp.u32);
	// stfs f0,140(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 140, temp.u32);
	// ld r8,48(r3)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r3.u32 + 48);
	// ld r9,56(r3)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r3.u32 + 56);
	// std r9,136(r3)
	REX_STORE_U64(ctx.r3.u32 + 136, ctx.r9.u64);
	// std r8,128(r3)
	REX_STORE_U64(ctx.r3.u32 + 128, ctx.r8.u64);
	// stfs f13,144(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 144, temp.u32);
	// stfs f0,148(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 148, temp.u32);
	// stfs f0,152(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 152, temp.u32);
	// stfs f0,156(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 156, temp.u32);
	// stfs f0,160(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 160, temp.u32);
	// stfs f13,164(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 164, temp.u32);
	// stfs f0,168(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 168, temp.u32);
	// stfs f0,172(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 172, temp.u32);
	// stfs f0,176(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 176, temp.u32);
	// stfs f0,180(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 180, temp.u32);
	// stfs f13,184(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 184, temp.u32);
	// stfs f0,188(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 188, temp.u32);
	// stfs f0,192(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 192, temp.u32);
	// stfs f0,196(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 196, temp.u32);
	// stfs f0,200(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 200, temp.u32);
	// stfs f0,204(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 204, temp.u32);
	// ld r9,72(r3)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r3.u32 + 72);
	// ld r8,64(r3)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r3.u32 + 64);
	// std r8,192(r3)
	REX_STORE_U64(ctx.r3.u32 + 192, ctx.r8.u64);
	// std r9,200(r3)
	REX_STORE_U64(ctx.r3.u32 + 200, ctx.r9.u64);
	// lfs f10,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f11,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f11,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f11,f10
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f11,8(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f7,f11,f8
	ctx.f7.f64 = double(float(ctx.f11.f64 - ctx.f8.f64));
	// lfs f11,308(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 308);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f9,f12,f12
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f9,f10,f10,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f10.f64, ctx.f10.f64, ctx.f9.f64)));
	// fmadds f9,f7,f7,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f7.f64, ctx.f7.f64, ctx.f9.f64)));
	// fsqrts f9,f9
	ctx.f9.f64 = double(float(sqrt(ctx.f9.f64)));
	// fdivs f6,f13,f9
	ctx.f6.f64 = double(float(ctx.f13.f64 / ctx.f9.f64));
	// fmuls f9,f12,f6
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f6.f64));
	// fmuls f8,f10,f6
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f6.f64));
	// fmuls f7,f6,f7
	ctx.f7.f64 = double(float(ctx.f6.f64 * ctx.f7.f64));
	// fcmpu cr6,f9,f0
	ctx.cr6.compare(ctx.f9.f64, ctx.f0.f64);
	// bne cr6,0x82296784
	if (!ctx.cr6.eq) goto loc_82296784;
	// fmr f10,f11
	ctx.f10.f64 = ctx.f11.f64;
	// b 0x82296788
	goto loc_82296788;
loc_82296784:
	// fdivs f10,f13,f9
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f13.f64 / ctx.f9.f64));
loc_82296788:
	// stfs f10,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// fcmpu cr6,f8,f0
	ctx.cr6.compare(ctx.f8.f64, ctx.f0.f64);
	// bne cr6,0x8229679c
	if (!ctx.cr6.eq) goto loc_8229679C;
	// fmr f12,f11
	ctx.f12.f64 = ctx.f11.f64;
	// b 0x822967a0
	goto loc_822967A0;
loc_8229679C:
	// fdivs f12,f13,f8
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f13.f64 / ctx.f8.f64));
loc_822967A0:
	// stfs f12,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// fcmpu cr6,f7,f0
	ctx.cr6.compare(ctx.f7.f64, ctx.f0.f64);
	// bne cr6,0x822967b4
	if (!ctx.cr6.eq) goto loc_822967B4;
	// fmr f13,f11
	ctx.f13.f64 = ctx.f11.f64;
	// b 0x822967b8
	goto loc_822967B8;
loc_822967B4:
	// fdivs f13,f13,f7
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f7.f64));
loc_822967B8:
	// stfs f13,24(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// li r9,1
	ctx.r9.s64 = 1;
	// blt cr6,0x822967cc
	if (ctx.cr6.lt) goto loc_822967CC;
	// li r9,0
	ctx.r9.s64 = 0;
loc_822967CC:
	// stw r9,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r9.u32);
	// fcmpu cr6,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// li r9,1
	ctx.r9.s64 = 1;
	// blt cr6,0x822967e0
	if (ctx.cr6.lt) goto loc_822967E0;
	// li r9,0
	ctx.r9.s64 = 0;
loc_822967E0:
	// stw r9,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r9.u32);
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// li r9,1
	ctx.r9.s64 = 1;
	// blt cr6,0x822967f4
	if (ctx.cr6.lt) goto loc_822967F4;
	// li r9,0
	ctx.r9.s64 = 0;
loc_822967F4:
	// stw r9,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r9.u32);
	// lfs f13,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f6,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f10,f10,f6
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f6.f64));
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fmuls f13,f10,f9
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fmadds f0,f0,f8,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f8.f64, ctx.f13.f64)));
	// fmadds f0,f12,f7,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f7.f64, ctx.f0.f64)));
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822ADAE0) {
	REX_FUNC_PROLOGUE();
	// stw r4,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822ADC28) {
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
	// bl 0x822adc78
	ctx.lr = 0x822ADC48;
	sub_822ADC78(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822adc58
	if (ctx.cr0.eq) goto loc_822ADC58;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x822ADC58;
	sub_8269CE98(ctx, base);
loc_822ADC58:
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

DEFINE_REX_FUNC(sub_822B07D0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// ld r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r4.u32 + 0);
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// std r10,16(r11)
	REX_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
	// ld r10,8(r4)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r4.u32 + 8);
	// std r10,24(r11)
	REX_STORE_U64(ctx.r11.u32 + 24, ctx.r10.u64);
	// b 0x822b0630
	sub_822B0630(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822B2448) {
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
	// bl 0x826a1cb4
	ctx.lr = 0x822B2450;
	// stfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -64, f30.u64);
	// stfd f31,-56(r1)
	REX_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,3
	ctx.r11.s64 = 3;
	// addi r31,r4,64
	r31.s64 = ctx.r4.s64 + 64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r7,r1,192
	ctx.r7.s64 = ctx.r1.s64 + 192;
	// addi r6,r1,148
	ctx.r6.s64 = ctx.r1.s64 + 148;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r5,r1,196
	ctx.r5.s64 = ctx.r1.s64 + 196;
	// subf r8,r31,r10
	ctx.r8.u64 = ctx.r10.u64 - r31.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r11,r31,4
	ctx.r11.s64 = r31.s64 + 4;
	// subf r9,r31,r4
	ctx.r9.u64 = ctx.r4.u64 - r31.u64;
	// subf r7,r31,r7
	ctx.r7.u64 = ctx.r7.u64 - r31.u64;
	// subf r6,r31,r6
	ctx.r6.u64 = ctx.r6.u64 - r31.u64;
	// subf r5,r31,r5
	ctx.r5.u64 = ctx.r5.u64 - r31.u64;
	// li r10,0
	ctx.r10.s64 = 0;
loc_822B24A0:
	// add r4,r10,r30
	ctx.r4.u64 = ctx.r10.u64 + r30.u64;
	// lfsx f0,r10,r30
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + r30.u32);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lfs f13,-4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// addi r27,r1,192
	r27.s64 = ctx.r1.s64 + 192;
	// lfsx f12,r9,r11
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// stfsx f0,r10,r3
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r3.u32, temp.u32);
	// stfsx f13,r10,r27
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + r27.u32, temp.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stfsx f12,r8,r11
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r8.u32 + ctx.r11.u32, temp.u32);
	// stfsx f11,r7,r11
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r7.u32 + ctx.r11.u32, temp.u32);
	// stfsx f9,r6,r11
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r6.u32 + ctx.r11.u32, temp.u32);
	// stfsx f10,r5,r11
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r5.u32 + ctx.r11.u32, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x822b24a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822B24A0;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// lwz r4,8(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 8);
	// bl 0x82294688
	ctx.lr = 0x822B24F4;
	sub_82294688(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// lwz r4,4(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 4);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,-19392(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -19392);
	f31.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * f31.f64));
	// lfs f12,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * f31.f64));
	// lfs f30,15048(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15048);
	f30.f64 = double(temp.f32);
	// fmuls f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 * f31.f64));
	// stfs f30,108(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x82294688
	ctx.lr = 0x822B253C;
	sub_82294688(ctx, base);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,132
	ctx.r11.s64 = ctx.r1.s64 + 132;
	// lfs f13,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lfs f12,8(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r9,r1,272
	ctx.r9.s64 = ctx.r1.s64 + 272;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * f31.f64));
	// addi r7,r1,192
	ctx.r7.s64 = ctx.r1.s64 + 192;
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * f31.f64));
	// addi r6,r31,48
	ctx.r6.s64 = r31.s64 + 48;
	// fmuls f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 * f31.f64));
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stfs f30,124(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r3,r30,48
	ctx.r3.s64 = r30.s64 + 48;
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x822b1010
	ctx.lr = 0x822B2594;
	sub_822B1010(ctx, base);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_822BE610) {
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
	// bl 0x826a1c9c
	ctx.lr = 0x822BE618;
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x826a2c70
	ctx.lr = 0x822BE620;
	// stwu r1,-1216(r1)
	ea = -1216 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822BE63C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822BE64C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// rlwinm r29,r3,21,31,31
	r29.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 21) & 0x1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822BE664;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822BE674;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f30,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	f30.f64 = double(temp.f32);
	// rlwinm r26,r3,20,31,31
	r26.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 20) & 0x1;
	// lfs f31,15048(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	f31.f64 = double(temp.f32);
	// fcmpu cr6,f30,f31
	ctx.cr6.compare(f30.f64, f31.f64);
	// ble cr6,0x822bff84
	if (!ctx.cr6.gt) goto loc_822BFF84;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x822bfd74
	if (ctx.cr6.eq) goto loc_822BFD74;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x822bf8e8
	if (ctx.cr6.eq) goto loc_822BF8E8;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x822beef0
	if (ctx.cr6.eq) goto loc_822BEEF0;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x822be9f8
	if (ctx.cr6.eq) goto loc_822BE9F8;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x822bff84
	if (!ctx.cr6.eq) goto loc_822BFF84;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r6,r11,3720
	ctx.r6.s64 = ctx.r11.s64 + 3720;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,912
	ctx.r3.s64 = ctx.r1.s64 + 912;
	// addi r30,r31,912
	r30.s64 = r31.s64 + 912;
	// bl 0x82124eb0
	ctx.lr = 0x822BE6D4;
	sub_82124EB0(ctx, base);
	// clrlwi. r27,r29,24
	r27.u64 = r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// ld r7,912(r31)
	ctx.r7.u64 = REX_LOAD_U64(r31.u32 + 912);
	// addi r11,r1,912
	ctx.r11.s64 = ctx.r1.s64 + 912;
	// ld r6,920(r31)
	ctx.r6.u64 = REX_LOAD_U64(r31.u32 + 920);
	// addi r10,r1,928
	ctx.r10.s64 = ctx.r1.s64 + 928;
	// ld r5,928(r31)
	ctx.r5.u64 = REX_LOAD_U64(r31.u32 + 928);
	// addi r9,r1,944
	ctx.r9.s64 = ctx.r1.s64 + 944;
	// ld r4,936(r31)
	ctx.r4.u64 = REX_LOAD_U64(r31.u32 + 936);
	// addi r8,r1,960
	ctx.r8.s64 = ctx.r1.s64 + 960;
	// ld r3,944(r31)
	ctx.r3.u64 = REX_LOAD_U64(r31.u32 + 944);
	// ld r29,952(r31)
	r29.u64 = REX_LOAD_U64(r31.u32 + 952);
	// ld r25,960(r31)
	r25.u64 = REX_LOAD_U64(r31.u32 + 960);
	// ld r24,968(r31)
	r24.u64 = REX_LOAD_U64(r31.u32 + 968);
	// std r7,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r7.u64);
	// std r6,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r6.u64);
	// std r5,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r5.u64);
	// std r4,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r4.u64);
	// std r3,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, ctx.r3.u64);
	// std r29,8(r9)
	REX_STORE_U64(ctx.r9.u32 + 8, r29.u64);
	// std r25,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, r25.u64);
	// std r24,8(r8)
	REX_STORE_U64(ctx.r8.u32 + 8, r24.u64);
	// beq 0x822be758
	if (ctx.cr0.eq) goto loc_822BE758;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822BE740;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,912
	ctx.r4.s64 = ctx.r1.s64 + 912;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822BE758;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822BE758:
	// addi r29,r31,976
	r29.s64 = r31.s64 + 976;
	// ld r11,976(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 976);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// ld r9,984(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 984);
	// addi r24,r29,16
	r24.s64 = r29.s64 + 16;
	// ld r7,992(r31)
	ctx.r7.u64 = REX_LOAD_U64(r31.u32 + 992);
	// ld r5,1000(r31)
	ctx.r5.u64 = REX_LOAD_U64(r31.u32 + 1000);
	// addi r10,r1,912
	ctx.r10.s64 = ctx.r1.s64 + 912;
	// ld r3,1008(r31)
	ctx.r3.u64 = REX_LOAD_U64(r31.u32 + 1008);
	// addi r8,r1,928
	ctx.r8.s64 = ctx.r1.s64 + 928;
	// ld r25,1016(r31)
	r25.u64 = REX_LOAD_U64(r31.u32 + 1016);
	// addi r6,r1,944
	ctx.r6.s64 = ctx.r1.s64 + 944;
	// ld r27,1024(r31)
	r27.u64 = REX_LOAD_U64(r31.u32 + 1024);
	// addi r4,r1,960
	ctx.r4.s64 = ctx.r1.s64 + 960;
	// ld r24,1032(r31)
	r24.u64 = REX_LOAD_U64(r31.u32 + 1032);
	// std r11,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// std r7,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, ctx.r7.u64);
	// std r5,8(r8)
	REX_STORE_U64(ctx.r8.u32 + 8, ctx.r5.u64);
	// std r3,0(r6)
	REX_STORE_U64(ctx.r6.u32 + 0, ctx.r3.u64);
	// std r25,8(r6)
	REX_STORE_U64(ctx.r6.u32 + 8, r25.u64);
	// std r27,0(r4)
	REX_STORE_U64(ctx.r4.u32 + 0, r27.u64);
	// std r24,8(r4)
	REX_STORE_U64(ctx.r4.u32 + 8, r24.u64);
	// beq cr6,0x822be7e4
	if (ctx.cr6.eq) goto loc_822BE7E4;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822BE7CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,912
	ctx.r4.s64 = ctx.r1.s64 + 912;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822BE7E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822BE7E4:
	// clrlwi. r11,r26,24
	ctx.r11.u64 = r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822bff84
	if (ctx.cr0.eq) goto loc_822BFF84;
	// lbz r11,176(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 176);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x822be7fc
	if (!ctx.cr0.eq) goto loc_822BE7FC;
	// mr r30,r29
	r30.u64 = r29.u64;
loc_822BE7FC:
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r6,r11,3720
	ctx.r6.s64 = ctx.r11.s64 + 3720;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x82124eb0
	ctx.lr = 0x822BE814;
	sub_82124EB0(ctx, base);
	// addi r7,r30,16
	ctx.r7.s64 = r30.s64 + 16;
	// ld r6,8(r30)
	ctx.r6.u64 = REX_LOAD_U64(r30.u32 + 8);
	// addi r11,r1,384
	ctx.r11.s64 = ctx.r1.s64 + 384;
	// ld r5,16(r30)
	ctx.r5.u64 = REX_LOAD_U64(r30.u32 + 16);
	// addi r10,r1,400
	ctx.r10.s64 = ctx.r1.s64 + 400;
	// ld r4,24(r30)
	ctx.r4.u64 = REX_LOAD_U64(r30.u32 + 24);
	// addi r9,r1,416
	ctx.r9.s64 = ctx.r1.s64 + 416;
	// addi r8,r1,432
	ctx.r8.s64 = ctx.r1.s64 + 432;
	// lfs f8,180(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 180);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,184(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 184);
	ctx.f7.f64 = double(temp.f32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// std r6,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r6.u64);
	// stfs f31,732(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 732, temp.u32);
	// std r5,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r5.u64);
	// stfs f31,588(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 588, temp.u32);
	// std r4,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r4.u64);
	// ld r7,0(r30)
	ctx.r7.u64 = REX_LOAD_U64(r30.u32 + 0);
	// ld r29,32(r30)
	r29.u64 = REX_LOAD_U64(r30.u32 + 32);
	// ld r27,40(r30)
	r27.u64 = REX_LOAD_U64(r30.u32 + 40);
	// ld r26,48(r30)
	r26.u64 = REX_LOAD_U64(r30.u32 + 48);
	// ld r30,56(r30)
	r30.u64 = REX_LOAD_U64(r30.u32 + 56);
	// std r7,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r7.u64);
	// std r29,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, r29.u64);
	// std r27,8(r9)
	REX_STORE_U64(ctx.r9.u32 + 8, r27.u64);
	// std r26,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, r26.u64);
	// std r30,8(r8)
	REX_STORE_U64(ctx.r8.u32 + 8, r30.u64);
	// lfs f5,424(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 424);
	ctx.f5.f64 = double(temp.f32);
	// lfs f6,420(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 420);
	ctx.f6.f64 = double(temp.f32);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lfs f2,404(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 404);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,408(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 408);
	ctx.f1.f64 = double(temp.f32);
	// lfs f13,432(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 432);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,384(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 384);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,400(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 400);
	ctx.f12.f64 = double(temp.f32);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lfs f11,436(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 436);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,416(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 416);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,440(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 440);
	ctx.f9.f64 = double(temp.f32);
	// lfs f3,392(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 392);
	ctx.f3.f64 = double(temp.f32);
	// lfs f4,388(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 388);
	ctx.f4.f64 = double(temp.f32);
	// fadds f4,f3,f4
	ctx.f4.f64 = double(float(ctx.f3.f64 + ctx.f4.f64));
	// fadds f6,f6,f5
	ctx.f6.f64 = double(float(ctx.f6.f64 + ctx.f5.f64));
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// fadds f2,f1,f2
	ctx.f2.f64 = double(float(ctx.f1.f64 + ctx.f2.f64));
	// fmadds f5,f0,f8,f13
	ctx.f5.f64 = double(float(std::fma(ctx.f0.f64, ctx.f8.f64, ctx.f13.f64)));
	// fmadds f0,f0,f7,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f7.f64, ctx.f13.f64)));
	// fmadds f3,f12,f8,f11
	ctx.f3.f64 = double(float(std::fma(ctx.f12.f64, ctx.f8.f64, ctx.f11.f64)));
	// fmadds f13,f12,f7,f11
	ctx.f13.f64 = double(float(std::fma(ctx.f12.f64, ctx.f7.f64, ctx.f11.f64)));
	// fmadds f12,f10,f7,f9
	ctx.f12.f64 = double(float(std::fma(ctx.f10.f64, ctx.f7.f64, ctx.f9.f64)));
	// fmadds f8,f10,f8,f9
	ctx.f8.f64 = double(float(std::fma(ctx.f10.f64, ctx.f8.f64, ctx.f9.f64)));
	// fmuls f10,f4,f31
	ctx.f10.f64 = double(float(ctx.f4.f64 * f31.f64));
	// fmuls f9,f6,f31
	ctx.f9.f64 = double(float(ctx.f6.f64 * f31.f64));
	// fmuls f11,f2,f31
	ctx.f11.f64 = double(float(ctx.f2.f64 * f31.f64));
	// fadds f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// stfs f0,576(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 576, temp.u32);
	// fadds f0,f8,f9
	ctx.f0.f64 = double(float(ctx.f8.f64 + ctx.f9.f64));
	// stfs f0,728(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 728, temp.u32);
	// fadds f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// stfs f13,580(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 580, temp.u32);
	// fadds f7,f3,f11
	ctx.f7.f64 = double(float(ctx.f3.f64 + ctx.f11.f64));
	// stfs f7,724(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + 724, temp.u32);
	// fadds f13,f5,f10
	ctx.f13.f64 = double(float(ctx.f5.f64 + ctx.f10.f64));
	// stfs f13,720(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 720, temp.u32);
	// fadds f0,f12,f9
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f9.f64));
	// stfs f0,584(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 584, temp.u32);
	// bctrl 
	ctx.lr = 0x822BE91C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f31,736(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 736, temp.u32);
	// stfs f31,740(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 740, temp.u32);
	// addi r6,r1,736
	ctx.r6.s64 = ctx.r1.s64 + 736;
	// stfs f31,744(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 744, temp.u32);
	// addi r5,r1,576
	ctx.r5.s64 = ctx.r1.s64 + 576;
	// stfs f31,748(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 748, temp.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,720
	ctx.r4.s64 = ctx.r1.s64 + 720;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822BE948;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,384(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 384);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lfs f13,400(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 400);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lfs f12,416(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 416);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,388(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 388);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,404(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 404);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,420(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 420);
	ctx.f9.f64 = double(temp.f32);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stfs f31,828(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 828, temp.u32);
	// stfs f31,796(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 796, temp.u32);
	// stfs f0,816(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 816, temp.u32);
	// stfs f13,820(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 820, temp.u32);
	// stfs f12,824(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 824, temp.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// stfs f11,784(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 784, temp.u32);
	// stfs f10,788(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 788, temp.u32);
	// stfs f9,792(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 792, temp.u32);
	// lfs f29,188(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 188);
	f29.f64 = double(temp.f32);
	// lfs f28,192(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 192);
	f28.f64 = double(temp.f32);
	// bctrl 
	ctx.lr = 0x822BE99C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f31,752(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 752, temp.u32);
	// stfs f31,756(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 756, temp.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f31,760(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 760, temp.u32);
	// addi r10,r1,752
	ctx.r10.s64 = ctx.r1.s64 + 752;
	// stfs f31,764(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 764, temp.u32);
	// stb r11,95(r1)
	REX_STORE_U8(ctx.r1.u32 + 95, ctx.r11.u8);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,784
	ctx.r6.s64 = ctx.r1.s64 + 784;
	// fmr f4,f28
	ctx.f4.f64 = f28.f64;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// fmr f3,f29
	ctx.f3.f64 = f29.f64;
	// addi r5,r1,816
	ctx.r5.s64 = ctx.r1.s64 + 816;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// addi r4,r31,1024
	ctx.r4.s64 = r31.s64 + 1024;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// lfs f5,228(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 228);
	ctx.f5.f64 = double(temp.f32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822BE9F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x822bff84
	goto loc_822BFF84;
loc_822BE9F8:
	// addi r30,r31,1168
	r30.s64 = r31.s64 + 1168;
	// ld r11,1168(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 1168);
	// clrlwi. r27,r29,24
	r27.u64 = r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// ld r9,1176(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 1176);
	// addi r24,r30,16
	r24.s64 = r30.s64 + 16;
	// ld r7,1184(r31)
	ctx.r7.u64 = REX_LOAD_U64(r31.u32 + 1184);
	// ld r5,1192(r31)
	ctx.r5.u64 = REX_LOAD_U64(r31.u32 + 1192);
	// addi r10,r1,272
	ctx.r10.s64 = ctx.r1.s64 + 272;
	// ld r3,1200(r31)
	ctx.r3.u64 = REX_LOAD_U64(r31.u32 + 1200);
	// addi r8,r1,288
	ctx.r8.s64 = ctx.r1.s64 + 288;
	// ld r25,1208(r31)
	r25.u64 = REX_LOAD_U64(r31.u32 + 1208);
	// addi r6,r1,304
	ctx.r6.s64 = ctx.r1.s64 + 304;
	// ld r29,1216(r31)
	r29.u64 = REX_LOAD_U64(r31.u32 + 1216);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// ld r24,1224(r31)
	r24.u64 = REX_LOAD_U64(r31.u32 + 1224);
	// std r11,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// std r7,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, ctx.r7.u64);
	// std r5,8(r8)
	REX_STORE_U64(ctx.r8.u32 + 8, ctx.r5.u64);
	// std r3,0(r6)
	REX_STORE_U64(ctx.r6.u32 + 0, ctx.r3.u64);
	// std r25,8(r6)
	REX_STORE_U64(ctx.r6.u32 + 8, r25.u64);
	// std r29,0(r4)
	REX_STORE_U64(ctx.r4.u32 + 0, r29.u64);
	// std r24,8(r4)
	REX_STORE_U64(ctx.r4.u32 + 8, r24.u64);
	// beq 0x822bea84
	if (ctx.cr0.eq) goto loc_822BEA84;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822BEA6C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822BEA84;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822BEA84:
	// addi r29,r31,1232
	r29.s64 = r31.s64 + 1232;
	// ld r11,1232(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 1232);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// ld r9,1240(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 1240);
	// addi r24,r29,16
	r24.s64 = r29.s64 + 16;
	// ld r7,1248(r31)
	ctx.r7.u64 = REX_LOAD_U64(r31.u32 + 1248);
	// ld r5,1256(r31)
	ctx.r5.u64 = REX_LOAD_U64(r31.u32 + 1256);
	// addi r10,r1,272
	ctx.r10.s64 = ctx.r1.s64 + 272;
	// ld r3,1264(r31)
	ctx.r3.u64 = REX_LOAD_U64(r31.u32 + 1264);
	// addi r8,r1,288
	ctx.r8.s64 = ctx.r1.s64 + 288;
	// ld r25,1272(r31)
	r25.u64 = REX_LOAD_U64(r31.u32 + 1272);
	// addi r6,r1,304
	ctx.r6.s64 = ctx.r1.s64 + 304;
	// ld r27,1280(r31)
	r27.u64 = REX_LOAD_U64(r31.u32 + 1280);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// ld r24,1288(r31)
	r24.u64 = REX_LOAD_U64(r31.u32 + 1288);
	// std r11,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// std r7,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, ctx.r7.u64);
	// std r5,8(r8)
	REX_STORE_U64(ctx.r8.u32 + 8, ctx.r5.u64);
	// std r3,0(r6)
	REX_STORE_U64(ctx.r6.u32 + 0, ctx.r3.u64);
	// std r25,8(r6)
	REX_STORE_U64(ctx.r6.u32 + 8, r25.u64);
	// std r27,0(r4)
	REX_STORE_U64(ctx.r4.u32 + 0, r27.u64);
	// std r24,8(r4)
	REX_STORE_U64(ctx.r4.u32 + 8, r24.u64);
	// beq cr6,0x822beb10
	if (ctx.cr6.eq) goto loc_822BEB10;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822BEAF8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822BEB10;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822BEB10:
	// clrlwi. r11,r26,24
	ctx.r11.u64 = r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822bff84
	if (ctx.cr0.eq) goto loc_822BFF84;
	// ld r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U64(r30.u32 + 0);
	// addi r10,r1,272
	ctx.r10.s64 = ctx.r1.s64 + 272;
	// ld r9,16(r30)
	ctx.r9.u64 = REX_LOAD_U64(r30.u32 + 16);
	// addi r8,r1,288
	ctx.r8.s64 = ctx.r1.s64 + 288;
	// ld r7,24(r30)
	ctx.r7.u64 = REX_LOAD_U64(r30.u32 + 24);
	// addi r6,r1,304
	ctx.r6.s64 = ctx.r1.s64 + 304;
	// ld r5,32(r30)
	ctx.r5.u64 = REX_LOAD_U64(r30.u32 + 32);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// ld r27,40(r30)
	r27.u64 = REX_LOAD_U64(r30.u32 + 40);
	// stfs f31,716(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 716, temp.u32);
	// ld r25,48(r30)
	r25.u64 = REX_LOAD_U64(r30.u32 + 48);
	// stfs f31,268(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 268, temp.u32);
	// ld r24,56(r30)
	r24.u64 = REX_LOAD_U64(r30.u32 + 56);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// ld r23,8(r30)
	r23.u64 = REX_LOAD_U64(r30.u32 + 8);
	// addi r26,r30,16
	r26.s64 = r30.s64 + 16;
	// std r11,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// lfs f29,1024(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 1024);
	f29.f64 = double(temp.f32);
	// std r9,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, ctx.r9.u64);
	// lfs f28,1028(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 1028);
	f28.f64 = double(temp.f32);
	// std r7,8(r8)
	REX_STORE_U64(ctx.r8.u32 + 8, ctx.r7.u64);
	// lfs f27,1088(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 1088);
	f27.f64 = double(temp.f32);
	// std r5,0(r6)
	REX_STORE_U64(ctx.r6.u32 + 0, ctx.r5.u64);
	// lfs f26,1092(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 1092);
	f26.f64 = double(temp.f32);
	// std r27,8(r6)
	REX_STORE_U64(ctx.r6.u32 + 8, r27.u64);
	// addi r26,r31,1280
	r26.s64 = r31.s64 + 1280;
	// std r25,0(r4)
	REX_STORE_U64(ctx.r4.u32 + 0, r25.u64);
	// std r24,8(r4)
	REX_STORE_U64(ctx.r4.u32 + 8, r24.u64);
	// std r23,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, r23.u64);
	// lfs f0,280(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 280);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,704(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 704, temp.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lfs f13,296(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 296);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lfs f12,288(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 288);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,312(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 312);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,304(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 304);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,272(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 272);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,256(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// stfs f11,712(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 712, temp.u32);
	// stfs f13,708(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 708, temp.u32);
	// stfs f12,260(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// stfs f10,264(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 264, temp.u32);
	// bctrl 
	ctx.lr = 0x822BEBCC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f31,488(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 488, temp.u32);
	// stfs f31,492(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 492, temp.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stfs f31,480(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 480, temp.u32);
	// addi r10,r1,480
	ctx.r10.s64 = ctx.r1.s64 + 480;
	// addi r27,r11,16592
	r27.s64 = ctx.r11.s64 + 16592;
	// stfs f31,484(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 484, temp.u32);
	// fmr f2,f29
	ctx.f2.f64 = f29.f64;
	// addi r6,r1,256
	ctx.r6.s64 = ctx.r1.s64 + 256;
	// addi r5,r1,704
	ctx.r5.s64 = ctx.r1.s64 + 704;
	// fmr f5,f26
	ctx.f5.f64 = f26.f64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// stw r10,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// fmr f4,f27
	ctx.f4.f64 = f27.f64;
	// lfs f0,1048(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 1048);
	ctx.f0.f64 = double(temp.f32);
	// fmr f3,f28
	ctx.f3.f64 = f28.f64;
	// lfs f29,228(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 228);
	f29.f64 = double(temp.f32);
	// fmuls f1,f30,f0
	ctx.f1.f64 = double(float(f30.f64 * ctx.f0.f64));
	// fmr f6,f29
	ctx.f6.f64 = f29.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822BEC28;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// lfs f13,276(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 276);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,176(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// addi r10,r1,256
	ctx.r10.s64 = ctx.r1.s64 + 256;
	// lfs f12,292(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 292);
	ctx.f12.f64 = double(temp.f32);
	// stfs f31,188(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f12,180(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// lfs f13,308(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 308);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,184(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// ld r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// lfs f27,1300(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 1300);
	f27.f64 = double(temp.f32);
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// lfs f28,1304(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 1304);
	f28.f64 = double(temp.f32);
	// std r11,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// fmr f1,f27
	ctx.f1.f64 = f27.f64;
	// std r9,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// bl 0x826a15c0
	ctx.lr = 0x822BEC6C;
	sub_826A15C0(ctx, base);
	// frsp f26,f1
	ctx.fpscr.disableFlushMode();
	f26.f64 = double(float(ctx.f1.f64));
	// fmr f1,f27
	ctx.f1.f64 = f27.f64;
	// bl 0x826a14e0
	ctx.lr = 0x822BEC78;
	sub_826A14E0(ctx, base);
	// frsp f25,f1
	ctx.fpscr.disableFlushMode();
	f25.f64 = double(float(ctx.f1.f64));
	// fmr f1,f28
	ctx.f1.f64 = f28.f64;
	// bl 0x826a15c0
	ctx.lr = 0x822BEC84;
	sub_826A15C0(ctx, base);
	// frsp f24,f1
	ctx.fpscr.disableFlushMode();
	f24.f64 = double(float(ctx.f1.f64));
	// fmr f1,f28
	ctx.f1.f64 = f28.f64;
	// bl 0x826a14e0
	ctx.lr = 0x822BEC90;
	sub_826A14E0(ctx, base);
	// ld r11,24(r29)
	ctx.r11.u64 = REX_LOAD_U64(r29.u32 + 24);
	// lfs f0,256(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 256);
	ctx.f0.f64 = double(temp.f32);
	// ld r9,32(r29)
	ctx.r9.u64 = REX_LOAD_U64(r29.u32 + 32);
	// addi r10,r1,288
	ctx.r10.s64 = ctx.r1.s64 + 288;
	// ld r7,48(r29)
	ctx.r7.u64 = REX_LOAD_U64(r29.u32 + 48);
	// addi r8,r1,304
	ctx.r8.s64 = ctx.r1.s64 + 304;
	// ld r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U64(r29.u32 + 0);
	// addi r6,r1,320
	ctx.r6.s64 = ctx.r1.s64 + 320;
	// ld r25,8(r29)
	r25.u64 = REX_LOAD_U64(r29.u32 + 8);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// ld r24,16(r29)
	r24.u64 = REX_LOAD_U64(r29.u32 + 16);
	// frsp f11,f1
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// ld r23,40(r29)
	r23.u64 = REX_LOAD_U64(r29.u32 + 40);
	// fmuls f10,f0,f24
	ctx.f10.f64 = double(float(ctx.f0.f64 * f24.f64));
	// std r11,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// lfs f12,260(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 260);
	ctx.f12.f64 = double(temp.f32);
	// std r9,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, ctx.r9.u64);
	// lfs f13,264(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 264);
	ctx.f13.f64 = double(temp.f32);
	// std r7,0(r6)
	REX_STORE_U64(ctx.r6.u32 + 0, ctx.r7.u64);
	// fmuls f9,f13,f25
	ctx.f9.f64 = double(float(ctx.f13.f64 * f25.f64));
	// std r3,0(r4)
	REX_STORE_U64(ctx.r4.u32 + 0, ctx.r3.u64);
	// fmuls f13,f13,f26
	ctx.f13.f64 = double(float(ctx.f13.f64 * f26.f64));
	// std r25,8(r4)
	REX_STORE_U64(ctx.r4.u32 + 8, r25.u64);
	// lfs f28,960(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 960);
	f28.f64 = double(temp.f32);
	// std r24,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, r24.u64);
	// lfs f27,964(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 964);
	f27.f64 = double(temp.f32);
	// std r23,8(r8)
	REX_STORE_U64(ctx.r8.u32 + 8, r23.u64);
	// stfs f31,380(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 380, temp.u32);
	// ld r5,56(r29)
	ctx.r5.u64 = REX_LOAD_U64(r29.u32 + 56);
	// addi r11,r29,16
	ctx.r11.s64 = r29.s64 + 16;
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fmadds f11,f12,f11,f10
	ctx.f11.f64 = double(float(std::fma(ctx.f12.f64, ctx.f11.f64, ctx.f10.f64)));
	// fcmpu cr6,f28,f27
	ctx.cr6.compare(f28.f64, f27.f64);
	// std r5,8(r6)
	REX_STORE_U64(ctx.r6.u32 + 8, ctx.r5.u64);
	// fmsubs f0,f12,f24,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, f24.f64, -ctx.f0.f64)));
	// stfs f0,548(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 548, temp.u32);
	// fmsubs f0,f26,f11,f9
	ctx.f0.f64 = double(float(std::fma(f26.f64, ctx.f11.f64, -ctx.f9.f64)));
	// stfs f0,544(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 544, temp.u32);
	// fmadds f0,f25,f11,f13
	ctx.f0.f64 = double(float(std::fma(f25.f64, ctx.f11.f64, ctx.f13.f64)));
	// stfs f0,552(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 552, temp.u32);
	// lfs f13,288(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 288);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,272(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 272);
	ctx.f0.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f12,304(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 304);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,368(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 368, temp.u32);
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fneg f0,f13
	ctx.f0.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f0,372(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 372, temp.u32);
	// stfs f12,376(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 376, temp.u32);
	// ble cr6,0x822bedc0
	if (!ctx.cr6.gt) goto loc_822BEDC0;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822BED6C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r1,512
	ctx.r11.s64 = ctx.r1.s64 + 512;
	// stfs f31,512(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 512, temp.u32);
	// stfs f31,516(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 516, temp.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stfs f31,520(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 520, temp.u32);
	// stfs f31,524(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 524, temp.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r6,r1,544
	ctx.r6.s64 = ctx.r1.s64 + 544;
	// lfs f4,288(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 288);
	ctx.f4.f64 = double(temp.f32);
	// addi r5,r1,368
	ctx.r5.s64 = ctx.r1.s64 + 368;
	// lfs f3,916(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 916);
	ctx.f3.f64 = double(temp.f32);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// stb r10,95(r1)
	REX_STORE_U8(ctx.r1.u32 + 95, ctx.r10.u8);
	// fmr f5,f29
	ctx.f5.f64 = f29.f64;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822BEDBC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x822bee2c
	goto loc_822BEE2C;
loc_822BEDC0:
	// fcmpu cr6,f28,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f28.f64, f27.f64);
	// bge cr6,0x822bee2c
	if (!ctx.cr6.lt) goto loc_822BEE2C;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822BEDDC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f31,768(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 768, temp.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f31,772(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 772, temp.u32);
	// addi r10,r1,768
	ctx.r10.s64 = ctx.r1.s64 + 768;
	// stb r11,95(r1)
	REX_STORE_U8(ctx.r1.u32 + 95, ctx.r11.u8);
	// stfs f31,776(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 776, temp.u32);
	// stfs f31,780(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 780, temp.u32);
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,544
	ctx.r6.s64 = ctx.r1.s64 + 544;
	// fmr f5,f29
	ctx.f5.f64 = f29.f64;
	// addi r5,r1,368
	ctx.r5.s64 = ctx.r1.s64 + 368;
	// fmr f4,f27
	ctx.f4.f64 = f27.f64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// fmr f3,f28
	ctx.f3.f64 = f28.f64;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822BEE2C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822BEE2C:
	// addi r22,r31,752
	r22.s64 = r31.s64 + 752;
	// ld r11,752(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 752);
	// ld r9,768(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 768);
	// addi r10,r1,896
	ctx.r10.s64 = ctx.r1.s64 + 896;
	// ld r7,0(r30)
	ctx.r7.u64 = REX_LOAD_U64(r30.u32 + 0);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// ld r5,8(r30)
	ctx.r5.u64 = REX_LOAD_U64(r30.u32 + 8);
	// addi r6,r1,272
	ctx.r6.s64 = ctx.r1.s64 + 272;
	// ld r29,16(r30)
	r29.u64 = REX_LOAD_U64(r30.u32 + 16);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// ld r26,24(r30)
	r26.u64 = REX_LOAD_U64(r30.u32 + 24);
	// addi r27,r1,304
	r27.s64 = ctx.r1.s64 + 304;
	// ld r24,32(r30)
	r24.u64 = REX_LOAD_U64(r30.u32 + 32);
	// addi r25,r1,320
	r25.s64 = ctx.r1.s64 + 320;
	// ld r23,40(r30)
	r23.u64 = REX_LOAD_U64(r30.u32 + 40);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// ld r22,48(r30)
	r22.u64 = REX_LOAD_U64(r30.u32 + 48);
	// ld r21,760(r31)
	r21.u64 = REX_LOAD_U64(r31.u32 + 760);
	// ld r30,56(r30)
	r30.u64 = REX_LOAD_U64(r30.u32 + 56);
	// ld r31,776(r31)
	r31.u64 = REX_LOAD_U64(r31.u32 + 776);
	// std r11,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, ctx.r9.u64);
	// std r7,0(r6)
	REX_STORE_U64(ctx.r6.u32 + 0, ctx.r7.u64);
	// std r5,8(r6)
	REX_STORE_U64(ctx.r6.u32 + 8, ctx.r5.u64);
	// std r29,0(r4)
	REX_STORE_U64(ctx.r4.u32 + 0, r29.u64);
	// std r26,8(r4)
	REX_STORE_U64(ctx.r4.u32 + 8, r26.u64);
	// std r24,0(r27)
	REX_STORE_U64(r27.u32 + 0, r24.u64);
	// std r23,8(r27)
	REX_STORE_U64(r27.u32 + 8, r23.u64);
	// std r22,0(r25)
	REX_STORE_U64(r25.u32 + 0, r22.u64);
	// std r30,8(r25)
	REX_STORE_U64(r25.u32 + 8, r30.u64);
	// std r21,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, r21.u64);
	// std r31,8(r8)
	REX_STORE_U64(ctx.r8.u32 + 8, r31.u64);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822BEEBC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f31,448(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 448, temp.u32);
	// stfs f31,452(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 452, temp.u32);
	// addi r7,r1,448
	ctx.r7.s64 = ctx.r1.s64 + 448;
	// stfs f31,460(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 460, temp.u32);
	// addi r6,r1,272
	ctx.r6.s64 = ctx.r1.s64 + 272;
	// stfs f31,456(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 456, temp.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,896
	ctx.r4.s64 = ctx.r1.s64 + 896;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822BEEEC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x822bff84
	goto loc_822BFF84;
loc_822BEEF0:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lfs f0,388(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 388);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,360(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 360);
	ctx.f13.f64 = double(temp.f32);
	// addi r30,r31,336
	r30.s64 = r31.s64 + 336;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lfs f12,356(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 356);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,352(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 352);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,384(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 384);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,344(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 344);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,340(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 340);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f7,f0
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// lfs f4,36(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f0,f6
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f6.f64));
	// fmuls f0,f0,f4
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f4.f64));
	// lfs f28,32(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32);
	f28.f64 = double(temp.f32);
	// fmuls f29,f13,f6
	f29.f64 = double(float(ctx.f13.f64 * ctx.f6.f64));
	// lfs f1,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f27,f12,f6
	f27.f64 = double(float(ctx.f12.f64 * ctx.f6.f64));
	// lfs f2,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f6,f11,f6
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f6.f64));
	// lfs f21,336(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 336);
	f21.f64 = double(temp.f32);
	// fmuls f25,f7,f13
	f25.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// lfs f22,40(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 40);
	f22.f64 = double(temp.f32);
	// fmuls f23,f7,f12
	f23.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// lfs f20,392(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 392);
	f20.f64 = double(temp.f32);
	// fmuls f7,f7,f11
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// lfs f24,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	f24.f64 = double(temp.f32);
	// fmuls f13,f13,f4
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f4.f64));
	// lfs f19,376(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 376);
	f19.f64 = double(temp.f32);
	// fmuls f11,f11,f4
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f4.f64));
	// lfs f26,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	f26.f64 = double(temp.f32);
	// fmadds f5,f2,f10,f5
	ctx.f5.f64 = double(float(std::fma(ctx.f2.f64, ctx.f10.f64, ctx.f5.f64)));
	// lfs f18,372(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 372);
	f18.f64 = double(temp.f32);
	// fmadds f0,f10,f28,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f10.f64, f28.f64, ctx.f0.f64)));
	// lfs f16,56(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 56);
	f16.f64 = double(temp.f32);
	// fmadds f29,f9,f1,f29
	f29.f64 = double(float(std::fma(ctx.f9.f64, ctx.f1.f64, f29.f64)));
	// lfs f17,48(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 48);
	f17.f64 = double(temp.f32);
	// fmadds f27,f8,f1,f27
	f27.f64 = double(float(std::fma(ctx.f8.f64, ctx.f1.f64, f27.f64)));
	// stfs f31,188(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// fmadds f3,f10,f1,f3
	ctx.f3.f64 = double(float(std::fma(ctx.f10.f64, ctx.f1.f64, ctx.f3.f64)));
	// lfs f10,368(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 368);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f12,f12,f4
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f4.f64));
	// lfs f4,52(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f6,f21,f1,f6
	ctx.f6.f64 = double(float(std::fma(f21.f64, ctx.f1.f64, ctx.f6.f64)));
	// stfs f31,140(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// fmadds f1,f2,f9,f25
	ctx.f1.f64 = double(float(std::fma(ctx.f2.f64, ctx.f9.f64, f25.f64)));
	// stfs f31,156(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// fmadds f25,f2,f8,f23
	f25.f64 = double(float(std::fma(ctx.f2.f64, ctx.f8.f64, f23.f64)));
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// fmadds f13,f9,f28,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f9.f64, f28.f64, ctx.f13.f64)));
	// fmadds f7,f2,f21,f7
	ctx.f7.f64 = double(float(std::fma(ctx.f2.f64, f21.f64, ctx.f7.f64)));
	// fmadds f0,f20,f22,f0
	ctx.f0.f64 = double(float(std::fma(f20.f64, f22.f64, ctx.f0.f64)));
	// fmadds f9,f19,f24,f29
	ctx.f9.f64 = double(float(std::fma(f19.f64, f24.f64, f29.f64)));
	// stfs f9,152(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fmadds f11,f21,f28,f11
	ctx.f11.f64 = double(float(std::fma(f21.f64, f28.f64, ctx.f11.f64)));
	// fmadds f5,f26,f20,f5
	ctx.f5.f64 = double(float(std::fma(f26.f64, f20.f64, ctx.f5.f64)));
	// fmadds f9,f18,f24,f27
	ctx.f9.f64 = double(float(std::fma(f18.f64, f24.f64, f27.f64)));
	// stfs f9,148(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fmadds f3,f20,f24,f3
	ctx.f3.f64 = double(float(std::fma(f20.f64, f24.f64, ctx.f3.f64)));
	// fmadds f12,f8,f28,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f8.f64, f28.f64, ctx.f12.f64)));
	// fmadds f9,f10,f24,f6
	ctx.f9.f64 = double(float(std::fma(ctx.f10.f64, f24.f64, ctx.f6.f64)));
	// stfs f9,144(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fmadds f9,f26,f19,f1
	ctx.f9.f64 = double(float(std::fma(f26.f64, f19.f64, ctx.f1.f64)));
	// stfs f9,136(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fmadds f9,f26,f18,f25
	ctx.f9.f64 = double(float(std::fma(f26.f64, f18.f64, f25.f64)));
	// stfs f9,132(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fadds f0,f0,f16
	ctx.f0.f64 = double(float(ctx.f0.f64 + f16.f64));
	// stfs f0,184(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// fmadds f9,f26,f10,f7
	ctx.f9.f64 = double(float(std::fma(f26.f64, ctx.f10.f64, ctx.f7.f64)));
	// stfs f9,128(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmadds f0,f10,f22,f11
	ctx.f0.f64 = double(float(std::fma(ctx.f10.f64, f22.f64, ctx.f11.f64)));
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fadds f9,f5,f17
	ctx.f9.f64 = double(float(ctx.f5.f64 + f17.f64));
	// stfs f9,176(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// fmadds f0,f19,f22,f13
	ctx.f0.f64 = double(float(std::fma(f19.f64, f22.f64, ctx.f13.f64)));
	// fadds f9,f3,f4
	ctx.f9.f64 = double(float(ctx.f3.f64 + ctx.f4.f64));
	// stfs f9,180(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// fmadds f13,f18,f22,f12
	ctx.f13.f64 = double(float(std::fma(f18.f64, f22.f64, ctx.f12.f64)));
	// stfs f13,164(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// stfs f31,172(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r7,r1,192
	ctx.r7.s64 = ctx.r1.s64 + 192;
	// ld r3,0(r8)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// ld r8,8(r8)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r8.u32 + 8);
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// clrlwi. r27,r29,24
	r27.u64 = r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// std r3,0(r4)
	REX_STORE_U64(ctx.r4.u32 + 0, ctx.r3.u64);
	// std r8,8(r4)
	REX_STORE_U64(ctx.r4.u32 + 8, ctx.r8.u64);
	// ld r8,8(r9)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// ld r4,8(r11)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// ld r3,0(r10)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// ld r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// ld r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// ld r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// std r8,8(r7)
	REX_STORE_U64(ctx.r7.u32 + 8, ctx.r8.u64);
	// std r4,8(r6)
	REX_STORE_U64(ctx.r6.u32 + 8, ctx.r4.u64);
	// std r9,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r9.u64);
	// std r11,0(r6)
	REX_STORE_U64(ctx.r6.u32 + 0, ctx.r11.u64);
	// std r3,0(r5)
	REX_STORE_U64(ctx.r5.u32 + 0, ctx.r3.u64);
	// std r10,8(r5)
	REX_STORE_U64(ctx.r5.u32 + 8, ctx.r10.u64);
	// beq 0x822bf0cc
	if (ctx.cr0.eq) goto loc_822BF0CC;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822BF0B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822BF0CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822BF0CC:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lfs f0,456(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 456);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,452(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 452);
	ctx.f13.f64 = double(temp.f32);
	// addi r29,r31,400
	r29.s64 = r31.s64 + 400;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lfs f12,424(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 424);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,420(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 420);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,416(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 416);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,448(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 448);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,408(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 408);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f0,f7
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f7.f64));
	// lfs f4,36(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f13,f6
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f6.f64));
	// fmuls f2,f13,f4
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f4.f64));
	// lfs f1,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f26,f12,f6
	f26.f64 = double(float(ctx.f12.f64 * ctx.f6.f64));
	// lfs f29,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	f29.f64 = double(temp.f32);
	// fmuls f25,f11,f6
	f25.f64 = double(float(ctx.f11.f64 * ctx.f6.f64));
	// lfs f27,32(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32);
	f27.f64 = double(temp.f32);
	// fmuls f6,f10,f6
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f6.f64));
	// lfs f19,404(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 404);
	f19.f64 = double(temp.f32);
	// fmuls f28,f12,f1
	f28.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// lfs f24,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	f24.f64 = double(temp.f32);
	// fmuls f20,f10,f1
	f20.f64 = double(float(ctx.f10.f64 * ctx.f1.f64));
	// lfs f18,400(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 400);
	f18.f64 = double(temp.f32);
	// fmuls f22,f11,f1
	f22.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
	// lfs f23,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	f23.f64 = double(temp.f32);
	// fmuls f10,f10,f4
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f4.f64));
	// lfs f21,40(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 40);
	f21.f64 = double(temp.f32);
	// fmadds f13,f13,f1,f5
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f1.f64, ctx.f5.f64)));
	// lfs f5,440(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 440);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f3,f9,f29,f3
	ctx.f3.f64 = double(float(std::fma(ctx.f9.f64, f29.f64, ctx.f3.f64)));
	// lfs f1,436(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 436);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f2,f9,f27,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f9.f64, f27.f64, ctx.f2.f64)));
	// lfs f17,432(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 432);
	f17.f64 = double(temp.f32);
	// fmuls f12,f12,f4
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f4.f64));
	// lfs f15,56(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 56);
	f15.f64 = double(temp.f32);
	// fmadds f26,f8,f29,f26
	f26.f64 = double(float(std::fma(ctx.f8.f64, f29.f64, f26.f64)));
	// lfs f16,48(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 48);
	f16.f64 = double(temp.f32);
	// fmuls f11,f11,f4
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f4.f64));
	// lfs f4,52(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f25,f19,f29,f25
	f25.f64 = double(float(std::fma(f19.f64, f29.f64, f25.f64)));
	// stfs f31,188(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// fmadds f6,f18,f29,f6
	ctx.f6.f64 = double(float(std::fma(f18.f64, f29.f64, ctx.f6.f64)));
	// stfs f31,140(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// fmadds f29,f8,f24,f28
	f29.f64 = double(float(std::fma(ctx.f8.f64, f24.f64, f28.f64)));
	// stfs f31,156(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// fmadds f28,f19,f24,f22
	f28.f64 = double(float(std::fma(f19.f64, f24.f64, f22.f64)));
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// fmadds f13,f9,f24,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f9.f64, f24.f64, ctx.f13.f64)));
	// fmadds f9,f0,f23,f3
	ctx.f9.f64 = double(float(std::fma(ctx.f0.f64, f23.f64, ctx.f3.f64)));
	// fmadds f0,f0,f21,f2
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f21.f64, ctx.f2.f64)));
	// fmadds f10,f18,f27,f10
	ctx.f10.f64 = double(float(std::fma(f18.f64, f27.f64, ctx.f10.f64)));
	// fmadds f12,f8,f27,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f8.f64, f27.f64, ctx.f12.f64)));
	// fmadds f22,f18,f24,f20
	f22.f64 = double(float(std::fma(f18.f64, f24.f64, f20.f64)));
	// fmadds f8,f5,f23,f26
	ctx.f8.f64 = double(float(std::fma(ctx.f5.f64, f23.f64, f26.f64)));
	// stfs f8,152(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fmadds f11,f19,f27,f11
	ctx.f11.f64 = double(float(std::fma(f19.f64, f27.f64, ctx.f11.f64)));
	// fmadds f8,f1,f23,f25
	ctx.f8.f64 = double(float(std::fma(ctx.f1.f64, f23.f64, f25.f64)));
	// stfs f8,148(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fmadds f8,f17,f23,f6
	ctx.f8.f64 = double(float(std::fma(f17.f64, f23.f64, ctx.f6.f64)));
	// stfs f8,144(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fmadds f8,f5,f7,f29
	ctx.f8.f64 = double(float(std::fma(ctx.f5.f64, ctx.f7.f64, f29.f64)));
	// stfs f8,136(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fadds f13,f13,f16
	ctx.f13.f64 = double(float(ctx.f13.f64 + f16.f64));
	// stfs f13,176(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// fadds f0,f0,f15
	ctx.f0.f64 = double(float(ctx.f0.f64 + f15.f64));
	// stfs f0,184(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// fmadds f8,f1,f7,f28
	ctx.f8.f64 = double(float(std::fma(ctx.f1.f64, ctx.f7.f64, f28.f64)));
	// stfs f8,132(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fmadds f0,f17,f21,f10
	ctx.f0.f64 = double(float(std::fma(f17.f64, f21.f64, ctx.f10.f64)));
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fadds f13,f9,f4
	ctx.f13.f64 = double(float(ctx.f9.f64 + ctx.f4.f64));
	// stfs f13,180(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// fmadds f8,f17,f7,f22
	ctx.f8.f64 = double(float(std::fma(f17.f64, ctx.f7.f64, f22.f64)));
	// stfs f8,128(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmadds f0,f5,f21,f12
	ctx.f0.f64 = double(float(std::fma(ctx.f5.f64, f21.f64, ctx.f12.f64)));
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// fmadds f13,f1,f21,f11
	ctx.f13.f64 = double(float(std::fma(ctx.f1.f64, f21.f64, ctx.f11.f64)));
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// stfs f31,172(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// stfs f13,164(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// addi r7,r1,192
	ctx.r7.s64 = ctx.r1.s64 + 192;
	// ld r3,0(r8)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// ld r8,8(r8)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r8.u32 + 8);
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// std r3,0(r4)
	REX_STORE_U64(ctx.r4.u32 + 0, ctx.r3.u64);
	// std r8,8(r4)
	REX_STORE_U64(ctx.r4.u32 + 8, ctx.r8.u64);
	// ld r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// ld r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// ld r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// std r8,0(r6)
	REX_STORE_U64(ctx.r6.u32 + 0, ctx.r8.u64);
	// ld r3,0(r9)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// ld r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// std r4,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r4.u64);
	// std r11,8(r7)
	REX_STORE_U64(ctx.r7.u32 + 8, ctx.r11.u64);
	// std r10,8(r6)
	REX_STORE_U64(ctx.r6.u32 + 8, ctx.r10.u64);
	// std r3,0(r5)
	REX_STORE_U64(ctx.r5.u32 + 0, ctx.r3.u64);
	// std r9,8(r5)
	REX_STORE_U64(ctx.r5.u32 + 8, ctx.r9.u64);
	// beq cr6,0x822bf2a8
	if (ctx.cr6.eq) goto loc_822BF2A8;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822BF290;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822BF2A8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822BF2A8:
	// clrlwi. r11,r26,24
	ctx.r11.u64 = r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822bff84
	if (ctx.cr0.eq) goto loc_822BFF84;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r26,r11,16592
	r26.s64 = ctx.r11.s64 + 16592;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// lfs f1,1356(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 1356);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822c1680
	ctx.lr = 0x822BF2CC;
	sub_822C1680(ctx, base);
	// lfs f0,360(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 360);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// lfs f11,200(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f11.f64 = double(temp.f32);
	// addi r10,r1,352
	ctx.r10.s64 = ctx.r1.s64 + 352;
	// lfs f13,352(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 352);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// lfs f10,208(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f10.f64 = double(temp.f32);
	// li r27,0
	r27.s64 = 0;
	// lfs f9,224(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 224);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f9,f9,f13
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// lfs f12,356(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 356);
	ctx.f12.f64 = double(temp.f32);
	// lfs f8,196(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,212(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 212);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,228(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 228);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,192(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,216(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 216);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,232(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 232);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f11,f8,f12,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f8.f64, ctx.f12.f64, ctx.f11.f64)));
	// lfs f2,240(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 240);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,244(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 244);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f10,f7,f12,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f7.f64, ctx.f12.f64, ctx.f10.f64)));
	// stfs f31,188(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// fmadds f12,f6,f12,f9
	ctx.f12.f64 = double(float(std::fma(ctx.f6.f64, ctx.f12.f64, ctx.f9.f64)));
	// lfs f29,1360(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 1360);
	f29.f64 = double(temp.f32);
	// stfs f31,124(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lfs f8,248(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 248);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f13,f5,f13,f11
	ctx.f13.f64 = double(float(std::fma(ctx.f5.f64, ctx.f13.f64, ctx.f11.f64)));
	// fmadds f11,f0,f4,f10
	ctx.f11.f64 = double(float(std::fma(ctx.f0.f64, ctx.f4.f64, ctx.f10.f64)));
	// fmadds f0,f0,f3,f12
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f3.f64, ctx.f12.f64)));
	// fadds f13,f13,f2
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f2.f64));
	// stfs f13,176(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// fadds f13,f11,f1
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f1.f64));
	// stfs f13,180(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// fadds f0,f0,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f8.f64));
	// stfs f0,184(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// ld r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// std r11,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// std r9,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
loc_822BF36C:
	// extsw r11,r27
	ctx.r11.s64 = r27.s32;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// std r11,176(r1)
	REX_STORE_U64(ctx.r1.u32 + 176, ctx.r11.u64);
	// lfd f0,176(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 176);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f1,f0,f29
	ctx.f1.f64 = double(float(ctx.f0.f64 * f29.f64));
	// bl 0x822c1680
	ctx.lr = 0x822BF394;
	sub_822C1680(ctx, base);
	// lfs f0,344(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 344);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,0(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lfs f11,200(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lfs f13,336(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 336);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// lfs f10,208(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f10.f64 = double(temp.f32);
	// addi r10,r1,336
	ctx.r10.s64 = ctx.r1.s64 + 336;
	// lfs f9,224(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 224);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f9,f9,f13
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// lfs f12,340(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 340);
	ctx.f12.f64 = double(temp.f32);
	// lfs f8,196(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f8.f64 = double(temp.f32);
	// lwz r9,12(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// lfs f7,212(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 212);
	ctx.f7.f64 = double(temp.f32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lfs f6,228(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 228);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,192(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,216(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 216);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,232(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 232);
	ctx.f3.f64 = double(temp.f32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// fmadds f11,f8,f12,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f8.f64, ctx.f12.f64, ctx.f11.f64)));
	// lfs f2,240(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 240);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,244(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 244);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f10,f7,f12,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f7.f64, ctx.f12.f64, ctx.f10.f64)));
	// fmadds f12,f6,f12,f9
	ctx.f12.f64 = double(float(std::fma(ctx.f6.f64, ctx.f12.f64, ctx.f9.f64)));
	// lfs f8,248(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 248);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f13,f5,f13,f11
	ctx.f13.f64 = double(float(std::fma(ctx.f5.f64, ctx.f13.f64, ctx.f11.f64)));
	// fmadds f11,f0,f4,f10
	ctx.f11.f64 = double(float(std::fma(ctx.f0.f64, ctx.f4.f64, ctx.f10.f64)));
	// fmadds f0,f0,f3,f12
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f3.f64, ctx.f12.f64)));
	// fadds f13,f13,f2
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f2.f64));
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fadds f13,f11,f1
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f1.f64));
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fadds f0,f0,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f8.f64));
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// ld r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// std r11,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// std r9,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// bctrl 
	ctx.lr = 0x822BF438;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f31,596(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 596, temp.u32);
	// stfs f31,600(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 600, temp.u32);
	// addi r6,r1,592
	ctx.r6.s64 = ctx.r1.s64 + 592;
	// stfs f31,604(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 604, temp.u32);
	// addi r5,r1,336
	ctx.r5.s64 = ctx.r1.s64 + 336;
	// stfs f31,592(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 592, temp.u32);
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822BF464;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// srawi r11,r27,2
	ctx.xer.ca = (r27.s32 < 0) & ((r27.u32 & 0x3) != 0);
	ctx.r11.s64 = r27.s32 >> 2;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf. r11,r11,r27
	ctx.r11.u64 = r27.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822bf4b8
	if (!ctx.cr0.eq) goto loc_822BF4B8;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822BF48C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f31,688(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 688, temp.u32);
	// addi r6,r1,688
	ctx.r6.s64 = ctx.r1.s64 + 688;
	// stfs f31,692(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 692, temp.u32);
	// addi r5,r1,336
	ctx.r5.s64 = ctx.r1.s64 + 336;
	// stfs f31,696(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 696, temp.u32);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// stfs f31,700(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 700, temp.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822BF4B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822BF4B8:
	// addi r11,r1,336
	ctx.r11.s64 = ctx.r1.s64 + 336;
	// addi r10,r1,352
	ctx.r10.s64 = ctx.r1.s64 + 352;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// cmpwi cr6,r27,32
	ctx.cr6.compare<int32_t>(r27.s32, 32, ctx.xer);
	// ld r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// std r9,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r11,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// blt cr6,0x822bf36c
	if (ctx.cr6.lt) goto loc_822BF36C;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lfs f29,488(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 488);
	f29.f64 = double(temp.f32);
	// lfs f28,548(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 548);
	f28.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f0,352(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 352);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bgt cr6,0x822bf4fc
	if (ctx.cr6.gt) goto loc_822BF4FC;
	// li r10,0
	ctx.r10.s64 = 0;
loc_822BF4FC:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822bf688
	if (ctx.cr0.eq) goto loc_822BF688;
	// lfs f0,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// lfs f11,52(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f13,36(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,52(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f8,f11,f13
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// lfs f4,20(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 20);
	ctx.f4.f64 = double(temp.f32);
	// lfs f5,24(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 24);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f25,f4,f13
	f25.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// lfs f2,16(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f4,f12
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f12.f64));
	// fmuls f22,f5,f0
	f22.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// lfs f9,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f4,f4,f0
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// lfs f27,48(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 48);
	f27.f64 = double(temp.f32);
	// fmuls f0,f2,f0
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// lfs f7,32(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f3,f5,f13
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// lfs f6,48(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f13,f2,f13
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// lfs f19,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	f19.f64 = double(temp.f32);
	// fmadds f10,f27,f9,f10
	ctx.f10.f64 = double(float(std::fma(f27.f64, ctx.f9.f64, ctx.f10.f64)));
	// lfs f24,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	f24.f64 = double(temp.f32);
	// fmadds f8,f27,f7,f8
	ctx.f8.f64 = double(float(std::fma(f27.f64, ctx.f7.f64, ctx.f8.f64)));
	// lfs f20,8(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	f20.f64 = double(temp.f32);
	// fmuls f26,f2,f12
	f26.f64 = double(float(ctx.f2.f64 * ctx.f12.f64));
	// lfs f2,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f11,f27,f6,f11
	ctx.f11.f64 = double(float(std::fma(f27.f64, ctx.f6.f64, ctx.f11.f64)));
	// lfs f18,56(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 56);
	f18.f64 = double(temp.f32);
	// fmuls f12,f5,f12
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// lfs f23,40(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 40);
	f23.f64 = double(temp.f32);
	// fmadds f25,f2,f7,f25
	f25.f64 = double(float(std::fma(ctx.f2.f64, ctx.f7.f64, f25.f64)));
	// lfs f21,56(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 56);
	f21.f64 = double(temp.f32);
	// fmadds f1,f2,f6,f1
	ctx.f1.f64 = double(float(std::fma(ctx.f2.f64, ctx.f6.f64, ctx.f1.f64)));
	// lfs f17,32(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 32);
	f17.f64 = double(temp.f32);
	// fmadds f0,f19,f9,f0
	ctx.f0.f64 = double(float(std::fma(f19.f64, ctx.f9.f64, ctx.f0.f64)));
	// lfs f5,36(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 36);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f3,f20,f7,f3
	ctx.f3.f64 = double(float(std::fma(f20.f64, ctx.f7.f64, ctx.f3.f64)));
	// lfs f16,64(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 64);
	f16.f64 = double(temp.f32);
	// fmadds f13,f19,f7,f13
	ctx.f13.f64 = double(float(std::fma(f19.f64, ctx.f7.f64, ctx.f13.f64)));
	// lfs f15,68(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 68);
	f15.f64 = double(temp.f32);
	// fmadds f10,f18,f24,f10
	ctx.f10.f64 = double(float(std::fma(f18.f64, f24.f64, ctx.f10.f64)));
	// lfs f27,40(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 40);
	f27.f64 = double(temp.f32);
	// fmadds f7,f20,f9,f22
	ctx.f7.f64 = double(float(std::fma(f20.f64, ctx.f9.f64, f22.f64)));
	// lfs f14,72(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 72);
	f14.f64 = double(temp.f32);
	// fmadds f4,f2,f9,f4
	ctx.f4.f64 = double(float(std::fma(ctx.f2.f64, ctx.f9.f64, ctx.f4.f64)));
	// stfs f31,124(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fmadds f9,f18,f23,f8
	ctx.f9.f64 = double(float(std::fma(f18.f64, f23.f64, ctx.f8.f64)));
	// stfs f31,140(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// fmadds f26,f19,f6,f26
	f26.f64 = double(float(std::fma(f19.f64, ctx.f6.f64, f26.f64)));
	// stfs f31,156(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// fmadds f11,f18,f21,f11
	ctx.f11.f64 = double(float(std::fma(f18.f64, f21.f64, ctx.f11.f64)));
	// stfs f31,172(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// fmadds f12,f20,f6,f12
	ctx.f12.f64 = double(float(std::fma(f20.f64, ctx.f6.f64, ctx.f12.f64)));
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// fmadds f0,f17,f24,f0
	ctx.f0.f64 = double(float(std::fma(f17.f64, f24.f64, ctx.f0.f64)));
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmadds f8,f5,f21,f1
	ctx.f8.f64 = double(float(std::fma(ctx.f5.f64, f21.f64, ctx.f1.f64)));
	// stfs f8,164(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// fmadds f13,f17,f23,f13
	ctx.f13.f64 = double(float(std::fma(f17.f64, f23.f64, ctx.f13.f64)));
	// stfs f13,144(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fadds f0,f10,f16
	ctx.f0.f64 = double(float(ctx.f10.f64 + f16.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmadds f13,f27,f24,f7
	ctx.f13.f64 = double(float(std::fma(f27.f64, f24.f64, ctx.f7.f64)));
	// stfs f13,136(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fmadds f13,f5,f24,f4
	ctx.f13.f64 = double(float(std::fma(ctx.f5.f64, f24.f64, ctx.f4.f64)));
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fadds f0,f9,f15
	ctx.f0.f64 = double(float(ctx.f9.f64 + f15.f64));
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmadds f8,f17,f21,f26
	ctx.f8.f64 = double(float(std::fma(f17.f64, f21.f64, f26.f64)));
	// stfs f8,160(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fmadds f8,f27,f23,f3
	ctx.f8.f64 = double(float(std::fma(f27.f64, f23.f64, ctx.f3.f64)));
	// stfs f8,152(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fadds f0,f11,f14
	ctx.f0.f64 = double(float(ctx.f11.f64 + f14.f64));
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmadds f8,f5,f23,f25
	ctx.f8.f64 = double(float(std::fma(ctx.f5.f64, f23.f64, f25.f64)));
	// stfs f8,148(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fmadds f0,f27,f21,f12
	ctx.f0.f64 = double(float(std::fma(f27.f64, f21.f64, ctx.f12.f64)));
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// addi r7,r1,192
	ctx.r7.s64 = ctx.r1.s64 + 192;
	// ld r3,0(r8)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// ld r8,8(r8)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r8.u32 + 8);
	// std r3,0(r4)
	REX_STORE_U64(ctx.r4.u32 + 0, ctx.r3.u64);
	// std r8,8(r4)
	REX_STORE_U64(ctx.r4.u32 + 8, ctx.r8.u64);
	// ld r8,8(r10)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// ld r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// ld r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// std r8,8(r6)
	REX_STORE_U64(ctx.r6.u32 + 8, ctx.r8.u64);
	// std r4,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r4.u64);
	// std r10,0(r6)
	REX_STORE_U64(ctx.r6.u32 + 0, ctx.r10.u64);
	// b 0x822bf80c
	goto loc_822BF80C;
loc_822BF688:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lfs f0,52(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,24(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lfs f12,20(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,16(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,48(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 48);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f7,f0
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// lfs f4,36(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f6,f0
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmuls f0,f0,f4
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f4.f64));
	// lfs f2,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f23,f6,f13
	f23.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// lfs f26,32(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32);
	f26.f64 = double(temp.f32);
	// fmuls f27,f13,f4
	f27.f64 = double(float(ctx.f13.f64 * ctx.f4.f64));
	// lfs f1,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f13,f7,f13
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// lfs f19,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	f19.f64 = double(temp.f32);
	// fmuls f21,f6,f12
	f21.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// lfs f24,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	f24.f64 = double(temp.f32);
	// fmuls f25,f12,f4
	f25.f64 = double(float(ctx.f12.f64 * ctx.f4.f64));
	// lfs f18,56(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 56);
	f18.f64 = double(temp.f32);
	// fmuls f12,f7,f12
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// lfs f22,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	f22.f64 = double(temp.f32);
	// fmuls f6,f6,f11
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f11.f64));
	// lfs f20,40(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 40);
	f20.f64 = double(temp.f32);
	// fmuls f4,f11,f4
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f4.f64));
	// lfs f17,40(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 40);
	f17.f64 = double(temp.f32);
	// fmuls f11,f7,f11
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// lfs f7,36(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 36);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f5,f2,f10,f5
	ctx.f5.f64 = double(float(std::fma(ctx.f2.f64, ctx.f10.f64, ctx.f5.f64)));
	// lfs f16,32(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 32);
	f16.f64 = double(temp.f32);
	// fmadds f0,f10,f26,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f10.f64, f26.f64, ctx.f0.f64)));
	// lfs f15,48(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 48);
	f15.f64 = double(temp.f32);
	// fmadds f3,f1,f10,f3
	ctx.f3.f64 = double(float(std::fma(ctx.f1.f64, ctx.f10.f64, ctx.f3.f64)));
	// lfs f10,52(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f13,f2,f9,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f2.f64, ctx.f9.f64, ctx.f13.f64)));
	// lfs f14,56(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 56);
	f14.f64 = double(temp.f32);
	// fmadds f27,f9,f26,f27
	f27.f64 = double(float(std::fma(ctx.f9.f64, f26.f64, f27.f64)));
	// stfs f31,124(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fmadds f25,f8,f26,f25
	f25.f64 = double(float(std::fma(ctx.f8.f64, f26.f64, f25.f64)));
	// stfs f31,140(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// fmadds f12,f2,f8,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f2.f64, ctx.f8.f64, ctx.f12.f64)));
	// stfs f31,156(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// fmadds f6,f1,f19,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f1.f64, f19.f64, ctx.f6.f64)));
	// stfs f31,172(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// fmadds f4,f19,f26,f4
	ctx.f4.f64 = double(float(std::fma(f19.f64, f26.f64, ctx.f4.f64)));
	// fmadds f11,f2,f19,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f2.f64, f19.f64, ctx.f11.f64)));
	// fmadds f26,f1,f9,f23
	f26.f64 = double(float(std::fma(ctx.f1.f64, ctx.f9.f64, f23.f64)));
	// fmadds f9,f24,f18,f5
	ctx.f9.f64 = double(float(std::fma(f24.f64, f18.f64, ctx.f5.f64)));
	// fmadds f23,f1,f8,f21
	f23.f64 = double(float(std::fma(ctx.f1.f64, ctx.f8.f64, f21.f64)));
	// fmadds f8,f22,f18,f3
	ctx.f8.f64 = double(float(std::fma(f22.f64, f18.f64, ctx.f3.f64)));
	// fmadds f0,f18,f20,f0
	ctx.f0.f64 = double(float(std::fma(f18.f64, f20.f64, ctx.f0.f64)));
	// fmadds f13,f24,f17,f13
	ctx.f13.f64 = double(float(std::fma(f24.f64, f17.f64, ctx.f13.f64)));
	// stfs f13,136(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fmadds f5,f17,f20,f27
	ctx.f5.f64 = double(float(std::fma(f17.f64, f20.f64, f27.f64)));
	// stfs f5,168(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// fmadds f5,f7,f20,f25
	ctx.f5.f64 = double(float(std::fma(ctx.f7.f64, f20.f64, f25.f64)));
	// stfs f5,164(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// fmadds f13,f24,f7,f12
	ctx.f13.f64 = double(float(std::fma(f24.f64, ctx.f7.f64, ctx.f12.f64)));
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fmadds f5,f16,f20,f4
	ctx.f5.f64 = double(float(std::fma(f16.f64, f20.f64, ctx.f4.f64)));
	// stfs f5,160(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fmadds f13,f24,f16,f11
	ctx.f13.f64 = double(float(std::fma(f24.f64, f16.f64, ctx.f11.f64)));
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmadds f5,f22,f17,f26
	ctx.f5.f64 = double(float(std::fma(f22.f64, f17.f64, f26.f64)));
	// stfs f5,152(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fadds f13,f9,f15
	ctx.f13.f64 = double(float(ctx.f9.f64 + f15.f64));
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmadds f5,f22,f7,f23
	ctx.f5.f64 = double(float(std::fma(f22.f64, ctx.f7.f64, f23.f64)));
	// stfs f5,148(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fmadds f6,f22,f16,f6
	ctx.f6.f64 = double(float(std::fma(f22.f64, f16.f64, ctx.f6.f64)));
	// stfs f6,144(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fadds f13,f8,f10
	ctx.f13.f64 = double(float(ctx.f8.f64 + ctx.f10.f64));
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fadds f0,f0,f14
	ctx.f0.f64 = double(float(ctx.f0.f64 + f14.f64));
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// ld r3,0(r8)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// addi r7,r1,192
	ctx.r7.s64 = ctx.r1.s64 + 192;
	// ld r8,8(r8)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r8.u32 + 8);
	// std r3,0(r4)
	REX_STORE_U64(ctx.r4.u32 + 0, ctx.r3.u64);
	// std r8,8(r4)
	REX_STORE_U64(ctx.r4.u32 + 8, ctx.r8.u64);
	// ld r4,0(r10)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// ld r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// ld r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// std r4,0(r6)
	REX_STORE_U64(ctx.r6.u32 + 0, ctx.r4.u64);
	// std r8,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r8.u64);
	// std r10,8(r6)
	REX_STORE_U64(ctx.r6.u32 + 8, ctx.r10.u64);
loc_822BF80C:
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// stfs f31,476(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 476, temp.u32);
	// addi r10,r1,896
	ctx.r10.s64 = ctx.r1.s64 + 896;
	// stfs f31,812(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 812, temp.u32);
	// ld r3,0(r9)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// ld r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// std r11,8(r7)
	REX_STORE_U64(ctx.r7.u32 + 8, ctx.r11.u64);
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
	// std r3,0(r5)
	REX_STORE_U64(ctx.r5.u32 + 0, ctx.r3.u64);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// std r9,8(r5)
	REX_STORE_U64(ctx.r5.u32 + 8, ctx.r9.u64);
	// ld r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// lwz r9,0(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 0);
	// std r8,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r8.u64);
	// std r11,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// lwz r9,12(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lfs f9,228(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 228);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,192(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,224(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 224);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,196(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,212(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 212);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,208(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,468(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 468, temp.u32);
	// stfs f9,808(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 808, temp.u32);
	// stfs f0,464(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 464, temp.u32);
	// stfs f12,472(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 472, temp.u32);
	// stfs f11,800(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 800, temp.u32);
	// stfs f10,804(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 804, temp.u32);
	// bctrl 
	ctx.lr = 0x822BF890;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f31,612(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 612, temp.u32);
	// stfs f31,620(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 620, temp.u32);
	// addi r11,r1,608
	ctx.r11.s64 = ctx.r1.s64 + 608;
	// stfs f31,608(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 608, temp.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stfs f31,616(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 616, temp.u32);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stb r10,95(r1)
	REX_STORE_U8(ctx.r1.u32 + 95, ctx.r10.u8);
	// fneg f0,f28
	ctx.f0.u64 = f28.u64 ^ 0x8000000000000000;
	// addi r6,r1,800
	ctx.r6.s64 = ctx.r1.s64 + 800;
	// lfs f5,228(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 228);
	ctx.f5.f64 = double(temp.f32);
	// addi r5,r1,464
	ctx.r5.s64 = ctx.r1.s64 + 464;
	// fsubs f4,f29,f28
	ctx.f4.f64 = double(float(f29.f64 - f28.f64));
	// addi r4,r1,896
	ctx.r4.s64 = ctx.r1.s64 + 896;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// fsubs f3,f0,f29
	ctx.f3.f64 = double(float(ctx.f0.f64 - f29.f64));
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822BF8E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x822bff84
	goto loc_822BFF84;
loc_822BF8E8:
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lfs f0,676(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 676);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,640(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 640);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r31,624
	ctx.r11.s64 = r31.s64 + 624;
	// lfs f13,648(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 648);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// lfs f12,644(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 644);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lfs f10,672(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 672);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,20(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,36(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f0,f9
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// lfs f6,52(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f0,f8
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// fmuls f0,f6,f0
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// lfs f1,48(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f2,f11,f6
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f6.f64));
	// lfs f4,16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f29,f13,f8
	f29.f64 = double(float(ctx.f13.f64 * ctx.f8.f64));
	// lfs f3,32(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f28,f12,f8
	f28.f64 = double(float(ctx.f12.f64 * ctx.f8.f64));
	// lfs f21,624(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 624);
	f21.f64 = double(temp.f32);
	// fmuls f8,f11,f8
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f8.f64));
	// lfs f22,632(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 632);
	f22.f64 = double(temp.f32);
	// fmuls f11,f11,f9
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// lfs f24,56(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 56);
	f24.f64 = double(temp.f32);
	// fmuls f25,f13,f9
	f25.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// lfs f20,680(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 680);
	f20.f64 = double(temp.f32);
	// fmuls f23,f12,f9
	f23.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// lfs f9,628(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 628);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f7,f10,f4,f7
	ctx.f7.f64 = double(float(std::fma(ctx.f10.f64, ctx.f4.f64, ctx.f7.f64)));
	// lfs f27,24(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 24);
	f27.f64 = double(temp.f32);
	// fmuls f13,f13,f6
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f6.f64));
	// lfs f26,40(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 40);
	f26.f64 = double(temp.f32);
	// fmadds f0,f1,f10,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f1.f64, ctx.f10.f64, ctx.f0.f64)));
	// lfs f19,660(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 660);
	f19.f64 = double(temp.f32);
	// fmadds f5,f10,f3,f5
	ctx.f5.f64 = double(float(std::fma(ctx.f10.f64, ctx.f3.f64, ctx.f5.f64)));
	// lfs f10,664(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 664);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f12,f12,f6
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f6.f64));
	// lfs f6,656(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 656);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f2,f21,f1,f2
	ctx.f2.f64 = double(float(std::fma(f21.f64, ctx.f1.f64, ctx.f2.f64)));
	// lfs f16,72(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 72);
	f16.f64 = double(temp.f32);
	// fmadds f29,f22,f3,f29
	f29.f64 = double(float(std::fma(f22.f64, ctx.f3.f64, f29.f64)));
	// lfs f18,64(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 64);
	f18.f64 = double(temp.f32);
	// fmadds f28,f9,f3,f28
	f28.f64 = double(float(std::fma(ctx.f9.f64, ctx.f3.f64, f28.f64)));
	// lfs f17,68(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 68);
	f17.f64 = double(temp.f32);
	// fmadds f11,f21,f4,f11
	ctx.f11.f64 = double(float(std::fma(f21.f64, ctx.f4.f64, ctx.f11.f64)));
	// stfs f31,124(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fmadds f8,f21,f3,f8
	ctx.f8.f64 = double(float(std::fma(f21.f64, ctx.f3.f64, ctx.f8.f64)));
	// stfs f31,140(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// fmadds f3,f22,f4,f25
	ctx.f3.f64 = double(float(std::fma(f22.f64, ctx.f4.f64, f25.f64)));
	// stfs f31,156(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// fmadds f7,f20,f27,f7
	ctx.f7.f64 = double(float(std::fma(f20.f64, f27.f64, ctx.f7.f64)));
	// fmadds f0,f24,f20,f0
	ctx.f0.f64 = double(float(std::fma(f24.f64, f20.f64, ctx.f0.f64)));
	// fmadds f13,f22,f1,f13
	ctx.f13.f64 = double(float(std::fma(f22.f64, ctx.f1.f64, ctx.f13.f64)));
	// fmadds f12,f9,f1,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f9.f64, ctx.f1.f64, ctx.f12.f64)));
	// fmadds f25,f9,f4,f23
	f25.f64 = double(float(std::fma(ctx.f9.f64, ctx.f4.f64, f23.f64)));
	// fmadds f5,f20,f26,f5
	ctx.f5.f64 = double(float(std::fma(f20.f64, f26.f64, ctx.f5.f64)));
	// fmadds f9,f6,f24,f2
	ctx.f9.f64 = double(float(std::fma(ctx.f6.f64, f24.f64, ctx.f2.f64)));
	// stfs f9,160(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fmadds f9,f10,f26,f29
	ctx.f9.f64 = double(float(std::fma(ctx.f10.f64, f26.f64, f29.f64)));
	// stfs f9,152(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fmadds f9,f19,f26,f28
	ctx.f9.f64 = double(float(std::fma(f19.f64, f26.f64, f28.f64)));
	// stfs f9,148(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fmadds f11,f6,f27,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f6.f64, f27.f64, ctx.f11.f64)));
	// stfs f11,128(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmadds f9,f6,f26,f8
	ctx.f9.f64 = double(float(std::fma(ctx.f6.f64, f26.f64, ctx.f8.f64)));
	// stfs f9,144(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fadds f0,f0,f16
	ctx.f0.f64 = double(float(ctx.f0.f64 + f16.f64));
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmadds f9,f10,f27,f3
	ctx.f9.f64 = double(float(std::fma(ctx.f10.f64, f27.f64, ctx.f3.f64)));
	// stfs f9,136(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fadds f11,f7,f18
	ctx.f11.f64 = double(float(ctx.f7.f64 + f18.f64));
	// stfs f11,112(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmadds f0,f10,f24,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f10.f64, f24.f64, ctx.f13.f64)));
	// fmadds f9,f19,f27,f25
	ctx.f9.f64 = double(float(std::fma(f19.f64, f27.f64, f25.f64)));
	// stfs f9,132(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fadds f11,f5,f17
	ctx.f11.f64 = double(float(ctx.f5.f64 + f17.f64));
	// stfs f11,116(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmadds f13,f19,f24,f12
	ctx.f13.f64 = double(float(std::fma(f19.f64, f24.f64, ctx.f12.f64)));
	// stfs f13,164(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// stfs f31,172(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// addi r4,r1,880
	ctx.r4.s64 = ctx.r1.s64 + 880;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// addi r7,r1,832
	ctx.r7.s64 = ctx.r1.s64 + 832;
	// ld r3,0(r8)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// addi r6,r1,848
	ctx.r6.s64 = ctx.r1.s64 + 848;
	// ld r8,8(r8)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r8.u32 + 8);
	// addi r5,r1,864
	ctx.r5.s64 = ctx.r1.s64 + 864;
	// clrlwi. r30,r29,24
	r30.u64 = r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// std r3,0(r4)
	REX_STORE_U64(ctx.r4.u32 + 0, ctx.r3.u64);
	// std r8,8(r4)
	REX_STORE_U64(ctx.r4.u32 + 8, ctx.r8.u64);
	// ld r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// ld r4,0(r10)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// ld r3,8(r9)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// ld r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// ld r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// std r8,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r8.u64);
	// std r4,0(r6)
	REX_STORE_U64(ctx.r6.u32 + 0, ctx.r4.u64);
	// std r11,8(r7)
	REX_STORE_U64(ctx.r7.u32 + 8, ctx.r11.u64);
	// std r10,8(r6)
	REX_STORE_U64(ctx.r6.u32 + 8, ctx.r10.u64);
	// std r9,0(r5)
	REX_STORE_U64(ctx.r5.u32 + 0, ctx.r9.u64);
	// std r3,8(r5)
	REX_STORE_U64(ctx.r5.u32 + 8, ctx.r3.u64);
	// beq 0x822bfac4
	if (ctx.cr0.eq) goto loc_822BFAC4;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822BFAAC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,832
	ctx.r4.s64 = ctx.r1.s64 + 832;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822BFAC4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822BFAC4:
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lfs f0,740(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 740);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,704(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 704);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r31,688
	ctx.r11.s64 = r31.s64 + 688;
	// lfs f13,712(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 712);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// lfs f12,708(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 708);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lfs f10,736(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 736);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,20(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,36(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f6,52(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f8,f0
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f0,f6,f0
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// lfs f1,48(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f2,f11,f6
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f6.f64));
	// lfs f4,16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f29,f13,f8
	f29.f64 = double(float(ctx.f13.f64 * ctx.f8.f64));
	// lfs f3,32(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f28,f12,f8
	f28.f64 = double(float(ctx.f12.f64 * ctx.f8.f64));
	// lfs f21,688(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 688);
	f21.f64 = double(temp.f32);
	// fmuls f8,f11,f8
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f8.f64));
	// lfs f22,696(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 696);
	f22.f64 = double(temp.f32);
	// fmuls f11,f11,f9
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// lfs f24,56(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 56);
	f24.f64 = double(temp.f32);
	// fmuls f25,f13,f9
	f25.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// lfs f20,744(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 744);
	f20.f64 = double(temp.f32);
	// fmuls f23,f12,f9
	f23.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// lfs f9,692(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 692);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f7,f4,f10,f7
	ctx.f7.f64 = double(float(std::fma(ctx.f4.f64, ctx.f10.f64, ctx.f7.f64)));
	// lfs f27,24(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 24);
	f27.f64 = double(temp.f32);
	// fmuls f13,f6,f13
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// lfs f26,40(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 40);
	f26.f64 = double(temp.f32);
	// fmadds f0,f1,f10,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f1.f64, ctx.f10.f64, ctx.f0.f64)));
	// lfs f19,724(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 724);
	f19.f64 = double(temp.f32);
	// fmadds f5,f3,f10,f5
	ctx.f5.f64 = double(float(std::fma(ctx.f3.f64, ctx.f10.f64, ctx.f5.f64)));
	// lfs f10,728(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 728);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f12,f12,f6
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f6.f64));
	// lfs f6,720(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 720);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f2,f21,f1,f2
	ctx.f2.f64 = double(float(std::fma(f21.f64, ctx.f1.f64, ctx.f2.f64)));
	// lfs f16,72(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 72);
	f16.f64 = double(temp.f32);
	// fmadds f29,f22,f3,f29
	f29.f64 = double(float(std::fma(f22.f64, ctx.f3.f64, f29.f64)));
	// lfs f18,64(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 64);
	f18.f64 = double(temp.f32);
	// fmadds f28,f9,f3,f28
	f28.f64 = double(float(std::fma(ctx.f9.f64, ctx.f3.f64, f28.f64)));
	// lfs f17,68(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 68);
	f17.f64 = double(temp.f32);
	// fmadds f11,f21,f4,f11
	ctx.f11.f64 = double(float(std::fma(f21.f64, ctx.f4.f64, ctx.f11.f64)));
	// stfs f31,124(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fmadds f8,f21,f3,f8
	ctx.f8.f64 = double(float(std::fma(f21.f64, ctx.f3.f64, ctx.f8.f64)));
	// stfs f31,140(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// fmadds f3,f22,f4,f25
	ctx.f3.f64 = double(float(std::fma(f22.f64, ctx.f4.f64, f25.f64)));
	// stfs f31,156(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// fmadds f7,f27,f20,f7
	ctx.f7.f64 = double(float(std::fma(f27.f64, f20.f64, ctx.f7.f64)));
	// fmadds f0,f24,f20,f0
	ctx.f0.f64 = double(float(std::fma(f24.f64, f20.f64, ctx.f0.f64)));
	// fmadds f13,f1,f22,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f1.f64, f22.f64, ctx.f13.f64)));
	// fmadds f12,f9,f1,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f9.f64, ctx.f1.f64, ctx.f12.f64)));
	// fmadds f25,f9,f4,f23
	f25.f64 = double(float(std::fma(ctx.f9.f64, ctx.f4.f64, f23.f64)));
	// fmadds f5,f26,f20,f5
	ctx.f5.f64 = double(float(std::fma(f26.f64, f20.f64, ctx.f5.f64)));
	// fmadds f9,f6,f24,f2
	ctx.f9.f64 = double(float(std::fma(ctx.f6.f64, f24.f64, ctx.f2.f64)));
	// stfs f9,160(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fmadds f9,f10,f26,f29
	ctx.f9.f64 = double(float(std::fma(ctx.f10.f64, f26.f64, f29.f64)));
	// stfs f9,152(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fmadds f9,f19,f26,f28
	ctx.f9.f64 = double(float(std::fma(f19.f64, f26.f64, f28.f64)));
	// stfs f9,148(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fmadds f11,f6,f27,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f6.f64, f27.f64, ctx.f11.f64)));
	// stfs f11,128(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmadds f9,f6,f26,f8
	ctx.f9.f64 = double(float(std::fma(ctx.f6.f64, f26.f64, ctx.f8.f64)));
	// stfs f9,144(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fadds f0,f0,f16
	ctx.f0.f64 = double(float(ctx.f0.f64 + f16.f64));
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmadds f9,f10,f27,f3
	ctx.f9.f64 = double(float(std::fma(ctx.f10.f64, f27.f64, ctx.f3.f64)));
	// stfs f9,136(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fadds f11,f7,f18
	ctx.f11.f64 = double(float(ctx.f7.f64 + f18.f64));
	// stfs f11,112(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmadds f0,f24,f10,f13
	ctx.f0.f64 = double(float(std::fma(f24.f64, ctx.f10.f64, ctx.f13.f64)));
	// fmadds f9,f19,f27,f25
	ctx.f9.f64 = double(float(std::fma(f19.f64, f27.f64, f25.f64)));
	// stfs f9,132(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fadds f11,f5,f17
	ctx.f11.f64 = double(float(ctx.f5.f64 + f17.f64));
	// stfs f11,116(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmadds f13,f19,f24,f12
	ctx.f13.f64 = double(float(std::fma(f19.f64, f24.f64, ctx.f12.f64)));
	// stfs f13,164(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// stfs f31,172(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// addi r4,r1,880
	ctx.r4.s64 = ctx.r1.s64 + 880;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// addi r7,r1,832
	ctx.r7.s64 = ctx.r1.s64 + 832;
	// ld r3,0(r8)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// addi r6,r1,848
	ctx.r6.s64 = ctx.r1.s64 + 848;
	// ld r8,8(r8)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r8.u32 + 8);
	// addi r5,r1,864
	ctx.r5.s64 = ctx.r1.s64 + 864;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// std r3,0(r4)
	REX_STORE_U64(ctx.r4.u32 + 0, ctx.r3.u64);
	// std r8,8(r4)
	REX_STORE_U64(ctx.r4.u32 + 8, ctx.r8.u64);
	// ld r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// ld r4,0(r10)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// ld r3,0(r9)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// ld r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// ld r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// std r8,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r8.u64);
	// std r4,0(r6)
	REX_STORE_U64(ctx.r6.u32 + 0, ctx.r4.u64);
	// std r11,8(r7)
	REX_STORE_U64(ctx.r7.u32 + 8, ctx.r11.u64);
	// std r10,8(r6)
	REX_STORE_U64(ctx.r6.u32 + 8, ctx.r10.u64);
	// std r3,0(r5)
	REX_STORE_U64(ctx.r5.u32 + 0, ctx.r3.u64);
	// std r9,8(r5)
	REX_STORE_U64(ctx.r5.u32 + 8, ctx.r9.u64);
	// beq cr6,0x822bfca0
	if (ctx.cr6.eq) goto loc_822BFCA0;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822BFC88;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,832
	ctx.r4.s64 = ctx.r1.s64 + 832;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822BFCA0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822BFCA0:
	// lfs f29,772(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 772);
	f29.f64 = double(temp.f32);
	// lfs f28,776(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 776);
	f28.f64 = double(temp.f32);
	// fcmpu cr6,f29,f28
	ctx.cr6.compare(f29.f64, f28.f64);
	// beq cr6,0x822bff84
	if (ctx.cr6.eq) goto loc_822BFF84;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// fcmpu cr6,f29,f28
	ctx.cr6.compare(f29.f64, f28.f64);
	// li r31,1
	r31.s64 = 1;
	// addi r30,r11,16592
	r30.s64 = ctx.r11.s64 + 16592;
	// ble cr6,0x822bfcd0
	if (!ctx.cr6.gt) goto loc_822BFCD0;
	// lfs f28,180(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 180);
	f28.f64 = double(temp.f32);
	// fmr f29,f31
	f29.f64 = f31.f64;
	// li r31,0
	r31.s64 = 0;
loc_822BFCD0:
	// clrlwi. r11,r26,24
	ctx.r11.u64 = r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822bff84
	if (ctx.cr0.eq) goto loc_822BFF84;
	// lfs f0,840(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 840);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lfs f13,856(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 856);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lfs f12,872(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 872);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,832(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 832);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,848(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 848);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,864(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 864);
	ctx.f9.f64 = double(temp.f32);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stfs f0,560(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 560, temp.u32);
	// stfs f13,564(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 564, temp.u32);
	// stfs f12,568(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 568, temp.u32);
	// stfs f31,572(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 572, temp.u32);
	// stfs f11,528(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 528, temp.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// stfs f10,532(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 532, temp.u32);
	// stfs f9,536(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 536, temp.u32);
	// stfs f31,540(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 540, temp.u32);
	// bctrl 
	ctx.lr = 0x822BFD24;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f31,496(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 496, temp.u32);
	// stfs f31,500(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 500, temp.u32);
	// addi r11,r1,496
	ctx.r11.s64 = ctx.r1.s64 + 496;
	// stfs f31,504(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 504, temp.u32);
	// stb r31,95(r1)
	REX_STORE_U8(ctx.r1.u32 + 95, r31.u8);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stfs f31,508(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 508, temp.u32);
	// addi r6,r1,528
	ctx.r6.s64 = ctx.r1.s64 + 528;
	// lfs f5,228(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 228);
	ctx.f5.f64 = double(temp.f32);
	// addi r5,r1,560
	ctx.r5.s64 = ctx.r1.s64 + 560;
	// fmr f4,f28
	ctx.f4.f64 = f28.f64;
	// addi r4,r1,880
	ctx.r4.s64 = ctx.r1.s64 + 880;
	// fmr f3,f29
	ctx.f3.f64 = f29.f64;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822BFD70;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x822bff84
	goto loc_822BFF84;
loc_822BFD74:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stfs f31,628(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 628, temp.u32);
	// stfs f31,636(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 636, temp.u32);
	// ld r10,344(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 344);
	// addi r8,r11,16592
	ctx.r8.s64 = ctx.r11.s64 + 16592;
	// stfs f31,640(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 640, temp.u32);
	// stfs f31,656(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 656, temp.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// stfs f31,660(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 660, temp.u32);
	// ld r7,336(r31)
	ctx.r7.u64 = REX_LOAD_U64(r31.u32 + 336);
	// stfs f31,668(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 668, temp.u32);
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
	// stfs f31,672(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 672, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lfs f0,12(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r1,672
	ctx.r8.s64 = ctx.r1.s64 + 672;
	// stfs f0,624(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 624, temp.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stfs f0,644(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 644, temp.u32);
	// stfs f0,664(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 664, temp.u32);
	// std r10,8(r9)
	REX_STORE_U64(ctx.r9.u32 + 8, ctx.r10.u64);
	// stfs f31,676(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 676, temp.u32);
	// std r7,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, ctx.r7.u64);
	// stfs f31,680(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 680, temp.u32);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// stfs f31,684(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 684, temp.u32);
	// lwz r9,0(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 0);
	// stfs f31,648(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 648, temp.u32);
	// addi r7,r31,336
	ctx.r7.s64 = r31.s64 + 336;
	// stfs f31,652(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 652, temp.u32);
	// stfs f31,632(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 632, temp.u32);
	// lfs f2,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// stfs f31,124(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lwz r9,12(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lfs f4,56(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f4.f64 = double(temp.f32);
	// lfs f0,184(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,180(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f13.f64 = double(temp.f32);
	// lfs f3,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f3.f64 = double(temp.f32);
	// lfs f5,52(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f5.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,40(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f10.f64 = double(temp.f32);
	// lfs f7,36(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f7.f64 = double(temp.f32);
	// lfs f11,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f6,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f9,32(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f11,f3,f13,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f3.f64, ctx.f13.f64, ctx.f11.f64)));
	// lfs f3,48(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f8,f12,f0
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f12,176(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f10,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f11,f12,f10,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f12.f64, ctx.f10.f64, ctx.f11.f64)));
	// fmadds f8,f2,f13,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f2.f64, ctx.f13.f64, ctx.f8.f64)));
	// fmadds f0,f7,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f7.f64, ctx.f13.f64, ctx.f0.f64)));
	// fmadds f13,f12,f6,f8
	ctx.f13.f64 = double(float(std::fma(ctx.f12.f64, ctx.f6.f64, ctx.f8.f64)));
	// fmadds f0,f9,f12,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f9.f64, ctx.f12.f64, ctx.f0.f64)));
	// fadds f13,f13,f3
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f3.f64));
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fadds f13,f11,f5
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f5.f64));
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fadds f0,f0,f4
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f4.f64));
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// ld r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// ld r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// std r11,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, ctx.r11.u64);
	// std r10,8(r8)
	REX_STORE_U64(ctx.r8.u32 + 8, ctx.r10.u64);
	// bctrl 
	ctx.lr = 0x822BFE88;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,624
	ctx.r4.s64 = ctx.r1.s64 + 624;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822BFEA0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// ld r11,352(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 352);
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// ld r9,360(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 360);
	// stfs f31,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// std r11,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// addi r7,r1,672
	ctx.r7.s64 = ctx.r1.s64 + 672;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// clrlwi. r6,r29,24
	ctx.r6.u64 = r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lfs f0,184(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f11,40(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f31,f12,f0
	f31.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f10,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,180(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f13.f64 = double(temp.f32);
	// lfs f9,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,36(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f12,176(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f12.f64 = double(temp.f32);
	// lfs f6,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,32(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f11,f10,f13,f1
	ctx.f11.f64 = double(float(std::fma(ctx.f10.f64, ctx.f13.f64, ctx.f1.f64)));
	// lfs f4,48(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f10,f9,f13,f31
	ctx.f10.f64 = double(float(std::fma(ctx.f9.f64, ctx.f13.f64, f31.f64)));
	// lfs f3,52(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f0,f8,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f8.f64, ctx.f13.f64, ctx.f0.f64)));
	// lfs f2,56(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f13,f12,f7,f11
	ctx.f13.f64 = double(float(std::fma(ctx.f12.f64, ctx.f7.f64, ctx.f11.f64)));
	// fmadds f11,f12,f6,f10
	ctx.f11.f64 = double(float(std::fma(ctx.f12.f64, ctx.f6.f64, ctx.f10.f64)));
	// fmadds f0,f12,f5,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f5.f64, ctx.f0.f64)));
	// fadds f13,f13,f4
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f4.f64));
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fadds f13,f11,f3
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f3.f64));
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fadds f0,f0,f2
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f2.f64));
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// ld r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// ld r10,8(r8)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r8.u32 + 8);
	// std r11,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r11.u64);
	// std r10,8(r7)
	REX_STORE_U64(ctx.r7.u32 + 8, ctx.r10.u64);
	// beq 0x822bff84
	if (ctx.cr0.eq) goto loc_822BFF84;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822BFF6C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,624
	ctx.r4.s64 = ctx.r1.s64 + 624;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822BFF84;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822BFF84:
	// addi r1,r1,1216
	ctx.r1.s64 = ctx.r1.s64 + 1216;
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x826a2cbc
	ctx.lr = 0x822BFF90;
	// b 0x826a1cec
	return;
}

DEFINE_REX_FUNC(sub_823ABA30) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x823ABA38;
	// stwu r1,-736(r1)
	ea = -736 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x823abd4c
	if (ctx.cr6.gt) goto loc_823ABD4C;
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r3,784(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 784);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// bl 0x823a6978
	ctx.lr = 0x823ABA68;
	sub_823A6978(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823abd50
	if (!ctx.cr6.eq) goto loc_823ABD50;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(r30.s32, 4, ctx.xer);
	// blt cr6,0x823abaf0
	if (ctx.cr6.lt) goto loc_823ABAF0;
	// addi r11,r30,-4
	ctx.r11.s64 = r30.s64 + -4;
	// lwz r7,16(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 16);
	// rlwinm r9,r29,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 6) & 0xFFFFFFC0;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r1,180
	ctx.r10.s64 = ctx.r1.s64 + 180;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r9,r28,-4
	ctx.r9.s64 = r28.s64 + -4;
	// addi r8,r10,-8
	ctx.r8.s64 = ctx.r10.s64 + -8;
	// addi r10,r7,216
	ctx.r10.s64 = ctx.r7.s64 + 216;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_823ABAAC:
	// lfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,8(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// stfs f12,4(r8)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// lfs f10,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// lfs f8,12(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// stfs f9,8(r8)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// lfs f7,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f8.f64));
	// lfsu f13,16(r9)
	ea = 16 + ctx.r9.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r9.u32 = ea;
	// stfs f6,12(r8)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r8.u32 + 12, temp.u32);
	// lfsu f0,16(r10)
	ea = 16 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// fmuls f5,f0,f13
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfsu f5,16(r8)
	ea = 16 + ctx.r8.u32;
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x823abaac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823ABAAC;
loc_823ABAF0:
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r30.s32, ctx.xer);
	// bge cr6,0x823abb48
	if (!ctx.cr6.lt) goto loc_823ABB48;
	// rlwinm r10,r29,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r7,16(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 16);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r6,r11,54
	ctx.r6.s64 = ctx.r11.s64 + 54;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r5,r11,r30
	ctx.r5.u64 = r30.u64 - ctx.r11.u64;
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// add r11,r9,r28
	ctx.r11.u64 = ctx.r9.u64 + r28.u64;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,-4
	ctx.r8.s64 = ctx.r11.s64 + -4;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// add r11,r9,r7
	ctx.r11.u64 = ctx.r9.u64 + ctx.r7.u64;
loc_823ABB34:
	// lfsu f0,4(r11)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// lfsu f13,4(r8)
	ea = 4 + ctx.r8.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r8.u32 = ea;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfsu f0,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823abb34
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823ABB34;
loc_823ABB48:
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r3,784(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 784);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// bl 0x823a6560
	ctx.lr = 0x823ABB58;
	sub_823A6560(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823abd50
	if (!ctx.cr6.eq) goto loc_823ABD50;
	// li r29,0
	r29.s64 = 0;
	// li r30,0
	r30.s64 = 0;
loc_823ABB68:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + r30.u64;
	// lwz r9,22464(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 22464);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823abbec
	if (ctx.cr6.eq) goto loc_823ABBEC;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r11,22444
	ctx.r3.s64 = ctx.r11.s64 + 22444;
	// lwz r5,56(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 56);
	// bl 0x8235adb0
	ctx.lr = 0x823ABB98;
	sub_8235ADB0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823abbec
	if (ctx.cr6.eq) goto loc_823ABBEC;
	// lwz r11,136(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// lwz r10,780(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 780);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823abbcc
	if (ctx.cr6.eq) goto loc_823ABBCC;
	// lwz r10,396(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 396);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823abbcc
	if (ctx.cr6.eq) goto loc_823ABBCC;
	// lwz r10,768(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 768);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823abbec
	if (!ctx.cr6.eq) goto loc_823ABBEC;
loc_823ABBCC:
	// lwz r11,168(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823abbec
	if (!ctx.cr6.eq) goto loc_823ABBEC;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// bl 0x823a6560
	ctx.lr = 0x823ABBE4;
	sub_823A6560(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823abd50
	if (!ctx.cr6.eq) goto loc_823ABD50;
loc_823ABBEC:
	// addi r30,r30,132
	r30.s64 = r30.s64 + 132;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpwi cr6,r30,528
	ctx.cr6.compare<int32_t>(r30.s32, 528, ctx.xer);
	// blt cr6,0x823abb68
	if (ctx.cr6.lt) goto loc_823ABB68;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r10,25000(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 25000);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823abc7c
	if (ctx.cr6.eq) goto loc_823ABC7C;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,24980
	ctx.r3.s64 = ctx.r11.s64 + 24980;
	// lwz r5,56(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 56);
	// bl 0x8235adb0
	ctx.lr = 0x823ABC28;
	sub_8235ADB0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823abc7c
	if (ctx.cr6.eq) goto loc_823ABC7C;
	// lwz r11,136(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// lwz r10,780(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 780);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823abc5c
	if (ctx.cr6.eq) goto loc_823ABC5C;
	// lwz r10,396(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 396);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823abc5c
	if (ctx.cr6.eq) goto loc_823ABC5C;
	// lwz r10,768(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 768);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823abc7c
	if (!ctx.cr6.eq) goto loc_823ABC7C;
loc_823ABC5C:
	// lwz r11,168(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823abc7c
	if (!ctx.cr6.eq) goto loc_823ABC7C;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// bl 0x823a6560
	ctx.lr = 0x823ABC74;
	sub_823A6560(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823abd50
	if (!ctx.cr6.eq) goto loc_823ABD50;
loc_823ABC7C:
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,25576(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 25576);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r30,r11,-4
	r30.s64 = ctx.r11.s64 + -4;
	// bne cr6,0x823abc94
	if (!ctx.cr6.eq) goto loc_823ABC94;
	// li r30,0
	r30.s64 = 0;
loc_823ABC94:
	// addi r11,r10,25572
	ctx.r11.s64 = ctx.r10.s64 + 25572;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x823abd4c
	if (ctx.cr6.eq) goto loc_823ABD4C;
loc_823ABCA0:
	// lwz r11,564(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 564);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x823abd28
	if (!ctx.cr6.eq) goto loc_823ABD28;
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823abd28
	if (ctx.cr6.eq) goto loc_823ABD28;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,56(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x8235adb0
	ctx.lr = 0x823ABCD4;
	sub_8235ADB0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823abd28
	if (ctx.cr6.eq) goto loc_823ABD28;
	// lwz r11,136(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// lwz r10,780(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 780);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823abd08
	if (ctx.cr6.eq) goto loc_823ABD08;
	// lwz r10,396(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 396);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823abd08
	if (ctx.cr6.eq) goto loc_823ABD08;
	// lwz r10,768(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 768);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823abd28
	if (!ctx.cr6.eq) goto loc_823ABD28;
loc_823ABD08:
	// lwz r11,168(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823abd28
	if (!ctx.cr6.eq) goto loc_823ABD28;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// bl 0x823a6560
	ctx.lr = 0x823ABD20;
	sub_823A6560(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823abd50
	if (!ctx.cr6.eq) goto loc_823ABD50;
loc_823ABD28:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r30,r11,-4
	r30.s64 = ctx.r11.s64 + -4;
	// bne cr6,0x823abd3c
	if (!ctx.cr6.eq) goto loc_823ABD3C;
	// li r30,0
	r30.s64 = 0;
loc_823ABD3C:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,25572
	ctx.r11.s64 = ctx.r11.s64 + 25572;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823abca0
	if (!ctx.cr6.eq) goto loc_823ABCA0;
loc_823ABD4C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823ABD50:
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_823CA1F8) {
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
	// bl 0x826a1cb0
	ctx.lr = 0x823CA200;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// lwz r10,3624(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 3624);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823ca2dc
	if (ctx.cr6.eq) goto loc_823CA2DC;
	// ld r29,24(r4)
	r29.u64 = REX_LOAD_U64(ctx.r4.u32 + 24);
	// addi r3,r11,3744
	ctx.r3.s64 = ctx.r11.s64 + 3744;
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// li r5,2384
	ctx.r5.s64 = 2384;
	// ld r28,6136(r11)
	r28.u64 = REX_LOAD_U64(ctx.r11.u32 + 6136);
	// add r27,r10,r29
	r27.u64 = ctx.r10.u64 + r29.u64;
	// bl 0x826a1e70
	ctx.lr = 0x823CA23C;
	sub_826A1E70(ctx, base);
	// cmpld cr6,r29,r28
	ctx.cr6.compare<uint64_t>(r29.u64, r28.u64, ctx.xer);
	// bgt cr6,0x823ca2d0
	if (ctx.cr6.gt) goto loc_823CA2D0;
	// cmpld cr6,r28,r27
	ctx.cr6.compare<uint64_t>(r28.u64, r27.u64, ctx.xer);
	// bge cr6,0x823ca2d0
	if (!ctx.cr6.lt) goto loc_823CA2D0;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// rotlwi r10,r28,0
	ctx.r10.u64 = __builtin_rotateleft32(r28.u32, 0);
	// rotlwi r9,r29,0
	ctx.r9.u64 = __builtin_rotateleft32(r29.u32, 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// subf. r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r8,3624(r11)
	REX_STORE_U32(ctx.r11.u32 + 3624, ctx.r8.u32);
	// beq 0x823ca330
	if (ctx.cr0.eq) goto loc_823CA330;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ca29c
	if (ctx.cr6.eq) goto loc_823CA29C;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// subf r7,r9,r26
	ctx.r7.u64 = r26.u64 - ctx.r9.u64;
loc_823CA288:
	// lwzx r9,r7,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x823ca288
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823CA288;
loc_823CA29C:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// clrldi r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r8,3744(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 3744);
	// subf r7,r10,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r10.u64;
	// stw r7,3744(r11)
	REX_STORE_U32(ctx.r11.u32 + 3744, ctx.r7.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// ld r10,3768(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 3768);
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// std r6,3768(r11)
	REX_STORE_U64(ctx.r11.u32 + 3768, ctx.r6.u64);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addi r4,r11,3744
	ctx.r4.s64 = ctx.r11.s64 + 3744;
	// b 0x823ca33c
	goto loc_823CA33C;
loc_823CA2D0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d00
	return;
loc_823CA2DC:
	// lwz r10,248(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 248);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x823ca2ec
	if (!ctx.cr6.eq) goto loc_823CA2EC;
	// stw r10,3616(r11)
	REX_STORE_U32(ctx.r11.u32 + 3616, ctx.r10.u32);
loc_823CA2EC:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r10,3616(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 3616);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823ca330
	if (ctx.cr6.eq) goto loc_823CA330;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// addi r3,r11,3628
	ctx.r3.s64 = ctx.r11.s64 + 3628;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r6,0(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r11,r10,7
	ctx.r11.s64 = ctx.r10.s64 + 7;
	// lwz r5,8(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r7,r11,29,3,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// bl 0x823deb10
	ctx.lr = 0x823CA31C;
	sub_823DEB10(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823ca330
	if (!ctx.cr6.eq) goto loc_823CA330;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d00
	return;
loc_823CA330:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
loc_823CA33C:
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r6,52(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823CA350;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_823D0158) {
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
	// bl 0x823cfe80
	ctx.lr = 0x823D0178;
	sub_823CFE80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823d018c
	if (!ctx.cr6.eq) goto loc_823D018C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d00c8
	ctx.lr = 0x823D018C;
	sub_823D00C8(ctx, base);
loc_823D018C:
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

DEFINE_REX_FUNC(sub_823D1830) {
	REX_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r6,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r5,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,36(r10)
	REX_STORE_U32(ctx.r10.u32 + 36, ctx.r11.u32);
	// stw r11,32(r10)
	REX_STORE_U32(ctx.r10.u32 + 32, ctx.r11.u32);
	// stw r11,44(r10)
	REX_STORE_U32(ctx.r10.u32 + 44, ctx.r11.u32);
	// stw r11,48(r10)
	REX_STORE_U32(ctx.r10.u32 + 48, ctx.r11.u32);
	// stw r9,52(r10)
	REX_STORE_U32(ctx.r10.u32 + 52, ctx.r9.u32);
	// stw r4,40(r10)
	REX_STORE_U32(ctx.r10.u32 + 40, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823D2560) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,51
	ctx.r3.s64 = 51;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823D2E10) {
	REX_FUNC_PROLOGUE();
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// rlwinm r9,r5,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	// lfs f0,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lfs f12,8(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lfs f11,12(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lfs f10,0(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,12(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,4(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,8(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,12(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// stfs f0,-64(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -64, temp.u32);
	// stfs f13,-48(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -48, temp.u32);
	// stfs f12,-40(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -40, temp.u32);
	// stfs f11,-36(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + -36, temp.u32);
	// stfs f10,-32(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// stfs f9,-60(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + -60, temp.u32);
	// stfs f8,-56(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + -56, temp.u32);
	// stfs f7,-52(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + -52, temp.u32);
	// stfs f6,-44(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + -44, temp.u32);
	// stfs f5,-28(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + -28, temp.u32);
	// stfs f4,-24(r1)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r1.u32 + -24, temp.u32);
	// stfs f3,-20(r1)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r1.u32 + -20, temp.u32);
	// beq cr6,0x823d2f2c
	if (ctx.cr6.eq) goto loc_823D2F2C;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r9,r1,-64
	ctx.r9.s64 = ctx.r1.s64 + -64;
	// addi r8,r1,-48
	ctx.r8.s64 = ctx.r1.s64 + -48;
	// addi r30,r1,-32
	r30.s64 = ctx.r1.s64 + -32;
	// li r31,16
	r31.s64 = 16;
	// li r3,32
	ctx.r3.s64 = 32;
	// lvx128 v9,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r4,48
	ctx.r4.s64 = 48;
	// lvx128 v8,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r8,64
	ctx.r8.s64 = 64;
	// lvx128 v7,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r9,80
	ctx.r9.s64 = 80;
loc_823D2EBC:
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// vmrghw128 v0,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), simde_mm_load_si128((simde__m128i*)ctx.v63.u32)));
	// lvx128 v6,r11,r31
	ea = (ctx.r11.u32 + r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpermwi128 v13,v63,85
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xAA));
	// lvx128 v5,r11,r3
	ea = (ctx.r11.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpermwi128 v12,v63,170
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x55));
	// lvx128 v3,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrglw128 v11,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), simde_mm_load_si128((simde__m128i*)ctx.v63.u32)));
	// lvx128 v2,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpermwi128 v10,v63,255
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x0));
	// vmaddfp v0,v0,v8,v6
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v6.f32)));
	// vpermwi128 v4,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v4.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// lvx128 v6,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v13,v13,v7,v5
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v7.f32)), simde_mm_load_ps(ctx.v5.f32)));
	// lvx128 v5,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v12,v12,v9,v6
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v6.f32)));
	// vmaddfp v11,v11,v8,v5
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v5.f32)));
	// vmaddfp v6,v4,v9,v3
	simde_mm_store_ps(ctx.v6.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v4.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v3.f32)));
	// vmaddfp v10,v10,v7,v2
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v7.f32)), simde_mm_load_ps(ctx.v2.f32)));
	// stvx128 v0,r11,r31
	ea = (ctx.r11.u32 + r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r11,r3
	ea = (ctx.r11.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v12,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v11,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v6,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v10,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// bdnz 0x823d2ebc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D2EBC;
loc_823D2F2C:
	// clrlwi r9,r5,30
	ctx.r9.u64 = ctx.r5.u32 & 0x3;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823d2fc0
	if (ctx.cr6.eq) goto loc_823D2FC0;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_823D2F44:
	// lfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f0,f13,f12
	ctx.f11.f64 = double(float(std::fma(ctx.f0.f64, ctx.f13.f64, ctx.f12.f64)));
	// stfs f11,4(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f10,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f9,f8,f10
	ctx.f7.f64 = double(float(std::fma(ctx.f9.f64, ctx.f8.f64, ctx.f10.f64)));
	// stfs f7,8(r11)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f6,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,8(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f3,f5,f4,f6
	ctx.f3.f64 = double(float(std::fma(ctx.f5.f64, ctx.f4.f64, ctx.f6.f64)));
	// stfs f3,12(r11)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f2,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,12(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f13,f1,f0,f2
	ctx.f13.f64 = double(float(std::fma(ctx.f1.f64, ctx.f0.f64, ctx.f2.f64)));
	// lfs f12,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,16(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lfs f11,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f11,f10,f12
	ctx.f9.f64 = double(float(std::fma(ctx.f11.f64, ctx.f10.f64, ctx.f12.f64)));
	// lfs f8,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// stfs f9,20(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lfsu f0,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// lfs f7,4(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f0,f7,f8
	ctx.f6.f64 = double(float(std::fma(ctx.f0.f64, ctx.f7.f64, ctx.f8.f64)));
	// stfsu f6,24(r11)
	ea = 24 + ctx.r11.u32;
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x823d2f44
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D2F44;
loc_823D2FC0:
	// ld r30,-16(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823E63D0) {
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
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r7,r8,8
	ctx.r7.s64 = ctx.r8.s64 + 8;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823e7c80
	ctx.lr = 0x823E6418;
	sub_823E7C80(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823e60b0
	ctx.lr = 0x823E6424;
	sub_823E60B0(ctx, base);
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

DEFINE_REX_FUNC(sub_823E8238) {
	REX_FUNC_PROLOGUE();
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x823e8128
	sub_823E8128(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823E8308) {
	REX_FUNC_PROLOGUE();
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x823e8240
	sub_823E8240(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823E83F0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r3,14
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 14, ctx.xer);
	// blt cr6,0x823e8434
	if (ctx.cr6.lt) goto loc_823E8434;
	// cmpwi cr6,r4,14
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 14, ctx.xer);
	// blt cr6,0x823e8408
	if (ctx.cr6.lt) goto loc_823E8408;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_823E8408:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,8224
	ctx.r11.s64 = ctx.r11.s64 + 8224;
	// rlwinm r9,r3,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// addi r8,r11,-32
	ctx.r8.s64 = ctx.r11.s64 + -32;
	// lhzx r7,r10,r8
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r8.u32);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// srawi r5,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 31;
	// subfc r4,r3,r6
	ctx.xer.ca = ctx.r6.u32 >= ctx.r3.u32;
	ctx.r4.u64 = ctx.r6.u64 - ctx.r3.u64;
	// adde r3,r9,r5
	temp.u8 = (ctx.r9.u32 + ctx.r5.u32 < ctx.r9.u32) | (ctx.r9.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ctx.r9.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
loc_823E8434:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r11,8224
	ctx.r9.s64 = ctx.r11.s64 + 8224;
	// rlwinm r8,r4,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1;
	// lhzx r7,r10,r9
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// srawi r5,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 31;
	// subfc r4,r4,r6
	ctx.xer.ca = ctx.r6.u32 >= ctx.r4.u32;
	ctx.r4.u64 = ctx.r6.u64 - ctx.r4.u64;
	// adde r3,r8,r5
	temp.u8 = (ctx.r8.u32 + ctx.r5.u32 < ctx.r8.u32) | (ctx.r8.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ctx.r8.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823EA150) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// srawi r8,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// lwz r6,12(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r9,r6,-4
	ctx.r9.s64 = ctx.r6.s64 + -4;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// add r7,r8,r4
	ctx.r7.u64 = ctx.r8.u64 + ctx.r4.u64;
	// addi r8,r11,-4
	ctx.r8.s64 = ctx.r11.s64 + -4;
	// addi r11,r7,12
	ctx.r11.s64 = ctx.r7.s64 + 12;
	// lfs f0,3720(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 3720);
	ctx.f0.f64 = double(temp.f32);
loc_823EA188:
	// lwz r6,4(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// lfs f13,8(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lwz r5,8(r9)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// lfs f12,4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r6,r7
	ctx.r6.u64 = ctx.r6.u64 + ctx.r7.u64;
	// add r5,r5,r7
	ctx.r5.u64 = ctx.r5.u64 + ctx.r7.u64;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// addi r4,r11,-12
	ctx.r4.s64 = ctx.r11.s64 + -12;
	// lfs f11,4(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f10,f11
	ctx.f6.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// fadds f5,f7,f8
	ctx.f5.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// fsubs f4,f7,f8
	ctx.f4.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
	// fmuls f3,f13,f9
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// fmuls f2,f12,f9
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// fmuls f1,f6,f0
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmuls f11,f4,f0
	ctx.f11.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmadds f10,f12,f5,f3
	ctx.f10.f64 = double(float(std::fma(ctx.f12.f64, ctx.f5.f64, ctx.f3.f64)));
	// fmsubs f9,f13,f5,f2
	ctx.f9.f64 = double(float(std::fma(ctx.f13.f64, ctx.f5.f64, -ctx.f2.f64)));
	// fadds f8,f10,f1
	ctx.f8.f64 = double(float(ctx.f10.f64 + ctx.f1.f64));
	// stfs f8,0(r10)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// fsubs f7,f1,f10
	ctx.f7.f64 = double(float(ctx.f1.f64 - ctx.f10.f64));
	// stfs f7,-4(r11)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// fadds f6,f9,f11
	ctx.f6.f64 = double(float(ctx.f9.f64 + ctx.f11.f64));
	// stfs f6,4(r10)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// fsubs f5,f9,f11
	ctx.f5.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// stfs f5,0(r11)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lwz r3,12(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// rlwinm r6,r3,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzu r5,16(r9)
	ea = 16 + ctx.r9.u32;
	ctx.r5.u64 = REX_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r6,r7
	ctx.r6.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lfs f4,12(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// add r5,r5,r7
	ctx.r5.u64 = ctx.r5.u64 + ctx.r7.u64;
	// lfsu f13,16(r8)
	ea = 16 + ctx.r8.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r8.u32 = ea;
	// lfs f3,4(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lfs f12,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f1,f12
	ctx.f11.f64 = double(float(ctx.f1.f64 + ctx.f12.f64));
	// fsubs f10,f3,f2
	ctx.f10.f64 = double(float(ctx.f3.f64 - ctx.f2.f64));
	// fadds f9,f2,f3
	ctx.f9.f64 = double(float(ctx.f2.f64 + ctx.f3.f64));
	// fmuls f8,f4,f11
	ctx.f8.f64 = double(float(ctx.f4.f64 * ctx.f11.f64));
	// fsubs f7,f1,f12
	ctx.f7.f64 = double(float(ctx.f1.f64 - ctx.f12.f64));
	// fmuls f6,f4,f10
	ctx.f6.f64 = double(float(ctx.f4.f64 * ctx.f10.f64));
	// fmuls f5,f9,f0
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmadds f4,f13,f10,f8
	ctx.f4.f64 = double(float(std::fma(ctx.f13.f64, ctx.f10.f64, ctx.f8.f64)));
	// fmuls f3,f7,f0
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmsubs f2,f13,f11,f6
	ctx.f2.f64 = double(float(std::fma(ctx.f13.f64, ctx.f11.f64, -ctx.f6.f64)));
	// fadds f1,f4,f5
	ctx.f1.f64 = double(float(ctx.f4.f64 + ctx.f5.f64));
	// stfs f1,8(r10)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// fsubs f13,f5,f4
	ctx.f13.f64 = double(float(ctx.f5.f64 - ctx.f4.f64));
	// stfs f13,-12(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + -12, temp.u32);
	// fadds f12,f2,f3
	ctx.f12.f64 = double(float(ctx.f2.f64 + ctx.f3.f64));
	// stfs f12,12(r10)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// fsubs f11,f2,f3
	ctx.f11.f64 = double(float(ctx.f2.f64 - ctx.f3.f64));
	// stfs f11,-8(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x823ea188
	if (ctx.cr6.lt) goto loc_823EA188;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823EF2F8) {
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
	// bl 0x826a1cb0
	ctx.lr = 0x823EF300;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r5,16
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 16, ctx.xer);
	// bge cr6,0x823ef3b8
	if (!ctx.cr6.lt) goto loc_823EF3B8;
	// cmplwi cr6,r5,8
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 8, ctx.xer);
	// blt cr6,0x823ef344
	if (ctx.cr6.lt) goto loc_823EF344;
	// clrlwi r11,r4,29
	ctx.r11.u64 = ctx.r4.u32 & 0x7;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823ef344
	if (!ctx.cr6.eq) goto loc_823EF344;
	// ld r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r4.u32 + 0);
	// addi r31,r3,8
	r31.s64 = ctx.r3.s64 + 8;
	// addi r30,r4,8
	r30.s64 = ctx.r4.s64 + 8;
	// addi r29,r29,-8
	r29.s64 = r29.s64 + -8;
	// std r11,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
loc_823EF344:
	// clrlwi r11,r30,30
	ctx.r11.u64 = r30.u32 & 0x3;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823ef384
	if (!ctx.cr6.eq) goto loc_823EF384;
	// cmplwi cr6,r29,4
	ctx.cr6.compare<uint32_t>(r29.u32, 4, ctx.xer);
	// blt cr6,0x823ef384
	if (ctx.cr6.lt) goto loc_823EF384;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r5,r29,0,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r28,r29,30,2,31
	r28.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 30) & 0x3FFFFFFF;
	// bl 0x826a22f8
	ctx.lr = 0x823EF36C;
	sub_826A22F8(ctx, base);
	// rlwinm r11,r29,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFC;
	// add r31,r11,r31
	r31.u64 = ctx.r11.u64 + r31.u64;
	// add r30,r11,r30
	r30.u64 = ctx.r11.u64 + r30.u64;
loc_823EF378:
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// addi r29,r29,-4
	r29.s64 = r29.s64 + -4;
	// bne 0x823ef378
	if (!ctx.cr0.eq) goto loc_823EF378;
loc_823EF384:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x823ef5e0
	if (ctx.cr6.eq) goto loc_823EF5E0;
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// subf r11,r31,r30
	ctx.r11.u64 = r30.u64 - r31.u64;
	// lwz r10,-30916(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + -30916);
loc_823EF398:
	// lbzx r9,r11,r31
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + r31.u32);
	// subf. r29,r10,r29
	r29.u64 = r29.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// stb r9,0(r31)
	REX_STORE_U8(r31.u32 + 0, ctx.r9.u8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// bne 0x823ef398
	if (!ctx.cr0.eq) goto loc_823EF398;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d00
	return;
loc_823EF3B8:
	// neg r11,r26
	ctx.r11.s64 = static_cast<int64_t>(-r26.u64);
	// cmplwi cr6,r29,1024
	ctx.cr6.compare<uint32_t>(r29.u32, 1024, ctx.xer);
	// srawi r10,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 4;
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// clrlwi r8,r10,29
	ctx.r8.u64 = ctx.r10.u32 & 0x7;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// blt cr6,0x823ef3d8
	if (ctx.cr6.lt) goto loc_823EF3D8;
	// li r9,1024
	ctx.r9.s64 = 1024;
loc_823EF3D8:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823ef400
	if (ctx.cr6.eq) goto loc_823EF400;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// rlwinm r9,r9,25,7,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 25) & 0x1FFFFFF;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823EF3F4:
	// dcbt r10,r4
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// bdnz 0x823ef3f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823EF3F4;
loc_823EF400:
	// li r27,15
	r27.s64 = 15;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ef42c
	if (ctx.cr6.eq) goto loc_823EF42C;
	// lvx128 v63,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r30,r11,r4
	r30.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lvx128 v62,r4,r27
	ea = (ctx.r4.u32 + r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// subf r29,r11,r29
	r29.u64 = r29.u64 - ctx.r11.u64;
	// lvsl v0,r0,r4
	temp.u32 = ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r31,r11,r26
	r31.u64 = ctx.r11.u64 + r26.u64;
	// vperm128 v63,v63,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvlx128 v63,r0,r26
	ea = r26.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
loc_823EF42C:
	// rlwinm r11,r29,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 28) & 0xFFFFFFF;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x823ef43c
	if (!ctx.cr6.lt) goto loc_823EF43C;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_823EF43C:
	// rlwinm r11,r8,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r10,r11,r29
	ctx.r10.u64 = r29.u64 - ctx.r11.u64;
	// rlwinm r28,r10,0,0,24
	r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r28,128
	ctx.cr6.compare<uint32_t>(r28.u32, 128, ctx.xer);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// blt cr6,0x823ef458
	if (ctx.cr6.lt) goto loc_823EF458;
	// li r10,128
	ctx.r10.s64 = 128;
loc_823EF458:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823ef478
	if (ctx.cr6.eq) goto loc_823EF478;
	// addi r9,r31,127
	ctx.r9.s64 = r31.s64 + 127;
loc_823EF468:
	// dcbzl r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823ef468
	if (ctx.cr6.lt) goto loc_823EF468;
loc_823EF478:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lvsl v0,r0,r30
	temp.u32 = r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// beq cr6,0x823ef4b0
	if (ctx.cr6.eq) goto loc_823EF4B0;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_823EF494:
	// lvx128 v63,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r30,r11
	ea = (r30.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// vperm128 v62,v63,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx128 v62,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// bdnz 0x823ef494
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823EF494;
loc_823EF4B0:
	// rlwinm r11,r8,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// clrlwi r10,r30,28
	ctx.r10.u64 = r30.u32 & 0xF;
	// subf r29,r11,r29
	r29.u64 = r29.u64 - ctx.r11.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x823ef564
	if (!ctx.cr6.eq) goto loc_823EF564;
	// cmplwi cr6,r29,128
	ctx.cr6.compare<uint32_t>(r29.u32, 128, ctx.xer);
	// blt cr6,0x823ef588
	if (ctx.cr6.lt) goto loc_823EF588;
	// rlwinm r11,r29,25,7,31
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 25) & 0x1FFFFFF;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r8,64
	ctx.r8.s64 = 64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r9,80
	ctx.r9.s64 = 80;
	// li r10,96
	ctx.r10.s64 = 96;
	// li r11,112
	ctx.r11.s64 = 112;
loc_823EF4F0:
	// cmplwi cr6,r29,1024
	ctx.cr6.compare<uint32_t>(r29.u32, 1024, ctx.xer);
	// ble cr6,0x823ef500
	if (!ctx.cr6.gt) goto loc_823EF500;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// dcbt r4,r30
loc_823EF500:
	// cmplwi cr6,r29,256
	ctx.cr6.compare<uint32_t>(r29.u32, 256, ctx.xer);
	// ble cr6,0x823ef510
	if (!ctx.cr6.gt) goto loc_823EF510;
	// li r4,128
	ctx.r4.s64 = 128;
	// dcbzl r4,r31
	ea = (ctx.r4.u32 + r31.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
loc_823EF510:
	// lvx128 v61,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r29,r29,-128
	r29.s64 = r29.s64 + -128;
	// lvx128 v60,r30,r5
	ea = (r30.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v59,r30,r6
	ea = (r30.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v58,r30,r7
	ea = (r30.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v57,r30,r8
	ea = (r30.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v56,r30,r9
	ea = (r30.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v55,r30,r10
	ea = (r30.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v54,r30,r11
	ea = (r30.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r30,128
	r30.s64 = r30.s64 + 128;
	// stvx128 v61,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v60,r31,r5
	ea = (r31.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v59,r31,r6
	ea = (r31.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v58,r31,r7
	ea = (r31.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v57,r31,r8
	ea = (r31.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v56,r31,r9
	ea = (r31.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v55,r31,r10
	ea = (r31.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v54,r31,r11
	ea = (r31.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r31,r31,128
	r31.s64 = r31.s64 + 128;
	// bdnz 0x823ef4f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823EF4F0;
	// b 0x823ef588
	goto loc_823EF588;
loc_823EF564:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f1780
	ctx.lr = 0x823EF574;
	sub_823F1780(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// add r31,r28,r31
	r31.u64 = r28.u64 + r31.u64;
	// add r30,r28,r30
	r30.u64 = r28.u64 + r30.u64;
	// subf r29,r28,r29
	r29.u64 = r29.u64 - r28.u64;
	// lvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_823EF588:
	// cmplwi cr6,r29,16
	ctx.cr6.compare<uint32_t>(r29.u32, 16, ctx.xer);
	// blt cr6,0x823ef5bc
	if (ctx.cr6.lt) goto loc_823EF5BC;
	// rlwinm r10,r29,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 28) & 0xFFFFFFF;
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823EF59C:
	// lvx128 v63,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r29,r29,-16
	r29.s64 = r29.s64 + -16;
	// lvx128 v62,r30,r11
	ea = (r30.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// vperm128 v53,v63,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx128 v53,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// bdnz 0x823ef59c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823EF59C;
loc_823EF5BC:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x823ef5e0
	if (ctx.cr6.eq) goto loc_823EF5E0;
	// add r11,r30,r29
	ctx.r11.u64 = r30.u64 + r29.u64;
	// lvx128 v52,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,-1
	ctx.r10.s64 = -1;
	// lvsl v0,r30,r29
	temp.u32 = r30.u32 + r29.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvx128 v51,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v50,v52,v51,v0
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvrx128 v50,r31,r29
	ea = r31.u32 + r29.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v50.u8[i]);
loc_823EF5E0:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8240EA50) {
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
	// bl 0x826a1cac
	ctx.lr = 0x8240EA58;
	// stfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -80, f30.u64);
	// stfd f31,-72(r1)
	REX_STORE_U64(ctx.r1.u32 + -72, f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
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
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8240ea8c
	if (ctx.cr6.eq) goto loc_8240EA8C;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x82408848
	ctx.lr = 0x8240EA88;
	sub_82408848(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
loc_8240EA8C:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8240eaa8
	if (ctx.cr6.eq) goto loc_8240EAA8;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824094e0
	ctx.lr = 0x8240EAA4;
	sub_824094E0(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
loc_8240EAA8:
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
	// lfs f31,3716(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 3716);
	f31.f64 = double(temp.f32);
	// fmr f30,f31
	f30.f64 = f31.f64;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r28,r10,r6
	r28.u64 = ctx.r10.u64 + ctx.r6.u64;
	// add r26,r9,r5
	r26.u64 = ctx.r9.u64 + ctx.r5.u64;
	// bne 0x8240eb10
	if (!ctx.cr0.eq) goto loc_8240EB10;
	// li r29,0
	r29.s64 = 0;
	// li r30,1
	r30.s64 = 1;
	// b 0x8240eb18
	goto loc_8240EB18;
loc_8240EB10:
	// addi r29,r11,-1
	r29.s64 = ctx.r11.s64 + -1;
	// li r30,-1
	r30.s64 = -1;
loc_8240EB18:
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8240eb30
	if (ctx.cr6.eq) goto loc_8240EB30;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82409a88
	ctx.lr = 0x8240EB30;
	sub_82409A88(ctx, base);
loc_8240EB30:
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8240ed34
	if (!ctx.cr6.gt) goto loc_8240ED34;
	// add r11,r30,r29
	ctx.r11.u64 = r30.u64 + r29.u64;
	// subf r9,r30,r29
	ctx.r9.u64 = r29.u64 - r30.u64;
	// rlwinm r27,r30,2,0,29
	r27.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r30,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r29,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r6,r11,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r7,r9,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r30,r27,r28
	r30.u64 = r28.u64 - r27.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r29,-32256
	r29.s64 = -2113929216;
	// lis r28,-32256
	r28.s64 = -2113929216;
	// lfd f8,20216(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f8.u64 = REX_LOAD_U64(ctx.r11.u32 + 20216);
	// lfs f9,15196(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15196);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,20208(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 20208);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,17280(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 17280);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,3800(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 3800);
	ctx.f12.f64 = double(temp.f32);
	// lfs f7,13256(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 13256);
	ctx.f7.f64 = double(temp.f32);
loc_8240EB90:
	// add r11,r10,r25
	ctx.r11.u64 = ctx.r10.u64 + r25.u64;
	// lfsx f0,r10,r25
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + r25.u32);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + f31.f64));
	// rlwinm r9,r4,2,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xC;
	// lwz r8,92(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lfs f13,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 + f30.f64));
	// lfsx f6,r9,r26
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + r26.u32);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f0,f0,f7
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f7.f64));
	// fmuls f13,f13,f7
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f7.f64));
	// fadds f5,f0,f6
	ctx.f5.f64 = double(float(ctx.f0.f64 + ctx.f6.f64));
	// fadds f6,f13,f6
	ctx.f6.f64 = double(float(ctx.f13.f64 + ctx.f6.f64));
	// fctiwz f5,f5
	ctx.f5.s64 = std::isnan(ctx.f5.f64) ? int64_t(0x80000000U) : (ctx.f5.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f5.f64));
	// stfd f5,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f5.u64);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// fctiwz f6,f6
	ctx.f6.s64 = std::isnan(ctx.f6.f64) ? int64_t(0x80000000U) : (ctx.f6.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f6,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f6.u64);
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// beq cr6,0x8240ecb8
	if (ctx.cr6.eq) goto loc_8240ECB8;
	// extsw r8,r5
	ctx.r8.s64 = ctx.r5.s32;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// extsw r29,r9
	r29.s64 = ctx.r9.s32;
	// std r8,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfd f6,88(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// std r29,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, r29.u64);
	// lfd f5,96(r1)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f5,f5
	ctx.f5.f64 = double(ctx.f5.s64);
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// frsp f5,f5
	ctx.f5.f64 = double(float(ctx.f5.f64));
	// lfs f4,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// fcfid f6,f6
	ctx.f6.f64 = double(ctx.f6.s64);
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// fsubs f0,f0,f5
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f5.f64));
	// frsp f6,f6
	ctx.f6.f64 = double(float(ctx.f6.f64));
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fsubs f13,f13,f6
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f6.f64));
	// fmadds f6,f0,f11,f4
	ctx.f6.f64 = double(float(std::fma(ctx.f0.f64, ctx.f11.f64, ctx.f4.f64)));
	// stfs f6,16(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f6,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f6,f0,f10,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f0.f64, ctx.f10.f64, ctx.f6.f64)));
	// stfs f6,16(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lfs f6,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fmadds f6,f0,f9,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f0.f64, ctx.f9.f64, ctx.f6.f64)));
	// stfs f6,16(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// fmul f0,f0,f8
	ctx.f0.f64 = ctx.f0.f64 * ctx.f8.f64;
	// lfs f6,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f6,f13,f11,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f13.f64, ctx.f11.f64, ctx.f6.f64)));
	// stfs f6,20(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// addi r8,r11,20
	ctx.r8.s64 = ctx.r11.s64 + 20;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f6,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// fmul f5,f13,f8
	ctx.f5.f64 = ctx.f13.f64 * ctx.f8.f64;
	// fmadds f6,f13,f10,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f13.f64, ctx.f10.f64, ctx.f6.f64)));
	// stfs f6,20(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// addi r8,r11,20
	ctx.r8.s64 = ctx.r11.s64 + 20;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// frsp f31,f0
	f31.f64 = double(float(ctx.f0.f64));
	// lfs f0,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f13,f9,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f9.f64, ctx.f0.f64)));
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// addi r8,r11,20
	ctx.r8.s64 = ctx.r11.s64 + 20;
	// frsp f30,f5
	f30.f64 = double(float(ctx.f5.f64));
loc_8240ECB8:
	// cmpwi cr6,r9,32767
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 32767, ctx.xer);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// blt cr6,0x8240ecc8
	if (ctx.cr6.lt) goto loc_8240ECC8;
	// li r11,32767
	ctx.r11.s64 = 32767;
loc_8240ECC8:
	// cmpwi cr6,r11,-32767
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -32767, ctx.xer);
	// ble cr6,0x8240ece0
	if (!ctx.cr6.gt) goto loc_8240ECE0;
	// cmpwi cr6,r9,32767
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 32767, ctx.xer);
	// blt cr6,0x8240ece4
	if (ctx.cr6.lt) goto loc_8240ECE4;
	// li r9,32767
	ctx.r9.s64 = 32767;
	// b 0x8240ece4
	goto loc_8240ECE4;
loc_8240ECE0:
	// li r9,-32767
	ctx.r9.s64 = -32767;
loc_8240ECE4:
	// cmpwi cr6,r5,32767
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 32767, ctx.xer);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// blt cr6,0x8240ecf4
	if (ctx.cr6.lt) goto loc_8240ECF4;
	// li r11,32767
	ctx.r11.s64 = 32767;
loc_8240ECF4:
	// cmpwi cr6,r11,-32767
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -32767, ctx.xer);
	// ble cr6,0x8240ed0c
	if (!ctx.cr6.gt) goto loc_8240ED0C;
	// cmpwi cr6,r5,32767
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 32767, ctx.xer);
	// blt cr6,0x8240ed10
	if (ctx.cr6.lt) goto loc_8240ED10;
	// li r5,32767
	ctx.r5.s64 = 32767;
	// b 0x8240ed10
	goto loc_8240ED10;
loc_8240ED0C:
	// li r5,-32767
	ctx.r5.s64 = -32767;
loc_8240ED10:
	// rlwimi r9,r5,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// stwux r9,r30,r27
	ea = r30.u32 + r27.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	r30.u32 = ea;
	// add r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 + ctx.r10.u64;
	// add r7,r3,r7
	ctx.r7.u64 = ctx.r3.u64 + ctx.r7.u64;
	// add r6,r3,r6
	ctx.r6.u64 = ctx.r3.u64 + ctx.r6.u64;
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8240eb90
	if (ctx.cr6.lt) goto loc_8240EB90;
loc_8240ED34:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_8241C0E0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r10,7
	ctx.r10.s64 = 7;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8241C0EC:
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8241c118
	if (ctx.cr6.eq) goto loc_8241C118;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_8241C104:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r9,32(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8241c104
	if (!ctx.cr6.eq) goto loc_8241C104;
loc_8241C118:
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bdnz 0x8241c0ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8241C0EC;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8241E990) {
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
	// bl 0x826a1ca4
	ctx.lr = 0x8241E998;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r4,18261
	ctx.r4.s64 = 1196752896;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r4,r4,16964
	ctx.r4.u64 = ctx.r4.u64 | 16964;
	// bl 0x82449658
	ctx.lr = 0x8241E9B0;
	sub_82449658(ctx, base);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// li r24,0
	r24.s64 = 0;
	// li r10,40
	ctx.r10.s64 = 40;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// std r24,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, r24.u64);
	// li r6,1
	ctx.r6.s64 = 1;
	// std r24,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, r24.u64);
	// li r5,40
	ctx.r5.s64 = 40;
	// std r24,16(r11)
	REX_STORE_U64(ctx.r11.u32 + 16, r24.u64);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// std r24,24(r11)
	REX_STORE_U64(ctx.r11.u32 + 24, r24.u64);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// std r24,32(r11)
	REX_STORE_U64(ctx.r11.u32 + 32, r24.u64);
	// stw r10,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// mr r23,r24
	r23.u64 = r24.u64;
	// mr r25,r24
	r25.u64 = r24.u64;
	// bl 0x82449708
	ctx.lr = 0x8241E9F8;
	sub_82449708(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// blt 0x8241ed74
	if (ctx.cr0.lt) goto loc_8241ED74;
	// lwz r11,52(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 52);
	// mr r31,r24
	r31.u64 = r24.u64;
	// b 0x8241ea28
	goto loc_8241EA28;
loc_8241EA0C:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8241ea24
	if (ctx.cr6.eq) goto loc_8241EA24;
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r9,24
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 24, ctx.xer);
	// beq cr6,0x8241ea34
	if (ctx.cr6.eq) goto loc_8241EA34;
loc_8241EA24:
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
loc_8241EA28:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8241ea0c
	if (!ctx.cr6.eq) goto loc_8241EA0C;
	// b 0x8241ea38
	goto loc_8241EA38;
loc_8241EA34:
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
loc_8241EA38:
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8241ea5c
	if (ctx.cr6.eq) goto loc_8241EA5C;
loc_8241EA48:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8241ea48
	if (!ctx.cr6.eq) goto loc_8241EA48;
loc_8241EA5C:
	// li r26,-1
	r26.s64 = -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8241ebe8
	if (ctx.cr6.eq) goto loc_8241EBE8;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// bl 0x823f02b8
	ctx.lr = 0x8241EA74;
	sub_823F02B8(ctx, base);
	// mr. r23,r3
	r23.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r23.s32, 0, ctx.xer);
	// beq 0x8241eaa8
	if (ctx.cr0.eq) goto loc_8241EAA8;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a2e60
	ctx.lr = 0x8241EA90;
	sub_826A2E60(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x823f02b8
	ctx.lr = 0x8241EAA0;
	sub_823F02B8(ctx, base);
	// mr. r25,r3
	r25.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r25.s32, 0, ctx.xer);
	// bne 0x8241eab4
	if (!ctx.cr0.eq) goto loc_8241EAB4;
loc_8241EAA8:
	// lis r28,-32761
	r28.s64 = -2147024896;
	// ori r28,r28,14
	r28.u64 = r28.u64 | 14;
	// b 0x8241ed74
	goto loc_8241ED74;
loc_8241EAB4:
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// rlwinm r27,r11,3,0,28
	r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// bl 0x826a2e60
	ctx.lr = 0x8241EACC;
	sub_826A2E60(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// mr r29,r31
	r29.u64 = r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// beq cr6,0x8241eb94
	if (ctx.cr6.eq) goto loc_8241EB94;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + r25.u64;
	// addi r31,r11,2
	r31.s64 = ctx.r11.s64 + 2;
loc_8241EAEC:
	// li r11,-1
	ctx.r11.s64 = -1;
	// sth r11,0(r31)
	REX_STORE_U16(r31.u32 + 0, ctx.r11.u16);
	// lwz r11,36(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 36);
	// sth r11,-2(r31)
	REX_STORE_U16(r31.u32 + -2, ctx.r11.u16);
	// lwz r11,88(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 88);
	// stw r11,2(r31)
	REX_STORE_U32(r31.u32 + 2, ctx.r11.u32);
	// lwz r4,32(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8241eb84
	if (ctx.cr6.eq) goto loc_8241EB84;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,7
	ctx.r6.s64 = 7;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82449708
	ctx.lr = 0x8241EB28;
	sub_82449708(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8241ed74
	if (ctx.cr0.lt) goto loc_8241ED74;
	// lwz r9,124(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8241eb64
	if (ctx.cr6.eq) goto loc_8241EB64;
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
loc_8241EB48:
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8241eb64
	if (ctx.cr6.eq) goto loc_8241EB64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8241eb48
	if (ctx.cr6.lt) goto loc_8241EB48;
loc_8241EB64:
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8241eb80
	if (!ctx.cr6.eq) goto loc_8241EB80;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r8,r11,r23
	REX_STORE_U32(ctx.r11.u32 + r23.u32, ctx.r8.u32);
	// lwz r11,124(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
loc_8241EB80:
	// sth r10,0(r31)
	REX_STORE_U16(r31.u32 + 0, ctx.r10.u16);
loc_8241EB84:
	// lwz r29,12(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 12);
	// addi r31,r31,-8
	r31.s64 = r31.s64 + -8;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x8241eaec
	if (!ctx.cr6.eq) goto loc_8241EAEC;
loc_8241EB94:
	// lwz r11,124(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8241ebc4
	if (ctx.cr6.eq) goto loc_8241EBC4;
	// li r8,10
	ctx.r8.s64 = 10;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// li r6,1
	ctx.r6.s64 = 1;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82449708
	ctx.lr = 0x8241EBBC;
	sub_82449708(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// blt 0x8241ed74
	if (ctx.cr0.lt) goto loc_8241ED74;
loc_8241EBC4:
	// li r8,5
	ctx.r8.s64 = 5;
	// addi r7,r1,136
	ctx.r7.s64 = ctx.r1.s64 + 136;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82449708
	ctx.lr = 0x8241EBE0;
	sub_82449708(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// blt 0x8241ed74
	if (ctx.cr0.lt) goto loc_8241ED74;
loc_8241EBE8:
	// lwz r4,120(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 120);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8241ec14
	if (ctx.cr6.eq) goto loc_8241EC14;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r1,148
	ctx.r7.s64 = ctx.r1.s64 + 148;
	// li r6,7
	ctx.r6.s64 = 7;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82449708
	ctx.lr = 0x8241EC0C;
	sub_82449708(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// blt 0x8241ed74
	if (ctx.cr0.lt) goto loc_8241ED74;
loc_8241EC14:
	// lwz r4,112(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 112);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8241ec68
	if (ctx.cr6.eq) goto loc_8241EC68;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r5,116(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 116);
	// addi r7,r1,120
	ctx.r7.s64 = ctx.r1.s64 + 120;
	// li r6,5
	ctx.r6.s64 = 5;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82449708
	ctx.lr = 0x8241EC38;
	sub_82449708(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8241ed74
	if (ctx.cr0.lt) goto loc_8241ED74;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r11,-26856
	ctx.r4.s64 = ctx.r11.s64 + -26856;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5
	ctx.r6.s64 = 5;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82449708
	ctx.lr = 0x8241EC60;
	sub_82449708(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8241ed74
	if (ctx.cr0.lt) goto loc_8241ED74;
loc_8241EC68:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r11,-27372
	ctx.r4.s64 = ctx.r11.s64 + -27372;
	// addi r7,r1,116
	ctx.r7.s64 = ctx.r1.s64 + 116;
	// li r6,5
	ctx.r6.s64 = 5;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82449708
	ctx.lr = 0x8241EC88;
	sub_82449708(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8241ed74
	if (ctx.cr0.lt) goto loc_8241ED74;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82449678
	ctx.lr = 0x8241EC98;
	sub_82449678(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,32768
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 32768, ctx.xer);
	// bgt cr6,0x8241ed58
	if (ctx.cr6.gt) goto loc_8241ED58;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8241da80
	ctx.lr = 0x8241ECB0;
	sub_8241DA80(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// blt 0x8241ed74
	if (ctx.cr0.lt) goto loc_8241ED74;
	// lwz r10,96(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 96);
	// addi r9,r31,1
	ctx.r9.s64 = r31.s64 + 1;
	// lwz r11,92(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 92);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 + ctx.r11.u64;
	// bl 0x8269cc20
	ctx.lr = 0x8241ECDC;
	sub_8269CC20(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8241ed18
	if (ctx.cr6.eq) goto loc_8241ED18;
	// addi r10,r25,-4
	ctx.r10.s64 = r25.s64 + -4;
loc_8241ECF0:
	// lwz r9,108(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 108);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r8,8(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + r31.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stwu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// lwz r9,132(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8241ecf0
	if (ctx.cr6.lt) goto loc_8241ECF0;
loc_8241ED18:
	// lwz r11,92(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 92);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r6,84(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 84);
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// bl 0x824499e8
	ctx.lr = 0x8241ED30;
	sub_824499E8(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// blt 0x8241ed74
	if (ctx.cr0.lt) goto loc_8241ED74;
	// lwz r11,96(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 96);
	// lwz r10,108(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 108);
	// add r11,r31,r11
	ctx.r11.u64 = r31.u64 + ctx.r11.u64;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// stw r11,96(r30)
	REX_STORE_U32(r30.u32 + 96, ctx.r11.u32);
	// stw r11,104(r30)
	REX_STORE_U32(r30.u32 + 104, ctx.r11.u32);
	// stw r10,108(r30)
	REX_STORE_U32(r30.u32 + 108, ctx.r10.u32);
	// b 0x8241ed70
	goto loc_8241ED70;
loc_8241ED58:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r5,2030
	ctx.r5.s64 = 2030;
	// addi r6,r11,-27320
	ctx.r6.s64 = ctx.r11.s64 + -27320;
	// addi r4,r30,16
	ctx.r4.s64 = r30.s64 + 16;
	// bl 0x8241a718
	ctx.lr = 0x8241ED70;
	sub_8241A718(ctx, base);
loc_8241ED70:
	// mr r28,r24
	r28.u64 = r24.u64;
loc_8241ED74:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x823f0350
	ctx.lr = 0x8241ED80;
	sub_823F0350(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x823f0350
	ctx.lr = 0x8241ED8C;
	sub_823F0350(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82449690
	ctx.lr = 0x8241ED94;
	sub_82449690(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_824457A0) {
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
	// beq cr6,0x824458b0
	if (ctx.cr6.eq) goto loc_824458B0;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x824458b0
	if (!ctx.cr6.eq) goto loc_824458B0;
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r10,28(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x824458b0
	if (!ctx.cr6.eq) goto loc_824458B0;
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r10,24(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x824458b0
	if (!ctx.cr6.eq) goto loc_824458B0;
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,32(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x824458b0
	if (!ctx.cr6.eq) goto loc_824458B0;
	// lwz r3,16(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r4,16(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82445828
	if (ctx.cr6.eq) goto loc_82445828;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82445824;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82445834
	goto loc_82445834;
loc_82445828:
	// addi r11,r4,0
	ctx.r11.s64 = ctx.r4.s64 + 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_82445834:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x824458b0
	if (ctx.cr6.eq) goto loc_824458B0;
	// lwz r3,20(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 20);
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82445860
	if (ctx.cr6.eq) goto loc_82445860;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8244585C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8244586c
	goto loc_8244586C;
loc_82445860:
	// addi r11,r4,0
	ctx.r11.s64 = ctx.r4.s64 + 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_8244586C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x824458b0
	if (ctx.cr6.eq) goto loc_824458B0;
	// lwz r3,36(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 36);
	// lwz r4,36(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82445898
	if (ctx.cr6.eq) goto loc_82445898;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82445894;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x824458a4
	goto loc_824458A4;
loc_82445898:
	// addi r11,r4,0
	ctx.r11.s64 = ctx.r4.s64 + 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_824458A4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne cr6,0x824458b4
	if (!ctx.cr6.eq) goto loc_824458B4;
loc_824458B0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824458B4:
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

DEFINE_REX_FUNC(sub_8244A798) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,1816
	ctx.r11.s64 = ctx.r11.s64 + 1816;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8244A890) {
	REX_FUNC_PROLOGUE();
	// b 0x8244a820
	sub_8244A820(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8244AF60) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c80
	ctx.lr = 0x8244AF68;
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -160, f31.u64);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r9,r1,152
	ctx.r9.s64 = ctx.r1.s64 + 152;
	// lwz r10,112(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 112);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,364(r1)
	REX_STORE_U32(ctx.r1.u32 + 364, ctx.r4.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r23,52(r3)
	r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// lwz r8,60(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// std r11,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, ctx.r11.u64);
	// stw r11,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// stw r10,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r5,372(r1)
	REX_STORE_U32(ctx.r1.u32 + 372, ctx.r5.u32);
	// lwz r10,152(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r25,160(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r11,156(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// oris r21,r11,7967
	r21.u64 = ctx.r11.u64 | 522125312;
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// rlwimi r25,r8,14,16,17
	r25.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 14) & 0xC000) | (r25.u64 & 0xFFFFFFFFFFFF3FFF);
	// ori r21,r21,61440
	r21.u64 = r21.u64 | 61440;
	// rlwimi r23,r10,0,0,26
	r23.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFE0) | (r23.u64 & 0xFFFFFFFF0000001F);
	// beq cr6,0x8244b104
	if (ctx.cr6.eq) goto loc_8244B104;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r3,-32254
	ctx.r3.s64 = -2113798144;
	// lis r30,-32254
	r30.s64 = -2113798144;
	// lis r29,-32254
	r29.s64 = -2113798144;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfd f31,3728(r9)
	f31.u64 = REX_LOAD_U64(ctx.r9.u32 + 3728);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
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
	// lis r31,-32254
	r31.s64 = -2113798144;
	// lis r28,-32128
	r28.s64 = -2105540608;
	// addi r3,r3,2732
	ctx.r3.s64 = ctx.r3.s64 + 2732;
	// addi r30,r30,2220
	r30.s64 = r30.s64 + 2220;
	// addi r29,r29,2184
	r29.s64 = r29.s64 + 2184;
	// stw r3,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// addi r11,r11,2408
	ctx.r11.s64 = ctx.r11.s64 + 2408;
	// stw r30,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r30.u32);
	// addi r24,r10,18144
	r24.s64 = ctx.r10.s64 + 18144;
	// stw r29,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r29.u32);
	// addi r18,r9,2384
	r18.s64 = ctx.r9.s64 + 2384;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r17,r8,2688
	r17.s64 = ctx.r8.s64 + 2688;
	// addi r16,r7,2584
	r16.s64 = ctx.r7.s64 + 2584;
	// addi r15,r6,2528
	r15.s64 = ctx.r6.s64 + 2528;
	// addi r14,r5,2496
	r14.s64 = ctx.r5.s64 + 2496;
	// addi r20,r4,2444
	r20.s64 = ctx.r4.s64 + 2444;
	// addi r19,r31,2260
	r19.s64 = r31.s64 + 2260;
	// addi r22,r28,-27496
	r22.s64 = r28.s64 + -27496;
loc_8244B04C:
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,8(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// stw r9,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r28,24(r8)
	r28.u64 = REX_LOAD_U32(ctx.r8.u32 + 24);
	// bne cr6,0x8244b078
	if (!ctx.cr6.eq) goto loc_8244B078;
	// lwz r4,96(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// b 0x8244b0e8
	goto loc_8244B0E8;
loc_8244B078:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x8244b094
	if (ctx.cr6.eq) goto loc_8244B094;
	// lwz r11,372(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// b 0x8244b0f8
	goto loc_8244B0F8;
loc_8244B094:
	// mr r30,r22
	r30.u64 = r22.u64;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// li r8,0
	ctx.r8.s64 = 0;
loc_8244B0A0:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
loc_8244B0A8:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	// beq 0x8244b0cc
	if (ctx.cr0.eq) goto loc_8244B0CC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8244b0a8
	if (ctx.cr6.eq) goto loc_8244B0A8;
loc_8244B0CC:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8244b120
	if (ctx.cr0.eq) goto loc_8244B120;
	// addi r8,r8,12
	ctx.r8.s64 = ctx.r8.s64 + 12;
	// addi r30,r30,12
	r30.s64 = r30.s64 + 12;
	// cmplwi cr6,r8,180
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 180, ctx.xer);
	// blt cr6,0x8244b0a0
	if (ctx.cr6.lt) goto loc_8244B0A0;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
loc_8244B0E8:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mtctr r27
	ctx.ctr.u64 = r27.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bctrl 
	ctx.lr = 0x8244B0F8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8244B0F8:
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8244b04c
	if (!ctx.cr6.eq) goto loc_8244B04C;
loc_8244B104:
	// lwz r11,364(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// stw r23,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r23.u32);
	// stw r21,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r21.u32);
	// stw r25,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r25.u32);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x826a1cd0
	return;
loc_8244B120:
	// lbz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
loc_8244B128:
	// lwz r9,88(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// slw r10,r10,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// and. r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8244b140
	if (ctx.cr0.eq) goto loc_8244B140;
	// lwz r4,100(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// b 0x8244b0e8
	goto loc_8244B0E8;
loc_8244B140:
	// lwz r9,88(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// li r29,0
	r29.s64 = 0;
	// lbz r11,5(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 5);
	// li r31,0
	r31.s64 = 0;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// stw r10,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// blt cr6,0x8244b350
	if (ctx.cr6.lt) goto loc_8244B350;
	// beq cr6,0x8244b338
	if (ctx.cr6.eq) goto loc_8244B338;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x8244b300
	if (ctx.cr6.lt) goto loc_8244B300;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x8244b3d4
	if (!ctx.cr6.eq) goto loc_8244B3D4;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8244b19c
	if (ctx.cr6.lt) goto loc_8244B19C;
	// bne cr6,0x8244b1a4
	if (!ctx.cr6.eq) goto loc_8244B1A4;
	// li r10,15
	ctx.r10.s64 = 15;
	// li r9,1
	ctx.r9.s64 = 1;
	// b 0x8244b1a4
	goto loc_8244B1A4;
loc_8244B19C:
	// li r10,63
	ctx.r10.s64 = 63;
	// li r9,4
	ctx.r9.s64 = 4;
loc_8244B1A4:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8244b1cc
	if (ctx.cr6.eq) goto loc_8244B1CC;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8244b1cc
	if (ctx.cr6.eq) goto loc_8244B1CC;
	// ble cr6,0x8244b1d0
	if (!ctx.cr6.gt) goto loc_8244B1D0;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bgt cr6,0x8244b1d0
	if (ctx.cr6.gt) goto loc_8244B1D0;
loc_8244B1C4:
	// lfd f0,8(r3)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r3.u32 + 8);
	// b 0x8244b210
	goto loc_8244B210;
loc_8244B1CC:
	// li r11,2
	ctx.r11.s64 = 2;
loc_8244B1D0:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8244b200
	if (ctx.cr6.eq) goto loc_8244B200;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8244b1f0
	if (ctx.cr6.eq) goto loc_8244B1F0;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x8244b1c4
	if (ctx.cr6.eq) goto loc_8244B1C4;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// b 0x8244b0e8
	goto loc_8244B0E8;
loc_8244B1F0:
	// lwa r11,8(r3)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(ctx.r3.u32 + 8));
	// std r11,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// b 0x8244b20c
	goto loc_8244B20C;
loc_8244B200:
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// std r11,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r11.u64);
	// lfd f0,120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
loc_8244B20C:
	// fcfid f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(ctx.f0.s64);
loc_8244B210:
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// frsp f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// li r8,1
	ctx.r8.s64 = 1;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r10,136(r1)
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.r10.u64);
	// std r11,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// slw r11,r8,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.r11.u64);
	// lfd f0,144(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfd f11,136(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 136);
	// lfd f12,128(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// fdiv f0,f31,f13
	ctx.f0.f64 = f31.f64 / ctx.f13.f64;
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// fmul f12,f12,f0
	ctx.f12.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fmul f3,f11,f0
	ctx.f3.f64 = ctx.f11.f64 * ctx.f0.f64;
	// fneg f2,f12
	ctx.f2.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f1,f2
	ctx.cr6.compare(ctx.f1.f64, ctx.f2.f64);
	// blt cr6,0x8244b2d0
	if (ctx.cr6.lt) goto loc_8244B2D0;
	// fcmpu cr6,f1,f3
	ctx.cr6.compare(ctx.f1.f64, ctx.f3.f64);
	// bgt cr6,0x8244b2d0
	if (ctx.cr6.gt) goto loc_8244B2D0;
	// fmul f12,f13,f1
	ctx.f12.f64 = ctx.f13.f64 * ctx.f1.f64;
	// fctiwz f13,f12
	ctx.f13.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f13,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r31,84(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// extsw r11,r31
	ctx.r11.s64 = r31.s32;
	// std r11,152(r1)
	REX_STORE_U64(ctx.r1.u32 + 152, ctx.r11.u64);
	// lfd f13,152(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 152);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// beq cr6,0x8244b3d4
	if (ctx.cr6.eq) goto loc_8244B3D4;
	// fmul f2,f13,f0
	ctx.f2.f64 = ctx.f13.f64 * ctx.f0.f64;
	// stfd f2,48(r1)
	REX_STORE_U64(ctx.r1.u32 + 48, ctx.f2.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// stfd f1,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mtctr r27
	ctx.ctr.u64 = r27.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// fadd f3,f2,f0
	ctx.f3.f64 = ctx.f2.f64 + ctx.f0.f64;
	// stfd f3,56(r1)
	REX_STORE_U64(ctx.r1.u32 + 56, ctx.f3.u64);
	// ld r8,56(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 56);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// bctrl 
	ctx.lr = 0x8244B2CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8244b3d4
	goto loc_8244B3D4;
loc_8244B2D0:
	// stfd f3,56(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 56, ctx.f3.u64);
	// ld r8,56(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 56);
	// stfd f2,48(r1)
	REX_STORE_U64(ctx.r1.u32 + 48, ctx.f2.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// stfd f1,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mtctr r27
	ctx.ctr.u64 = r27.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// bctrl 
	ctx.lr = 0x8244B2FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8244b0f8
	goto loc_8244B0F8;
loc_8244B300:
	// lwz r7,8(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// bl 0x8244a898
	ctx.lr = 0x8244B314;
	sub_8244A898(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8244b3d0
	if (!ctx.cr0.lt) goto loc_8244B3D0;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mtctr r27
	ctx.ctr.u64 = r27.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bctrl 
	ctx.lr = 0x8244B334;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8244b0f8
	goto loc_8244B0F8;
loc_8244B338:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8244a980
	ctx.lr = 0x8244B340;
	sub_8244A980(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8244b3d0
	if (!ctx.cr0.lt) goto loc_8244B3D0;
	// lwz r4,104(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// b 0x8244b0e8
	goto loc_8244B0E8;
loc_8244B350:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x8244b364
	if (ctx.cr6.eq) goto loc_8244B364;
	// lwz r4,108(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// b 0x8244b0e8
	goto loc_8244B0E8;
loc_8244B364:
	// lwz r8,8(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwz r5,8(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// b 0x8244b3a8
	goto loc_8244B3A8;
loc_8244B374:
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
loc_8244B378:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	// beq 0x8244b39c
	if (ctx.cr0.eq) goto loc_8244B39C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8244b378
	if (ctx.cr6.eq) goto loc_8244B378;
loc_8244B39C:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8244b3c8
	if (ctx.cr0.eq) goto loc_8244B3C8;
	// lwzu r11,8(r8)
	ea = 8 + ctx.r8.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r8.u32 = ea;
loc_8244B3A8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8244b374
	if (!ctx.cr6.eq) goto loc_8244B374;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mtctr r27
	ctx.ctr.u64 = r27.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bctrl 
	ctx.lr = 0x8244B3C4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8244b0f8
	goto loc_8244B0F8;
loc_8244B3C8:
	// lbz r29,4(r8)
	r29.u64 = REX_LOAD_U8(ctx.r8.u32 + 4);
	// b 0x8244b3d4
	goto loc_8244B3D4;
loc_8244B3D0:
	// lwz r29,80(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8244B3D4:
	// clrlwi r11,r23,27
	ctx.r11.u64 = r23.u32 & 0x1F;
	// lbz r9,4(r30)
	ctx.r9.u64 = REX_LOAD_U8(r30.u32 + 4);
	// rlwinm r10,r25,18,30,31
	ctx.r10.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 18) & 0x3;
	// cmplwi cr6,r9,14
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 14, ctx.xer);
	// lbzx r11,r11,r24
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + r24.u32);
	// bgt cr6,0x8244b4a4
	if (ctx.cr6.gt) goto loc_8244B4A4;
	// lis r12,-32254
	ctx.r12.s64 = -2113798144;
	// addi r12,r12,1328
	ctx.r12.s64 = ctx.r12.s64 + 1328;
	// lbzx r0,r12,r9
	ctx.r0.u64 = REX_LOAD_U8(ctx.r12.u32 + ctx.r9.u32);
	// lis r12,-32187
	ctx.r12.s64 = -2109407232;
	// nop 
	// addi r12,r12,-19436
	ctx.r12.s64 = ctx.r12.s64 + -19436;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r9.u32) {
	case 0:
		goto loc_8244B414;
	case 1:
		goto loc_8244B444;
	case 2:
		goto loc_8244B428;
	case 3:
		goto loc_8244B428;
	case 4:
		goto loc_8244B428;
	case 5:
		goto loc_8244B414;
	case 6:
		goto loc_8244B430;
	case 7:
		goto loc_8244B430;
	case 8:
		goto loc_8244B414;
	case 9:
		goto loc_8244B414;
	case 10:
		goto loc_8244B46C;
	case 11:
		goto loc_8244B428;
	case 12:
		goto loc_8244B428;
	case 13:
		goto loc_8244B474;
	case 14:
		goto loc_8244B484;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_8244B414:
	// andi. r11,r11,23
	ctx.r11.u64 = ctx.r11.u64 & 23;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
loc_8244B418:
	// addi r11,r11,0
	ctx.r11.s64 = ctx.r11.s64 + 0;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x8244b49c
	goto loc_8244B49C;
loc_8244B428:
	// andi. r11,r11,19
	ctx.r11.u64 = ctx.r11.u64 & 19;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// b 0x8244b418
	goto loc_8244B418;
loc_8244B430:
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// blt cr6,0x8244b4a4
	if (ctx.cr6.lt) goto loc_8244B4A4;
	// andi. r11,r11,23
	ctx.r11.u64 = ctx.r11.u64 & 23;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
loc_8244B43C:
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8244b4a4
	if (ctx.cr0.eq) goto loc_8244B4A4;
loc_8244B444:
	// lis r12,-32254
	ctx.r12.s64 = -2113798144;
	// rlwinm r0,r9,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r12,r12,1296
	ctx.r12.s64 = ctx.r12.s64 + 1296;
	// lhzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32187
	ctx.r12.s64 = -2109407232;
	// addi r12,r12,-20232
	ctx.r12.s64 = ctx.r12.s64 + -20232;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r9.u32) {
	case 0:
		goto loc_8244B4AC;
	case 1:
		goto loc_8244B4B4;
	case 2:
		goto loc_8244B4BC;
	case 3:
		goto loc_8244B4C4;
	case 4:
		goto loc_8244B4CC;
	case 5:
		goto loc_8244B4D4;
	case 6:
		goto loc_8244B4DC;
	case 7:
		goto loc_8244B4E4;
	case 8:
		goto loc_8244B4EC;
	case 9:
		goto loc_8244B4F4;
	case 10:
		goto loc_8244B4FC;
	case 11:
		goto loc_8244B508;
	case 12:
		goto loc_8244B510;
	case 13:
		goto loc_8244B518;
	case 14:
		goto loc_8244B520;
	case 15:
		goto loc_8244B0F8;
	case 16:
		goto loc_8244B128;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_8244B46C:
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// b 0x8244b418
	goto loc_8244B418;
loc_8244B474:
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x8244b4a4
	if (ctx.cr6.lt) goto loc_8244B4A4;
	// andi. r11,r11,19
	ctx.r11.u64 = ctx.r11.u64 & 19;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// b 0x8244b43c
	goto loc_8244B43C;
loc_8244B484:
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// blt cr6,0x8244b498
	if (ctx.cr6.lt) goto loc_8244B498;
	// andi. r11,r11,19
	ctx.r11.u64 = ctx.r11.u64 & 19;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8244b444
	if (!ctx.cr0.eq) goto loc_8244B444;
loc_8244B498:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8244B49C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8244b444
	if (!ctx.cr6.eq) goto loc_8244B444;
loc_8244B4A4:
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// b 0x8244b0e8
	goto loc_8244B0E8;
loc_8244B4AC:
	// rlwimi r23,r29,25,6,6
	r23.u64 = (__builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 25) & 0x2000000) | (r23.u64 & 0xFFFFFFFFFDFFFFFF);
	// b 0x8244b0f8
	goto loc_8244B0F8;
loc_8244B4B4:
	// rlwimi r23,r29,19,12,12
	r23.u64 = (__builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 19) & 0x80000) | (r23.u64 & 0xFFFFFFFFFFF7FFFF);
	// b 0x8244b0f8
	goto loc_8244B0F8;
loc_8244B4BC:
	// rlwimi r21,r29,12,18,19
	r21.u64 = (__builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 12) & 0x3000) | (r21.u64 & 0xFFFFFFFFFFFFCFFF);
	// b 0x8244b0f8
	goto loc_8244B0F8;
loc_8244B4C4:
	// rlwimi r21,r29,14,16,17
	r21.u64 = (__builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 14) & 0xC000) | (r21.u64 & 0xFFFFFFFFFFFF3FFF);
	// b 0x8244b0f8
	goto loc_8244B0F8;
loc_8244B4CC:
	// rlwimi r21,r29,16,14,15
	r21.u64 = (__builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 16) & 0x30000) | (r21.u64 & 0xFFFFFFFFFFFCFFFF);
	// b 0x8244b0f8
	goto loc_8244B0F8;
loc_8244B4D4:
	// rlwimi r21,r29,18,11,13
	r21.u64 = (__builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 18) & 0x1C0000) | (r21.u64 & 0xFFFFFFFFFFE3FFFF);
	// b 0x8244b0f8
	goto loc_8244B0F8;
loc_8244B4DC:
	// rlwimi r21,r29,24,6,7
	r21.u64 = (__builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 24) & 0x3000000) | (r21.u64 & 0xFFFFFFFFFCFFFFFF);
	// b 0x8244b0f8
	goto loc_8244B0F8;
loc_8244B4E4:
	// rlwimi r21,r29,26,4,5
	r21.u64 = (__builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 26) & 0xC000000) | (r21.u64 & 0xFFFFFFFFF3FFFFFF);
	// b 0x8244b0f8
	goto loc_8244B0F8;
loc_8244B4EC:
	// rlwimi r21,r29,28,3,3
	r21.u64 = (__builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 28) & 0x10000000) | (r21.u64 & 0xFFFFFFFFEFFFFFFF);
	// b 0x8244b0f8
	goto loc_8244B0F8;
loc_8244B4F4:
	// rlwimi r21,r29,29,2,2
	r21.u64 = (__builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 29) & 0x20000000) | (r21.u64 & 0xFFFFFFFFDFFFFFFF);
	// b 0x8244b0f8
	goto loc_8244B0F8;
loc_8244B4FC:
	// rlwimi r29,r25,0,0,30
	r29.u64 = (__builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0xFFFFFFFE) | (r29.u64 & 0xFFFFFFFF00000001);
	// mr r25,r29
	r25.u64 = r29.u64;
	// b 0x8244b0f8
	goto loc_8244B0F8;
loc_8244B508:
	// rlwimi r25,r31,2,23,29
	r25.u64 = (__builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0x1FC) | (r25.u64 & 0xFFFFFFFFFFFFFE03);
	// b 0x8244b0f8
	goto loc_8244B0F8;
loc_8244B510:
	// rlwimi r25,r31,16,11,15
	r25.u64 = (__builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 16) & 0x1F0000) | (r25.u64 & 0xFFFFFFFFFFE0FFFF);
	// b 0x8244b0f8
	goto loc_8244B0F8;
loc_8244B518:
	// rlwimi r25,r31,21,6,10
	r25.u64 = (__builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 21) & 0x3E00000) | (r25.u64 & 0xFFFFFFFFFC1FFFFF);
	// b 0x8244b0f8
	goto loc_8244B0F8;
loc_8244B520:
	// rlwimi r25,r31,26,1,5
	r25.u64 = (__builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 26) & 0x7C000000) | (r25.u64 & 0xFFFFFFFF83FFFFFF);
	// b 0x8244b0f8
	goto loc_8244B0F8;
}

DEFINE_REX_FUNC(sub_82478358) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82478360;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82478408
	if (!ctx.cr6.eq) goto loc_82478408;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r29,r11,1,0,30
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x8247838c
	if (!ctx.cr6.eq) goto loc_8247838C;
	// li r29,16
	r29.s64 = 16;
loc_8247838C:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// rlwinm r3,r29,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823f02b8
	ctx.lr = 0x82478398;
	sub_823F02B8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x824783c4
	if (!ctx.cr0.eq) goto loc_824783C4;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x824783bc
	if (ctx.cr6.eq) goto loc_824783BC;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82130e88
	ctx.lr = 0x824783B0;
	sub_82130E88(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823f0350
	ctx.lr = 0x824783BC;
	sub_823F0350(ctx, base);
loc_824783BC:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82478424
	goto loc_82478424;
loc_824783C4:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 16);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a1e70
	ctx.lr = 0x824783D8;
	sub_826A1E70(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r10,r29
	ctx.r10.u64 = r29.u64 - ctx.r10.u64;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + r30.u64;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a2e60
	ctx.lr = 0x824783F4;
	sub_826A2E60(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x823f0350
	ctx.lr = 0x82478400;
	sub_823F0350(ctx, base);
	// stw r30,16(r31)
	REX_STORE_U32(r31.u32 + 16, r30.u32);
	// stw r29,28(r31)
	REX_STORE_U32(r31.u32 + 28, r29.u32);
loc_82478408:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r28,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, r28.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
loc_82478424:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8247CF38) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8247CF40;
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
	// bl 0x8247ccf8
	ctx.lr = 0x8247CF54;
	sub_8247CCF8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8247ccf8
	ctx.lr = 0x8247CF68;
	sub_8247CCF8(ctx, base);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x8247cf78
	if (ctx.cr6.eq) goto loc_8247CF78;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8247cfb4
	goto loc_8247CFB4;
loc_8247CF78:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8247cf88
	if (ctx.cr6.eq) goto loc_8247CF88;
loc_8247CF80:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8247cfb4
	goto loc_8247CFB4;
loc_8247CF88:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8247cad0
	ctx.lr = 0x8247CF98;
	sub_8247CAD0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8247cfb4
	if (!ctx.cr0.eq) goto loc_8247CFB4;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// blt cr6,0x8247cf80
	if (ctx.cr6.lt) goto loc_8247CF80;
	// subfc r11,r31,r30
	ctx.xer.ca = r30.u32 >= r31.u32;
	ctx.r11.u64 = r30.u64 - r31.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
loc_8247CFB4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82483578) {
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
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c84
	ctx.lr = 0x82483580;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r17,0
	r17.s64 = 0;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r16,r17
	r16.u64 = r17.u64;
	// bl 0x823f02b8
	ctx.lr = 0x824835A4;
	sub_823F02B8(ctx, base);
	// mr. r15,r3
	r15.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r15.s32, 0, ctx.xer);
	// bne 0x824835b8
	if (!ctx.cr0.eq) goto loc_824835B8;
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,14
	r31.u64 = r31.u64 | 14;
	// b 0x82483a80
	goto loc_82483A80;
loc_824835B8:
	// lwz r11,12(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 12);
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824836e0
	if (!ctx.cr6.gt) goto loc_824836E0;
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// addi r3,r15,-4
	ctx.r3.s64 = r15.s64 + -4;
loc_824835D0:
	// lwz r11,24(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 24);
	// lwzx r10,r11,r5
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824836cc
	if (ctx.cr0.eq) goto loc_824836CC;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq cr6,0x824835f8
	if (ctx.cr6.eq) goto loc_824835F8;
	// lwz r9,36(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 36);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x824836cc
	if (!ctx.cr6.eq) goto loc_824836CC;
loc_824835F8:
	// lis r9,4336
	ctx.r9.s64 = 284164096;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x824836cc
	if (ctx.cr6.eq) goto loc_824836CC;
	// lis r9,8304
	ctx.r9.s64 = 544210944;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x824836cc
	if (ctx.cr6.eq) goto loc_824836CC;
	// lis r9,4368
	ctx.r9.s64 = 286261248;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x824836cc
	if (ctx.cr6.eq) goto loc_824836CC;
	// lis r9,4384
	ctx.r9.s64 = 287309824;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x824836cc
	if (ctx.cr6.eq) goto loc_824836CC;
	// lis r9,4400
	ctx.r9.s64 = 288358400;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x824836cc
	if (ctx.cr6.eq) goto loc_824836CC;
	// lis r9,4416
	ctx.r9.s64 = 289406976;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x824836cc
	if (ctx.cr6.eq) goto loc_824836CC;
	// lis r9,8320
	ctx.r9.s64 = 545259520;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x824836cc
	if (ctx.cr6.eq) goto loc_824836CC;
	// lis r9,8336
	ctx.r9.s64 = 546308096;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x824836cc
	if (ctx.cr6.eq) goto loc_824836CC;
	// lis r9,4432
	ctx.r9.s64 = 290455552;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x824836cc
	if (ctx.cr6.eq) goto loc_824836CC;
	// lwz r6,12(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// mr r7,r17
	ctx.r7.u64 = r17.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x824836bc
	if (ctx.cr6.eq) goto loc_824836BC;
	// lwz r10,16(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// mr r11,r17
	ctx.r11.u64 = r17.u64;
	// lwz r9,20(r24)
	ctx.r9.u64 = REX_LOAD_U32(r24.u32 + 20);
	// lwz r8,16(r24)
	ctx.r8.u64 = REX_LOAD_U32(r24.u32 + 16);
loc_82483684:
	// lwzx r30,r11,r10
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r30,r30,2,0,29
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r30,r9
	r30.u64 = REX_LOAD_U32(r30.u32 + ctx.r9.u32);
	// lwz r30,4(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 4);
	// rlwinm r30,r30,2,0,29
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r30,r8
	r30.u64 = REX_LOAD_U32(r30.u32 + ctx.r8.u32);
	// lwz r30,4(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 4);
	// andi. r30,r30,4128
	r30.u64 = r30.u64 & 4128;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne 0x824836bc
	if (!ctx.cr0.eq) goto loc_824836BC;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x82483684
	if (ctx.cr6.lt) goto loc_82483684;
loc_824836BC:
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x824836cc
	if (ctx.cr6.lt) goto loc_824836CC;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// addi r16,r16,1
	r16.s64 = r16.s64 + 1;
loc_824836CC:
	// lwz r11,12(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 12);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824835d0
	if (ctx.cr6.lt) goto loc_824835D0;
loc_824836E0:
	// mr r29,r17
	r29.u64 = r17.u64;
loc_824836E4:
	// lwz r10,8(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 8);
	// mr r30,r17
	r30.u64 = r17.u64;
	// mr r11,r17
	ctx.r11.u64 = r17.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x8248371c
	if (!ctx.cr6.gt) goto loc_8248371C;
	// mr r10,r17
	ctx.r10.u64 = r17.u64;
loc_824836FC:
	// lwz r9,20(r24)
	ctx.r9.u64 = REX_LOAD_U32(r24.u32 + 20);
	// lwzx r9,r9,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r11,48(r9)
	REX_STORE_U32(ctx.r9.u32 + 48, ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r9,8(r24)
	ctx.r9.u64 = REX_LOAD_U32(r24.u32 + 8);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x824836fc
	if (ctx.cr6.lt) goto loc_824836FC;
loc_8248371C:
	// lis r11,-32184
	ctx.r11.s64 = -2109210624;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r16
	ctx.r5.u64 = r16.u64;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// addi r3,r11,-12488
	ctx.r3.s64 = ctx.r11.s64 + -12488;
	// bl 0x824793b0
	ctx.lr = 0x82483734;
	sub_824793B0(ctx, base);
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(r16.u32, 0, ctx.xer);
	// beq cr6,0x82483a68
	if (ctx.cr6.eq) goto loc_82483A68;
	// li r21,1
	r21.s64 = 1;
	// mr r20,r15
	r20.u64 = r15.u64;
	// mr r18,r16
	r18.u64 = r16.u64;
loc_82483748:
	// lwz r22,0(r20)
	r22.u64 = REX_LOAD_U32(r20.u32 + 0);
	// cmpwi cr6,r22,-1
	ctx.cr6.compare<int32_t>(r22.s32, -1, ctx.xer);
	// beq cr6,0x824839b8
	if (ctx.cr6.eq) goto loc_824839B8;
	// mr r19,r21
	r19.u64 = r21.u64;
	// cmplw cr6,r21,r16
	ctx.cr6.compare<uint32_t>(r21.u32, r16.u32, ctx.xer);
	// bge cr6,0x824839b8
	if (!ctx.cr6.lt) goto loc_824839B8;
	// addi r23,r20,4
	r23.s64 = r20.s64 + 4;
loc_82483764:
	// lwz r31,0(r23)
	r31.u64 = REX_LOAD_U32(r23.u32 + 0);
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(r31.s32, -1, ctx.xer);
	// beq cr6,0x824839a8
	if (ctx.cr6.eq) goto loc_824839A8;
	// cmplw cr6,r22,r31
	ctx.cr6.compare<uint32_t>(r22.u32, r31.u32, ctx.xer);
	// bge cr6,0x824839b8
	if (!ctx.cr6.lt) goto loc_824839B8;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x8247cad0
	ctx.lr = 0x82483788;
	sub_8247CAD0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x824839b8
	if (!ctx.cr0.eq) goto loc_824839B8;
	// lwz r11,24(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 24);
	// rlwinm r10,r22,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r31,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r8,4096
	ctx.r8.s64 = 268435456;
	// lwzx r29,r10,r11
	r29.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r30,r9,r11
	r30.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 4);
	// clrlwi r9,r11,12
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFFF;
	// rlwinm r11,r11,0,0,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0000000;
	// divwu r26,r10,r9
	r26.u64 = uint32_t(ctx.r9.u32 ? ctx.r10.u32 / ctx.r9.u32 : 0);
	// twllei r9,0
	if (ctx.r9.s32 == 0 || ctx.r9.u32 < 0u) ppc_trap(ctx, base, 0);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82483944
	if (ctx.cr6.lt) goto loc_82483944;
	// lis r10,16384
	ctx.r10.s64 = 1073741824;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82483944
	if (ctx.cr6.gt) goto loc_82483944;
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// mr r27,r17
	r27.u64 = r17.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8248398c
	if (!ctx.cr6.gt) goto loc_8248398C;
	// mr r25,r17
	r25.u64 = r17.u64;
loc_824837E8:
	// lwz r5,12(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 12);
	// mr r28,r17
	r28.u64 = r17.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8248392c
	if (ctx.cr6.eq) goto loc_8248392C;
loc_824837F8:
	// mr r31,r17
	r31.u64 = r17.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x82483860
	if (ctx.cr6.eq) goto loc_82483860;
	// lwz r8,12(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r7,8(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwz r6,8(r29)
	ctx.r6.u64 = REX_LOAD_U32(r29.u32 + 8);
	// lwz r11,20(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 20);
loc_82483814:
	// mullw r10,r5,r31
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(r31.s32);
	// mullw r9,r8,r31
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(r31.s32);
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + r28.u64;
	// add r9,r9,r27
	ctx.r9.u64 = ctx.r9.u64 + r27.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r6
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// lwzx r9,r9,r7
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r9,r9,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwz r10,48(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r9,48(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 48);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82483860
	if (!ctx.cr6.eq) goto loc_82483860;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r31,r26
	ctx.cr6.compare<uint32_t>(r31.u32, r26.u32, ctx.xer);
	// blt cr6,0x82483814
	if (ctx.cr6.lt) goto loc_82483814;
loc_82483860:
	// cmplw cr6,r31,r26
	ctx.cr6.compare<uint32_t>(r31.u32, r26.u32, ctx.xer);
	// beq cr6,0x82483908
	if (ctx.cr6.eq) goto loc_82483908;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82477530
	ctx.lr = 0x82483870;
	sub_82477530(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x824838ec
	if (ctx.cr0.eq) goto loc_824838EC;
	// mr r31,r17
	r31.u64 = r17.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x824838ec
	if (ctx.cr6.eq) goto loc_824838EC;
	// lwz r7,12(r29)
	ctx.r7.u64 = REX_LOAD_U32(r29.u32 + 12);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r6,8(r29)
	ctx.r6.u64 = REX_LOAD_U32(r29.u32 + 8);
	// lwz r5,12(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r4,8(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwz r11,20(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 20);
loc_8248389C:
	// mullw r9,r7,r10
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// mullw r8,r5,r31
	ctx.r8.s64 = int64_t(ctx.r5.s32) * int64_t(r31.s32);
	// add r9,r9,r28
	ctx.r9.u64 = ctx.r9.u64 + r28.u64;
	// add r8,r8,r27
	ctx.r8.u64 = ctx.r8.u64 + r27.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r6
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// lwzx r8,r8,r4
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r4.u32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwzx r8,r8,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwz r9,48(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r8,48(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 48);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x824838ec
	if (!ctx.cr6.eq) goto loc_824838EC;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r31,r26
	ctx.cr6.compare<uint32_t>(r31.u32, r26.u32, ctx.xer);
	// blt cr6,0x8248389c
	if (ctx.cr6.lt) goto loc_8248389C;
loc_824838EC:
	// cmplw cr6,r31,r26
	ctx.cr6.compare<uint32_t>(r31.u32, r26.u32, ctx.xer);
	// beq cr6,0x82483908
	if (ctx.cr6.eq) goto loc_82483908;
	// lwz r5,12(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 12);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmplw cr6,r28,r5
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x824837f8
	if (ctx.cr6.lt) goto loc_824837F8;
	// b 0x8248392c
	goto loc_8248392C;
loc_82483908:
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,16(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 16);
	// lwz r8,20(r24)
	ctx.r8.u64 = REX_LOAD_U32(r24.u32 + 20);
	// lwzx r11,r11,r25
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r25.u32);
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// stw r10,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
loc_8248392C:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r25,r25,4
	r25.s64 = r25.s64 + 4;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824837e8
	if (ctx.cr6.lt) goto loc_824837E8;
	// b 0x8248398c
	goto loc_8248398C;
loc_82483944:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// mr r10,r17
	ctx.r10.u64 = r17.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8248398c
	if (!ctx.cr6.gt) goto loc_8248398C;
	// mr r11,r17
	ctx.r11.u64 = r17.u64;
loc_82483958:
	// lwz r9,16(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 16);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r8,16(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 16);
	// lwz r7,20(r24)
	ctx.r7.u64 = REX_LOAD_U32(r24.u32 + 20);
	// lwzx r9,r9,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwzx r8,r8,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r7
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// stw r8,48(r9)
	REX_STORE_U32(ctx.r9.u32 + 48, ctx.r8.u32);
	// lwz r9,12(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 12);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82483958
	if (ctx.cr6.lt) goto loc_82483958;
loc_8248398C:
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r29,1
	r29.s64 = 1;
	// stw r11,0(r23)
	REX_STORE_U32(r23.u32 + 0, ctx.r11.u32);
	// stw r17,0(r30)
	REX_STORE_U32(r30.u32 + 0, r17.u32);
	// stw r17,4(r30)
	REX_STORE_U32(r30.u32 + 4, r17.u32);
	// stw r17,12(r30)
	REX_STORE_U32(r30.u32 + 12, r17.u32);
	// li r30,1
	r30.s64 = 1;
loc_824839A8:
	// addi r19,r19,1
	r19.s64 = r19.s64 + 1;
	// addi r23,r23,4
	r23.s64 = r23.s64 + 4;
	// cmplw cr6,r19,r16
	ctx.cr6.compare<uint32_t>(r19.u32, r16.u32, ctx.xer);
	// blt cr6,0x82483764
	if (ctx.cr6.lt) goto loc_82483764;
loc_824839B8:
	// addic. r18,r18,-1
	ctx.xer.ca = r18.u32 > 0;
	r18.s64 = r18.s64 + -1;
	ctx.cr0.compare<int32_t>(r18.s32, 0, ctx.xer);
	// addi r20,r20,4
	r20.s64 = r20.s64 + 4;
	// addi r21,r21,1
	r21.s64 = r21.s64 + 1;
	// bne 0x82483748
	if (!ctx.cr0.eq) goto loc_82483748;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x82483a68
	if (ctx.cr6.eq) goto loc_82483A68;
	// mr. r11,r16
	ctx.r11.u64 = r16.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r16,r17
	r16.u64 = r17.u64;
	// beq 0x82483a5c
	if (ctx.cr0.eq) goto loc_82483A5C;
	// addi r5,r15,-4
	ctx.r5.s64 = r15.s64 + -4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
loc_824839E8:
	// lwz r6,0(r4)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r6,-1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -1, ctx.xer);
	// beq cr6,0x82483a54
	if (ctx.cr6.eq) goto loc_82483A54;
	// lwz r11,24(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 24);
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r10,r17
	ctx.r10.u64 = r17.u64;
	// lwzx r11,r9,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82483a44
	if (ctx.cr6.eq) goto loc_82483A44;
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mr r11,r17
	ctx.r11.u64 = r17.u64;
	// lwz r7,20(r24)
	ctx.r7.u64 = REX_LOAD_U32(r24.u32 + 20);
loc_82483A1C:
	// lwzx r3,r8,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// rlwinm r31,r3,2,0,29
	r31.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r31,r7
	r31.u64 = REX_LOAD_U32(r31.u32 + ctx.r7.u32);
	// lwz r31,48(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82483a44
	if (!ctx.cr6.eq) goto loc_82483A44;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82483a1c
	if (ctx.cr6.lt) goto loc_82483A1C;
loc_82483A44:
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82483a54
	if (ctx.cr6.eq) goto loc_82483A54;
	// stwu r6,4(r5)
	ea = 4 + ctx.r5.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r5.u32 = ea;
	// addi r16,r16,1
	r16.s64 = r16.s64 + 1;
loc_82483A54:
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// bdnz 0x824839e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824839E8;
loc_82483A5C:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82481920
	ctx.lr = 0x82483A64;
	sub_82481920(ctx, base);
	// b 0x824836e4
	goto loc_824836E4;
loc_82483A68:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x82483a78
	if (ctx.cr6.eq) goto loc_82483A78;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82482c68
	ctx.lr = 0x82483A78;
	sub_82482C68(ctx, base);
loc_82483A78:
	// cntlzw r11,r29
	ctx.r11.u64 = r29.u32 == 0 ? 32 : __builtin_clz(r29.u32);
	// rlwinm r31,r11,27,31,31
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_82483A80:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x823f0350
	ctx.lr = 0x82483A8C;
	sub_823F0350(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1cd4
	return;
}

DEFINE_REX_FUNC(sub_824B5920) {
	REX_FUNC_PROLOGUE();
	// lbz r11,110(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 110);
	// lbz r10,111(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 111);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// bne cr6,0x824b5948
	if (!ctx.cr6.eq) goto loc_824B5948;
	// lwz r10,40(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x824b596c
	if (!ctx.cr6.lt) goto loc_824B596C;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x824b5960
	goto loc_824B5960;
loc_824B5948:
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x824b596c
	if (!ctx.cr6.eq) goto loc_824B596C;
	// lwz r10,60(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x824b596c
	if (!ctx.cr6.lt) goto loc_824B596C;
	// li r11,3
	ctx.r11.s64 = 3;
loc_824B5960:
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_824B596C:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824B8360) {
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
	// bl 0x826a1ca8
	ctx.lr = 0x824B8368;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,76(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// li r25,0
	r25.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r24,r25
	r24.u64 = r25.u64;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x824b8390
	if (ctx.cr6.eq) goto loc_824B8390;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x824b8670
	goto loc_824B8670;
loc_824B8390:
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// mr r29,r25
	r29.u64 = r25.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// std r25,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, r25.u64);
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// std r25,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, r25.u64);
	// addi r6,r10,-4
	ctx.r6.s64 = ctx.r10.s64 + -4;
	// std r25,8(r9)
	REX_STORE_U64(ctx.r9.u32 + 8, r25.u64);
	// std r25,8(r8)
	REX_STORE_U64(ctx.r8.u32 + 8, r25.u64);
	// lis r4,29200
	ctx.r4.s64 = 1913651200;
loc_824B83C0:
	// lwz r10,564(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 564);
	// lwzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824b8458
	if (ctx.cr6.eq) goto loc_824B8458;
	// rotlwi r7,r9,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r9,0(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824b8458
	if (ctx.cr6.eq) goto loc_824B8458;
	// lwzx r8,r11,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r8,0(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r3,r8,0,0,11
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x824b8448
	if (ctx.cr6.eq) goto loc_824B8448;
	// rlwinm r3,r9,0,0,11
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFF00000;
	// lis r30,4352
	r30.s64 = 285212672;
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r30.u32, ctx.xer);
	// beq cr6,0x824b840c
	if (ctx.cr6.eq) goto loc_824B840C;
	// clrlwi r9,r8,12
	ctx.r9.u64 = ctx.r8.u32 & 0xFFFFF;
loc_824B840C:
	// lwz r8,8(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,20(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r3,136(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 136);
	// lwzx r9,r8,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r7
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r9,r3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r3.u32, ctx.xer);
	// lwzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stwx r25,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, r25.u32);
	// bne cr6,0x824b8450
	if (!ctx.cr6.eq) goto loc_824B8450;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// stwu r9,4(r6)
	ea = 4 + ctx.r6.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r6.u32 = ea;
	// b 0x824b8458
	goto loc_824B8458;
loc_824B8448:
	// lwzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stwx r25,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, r25.u32);
loc_824B8450:
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stwx r9,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u32);
loc_824B8458:
	// lwz r10,76(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 76);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x824b83c0
	if (ctx.cr6.lt) goto loc_824B83C0;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824b84dc
	if (!ctx.cr6.gt) goto loc_824B84DC;
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
loc_824B8480:
	// lwz r10,560(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 560);
	// lwzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824b84c8
	if (ctx.cr6.eq) goto loc_824B84C8;
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824b84c8
	if (ctx.cr6.eq) goto loc_824B84C8;
	// rlwinm r9,r9,0,0,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x824b84c8
	if (ctx.cr6.eq) goto loc_824B84C8;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwzx r7,r11,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x824b8678
	if (!ctx.cr6.eq) goto loc_824B8678;
	// lwzx r7,r11,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stwx r25,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, r25.u32);
	// stwx r7,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r7.u32);
loc_824B84C8:
	// lwz r10,76(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 76);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x824b8480
	if (ctx.cr6.lt) goto loc_824B8480;
loc_824B84DC:
	// lhz r11,202(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 202);
	// cmplwi cr6,r11,257
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 257, ctx.xer);
	// ble cr6,0x824b8508
	if (!ctx.cr6.gt) goto loc_824B8508;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824b43f0
	ctx.lr = 0x824B8500;
	sub_824B43F0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824b8628
	if (ctx.cr0.lt) goto loc_824B8628;
loc_824B8508:
	// li r7,2
	ctx.r7.s64 = 2;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824b43f0
	ctx.lr = 0x824B8520;
	sub_824B43F0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824b8628
	if (ctx.cr0.lt) goto loc_824B8628;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824b43f0
	ctx.lr = 0x824B8540;
	sub_824B43F0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824b8628
	if (ctx.cr0.lt) goto loc_824B8628;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824b3e00
	ctx.lr = 0x824B855C;
	sub_824B3E00(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824b8628
	if (ctx.cr0.lt) goto loc_824B8628;
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// mr r28,r25
	r28.u64 = r25.u64;
	// ori r27,r10,16389
	r27.u64 = ctx.r10.u64 | 16389;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824b85c8
	if (!ctx.cr6.gt) goto loc_824B85C8;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r26,r1,96
	r26.s64 = ctx.r1.s64 + 96;
	// addi r29,r11,2656
	r29.s64 = ctx.r11.s64 + 2656;
loc_824B8588:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824b85b4
	if (ctx.cr6.eq) goto loc_824B85B4;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lbz r7,203(r31)
	ctx.r7.u64 = REX_LOAD_U8(r31.u32 + 203);
	// li r5,4523
	ctx.r5.s64 = 4523;
	// lwz r4,60(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r30,r27
	r30.u64 = r27.u64;
	// bl 0x82489c30
	ctx.lr = 0x824B85B0;
	sub_82489C30(ctx, base);
	// li r24,1
	r24.s64 = 1;
loc_824B85B4:
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824b8588
	if (ctx.cr6.lt) goto loc_824B8588;
loc_824B85C8:
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(r30.s32, r27.s32, ctx.xer);
	// beq cr6,0x824b8620
	if (ctx.cr6.eq) goto loc_824B8620;
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824b8608
	if (!ctx.cr6.gt) goto loc_824B8608;
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
loc_824B85E4:
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r8,564(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 564);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwzx r9,r11,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// stwx r9,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,76(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 76);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x824b85e4
	if (ctx.cr6.lt) goto loc_824B85E4;
loc_824B8608:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,560(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 560);
	// bl 0x823f0350
	ctx.lr = 0x824B8614;
	sub_823F0350(ctx, base);
	// stw r25,560(r31)
	REX_STORE_U32(r31.u32 + 560, r25.u32);
	// mr r30,r25
	r30.u64 = r25.u64;
	// stw r25,548(r31)
	REX_STORE_U32(r31.u32 + 548, r25.u32);
loc_824B8620:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge cr6,0x824b866c
	if (!ctx.cr6.lt) goto loc_824B866C;
loc_824B8628:
	// lwz r10,76(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 76);
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x824b8648
	if (!ctx.cr6.gt) goto loc_824B8648;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
loc_824B863C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x824b863c
	if (ctx.cr6.lt) goto loc_824B863C;
loc_824B8648:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// bne cr6,0x824b866c
	if (!ctx.cr6.eq) goto loc_824B866C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lbz r7,203(r31)
	ctx.r7.u64 = REX_LOAD_U8(r31.u32 + 203);
	// li r5,4523
	ctx.r5.s64 = 4523;
	// addi r6,r11,2528
	ctx.r6.s64 = ctx.r11.s64 + 2528;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82489c30
	ctx.lr = 0x824B866C;
	sub_82489C30(ctx, base);
loc_824B866C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_824B8670:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cf8
	return;
loc_824B8678:
	// lis r30,-32768
	r30.s64 = -2147483648;
	// ori r30,r30,16389
	r30.u64 = r30.u64 | 16389;
	// b 0x824b8628
	goto loc_824B8628;
}

DEFINE_REX_FUNC(sub_824C70C0) {
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
	// bl 0x826a1ca4
	ctx.lr = 0x824C70C8;
	// lwz r10,36(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// li r26,0
	r26.s64 = 0;
	// lwz r30,428(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 428);
	// lwz r11,220(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 220);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r27,320(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 320);
	// ble cr6,0x824c71e0
	if (!ctx.cr6.gt) goto loc_824C71E0;
	// addi r29,r27,2
	r29.s64 = r27.s64 + 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r31,r11,12
	r31.s64 = ctx.r11.s64 + 12;
	// addi r28,r30,8
	r28.s64 = r30.s64 + 8;
loc_824C70F4:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwz r7,56(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 56);
	// mullw r9,r11,r10
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// lwz r11,60(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 60);
	// lwz r6,320(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 320);
	// lwzx r8,r28,r5
	ctx.r8.u64 = REX_LOAD_U32(r28.u32 + ctx.r5.u32);
	// lwzx r4,r5,r7
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// lwzx r10,r5,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// rotlwi r11,r9,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// divw r7,r9,r6
	ctx.r7.u64 = uint32_t((ctx.r6.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r6.s32 == -1)) ? ctx.r9.s32 / ctx.r6.s32 : 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// twllei r6,0
	if (ctx.r6.s32 == 0 || ctx.r6.u32 < 0u) ppc_trap(ctx, base, 0);
	// andc r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 & ~ctx.r11.u64;
	// mullw. r9,r29,r7
	ctx.r9.s64 = int64_t(r29.s32) * int64_t(ctx.r7.s32);
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// twlgei r6,-1
	if (ctx.r6.s32 == -1 || ctx.r6.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// ble 0x824c715c
	if (!ctx.cr0.gt) goto loc_824C715C;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// subf r9,r10,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r10.u64;
	// subf r6,r10,r4
	ctx.r6.u64 = ctx.r4.u64 - ctx.r10.u64;
loc_824C7148:
	// lwzx r25,r9,r11
	r25.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stw r25,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r25.u32);
	// stwx r25,r6,r11
	REX_STORE_U32(ctx.r6.u32 + ctx.r11.u32, r25.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x824c7148
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824C7148;
loc_824C715C:
	// rlwinm r9,r7,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x824c71a4
	if (!ctx.cr6.gt) goto loc_824C71A4;
	// addi r6,r27,-2
	ctx.r6.s64 = r27.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// mullw r9,r7,r27
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(r27.s32);
	// mullw r6,r6,r7
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
loc_824C717C:
	// add r25,r9,r11
	r25.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r24,r6,r11
	r24.u64 = ctx.r6.u64 + ctx.r11.u64;
	// rlwinm r25,r25,2,0,29
	r25.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r24,r24,2,0,29
	r24.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwzx r23,r25,r8
	r23.u64 = REX_LOAD_U32(r25.u32 + ctx.r8.u32);
	// stwx r23,r24,r10
	REX_STORE_U32(r24.u32 + ctx.r10.u32, r23.u32);
	// lwzx r24,r24,r8
	r24.u64 = REX_LOAD_U32(r24.u32 + ctx.r8.u32);
	// stwx r24,r25,r10
	REX_STORE_U32(r25.u32 + ctx.r10.u32, r24.u32);
	// bdnz 0x824c717c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824C717C;
loc_824C71A4:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x824c71c8
	if (!ctx.cr6.gt) goto loc_824C71C8;
	// addi r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 1;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r11,r10,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r10.u64;
loc_824C71BC:
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x824c71bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824C71BC;
loc_824C71C8:
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// addi r31,r31,84
	r31.s64 = r31.s64 + 84;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x824c70f4
	if (ctx.cr6.lt) goto loc_824C70F4;
loc_824C71E0:
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_824CEE50) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x824ce450
	ctx.lr = 0x824CEE74;
	sub_824CE450(ctx, base);
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 36);
	// lwz r4,40(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lwz r3,40(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824CEE88;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 36);
	// lwz r4,36(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 36);
	// lwz r3,40(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824CEE9C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 36);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,40(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824CEEB0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

DEFINE_REX_FUNC(sub_824D2DA8) {
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
	// bl 0x826a1c80
	ctx.lr = 0x824D2DB0;
	// stwu r1,-512(r1)
	ea = -512 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// stw r3,532(r1)
	REX_STORE_U32(ctx.r1.u32 + 532, ctx.r3.u32);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// stw r6,556(r1)
	REX_STORE_U32(ctx.r1.u32 + 556, ctx.r6.u32);
	// stw r7,564(r1)
	REX_STORE_U32(ctx.r1.u32 + 564, ctx.r7.u32);
	// mr r27,r10
	r27.u64 = ctx.r10.u64;
	// stw r8,572(r1)
	REX_STORE_U32(ctx.r1.u32 + 572, ctx.r8.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x824d2de4
	if (ctx.cr6.eq) goto loc_824D2DE4;
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm r11,r11,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_824D2DE4:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824d2df8
	if (ctx.cr6.eq) goto loc_824D2DF8;
	// lwz r11,48(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 48);
	// rlwinm r11,r11,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_824D2DF8:
	// li r25,0
	r25.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x824d2e10
	if (ctx.cr6.eq) goto loc_824D2E10;
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// stw r11,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r11.u32);
	// b 0x824d2e14
	goto loc_824D2E14;
loc_824D2E10:
	// stw r25,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, r25.u32);
loc_824D2E14:
	// lwz r11,604(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 604);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824d2e2c
	if (ctx.cr6.eq) goto loc_824D2E2C;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r11.u32);
	// b 0x824d2e30
	goto loc_824D2E30;
loc_824D2E2C:
	// stw r25,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, r25.u32);
loc_824D2E30:
	// lwz r11,44(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 44);
	// li r19,1
	r19.s64 = 1;
	// lwz r10,48(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 48);
	// rlwinm r11,r11,26,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0xF;
	// rlwinm r10,r10,0,21,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x600;
	// addi r17,r11,1
	r17.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,1536
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1536, ctx.xer);
	// stw r17,204(r1)
	REX_STORE_U32(ctx.r1.u32 + 204, r17.u32);
	// beq cr6,0x824d2e68
	if (ctx.cr6.eq) goto loc_824D2E68;
	// lwz r11,32(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 32);
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824d2e68
	if (!ctx.cr0.eq) goto loc_824D2E68;
	// stw r19,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, r19.u32);
	// b 0x824d2e78
	goto loc_824D2E78;
loc_824D2E68:
	// lwz r11,36(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 36);
	// rlwinm r11,r11,6,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x3F;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r11.u32);
loc_824D2E78:
	// addi r3,r24,28
	ctx.r3.s64 = r24.s64 + 28;
	// addi r6,r1,228
	ctx.r6.s64 = ctx.r1.s64 + 228;
	// addi r5,r1,152
	ctx.r5.s64 = ctx.r1.s64 + 152;
	// addi r4,r1,148
	ctx.r4.s64 = ctx.r1.s64 + 148;
	// bl 0x822d1b30
	ctx.lr = 0x824D2E8C;
	sub_822D1B30(ctx, base);
	// lwz r11,32(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 32);
	// lwz r10,48(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 48);
	// addi r5,r1,132
	ctx.r5.s64 = ctx.r1.s64 + 132;
	// clrlwi r18,r11,26
	r18.u64 = ctx.r11.u32 & 0x3F;
	// rlwinm r16,r10,23,30,31
	r16.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 23) & 0x3;
	// addi r4,r1,156
	ctx.r4.s64 = ctx.r1.s64 + 156;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// stw r16,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, r16.u32);
	// rlwinm r29,r10,21,31,31
	r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 21) & 0x1;
	// lwz r30,28(r24)
	r30.u64 = REX_LOAD_U32(r24.u32 + 28);
	// lwz r31,40(r24)
	r31.u64 = REX_LOAD_U32(r24.u32 + 40);
	// rlwinm r14,r30,1,31,31
	r14.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0x1;
	// rlwinm r21,r31,1,31,31
	r21.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0x1;
	// bl 0x822c6b30
	ctx.lr = 0x824D2EC4;
	sub_822C6B30(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lwz r22,148(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// rlwinm r23,r31,2,30,30
	r23.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0x2;
	// lwz r20,152(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// addi r11,r11,7816
	ctx.r11.s64 = ctx.r11.s64 + 7816;
	// subf r10,r23,r22
	ctx.r10.u64 = r22.u64 - r23.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r18,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// lbzx r26,r9,r11
	r26.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// subf r11,r10,r21
	ctx.r11.u64 = r21.u64 - ctx.r10.u64;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// slw r11,r19,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (r19.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r10,156(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// mullw r10,r26,r10
	ctx.r10.s64 = int64_t(r26.s32) * int64_t(ctx.r10.s32);
	// stw r26,248(r1)
	REX_STORE_U32(ctx.r1.u32 + 248, r26.u32);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// stw r11,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// ble cr6,0x824d2f40
	if (!ctx.cr6.gt) goto loc_824D2F40;
	// subf r11,r23,r20
	ctx.r11.u64 = r20.u64 - r23.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subf r11,r11,r21
	ctx.r11.u64 = r21.u64 - ctx.r11.u64;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// slw r11,r19,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (r19.u32 << (ctx.r11.u8 & 0x3F));
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bgt cr6,0x824d2f48
	if (ctx.cr6.gt) goto loc_824D2F48;
loc_824D2F40:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x824d2f4c
	if (!ctx.cr6.eq) goto loc_824D2F4C;
loc_824D2F48:
	// mr r19,r25
	r19.u64 = r25.u64;
loc_824D2F4C:
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// stw r19,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, r19.u32);
	// li r5,52
	ctx.r5.s64 = 52;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x826a1e70
	ctx.lr = 0x824D2F60;
	sub_826A1E70(ctx, base);
	// lwz r11,336(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 336);
	// lwz r10,352(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 352);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// clrlwi r11,r11,20
	ctx.r11.u64 = ctx.r11.u32 & 0xFFF;
	// clrlwi r10,r10,20
	ctx.r10.u64 = ctx.r10.u32 & 0xFFF;
	// stw r11,336(r1)
	REX_STORE_U32(ctx.r1.u32 + 336, ctx.r11.u32);
	// stw r10,352(r1)
	REX_STORE_U32(ctx.r1.u32 + 352, ctx.r10.u32);
	// bne cr6,0x824d2f88
	if (!ctx.cr6.eq) goto loc_824D2F88;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x824d3028
	if (ctx.cr6.eq) goto loc_824D3028;
loc_824D2F88:
	// stw r21,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r21.u32);
	// rlwinm r11,r30,10,23,31
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 10) & 0x1FF;
	// rlwinm r10,r31,13,0,18
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 13) & 0xFFFFE000;
	// lwz r5,228(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// mullw r11,r11,r26
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r26.s32);
	// srawi r10,r10,26
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3FFFFFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 26;
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
	// addi r8,r1,164
	ctx.r8.s64 = ctx.r1.s64 + 164;
	// stw r10,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r7,r1,236
	ctx.r7.s64 = ctx.r1.s64 + 236;
	// stw r9,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// rlwinm r11,r11,2,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1FFFFFFC;
	// stw r8,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// stw r7,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// mr r9,r14
	ctx.r9.u64 = r14.u64;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r8,r16
	ctx.r8.u64 = r16.u64;
	// mr r7,r18
	ctx.r7.u64 = r18.u64;
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x822d1728
	ctx.lr = 0x824D2FE4;
	sub_822D1728(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x824d3010
	if (ctx.cr6.eq) goto loc_824D3010;
	// lwz r11,44(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 44);
	// rlwinm. r11,r11,0,26,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3C;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824d3008
	if (ctx.cr0.eq) goto loc_824D3008;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// bne cr6,0x824d3008
	if (!ctx.cr6.eq) goto loc_824D3008;
	// stw r25,0(r28)
	REX_STORE_U32(r28.u32 + 0, r25.u32);
	// b 0x824d3010
	goto loc_824D3010;
loc_824D3008:
	// lwz r11,164(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
loc_824D3010:
	// lwz r20,152(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// lwz r22,148(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// beq cr6,0x824d3028
	if (ctx.cr6.eq) goto loc_824D3028;
	// lwz r11,176(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
loc_824D3028:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x824d30c8
	if (ctx.cr6.eq) goto loc_824D30C8;
	// subf r11,r23,r22
	ctx.r11.u64 = r22.u64 - r23.u64;
	// subf r10,r23,r20
	ctx.r10.u64 = r20.u64 - r23.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// subf r11,r11,r21
	ctx.r11.u64 = r21.u64 - ctx.r11.u64;
	// subf r10,r10,r21
	ctx.r10.u64 = r21.u64 - ctx.r10.u64;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x824d3064
	if (ctx.cr6.lt) goto loc_824D3064;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_824D3064:
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
	// cmplw cr6,r11,r17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r17.u32, ctx.xer);
	// bge cr6,0x824d30c8
	if (!ctx.cr6.lt) goto loc_824D30C8;
	// subf r10,r23,r22
	ctx.r10.u64 = r22.u64 - r23.u64;
	// subf r11,r23,r20
	ctx.r11.u64 = r20.u64 - r23.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subf r11,r10,r21
	ctx.r11.u64 = r21.u64 - ctx.r10.u64;
	// subf r10,r9,r21
	ctx.r10.u64 = r21.u64 - ctx.r9.u64;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x824d30b4
	if (ctx.cr6.lt) goto loc_824D30B4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_824D30B4:
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
	// and r17,r10,r11
	r17.u64 = ctx.r10.u64 & ctx.r11.u64;
loc_824D30C8:
	// addi r10,r1,212
	ctx.r10.s64 = ctx.r1.s64 + 212;
	// stw r25,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, r25.u32);
	// addi r11,r1,556
	ctx.r11.s64 = ctx.r1.s64 + 556;
	// stw r10,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// addi r10,r1,564
	ctx.r10.s64 = ctx.r1.s64 + 564;
	// addi r19,r1,572
	r19.s64 = ctx.r1.s64 + 572;
loc_824D30E0:
	// lwz r15,0(r11)
	r15.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x824d36a0
	if (ctx.cr6.eq) goto loc_824D36A0;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,236(r1)
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r11.u32);
	// beq cr6,0x824d36a0
	if (ctx.cr6.eq) goto loc_824D36A0;
	// li r20,0
	r20.s64 = 0;
	// li r16,0
	r16.s64 = 0;
	// li r22,0
	r22.s64 = 0;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x824d3130
	if (ctx.cr6.eq) goto loc_824D3130;
	// lwz r11,168(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x824d3690
	if (!ctx.cr6.eq) goto loc_824D3690;
	// lwz r11,204(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 204);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x824d3690
	if (!ctx.cr6.gt) goto loc_824D3690;
	// lwz r24,532(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 532);
	// lwz r25,188(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
loc_824D3130:
	// lwz r11,44(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 44);
	// rlwinm r11,r11,30,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0xF;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r25.u32, ctx.xer);
	// mr r24,r11
	r24.u64 = ctx.r11.u64;
	// bgt cr6,0x824d3148
	if (ctx.cr6.gt) goto loc_824D3148;
	// mr r24,r25
	r24.u64 = r25.u64;
loc_824D3148:
	// cmplwi cr6,r25,1
	ctx.cr6.compare<uint32_t>(r25.u32, 1, ctx.xer);
	// beq cr6,0x824d315c
	if (ctx.cr6.eq) goto loc_824D315C;
	// lwz r11,168(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x824d32f4
	if (!ctx.cr6.eq) goto loc_824D32F4;
loc_824D315C:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// li r26,1
	r26.s64 = 1;
	// beq cr6,0x824d32ec
	if (ctx.cr6.eq) goto loc_824D32EC;
	// mr r26,r17
	r26.u64 = r17.u64;
	// b 0x824d32ec
	goto loc_824D32EC;
loc_824D3170:
	// lwz r11,172(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// li r27,0
	r27.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824d32e8
	if (ctx.cr6.eq) goto loc_824D32E8;
	// lwz r30,0(r19)
	r30.u64 = REX_LOAD_U32(r19.u32 + 0);
	// rlwinm r29,r20,3,0,28
	r29.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r30,-1
	ctx.r11.s64 = r30.s64 + -1;
	// not r28,r11
	r28.u64 = ~ctx.r11.u64;
loc_824D3190:
	// addi r11,r1,180
	ctx.r11.s64 = ctx.r1.s64 + 180;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r11,r1,140
	ctx.r11.s64 = ctx.r1.s64 + 140;
	// stw r10,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r10,r1,200
	ctx.r10.s64 = ctx.r1.s64 + 200;
	// addi r9,r1,232
	ctx.r9.s64 = ctx.r1.s64 + 232;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r8,r1,244
	ctx.r8.s64 = ctx.r1.s64 + 244;
	// addi r7,r1,240
	ctx.r7.s64 = ctx.r1.s64 + 240;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x822d22f8
	ctx.lr = 0x824D31CC;
	sub_822D22F8(ctx, base);
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(r14.u32, 0, ctx.xer);
	// lwz r31,180(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// beq cr6,0x824d322c
	if (ctx.cr6.eq) goto loc_824D322C;
	// lwz r10,144(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r8,156(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// lwz r10,132(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r11,200(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// twllei r8,0
	if (ctx.r8.s32 == 0 || ctx.r8.u32 < 0u) ppc_trap(ctx, base, 0);
	// lwz r9,140(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r3,r11,r8
	ctx.r3.u64 = uint32_t(ctx.r8.u32 ? ctx.r11.u32 / ctx.r8.u32 : 0);
	// divwu r4,r9,r10
	ctx.r4.u64 = uint32_t(ctx.r10.u32 ? ctx.r9.u32 / ctx.r10.u32 : 0);
	// beq cr6,0x824d3210
	if (ctx.cr6.eq) goto loc_824D3210;
	// lwz r5,136(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// bl 0x824d6a08
	ctx.lr = 0x824D320C;
	sub_824D6A08(ctx, base);
	// b 0x824d321c
	goto loc_824D321C;
loc_824D3210:
	// lwz r6,136(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r5,128(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x824d7790
	ctx.lr = 0x824D321C;
	sub_824D7790(ctx, base);
loc_824D321C:
	// lwz r10,136(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// b 0x824d3284
	goto loc_824D3284;
loc_824D322C:
	// lwz r11,144(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x824d3258
	if (ctx.cr6.eq) goto loc_824D3258;
	// lwz r10,132(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r11,140(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// lwz r8,192(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// andc r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r9.u64;
	// b 0x824d3280
	goto loc_824D3280;
loc_824D3258:
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r10,140(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r9,192(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// lwz r8,128(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// andc r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
loc_824D3280:
	// mullw r11,r11,r8
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
loc_824D3284:
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// addi r10,r30,-1
	ctx.r10.s64 = r30.s64 + -1;
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// andc r10,r31,r10
	ctx.r10.u64 = r31.u64 & ~ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r22,r10
	ctx.cr6.compare<uint32_t>(r22.u32, ctx.r10.u32, ctx.xer);
	// and r9,r11,r28
	ctx.r9.u64 = ctx.r11.u64 & r28.u64;
	// bge cr6,0x824d32d4
	if (!ctx.cr6.lt) goto loc_824D32D4;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x824d32d0
	if (ctx.cr6.eq) goto loc_824D32D0;
	// lwz r11,160(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r20,r11
	ctx.cr6.compare<uint32_t>(r20.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x824d32c8
	if (!ctx.cr6.lt) goto loc_824D32C8;
	// add r11,r15,r29
	ctx.r11.u64 = r15.u64 + r29.u64;
	// stwx r16,r15,r29
	REX_STORE_U32(r15.u32 + r29.u32, r16.u32);
	// stw r22,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r22.u32);
loc_824D32C8:
	// addi r20,r20,1
	r20.s64 = r20.s64 + 1;
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
loc_824D32D0:
	// mr r16,r10
	r16.u64 = ctx.r10.u64;
loc_824D32D4:
	// lwz r11,172(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// mr r22,r9
	r22.u64 = ctx.r9.u64;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824d3190
	if (ctx.cr6.lt) goto loc_824D3190;
loc_824D32E8:
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
loc_824D32EC:
	// cmplw cr6,r24,r26
	ctx.cr6.compare<uint32_t>(r24.u32, r26.u32, ctx.xer);
	// blt cr6,0x824d3170
	if (ctx.cr6.lt) goto loc_824D3170;
loc_824D32F4:
	// cmplwi cr6,r25,1
	ctx.cr6.compare<uint32_t>(r25.u32, 1, ctx.xer);
	// beq cr6,0x824d3308
	if (ctx.cr6.eq) goto loc_824D3308;
	// lwz r11,168(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824d3664
	if (ctx.cr6.eq) goto loc_824D3664;
loc_824D3308:
	// lwz r11,204(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 204);
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(r24.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x824d3664
	if (!ctx.cr6.lt) goto loc_824D3664;
	// lwz r11,148(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// subf r9,r17,r21
	ctx.r9.u64 = r21.u64 - r17.u64;
	// lwz r7,152(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// li r27,1
	r27.s64 = 1;
	// subf r10,r23,r11
	ctx.r10.u64 = ctx.r11.u64 - r23.u64;
	// lwz r8,144(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// subf r11,r23,r7
	ctx.r11.u64 = ctx.r7.u64 - r23.u64;
	// stw r27,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r27.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lwz r6,248(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 248);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subf r10,r10,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r10.u64;
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// slw r10,r27,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r27.u32 << (ctx.r10.u8 & 0x3F));
	// slw r11,r27,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (r27.u32 << (ctx.r11.u8 & 0x3F));
	// stw r10,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r10.u32);
	// stw r11,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// mr r9,r14
	ctx.r9.u64 = r14.u64;
	// mr r7,r18
	ctx.r7.u64 = r18.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,164
	ctx.r4.s64 = ctx.r1.s64 + 164;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// li r25,-1
	r25.s64 = -1;
	// li r26,0
	r26.s64 = 0;
	// bl 0x822d1608
	ctx.lr = 0x824D3388;
	sub_822D1608(ctx, base);
	// lwz r11,156(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r10,132(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r9,176(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// lwz r8,164(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r29,r9,r11
	r29.u64 = uint32_t(ctx.r11.u32 ? ctx.r9.u32 / ctx.r11.u32 : 0);
	// divwu r28,r8,r10
	r28.u64 = uint32_t(ctx.r10.u32 ? ctx.r8.u32 / ctx.r10.u32 : 0);
loc_824D33A8:
	// lwz r3,148(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// subf r11,r23,r3
	ctx.r11.u64 = ctx.r3.u64 - r23.u64;
	// srw r11,r11,r24
	ctx.r11.u64 = r24.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (r24.u8 & 0x3F));
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bgt cr6,0x824d33c0
	if (ctx.cr6.gt) goto loc_824D33C0;
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_824D33C0:
	// lwz r4,152(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// add r10,r11,r23
	ctx.r10.u64 = ctx.r11.u64 + r23.u64;
	// subf r11,r23,r4
	ctx.r11.u64 = ctx.r4.u64 - r23.u64;
	// stw r10,200(r1)
	REX_STORE_U32(ctx.r1.u32 + 200, ctx.r10.u32);
	// srw r11,r11,r24
	ctx.r11.u64 = r24.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (r24.u8 & 0x3F));
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bgt cr6,0x824d33e0
	if (ctx.cr6.gt) goto loc_824D33E0;
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_824D33E0:
	// lwz r8,144(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// add r9,r11,r23
	ctx.r9.u64 = ctx.r11.u64 + r23.u64;
	// lwz r5,228(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// stw r9,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r9.u32);
	// cmplwi cr6,r8,2
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 2, ctx.xer);
	// bne cr6,0x824d3418
	if (!ctx.cr6.eq) goto loc_824D3418;
	// subf r11,r23,r5
	ctx.r11.u64 = ctx.r5.u64 - r23.u64;
	// srw r11,r11,r24
	ctx.r11.u64 = r24.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (r24.u8 & 0x3F));
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bgt cr6,0x824d340c
	if (ctx.cr6.gt) goto loc_824D340C;
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_824D340C:
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + r23.u64;
	// stw r11,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// b 0x824d341c
	goto loc_824D341C;
loc_824D3418:
	// stw r27,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r27.u32);
loc_824D341C:
	// lwz r31,156(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// mr r8,r14
	ctx.r8.u64 = r14.u64;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// mr r7,r18
	ctx.r7.u64 = r18.u64;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// std r29,296(r1)
	REX_STORE_U64(ctx.r1.u32 + 296, r29.u64);
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r10,252(r1)
	REX_STORE_U32(ctx.r1.u32 + 252, ctx.r10.u32);
	// addi r10,r1,216
	ctx.r10.s64 = ctx.r1.s64 + 216;
	// mr r9,r21
	ctx.r9.u64 = r21.u64;
	// lwz r29,252(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// twllei r31,0
	if (r31.s32 == 0 || r31.u32 < 0u) ppc_trap(ctx, base, 0);
	// twllei r30,0
	if (r30.s32 == 0 || r30.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r31,r29,r31
	r31.u64 = uint32_t(r31.u32 ? r29.u32 / r31.u32 : 0);
	// divwu r30,r11,r30
	r30.u64 = uint32_t(r30.u32 ? ctx.r11.u32 / r30.u32 : 0);
	// bl 0x824d28c8
	ctx.lr = 0x824D346C;
	sub_824D28C8(ctx, base);
	// ld r29,296(r1)
	r29.u64 = REX_LOAD_U64(ctx.r1.u32 + 296);
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(r14.u32, 0, ctx.xer);
	// lwz r10,220(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// beq cr6,0x824d350c
	if (ctx.cr6.eq) goto loc_824D350C;
	// lwz r11,144(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// lwz r11,216(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// beq cr6,0x824d34c0
	if (ctx.cr6.eq) goto loc_824D34C0;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + r31.u64;
	// stw r11,256(r1)
	REX_STORE_U32(ctx.r1.u32 + 256, ctx.r11.u32);
	// add r8,r10,r30
	ctx.r8.u64 = ctx.r10.u64 + r30.u64;
	// stw r10,260(r1)
	REX_STORE_U32(ctx.r1.u32 + 260, ctx.r10.u32);
	// stw r9,264(r1)
	REX_STORE_U32(ctx.r1.u32 + 264, ctx.r9.u32);
	// addi r7,r1,196
	ctx.r7.s64 = ctx.r1.s64 + 196;
	// stw r8,268(r1)
	REX_STORE_U32(ctx.r1.u32 + 268, ctx.r8.u32);
	// addi r6,r1,184
	ctx.r6.s64 = ctx.r1.s64 + 184;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// lwz r5,136(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824d2a80
	ctx.lr = 0x824D34BC;
	sub_824D2A80(ctx, base);
	// b 0x824d3558
	goto loc_824D3558;
loc_824D34C0:
	// add r6,r11,r31
	ctx.r6.u64 = ctx.r11.u64 + r31.u64;
	// lwz r9,224(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// lwz r8,128(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// add r3,r10,r30
	ctx.r3.u64 = ctx.r10.u64 + r30.u64;
	// stw r6,280(r1)
	REX_STORE_U32(ctx.r1.u32 + 280, ctx.r6.u32);
	// addi r7,r1,184
	ctx.r7.s64 = ctx.r1.s64 + 184;
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r3,284(r1)
	REX_STORE_U32(ctx.r1.u32 + 284, ctx.r3.u32);
	// stw r11,272(r1)
	REX_STORE_U32(ctx.r1.u32 + 272, ctx.r11.u32);
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// stw r6,292(r1)
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r6.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r10,276(r1)
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r10.u32);
	// addi r8,r1,196
	ctx.r8.s64 = ctx.r1.s64 + 196;
	// stw r9,288(r1)
	REX_STORE_U32(ctx.r1.u32 + 288, ctx.r9.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r6,136(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// bl 0x824d2b90
	ctx.lr = 0x824D3508;
	sub_824D2B90(ctx, base);
	// b 0x824d3558
	goto loc_824D3558;
loc_824D350C:
	// lwz r11,224(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// lwz r7,128(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// mullw r8,r11,r28
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(r28.s32);
	// lwz r9,216(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// mullw r11,r8,r29
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(r29.s32);
	// mullw r8,r7,r28
	ctx.r8.s64 = int64_t(ctx.r7.s32) * int64_t(r28.s32);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r10,r30
	ctx.r11.u64 = ctx.r10.u64 + r30.u64;
	// stw r8,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, ctx.r8.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r29.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,196(r1)
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r11.u32);
loc_824D3558:
	// lwz r11,184(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r25.u32, ctx.xer);
	// bge cr6,0x824d3568
	if (!ctx.cr6.lt) goto loc_824D3568;
	// mr r25,r11
	r25.u64 = ctx.r11.u64;
loc_824D3568:
	// lwz r11,196(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r26.u32, ctx.xer);
	// ble cr6,0x824d3578
	if (!ctx.cr6.gt) goto loc_824D3578;
	// mr r26,r11
	r26.u64 = ctx.r11.u64;
loc_824D3578:
	// lwz r11,204(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 204);
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(r24.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824d33a8
	if (ctx.cr6.lt) goto loc_824D33A8;
	// lwz r24,172(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// li r27,0
	r27.s64 = 0;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x824d3664
	if (ctx.cr6.eq) goto loc_824D3664;
	// lwz r31,0(r19)
	r31.u64 = REX_LOAD_U32(r19.u32 + 0);
	// addi r10,r26,1
	ctx.r10.s64 = r26.s64 + 1;
	// lwz r11,136(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// rlwinm r26,r20,3,0,28
	r26.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r31,-1
	ctx.r9.s64 = r31.s64 + -1;
	// mullw r29,r25,r11
	r29.s64 = int64_t(r25.s32) * int64_t(ctx.r11.s32);
	// lwz r25,160(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// mullw r30,r10,r11
	r30.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// not r28,r9
	r28.u64 = ~ctx.r9.u64;
loc_824D35BC:
	// addi r11,r1,180
	ctx.r11.s64 = ctx.r1.s64 + 180;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r9,r1,140
	ctx.r9.s64 = ctx.r1.s64 + 140;
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// addi r10,r1,200
	ctx.r10.s64 = ctx.r1.s64 + 200;
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r9,r1,232
	ctx.r9.s64 = ctx.r1.s64 + 232;
	// addi r8,r1,244
	ctx.r8.s64 = ctx.r1.s64 + 244;
	// addi r7,r1,240
	ctx.r7.s64 = ctx.r1.s64 + 240;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x822d22f8
	ctx.lr = 0x824D35F8;
	sub_822D22F8(ctx, base);
	// lwz r10,232(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 232);
	// lwz r11,180(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// addi r9,r31,-1
	ctx.r9.s64 = r31.s64 + -1;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + r30.u64;
	// add r8,r11,r29
	ctx.r8.u64 = ctx.r11.u64 + r29.u64;
	// add r11,r31,r10
	ctx.r11.u64 = r31.u64 + ctx.r10.u64;
	// andc r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 & ~ctx.r9.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r22,r10
	ctx.cr6.compare<uint32_t>(r22.u32, ctx.r10.u32, ctx.xer);
	// and r9,r11,r28
	ctx.r9.u64 = ctx.r11.u64 & r28.u64;
	// bge cr6,0x824d3654
	if (!ctx.cr6.lt) goto loc_824D3654;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x824d3650
	if (ctx.cr6.eq) goto loc_824D3650;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// cmplw cr6,r20,r11
	ctx.cr6.compare<uint32_t>(r20.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x824d3648
	if (!ctx.cr6.lt) goto loc_824D3648;
	// add r11,r15,r26
	ctx.r11.u64 = r15.u64 + r26.u64;
	// stwx r16,r15,r26
	REX_STORE_U32(r15.u32 + r26.u32, r16.u32);
	// stw r22,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r22.u32);
loc_824D3648:
	// addi r20,r20,1
	r20.s64 = r20.s64 + 1;
	// addi r26,r26,8
	r26.s64 = r26.s64 + 8;
loc_824D3650:
	// mr r16,r10
	r16.u64 = ctx.r10.u64;
loc_824D3654:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// mr r22,r9
	r22.u64 = ctx.r9.u64;
	// cmplw cr6,r27,r24
	ctx.cr6.compare<uint32_t>(r27.u32, r24.u32, ctx.xer);
	// blt cr6,0x824d35bc
	if (ctx.cr6.lt) goto loc_824D35BC;
loc_824D3664:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x824d3690
	if (ctx.cr6.eq) goto loc_824D3690;
	// lwz r11,160(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r20,r11
	ctx.cr6.compare<uint32_t>(r20.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x824d368c
	if (!ctx.cr6.lt) goto loc_824D368C;
	// rlwinm r11,r20,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r15
	ctx.r11.u64 = ctx.r11.u64 + r15.u64;
	// stw r16,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r16.u32);
	// stw r22,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r22.u32);
loc_824D368C:
	// addi r20,r20,1
	r20.s64 = r20.s64 + 1;
loc_824D3690:
	// lwz r11,236(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// lwz r24,532(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 532);
	// lwz r25,188(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// stw r20,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r20.u32);
loc_824D36A0:
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r9,r1,208
	ctx.r9.s64 = ctx.r1.s64 + 208;
	// stw r25,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, r25.u32);
	// addi r11,r1,596
	ctx.r11.s64 = ctx.r1.s64 + 596;
	// addi r10,r1,604
	ctx.r10.s64 = ctx.r1.s64 + 604;
	// stw r9,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r9.u32);
	// addi r19,r1,612
	r19.s64 = ctx.r1.s64 + 612;
	// cmplwi cr6,r25,2
	ctx.cr6.compare<uint32_t>(r25.u32, 2, ctx.xer);
	// blt cr6,0x824d30e0
	if (ctx.cr6.lt) goto loc_824D30E0;
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_82518C38) {
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
	// bl 0x826a1c80
	ctx.lr = 0x82518C40;
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r20,0
	r20.s64 = 0;
	// stw r10,380(r1)
	REX_STORE_U32(ctx.r1.u32 + 380, ctx.r10.u32);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stw r4,332(r1)
	REX_STORE_U32(ctx.r1.u32 + 332, ctx.r4.u32);
	// stw r20,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r20.u32);
	// addi r10,r1,100
	ctx.r10.s64 = ctx.r1.s64 + 100;
	// stw r7,356(r1)
	REX_STORE_U32(ctx.r1.u32 + 356, ctx.r7.u32);
	// mr r17,r3
	r17.u64 = ctx.r3.u64;
	// stw r9,372(r1)
	REX_STORE_U32(ctx.r1.u32 + 372, ctx.r9.u32);
	// mr r15,r4
	r15.u64 = ctx.r4.u64;
	// stw r20,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r20.u32);
	// mr r18,r5
	r18.u64 = ctx.r5.u64;
	// mr r19,r6
	r19.u64 = ctx.r6.u64;
	// stw r20,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r20.u32);
	// mr r14,r9
	r14.u64 = ctx.r9.u64;
	// li r21,1
	r21.s64 = 1;
	// li r23,2
	r23.s64 = 2;
	// li r3,-1
	ctx.r3.s64 = -1;
	// mr r28,r20
	r28.u64 = r20.u64;
	// lwz r26,192(r6)
	r26.u64 = REX_LOAD_U32(ctx.r6.u32 + 192);
	// lwz r25,192(r5)
	r25.u64 = REX_LOAD_U32(ctx.r5.u32 + 192);
	// clrlwi r16,r25,29
	r16.u64 = r25.u32 & 0x7;
	// clrlwi. r22,r26,29
	r22.u64 = r26.u32 & 0x7;
	ctx.cr0.compare<int32_t>(r22.s32, 0, ctx.xer);
	// beq 0x82518e8c
	if (ctx.cr0.eq) goto loc_82518E8C;
	// mr r9,r20
	ctx.r9.u64 = r20.u64;
	// li r27,5
	r27.s64 = 5;
	// subfic r24,r6,3
	ctx.xer.ca = ctx.r6.u32 <= 3;
	r24.u64 = static_cast<uint64_t>(3) - ctx.r6.u64;
loc_82518CB0:
	// slw r11,r21,r28
	ctx.r11.u64 = r28.u8 & 0x20 ? 0 : (r21.u32 << (r28.u8 & 0x3F));
	// and. r11,r11,r14
	ctx.r11.u64 = ctx.r11.u64 & r14.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82518e78
	if (!ctx.cr0.eq) goto loc_82518E78;
	// mr r29,r20
	r29.u64 = r20.u64;
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(r16.u32, 0, ctx.xer);
	// beq cr6,0x82518e04
	if (ctx.cr6.eq) goto loc_82518E04;
	// add r30,r9,r19
	r30.u64 = ctx.r9.u64 + r19.u64;
	// lwz r11,672(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 672);
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r6,r18,16
	ctx.r6.s64 = r18.s64 + 16;
	// rlwinm r31,r11,3,0,28
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r4,16(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 16);
loc_82518CE0:
	// add r10,r31,r4
	ctx.r10.u64 = r31.u64 + ctx.r4.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82518d1c
	if (!ctx.cr6.lt) goto loc_82518D1C;
	// lwz r7,-16(r6)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + -16);
	// subf r7,r4,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r4.u64;
loc_82518CF8:
	// ldx r15,r7,r11
	r15.u64 = REX_LOAD_U64(ctx.r7.u32 + ctx.r11.u32);
	// ld r14,0(r11)
	r14.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// and r15,r15,r14
	r15.u64 = r15.u64 & r14.u64;
	// cmpldi cr6,r15,0
	ctx.cr6.compare<uint64_t>(r15.u64, 0, ctx.xer);
	// bne cr6,0x82518fb4
	if (!ctx.cr6.eq) goto loc_82518FB4;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82518cf8
	if (ctx.cr6.lt) goto loc_82518CF8;
	// lwz r15,332(r1)
	r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
loc_82518D1C:
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
loc_82518D20:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82518dc0
	if (!ctx.cr0.eq) goto loc_82518DC0;
	// lwz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// add r10,r31,r11
	ctx.r10.u64 = r31.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82518d64
	if (!ctx.cr6.lt) goto loc_82518D64;
	// lwz r7,0(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 0);
	// subf r7,r11,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r11.u64;
loc_82518D40:
	// ldx r15,r7,r11
	r15.u64 = REX_LOAD_U64(ctx.r7.u32 + ctx.r11.u32);
	// ld r14,0(r11)
	r14.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// and r15,r15,r14
	r15.u64 = r15.u64 & r14.u64;
	// cmpldi cr6,r15,0
	ctx.cr6.compare<uint64_t>(r15.u64, 0, ctx.xer);
	// bne cr6,0x82518fc0
	if (!ctx.cr6.eq) goto loc_82518FC0;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82518d40
	if (ctx.cr6.lt) goto loc_82518D40;
	// lwz r15,332(r1)
	r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
loc_82518D64:
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
loc_82518D68:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82518dc0
	if (!ctx.cr0.eq) goto loc_82518DC0;
	// rlwinm. r11,r26,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82518dec
	if (ctx.cr0.eq) goto loc_82518DEC;
	// rlwinm. r11,r25,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82518dec
	if (ctx.cr0.eq) goto loc_82518DEC;
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
loc_82518D84:
	// add r10,r27,r11
	ctx.r10.u64 = r27.u64 + ctx.r11.u64;
	// add r7,r5,r11
	ctx.r7.u64 = ctx.r5.u64 + ctx.r11.u64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r7,r7,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r10,r10,r19
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + r19.u32);
	// ldx r7,r7,r18
	ctx.r7.u64 = REX_LOAD_U64(ctx.r7.u32 + r18.u32);
	// nor r10,r10,r7
	ctx.r10.u64 = ~(ctx.r10.u64 | ctx.r7.u64);
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// bne cr6,0x82518fcc
	if (!ctx.cr6.eq) goto loc_82518FCC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x82518d84
	if (ctx.cr6.lt) goto loc_82518D84;
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
loc_82518DB8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82518dec
	if (!ctx.cr0.eq) goto loc_82518DEC;
loc_82518DC0:
	// lwz r15,332(r1)
	r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// rlwinm r10,r9,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFC;
	// std r9,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// clrlwi r7,r9,27
	ctx.r7.u64 = ctx.r9.u32 & 0x1F;
	// slw r14,r21,r29
	r14.u64 = r29.u8 & 0x20 ? 0 : (r21.u32 << (r29.u8 & 0x3F));
	// lwzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// slw r7,r14,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (r14.u32 << (ctx.r7.u8 & 0x3F));
	// or r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 | ctx.r9.u64;
	// ld r9,104(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// stwx r7,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r7.u32);
loc_82518DEC:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// addi r5,r5,5
	ctx.r5.s64 = ctx.r5.s64 + 5;
	// cmplw cr6,r29,r16
	ctx.cr6.compare<uint32_t>(r29.u32, r16.u32, ctx.xer);
	// blt cr6,0x82518ce0
	if (ctx.cr6.lt) goto loc_82518CE0;
	// lwz r14,372(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
loc_82518E04:
	// add r10,r24,r9
	ctx.r10.u64 = r24.u64 + ctx.r9.u64;
	// rlwinm r11,r9,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFC;
	// add r10,r10,r19
	ctx.r10.u64 = ctx.r10.u64 + r19.u64;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// clrlwi r6,r9,27
	ctx.r6.u64 = ctx.r9.u32 & 0x1F;
	// slw r10,r23,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r23.u32 << (ctx.r10.u8 & 0x3F));
	// lwzx r7,r11,r7
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// slw r5,r3,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r6.u8 & 0x3F));
	// and r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 & ctx.r7.u64;
	// lis r4,0
	ctx.r4.s64 = 0;
	// lis r7,-28311
	ctx.r7.s64 = -1855389696;
	// and r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 & ctx.r5.u64;
	// ori r7,r7,5192
	ctx.r7.u64 = ctx.r7.u64 | 5192;
	// ori r5,r4,36262
	ctx.r5.u64 = ctx.r4.u64 | 36262;
	// srw r10,r10,r6
	ctx.r10.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r6.u8 & 0x3F));
	// rldimi r7,r5,32,0
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r5.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r7.u64 & 0xFFFFFFFF);
	// clrldi r5,r10,32
	ctx.r5.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// addi r10,r1,100
	ctx.r10.s64 = ctx.r1.s64 + 100;
	// srd r7,r7,r5
	ctx.r7.u64 = ctx.r5.u8 & 0x40 ? 0 : (ctx.r7.u64 >> (ctx.r5.u8 & 0x7F));
	// srd r7,r7,r5
	ctx.r7.u64 = ctx.r5.u8 & 0x40 ? 0 : (ctx.r7.u64 >> (ctx.r5.u8 & 0x7F));
	// lwzx r4,r11,r10
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// srd r7,r7,r5
	ctx.r7.u64 = ctx.r5.u8 & 0x40 ? 0 : (ctx.r7.u64 >> (ctx.r5.u8 & 0x7F));
	// clrlwi r7,r7,29
	ctx.r7.u64 = ctx.r7.u32 & 0x7;
	// subfic r7,r7,4
	ctx.xer.ca = ctx.r7.u32 <= 4;
	ctx.r7.u64 = static_cast<uint64_t>(4) - ctx.r7.u64;
	// slw r7,r7,r6
	ctx.r7.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r6.u8 & 0x3F));
	// or r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 | ctx.r4.u64;
	// stwx r7,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r7.u32);
loc_82518E78:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r27,r27,5
	r27.s64 = r27.s64 + 5;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r28,r22
	ctx.cr6.compare<uint32_t>(r28.u32, r22.u32, ctx.xer);
	// blt cr6,0x82518cb0
	if (ctx.cr6.lt) goto loc_82518CB0;
loc_82518E8C:
	// mr r29,r20
	r29.u64 = r20.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82519040
	if (ctx.cr6.eq) goto loc_82519040;
	// li r6,4
	ctx.r6.s64 = 4;
loc_82518E9C:
	// addi r11,r6,-1
	ctx.r11.s64 = ctx.r6.s64 + -1;
	// addi r7,r1,356
	ctx.r7.s64 = ctx.r1.s64 + 356;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// rlwinm r9,r6,29,3,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// clrlwi r5,r6,27
	ctx.r5.u64 = ctx.r6.u32 & 0x1F;
	// slw r10,r23,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r23.u32 << (ctx.r10.u8 & 0x3F));
	// lwzx r9,r9,r7
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// slw r7,r3,r5
	ctx.r7.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r5.u8 & 0x3F));
	// and r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 & ctx.r9.u64;
	// addi r10,r6,-4
	ctx.r10.s64 = ctx.r6.s64 + -4;
	// and r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 & ctx.r7.u64;
	// rlwinm r7,r10,29,3,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFC;
	// srw r4,r9,r5
	ctx.r4.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r5.u8 & 0x3F));
	// addi r5,r1,356
	ctx.r5.s64 = ctx.r1.s64 + 356;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// addi r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 + 3;
	// slw r11,r23,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (r23.u32 << (ctx.r11.u8 & 0x3F));
	// lwzx r7,r7,r5
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r5.u32);
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// rlwinm r5,r4,31,3,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 31) & 0x1FFFFFFC;
	// addi r31,r1,96
	r31.s64 = ctx.r1.s64 + 96;
	// addi r30,r11,-1
	r30.s64 = ctx.r11.s64 + -1;
	// slw r11,r23,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (r23.u32 << (ctx.r9.u8 & 0x3F));
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// lwzx r9,r5,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + r31.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r5,r4,2,27,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x1C;
	// and r7,r30,r7
	ctx.r7.u64 = r30.u64 & ctx.r7.u64;
	// slw r31,r3,r10
	r31.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r10.u8 & 0x3F));
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// and r7,r7,r31
	ctx.r7.u64 = ctx.r7.u64 & r31.u64;
	// slw r9,r3,r5
	ctx.r9.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r5.u8 & 0x3F));
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// srw r10,r7,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r10.u8 & 0x3F));
	// slw r7,r21,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (r21.u32 << (ctx.r10.u8 & 0x3F));
	// srw r11,r11,r5
	ctx.r11.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r5.u8 & 0x3F));
	// and. r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 & ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825192c0
	if (!ctx.cr0.eq) goto loc_825192C0;
	// mr r30,r20
	r30.u64 = r20.u64;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x82519030
	if (ctx.cr6.eq) goto loc_82519030;
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
	// mtctr r22
	ctx.ctr.u64 = r22.u64;
loc_82518F54:
	// cmplw cr6,r30,r4
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r4.u32, ctx.xer);
	// addi r9,r11,3
	ctx.r9.s64 = ctx.r11.s64 + 3;
	// rlwinm r10,r11,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r28,r11,27
	r28.u64 = ctx.r11.u32 & 0x1F;
	// bne cr6,0x82518fd4
	if (!ctx.cr6.eq) goto loc_82518FD4;
	// clrlwi r31,r9,27
	r31.u64 = ctx.r9.u32 & 0x1F;
	// addi r9,r1,100
	ctx.r9.s64 = ctx.r1.s64 + 100;
	// slw r31,r23,r31
	r31.u64 = r31.u8 & 0x20 ? 0 : (r23.u32 << (r31.u8 & 0x3F));
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwzx r27,r10,r9
	r27.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// slw r26,r3,r28
	r26.u64 = r28.u8 & 0x20 ? 0 : (ctx.r3.u32 << (r28.u8 & 0x3F));
	// nand r31,r31,r26
	r31.u64 = ~(r31.u64 & r26.u64);
	// lwzx r25,r10,r5
	r25.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// subfic r26,r7,15
	ctx.xer.ca = ctx.r7.u32 <= 15;
	r26.u64 = static_cast<uint64_t>(15) - ctx.r7.u64;
	// and r27,r31,r27
	r27.u64 = r31.u64 & r27.u64;
	// slw r24,r21,r28
	r24.u64 = r28.u8 & 0x20 ? 0 : (r21.u32 << (r28.u8 & 0x3F));
	// slw r28,r26,r28
	r28.u64 = r28.u8 & 0x20 ? 0 : (r26.u32 << (r28.u8 & 0x3F));
	// and r31,r31,r25
	r31.u64 = r31.u64 & r25.u64;
	// or r27,r27,r24
	r27.u64 = r27.u64 | r24.u64;
	// or r31,r28,r31
	r31.u64 = r28.u64 | r31.u64;
	// stwx r27,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, r27.u32);
	// stwx r31,r10,r5
	REX_STORE_U32(ctx.r10.u32 + ctx.r5.u32, r31.u32);
	// b 0x82519024
	goto loc_82519024;
loc_82518FB4:
	// lwz r15,332(r1)
	r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
	// b 0x82518d20
	goto loc_82518D20;
loc_82518FC0:
	// lwz r15,332(r1)
	r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
	// b 0x82518d68
	goto loc_82518D68;
loc_82518FCC:
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
	// b 0x82518db8
	goto loc_82518DB8;
loc_82518FD4:
	// clrlwi r5,r9,27
	ctx.r5.u64 = ctx.r9.u32 & 0x1F;
	// addi r9,r1,100
	ctx.r9.s64 = ctx.r1.s64 + 100;
	// slw r5,r23,r5
	ctx.r5.u64 = ctx.r5.u8 & 0x20 ? 0 : (r23.u32 << (ctx.r5.u8 & 0x3F));
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// lwzx r31,r10,r9
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// slw r27,r3,r28
	r27.u64 = r28.u8 & 0x20 ? 0 : (ctx.r3.u32 << (r28.u8 & 0x3F));
	// and r27,r5,r27
	r27.u64 = ctx.r5.u64 & r27.u64;
	// mr r26,r31
	r26.u64 = r31.u64;
	// and r31,r27,r31
	r31.u64 = r27.u64 & r31.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// srw r31,r31,r28
	r31.u64 = r28.u8 & 0x20 ? 0 : (r31.u32 >> (r28.u8 & 0x3F));
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// andc r27,r26,r27
	r27.u64 = r26.u64 & ~r27.u64;
	// lwzx r26,r10,r5
	r26.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// slw r31,r31,r28
	r31.u64 = r28.u8 & 0x20 ? 0 : (r31.u32 << (r28.u8 & 0x3F));
	// slw r25,r7,r28
	r25.u64 = r28.u8 & 0x20 ? 0 : (ctx.r7.u32 << (r28.u8 & 0x3F));
	// or r31,r27,r31
	r31.u64 = r27.u64 | r31.u64;
	// or r28,r25,r26
	r28.u64 = r25.u64 | r26.u64;
	// stwx r31,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, r31.u32);
	// stwx r28,r10,r5
	REX_STORE_U32(ctx.r10.u32 + ctx.r5.u32, r28.u32);
loc_82519024:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82518f54
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82518F54;
loc_82519030:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r6,r6,8
	ctx.r6.s64 = ctx.r6.s64 + 8;
	// cmplw cr6,r29,r8
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82518e9c
	if (ctx.cr6.lt) goto loc_82518E9C;
loc_82519040:
	// li r29,15
	r29.s64 = 15;
	// mr r28,r20
	r28.u64 = r20.u64;
	// mr r27,r20
	r27.u64 = r20.u64;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x825191e8
	if (ctx.cr6.eq) goto loc_825191E8;
loc_82519054:
	// slw r11,r21,r27
	ctx.r11.u64 = r27.u8 & 0x20 ? 0 : (r21.u32 << (r27.u8 & 0x3F));
	// and. r11,r11,r14
	ctx.r11.u64 = ctx.r11.u64 & r14.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825191dc
	if (!ctx.cr0.eq) goto loc_825191DC;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r7,15
	ctx.r7.s64 = 15;
	// mr r8,r20
	ctx.r8.u64 = r20.u64;
	// mr r10,r20
	ctx.r10.u64 = r20.u64;
loc_82519070:
	// slw r9,r21,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (r21.u32 << (ctx.r8.u8 & 0x3F));
	// and. r9,r9,r14
	ctx.r9.u64 = ctx.r9.u64 & r14.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x825190cc
	if (!ctx.cr0.eq) goto loc_825190CC;
	// addi r9,r10,3
	ctx.r9.s64 = ctx.r10.s64 + 3;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// rlwinm r6,r10,29,3,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// slw r9,r23,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r23.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r6,r6,r5
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// clrlwi r5,r10,27
	ctx.r5.u64 = ctx.r10.u32 & 0x1F;
	// and r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 & ctx.r6.u64;
	// slw r4,r3,r5
	ctx.r4.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r5.u8 & 0x3F));
	// and r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 & ctx.r4.u64;
	// srw r9,r9,r5
	ctx.r9.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r5.u8 & 0x3F));
	// cmplwi cr6,r9,8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 8, ctx.xer);
	// bgt cr6,0x825190cc
	if (ctx.cr6.gt) goto loc_825190CC;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x825192c0
	if (ctx.cr6.eq) goto loc_825192C0;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x825190cc
	if (!ctx.cr6.lt) goto loc_825190CC;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_825190CC:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r8,r22
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, r22.u32, ctx.xer);
	// blt cr6,0x82519070
	if (ctx.cr6.lt) goto loc_82519070;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r11,31,3,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1FFFFFFC;
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// rlwinm r4,r11,2,27,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1C;
	// slw r10,r23,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r23.u32 << (ctx.r10.u8 & 0x3F));
	// lwzx r11,r5,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// slw r9,r3,r4
	ctx.r9.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r4.u8 & 0x3F));
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// srw r11,r11,r4
	ctx.r11.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r4.u8 & 0x3F));
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// beq cr6,0x825192c0
	if (ctx.cr6.eq) goto loc_825192C0;
	// andc r11,r29,r11
	ctx.r11.u64 = r29.u64 & ~ctx.r11.u64;
	// mtctr r22
	ctx.ctr.u64 = r22.u64;
	// mr r31,r20
	r31.u64 = r20.u64;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// mr r8,r20
	ctx.r8.u64 = r20.u64;
	// andc r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r10.u64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subf r29,r11,r29
	r29.u64 = r29.u64 - ctx.r11.u64;
	// or r28,r11,r28
	r28.u64 = ctx.r11.u64 | r28.u64;
	// subfic r30,r10,31
	ctx.xer.ca = ctx.r10.u32 <= 31;
	r30.u64 = static_cast<uint64_t>(31) - ctx.r10.u64;
loc_82519140:
	// slw r10,r21,r31
	ctx.r10.u64 = r31.u8 & 0x20 ? 0 : (r21.u32 << (r31.u8 & 0x3F));
	// and. r10,r10,r14
	ctx.r10.u64 = ctx.r10.u64 & r14.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825191a8
	if (!ctx.cr0.eq) goto loc_825191A8;
	// addi r10,r8,3
	ctx.r10.s64 = ctx.r8.s64 + 3;
	// clrlwi r9,r8,27
	ctx.r9.u64 = ctx.r8.u32 & 0x1F;
	// clrlwi r6,r10,27
	ctx.r6.u64 = ctx.r10.u32 & 0x1F;
	// rlwinm r10,r8,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFC;
	// slw r6,r23,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (r23.u32 << (ctx.r6.u8 & 0x3F));
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// slw r25,r3,r9
	r25.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r26,r10,r7
	r26.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// and r6,r6,r25
	ctx.r6.u64 = ctx.r6.u64 & r25.u64;
	// and r6,r6,r26
	ctx.r6.u64 = ctx.r6.u64 & r26.u64;
	// srw r6,r6,r9
	ctx.r6.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r9.u8 & 0x3F));
	// and. r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x825191a8
	if (!ctx.cr0.eq) goto loc_825191A8;
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// slw r25,r21,r9
	r25.u64 = ctx.r9.u8 & 0x20 ? 0 : (r21.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r24,r10,r6
	r24.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// rotlwi r26,r26,0
	r26.u64 = __builtin_rotateleft32(r26.u32, 0);
	// slw r9,r11,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r9.u8 & 0x3F));
	// subf r25,r25,r24
	r25.u64 = r24.u64 - r25.u64;
	// or r9,r9,r26
	ctx.r9.u64 = ctx.r9.u64 | r26.u64;
	// stwx r25,r10,r6
	REX_STORE_U32(ctx.r10.u32 + ctx.r6.u32, r25.u32);
	// stwx r9,r10,r7
	REX_STORE_U32(ctx.r10.u32 + ctx.r7.u32, ctx.r9.u32);
loc_825191A8:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x82519140
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82519140;
	// addi r11,r1,100
	ctx.r11.s64 = ctx.r1.s64 + 100;
	// lwzx r10,r5,r17
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + r17.u32);
	// li r9,15
	ctx.r9.s64 = 15;
	// slw r8,r30,r4
	ctx.r8.u64 = ctx.r4.u8 & 0x20 ? 0 : (r30.u32 << (ctx.r4.u8 & 0x3F));
	// lwzx r7,r5,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// slw r9,r9,r4
	ctx.r9.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r4.u8 & 0x3F));
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// stwx r9,r5,r11
	REX_STORE_U32(ctx.r5.u32 + ctx.r11.u32, ctx.r9.u32);
	// stwx r10,r5,r17
	REX_STORE_U32(ctx.r5.u32 + r17.u32, ctx.r10.u32);
loc_825191DC:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// cmplw cr6,r27,r22
	ctx.cr6.compare<uint32_t>(r27.u32, r22.u32, ctx.xer);
	// blt cr6,0x82519054
	if (ctx.cr6.lt) goto loc_82519054;
loc_825191E8:
	// cntlzw r11,r28
	ctx.r11.u64 = r28.u32 == 0 ? 32 : __builtin_clz(r28.u32);
	// mr r10,r16
	ctx.r10.u64 = r16.u64;
	// subfic r11,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r11.u64 = static_cast<uint64_t>(32) - ctx.r11.u64;
	// cmplw cr6,r16,r11
	ctx.cr6.compare<uint32_t>(r16.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82519200
	if (ctx.cr6.gt) goto loc_82519200;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82519200:
	// cmplw cr6,r10,r22
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r22.u32, ctx.xer);
	// ble cr6,0x82519220
	if (!ctx.cr6.gt) goto loc_82519220;
	// cmplw cr6,r16,r11
	ctx.cr6.compare<uint32_t>(r16.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82519218
	if (!ctx.cr6.gt) goto loc_82519218;
	// mr r31,r16
	r31.u64 = r16.u64;
	// b 0x82519224
	goto loc_82519224;
loc_82519218:
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// b 0x82519224
	goto loc_82519224;
loc_82519220:
	// mr r31,r22
	r31.u64 = r22.u64;
loc_82519224:
	// lwz r11,192(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 192);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825192b0
	if (ctx.cr0.eq) goto loc_825192B0;
	// lwz r11,192(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 192);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825192b0
	if (ctx.cr0.eq) goto loc_825192B0;
	// addi r10,r1,120
	ctx.r10.s64 = ctx.r1.s64 + 120;
	// stw r15,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r15.u32);
	// lwz r11,792(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 792);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// std r20,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, r20.u64);
	// std r20,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, r20.u64);
	// std r20,16(r10)
	REX_STORE_U64(ctx.r10.u32 + 16, r20.u64);
	// std r20,24(r10)
	REX_STORE_U64(ctx.r10.u32 + 24, r20.u64);
	// bne cr6,0x82519264
	if (!ctx.cr6.eq) goto loc_82519264;
	// li r11,32
	ctx.r11.s64 = 32;
loc_82519264:
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// bge cr6,0x8251927c
	if (!ctx.cr6.lt) goto loc_8251927C;
	// subfic r5,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r5.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8251ed40
	ctx.lr = 0x8251927C;
	sub_8251ED40(ctx, base);
loc_8251927C:
	// addi r11,r1,100
	ctx.r11.s64 = ctx.r1.s64 + 100;
	// lwz r6,0(r17)
	ctx.r6.u64 = REX_LOAD_U32(r17.u32 + 0);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lwz r9,380(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// mr r8,r14
	ctx.r8.u64 = r14.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x825185b0
	ctx.lr = 0x825192A8;
	sub_825185B0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x825192c0
	if (ctx.cr6.eq) goto loc_825192C0;
loc_825192B0:
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 0);
	// rlwinm r10,r31,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 16) & 0xFFFF0000;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,0(r17)
	REX_STORE_U32(r17.u32 + 0, ctx.r11.u32);
loc_825192C0:
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_8256FA98) {
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
	// bl 0x826a1c80
	ctx.lr = 0x8256FAA0;
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// lwz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// mr r21,r4
	r21.u64 = ctx.r4.u64;
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// addic r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8256fad4
	if (!ctx.cr6.eq) goto loc_8256FAD4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82570a44
	goto loc_82570A44;
loc_8256FAD4:
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x824f7678
	ctx.lr = 0x8256FAE4;
	sub_824F7678(ctx, base);
	// addi r16,r3,4
	r16.s64 = ctx.r3.s64 + 4;
	// ori r11,r3,1
	ctx.r11.u64 = ctx.r3.u64 | 1;
	// stw r3,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// ori r10,r16,1
	ctx.r10.u64 = r16.u64 | 1;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r11,44(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 44);
	// oris r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 131072;
	// stw r11,44(r23)
	REX_STORE_U32(r23.u32 + 44, ctx.r11.u32);
	// lwz r17,4(r21)
	r17.u64 = REX_LOAD_U32(r21.u32 + 4);
	// lwz r11,48(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 48);
	// rlwinm. r11,r11,10,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8256fb48
	if (ctx.cr0.eq) goto loc_8256FB48;
	// lwz r11,80(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 80);
	// b 0x8256fb30
	goto loc_8256FB30;
loc_8256FB20:
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r10,r10,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8256fb38
	if (ctx.cr0.eq) goto loc_8256FB38;
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
loc_8256FB30:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8256fb20
	if (!ctx.cr6.eq) goto loc_8256FB20;
loc_8256FB38:
	// stw r11,4(r21)
	REX_STORE_U32(r21.u32 + 4, ctx.r11.u32);
	// mr r17,r11
	r17.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825709e0
	if (ctx.cr6.eq) goto loc_825709E0;
loc_8256FB48:
	// lwz r11,60(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 60);
	// li r20,0
	r20.s64 = 0;
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8256fb74
	if (ctx.cr0.eq) goto loc_8256FB74;
	// lwz r11,24(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8256fb74
	if (!ctx.cr6.eq) goto loc_8256FB74;
	// lwz r11,52(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 52);
	// rlwinm. r11,r11,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x8256fb78
	if (ctx.cr0.eq) goto loc_8256FB78;
loc_8256FB74:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8256FB78:
	// lwz r10,616(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 616);
	// clrlwi r19,r11,24
	r19.u64 = ctx.r11.u32 & 0xFF;
	// lwz r9,36(r21)
	ctx.r9.u64 = REX_LOAD_U32(r21.u32 + 36);
	// li r15,68
	r15.s64 = 68;
	// subf r11,r10,r21
	ctx.r11.u64 = r21.u64 - ctx.r10.u64;
	// rlwinm r10,r9,0,7,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1FFFC00;
	// li r14,1
	r14.s64 = 1;
	// divw r18,r11,r15
	r18.u64 = uint32_t((r15.s32 && !(ctx.r11.s32 == INT32_MIN && r15.s32 == -1)) ? ctx.r11.s32 / r15.s32 : 0);
	// cmplwi cr6,r10,1024
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1024, ctx.xer);
	// ble cr6,0x82570858
	if (!ctx.cr6.gt) goto loc_82570858;
loc_8256FBA0:
	// lwz r28,8(r21)
	r28.u64 = REX_LOAD_U32(r21.u32 + 8);
	// lwz r11,48(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 48);
	// rlwinm. r11,r11,10,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8256fbd8
	if (ctx.cr0.eq) goto loc_8256FBD8;
	// lwz r11,80(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 80);
	// b 0x8256fbc8
	goto loc_8256FBC8;
loc_8256FBB8:
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r10,r10,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8256fbd0
	if (ctx.cr0.eq) goto loc_8256FBD0;
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
loc_8256FBC8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8256fbb8
	if (!ctx.cr6.eq) goto loc_8256FBB8;
loc_8256FBD0:
	// stw r11,8(r21)
	REX_STORE_U32(r21.u32 + 8, ctx.r11.u32);
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
loc_8256FBD8:
	// cmplw cr6,r28,r17
	ctx.cr6.compare<uint32_t>(r28.u32, r17.u32, ctx.xer);
	// bne cr6,0x8256fc14
	if (!ctx.cr6.eq) goto loc_8256FC14;
	// lwz r11,8(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 8);
loc_8256FBE4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8256fc08
	if (ctx.cr6.eq) goto loc_8256FC08;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8256fc00
	if (ctx.cr6.eq) goto loc_8256FC00;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// b 0x8256fbe4
	goto loc_8256FBE4;
loc_8256FC00:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8256fc0c
	goto loc_8256FC0C;
loc_8256FC08:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8256FC0C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825709e0
	if (ctx.cr0.eq) goto loc_825709E0;
loc_8256FC14:
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// lwz r11,108(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 108);
	// addi r9,r1,108
	ctx.r9.s64 = ctx.r1.s64 + 108;
	// lwz r31,4(r23)
	r31.u64 = REX_LOAD_U32(r23.u32 + 4);
	// ori r30,r10,1
	r30.u64 = ctx.r10.u64 | 1;
	// addi r22,r11,1
	r22.s64 = ctx.r11.s64 + 1;
	// ori r10,r9,1
	ctx.r10.u64 = ctx.r9.u64 | 1;
	// stw r30,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r30.u32);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r22,108(r23)
	REX_STORE_U32(r23.u32 + 108, r22.u32);
	// stw r10,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// bne 0x8256fd4c
	if (!ctx.cr0.eq) goto loc_8256FD4C;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq 0x8256fd4c
	if (ctx.cr0.eq) goto loc_8256FD4C;
	// lwz r29,84(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_8256FC50:
	// lwz r11,616(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 616);
	// subf r11,r11,r21
	ctx.r11.u64 = r21.u64 - ctx.r11.u64;
	// divw r10,r11,r15
	ctx.r10.u64 = uint32_t((r15.s32 && !(ctx.r11.s32 == INT32_MIN && r15.s32 == -1)) ? ctx.r11.s32 / r15.s32 : 0);
	// rlwinm r11,r10,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// addi r11,r11,21
	ctx.r11.s64 = ctx.r11.s64 + 21;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8256fd34
	if (ctx.cr0.eq) goto loc_8256FD34;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x824ffcc0
	ctx.lr = 0x8256FC84;
	sub_824FFCC0(ctx, base);
	// stw r31,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, r31.u32);
	// stw r3,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// clrlwi r8,r18,27
	ctx.r8.u64 = r18.u32 & 0x1F;
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// slw r8,r7,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r8.u8 & 0x3F));
	// rlwinm r10,r18,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 27) & 0x7FFFFFF;
	// lwz r7,104(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,21
	ctx.r10.s64 = ctx.r10.s64 + 21;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// lwz r7,104(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// rlwinm r7,r7,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// stw r30,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r30.u32);
	// stw r9,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// stw r11,84(r3)
	REX_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// lwzx r11,r10,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	// andc r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r8.u64;
	// stwx r11,r10,r31
	REX_STORE_U32(ctx.r10.u32 + r31.u32, ctx.r11.u32);
	// stw r22,44(r31)
	REX_STORE_U32(r31.u32 + 44, r22.u32);
	// lwz r11,0(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8256fd10
	if (!ctx.cr0.eq) goto loc_8256FD10;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8256fd10
	if (ctx.cr0.eq) goto loc_8256FD10;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8256fd1c
	if (!ctx.cr6.gt) goto loc_8256FD1C;
loc_8256FD10:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8251fe00
	ctx.lr = 0x8256FD1C;
	sub_8251FE00(ctx, base);
loc_8256FD1C:
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stwx r31,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, r31.u32);
loc_8256FD34:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r31,4(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8256fd4c
	if (!ctx.cr0.eq) goto loc_8256FD4C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8256fc50
	if (!ctx.cr6.eq) goto loc_8256FC50;
loc_8256FD4C:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x8255bca0
	ctx.lr = 0x8256FD60;
	sub_8255BCA0(ctx, base);
	// add r20,r3,r20
	r20.u64 = ctx.r3.u64 + r20.u64;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82553880
	ctx.lr = 0x8256FD70;
	sub_82553880(ctx, base);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r27,80(r17)
	r27.u64 = REX_LOAD_U32(r17.u32 + 80);
	// bl 0x825c6828
	ctx.lr = 0x8256FD84;
	sub_825C6828(ctx, base);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825c69a0
	ctx.lr = 0x8256FD94;
	sub_825C69A0(ctx, base);
	// lwz r11,36(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8256fe40
	if (!ctx.cr0.eq) goto loc_8256FE40;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8256fe40
	if (ctx.cr0.eq) goto loc_8256FE40;
loc_8256FDAC:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,86
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 86, ctx.xer);
	// beq cr6,0x8256fde8
	if (ctx.cr6.eq) goto loc_8256FDE8;
	// cmplwi cr6,r11,87
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 87, ctx.xer);
	// beq cr6,0x8256fde8
	if (ctx.cr6.eq) goto loc_8256FDE8;
	// cmplwi cr6,r11,89
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 89, ctx.xer);
	// beq cr6,0x8256fde8
	if (ctx.cr6.eq) goto loc_8256FDE8;
	// cmplwi cr6,r11,90
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 90, ctx.xer);
	// beq cr6,0x8256fde8
	if (ctx.cr6.eq) goto loc_8256FDE8;
	// cmplwi cr6,r11,84
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 84, ctx.xer);
	// beq cr6,0x8256fde8
	if (ctx.cr6.eq) goto loc_8256FDE8;
	// cmplwi cr6,r11,85
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 85, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8256fdec
	if (!ctx.cr6.eq) goto loc_8256FDEC;
loc_8256FDE8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8256FDEC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8256fe24
	if (ctx.cr0.eq) goto loc_8256FE24;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x824f71b8
	ctx.lr = 0x8256FE0C;
	sub_824F71B8(ctx, base);
	// addi r11,r31,-16
	ctx.r11.s64 = r31.s64 + -16;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r17
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r17.u32, ctx.xer);
	// bne cr6,0x8256fe24
	if (!ctx.cr6.eq) goto loc_8256FE24;
	// stw r27,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r27.u32);
loc_8256FE24:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8256fe40
	if (!ctx.cr0.eq) goto loc_8256FE40;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8256fdac
	if (!ctx.cr6.eq) goto loc_8256FDAC;
loc_8256FE40:
	// addi r26,r27,8
	r26.s64 = r27.s64 + 8;
	// lwz r31,8(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 8);
	// mr r30,r26
	r30.u64 = r26.u64;
loc_8256FE4C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8256fea8
	if (ctx.cr6.eq) goto loc_8256FEA8;
	// rlwinm r11,r18,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 27) & 0x7FFFFFF;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// clrlwi r10,r18,27
	ctx.r10.u64 = r18.u32 & 0x1F;
	// addi r11,r11,21
	ctx.r11.s64 = ctx.r11.s64 + 21;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8256fe90
	if (!ctx.cr0.eq) goto loc_8256FE90;
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r22.u32, ctx.xer);
	// beq cr6,0x8256fe90
	if (ctx.cr6.eq) goto loc_8256FE90;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x825c6828
	ctx.lr = 0x8256FE90;
	sub_825C6828(ctx, base);
loc_8256FE90:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bne cr6,0x8256fea0
	if (!ctx.cr6.eq) goto loc_8256FEA0;
	// addi r30,r31,12
	r30.s64 = r31.s64 + 12;
loc_8256FEA0:
	// lwz r31,0(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 0);
	// b 0x8256fe4c
	goto loc_8256FE4C;
loc_8256FEA8:
	// addi r29,r17,8
	r29.s64 = r17.s64 + 8;
	// lwz r31,8(r17)
	r31.u64 = REX_LOAD_U32(r17.u32 + 8);
	// mr r30,r29
	r30.u64 = r29.u64;
loc_8256FEB4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8256ff04
	if (ctx.cr6.eq) goto loc_8256FF04;
	// rlwinm r11,r18,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 27) & 0x7FFFFFF;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// clrlwi r10,r18,27
	ctx.r10.u64 = r18.u32 & 0x1F;
	// addi r11,r11,21
	ctx.r11.s64 = ctx.r11.s64 + 21;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8256feec
	if (ctx.cr0.eq) goto loc_8256FEEC;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// bl 0x825c6828
	ctx.lr = 0x8256FEEC;
	sub_825C6828(ctx, base);
loc_8256FEEC:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bne cr6,0x8256fefc
	if (!ctx.cr6.eq) goto loc_8256FEFC;
	// addi r30,r31,12
	r30.s64 = r31.s64 + 12;
loc_8256FEFC:
	// lwz r31,0(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 0);
	// b 0x8256feb4
	goto loc_8256FEB4;
loc_8256FF04:
	// lwz r11,16(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 16);
	// stw r28,0(r21)
	REX_STORE_U32(r21.u32 + 0, r28.u32);
	// stw r27,4(r21)
	REX_STORE_U32(r21.u32 + 4, r27.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r10,80(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 80);
	// stw r10,8(r21)
	REX_STORE_U32(r21.u32 + 8, ctx.r10.u32);
	// beq cr6,0x8256ff58
	if (ctx.cr6.eq) goto loc_8256FF58;
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r10,r10,10,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8256ff4c
	if (ctx.cr0.eq) goto loc_8256FF4C;
	// b 0x8256ff3c
	goto loc_8256FF3C;
loc_8256FF30:
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r10,r10,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8256ff48
	if (ctx.cr0.eq) goto loc_8256FF48;
loc_8256FF3C:
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8256ff30
	if (!ctx.cr6.eq) goto loc_8256FF30;
loc_8256FF48:
	// stw r11,16(r21)
	REX_STORE_U32(r21.u32 + 16, ctx.r11.u32);
loc_8256FF4C:
	// lwz r11,16(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 16);
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// stw r11,16(r21)
	REX_STORE_U32(r21.u32 + 16, ctx.r11.u32);
loc_8256FF58:
	// lwz r11,12(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8256ff9c
	if (ctx.cr6.eq) goto loc_8256FF9C;
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r10,r10,10,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8256ff90
	if (ctx.cr0.eq) goto loc_8256FF90;
	// b 0x8256ff80
	goto loc_8256FF80;
loc_8256FF74:
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r10,r10,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8256ff8c
	if (ctx.cr0.eq) goto loc_8256FF8C;
loc_8256FF80:
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8256ff74
	if (!ctx.cr6.eq) goto loc_8256FF74;
loc_8256FF8C:
	// stw r11,12(r21)
	REX_STORE_U32(r21.u32 + 12, ctx.r11.u32);
loc_8256FF90:
	// lwz r11,12(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 12);
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// stw r11,12(r21)
	REX_STORE_U32(r21.u32 + 12, ctx.r11.u32);
loc_8256FF9C:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x8257dfd8
	ctx.lr = 0x8256FFA4;
	sub_8257DFD8(ctx, base);
	// lwz r11,20(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 20);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82570094
	if (!ctx.cr0.eq) goto loc_82570094;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82570094
	if (ctx.cr0.eq) goto loc_82570094;
loc_8256FFBC:
	// lwz r11,8(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14336
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14336, ctx.xer);
	// bne cr6,0x82570078
	if (!ctx.cr6.eq) goto loc_82570078;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
loc_8256FFD0:
	// lwz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82570078
	if (ctx.cr6.eq) goto loc_82570078;
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r8,28(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 28);
loc_8256FFE8:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8257002c
	if (ctx.cr6.eq) goto loc_8257002C;
	// lwz r9,48(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 48);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,4(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// clrlwi r3,r9,13
	ctx.r3.u64 = ctx.r9.u32 & 0x7FFFF;
	// rlwinm r9,r3,27,5,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r3,r3,27
	ctx.r3.u64 = ctx.r3.u32 & 0x1F;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r4,40(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 40);
	// slw r5,r5,r3
	ctx.r5.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r3.u8 & 0x3F));
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r4
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r4.u32);
	// and. r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 & ctx.r5.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82570064
	if (!ctx.cr0.eq) goto loc_82570064;
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// b 0x8256ffe8
	goto loc_8256FFE8;
loc_8257002C:
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r8,32(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 32);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x82570044
	goto loc_82570044;
loc_8257003C:
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
loc_82570044:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8257003c
	if (!ctx.cr6.eq) goto loc_8257003C;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r11,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// stw r8,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r8.u32);
loc_82570064:
	// lwz r10,0(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8256ffd0
	if (!ctx.cr6.eq) goto loc_8256FFD0;
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// b 0x8256ffd0
	goto loc_8256FFD0;
loc_82570078:
	// rlwinm r11,r7,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82570094
	if (!ctx.cr0.eq) goto loc_82570094;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8256ffbc
	if (!ctx.cr6.eq) goto loc_8256FFBC;
loc_82570094:
	// lwz r11,20(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 20);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8257014c
	if (!ctx.cr0.eq) goto loc_8257014C;
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8257014c
	if (ctx.cr0.eq) goto loc_8257014C;
loc_825700AC:
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14336
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14336, ctx.xer);
	// bne cr6,0x82570130
	if (!ctx.cr6.eq) goto loc_82570130;
	// mr r27,r28
	r27.u64 = r28.u64;
loc_825700C0:
	// lwz r30,0(r27)
	r30.u64 = REX_LOAD_U32(r27.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82570130
	if (ctx.cr6.eq) goto loc_82570130;
	// lwz r29,0(r26)
	r29.u64 = REX_LOAD_U32(r26.u32 + 0);
loc_825700D0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8257010c
	if (ctx.cr6.eq) goto loc_8257010C;
	// lwz r31,4(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 4);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x8257b1b8
	ctx.lr = 0x825700F4;
	sub_8257B1B8(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82570104
	if (ctx.cr6.eq) goto loc_82570104;
	// lwz r29,12(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 12);
	// b 0x825700d0
	goto loc_825700D0;
loc_82570104:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8257011c
	if (!ctx.cr6.eq) goto loc_8257011C;
loc_8257010C:
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8250b470
	ctx.lr = 0x8257011C;
	sub_8250B470(ctx, base);
loc_8257011C:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// bne cr6,0x825700c0
	if (!ctx.cr6.eq) goto loc_825700C0;
	// addi r27,r30,4
	r27.s64 = r30.s64 + 4;
	// b 0x825700c0
	goto loc_825700C0;
loc_82570130:
	// rlwinm r11,r28,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8257014c
	if (!ctx.cr0.eq) goto loc_8257014C;
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825700ac
	if (!ctx.cr6.eq) goto loc_825700AC;
loc_8257014C:
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82570494
	if (!ctx.cr0.eq) goto loc_82570494;
	// mr r26,r11
	r26.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82570494
	if (ctx.cr0.eq) goto loc_82570494;
	// rlwinm r11,r18,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r25,r18,27
	r25.u64 = r18.u32 & 0x1F;
	// addi r11,r11,21
	ctx.r11.s64 = ctx.r11.s64 + 21;
	// li r31,1
	r31.s64 = 1;
	// rlwinm r24,r11,2,0,29
	r24.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_82570178:
	// lwzx r11,r24,r26
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + r26.u32);
	// srw r11,r11,r25
	ctx.r11.u64 = r25.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (r25.u8 & 0x3F));
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82570478
	if (!ctx.cr0.eq) goto loc_82570478;
	// lwz r11,20(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 20);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82570478
	if (!ctx.cr0.eq) goto loc_82570478;
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82570478
	if (ctx.cr0.eq) goto loc_82570478;
loc_825701A0:
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14336
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14336, ctx.xer);
	// bne cr6,0x8257045c
	if (!ctx.cr6.eq) goto loc_8257045C;
loc_825701B0:
	// lwz r10,0(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825701cc
	if (ctx.cr6.eq) goto loc_825701CC;
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// bne cr6,0x825701d0
	if (!ctx.cr6.eq) goto loc_825701D0;
loc_825701CC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825701D0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8257045c
	if (ctx.cr0.eq) goto loc_8257045C;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_825701DC:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8257045c
	if (ctx.cr6.eq) goto loc_8257045C;
	// lwz r11,12(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r7,28(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r11,44(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 44);
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r22.u32, ctx.xer);
	// bne cr6,0x82570240
	if (!ctx.cr6.eq) goto loc_82570240;
	// lwz r6,8(r26)
	ctx.r6.u64 = REX_LOAD_U32(r26.u32 + 8);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_82570200:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82570248
	if (ctx.cr6.eq) goto loc_82570248;
	// lwz r10,48(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 48);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi r5,r10,13
	ctx.r5.u64 = ctx.r10.u32 & 0x7FFFF;
	// rlwinm r10,r5,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r5,r5,27
	ctx.r5.u64 = ctx.r5.u32 & 0x1F;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r8,40(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 40);
	// slw r5,r31,r5
	ctx.r5.u64 = ctx.r5.u8 & 0x20 ? 0 : (r31.u32 << (ctx.r5.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// and. r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 & ctx.r5.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82570240
	if (!ctx.cr0.eq) goto loc_82570240;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// b 0x82570200
	goto loc_82570200;
loc_82570240:
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x825701dc
	goto loc_825701DC;
loc_82570248:
	// lwz r11,52(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 52);
	// mr r28,r26
	r28.u64 = r26.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x825702a4
	goto loc_825702A4;
loc_82570258:
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
loc_8257025C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8257029c
	if (ctx.cr6.eq) goto loc_8257029C;
	// lwz r9,48(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 48);
	// lwz r5,4(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// clrlwi r4,r9,13
	ctx.r4.u64 = ctx.r9.u32 & 0x7FFFF;
	// rlwinm r9,r4,27,5,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r4,r4,27
	ctx.r4.u64 = ctx.r4.u32 & 0x1F;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r5,40(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 40);
	// slw r4,r31,r4
	ctx.r4.u64 = ctx.r4.u8 & 0x20 ? 0 : (r31.u32 << (ctx.r4.u8 & 0x3F));
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r5
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	// and. r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 & ctx.r4.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x825702b4
	if (!ctx.cr0.eq) goto loc_825702B4;
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// b 0x8257025c
	goto loc_8257025C;
loc_8257029C:
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
loc_825702A4:
	// lwz r10,44(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// cmplw cr6,r10,r22
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r22.u32, ctx.xer);
	// bne cr6,0x82570258
	if (!ctx.cr6.eq) goto loc_82570258;
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
loc_825702B4:
	// clrlwi. r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8257036c
	if (ctx.cr0.eq) goto loc_8257036C;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x824ffcc0
	ctx.lr = 0x825702C4;
	sub_824FFCC0(ctx, base);
	// rlwinm r9,r28,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// addi r29,r28,8
	r29.s64 = r28.s64 + 8;
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r8,r8,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r10,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r31,8(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 8);
loc_825702F8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82570344
	if (ctx.cr6.eq) goto loc_82570344;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwzx r11,r24,r3
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + ctx.r3.u32);
	// srw r11,r11,r25
	ctx.r11.u64 = r25.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (r25.u8 & 0x3F));
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82570320
	if (!ctx.cr0.eq) goto loc_82570320;
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r22.u32, ctx.xer);
	// bne cr6,0x8257032c
	if (!ctx.cr6.eq) goto loc_8257032C;
loc_82570320:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x825c67e8
	ctx.lr = 0x8257032C;
	sub_825C67E8(ctx, base);
loc_8257032C:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bne cr6,0x8257033c
	if (!ctx.cr6.eq) goto loc_8257033C;
	// addi r29,r31,12
	r29.s64 = r31.s64 + 12;
loc_8257033C:
	// lwz r31,0(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 0);
	// b 0x825702f8
	goto loc_825702F8;
loc_82570344:
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825c69a0
	ctx.lr = 0x82570354;
	sub_825C69A0(ctx, base);
	// lwz r11,76(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 76);
	// lwz r10,76(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 76);
	// li r31,1
	r31.s64 = 1;
	// mr r28,r30
	r28.u64 = r30.u64;
	// rlwimi r11,r10,0,0,12
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFF80000) | (ctx.r11.u64 & 0xFFFFFFFF0007FFFF);
	// stw r11,76(r30)
	REX_STORE_U32(r30.u32 + 76, ctx.r11.u32);
loc_8257036C:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x8257dfd8
	ctx.lr = 0x82570374;
	sub_8257DFD8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x825bb908
	ctx.lr = 0x82570380;
	sub_825BB908(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
loc_82570388:
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82570444
	if (ctx.cr6.eq) goto loc_82570444;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,28(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// lwzx r9,r24,r10
	ctx.r9.u64 = REX_LOAD_U32(r24.u32 + ctx.r10.u32);
	// srw r9,r9,r25
	ctx.r9.u64 = r25.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (r25.u8 & 0x3F));
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x825703b8
	if (!ctx.cr0.eq) goto loc_825703B8;
	// lwz r9,44(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 44);
	// cmplw cr6,r9,r22
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r22.u32, ctx.xer);
	// bne cr6,0x82570430
	if (!ctx.cr6.eq) goto loc_82570430;
loc_825703B8:
	// lwz r9,8(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 8);
loc_825703BC:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82570430
	if (ctx.cr6.eq) goto loc_82570430;
	// lwz r8,48(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r6,4(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// clrlwi r5,r8,13
	ctx.r5.u64 = ctx.r8.u32 & 0x7FFFF;
	// rlwinm r8,r5,27,5,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r5,r5,27
	ctx.r5.u64 = ctx.r5.u32 & 0x1F;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lwz r6,40(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 40);
	// slw r5,r31,r5
	ctx.r5.u64 = ctx.r5.u8 & 0x20 ? 0 : (r31.u32 << (ctx.r5.u8 & 0x3F));
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r6
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// and. r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 & ctx.r5.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x825703fc
	if (!ctx.cr0.eq) goto loc_825703FC;
	// lwz r9,12(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// b 0x825703bc
	goto loc_825703BC;
loc_825703FC:
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x82570410
	goto loc_82570410;
loc_82570408:
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
loc_82570410:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82570408
	if (!ctx.cr6.eq) goto loc_82570408;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stw r4,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r4.u32);
loc_82570430:
	// lwz r10,0(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82570388
	if (!ctx.cr6.eq) goto loc_82570388;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// b 0x82570388
	goto loc_82570388;
loc_82570444:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x8250ab60
	ctx.lr = 0x8257044C;
	sub_8250AB60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82570458;
	sub_8250AD28(ctx, base);
	// b 0x825701b0
	goto loc_825701B0;
loc_8257045C:
	// rlwinm r11,r27,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82570478
	if (!ctx.cr0.eq) goto loc_82570478;
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825701a0
	if (!ctx.cr6.eq) goto loc_825701A0;
loc_82570478:
	// rlwinm r11,r26,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82570494
	if (!ctx.cr0.eq) goto loc_82570494;
	// mr r26,r11
	r26.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82570178
	if (!ctx.cr6.eq) goto loc_82570178;
loc_82570494:
	// li r30,0
	r30.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// stb r30,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, r30.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82558660
	ctx.lr = 0x825704B0;
	sub_82558660(ctx, base);
	// cmplwi cr6,r20,2000
	ctx.cr6.compare<uint32_t>(r20.u32, 2000, ctx.xer);
	// ble cr6,0x82570740
	if (!ctx.cr6.gt) goto loc_82570740;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x8255cda0
	ctx.lr = 0x825704C0;
	sub_8255CDA0(ctx, base);
	// clrlwi r31,r19,24
	r31.u64 = r19.u32 & 0xFF;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// cntlzw r11,r31
	ctx.r11.u64 = r31.u32 == 0 ? 32 : __builtin_clz(r31.u32);
	// rlwinm r4,r11,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x8256c548
	ctx.lr = 0x825704D4;
	sub_8256C548(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8255db50
	ctx.lr = 0x825704E0;
	sub_8255DB50(ctx, base);
	// lbz r26,80(r1)
	r26.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
loc_825704E4:
	// lwz r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82570518
	if (!ctx.cr6.eq) goto loc_82570518;
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,116(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// clrlwi r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	// addic r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// subfe r8,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 & ctx.r11.u64;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8257051c
	if (ctx.cr6.eq) goto loc_8257051C;
loc_82570518:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_8257051C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82570580
	if (!ctx.cr0.eq) goto loc_82570580;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8255a050
	ctx.lr = 0x8257052C;
	sub_8255A050(ctx, base);
	// lwz r4,0(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 48);
	// rlwinm. r11,r11,10,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82570568
	if (ctx.cr0.eq) goto loc_82570568;
	// lwz r11,80(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 80);
	// b 0x82570554
	goto loc_82570554;
loc_82570544:
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r10,r10,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8257055c
	if (ctx.cr0.eq) goto loc_8257055C;
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
loc_82570554:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82570544
	if (!ctx.cr6.eq) goto loc_82570544;
loc_8257055C:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825704e4
	if (ctx.cr6.eq) goto loc_825704E4;
loc_82570568:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x8256f778
	ctx.lr = 0x82570570;
	sub_8256F778(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// clrlwi r10,r26,24
	ctx.r10.u64 = r26.u32 & 0xFF;
	// or r26,r11,r10
	r26.u64 = ctx.r11.u64 | ctx.r10.u64;
	// b 0x825704e4
	goto loc_825704E4;
loc_82570580:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82570730
	if (ctx.cr6.eq) goto loc_82570730;
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8257059c
	if (ctx.cr0.eq) goto loc_8257059C;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// b 0x825705a8
	goto loc_825705A8;
loc_8257059C:
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_825705A8:
	// stw r11,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825705c0
	if (ctx.cr6.eq) goto loc_825705C0;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// b 0x825705cc
	goto loc_825705CC;
loc_825705C0:
	// stw r30,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, r30.u32);
	// b 0x825705cc
	goto loc_825705CC;
loc_825705C8:
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
loc_825705CC:
	// lwz r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825705fc
	if (!ctx.cr6.eq) goto loc_825705FC;
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// addic r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82570600
	if (ctx.cr6.eq) goto loc_82570600;
loc_825705FC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82570600:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82570720
	if (!ctx.cr0.eq) goto loc_82570720;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8255a050
	ctx.lr = 0x82570610;
	sub_8255A050(ctx, base);
	// lwz r28,0(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 48);
	// rlwinm. r11,r11,10,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8257064c
	if (ctx.cr0.eq) goto loc_8257064C;
	// lwz r11,80(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 80);
	// b 0x82570638
	goto loc_82570638;
loc_82570628:
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r10,r10,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82570640
	if (ctx.cr0.eq) goto loc_82570640;
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
loc_82570638:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82570628
	if (!ctx.cr6.eq) goto loc_82570628;
loc_82570640:
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825705c8
	if (ctx.cr6.eq) goto loc_825705C8;
loc_8257064C:
	// lwz r11,28(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 28);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82570674
	if (ctx.cr0.eq) goto loc_82570674;
	// lwz r11,36(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 36);
	// addi r27,r28,32
	r27.s64 = r28.s64 + 32;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r10,r11
	r31.u64 = ctx.r10.u64 & ctx.r11.u64;
	// b 0x8257068c
	goto loc_8257068C;
loc_82570674:
	// lwz r10,28(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 28);
	// addi r27,r28,24
	r27.s64 = r28.s64 + 24;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// addic r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r11,r10
	r31.u64 = ctx.r11.u64 & ctx.r10.u64;
loc_8257068C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x825705c8
	if (ctx.cr6.eq) goto loc_825705C8;
loc_82570694:
	// lwz r30,0(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_82570698:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x825706e0
	if (ctx.cr6.eq) goto loc_825706E0;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825706d8
	if (ctx.cr0.eq) goto loc_825706D8;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825c5df0
	ctx.lr = 0x825706C4;
	sub_825C5DF0(ctx, base);
	// lwz r29,88(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14848
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14848, ctx.xer);
	// beq cr6,0x82570874
	if (ctx.cr6.eq) goto loc_82570874;
loc_825706D8:
	// lwz r30,4(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 4);
	// b 0x82570698
	goto loc_82570698;
loc_825706E0:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r31,40(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825706f8
	if (!ctx.cr0.eq) goto loc_825706F8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82570694
	if (!ctx.cr6.eq) goto loc_82570694;
loc_825706F8:
	// addi r11,r28,32
	ctx.r11.s64 = r28.s64 + 32;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x825705c8
	if (ctx.cr6.eq) goto loc_825705C8;
	// lwz r31,4(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825705c8
	if (!ctx.cr0.eq) goto loc_825705C8;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne 0x82570694
	if (!ctx.cr0.eq) goto loc_82570694;
	// b 0x825705c8
	goto loc_825705C8;
loc_82570720:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x8256c548
	ctx.lr = 0x8257072C;
	sub_8256C548(ctx, base);
	// li r19,0
	r19.s64 = 0;
loc_82570730:
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r20,0
	r20.s64 = 0;
	// bl 0x82559fb0
	ctx.lr = 0x8257073C;
	sub_82559FB0(ctx, base);
	// b 0x82570744
	goto loc_82570744;
loc_82570740:
	// lbz r26,80(r1)
	r26.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
loc_82570744:
	// clrlwi. r11,r26,24
	ctx.r11.u64 = r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82570760
	if (ctx.cr0.eq) goto loc_82570760;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x8257dfd8
	ctx.lr = 0x82570754;
	sub_8257DFD8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x8256c548
	ctx.lr = 0x82570760;
	sub_8256C548(ctx, base);
loc_82570760:
	// lwz r11,48(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 48);
	// rlwinm. r11,r11,10,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8257079c
	if (ctx.cr0.eq) goto loc_8257079C;
	// lwz r11,80(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8257079c
	if (ctx.cr6.eq) goto loc_8257079C;
loc_82570778:
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r10,r10,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82570790
	if (ctx.cr0.eq) goto loc_82570790;
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82570778
	if (!ctx.cr6.eq) goto loc_82570778;
loc_82570790:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8257079c
	if (ctx.cr6.eq) goto loc_8257079C;
	// stw r22,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, r22.u32);
loc_8257079C:
	// lwz r17,4(r21)
	r17.u64 = REX_LOAD_U32(r21.u32 + 4);
	// lwz r11,48(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 48);
	// rlwinm. r11,r11,10,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825709e0
	if (!ctx.cr0.eq) goto loc_825709E0;
	// lwz r11,8(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 8);
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r10,r10,10,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825707dc
	if (ctx.cr0.eq) goto loc_825707DC;
	// b 0x825707cc
	goto loc_825707CC;
loc_825707C0:
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r10,r10,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825707d8
	if (ctx.cr0.eq) goto loc_825707D8;
loc_825707CC:
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825707c0
	if (!ctx.cr6.eq) goto loc_825707C0;
loc_825707D8:
	// stw r11,8(r21)
	REX_STORE_U32(r21.u32 + 8, ctx.r11.u32);
loc_825707DC:
	// lwz r11,16(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82570814
	if (ctx.cr6.eq) goto loc_82570814;
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r10,r10,10,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82570814
	if (ctx.cr0.eq) goto loc_82570814;
	// b 0x82570804
	goto loc_82570804;
loc_825707F8:
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r10,r10,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82570810
	if (ctx.cr0.eq) goto loc_82570810;
loc_82570804:
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825707f8
	if (!ctx.cr6.eq) goto loc_825707F8;
loc_82570810:
	// stw r11,16(r21)
	REX_STORE_U32(r21.u32 + 16, ctx.r11.u32);
loc_82570814:
	// lwz r11,12(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 12);
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r10,r10,10,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82570844
	if (ctx.cr0.eq) goto loc_82570844;
	// b 0x82570834
	goto loc_82570834;
loc_82570828:
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r10,r10,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82570840
	if (ctx.cr0.eq) goto loc_82570840;
loc_82570834:
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82570828
	if (!ctx.cr6.eq) goto loc_82570828;
loc_82570840:
	// stw r11,12(r21)
	REX_STORE_U32(r21.u32 + 12, ctx.r11.u32);
loc_82570844:
	// lwz r11,36(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 36);
	// addi r14,r14,1
	r14.s64 = r14.s64 + 1;
	// rlwinm r11,r11,22,17,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x7FFF;
	// cmplw cr6,r14,r11
	ctx.cr6.compare<uint32_t>(r14.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8256fba0
	if (ctx.cr6.lt) goto loc_8256FBA0;
loc_82570858:
	// lwz r11,8(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825708f4
	if (ctx.cr6.eq) goto loc_825708F4;
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r10,r10,10,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825708f4
	if (ctx.cr0.eq) goto loc_825708F4;
	// b 0x825708e4
	goto loc_825708E4;
loc_82570874:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,116
	ctx.r4.s64 = 116;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x824f71b8
	ctx.lr = 0x82570888;
	sub_824F71B8(ctx, base);
	// addi r10,r29,-4
	ctx.r10.s64 = r29.s64 + -4;
	// lwz r11,12(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 12);
	// lwzx r10,r3,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// clrlwi r4,r10,17
	ctx.r4.u64 = ctx.r10.u32 & 0x7FFF;
	// mulli r10,r4,40
	ctx.r10.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(40));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825708c4
	if (ctx.cr0.eq) goto loc_825708C4;
	// bl 0x8257f6f8
	ctx.lr = 0x825708B4;
	sub_8257F6F8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,3507
	ctx.r4.s64 = 3507;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x824e4368
	ctx.lr = 0x825708C4;
	sub_824E4368(ctx, base);
loc_825708C4:
	// bl 0x8257f6f8
	ctx.lr = 0x825708C8;
	sub_8257F6F8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,3527
	ctx.r4.s64 = 3527;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x824e4368
	ctx.lr = 0x825708D8;
	sub_824E4368(ctx, base);
loc_825708D8:
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r10,r10,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825708f0
	if (ctx.cr0.eq) goto loc_825708F0;
loc_825708E4:
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825708d8
	if (!ctx.cr6.eq) goto loc_825708D8;
loc_825708F0:
	// stw r11,8(r21)
	REX_STORE_U32(r21.u32 + 8, ctx.r11.u32);
loc_825708F4:
	// lwz r4,8(r21)
	ctx.r4.u64 = REX_LOAD_U32(r21.u32 + 8);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x825709e0
	if (ctx.cr6.eq) goto loc_825709E0;
	// lwz r11,48(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 48);
	// rlwinm. r11,r11,10,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825709e0
	if (!ctx.cr0.eq) goto loc_825709E0;
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
loc_82570910:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82570934
	if (ctx.cr6.eq) goto loc_82570934;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r17,r10
	ctx.cr6.compare<uint32_t>(r17.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8257092c
	if (ctx.cr6.eq) goto loc_8257092C;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82570910
	goto loc_82570910;
loc_8257092C:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82570938
	goto loc_82570938;
loc_82570934:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82570938:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82570954
	if (ctx.cr0.eq) goto loc_82570954;
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82551678
	ctx.lr = 0x8257094C;
	sub_82551678(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x8257dfd8
	ctx.lr = 0x82570954;
	sub_8257DFD8(ctx, base);
loc_82570954:
	// lwz r11,8(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 8);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825709e0
	if (!ctx.cr0.eq) goto loc_825709E0;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825709e0
	if (ctx.cr0.eq) goto loc_825709E0;
loc_82570970:
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,86
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 86, ctx.xer);
	// beq cr6,0x825709ac
	if (ctx.cr6.eq) goto loc_825709AC;
	// cmplwi cr6,r11,87
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 87, ctx.xer);
	// beq cr6,0x825709ac
	if (ctx.cr6.eq) goto loc_825709AC;
	// cmplwi cr6,r11,89
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 89, ctx.xer);
	// beq cr6,0x825709ac
	if (ctx.cr6.eq) goto loc_825709AC;
	// cmplwi cr6,r11,90
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 90, ctx.xer);
	// beq cr6,0x825709ac
	if (ctx.cr6.eq) goto loc_825709AC;
	// cmplwi cr6,r11,84
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 84, ctx.xer);
	// beq cr6,0x825709ac
	if (ctx.cr6.eq) goto loc_825709AC;
	// cmplwi cr6,r11,85
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 85, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x825709b0
	if (!ctx.cr6.eq) goto loc_825709B0;
loc_825709AC:
	// li r11,1
	ctx.r11.s64 = 1;
loc_825709B0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825709d8
	if (!ctx.cr0.eq) goto loc_825709D8;
	// rlwinm r11,r4,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825709e0
	if (!ctx.cr0.eq) goto loc_825709E0;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82570970
	if (!ctx.cr6.eq) goto loc_82570970;
	// b 0x825709e0
	goto loc_825709E0;
loc_825709D8:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x825c2510
	ctx.lr = 0x825709E0;
	sub_825C2510(ctx, base);
loc_825709E0:
	// lwz r10,36(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 36);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r8,60(r21)
	ctx.r8.u64 = REX_LOAD_U32(r21.u32 + 60);
	// rlwimi r10,r9,10,7,21
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 10) & 0x1FFFC00) | (ctx.r10.u64 & 0xFFFFFFFFFE0003FF);
	// lwz r31,84(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,0(r21)
	REX_STORE_U32(r21.u32 + 0, ctx.r11.u32);
	// ori r9,r8,16
	ctx.r9.u64 = ctx.r8.u64 | 16;
	// stw r11,8(r21)
	REX_STORE_U32(r21.u32 + 8, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,12(r21)
	REX_STORE_U32(r21.u32 + 12, ctx.r11.u32);
	// stw r11,4(r21)
	REX_STORE_U32(r21.u32 + 4, ctx.r11.u32);
	// stw r10,36(r21)
	REX_STORE_U32(r21.u32 + 36, ctx.r10.u32);
	// stw r11,16(r21)
	REX_STORE_U32(r21.u32 + 16, ctx.r11.u32);
	// stw r11,20(r21)
	REX_STORE_U32(r21.u32 + 20, ctx.r11.u32);
	// stw r9,60(r21)
	REX_STORE_U32(r21.u32 + 60, ctx.r9.u32);
	// lwz r11,44(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 44);
	// addis r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -131072;
	// stw r11,44(r23)
	REX_STORE_U32(r23.u32 + 44, ctx.r11.u32);
	// bl 0x82559fb0
	ctx.lr = 0x82570A30;
	sub_82559FB0(ctx, base);
	// addi r11,r23,972
	ctx.r11.s64 = r23.s64 + 972;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,976(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 976);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r31,976(r23)
	REX_STORE_U32(r23.u32 + 976, r31.u32);
loc_82570A44:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_825E0518) {
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
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x825e05b0
	if (ctx.cr6.eq) goto loc_825E05B0;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x825e05a8
	if (ctx.cr6.eq) goto loc_825E05A8;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x825e05a0
	if (ctx.cr6.eq) goto loc_825E05A0;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// beq cr6,0x825e0580
	if (ctx.cr6.eq) goto loc_825E0580;
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// beq cr6,0x825e0598
	if (ctx.cr6.eq) goto loc_825E0598;
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// beq cr6,0x825e0590
	if (ctx.cr6.eq) goto loc_825E0590;
	// cmpwi cr6,r3,7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 7, ctx.xer);
	// beq cr6,0x825e0588
	if (ctx.cr6.eq) goto loc_825E0588;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r6,r11,11616
	ctx.r6.s64 = ctx.r11.s64 + 11616;
	// addi r5,r10,19324
	ctx.r5.s64 = ctx.r10.s64 + 19324;
	// addi r4,r9,22852
	ctx.r4.s64 = ctx.r9.s64 + 22852;
	// li r7,2874
	ctx.r7.s64 = 2874;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825E0580;
	sub_824EA978(ctx, base);
loc_825E0580:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x825e05b4
	goto loc_825E05B4;
loc_825E0588:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x825e05b4
	goto loc_825E05B4;
loc_825E0590:
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x825e05b4
	goto loc_825E05B4;
loc_825E0598:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825e05b4
	goto loc_825E05B4;
loc_825E05A0:
	// li r3,5
	ctx.r3.s64 = 5;
	// b 0x825e05b4
	goto loc_825E05B4;
loc_825E05A8:
	// li r3,4
	ctx.r3.s64 = 4;
	// b 0x825e05b4
	goto loc_825E05B4;
loc_825E05B0:
	// li r3,7
	ctx.r3.s64 = 7;
loc_825E05B4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825E6120) {
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
	// bl 0x826a1cb0
	ctx.lr = 0x825E6128;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// li r9,12
	ctx.r9.s64 = 12;
	// lwz r11,52(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 52);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// subf r10,r10,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r10.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// divw r10,r10,r9
	ctx.r10.u64 = uint32_t((ctx.r9.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r10.s32 / ctx.r9.s32 : 0);
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x825e616c
	if (!ctx.cr6.eq) goto loc_825E616C;
	// stw r3,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// b 0x825e6170
	goto loc_825E6170;
loc_825E616C:
	// stw r30,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r30.u32);
loc_825E6170:
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lwz r6,1384(r29)
	ctx.r6.u64 = REX_LOAD_U32(r29.u32 + 1384);
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// lwz r4,172(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 172);
	// addi r7,r11,15992
	ctx.r7.s64 = ctx.r11.s64 + 15992;
	// lwz r3,1536(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 1536);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x825d4520
	ctx.lr = 0x825E6190;
	sub_825D4520(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r6,168(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 168);
	// lwz r4,172(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 172);
	// bl 0x825e4e50
	ctx.lr = 0x825E61A4;
	sub_825E4E50(ctx, base);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,172(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 172);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825b34d0
	ctx.lr = 0x825E61B8;
	sub_825B34D0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r9,r11,27328
	ctx.r9.s64 = ctx.r11.s64 + 27328;
	// lwz r8,96(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r5,120(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// rlwinm r7,r7,0,13,4
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFF807FFFF;
	// lwz r6,116(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,108(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// rlwimi r6,r5,8,18,23
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0x3F00) | (ctx.r6.u64 & 0xFFFFFFFFFFFFC0FF);
	// lwz r3,104(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r28,100(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// rlwimi r11,r10,5,25,26
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0x60) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF9F);
	// lwz r10,124(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r27,128(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// rlwimi r8,r11,1,0,30
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE) | (ctx.r8.u64 & 0xFFFFFFFF00000001);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r8,r8,19,0,12
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 19) & 0xFFF80000;
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// lwz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r8,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// lwz r5,132(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 132);
	// stb r10,11(r31)
	REX_STORE_U8(r31.u32 + 11, ctx.r10.u8);
	// andi. r10,r6,16191
	ctx.r10.u64 = ctx.r6.u64 & 16191;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwimi r11,r10,1,0,30
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE) | (ctx.r11.u64 & 0xFFFFFFFF00000001);
	// rlwinm r10,r7,0,20,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFC00FFF;
	// rlwimi r4,r11,1,0,30
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE) | (ctx.r4.u64 & 0xFFFFFFFF00000001);
	// rlwinm r10,r10,0,8,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFC0FFFFFF;
	// rlwimi r3,r4,1,0,30
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE) | (ctx.r3.u64 & 0xFFFFFFFF00000001);
	// lwz r6,8(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 8);
	// srawi r7,r27,2
	ctx.xer.ca = (r27.s32 < 0) & ((r27.u32 & 0x3) != 0);
	ctx.r7.s64 = r27.s32 >> 2;
	// rlwimi r28,r3,1,0,30
	r28.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE) | (r28.u64 & 0xFFFFFFFF00000001);
	// rlwinm r11,r28,12,0,19
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 12) & 0xFFFFF000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// addze r10,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r10.s64 = temp.s64;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// rlwinm r26,r5,8,24,31
	r26.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFF;
	// rlwimi r26,r5,24,16,23
	r26.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFF00) | (r26.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwimi r26,r5,8,8,15
	r26.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFF0000) | (r26.u64 & 0xFFFFFFFFFF00FFFF);
	// rlwimi r26,r5,24,0,7
	r26.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFF000000) | (r26.u64 & 0xFFFFFFFF00FFFFFF);
	// rlwimi r8,r26,30,0,1
	ctx.r8.u64 = (__builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 30) & 0xC0000000) | (ctx.r8.u64 & 0xFFFFFFFF3FFFFFFF);
	// stw r8,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// lwz r11,168(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 168);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwimi r6,r11,8,1,23
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0x7FFFFF00) | (ctx.r6.u64 & 0xFFFFFFFF800000FF);
	// stw r6,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r6.u32);
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// rlwimi r11,r8,0,0,26
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFE0) | (ctx.r11.u64 & 0xFFFFFFFF0000001F);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lwz r3,2736(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 2736);
	// lwz r4,236(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 236);
	// bl 0x82607f18
	ctx.lr = 0x825E62A0;
	sub_82607F18(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwimi r9,r3,5,21,26
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0x7E0) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF81F);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// rlwinm r9,r9,0,21,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFF7FF;
	// stw r9,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// addi r27,r11,22852
	r27.s64 = ctx.r11.s64 + 22852;
	// lwz r28,180(r30)
	r28.u64 = REX_LOAD_U32(r30.u32 + 180);
	// addi r26,r10,11616
	r26.s64 = ctx.r10.s64 + 11616;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x825e6350
	if (ctx.cr6.eq) goto loc_825E6350;
	// lwz r11,228(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 228);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825e6320
	if (ctx.cr0.eq) goto loc_825E6320;
	// lwz r11,80(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 80);
	// lwz r10,228(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 228);
	// rlwinm. r10,r10,25,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,80(r30)
	REX_STORE_U32(r30.u32 + 80, ctx.r11.u32);
	// beq 0x825e6308
	if (ctx.cr0.eq) goto loc_825E6308;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addi r5,r11,13392
	ctx.r5.s64 = ctx.r11.s64 + 13392;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r7,2944
	ctx.r7.s64 = 2944;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825E6308;
	sub_824EA978(ctx, base);
loc_825E6308:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,2736(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 2736);
	// bl 0x82607f18
	ctx.lr = 0x825E6314;
	sub_82607F18(ctx, base);
	// stw r3,56(r30)
	REX_STORE_U32(r30.u32 + 56, ctx.r3.u32);
	// lwz r11,128(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 128);
	// b 0x825e6328
	goto loc_825E6328;
loc_825E6320:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r11,11192(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 11192);
loc_825E6328:
	// stw r11,128(r30)
	REX_STORE_U32(r30.u32 + 128, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm r11,r11,0,2,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// lwz r11,184(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 184);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwimi r10,r11,27,2,4
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x38000000) | (ctx.r10.u64 & 0xFFFFFFFFC7FFFFFF);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// b 0x825e6368
	goto loc_825E6368;
loc_825E6350:
	// lbz r11,176(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 176);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825e6368
	if (ctx.cr0.eq) goto loc_825E6368;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// oris r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 1073741824;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
loc_825E6368:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,2736(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 2736);
	// bl 0x82607f18
	ctx.lr = 0x825E6374;
	sub_82607F18(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwimi r11,r3,12,14,19
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 12) & 0x3F000) | (ctx.r11.u64 & 0xFFFFFFFFFFFC0FFF);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lbz r3,128(r30)
	ctx.r3.u64 = REX_LOAD_U8(r30.u32 + 128);
	// bl 0x825e0518
	ctx.lr = 0x825E6388;
	sub_825E0518(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwimi r3,r11,0,0,28
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8) | (ctx.r3.u64 & 0xFFFFFFFF00000007);
	// stw r3,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// lbz r3,129(r30)
	ctx.r3.u64 = REX_LOAD_U8(r30.u32 + 129);
	// bl 0x825e0518
	ctx.lr = 0x825E639C;
	sub_825E0518(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwimi r11,r3,3,26,28
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0x38) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFC7);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// lbz r3,130(r30)
	ctx.r3.u64 = REX_LOAD_U8(r30.u32 + 130);
	// bl 0x825e0518
	ctx.lr = 0x825E63B0;
	sub_825E0518(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwimi r11,r3,6,23,25
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0x1C0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFE3F);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// lbz r3,131(r30)
	ctx.r3.u64 = REX_LOAD_U8(r30.u32 + 131);
	// bl 0x825e0518
	ctx.lr = 0x825E63C4;
	sub_825E0518(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwimi r11,r3,9,20,22
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 9) & 0xE00) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF1FF);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// lwz r10,52(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 52);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x825e6424
	if (ctx.cr6.eq) goto loc_825E6424;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x825e641c
	if (ctx.cr6.eq) goto loc_825E641C;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x825e640c
	if (ctx.cr6.eq) goto loc_825E640C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addi r5,r11,19324
	ctx.r5.s64 = ctx.r11.s64 + 19324;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r7,2983
	ctx.r7.s64 = 2983;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825E6408;
	sub_824EA978(ctx, base);
	// b 0x825e6438
	goto loc_825E6438;
loc_825E640C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// oris r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 2147483648;
	// b 0x825e6430
	goto loc_825E6430;
loc_825E641C:
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// b 0x825e6428
	goto loc_825E6428;
loc_825E6424:
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
loc_825E6428:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// clrlwi r10,r10,1
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFFFFFF;
loc_825E6430:
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
loc_825E6438:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_825FB340) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,-32608
	ctx.r3.s64 = ctx.r11.s64 + -32608;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825FB538) {
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
	// li r4,134
	ctx.r4.s64 = 134;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x825fa990
	ctx.lr = 0x825FB55C;
	sub_825FA990(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r11,r11,-32256
	ctx.r11.s64 = ctx.r11.s64 + -32256;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r9,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r8,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r8.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,30228(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 30228);
	// stw r11,128(r3)
	REX_STORE_U32(ctx.r3.u32 + 128, ctx.r11.u32);
	// lwz r11,228(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 228);
	// stw r7,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// ori r11,r11,24
	ctx.r11.u64 = ctx.r11.u64 | 24;
	// stw r11,228(r3)
	REX_STORE_U32(ctx.r3.u32 + 228, ctx.r11.u32);
	// lwz r3,2736(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 2736);
	// bl 0x825d7d20
	ctx.lr = 0x825FB5A4;
	sub_825D7D20(ctx, base);
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

DEFINE_REX_FUNC(sub_825FD9E8) {
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
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// bl 0x825fd5f8
	ctx.lr = 0x825FDA08;
	sub_825FD5F8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825fd4b8
	ctx.lr = 0x825FDA14;
	sub_825FD4B8(ctx, base);
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

DEFINE_REX_FUNC(sub_826079D8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x826079E0;
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
	// bl 0x825b33a0
	ctx.lr = 0x82607A00;
	sub_825B33A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r28.u32);
	// beq 0x82607a24
	if (ctx.cr0.eq) goto loc_82607A24;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825f9348
	ctx.lr = 0x82607A20;
	sub_825F9348(ctx, base);
	// b 0x82607a28
	goto loc_82607A28;
loc_82607A24:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82607A28:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8260A750) {
	REX_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8260a77c
	if (!ctx.cr6.gt) goto loc_8260A77C;
	// lwz r11,228(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 228);
	// rlwinm. r11,r11,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8260a774
	if (!ctx.cr0.eq) goto loc_8260A774;
	// lwz r11,80(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// cmpwi cr6,r11,31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31, ctx.xer);
	// bne cr6,0x8260a77c
	if (!ctx.cr6.eq) goto loc_8260A77C;
loc_8260A774:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8260A77C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8260AE10) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8260AE18;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mullw r3,r5,r6
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	// lis r4,9367
	ctx.r4.s64 = 613875712;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bl 0x823f02b8
	ctx.lr = 0x8260AE34;
	sub_823F02B8(ctx, base);
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8260ae5c
	if (ctx.cr0.eq) goto loc_8260AE5C;
	// clrldi r11,r29,32
	ctx.r11.u64 = r29.u64 & 0xFFFFFFFF;
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x8260ae6c
	goto loc_8260AE6C;
loc_8260AE5C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
loc_8260AE6C:
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8260C8A0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8260C8A8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// addi r29,r3,44
	r29.s64 = ctx.r3.s64 + 44;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8260C8D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8260c248
	ctx.lr = 0x8260C8D8;
	sub_8260C248(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8260c91c
	if (ctx.cr0.lt) goto loc_8260C91C;
	// lwz r11,152(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 152);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8260c8fc
	if (ctx.cr6.lt) goto loc_8260C8FC;
	// lis r3,-30570
	ctx.r3.s64 = -2003435520;
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
loc_8260C8FC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8260c91c
	if (ctx.cr6.lt) goto loc_8260C91C;
	// lwz r10,156(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 156);
	// mulli r11,r30,1068
	ctx.r11.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(1068));
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r5,1068
	ctx.r5.s64 = 1068;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8260C91C;
	sub_826A1E70(ctx, base);
loc_8260C91C:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8260C930;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8261b718
	ctx.lr = 0x8260C938;
	sub_8261B718(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8260F988) {
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
	// addi r30,r3,188
	r30.s64 = ctx.r3.s64 + 188;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82611700
	ctx.lr = 0x8260F9B8;
	sub_82611700(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8260fa08
	if (ctx.cr0.eq) goto loc_8260FA08;
	// addi r31,r31,148
	r31.s64 = r31.s64 + 148;
loc_8260F9C4:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// b 0x8260f9e0
	goto loc_8260F9E0;
loc_8260F9CC:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8260f9e8
	if (ctx.cr6.eq) goto loc_8260F9E8;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_8260F9E0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8260f9cc
	if (!ctx.cr6.eq) goto loc_8260F9CC;
loc_8260F9E8:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82625870
	ctx.lr = 0x8260F9F4;
	sub_82625870(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82611700
	ctx.lr = 0x8260FA00;
	sub_82611700(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8260f9c4
	if (!ctx.cr0.eq) goto loc_8260F9C4;
loc_8260FA08:
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

DEFINE_REX_FUNC(sub_82612F88) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82612F90;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,448(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 448);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82612fd4
	if (!ctx.cr6.gt) goto loc_82612FD4;
loc_82612FAC:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,472(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 472);
	// bl 0x82610e90
	ctx.lr = 0x82612FB8;
	sub_82610E90(ctx, base);
	// cmplw cr6,r29,r3
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r3.u32, ctx.xer);
	// bgt cr6,0x82612fc4
	if (ctx.cr6.gt) goto loc_82612FC4;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_82612FC4:
	// lwz r11,448(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 448);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82612fac
	if (ctx.cr6.lt) goto loc_82612FAC;
loc_82612FD4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82614710) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r11,r11,-15024
	ctx.r11.s64 = ctx.r11.s64 + -15024;
	// addi r10,r10,-15196
	ctx.r10.s64 = ctx.r10.s64 + -15196;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,140(r3)
	REX_STORE_U32(ctx.r3.u32 + 140, ctx.r10.u32);
	// addi r3,r3,540
	ctx.r3.s64 = ctx.r3.s64 + 540;
	// stw r9,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// bl 0x8260f8f8
	ctx.lr = 0x8261474C;
	sub_8260F8F8(ctx, base);
	// addi r3,r31,500
	ctx.r3.s64 = r31.s64 + 500;
	// bl 0x8260f8f8
	ctx.lr = 0x82614754;
	sub_8260F8F8(ctx, base);
	// addi r3,r31,492
	ctx.r3.s64 = r31.s64 + 492;
	// bl 0x8260ad58
	ctx.lr = 0x8261475C;
	sub_8260AD58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8260fcb0
	ctx.lr = 0x82614764;
	sub_8260FCB0(ctx, base);
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

DEFINE_REX_FUNC(sub_82616000) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x82615d00
	sub_82615D00(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_826162E8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x826162F0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82616320
	if (ctx.cr6.eq) goto loc_82616320;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261631C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_82616320:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82616334;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,72(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 72);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82626c18
	ctx.lr = 0x82616344;
	sub_82626C18(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_826186E0) {
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
	// bl 0x826a1cb0
	ctx.lr = 0x826186E8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82618758
	if (!ctx.cr6.eq) goto loc_82618758;
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,-1
	ctx.r3.s64 = -1;
	// lwz r28,0(r5)
	r28.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r27,0(r7)
	r27.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82618720;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 32);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r9,40(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 40);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mullw r5,r10,r9
	ctx.r5.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82618744;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bctrl 
	ctx.lr = 0x82618758;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82618758:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r11,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r11,4(r29)
	REX_STORE_U32(r29.u32 + 4, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8261C4B0) {
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
	// bl 0x826a1cac
	ctx.lr = 0x8261C4B8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// li r25,0
	r25.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8261c4e4
	if (!ctx.cr6.eq) goto loc_8261C4E4;
	// lis r30,4919
	r30.s64 = 322371584;
	// ori r30,r30,61441
	r30.u64 = r30.u64 | 61441;
	// b 0x8261c4e8
	goto loc_8261C4E8;
loc_8261C4E4:
	// mr r30,r29
	r30.u64 = r29.u64;
loc_8261C4E8:
	// lwz r31,32(r26)
	r31.u64 = REX_LOAD_U32(r26.u32 + 32);
	// b 0x8261c520
	goto loc_8261C520;
loc_8261C4F0:
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8261c508
	if (ctx.cr6.eq) goto loc_8261C508;
	// lwz r31,4(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8261c50c
	goto loc_8261C50C;
loc_8261C508:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8261C50C:
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8260f478
	ctx.lr = 0x8261C520;
	sub_8260F478(ctx, base);
loc_8261C520:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8261c4f0
	if (!ctx.cr6.eq) goto loc_8261C4F0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x8261c550
	if (!ctx.cr6.eq) goto loc_8261C550;
	// lwz r11,48(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 48);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,176(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 176);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261C54C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
loc_8261C550:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_82625E88) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-1904(r1)
	ea = -1904 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwz r9,28(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// addi r31,r3,24
	r31.s64 = ctx.r3.s64 + 24;
	// lwz r8,32(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r8,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// beq cr6,0x82625ef0
	if (ctx.cr6.eq) goto loc_82625EF0;
	// clrldi r11,r4,32
	ctx.r11.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// mulli r11,r11,-10000
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(-10000));
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// b 0x82625ef4
	goto loc_82625EF4;
loc_82625ED4:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r5,4(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stw r5,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r5.u32);
	// stw r3,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r3.u32);
loc_82625EF0:
	// li r9,0
	ctx.r9.s64 = 0;
loc_82625EF4:
	// addi r10,r1,352
	ctx.r10.s64 = ctx.r1.s64 + 352;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82794224
	ctx.lr = 0x82625F14;
	__imp__KeWaitForMultipleObjects(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x82625ed4
	if (ctx.cr6.eq) goto loc_82625ED4;
	// cmplwi cr6,r3,258
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 258, ctx.xer);
	// beq cr6,0x82625f30
	if (ctx.cr6.eq) goto loc_82625F30;
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bne cr6,0x82625f34
	if (!ctx.cr6.eq) goto loc_82625F34;
loc_82625F30:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82625F34:
	// addi r1,r1,1904
	ctx.r1.s64 = ctx.r1.s64 + 1904;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826283D0) {
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
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r30,0
	r30.s64 = 0;
	// addi r11,r11,2440
	ctx.r11.s64 = ctx.r11.s64 + 2440;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82628420
	if (ctx.cr6.eq) goto loc_82628420;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82628418;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x8264c3d0
	ctx.lr = 0x8262841C;
	sub_8264C3D0(ctx, base);
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
loc_82628420:
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

DEFINE_REX_FUNC(sub_82629D20) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82629D28;
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
	// bl 0x823f02b8
	ctx.lr = 0x82629D40;
	sub_823F02B8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x82629d6c
	if (ctx.cr0.eq) goto loc_82629D6C;
	// li r5,1068
	ctx.r5.s64 = 1068;
	// lwz r4,4(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r28,0
	r28.s64 = 0;
	// bl 0x826a1e70
	ctx.lr = 0x82629D5C;
	sub_826A1E70(ctx, base);
	// stw r31,0(r29)
	REX_STORE_U32(r29.u32 + 0, r31.u32);
loc_82629D60:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_82629D6C:
	// lis r28,-32761
	r28.s64 = -2147024896;
	// ori r28,r28,14
	r28.u64 = r28.u64 | 14;
	// b 0x82629d60
	goto loc_82629D60;
}

DEFINE_REX_FUNC(sub_82631BF8) {
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
	// bl 0x826a1c9c
	ctx.lr = 0x82631C00;
	// stfd f30,-112(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -112, f30.u64);
	// stfd f31,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, f31.u64);
	// lwz r9,16(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r31,12(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r10,r11,48
	ctx.r10.s64 = ctx.r11.s64 + 48;
	// lwz r5,24(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// stw r9,-208(r1)
	REX_STORE_U32(ctx.r1.u32 + -208, ctx.r9.u32);
	// lfs f13,-208(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -208);
	ctx.f13.f64 = double(temp.f32);
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,-208(r1)
	REX_STORE_U64(ctx.r1.u32 + -208, ctx.f12.u64);
	// lwz r9,-204(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -204);
	// extsw r11,r9
	ctx.r11.s64 = ctx.r9.s32;
	// std r11,-208(r1)
	REX_STORE_U64(ctx.r1.u32 + -208, ctx.r11.u64);
	// lfd f11,-208(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + -208);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// rlwinm r6,r9,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// lfs f12,15504(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 15504);
	ctx.f12.f64 = double(temp.f32);
	// stw r31,-208(r1)
	REX_STORE_U32(ctx.r1.u32 + -208, r31.u32);
	// lwz r31,4(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lfs f0,-208(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -208);
	ctx.f0.f64 = double(temp.f32);
	// lwz r30,28(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm r4,r9,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// fsubs f11,f13,f9
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// beq cr6,0x82631d40
	if (ctx.cr6.eq) goto loc_82631D40;
	// lhz r9,8(r8)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r8.u32 + 8);
	// lhz r28,10(r8)
	r28.u64 = REX_LOAD_U16(ctx.r8.u32 + 10);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// lhz r6,0(r8)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r8.u32 + 0);
	// lhz r29,2(r8)
	r29.u64 = REX_LOAD_U16(ctx.r8.u32 + 2);
	// std r9,-208(r1)
	REX_STORE_U64(ctx.r1.u32 + -208, ctx.r9.u64);
	// extsh r9,r28
	ctx.r9.s64 = r28.s16;
	// lhz r26,6(r8)
	r26.u64 = REX_LOAD_U16(ctx.r8.u32 + 6);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// lfd f13,-208(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -208);
	// lhz r27,4(r8)
	r27.u64 = REX_LOAD_U16(ctx.r8.u32 + 4);
	// extsh r29,r29
	r29.s64 = r29.s16;
	// std r9,-208(r1)
	REX_STORE_U64(ctx.r1.u32 + -208, ctx.r9.u64);
	// std r6,-200(r1)
	REX_STORE_U64(ctx.r1.u32 + -200, ctx.r6.u64);
	// extsh r9,r26
	ctx.r9.s64 = r26.s16;
	// std r29,-192(r1)
	REX_STORE_U64(ctx.r1.u32 + -192, r29.u64);
	// extsh r6,r27
	ctx.r6.s64 = r27.s16;
	// lfd f9,-192(r1)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + -192);
	// std r9,-192(r1)
	REX_STORE_U64(ctx.r1.u32 + -192, ctx.r9.u64);
	// lfd f10,-200(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + -200);
	// std r6,-200(r1)
	REX_STORE_U64(ctx.r1.u32 + -200, ctx.r6.u64);
	// lfd f7,-192(r1)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + -192);
	// fcfid f1,f13
	ctx.f1.f64 = double(ctx.f13.s64);
	// lfd f5,-200(r1)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + -200);
	// lfd f8,-208(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + -208);
	// fcfid f13,f8
	ctx.f13.f64 = double(ctx.f8.s64);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// fcfid f4,f10
	ctx.f4.f64 = double(ctx.f10.s64);
	// fcfid f3,f5
	ctx.f3.f64 = double(ctx.f5.s64);
	// fcfid f2,f9
	ctx.f2.f64 = double(ctx.f9.s64);
	// frsp f5,f13
	ctx.f5.f64 = double(float(ctx.f13.f64));
	// frsp f10,f6
	ctx.f10.f64 = double(float(ctx.f6.f64));
	// frsp f9,f4
	ctx.f9.f64 = double(float(ctx.f4.f64));
	// frsp f8,f3
	ctx.f8.f64 = double(float(ctx.f3.f64));
	// frsp f7,f2
	ctx.f7.f64 = double(float(ctx.f2.f64));
	// frsp f6,f1
	ctx.f6.f64 = double(float(ctx.f1.f64));
	// fmuls f4,f10,f12
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// stfs f4,12(r10)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// fmuls f3,f9,f12
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// stfs f3,0(r10)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// fmuls f2,f8,f12
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// stfs f2,8(r10)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// fmuls f1,f7,f12
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// stfs f1,4(r10)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// fmuls f13,f6,f12
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// stfs f13,16(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// fmuls f10,f5,f12
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// stfs f10,20(r10)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r10.u32 + 20, temp.u32);
loc_82631D40:
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// lfs f13,3704(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3704);
	ctx.f13.f64 = double(temp.f32);
	// bge cr6,0x82631e54
	if (!ctx.cr6.lt) goto loc_82631E54;
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
loc_82631D54:
	// cmplw cr6,r7,r30
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, r30.u32, ctx.xer);
	// bge cr6,0x82632094
	if (!ctx.cr6.lt) goto loc_82632094;
	// addi r29,r11,-6
	r29.s64 = ctx.r11.s64 + -6;
	// addi r28,r11,-5
	r28.s64 = ctx.r11.s64 + -5;
	// addi r27,r11,-4
	r27.s64 = ctx.r11.s64 + -4;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r29,r29,2,0,29
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r28,r28,2,0,29
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r27,r27,2,0,29
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 + ctx.r10.u64;
	// addi r26,r11,2
	r26.s64 = ctx.r11.s64 + 2;
	// addi r25,r11,-3
	r25.s64 = ctx.r11.s64 + -3;
	// lfsx f9,r29,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + ctx.r10.u32);
	ctx.f9.f64 = double(temp.f32);
	// addi r24,r11,3
	r24.s64 = ctx.r11.s64 + 3;
	// lfsx f8,r28,r10
	temp.u32 = REX_LOAD_U32(r28.u32 + ctx.r10.u32);
	ctx.f8.f64 = double(temp.f32);
	// addi r23,r11,-2
	r23.s64 = ctx.r11.s64 + -2;
	// lfsx f7,r27,r10
	temp.u32 = REX_LOAD_U32(r27.u32 + ctx.r10.u32);
	ctx.f7.f64 = double(temp.f32);
	// addi r22,r11,4
	r22.s64 = ctx.r11.s64 + 4;
	// lfs f6,0(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// addi r21,r11,5
	r21.s64 = ctx.r11.s64 + 5;
	// lfs f3,4(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// rlwinm r26,r26,2,0,29
	r26.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// fsubs f4,f6,f9
	ctx.f4.f64 = double(float(ctx.f6.f64 - ctx.f9.f64));
	// rlwinm r25,r25,2,0,29
	r25.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// fsubs f1,f3,f8
	ctx.f1.f64 = double(float(ctx.f3.f64 - ctx.f8.f64));
	// rlwinm r24,r24,2,0,29
	r24.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f10,-4(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + -4);
	ctx.f10.f64 = double(temp.f32);
	// rlwinm r29,r23,2,0,29
	r29.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r28,r22,2,0,29
	r28.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r27,r21,2,0,29
	r27.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f6,r26,r10
	temp.u32 = REX_LOAD_U32(r26.u32 + ctx.r10.u32);
	ctx.f6.f64 = double(temp.f32);
	// lfsx f5,r25,r10
	temp.u32 = REX_LOAD_U32(r25.u32 + ctx.r10.u32);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f6,f6,f7
	ctx.f6.f64 = double(float(ctx.f6.f64 - ctx.f7.f64));
	// lfsx f3,r24,r10
	temp.u32 = REX_LOAD_U32(r24.u32 + ctx.r10.u32);
	ctx.f3.f64 = double(temp.f32);
	// addi r7,r7,6
	ctx.r7.s64 = ctx.r7.s64 + 6;
	// lfsx f2,r29,r10
	temp.u32 = REX_LOAD_U32(r29.u32 + ctx.r10.u32);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f3,f3,f5
	ctx.f3.f64 = double(float(ctx.f3.f64 - ctx.f5.f64));
	// lfsx f31,r28,r10
	temp.u32 = REX_LOAD_U32(r28.u32 + ctx.r10.u32);
	f31.f64 = double(temp.f32);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// lfsx f30,r27,r10
	temp.u32 = REX_LOAD_U32(r27.u32 + ctx.r10.u32);
	f30.f64 = double(temp.f32);
	// fsubs f31,f31,f2
	f31.f64 = double(float(f31.f64 - ctx.f2.f64));
	// fsubs f30,f30,f10
	f30.f64 = double(float(f30.f64 - ctx.f10.f64));
	// fmadds f9,f4,f0,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f4.f64, ctx.f0.f64, ctx.f9.f64)));
	// stfs f9,0(r9)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// fmadds f8,f1,f0,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f1.f64, ctx.f0.f64, ctx.f8.f64)));
	// stfsu f8,4(r9)
	ea = 4 + ctx.r9.u32;
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// fmadds f7,f6,f0,f7
	ctx.f7.f64 = double(float(std::fma(ctx.f6.f64, ctx.f0.f64, ctx.f7.f64)));
	// stfsu f7,4(r9)
	ea = 4 + ctx.r9.u32;
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// fmadds f6,f3,f0,f5
	ctx.f6.f64 = double(float(std::fma(ctx.f3.f64, ctx.f0.f64, ctx.f5.f64)));
	// stfsu f6,4(r9)
	ea = 4 + ctx.r9.u32;
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// fmadds f5,f31,f0,f2
	ctx.f5.f64 = double(float(std::fma(f31.f64, ctx.f0.f64, ctx.f2.f64)));
	// stfsu f5,4(r9)
	ea = 4 + ctx.r9.u32;
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// fmadds f4,f30,f0,f10
	ctx.f4.f64 = double(float(std::fma(f30.f64, ctx.f0.f64, ctx.f10.f64)));
	// stfsu f4,4(r9)
	ea = 4 + ctx.r9.u32;
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82631e4c
	if (ctx.cr6.lt) goto loc_82631E4C;
loc_82631E3C:
	// fsubs f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82631e3c
	if (!ctx.cr6.lt) goto loc_82631E3C;
loc_82631E4C:
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// blt cr6,0x82631d54
	if (ctx.cr6.lt) goto loc_82631D54;
loc_82631E54:
	// cmplw cr6,r7,r30
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, r30.u32, ctx.xer);
	// bge cr6,0x82632094
	if (!ctx.cr6.lt) goto loc_82632094;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + r31.u64;
loc_82631E64:
	// rlwinm r6,r11,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r29,r11,-5
	r29.s64 = ctx.r11.s64 + -5;
	// addi r31,r11,-6
	r31.s64 = ctx.r11.s64 + -6;
	// addi r28,r11,-4
	r28.s64 = ctx.r11.s64 + -4;
	// addi r27,r11,2
	r27.s64 = ctx.r11.s64 + 2;
	// rlwinm r29,r29,1,0,30
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r6,r8
	ctx.r6.u64 = ctx.r6.u64 + ctx.r8.u64;
	// rlwinm r31,r31,1,0,30
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r28,r28,1,0,30
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r27,r27,1,0,30
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r29,r29,r8
	r29.u64 = REX_LOAD_U16(r29.u32 + ctx.r8.u32);
	// addi r25,r11,-3
	r25.s64 = ctx.r11.s64 + -3;
	// lhz r23,2(r6)
	r23.u64 = REX_LOAD_U16(ctx.r6.u32 + 2);
	// addi r24,r11,3
	r24.s64 = ctx.r11.s64 + 3;
	// lhzx r31,r31,r8
	r31.u64 = REX_LOAD_U16(r31.u32 + ctx.r8.u32);
	// extsh r29,r29
	r29.s64 = r29.s16;
	// lhzx r28,r28,r8
	r28.u64 = REX_LOAD_U16(r28.u32 + ctx.r8.u32);
	// extsh r23,r23
	r23.s64 = r23.s16;
	// lhzx r27,r27,r8
	r27.u64 = REX_LOAD_U16(r27.u32 + ctx.r8.u32);
	// extsh r31,r31
	r31.s64 = r31.s16;
	// lhz r26,0(r6)
	r26.u64 = REX_LOAD_U16(ctx.r6.u32 + 0);
	// extsh r28,r28
	r28.s64 = r28.s16;
	// extsh r27,r27
	r27.s64 = r27.s16;
	// extsh r26,r26
	r26.s64 = r26.s16;
	// subf r23,r29,r23
	r23.u64 = r23.u64 - r29.u64;
	// subf r26,r31,r26
	r26.u64 = r26.u64 - r31.u64;
	// subf r27,r28,r27
	r27.u64 = r27.u64 - r28.u64;
	// extsw r31,r31
	r31.s64 = r31.s32;
	// extsw r29,r29
	r29.s64 = r29.s32;
	// extsw r23,r23
	r23.s64 = r23.s32;
	// std r31,-168(r1)
	REX_STORE_U64(ctx.r1.u32 + -168, r31.u64);
	// extsw r28,r28
	r28.s64 = r28.s32;
	// lfd f5,-168(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// extsw r27,r27
	r27.s64 = r27.s32;
	// std r29,-208(r1)
	REX_STORE_U64(ctx.r1.u32 + -208, r29.u64);
	// std r23,-200(r1)
	REX_STORE_U64(ctx.r1.u32 + -200, r23.u64);
	// lfd f9,-200(r1)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + -200);
	// lfd f8,-208(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + -208);
	// std r28,-176(r1)
	REX_STORE_U64(ctx.r1.u32 + -176, r28.u64);
	// std r27,-184(r1)
	REX_STORE_U64(ctx.r1.u32 + -184, r27.u64);
	// lfd f7,-184(r1)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + -184);
	// lfd f6,-176(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + -176);
	// extsw r26,r26
	r26.s64 = r26.s32;
	// rlwinm r29,r25,1,0,30
	r29.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 1) & 0xFFFFFFFE;
	// std r26,-192(r1)
	REX_STORE_U64(ctx.r1.u32 + -192, r26.u64);
	// lfd f10,-192(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + -192);
	// fcfid f3,f10
	ctx.f3.f64 = double(ctx.f10.s64);
	// rlwinm r31,r24,1,0,30
	r31.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 1) & 0xFFFFFFFE;
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// lhzx r31,r31,r8
	r31.u64 = REX_LOAD_U16(r31.u32 + ctx.r8.u32);
	// fcfid f2,f9
	ctx.f2.f64 = double(ctx.f9.s64);
	// lhzx r29,r29,r8
	r29.u64 = REX_LOAD_U16(r29.u32 + ctx.r8.u32);
	// fcfid f1,f8
	ctx.f1.f64 = double(ctx.f8.s64);
	// extsh r31,r31
	r31.s64 = r31.s16;
	// fcfid f10,f7
	ctx.f10.f64 = double(ctx.f7.s64);
	// extsh r29,r29
	r29.s64 = r29.s16;
	// fcfid f9,f6
	ctx.f9.f64 = double(ctx.f6.s64);
	// addi r7,r7,6
	ctx.r7.s64 = ctx.r7.s64 + 6;
	// frsp f6,f3
	ctx.f6.f64 = double(float(ctx.f3.f64));
	// subf r31,r29,r31
	r31.u64 = r31.u64 - r29.u64;
	// extsw r28,r29
	r28.s64 = r29.s32;
	// extsw r31,r31
	r31.s64 = r31.s32;
	// std r28,-152(r1)
	REX_STORE_U64(ctx.r1.u32 + -152, r28.u64);
	// std r31,-160(r1)
	REX_STORE_U64(ctx.r1.u32 + -160, r31.u64);
	// lfd f7,-160(r1)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// frsp f8,f4
	ctx.f8.f64 = double(float(ctx.f4.f64));
	// frsp f5,f2
	ctx.f5.f64 = double(float(ctx.f2.f64));
	// frsp f4,f1
	ctx.f4.f64 = double(float(ctx.f1.f64));
	// frsp f3,f10
	ctx.f3.f64 = double(float(ctx.f10.f64));
	// frsp f2,f9
	ctx.f2.f64 = double(float(ctx.f9.f64));
	// fcfid f1,f7
	ctx.f1.f64 = double(ctx.f7.s64);
	// fmadds f10,f6,f0,f8
	ctx.f10.f64 = double(float(std::fma(ctx.f6.f64, ctx.f0.f64, ctx.f8.f64)));
	// fmadds f9,f5,f0,f4
	ctx.f9.f64 = double(float(std::fma(ctx.f5.f64, ctx.f0.f64, ctx.f4.f64)));
	// fmadds f8,f3,f0,f2
	ctx.f8.f64 = double(float(std::fma(ctx.f3.f64, ctx.f0.f64, ctx.f2.f64)));
	// frsp f7,f1
	ctx.f7.f64 = double(float(ctx.f1.f64));
	// fmuls f6,f10,f12
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// stfs f6,0(r9)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// fmuls f5,f9,f12
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// stfsu f5,4(r9)
	ea = 4 + ctx.r9.u32;
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// fmuls f4,f8,f12
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// stfsu f4,4(r9)
	ea = 4 + ctx.r9.u32;
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// addi r31,r11,5
	r31.s64 = ctx.r11.s64 + 5;
	// lhz r6,-2(r6)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + -2);
	// addi r29,r11,-2
	r29.s64 = ctx.r11.s64 + -2;
	// lfd f3,-152(r1)
	ctx.f3.u64 = REX_LOAD_U64(ctx.r1.u32 + -152);
	// rlwinm r31,r31,1,0,30
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// fcfid f2,f3
	ctx.f2.f64 = double(ctx.f3.s64);
	// addi r28,r11,4
	r28.s64 = ctx.r11.s64 + 4;
	// rlwinm r29,r29,1,0,30
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r28,r28,1,0,30
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// lhzx r31,r31,r8
	r31.u64 = REX_LOAD_U16(r31.u32 + ctx.r8.u32);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// extsw r27,r6
	r27.s64 = ctx.r6.s32;
	// extsh r31,r31
	r31.s64 = r31.s16;
	// lhzx r29,r29,r8
	r29.u64 = REX_LOAD_U16(r29.u32 + ctx.r8.u32);
	// std r27,-144(r1)
	REX_STORE_U64(ctx.r1.u32 + -144, r27.u64);
	// subf r6,r6,r31
	ctx.r6.u64 = r31.u64 - ctx.r6.u64;
	// lhzx r31,r28,r8
	r31.u64 = REX_LOAD_U16(r28.u32 + ctx.r8.u32);
	// extsh r29,r29
	r29.s64 = r29.s16;
	// frsp f9,f2
	ctx.f9.f64 = double(float(ctx.f2.f64));
	// extsw r6,r6
	ctx.r6.s64 = ctx.r6.s32;
	// extsh r31,r31
	r31.s64 = r31.s16;
	// std r6,-136(r1)
	REX_STORE_U64(ctx.r1.u32 + -136, ctx.r6.u64);
	// lfd f6,-136(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
	// subf r6,r29,r31
	ctx.r6.u64 = r31.u64 - r29.u64;
	// fcfid f2,f6
	ctx.f2.f64 = double(ctx.f6.s64);
	// extsw r6,r6
	ctx.r6.s64 = ctx.r6.s32;
	// lfd f1,-144(r1)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + -144);
	// extsw r31,r29
	r31.s64 = r29.s32;
	// fcfid f10,f1
	ctx.f10.f64 = double(ctx.f1.s64);
	// std r6,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, ctx.r6.u64);
	// lfd f3,-120(r1)
	ctx.f3.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// std r31,-128(r1)
	REX_STORE_U64(ctx.r1.u32 + -128, r31.u64);
	// lfd f5,-128(r1)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + -128);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// fcfid f1,f3
	ctx.f1.f64 = double(ctx.f3.s64);
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// fmadds f9,f7,f0,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f7.f64, ctx.f0.f64, ctx.f9.f64)));
	// frsp f10,f4
	ctx.f10.f64 = double(float(ctx.f4.f64));
	// frsp f7,f2
	ctx.f7.f64 = double(float(ctx.f2.f64));
	// frsp f6,f1
	ctx.f6.f64 = double(float(ctx.f1.f64));
	// fmuls f5,f9,f12
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// stfsu f5,4(r9)
	ea = 4 + ctx.r9.u32;
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// fmadds f4,f7,f0,f8
	ctx.f4.f64 = double(float(std::fma(ctx.f7.f64, ctx.f0.f64, ctx.f8.f64)));
	// fmadds f3,f6,f0,f10
	ctx.f3.f64 = double(float(std::fma(ctx.f6.f64, ctx.f0.f64, ctx.f10.f64)));
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// fmuls f2,f4,f12
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f12.f64));
	// fmuls f1,f3,f12
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f12.f64));
	// stfsu f1,4(r9)
	ea = 4 + ctx.r9.u32;
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// stfsu f2,4(r9)
	ea = 4 + ctx.r9.u32;
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// blt cr6,0x8263208c
	if (ctx.cr6.lt) goto loc_8263208C;
loc_8263207C:
	// fsubs f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8263207c
	if (!ctx.cr6.lt) goto loc_8263207C;
loc_8263208C:
	// cmplw cr6,r7,r30
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, r30.u32, ctx.xer);
	// blt cr6,0x82631e64
	if (ctx.cr6.lt) goto loc_82631E64;
loc_82632094:
	// addi r9,r5,-6
	ctx.r9.s64 = ctx.r5.s64 + -6;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x826320a4
	if (!ctx.cr6.lt) goto loc_826320A4;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_826320A4:
	// subf r9,r5,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r5.u64;
	// stfs f0,-208(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -208, temp.u32);
	// neg r6,r5
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r5.u64);
	// lwz r7,-208(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -208);
	// addi r11,r9,-6
	ctx.r11.s64 = ctx.r9.s64 + -6;
	// stw r7,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// stw r9,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r9.u32);
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x82632174
	if (!ctx.cr6.lt) goto loc_82632174;
	// subf r9,r11,r6
	ctx.r9.u64 = ctx.r6.u64 - ctx.r11.u64;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// blt cr6,0x82632138
	if (ctx.cr6.lt) goto loc_82632138;
	// add r9,r11,r5
	ctx.r9.u64 = ctx.r11.u64 + ctx.r5.u64;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r9,-3
	ctx.r4.s64 = ctx.r9.s64 + -3;
	// add r9,r7,r10
	ctx.r9.u64 = ctx.r7.u64 + ctx.r10.u64;
	// rlwinm r7,r4,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r5,2
	ctx.r4.s64 = ctx.r5.s64 + 2;
	// addi r3,r5,3
	ctx.r3.s64 = ctx.r5.s64 + 3;
	// addi r31,r6,-3
	r31.s64 = ctx.r6.s64 + -3;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
loc_826320FC:
	// lfs f0,12(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// add r30,r4,r11
	r30.u64 = ctx.r4.u64 + ctx.r11.u64;
	// stfs f0,4(r9)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// add r29,r3,r11
	r29.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lfsu f0,16(r7)
	ea = 16 + ctx.r7.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r7.u32 = ea;
	// rlwinm r30,r30,2,0,29
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f0,8(r9)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// rlwinm r29,r29,2,0,29
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r30,r10
	temp.u32 = REX_LOAD_U32(r30.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stfs f13,12(r9)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r31.s32, ctx.xer);
	// lfsx f11,r29,r10
	temp.u32 = REX_LOAD_U32(r29.u32 + ctx.r10.u32);
	ctx.f11.f64 = double(temp.f32);
	// stfsu f11,16(r9)
	ea = 16 + ctx.r9.u32;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// blt cr6,0x826320fc
	if (ctx.cr6.lt) goto loc_826320FC;
loc_82632138:
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x82632174
	if (!ctx.cr6.lt) goto loc_82632174;
	// add r4,r11,r5
	ctx.r4.u64 = ctx.r11.u64 + ctx.r5.u64;
	// subf r9,r11,r6
	ctx.r9.u64 = ctx.r6.u64 - ctx.r11.u64;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r4,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 + ctx.r10.u64;
	// addi r4,r7,-4
	ctx.r4.s64 = ctx.r7.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r7,r6,-4
	ctx.r7.s64 = ctx.r6.s64 + -4;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_82632168:
	// lfsu f0,4(r7)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r7.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r7.u32 = ea;
	// stfsu f0,4(r4)
	ea = 4 + ctx.r4.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r4.u32 = ea;
	// bdnz 0x82632168
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82632168;
loc_82632174:
	// neg r9,r11
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// blt cr6,0x8263224c
	if (ctx.cr6.lt) goto loc_8263224C;
	// subfic r7,r11,-4
	ctx.xer.ca = ctx.r11.u32 <= 4294967292;
	ctx.r7.u64 = static_cast<uint64_t>(-4) - ctx.r11.u64;
	// add r9,r11,r5
	ctx.r9.u64 = ctx.r11.u64 + ctx.r5.u64;
	// rlwinm r7,r7,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r4,r9,-3
	ctx.r4.s64 = ctx.r9.s64 + -3;
	// add r9,r6,r10
	ctx.r9.u64 = ctx.r6.u64 + ctx.r10.u64;
	// rlwinm r6,r4,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r4,r5,2
	ctx.r4.s64 = ctx.r5.s64 + 2;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// addi r3,r5,3
	ctx.r3.s64 = ctx.r5.s64 + 3;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// add r7,r6,r8
	ctx.r7.u64 = ctx.r6.u64 + ctx.r8.u64;
loc_826321B4:
	// lhz r30,6(r7)
	r30.u64 = REX_LOAD_U16(ctx.r7.u32 + 6);
	// add r31,r3,r11
	r31.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lhzu r6,8(r7)
	ea = 8 + ctx.r7.u32;
	ctx.r6.u64 = REX_LOAD_U16(ea);
	ctx.r7.u32 = ea;
	// add r29,r4,r11
	r29.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r31,r31,1,0,30
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// rlwinm r29,r29,1,0,30
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// std r6,-136(r1)
	REX_STORE_U64(ctx.r1.u32 + -136, ctx.r6.u64);
	// extsh r6,r30
	ctx.r6.s64 = r30.s16;
	// lfd f10,-136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// std r6,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, ctx.r6.u64);
	// frsp f3,f9
	ctx.f3.f64 = double(float(ctx.f9.f64));
	// lhzx r31,r31,r8
	r31.u64 = REX_LOAD_U16(r31.u32 + ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lhzx r30,r29,r8
	r30.u64 = REX_LOAD_U16(r29.u32 + ctx.r8.u32);
	// extsh r6,r31
	ctx.r6.s64 = r31.s16;
	// std r6,-128(r1)
	REX_STORE_U64(ctx.r1.u32 + -128, ctx.r6.u64);
	// extsh r6,r30
	ctx.r6.s64 = r30.s16;
	// lfd f11,-128(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + -128);
	// fcfid f5,f11
	ctx.f5.f64 = double(ctx.f11.s64);
	// lfd f0,-120(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// std r6,-144(r1)
	REX_STORE_U64(ctx.r1.u32 + -144, ctx.r6.u64);
	// lfd f7,-144(r1)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + -144);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// frsp f8,f13
	ctx.f8.f64 = double(float(ctx.f13.f64));
	// frsp f4,f6
	ctx.f4.f64 = double(float(ctx.f6.f64));
	// frsp f1,f5
	ctx.f1.f64 = double(float(ctx.f5.f64));
	// fmuls f13,f3,f12
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f12.f64));
	// stfs f13,8(r9)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// fmuls f2,f8,f12
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// stfs f2,4(r9)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// fmuls f0,f4,f12
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f12.f64));
	// stfs f0,12(r9)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// fmuls f11,f1,f12
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f12.f64));
	// stfsu f11,16(r9)
	ea = 16 + ctx.r9.u32;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x826321b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826321B4;
loc_8263224C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x8263229c
	if (!ctx.cr6.lt) goto loc_8263229C;
	// add r7,r11,r5
	ctx.r7.u64 = ctx.r11.u64 + ctx.r5.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// neg r6,r11
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r9,r7,r8
	ctx.r9.u64 = ctx.r7.u64 + ctx.r8.u64;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// addi r11,r9,-2
	ctx.r11.s64 = ctx.r9.s64 + -2;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_82632278:
	// lhzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// std r8,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, ctx.r8.u64);
	// lfd f0,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// fmuls f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stfsu f10,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82632278
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82632278;
loc_8263229C:
	// lfd f30,-112(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f31,-104(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x826a1cec
	return;
}

DEFINE_REX_FUNC(sub_8265D708) {
	REX_FUNC_PROLOGUE();
	// b 0x8266b2a0
	sub_8266B2A0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8265D730) {
	REX_FUNC_PROLOGUE();
	// b 0x82667850
	sub_82667850(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8265D768) {
	REX_FUNC_PROLOGUE();
	// b 0x82663e78
	sub_82663E78(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8265D838) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// oris r4,r11,8340
	ctx.r4.u64 = ctx.r11.u64 | 546570240;
	// ori r4,r4,8192
	ctx.r4.u64 = ctx.r4.u64 | 8192;
	// b 0x823f02b8
	sub_823F02B8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8265DCE8) {
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
	// li r5,124
	ctx.r5.s64 = 124;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x826a2e60
	ctx.lr = 0x8265DD08;
	sub_826A2E60(ctx, base);
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

DEFINE_REX_FUNC(sub_8265EC90) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// b 0x82653710
	sub_82653710(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8265EFF0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,100(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265f010
	if (!ctx.cr6.eq) goto loc_8265F010;
	// lwz r11,396(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 396);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8265f010
	if (!ctx.cr0.eq) goto loc_8265F010;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8265F010:
	// lwz r11,396(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 396);
	// rlwinm r3,r11,18,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8265FBE0) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8265fc60
	if (ctx.cr6.eq) goto loc_8265FC60;
	// lwz r10,396(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 396);
	// rlwinm. r9,r10,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8265fc60
	if (!ctx.cr0.eq) goto loc_8265FC60;
	// rlwinm. r10,r10,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8265fc18
	if (!ctx.cr0.eq) goto loc_8265FC18;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,997
	ctx.r3.u64 = ctx.r3.u64 | 997;
	// b 0x8265fc78
	goto loc_8265FC78;
loc_8265FC18:
	// lwz r3,12(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,76(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// ld r4,44(r11)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r11.u32 + 44);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r5,52(r11)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r11.u32 + 52);
	// ld r6,60(r11)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r11.u32 + 60);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// ld r7,68(r11)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r11.u32 + 68);
	// lwz r11,48(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265FC44;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8265fc74
	if (ctx.cr0.eq) goto loc_8265FC74;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8265fc78
	if (!ctx.cr6.gt) goto loc_8265FC78;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r3,r11,32775
	ctx.r3.u64 = ctx.r11.u64 | 2147942400;
	// b 0x8265fc78
	goto loc_8265FC78;
loc_8265FC60:
	// lwz r3,12(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265FC74;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8265FC74:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8265FC78:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826639F0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x826639F8;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,132
	r28.s64 = ctx.r3.s64 + 132;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x827938a4
	ctx.lr = 0x82663A10;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,168(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 168);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82663a38
	if (!ctx.cr6.eq) goto loc_82663A38;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82661398
	ctx.lr = 0x82663A28;
	sub_82661398(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x82663a38
	if (ctx.cr0.eq) goto loc_82663A38;
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(r31.s32, -1, ctx.xer);
	// bne cr6,0x82663a44
	if (!ctx.cr6.eq) goto loc_82663A44;
loc_82663A38:
	// lis r30,-32646
	r30.s64 = -2139488256;
	// ori r30,r30,4105
	r30.u64 = r30.u64 | 4105;
	// b 0x82663b40
	goto loc_82663B40;
loc_82663A44:
	// lwz r11,292(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 292);
	// rlwinm. r10,r11,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82663b38
	if (!ctx.cr0.eq) goto loc_82663B38;
	// rlwinm. r11,r11,0,8,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82663b38
	if (!ctx.cr0.eq) goto loc_82663B38;
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// lis r10,-32646
	ctx.r10.s64 = -2139488256;
	// ori r10,r10,4119
	ctx.r10.u64 = ctx.r10.u64 | 4119;
	// stw r10,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lwz r11,292(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 292);
	// oris r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 8388608;
	// rlwinm. r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,292(r31)
	REX_STORE_U32(r31.u32 + 292, ctx.r11.u32);
	// beq 0x82663a90
	if (ctx.cr0.eq) goto loc_82663A90;
	// rlwinm. r11,r11,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82663a90
	if (ctx.cr0.eq) goto loc_82663A90;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82670d68
	ctx.lr = 0x82663A90;
	sub_82670D68(ctx, base);
loc_82663A90:
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 28);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// bne cr6,0x82663ab0
	if (!ctx.cr6.eq) goto loc_82663AB0;
	// lwz r10,124(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 124);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r11,r30,8
	ctx.r11.s64 = r30.s64 + 8;
	// rlwimi r10,r9,31,0,1
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0xC0000000) | (ctx.r10.u64 & 0xFFFFFFFF3FFFFFFF);
	// stw r10,124(r30)
	REX_STORE_U32(r30.u32 + 124, ctx.r10.u32);
loc_82663AB0:
	// mfmsr r10
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r10.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r11,0,r31
	ea = r31.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r31
	ea = r31.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x82663ab0
	if (!ctx.cr0.eq) goto loc_82663AB0;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8264c7f0
	ctx.lr = 0x82663AD8;
	sub_8264C7F0(ctx, base);
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r6,96(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// li r9,8
	ctx.r9.s64 = 8;
	// lwz r4,24(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 24);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82673220
	ctx.lr = 0x82663B00;
	sub_82673220(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x82663b40
	if (ctx.cr0.eq) goto loc_82663B40;
loc_82663B08:
	// mfmsr r10
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r10.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r11,0,r31
	ea = r31.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r31
	ea = r31.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x82663b08
	if (!ctx.cr0.eq) goto loc_82663B08;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82663b40
	if (!ctx.cr6.eq) goto loc_82663B40;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82670cd8
	ctx.lr = 0x82663B34;
	sub_82670CD8(ctx, base);
	// b 0x82663b40
	goto loc_82663B40;
loc_82663B38:
	// lis r30,-32646
	r30.s64 = -2139488256;
	// ori r30,r30,4119
	r30.u64 = r30.u64 | 4119;
loc_82663B40:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x827938b4
	ctx.lr = 0x82663B48;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8267065C) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826706A8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb4
	ctx.lr = 0x826706B0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r27,60(r4)
	r27.u64 = REX_LOAD_U32(ctx.r4.u32 + 60);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82670724
	if (ctx.cr6.lt) goto loc_82670724;
	// addi r29,r11,4
	r29.s64 = ctx.r11.s64 + 4;
	// li r3,265
	ctx.r3.s64 = 265;
	// rlwinm r4,r29,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8265d838
	ctx.lr = 0x826706E0;
	sub_8265D838(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x826706f4
	if (!ctx.cr0.eq) goto loc_826706F4;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x826707b4
	goto loc_826707B4;
loc_826706F4:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267071c
	if (ctx.cr6.eq) goto loc_8267071C;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82670710;
	sub_826A1E70(ctx, base);
	// li r3,265
	ctx.r3.s64 = 265;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8265d850
	ctx.lr = 0x8267071C;
	sub_8265D850(ctx, base);
loc_8267071C:
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
	// stw r29,4(r31)
	REX_STORE_U32(r31.u32 + 4, r29.u32);
loc_82670724:
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8267077c
	if (ctx.cr6.eq) goto loc_8267077C;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
loc_8267073C:
	// lwzx r8,r11,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r8,60(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 60);
	// cmplw cr6,r8,r27
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, r27.u32, ctx.xer);
	// bgt cr6,0x82670764
	if (ctx.cr6.gt) goto loc_82670764;
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r30,r8
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8267073c
	if (ctx.cr6.lt) goto loc_8267073C;
	// b 0x8267077c
	goto loc_8267077C;
loc_82670764:
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r30,r9
	ctx.r9.u64 = ctx.r9.u64 - r30.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r4,4
	ctx.r3.s64 = ctx.r4.s64 + 4;
	// bl 0x8269cc20
	ctx.lr = 0x8267077C;
	sub_8269CC20(ctx, base);
loc_8267077C:
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
	// bne 0x8267077c
	if (!ctx.cr0.eq) goto loc_8267077C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// li r3,0
	ctx.r3.s64 = 0;
	// stwx r28,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, r28.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
loc_826707B4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82675EE0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82675EE8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r4,r4,68
	ctx.r4.s64 = ctx.r4.s64 + 68;
	// li r3,259
	ctx.r3.s64 = 259;
	// bl 0x8265d838
	ctx.lr = 0x82675F00;
	sub_8265D838(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x82675f48
	if (ctx.cr0.eq) goto loc_82675F48;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82675d70
	ctx.lr = 0x82675F14;
	sub_82675D70(ctx, base);
	// stb r29,68(r31)
	REX_STORE_U8(r31.u32 + 68, r29.u8);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// addi r11,r31,68
	ctx.r11.s64 = r31.s64 + 68;
	// stw r11,36(r10)
	REX_STORE_U32(ctx.r10.u32 + 36, ctx.r11.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r30,r11,r31
	REX_STORE_U32(ctx.r11.u32 + r31.u32, r30.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
loc_82675F48:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82677A40) {
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
	// bl 0x826a1cb0
	ctx.lr = 0x82677A48;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,4096
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4096, ctx.xer);
	// bgt cr6,0x82677d3c
	if (ctx.cr6.gt) goto loc_82677D3C;
	// beq cr6,0x82677d2c
	if (ctx.cr6.eq) goto loc_82677D2C;
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// cmplwi cr6,r11,27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 27, ctx.xer);
	// bgt cr6,0x82677e00
	if (ctx.cr6.gt) goto loc_82677E00;
	// lis r12,-32248
	ctx.r12.s64 = -2113404928;
	// addi r12,r12,-10568
	ctx.r12.s64 = ctx.r12.s64 + -10568;
	// lbzx r0,r12,r11
	ctx.r0.u64 = REX_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32153
	ctx.r12.s64 = -2107179008;
	// nop 
	// addi r12,r12,31376
	ctx.r12.s64 = ctx.r12.s64 + 31376;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82677A90;
	case 1:
		goto loc_82677AB0;
	case 2:
		goto loc_82677ACC;
	case 3:
		goto loc_82677AD8;
	case 4:
		goto loc_82677AE8;
	case 5:
		goto loc_82677AF8;
	case 6:
		goto loc_82677B08;
	case 7:
		goto loc_82677B18;
	case 8:
		goto loc_82677B28;
	case 9:
		goto loc_82677B38;
	case 10:
		goto loc_82677B48;
	case 11:
		goto loc_82677B58;
	case 12:
		goto loc_82677B68;
	case 13:
		goto loc_82677B78;
	case 14:
		goto loc_82677B88;
	case 15:
		goto loc_82677B98;
	case 16:
		goto loc_82677BA8;
	case 17:
		goto loc_82677BB8;
	case 18:
		goto loc_82677BC8;
	case 19:
		goto loc_82677BD8;
	case 20:
		goto loc_82677BE8;
	case 21:
		goto loc_82677C84;
	case 22:
		goto loc_82677C94;
	case 23:
		goto loc_82677CA4;
	case 24:
		goto loc_82677CB4;
	case 25:
		goto loc_82677CC4;
	case 26:
		goto loc_82677D0C;
	case 27:
		goto loc_82677D1C;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_82677A90:
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// lwz r10,124(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 124);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// stw r11,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r11.u32);
	// bge cr6,0x82677e08
	if (!ctx.cr6.lt) goto loc_82677E08;
loc_82677AA8:
	// stw r11,124(r31)
	REX_STORE_U32(r31.u32 + 124, ctx.r11.u32);
	// b 0x82677e08
	goto loc_82677E08;
loc_82677AB0:
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// lwz r10,124(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 124);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// stw r11,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r11.u32);
	// ble cr6,0x82677e08
	if (!ctx.cr6.gt) goto loc_82677E08;
	// b 0x82677aa8
	goto loc_82677AA8;
loc_82677ACC:
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// b 0x82677aa8
	goto loc_82677AA8;
loc_82677AD8:
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
	// b 0x82677e08
	goto loc_82677E08;
loc_82677AE8:
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// stw r11,128(r31)
	REX_STORE_U32(r31.u32 + 128, ctx.r11.u32);
	// b 0x82677e08
	goto loc_82677E08;
loc_82677AF8:
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// stw r11,132(r31)
	REX_STORE_U32(r31.u32 + 132, ctx.r11.u32);
	// b 0x82677e08
	goto loc_82677E08;
loc_82677B08:
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// stw r11,144(r31)
	REX_STORE_U32(r31.u32 + 144, ctx.r11.u32);
	// b 0x82677e08
	goto loc_82677E08;
loc_82677B18:
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// stw r11,148(r31)
	REX_STORE_U32(r31.u32 + 148, ctx.r11.u32);
	// b 0x82677e08
	goto loc_82677E08;
loc_82677B28:
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// stw r11,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r11.u32);
	// b 0x82677e08
	goto loc_82677E08;
loc_82677B38:
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// sth r11,156(r31)
	REX_STORE_U16(r31.u32 + 156, ctx.r11.u16);
	// b 0x82677e08
	goto loc_82677E08;
loc_82677B48:
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// sth r11,158(r31)
	REX_STORE_U16(r31.u32 + 158, ctx.r11.u16);
	// b 0x82677e08
	goto loc_82677E08;
loc_82677B58:
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// sth r11,160(r31)
	REX_STORE_U16(r31.u32 + 160, ctx.r11.u16);
	// b 0x82677e08
	goto loc_82677E08;
loc_82677B68:
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// sth r11,162(r31)
	REX_STORE_U16(r31.u32 + 162, ctx.r11.u16);
	// b 0x82677e08
	goto loc_82677E08;
loc_82677B78:
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// stw r11,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r11.u32);
	// b 0x82677e08
	goto loc_82677E08;
loc_82677B88:
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// stw r11,152(r31)
	REX_STORE_U32(r31.u32 + 152, ctx.r11.u32);
	// b 0x82677e08
	goto loc_82677E08;
loc_82677B98:
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// stw r11,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r11.u32);
	// b 0x82677e08
	goto loc_82677E08;
loc_82677BA8:
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// stw r11,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r11.u32);
	// b 0x82677e08
	goto loc_82677E08;
loc_82677BB8:
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// stw r11,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r11.u32);
	// b 0x82677e08
	goto loc_82677E08;
loc_82677BC8:
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// b 0x82677e08
	goto loc_82677E08;
loc_82677BD8:
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// stw r11,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r11.u32);
	// b 0x82677e08
	goto loc_82677E08;
loc_82677BE8:
	// addi r28,r31,244
	r28.s64 = r31.s64 + 244;
	// lwz r29,0(r5)
	r29.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x827938a4
	ctx.lr = 0x82677BFC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r27,r31,172
	r27.s64 = r31.s64 + 172;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x827938a4
	ctx.lr = 0x82677C08;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,284(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 284);
	// stw r29,164(r31)
	REX_STORE_U32(r31.u32 + 164, r29.u32);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// ble cr6,0x82677c70
	if (!ctx.cr6.gt) goto loc_82677C70;
	// addi r26,r31,288
	r26.s64 = r31.s64 + 288;
loc_82677C1C:
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r26.u32, ctx.xer);
	// bne cr6,0x82677c30
	if (!ctx.cr6.eq) goto loc_82677C30;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82677c50
	goto loc_82677C50;
loc_82677C30:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r11,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
loc_82677C50:
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// bl 0x82676d18
	ctx.lr = 0x82677C58;
	sub_82676D18(ctx, base);
	// lwz r11,284(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 284);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,284(r31)
	REX_STORE_U32(r31.u32 + 284, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// bgt cr6,0x82677c1c
	if (ctx.cr6.gt) goto loc_82677C1C;
loc_82677C70:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x827938b4
	ctx.lr = 0x82677C78;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82677C78:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x827938b4
	ctx.lr = 0x82677C80;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// b 0x82677e08
	goto loc_82677E08;
loc_82677C84:
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// stw r11,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r11.u32);
	// b 0x82677e08
	goto loc_82677E08;
loc_82677C94:
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// stw r11,76(r31)
	REX_STORE_U32(r31.u32 + 76, ctx.r11.u32);
	// b 0x82677e08
	goto loc_82677E08;
loc_82677CA4:
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// stw r11,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r11.u32);
	// b 0x82677e08
	goto loc_82677E08;
loc_82677CB4:
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// stw r11,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r11.u32);
	// b 0x82677e08
	goto loc_82677E08;
loc_82677CC4:
	// addi r28,r31,172
	r28.s64 = r31.s64 + 172;
	// lwz r29,0(r5)
	r29.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x827938a4
	ctx.lr = 0x82677CD8;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,448(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 448);
	// addic r10,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	ctx.r10.s64 = r29.s64 + -1;
	// rlwinm r9,r11,5,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x1;
	// subfe r10,r10,r29
	temp.u8 = (~ctx.r10.u32 + r29.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + r29.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + r29.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82677c78
	if (ctx.cr6.eq) goto loc_82677C78;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x82677d00
	if (ctx.cr6.eq) goto loc_82677D00;
	// oris r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 134217728;
	// b 0x82677d04
	goto loc_82677D04;
loc_82677D00:
	// rlwinm r11,r11,0,5,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFF7FFFFFF;
loc_82677D04:
	// stw r11,448(r31)
	REX_STORE_U32(r31.u32 + 448, ctx.r11.u32);
	// b 0x82677c78
	goto loc_82677C78;
loc_82677D0C:
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// stw r11,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r11.u32);
	// b 0x82677e08
	goto loc_82677E08;
loc_82677D1C:
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// stw r11,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r11.u32);
	// b 0x82677e08
	goto loc_82677E08;
loc_82677D2C:
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// stw r11,136(r31)
	REX_STORE_U32(r31.u32 + 136, ctx.r11.u32);
	// b 0x82677e08
	goto loc_82677E08;
loc_82677D3C:
	// addi r11,r4,-4097
	ctx.r11.s64 = ctx.r4.s64 + -4097;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bgt cr6,0x82677e00
	if (ctx.cr6.gt) goto loc_82677E00;
	// lis r12,-32248
	ctx.r12.s64 = -2113404928;
	// addi r12,r12,-10584
	ctx.r12.s64 = ctx.r12.s64 + -10584;
	// lbzx r0,r12,r11
	ctx.r0.u64 = REX_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// lis r12,-32153
	ctx.r12.s64 = -2107179008;
	// nop 
	// addi r12,r12,32112
	ctx.r12.s64 = ctx.r12.s64 + 32112;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82677D70;
	case 1:
		goto loc_82677E00;
	case 2:
		goto loc_82677D80;
	case 3:
		goto loc_82677D90;
	case 4:
		goto loc_82677DA0;
	case 5:
		goto loc_82677DB0;
	case 6:
		goto loc_82677DC0;
	case 7:
		goto loc_82677DD0;
	case 8:
		goto loc_82677DE0;
	case 9:
		goto loc_82677DF0;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_82677D70:
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// stw r11,280(r31)
	REX_STORE_U32(r31.u32 + 280, ctx.r11.u32);
	// b 0x82677e08
	goto loc_82677E08;
loc_82677D80:
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// stw r11,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r11.u32);
	// b 0x82677e08
	goto loc_82677E08;
loc_82677D90:
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// sth r11,96(r31)
	REX_STORE_U16(r31.u32 + 96, ctx.r11.u16);
	// b 0x82677e08
	goto loc_82677E08;
loc_82677DA0:
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// sth r11,98(r31)
	REX_STORE_U16(r31.u32 + 98, ctx.r11.u16);
	// b 0x82677e08
	goto loc_82677E08;
loc_82677DB0:
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// sth r11,100(r31)
	REX_STORE_U16(r31.u32 + 100, ctx.r11.u16);
	// b 0x82677e08
	goto loc_82677E08;
loc_82677DC0:
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// stw r11,140(r31)
	REX_STORE_U32(r31.u32 + 140, ctx.r11.u32);
	// b 0x82677e08
	goto loc_82677E08;
loc_82677DD0:
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// stw r11,168(r31)
	REX_STORE_U32(r31.u32 + 168, ctx.r11.u32);
	// b 0x82677e08
	goto loc_82677E08;
loc_82677DE0:
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// stw r11,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r11.u32);
	// b 0x82677e08
	goto loc_82677E08;
loc_82677DF0:
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// stw r11,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r11.u32);
	// b 0x82677e08
	goto loc_82677E08;
loc_82677E00:
	// lis r30,-32646
	r30.s64 = -2139488256;
	// ori r30,r30,4105
	r30.u64 = r30.u64 | 4105;
loc_82677E08:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8268CFE8) {
	REX_FUNC_PROLOGUE();
	// lis r4,25738
	ctx.r4.s64 = 1686765568;
	// ori r4,r4,24
	ctx.r4.u64 = ctx.r4.u64 | 24;
	// b 0x823f0350
	sub_823F0350(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8268D5F8) {
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
	// bl 0x826a1c9c
	ctx.lr = 0x8268D600;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r24,r3,8
	r24.s64 = ctx.r3.s64 + 8;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// lwz r27,8(r10)
	r27.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mr r22,r8
	r22.u64 = ctx.r8.u64;
	// li r21,1
	r21.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
loc_8268D634:
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8268d670
	if (ctx.cr6.eq) goto loc_8268D670;
	// lwz r7,8(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// bne cr6,0x8268d658
	if (!ctx.cr6.eq) goto loc_8268D658;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x8268d65c
	goto loc_8268D65C;
loc_8268D658:
	// stw r8,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
loc_8268D65C:
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8268d674
	if (ctx.cr6.eq) goto loc_8268D674;
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// b 0x8268d674
	goto loc_8268D674;
loc_8268D670:
	// stw r8,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
loc_8268D674:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8268d634
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8268D634;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8268d7e8
	if (ctx.cr6.eq) goto loc_8268D7E8;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x8268d7e8
	if (ctx.cr6.eq) goto loc_8268D7E8;
	// mr r21,r8
	r21.u64 = ctx.r8.u64;
	// b 0x8268d7e0
	goto loc_8268D7E0;
loc_8268D698:
	// addi r23,r23,-1
	r23.s64 = r23.s64 + -1;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8268d7e8
	if (ctx.cr6.eq) goto loc_8268D7E8;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x8268d7e8
	if (ctx.cr6.eq) goto loc_8268D7E8;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r9,0(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 0);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r8,12(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r11,4(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// subf r30,r11,r8
	r30.u64 = ctx.r8.u64 - ctx.r11.u64;
loc_8268D6C8:
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8268d6fc
	if (ctx.cr6.eq) goto loc_8268D6FC;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,12(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// subf r9,r9,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r9.u64;
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8268d6fc
	if (ctx.cr6.lt) goto loc_8268D6FC;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// subf r30,r11,r9
	r30.u64 = ctx.r9.u64 - ctx.r11.u64;
loc_8268D6FC:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8268d6c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8268D6C8;
	// addi r29,r1,80
	r29.s64 = ctx.r1.s64 + 80;
	// mr r28,r24
	r28.u64 = r24.u64;
	// li r26,2
	r26.s64 = 2;
loc_8268D710:
	// lwz r31,0(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8268d790
	if (ctx.cr6.eq) goto loc_8268D790;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,8(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r3,r8,r9
	ctx.r3.u64 = ctx.r8.u64 + ctx.r9.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8268D744;
	sub_826A1E70(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + r30.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8268d760
	if (!ctx.cr6.lt) goto loc_8268D760;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8268D760:
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8268d790
	if (!ctx.cr6.eq) goto loc_8268D790;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 0);
	// bl 0x8268ee20
	ctx.lr = 0x8268D780;
	sub_8268EE20(ctx, base);
	// stw r3,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8268d790
	if (!ctx.cr0.eq) goto loc_8268D790;
	// addi r22,r22,-1
	r22.s64 = r22.s64 + -1;
loc_8268D790:
	// addic. r26,r26,-1
	ctx.xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// bne 0x8268d710
	if (!ctx.cr0.eq) goto loc_8268D710;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + r30.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8268d7bc
	if (!ctx.cr6.lt) goto loc_8268D7BC;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8268D7BC:
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8268d7e0
	if (!ctx.cr6.eq) goto loc_8268D7E0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,4(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 4);
	// bl 0x8268ee20
	ctx.lr = 0x8268D7DC;
	sub_8268EE20(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_8268D7E0:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// bne cr6,0x8268d698
	if (!ctx.cr6.eq) goto loc_8268D698;
loc_8268D7E8:
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cec
	return;
}

DEFINE_REX_FUNC(sub_8269B270) {
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
	// bne cr6,0x8269b294
	if (!ctx.cr6.eq) goto loc_8269B294;
	// li r3,8
	ctx.r3.s64 = 8;
	// b 0x8269b2f4
	goto loc_8269B2F4;
loc_8269B294:
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8269b6b8
	ctx.lr = 0x8269B2A0;
	sub_8269B6B8(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bne 0x8269b2b4
	if (!ctx.cr0.eq) goto loc_8269B2B4;
loc_8269B2AC:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8269b2f4
	goto loc_8269B2F4;
loc_8269B2B4:
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r10,r10,47806
	ctx.r10.u64 = ctx.r10.u64 | 47806;
	// ori r9,r9,64206
	ctx.r9.u64 = ctx.r9.u64 | 64206;
	// li r8,14
	ctx.r8.s64 = 14;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// bl 0x8269b530
	ctx.lr = 0x8269B2DC;
	sub_8269B530(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8269b2f0
	if (ctx.cr0.eq) goto loc_8269B2F0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269b210
	ctx.lr = 0x8269B2EC;
	sub_8269B210(ctx, base);
	// b 0x8269b2ac
	goto loc_8269B2AC;
loc_8269B2F0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8269B2F4:
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

DEFINE_REX_FUNC(sub_8269D080) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// cmpwi cr7,r5,0
	ctx.cr7.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// cmpwi cr1,r5,1
	ctx.cr1.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr7,0x8269d0b4
	if (ctx.cr7.eq) goto loc_8269D0B4;
	// lbz r6,0(r3)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// cmpw cr6,r6,r4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r4.s32, ctx.xer);
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// beq cr6,0x8269d0b8
	if (ctx.cr6.eq) goto loc_8269D0B8;
	// beq cr1,0x8269d0b4
	if (ctx.cr1.eq) goto loc_8269D0B4;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_8269D0A4:
	// lbzu r6,1(r3)
	ea = 1 + ctx.r3.u32;
	ctx.r6.u64 = REX_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// cmpw r6,r4
	ctx.cr0.compare<int32_t>(ctx.r6.s32, ctx.r4.s32, ctx.xer);
	// bdnzf eq,0x8269d0a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0 && !ctx.cr0.eq) goto loc_8269D0A4;
	// beq 0x8269d0b8
	if (ctx.cr0.eq) goto loc_8269D0B8;
loc_8269D0B4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8269D0B8:
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8269E658) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8269E660;
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
	// beq 0x8269e720
	if (ctx.cr0.eq) goto loc_8269E720;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8269e698
	if (ctx.cr6.eq) goto loc_8269E698;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x8269e698
	if (ctx.cr6.eq) goto loc_8269E698;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// bne cr6,0x8269e720
	if (!ctx.cr6.eq) goto loc_8269E720;
loc_8269E698:
	// rlwinm r11,r11,0,28,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(r30.s32, 1, ctx.xer);
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// bne cr6,0x8269e6b8
	if (!ctx.cr6.eq) goto loc_8269E6B8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826a9fa0
	ctx.lr = 0x8269E6B0;
	sub_826A9FA0(ctx, base);
	// add r29,r3,r29
	r29.u64 = ctx.r3.u64 + r29.u64;
	// li r30,0
	r30.s64 = 0;
loc_8269E6B8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ea68
	ctx.lr = 0x8269E6C0;
	sub_8269EA68(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// rlwinm. r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8269e6d8
	if (ctx.cr0.eq) goto loc_8269E6D8;
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// b 0x8269e6f8
	goto loc_8269E6F8;
loc_8269E6D8:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8269e6f8
	if (ctx.cr0.eq) goto loc_8269E6F8;
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8269e6f8
	if (ctx.cr0.eq) goto loc_8269E6F8;
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8269e6f8
	if (!ctx.cr0.eq) goto loc_8269E6F8;
	// li r11,512
	ctx.r11.s64 = 512;
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
loc_8269E6F8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826a3320
	ctx.lr = 0x8269E700;
	sub_826A3320(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x826a9e20
	ctx.lr = 0x8269E70C;
	sub_826A9E20(ctx, base);
	// cmpdi cr6,r3,-1
	ctx.cr6.compare<int64_t>(ctx.r3.s64, -1, ctx.xer);
	// li r3,-1
	ctx.r3.s64 = -1;
	// beq cr6,0x8269e734
	if (ctx.cr6.eq) goto loc_8269E734;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8269e734
	goto loc_8269E734;
loc_8269E720:
	// bl 0x826a33d0
	ctx.lr = 0x8269E724;
	sub_826A33D0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,22
	ctx.r10.s64 = 22;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8269E734:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(__restfpr_20) {
	REX_FUNC_PROLOGUE();
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
	// lfd f20,-96(r12)
	ctx.fpscr.disableFlushMode();
	f20.u64 = REX_LOAD_U64(ctx.r12.u32 + -96);
	// lfd f21,-88(r12)
	f21.u64 = REX_LOAD_U64(ctx.r12.u32 + -88);
	// lfd f22,-80(r12)
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

DEFINE_REX_FUNC(__savevmx_26) {
	REX_FUNC_PROLOGUE();
	PPCVRegister v26{};
	PPCVRegister v27{};
	PPCVRegister v28{};
	PPCVRegister v29{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	uint32_t ea{};
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

DEFINE_REX_FUNC(__savevmx_124) {
	REX_FUNC_PROLOGUE();
	PPCVRegister v124{};
	PPCVRegister v125{};
	PPCVRegister v126{};
	PPCVRegister v127{};
	uint32_t ea{};
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

DEFINE_REX_FUNC(__restvmx_64) {
	REX_FUNC_PROLOGUE();
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
	// li r11,-1024
	ctx.r11.s64 = -1024;
	// lvx128 v64,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v64.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-1008
	ctx.r11.s64 = -1008;
	// lvx128 v65,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v65.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-992
	ctx.r11.s64 = -992;
	// lvx128 v66,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v66.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-976
	ctx.r11.s64 = -976;
	// lvx128 v67,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v67.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
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

DEFINE_REX_FUNC(sub_826BA768) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x826BA770;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826BA790;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826ba7ac
	if (ctx.cr6.lt) goto loc_826BA7AC;
	// stw r29,56(r31)
	REX_STORE_U32(r31.u32 + 56, r29.u32);
	// stw r28,60(r31)
	REX_STORE_U32(r31.u32 + 60, r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_826BA7AC:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826BA7C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_826BCA78) {
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
	// bl 0x826a1c80
	ctx.lr = 0x826BCA80;
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// stw r5,324(r1)
	REX_STORE_U32(ctx.r1.u32 + 324, ctx.r5.u32);
	// li r23,1
	r23.s64 = 1;
	// stw r6,332(r1)
	REX_STORE_U32(ctx.r1.u32 + 332, ctx.r6.u32);
	// stb r31,0(r6)
	REX_STORE_U8(ctx.r6.u32 + 0, r31.u8);
	// li r26,-1
	r26.s64 = -1;
	// stw r31,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, r31.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r11,532(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 532);
	// mr r16,r4
	r16.u64 = ctx.r4.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// mr r24,r31
	r24.u64 = r31.u64;
	// stw r31,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// clrldi r26,r26,5
	r26.u64 = r26.u64 & 0x7FFFFFFFFFFFFFF;
	// std r31,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, r31.u64);
	// mr r22,r31
	r22.u64 = r31.u64;
	// std r31,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, r31.u64);
	// mr r14,r23
	r14.u64 = r23.u64;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// stb r31,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, r31.u8);
	// stw r31,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// beq cr6,0x826bcaec
	if (ctx.cr6.eq) goto loc_826BCAEC;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x826bcaf4
	if (!ctx.cr6.eq) goto loc_826BCAF4;
loc_826BCAEC:
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,532(r28)
	REX_STORE_U32(r28.u32 + 532, ctx.r11.u32);
loc_826BCAF4:
	// stw r31,536(r28)
	REX_STORE_U32(r28.u32 + 536, r31.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r10,4(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lwz r17,20(r10)
	r17.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// bctrl 
	ctx.lr = 0x826BCB14;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r8,-32688
	ctx.r8.s64 = -2142240768;
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x826bcb74
	if (!ctx.cr6.eq) goto loc_826BCB74;
	// lwz r11,632(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 632);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826bcb68
	if (ctx.cr6.eq) goto loc_826BCB68;
	// mr r20,r31
	r20.u64 = r31.u64;
loc_826BCB34:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,568(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 568);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// bl 0x826c6d18
	ctx.lr = 0x826BCB48;
	sub_826C6D18(ctx, base);
	// lis r11,-32688
	ctx.r11.s64 = -2142240768;
	// ori r18,r11,22
	r18.u64 = ctx.r11.u64 | 22;
	// cmplw cr6,r3,r18
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r18.u32, ctx.xer);
	// bne cr6,0x826bcb88
	if (!ctx.cr6.eq) goto loc_826BCB88;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,167
	ctx.r3.u64 = ctx.r3.u64 | 167;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x826a1cd0
	return;
loc_826BCB68:
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x826a1cd0
	return;
loc_826BCB74:
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// bge cr6,0x826bcb34
	if (!ctx.cr6.lt) goto loc_826BCB34;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x826a1cd0
	return;
loc_826BCB88:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826bcf90
	if (ctx.cr6.lt) goto loc_826BCF90;
	// lis r11,-32688
	ctx.r11.s64 = -2142240768;
	// lwz r25,96(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lis r10,80
	ctx.r10.s64 = 5242880;
	// stw r31,588(r28)
	REX_STORE_U32(r28.u32 + 588, r31.u32);
	// ori r19,r11,11
	r19.u64 = ctx.r11.u64 | 11;
	// ori r21,r10,11
	r21.u64 = ctx.r10.u64 | 11;
	// li r15,6
	r15.s64 = 6;
loc_826BCBAC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826bcf90
	if (ctx.cr6.lt) goto loc_826BCF90;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x826bce7c
	if (ctx.cr6.eq) goto loc_826BCE7C;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lbz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lwz r3,572(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 572);
	// bl 0x826c6cf0
	ctx.lr = 0x826BCBD4;
	sub_826C6CF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826bcf90
	if (ctx.cr6.lt) goto loc_826BCF90;
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r27,0(r11)
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826c71a8
	ctx.lr = 0x826BCBF4;
	sub_826C71A8(ctx, base);
	// cmplw cr6,r3,r19
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r19.u32, ctx.xer);
	// bne cr6,0x826bcc40
	if (!ctx.cr6.eq) goto loc_826BCC40;
	// cmpw cr6,r20,r21
	ctx.cr6.compare<int32_t>(r20.s32, r21.s32, ctx.xer);
	// bne cr6,0x826bcc34
	if (!ctx.cr6.eq) goto loc_826BCC34;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,76(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x826bcc34
	if (!ctx.cr6.eq) goto loc_826BCC34;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826c7a48
	ctx.lr = 0x826BCC20;
	sub_826C7A48(ctx, base);
	// lwz r11,0(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826bcea0
	if (!ctx.cr6.eq) goto loc_826BCEA0;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r23,76(r11)
	REX_STORE_U32(ctx.r11.u32 + 76, r23.u32);
loc_826BCC34:
	// mr r14,r31
	r14.u64 = r31.u64;
	// stw r31,588(r28)
	REX_STORE_U32(r28.u32 + 588, r31.u32);
	// b 0x826bce7c
	goto loc_826BCE7C;
loc_826BCC40:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826bcf90
	if (ctx.cr6.lt) goto loc_826BCF90;
	// lwz r10,532(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 532);
	// ld r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// bne cr6,0x826bcc74
	if (!ctx.cr6.eq) goto loc_826BCC74;
	// lwz r10,4(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 4);
	// ld r9,120(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// subf r8,r11,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r11.u64;
	// lwz r7,20(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// cmpd cr6,r8,r7
	ctx.cr6.compare<int64_t>(ctx.r8.s64, ctx.r7.s64, ctx.xer);
	// ble cr6,0x826bcc74
	if (!ctx.cr6.gt) goto loc_826BCC74;
	// stw r15,532(r28)
	REX_STORE_U32(r28.u32 + 532, r15.u32);
loc_826BCC74:
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rotlwi r30,r11,0
	r30.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// stw r30,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, r30.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r23,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, r23.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x826bcca4
	if (ctx.cr6.eq) goto loc_826BCCA4;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x826bccb8
	if (!ctx.cr6.eq) goto loc_826BCCB8;
loc_826BCCA4:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lbz r4,20(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 20);
	// lwz r3,568(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 568);
	// bl 0x826c6cf0
	ctx.lr = 0x826BCCB4;
	sub_826C6CF0(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_826BCCB8:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x826bcda8
	if (!ctx.cr6.eq) goto loc_826BCDA8;
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r9,24(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x826bcce4
	if (!ctx.cr6.eq) goto loc_826BCCE4;
	// stw r30,28(r10)
	REX_STORE_U32(ctx.r10.u32 + 28, r30.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r23,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, r23.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_826BCCE4:
	// stw r23,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r23.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,12(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x826bcd58
	if (ctx.cr6.lt) goto loc_826BCD58;
	// stw r31,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r31.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r31,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r31.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r31,16(r10)
	REX_STORE_U32(ctx.r10.u32 + 16, r31.u32);
	// lwz r9,88(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stb r31,20(r9)
	REX_STORE_U8(ctx.r9.u32 + 20, r31.u8);
	// lwz r8,88(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r31,24(r8)
	REX_STORE_U32(ctx.r8.u32 + 24, r31.u32);
	// lwz r7,88(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r31,28(r7)
	REX_STORE_U32(ctx.r7.u32 + 28, r31.u32);
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,16(r6)
	REX_STORE_U32(ctx.r6.u32 + 16, r31.u32);
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stb r31,20(r5)
	REX_STORE_U8(ctx.r5.u32 + 20, r31.u8);
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lbz r4,0(r4)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// bl 0x826bc9e0
	ctx.lr = 0x826BCD4C;
	sub_826BC9E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826bcf90
	if (ctx.cr6.lt) goto loc_826BCF90;
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_826BCD58:
	// stw r31,16(r10)
	REX_STORE_U32(ctx.r10.u32 + 16, r31.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stb r31,20(r11)
	REX_STORE_U8(ctx.r11.u32 + 20, r31.u8);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_826BCD68:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826bce7c
	if (ctx.cr6.eq) goto loc_826BCE7C;
	// lwz r10,556(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 556);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x826bce58
	if (!ctx.cr6.eq) goto loc_826BCE58;
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrldi r9,r17,32
	ctx.r9.u64 = r17.u64 & 0xFFFFFFFF;
	// subf r10,r10,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r10.u64;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + r29.u64;
	// cmpd cr6,r10,r26
	ctx.cr6.compare<int64_t>(ctx.r10.s64, r26.s64, ctx.xer);
	// bgt cr6,0x826bce7c
	if (ctx.cr6.gt) goto loc_826BCE7C;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x826bce7c
	if (ctx.cr6.eq) goto loc_826BCE7C;
	// mr r26,r10
	r26.u64 = ctx.r10.u64;
	// b 0x826bce70
	goto loc_826BCE70;
loc_826BCDA8:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x826bcd68
	if (!ctx.cr6.eq) goto loc_826BCD68;
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x826bcd68
	if (ctx.cr6.eq) goto loc_826BCD68;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,28(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x826bcd68
	if (ctx.cr6.lt) goto loc_826BCD68;
	// stw r31,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r31.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x826bce10
	if (ctx.cr6.eq) goto loc_826BCE10;
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lbz r9,20(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 20);
	// lbz r8,20(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 20);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x826bce10
	if (!ctx.cr6.eq) goto loc_826BCE10;
	// stw r31,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, r31.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stb r31,20(r11)
	REX_STORE_U8(ctx.r11.u32 + 20, r31.u8);
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r31,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, r31.u32);
	// lwz r9,88(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r31,28(r9)
	REX_STORE_U32(ctx.r9.u32 + 28, r31.u32);
loc_826BCE10:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r31,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r31.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,16(r10)
	REX_STORE_U32(ctx.r10.u32 + 16, r31.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stb r31,20(r9)
	REX_STORE_U8(ctx.r9.u32 + 20, r31.u8);
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,24(r8)
	REX_STORE_U32(ctx.r8.u32 + 24, r31.u32);
	// lwz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,28(r7)
	REX_STORE_U32(ctx.r7.u32 + 28, r31.u32);
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lbz r4,0(r6)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r6.u32 + 0);
	// bl 0x826bc9e0
	ctx.lr = 0x826BCE48;
	sub_826BC9E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826bcf90
	if (ctx.cr6.lt) goto loc_826BCF90;
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// b 0x826bce7c
	goto loc_826BCE7C;
loc_826BCE58:
	// cmpd cr6,r29,r26
	ctx.cr6.compare<int64_t>(r29.s64, r26.s64, ctx.xer);
	// bgt cr6,0x826bce7c
	if (ctx.cr6.gt) goto loc_826BCE7C;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x826bce7c
	if (ctx.cr6.eq) goto loc_826BCE7C;
	// mr r26,r29
	r26.u64 = r29.u64;
loc_826BCE70:
	// lwz r25,68(r11)
	r25.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mr r22,r29
	r22.u64 = r29.u64;
	// mr r24,r27
	r24.u64 = r27.u64;
loc_826BCE7C:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,568(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 568);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r4,92(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x826c6d80
	ctx.lr = 0x826BCE90;
	sub_826C6D80(ctx, base);
	// cmplw cr6,r3,r18
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r18.u32, ctx.xer);
	// beq cr6,0x826bcec4
	if (ctx.cr6.eq) goto loc_826BCEC4;
	// lwz r30,332(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// b 0x826bcbac
	goto loc_826BCBAC;
loc_826BCEA0:
	// stw r27,536(r28)
	REX_STORE_U32(r28.u32 + 536, r27.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826c7880
	ctx.lr = 0x826BCEB0;
	sub_826C7880(ctx, base);
	// lwz r4,92(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r3,568(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 568);
	// bl 0x826c6de8
	ctx.lr = 0x826BCEBC;
	sub_826C6DE8(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x826a1cd0
	return;
loc_826BCEC4:
	// lwz r4,92(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r3,568(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 568);
	// bl 0x826c6de8
	ctx.lr = 0x826BCED0;
	sub_826C6DE8(ctx, base);
	// cmpw cr6,r20,r21
	ctx.cr6.compare<int32_t>(r20.s32, r21.s32, ctx.xer);
	// bne cr6,0x826bcef0
	if (!ctx.cr6.eq) goto loc_826BCEF0;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// bne cr6,0x826bcf0c
	if (!ctx.cr6.eq) goto loc_826BCF0C;
	// lis r3,80
	ctx.r3.s64 = 5242880;
	// ori r3,r3,4
	ctx.r3.u64 = ctx.r3.u64 | 4;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x826a1cd0
	return;
loc_826BCEF0:
	// lis r11,-32688
	ctx.r11.s64 = -2142240768;
	// cmplw cr6,r20,r11
	ctx.cr6.compare<uint32_t>(r20.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x826bcf98
	if (ctx.cr6.eq) goto loc_826BCF98;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(r14.s32, 0, ctx.xer);
	// bne cr6,0x826bcf98
	if (!ctx.cr6.eq) goto loc_826BCF98;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x826bcf7c
	if (ctx.cr6.eq) goto loc_826BCF7C;
loc_826BCF0C:
	// lwz r11,324(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// stw r16,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r16.u32);
	// lis r5,12
	ctx.r5.s64 = 786432;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r3,608(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 608);
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// bl 0x826c65a8
	ctx.lr = 0x826BCF2C;
	sub_826C65A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826bcf90
	if (ctx.cr6.lt) goto loc_826BCF90;
	// lwz r31,332(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x826c7880
	ctx.lr = 0x826BCF44;
	sub_826C7880(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826bcf90
	if (ctx.cr6.lt) goto loc_826BCF90;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U8(r31.u32 + 0);
	// lwz r3,568(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 568);
	// bl 0x826c6cf0
	ctx.lr = 0x826BCF5C;
	sub_826C6CF0(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r22,80(r11)
	REX_STORE_U32(ctx.r11.u32 + 80, r22.u32);
	// lwz r9,108(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// subfic r7,r8,0
	ctx.xer.ca = ctx.r8.u32 <= 0;
	ctx.r7.u64 = static_cast<uint64_t>(0) - ctx.r8.u64;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r4,r5,r24
	ctx.r4.u64 = ctx.r5.u64 & r24.u64;
	// stw r4,536(r28)
	REX_STORE_U32(r28.u32 + 536, ctx.r4.u32);
loc_826BCF7C:
	// lwz r11,532(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 532);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x826bcf90
	if (!ctx.cr6.eq) goto loc_826BCF90;
	// lis r3,80
	ctx.r3.s64 = 5242880;
	// ori r3,r3,3
	ctx.r3.u64 = ctx.r3.u64 | 3;
loc_826BCF90:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x826a1cd0
	return;
loc_826BCF98:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// bne cr6,0x826bcf0c
	if (!ctx.cr6.eq) goto loc_826BCF0C;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,11
	ctx.r3.u64 = ctx.r3.u64 | 11;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_826E4760) {
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
	// bl 0x826a1cb0
	ctx.lr = 0x826E4768;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,580(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 580);
	// li r28,0
	r28.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// stw r28,716(r3)
	REX_STORE_U32(ctx.r3.u32 + 716, r28.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r10,648(r3)
	REX_STORE_U32(ctx.r3.u32 + 648, ctx.r10.u32);
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x826e4830
	if (!ctx.cr6.gt) goto loc_826E4830;
	// mr r27,r28
	r27.u64 = r28.u64;
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
loc_826E479C:
	// lwz r10,584(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 584);
	// li r5,160
	ctx.r5.s64 = 160;
	// li r4,0
	ctx.r4.s64 = 0;
	// lhzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// mulli r11,r8,1776
	ctx.r11.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(1776));
	// add r31,r11,r26
	r31.u64 = ctx.r11.u64 + r26.u64;
	// addi r3,r31,1616
	ctx.r3.s64 = r31.s64 + 1616;
	// bl 0x826a2e60
	ctx.lr = 0x826E47C0;
	sub_826A2E60(ctx, base);
	// stw r28,468(r31)
	REX_STORE_U32(r31.u32 + 468, r28.u32);
	// stw r28,472(r31)
	REX_STORE_U32(r31.u32 + 472, r28.u32);
	// stw r28,476(r31)
	REX_STORE_U32(r31.u32 + 476, r28.u32);
	// stw r28,480(r31)
	REX_STORE_U32(r31.u32 + 480, r28.u32);
	// lhz r7,182(r31)
	ctx.r7.u64 = REX_LOAD_U16(r31.u32 + 182);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x826e4810
	if (!ctx.cr6.gt) goto loc_826E4810;
	// mr r30,r28
	r30.u64 = r28.u64;
loc_826E47E4:
	// mulli r11,r30,56
	ctx.r11.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(56));
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,200
	ctx.r4.s64 = ctx.r11.s64 + 200;
	// bl 0x826f4e00
	ctx.lr = 0x826E47F8;
	sub_826F4E00(ctx, base);
	// lhz r9,182(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 182);
	// addi r11,r30,1
	ctx.r11.s64 = r30.s64 + 1;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// extsh r30,r11
	r30.s64 = ctx.r11.s16;
	// cmpw cr6,r30,r8
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x826e47e4
	if (ctx.cr6.lt) goto loc_826E47E4;
loc_826E4810:
	// addi r11,r27,1
	ctx.r11.s64 = r27.s64 + 1;
	// stw r28,188(r31)
	REX_STORE_U32(r31.u32 + 188, r28.u32);
	// lhz r10,580(r29)
	ctx.r10.u64 = REX_LOAD_U16(r29.u32 + 580);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// extsh r27,r11
	r27.s64 = ctx.r11.s16;
	// cmpw cr6,r27,r9
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r9.s32, ctx.xer);
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
	// blt cr6,0x826e479c
	if (ctx.cr6.lt) goto loc_826E479C;
loc_826E4830:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_826EF8A8) {
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
	// bl 0x826a1c9c
	ctx.lr = 0x826EF8B0;
	// stfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -104, f31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// li r22,0
	r22.s64 = 0;
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 34);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826efa04
	if (ctx.cr6.eq) goto loc_826EFA04;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r23,0
	r23.s64 = 0;
	// lfs f31,3704(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	f31.f64 = double(temp.f32);
loc_826EF8DC:
	// lwz r11,320(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 320);
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + r23.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x826ef9ec
	if (ctx.cr6.eq) goto loc_826EF9EC;
	// lwz r11,320(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 320);
	// li r29,0
	r29.s64 = 0;
	// lwz r10,400(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 400);
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + r23.u64;
	// rlwinm r28,r10,2,0,29
	r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r24,12(r11)
	r24.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r25,16(r11)
	r25.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r27,148(r11)
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 148);
	// add r26,r10,r24
	r26.u64 = ctx.r10.u64 + r24.u64;
loc_826EF914:
	// lwz r10,308(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 308);
	// lwz r11,404(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 404);
	// add r8,r10,r28
	ctx.r8.u64 = ctx.r10.u64 + r28.u64;
	// lwzx r10,r10,r28
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r28.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x826ef930
	if (ctx.cr6.gt) goto loc_826EF930;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_826EF930:
	// lwz r9,268(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 268);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x826ef98c
	if (!ctx.cr6.lt) goto loc_826EF98C;
	// lwz r10,4(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x826ef94c
	if (!ctx.cr6.lt) goto loc_826EF94C;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_826EF94C:
	// lbz r8,0(r26)
	ctx.r8.u64 = REX_LOAD_U8(r26.u32 + 0);
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bne cr6,0x826ef980
	if (!ctx.cr6.eq) goto loc_826EF980;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r4,r11,r10
	ctx.r4.u64 = ctx.r10.u64 - ctx.r11.u64;
	// add r3,r9,r27
	ctx.r3.u64 = ctx.r9.u64 + r27.u64;
	// clrlwi r30,r29,24
	r30.u64 = r29.u32 & 0xFF;
	// bl 0x826ef828
	ctx.lr = 0x826EF96C;
	sub_826EF828(ctx, base);
	// rlwinm r11,r29,2,22,29
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0x3FC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r30,1
	ctx.r9.s64 = r30.s64 + 1;
	// clrlwi r29,r9,24
	r29.u64 = ctx.r9.u32 & 0xFF;
	// stfsx f1,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, temp.u32);
loc_826EF980:
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// b 0x826ef914
	goto loc_826EF914;
loc_826EF98C:
	// clrlwi r9,r29,24
	ctx.r9.u64 = r29.u32 & 0xFF;
	// addic. r10,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r10.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x826ef9d4
	if (!ctx.cr0.gt) goto loc_826EF9D4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// subf r10,r25,r8
	ctx.r10.u64 = ctx.r8.u64 - r25.u64;
	// lfs f0,-4(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f31,f0
	ctx.f0.f64 = double(float(f31.f64 / ctx.f0.f64));
loc_826EF9BC:
	// lfsx f13,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fsqrts f11,f12
	ctx.f11.f64 = double(float(sqrt(ctx.f12.f64)));
	// stfs f11,0(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x826ef9bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826EF9BC;
loc_826EF9D4:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x826ef9e8
	if (ctx.cr6.eq) goto loc_826EF9E8;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + r25.u64;
	// stfs f31,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + -4, temp.u32);
loc_826EF9E8:
	// stb r29,0(r24)
	REX_STORE_U8(r24.u32 + 0, r29.u8);
loc_826EF9EC:
	// lwz r31,0(r21)
	r31.u64 = REX_LOAD_U32(r21.u32 + 0);
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// addi r23,r23,1776
	r23.s64 = r23.s64 + 1776;
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 34);
	// cmpw cr6,r22,r11
	ctx.cr6.compare<int32_t>(r22.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x826ef8dc
	if (ctx.cr6.lt) goto loc_826EF8DC;
loc_826EFA04:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x826a1cec
	return;
}

DEFINE_REX_FUNC(sub_826FAD48) {
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
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826fad78
	if (ctx.cr6.eq) goto loc_826FAD78;
	// bl 0x82634e78
	ctx.lr = 0x826FAD74;
	sub_82634E78(ctx, base);
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
loc_826FAD78:
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826fad8c
	if (ctx.cr6.eq) goto loc_826FAD8C;
	// bl 0x82634e78
	ctx.lr = 0x826FAD88;
	sub_82634E78(ctx, base);
	// stw r30,12(r31)
	REX_STORE_U32(r31.u32 + 12, r30.u32);
loc_826FAD8C:
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826fada0
	if (ctx.cr6.eq) goto loc_826FADA0;
	// bl 0x82634e78
	ctx.lr = 0x826FAD9C;
	sub_82634E78(ctx, base);
	// stw r30,20(r31)
	REX_STORE_U32(r31.u32 + 20, r30.u32);
loc_826FADA0:
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r31,-4
	ctx.r11.s64 = r31.s64 + -4;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_826FADB0:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x826fadb0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826FADB0;
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

DEFINE_REX_FUNC(sub_826FD178) {
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
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c84
	ctx.lr = 0x826FD180;
	// addi r12,r1,-144
	ctx.r12.s64 = ctx.r1.s64 + -144;
	// bl 0x826a2ca8
	ctx.lr = 0x826FD188;
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// mr r17,r4
	r17.u64 = ctx.r4.u64;
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// mr r19,r6
	r19.u64 = ctx.r6.u64;
	// mr r21,r7
	r21.u64 = ctx.r7.u64;
	// mr r16,r8
	r16.u64 = ctx.r8.u64;
	// mr r18,r9
	r18.u64 = ctx.r9.u64;
	// mr r15,r10
	r15.u64 = ctx.r10.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x826fd1c8
	if (!ctx.cr6.eq) goto loc_826FD1C8;
	// li r3,7
	ctx.r3.s64 = 7;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-144
	ctx.r12.s64 = ctx.r1.s64 + -144;
	// bl 0x826a2cf4
	ctx.lr = 0x826FD1C4;
	// b 0x826a1cd4
	return;
loc_826FD1C8:
	// lwz r31,84(r20)
	r31.u64 = REX_LOAD_U32(r20.u32 + 84);
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
	// bge cr6,0x826fd23c
	if (!ctx.cr6.lt) goto loc_826FD23C;
loc_826FD1E4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826fd23c
	if (ctx.cr6.eq) goto loc_826FD23C;
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
	// bge 0x826fd22c
	if (!ctx.cr0.lt) goto loc_826FD22C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x826FD22C;
	sub_82725E38(ctx, base);
loc_826FD22C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x826fd1e4
	if (ctx.cr6.gt) goto loc_826FD1E4;
loc_826FD23C:
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
	// bge 0x826fd274
	if (!ctx.cr0.lt) goto loc_826FD274;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x826FD274;
	sub_82725E38(ctx, base);
loc_826FD274:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r30,15396(r20)
	REX_STORE_U32(r20.u32 + 15396, r30.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// li r29,0
	r29.s64 = 0;
	// lfs f29,3716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	f29.f64 = double(temp.f32);
	// lfs f28,3704(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3704);
	f28.f64 = double(temp.f32);
	// bne cr6,0x826fd5b4
	if (!ctx.cr6.eq) goto loc_826FD5B4;
	// stfs f28,0(r17)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(r17.u32 + 0, temp.u32);
	// li r30,15
	r30.s64 = 15;
	// stfs f29,0(r22)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r22.u32 + 0, temp.u32);
	// stfs f29,0(r21)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r21.u32 + 0, temp.u32);
	// stfs f28,0(r16)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(r16.u32 + 0, temp.u32);
	// lwz r31,84(r20)
	r31.u64 = REX_LOAD_U32(r20.u32 + 84);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bge cr6,0x826fd314
	if (!ctx.cr6.lt) goto loc_826FD314;
loc_826FD2BC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826fd314
	if (ctx.cr6.eq) goto loc_826FD314;
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
	// bge 0x826fd304
	if (!ctx.cr0.lt) goto loc_826FD304;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x826FD304;
	sub_82725E38(ctx, base);
loc_826FD304:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x826fd2bc
	if (ctx.cr6.gt) goto loc_826FD2BC;
loc_826FD314:
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
	// bge 0x826fd34c
	if (!ctx.cr0.lt) goto loc_826FD34C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x826FD34C;
	sub_82725E38(ctx, base);
loc_826FD34C:
	// lwz r31,84(r20)
	r31.u64 = REX_LOAD_U32(r20.u32 + 84);
	// rlwinm r28,r30,15,0,16
	r28.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 15) & 0xFFFF8000;
	// li r30,15
	r30.s64 = 15;
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bge cr6,0x826fd3c4
	if (!ctx.cr6.lt) goto loc_826FD3C4;
loc_826FD36C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826fd3c4
	if (ctx.cr6.eq) goto loc_826FD3C4;
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
	// bge 0x826fd3b4
	if (!ctx.cr0.lt) goto loc_826FD3B4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x826FD3B4;
	sub_82725E38(ctx, base);
loc_826FD3B4:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x826fd36c
	if (ctx.cr6.gt) goto loc_826FD36C;
loc_826FD3C4:
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
	// bge 0x826fd3fc
	if (!ctx.cr0.lt) goto loc_826FD3FC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x826FD3FC;
	sub_82725E38(ctx, base);
loc_826FD3FC:
	// lwz r31,84(r20)
	r31.u64 = REX_LOAD_U32(r20.u32 + 84);
	// add r27,r30,r28
	r27.u64 = r30.u64 + r28.u64;
	// li r30,15
	r30.s64 = 15;
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bge cr6,0x826fd474
	if (!ctx.cr6.lt) goto loc_826FD474;
loc_826FD41C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826fd474
	if (ctx.cr6.eq) goto loc_826FD474;
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
	// bge 0x826fd464
	if (!ctx.cr0.lt) goto loc_826FD464;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x826FD464;
	sub_82725E38(ctx, base);
loc_826FD464:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x826fd41c
	if (ctx.cr6.gt) goto loc_826FD41C;
loc_826FD474:
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
	// bge 0x826fd4ac
	if (!ctx.cr0.lt) goto loc_826FD4AC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x826FD4AC;
	sub_82725E38(ctx, base);
loc_826FD4AC:
	// lwz r31,84(r20)
	r31.u64 = REX_LOAD_U32(r20.u32 + 84);
	// rlwinm r28,r30,15,0,16
	r28.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 15) & 0xFFFF8000;
	// li r30,15
	r30.s64 = 15;
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bge cr6,0x826fd524
	if (!ctx.cr6.lt) goto loc_826FD524;
loc_826FD4CC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826fd524
	if (ctx.cr6.eq) goto loc_826FD524;
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
	// bge 0x826fd514
	if (!ctx.cr0.lt) goto loc_826FD514;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x826FD514;
	sub_82725E38(ctx, base);
loc_826FD514:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x826fd4cc
	if (ctx.cr6.gt) goto loc_826FD4CC;
loc_826FD524:
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
	// bge 0x826fd55c
	if (!ctx.cr0.lt) goto loc_826FD55C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x826FD55C;
	sub_82725E38(ctx, base);
loc_826FD55C:
	// add r11,r30,r28
	ctx.r11.u64 = r30.u64 + r28.u64;
	// clrldi r10,r27,32
	ctx.r10.u64 = r27.u64 & 0xFFFFFFFF;
	// clrldi r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// frsp f10,f13
	ctx.f10.f64 = double(float(ctx.f13.f64));
	// addi r11,r11,15504
	ctx.r11.s64 = ctx.r11.s64 + 15504;
	// addi r10,r10,19520
	ctx.r10.s64 = ctx.r10.s64 + 19520;
	// lfs f31,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	f31.f64 = double(temp.f32);
	// lfs f30,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	f30.f64 = double(temp.f32);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fmsubs f8,f10,f31,f30
	ctx.f8.f64 = double(float(std::fma(ctx.f10.f64, f31.f64, -f30.f64)));
	// stfs f8,0(r19)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(r19.u32 + 0, temp.u32);
	// fmsubs f7,f9,f31,f30
	ctx.f7.f64 = double(float(std::fma(ctx.f9.f64, f31.f64, -f30.f64)));
	// stfs f7,0(r18)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(r18.u32 + 0, temp.u32);
	// b 0x826fe964
	goto loc_826FE964;
loc_826FD5B4:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(r30.s32, 1, ctx.xer);
	// bne cr6,0x826fda54
	if (!ctx.cr6.eq) goto loc_826FDA54;
	// stfs f29,0(r22)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r22.u32 + 0, temp.u32);
	// li r30,15
	r30.s64 = 15;
	// stfs f29,0(r21)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r21.u32 + 0, temp.u32);
	// lwz r31,84(r20)
	r31.u64 = REX_LOAD_U32(r20.u32 + 84);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bge cr6,0x826fd634
	if (!ctx.cr6.lt) goto loc_826FD634;
loc_826FD5DC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826fd634
	if (ctx.cr6.eq) goto loc_826FD634;
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
	// bge 0x826fd624
	if (!ctx.cr0.lt) goto loc_826FD624;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x826FD624;
	sub_82725E38(ctx, base);
loc_826FD624:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x826fd5dc
	if (ctx.cr6.gt) goto loc_826FD5DC;
loc_826FD634:
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
	// bge 0x826fd66c
	if (!ctx.cr0.lt) goto loc_826FD66C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x826FD66C;
	sub_82725E38(ctx, base);
loc_826FD66C:
	// lwz r31,84(r20)
	r31.u64 = REX_LOAD_U32(r20.u32 + 84);
	// rlwinm r28,r30,15,0,16
	r28.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 15) & 0xFFFF8000;
	// li r30,15
	r30.s64 = 15;
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bge cr6,0x826fd6e4
	if (!ctx.cr6.lt) goto loc_826FD6E4;
loc_826FD68C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826fd6e4
	if (ctx.cr6.eq) goto loc_826FD6E4;
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
	// bge 0x826fd6d4
	if (!ctx.cr0.lt) goto loc_826FD6D4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x826FD6D4;
	sub_82725E38(ctx, base);
loc_826FD6D4:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x826fd68c
	if (ctx.cr6.gt) goto loc_826FD68C;
loc_826FD6E4:
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
	// bge 0x826fd71c
	if (!ctx.cr0.lt) goto loc_826FD71C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x826FD71C;
	sub_82725E38(ctx, base);
loc_826FD71C:
	// lwz r31,84(r20)
	r31.u64 = REX_LOAD_U32(r20.u32 + 84);
	// add r26,r30,r28
	r26.u64 = r30.u64 + r28.u64;
	// li r30,15
	r30.s64 = 15;
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bge cr6,0x826fd794
	if (!ctx.cr6.lt) goto loc_826FD794;
loc_826FD73C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826fd794
	if (ctx.cr6.eq) goto loc_826FD794;
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
	// bge 0x826fd784
	if (!ctx.cr0.lt) goto loc_826FD784;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x826FD784;
	sub_82725E38(ctx, base);
loc_826FD784:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x826fd73c
	if (ctx.cr6.gt) goto loc_826FD73C;
loc_826FD794:
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
	// bge 0x826fd7cc
	if (!ctx.cr0.lt) goto loc_826FD7CC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x826FD7CC;
	sub_82725E38(ctx, base);
loc_826FD7CC:
	// lwz r31,84(r20)
	r31.u64 = REX_LOAD_U32(r20.u32 + 84);
	// rlwinm r28,r30,15,0,16
	r28.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 15) & 0xFFFF8000;
	// li r30,15
	r30.s64 = 15;
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bge cr6,0x826fd844
	if (!ctx.cr6.lt) goto loc_826FD844;
loc_826FD7EC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826fd844
	if (ctx.cr6.eq) goto loc_826FD844;
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
	// bge 0x826fd834
	if (!ctx.cr0.lt) goto loc_826FD834;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x826FD834;
	sub_82725E38(ctx, base);
loc_826FD834:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x826fd7ec
	if (ctx.cr6.gt) goto loc_826FD7EC;
loc_826FD844:
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
	// bge 0x826fd87c
	if (!ctx.cr0.lt) goto loc_826FD87C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x826FD87C;
	sub_82725E38(ctx, base);
loc_826FD87C:
	// lwz r31,84(r20)
	r31.u64 = REX_LOAD_U32(r20.u32 + 84);
	// add r27,r30,r28
	r27.u64 = r30.u64 + r28.u64;
	// li r30,15
	r30.s64 = 15;
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bge cr6,0x826fd8f4
	if (!ctx.cr6.lt) goto loc_826FD8F4;
loc_826FD89C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826fd8f4
	if (ctx.cr6.eq) goto loc_826FD8F4;
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
	// bge 0x826fd8e4
	if (!ctx.cr0.lt) goto loc_826FD8E4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x826FD8E4;
	sub_82725E38(ctx, base);
loc_826FD8E4:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x826fd89c
	if (ctx.cr6.gt) goto loc_826FD89C;
loc_826FD8F4:
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
	// bge 0x826fd92c
	if (!ctx.cr0.lt) goto loc_826FD92C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x826FD92C;
	sub_82725E38(ctx, base);
loc_826FD92C:
	// lwz r31,84(r20)
	r31.u64 = REX_LOAD_U32(r20.u32 + 84);
	// rlwinm r28,r30,15,0,16
	r28.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 15) & 0xFFFF8000;
	// li r30,15
	r30.s64 = 15;
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bge cr6,0x826fd9a4
	if (!ctx.cr6.lt) goto loc_826FD9A4;
loc_826FD94C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826fd9a4
	if (ctx.cr6.eq) goto loc_826FD9A4;
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
	// bge 0x826fd994
	if (!ctx.cr0.lt) goto loc_826FD994;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x826FD994;
	sub_82725E38(ctx, base);
loc_826FD994:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x826fd94c
	if (ctx.cr6.gt) goto loc_826FD94C;
loc_826FD9A4:
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
	// bge 0x826fd9dc
	if (!ctx.cr0.lt) goto loc_826FD9DC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x826FD9DC;
	sub_82725E38(ctx, base);
loc_826FD9DC:
	// clrldi r11,r26,32
	ctx.r11.u64 = r26.u64 & 0xFFFFFFFF;
	// clrldi r9,r27,32
	ctx.r9.u64 = r27.u64 & 0xFFFFFFFF;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// add r10,r30,r28
	ctx.r10.u64 = r30.u64 + r28.u64;
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// clrldi r8,r10,32
	ctx.r8.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r11,r11,15504
	ctx.r11.s64 = ctx.r11.s64 + 15504;
	// addi r10,r10,19520
	ctx.r10.s64 = ctx.r10.s64 + 19520;
	// lfs f31,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	f31.f64 = double(temp.f32);
	// lfs f30,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	f30.f64 = double(temp.f32);
	// lfd f12,88(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// std r8,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f7,f11
	ctx.f7.f64 = double(float(ctx.f11.f64));
	// frsp f8,f13
	ctx.f8.f64 = double(float(ctx.f13.f64));
	// frsp f6,f9
	ctx.f6.f64 = double(float(ctx.f9.f64));
	// fmsubs f4,f7,f31,f30
	ctx.f4.f64 = double(float(std::fma(ctx.f7.f64, f31.f64, -f30.f64)));
	// stfs f4,0(r16)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(r16.u32 + 0, temp.u32);
	// stfs f4,0(r17)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(r17.u32 + 0, temp.u32);
	// fmsubs f5,f8,f31,f30
	ctx.f5.f64 = double(float(std::fma(ctx.f8.f64, f31.f64, -f30.f64)));
	// stfs f5,0(r19)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(r19.u32 + 0, temp.u32);
	// fmsubs f3,f6,f31,f30
	ctx.f3.f64 = double(float(std::fma(ctx.f6.f64, f31.f64, -f30.f64)));
	// stfs f3,0(r18)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(r18.u32 + 0, temp.u32);
	// b 0x826fe964
	goto loc_826FE964;
loc_826FDA54:
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(r30.s32, 2, ctx.xer);
	// li r30,15
	r30.s64 = 15;
	// bne cr6,0x826fe06c
	if (!ctx.cr6.eq) goto loc_826FE06C;
	// stfs f29,0(r22)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r22.u32 + 0, temp.u32);
	// stfs f29,0(r21)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r21.u32 + 0, temp.u32);
	// lwz r31,84(r20)
	r31.u64 = REX_LOAD_U32(r20.u32 + 84);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bge cr6,0x826fdad4
	if (!ctx.cr6.lt) goto loc_826FDAD4;
loc_826FDA7C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826fdad4
	if (ctx.cr6.eq) goto loc_826FDAD4;
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
	// bge 0x826fdac4
	if (!ctx.cr0.lt) goto loc_826FDAC4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x826FDAC4;
	sub_82725E38(ctx, base);
loc_826FDAC4:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x826fda7c
	if (ctx.cr6.gt) goto loc_826FDA7C;
loc_826FDAD4:
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
	// bge 0x826fdb0c
	if (!ctx.cr0.lt) goto loc_826FDB0C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x826FDB0C;
	sub_82725E38(ctx, base);
loc_826FDB0C:
	// lwz r31,84(r20)
	r31.u64 = REX_LOAD_U32(r20.u32 + 84);
	// rlwinm r28,r30,15,0,16
	r28.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 15) & 0xFFFF8000;
	// li r30,15
	r30.s64 = 15;
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bge cr6,0x826fdb84
	if (!ctx.cr6.lt) goto loc_826FDB84;
loc_826FDB2C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826fdb84
	if (ctx.cr6.eq) goto loc_826FDB84;
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
	// bge 0x826fdb74
	if (!ctx.cr0.lt) goto loc_826FDB74;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x826FDB74;
	sub_82725E38(ctx, base);
loc_826FDB74:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x826fdb2c
	if (ctx.cr6.gt) goto loc_826FDB2C;
loc_826FDB84:
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
	// bge 0x826fdbbc
	if (!ctx.cr0.lt) goto loc_826FDBBC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x826FDBBC;
	sub_82725E38(ctx, base);
loc_826FDBBC:
	// lwz r31,84(r20)
	r31.u64 = REX_LOAD_U32(r20.u32 + 84);
	// add r25,r30,r28
	r25.u64 = r30.u64 + r28.u64;
	// li r30,15
	r30.s64 = 15;
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bge cr6,0x826fdc34
	if (!ctx.cr6.lt) goto loc_826FDC34;
loc_826FDBDC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826fdc34
	if (ctx.cr6.eq) goto loc_826FDC34;
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
	// bge 0x826fdc24
	if (!ctx.cr0.lt) goto loc_826FDC24;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x826FDC24;
	sub_82725E38(ctx, base);
loc_826FDC24:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x826fdbdc
	if (ctx.cr6.gt) goto loc_826FDBDC;
loc_826FDC34:
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
	// bge 0x826fdc6c
	if (!ctx.cr0.lt) goto loc_826FDC6C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x826FDC6C;
	sub_82725E38(ctx, base);
loc_826FDC6C:
	// lwz r31,84(r20)
	r31.u64 = REX_LOAD_U32(r20.u32 + 84);
	// rlwinm r28,r30,15,0,16
	r28.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 15) & 0xFFFF8000;
	// li r30,15
	r30.s64 = 15;
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bge cr6,0x826fdce4
	if (!ctx.cr6.lt) goto loc_826FDCE4;
loc_826FDC8C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826fdce4
	if (ctx.cr6.eq) goto loc_826FDCE4;
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
	// bge 0x826fdcd4
	if (!ctx.cr0.lt) goto loc_826FDCD4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x826FDCD4;
	sub_82725E38(ctx, base);
loc_826FDCD4:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x826fdc8c
	if (ctx.cr6.gt) goto loc_826FDC8C;
loc_826FDCE4:
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
	// bge 0x826fdd1c
	if (!ctx.cr0.lt) goto loc_826FDD1C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x826FDD1C;
	sub_82725E38(ctx, base);
loc_826FDD1C:
	// lwz r31,84(r20)
	r31.u64 = REX_LOAD_U32(r20.u32 + 84);
	// add r26,r30,r28
	r26.u64 = r30.u64 + r28.u64;
	// li r30,15
	r30.s64 = 15;
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bge cr6,0x826fdd94
	if (!ctx.cr6.lt) goto loc_826FDD94;
loc_826FDD3C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826fdd94
	if (ctx.cr6.eq) goto loc_826FDD94;
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
	// bge 0x826fdd84
	if (!ctx.cr0.lt) goto loc_826FDD84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x826FDD84;
	sub_82725E38(ctx, base);
loc_826FDD84:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x826fdd3c
	if (ctx.cr6.gt) goto loc_826FDD3C;
loc_826FDD94:
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
	// bge 0x826fddcc
	if (!ctx.cr0.lt) goto loc_826FDDCC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x826FDDCC;
	sub_82725E38(ctx, base);
loc_826FDDCC:
	// lwz r31,84(r20)
	r31.u64 = REX_LOAD_U32(r20.u32 + 84);
	// rlwinm r28,r30,15,0,16
	r28.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 15) & 0xFFFF8000;
	// li r30,15
	r30.s64 = 15;
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bge cr6,0x826fde44
	if (!ctx.cr6.lt) goto loc_826FDE44;
loc_826FDDEC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826fde44
	if (ctx.cr6.eq) goto loc_826FDE44;
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
	// bge 0x826fde34
	if (!ctx.cr0.lt) goto loc_826FDE34;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x826FDE34;
	sub_82725E38(ctx, base);
loc_826FDE34:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x826fddec
	if (ctx.cr6.gt) goto loc_826FDDEC;
loc_826FDE44:
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
	// bge 0x826fde7c
	if (!ctx.cr0.lt) goto loc_826FDE7C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x826FDE7C;
	sub_82725E38(ctx, base);
loc_826FDE7C:
	// lwz r31,84(r20)
	r31.u64 = REX_LOAD_U32(r20.u32 + 84);
	// add r27,r30,r28
	r27.u64 = r30.u64 + r28.u64;
	// li r30,15
	r30.s64 = 15;
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bge cr6,0x826fdef4
	if (!ctx.cr6.lt) goto loc_826FDEF4;
loc_826FDE9C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826fdef4
	if (ctx.cr6.eq) goto loc_826FDEF4;
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
	// bge 0x826fdee4
	if (!ctx.cr0.lt) goto loc_826FDEE4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x826FDEE4;
	sub_82725E38(ctx, base);
loc_826FDEE4:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x826fde9c
	if (ctx.cr6.gt) goto loc_826FDE9C;
loc_826FDEF4:
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
	// bge 0x826fdf2c
	if (!ctx.cr0.lt) goto loc_826FDF2C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x826FDF2C;
	sub_82725E38(ctx, base);
loc_826FDF2C:
	// lwz r31,84(r20)
	r31.u64 = REX_LOAD_U32(r20.u32 + 84);
	// rlwinm r28,r30,15,0,16
	r28.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 15) & 0xFFFF8000;
	// li r30,15
	r30.s64 = 15;
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bge cr6,0x826fdfa4
	if (!ctx.cr6.lt) goto loc_826FDFA4;
loc_826FDF4C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826fdfa4
	if (ctx.cr6.eq) goto loc_826FDFA4;
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
	// bge 0x826fdf94
	if (!ctx.cr0.lt) goto loc_826FDF94;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x826FDF94;
	sub_82725E38(ctx, base);
loc_826FDF94:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x826fdf4c
	if (ctx.cr6.gt) goto loc_826FDF4C;
loc_826FDFA4:
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
	// bge 0x826fdfdc
	if (!ctx.cr0.lt) goto loc_826FDFDC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x826FDFDC;
	sub_82725E38(ctx, base);
loc_826FDFDC:
	// clrldi r10,r26,32
	ctx.r10.u64 = r26.u64 & 0xFFFFFFFF;
	// clrldi r9,r27,32
	ctx.r9.u64 = r27.u64 & 0xFFFFFFFF;
	// std r10,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f11,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// std r9,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// lfd f9,104(r1)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// add r8,r30,r28
	ctx.r8.u64 = r30.u64 + r28.u64;
	// clrldi r11,r25,32
	ctx.r11.u64 = r25.u64 & 0xFFFFFFFF;
	// clrldi r7,r8,32
	ctx.r7.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r7,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// lfd f0,88(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f8,f11
	ctx.f8.f64 = double(ctx.f11.s64);
	// fcfid f7,f9
	ctx.f7.f64 = double(ctx.f9.s64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// frsp f5,f10
	ctx.f5.f64 = double(float(ctx.f10.f64));
	// addi r11,r11,15504
	ctx.r11.s64 = ctx.r11.s64 + 15504;
	// addi r10,r10,19520
	ctx.r10.s64 = ctx.r10.s64 + 19520;
	// lfs f31,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	f31.f64 = double(temp.f32);
	// lfs f30,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	f30.f64 = double(temp.f32);
	// frsp f4,f8
	ctx.f4.f64 = double(float(ctx.f8.f64));
	// frsp f3,f7
	ctx.f3.f64 = double(float(ctx.f7.f64));
	// frsp f6,f13
	ctx.f6.f64 = double(float(ctx.f13.f64));
	// fmsubs f1,f5,f31,f30
	ctx.f1.f64 = double(float(std::fma(ctx.f5.f64, f31.f64, -f30.f64)));
	// stfs f1,0(r17)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r17.u32 + 0, temp.u32);
	// fmsubs f0,f4,f31,f30
	ctx.f0.f64 = double(float(std::fma(ctx.f4.f64, f31.f64, -f30.f64)));
	// stfs f0,0(r19)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r19.u32 + 0, temp.u32);
	// fmsubs f13,f3,f31,f30
	ctx.f13.f64 = double(float(std::fma(ctx.f3.f64, f31.f64, -f30.f64)));
	// stfs f13,0(r16)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r16.u32 + 0, temp.u32);
	// fmsubs f2,f6,f31,f30
	ctx.f2.f64 = double(float(std::fma(ctx.f6.f64, f31.f64, -f30.f64)));
	// stfs f2,0(r18)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(r18.u32 + 0, temp.u32);
	// b 0x826fe964
	goto loc_826FE964;
loc_826FE06C:
	// lwz r31,84(r20)
	r31.u64 = REX_LOAD_U32(r20.u32 + 84);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bge cr6,0x826fe0d8
	if (!ctx.cr6.lt) goto loc_826FE0D8;
loc_826FE080:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826fe0d8
	if (ctx.cr6.eq) goto loc_826FE0D8;
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
	// bge 0x826fe0c8
	if (!ctx.cr0.lt) goto loc_826FE0C8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x826FE0C8;
	sub_82725E38(ctx, base);
loc_826FE0C8:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x826fe080
	if (ctx.cr6.gt) goto loc_826FE080;
loc_826FE0D8:
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
	// bge 0x826fe110
	if (!ctx.cr0.lt) goto loc_826FE110;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x826FE110;
	sub_82725E38(ctx, base);
loc_826FE110:
	// lwz r31,84(r20)
	r31.u64 = REX_LOAD_U32(r20.u32 + 84);
	// rlwinm r28,r30,15,0,16
	r28.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 15) & 0xFFFF8000;
	// li r30,15
	r30.s64 = 15;
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bge cr6,0x826fe188
	if (!ctx.cr6.lt) goto loc_826FE188;
loc_826FE130:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826fe188
	if (ctx.cr6.eq) goto loc_826FE188;
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
	// bge 0x826fe178
	if (!ctx.cr0.lt) goto loc_826FE178;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x826FE178;
	sub_82725E38(ctx, base);
loc_826FE178:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x826fe130
	if (ctx.cr6.gt) goto loc_826FE130;
loc_826FE188:
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
	// bge 0x826fe1c0
	if (!ctx.cr0.lt) goto loc_826FE1C0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x826FE1C0;
	sub_82725E38(ctx, base);
loc_826FE1C0:
	// lwz r31,84(r20)
	r31.u64 = REX_LOAD_U32(r20.u32 + 84);
	// add r23,r30,r28
	r23.u64 = r30.u64 + r28.u64;
	// li r30,15
	r30.s64 = 15;
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bge cr6,0x826fe238
	if (!ctx.cr6.lt) goto loc_826FE238;
loc_826FE1E0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826fe238
	if (ctx.cr6.eq) goto loc_826FE238;
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
	// bge 0x826fe228
	if (!ctx.cr0.lt) goto loc_826FE228;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x826FE228;
	sub_82725E38(ctx, base);
loc_826FE228:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x826fe1e0
	if (ctx.cr6.gt) goto loc_826FE1E0;
loc_826FE238:
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
	// bge 0x826fe270
	if (!ctx.cr0.lt) goto loc_826FE270;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x826FE270;
	sub_82725E38(ctx, base);
loc_826FE270:
	// lwz r31,84(r20)
	r31.u64 = REX_LOAD_U32(r20.u32 + 84);
	// rlwinm r28,r30,15,0,16
	r28.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 15) & 0xFFFF8000;
	// li r30,15
	r30.s64 = 15;
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bge cr6,0x826fe2e8
	if (!ctx.cr6.lt) goto loc_826FE2E8;
loc_826FE290:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826fe2e8
	if (ctx.cr6.eq) goto loc_826FE2E8;
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
	// bge 0x826fe2d8
	if (!ctx.cr0.lt) goto loc_826FE2D8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x826FE2D8;
	sub_82725E38(ctx, base);
loc_826FE2D8:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x826fe290
	if (ctx.cr6.gt) goto loc_826FE290;
loc_826FE2E8:
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
	// bge 0x826fe320
	if (!ctx.cr0.lt) goto loc_826FE320;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x826FE320;
	sub_82725E38(ctx, base);
loc_826FE320:
	// lwz r31,84(r20)
	r31.u64 = REX_LOAD_U32(r20.u32 + 84);
	// add r24,r30,r28
	r24.u64 = r30.u64 + r28.u64;
	// li r30,15
	r30.s64 = 15;
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bge cr6,0x826fe398
	if (!ctx.cr6.lt) goto loc_826FE398;
loc_826FE340:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826fe398
	if (ctx.cr6.eq) goto loc_826FE398;
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
	// bge 0x826fe388
	if (!ctx.cr0.lt) goto loc_826FE388;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x826FE388;
	sub_82725E38(ctx, base);
loc_826FE388:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x826fe340
	if (ctx.cr6.gt) goto loc_826FE340;
loc_826FE398:
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
	// bge 0x826fe3d0
	if (!ctx.cr0.lt) goto loc_826FE3D0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x826FE3D0;
	sub_82725E38(ctx, base);
loc_826FE3D0:
	// lwz r31,84(r20)
	r31.u64 = REX_LOAD_U32(r20.u32 + 84);
	// rlwinm r28,r30,15,0,16
	r28.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 15) & 0xFFFF8000;
	// li r30,15
	r30.s64 = 15;
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bge cr6,0x826fe448
	if (!ctx.cr6.lt) goto loc_826FE448;
loc_826FE3F0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826fe448
	if (ctx.cr6.eq) goto loc_826FE448;
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
	// bge 0x826fe438
	if (!ctx.cr0.lt) goto loc_826FE438;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x826FE438;
	sub_82725E38(ctx, base);
loc_826FE438:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x826fe3f0
	if (ctx.cr6.gt) goto loc_826FE3F0;
loc_826FE448:
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
	// bge 0x826fe480
	if (!ctx.cr0.lt) goto loc_826FE480;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x826FE480;
	sub_82725E38(ctx, base);
loc_826FE480:
	// lwz r31,84(r20)
	r31.u64 = REX_LOAD_U32(r20.u32 + 84);
	// add r25,r30,r28
	r25.u64 = r30.u64 + r28.u64;
	// li r30,15
	r30.s64 = 15;
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bge cr6,0x826fe4f8
	if (!ctx.cr6.lt) goto loc_826FE4F8;
loc_826FE4A0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826fe4f8
	if (ctx.cr6.eq) goto loc_826FE4F8;
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
	// bge 0x826fe4e8
	if (!ctx.cr0.lt) goto loc_826FE4E8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x826FE4E8;
	sub_82725E38(ctx, base);
loc_826FE4E8:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x826fe4a0
	if (ctx.cr6.gt) goto loc_826FE4A0;
loc_826FE4F8:
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
	// bge 0x826fe530
	if (!ctx.cr0.lt) goto loc_826FE530;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x826FE530;
	sub_82725E38(ctx, base);
loc_826FE530:
	// lwz r31,84(r20)
	r31.u64 = REX_LOAD_U32(r20.u32 + 84);
	// rlwinm r28,r30,15,0,16
	r28.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 15) & 0xFFFF8000;
	// li r30,15
	r30.s64 = 15;
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bge cr6,0x826fe5a8
	if (!ctx.cr6.lt) goto loc_826FE5A8;
loc_826FE550:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826fe5a8
	if (ctx.cr6.eq) goto loc_826FE5A8;
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
	// bge 0x826fe598
	if (!ctx.cr0.lt) goto loc_826FE598;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x826FE598;
	sub_82725E38(ctx, base);
loc_826FE598:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x826fe550
	if (ctx.cr6.gt) goto loc_826FE550;
loc_826FE5A8:
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
	// bge 0x826fe5e0
	if (!ctx.cr0.lt) goto loc_826FE5E0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x826FE5E0;
	sub_82725E38(ctx, base);
loc_826FE5E0:
	// lwz r31,84(r20)
	r31.u64 = REX_LOAD_U32(r20.u32 + 84);
	// add r26,r30,r28
	r26.u64 = r30.u64 + r28.u64;
	// li r30,15
	r30.s64 = 15;
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bge cr6,0x826fe658
	if (!ctx.cr6.lt) goto loc_826FE658;
loc_826FE600:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826fe658
	if (ctx.cr6.eq) goto loc_826FE658;
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
	// bge 0x826fe648
	if (!ctx.cr0.lt) goto loc_826FE648;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x826FE648;
	sub_82725E38(ctx, base);
loc_826FE648:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x826fe600
	if (ctx.cr6.gt) goto loc_826FE600;
loc_826FE658:
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
	// bge 0x826fe690
	if (!ctx.cr0.lt) goto loc_826FE690;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x826FE690;
	sub_82725E38(ctx, base);
loc_826FE690:
	// lwz r31,84(r20)
	r31.u64 = REX_LOAD_U32(r20.u32 + 84);
	// rlwinm r28,r30,15,0,16
	r28.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 15) & 0xFFFF8000;
	// li r30,15
	r30.s64 = 15;
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bge cr6,0x826fe708
	if (!ctx.cr6.lt) goto loc_826FE708;
loc_826FE6B0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826fe708
	if (ctx.cr6.eq) goto loc_826FE708;
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
	// bge 0x826fe6f8
	if (!ctx.cr0.lt) goto loc_826FE6F8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x826FE6F8;
	sub_82725E38(ctx, base);
loc_826FE6F8:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x826fe6b0
	if (ctx.cr6.gt) goto loc_826FE6B0;
loc_826FE708:
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
	// bge 0x826fe740
	if (!ctx.cr0.lt) goto loc_826FE740;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x826FE740;
	sub_82725E38(ctx, base);
loc_826FE740:
	// lwz r31,84(r20)
	r31.u64 = REX_LOAD_U32(r20.u32 + 84);
	// add r27,r30,r28
	r27.u64 = r30.u64 + r28.u64;
	// li r30,15
	r30.s64 = 15;
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bge cr6,0x826fe7b8
	if (!ctx.cr6.lt) goto loc_826FE7B8;
loc_826FE760:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826fe7b8
	if (ctx.cr6.eq) goto loc_826FE7B8;
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
	// bge 0x826fe7a8
	if (!ctx.cr0.lt) goto loc_826FE7A8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x826FE7A8;
	sub_82725E38(ctx, base);
loc_826FE7A8:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x826fe760
	if (ctx.cr6.gt) goto loc_826FE760;
loc_826FE7B8:
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
	// bge 0x826fe7f0
	if (!ctx.cr0.lt) goto loc_826FE7F0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x826FE7F0;
	sub_82725E38(ctx, base);
loc_826FE7F0:
	// lwz r31,84(r20)
	r31.u64 = REX_LOAD_U32(r20.u32 + 84);
	// rlwinm r28,r30,15,0,16
	r28.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 15) & 0xFFFF8000;
	// li r30,15
	r30.s64 = 15;
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bge cr6,0x826fe868
	if (!ctx.cr6.lt) goto loc_826FE868;
loc_826FE810:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826fe868
	if (ctx.cr6.eq) goto loc_826FE868;
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
	// bge 0x826fe858
	if (!ctx.cr0.lt) goto loc_826FE858;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x826FE858;
	sub_82725E38(ctx, base);
loc_826FE858:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x826fe810
	if (ctx.cr6.gt) goto loc_826FE810;
loc_826FE868:
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
	// bge 0x826fe8a0
	if (!ctx.cr0.lt) goto loc_826FE8A0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x826FE8A0;
	sub_82725E38(ctx, base);
loc_826FE8A0:
	// clrldi r10,r27,32
	ctx.r10.u64 = r27.u64 & 0xFFFFFFFF;
	// add r11,r30,r28
	ctx.r11.u64 = r30.u64 + r28.u64;
	// std r10,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// clrldi r7,r24,32
	ctx.r7.u64 = r24.u64 & 0xFFFFFFFF;
	// clrldi r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r25,32
	ctx.r6.u64 = r25.u64 & 0xFFFFFFFF;
	// std r7,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// lfd f8,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// clrldi r5,r26,32
	ctx.r5.u64 = r26.u64 & 0xFFFFFFFF;
	// std r6,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f6,80(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// clrldi r8,r23,32
	ctx.r8.u64 = r23.u64 & 0xFFFFFFFF;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// std r8,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// lfd f10,96(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f7,f10
	ctx.f7.f64 = double(ctx.f10.s64);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lfd f0,104(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// std r9,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// fcfid f5,f8
	ctx.f5.f64 = double(ctx.f8.s64);
	// addi r11,r11,15504
	ctx.r11.s64 = ctx.r11.s64 + 15504;
	// fcfid f4,f6
	ctx.f4.f64 = double(ctx.f6.s64);
	// addi r10,r10,19520
	ctx.r10.s64 = ctx.r10.s64 + 19520;
	// fcfid f9,f0
	ctx.f9.f64 = double(ctx.f0.s64);
	// frsp f0,f7
	ctx.f0.f64 = double(float(ctx.f7.f64));
	// lfs f31,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	f31.f64 = double(temp.f32);
	// lfs f30,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	f30.f64 = double(temp.f32);
	// frsp f1,f9
	ctx.f1.f64 = double(float(ctx.f9.f64));
	// fmsubs f8,f0,f31,f30
	ctx.f8.f64 = double(float(std::fma(ctx.f0.f64, f31.f64, -f30.f64)));
	// stfs f8,0(r17)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(r17.u32 + 0, temp.u32);
	// lfd f13,104(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// std r5,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r5.u64);
	// fcfid f3,f13
	ctx.f3.f64 = double(ctx.f13.s64);
	// frsp f13,f5
	ctx.f13.f64 = double(float(ctx.f5.f64));
	// fmsubs f9,f1,f31,f30
	ctx.f9.f64 = double(float(std::fma(ctx.f1.f64, f31.f64, -f30.f64)));
	// fmsubs f7,f13,f31,f30
	ctx.f7.f64 = double(float(std::fma(ctx.f13.f64, f31.f64, -f30.f64)));
	// stfs f7,0(r22)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(r22.u32 + 0, temp.u32);
	// lfd f12,104(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f12,f4
	ctx.f12.f64 = double(float(ctx.f4.f64));
	// frsp f2,f11
	ctx.f2.f64 = double(float(ctx.f11.f64));
	// frsp f11,f3
	ctx.f11.f64 = double(float(ctx.f3.f64));
	// fmsubs f6,f12,f31,f30
	ctx.f6.f64 = double(float(std::fma(ctx.f12.f64, f31.f64, -f30.f64)));
	// stfs f6,0(r19)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(r19.u32 + 0, temp.u32);
	// fmsubs f10,f2,f31,f30
	ctx.f10.f64 = double(float(std::fma(ctx.f2.f64, f31.f64, -f30.f64)));
	// stfs f10,0(r21)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r21.u32 + 0, temp.u32);
	// stfs f9,0(r16)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(r16.u32 + 0, temp.u32);
	// fmsubs f5,f11,f31,f30
	ctx.f5.f64 = double(float(std::fma(ctx.f11.f64, f31.f64, -f30.f64)));
	// stfs f5,0(r18)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(r18.u32 + 0, temp.u32);
loc_826FE964:
	// lwz r31,84(r20)
	r31.u64 = REX_LOAD_U32(r20.u32 + 84);
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
	// bge cr6,0x826fe9d8
	if (!ctx.cr6.lt) goto loc_826FE9D8;
loc_826FE980:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826fe9d8
	if (ctx.cr6.eq) goto loc_826FE9D8;
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
	// bge 0x826fe9c8
	if (!ctx.cr0.lt) goto loc_826FE9C8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x826FE9C8;
	sub_82725E38(ctx, base);
loc_826FE9C8:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x826fe980
	if (ctx.cr6.gt) goto loc_826FE980;
loc_826FE9D8:
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
	// bge 0x826fea10
	if (!ctx.cr0.lt) goto loc_826FEA10;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x826FEA10;
	sub_82725E38(ctx, base);
loc_826FEA10:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x826feb98
	if (ctx.cr6.eq) goto loc_826FEB98;
	// lwz r31,84(r20)
	r31.u64 = REX_LOAD_U32(r20.u32 + 84);
	// li r30,15
	r30.s64 = 15;
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bge cr6,0x826fea8c
	if (!ctx.cr6.lt) goto loc_826FEA8C;
loc_826FEA34:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826fea8c
	if (ctx.cr6.eq) goto loc_826FEA8C;
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
	// bge 0x826fea7c
	if (!ctx.cr0.lt) goto loc_826FEA7C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x826FEA7C;
	sub_82725E38(ctx, base);
loc_826FEA7C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x826fea34
	if (ctx.cr6.gt) goto loc_826FEA34;
loc_826FEA8C:
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
	// bge 0x826feac4
	if (!ctx.cr0.lt) goto loc_826FEAC4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x826FEAC4;
	sub_82725E38(ctx, base);
loc_826FEAC4:
	// lwz r31,84(r20)
	r31.u64 = REX_LOAD_U32(r20.u32 + 84);
	// rlwinm r28,r30,15,0,16
	r28.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 15) & 0xFFFF8000;
	// li r30,15
	r30.s64 = 15;
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bge cr6,0x826feb3c
	if (!ctx.cr6.lt) goto loc_826FEB3C;
loc_826FEAE4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826feb3c
	if (ctx.cr6.eq) goto loc_826FEB3C;
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
	// bge 0x826feb2c
	if (!ctx.cr0.lt) goto loc_826FEB2C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x826FEB2C;
	sub_82725E38(ctx, base);
loc_826FEB2C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x826feae4
	if (ctx.cr6.gt) goto loc_826FEAE4;
loc_826FEB3C:
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
	// bge 0x826feb74
	if (!ctx.cr0.lt) goto loc_826FEB74;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x826FEB74;
	sub_82725E38(ctx, base);
loc_826FEB74:
	// add r11,r30,r28
	ctx.r11.u64 = r30.u64 + r28.u64;
	// clrldi r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r10,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmsubs f11,f12,f31,f30
	ctx.f11.f64 = double(float(std::fma(ctx.f12.f64, f31.f64, -f30.f64)));
	// stfs f11,0(r15)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r15.u32 + 0, temp.u32);
	// b 0x826feb9c
	goto loc_826FEB9C;
loc_826FEB98:
	// stfs f28,0(r15)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f28.f64);
	REX_STORE_U32(r15.u32 + 0, temp.u32);
loc_826FEB9C:
	// lwz r11,84(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 84);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x826febc8
	if (!ctx.cr6.eq) goto loc_826FEBC8;
	// lfs f0,0(r17)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r17.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, f29.f64);
	// blt cr6,0x826febc8
	if (ctx.cr6.lt) goto loc_826FEBC8;
	// lfs f0,0(r16)
	temp.u32 = REX_LOAD_U32(r16.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, f29.f64);
	// bge cr6,0x826febcc
	if (!ctx.cr6.lt) goto loc_826FEBCC;
loc_826FEBC8:
	// li r3,4
	ctx.r3.s64 = 4;
loc_826FEBCC:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-144
	ctx.r12.s64 = ctx.r1.s64 + -144;
	// bl 0x826a2cf4
	ctx.lr = 0x826FEBD8;
	// b 0x826a1cd4
	return;
}

DEFINE_REX_FUNC(sub_827BB930) {
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
	// bl 0x827b83c0
	ctx.lr = 0x827BB980;
	sub_827B83C0(ctx, base);
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

DEFINE_REX_FUNC(sub_827BC420) {
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
	// bl 0x826a1cac
	ctx.lr = 0x827BC428;
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
	// bne cr6,0x827bc608
	if (!ctx.cr6.eq) goto loc_827BC608;
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
loc_827BC608:
	// cmpwi cr6,r6,8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 8, ctx.xer);
	// blt cr6,0x827bc678
	if (ctx.cr6.lt) goto loc_827BC678;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r3,8
	ctx.r8.s64 = ctx.r3.s64 + 8;
	// addi r30,r1,112
	r30.s64 = ctx.r1.s64 + 112;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x827bc678
	if (!ctx.cr6.gt) goto loc_827BC678;
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
loc_827BC644:
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
	// sth r30,48(r11)
	REX_STORE_U16(ctx.r11.u32 + 48, r30.u16);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// sthu r8,96(r11)
	ea = 96 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x827bc644
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827BC644;
loc_827BC678:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827b9620
	ctx.lr = 0x827BC680;
	sub_827B9620(ctx, base);
	// addi r1,r1,928
	ctx.r1.s64 = ctx.r1.s64 + 928;
	// b 0x826a1cfc
	return;
}

