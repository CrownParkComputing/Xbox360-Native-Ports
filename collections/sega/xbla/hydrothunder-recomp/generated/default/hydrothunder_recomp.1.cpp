#include "hydrothunder_funcs.1.h"

DEFINE_REX_FUNC(sub_82120018) {
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
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,-11136(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -11136);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82120048
	if (ctx.cr6.eq) goto loc_82120048;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82120048;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82120048:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8212005C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8269cbf8
	ctx.lr = 0x82120074;
	sub_8269CBF8(ctx, base);
}

DEFINE_REX_FUNC(sub_82128350) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82128358;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32106
	r30.s64 = -2104098816;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r3,6072(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6072);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8212837C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8212a538
	ctx.lr = 0x82128384;
	sub_8212A538(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-24580
	ctx.r4.s64 = ctx.r11.s64 + -24580;
	// bl 0x82120600
	ctx.lr = 0x82128394;
	sub_82120600(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-26856
	ctx.r4.s64 = ctx.r11.s64 + -26856;
	// bl 0x82120600
	ctx.lr = 0x821283A4;
	sub_82120600(ctx, base);
	// lwz r3,6072(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6072);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821283C4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x821283D4;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82120ac0
	ctx.lr = 0x821283E4;
	sub_82120AC0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82128444
	if (ctx.cr6.eq) goto loc_82128444;
	// addi r29,r29,-4
	r29.s64 = r29.s64 + -4;
loc_821283F8:
	// addi r4,r31,8
	ctx.r4.s64 = r31.s64 + 8;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82123408
	ctx.lr = 0x82128404;
	sub_82123408(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82129138
	ctx.lr = 0x82128410;
	sub_82129138(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82128424
	if (ctx.cr0.eq) goto loc_82128424;
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// or r11,r28,r11
	ctx.r11.u64 = r28.u64 | ctx.r11.u64;
	// stw r11,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
loc_82128424:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82120ac0
	ctx.lr = 0x82128434;
	sub_82120AC0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821283f8
	if (!ctx.cr6.eq) goto loc_821283F8;
loc_82128444:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8212a5b0
	ctx.lr = 0x8212844C;
	sub_8212A5B0(ctx, base);
	// lwz r3,6072(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6072);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82128460;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82131068) {
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
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,6048(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6048);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82131098;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// addi r4,r31,268
	ctx.r4.s64 = r31.s64 + 268;
	// bne cr6,0x821310a8
	if (!ctx.cr6.eq) goto loc_821310A8;
	// li r4,0
	ctx.r4.s64 = 0;
loc_821310A8:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6068(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6068);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821310C0;
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

DEFINE_REX_FUNC(sub_82134668) {
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
	// lfs f0,196(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 196);
	ctx.f0.f64 = double(temp.f32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f13,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f12,200(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 200);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,12(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmuls f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fctiw f10,f13
	ctx.f10.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvtsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// fctiw f13,f11
	ctx.f13.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvtsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f13,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// fadds f13,f12,f11
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// fctiw f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvtsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// fctiw f0,f13
	ctx.f0.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvtsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r10,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r9,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// bl 0x822c44e8
	ctx.lr = 0x82134700;
	sub_822C44E8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,228(r31)
	REX_STORE_U32(r31.u32 + 228, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r11,232(r31)
	REX_STORE_U32(r31.u32 + 232, ctx.r11.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// stw r11,236(r31)
	REX_STORE_U32(r31.u32 + 236, ctx.r11.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// stw r11,240(r31)
	REX_STORE_U32(r31.u32 + 240, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_8213BE90) {
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
	// addi r11,r11,-17768
	ctx.r11.s64 = ctx.r11.s64 + -17768;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x8213bebc
	if (ctx.cr0.eq) goto loc_8213BEBC;
	// bl 0x8269ce98
	ctx.lr = 0x8213BEBC;
	sub_8269CE98(ctx, base);
loc_8213BEBC:
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

DEFINE_REX_FUNC(sub_8213EA30) {
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
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,6048(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6048);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8213EA60;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r3,6088(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6088);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8213EA7C;
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

DEFINE_REX_FUNC(sub_82142008) {
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
	// lwz r3,44(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// li r31,0
	r31.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82142030;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8214204c
	if (ctx.cr0.eq) goto loc_8214204C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82142048;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_8214204C:
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

DEFINE_REX_FUNC(sub_821461D0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mulli r11,r9,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(12));
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// mulli r8,r10,12
	ctx.r8.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(12));
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r30,r8,r6
	r30.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// add r11,r8,r6
	ctx.r11.u64 = ctx.r8.u64 + ctx.r6.u64;
	// subf r8,r31,r7
	ctx.r8.u64 = ctx.r7.u64 - r31.u64;
	// srawi r8,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 1;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addze r8,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r8.s64 = temp.s64;
	// subf r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - r30.u64;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x82146228
	if (!ctx.cr6.lt) goto loc_82146228;
	// stw r9,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_82146228:
	// lwz r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r9,0(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mulli r11,r10,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(12));
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// mulli r8,r9,12
	ctx.r8.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(12));
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r30,r8,r6
	r30.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// add r11,r8,r6
	ctx.r11.u64 = ctx.r8.u64 + ctx.r6.u64;
	// subf r8,r31,r7
	ctx.r8.u64 = ctx.r7.u64 - r31.u64;
	// srawi r8,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 1;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addze r8,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r8.s64 = temp.s64;
	// subf r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - r30.u64;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82146278
	if (!ctx.cr6.lt) goto loc_82146278;
	// stw r9,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// stw r10,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
loc_82146278:
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mulli r11,r9,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(12));
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// mulli r8,r10,12
	ctx.r8.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(12));
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r31,r8,r6
	r31.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// add r11,r8,r6
	ctx.r11.u64 = ctx.r8.u64 + ctx.r6.u64;
	// subf r8,r5,r7
	ctx.r8.u64 = ctx.r7.u64 - ctx.r5.u64;
	// srawi r8,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 1;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addze r8,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r8.s64 = temp.s64;
	// subf r11,r31,r11
	ctx.r11.u64 = ctx.r11.u64 - r31.u64;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x821462c8
	if (!ctx.cr6.lt) goto loc_821462C8;
	// stw r9,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_821462C8:
	// ld r30,-16(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8214F400) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8214F408;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// bl 0x82120600
	ctx.lr = 0x8214F420;
	sub_82120600(ctx, base);
	// addi r29,r31,20
	r29.s64 = r31.s64 + 20;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821501a8
	ctx.lr = 0x8214F434;
	sub_821501A8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x8214F444;
	sub_82120AC0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8214f45c
	if (ctx.cr6.eq) goto loc_8214F45C;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// b 0x8214f460
	goto loc_8214F460;
loc_8214F45C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8214F460:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214f470
	if (ctx.cr6.eq) goto loc_8214F470;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8214f4e8
	goto loc_8214F4E8;
loc_8214F470:
	// li r3,72
	ctx.r3.s64 = 72;
	// bl 0x822f6280
	ctx.lr = 0x8214F478;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8214f498
	if (ctx.cr0.eq) goto loc_8214F498;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8214f4f0
	ctx.lr = 0x8214F488;
	sub_8214F4F0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r11,r11,-11728
	ctx.r11.s64 = ctx.r11.s64 + -11728;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// b 0x8214f49c
	goto loc_8214F49C;
loc_8214F498:
	// li r31,0
	r31.s64 = 0;
loc_8214F49C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214F4B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82120600
	ctx.lr = 0x8214F4C0;
	sub_82120600(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8214fcc8
	ctx.lr = 0x8214F4CC;
	sub_8214FCC8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r31.u32);
	// bl 0x82120ac0
	ctx.lr = 0x8214F4E4;
	sub_82120AC0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_8214F4E8:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82154DF8) {
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
	// cmplwi cr6,r4,10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 10, ctx.xer);
	// beq cr6,0x82154e24
	if (ctx.cr6.eq) goto loc_82154E24;
	// lis r11,512
	ctx.r11.s64 = 33554432;
	// ori r11,r11,7
	ctx.r11.u64 = ctx.r11.u64 | 7;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82154e5c
	if (!ctx.cr6.eq) goto loc_82154E5C;
loc_82154E24:
	// addi r30,r3,-4
	r30.s64 = ctx.r3.s64 + -4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r31,r30,8
	r31.s64 = r30.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823edd70
	ctx.lr = 0x82154E38;
	sub_823EDD70(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82154e48
	if (ctx.cr0.eq) goto loc_82154E48;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_82154E48:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82154e5c
	if (!ctx.cr6.eq) goto loc_82154E5C;
	// stw r11,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r11.u32);
loc_82154E5C:
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

DEFINE_REX_FUNC(sub_82157B40) {
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
	ctx.lr = 0x82157B48;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	r29.s64 = 0;
	// lis r28,-32106
	r28.s64 = -2104098816;
	// stw r29,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lwz r3,6192(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 6192);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82157B74;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x82157c24
	if (!ctx.cr0.gt) goto loc_82157C24;
loc_82157B7C:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bge cr6,0x82157c24
	if (!ctx.cr6.lt) goto loc_82157C24;
	// lwz r3,6192(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 6192);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82157BA0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82157BB4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82157c04
	if (ctx.cr0.eq) goto loc_82157C04;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82157BD0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82157c04
	if (ctx.cr0.eq) goto loc_82157C04;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82157BEC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stdx r3,r11,r27
	REX_STORE_U64(ctx.r11.u32 + r27.u32, ctx.r3.u64);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
loc_82157C04:
	// lwz r3,6192(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 6192);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82157C1C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r29,r3
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x82157b7c
	if (ctx.cr6.lt) goto loc_82157B7C;
loc_82157C24:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8215ECC8) {
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
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8215ecf8
	if (ctx.cr6.eq) goto loc_8215ECF8;
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8215ecfc
	goto loc_8215ECFC;
loc_8215ECF8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8215ECFC:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x8215ed28
	if (!ctx.cr6.gt) goto loc_8215ED28;
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x8215edb8
	goto loc_8215EDB8;
loc_8215ED28:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8215ed3c
	if (ctx.cr6.eq) goto loc_8215ED3C;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8215ed40
	goto loc_8215ED40;
loc_8215ED3C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8215ED40:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8215ed70
	if (!ctx.cr6.gt) goto loc_8215ED70;
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lbz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// b 0x8215ed84
	goto loc_8215ED84;
loc_8215ED70:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8215ED84;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8215ED84:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8215edd4
	if (ctx.cr6.eq) goto loc_8215EDD4;
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215eda8
	if (ctx.cr6.eq) goto loc_8215EDA8;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8215edac
	goto loc_8215EDAC;
loc_8215EDA8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8215EDAC:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8215edc0
	if (!ctx.cr6.gt) goto loc_8215EDC0;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
loc_8215EDB8:
	// lbz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// b 0x8215edd4
	goto loc_8215EDD4;
loc_8215EDC0:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8215EDD4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8215EDD4:
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

DEFINE_REX_FUNC(sub_821693E8) {
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
	ctx.lr = 0x821693F0;
	// stwu r1,-688(r1)
	ea = -688 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32106
	ctx.r9.s64 = -2104098816;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// lwz r31,6100(r9)
	r31.u64 = REX_LOAD_U32(ctx.r9.u32 + 6100);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// subf r10,r3,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r3.u64;
loc_82169414:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stbx r9,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x82169414
	if (!ctx.cr0.eq) goto loc_82169414;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826a5b08
	ctx.lr = 0x82169430;
	sub_826A5B08(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120600
	ctx.lr = 0x8216943C;
	sub_82120600(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r31,28
	ctx.r4.s64 = r31.s64 + 28;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120a20
	ctx.lr = 0x8216944C;
	sub_82120A20(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r30,0(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82120ac0
	ctx.lr = 0x82169464;
	sub_82120AC0(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82169488
	if (ctx.cr6.eq) goto loc_82169488;
	// lwz r10,60(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 60);
	// addi r11,r30,40
	ctx.r11.s64 = r30.s64 + 40;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x8216948c
	if (ctx.cr6.lt) goto loc_8216948C;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8216948c
	goto loc_8216948C;
loc_82169488:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8216948C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82169530
	if (ctx.cr6.eq) goto loc_82169530;
	// addi r10,r1,384
	ctx.r10.s64 = ctx.r1.s64 + 384;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
loc_8216949C:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stbx r9,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x8216949c
	if (!ctx.cr0.eq) goto loc_8216949C;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// addi r11,r1,384
	ctx.r11.s64 = ctx.r1.s64 + 384;
loc_821694B8:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821694b8
	if (!ctx.cr6.eq) goto loc_821694B8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_821694CC:
	// lbz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stb r9,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x821694cc
	if (!ctx.cr6.eq) goto loc_821694CC;
	// lis r31,-32106
	r31.s64 = -2104098816;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// lwz r3,6072(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6072);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82169504;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stw r4,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r4.u32);
	// beq 0x82169530
	if (ctx.cr0.eq) goto loc_82169530;
	// lwz r3,6072(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6072);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82169524;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82169534
	goto loc_82169534;
loc_82169530:
	// li r3,23
	ctx.r3.s64 = 23;
loc_82169534:
	// addi r1,r1,688
	ctx.r1.s64 = ctx.r1.s64 + 688;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82172678) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x821726a4
	if (ctx.cr6.lt) goto loc_821726A4;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// blt cr6,0x821726bc
	if (ctx.cr6.lt) goto loc_821726BC;
loc_821726A4:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r11,27080
	ctx.r4.s64 = ctx.r11.s64 + 27080;
	// addi r3,r10,27128
	ctx.r3.s64 = ctx.r10.s64 + 27128;
	// li r5,273
	ctx.r5.s64 = 273;
	// bl 0x821231d0
	ctx.lr = 0x821726BC;
	sub_821231D0(ctx, base);
loc_821726BC:
	// mulli r11,r31,36
	ctx.r11.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(36));
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// addi r3,r11,84
	ctx.r3.s64 = ctx.r11.s64 + 84;
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

DEFINE_REX_FUNC(sub_82176E40) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,28120
	ctx.r11.s64 = ctx.r11.s64 + 28120;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82793a84
	ctx.lr = 0x82176E6C;
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x82176e80
	if (!ctx.cr6.eq) goto loc_82176E80;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,2064(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 2064);
	// b 0x82176e88
	goto loc_82176E88;
loc_82176E80:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,2068(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 2068);
loc_82176E88:
	// lwz r4,32(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82176ea4
	if (ctx.cr6.eq) goto loc_82176EA4;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,5
	ctx.r5.s64 = 5;
	// bl 0x822d5c28
	ctx.lr = 0x82176EA4;
	sub_822D5C28(ctx, base);
loc_82176EA4:
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
	// bl 0x823ed698
	ctx.lr = 0x82176EAC;
	sub_823ED698(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8214e4b0
	ctx.lr = 0x82176EB4;
	sub_8214E4B0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82176ec4
	if (ctx.cr0.eq) goto loc_82176EC4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x82176EC4;
	sub_8269CE98(ctx, base);
loc_82176EC4:
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

DEFINE_REX_FUNC(sub_8217A8D0) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,28880
	ctx.r11.s64 = ctx.r11.s64 + 28880;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8217ab08
	ctx.lr = 0x8217A8FC;
	sub_8217AB08(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8217a90c
	if (ctx.cr0.eq) goto loc_8217A90C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8217A90C;
	sub_8269CE98(ctx, base);
loc_8217A90C:
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

DEFINE_REX_FUNC(sub_8217C100) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8217C108;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 44);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8217c174
	if (ctx.cr0.eq) goto loc_8217C174;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,-19772
	ctx.r4.s64 = ctx.r11.s64 + -19772;
	// bl 0x8269f3c0
	ctx.lr = 0x8217C134;
	sub_8269F3C0(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble cr6,0x8217c158
	if (!ctx.cr6.gt) goto loc_8217C158;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r29,r11,28460
	r29.s64 = ctx.r11.s64 + 28460;
loc_8217C144:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269f3c0
	ctx.lr = 0x8217C150;
	sub_8269F3C0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x8217c144
	if (!ctx.cr0.eq) goto loc_8217C144;
loc_8217C158:
	// lwz r11,32(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r10,28560
	ctx.r4.s64 = ctx.r10.s64 + 28560;
	// addi r5,r11,8
	ctx.r5.s64 = ctx.r11.s64 + 8;
	// bl 0x8269f3c0
	ctx.lr = 0x8217C170;
	sub_8269F3C0(ctx, base);
	// b 0x8217c1b4
	goto loc_8217C1B4;
loc_8217C174:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r30,r11,-20
	r30.s64 = ctx.r11.s64 + -20;
	// addi r3,r28,32
	ctx.r3.s64 = r28.s64 + 32;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// bl 0x8217a928
	ctx.lr = 0x8217C18C;
	sub_8217A928(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,28576
	ctx.r4.s64 = ctx.r11.s64 + 28576;
	// lwz r31,80(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r31,8
	ctx.r5.s64 = r31.s64 + 8;
	// bl 0x8269f3c0
	ctx.lr = 0x8217C1A4;
	sub_8269F3C0(ctx, base);
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// beq cr6,0x8217c1b4
	if (ctx.cr6.eq) goto loc_8217C1B4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269d6a0
	ctx.lr = 0x8217C1B4;
	sub_8269D6A0(ctx, base);
loc_8217C1B4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82181A10) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82183948) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r5,r3,144
	ctx.r5.s64 = ctx.r3.s64 + 144;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823fbd18
	ctx.lr = 0x82183968;
	sub_823FBD18(ctx, base);
	// ld r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// ld r8,8(r3)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r3.u32 + 8);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lfs f0,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f13,44(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// fadds f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f11,240(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 240);
	ctx.f11.f64 = double(temp.f32);
	// std r8,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r8.u64);
	// lfs f10,244(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 244);
	ctx.f10.f64 = double(temp.f32);
	// std r9,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// lfs f0,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lfs f8,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f8.f64 = double(temp.f32);
	// addi r6,r11,256
	ctx.r6.s64 = ctx.r11.s64 + 256;
	// lfs f7,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f7.f64 = double(temp.f32);
	// fabs f7,f7
	ctx.f7.u64 = ctx.f7.u64 & ~0x8000000000000000;
	// lfs f13,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fabs f8,f8
	ctx.f8.u64 = ctx.f8.u64 & ~0x8000000000000000;
	// fnmsubs f12,f12,f13,f0
	ctx.f12.f64 = double(float(-std::fma(ctx.f12.f64, ctx.f13.f64, -ctx.f0.f64)));
	// lfs f0,15048(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f11,f7,f11
	ctx.f11.f64 = double(float(ctx.f7.f64 - ctx.f11.f64));
	// addi r5,r11,256
	ctx.r5.s64 = ctx.r11.s64 + 256;
	// addi r11,r11,256
	ctx.r11.s64 = ctx.r11.s64 + 256;
	// fsubs f10,f8,f10
	ctx.f10.f64 = double(float(ctx.f8.f64 - ctx.f10.f64));
	// fabs f12,f12
	ctx.f12.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// mfcr r10
	ctx.r10.u64 = ctx.cr0.lt ? 0x80000000 : 0;
	ctx.r10.u64 |= ctx.cr0.gt ? 0x40000000 : 0;
	ctx.r10.u64 |= ctx.cr0.eq ? 0x20000000 : 0;
	ctx.r10.u64 |= ctx.cr0.so ? 0x10000000 : 0;
	ctx.r10.u64 |= ctx.cr1.lt ? 0x8000000 : 0;
	ctx.r10.u64 |= ctx.cr1.gt ? 0x4000000 : 0;
	ctx.r10.u64 |= ctx.cr1.eq ? 0x2000000 : 0;
	ctx.r10.u64 |= ctx.cr1.so ? 0x1000000 : 0;
	ctx.r10.u64 |= ctx.cr2.lt ? 0x800000 : 0;
	ctx.r10.u64 |= ctx.cr2.gt ? 0x400000 : 0;
	ctx.r10.u64 |= ctx.cr2.eq ? 0x200000 : 0;
	ctx.r10.u64 |= ctx.cr2.so ? 0x100000 : 0;
	ctx.r10.u64 |= ctx.cr3.lt ? 0x80000 : 0;
	ctx.r10.u64 |= ctx.cr3.gt ? 0x40000 : 0;
	ctx.r10.u64 |= ctx.cr3.eq ? 0x20000 : 0;
	ctx.r10.u64 |= ctx.cr3.so ? 0x10000 : 0;
	ctx.r10.u64 |= ctx.cr4.lt ? 0x8000 : 0;
	ctx.r10.u64 |= ctx.cr4.gt ? 0x4000 : 0;
	ctx.r10.u64 |= ctx.cr4.eq ? 0x2000 : 0;
	ctx.r10.u64 |= ctx.cr4.so ? 0x1000 : 0;
	ctx.r10.u64 |= ctx.cr5.lt ? 0x800 : 0;
	ctx.r10.u64 |= ctx.cr5.gt ? 0x400 : 0;
	ctx.r10.u64 |= ctx.cr5.eq ? 0x200 : 0;
	ctx.r10.u64 |= ctx.cr5.so ? 0x100 : 0;
	ctx.r10.u64 |= ctx.cr6.lt ? 0x80 : 0;
	ctx.r10.u64 |= ctx.cr6.gt ? 0x40 : 0;
	ctx.r10.u64 |= ctx.cr6.eq ? 0x20 : 0;
	ctx.r10.u64 |= ctx.cr6.so ? 0x10 : 0;
	ctx.r10.u64 |= ctx.cr7.lt ? 0x8 : 0;
	ctx.r10.u64 |= ctx.cr7.gt ? 0x4 : 0;
	ctx.r10.u64 |= ctx.cr7.eq ? 0x2 : 0;
	ctx.r10.u64 |= ctx.cr7.so ? 0x1 : 0;
	// fnmsubs f13,f9,f13,f12
	ctx.f13.f64 = double(float(-std::fma(ctx.f9.f64, ctx.f13.f64, -ctx.f12.f64)));
	// rlwinm r9,r10,27,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x4;
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// mfcr r8
	ctx.r8.u64 = ctx.cr0.lt ? 0x80000000 : 0;
	ctx.r8.u64 |= ctx.cr0.gt ? 0x40000000 : 0;
	ctx.r8.u64 |= ctx.cr0.eq ? 0x20000000 : 0;
	ctx.r8.u64 |= ctx.cr0.so ? 0x10000000 : 0;
	ctx.r8.u64 |= ctx.cr1.lt ? 0x8000000 : 0;
	ctx.r8.u64 |= ctx.cr1.gt ? 0x4000000 : 0;
	ctx.r8.u64 |= ctx.cr1.eq ? 0x2000000 : 0;
	ctx.r8.u64 |= ctx.cr1.so ? 0x1000000 : 0;
	ctx.r8.u64 |= ctx.cr2.lt ? 0x800000 : 0;
	ctx.r8.u64 |= ctx.cr2.gt ? 0x400000 : 0;
	ctx.r8.u64 |= ctx.cr2.eq ? 0x200000 : 0;
	ctx.r8.u64 |= ctx.cr2.so ? 0x100000 : 0;
	ctx.r8.u64 |= ctx.cr3.lt ? 0x80000 : 0;
	ctx.r8.u64 |= ctx.cr3.gt ? 0x40000 : 0;
	ctx.r8.u64 |= ctx.cr3.eq ? 0x20000 : 0;
	ctx.r8.u64 |= ctx.cr3.so ? 0x10000 : 0;
	ctx.r8.u64 |= ctx.cr4.lt ? 0x8000 : 0;
	ctx.r8.u64 |= ctx.cr4.gt ? 0x4000 : 0;
	ctx.r8.u64 |= ctx.cr4.eq ? 0x2000 : 0;
	ctx.r8.u64 |= ctx.cr4.so ? 0x1000 : 0;
	ctx.r8.u64 |= ctx.cr5.lt ? 0x800 : 0;
	ctx.r8.u64 |= ctx.cr5.gt ? 0x400 : 0;
	ctx.r8.u64 |= ctx.cr5.eq ? 0x200 : 0;
	ctx.r8.u64 |= ctx.cr5.so ? 0x100 : 0;
	ctx.r8.u64 |= ctx.cr6.lt ? 0x80 : 0;
	ctx.r8.u64 |= ctx.cr6.gt ? 0x40 : 0;
	ctx.r8.u64 |= ctx.cr6.eq ? 0x20 : 0;
	ctx.r8.u64 |= ctx.cr6.so ? 0x10 : 0;
	ctx.r8.u64 |= ctx.cr7.lt ? 0x8 : 0;
	ctx.r8.u64 |= ctx.cr7.gt ? 0x4 : 0;
	ctx.r8.u64 |= ctx.cr7.eq ? 0x2 : 0;
	ctx.r8.u64 |= ctx.cr7.so ? 0x1 : 0;
	// rlwinm r7,r8,27,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x4;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// rlwinm r8,r8,30,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x4;
	// mfcr r4
	ctx.r4.u64 = ctx.cr0.lt ? 0x80000000 : 0;
	ctx.r4.u64 |= ctx.cr0.gt ? 0x40000000 : 0;
	ctx.r4.u64 |= ctx.cr0.eq ? 0x20000000 : 0;
	ctx.r4.u64 |= ctx.cr0.so ? 0x10000000 : 0;
	ctx.r4.u64 |= ctx.cr1.lt ? 0x8000000 : 0;
	ctx.r4.u64 |= ctx.cr1.gt ? 0x4000000 : 0;
	ctx.r4.u64 |= ctx.cr1.eq ? 0x2000000 : 0;
	ctx.r4.u64 |= ctx.cr1.so ? 0x1000000 : 0;
	ctx.r4.u64 |= ctx.cr2.lt ? 0x800000 : 0;
	ctx.r4.u64 |= ctx.cr2.gt ? 0x400000 : 0;
	ctx.r4.u64 |= ctx.cr2.eq ? 0x200000 : 0;
	ctx.r4.u64 |= ctx.cr2.so ? 0x100000 : 0;
	ctx.r4.u64 |= ctx.cr3.lt ? 0x80000 : 0;
	ctx.r4.u64 |= ctx.cr3.gt ? 0x40000 : 0;
	ctx.r4.u64 |= ctx.cr3.eq ? 0x20000 : 0;
	ctx.r4.u64 |= ctx.cr3.so ? 0x10000 : 0;
	ctx.r4.u64 |= ctx.cr4.lt ? 0x8000 : 0;
	ctx.r4.u64 |= ctx.cr4.gt ? 0x4000 : 0;
	ctx.r4.u64 |= ctx.cr4.eq ? 0x2000 : 0;
	ctx.r4.u64 |= ctx.cr4.so ? 0x1000 : 0;
	ctx.r4.u64 |= ctx.cr5.lt ? 0x800 : 0;
	ctx.r4.u64 |= ctx.cr5.gt ? 0x400 : 0;
	ctx.r4.u64 |= ctx.cr5.eq ? 0x200 : 0;
	ctx.r4.u64 |= ctx.cr5.so ? 0x100 : 0;
	ctx.r4.u64 |= ctx.cr6.lt ? 0x80 : 0;
	ctx.r4.u64 |= ctx.cr6.gt ? 0x40 : 0;
	ctx.r4.u64 |= ctx.cr6.eq ? 0x20 : 0;
	ctx.r4.u64 |= ctx.cr6.so ? 0x10 : 0;
	ctx.r4.u64 |= ctx.cr7.lt ? 0x8 : 0;
	ctx.r4.u64 |= ctx.cr7.gt ? 0x4 : 0;
	ctx.r4.u64 |= ctx.cr7.eq ? 0x2 : 0;
	ctx.r4.u64 |= ctx.cr7.so ? 0x1 : 0;
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// rlwinm r7,r4,27,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x4;
	// rlwinm r4,r4,30,29,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x4;
	// rlwinm r10,r10,30,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x4;
	// or r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 | ctx.r4.u64;
	// lfsx f12,r6,r8
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	ctx.f12.f64 = double(temp.f32);
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// fsel f12,f12,f10,f0
	ctx.f12.f64 = ctx.f12.f64 >= 0.0 ? ctx.f10.f64 : ctx.f0.f64;
	// lfsx f10,r5,r7
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	ctx.f10.f64 = double(temp.f32);
	// fsel f13,f10,f13,f0
	ctx.f13.f64 = ctx.f10.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// lfsx f10,r11,r10
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f10.f64 = double(temp.f32);
	// fsel f0,f10,f11,f0
	ctx.f0.f64 = ctx.f10.f64 >= 0.0 ? ctx.f11.f64 : ctx.f0.f64;
	// fmuls f12,f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f13,f13,f13,f12
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f12.f64)));
	// fmadds f1,f0,f0,f13
	ctx.f1.f64 = double(float(std::fma(ctx.f0.f64, ctx.f0.f64, ctx.f13.f64)));
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

DEFINE_REX_FUNC(sub_82193590) {
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
	// bl 0x826a1ca8
	ctx.lr = 0x82193598;
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r9,r9,16592
	ctx.r9.s64 = ctx.r9.s64 + 16592;
	// lfs f0,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// lfs f12,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f9,f0,f12
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f13,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fadds f4,f12,f0
	ctx.f4.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// lfs f7,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f8,f13,f11
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// lfs f6,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f6.f64 = double(temp.f32);
	// fadds f5,f11,f13
	ctx.f5.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// lfs f10,-19392(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -19392);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f6,f6,f7
	ctx.f6.f64 = double(float(ctx.f6.f64 - ctx.f7.f64));
	// lfs f11,12(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lwa r10,4(r3)
	ctx.r10.s64 = int32_t(REX_LOAD_U32(ctx.r3.u32 + 4));
	// fdivs f2,f10,f9
	ctx.f2.f64 = double(float(ctx.f10.f64 / ctx.f9.f64));
	// lfs f13,544(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 544);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f10,f10,f8
	ctx.f10.f64 = double(float(ctx.f10.f64 / ctx.f8.f64));
	// lfs f12,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f8,f11,f6
	ctx.f8.f64 = double(float(ctx.f11.f64 / ctx.f6.f64));
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f3,80(r1)
	ctx.f3.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// lfs f9,160(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 160);
	ctx.f9.f64 = double(temp.f32);
	// stfs f11,156(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// lfs f0,15048(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fdivs f6,f13,f2
	ctx.f6.f64 = double(float(ctx.f13.f64 / ctx.f2.f64));
	// fdivs f10,f13,f10
	ctx.f10.f64 = double(float(ctx.f13.f64 / ctx.f10.f64));
	// fdivs f8,f13,f8
	ctx.f8.f64 = double(float(ctx.f13.f64 / ctx.f8.f64));
	// fadds f6,f6,f12
	ctx.f6.f64 = double(float(ctx.f6.f64 + ctx.f12.f64));
	// fadds f10,f10,f12
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// fadds f8,f8,f12
	ctx.f8.f64 = double(float(ctx.f8.f64 + ctx.f12.f64));
	// fctiw f6,f6
	ctx.f6.s64 = std::isnan(ctx.f6.f64) ? int64_t(0x80000000U) : (ctx.f6.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvtsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f6,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f6.u64);
	// lwa r11,84(r1)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(ctx.r1.u32 + 84));
	// fctiw f10,f10
	ctx.f10.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvtsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// lwa r10,84(r1)
	ctx.r10.s64 = int32_t(REX_LOAD_U32(ctx.r1.u32 + 84));
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// fctiw f8,f8
	ctx.f8.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvtsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// lfd f10,80(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f6,80(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// stfd f8,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f8.u64);
	// lwa r11,84(r1)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(ctx.r1.u32 + 84));
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// fcfid f8,f3
	ctx.f8.f64 = double(ctx.f3.s64);
	// lfd f3,80(r1)
	ctx.f3.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f6,f6
	ctx.f6.f64 = double(ctx.f6.s64);
	// fcfid f3,f3
	ctx.f3.f64 = double(ctx.f3.s64);
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// frsp f8,f8
	ctx.f8.f64 = double(float(ctx.f8.f64));
	// frsp f6,f6
	ctx.f6.f64 = double(float(ctx.f6.f64));
	// frsp f3,f3
	ctx.f3.f64 = double(float(ctx.f3.f64));
	// fdivs f10,f13,f10
	ctx.f10.f64 = double(float(ctx.f13.f64 / ctx.f10.f64));
	// fmuls f8,f8,f12
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// fdivs f6,f13,f6
	ctx.f6.f64 = double(float(ctx.f13.f64 / ctx.f6.f64));
	// fdivs f3,f13,f3
	ctx.f3.f64 = double(float(ctx.f13.f64 / ctx.f3.f64));
	// fmuls f5,f5,f10
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f10.f64));
	// fdivs f11,f11,f8
	ctx.f11.f64 = double(float(ctx.f11.f64 / ctx.f8.f64));
	// fmuls f4,f4,f6
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f6.f64));
	// fmuls f7,f7,f3
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f3.f64));
	// fmuls f5,f5,f9
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f9.f64));
	// fmuls f9,f4,f9
	ctx.f9.f64 = double(float(ctx.f4.f64 * ctx.f9.f64));
	// fneg f7,f7
	ctx.f7.u64 = ctx.f7.u64 ^ 0x8000000000000000;
	// fmadds f5,f5,f8,f12
	ctx.f5.f64 = double(float(std::fma(ctx.f5.f64, ctx.f8.f64, ctx.f12.f64)));
	// fmadds f13,f7,f13,f12
	ctx.f13.f64 = double(float(std::fma(ctx.f7.f64, ctx.f13.f64, ctx.f12.f64)));
	// fmadds f12,f9,f8,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f9.f64, ctx.f8.f64, ctx.f12.f64)));
	// fctiw f9,f5
	ctx.f9.s64 = std::isnan(ctx.f5.f64) ? int64_t(0x80000000U) : (ctx.f5.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvtsd_si32(simde_mm_load_sd(&ctx.f5.f64));
	// stfd f9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// fctiw f13,f13
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvtsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f13.u64);
	// fctiw f13,f12
	ctx.f13.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvtsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// lwa r11,84(r1)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(ctx.r1.u32 + 84));
	// stfd f13,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwa r10,100(r1)
	ctx.r10.s64 = int32_t(REX_LOAD_U32(ctx.r1.u32 + 100));
	// stfs f10,112(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// std r11,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwa r8,84(r1)
	ctx.r8.s64 = int32_t(REX_LOAD_U32(ctx.r1.u32 + 84));
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// lfd f13,96(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// std r10,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f12,96(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// std r8,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// lfd f10,96(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f9,f13
	ctx.f9.f64 = double(ctx.f13.s64);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// stfs f6,100(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// ld r26,0(r11)
	r26.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// ld r25,8(r11)
	r25.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// li r11,8
	ctx.r11.s64 = 8;
	// lfs f13,124(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// ld r24,0(r7)
	r24.u64 = REX_LOAD_U64(ctx.r7.u32 + 0);
	// stfs f3,136(r1)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// ld r28,8(r10)
	r28.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// ld r29,0(r10)
	r29.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// frsp f0,f12
	ctx.f0.f64 = double(float(ctx.f12.f64));
	// ld r11,8(r7)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r7.u32 + 8);
	// addi r30,r1,192
	r30.s64 = ctx.r1.s64 + 192;
	// addi r27,r1,208
	r27.s64 = ctx.r1.s64 + 208;
	// std r11,8(r5)
	REX_STORE_U64(ctx.r5.u32 + 8, ctx.r11.u64);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// fmuls f12,f9,f11
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// stfs f12,144(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// std r29,0(r30)
	REX_STORE_U64(r30.u32 + 0, r29.u64);
	// addi r8,r10,-8
	ctx.r8.s64 = ctx.r10.s64 + -8;
	// std r28,8(r30)
	REX_STORE_U64(r30.u32 + 8, r28.u64);
	// addi r10,r9,-8
	ctx.r10.s64 = ctx.r9.s64 + -8;
	// std r26,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, r26.u64);
	// std r25,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, r25.u64);
	// std r24,0(r5)
	REX_STORE_U64(ctx.r5.u32 + 0, r24.u64);
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// fmuls f12,f10,f11
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// stfs f12,148(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// ld r7,8(r6)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r6.u32 + 8);
	// ld r9,0(r6)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r6.u32 + 0);
	// std r9,0(r27)
	REX_STORE_U64(r27.u32 + 0, ctx.r9.u64);
	// std r7,8(r27)
	REX_STORE_U64(r27.u32 + 8, ctx.r7.u64);
loc_821937E4:
	// ldu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r11,8(r8)
	ea = 8 + ctx.r8.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r8.u32 = ea;
	// bdnz 0x821937e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821937E4;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x823fbf60
	ctx.lr = 0x821937FC;
	sub_823FBF60(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,152
	ctx.r10.s64 = ctx.r1.s64 + 152;
	// addi r9,r3,-8
	ctx.r9.s64 = ctx.r3.s64 + -8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8219380C:
	// ldu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r9.u32 = ea;
	// stdu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x8219380c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8219380C;
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,152
	ctx.r10.s64 = ctx.r1.s64 + 152;
	// addi r9,r31,-8
	ctx.r9.s64 = r31.s64 + -8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82193828:
	// ldu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x82193828
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82193828;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_821A77C0) {
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
	// lwz r3,152(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 152);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r11,r11,-25064
	ctx.r11.s64 = ctx.r11.s64 + -25064;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x8269d1b8
	ctx.lr = 0x821A77F0;
	sub_8269D1B8(ctx, base);
	// lwz r3,140(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 140);
	// bl 0x8269d1b8
	ctx.lr = 0x821A77F8;
	sub_8269D1B8(ctx, base);
	// lwz r3,128(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 128);
	// bl 0x8269d1b8
	ctx.lr = 0x821A7800;
	sub_8269D1B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82125e40
	ctx.lr = 0x821A7808;
	sub_82125E40(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821a7818
	if (ctx.cr0.eq) goto loc_821A7818;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x821A7818;
	sub_8269CE98(ctx, base);
loc_821A7818:
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

DEFINE_REX_FUNC(sub_821AAE80) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-15296
	ctx.r3.s64 = ctx.r11.s64 + -15296;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821AAFE8) {
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
	// bl 0x821a76c0
	ctx.lr = 0x821AB000;
	sub_821A76C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821ab010
	if (!ctx.cr0.eq) goto loc_821AB010;
loc_821AB008:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821ab044
	goto loc_821AB044;
loc_821AB010:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6100(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821ab040
	if (ctx.cr6.eq) goto loc_821AB040;
	// lwz r5,100(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 100);
	// lwz r4,96(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 96);
	// bl 0x821682c8
	ctx.lr = 0x821AB02C;
	sub_821682C8(ctx, base);
	// stw r3,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821ab008
	if (ctx.cr0.eq) goto loc_821AB008;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821ab0c0
	ctx.lr = 0x821AB040;
	sub_821AB0C0(ctx, base);
loc_821AB040:
	// li r3,1
	ctx.r3.s64 = 1;
loc_821AB044:
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

DEFINE_REX_FUNC(sub_821AE260) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-15224
	ctx.r3.s64 = ctx.r11.s64 + -15224;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821AF0F0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f0,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,168(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 168, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821AFEE0) {
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
	// bl 0x826a1cbc
	ctx.lr = 0x821AFEE8;
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, f30.u64);
	// stfd f31,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,240(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 240);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f13,160(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 160);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// fmadds f11,f1,f13,f0
	ctx.f11.f64 = double(float(std::fma(ctx.f1.f64, ctx.f13.f64, ctx.f0.f64)));
	// addi r30,r11,16592
	r30.s64 = ctx.r11.s64 + 16592;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lfs f30,15048(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	f30.f64 = double(temp.f32);
	// addi r29,r3,176
	r29.s64 = ctx.r3.s64 + 176;
	// lfs f0,288(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 288);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,256
	ctx.r11.s64 = ctx.r11.s64 + 256;
	// lfs f13,292(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 292);
	ctx.f13.f64 = double(temp.f32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lfs f12,180(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 180);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// li r5,64
	ctx.r5.s64 = 64;
	// fadds f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// fabs f10,f11
	ctx.f10.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fcmpu cr6,f11,f30
	ctx.cr6.compare(ctx.f11.f64, f30.f64);
	// mfcr r10
	ctx.r10.u64 = ctx.cr0.lt ? 0x80000000 : 0;
	ctx.r10.u64 |= ctx.cr0.gt ? 0x40000000 : 0;
	ctx.r10.u64 |= ctx.cr0.eq ? 0x20000000 : 0;
	ctx.r10.u64 |= ctx.cr0.so ? 0x10000000 : 0;
	ctx.r10.u64 |= ctx.cr1.lt ? 0x8000000 : 0;
	ctx.r10.u64 |= ctx.cr1.gt ? 0x4000000 : 0;
	ctx.r10.u64 |= ctx.cr1.eq ? 0x2000000 : 0;
	ctx.r10.u64 |= ctx.cr1.so ? 0x1000000 : 0;
	ctx.r10.u64 |= ctx.cr2.lt ? 0x800000 : 0;
	ctx.r10.u64 |= ctx.cr2.gt ? 0x400000 : 0;
	ctx.r10.u64 |= ctx.cr2.eq ? 0x200000 : 0;
	ctx.r10.u64 |= ctx.cr2.so ? 0x100000 : 0;
	ctx.r10.u64 |= ctx.cr3.lt ? 0x80000 : 0;
	ctx.r10.u64 |= ctx.cr3.gt ? 0x40000 : 0;
	ctx.r10.u64 |= ctx.cr3.eq ? 0x20000 : 0;
	ctx.r10.u64 |= ctx.cr3.so ? 0x10000 : 0;
	ctx.r10.u64 |= ctx.cr4.lt ? 0x8000 : 0;
	ctx.r10.u64 |= ctx.cr4.gt ? 0x4000 : 0;
	ctx.r10.u64 |= ctx.cr4.eq ? 0x2000 : 0;
	ctx.r10.u64 |= ctx.cr4.so ? 0x1000 : 0;
	ctx.r10.u64 |= ctx.cr5.lt ? 0x800 : 0;
	ctx.r10.u64 |= ctx.cr5.gt ? 0x400 : 0;
	ctx.r10.u64 |= ctx.cr5.eq ? 0x200 : 0;
	ctx.r10.u64 |= ctx.cr5.so ? 0x100 : 0;
	ctx.r10.u64 |= ctx.cr6.lt ? 0x80 : 0;
	ctx.r10.u64 |= ctx.cr6.gt ? 0x40 : 0;
	ctx.r10.u64 |= ctx.cr6.eq ? 0x20 : 0;
	ctx.r10.u64 |= ctx.cr6.so ? 0x10 : 0;
	ctx.r10.u64 |= ctx.cr7.lt ? 0x8 : 0;
	ctx.r10.u64 |= ctx.cr7.gt ? 0x4 : 0;
	ctx.r10.u64 |= ctx.cr7.eq ? 0x2 : 0;
	ctx.r10.u64 |= ctx.cr7.so ? 0x1 : 0;
	// fmuls f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// rlwinm r9,r10,27,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x4;
	// rlwinm r10,r10,30,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x4;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// lfsx f11,r11,r10
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f11.f64 = double(temp.f32);
	// fctidz f13,f13
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f13.f64));
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fnmsubs f13,f13,f12,f10
	ctx.f13.f64 = double(float(-std::fma(ctx.f13.f64, ctx.f12.f64, -ctx.f10.f64)));
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fsel f31,f11,f0,f13
	f31.f64 = ctx.f11.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// stfs f31,240(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 240, temp.u32);
	// bl 0x826a1e70
	ctx.lr = 0x821AFF84;
	sub_826A1E70(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x826a1e70
	ctx.lr = 0x821AFF94;
	sub_826A1E70(ctx, base);
	// lbz r11,164(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 164);
	// addi r29,r31,144
	r29.s64 = r31.s64 + 144;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// beq 0x821affd4
	if (ctx.cr0.eq) goto loc_821AFFD4;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821afaa0
	ctx.lr = 0x821AFFB4;
	sub_821AFAA0(ctx, base);
	// lfs f0,284(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 284);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,160(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 160);
	ctx.f13.f64 = double(temp.f32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lfs f12,240(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 240);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// fmadds f1,f13,f0,f12
	ctx.f1.f64 = double(float(std::fma(ctx.f13.f64, ctx.f0.f64, ctx.f12.f64)));
	// bl 0x821afaa0
	ctx.lr = 0x821AFFD0;
	sub_821AFAA0(ctx, base);
	// b 0x821b0050
	goto loc_821B0050;
loc_821AFFD4:
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x821afb18
	ctx.lr = 0x821AFFDC;
	sub_821AFB18(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x823fbf60
	ctx.lr = 0x821AFFEC;
	sub_823FBF60(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// addi r9,r3,-8
	ctx.r9.s64 = ctx.r3.s64 + -8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821AFFFC:
	// ldu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r9.u32 = ea;
	// stdu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x821afffc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821AFFFC;
	// lfs f0,284(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 284);
	ctx.f0.f64 = double(temp.f32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lfs f13,160(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 160);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// lfs f12,240(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 240);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f1,f13,f0,f12
	ctx.f1.f64 = double(float(std::fma(ctx.f13.f64, ctx.f0.f64, ctx.f12.f64)));
	// bl 0x821afb18
	ctx.lr = 0x821B0024;
	sub_821AFB18(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x823fbf60
	ctx.lr = 0x821B0034;
	sub_823FBF60(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,168
	ctx.r10.s64 = ctx.r1.s64 + 168;
	// addi r9,r3,-8
	ctx.r9.s64 = ctx.r3.s64 + -8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821B0044:
	// ldu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r9.u32 = ea;
	// stdu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x821b0044
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821B0044;
loc_821B0050:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821264e8
	ctx.lr = 0x821B005C;
	sub_821264E8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821264e8
	ctx.lr = 0x821B006C;
	sub_821264E8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lfs f13,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,128(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 128);
	// lfs f12,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lfs f11,8(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// lfs f0,1192(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 1192);
	ctx.f0.f64 = double(temp.f32);
	// li r5,64
	ctx.r5.s64 = 64;
	// lfs f10,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// lfs f10,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// fsubs f11,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x826a1e70
	ctx.lr = 0x821B00C4;
	sub_826A1E70(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r11,128(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 128);
	// stfs f30,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f30,84(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r8,r11,112
	ctx.r8.s64 = ctx.r11.s64 + 112;
	// stfs f30,88(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// ld r8,8(r10)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// ld r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// ld r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// ld r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// std r7,112(r11)
	REX_STORE_U64(ctx.r11.u32 + 112, ctx.r7.u64);
	// std r9,120(r11)
	REX_STORE_U64(ctx.r11.u32 + 120, ctx.r9.u64);
	// lwz r11,128(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 128);
	// addi r9,r11,96
	ctx.r9.s64 = ctx.r11.s64 + 96;
	// std r10,96(r11)
	REX_STORE_U64(ctx.r11.u32 + 96, ctx.r10.u64);
	// std r8,104(r11)
	REX_STORE_U64(ctx.r11.u32 + 104, ctx.r8.u64);
	// lwz r11,128(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 128);
	// lwz r3,16(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821B0120;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_821C4D88) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821c3de8
	ctx.lr = 0x821C4DA4;
	sub_821C3DE8(ctx, base);
	// lfs f0,624(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 624);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,628(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 628);
	ctx.f13.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f12,632(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 632);
	ctx.f12.f64 = double(temp.f32);
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8216d040
	ctx.lr = 0x821C4DD4;
	sub_8216D040(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x821a1f88
	ctx.lr = 0x821C4DE4;
	sub_821A1F88(ctx, base);
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

DEFINE_REX_FUNC(sub_821C8268) {
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
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82122800
	ctx.lr = 0x821C828C;
	sub_82122800(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8219be30
	ctx.lr = 0x821C8294;
	sub_8219BE30(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821c82a4
	if (ctx.cr0.eq) goto loc_821C82A4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x821C82A4;
	sub_8269CE98(ctx, base);
loc_821C82A4:
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

DEFINE_REX_FUNC(sub_821CAB10) {
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
	// bl 0x826a1ca8
	ctx.lr = 0x821CAB18;
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r24,0
	r24.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r24,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r24.u32);
	// mr r30,r24
	r30.u64 = r24.u64;
	// bl 0x82178268
	ctx.lr = 0x821CAB34;
	sub_82178268(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stb r24,116(r31)
	REX_STORE_U8(r31.u32 + 116, r24.u8);
	// addi r27,r31,120
	r27.s64 = r31.s64 + 120;
	// addi r11,r11,-15628
	ctx.r11.s64 = ctx.r11.s64 + -15628;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r29,r31,116
	r29.s64 = r31.s64 + 116;
	// bl 0x82120ac0
	ctx.lr = 0x821CAB5C;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stb r24,156(r31)
	REX_STORE_U8(r31.u32 + 156, r24.u8);
	// li r3,48
	ctx.r3.s64 = 48;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// stw r24,160(r31)
	REX_STORE_U32(r31.u32 + 160, r24.u32);
	// addi r26,r31,148
	r26.s64 = r31.s64 + 148;
	// addi r25,r31,152
	r25.s64 = r31.s64 + 152;
	// lfs f0,1468(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1468);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,228(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 228);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,148(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 148, temp.u32);
	// stfs f13,152(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 152, temp.u32);
	// bl 0x822f6280
	ctx.lr = 0x821CAB8C;
	sub_822F6280(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x821cabbc
	if (ctx.cr0.eq) goto loc_821CABBC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// addi r4,r11,-24032
	ctx.r4.s64 = ctx.r11.s64 + -24032;
	// bl 0x82120600
	ctx.lr = 0x821CABA4;
	sub_82120600(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r30,1
	r30.s64 = 1;
	// bl 0x82191600
	ctx.lr = 0x821CABB8;
	sub_82191600(ctx, base);
	// b 0x821cabc0
	goto loc_821CABC0;
loc_821CABBC:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
loc_821CABC0:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r28,r31,80
	r28.s64 = r31.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x821CABD4;
	sub_82145710(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821cabf0
	if (ctx.cr0.eq) goto loc_821CABF0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// rlwinm r30,r30,0,0,30
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
	// bl 0x82120ac0
	ctx.lr = 0x821CABF0;
	sub_82120AC0(ctx, base);
loc_821CABF0:
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x822f6280
	ctx.lr = 0x821CABF8;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821cac28
	if (ctx.cr0.eq) goto loc_821CAC28;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,-15668
	ctx.r4.s64 = ctx.r11.s64 + -15668;
	// bl 0x82120600
	ctx.lr = 0x821CAC10;
	sub_82120600(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,2
	r30.u64 = r30.u64 | 2;
	// bl 0x821bf110
	ctx.lr = 0x821CAC24;
	sub_821BF110(ctx, base);
	// b 0x821cac2c
	goto loc_821CAC2C;
loc_821CAC28:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
loc_821CAC2C:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x821CAC3C;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821cac58
	if (ctx.cr0.eq) goto loc_821CAC58;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// rlwinm r30,r30,0,31,29
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// bl 0x82120ac0
	ctx.lr = 0x821CAC58;
	sub_82120AC0(ctx, base);
loc_821CAC58:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x821CAC60;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821cac90
	if (ctx.cr0.eq) goto loc_821CAC90;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r4,r11,-15656
	ctx.r4.s64 = ctx.r11.s64 + -15656;
	// bl 0x82120600
	ctx.lr = 0x821CAC78;
	sub_82120600(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,4
	r30.u64 = r30.u64 | 4;
	// bl 0x82196ba8
	ctx.lr = 0x821CAC8C;
	sub_82196BA8(ctx, base);
	// b 0x821cac94
	goto loc_821CAC94;
loc_821CAC90:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
loc_821CAC94:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x821CACA4;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821cacc0
	if (ctx.cr0.eq) goto loc_821CACC0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// rlwinm r30,r30,0,30,28
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// bl 0x82120ac0
	ctx.lr = 0x821CACC0;
	sub_82120AC0(ctx, base);
loc_821CACC0:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x821CACC8;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821cacf8
	if (ctx.cr0.eq) goto loc_821CACF8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r4,r11,-15644
	ctx.r4.s64 = ctx.r11.s64 + -15644;
	// bl 0x82120600
	ctx.lr = 0x821CACE0;
	sub_82120600(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,8
	r30.u64 = r30.u64 | 8;
	// bl 0x82196ba8
	ctx.lr = 0x821CACF4;
	sub_82196BA8(ctx, base);
	// b 0x821cacfc
	goto loc_821CACFC;
loc_821CACF8:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
loc_821CACFC:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x821CAD0C;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821cad24
	if (ctx.cr0.eq) goto loc_821CAD24;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82120ac0
	ctx.lr = 0x821CAD24;
	sub_82120AC0(ctx, base);
loc_821CAD24:
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x822f6280
	ctx.lr = 0x821CAD2C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821cad4c
	if (ctx.cr0.eq) goto loc_821CAD4C;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,100
	ctx.r5.s64 = 100;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821dc550
	ctx.lr = 0x821CAD44;
	sub_821DC550(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821cad50
	goto loc_821CAD50;
loc_821CAD4C:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
loc_821CAD50:
	// stw r4,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r4.u32);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x821d3988
	ctx.lr = 0x821CAD5C;
	sub_821D3988(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x821CAD64;
	sub_822F6280(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r28,r11,-15424
	r28.s64 = ctx.r11.s64 + -15424;
	// addi r29,r10,-23836
	r29.s64 = ctx.r10.s64 + -23836;
	// beq 0x821cadd8
	if (ctx.cr0.eq) goto loc_821CADD8;
	// stw r24,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r24.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-23944
	ctx.r4.s64 = ctx.r11.s64 + -23944;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821dbb48
	ctx.lr = 0x821CAD98;
	sub_821DBB48(ctx, base);
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822f6280
	ctx.lr = 0x821CADA4;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821cadc8
	if (ctx.cr0.eq) goto loc_821CADC8;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// stw r28,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-20736
	ctx.r10.s64 = ctx.r10.s64 + -20736;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x821cadcc
	goto loc_821CADCC;
loc_821CADC8:
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
loc_821CADCC:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r11,104(r30)
	REX_STORE_U32(r30.u32 + 104, ctx.r11.u32);
	// b 0x821caddc
	goto loc_821CADDC;
loc_821CADD8:
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
loc_821CADDC:
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r11,80(r10)
	REX_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// bl 0x82264568
	ctx.lr = 0x821CADF4;
	sub_82264568(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x821CADFC;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x821cae60
	if (ctx.cr0.eq) goto loc_821CAE60;
	// stw r24,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r24.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-23932
	ctx.r4.s64 = ctx.r11.s64 + -23932;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821dbb48
	ctx.lr = 0x821CAE20;
	sub_821DBB48(ctx, base);
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822f6280
	ctx.lr = 0x821CAE2C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821cae50
	if (ctx.cr0.eq) goto loc_821CAE50;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// stw r28,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-20600
	ctx.r10.s64 = ctx.r10.s64 + -20600;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x821cae54
	goto loc_821CAE54;
loc_821CAE50:
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
loc_821CAE54:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r11,104(r30)
	REX_STORE_U32(r30.u32 + 104, ctx.r11.u32);
	// b 0x821cae64
	goto loc_821CAE64;
loc_821CAE60:
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
loc_821CAE64:
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r11,80(r10)
	REX_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// bl 0x82264568
	ctx.lr = 0x821CAE7C;
	sub_82264568(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_821E28B8) {
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
	ctx.lr = 0x821E28C0;
	// stwu r1,-672(r1)
	ea = -672 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r31,0
	r31.s64 = 0;
	// li r3,104
	ctx.r3.s64 = 104;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// bl 0x822f6280
	ctx.lr = 0x821E28DC;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// lis r28,-32126
	r28.s64 = -2105409536;
	// beq 0x821e2920
	if (ctx.cr0.eq) goto loc_821E2920;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,-28692
	ctx.r4.s64 = ctx.r11.s64 + -28692;
	// bl 0x82120600
	ctx.lr = 0x821E28F8;
	sub_82120600(ctx, base);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// lwz r4,-15376(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + -15376);
	// bl 0x82120600
	ctx.lr = 0x821E2904;
	sub_82120600(ctx, base);
	// addi r6,r30,4
	ctx.r6.s64 = r30.s64 + 4;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r31,3
	r31.s64 = 3;
	// bl 0x821d58c8
	ctx.lr = 0x821E291C;
	sub_821D58C8(ctx, base);
	// b 0x821e2924
	goto loc_821E2924;
loc_821E2920:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821E2924:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r27,r26,80
	r27.s64 = r26.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82145710
	ctx.lr = 0x821E2938;
	sub_82145710(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r11,13272
	ctx.r5.s64 = ctx.r11.s64 + 13272;
	// bl 0x821e35e8
	ctx.lr = 0x821E294C;
	sub_821E35E8(ctx, base);
	// rlwinm. r11,r31,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821e2968
	if (ctx.cr0.eq) goto loc_821E2968;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// rlwinm r31,r31,0,31,29
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// bl 0x82120ac0
	ctx.lr = 0x821E2968;
	sub_82120AC0(ctx, base);
loc_821E2968:
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821e2984
	if (ctx.cr0.eq) goto loc_821E2984;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// rlwinm r31,r31,0,0,30
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// bl 0x82120ac0
	ctx.lr = 0x821E2984;
	sub_82120AC0(ctx, base);
loc_821E2984:
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x822f6280
	ctx.lr = 0x821E298C;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821e29d0
	if (ctx.cr0.eq) goto loc_821E29D0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r4,r11,13544
	ctx.r4.s64 = ctx.r11.s64 + 13544;
	// bl 0x82120600
	ctx.lr = 0x821E29A4;
	sub_82120600(ctx, base);
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// lwz r4,-15376(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + -15376);
	// ori r31,r31,4
	r31.u64 = r31.u64 | 4;
	// bl 0x82120600
	ctx.lr = 0x821E29B4;
	sub_82120600(ctx, base);
	// addi r6,r30,32
	ctx.r6.s64 = r30.s64 + 32;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// addi r4,r1,480
	ctx.r4.s64 = ctx.r1.s64 + 480;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r31,r31,8
	r31.u64 = r31.u64 | 8;
	// bl 0x821d58c8
	ctx.lr = 0x821E29CC;
	sub_821D58C8(ctx, base);
	// b 0x821e29d4
	goto loc_821E29D4;
loc_821E29D0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821E29D4:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82145710
	ctx.lr = 0x821E29E4;
	sub_82145710(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r11,13272
	ctx.r5.s64 = ctx.r11.s64 + 13272;
	// bl 0x821e35e8
	ctx.lr = 0x821E29F8;
	sub_821E35E8(ctx, base);
	// rlwinm. r11,r31,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821e2a14
	if (ctx.cr0.eq) goto loc_821E2A14;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// rlwinm r31,r31,0,29,27
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// bl 0x82120ac0
	ctx.lr = 0x821E2A14;
	sub_82120AC0(ctx, base);
loc_821E2A14:
	// rlwinm. r11,r31,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821e2a30
	if (ctx.cr0.eq) goto loc_821E2A30;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// rlwinm r31,r31,0,30,28
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// bl 0x82120ac0
	ctx.lr = 0x821E2A30;
	sub_82120AC0(ctx, base);
loc_821E2A30:
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x822f6280
	ctx.lr = 0x821E2A38;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821e2a7c
	if (ctx.cr0.eq) goto loc_821E2A7C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// addi r4,r11,13564
	ctx.r4.s64 = ctx.r11.s64 + 13564;
	// bl 0x82120600
	ctx.lr = 0x821E2A50;
	sub_82120600(ctx, base);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// lwz r4,-15376(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + -15376);
	// ori r31,r31,16
	r31.u64 = r31.u64 | 16;
	// bl 0x82120600
	ctx.lr = 0x821E2A60;
	sub_82120600(ctx, base);
	// addi r6,r30,60
	ctx.r6.s64 = r30.s64 + 60;
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r31,r31,32
	r31.u64 = r31.u64 | 32;
	// bl 0x821d58c8
	ctx.lr = 0x821E2A78;
	sub_821D58C8(ctx, base);
	// b 0x821e2a80
	goto loc_821E2A80;
loc_821E2A7C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821E2A80:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82145710
	ctx.lr = 0x821E2A90;
	sub_82145710(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r11,13272
	ctx.r5.s64 = ctx.r11.s64 + 13272;
	// bl 0x821e35e8
	ctx.lr = 0x821E2AA4;
	sub_821E35E8(ctx, base);
	// rlwinm. r11,r31,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821e2ac0
	if (ctx.cr0.eq) goto loc_821E2AC0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// rlwinm r31,r31,0,27,25
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// bl 0x82120ac0
	ctx.lr = 0x821E2AC0;
	sub_82120AC0(ctx, base);
loc_821E2AC0:
	// rlwinm. r11,r31,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821e2adc
	if (ctx.cr0.eq) goto loc_821E2ADC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// rlwinm r31,r31,0,28,26
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// bl 0x82120ac0
	ctx.lr = 0x821E2ADC;
	sub_82120AC0(ctx, base);
loc_821E2ADC:
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x822f6280
	ctx.lr = 0x821E2AE4;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821e2b28
	if (ctx.cr0.eq) goto loc_821E2B28;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,13584
	ctx.r4.s64 = ctx.r11.s64 + 13584;
	// bl 0x82120600
	ctx.lr = 0x821E2AFC;
	sub_82120600(ctx, base);
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// lwz r4,-15376(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + -15376);
	// ori r31,r31,64
	r31.u64 = r31.u64 | 64;
	// bl 0x82120600
	ctx.lr = 0x821E2B0C;
	sub_82120600(ctx, base);
	// addi r6,r30,88
	ctx.r6.s64 = r30.s64 + 88;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,544
	ctx.r4.s64 = ctx.r1.s64 + 544;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r31,r31,128
	r31.u64 = r31.u64 | 128;
	// bl 0x821d58c8
	ctx.lr = 0x821E2B24;
	sub_821D58C8(ctx, base);
	// b 0x821e2b2c
	goto loc_821E2B2C;
loc_821E2B28:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821E2B2C:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82145710
	ctx.lr = 0x821E2B3C;
	sub_82145710(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r11,13272
	ctx.r5.s64 = ctx.r11.s64 + 13272;
	// bl 0x821e35e8
	ctx.lr = 0x821E2B50;
	sub_821E35E8(ctx, base);
	// rlwinm. r11,r31,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821e2b6c
	if (ctx.cr0.eq) goto loc_821E2B6C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// rlwinm r31,r31,0,25,23
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// bl 0x82120ac0
	ctx.lr = 0x821E2B6C;
	sub_82120AC0(ctx, base);
loc_821E2B6C:
	// rlwinm. r11,r31,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821e2b88
	if (ctx.cr0.eq) goto loc_821E2B88;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rlwinm r31,r31,0,26,24
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// bl 0x82120ac0
	ctx.lr = 0x821E2B88;
	sub_82120AC0(ctx, base);
loc_821E2B88:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x821E2B90;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821e2bc0
	if (ctx.cr0.eq) goto loc_821E2BC0;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,23144
	ctx.r4.s64 = ctx.r11.s64 + 23144;
	// bl 0x82120600
	ctx.lr = 0x821E2BA8;
	sub_82120600(ctx, base);
	// addi r5,r30,116
	ctx.r5.s64 = r30.s64 + 116;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r31,r31,256
	r31.u64 = r31.u64 | 256;
	// bl 0x8219d708
	ctx.lr = 0x821E2BBC;
	sub_8219D708(ctx, base);
	// b 0x821e2bc4
	goto loc_821E2BC4;
loc_821E2BC0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821E2BC4:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82145710
	ctx.lr = 0x821E2BD4;
	sub_82145710(ctx, base);
	// rlwinm. r11,r31,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821e2bf0
	if (ctx.cr0.eq) goto loc_821E2BF0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// rlwinm r31,r31,0,24,22
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// bl 0x82120ac0
	ctx.lr = 0x821E2BF0;
	sub_82120AC0(ctx, base);
loc_821E2BF0:
	// lbz r11,152(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 152);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821e2d24
	if (ctx.cr0.eq) goto loc_821E2D24;
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x822f6280
	ctx.lr = 0x821E2C04;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821e2c50
	if (ctx.cr0.eq) goto loc_821E2C50;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,-17188
	ctx.r4.s64 = ctx.r11.s64 + -17188;
	// bl 0x82120600
	ctx.lr = 0x821E2C1C;
	sub_82120600(ctx, base);
	// addi r5,r30,120
	ctx.r5.s64 = r30.s64 + 120;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r31,r31,512
	r31.u64 = r31.u64 | 512;
	// bl 0x82197628
	ctx.lr = 0x821E2C30;
	sub_82197628(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r11,r11,10360
	ctx.r11.s64 = ctx.r11.s64 + 10360;
	// addi r10,r10,-11576
	ctx.r10.s64 = ctx.r10.s64 + -11576;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// stw r10,52(r29)
	REX_STORE_U32(r29.u32 + 52, ctx.r10.u32);
	// b 0x821e2c54
	goto loc_821E2C54;
loc_821E2C50:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821E2C54:
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82145710
	ctx.lr = 0x821E2C64;
	sub_82145710(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r11,13512
	ctx.r5.s64 = ctx.r11.s64 + 13512;
	// bl 0x821e35e8
	ctx.lr = 0x821E2C78;
	sub_821E35E8(ctx, base);
	// rlwinm. r11,r31,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821e2c94
	if (ctx.cr0.eq) goto loc_821E2C94;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// rlwinm r31,r31,0,23,21
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// bl 0x82120ac0
	ctx.lr = 0x821E2C94;
	sub_82120AC0(ctx, base);
loc_821E2C94:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x821E2C9C;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821e2cd0
	if (ctx.cr0.eq) goto loc_821E2CD0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r4,r11,-17168
	ctx.r4.s64 = ctx.r11.s64 + -17168;
	// bl 0x82120600
	ctx.lr = 0x821E2CB4;
	sub_82120600(ctx, base);
	// addi r5,r30,124
	ctx.r5.s64 = r30.s64 + 124;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r31,r31,1024
	r31.u64 = r31.u64 | 1024;
	// bl 0x82196ba8
	ctx.lr = 0x821E2CC8;
	sub_82196BA8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x821e2cd4
	goto loc_821E2CD4;
loc_821E2CD0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821E2CD4:
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,148(r30)
	REX_STORE_U32(r30.u32 + 148, ctx.r11.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82145710
	ctx.lr = 0x821E2CE8;
	sub_82145710(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r11,13512
	ctx.r5.s64 = ctx.r11.s64 + 13512;
	// bl 0x821e35e8
	ctx.lr = 0x821E2CFC;
	sub_821E35E8(ctx, base);
	// rlwinm. r11,r31,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821e2d18
	if (ctx.cr0.eq) goto loc_821E2D18;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// rlwinm r31,r31,0,22,20
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFBFF;
	// bl 0x82120ac0
	ctx.lr = 0x821E2D18;
	sub_82120AC0(ctx, base);
loc_821E2D18:
	// lwz r11,148(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 148);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,32(r11)
	REX_STORE_U8(ctx.r11.u32 + 32, ctx.r10.u8);
loc_821E2D24:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x821E2D2C;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821e2d5c
	if (ctx.cr0.eq) goto loc_821E2D5C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// addi r4,r11,-17160
	ctx.r4.s64 = ctx.r11.s64 + -17160;
	// bl 0x82120600
	ctx.lr = 0x821E2D44;
	sub_82120600(ctx, base);
	// addi r5,r30,128
	ctx.r5.s64 = r30.s64 + 128;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r31,r31,2048
	r31.u64 = r31.u64 | 2048;
	// bl 0x82196ba8
	ctx.lr = 0x821E2D58;
	sub_82196BA8(ctx, base);
	// b 0x821e2d60
	goto loc_821E2D60;
loc_821E2D5C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821E2D60:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82145710
	ctx.lr = 0x821E2D70;
	sub_82145710(ctx, base);
	// rlwinm. r11,r31,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821e2d8c
	if (ctx.cr0.eq) goto loc_821E2D8C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// rlwinm r31,r31,0,21,19
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFFF7FF;
	// bl 0x82120ac0
	ctx.lr = 0x821E2D8C;
	sub_82120AC0(ctx, base);
loc_821E2D8C:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x821E2D94;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821e2dc4
	if (ctx.cr0.eq) goto loc_821E2DC4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// addi r4,r11,13608
	ctx.r4.s64 = ctx.r11.s64 + 13608;
	// bl 0x82120600
	ctx.lr = 0x821E2DAC;
	sub_82120600(ctx, base);
	// addi r5,r30,132
	ctx.r5.s64 = r30.s64 + 132;
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r31,r31,4096
	r31.u64 = r31.u64 | 4096;
	// bl 0x82196ba8
	ctx.lr = 0x821E2DC0;
	sub_82196BA8(ctx, base);
	// b 0x821e2dc8
	goto loc_821E2DC8;
loc_821E2DC4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821E2DC8:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82145710
	ctx.lr = 0x821E2DD8;
	sub_82145710(ctx, base);
	// rlwinm. r11,r31,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821e2df4
	if (ctx.cr0.eq) goto loc_821E2DF4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// rlwinm r31,r31,0,20,18
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFFEFFF;
	// bl 0x82120ac0
	ctx.lr = 0x821E2DF4;
	sub_82120AC0(ctx, base);
loc_821E2DF4:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x821E2DFC;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821e2e2c
	if (ctx.cr0.eq) goto loc_821E2E2C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// addi r4,r11,13628
	ctx.r4.s64 = ctx.r11.s64 + 13628;
	// bl 0x82120600
	ctx.lr = 0x821E2E14;
	sub_82120600(ctx, base);
	// addi r5,r30,136
	ctx.r5.s64 = r30.s64 + 136;
	// addi r4,r1,448
	ctx.r4.s64 = ctx.r1.s64 + 448;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r31,r31,8192
	r31.u64 = r31.u64 | 8192;
	// bl 0x82196ba8
	ctx.lr = 0x821E2E28;
	sub_82196BA8(ctx, base);
	// b 0x821e2e30
	goto loc_821E2E30;
loc_821E2E2C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821E2E30:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82145710
	ctx.lr = 0x821E2E40;
	sub_82145710(ctx, base);
	// rlwinm. r11,r31,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821e2e5c
	if (ctx.cr0.eq) goto loc_821E2E5C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// rlwinm r31,r31,0,19,17
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFFDFFF;
	// bl 0x82120ac0
	ctx.lr = 0x821E2E5C;
	sub_82120AC0(ctx, base);
loc_821E2E5C:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x821E2E64;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821e2e94
	if (ctx.cr0.eq) goto loc_821E2E94;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// addi r4,r11,-28680
	ctx.r4.s64 = ctx.r11.s64 + -28680;
	// bl 0x82120600
	ctx.lr = 0x821E2E7C;
	sub_82120600(ctx, base);
	// addi r5,r30,140
	ctx.r5.s64 = r30.s64 + 140;
	// addi r4,r1,512
	ctx.r4.s64 = ctx.r1.s64 + 512;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r31,r31,16384
	r31.u64 = r31.u64 | 16384;
	// bl 0x82196ba8
	ctx.lr = 0x821E2E90;
	sub_82196BA8(ctx, base);
	// b 0x821e2e98
	goto loc_821E2E98;
loc_821E2E94:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821E2E98:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82145710
	ctx.lr = 0x821E2EA8;
	sub_82145710(ctx, base);
	// rlwinm. r11,r31,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821e2ec4
	if (ctx.cr0.eq) goto loc_821E2EC4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// rlwinm r31,r31,0,18,16
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFFBFFF;
	// bl 0x82120ac0
	ctx.lr = 0x821E2EC4;
	sub_82120AC0(ctx, base);
loc_821E2EC4:
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x822f6280
	ctx.lr = 0x821E2ECC;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821e2efc
	if (ctx.cr0.eq) goto loc_821E2EFC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// addi r4,r11,-29672
	ctx.r4.s64 = ctx.r11.s64 + -29672;
	// bl 0x82120600
	ctx.lr = 0x821E2EE4;
	sub_82120600(ctx, base);
	// addi r5,r30,144
	ctx.r5.s64 = r30.s64 + 144;
	// addi r4,r1,576
	ctx.r4.s64 = ctx.r1.s64 + 576;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r31,r31,32768
	r31.u64 = r31.u64 | 32768;
	// bl 0x82191600
	ctx.lr = 0x821E2EF8;
	sub_82191600(ctx, base);
	// b 0x821e2f00
	goto loc_821E2F00;
loc_821E2EFC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821E2F00:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82145710
	ctx.lr = 0x821E2F10;
	sub_82145710(ctx, base);
	// rlwinm. r11,r31,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821e2f28
	if (ctx.cr0.eq) goto loc_821E2F28;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// bl 0x82120ac0
	ctx.lr = 0x821E2F28;
	sub_82120AC0(ctx, base);
loc_821E2F28:
	// stw r26,156(r30)
	REX_STORE_U32(r30.u32 + 156, r26.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82151d50
	ctx.lr = 0x821E2F34;
	sub_82151D50(ctx, base);
	// stw r3,160(r30)
	REX_STORE_U32(r30.u32 + 160, ctx.r3.u32);
	// lwz r3,156(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 156);
	// bl 0x821e3650
	ctx.lr = 0x821E2F40;
	sub_821E3650(ctx, base);
	// lwz r29,156(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 156);
	// stw r3,164(r30)
	REX_STORE_U32(r30.u32 + 164, ctx.r3.u32);
	// lwz r11,96(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 96);
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821e2f84
	if (ctx.cr6.eq) goto loc_821E2F84;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r28,r11,-15564
	r28.s64 = ctx.r11.s64 + -15564;
loc_821E2F60:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x821fd140
	ctx.lr = 0x821E2F6C;
	sub_821FD140(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821e3024
	if (!ctx.cr0.eq) goto loc_821E3024;
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,96(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 96);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821e2f60
	if (!ctx.cr6.eq) goto loc_821E2F60;
loc_821E2F84:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821E2F88:
	// lwz r29,156(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 156);
	// stw r11,168(r30)
	REX_STORE_U32(r30.u32 + 168, ctx.r11.u32);
	// lwz r11,96(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 96);
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821e2fcc
	if (ctx.cr6.eq) goto loc_821E2FCC;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r28,r11,-14556
	r28.s64 = ctx.r11.s64 + -14556;
loc_821E2FA8:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x821fd140
	ctx.lr = 0x821E2FB4;
	sub_821FD140(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821e302c
	if (!ctx.cr0.eq) goto loc_821E302C;
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,96(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 96);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821e2fa8
	if (!ctx.cr6.eq) goto loc_821E2FA8;
loc_821E2FCC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821E2FD0:
	// lwz r9,160(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 160);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r11,172(r30)
	REX_STORE_U32(r30.u32 + 172, ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r31,r10,13648
	r31.s64 = ctx.r10.s64 + 13648;
	// bne cr6,0x821e2ffc
	if (!ctx.cr6.eq) goto loc_821E2FFC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,13704
	ctx.r3.s64 = ctx.r11.s64 + 13704;
	// li r5,86
	ctx.r5.s64 = 86;
	// bl 0x821231d0
	ctx.lr = 0x821E2FFC;
	sub_821231D0(ctx, base);
loc_821E2FFC:
	// lwz r11,168(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 168);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821e301c
	if (!ctx.cr6.eq) goto loc_821E301C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,13792
	ctx.r3.s64 = ctx.r11.s64 + 13792;
	// li r5,87
	ctx.r5.s64 = 87;
	// bl 0x821231d0
	ctx.lr = 0x821E301C;
	sub_821231D0(ctx, base);
loc_821E301C:
	// addi r1,r1,672
	ctx.r1.s64 = ctx.r1.s64 + 672;
	// b 0x826a1d00
	return;
loc_821E3024:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// b 0x821e2f88
	goto loc_821E2F88;
loc_821E302C:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// b 0x821e2fd0
	goto loc_821E2FD0;
}

DEFINE_REX_FUNC(sub_8221DB08) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8221DB10;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,128(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 128);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r5,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// ble cr6,0x8221dbc8
	if (!ctx.cr6.gt) goto loc_8221DBC8;
	// lwz r9,0(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// bne cr6,0x8221db50
	if (!ctx.cr6.eq) goto loc_8221DB50;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8216b740
	ctx.lr = 0x8221DB48;
	sub_8216B740(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8221DB50:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8221dbc8
	if (!ctx.cr6.gt) goto loc_8221DBC8;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8221dbc8
	if (!ctx.cr6.eq) goto loc_8221DBC8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821b2d80
	ctx.lr = 0x8221DB6C;
	sub_821B2D80(ctx, base);
	// lwz r9,1024(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 1024);
	// lwz r11,1020(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1020);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r10,1036(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1036);
	// subf r9,r11,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r11.u64;
	// srawi r9,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 4;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8221dbc8
	if (!ctx.cr6.lt) goto loc_8221DBC8;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r3,r10,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221DBA4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// std r3,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,6208(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6208);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221DBC8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8221DBC8:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82226AF0) {
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
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6276(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6276);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82226B14;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

DEFINE_REX_FUNC(sub_82228230) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-13932
	ctx.r3.s64 = ctx.r11.s64 + -13932;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822284C8) {
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
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x822f6280
	ctx.lr = 0x822284DC;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822284ec
	if (ctx.cr0.eq) goto loc_822284EC;
	// bl 0x82228500
	ctx.lr = 0x822284E8;
	sub_82228500(ctx, base);
	// b 0x822284f0
	goto loc_822284F0;
loc_822284EC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822284F0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82229118) {
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
	ctx.lr = 0x82229120;
	// stwu r1,-720(r1)
	ea = -720 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32106
	r30.s64 = -2104098816;
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// li r23,0
	r23.s64 = 0;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// mr r25,r23
	r25.u64 = r23.u64;
	// lwz r3,6192(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6192);
	// mr r24,r23
	r24.u64 = r23.u64;
	// mr r31,r23
	r31.u64 = r23.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82229154;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x8222925c
	if (!ctx.cr0.gt) goto loc_8222925C;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r28,r11,1624
	r28.s64 = ctx.r11.s64 + 1624;
	// addi r27,r10,16592
	r27.s64 = ctx.r10.s64 + 16592;
	// addi r26,r9,16584
	r26.s64 = ctx.r9.s64 + 16584;
loc_82229174:
	// lwz r3,6192(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6192);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222918C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8215f338
	ctx.lr = 0x8222919C;
	sub_8215F338(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8215f338
	ctx.lr = 0x822291A4;
	sub_8215F338(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x822291AC;
	sub_8215F1B0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x822291c0
	if (!ctx.cr6.eq) goto loc_822291C0;
	// lbz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 8);
	// b 0x822291c4
	goto loc_822291C4;
loc_822291C0:
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
loc_822291C4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82229228
	if (ctx.cr0.eq) goto loc_82229228;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822291E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822291f0
	if (ctx.cr0.eq) goto loc_822291F0;
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
loc_822291F0:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82229204;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82229228
	if (ctx.cr0.eq) goto loc_82229228;
	// lwz r3,6192(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6192);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82229220;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822292b0
	if (ctx.cr0.eq) goto loc_822292B0;
loc_82229228:
	// lwz r3,6192(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6192);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82229240;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r31,r3
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x82229174
	if (ctx.cr6.lt) goto loc_82229174;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// beq cr6,0x8222925c
	if (ctx.cr6.eq) goto loc_8222925C;
	// cmpw cr6,r24,r25
	ctx.cr6.compare<int32_t>(r24.s32, r25.s32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82229260
	if (ctx.cr6.eq) goto loc_82229260;
loc_8222925C:
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
loc_82229260:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822292f8
	if (ctx.cr0.eq) goto loc_822292F8;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-26044
	ctx.r4.s64 = ctx.r11.s64 + -26044;
	// bl 0x82120600
	ctx.lr = 0x82229278;
	sub_82120600(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r3,112(r22)
	ctx.r3.u64 = REX_LOAD_U32(r22.u32 + 112);
	// bl 0x821dd040
	ctx.lr = 0x82229284;
	sub_821DD040(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r23,464(r1)
	REX_STORE_U32(ctx.r1.u32 + 464, r23.u32);
	// addi r5,r1,336
	ctx.r5.s64 = ctx.r1.s64 + 336;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822292A8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// b 0x8222933c
	goto loc_8222933C;
loc_822292B0:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,-23836
	ctx.r4.s64 = ctx.r11.s64 + -23836;
	// bl 0x82120600
	ctx.lr = 0x822292C0;
	sub_82120600(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lwz r3,112(r22)
	ctx.r3.u64 = REX_LOAD_U32(r22.u32 + 112);
	// bl 0x821dd040
	ctx.lr = 0x822292CC;
	sub_821DD040(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r23,320(r1)
	REX_STORE_U32(ctx.r1.u32 + 320, r23.u32);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822292F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// b 0x8222933c
	goto loc_8222933C;
loc_822292F8:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-23820
	ctx.r4.s64 = ctx.r11.s64 + -23820;
	// bl 0x82120600
	ctx.lr = 0x82229308;
	sub_82120600(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,112(r22)
	ctx.r3.u64 = REX_LOAD_U32(r22.u32 + 112);
	// bl 0x821dd040
	ctx.lr = 0x82229314;
	sub_821DD040(ctx, base);
	// stw r23,608(r1)
	REX_STORE_U32(ctx.r1.u32 + 608, r23.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r5,r1,480
	ctx.r5.s64 = ctx.r1.s64 + 480;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82229338;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
loc_8222933C:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82120ac0
	ctx.lr = 0x82229348;
	sub_82120AC0(ctx, base);
	// stw r23,0(r21)
	REX_STORE_U32(r21.u32 + 0, r23.u32);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// b 0x826a1cec
	return;
}

DEFINE_REX_FUNC(sub_822371E8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x822371F0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,336(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 336);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r31,r3,332
	r31.s64 = ctx.r3.s64 + 332;
	// lwz r30,4(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82237220
	goto loc_82237220;
loc_82237208:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,8(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 8);
	// bl 0x822375e8
	ctx.lr = 0x82237214;
	sub_822375E8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r30,0(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x8269ce98
	ctx.lr = 0x82237220;
	sub_8269CE98(ctx, base);
loc_82237220:
	// lbz r11,33(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 33);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82237208
	if (ctx.cr0.eq) goto loc_82237208;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r11,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r11,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x8269ce98
	ctx.lr = 0x82237254;
	sub_8269CE98(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r29,280
	ctx.r3.s64 = r29.s64 + 280;
	// bl 0x82120ac0
	ctx.lr = 0x82237264;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r29,244
	ctx.r3.s64 = r29.s64 + 244;
	// bl 0x82120ac0
	ctx.lr = 0x82237274;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r29,216
	ctx.r3.s64 = r29.s64 + 216;
	// bl 0x82120ac0
	ctx.lr = 0x82237284;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r29,184
	ctx.r3.s64 = r29.s64 + 184;
	// bl 0x82120ac0
	ctx.lr = 0x82237294;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r29,148
	ctx.r3.s64 = r29.s64 + 148;
	// bl 0x82120ac0
	ctx.lr = 0x822372A4;
	sub_82120AC0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82178388
	ctx.lr = 0x822372AC;
	sub_82178388(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8223D0D0) {
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
	// bl 0x826a1cb8
	ctx.lr = 0x8223D0D8;
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
	// lis r29,-32106
	r29.s64 = -2104098816;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r31,0
	r31.s64 = 0;
	// lwz r3,6284(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6284);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223D10C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x8223d1f8
	if (!ctx.cr0.gt) goto loc_8223D1F8;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// li r30,0
	r30.s64 = 0;
	// lfs f29,15048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	f29.f64 = double(temp.f32);
	// lfs f30,700(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 700);
	f30.f64 = double(temp.f32);
loc_8223D12C:
	// lwz r3,6284(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6284);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223D144;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,3884(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 3884);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// add r5,r11,r30
	ctx.r5.u64 = ctx.r11.u64 + r30.u64;
	// lfs f0,308(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 308);
	ctx.f0.f64 = double(temp.f32);
	// lbz r11,224(r5)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r5.u32 + 224);
	// lfs f13,312(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 312);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - f31.f64));
	// fsubs f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 - f31.f64));
	// stfs f0,308(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 308, temp.u32);
	// stfs f13,312(r5)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r5.u32 + 312, temp.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8223d190
	if (!ctx.cr0.eq) goto loc_8223D190;
	// lfs f0,20(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,24(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + f31.f64));
	// fadds f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 + f31.f64));
	// stfs f0,20(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 20, temp.u32);
	// stfs f13,24(r5)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r5.u32 + 24, temp.u32);
	// b 0x8223d1a4
	goto loc_8223D1A4;
loc_8223D190:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,1016(r4)
	REX_STORE_U8(ctx.r4.u32 + 1016, ctx.r11.u8);
	// lfs f0,32(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + f31.f64));
	// stfs f0,32(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 32, temp.u32);
loc_8223D1A4:
	// lfs f0,3892(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 3892);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// blt cr6,0x8223d1b4
	if (ctx.cr6.lt) goto loc_8223D1B4;
	// stfs f29,192(r5)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r5.u32 + 192, temp.u32);
loc_8223D1B4:
	// lfs f0,128(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lfs f13,192(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 192);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - f31.f64));
	// fsubs f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 - f31.f64));
	// stfs f0,128(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 128, temp.u32);
	// stfs f13,192(r5)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r5.u32 + 192, temp.u32);
	// bl 0x8223d210
	ctx.lr = 0x8223D1D4;
	sub_8223D210(ctx, base);
	// lwz r3,6284(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6284);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,336
	r30.s64 = r30.s64 + 336;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223D1F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r31,r3
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x8223d12c
	if (ctx.cr6.lt) goto loc_8223D12C;
loc_8223D1F8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f30,-56(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82246920) {
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
	// li r3,124
	ctx.r3.s64 = 124;
	// bl 0x822f6280
	ctx.lr = 0x82246934;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82246944
	if (ctx.cr0.eq) goto loc_82246944;
	// bl 0x82246958
	ctx.lr = 0x82246940;
	sub_82246958(ctx, base);
	// b 0x82246948
	goto loc_82246948;
loc_82246944:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82246948:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82249308) {
	REX_FUNC_PROLOGUE();
	// extsb r11,r4
	ctx.r11.s64 = ctx.r4.s8;
	// cmpwi cr6,r11,120
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 120, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,702(r11)
	REX_STORE_U8(ctx.r11.u32 + 702, ctx.r10.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8224A690) {
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
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x8228ca78
	ctx.lr = 0x8224A6A4;
	sub_8228CA78(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8224C098) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
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
	// lwz r31,464(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 464);
	// clrlwi. r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r4,824(r31)
	REX_STORE_U8(r31.u32 + 824, ctx.r4.u8);
	// beq 0x8224c14c
	if (ctx.cr0.eq) goto loc_8224C14C;
	// lwz r11,768(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 768);
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r8,656(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 656);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r9,816(r31)
	REX_STORE_U8(r31.u32 + 816, ctx.r9.u8);
	// lis r9,-32126
	ctx.r9.s64 = -2105409536;
	// divw r10,r11,r10
	ctx.r10.u64 = uint32_t((ctx.r10.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r11.s32 / ctx.r10.s32 : 0);
	// addi r4,r9,-13316
	ctx.r4.s64 = ctx.r9.s64 + -13316;
	// mulli r10,r10,3
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(3));
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stw r11,768(r31)
	REX_STORE_U32(r31.u32 + 768, ctx.r11.u32);
	// lwz r3,460(r8)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + 460);
	// bl 0x821fd140
	ctx.lr = 0x8224C0F0;
	sub_821FD140(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8224c14c
	if (ctx.cr0.eq) goto loc_8224C14C;
	// lwz r11,768(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 768);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// lwz r9,656(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 656);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,-19264
	ctx.r10.s64 = ctx.r10.s64 + -19264;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r31,460(r9)
	r31.u64 = REX_LOAD_U32(ctx.r9.u32 + 460);
	// lwzx r4,r11,r10
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82120600
	ctx.lr = 0x8224C11C;
	sub_82120600(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r4,128(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 128);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,6280(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6280);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224C13C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x8224C14C;
	sub_82120AC0(ctx, base);
loc_8224C14C:
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

DEFINE_REX_FUNC(sub_82250FA8) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x826a1cac
	ctx.lr = 0x82250FB0;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x826a2c84
	ctx.lr = 0x82250FB8;
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// fmr f27,f1
	ctx.fpscr.disableFlushMode();
	f27.f64 = ctx.f1.f64;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lfs f29,-19392(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -19392);
	f29.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f31,15048(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	f31.f64 = double(temp.f32);
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// addi r25,r11,16592
	r25.s64 = ctx.r11.s64 + 16592;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// li r27,0
	r27.s64 = 0;
	// lfs f28,1108(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 1108);
	f28.f64 = double(temp.f32);
	// lfs f30,12(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 12);
	f30.f64 = double(temp.f32);
loc_82250FF8:
	// fmuls f0,f27,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f27.f64 * f29.f64));
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r11,r10,16592
	ctx.r11.s64 = ctx.r10.s64 + 16592;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// addi r11,r11,256
	ctx.r11.s64 = ctx.r11.s64 + 256;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// fsubs f13,f30,f0
	ctx.f13.f64 = double(float(f30.f64 - ctx.f0.f64));
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, f31.f64);
	// mfcr r10
	ctx.r10.u64 = ctx.cr0.lt ? 0x80000000 : 0;
	ctx.r10.u64 |= ctx.cr0.gt ? 0x40000000 : 0;
	ctx.r10.u64 |= ctx.cr0.eq ? 0x20000000 : 0;
	ctx.r10.u64 |= ctx.cr0.so ? 0x10000000 : 0;
	ctx.r10.u64 |= ctx.cr1.lt ? 0x8000000 : 0;
	ctx.r10.u64 |= ctx.cr1.gt ? 0x4000000 : 0;
	ctx.r10.u64 |= ctx.cr1.eq ? 0x2000000 : 0;
	ctx.r10.u64 |= ctx.cr1.so ? 0x1000000 : 0;
	ctx.r10.u64 |= ctx.cr2.lt ? 0x800000 : 0;
	ctx.r10.u64 |= ctx.cr2.gt ? 0x400000 : 0;
	ctx.r10.u64 |= ctx.cr2.eq ? 0x200000 : 0;
	ctx.r10.u64 |= ctx.cr2.so ? 0x100000 : 0;
	ctx.r10.u64 |= ctx.cr3.lt ? 0x80000 : 0;
	ctx.r10.u64 |= ctx.cr3.gt ? 0x40000 : 0;
	ctx.r10.u64 |= ctx.cr3.eq ? 0x20000 : 0;
	ctx.r10.u64 |= ctx.cr3.so ? 0x10000 : 0;
	ctx.r10.u64 |= ctx.cr4.lt ? 0x8000 : 0;
	ctx.r10.u64 |= ctx.cr4.gt ? 0x4000 : 0;
	ctx.r10.u64 |= ctx.cr4.eq ? 0x2000 : 0;
	ctx.r10.u64 |= ctx.cr4.so ? 0x1000 : 0;
	ctx.r10.u64 |= ctx.cr5.lt ? 0x800 : 0;
	ctx.r10.u64 |= ctx.cr5.gt ? 0x400 : 0;
	ctx.r10.u64 |= ctx.cr5.eq ? 0x200 : 0;
	ctx.r10.u64 |= ctx.cr5.so ? 0x100 : 0;
	ctx.r10.u64 |= ctx.cr6.lt ? 0x80 : 0;
	ctx.r10.u64 |= ctx.cr6.gt ? 0x40 : 0;
	ctx.r10.u64 |= ctx.cr6.eq ? 0x20 : 0;
	ctx.r10.u64 |= ctx.cr6.so ? 0x10 : 0;
	ctx.r10.u64 |= ctx.cr7.lt ? 0x8 : 0;
	ctx.r10.u64 |= ctx.cr7.gt ? 0x4 : 0;
	ctx.r10.u64 |= ctx.cr7.eq ? 0x2 : 0;
	ctx.r10.u64 |= ctx.cr7.so ? 0x1 : 0;
	// rlwinm r9,r10,27,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x4;
	// rlwinm r10,r10,30,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x4;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// lfsx f13,r11,r10
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsel f1,f13,f30,f0
	ctx.f1.f64 = ctx.f13.f64 >= 0.0 ? f30.f64 : ctx.f0.f64;
	// bl 0x82251d00
	ctx.lr = 0x82251048;
	sub_82251D00(ctx, base);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82251fa0
	ctx.lr = 0x82251060;
	sub_82251FA0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8225106c
	if (!ctx.cr0.eq) goto loc_8225106C;
	// fmuls f29,f29,f28
	ctx.fpscr.disableFlushMode();
	f29.f64 = double(float(f29.f64 * f28.f64));
loc_8225106C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82251080
	if (!ctx.cr6.eq) goto loc_82251080;
	// cmpwi cr6,r27,4
	ctx.cr6.compare<int32_t>(r27.s32, 4, ctx.xer);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// blt cr6,0x82250ff8
	if (ctx.cr6.lt) goto loc_82250FF8;
loc_82251080:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82251098;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x822510b8
	if (!ctx.cr0.eq) goto loc_822510B8;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r4,r11,-12412
	ctx.r4.s64 = ctx.r11.s64 + -12412;
	// addi r3,r10,-12140
	ctx.r3.s64 = ctx.r10.s64 + -12140;
	// li r5,231
	ctx.r5.s64 = 231;
	// bl 0x821231d0
	ctx.lr = 0x822510B8;
	sub_821231D0(ctx, base);
loc_822510B8:
	// lfs f0,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lwz r3,32(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 32);
	// lfs f11,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f8,32(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f21,f11,f0
	f21.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// fsubs f24,f11,f8
	f24.f64 = double(float(ctx.f11.f64 - ctx.f8.f64));
	// lfs f13,52(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f20,f10,f13
	f20.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// lfs f12,56(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// lfs f7,36(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 36);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f19,f9,f12
	f19.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// lfs f11,40(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f23,f10,f7
	f23.f64 = double(float(ctx.f10.f64 - ctx.f7.f64));
	// fsubs f22,f9,f11
	f22.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// lfs f10,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f30,f10,f0
	f30.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// fsubs f29,f9,f13
	f29.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// lfs f0,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f28,f0,f12
	f28.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fsubs f27,f13,f8
	f27.f64 = double(float(ctx.f13.f64 - ctx.f8.f64));
	// lfs f0,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f26,f0,f7
	f26.f64 = double(float(ctx.f0.f64 - ctx.f7.f64));
	// fsubs f25,f13,f11
	f25.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// bl 0x82151d50
	ctx.lr = 0x8225112C;
	sub_82151D50(ctx, base);
	// fmuls f0,f20,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f20.f64 * f28.f64));
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// fmuls f13,f19,f30
	ctx.f13.f64 = double(float(f19.f64 * f30.f64));
	// fmuls f12,f29,f21
	ctx.f12.f64 = double(float(f29.f64 * f21.f64));
	// fmsubs f0,f19,f29,f0
	ctx.f0.f64 = double(float(std::fma(f19.f64, f29.f64, -ctx.f0.f64)));
	// fmsubs f13,f28,f21,f13
	ctx.f13.f64 = double(float(std::fma(f28.f64, f21.f64, -ctx.f13.f64)));
	// fmsubs f12,f20,f30,f12
	ctx.f12.f64 = double(float(std::fma(f20.f64, f30.f64, -ctx.f12.f64)));
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fmadds f0,f0,f31,f12
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f31.f64, ctx.f12.f64)));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// ble cr6,0x822511b8
	if (!ctx.cr6.gt) goto loc_822511B8;
	// lfs f0,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f30
	ctx.f12.f64 = double(float(ctx.f0.f64 * f30.f64));
	// fmuls f11,f13,f28
	ctx.f11.f64 = double(float(ctx.f13.f64 * f28.f64));
	// lfs f10,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f29
	ctx.f9.f64 = double(float(ctx.f10.f64 * f29.f64));
	// fmsubs f12,f10,f28,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f10.f64, f28.f64, -ctx.f12.f64)));
	// fmsubs f0,f0,f29,f11
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f29.f64, -ctx.f11.f64)));
	// fmsubs f13,f13,f30,f9
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, f30.f64, -ctx.f9.f64)));
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fmadds f0,f0,f31,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f31.f64, ctx.f13.f64)));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// ble cr6,0x82251278
	if (!ctx.cr6.gt) goto loc_82251278;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822505c8
	ctx.lr = 0x8225119C;
	sub_822505C8(ctx, base);
	// lfs f13,144(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,148(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 148);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fadds f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// fadds f12,f12,f9
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f9.f64));
	// b 0x8225123c
	goto loc_8225123C;
loc_822511B8:
	// fmuls f0,f23,f25
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f23.f64 * f25.f64));
	// fmuls f13,f22,f27
	ctx.f13.f64 = double(float(f22.f64 * f27.f64));
	// fmuls f12,f26,f24
	ctx.f12.f64 = double(float(f26.f64 * f24.f64));
	// fmsubs f0,f22,f26,f0
	ctx.f0.f64 = double(float(std::fma(f22.f64, f26.f64, -ctx.f0.f64)));
	// fmsubs f13,f25,f24,f13
	ctx.f13.f64 = double(float(std::fma(f25.f64, f24.f64, -ctx.f13.f64)));
	// fmsubs f12,f23,f27,f12
	ctx.f12.f64 = double(float(std::fma(f23.f64, f27.f64, -ctx.f12.f64)));
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fmadds f0,f0,f31,f12
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f31.f64, ctx.f12.f64)));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bge cr6,0x82251278
	if (!ctx.cr6.lt) goto loc_82251278;
	// lfs f0,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f27
	ctx.f12.f64 = double(float(ctx.f0.f64 * f27.f64));
	// fmuls f11,f13,f25
	ctx.f11.f64 = double(float(ctx.f13.f64 * f25.f64));
	// lfs f10,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f26
	ctx.f9.f64 = double(float(ctx.f10.f64 * f26.f64));
	// fmsubs f12,f10,f25,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f10.f64, f25.f64, -ctx.f12.f64)));
	// fmsubs f0,f0,f26,f11
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f26.f64, -ctx.f11.f64)));
	// fmsubs f13,f13,f27,f9
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, f27.f64, -ctx.f9.f64)));
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fmadds f0,f0,f31,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f31.f64, ctx.f13.f64)));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bge cr6,0x82251278
	if (!ctx.cr6.lt) goto loc_82251278;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822505c8
	ctx.lr = 0x82251224;
	sub_822505C8(ctx, base);
	// lfs f13,144(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,148(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 148);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fadds f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// fadds f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
loc_8225123C:
	// lfs f11,152(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 152);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lfs f10,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fadds f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// lfs f0,4(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// ld r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// std r10,0(r30)
	REX_STORE_U64(r30.u32 + 0, ctx.r10.u64);
	// std r11,8(r30)
	REX_STORE_U64(r30.u32 + 8, ctx.r11.u64);
loc_82251278:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x826a2cd0
	ctx.lr = 0x82251284;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_8226BF68) {
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
	// bl 0x826a1cac
	ctx.lr = 0x8226BF70;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x826a2ca4
	ctx.lr = 0x8226BF78;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// ld r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r4.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,184(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 184);
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// std r11,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// beq cr6,0x8226c1a0
	if (ctx.cr6.eq) goto loc_8226C1A0;
	// li r30,255
	r30.s64 = 255;
	// lbz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stb r30,83(r1)
	REX_STORE_U8(ctx.r1.u32 + 83, r30.u8);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// stb r30,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, r30.u8);
	// addi r29,r11,16592
	r29.s64 = ctx.r11.s64 + 16592;
	// stb r30,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, r30.u8);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// stb r30,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, r30.u8);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// rlwinm r4,r10,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// lfs f0,1104(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 1104);
	ctx.f0.f64 = double(temp.f32);
	// fadds f29,f1,f0
	f29.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// bl 0x8226c1b0
	ctx.lr = 0x8226BFE4;
	sub_8226C1B0(ctx, base);
	// lfs f0,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// lfs f28,712(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 712);
	f28.f64 = double(temp.f32);
	// lwz r11,184(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 184);
	// fadds f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 + f28.f64));
	// lfs f30,284(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 284);
	f30.f64 = double(temp.f32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// li r27,0
	r27.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8226c154
	if (!ctx.cr6.gt) goto loc_8226C154;
	// lfs f27,668(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 668);
	f27.f64 = double(temp.f32);
	// li r26,0
	r26.s64 = 0;
loc_8226C010:
	// lbz r10,1(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 1);
	// li r4,2
	ctx.r4.s64 = 2;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x8226c030
	if (!ctx.cr0.eq) goto loc_8226C030;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8226c030
	if (!ctx.cr6.eq) goto loc_8226C030;
	// li r4,3
	ctx.r4.s64 = 3;
loc_8226C030:
	// lwz r11,2(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2);
	// lwz r10,180(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 180);
	// cmpw cr6,r27,r10
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r10.s32, ctx.xer);
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bne cr6,0x8226c04c
	if (!ctx.cr6.eq) goto loc_8226C04C;
	// lwz r11,10(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 10);
	// b 0x8226c05c
	goto loc_8226C05C;
loc_8226C04C:
	// lwz r11,176(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 176);
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8226c060
	if (!ctx.cr6.lt) goto loc_8226C060;
	// lwz r11,6(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 6);
loc_8226C05C:
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
loc_8226C060:
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8226c1b0
	ctx.lr = 0x8226C078;
	sub_8226C1B0(ctx, base);
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8226c0d0
	if (ctx.cr0.eq) goto loc_8226C0D0;
	// lwz r11,192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 192);
	// li r4,5
	ctx.r4.s64 = 5;
	// lwzx r11,r11,r26
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r26.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8226c09c
	if (!ctx.cr6.eq) goto loc_8226C09C;
	// li r4,6
	ctx.r4.s64 = 6;
loc_8226C09C:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8226c0a8
	if (!ctx.cr6.eq) goto loc_8226C0A8;
	// li r4,7
	ctx.r4.s64 = 7;
loc_8226C0A8:
	// stb r30,83(r1)
	REX_STORE_U8(ctx.r1.u32 + 83, r30.u8);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stb r30,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, r30.u8);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// stb r30,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, r30.u8);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stb r30,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, r30.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fadds f1,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(f31.f64 + f30.f64));
	// bl 0x8226c1b0
	ctx.lr = 0x8226C0D0;
	sub_8226C1B0(ctx, base);
loc_8226C0D0:
	// lwz r11,192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 192);
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + r26.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8226c134
	if (ctx.cr6.lt) goto loc_8226C134;
	// ld r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// stb r30,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, r30.u8);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stb r30,86(r1)
	REX_STORE_U8(ctx.r1.u32 + 86, r30.u8);
	// stb r30,85(r1)
	REX_STORE_U8(ctx.r1.u32 + 85, r30.u8);
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// stb r30,84(r1)
	REX_STORE_U8(ctx.r1.u32 + 84, r30.u8);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// std r10,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfs f13,92(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f13,f27
	ctx.f13.f64 = double(float(ctx.f13.f64 + f27.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// fadds f1,f31,f30
	ctx.f1.f64 = double(float(f31.f64 + f30.f64));
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8226c1b0
	ctx.lr = 0x8226C134;
	sub_8226C1B0(ctx, base);
loc_8226C134:
	// lfs f0,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,184(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 184);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// fadds f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 + f28.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r26,r26,8
	r26.s64 = r26.s64 + 8;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8226c010
	if (ctx.cr6.lt) goto loc_8226C010;
loc_8226C154:
	// lbz r11,1(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 1);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8226c1a0
	if (ctx.cr0.eq) goto loc_8226C1A0;
	// stb r30,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, r30.u8);
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// stb r30,86(r1)
	REX_STORE_U8(ctx.r1.u32 + 86, r30.u8);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// stb r30,85(r1)
	REX_STORE_U8(ctx.r1.u32 + 85, r30.u8);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stb r30,84(r1)
	REX_STORE_U8(ctx.r1.u32 + 84, r30.u8);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// bl 0x8226c1b0
	ctx.lr = 0x8226C18C;
	sub_8226C1B0(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// fadds f1,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(f31.f64 + f30.f64));
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8226c290
	ctx.lr = 0x8226C1A0;
	sub_8226C290(ctx, base);
loc_8226C1A0:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x826a2cf0
	ctx.lr = 0x8226C1AC;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_8227D768) {
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
	// ld r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// bne cr6,0x8227d7a8
	if (!ctx.cr6.eq) goto loc_8227D7A8;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r4,r11,-540
	ctx.r4.s64 = ctx.r11.s64 + -540;
	// addi r3,r10,-364
	ctx.r3.s64 = ctx.r10.s64 + -364;
	// li r5,453
	ctx.r5.s64 = 453;
	// bl 0x821231d0
	ctx.lr = 0x8227D7A8;
	sub_821231D0(ctx, base);
loc_8227D7A8:
	// li r4,-32754
	ctx.r4.s64 = -32754;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8217f4b0
	ctx.lr = 0x8227D7B4;
	sub_8217F4B0(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// stw r30,90(r1)
	REX_STORE_U32(ctx.r1.u32 + 90, r30.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,14
	ctx.r6.s64 = 14;
	// lwz r3,6152(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6152);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// li r12,82
	ctx.r12.s64 = 82;
	// stdx r11,r1,r12
	REX_STORE_U64(ctx.r1.u32 + ctx.r12.u32, ctx.r11.u64);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,172(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 172);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227D7F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

DEFINE_REX_FUNC(sub_82281EC8) {
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
	// bl 0x826a1cb8
	ctx.lr = 0x82281ED0;
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r4,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r3,44
	ctx.r3.s64 = ctx.r3.s64 + 44;
	// lfs f31,15048(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	f31.f64 = double(temp.f32);
	// lfs f0,964(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 964);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f31,4(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// stfs f13,8(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// stfs f31,12(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// stfs f31,16(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 16, temp.u32);
	// stfs f31,20(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 20, temp.u32);
	// stfs f31,24(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 24, temp.u32);
	// stfs f31,28(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 28, temp.u32);
	// stfs f31,32(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 32, temp.u32);
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 36, temp.u32);
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 40, temp.u32);
	// bl 0x8212cf70
	ctx.lr = 0x82281F28;
	sub_8212CF70(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,256
	ctx.r3.s64 = 256;
	// stw r30,56(r31)
	REX_STORE_U32(r31.u32 + 56, r30.u32);
	// addi r11,r31,56
	ctx.r11.s64 = r31.s64 + 56;
	// stw r30,60(r31)
	REX_STORE_U32(r31.u32 + 60, r30.u32);
	// stw r30,64(r31)
	REX_STORE_U32(r31.u32 + 64, r30.u32);
	// bl 0x8269d1d0
	ctx.lr = 0x82281F48;
	sub_8269D1D0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8269d1b8
	ctx.lr = 0x82281F54;
	sub_8269D1B8(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r29,56(r31)
	REX_STORE_U32(r31.u32 + 56, r29.u32);
	// addi r28,r31,72
	r28.s64 = r31.s64 + 72;
	// stw r11,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r11.u32);
	// li r29,4
	r29.s64 = 4;
	// stb r30,68(r31)
	REX_STORE_U8(r31.u32 + 68, r30.u8);
	// stb r30,69(r31)
	REX_STORE_U8(r31.u32 + 69, r30.u8);
	// stb r30,70(r31)
	REX_STORE_U8(r31.u32 + 70, r30.u8);
loc_82281F74:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82120ac0
	ctx.lr = 0x82281F84;
	sub_82120AC0(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r28,r28,28
	r28.s64 = r28.s64 + 28;
	// bge 0x82281f74
	if (!ctx.cr0.lt) goto loc_82281F74;
	// li r10,5
	ctx.r10.s64 = 5;
	// addi r11,r31,208
	ctx.r11.s64 = r31.s64 + 208;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82281F9C:
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
	// stwu r30,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U32(ea, r30.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82281f9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82281F9C;
	// stfs f31,252(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 252, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f31,256(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 256, temp.u32);
	// stfs f31,260(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 260, temp.u32);
	// stw r30,264(r31)
	REX_STORE_U32(r31.u32 + 264, r30.u32);
	// stw r30,268(r31)
	REX_STORE_U32(r31.u32 + 268, r30.u32);
	// stw r30,272(r31)
	REX_STORE_U32(r31.u32 + 272, r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82288FF0) {
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
	ctx.lr = 0x82288FF8;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r11,r11,31396
	ctx.r11.s64 = ctx.r11.s64 + 31396;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r10,r10,-10568
	ctx.r10.s64 = ctx.r10.s64 + -10568;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// addi r9,r9,-8472
	ctx.r9.s64 = ctx.r9.s64 + -8472;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// stw r9,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r8,r8,-14776
	ctx.r8.s64 = ctx.r8.s64 + -14776;
	// addi r11,r11,3392
	ctx.r11.s64 = ctx.r11.s64 + 3392;
	// addi r9,r7,-10304
	ctx.r9.s64 = ctx.r7.s64 + -10304;
	// stw r8,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lis r5,-32241
	ctx.r5.s64 = -2112946176;
	// stw r9,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r11,r6,3420
	ctx.r11.s64 = ctx.r6.s64 + 3420;
	// addi r10,r10,-10296
	ctx.r10.s64 = ctx.r10.s64 + -10296;
	// addi r9,r5,-10012
	ctx.r9.s64 = ctx.r5.s64 + -10012;
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// addi r29,r3,20
	r29.s64 = ctx.r3.s64 + 20;
	// stw r9,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r28,r30
	r28.u64 = r30.u64;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// bl 0x8216ba58
	ctx.lr = 0x82289084;
	sub_8216BA58(ctx, base);
	// addi r3,r31,36
	ctx.r3.s64 = r31.s64 + 36;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82120ac0
	ctx.lr = 0x82289094;
	sub_82120AC0(ctx, base);
	// addi r3,r31,64
	ctx.r3.s64 = r31.s64 + 64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82120ac0
	ctx.lr = 0x822890A4;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r30,92(r31)
	REX_STORE_U32(r31.u32 + 92, r30.u32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// stw r30,96(r31)
	REX_STORE_U32(r31.u32 + 96, r30.u32);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// stw r30,100(r31)
	REX_STORE_U32(r31.u32 + 100, r30.u32);
	// addi r10,r10,-23736
	ctx.r10.s64 = ctx.r10.s64 + -23736;
	// stb r30,108(r31)
	REX_STORE_U8(r31.u32 + 108, r30.u8);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lfs f0,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// stb r30,109(r31)
	REX_STORE_U8(r31.u32 + 109, r30.u8);
	// stfs f0,124(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 124, temp.u32);
	// stb r30,110(r31)
	REX_STORE_U8(r31.u32 + 110, r30.u8);
	// stb r30,111(r31)
	REX_STORE_U8(r31.u32 + 111, r30.u8);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r30,112(r31)
	REX_STORE_U32(r31.u32 + 112, r30.u32);
	// addi r5,r9,-9540
	ctx.r5.s64 = ctx.r9.s64 + -9540;
	// stw r30,116(r31)
	REX_STORE_U32(r31.u32 + 116, r30.u32);
	// stb r30,128(r31)
	REX_STORE_U8(r31.u32 + 128, r30.u8);
	// stw r30,104(r31)
	REX_STORE_U32(r31.u32 + 104, r30.u32);
	// stw r30,132(r31)
	REX_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r30,136(r31)
	REX_STORE_U32(r31.u32 + 136, r30.u32);
	// stw r30,140(r31)
	REX_STORE_U32(r31.u32 + 140, r30.u32);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// ld r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x822568a0
	ctx.lr = 0x82289110;
	sub_822568A0(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r11,r11,-23656
	ctx.r11.s64 = ctx.r11.s64 + -23656;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r10,-23312
	ctx.r5.s64 = ctx.r10.s64 + -23312;
	// ld r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x822568a0
	ctx.lr = 0x82289138;
	sub_822568A0(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r11,r11,-23448
	ctx.r11.s64 = ctx.r11.s64 + -23448;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r10,-23340
	ctx.r5.s64 = ctx.r10.s64 + -23340;
	// ld r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x822568a0
	ctx.lr = 0x82289160;
	sub_822568A0(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r11,r11,-23248
	ctx.r11.s64 = ctx.r11.s64 + -23248;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r10,-9524
	ctx.r5.s64 = ctx.r10.s64 + -9524;
	// ld r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x822568a0
	ctx.lr = 0x82289188;
	sub_822568A0(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r11,r11,-23224
	ctx.r11.s64 = ctx.r11.s64 + -23224;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r10,-9496
	ctx.r5.s64 = ctx.r10.s64 + -9496;
	// ld r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x822568a0
	ctx.lr = 0x822891B0;
	sub_822568A0(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r11,r11,-23200
	ctx.r11.s64 = ctx.r11.s64 + -23200;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r10,-27304
	ctx.r5.s64 = ctx.r10.s64 + -27304;
	// ld r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x822568a0
	ctx.lr = 0x822891D8;
	sub_822568A0(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r11,r11,-23016
	ctx.r11.s64 = ctx.r11.s64 + -23016;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r10,-26364
	ctx.r5.s64 = ctx.r10.s64 + -26364;
	// ld r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x822568a0
	ctx.lr = 0x82289200;
	sub_822568A0(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r11,r11,-23000
	ctx.r11.s64 = ctx.r11.s64 + -23000;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r10,-27088
	ctx.r5.s64 = ctx.r10.s64 + -27088;
	// ld r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x822568a0
	ctx.lr = 0x82289228;
	sub_822568A0(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r11,r11,-22088
	ctx.r11.s64 = ctx.r11.s64 + -22088;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r10,-9468
	ctx.r5.s64 = ctx.r10.s64 + -9468;
	// ld r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x822568a0
	ctx.lr = 0x82289250;
	sub_822568A0(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r11,r11,-22000
	ctx.r11.s64 = ctx.r11.s64 + -22000;
	// addi r5,r10,-17808
	ctx.r5.s64 = ctx.r10.s64 + -17808;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ld r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x822568a0
	ctx.lr = 0x82289278;
	sub_822568A0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,16348
	ctx.r4.s64 = ctx.r11.s64 + 16348;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120600
	ctx.lr = 0x82289288;
	sub_82120600(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,6040(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6040);
	// bl 0x82180e18
	ctx.lr = 0x82289298;
	sub_82180E18(ctx, base);
	// stw r3,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x822892AC;
	sub_82120AC0(ctx, base);
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x822f6280
	ctx.lr = 0x822892B4;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x822892e0
	if (ctx.cr0.eq) goto loc_822892E0;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,3036
	ctx.r4.s64 = ctx.r11.s64 + 3036;
	// bl 0x82120600
	ctx.lr = 0x822892CC;
	sub_82120600(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r28,1
	r28.s64 = 1;
	// bl 0x82208610
	ctx.lr = 0x822892DC;
	sub_82208610(ctx, base);
	// b 0x822892e4
	goto loc_822892E4;
loc_822892E0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_822892E4:
	// clrlwi. r11,r28,31
	ctx.r11.u64 = r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r3,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r3.u32);
	// beq 0x82289300
	if (ctx.cr0.eq) goto loc_82289300;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82120ac0
	ctx.lr = 0x82289300;
	sub_82120AC0(ctx, base);
loc_82289300:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8229F378) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f12,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lfs f10,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// addi r9,r11,16592
	ctx.r9.s64 = ctx.r11.s64 + 16592;
	// lfs f11,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// addi r8,r1,-32
	ctx.r8.s64 = ctx.r1.s64 + -32;
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// addi r7,r1,-32
	ctx.r7.s64 = ctx.r1.s64 + -32;
	// lfs f13,15048(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	ctx.f13.f64 = double(temp.f32);
	// addi r6,r1,-16
	ctx.r6.s64 = ctx.r1.s64 + -16;
	// lfs f0,12(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// stfs f12,-32(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// fsubs f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// stfs f11,-28(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + -28, temp.u32);
	// fsubs f12,f10,f0
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// stfs f12,-24(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -24, temp.u32);
	// stfs f13,-20(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -20, temp.u32);
	// ld r11,8(r8)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r8.u32 + 8);
	// ld r8,0(r8)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// stfs f13,-20(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -20, temp.u32);
	// std r11,24(r3)
	REX_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// stfs f13,-4(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// std r8,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r8.u64);
	// lfs f11,8(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r3,48
	ctx.r11.s64 = ctx.r3.s64 + 48;
	// lfs f12,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fadds f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fadds f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f12,-28(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -28, temp.u32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,-32(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// stfs f11,-24(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + -24, temp.u32);
	// ld r8,8(r7)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r7.u32 + 8);
	// ld r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r7.u32 + 0);
	// lfs f0,940(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 940);
	ctx.f0.f64 = double(temp.f32);
	// std r11,32(r3)
	REX_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// std r8,40(r3)
	REX_STORE_U64(ctx.r3.u32 + 40, ctx.r8.u64);
	// lfs f11,36(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,20(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,16(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,32(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f9,40(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,24(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f9,f9,f8
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f8.f64));
	// fsubs f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// stb r10,72(r3)
	REX_STORE_U8(ctx.r3.u32 + 72, ctx.r10.u8);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fdivs f12,f0,f9
	ctx.f12.f64 = double(float(ctx.f0.f64 / ctx.f9.f64));
	// stfs f12,-8(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// fdivs f12,f0,f11
	ctx.f12.f64 = double(float(ctx.f0.f64 / ctx.f11.f64));
	// stfs f12,-12(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// ld r10,8(r6)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r6.u32 + 8);
	// ld r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r6.u32 + 0);
	// std r11,48(r3)
	REX_STORE_U64(ctx.r3.u32 + 48, ctx.r11.u64);
	// std r10,56(r3)
	REX_STORE_U64(ctx.r3.u32 + 56, ctx.r10.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822A6810) {
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
	// bl 0x822a6880
	ctx.lr = 0x822A6830;
	sub_822A6880(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822a6864
	if (ctx.cr0.eq) goto loc_822A6864;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x822a6864
	if (ctx.cr6.eq) goto loc_822A6864;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// lwz r3,-4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + -4);
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
	ctx.lr = 0x822A6864;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822A6864:
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

DEFINE_REX_FUNC(sub_822AA9B8) {
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
	// lbz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,6752
	ctx.r11.s64 = ctx.r11.s64 + 6752;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x822aaa04
	if (ctx.cr0.eq) goto loc_822AAA04;
	// lwz r4,12(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822aaa04
	if (ctx.cr6.eq) goto loc_822AAA04;
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822AAA04;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822AAA04:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r11,r11,4552
	ctx.r11.s64 = ctx.r11.s64 + 4552;
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

DEFINE_REX_FUNC(sub_822AE8E8) {
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
	// bl 0x826a1ca0
	ctx.lr = 0x822AE8F0;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// li r22,1
	r22.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r22,112(r1)
	REX_STORE_U8(ctx.r1.u32 + 112, r22.u8);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r8,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// stw r9,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// li r26,0
	r26.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822aea74
	if (!ctx.cr6.gt) goto loc_822AEA74;
	// li r27,0
	r27.s64 = 0;
	// lis r24,-32126
	r24.s64 = -2105409536;
	// lis r25,-32106
	r25.s64 = -2104098816;
loc_822AE938:
	// lwz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 16);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// add r29,r27,r11
	r29.u64 = r27.u64 + ctx.r11.u64;
	// bne cr6,0x822aea20
	if (!ctx.cr6.eq) goto loc_822AEA20;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r30,r10,1,0,30
	r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x822ae958
	if (!ctx.cr6.eq) goto loc_822AE958;
	// mr r30,r22
	r30.u64 = r22.u64;
loc_822AE958:
	// cmpw cr6,r9,r30
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r30.s32, ctx.xer);
	// bge cr6,0x822aea20
	if (!ctx.cr6.lt) goto loc_822AEA20;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x822ae980
	if (ctx.cr6.eq) goto loc_822AE980;
	// rlwinm r3,r30,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x822c1a70
	ctx.lr = 0x822AE970;
	sub_822C1A70(ctx, base);
	// lwz r8,108(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x822ae984
	goto loc_822AE984;
loc_822AE980:
	// li r31,0
	r31.s64 = 0;
loc_822AE984:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x822ae9d8
	if (!ctx.cr6.gt) goto loc_822AE9D8;
	// addi r11,r31,8
	ctx.r11.s64 = r31.s64 + 8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// subfic r9,r31,-8
	ctx.xer.ca = r31.u32 <= 4294967288;
	ctx.r9.u64 = static_cast<uint64_t>(-8) - r31.u64;
loc_822AE998:
	// addic. r10,r11,-8
	ctx.xer.ca = ctx.r11.u32 > 7;
	ctx.r10.s64 = ctx.r11.s64 + -8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822ae9cc
	if (ctx.cr0.eq) goto loc_822AE9CC;
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r8,-8(r11)
	REX_STORE_U32(ctx.r11.u32 + -8, ctx.r8.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,-4(r11)
	REX_STORE_U32(ctx.r11.u32 + -4, ctx.r8.u32);
	// lwz r8,8(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r8,108(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
loc_822AE9CC:
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x822ae998
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822AE998;
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
loc_822AE9D8:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822aea0c
	if (ctx.cr6.eq) goto loc_822AEA0C;
	// lbz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 112);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822aea0c
	if (ctx.cr0.eq) goto loc_822AEA0C;
	// lwz r11,112(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 112);
	// lwz r10,-19400(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + -19400);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r3,-4(r8)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + -4);
	// stw r11,112(r25)
	REX_STORE_U32(r25.u32 + 112, ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822AEA08;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
loc_822AEA0C:
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// stb r22,112(r1)
	REX_STORE_U8(ctx.r1.u32 + 112, r22.u8);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// stw r31,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// stw r30,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r30.u32);
loc_822AEA20:
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add. r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822aea58
	if (ctx.cr0.eq) goto loc_822AEA58;
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
	// lwz r8,108(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r9,104(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
loc_822AEA58:
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r27,r27,16
	r27.s64 = r27.s64 + 16;
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822ae938
	if (ctx.cr6.lt) goto loc_822AE938;
loc_822AEA74:
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x822aeac0
	if (!ctx.cr6.gt) goto loc_822AEAC0;
	// li r31,0
	r31.s64 = 0;
loc_822AEA84:
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// add r11,r31,r8
	ctx.r11.u64 = r31.u64 + ctx.r8.u64;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// lwzx r4,r31,r8
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + ctx.r8.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822AEAA8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lwz r8,108(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x822aea84
	if (ctx.cr6.lt) goto loc_822AEA84;
loc_822AEAC0:
	// lwz r11,56(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 56);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822aeafc
	if (!ctx.cr6.gt) goto loc_822AEAFC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_822AEAD4:
	// lwz r10,64(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 64);
	// li r8,-1
	ctx.r8.s64 = -1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwx r8,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,56(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 56);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x822aead4
	if (ctx.cr6.lt) goto loc_822AEAD4;
	// lwz r8,108(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
loc_822AEAFC:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// stb r9,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// lbz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// ble cr6,0x822aeb2c
	if (!ctx.cr6.gt) goto loc_822AEB2C;
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82292ce8
	ctx.lr = 0x822AEB24;
	sub_82292CE8(ctx, base);
	// lwz r8,108(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
loc_822AEB2C:
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x822aeb78
	if (!ctx.cr6.gt) goto loc_822AEB78;
	// li r31,0
	r31.s64 = 0;
	// b 0x822aeb44
	goto loc_822AEB44;
loc_822AEB40:
	// lwz r8,108(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
loc_822AEB44:
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// add r11,r31,r8
	ctx.r11.u64 = r31.u64 + ctx.r8.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwzx r4,r31,r8
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + ctx.r8.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822AEB64;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822aeb40
	if (ctx.cr6.lt) goto loc_822AEB40;
loc_822AEB78:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821eced8
	ctx.lr = 0x822AEB80;
	sub_821ECED8(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_822C2230) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10568(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10568);
	// rlwinm r3,r11,29,24,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0xFF;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C2388) {
	REX_FUNC_PROLOGUE();
	// lwz r11,12024(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12024);
	// rlwinm r3,r11,27,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C2598) {
	REX_FUNC_PROLOGUE();
	// lwz r10,12024(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12024);
	// lwz r11,12028(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12028);
	// rlwimi r10,r4,24,3,7
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0x1F000000) | (ctx.r10.u64 & 0xFFFFFFFFE0FFFFFF);
	// rlwinm. r9,r11,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r10,12024(r3)
	REX_STORE_U32(ctx.r3.u32 + 12024, ctx.r10.u32);
	// beqlr 
	if (ctx.cr0.eq) return;
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
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

DEFINE_REX_FUNC(sub_822C2F80) {
	REX_FUNC_PROLOGUE();
	// lwz r3,12044(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 12044);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C3130) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10540(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10540);
	// rlwinm r10,r4,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r11,r11,0,24,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFF0FF;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,10540(r3)
	REX_STORE_U32(ctx.r3.u32 + 10540, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 8192;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C3758) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,10620(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 10620);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C3DF0) {
	REX_FUNC_PROLOGUE();
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lbz r11,12178(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 12178);
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C4288) {
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

DEFINE_REX_FUNC(sub_822C6130) {
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
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// lis r8,768
	ctx.r8.s64 = 50331648;
	// lwz r9,28(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// rlwinm r6,r11,0,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// rlwinm r9,r9,0,6,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x3FFFFFC;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x822c5960
	ctx.lr = 0x822C616C;
	sub_822C5960(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C98C0) {
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
	ctx.lr = 0x822C98C8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	r27.s64 = 0;
	// lhz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// std r27,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, r27.u64);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// std r27,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, r27.u64);
	// mr r30,r27
	r30.u64 = r27.u64;
	// mr r28,r27
	r28.u64 = r27.u64;
	// b 0x822c9918
	goto loc_822C9918;
loc_822C98F4:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x822c9900
	if (ctx.cr6.gt) goto loc_822C9900;
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
loc_822C9900:
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lhzu r9,12(r10)
	ea = 12 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// li r7,255
	ctx.r7.s64 = 255;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// stbx r7,r11,r8
	REX_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r7.u8);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_822C9918:
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x822c98f4
	if (!ctx.cr6.eq) goto loc_822C98F4;
	// mulli r11,r30,12
	ctx.r11.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(12));
	// addi r5,r11,56
	ctx.r5.s64 = ctx.r11.s64 + 56;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826a2e60
	ctx.lr = 0x822C9934;
	sub_826A2E60(ctx, base);
	// ld r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// ld r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// lis r9,16
	ctx.r9.s64 = 1048576;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r30,24(r31)
	REX_STORE_U32(r31.u32 + 24, r30.u32);
	// ori r9,r9,5
	ctx.r9.u64 = ctx.r9.u64 | 5;
	// stw r28,28(r31)
	REX_STORE_U32(r31.u32 + 28, r28.u32);
	// lis r7,-1
	ctx.r7.s64 = -65536;
	// stw r8,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r8.u32);
	// stw r9,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// stw r7,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r7.u32);
	// stw r27,48(r31)
	REX_STORE_U32(r31.u32 + 48, r27.u32);
	// std r11,32(r31)
	REX_STORE_U64(r31.u32 + 32, ctx.r11.u64);
	// std r10,40(r31)
	REX_STORE_U64(r31.u32 + 40, ctx.r10.u64);
	// beq cr6,0x822c99a4
	if (ctx.cr6.eq) goto loc_822C99A4;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// addi r10,r31,52
	ctx.r10.s64 = r31.s64 + 52;
loc_822C997C:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// stw r9,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// bne 0x822c997c
	if (!ctx.cr0.eq) goto loc_822C997C;
loc_822C99A4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_822CE208) {
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
	ctx.lr = 0x822CE210;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// stw r30,19900(r3)
	REX_STORE_U32(ctx.r3.u32 + 19900, r30.u32);
	// addi r29,r3,16
	r29.s64 = ctx.r3.s64 + 16;
	// stw r30,19892(r3)
	REX_STORE_U32(ctx.r3.u32 + 19892, r30.u32);
	// li r28,2
	r28.s64 = 2;
loc_822CE230:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822ca1b0
	ctx.lr = 0x822CE238;
	sub_822CA1B0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// stw r11,9916(r29)
	REX_STORE_U32(r29.u32 + 9916, ctx.r11.u32);
	// addi r29,r29,9936
	r29.s64 = r29.s64 + 9936;
	// bne 0x822ce230
	if (!ctx.cr0.eq) goto loc_822CE230;
	// lwz r3,19896(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 19896);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ce26c
	if (ctx.cr6.eq) goto loc_822CE26C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822CE268;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,19896(r31)
	REX_STORE_U32(r31.u32 + 19896, r30.u32);
loc_822CE26C:
	// li r27,-1
	r27.s64 = -1;
	// stw r26,19892(r31)
	REX_STORE_U32(r31.u32 + 19892, r26.u32);
	// stw r30,19904(r31)
	REX_STORE_U32(r31.u32 + 19904, r30.u32);
	// addi r29,r31,9936
	r29.s64 = r31.s64 + 9936;
	// stw r27,19936(r31)
	REX_STORE_U32(r31.u32 + 19936, r27.u32);
	// li r28,2
	r28.s64 = 2;
	// stw r30,19932(r31)
	REX_STORE_U32(r31.u32 + 19932, r30.u32);
	// stw r30,19944(r31)
	REX_STORE_U32(r31.u32 + 19944, r30.u32);
	// stw r30,19952(r31)
	REX_STORE_U32(r31.u32 + 19952, r30.u32);
loc_822CE290:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r29,-9920
	ctx.r3.s64 = r29.s64 + -9920;
	// bl 0x822ca270
	ctx.lr = 0x822CE29C;
	sub_822CA270(ctx, base);
	// stw r31,4(r29)
	REX_STORE_U32(r29.u32 + 4, r31.u32);
	// stw r30,0(r29)
	REX_STORE_U32(r29.u32 + 0, r30.u32);
	// li r5,9120
	ctx.r5.s64 = 9120;
	// std r30,-448(r29)
	REX_STORE_U64(r29.u32 + -448, r30.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// std r30,-440(r29)
	REX_STORE_U64(r29.u32 + -440, r30.u64);
	// addi r3,r29,-9568
	ctx.r3.s64 = r29.s64 + -9568;
	// std r30,-432(r29)
	REX_STORE_U64(r29.u32 + -432, r30.u64);
	// bl 0x826a2e60
	ctx.lr = 0x822CE2C0;
	sub_826A2E60(ctx, base);
	// li r5,288
	ctx.r5.s64 = 288;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r29,-360
	ctx.r3.s64 = r29.s64 + -360;
	// bl 0x826a2e60
	ctx.lr = 0x822CE2D0;
	sub_826A2E60(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r29,-72
	ctx.r3.s64 = r29.s64 + -72;
	// bl 0x826a2e60
	ctx.lr = 0x822CE2E0;
	sub_826A2E60(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r29,-40
	ctx.r3.s64 = r29.s64 + -40;
	// bl 0x826a2e60
	ctx.lr = 0x822CE2F0;
	sub_826A2E60(ctx, base);
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r29,-424
	ctx.r3.s64 = r29.s64 + -424;
	// bl 0x826a2e60
	ctx.lr = 0x822CE300;
	sub_826A2E60(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// addi r29,r29,9936
	r29.s64 = r29.s64 + 9936;
	// bne 0x822ce290
	if (!ctx.cr0.eq) goto loc_822CE290;
	// stw r30,19912(r31)
	REX_STORE_U32(r31.u32 + 19912, r30.u32);
	// lwz r11,19892(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 19892);
	// rlwinm r11,r11,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// stw r30,19924(r31)
	REX_STORE_U32(r31.u32 + 19924, r30.u32);
	// stw r30,19896(r31)
	REX_STORE_U32(r31.u32 + 19896, r30.u32);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 & r27.u64;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_822D8F20) {
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
	// lwz r11,152(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 152);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822d8f90
	if (!ctx.cr6.eq) goto loc_822D8F90;
	// bl 0x82793a84
	ctx.lr = 0x822D8F48;
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x822d8f5c
	if (!ctx.cr6.eq) goto loc_822D8F5C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,2064(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 2064);
	// b 0x822d8f64
	goto loc_822D8F64;
loc_822D8F5C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,2068(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 2068);
loc_822D8F64:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r30,r11,15184
	r30.s64 = ctx.r11.s64 + 15184;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827938a4
	ctx.lr = 0x822D8F74;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,176(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 176);
	// lwz r3,164(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 164);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D8F84;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827938b4
	ctx.lr = 0x822D8F8C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// b 0x822d9000
	goto loc_822D9000;
loc_822D8F90:
	// lwz r9,156(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 156);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822d8fe8
	if (ctx.cr6.eq) goto loc_822D8FE8;
	// lis r10,16384
	ctx.r10.s64 = 1073741824;
	// lwz r11,152(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 152);
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
	// addi r5,r9,512
	ctx.r5.s64 = ctx.r9.s64 + 512;
	// rlwinm r9,r10,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r8,r10,3
	ctx.r8.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// rlwinm r10,r5,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x1000;
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
	// bl 0x822daf40
	ctx.lr = 0x822D8FE8;
	sub_822DAF40(ctx, base);
loc_822D8FE8:
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// rlwinm. r11,r11,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822d9000
	if (!ctx.cr0.eq) goto loc_822D9000;
	// lis r4,-20096
	ctx.r4.s64 = -1317011456;
	// lwz r3,152(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 152);
	// bl 0x823f0350
	ctx.lr = 0x822D9000;
	sub_823F0350(ctx, base);
loc_822D9000:
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

DEFINE_REX_FUNC(sub_822E01C8) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82793a84
	ctx.lr = 0x822E01E4;
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x822e01f8
	if (!ctx.cr6.eq) goto loc_822E01F8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,2064(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 2064);
	// b 0x822e0200
	goto loc_822E0200;
loc_822E01F8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,2068(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 2068);
loc_822E0200:
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r30,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// bl 0x823ecc50
	ctx.lr = 0x822E0210;
	sub_823ECC50(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// ld r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// sradi r10,r10,10
	ctx.xer.ca = (ctx.r10.s64 < 0) & ((ctx.r10.u64 & 0x3FF) != 0);
	ctx.r10.s64 = ctx.r10.s64 >> 10;
	// stw r10,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// lwz r11,2272(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 2272);
	// lwz r10,21884(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 21884);
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e024c
	if (ctx.cr6.eq) goto loc_822E024C;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// li r3,93
	ctx.r3.s64 = 93;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822E024C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822E024C:
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

DEFINE_REX_FUNC(sub_822E3F20) {
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
	// bl 0x826a1c94
	ctx.lr = 0x822E3F28;
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24176(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24176);
	// addi r31,r3,23572
	r31.s64 = ctx.r3.s64 + 23572;
	// stw r5,532(r1)
	REX_STORE_U32(ctx.r1.u32 + 532, ctx.r5.u32);
	// clrlwi r11,r11,3
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// addi r10,r31,372
	ctx.r10.s64 = r31.s64 + 372;
	// stw r11,24176(r3)
	REX_STORE_U32(ctx.r3.u32 + 24176, ctx.r11.u32);
	// srawi. r7,r11,29
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 29;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lwz r6,36(r4)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 36);
	// addi r9,r31,368
	ctx.r9.s64 = r31.s64 + 368;
	// lwz r11,40(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 40);
	// rlwinm r11,r11,2,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x2;
	// clrlwi r8,r6,19
	ctx.r8.u64 = ctx.r6.u32 & 0x1FFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r6,r6,19,19,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 19) & 0x1FFF;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// addi r6,r8,31
	ctx.r6.s64 = ctx.r8.s64 + 31;
	// sth r8,23940(r3)
	REX_STORE_U16(ctx.r3.u32 + 23940, ctx.r8.u16);
	// addi r5,r11,31
	ctx.r5.s64 = ctx.r11.s64 + 31;
	// sth r11,23942(r3)
	REX_STORE_U16(ctx.r3.u32 + 23942, ctx.r11.u16);
	// rlwinm r6,r6,0,16,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFE0;
	// rlwinm r8,r5,0,16,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFE0;
	// sth r6,23944(r3)
	REX_STORE_U16(ctx.r3.u32 + 23944, ctx.r6.u16);
	// sth r8,23946(r3)
	REX_STORE_U16(ctx.r3.u32 + 23946, ctx.r8.u16);
	// bne 0x822e4124
	if (!ctx.cr0.eq) goto loc_822E4124;
	// lhz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r7,-32126
	ctx.r7.s64 = -2105409536;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// addi r6,r9,16592
	ctx.r6.s64 = ctx.r9.s64 + 16592;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// frsp f10,f0
	ctx.f10.f64 = double(float(ctx.f0.f64));
	// lfs f0,12(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,896(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 896);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r31,408
	ctx.r8.s64 = r31.s64 + 408;
	// lfs f12,904(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 904);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// li r11,16
	ctx.r11.s64 = 16;
	// stfs f12,92(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r9,r9,15048
	ctx.r9.s64 = ctx.r9.s64 + 15048;
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// li r4,-4464
	ctx.r4.s64 = -4464;
	// lfs f12,-19392(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + -19392);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r9,-4464
	ctx.r3.s64 = ctx.r9.s64 + -4464;
	// lfs f11,52(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// addi r6,r9,-4464
	ctx.r6.s64 = ctx.r9.s64 + -4464;
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r7,r31,424
	ctx.r7.s64 = r31.s64 + 424;
	// stfs f11,108(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r30,r9,-4464
	r30.s64 = ctx.r9.s64 + -4464;
	// fdivs f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f10.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lvx128 v63,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r29,r6,16
	r29.s64 = ctx.r6.s64 + 16;
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r5,r9,-4464
	ctx.r5.s64 = ctx.r9.s64 + -4464;
	// stvlx128 v63,r0,r8
	ea = ctx.r8.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// addi r6,r31,440
	ctx.r6.s64 = r31.s64 + 440;
	// stvrx128 v63,r8,r11
	ea = ctx.r8.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// addi r8,r9,-4464
	ctx.r8.s64 = ctx.r9.s64 + -4464;
	// lvlx128 v63,r9,r4
	temp.u32 = ctx.r9.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r4,r5,32
	ctx.r4.s64 = ctx.r5.s64 + 32;
	// lvrx128 v62,r11,r3
	temp.u32 = ctx.r11.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v63,v63,v62
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8)));
	// stvlx128 v63,r0,r7
	ea = ctx.r7.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// li r3,32
	ctx.r3.s64 = 32;
	// stvrx128 v63,r7,r11
	ea = ctx.r7.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// lvlx128 v62,r30,r11
	temp.u32 = r30.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r9,r31,456
	ctx.r9.s64 = r31.s64 + 456;
	// lvrx128 v63,r11,r29
	temp.u32 = ctx.r11.u32 + r29.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v63,v62,v63
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// stvlx128 v63,r0,r6
	ea = ctx.r6.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// addi r7,r7,19488
	ctx.r7.s64 = ctx.r7.s64 + 19488;
	// stvrx128 v63,r6,r11
	ea = ctx.r6.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// addi r5,r31,472
	ctx.r5.s64 = r31.s64 + 472;
	// lvlx128 v62,r8,r3
	temp.u32 = ctx.r8.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// lvrx128 v63,r11,r4
	temp.u32 = ctx.r11.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v63,v62,v63
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// stvlx128 v63,r0,r9
	ea = ctx.r9.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// addi r6,r6,19472
	ctx.r6.s64 = ctx.r6.s64 + 19472;
	// stvrx128 v63,r9,r11
	ea = ctx.r9.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// addi r4,r31,488
	ctx.r4.s64 = r31.s64 + 488;
	// lvx128 v62,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvlx128 v62,r0,r5
	ea = ctx.r5.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v62.u8[15 - i]);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lvx128 v63,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r30,-32241
	r30.s64 = -2112946176;
	// stvrx128 v62,r5,r11
	ea = ctx.r5.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v62.u8[i]);
	// addi r29,r9,19456
	r29.s64 = ctx.r9.s64 + 19456;
	// lvx128 v62,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r31,504
	ctx.r3.s64 = r31.s64 + 504;
	// stvlx128 v62,r0,r4
	ea = ctx.r4.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v62.u8[15 - i]);
	// li r8,12
	ctx.r8.s64 = 12;
	// li r7,48
	ctx.r7.s64 = 48;
	// stvrx128 v62,r4,r11
	ea = ctx.r4.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v62.u8[i]);
	// addi r9,r31,520
	ctx.r9.s64 = r31.s64 + 520;
	// addi r30,r30,19440
	r30.s64 = r30.s64 + 19440;
	// lvx128 v62,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r5,-32241
	ctx.r5.s64 = -2112946176;
	// stvlx128 v62,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v62.u8[15 - i]);
	// addi r6,r31,536
	ctx.r6.s64 = r31.s64 + 536;
	// stvrx128 v62,r3,r11
	ea = ctx.r3.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v62.u8[i]);
	// addi r4,r5,19424
	ctx.r4.s64 = ctx.r5.s64 + 19424;
	// addi r5,r31,552
	ctx.r5.s64 = r31.s64 + 552;
	// lvx128 v62,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvlx128 v62,r0,r9
	ea = ctx.r9.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v62.u8[15 - i]);
	// stvrx128 v62,r9,r11
	ea = ctx.r9.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v62.u8[i]);
	// stvlx128 v63,r0,r6
	ea = ctx.r6.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// stvrx128 v63,r6,r11
	ea = ctx.r6.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// lvx128 v63,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvlx128 v63,r0,r5
	ea = ctx.r5.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// stvrx128 v63,r5,r11
	ea = ctx.r5.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// lhz r11,2(r10)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// lhz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r11,r11,27,5,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFE0;
	// b 0x822e42ac
	goto loc_822E42AC;
loc_822E4124:
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// bne cr6,0x822e42b4
	if (!ctx.cr6.eq) goto loc_822E42B4;
	// lhz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// addi r9,r9,16592
	ctx.r9.s64 = ctx.r9.s64 + 16592;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r23,r1,80
	r23.s64 = ctx.r1.s64 + 80;
	// addi r6,r31,408
	ctx.r6.s64 = r31.s64 + 408;
	// lis r5,-32126
	ctx.r5.s64 = -2105409536;
	// lfs f10,904(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f10.f64 = double(temp.f32);
	// li r11,16
	ctx.r11.s64 = 16;
	// lfs f12,12(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r31,440
	ctx.r4.s64 = r31.s64 + 440;
	// lfs f11,52(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// li r27,32
	r27.s64 = 32;
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r3,r31,456
	ctx.r3.s64 = r31.s64 + 456;
	// lfs f13,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r5,-12860
	ctx.r9.s64 = ctx.r5.s64 + -12860;
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r5,r31,424
	ctx.r5.s64 = r31.s64 + 424;
	// addi r29,r9,16
	r29.s64 = ctx.r9.s64 + 16;
	// addi r28,r9,32
	r28.s64 = ctx.r9.s64 + 32;
	// addi r30,r31,472
	r30.s64 = r31.s64 + 472;
	// lis r25,-32241
	r25.s64 = -2112946176;
	// lis r22,-32241
	r22.s64 = -2112946176;
	// addi r25,r25,19456
	r25.s64 = r25.s64 + 19456;
	// addi r22,r22,19440
	r22.s64 = r22.s64 + 19440;
	// lis r21,-32241
	r21.s64 = -2112946176;
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f9,f0
	ctx.f9.f64 = double(float(ctx.f0.f64));
	// lfs f0,15048(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r26,r8,19488
	r26.s64 = ctx.r8.s64 + 19488;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// addi r24,r8,19472
	r24.s64 = ctx.r8.s64 + 19472;
	// li r8,3
	ctx.r8.s64 = 3;
	// fmuls f0,f9,f10
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// fdivs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fdivs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lvx128 v63,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r7,12
	ctx.r7.s64 = 12;
	// stvlx128 v63,r0,r6
	ea = ctx.r6.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// stvrx128 v63,r6,r11
	ea = ctx.r6.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// addi r6,r31,520
	ctx.r6.s64 = r31.s64 + 520;
	// lvlx128 v62,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v63,r11,r9
	temp.u32 = ctx.r11.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v63,v62,v63
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// stvlx128 v63,r0,r5
	ea = ctx.r5.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// stvrx128 v63,r5,r11
	ea = ctx.r5.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// lvlx128 v63,r9,r11
	temp.u32 = ctx.r9.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v62,r11,r29
	temp.u32 = ctx.r11.u32 + r29.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v63,v63,v62
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8)));
	// stvlx128 v63,r0,r4
	ea = ctx.r4.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// stvrx128 v63,r4,r11
	ea = ctx.r4.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// lvlx128 v63,r9,r27
	temp.u32 = ctx.r9.u32 + r27.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r9,r31,488
	ctx.r9.s64 = r31.s64 + 488;
	// lvrx128 v62,r11,r28
	temp.u32 = ctx.r11.u32 + r28.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v63,v63,v62
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8)));
	// stvlx128 v63,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// stvrx128 v63,r3,r11
	ea = ctx.r3.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// lvx128 v63,r0,r26
	ea = (r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvlx128 v63,r0,r30
	ea = r30.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// stvrx128 v63,r30,r11
	ea = r30.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// lvx128 v63,r0,r24
	ea = (r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvlx128 v63,r0,r9
	ea = ctx.r9.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// stvrx128 v63,r9,r11
	ea = ctx.r9.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// addi r9,r31,504
	ctx.r9.s64 = r31.s64 + 504;
	// lvx128 v63,r0,r23
	ea = (r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r0,r25
	ea = (r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvlx128 v62,r0,r9
	ea = ctx.r9.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v62.u8[15 - i]);
	// stvrx128 v62,r9,r11
	ea = ctx.r9.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v62.u8[i]);
	// addi r5,r31,536
	ctx.r5.s64 = r31.s64 + 536;
	// lvx128 v62,r0,r22
	ea = (r22.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r21,19424
	ctx.r4.s64 = r21.s64 + 19424;
	// stvlx128 v62,r0,r6
	ea = ctx.r6.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v62.u8[15 - i]);
	// stvrx128 v62,r6,r11
	ea = ctx.r6.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v62.u8[i]);
	// addi r9,r31,552
	ctx.r9.s64 = r31.s64 + 552;
	// stvlx128 v63,r0,r5
	ea = ctx.r5.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// stvrx128 v63,r5,r11
	ea = ctx.r5.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// lvx128 v63,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvlx128 v63,r0,r9
	ea = ctx.r9.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// stvrx128 v63,r9,r11
	ea = ctx.r9.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// lhz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// lhz r10,2(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// rlwinm r11,r11,23,9,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x7FFFFE;
loc_822E42AC:
	// stw r11,376(r31)
	REX_STORE_U32(r31.u32 + 376, ctx.r11.u32);
	// b 0x822e440c
	goto loc_822E440C;
loc_822E42B4:
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// bne cr6,0x822e4404
	if (!ctx.cr6.eq) goto loc_822E4404;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// li r11,16
	ctx.r11.s64 = 16;
	// addi r10,r10,-12764
	ctx.r10.s64 = ctx.r10.s64 + -12764;
	// addi r8,r31,424
	ctx.r8.s64 = r31.s64 + 424;
	// addi r7,r10,16
	ctx.r7.s64 = ctx.r10.s64 + 16;
	// addi r6,r31,440
	ctx.r6.s64 = r31.s64 + 440;
	// addi r4,r10,32
	ctx.r4.s64 = ctx.r10.s64 + 32;
	// lvrx128 v63,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// li r27,32
	r27.s64 = 32;
	// lvlx128 v62,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r5,r31,456
	ctx.r5.s64 = r31.s64 + 456;
	// vor128 v63,v62,v63
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// lis r3,-32241
	ctx.r3.s64 = -2112946176;
	// lis r29,-32241
	r29.s64 = -2112946176;
	// addi r26,r3,19488
	r26.s64 = ctx.r3.s64 + 19488;
	// addi r3,r31,472
	ctx.r3.s64 = r31.s64 + 472;
	// stvlx128 v63,r0,r8
	ea = ctx.r8.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// addi r25,r29,19408
	r25.s64 = r29.s64 + 19408;
	// stvrx128 v63,r8,r11
	ea = ctx.r8.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// lvlx128 v63,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r30,r31,488
	r30.s64 = r31.s64 + 488;
	// addi r24,r8,19392
	r24.s64 = ctx.r8.s64 + 19392;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// addi r29,r31,504
	r29.s64 = r31.s64 + 504;
	// addi r28,r31,520
	r28.s64 = r31.s64 + 520;
	// mr r21,r11
	r21.u64 = ctx.r11.u64;
	// mr r22,r11
	r22.u64 = ctx.r11.u64;
	// lvrx128 v62,r11,r7
	temp.u32 = ctx.r11.u32 + ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// vor128 v63,v63,v62
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8)));
	// stvlx128 v63,r0,r6
	ea = ctx.r6.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// addi r19,r7,19360
	r19.s64 = ctx.r7.s64 + 19360;
	// stvrx128 v63,r6,r11
	ea = ctx.r6.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// addi r6,r8,19376
	ctx.r6.s64 = ctx.r8.s64 + 19376;
	// lvlx128 v63,r10,r27
	temp.u32 = ctx.r10.u32 + r27.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// addi r10,r31,552
	ctx.r10.s64 = r31.s64 + 552;
	// addi r23,r8,19344
	r23.s64 = ctx.r8.s64 + 19344;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r20,r8,19328
	r20.s64 = ctx.r8.s64 + 19328;
	// li r8,3
	ctx.r8.s64 = 3;
	// lvrx128 v62,r11,r4
	temp.u32 = ctx.r11.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v63,v63,v62
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8)));
	// stvlx128 v63,r0,r5
	ea = ctx.r5.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// stvrx128 v63,r5,r11
	ea = ctx.r5.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// lvx128 v63,r0,r26
	ea = (r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvlx128 v63,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// stvrx128 v63,r3,r11
	ea = ctx.r3.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// lvx128 v63,r0,r25
	ea = (r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvlx128 v63,r0,r30
	ea = r30.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// stvrx128 v63,r30,r11
	ea = r30.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// lvx128 v63,r0,r24
	ea = (r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvlx128 v63,r0,r29
	ea = r29.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// stvrx128 v63,r29,r11
	ea = r29.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// lvx128 v63,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvlx128 v63,r0,r28
	ea = r28.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// stvrx128 v63,r28,r11
	ea = r28.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// lvx128 v63,r0,r23
	ea = (r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvlx128 v63,r0,r10
	ea = ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// stvrx128 v63,r10,r11
	ea = ctx.r10.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// addi r11,r31,408
	ctx.r11.s64 = r31.s64 + 408;
	// lvx128 v63,r0,r20
	ea = (r20.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,48
	ctx.r10.s64 = 48;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// stvlx128 v63,r0,r11
	ea = ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// stvrx128 v63,r11,r21
	ea = ctx.r11.u32 + r21.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// addi r11,r31,536
	ctx.r11.s64 = r31.s64 + 536;
	// lvx128 v63,r0,r19
	ea = (r19.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvlx128 v63,r0,r11
	ea = ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// stvrx128 v63,r11,r21
	ea = ctx.r11.u32 + r21.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// lhz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r9.u32 + 0);
	// lhz r11,2(r9)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r9.u32 + 2);
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
	// addi r10,r10,-80
	ctx.r10.s64 = ctx.r10.s64 + -80;
	// divwu r11,r11,r5
	ctx.r11.u64 = uint32_t(ctx.r5.u32 ? ctx.r11.u32 / ctx.r5.u32 : 0);
	// divwu r10,r10,r5
	ctx.r10.u64 = uint32_t(ctx.r5.u32 ? ctx.r10.u32 / ctx.r5.u32 : 0);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// b 0x822e42ac
	goto loc_822E42AC;
loc_822E4404:
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_822E440C:
	// lwz r9,376(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 376);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// li r5,260
	ctx.r5.s64 = 260;
	// lwz r4,532(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 532);
	// mullw r11,r9,r7
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// lwz r10,-25732(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + -25732);
	// addi r11,r11,511
	ctx.r11.s64 = ctx.r11.s64 + 511;
	// mullw r9,r9,r8
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// stw r9,388(r31)
	REX_STORE_U32(r31.u32 + 388, ctx.r9.u32);
	// rlwinm r11,r11,23,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0xFFFF;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// sth r11,14(r31)
	REX_STORE_U16(r31.u32 + 14, ctx.r11.u16);
	// addi r11,r11,172
	ctx.r11.s64 = ctx.r11.s64 + 172;
	// rldicr r30,r10,20,63
	r30.u64 = __builtin_rotateleft64(ctx.r10.u64, 20) & 0xFFFFFFFFFFFFFFFF;
	// rlwinm r25,r11,9,0,22
	r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0xFFFFFE00;
	// bl 0x8269cd20
	ctx.lr = 0x822E444C;
	sub_8269CD20(ctx, base);
	// li r26,0
	r26.s64 = 0;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// stb r26,371(r1)
	REX_STORE_U8(ctx.r1.u32 + 371, r26.u8);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_822E445C:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822e445c
	if (!ctx.cr6.eq) goto loc_822E445C;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x822e44ac
	if (ctx.cr6.lt) goto loc_822E44AC;
loc_822E4490:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,92
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 92, ctx.xer);
	// beq cr6,0x822e44ac
	if (ctx.cr6.eq) goto loc_822E44AC;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822e4490
	if (!ctx.cr6.lt) goto loc_822E4490;
loc_822E44AC:
	// stb r26,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, r26.u8);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826b3cb8
	ctx.lr = 0x822E44C4;
	sub_826B3CB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822e44f8
	if (ctx.cr0.eq) goto loc_822E44F8;
	// lis r10,640
	ctx.r10.s64 = 41943040;
	// ld r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// add r9,r30,r10
	ctx.r9.u64 = r30.u64 + ctx.r10.u64;
	// cmpld cr6,r11,r9
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r9.u64, ctx.xer);
	// bge cr6,0x822e44f8
	if (!ctx.cr6.lt) goto loc_822E44F8;
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// ble cr6,0x822e44f4
	if (!ctx.cr6.gt) goto loc_822E44F4;
	// lis r10,-640
	ctx.r10.s64 = -41943040;
	// add r30,r11,r10
	r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x822e44f8
	goto loc_822E44F8;
loc_822E44F4:
	// mr r30,r26
	r30.u64 = r26.u64;
loc_822E44F8:
	// addi r11,r25,2048
	ctx.r11.s64 = r25.s64 + 2048;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// cmpld cr6,r11,r30
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, r30.u64, ctx.xer);
	// ble cr6,0x822e4514
	if (!ctx.cr6.gt) goto loc_822E4514;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x822e4680
	goto loc_822E4680;
loc_822E4514:
	// lis r11,-17
	ctx.r11.s64 = -1114112;
	// lwz r9,596(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 596);
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// oris r8,r10,65520
	ctx.r8.u64 = ctx.r10.u64 | 4293918720;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// rotlwi r10,r30,0
	ctx.r10.u64 = __builtin_rotateleft32(r30.u32, 0);
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// mr r28,r26
	r28.u64 = r26.u64;
	// divdu r11,r11,r8
	ctx.r11.u64 = ctx.r8.u64 ? ctx.r11.u64 / ctx.r8.u64 : 0;
	// li r27,-1
	r27.s64 = -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// rlwimi r9,r11,14,12,17
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0xFC000) | (ctx.r9.u64 & 0xFFFFFFFFFFF03FFF);
	// rlwinm r11,r9,18,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0x3F;
	// stw r9,596(r31)
	REX_STORE_U32(r31.u32 + 596, ctx.r9.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,20,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xFFF00000;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,384(r31)
	REX_STORE_U32(r31.u32 + 384, ctx.r11.u32);
loc_822E4560:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x822e457c
	if (ctx.cr6.eq) goto loc_822E457C;
	// lwz r11,612(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 612);
	// mr r29,r26
	r29.u64 = r26.u64;
	// srawi r11,r11,30
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 30;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x822e4580
	if (ctx.cr6.eq) goto loc_822E4580;
loc_822E457C:
	// lwz r29,616(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 616);
loc_822E4580:
	// li r8,4096
	ctx.r8.s64 = 4096;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1028
	ctx.r5.s64 = 1028;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// mr r30,r26
	r30.u64 = r26.u64;
	// bl 0x82793a14
	ctx.lr = 0x822E45A0;
	__imp__MmAllocatePhysicalMemoryEx(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x822e45d4
	if (!ctx.cr0.eq) goto loc_822E45D4;
	// lis r4,-18048
	ctx.r4.s64 = -1182793728;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x823f02b8
	ctx.lr = 0x822E45B4;
	sub_823F02B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822e45c4
	if (ctx.cr0.eq) goto loc_822E45C4;
	// li r30,1
	r30.s64 = 1;
	// b 0x822e45d4
	goto loc_822E45D4;
loc_822E45C4:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x822e45d4
	if (ctx.cr6.eq) goto loc_822E45D4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r30,2
	r30.s64 = 2;
loc_822E45D4:
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stwx r3,r11,r31
	REX_STORE_U32(ctx.r11.u32 + r31.u32, ctx.r3.u32);
	// beq cr6,0x822e4678
	if (ctx.cr6.eq) goto loc_822E4678;
	// lwz r11,612(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 612);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x822e45f8
	if (!ctx.cr6.eq) goto loc_822E45F8;
	// rlwimi r11,r30,30,0,1
	ctx.r11.u64 = (__builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 30) & 0xC0000000) | (ctx.r11.u64 & 0xFFFFFFFF3FFFFFFF);
	// b 0x822e45fc
	goto loc_822E45FC;
loc_822E45F8:
	// rlwimi r11,r30,28,2,3
	ctx.r11.u64 = (__builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 28) & 0x30000000) | (ctx.r11.u64 & 0xFFFFFFFFCFFFFFFF);
loc_822E45FC:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// stw r11,612(r31)
	REX_STORE_U32(r31.u32 + 612, ctx.r11.u32);
	// cmplwi cr6,r28,2
	ctx.cr6.compare<uint32_t>(r28.u32, 2, ctx.xer);
	// blt cr6,0x822e4560
	if (ctx.cr6.lt) goto loc_822E4560;
	// li r8,4096
	ctx.r8.s64 = 4096;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1536
	ctx.r4.s64 = 1536;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82793a14
	ctx.lr = 0x822E4628;
	__imp__MmAllocatePhysicalMemoryEx(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,592(r31)
	REX_STORE_U32(r31.u32 + 592, ctx.r3.u32);
	// beq 0x822e4640
	if (ctx.cr0.eq) goto loc_822E4640;
	// lwz r11,612(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 612);
	// rlwinm r11,r11,0,5,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFF7FFFFFF;
	// b 0x822e4660
	goto loc_822E4660;
loc_822E4640:
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// li r3,1536
	ctx.r3.s64 = 1536;
	// bl 0x823f02b8
	ctx.lr = 0x822E464C;
	sub_823F02B8(ctx, base);
	// stw r3,592(r31)
	REX_STORE_U32(r31.u32 + 592, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822e4678
	if (ctx.cr0.eq) goto loc_822E4678;
	// lwz r11,612(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 612);
	// oris r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 134217728;
loc_822E4660:
	// stw r11,612(r31)
	REX_STORE_U32(r31.u32 + 612, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lbz r11,608(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 608);
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// stb r11,608(r31)
	REX_STORE_U8(r31.u32 + 608, ctx.r11.u8);
	// b 0x822e4680
	goto loc_822E4680;
loc_822E4678:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
loc_822E4680:
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x826a1ce4
	return;
}

DEFINE_REX_FUNC(sub_8232CD98) {
	REX_FUNC_PROLOGUE();
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x8232cddc
	goto loc_8232CDDC;
loc_8232CDA0:
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// lwz r9,12(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// divwu r7,r8,r9
	ctx.r7.u64 = uint32_t(ctx.r9.u32 ? ctx.r8.u32 / ctx.r9.u32 : 0);
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// twllei r9,0
	if (ctx.r9.s32 == 0 || ctx.r9.u32 < 0u) ppc_trap(ctx, base, 0);
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// mullw r9,r7,r9
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// subf r11,r9,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r9.u64;
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
loc_8232CDDC:
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232cda0
	if (!ctx.cr6.eq) goto loc_8232CDA0;
	// stw r10,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8232F2E8) {
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
	ctx.lr = 0x8232F2F0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// bl 0x82332760
	ctx.lr = 0x8232F310;
	sub_82332760(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8232f334
	if (!ctx.cr6.eq) goto loc_8232F334;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82336108
	ctx.lr = 0x8232F334;
	sub_82336108(ctx, base);
loc_8232F334:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8232FF18) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8235ace0
	ctx.lr = 0x8232FF34;
	sub_8235ACE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8232ff54
	if (!ctx.cr6.eq) goto loc_8232FF54;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,64(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8232FF54;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8232FF54:
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

DEFINE_REX_FUNC(sub_823326E0) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823326f0
	if (ctx.cr6.eq) goto loc_823326F0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_823326F0:
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lwz r10,1012(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 1012);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,8(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// bne cr6,0x82332710
	if (!ctx.cr6.eq) goto loc_82332710;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82332710:
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82332744
	if (ctx.cr6.eq) goto loc_82332744;
loc_8233271C:
	// lwz r9,21784(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 21784);
	// cmplw cr6,r9,r3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8233274c
	if (ctx.cr6.eq) goto loc_8233274C;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// bne cr6,0x8233273c
	if (!ctx.cr6.eq) goto loc_8233273C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8233273C:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8233271c
	if (!ctx.cr6.eq) goto loc_8233271C;
loc_82332744:
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_8233274C:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82332758
	if (ctx.cr6.eq) goto loc_82332758;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_82332758:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8233E690) {
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
	// bl 0x823ed360
	ctx.lr = 0x8233E6A0;
	sub_823ED360(ctx, base);
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

DEFINE_REX_FUNC(sub_8233EB28) {
	REX_FUNC_PROLOGUE();
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -16, f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// bl 0x8234aac0
	ctx.lr = 0x8233EB44;
	sub_8234AAC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233eb5c
	if (!ctx.cr6.eq) goto loc_8233EB5C;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x8234bbc8
	ctx.lr = 0x8233EB5C;
	sub_8234BBC8(ctx, base);
loc_8233EB5C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
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

DEFINE_REX_FUNC(sub_8233F390) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8234aac0
	ctx.lr = 0x8233F3AC;
	sub_8234AAC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233f3c0
	if (!ctx.cr6.eq) goto loc_8233F3C0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82350a88
	ctx.lr = 0x8233F3C0;
	sub_82350A88(ctx, base);
loc_8233F3C0:
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

DEFINE_REX_FUNC(sub_82340E38) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82340E40;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82340e74
	if (ctx.cr6.eq) goto loc_82340E74;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x82340e74
	if (ctx.cr6.eq) goto loc_82340E74;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x82340e74
	if (ctx.cr6.eq) goto loc_82340E74;
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
loc_82340E74:
	// lwz r11,392(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 392);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// rlwinm r9,r11,0,26,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// stw r9,392(r31)
	REX_STORE_U32(r31.u32 + 392, ctx.r9.u32);
	// bne cr6,0x82340e90
	if (!ctx.cr6.eq) goto loc_82340E90;
	// lwz r11,372(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 372);
	// b 0x82340eb4
	goto loc_82340EB4;
loc_82340E90:
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bne cr6,0x82340ea0
	if (!ctx.cr6.eq) goto loc_82340EA0;
	// lwz r11,360(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 360);
	// b 0x82340eb4
	goto loc_82340EB4;
loc_82340EA0:
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// bne cr6,0x82340eb8
	if (!ctx.cr6.eq) goto loc_82340EB8;
	// lwz r11,372(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 372);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82340EB4:
	// add r30,r11,r4
	r30.u64 = ctx.r11.u64 + ctx.r4.u64;
loc_82340EB8:
	// lwz r11,372(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 372);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82340ed8
	if (!ctx.cr6.gt) goto loc_82340ED8;
	// rlwinm r10,r4,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r30,r10,r11
	r30.u64 = ctx.r10.u64 & ctx.r11.u64;
loc_82340ED8:
	// lwz r10,364(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 364);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82340f08
	if (!ctx.cr6.eq) goto loc_82340F08;
	// clrlwi r11,r9,31
	ctx.r11.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82340f08
	if (!ctx.cr6.eq) goto loc_82340F08;
	// lwz r11,352(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 352);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82340f08
	if (ctx.cr6.lt) goto loc_82340F08;
loc_82340EFC:
	// li r3,20
	ctx.r3.s64 = 20;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
loc_82340F08:
	// lwz r11,352(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 352);
	// lwz r9,344(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 344);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82340f50
	if (!ctx.cr6.eq) goto loc_82340F50;
	// lwz r8,392(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 392);
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82340f50
	if (!ctx.cr6.eq) goto loc_82340F50;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82340f50
	if (ctx.cr6.lt) goto loc_82340F50;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82340f44
	if (ctx.cr6.eq) goto loc_82340F44;
	// subf r8,r11,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmplw cr6,r30,r8
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82340efc
	if (ctx.cr6.lt) goto loc_82340EFC;
loc_82340F44:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82340efc
	if (!ctx.cr6.lt) goto loc_82340EFC;
loc_82340F50:
	// lwz r11,332(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 332);
	// stw r30,360(r31)
	REX_STORE_U32(r31.u32 + 360, r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82340f74
	if (ctx.cr6.eq) goto loc_82340F74;
	// divwu r10,r30,r11
	ctx.r10.u64 = uint32_t(ctx.r11.u32 ? r30.u32 / ctx.r11.u32 : 0);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// mullw r8,r10,r11
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// subf r7,r8,r30
	ctx.r7.u64 = r30.u64 - ctx.r8.u64;
	// stw r7,336(r31)
	REX_STORE_U32(r31.u32 + 336, ctx.r7.u32);
loc_82340F74:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82340f9c
	if (ctx.cr6.eq) goto loc_82340F9C;
	// divwu r11,r30,r9
	ctx.r11.u64 = uint32_t(ctx.r9.u32 ? r30.u32 / ctx.r9.u32 : 0);
	// twllei r9,0
	if (ctx.r9.s32 == 0 || ctx.r9.u32 < 0u) ppc_trap(ctx, base, 0);
	// mullw r10,r11,r9
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// subf r9,r10,r30
	ctx.r9.u64 = r30.u64 - ctx.r10.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r9,340(r31)
	REX_STORE_U32(r31.u32 + 340, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
loc_82340F9C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82340FB4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,396(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 396);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82340fe4
	if (ctx.cr6.eq) goto loc_82340FE4;
	// lwz r11,22000(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 22000);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82340fe4
	if (ctx.cr6.eq) goto loc_82340FE4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r5,32(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r3,36(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82340FE4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82340FE4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82350478) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82350480;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,84(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// beq cr6,0x82350604
	if (ctx.cr6.eq) goto loc_82350604;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82350614
	if (!ctx.cr6.eq) goto loc_82350614;
	// lwz r3,76(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823504bc
	if (!ctx.cr6.eq) goto loc_823504BC;
	// li r3,36
	ctx.r3.s64 = 36;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d0c
	return;
loc_823504BC:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,132(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 132);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823504D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82350618
	if (!ctx.cr6.eq) goto loc_82350618;
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// lbz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// ori r10,r11,64
	ctx.r10.u64 = ctx.r11.u64 | 64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r10,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r10.u32);
	// bne cr6,0x82350614
	if (!ctx.cr6.eq) goto loc_82350614;
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82350614
	if (ctx.cr6.eq) goto loc_82350614;
	// lwz r3,68(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 68);
	// rlwinm r29,r10,24,31,31
	r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x1;
	// lwz r4,32(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,1208(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 1208);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8235052C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82350618
	if (!ctx.cr6.eq) goto loc_82350618;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r30,112(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 112);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8234f118
	ctx.lr = 0x82350544;
	sub_8234F118(ctx, base);
	// li r4,144
	ctx.r4.s64 = 144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8234f290
	ctx.lr = 0x82350550;
	sub_8234F290(ctx, base);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r10.u32);
	// stw r9,76(r31)
	REX_STORE_U32(r31.u32 + 76, ctx.r9.u32);
	// beq cr6,0x82350588
	if (ctx.cr6.eq) goto loc_82350588;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,168(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 168);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823500a8
	ctx.lr = 0x82350584;
	sub_823500A8(ctx, base);
	// b 0x823505a8
	goto loc_823505A8;
loc_82350588:
	// lwz r4,120(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823505e0
	if (ctx.cr6.eq) goto loc_823505E0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82350318
	ctx.lr = 0x823505A8;
	sub_82350318(ctx, base);
loc_823505A8:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8234e760
	ctx.lr = 0x823505BC;
	sub_8234E760(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8234fd58
	ctx.lr = 0x823505C8;
	sub_8234FD58(ctx, base);
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r4,129(r1)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r1.u32 + 129);
	// rlwinm r10,r11,0,24,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// stw r10,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r10.u32);
	// bl 0x8234e340
	ctx.lr = 0x823505E0;
	sub_8234E340(ctx, base);
loc_823505E0:
	// clrlwi r11,r29,24
	ctx.r11.u64 = r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82350614
	if (ctx.cr6.eq) goto loc_82350614;
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r10,r11,4
	ctx.r10.u64 = ctx.r11.u64 | 4;
	// stw r10,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r10.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d0c
	return;
loc_82350604:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82350614
	if (ctx.cr6.eq) goto loc_82350614;
	// rlwinm r11,r11,0,26,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// stw r11,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r11.u32);
loc_82350614:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82350618:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82358338) {
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
	// lbz r11,52(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 52);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823583c8
	if (ctx.cr6.eq) goto loc_823583C8;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// beq cr6,0x82358390
	if (ctx.cr6.eq) goto loc_82358390;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82358380
	if (!ctx.cr6.eq) goto loc_82358380;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bl 0x8233e2b0
	ctx.lr = 0x82358380;
	sub_8233E2B0(ctx, base);
loc_82358380:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// b 0x823583c4
	goto loc_823583C4;
loc_82358390:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// bne 0x823583c4
	if (!ctx.cr0.eq) goto loc_823583C4;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// bl 0x8233e2b0
	ctx.lr = 0x823583A4;
	sub_8233E2B0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x823583c4
	if (!ctx.cr6.gt) goto loc_823583C4;
	// lwz r9,44(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 44);
	// subf r10,r10,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r10.u64;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r8.u32);
loc_823583C4:
	// stb r30,40(r31)
	REX_STORE_U8(r31.u32 + 40, r30.u8);
loc_823583C8:
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

DEFINE_REX_FUNC(sub_8235E010) {
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
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,10704
	ctx.r9.s64 = ctx.r11.s64 + 10704;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x8235e044
	if (ctx.cr6.eq) goto loc_8235E044;
	// bl 0x8269ce98
	ctx.lr = 0x8235E040;
	sub_8269CE98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8235E044:
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

DEFINE_REX_FUNC(sub_8235F550) {
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
	ctx.lr = 0x8235F558;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	r28.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r29,r28
	r29.u64 = r28.u64;
	// bl 0x823470c8
	ctx.lr = 0x8235F570;
	sub_823470C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235f820
	if (!ctx.cr6.eq) goto loc_8235F820;
	// addic. r11,r31,332
	ctx.xer.ca = r31.u32 > 4294966963;
	ctx.r11.s64 = r31.s64 + 332;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8235f58c
	if (ctx.cr0.eq) goto loc_8235F58C;
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r9,1188(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 1188);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_8235F58C:
	// addi r11,r31,408
	ctx.r11.s64 = r31.s64 + 408;
	// addi r30,r31,356
	r30.s64 = r31.s64 + 356;
	// stw r11,400(r31)
	REX_STORE_U32(r31.u32 + 400, ctx.r11.u32);
	// lwz r11,128(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8235f5b0
	if (ctx.cr6.eq) goto loc_8235F5B0;
	// stw r11,356(r31)
	REX_STORE_U32(r31.u32 + 356, ctx.r11.u32);
	// lwz r10,36(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 36);
	// b 0x8235f5d0
	goto loc_8235F5D0;
loc_8235F5B0:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82333b20
	ctx.lr = 0x8235F5C0;
	sub_82333B20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235f820
	if (!ctx.cr6.eq) goto loc_8235F820;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r10,1196(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 1196);
loc_8235F5D0:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r8,208(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 208);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r9,360(r31)
	REX_STORE_U32(r31.u32 + 360, ctx.r9.u32);
	// bne cr6,0x8235f5f0
	if (!ctx.cr6.eq) goto loc_8235F5F0;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,208(r31)
	REX_STORE_U32(r31.u32 + 208, ctx.r11.u32);
loc_8235F5F0:
	// lwz r11,208(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 208);
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bgt cr6,0x8235f704
	if (ctx.cr6.gt) goto loc_8235F704;
	// lis r12,-32202
	ctx.r12.s64 = -2110390272;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-2540
	ctx.r12.s64 = ctx.r12.s64 + -2540;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8235F694;
	case 1:
		goto loc_8235F644;
	case 2:
		goto loc_8235F658;
	case 3:
		goto loc_8235F66C;
	case 4:
		goto loc_8235F680;
	case 5:
		goto loc_8235F680;
	case 6:
		goto loc_8235F694;
	case 7:
		goto loc_8235F694;
	case 8:
		goto loc_8235F694;
	case 9:
		goto loc_8235F694;
	case 10:
		goto loc_8235F694;
	case 11:
		goto loc_8235F694;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_8235F644:
	// li r11,8
	ctx.r11.s64 = 8;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// rldicl r8,r11,61,3
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u64, 61) & 0x1FFFFFFFFFFFFFFF;
	// rotlwi r11,r8,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// b 0x8235f700
	goto loc_8235F700;
loc_8235F658:
	// li r11,16
	ctx.r11.s64 = 16;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// rldicl r8,r11,61,3
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u64, 61) & 0x1FFFFFFFFFFFFFFF;
	// rotlwi r11,r8,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// b 0x8235f700
	goto loc_8235F700;
loc_8235F66C:
	// li r11,24
	ctx.r11.s64 = 24;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// rldicl r8,r11,61,3
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u64, 61) & 0x1FFFFFFFFFFFFFFF;
	// rotlwi r11,r8,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// b 0x8235f700
	goto loc_8235F700;
loc_8235F680:
	// li r11,32
	ctx.r11.s64 = 32;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// rldicl r8,r11,61,3
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u64, 61) & 0x1FFFFFFFFFFFFFFF;
	// rotlwi r11,r8,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// b 0x8235f700
	goto loc_8235F700;
loc_8235F694:
	// lis r12,-32202
	ctx.r12.s64 = -2110390272;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-2388
	ctx.r12.s64 = ctx.r12.s64 + -2388;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8235F6FC;
	case 1:
		goto loc_8235F704;
	case 2:
		goto loc_8235F704;
	case 3:
		goto loc_8235F704;
	case 4:
		goto loc_8235F704;
	case 5:
		goto loc_8235F704;
	case 6:
		goto loc_8235F6DC;
	case 7:
		goto loc_8235F6E4;
	case 8:
		goto loc_8235F6EC;
	case 9:
		goto loc_8235F6F4;
	case 10:
		goto loc_8235F6F4;
	case 11:
		goto loc_8235F6F4;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_8235F6DC:
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x8235f700
	goto loc_8235F700;
loc_8235F6E4:
	// li r11,36
	ctx.r11.s64 = 36;
	// b 0x8235f700
	goto loc_8235F700;
loc_8235F6EC:
	// li r11,16
	ctx.r11.s64 = 16;
	// b 0x8235f700
	goto loc_8235F700;
loc_8235F6F4:
	// li r29,1
	r29.s64 = 1;
	// b 0x8235f704
	goto loc_8235F704;
loc_8235F6FC:
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
loc_8235F700:
	// mullw r29,r10,r11
	r29.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
loc_8235F704:
	// lwz r11,220(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 220);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8235f718
	if (!ctx.cr6.eq) goto loc_8235F718;
	// addi r11,r31,1240
	ctx.r11.s64 = r31.s64 + 1240;
	// b 0x8235f7a8
	goto loc_8235F7A8;
loc_8235F718:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8235f728
	if (!ctx.cr6.eq) goto loc_8235F728;
	// addi r11,r31,1240
	ctx.r11.s64 = r31.s64 + 1240;
	// b 0x8235f7a8
	goto loc_8235F7A8;
loc_8235F728:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8235f738
	if (!ctx.cr6.eq) goto loc_8235F738;
	// addi r11,r31,1240
	ctx.r11.s64 = r31.s64 + 1240;
	// b 0x8235f7a8
	goto loc_8235F7A8;
loc_8235F738:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8235f748
	if (!ctx.cr6.eq) goto loc_8235F748;
	// addi r11,r31,1240
	ctx.r11.s64 = r31.s64 + 1240;
	// b 0x8235f7a8
	goto loc_8235F7A8;
loc_8235F748:
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8235f758
	if (!ctx.cr6.eq) goto loc_8235F758;
	// addi r11,r31,1240
	ctx.r11.s64 = r31.s64 + 1240;
	// b 0x8235f7a8
	goto loc_8235F7A8;
loc_8235F758:
	// lwz r11,372(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 372);
	// lis r10,-32129
	ctx.r10.s64 = -2105606144;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r8,10752
	ctx.r5.s64 = ctx.r8.s64 + 10752;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r11,1012(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 1012);
	// li r7,0
	ctx.r7.s64 = 0;
	// mullw r10,r6,r29
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(r29.s32);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// li r6,259
	ctx.r6.s64 = 259;
	// addi r4,r10,16
	ctx.r4.s64 = ctx.r10.s64 + 16;
	// bl 0x82330e40
	ctx.lr = 0x8235F78C;
	sub_82330E40(ctx, base);
	// stw r3,344(r31)
	REX_STORE_U32(r31.u32 + 344, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8235f7a4
	if (!ctx.cr6.eq) goto loc_8235F7A4;
	// li r3,44
	ctx.r3.s64 = 44;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
loc_8235F7A4:
	// addi r11,r3,15
	ctx.r11.s64 = ctx.r3.s64 + 15;
loc_8235F7A8:
	// rlwinm r10,r11,0,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// lwz r11,372(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 372);
	// lwz r7,400(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 400);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r10,348(r31)
	REX_STORE_U32(r31.u32 + 348, ctx.r10.u32);
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r29.s32);
	// stw r28,364(r31)
	REX_STORE_U32(r31.u32 + 364, r28.u32);
	// stw r9,368(r31)
	REX_STORE_U32(r31.u32 + 368, ctx.r9.u32);
	// std r28,312(r31)
	REX_STORE_U64(r31.u32 + 312, r28.u64);
	// std r28,336(r31)
	REX_STORE_U64(r31.u32 + 336, r28.u64);
	// stw r28,280(r31)
	REX_STORE_U32(r31.u32 + 280, r28.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r8,2
	ctx.r8.s64 = 2;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r8,380(r31)
	REX_STORE_U32(r31.u32 + 380, ctx.r8.u32);
	// addi r6,r11,15
	ctx.r6.s64 = ctx.r11.s64 + 15;
	// rlwinm r5,r6,0,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r5,348(r31)
	REX_STORE_U32(r31.u32 + 348, ctx.r5.u32);
	// stw r28,36(r7)
	REX_STORE_U32(ctx.r7.u32 + 36, r28.u32);
	// lwz r11,136(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 136);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235f810
	if (ctx.cr6.eq) goto loc_8235F810;
	// stw r11,384(r31)
	REX_STORE_U32(r31.u32 + 384, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
loc_8235F810:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,4368(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4368);
	// stw r10,384(r31)
	REX_STORE_U32(r31.u32 + 384, ctx.r10.u32);
loc_8235F820:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_823754C0) {
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
	ctx.lr = 0x823754C8;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	r27.s64 = 0;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stb r27,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, r27.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// mr r31,r27
	r31.u64 = r27.u64;
	// bl 0x823753a0
	ctx.lr = 0x823754F4;
	sub_823753A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82375624
	if (!ctx.cr6.eq) goto loc_82375624;
loc_823754FC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,256(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 256);
	// bl 0x82340c58
	ctx.lr = 0x82375508;
	sub_82340C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82375624
	if (!ctx.cr6.eq) goto loc_82375624;
	// lbz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,60
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 60, ctx.xer);
	// bne cr6,0x823754fc
	if (!ctx.cr6.eq) goto loc_823754FC;
loc_8237551C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,256(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 256);
	// bl 0x82340c58
	ctx.lr = 0x82375528;
	sub_82340C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82375624
	if (!ctx.cr6.eq) goto loc_82375624;
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82375548
	if (!ctx.cr6.lt) goto loc_82375548;
	// stbx r11,r31,r28
	REX_STORE_U8(r31.u32 + r28.u32, ctx.r11.u8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
loc_82375548:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,62
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 62, ctx.xer);
	// bne cr6,0x8237551c
	if (!ctx.cr6.eq) goto loc_8237551C;
	// addi r11,r31,-1
	ctx.r11.s64 = r31.s64 + -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r31,r27
	r31.u64 = r27.u64;
	// bl 0x823753a0
	ctx.lr = 0x8237556C;
	sub_823753A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82375624
	if (!ctx.cr6.eq) goto loc_82375624;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x82375580
	if (ctx.cr6.eq) goto loc_82375580;
	// lwz r27,0(r25)
	r27.u64 = REX_LOAD_U32(r25.u32 + 0);
loc_82375580:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,256(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 256);
	// bl 0x82340c58
	ctx.lr = 0x8237558C;
	sub_82340C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82375624
	if (!ctx.cr6.eq) goto loc_82375624;
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// cmpw cr6,r31,r27
	ctx.cr6.compare<int32_t>(r31.s32, r27.s32, ctx.xer);
	// bge cr6,0x823755a8
	if (!ctx.cr6.lt) goto loc_823755A8;
	// stbx r11,r31,r26
	REX_STORE_U8(r31.u32 + r26.u32, ctx.r11.u8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
loc_823755A8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,60
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 60, ctx.xer);
	// bne cr6,0x82375580
	if (!ctx.cr6.eq) goto loc_82375580;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x823755c4
	if (ctx.cr6.eq) goto loc_823755C4;
	// addi r11,r31,-1
	ctx.r11.s64 = r31.s64 + -1;
	// stw r11,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r11.u32);
loc_823755C4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,256(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 256);
	// bl 0x82340c58
	ctx.lr = 0x823755D0;
	sub_82340C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82375624
	if (!ctx.cr6.eq) goto loc_82375624;
	// lbz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,47
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 47, ctx.xer);
	// bne cr6,0x8237560c
	if (!ctx.cr6.eq) goto loc_8237560C;
loc_823755E4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,256(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 256);
	// bl 0x82340c58
	ctx.lr = 0x823755F0;
	sub_82340C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82375624
	if (!ctx.cr6.eq) goto loc_82375624;
	// lbz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,62
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 62, ctx.xer);
	// bne cr6,0x823755e4
	if (!ctx.cr6.eq) goto loc_823755E4;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cfc
	return;
loc_8237560C:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,256(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 256);
	// li r4,-2
	ctx.r4.s64 = -2;
	// bl 0x82340e38
	ctx.lr = 0x8237561C;
	sub_82340E38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82375624
	if (!ctx.cr6.eq) goto loc_82375624;
loc_82375624:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_82387F68) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,640(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 640);
	// lwz r10,464(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 464);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82387fb0
	if (!ctx.cr6.lt) goto loc_82387FB0;
	// lbz r9,644(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 644);
	// rotlwi r9,r9,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,464(r11)
	REX_STORE_U32(ctx.r11.u32 + 464, ctx.r10.u32);
	// lwz r9,640(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 640);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x82387fd8
	if (!ctx.cr6.gt) goto loc_82387FD8;
	// lbz r10,460(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 460);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r9,464(r11)
	REX_STORE_U32(ctx.r11.u32 + 464, ctx.r9.u32);
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// stb r9,460(r11)
	REX_STORE_U8(ctx.r11.u32 + 460, ctx.r9.u8);
	// blr 
	return;
loc_82387FB0:
	// ble cr6,0x82387fd8
	if (!ctx.cr6.gt) goto loc_82387FD8;
	// lbz r10,644(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 644);
	// lwz r9,464(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 464);
	// rotlwi r8,r10,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// subf r7,r8,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r8.u64;
	// stw r7,464(r11)
	REX_STORE_U32(ctx.r11.u32 + 464, ctx.r7.u32);
	// lwz r10,640(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 640);
	// cmpw cr6,r7,r10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82387fd8
	if (!ctx.cr6.lt) goto loc_82387FD8;
	// stw r10,464(r11)
	REX_STORE_U32(ctx.r11.u32 + 464, ctx.r10.u32);
loc_82387FD8:
	// lbz r10,460(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 460);
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// stb r9,460(r11)
	REX_STORE_U8(ctx.r11.u32 + 460, ctx.r9.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8238E198) {
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
	ctx.lr = 0x8238E1A0;
	// stwu r1,-2768(r1)
	ea = -2768 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,256(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 256);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// stw r4,2796(r1)
	REX_STORE_U32(ctx.r1.u32 + 2796, ctx.r4.u32);
	// stw r5,2804(r1)
	REX_STORE_U32(ctx.r1.u32 + 2804, ctx.r5.u32);
	// lwz r10,392(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 392);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8238e1d4
	if (ctx.cr6.eq) goto loc_8238E1D4;
loc_8238E1C8:
	// li r3,25
	ctx.r3.s64 = 25;
	// addi r1,r1,2768
	ctx.r1.s64 = ctx.r1.s64 + 2768;
	// b 0x826a1cd0
	return;
loc_8238E1D4:
	// lwz r11,24(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 24);
	// lis r10,-32129
	ctx.r10.s64 = -2105606144;
	// li r14,0
	r14.s64 = 0;
	// li r9,17
	ctx.r9.s64 = 17;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,1012(r10)
	REX_STORE_U32(ctx.r10.u32 + 1012, ctx.r11.u32);
	// stw r9,68(r24)
	REX_STORE_U32(r24.u32 + 68, ctx.r9.u32);
	// stw r14,252(r24)
	REX_STORE_U32(r24.u32 + 252, r14.u32);
	// stw r14,28(r24)
	REX_STORE_U32(r24.u32 + 28, r14.u32);
	// stw r14,32(r24)
	REX_STORE_U32(r24.u32 + 32, r14.u32);
	// lwz r3,256(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 256);
	// bl 0x82340e38
	ctx.lr = 0x8238E208;
	sub_82340E38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238f570
	if (!ctx.cr6.eq) goto loc_8238F570;
	// lwz r3,256(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 256);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8238E228;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238f570
	if (!ctx.cr6.eq) goto loc_8238F570;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,256(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 256);
	// li r4,44
	ctx.r4.s64 = 44;
	// bl 0x82340e38
	ctx.lr = 0x8238E240;
	sub_82340E38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238f570
	if (!ctx.cr6.eq) goto loc_8238F570;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,256(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 256);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// bl 0x82340718
	ctx.lr = 0x8238E260;
	sub_82340718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238f570
	if (!ctx.cr6.eq) goto loc_8238F570;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r27,r11,19816
	r27.s64 = ctx.r11.s64 + 19816;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82331620
	ctx.lr = 0x8238E280;
	sub_82331620(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238e1c8
	if (!ctx.cr6.eq) goto loc_8238E1C8;
	// li r17,64
	r17.s64 = 64;
	// addi r30,r24,792
	r30.s64 = r24.s64 + 792;
	// mr r10,r17
	ctx.r10.u64 = r17.u64;
	// mr r9,r14
	ctx.r9.u64 = r14.u64;
	// addi r11,r30,-4
	ctx.r11.s64 = r30.s64 + -4;
	// mtctr r17
	ctx.ctr.u64 = r17.u64;
loc_8238E2A0:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8238e2a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8238E2A0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r14,520(r24)
	REX_STORE_U32(r24.u32 + 520, r14.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stb r17,1404(r24)
	REX_STORE_U8(r24.u32 + 1404, r17.u8);
	// li r9,125
	ctx.r9.s64 = 125;
	// stw r14,1412(r24)
	REX_STORE_U32(r24.u32 + 1412, r14.u32);
	// li r8,6
	ctx.r8.s64 = 6;
	// stw r14,2140(r24)
	REX_STORE_U32(r24.u32 + 2140, r14.u32);
	// stw r9,1272(r24)
	REX_STORE_U32(r24.u32 + 1272, ctx.r9.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f0,19812(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 19812);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,1268(r24)
	REX_STORE_U32(r24.u32 + 1268, ctx.r8.u32);
	// lfs f13,3704(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3704);
	ctx.f13.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stfs f0,2148(r24)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r24.u32 + 2148, temp.u32);
	// lwz r3,256(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 256);
	// stfs f13,2144(r24)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r24.u32 + 2144, temp.u32);
	// addi r29,r24,1268
	r29.s64 = r24.s64 + 1268;
	// addi r28,r24,1272
	r28.s64 = r24.s64 + 1272;
	// addi r31,r24,1404
	r31.s64 = r24.s64 + 1404;
	// bl 0x82340e38
	ctx.lr = 0x8238E2FC;
	sub_82340E38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238f570
	if (!ctx.cr6.eq) goto loc_8238F570;
	// addi r4,r24,264
	ctx.r4.s64 = r24.s64 + 264;
	// lwz r3,256(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 256);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,28
	ctx.r6.s64 = 28;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82340718
	ctx.lr = 0x8238E31C;
	sub_82340718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238f570
	if (!ctx.cr6.eq) goto loc_8238F570;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,256(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 256);
	// bl 0x82340c58
	ctx.lr = 0x8238E330;
	sub_82340C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238f570
	if (!ctx.cr6.eq) goto loc_8238F570;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,256(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 256);
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82340e38
	ctx.lr = 0x8238E348;
	sub_82340E38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238f570
	if (!ctx.cr6.eq) goto loc_8238F570;
	// addi r4,r1,98
	ctx.r4.s64 = ctx.r1.s64 + 98;
	// lwz r3,256(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 256);
	// bl 0x82340cf8
	ctx.lr = 0x8238E35C;
	sub_82340CF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238f570
	if (!ctx.cr6.eq) goto loc_8238F570;
	// addi r4,r24,1424
	ctx.r4.s64 = r24.s64 + 1424;
	// lwz r3,256(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 256);
	// bl 0x82340d98
	ctx.lr = 0x8238E370;
	sub_82340D98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238f570
	if (!ctx.cr6.eq) goto loc_8238F570;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,256(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 256);
	// bl 0x82340cf8
	ctx.lr = 0x8238E384;
	sub_82340CF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238f570
	if (!ctx.cr6.eq) goto loc_8238F570;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,256(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 256);
	// bl 0x82340cf8
	ctx.lr = 0x8238E398;
	sub_82340CF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238f570
	if (!ctx.cr6.eq) goto loc_8238F570;
	// lhz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 88);
	// li r23,1
	r23.s64 = 1;
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8238e3bc
	if (ctx.cr6.eq) goto loc_8238E3BC;
	// sth r23,2162(r24)
	REX_STORE_U16(r24.u32 + 2162, r23.u16);
	// b 0x8238e3c0
	goto loc_8238E3C0;
loc_8238E3BC:
	// sth r14,2162(r24)
	REX_STORE_U16(r24.u32 + 2162, r14.u16);
loc_8238E3C0:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,256(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 256);
	// bl 0x82340cf8
	ctx.lr = 0x8238E3CC;
	sub_82340CF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238f570
	if (!ctx.cr6.eq) goto loc_8238F570;
	// lhz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 88);
	// clrlwi r10,r11,20
	ctx.r10.u64 = ctx.r11.u32 & 0xFFF;
	// cmplwi cr6,r10,300
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 300, ctx.xer);
	// bne cr6,0x8238e3e8
	if (!ctx.cr6.eq) goto loc_8238E3E8;
	// sth r23,2162(r24)
	REX_STORE_U16(r24.u32 + 2162, r23.u16);
loc_8238E3E8:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,256(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 256);
	// li r4,44
	ctx.r4.s64 = 44;
	// bl 0x82340e38
	ctx.lr = 0x8238E3F8;
	sub_82340E38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238f570
	if (!ctx.cr6.eq) goto loc_8238F570;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,256(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 256);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// bl 0x82340718
	ctx.lr = 0x8238E418;
	sub_82340718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238f570
	if (!ctx.cr6.eq) goto loc_8238F570;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82331620
	ctx.lr = 0x8238E430;
	sub_82331620(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238e1c8
	if (!ctx.cr6.eq) goto loc_8238E1C8;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,256(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 256);
	// bl 0x82340c58
	ctx.lr = 0x8238E444;
	sub_82340C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238f570
	if (!ctx.cr6.eq) goto loc_8238F570;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,256(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 256);
	// bl 0x82340ca8
	ctx.lr = 0x8238E458;
	sub_82340CA8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238f570
	if (!ctx.cr6.eq) goto loc_8238F570;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,256(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 256);
	// bl 0x82340c08
	ctx.lr = 0x8238E46C;
	sub_82340C08(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238f570
	if (!ctx.cr6.eq) goto loc_8238F570;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// lwz r3,256(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 256);
	// bl 0x82340c58
	ctx.lr = 0x8238E480;
	sub_82340C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238f570
	if (!ctx.cr6.eq) goto loc_8238F570;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,256(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 256);
	// bl 0x82340c58
	ctx.lr = 0x8238E494;
	sub_82340C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238f570
	if (!ctx.cr6.eq) goto loc_8238F570;
	// addi r4,r1,101
	ctx.r4.s64 = ctx.r1.s64 + 101;
	// lwz r3,256(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 256);
	// bl 0x82340c58
	ctx.lr = 0x8238E4A8;
	sub_82340C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238f570
	if (!ctx.cr6.eq) goto loc_8238F570;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,256(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 256);
	// li r4,64
	ctx.r4.s64 = 64;
	// bl 0x82340e38
	ctx.lr = 0x8238E4C0;
	sub_82340E38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238f570
	if (!ctx.cr6.eq) goto loc_8238F570;
	// stw r14,788(r24)
	REX_STORE_U32(r24.u32 + 788, r14.u32);
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,255
	ctx.r4.s64 = 255;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r15,r24,788
	r15.s64 = r24.s64 + 788;
	// bl 0x823ef5f0
	ctx.lr = 0x8238E4E0;
	sub_823EF5F0(ctx, base);
	// mr r31,r14
	r31.u64 = r14.u64;
	// li r18,255
	r18.s64 = 255;
loc_8238E4E8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,256(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 256);
	// bl 0x82340c58
	ctx.lr = 0x8238E4F4;
	sub_82340C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238f570
	if (!ctx.cr6.eq) goto loc_8238F570;
	// lbz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// bge cr6,0x8238e538
	if (!ctx.cr6.lt) goto loc_8238E538;
	// lwz r11,0(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 0);
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// cmplwi cr6,r10,7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 7, ctx.xer);
	// stbx r11,r31,r9
	REX_STORE_U8(r31.u32 + ctx.r9.u32, ctx.r11.u8);
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + r24.u64;
	// bgt cr6,0x8238e528
	if (ctx.cr6.gt) goto loc_8238E528;
	// stb r14,1276(r11)
	REX_STORE_U8(ctx.r11.u32 + 1276, r14.u8);
	// b 0x8238e52c
	goto loc_8238E52C;
loc_8238E528:
	// stb r18,1276(r11)
	REX_STORE_U8(ctx.r11.u32 + 1276, r18.u8);
loc_8238E52C:
	// lwz r11,0(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r15)
	REX_STORE_U32(r15.u32 + 0, ctx.r11.u32);
loc_8238E538:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpwi cr6,r31,32
	ctx.cr6.compare<int32_t>(r31.s32, 32, ctx.xer);
	// blt cr6,0x8238e4e8
	if (ctx.cr6.lt) goto loc_8238E4E8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r5,r11,19320
	ctx.r5.s64 = ctx.r11.s64 + 19320;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,4
	ctx.r7.s64 = 4;
	// mr r6,r15
	ctx.r6.u64 = r15.u64;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8239e6b0
	ctx.lr = 0x8238E568;
	sub_8239E6B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238f570
	if (!ctx.cr6.eq) goto loc_8238F570;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,0(r15)
	ctx.r10.u64 = REX_LOAD_U32(r15.u32 + 0);
	// mr r29,r14
	r29.u64 = r14.u64;
	// addi r25,r11,19760
	r25.s64 = ctx.r11.s64 + 19760;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r25,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r25.u32);
	// ble cr6,0x8238e5f4
	if (!ctx.cr6.gt) goto loc_8238E5F4;
loc_8238E58C:
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1760
	ctx.r6.s64 = 1760;
	// li r4,688
	ctx.r4.s64 = 688;
	// lwz r11,1012(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1012);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x8238E5AC;
	sub_82330E40(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8238e5d0
	if (ctx.cr6.eq) goto loc_8238E5D0;
	// stw r3,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// stw r31,4(r31)
	REX_STORE_U32(r31.u32 + 4, r31.u32);
	// stw r14,8(r31)
	REX_STORE_U32(r31.u32 + 8, r14.u32);
	// bl 0x8234d858
	ctx.lr = 0x8238E5CC;
	sub_8234D858(ctx, base);
	// b 0x8238e5d4
	goto loc_8238E5D4;
loc_8238E5D0:
	// mr r31,r14
	r31.u64 = r14.u64;
loc_8238E5D4:
	// stw r31,0(r30)
	REX_STORE_U32(r30.u32 + 0, r31.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8238e984
	if (ctx.cr6.eq) goto loc_8238E984;
	// lwz r11,0(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 0);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8238e58c
	if (ctx.cr6.lt) goto loc_8238E58C;
loc_8238E5F4:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,256(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 256);
	// li r4,96
	ctx.r4.s64 = 96;
	// bl 0x82340e38
	ctx.lr = 0x8238E604;
	sub_82340E38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238f570
	if (!ctx.cr6.eq) goto loc_8238F570;
	// addi r31,r24,532
	r31.s64 = r24.s64 + 532;
	// lhz r6,98(r1)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r1.u32 + 98);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,256(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 256);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82340718
	ctx.lr = 0x8238E628;
	sub_82340718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238f570
	if (!ctx.cr6.eq) goto loc_8238F570;
	// lhz r10,98(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 98);
	// stw r14,1412(r24)
	REX_STORE_U32(r24.u32 + 1412, r14.u32);
	// stw r14,1408(r24)
	REX_STORE_U32(r24.u32 + 1408, r14.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8238e69c
	if (ctx.cr6.eq) goto loc_8238E69C;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// subfic r9,r24,-532
	ctx.xer.ca = r24.u32 <= 4294966764;
	ctx.r9.u64 = static_cast<uint64_t>(-532) - r24.u64;
loc_8238E64C:
	// lwz r10,1408(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 1408);
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// add r7,r10,r24
	ctx.r7.u64 = ctx.r10.u64 + r24.u64;
	// stb r8,532(r7)
	REX_STORE_U8(ctx.r7.u32 + 532, ctx.r8.u8);
	// lbz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r6,254
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 254, ctx.xer);
	// bge cr6,0x8238e688
	if (!ctx.cr6.lt) goto loc_8238E688;
	// lwz r10,1408(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 1408);
	// lwz r8,1412(r24)
	ctx.r8.u64 = REX_LOAD_U32(r24.u32 + 1412);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// stw r7,1408(r24)
	REX_STORE_U32(r24.u32 + 1408, ctx.r7.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x8238e688
	if (!ctx.cr6.gt) goto loc_8238E688;
	// stw r10,1412(r24)
	REX_STORE_U32(r24.u32 + 1412, ctx.r10.u32);
loc_8238E688:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lhz r8,98(r1)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r1.u32 + 98);
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8238e64c
	if (ctx.cr6.lt) goto loc_8238E64C;
loc_8238E69C:
	// lwz r11,1412(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 1412);
	// li r7,0
	ctx.r7.s64 = 0;
	// lhz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 96);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lwz r3,256(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 256);
	// addi r11,r24,1424
	ctx.r11.s64 = r24.s64 + 1424;
	// lwz r11,1424(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 1424);
	// stw r9,1412(r24)
	REX_STORE_U32(r24.u32 + 1412, ctx.r9.u32);
	// addi r4,r1,1904
	ctx.r4.s64 = ctx.r1.s64 + 1904;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82340718
	ctx.lr = 0x8238E6CC;
	sub_82340718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238f570
	if (!ctx.cr6.eq) goto loc_8238F570;
	// lbz r10,101(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 101);
	// cmplwi cr6,r10,252
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 252, ctx.xer);
	// bne cr6,0x8238e728
	if (!ctx.cr6.eq) goto loc_8238E728;
	// mr r31,r14
	r31.u64 = r14.u64;
loc_8238E6E4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,256(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 256);
	// bl 0x82340c58
	ctx.lr = 0x8238E6F0;
	sub_82340C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238f570
	if (!ctx.cr6.eq) goto loc_8238F570;
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8238e71c
	if (ctx.cr6.eq) goto loc_8238E71C;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// rlwinm r9,r11,4,24,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF0;
	// lbzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + ctx.r10.u32);
	// add r8,r11,r24
	ctx.r8.u64 = ctx.r11.u64 + r24.u64;
	// stb r9,1276(r8)
	REX_STORE_U8(ctx.r8.u32 + 1276, ctx.r9.u8);
loc_8238E71C:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpwi cr6,r31,32
	ctx.cr6.compare<int32_t>(r31.s32, 32, ctx.xer);
	// blt cr6,0x8238e6e4
	if (ctx.cr6.lt) goto loc_8238E6E4;
loc_8238E728:
	// lbz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 100);
	// rlwinm r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8238e754
	if (!ctx.cr6.eq) goto loc_8238E754;
	// li r10,32
	ctx.r10.s64 = 32;
	// addi r11,r24,1276
	ctx.r11.s64 = r24.s64 + 1276;
	// li r9,128
	ctx.r9.s64 = 128;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8238E74C:
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x8238e74c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8238E74C;
loc_8238E754:
	// lwz r10,1424(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 1424);
	// addi r11,r24,1424
	ctx.r11.s64 = r24.s64 + 1424;
	// mr r21,r14
	r21.u64 = r14.u64;
	// li r16,2
	r16.s64 = 2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8238ea8c
	if (!ctx.cr6.gt) goto loc_8238EA8C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r22,r1,1504
	r22.s64 = ctx.r1.s64 + 1504;
	// addi r23,r1,1904
	r23.s64 = ctx.r1.s64 + 1904;
	// addi r29,r24,2220
	r29.s64 = r24.s64 + 2220;
	// li r20,112
	r20.s64 = 112;
	// addi r19,r11,19560
	r19.s64 = ctx.r11.s64 + 19560;
loc_8238E784:
	// addi r26,r29,-16
	r26.s64 = r29.s64 + -16;
	// li r5,52
	ctx.r5.s64 = 52;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// li r25,1
	r25.s64 = 1;
	// bl 0x823ef5f0
	ctx.lr = 0x8238E79C;
	sub_823EF5F0(ctx, base);
	// lhz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U16(r23.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,256(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 256);
	// rotlwi r4,r11,4
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 4);
	// bl 0x82340e38
	ctx.lr = 0x8238E7B0;
	sub_82340E38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238f570
	if (!ctx.cr6.eq) goto loc_8238F570;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,256(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 256);
	// li r4,13
	ctx.r4.s64 = 13;
	// bl 0x82340e38
	ctx.lr = 0x8238E7C8;
	sub_82340E38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238f570
	if (!ctx.cr6.eq) goto loc_8238F570;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,256(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 256);
	// bl 0x82340c58
	ctx.lr = 0x8238E7DC;
	sub_82340C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238f570
	if (!ctx.cr6.eq) goto loc_8238F570;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,256(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 256);
	// bl 0x82340cf8
	ctx.lr = 0x8238E7F0;
	sub_82340CF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238f570
	if (!ctx.cr6.eq) goto loc_8238F570;
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// li r7,0
	ctx.r7.s64 = 0;
	// lhz r9,88(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 88);
	// li r6,1
	ctx.r6.s64 = 1;
	// rotlwi r10,r11,16
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// lwz r3,256(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 256);
	// li r5,4
	ctx.r5.s64 = 4;
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// stw r11,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r11.u32);
	// bl 0x82340718
	ctx.lr = 0x8238E824;
	sub_82340718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238f570
	if (!ctx.cr6.eq) goto loc_8238F570;
	// addi r27,r29,-4
	r27.s64 = r29.s64 + -4;
	// lwz r3,256(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 256);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82340718
	ctx.lr = 0x8238E848;
	sub_82340718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238f570
	if (!ctx.cr6.eq) goto loc_8238F570;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,256(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 256);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82340718
	ctx.lr = 0x8238E868;
	sub_82340718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238f570
	if (!ctx.cr6.eq) goto loc_8238F570;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r28,r29,-12
	r28.s64 = r29.s64 + -12;
	// lwz r10,0(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 0);
	// addi r4,r28,4
	ctx.r4.s64 = r28.s64 + 4;
	// subf r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stw r9,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r9.u32);
	// lwz r3,256(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 256);
	// bl 0x82340c58
	ctx.lr = 0x8238E890;
	sub_82340C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238f570
	if (!ctx.cr6.eq) goto loc_8238F570;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,256(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 256);
	// bl 0x82340cf8
	ctx.lr = 0x8238E8A4;
	sub_82340CF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238f570
	if (!ctx.cr6.eq) goto loc_8238F570;
	// addi r4,r1,102
	ctx.r4.s64 = ctx.r1.s64 + 102;
	// lwz r3,256(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 256);
	// bl 0x82340c58
	ctx.lr = 0x8238E8B8;
	sub_82340C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238f570
	if (!ctx.cr6.eq) goto loc_8238F570;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,256(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 256);
	// bl 0x82340d48
	ctx.lr = 0x8238E8CC;
	sub_82340D48(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238f570
	if (!ctx.cr6.eq) goto loc_8238F570;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,256(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 256);
	// li r4,14
	ctx.r4.s64 = 14;
	// bl 0x82340e38
	ctx.lr = 0x8238E8E4;
	sub_82340E38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238f570
	if (!ctx.cr6.eq) goto loc_8238F570;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,256(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 256);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,28
	ctx.r5.s64 = 28;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// bl 0x82340718
	ctx.lr = 0x8238E904;
	sub_82340718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238f570
	if (!ctx.cr6.eq) goto loc_8238F570;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// bl 0x826a0568
	ctx.lr = 0x8238E91C;
	sub_826A0568(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,3
	ctx.r8.s64 = 3;
	// li r7,28
	ctx.r7.s64 = 28;
	// addi r6,r1,336
	ctx.r6.s64 = ctx.r1.s64 + 336;
	// addi r5,r1,480
	ctx.r5.s64 = ctx.r1.s64 + 480;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8239e6b0
	ctx.lr = 0x8238E93C;
	sub_8239E6B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238f570
	if (!ctx.cr6.eq) goto loc_8238F570;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,256(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 256);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82340e38
	ctx.lr = 0x8238E954;
	sub_82340E38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238f570
	if (!ctx.cr6.eq) goto loc_8238F570;
	// lbz r10,102(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 102);
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8238e990
	if (ctx.cr6.eq) goto loc_8238E990;
	// lwz r9,0(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// ble cr6,0x8238e990
	if (!ctx.cr6.gt) goto loc_8238E990;
	// li r30,74
	r30.s64 = 74;
	// b 0x8238e99c
	goto loc_8238E99C;
loc_8238E984:
	// li r3,44
	ctx.r3.s64 = 44;
	// addi r1,r1,2768
	ctx.r1.s64 = ctx.r1.s64 + 2768;
	// b 0x826a1cd0
	return;
loc_8238E990:
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// li r30,73
	r30.s64 = 73;
	// stw r14,0(r27)
	REX_STORE_U32(r27.u32 + 0, r14.u32);
loc_8238E99C:
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// li r31,1
	r31.s64 = 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8238e9b8
	if (ctx.cr6.eq) goto loc_8238E9B8;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r31,r16
	r31.u64 = r16.u64;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
loc_8238E9B8:
	// rlwinm r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8238e9d0
	if (ctx.cr6.eq) goto loc_8238E9D0;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r25,r16
	r25.u64 = r16.u64;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
loc_8238E9D0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238ea64
	if (ctx.cr6.eq) goto loc_8238EA64;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x823ef5f0
	ctx.lr = 0x8238E9E8;
	sub_823EF5F0(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// stw r25,380(r1)
	REX_STORE_U32(ctx.r1.u32 + 380, r25.u32);
	// addi r6,r1,368
	ctx.r6.s64 = ctx.r1.s64 + 368;
	// stw r20,368(r1)
	REX_STORE_U32(ctx.r1.u32 + 368, r20.u32);
	// ori r5,r30,1024
	ctx.r5.u64 = r30.u64 | 1024;
	// stw r31,388(r1)
	REX_STORE_U32(ctx.r1.u32 + 388, r31.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,384(r1)
	REX_STORE_U32(ctx.r1.u32 + 384, ctx.r11.u32);
	// stw r10,372(r1)
	REX_STORE_U32(ctx.r1.u32 + 372, ctx.r10.u32);
	// lwz r3,20(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 20);
	// bl 0x8233cb78
	ctx.lr = 0x8238EA1C;
	sub_8233CB78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238f570
	if (!ctx.cr6.eq) goto loc_8238F570;
	// rlwinm r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238ea64
	if (ctx.cr6.eq) goto loc_8238EA64;
	// lwz r3,0(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 0);
	// li r7,2
	ctx.r7.s64 = 2;
	// lwz r4,0(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 0);
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// lwz r9,172(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 172);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8238EA5C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238f570
	if (!ctx.cr6.eq) goto loc_8238F570;
loc_8238EA64:
	// lwz r10,1424(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 1424);
	// addi r21,r21,1
	r21.s64 = r21.s64 + 1;
	// addi r11,r24,1424
	ctx.r11.s64 = r24.s64 + 1424;
	// addi r23,r23,2
	r23.s64 = r23.s64 + 2;
	// addi r22,r22,4
	r22.s64 = r22.s64 + 4;
	// addi r29,r29,52
	r29.s64 = r29.s64 + 52;
	// cmpw cr6,r21,r10
	ctx.cr6.compare<int32_t>(r21.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8238e784
	if (ctx.cr6.lt) goto loc_8238E784;
	// lwz r25,108(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// li r23,1
	r23.s64 = 1;
loc_8238EA8C:
	// lhz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 96);
	// lwz r11,1412(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 1412);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x8238eaa0
	if (ctx.cr6.gt) goto loc_8238EAA0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8238EAA0:
	// stw r11,1416(r24)
	REX_STORE_U32(r24.u32 + 1416, ctx.r11.u32);
	// lis r10,-32129
	ctx.r10.s64 = -2105606144;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2015
	ctx.r6.s64 = 2015;
	// rlwinm r4,r11,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,1012(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 1012);
	// lwz r3,4(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x8238EAC4;
	sub_82330E40(ctx, base);
	// stw r3,520(r24)
	REX_STORE_U32(r24.u32 + 520, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8238e984
	if (ctx.cr6.eq) goto loc_8238E984;
	// lhz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 96);
	// mr r26,r14
	r26.u64 = r14.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8238ecc8
	if (!ctx.cr6.gt) goto loc_8238ECC8;
	// mr r27,r14
	r27.u64 = r14.u64;
	// addi r10,r1,1904
	ctx.r10.s64 = ctx.r1.s64 + 1904;
loc_8238EAE8:
	// addi r11,r24,1424
	ctx.r11.s64 = r24.s64 + 1424;
	// lwz r11,1424(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 1424);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,256(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 256);
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + r26.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r10
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r10.u32);
	// rotlwi r11,r8,4
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 4);
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// bl 0x82340e38
	ctx.lr = 0x8238EB10;
	sub_82340E38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238f570
	if (!ctx.cr6.eq) goto loc_8238F570;
	// lwz r11,520(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 520);
	// lis r10,-32129
	ctx.r10.s64 = -2105606144;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// add r29,r27,r11
	r29.u64 = r27.u64 + ctx.r11.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2050
	ctx.r6.s64 = 2050;
	// stwx r17,r27,r11
	REX_STORE_U32(r27.u32 + ctx.r11.u32, r17.u32);
	// lwz r11,0(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,1012(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 1012);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r4,r11,6,0,25
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// lwz r3,4(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x8238EB50;
	sub_82330E40(ctx, base);
	// stw r3,4(r29)
	REX_STORE_U32(r29.u32 + 4, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8238e984
	if (ctx.cr6.eq) goto loc_8238E984;
	// mr r28,r14
	r28.u64 = r14.u64;
loc_8238EB60:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,256(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 256);
	// bl 0x82340c58
	ctx.lr = 0x8238EB6C;
	sub_82340C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238f570
	if (!ctx.cr6.eq) goto loc_8238F570;
	// lbz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8238eca4
	if (ctx.cr6.eq) goto loc_8238ECA4;
	// clrlwi r10,r8,27
	ctx.r10.u64 = ctx.r8.u32 & 0x1F;
	// lwz r11,0(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 0);
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// lbzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8238ebb4
	if (!ctx.cr6.lt) goto loc_8238EBB4;
	// mullw r11,r11,r28
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r28.s32);
	// lwz r9,4(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 4);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r31,r11,r9
	r31.u64 = ctx.r11.u64 + ctx.r9.u64;
	// b 0x8238ebb8
	goto loc_8238EBB8;
loc_8238EBB4:
	// addi r31,r1,112
	r31.s64 = ctx.r1.s64 + 112;
loc_8238EBB8:
	// rlwinm r11,r8,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238ec34
	if (ctx.cr6.eq) goto loc_8238EC34;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,256(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 256);
	// bl 0x82340bb8
	ctx.lr = 0x8238EBD0;
	sub_82340BB8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238f570
	if (!ctx.cr6.eq) goto loc_8238F570;
	// lhz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 88);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,254
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 254, ctx.xer);
	// beq cr6,0x8238ec1c
	if (ctx.cr6.eq) goto loc_8238EC1C;
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// beq cr6,0x8238ec14
	if (ctx.cr6.eq) goto loc_8238EC14;
	// rlwinm r9,r11,28,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFF;
	// rlwinm r11,r11,29,23,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FE;
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stb r10,0(r31)
	REX_STORE_U8(r31.u32 + 0, ctx.r10.u8);
	// b 0x8238ec20
	goto loc_8238EC20;
loc_8238EC14:
	// stb r14,0(r31)
	REX_STORE_U8(r31.u32 + 0, r14.u8);
	// b 0x8238ec20
	goto loc_8238EC20;
loc_8238EC1C:
	// stb r18,0(r31)
	REX_STORE_U8(r31.u32 + 0, r18.u8);
loc_8238EC20:
	// addi r4,r31,1
	ctx.r4.s64 = r31.s64 + 1;
	// lwz r3,256(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 256);
	// bl 0x82340c58
	ctx.lr = 0x8238EC2C;
	sub_82340C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238f570
	if (!ctx.cr6.eq) goto loc_8238F570;
loc_8238EC34:
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8238ec68
	if (ctx.cr6.eq) goto loc_8238EC68;
	// addi r30,r31,2
	r30.s64 = r31.s64 + 2;
	// lwz r3,256(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 256);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82340c58
	ctx.lr = 0x8238EC54;
	sub_82340C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238f570
	if (!ctx.cr6.eq) goto loc_8238F570;
	// lbz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,0(r30)
	REX_STORE_U8(r30.u32 + 0, ctx.r11.u8);
loc_8238EC68:
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// rlwinm r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8238eca8
	if (ctx.cr6.eq) goto loc_8238ECA8;
	// addi r4,r31,3
	ctx.r4.s64 = r31.s64 + 3;
	// lwz r3,256(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 256);
	// bl 0x82340c58
	ctx.lr = 0x8238EC84;
	sub_82340C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238f570
	if (!ctx.cr6.eq) goto loc_8238F570;
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// lwz r3,256(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 256);
	// bl 0x82340c58
	ctx.lr = 0x8238EC98;
	sub_82340C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238f570
	if (!ctx.cr6.eq) goto loc_8238F570;
	// b 0x8238eca8
	goto loc_8238ECA8;
loc_8238ECA4:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
loc_8238ECA8:
	// cmpwi cr6,r28,64
	ctx.cr6.compare<int32_t>(r28.s32, 64, ctx.xer);
	// blt cr6,0x8238eb60
	if (ctx.cr6.lt) goto loc_8238EB60;
	// lhz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 96);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r27,r27,8
	r27.s64 = r27.s64 + 8;
	// addi r10,r1,1904
	ctx.r10.s64 = ctx.r1.s64 + 1904;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8238eae8
	if (ctx.cr6.lt) goto loc_8238EAE8;
loc_8238ECC8:
	// lwz r10,1412(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 1412);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8238ed34
	if (!ctx.cr6.lt) goto loc_8238ED34;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// rlwinm r30,r11,3,0,28
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
loc_8238ECDC:
	// lwz r11,520(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 520);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// add r31,r30,r11
	r31.u64 = r30.u64 + ctx.r11.u64;
	// li r6,2170
	ctx.r6.s64 = 2170;
	// stwx r17,r30,r11
	REX_STORE_U32(r30.u32 + ctx.r11.u32, r17.u32);
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lwz r11,1012(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1012);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 0);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r4,r11,6,0,25
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// bl 0x82330e40
	ctx.lr = 0x8238ED14;
	sub_82330E40(ctx, base);
	// stw r3,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8238e984
	if (ctx.cr6.eq) goto loc_8238E984;
	// lwz r11,1412(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 1412);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8238ecdc
	if (ctx.cr6.lt) goto loc_8238ECDC;
loc_8238ED34:
	// lwz r10,1424(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 1424);
	// addi r11,r24,1424
	ctx.r11.s64 = r24.s64 + 1424;
	// mr r26,r14
	r26.u64 = r14.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8238f10c
	if (!ctx.cr6.gt) goto loc_8238F10C;
	// addi r27,r1,1504
	r27.s64 = ctx.r1.s64 + 1504;
	// addi r28,r24,2204
	r28.s64 = r24.s64 + 2204;
loc_8238ED50:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,256(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 256);
	// rlwinm r4,r11,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x82340e38
	ctx.lr = 0x8238ED64;
	sub_82340E38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238f570
	if (!ctx.cr6.eq) goto loc_8238F570;
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8238f0f0
	if (ctx.cr6.eq) goto loc_8238F0F0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// lwz r10,92(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8238ED90;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238f570
	if (!ctx.cr6.eq) goto loc_8238F570;
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 0);
	// addi r9,r1,120
	ctx.r9.s64 = ctx.r1.s64 + 120;
	// addi r8,r1,92
	ctx.r8.s64 = ctx.r1.s64 + 92;
	// lwz r5,124(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8238EDC4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238f570
	if (!ctx.cr6.eq) goto loc_8238F570;
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r6,92(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8238f0c4
	if (ctx.cr6.eq) goto loc_8238F0C4;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8238f0c4
	if (ctx.cr6.eq) goto loc_8238F0C4;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x8238ef58
	if (!ctx.cr6.eq) goto loc_8238EF58;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8238ee1c
	if (!ctx.cr6.eq) goto loc_8238EE1C;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,256(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 256);
	// rlwinm r6,r6,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 31) & 0x7FFFFFFF;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82340718
	ctx.lr = 0x8238EE14;
	sub_82340718(ctx, base);
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x8238ef14
	goto loc_8238EF14;
loc_8238EE1C:
	// rlwinm r30,r6,30,2,31
	r30.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFFF;
	// mr r29,r14
	r29.u64 = r14.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8238ee90
	if (ctx.cr6.eq) goto loc_8238EE90;
loc_8238EE2C:
	// cmplwi cr6,r30,512
	ctx.cr6.compare<uint32_t>(r30.u32, 512, ctx.xer);
	// li r31,512
	r31.s64 = 512;
	// bgt cr6,0x8238ee3c
	if (ctx.cr6.gt) goto loc_8238EE3C;
	// mr r31,r30
	r31.u64 = r30.u64;
loc_8238EE3C:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,256(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 256);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,480
	ctx.r4.s64 = ctx.r1.s64 + 480;
	// bl 0x82340718
	ctx.lr = 0x8238EE54;
	sub_82340718(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8238ee7c
	if (ctx.cr6.eq) goto loc_8238EE7C;
	// addi r10,r1,478
	ctx.r10.s64 = ctx.r1.s64 + 478;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
loc_8238EE68:
	// lhzu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// sthx r9,r8,r11
	REX_STORE_U16(ctx.r8.u32 + ctx.r11.u32, ctx.r9.u16);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8238ee68
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8238EE68;
loc_8238EE7C:
	// subf. r30,r31,r30
	r30.u64 = r30.u64 - r31.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// add r29,r31,r29
	r29.u64 = r31.u64 + r29.u64;
	// bne 0x8238ee2c
	if (!ctx.cr0.eq) goto loc_8238EE2C;
	// lwz r6,92(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_8238EE90:
	// rlwinm r29,r6,30,2,31
	r29.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFFF;
	// mr r30,r14
	r30.u64 = r14.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8238ef18
	if (ctx.cr6.eq) goto loc_8238EF18;
loc_8238EEA0:
	// cmplwi cr6,r29,512
	ctx.cr6.compare<uint32_t>(r29.u32, 512, ctx.xer);
	// li r31,512
	r31.s64 = 512;
	// bgt cr6,0x8238eeb0
	if (ctx.cr6.gt) goto loc_8238EEB0;
	// mr r31,r29
	r31.u64 = r29.u64;
loc_8238EEB0:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,256(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 256);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,480
	ctx.r4.s64 = ctx.r1.s64 + 480;
	// bl 0x82340718
	ctx.lr = 0x8238EEC8;
	sub_82340718(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8238ef04
	if (ctx.cr6.eq) goto loc_8238EF04;
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,480
	ctx.r8.s64 = ctx.r1.s64 + 480;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r8,-2
	ctx.r10.s64 = ctx.r8.s64 + -2;
loc_8238EEE8:
	// lhzu r8,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// sth r8,2(r9)
	REX_STORE_U16(ctx.r9.u32 + 2, ctx.r8.u16);
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + ctx.r11.u64;
	// bdnz 0x8238eee8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8238EEE8;
	// b 0x8238ef08
	goto loc_8238EF08;
loc_8238EF04:
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_8238EF08:
	// subf. r29,r31,r29
	r29.u64 = r29.u64 - r31.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// add r30,r31,r30
	r30.u64 = r31.u64 + r30.u64;
	// bne 0x8238eea0
	if (!ctx.cr0.eq) goto loc_8238EEA0;
loc_8238EF14:
	// lwz r6,92(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
loc_8238EF18:
	// rlwinm r11,r6,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r10,r14
	ctx.r10.u64 = r14.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238f0b4
	if (ctx.cr6.eq) goto loc_8238F0B4;
	// mr r11,r14
	ctx.r11.u64 = r14.u64;
loc_8238EF2C:
	// lhzx r8,r4,r11
	ctx.r8.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// xori r7,r8,32768
	ctx.r7.u64 = ctx.r8.u64 ^ 32768;
	// sthx r7,r4,r11
	REX_STORE_U16(ctx.r4.u32 + ctx.r11.u32, ctx.r7.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lwz r6,92(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r5,r6,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x8238ef2c
	if (ctx.cr6.lt) goto loc_8238EF2C;
	// b 0x8238f0b4
	goto loc_8238F0B4;
loc_8238EF58:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8238ef80
	if (!ctx.cr6.eq) goto loc_8238EF80;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,256(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 256);
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82340718
	ctx.lr = 0x8238EF70;
	sub_82340718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238f570
	if (!ctx.cr6.eq) goto loc_8238F570;
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x8238f084
	goto loc_8238F084;
loc_8238EF80:
	// rlwinm r30,r6,30,2,31
	r30.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFFF;
	// mr r29,r14
	r29.u64 = r14.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8238effc
	if (ctx.cr6.eq) goto loc_8238EFFC;
loc_8238EF90:
	// cmplwi cr6,r30,512
	ctx.cr6.compare<uint32_t>(r30.u32, 512, ctx.xer);
	// li r31,512
	r31.s64 = 512;
	// bgt cr6,0x8238efa0
	if (ctx.cr6.gt) goto loc_8238EFA0;
	// mr r31,r30
	r31.u64 = r30.u64;
loc_8238EFA0:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,256(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 256);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,480
	ctx.r4.s64 = ctx.r1.s64 + 480;
	// bl 0x82340718
	ctx.lr = 0x8238EFB8;
	sub_82340718(ctx, base);
	// mr r10,r14
	ctx.r10.u64 = r14.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8238efe8
	if (ctx.cr6.eq) goto loc_8238EFE8;
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
	// addi r9,r1,480
	ctx.r9.s64 = ctx.r1.s64 + 480;
loc_8238EFD0:
	// lbzx r8,r10,r9
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stbx r8,r7,r11
	REX_STORE_U8(ctx.r7.u32 + ctx.r11.u32, ctx.r8.u8);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x8238efd0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8238EFD0;
loc_8238EFE8:
	// subf. r30,r31,r30
	r30.u64 = r30.u64 - r31.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// add r29,r31,r29
	r29.u64 = r31.u64 + r29.u64;
	// bne 0x8238ef90
	if (!ctx.cr0.eq) goto loc_8238EF90;
	// lwz r6,92(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_8238EFFC:
	// rlwinm r29,r6,30,2,31
	r29.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFFF;
	// mr r30,r14
	r30.u64 = r14.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8238f088
	if (ctx.cr6.eq) goto loc_8238F088;
loc_8238F00C:
	// cmplwi cr6,r29,512
	ctx.cr6.compare<uint32_t>(r29.u32, 512, ctx.xer);
	// li r31,512
	r31.s64 = 512;
	// bgt cr6,0x8238f01c
	if (ctx.cr6.gt) goto loc_8238F01C;
	// mr r31,r29
	r31.u64 = r29.u64;
loc_8238F01C:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,256(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 256);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,480
	ctx.r4.s64 = ctx.r1.s64 + 480;
	// bl 0x82340718
	ctx.lr = 0x8238F034;
	sub_82340718(ctx, base);
	// mr r10,r14
	ctx.r10.u64 = r14.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8238f074
	if (ctx.cr6.eq) goto loc_8238F074;
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
	// addi r8,r1,480
	ctx.r8.s64 = ctx.r1.s64 + 480;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_8238F054:
	// lbzx r7,r10,r8
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r8.u32);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r7,1(r9)
	REX_STORE_U8(ctx.r9.u32 + 1, ctx.r7.u8);
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + ctx.r11.u64;
	// bdnz 0x8238f054
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8238F054;
	// b 0x8238f078
	goto loc_8238F078;
loc_8238F074:
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_8238F078:
	// subf. r29,r31,r29
	r29.u64 = r29.u64 - r31.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// add r30,r31,r30
	r30.u64 = r31.u64 + r30.u64;
	// bne 0x8238f00c
	if (!ctx.cr0.eq) goto loc_8238F00C;
loc_8238F084:
	// lwz r6,92(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
loc_8238F088:
	// mr r11,r14
	ctx.r11.u64 = r14.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8238f0b4
	if (ctx.cr6.eq) goto loc_8238F0B4;
loc_8238F094:
	// lbzx r9,r11,r4
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// xori r8,r9,128
	ctx.r8.u64 = ctx.r9.u64 ^ 128;
	// stbx r8,r11,r4
	REX_STORE_U8(ctx.r11.u32 + ctx.r4.u32, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r6,92(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x8238f094
	if (ctx.cr6.lt) goto loc_8238F094;
loc_8238F0B4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8238f0c4
	if (ctx.cr6.eq) goto loc_8238F0C4;
	// cmpwi cr6,r3,22
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 22, ctx.xer);
	// bne cr6,0x8238f570
	if (!ctx.cr6.eq) goto loc_8238F570;
loc_8238F0C4:
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r7,120(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r5,112(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8238F0E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238f570
	if (!ctx.cr6.eq) goto loc_8238F570;
	// lwz r25,108(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// li r23,1
	r23.s64 = 1;
loc_8238F0F0:
	// lwz r10,1424(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 1424);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r11,r24,1424
	ctx.r11.s64 = r24.s64 + 1424;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// addi r28,r28,52
	r28.s64 = r28.s64 + 52;
	// cmpw cr6,r26,r10
	ctx.cr6.compare<int32_t>(r26.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8238ed50
	if (ctx.cr6.lt) goto loc_8238ED50;
loc_8238F10C:
	// lis r31,-32129
	r31.s64 = -2105606144;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2357
	ctx.r6.s64 = 2357;
	// li r4,296
	ctx.r4.s64 = 296;
	// lwz r11,1012(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1012);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x8238F12C;
	sub_82330E40(ctx, base);
	// stw r3,64(r24)
	REX_STORE_U32(r24.u32 + 64, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8238e984
	if (ctx.cr6.eq) goto loc_8238E984;
	// lwz r10,128(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r11,2804(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 2804);
	// stw r3,32(r24)
	REX_STORE_U32(r24.u32 + 32, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,268(r3)
	REX_STORE_U32(ctx.r3.u32 + 268, ctx.r10.u32);
	// beq cr6,0x8238f16c
	if (ctx.cr6.eq) goto loc_8238F16C;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8238f16c
	if (ctx.cr6.eq) goto loc_8238F16C;
	// lwz r10,32(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 32);
	// lwz r27,2796(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 2796);
	// stw r11,256(r10)
	REX_STORE_U32(ctx.r10.u32 + 256, ctx.r11.u32);
	// b 0x8238f190
	goto loc_8238F190;
loc_8238F16C:
	// lwz r27,2796(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 2796);
	// rlwinm r11,r27,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,32(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 32);
	// beq cr6,0x8238f18c
	if (ctx.cr6.eq) goto loc_8238F18C;
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r10,256(r11)
	REX_STORE_U32(ctx.r11.u32 + 256, ctx.r10.u32);
	// b 0x8238f190
	goto loc_8238F190;
loc_8238F18C:
	// stw r16,256(r11)
	REX_STORE_U32(ctx.r11.u32 + 256, r16.u32);
loc_8238F190:
	// lwz r11,32(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 32);
	// addi r4,r24,264
	ctx.r4.s64 = r24.s64 + 264;
	// li r5,256
	ctx.r5.s64 = 256;
	// stw r16,260(r11)
	REX_STORE_U32(ctx.r11.u32 + 260, r16.u32);
	// lwz r3,32(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 32);
	// bl 0x823314a0
	ctx.lr = 0x8238F1A8;
	sub_823314A0(ctx, base);
	// lwz r10,32(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 32);
	// addic. r11,r10,264
	ctx.xer.ca = ctx.r10.u32 > 4294967031;
	ctx.r11.s64 = ctx.r10.s64 + 264;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8238f1c0
	if (ctx.cr0.eq) goto loc_8238F1C0;
	// lwz r10,20(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 20);
	// lwz r9,1188(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 1188);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_8238F1C0:
	// stw r14,188(r24)
	REX_STORE_U32(r24.u32 + 188, r14.u32);
	// lwz r11,32(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 32);
	// lwz r10,256(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 256);
	// cmplwi cr6,r10,11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 11, ctx.xer);
	// lwz r9,260(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 260);
	// bgt cr6,0x8238f2f4
	if (ctx.cr6.gt) goto loc_8238F2F4;
	// lis r12,-32199
	ctx.r12.s64 = -2110193664;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-3600
	ctx.r12.s64 = ctx.r12.s64 + -3600;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_8238F270;
	case 1:
		goto loc_8238F220;
	case 2:
		goto loc_8238F234;
	case 3:
		goto loc_8238F248;
	case 4:
		goto loc_8238F25C;
	case 5:
		goto loc_8238F25C;
	case 6:
		goto loc_8238F270;
	case 7:
		goto loc_8238F270;
	case 8:
		goto loc_8238F270;
	case 9:
		goto loc_8238F270;
	case 10:
		goto loc_8238F270;
	case 11:
		goto loc_8238F270;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_8238F220:
	// li r10,8
	ctx.r10.s64 = 8;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// rldicl r8,r10,61,3
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 61) & 0x1FFFFFFFFFFFFFFF;
	// stw r8,276(r11)
	REX_STORE_U32(ctx.r11.u32 + 276, ctx.r8.u32);
	// b 0x8238f2e8
	goto loc_8238F2E8;
loc_8238F234:
	// li r10,16
	ctx.r10.s64 = 16;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// rldicl r8,r10,61,3
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 61) & 0x1FFFFFFFFFFFFFFF;
	// stw r8,276(r11)
	REX_STORE_U32(ctx.r11.u32 + 276, ctx.r8.u32);
	// b 0x8238f2e8
	goto loc_8238F2E8;
loc_8238F248:
	// li r10,24
	ctx.r10.s64 = 24;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// rldicl r8,r10,61,3
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 61) & 0x1FFFFFFFFFFFFFFF;
	// stw r8,276(r11)
	REX_STORE_U32(ctx.r11.u32 + 276, ctx.r8.u32);
	// b 0x8238f2e8
	goto loc_8238F2E8;
loc_8238F25C:
	// li r10,32
	ctx.r10.s64 = 32;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// rldicl r8,r10,61,3
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 61) & 0x1FFFFFFFFFFFFFFF;
	// stw r8,276(r11)
	REX_STORE_U32(ctx.r11.u32 + 276, ctx.r8.u32);
	// b 0x8238f2e8
	goto loc_8238F2E8;
loc_8238F270:
	// lis r12,-32199
	ctx.r12.s64 = -2110193664;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-3448
	ctx.r12.s64 = ctx.r12.s64 + -3448;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_8238F2E4;
	case 1:
		goto loc_8238F2F4;
	case 2:
		goto loc_8238F2F4;
	case 3:
		goto loc_8238F2F4;
	case 4:
		goto loc_8238F2F4;
	case 5:
		goto loc_8238F2F4;
	case 6:
		goto loc_8238F2B8;
	case 7:
		goto loc_8238F2C4;
	case 8:
		goto loc_8238F2D0;
	case 9:
		goto loc_8238F2DC;
	case 10:
		goto loc_8238F2DC;
	case 11:
		goto loc_8238F2DC;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_8238F2B8:
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r10,276(r11)
	REX_STORE_U32(ctx.r11.u32 + 276, ctx.r10.u32);
	// b 0x8238f2e8
	goto loc_8238F2E8;
loc_8238F2C4:
	// li r10,36
	ctx.r10.s64 = 36;
	// stw r10,276(r11)
	REX_STORE_U32(ctx.r11.u32 + 276, ctx.r10.u32);
	// b 0x8238f2e8
	goto loc_8238F2E8;
loc_8238F2D0:
	// li r10,16
	ctx.r10.s64 = 16;
	// stw r10,276(r11)
	REX_STORE_U32(ctx.r11.u32 + 276, ctx.r10.u32);
	// b 0x8238f2e8
	goto loc_8238F2E8;
loc_8238F2DC:
	// stw r23,276(r11)
	REX_STORE_U32(ctx.r11.u32 + 276, r23.u32);
	// b 0x8238f2f4
	goto loc_8238F2F4;
loc_8238F2E4:
	// stw r14,276(r11)
	REX_STORE_U32(ctx.r11.u32 + 276, r14.u32);
loc_8238F2E8:
	// lwz r10,276(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 276);
	// mullw r9,r10,r9
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// stw r9,276(r11)
	REX_STORE_U32(ctx.r11.u32 + 276, ctx.r9.u32);
loc_8238F2F4:
	// addi r11,r1,268
	ctx.r11.s64 = ctx.r1.s64 + 268;
	// stw r14,276(r1)
	REX_STORE_U32(ctx.r1.u32 + 276, r14.u32);
	// addi r10,r1,268
	ctx.r10.s64 = ctx.r1.s64 + 268;
	// stw r11,268(r1)
	REX_STORE_U32(ctx.r1.u32 + 268, ctx.r11.u32);
	// li r5,152
	ctx.r5.s64 = 152;
	// stw r10,272(r1)
	REX_STORE_U32(ctx.r1.u32 + 272, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x823ef5f0
	ctx.lr = 0x8238F318;
	sub_823EF5F0(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r4,r9,19788
	ctx.r4.s64 = ctx.r9.s64 + 19788;
	// bl 0x82331480
	ctx.lr = 0x8238F328;
	sub_82331480(ctx, base);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// lwz r11,32(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 32);
	// li r7,6
	ctx.r7.s64 = 6;
	// ori r6,r8,256
	ctx.r6.u64 = ctx.r8.u64 | 256;
	// lwz r3,20(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 20);
	// addi r28,r24,524
	r28.s64 = r24.s64 + 524;
	// stw r6,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r6.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r10,260(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 260);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// stw r10,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r10.u32);
	// lwz r9,256(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 256);
	// stw r9,280(r1)
	REX_STORE_U32(ctx.r1.u32 + 280, ctx.r9.u32);
	// stw r7,292(r1)
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r7.u32);
	// bl 0x82336400
	ctx.lr = 0x8238F368;
	sub_82336400(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238f570
	if (!ctx.cr6.eq) goto loc_8238F570;
	// lwz r11,32(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 32);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2424
	ctx.r6.s64 = 2424;
	// lwz r9,264(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 264);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r8.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,260(r10)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r10.u32 + 260, temp.u32);
	// lwz r3,0(r15)
	ctx.r3.u64 = REX_LOAD_U32(r15.u32 + 0);
	// mulli r4,r3,592
	ctx.r4.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(592));
	// stw r3,1048(r24)
	REX_STORE_U32(r24.u32 + 1048, ctx.r3.u32);
	// lwz r11,1012(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1012);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x8238F3B8;
	sub_82330E40(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,1052(r24)
	REX_STORE_U32(r24.u32 + 1052, ctx.r3.u32);
	// beq cr6,0x8238e984
	if (ctx.cr6.eq) goto loc_8238E984;
	// lwz r11,1048(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 1048);
	// mr r30,r14
	r30.u64 = r14.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8238f40c
	if (!ctx.cr6.gt) goto loc_8238F40C;
	// mr r31,r14
	r31.u64 = r14.u64;
loc_8238F3D8:
	// lwz r11,1052(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 1052);
	// add. r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8238f3f8
	if (ctx.cr0.eq) goto loc_8238F3F8;
	// stw r11,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// stw r11,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// stw r14,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r14.u32);
	// bl 0x8234d858
	ctx.lr = 0x8238F3F8;
	sub_8234D858(ctx, base);
loc_8238F3F8:
	// lwz r11,1048(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 1048);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,592
	r31.s64 = r31.s64 + 592;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8238f3d8
	if (ctx.cr6.lt) goto loc_8238F3D8;
loc_8238F40C:
	// lis r31,-32129
	r31.s64 = -2105606144;
	// lwz r10,1048(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 1048);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2441
	ctx.r6.s64 = 2441;
	// li r4,24
	ctx.r4.s64 = 24;
	// lwz r11,1012(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1012);
	// rlwinm r29,r10,1,0,30
	r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x8238F434;
	sub_82330E40(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8238f444
	if (ctx.cr6.eq) goto loc_8238F444;
	// bl 0x823583e8
	ctx.lr = 0x8238F440;
	sub_823583E8(ctx, base);
	// b 0x8238f448
	goto loc_8238F448;
loc_8238F444:
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
loc_8238F448:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,1056(r24)
	REX_STORE_U32(r24.u32 + 1056, ctx.r3.u32);
	// beq cr6,0x8238e984
	if (ctx.cr6.eq) goto loc_8238E984;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lwz r4,20(r24)
	ctx.r4.u64 = REX_LOAD_U32(r24.u32 + 20);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82358408
	ctx.lr = 0x8238F464;
	sub_82358408(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238f570
	if (!ctx.cr6.eq) goto loc_8238F570;
	// lwz r11,1012(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1012);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2453
	ctx.r6.s64 = 2453;
	// mulli r4,r29,792
	ctx.r4.s64 = static_cast<int64_t>(r29.u64 * static_cast<uint64_t>(792));
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x8238F488;
	sub_82330E40(ctx, base);
	// stw r3,1060(r24)
	REX_STORE_U32(r24.u32 + 1060, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8238e984
	if (ctx.cr6.eq) goto loc_8238E984;
	// mr r30,r14
	r30.u64 = r14.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x8238f4f8
	if (!ctx.cr6.gt) goto loc_8238F4F8;
	// mr r31,r14
	r31.u64 = r14.u64;
loc_8238F4A4:
	// lwz r11,1060(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 1060);
	// add. r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + r31.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8238f4b4
	if (ctx.cr0.eq) goto loc_8238F4B4;
	// bl 0x823ac560
	ctx.lr = 0x8238F4B4;
	sub_823AC560(ctx, base);
loc_8238F4B4:
	// lwz r11,1060(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 1060);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r6,0(r28)
	ctx.r6.u64 = REX_LOAD_U32(r28.u32 + 0);
	// add r5,r11,r31
	ctx.r5.u64 = ctx.r11.u64 + r31.u64;
	// lwz r3,1056(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 1056);
	// bl 0x823587d8
	ctx.lr = 0x8238F4CC;
	sub_823587D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238f570
	if (!ctx.cr6.eq) goto loc_8238F570;
	// lwz r11,1060(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 1060);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// addi r31,r31,792
	r31.s64 = r31.s64 + 792;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(r30.s32, r29.s32, ctx.xer);
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// ori r9,r10,2048
	ctx.r9.u64 = ctx.r10.u64 | 2048;
	// stw r9,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r9.u32);
	// blt cr6,0x8238f4a4
	if (ctx.cr6.lt) goto loc_8238F4A4;
loc_8238F4F8:
	// rlwinm r11,r27,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x4000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8238f524
	if (!ctx.cr6.eq) goto loc_8238F524;
	// rlwinm r11,r27,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8238f524
	if (!ctx.cr6.eq) goto loc_8238F524;
	// lwz r11,32(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r14,528(r24)
	REX_STORE_U32(r24.u32 + 528, r14.u32);
	// stw r10,272(r11)
	REX_STORE_U32(ctx.r11.u32 + 272, ctx.r10.u32);
	// b 0x8238f55c
	goto loc_8238F55C;
loc_8238F524:
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lwz r10,1408(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 1408);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2469
	ctx.r6.s64 = 2469;
	// rlwinm r4,r10,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,1012(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1012);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x8238F548;
	sub_82330E40(ctx, base);
	// stw r3,528(r24)
	REX_STORE_U32(r24.u32 + 528, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8238e984
	if (ctx.cr6.eq) goto loc_8238E984;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8238dd48
	ctx.lr = 0x8238F55C;
	sub_8238DD48(ctx, base);
loc_8238F55C:
	// stw r14,28(r24)
	REX_STORE_U32(r24.u32 + 28, r14.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x823c8da8
	ctx.lr = 0x8238F56C;
	sub_823C8DA8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8238F570:
	// addi r1,r1,2768
	ctx.r1.s64 = ctx.r1.s64 + 2768;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_8240D8B8) {
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
	// bl 0x826a1cac
	ctx.lr = 0x8240D8C0;
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -72, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
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
	// beq cr6,0x8240d8f0
	if (ctx.cr6.eq) goto loc_8240D8F0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x82408848
	ctx.lr = 0x8240D8EC;
	sub_82408848(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
loc_8240D8F0:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8240d90c
	if (ctx.cr6.eq) goto loc_8240D90C;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824094e0
	ctx.lr = 0x8240D908;
	sub_824094E0(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
loc_8240D90C:
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
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r8,r29,30
	ctx.r8.u64 = r29.u32 & 0x3;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mullw r10,r3,r29
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(r29.s32);
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r28,r10,r6
	r28.u64 = ctx.r10.u64 + ctx.r6.u64;
	// lfs f31,3716(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 3716);
	f31.f64 = double(temp.f32);
	// add r26,r9,r5
	r26.u64 = ctx.r9.u64 + ctx.r5.u64;
	// bne 0x8240d970
	if (!ctx.cr0.eq) goto loc_8240D970;
	// li r29,0
	r29.s64 = 0;
	// li r30,1
	r30.s64 = 1;
	// b 0x8240d978
	goto loc_8240D978;
loc_8240D970:
	// addi r29,r11,-1
	r29.s64 = ctx.r11.s64 + -1;
	// li r30,-1
	r30.s64 = -1;
loc_8240D978:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8240d9d0
	if (ctx.cr6.eq) goto loc_8240D9D0;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// lfs f12,16224(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16224);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,16232(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 16232);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,16228(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 16228);
	ctx.f0.f64 = double(temp.f32);
loc_8240D9A0:
	// lfs f11,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// fmuls f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfs f10,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f11,f10,f0,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f10.f64, ctx.f0.f64, ctx.f11.f64)));
	// fmadds f11,f9,f12,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f9.f64, ctx.f12.f64, ctx.f11.f64)));
	// stfs f11,0(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lwz r9,104(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 104);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8240d9a0
	if (ctx.cr6.lt) goto loc_8240D9A0;
loc_8240D9D0:
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8240d9e8
	if (ctx.cr6.eq) goto loc_8240D9E8;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82409a88
	ctx.lr = 0x8240D9E8;
	sub_82409A88(ctx, base);
loc_8240D9E8:
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8240db38
	if (!ctx.cr6.gt) goto loc_8240DB38;
	// add r11,r30,r29
	ctx.r11.u64 = r30.u64 + r29.u64;
	// subf r10,r30,r29
	ctx.r10.u64 = r29.u64 - r30.u64;
	// rlwinm r6,r11,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r27,r30,1,0,30
	r27.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// rlwinm r5,r30,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// lis r30,-32256
	r30.s64 = -2113929216;
	// rlwinm r9,r29,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r7,r10,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r3,r27,r28
	ctx.r3.u64 = r28.u64 - r27.u64;
	// lfd f9,20216(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f9.u64 = REX_LOAD_U64(ctx.r11.u32 + 20216);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lfs f12,17280(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 17280);
	ctx.f12.f64 = double(temp.f32);
	// lis r29,-32255
	r29.s64 = -2113863680;
	// lis r28,-32255
	r28.s64 = -2113863680;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lfs f10,15196(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15196);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,20208(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 20208);
	ctx.f11.f64 = double(temp.f32);
	// ori r30,r11,65535
	r30.u64 = ctx.r11.u64 | 65535;
	// lfs f13,20264(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 20264);
	ctx.f13.f64 = double(temp.f32);
	// lfs f8,20260(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 20260);
	ctx.f8.f64 = double(temp.f32);
loc_8240DA50:
	// lfsx f0,r9,r25
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + r25.u32);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r11,r4,2,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xC;
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + f31.f64));
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfsx f7,r11,r26
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r26.u32);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f0,f0,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// fadds f7,f7,f0
	ctx.f7.f64 = double(float(ctx.f7.f64 + ctx.f0.f64));
	// fctiwz f7,f7
	ctx.f7.s64 = std::isnan(ctx.f7.f64) ? int64_t(0x80000000U) : (ctx.f7.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f7,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f7.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// beq cr6,0x8240daec
	if (ctx.cr6.eq) goto loc_8240DAEC;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// std r8,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfd f7,88(r1)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f7,f7
	ctx.f7.f64 = double(ctx.f7.s64);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// frsp f7,f7
	ctx.f7.f64 = double(float(ctx.f7.f64));
	// lfs f6,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// fsubs f0,f0,f7
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f7.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmadds f7,f0,f12,f6
	ctx.f7.f64 = double(float(std::fma(ctx.f0.f64, ctx.f12.f64, ctx.f6.f64)));
	// stfs f7,16(r11)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lfs f7,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f7,f0,f11,f7
	ctx.f7.f64 = double(float(std::fma(ctx.f0.f64, ctx.f11.f64, ctx.f7.f64)));
	// fmul f6,f0,f9
	ctx.f6.f64 = ctx.f0.f64 * ctx.f9.f64;
	// stfs f7,16(r11)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lfs f7,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f0,f0,f10,f7
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f10.f64, ctx.f7.f64)));
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// frsp f31,f6
	f31.f64 = double(float(ctx.f6.f64));
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
loc_8240DAEC:
	// cmpw cr6,r10,r30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r30.s32, ctx.xer);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// blt cr6,0x8240dafc
	if (ctx.cr6.lt) goto loc_8240DAFC;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_8240DAFC:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8240db14
	if (!ctx.cr6.gt) goto loc_8240DB14;
	// cmpw cr6,r10,r30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r30.s32, ctx.xer);
	// blt cr6,0x8240db18
	if (ctx.cr6.lt) goto loc_8240DB18;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// b 0x8240db18
	goto loc_8240DB18;
loc_8240DB14:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8240DB18:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// sthux r10,r3,r27
	ea = ctx.r3.u32 + r27.u32;
	REX_STORE_U16(ea, ctx.r10.u16);
	ctx.r3.u32 = ea;
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// add r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 + ctx.r9.u64;
	// add r7,r5,r7
	ctx.r7.u64 = ctx.r5.u64 + ctx.r7.u64;
	// add r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 + ctx.r6.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8240da50
	if (ctx.cr6.lt) goto loc_8240DA50;
loc_8240DB38:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_82418E98) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
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
	// lwz r11,116(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 116);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82418ed0
	if (!ctx.cr6.eq) goto loc_82418ED0;
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2156
	ctx.r3.u64 = ctx.r3.u64 | 2156;
	// b 0x82418f24
	goto loc_82418F24;
loc_82418EC4:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x82418ee8
	if (ctx.cr6.eq) goto loc_82418EE8;
loc_82418ED0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82418988
	ctx.lr = 0x82418EDC;
	sub_82418988(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82418ec4
	if (!ctx.cr0.lt) goto loc_82418EC4;
	// b 0x82418f24
	goto loc_82418F24;
loc_82418EE8:
	// lwz r3,116(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 116);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r10.u32);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// bl 0x82415b90
	ctx.lr = 0x82418F04;
	sub_82415B90(ctx, base);
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82418f18
	if (ctx.cr6.eq) goto loc_82418F18;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82418f1c
	goto loc_82418F1C;
loc_82418F18:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82418F1C:
	// stw r11,672(r31)
	REX_STORE_U32(r31.u32 + 672, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82418F24:
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

DEFINE_REX_FUNC(sub_8241C2E0) {
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
	// lwz r7,8(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8241c3d4
	if (ctx.cr6.eq) goto loc_8241C3D4;
	// lbz r10,0(r7)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8241c3d4
	if (ctx.cr0.eq) goto loc_8241C3D4;
	// li r9,16
	ctx.r9.s64 = 16;
loc_8241C31C:
	// lbz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8241c360
	if (ctx.cr0.eq) goto loc_8241C360;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,119
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 119, ctx.xer);
	// bgt cr6,0x8241c3ac
	if (ctx.cr6.gt) goto loc_8241C3AC;
	// beq cr6,0x8241c3a4
	if (ctx.cr6.eq) goto loc_8241C3A4;
	// cmplwi cr6,r11,97
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 97, ctx.xer);
	// beq cr6,0x8241c3a4
	if (ctx.cr6.eq) goto loc_8241C3A4;
	// cmplwi cr6,r11,98
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 98, ctx.xer);
	// beq cr6,0x8241c3c4
	if (ctx.cr6.eq) goto loc_8241C3C4;
	// cmplwi cr6,r11,103
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 103, ctx.xer);
	// beq cr6,0x8241c3cc
	if (ctx.cr6.eq) goto loc_8241C3CC;
	// cmplwi cr6,r11,114
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 114, ctx.xer);
	// bne cr6,0x8241c380
	if (!ctx.cr6.eq) goto loc_8241C380;
loc_8241C358:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8241C35C:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_8241C360:
	// slw r10,r11,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r9.u8 & 0x3F));
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// or r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 | ctx.r3.u64;
	// cmplwi cr6,r9,24
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 24, ctx.xer);
	// blt cr6,0x8241c31c
	if (ctx.cr6.lt) goto loc_8241C31C;
	// lbz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8241c3d8
	if (ctx.cr0.eq) goto loc_8241C3D8;
loc_8241C380:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r5,2004
	ctx.r5.s64 = 2004;
	// addi r6,r11,-29144
	ctx.r6.s64 = ctx.r11.s64 + -29144;
	// bl 0x8241a4f0
	ctx.lr = 0x8241C394;
	sub_8241A4F0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,76(r31)
	REX_STORE_U32(r31.u32 + 76, ctx.r11.u32);
	// b 0x8241c3d8
	goto loc_8241C3D8;
loc_8241C3A4:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x8241c35c
	goto loc_8241C35C;
loc_8241C3AC:
	// cmplwi cr6,r11,120
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 120, ctx.xer);
	// beq cr6,0x8241c358
	if (ctx.cr6.eq) goto loc_8241C358;
	// cmplwi cr6,r11,121
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 121, ctx.xer);
	// beq cr6,0x8241c3cc
	if (ctx.cr6.eq) goto loc_8241C3CC;
	// cmplwi cr6,r11,122
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 122, ctx.xer);
	// bne cr6,0x8241c380
	if (!ctx.cr6.eq) goto loc_8241C380;
loc_8241C3C4:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x8241c35c
	goto loc_8241C35C;
loc_8241C3CC:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8241c35c
	goto loc_8241C35C;
loc_8241C3D4:
	// lis r3,228
	ctx.r3.s64 = 14942208;
loc_8241C3D8:
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

DEFINE_REX_FUNC(sub_82427940) {
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
	ctx.lr = 0x82427948;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// rlwinm r3,r6,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// bl 0x823f02b8
	ctx.lr = 0x82427968;
	sub_823F02B8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x8242797c
	if (!ctx.cr0.eq) goto loc_8242797C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x824279dc
	goto loc_824279DC;
loc_8242797C:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82424b08
	ctx.lr = 0x8242798C;
	sub_82424B08(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x824279cc
	if (ctx.cr6.eq) goto loc_824279CC;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// subf r10,r31,r27
	ctx.r10.u64 = r27.u64 - r31.u64;
loc_824279A0:
	// lwz r9,8(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 8);
	// lwzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,20(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// lwzx r9,r8,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stw r8,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// bdnz 0x824279a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824279A0;
loc_824279CC:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f0350
	ctx.lr = 0x824279D8;
	sub_823F0350(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_824279DC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82437D40) {
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
	// beq 0x82437d74
	if (ctx.cr0.eq) goto loc_82437D74;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// subf r11,r6,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r6.u64;
loc_82437D60:
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r10
	REX_STORE_U32(ctx.r10.u32, ctx.f0.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82437d60
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82437D60;
loc_82437D74:
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// bl 0x822c9108
	ctx.lr = 0x82437D7C;
	sub_822C9108(ctx, base);
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

DEFINE_REX_FUNC(sub_8243AC40) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8243AC48;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// not r31,r5
	r31.u64 = ~ctx.r5.u64;
	// rlwinm r28,r7,30,2,31
	r28.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3FFFFFFF;
	// b 0x8243ac6c
	goto loc_8243AC6C;
loc_8243AC60:
	// lwz r31,36(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8243ac90
	if (ctx.cr6.eq) goto loc_8243AC90;
loc_8243AC6C:
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
	// bl 0x82438368
	ctx.lr = 0x8243AC84;
	sub_82438368(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8243ac60
	if (!ctx.cr0.lt) goto loc_8243AC60;
	// b 0x8243ac94
	goto loc_8243AC94;
loc_8243AC90:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8243AC94:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8243C298) {
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
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8243c2cc
	if (!ctx.cr6.eq) goto loc_8243C2CC;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8243c030
	ctx.lr = 0x8243C2BC;
	sub_8243C030(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8243c2e4
	if (!ctx.cr0.lt) goto loc_8243C2E4;
loc_8243C2C4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8243c2ec
	goto loc_8243C2EC;
loc_8243C2CC:
	// li r5,1
	ctx.r5.s64 = 1;
	// not r3,r11
	ctx.r3.u64 = ~ctx.r11.u64;
	// bl 0x8243bcb0
	ctx.lr = 0x8243C2D8;
	sub_8243BCB0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8243c2e8
	if (!ctx.cr0.eq) goto loc_8243C2E8;
	// b 0x8243c2c4
	goto loc_8243C2C4;
loc_8243C2E4:
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8243C2E8:
	// not r3,r3
	ctx.r3.u64 = ~ctx.r3.u64;
loc_8243C2EC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8243F388) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32188
	ctx.r10.s64 = -2109472768;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// lis r9,-32188
	ctx.r9.s64 = -2109472768;
	// lis r8,-32188
	ctx.r8.s64 = -2109472768;
	// lis r7,-32188
	ctx.r7.s64 = -2109472768;
	// lis r6,-32188
	ctx.r6.s64 = -2109472768;
	// addi r4,r10,-3776
	ctx.r4.s64 = ctx.r10.s64 + -3776;
	// addi r10,r5,-16416
	ctx.r10.s64 = ctx.r5.s64 + -16416;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// addi r9,r9,-3648
	ctx.r9.s64 = ctx.r9.s64 + -3648;
	// stw r10,112(r3)
	REX_STORE_U32(ctx.r3.u32 + 112, ctx.r10.u32);
	// addi r8,r8,-3696
	ctx.r8.s64 = ctx.r8.s64 + -3696;
	// stw r11,104(r3)
	REX_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// addi r7,r7,-3504
	ctx.r7.s64 = ctx.r7.s64 + -3504;
	// stw r9,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// addi r6,r6,-3216
	ctx.r6.s64 = ctx.r6.s64 + -3216;
	// stw r8,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// li r5,123
	ctx.r5.s64 = 123;
	// stw r7,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// stw r6,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r6.u32);
	// stw r11,108(r3)
	REX_STORE_U32(ctx.r3.u32 + 108, ctx.r11.u32);
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r5,116(r3)
	REX_STORE_U32(ctx.r3.u32 + 116, ctx.r5.u32);
	// stw r11,120(r3)
	REX_STORE_U32(ctx.r3.u32 + 120, ctx.r11.u32);
	// stw r11,124(r3)
	REX_STORE_U32(ctx.r3.u32 + 124, ctx.r11.u32);
	// stw r11,128(r3)
	REX_STORE_U32(ctx.r3.u32 + 128, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82440460) {
	REX_FUNC_PROLOGUE();
	// lwz r11,1376(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1376);
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// sth r10,1566(r3)
	REX_STORE_U16(ctx.r3.u32 + 1566, ctx.r10.u16);
	// stw r11,1376(r3)
	REX_STORE_U32(ctx.r3.u32 + 1376, ctx.r11.u32);
	// lwz r11,1372(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1372);
	// bne cr6,0x82440488
	if (!ctx.cr6.eq) goto loc_82440488;
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// b 0x8244048c
	goto loc_8244048C;
loc_82440488:
	// rlwinm r11,r11,0,25,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
loc_8244048C:
	// stw r11,1372(r3)
	REX_STORE_U32(ctx.r3.u32 + 1372, ctx.r11.u32);
	// lbz r11,1558(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 1558);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x824404a4
	if (!ctx.cr6.eq) goto loc_824404A4;
	// li r10,4
	ctx.r10.s64 = 4;
	// stb r10,1563(r3)
	REX_STORE_U8(ctx.r3.u32 + 1563, ctx.r10.u8);
loc_824404A4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lbz r11,1559(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 1559);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r11,1563(r3)
	REX_STORE_U8(ctx.r3.u32 + 1563, ctx.r11.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82443DC8) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x826a1cb0
	ctx.lr = 0x82443DD0;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x826a2c8c
	ctx.lr = 0x82443DD8;
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f29,12(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 12);
	f29.f64 = double(temp.f32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// fmr f28,f29
	f28.f64 = f29.f64;
	// addi r30,r4,12
	r30.s64 = ctx.r4.s64 + 12;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82443e10
	if (ctx.cr6.eq) goto loc_82443E10;
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,152
	ctx.r10.s64 = ctx.r1.s64 + 152;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82443E08:
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x82443e08
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82443E08;
loc_82443E10:
	// li r10,16
	ctx.r10.s64 = 16;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r29,-32256
	r29.s64 = -2113929216;
	// lfs f22,20208(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 20208);
	f22.f64 = double(temp.f32);
	// lfs f23,17280(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 17280);
	f23.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f24,-8120(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + -8120);
	f24.f64 = double(temp.f32);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// lfs f30,20328(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 20328);
	f30.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f21,15196(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15196);
	f21.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f27,3720(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 3720);
	f27.f64 = double(temp.f32);
	// lfs f31,20204(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20204);
	f31.f64 = double(temp.f32);
loc_82443E5C:
	// lfs f13,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x82443e74
	if (ctx.cr6.eq) goto loc_82443E74;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// lfsx f0,r11,r10
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
loc_82443E74:
	// fmadds f0,f13,f31,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, f31.f64, f27.f64)));
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwa r9,92(r1)
	ctx.r9.s64 = int32_t(REX_LOAD_U32(ctx.r1.u32 + 92));
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * f30.f64));
	// stfsx f0,r11,r10
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, temp.u32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, f29.f64);
	// bge cr6,0x82443eb0
	if (!ctx.cr6.lt) goto loc_82443EB0;
	// fmr f29,f0
	f29.f64 = ctx.f0.f64;
	// b 0x82443ebc
	goto loc_82443EBC;
loc_82443EB0:
	// fcmpu cr6,f0,f28
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f28.f64);
	// ble cr6,0x82443ebc
	if (!ctx.cr6.gt) goto loc_82443EBC;
	// fmr f28,f0
	f28.f64 = ctx.f0.f64;
loc_82443EBC:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x82443f2c
	if (ctx.cr6.eq) goto loc_82443F2C;
	// clrlwi r9,r8,30
	ctx.r9.u64 = ctx.r8.u32 & 0x3;
	// fsubs f0,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// beq cr6,0x82443ee4
	if (ctx.cr6.eq) goto loc_82443EE4;
	// addi r10,r1,164
	ctx.r10.s64 = ctx.r1.s64 + 164;
	// lfsx f13,r11,r10
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f13,f0,f24,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f0.f64, f24.f64, ctx.f13.f64)));
	// stfsx f13,r11,r10
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, temp.u32);
loc_82443EE4:
	// cmplwi cr6,r8,12
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 12, ctx.xer);
	// bge cr6,0x82443f2c
	if (!ctx.cr6.lt) goto loc_82443F2C;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82443f04
	if (ctx.cr6.eq) goto loc_82443F04;
	// addi r10,r1,172
	ctx.r10.s64 = ctx.r1.s64 + 172;
	// lfsx f13,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f13,f0,f23,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f0.f64, f23.f64, ctx.f13.f64)));
	// stfsx f13,r11,r10
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, temp.u32);
loc_82443F04:
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// lfsx f13,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f13,f0,f22,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f0.f64, f22.f64, ctx.f13.f64)));
	// stfsx f13,r11,r10
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, temp.u32);
	// beq cr6,0x82443f2c
	if (ctx.cr6.eq) goto loc_82443F2C;
	// addi r10,r1,180
	ctx.r10.s64 = ctx.r1.s64 + 180;
	// lfsx f13,r11,r10
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f0,f21,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f21.f64, ctx.f13.f64)));
	// stfsx f0,r11,r10
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, temp.u32);
loc_82443F2C:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82443e5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82443E5C;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// bl 0x82442b20
	ctx.lr = 0x82443F4C;
	sub_82442B20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82444370
	if (ctx.cr0.lt) goto loc_82444370;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f25,3704(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	f25.f64 = double(temp.f32);
	// fcmpu cr6,f29,f25
	ctx.cr6.compare(f29.f64, f25.f64);
	// bne cr6,0x82443f84
	if (!ctx.cr6.eq) goto loc_82443F84;
	// li r11,255
	ctx.r11.s64 = 255;
	// stb r11,1(r31)
	REX_STORE_U8(r31.u32 + 1, ctx.r11.u8);
loc_82443F6C:
	// addi r3,r31,2
	ctx.r3.s64 = r31.s64 + 2;
	// stb r11,0(r31)
	REX_STORE_U8(r31.u32 + 0, ctx.r11.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,6
	ctx.r5.s64 = 6;
	// bl 0x826a2e60
	ctx.lr = 0x82443F80;
	sub_826A2E60(ctx, base);
	// b 0x8244436c
	goto loc_8244436C;
loc_82443F84:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f26,3716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	f26.f64 = double(temp.f32);
	// fcmpu cr6,f29,f26
	ctx.cr6.compare(f29.f64, f26.f64);
	// beq cr6,0x82443fa0
	if (ctx.cr6.eq) goto loc_82443FA0;
	// fcmpu cr6,f28,f25
	ctx.cr6.compare(f28.f64, f25.f64);
	// li r6,8
	ctx.r6.s64 = 8;
	// bne cr6,0x82443fa4
	if (!ctx.cr6.eq) goto loc_82443FA4;
loc_82443FA0:
	// li r6,6
	ctx.r6.s64 = 6;
loc_82443FA4:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824423c8
	ctx.lr = 0x82443FB4;
	sub_824423C8(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f0,f31,f27
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f31.f64, f27.f64)));
	// fmadds f13,f13,f31,f27
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, f31.f64, f27.f64)));
	// cmplwi cr6,r6,8
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 8, ctx.xer);
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// fctiwz f0,f13
	ctx.f0.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f0,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r9,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// std r8,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * f30.f64));
	// fmuls f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 * f30.f64));
	// bne cr6,0x8244402c
	if (!ctx.cr6.eq) goto loc_8244402C;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x824440bc
	if (!ctx.cr6.eq) goto loc_824440BC;
	// stb r10,1(r31)
	REX_STORE_U8(r31.u32 + 1, ctx.r10.u8);
	// b 0x82443f6c
	goto loc_82443F6C;
loc_8244402C:
	// cmplwi cr6,r6,6
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 6, ctx.xer);
	// bne cr6,0x824440bc
	if (!ctx.cr6.eq) goto loc_824440BC;
	// li r9,4
	ctx.r9.s64 = 4;
	// stfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stb r11,0(r31)
	REX_STORE_U8(r31.u32 + 0, ctx.r11.u8);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stb r10,1(r31)
	REX_STORE_U8(r31.u32 + 1, ctx.r10.u8);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r1,100
	ctx.r10.s64 = ctx.r1.s64 + 100;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,14180(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 14180);
	ctx.f0.f64 = double(temp.f32);
loc_8244405C:
	// clrldi r8,r11,32
	ctx.r8.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lfs f13,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// subfic r9,r11,5
	ctx.xer.ca = ctx.r11.u32 <= 5;
	ctx.r9.u64 = static_cast<uint64_t>(5) - ctx.r11.u64;
	// lfs f12,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// std r8,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// lfd f11,88(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmadds f13,f10,f12,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f10.f64, ctx.f12.f64, ctx.f13.f64)));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfsu f13,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8244405c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8244405C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stfs f26,120(r1)
	temp.f32 = float(f26.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f25,124(r1)
	temp.f32 = float(f25.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// addi r29,r11,19644
	r29.s64 = ctx.r11.s64 + 19644;
	// b 0x82444138
	goto loc_82444138;
loc_824440BC:
	// li r9,6
	ctx.r9.s64 = 6;
	// stfs f0,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stb r10,0(r31)
	REX_STORE_U8(r31.u32 + 0, ctx.r10.u8);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stb r11,1(r31)
	REX_STORE_U8(r31.u32 + 1, ctx.r11.u8);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r1,100
	ctx.r10.s64 = ctx.r1.s64 + 100;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f0,20248(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 20248);
	ctx.f0.f64 = double(temp.f32);
loc_824440E4:
	// clrldi r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lfs f13,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// subfic r8,r11,7
	ctx.xer.ca = ctx.r11.u32 <= 7;
	ctx.r8.u64 = static_cast<uint64_t>(7) - ctx.r11.u64;
	// lfs f12,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// clrldi r9,r8,32
	ctx.r9.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// std r9,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f11,88(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmadds f13,f11,f12,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f11.f64, ctx.f12.f64, ctx.f13.f64)));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfsu f13,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x824440e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824440E4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r29,r11,19612
	r29.s64 = ctx.r11.s64 + 19612;
loc_82444138:
	// addi r11,r6,-1
	ctx.r11.s64 = ctx.r6.s64 + -1;
	// lfs f12,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// fcmpu cr6,f12,f10
	ctx.cr6.compare(ctx.f12.f64, ctx.f10.f64);
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f9,f0
	ctx.f9.f64 = double(float(ctx.f0.f64));
	// beq cr6,0x8244416c
	if (ctx.cr6.eq) goto loc_8244416C;
	// fsubs f0,f10,f12
	ctx.f0.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// fdivs f11,f9,f0
	ctx.f11.f64 = double(float(ctx.f9.f64 / ctx.f0.f64));
	// b 0x82444170
	goto loc_82444170;
loc_8244416C:
	// fmr f11,f26
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = f26.f64;
loc_82444170:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x82444190
	if (ctx.cr6.eq) goto loc_82444190;
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,152
	ctx.r10.s64 = ctx.r1.s64 + 152;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82444188:
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x82444188
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82444188;
loc_82444190:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r31,1
	ctx.r4.s64 = r31.s64 + 1;
	// addi r7,r1,164
	ctx.r7.s64 = ctx.r1.s64 + 164;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
loc_824441A0:
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// li r30,0
	r30.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x824442e4
	if (!ctx.cr6.lt) goto loc_824442E4;
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_824441C8:
	// lfs f13,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x824441dc
	if (ctx.cr6.eq) goto loc_824441DC;
	// lfs f0,-4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
loc_824441DC:
	// fsubs f0,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fcmpu cr6,f0,f26
	ctx.cr6.compare(ctx.f0.f64, f26.f64);
	// bgt cr6,0x82444210
	if (ctx.cr6.gt) goto loc_82444210;
	// cmplwi cr6,r6,6
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 6, ctx.xer);
	// bne cr6,0x82444208
	if (!ctx.cr6.eq) goto loc_82444208;
	// fmuls f0,f12,f27
	ctx.f0.f64 = double(float(ctx.f12.f64 * f27.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82444208
	if (ctx.cr6.gt) goto loc_82444208;
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x82444258
	goto loc_82444258;
loc_82444208:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82444258
	goto loc_82444258;
loc_82444210:
	// fcmpu cr6,f0,f9
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// blt cr6,0x82444240
	if (ctx.cr6.lt) goto loc_82444240;
	// cmplwi cr6,r6,6
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 6, ctx.xer);
	// bne cr6,0x82444238
	if (!ctx.cr6.eq) goto loc_82444238;
	// fadds f0,f10,f25
	ctx.f0.f64 = double(float(ctx.f10.f64 + f25.f64));
	// fmuls f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 * f27.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82444238
	if (ctx.cr6.lt) goto loc_82444238;
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x82444258
	goto loc_82444258;
loc_82444238:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82444258
	goto loc_82444258;
loc_82444240:
	// fadds f0,f0,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + f27.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
loc_82444258:
	// rlwinm r30,r30,29,3,31
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r27,r11,21,0,10
	r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0xFFE00000;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// or r30,r27,r30
	r30.u64 = r27.u64 | r30.u64;
	// beq cr6,0x824442d0
	if (ctx.cr6.eq) goto loc_824442D0;
	// rlwinm r27,r11,2,0,29
	r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r26,r1,96
	r26.s64 = ctx.r1.s64 + 96;
	// clrlwi r11,r3,30
	ctx.r11.u64 = ctx.r3.u32 & 0x3;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// lfsx f0,r27,r26
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + r26.u32);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// beq cr6,0x82444294
	if (ctx.cr6.eq) goto loc_82444294;
	// lfs f13,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f13,f0,f24,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f0.f64, f24.f64, ctx.f13.f64)));
	// stfs f13,0(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
loc_82444294:
	// cmplwi cr6,r3,12
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 12, ctx.xer);
	// bge cr6,0x824442d0
	if (!ctx.cr6.lt) goto loc_824442D0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824442b0
	if (ctx.cr6.eq) goto loc_824442B0;
	// lfs f13,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f13,f0,f23,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f0.f64, f23.f64, ctx.f13.f64)));
	// stfs f13,8(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
loc_824442B0:
	// lfs f13,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// fmadds f13,f0,f22,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f0.f64, f22.f64, ctx.f13.f64)));
	// stfs f13,12(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// beq cr6,0x824442d0
	if (ctx.cr6.eq) goto loc_824442D0;
	// lfs f13,16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f0,f21,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f21.f64, ctx.f13.f64)));
	// stfs f0,16(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 16, temp.u32);
loc_824442D0:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x824441c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824441C8;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
loc_824442E4:
	// lbz r10,83(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 83);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// addi r7,r7,32
	ctx.r7.s64 = ctx.r7.s64 + 32;
	// lbz r3,81(r1)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// addi r5,r5,128
	ctx.r5.s64 = ctx.r5.s64 + 128;
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// stb r10,1(r4)
	REX_STORE_U8(ctx.r4.u32 + 1, ctx.r10.u8);
	// stb r8,2(r4)
	REX_STORE_U8(ctx.r4.u32 + 2, ctx.r8.u8);
	// stbu r3,3(r4)
	ea = 3 + ctx.r4.u32;
	REX_STORE_U8(ea, ctx.r3.u8);
	ctx.r4.u32 = ea;
	// blt cr6,0x824441a0
	if (ctx.cr6.lt) goto loc_824441A0;
	// lhz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 0);
	// addi r10,r31,4
	ctx.r10.s64 = r31.s64 + 4;
	// addi r11,r31,2
	ctx.r11.s64 = r31.s64 + 2;
	// rlwinm r10,r9,8,16,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFF00;
	// rlwinm r9,r9,24,8,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFFFF;
	// addi r11,r31,6
	ctx.r11.s64 = r31.s64 + 6;
	// or r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 | ctx.r9.u64;
	// sth r11,0(r31)
	REX_STORE_U16(r31.u32 + 0, ctx.r11.u16);
	// lhz r11,2(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 2);
	// rlwinm r10,r11,8,16,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// sth r11,2(r31)
	REX_STORE_U16(r31.u32 + 2, ctx.r11.u16);
	// lhz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 4);
	// rlwinm r10,r11,8,16,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// sth r11,4(r31)
	REX_STORE_U16(r31.u32 + 4, ctx.r11.u16);
	// lhz r11,6(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 6);
	// rlwinm r10,r11,8,16,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// sth r11,6(r31)
	REX_STORE_U16(r31.u32 + 6, ctx.r11.u16);
loc_8244436C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82444370:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x826a2cd8
	ctx.lr = 0x8244437C;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_824712A0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x824712A8;
	// stwu r1,-656(r1)
	ea = -656 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r4,104(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 104);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x824712f8
	if (!ctx.cr6.eq) goto loc_824712F8;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// oris r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 1073741824;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,108(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824712E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,108(r29)
	REX_STORE_U32(r29.u32 + 108, ctx.r3.u32);
loc_824712EC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824712F0:
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x826a1d08
	return;
loc_824712F8:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,348(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 348);
	// lwz r30,24(r4)
	r30.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwzx r7,r11,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// beq cr6,0x82471428
	if (ctx.cr6.eq) goto loc_82471428;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_8247131C:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8247131c
	if (!ctx.cr6.eq) goto loc_8247131C;
	// subf r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// ble cr6,0x82471428
	if (!ctx.cr6.gt) goto loc_82471428;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r11,r11,-29116
	ctx.r11.s64 = ctx.r11.s64 + -29116;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
loc_82471350:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r6,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82471370
	if (!ctx.cr0.eq) goto loc_82471370;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82471350
	if (!ctx.cr6.eq) goto loc_82471350;
loc_82471370:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82471428
	if (!ctx.cr0.eq) goto loc_82471428;
	// lwz r11,112(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 112);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// ble cr6,0x824713a4
	if (!ctx.cr6.gt) goto loc_824713A4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// addi r6,r11,29276
	ctx.r6.s64 = ctx.r11.s64 + 29276;
	// li r5,4543
	ctx.r5.s64 = 4543;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82489c30
	ctx.lr = 0x8247139C;
	sub_82489C30(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_824713A4:
	// addi r28,r31,440
	r28.s64 = r31.s64 + 440;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8241c068
	ctx.lr = 0x824713B4;
	sub_8241C068(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x824713e8
	if (!ctx.cr0.eq) goto loc_824713E8;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,468(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 468);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8241c9f0
	ctx.lr = 0x824713D0;
	sub_8241C9F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824712f0
	if (ctx.cr0.lt) goto loc_824712F0;
	// lwz r11,468(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 468);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,468(r31)
	REX_STORE_U32(r31.u32 + 468, ctx.r10.u32);
	// b 0x824713ec
	goto loc_824713EC;
loc_824713E8:
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
loc_824713EC:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lis r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ori r4,r4,65535
	ctx.r4.u64 = ctx.r4.u64 | 65535;
	// lwz r11,108(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8247140C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,108(r29)
	REX_STORE_U32(r29.u32 + 108, ctx.r3.u32);
loc_82471410:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824712ec
	if (ctx.cr6.eq) goto loc_824712EC;
loc_8247141C:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x824712f0
	goto loc_824712F0;
loc_82471428:
	// lwz r11,108(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 108);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8247147c
	if (ctx.cr6.eq) goto loc_8247147C;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8247147c
	if (ctx.cr0.eq) goto loc_8247147C;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x8247147c
	if (!ctx.cr6.eq) goto loc_8247147C;
	// li r6,512
	ctx.r6.s64 = 512;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82478ce0
	ctx.lr = 0x8247145C;
	sub_82478CE0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r11,29264
	ctx.r6.s64 = ctx.r11.s64 + 29264;
loc_82471468:
	// li r5,4502
	ctx.r5.s64 = 4502;
	// lwz r4,104(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 104);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82489c30
	ctx.lr = 0x82471478;
	sub_82489C30(ctx, base);
	// b 0x8247141c
	goto loc_8247141C;
loc_8247147C:
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// rlwinm. r11,r11,0,7,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,4(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// beq 0x8247151c
	if (ctx.cr0.eq) goto loc_8247151C;
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824714f0
	if (ctx.cr0.eq) goto loc_824714F0;
	// rlwinm. r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824714f0
	if (!ctx.cr0.eq) goto loc_824714F0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r5,244(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 244);
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8246d318
	ctx.lr = 0x824714B4;
	sub_8246D318(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824712f0
	if (ctx.cr0.lt) goto loc_824712F0;
	// lwz r11,108(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 108);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bne cr6,0x82471410
	if (!ctx.cr6.eq) goto loc_82471410;
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82471410
	if (!ctx.cr6.eq) goto loc_82471410;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82478328
	ctx.lr = 0x824714E0;
	sub_82478328(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r6,r11,29228
	ctx.r6.s64 = ctx.r11.s64 + 29228;
	// b 0x82471468
	goto loc_82471468;
loc_824714F0:
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824712ec
	if (ctx.cr0.eq) goto loc_824712EC;
	// lwz r5,248(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 248);
	// li r6,2
	ctx.r6.s64 = 2;
loc_82471500:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8246d318
	ctx.lr = 0x82471510;
	sub_8246D318(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82471410
	if (!ctx.cr0.lt) goto loc_82471410;
	// b 0x824712f0
	goto loc_824712F0;
loc_8247151C:
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824715a0
	if (ctx.cr0.eq) goto loc_824715A0;
	// rlwinm. r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824715a0
	if (!ctx.cr0.eq) goto loc_824715A0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r5,248(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 248);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8246d318
	ctx.lr = 0x82471544;
	sub_8246D318(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824712f0
	if (ctx.cr0.lt) goto loc_824712F0;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82471410
	if (!ctx.cr6.eq) goto loc_82471410;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,108(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 108);
	// lwz r11,112(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82471570;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 11, ctx.xer);
	// bne cr6,0x82471410
	if (!ctx.cr6.eq) goto loc_82471410;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// ori r10,r10,276
	ctx.r10.u64 = ctx.r10.u64 | 276;
	// stw r10,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// lfd f0,-3744(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + -3744);
	// lfd f13,3728(r9)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r9.u32 + 3728);
	// stfd f0,32(r29)
	REX_STORE_U64(r29.u32 + 32, ctx.f0.u64);
	// stfd f13,40(r29)
	REX_STORE_U64(r29.u32 + 40, ctx.f13.u64);
	// b 0x82471410
	goto loc_82471410;
loc_824715A0:
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824712ec
	if (ctx.cr0.eq) goto loc_824712EC;
	// lwz r5,252(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 252);
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x82471500
	goto loc_82471500;
}

DEFINE_REX_FUNC(sub_82482F10) {
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
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c88
	ctx.lr = 0x82482F18;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// li r17,0
	r17.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82482f58
	if (!ctx.cr6.gt) goto loc_82482F58;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82482F38:
	// lwz r9,20(r18)
	ctx.r9.u64 = REX_LOAD_U32(r18.u32 + 20);
	// lwzx r9,r10,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r11,48(r9)
	REX_STORE_U32(ctx.r9.u32 + 48, ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r9,8(r18)
	ctx.r9.u64 = REX_LOAD_U32(r18.u32 + 8);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82482f38
	if (ctx.cr6.lt) goto loc_82482F38;
loc_82482F58:
	// lwz r11,12(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 12);
	// li r16,0
	r16.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82483558
	if (!ctx.cr6.gt) goto loc_82483558;
	// li r26,-1
	r26.s64 = -1;
loc_82482F6C:
	// lwz r11,24(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 24);
	// rlwinm r10,r16,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r9,4096
	ctx.r9.s64 = 268435456;
	// lwzx r30,r10,r11
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm r10,r11,0,0,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0000000;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82483540
	if (ctx.cr6.lt) goto loc_82483540;
	// lis r9,16384
	ctx.r9.s64 = 1073741824;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x82483540
	if (ctx.cr6.gt) goto loc_82483540;
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// clrlwi r28,r11,12
	r28.u64 = ctx.r11.u32 & 0xFFFFF;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// divwu r20,r10,r28
	r20.u64 = uint32_t(r28.u32 ? ctx.r10.u32 / r28.u32 : 0);
	// twllei r28,0
	if (r28.s32 == 0 || r28.u32 < 0u) ppc_trap(ctx, base, 0);
	// bl 0x82477530
	ctx.lr = 0x82482FB0;
	sub_82477530(ctx, base);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// mr r22,r28
	r22.u64 = r28.u64;
	// li r27,1
	r27.s64 = 1;
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(r28.u32, 1, ctx.xer);
	// ble cr6,0x82483540
	if (!ctx.cr6.gt) goto loc_82483540;
	// rlwinm r19,r28,2,0,29
	r19.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// li r31,4
	r31.s64 = 4;
	// addi r24,r19,4
	r24.s64 = r19.s64 + 4;
loc_82482FD0:
	// lwz r25,16(r30)
	r25.u64 = REX_LOAD_U32(r30.u32 + 16);
	// lwz r6,20(r18)
	ctx.r6.u64 = REX_LOAD_U32(r18.u32 + 20);
	// lwz r23,16(r18)
	r23.u64 = REX_LOAD_U32(r18.u32 + 16);
	// lwzx r5,r25,r31
	ctx.r5.u64 = REX_LOAD_U32(r25.u32 + r31.u32);
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r6
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r23
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r23.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// andi. r11,r11,4128
	ctx.r11.u64 = ctx.r11.u64 & 4128;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82483448
	if (!ctx.cr0.eq) goto loc_82483448;
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x82483448
	if (ctx.cr6.eq) goto loc_82483448;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r29,r19
	r29.u64 = r19.u64;
loc_82483018:
	// lwzx r11,r25,r3
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + ctx.r3.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82483414
	if (ctx.cr6.eq) goto loc_82483414;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r6
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r23
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r23.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// andi. r11,r11,4128
	ctx.r11.u64 = ctx.r11.u64 & 4128;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82483414
	if (!ctx.cr0.eq) goto loc_82483414;
	// cmplwi cr6,r20,1
	ctx.cr6.compare<uint32_t>(r20.u32, 1, ctx.xer);
	// bne cr6,0x8248309c
	if (!ctx.cr6.eq) goto loc_8248309C;
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82483070
	if (ctx.cr6.eq) goto loc_82483070;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r6
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// lwz r9,48(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// b 0x82483074
	goto loc_82483074;
loc_82483070:
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
loc_82483074:
	// lwzx r11,r3,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82483090
	if (ctx.cr6.eq) goto loc_82483090;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r6
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// b 0x82483094
	goto loc_82483094;
loc_82483090:
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
loc_82483094:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8248342c
	if (ctx.cr6.eq) goto loc_8248342C;
loc_8248309C:
	// cmplwi cr6,r20,2
	ctx.cr6.compare<uint32_t>(r20.u32, 2, ctx.xer);
	// bne cr6,0x824831c8
	if (!ctx.cr6.eq) goto loc_824831C8;
	// lwz r9,8(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwzx r8,r31,r9
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// beq cr6,0x824830c4
	if (ctx.cr6.eq) goto loc_824830C4;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r6
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// b 0x824830c8
	goto loc_824830C8;
loc_824830C4:
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
loc_824830C8:
	// lwzx r7,r3,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	// cmpwi cr6,r7,-1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -1, ctx.xer);
	// beq cr6,0x824830e4
	if (ctx.cr6.eq) goto loc_824830E4;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r6
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// b 0x824830e8
	goto loc_824830E8;
loc_824830E4:
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
loc_824830E8:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82483138
	if (!ctx.cr6.eq) goto loc_82483138;
	// lwzx r11,r24,r9
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8248310c
	if (ctx.cr6.eq) goto loc_8248310C;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r6
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// b 0x82483110
	goto loc_82483110;
loc_8248310C:
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
loc_82483110:
	// lwzx r11,r29,r9
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8248312c
	if (ctx.cr6.eq) goto loc_8248312C;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r6
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// b 0x82483130
	goto loc_82483130;
loc_8248312C:
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
loc_82483130:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8248342c
	if (ctx.cr6.eq) goto loc_8248342C;
loc_82483138:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// beq cr6,0x82483414
	if (ctx.cr6.eq) goto loc_82483414;
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// beq cr6,0x82483158
	if (ctx.cr6.eq) goto loc_82483158;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r6
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// b 0x8248315c
	goto loc_8248315C;
loc_82483158:
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
loc_8248315C:
	// lwzx r11,r29,r9
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82483178
	if (ctx.cr6.eq) goto loc_82483178;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r6
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// b 0x8248317c
	goto loc_8248317C;
loc_82483178:
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
loc_8248317C:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82483414
	if (!ctx.cr6.eq) goto loc_82483414;
	// lwzx r11,r24,r9
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x824831a0
	if (ctx.cr6.eq) goto loc_824831A0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r6
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// b 0x824831a4
	goto loc_824831A4;
loc_824831A0:
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
loc_824831A4:
	// cmpwi cr6,r7,-1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -1, ctx.xer);
	// beq cr6,0x824831bc
	if (ctx.cr6.eq) goto loc_824831BC;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r6
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// b 0x824831c0
	goto loc_824831C0;
loc_824831BC:
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
loc_824831C0:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8248342c
	if (ctx.cr6.eq) goto loc_8248342C;
loc_824831C8:
	// cmplwi cr6,r20,3
	ctx.cr6.compare<uint32_t>(r20.u32, 3, ctx.xer);
	// bne cr6,0x824832c0
	if (!ctx.cr6.eq) goto loc_824832C0;
	// lwz r8,8(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwzx r11,r31,r8
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + ctx.r8.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x824831f0
	if (ctx.cr6.eq) goto loc_824831F0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r6
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// b 0x824831f4
	goto loc_824831F4;
loc_824831F0:
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
loc_824831F4:
	// lwzx r11,r3,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r8.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82483210
	if (ctx.cr6.eq) goto loc_82483210;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r6
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// b 0x82483214
	goto loc_82483214;
loc_82483210:
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
loc_82483214:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82483414
	if (!ctx.cr6.eq) goto loc_82483414;
	// lwzx r11,r24,r8
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + ctx.r8.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82483238
	if (ctx.cr6.eq) goto loc_82483238;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r6
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// b 0x8248323c
	goto loc_8248323C;
loc_82483238:
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
loc_8248323C:
	// lwzx r11,r29,r8
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + ctx.r8.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82483258
	if (ctx.cr6.eq) goto loc_82483258;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r6
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// b 0x8248325c
	goto loc_8248325C;
loc_82483258:
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
loc_8248325C:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82483414
	if (!ctx.cr6.eq) goto loc_82483414;
	// rlwinm r10,r28,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r27
	ctx.r11.u64 = ctx.r10.u64 + r27.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8248328c
	if (ctx.cr6.eq) goto loc_8248328C;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r6
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// lwz r9,48(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// b 0x82483290
	goto loc_82483290;
loc_8248328C:
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
loc_82483290:
	// add r11,r10,r4
	ctx.r11.u64 = ctx.r10.u64 + ctx.r4.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x824832b4
	if (ctx.cr6.eq) goto loc_824832B4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r6
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// b 0x824832b8
	goto loc_824832B8;
loc_824832B4:
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
loc_824832B8:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8248342c
	if (ctx.cr6.eq) goto loc_8248342C;
loc_824832C0:
	// cmplwi cr6,r20,4
	ctx.cr6.compare<uint32_t>(r20.u32, 4, ctx.xer);
	// bne cr6,0x82483414
	if (!ctx.cr6.eq) goto loc_82483414;
	// lwz r8,8(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwzx r11,r31,r8
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + ctx.r8.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x824832e8
	if (ctx.cr6.eq) goto loc_824832E8;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r6
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// b 0x824832ec
	goto loc_824832EC;
loc_824832E8:
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
loc_824832EC:
	// lwzx r11,r3,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r8.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82483308
	if (ctx.cr6.eq) goto loc_82483308;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r6
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// b 0x8248330c
	goto loc_8248330C;
loc_82483308:
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
loc_8248330C:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82483414
	if (!ctx.cr6.eq) goto loc_82483414;
	// lwzx r11,r24,r8
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + ctx.r8.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82483330
	if (ctx.cr6.eq) goto loc_82483330;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r6
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// b 0x82483334
	goto loc_82483334;
loc_82483330:
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
loc_82483334:
	// lwzx r11,r29,r8
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + ctx.r8.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82483350
	if (ctx.cr6.eq) goto loc_82483350;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r6
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// b 0x82483354
	goto loc_82483354;
loc_82483350:
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
loc_82483354:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82483414
	if (!ctx.cr6.eq) goto loc_82483414;
	// rlwinm r10,r28,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r27
	ctx.r11.u64 = ctx.r10.u64 + r27.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82483384
	if (ctx.cr6.eq) goto loc_82483384;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r6
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// lwz r9,48(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// b 0x82483388
	goto loc_82483388;
loc_82483384:
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
loc_82483388:
	// add r11,r10,r4
	ctx.r11.u64 = ctx.r10.u64 + ctx.r4.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x824833ac
	if (ctx.cr6.eq) goto loc_824833AC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r6
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// b 0x824833b0
	goto loc_824833B0;
loc_824833AC:
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
loc_824833B0:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82483414
	if (!ctx.cr6.eq) goto loc_82483414;
	// mulli r10,r28,3
	ctx.r10.s64 = static_cast<int64_t>(r28.u64 * static_cast<uint64_t>(3));
	// add r11,r10,r27
	ctx.r11.u64 = ctx.r10.u64 + r27.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x824833e0
	if (ctx.cr6.eq) goto loc_824833E0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r6
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// lwz r9,48(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// b 0x824833e4
	goto loc_824833E4;
loc_824833E0:
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
loc_824833E4:
	// add r11,r10,r4
	ctx.r11.u64 = ctx.r10.u64 + ctx.r4.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82483408
	if (ctx.cr6.eq) goto loc_82483408;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r6
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// b 0x8248340c
	goto loc_8248340C;
loc_82483408:
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
loc_8248340C:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8248342c
	if (ctx.cr6.eq) goto loc_8248342C;
loc_82483414:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplw cr6,r4,r27
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, r27.u32, ctx.xer);
	// blt cr6,0x82483018
	if (ctx.cr6.lt) goto loc_82483018;
	// b 0x82483448
	goto loc_82483448;
loc_8248342C:
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// lwzx r4,r11,r25
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + r25.u32);
	// bl 0x8247da28
	ctx.lr = 0x8248343C;
	sub_8247DA28(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// addi r22,r22,-1
	r22.s64 = r22.s64 + -1;
	// stwx r26,r11,r31
	REX_STORE_U32(ctx.r11.u32 + r31.u32, r26.u32);
loc_82483448:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r24,r24,4
	r24.s64 = r24.s64 + 4;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r27,r28
	ctx.cr6.compare<uint32_t>(r27.u32, r28.u32, ctx.xer);
	// blt cr6,0x82482fd0
	if (ctx.cr6.lt) goto loc_82482FD0;
	// cmplw cr6,r22,r28
	ctx.cr6.compare<uint32_t>(r22.u32, r28.u32, ctx.xer);
	// bge cr6,0x82483540
	if (!ctx.cr6.lt) goto loc_82483540;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x824834cc
	if (ctx.cr6.eq) goto loc_824834CC;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
loc_82483478:
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// lwzx r10,r11,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x824834c0
	if (ctx.cr6.eq) goto loc_824834C0;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// stwx r10,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u32);
	// beq cr6,0x824834bc
	if (ctx.cr6.eq) goto loc_824834BC;
	// mtctr r20
	ctx.ctr.u64 = r20.u64;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_824834A4:
	// lwz r6,8(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwzx r5,r11,r6
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// add r11,r11,r19
	ctx.r11.u64 = ctx.r11.u64 + r19.u64;
	// stwx r5,r10,r6
	REX_STORE_U32(ctx.r10.u32 + ctx.r6.u32, ctx.r5.u32);
	// add r10,r10,r19
	ctx.r10.u64 = ctx.r10.u64 + r19.u64;
	// bdnz 0x824834a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824834A4;
loc_824834BC:
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
loc_824834C0:
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x82483478
	if (!ctx.cr0.eq) goto loc_82483478;
loc_824834CC:
	// cmplwi cr6,r20,1
	ctx.cr6.compare<uint32_t>(r20.u32, 1, ctx.xer);
	// ble cr6,0x82483524
	if (!ctx.cr6.gt) goto loc_82483524;
	// mr r9,r22
	ctx.r9.u64 = r22.u64;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// addi r8,r20,-1
	ctx.r8.s64 = r20.s64 + -1;
loc_824834E0:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x82483514
	if (ctx.cr6.eq) goto loc_82483514;
	// mtctr r22
	ctx.ctr.u64 = r22.u64;
loc_824834F0:
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r6,8(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 8);
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwzx r7,r7,r6
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// stwx r7,r5,r6
	REX_STORE_U32(ctx.r5.u32 + ctx.r6.u32, ctx.r7.u32);
	// bdnz 0x824834f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824834F0;
loc_82483514:
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + r28.u64;
	// add r9,r9,r22
	ctx.r9.u64 = ctx.r9.u64 + r22.u64;
	// bne 0x824834e0
	if (!ctx.cr0.eq) goto loc_824834E0;
loc_82483524:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mullw r10,r22,r20
	ctx.r10.s64 = int64_t(r22.s32) * int64_t(r20.s32);
	// stw r22,12(r30)
	REX_STORE_U32(r30.u32 + 12, r22.u32);
	// stw r10,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// rlwimi r11,r22,0,12,31
	ctx.r11.u64 = (__builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 0) & 0xFFFFF) | (ctx.r11.u64 & 0xFFFFFFFFFFF00000);
	// li r17,1
	r17.s64 = 1;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
loc_82483540:
	// lwz r11,12(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 12);
	// addi r16,r16,1
	r16.s64 = r16.s64 + 1;
	// cmplw cr6,r16,r11
	ctx.cr6.compare<uint32_t>(r16.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82482f6c
	if (ctx.cr6.lt) goto loc_82482F6C;
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(r17.s32, 0, ctx.xer);
	// bne cr6,0x82483560
	if (!ctx.cr6.eq) goto loc_82483560;
loc_82483558:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8248356c
	goto loc_8248356C;
loc_82483560:
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x82481920
	ctx.lr = 0x82483568;
	sub_82481920(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8248356C:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1cd8
	return;
}

DEFINE_REX_FUNC(sub_824C0388) {
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
	ctx.lr = 0x824C0390;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,4(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x824c03dc
	if (ctx.cr6.eq) goto loc_824C03DC;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,14
	ctx.r10.s64 = 14;
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// stw r4,24(r9)
	REX_STORE_U32(ctx.r9.u32 + 24, ctx.r4.u32);
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,0(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x824C03DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824C03DC:
	// li r5,584
	ctx.r5.s64 = 584;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824bfec8
	ctx.lr = 0x824C03EC;
	sub_824BFEC8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r26,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r26.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r27,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r27.u32);
	// stw r25,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r25.u32);
	// stw r28,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, r28.u32);
	// stw r11,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// lwz r11,68(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 68);
	// stw r11,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r3,68(r30)
	REX_STORE_U32(r30.u32 + 68, ctx.r3.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_824C22D0) {
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
	ctx.lr = 0x824C22D8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	r29.s64 = 0;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r30,r29
	r30.u64 = r29.u64;
	// addi r27,r11,10280
	r27.s64 = ctx.r11.s64 + 10280;
	// addi r28,r10,10792
	r28.s64 = ctx.r10.s64 + 10792;
loc_824C22FC:
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// cmplwi cr6,r11,262
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 262, ctx.xer);
	// bge cr6,0x824c232c
	if (!ctx.cr6.lt) goto loc_824C232C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824c1ef8
	ctx.lr = 0x824C2310;
	sub_824C1EF8(ctx, base);
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// cmplwi cr6,r11,262
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 262, ctx.xer);
	// bge cr6,0x824c2324
	if (!ctx.cr6.lt) goto loc_824C2324;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// beq cr6,0x824c2654
	if (ctx.cr6.eq) goto loc_824C2654;
loc_824C2324:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824c2660
	if (ctx.cr6.eq) goto loc_824C2660;
loc_824C232C:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x824c2394
	if (ctx.cr6.lt) goto loc_824C2394;
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 100);
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r9,64(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 64);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r8,80(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 80);
	// lwz r7,76(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 76);
	// slw r9,r9,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r8.u8 & 0x3F));
	// lwz r8,44(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 44);
	// lbz r10,2(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// and r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 & ctx.r11.u64;
	// lwz r8,60(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 60);
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// lwz r9,56(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 56);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// and r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 & ctx.r7.u64;
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r10,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r10.u32);
	// lhzx r30,r7,r8
	r30.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r8.u32);
	// sthx r30,r11,r9
	REX_STORE_U16(ctx.r11.u32 + ctx.r9.u32, r30.u16);
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 100);
	// lwz r10,60(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 60);
	// lwz r9,64(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 64);
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r11,r9,r10
	REX_STORE_U16(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u16);
loc_824C2394:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x824c23d0
	if (ctx.cr6.eq) goto loc_824C23D0;
	// lwz r10,100(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 100);
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// subf r10,r30,r10
	ctx.r10.u64 = ctx.r10.u64 - r30.u64;
	// addi r11,r11,-262
	ctx.r11.s64 = ctx.r11.s64 + -262;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x824c23d0
	if (ctx.cr6.gt) goto loc_824C23D0;
	// lwz r11,128(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 128);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x824c23d0
	if (ctx.cr6.eq) goto loc_824C23D0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824c1d40
	ctx.lr = 0x824C23CC;
	sub_824C1D40(ctx, base);
	// stw r3,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r3.u32);
loc_824C23D0:
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x824c2580
	if (ctx.cr6.lt) goto loc_824C2580;
	// addi r11,r11,253
	ctx.r11.s64 = ctx.r11.s64 + 253;
	// lwz r10,5784(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 5784);
	// lwz r9,104(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 104);
	// lwz r8,100(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 100);
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// lwz r7,5788(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 5788);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r11,r9,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r9.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sthx r11,r7,r10
	REX_STORE_U16(ctx.r7.u32 + ctx.r10.u32, ctx.r11.u16);
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// lwz r10,5784(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 5784);
	// lwz r9,5776(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 5776);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stbx r6,r9,r10
	REX_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r6.u8);
	// lwz r10,5784(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 5784);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,5784(r31)
	REX_STORE_U32(r31.u32 + 5784, ctx.r10.u32);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// lbzx r11,r6,r28
	ctx.r11.u64 = REX_LOAD_U8(ctx.r6.u32 + r28.u32);
	// addi r11,r11,292
	ctx.r11.s64 = ctx.r11.s64 + 292;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + r31.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sthx r10,r11,r31
	REX_STORE_U16(ctx.r11.u32 + r31.u32, ctx.r10.u16);
	// bge cr6,0x824c2454
	if (!ctx.cr6.lt) goto loc_824C2454;
	// lbzx r11,r9,r27
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + r27.u32);
	// b 0x824c2460
	goto loc_824C2460;
loc_824C2454:
	// rlwinm r11,r9,25,7,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 25) & 0x1FFFFFF;
	// addi r10,r27,256
	ctx.r10.s64 = r27.s64 + 256;
	// lbzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
loc_824C2460:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r11,r11,608
	ctx.r11.s64 = ctx.r11.s64 + 608;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + r31.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sthx r10,r11,r31
	REX_STORE_U16(ctx.r11.u32 + r31.u32, ctx.r10.u16);
	// lwz r10,5784(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 5784);
	// lwz r9,108(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 108);
	// lwz r8,120(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 120);
	// lwz r11,5780(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 5780);
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// subf r7,r10,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r10.u64;
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// subf r10,r11,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r11.u64;
	// cntlzw r9,r7
	ctx.r9.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// stw r10,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r10.u32);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bgt cr6,0x824c2538
	if (ctx.cr6.gt) goto loc_824C2538;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// blt cr6,0x824c2538
	if (ctx.cr6.lt) goto loc_824C2538;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r11.u32);
loc_824C24BC:
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 100);
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 48);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r8,64(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 64);
	// lwz r7,80(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 80);
	// stw r11,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r11.u32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// slw r8,r8,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r7.u8 & 0x3F));
	// lwz r7,76(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 76);
	// lwz r6,44(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 44);
	// lwz r5,60(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 60);
	// and r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 & ctx.r11.u64;
	// lwz r6,56(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lbz r10,2(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// xor r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r8.u64;
	// and r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 & ctx.r7.u64;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r10,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r10.u32);
	// lhzx r30,r8,r5
	r30.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r5.u32);
	// sthx r30,r11,r6
	REX_STORE_U16(ctx.r11.u32 + ctx.r6.u32, r30.u16);
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// lwz r8,64(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 64);
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,100(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 100);
	// sthx r10,r8,r11
	REX_STORE_U16(ctx.r8.u32 + ctx.r11.u32, ctx.r10.u16);
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r11.u32);
	// bne 0x824c24bc
	if (!ctx.cr0.eq) goto loc_824C24BC;
	// b 0x824c25f0
	goto loc_824C25F0;
loc_824C2538:
	// stw r29,88(r31)
	REX_STORE_U32(r31.u32 + 88, r29.u32);
	// lwz r10,100(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 100);
	// lwz r8,80(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 80);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r7,76(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 76);
	// stw r11,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// slw r10,r10,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r8.u8 & 0x3F));
	// lbz r11,1(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// and r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 & ctx.r7.u64;
	// stw r11,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r11.u32);
	// b 0x824c25fc
	goto loc_824C25FC;
loc_824C2580:
	// lwz r11,5784(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 5784);
	// lwz r9,48(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r10,100(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 100);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,5788(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 5788);
	// lbzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// sthx r29,r8,r11
	REX_STORE_U16(ctx.r8.u32 + ctx.r11.u32, r29.u16);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addi r11,r11,35
	ctx.r11.s64 = ctx.r11.s64 + 35;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,5776(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 5776);
	// lwz r8,5784(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 5784);
	// stbx r10,r9,r8
	REX_STORE_U8(ctx.r9.u32 + ctx.r8.u32, ctx.r10.u8);
	// lwz r10,5784(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 5784);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,5784(r31)
	REX_STORE_U32(r31.u32 + 5784, ctx.r10.u32);
	// lhzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + r31.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sthx r10,r11,r31
	REX_STORE_U16(ctx.r11.u32 + r31.u32, ctx.r10.u16);
	// lwz r9,5784(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 5784);
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// lwz r10,5780(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 5780);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// stw r9,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r9.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_824C25F0:
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 100);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r11.u32);
loc_824C25FC:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x824c22fc
	if (ctx.cr6.eq) goto loc_824C22FC;
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x824c261c
	if (ctx.cr6.lt) goto loc_824C261C;
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 48);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x824c2620
	goto loc_824C2620;
loc_824C261C:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
loc_824C2620:
	// lwz r10,100(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 100);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// subf r5,r11,r10
	ctx.r5.u64 = ctx.r10.u64 - ctx.r11.u64;
	// bl 0x824ce068
	ctx.lr = 0x824C2634;
	sub_824CE068(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 100);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r11,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r11.u32);
	// bl 0x824c1c80
	ctx.lr = 0x824C2644;
	sub_824C1C80(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824c22fc
	if (!ctx.cr6.eq) goto loc_824C22FC;
loc_824C2654:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824C2658:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
loc_824C2660:
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x824c2678
	if (ctx.cr6.lt) goto loc_824C2678;
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 48);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x824c267c
	goto loc_824C267C;
loc_824C2678:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
loc_824C267C:
	// addi r10,r26,-4
	ctx.r10.s64 = r26.s64 + -4;
	// lwz r9,100(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 100);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// subf r5,r11,r9
	ctx.r5.u64 = ctx.r9.u64 - ctx.r11.u64;
	// rlwinm r6,r10,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x824ce068
	ctx.lr = 0x824C2698;
	sub_824CE068(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 100);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r11,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r11.u32);
	// bl 0x824c1c80
	ctx.lr = 0x824C26A8;
	sub_824C1C80(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824c26d0
	if (!ctx.cr6.eq) goto loc_824C26D0;
	// addi r11,r26,-4
	ctx.r11.s64 = r26.s64 + -4;
	// li r10,2
	ctx.r10.s64 = 2;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
	// b 0x824c2658
	goto loc_824C2658;
loc_824C26D0:
	// cmpwi cr6,r26,4
	ctx.cr6.compare<int32_t>(r26.s32, 4, ctx.xer);
	// li r3,3
	ctx.r3.s64 = 3;
	// beq cr6,0x824c2658
	if (ctx.cr6.eq) goto loc_824C2658;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x824c2658
	goto loc_824C2658;
}

DEFINE_REX_FUNC(sub_824D8A18) {
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
	// bl 0x826a1c94
	ctx.lr = 0x824D8A20;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r20,r6
	r20.u64 = ctx.r6.u64;
	// bl 0x824d7948
	ctx.lr = 0x824D8A38;
	sub_824D7948(ctx, base);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r19,r10,21384
	r19.s64 = ctx.r10.s64 + 21384;
	// addi r21,r11,28488
	r21.s64 = ctx.r11.s64 + 28488;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// bl 0x824eac90
	ctx.lr = 0x824D8A58;
	sub_824EAC90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d8700
	ctx.lr = 0x824D8A60;
	sub_824D8700(ctx, base);
	// lwz r10,4(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 4);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mulli r10,r10,24
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(24));
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x824d8b5c
	if (!ctx.cr6.lt) goto loc_824D8B5C;
	// addi r30,r11,8
	r30.s64 = ctx.r11.s64 + 8;
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r29,r5,21228
	r29.s64 = ctx.r5.s64 + 21228;
	// addi r27,r6,21368
	r27.s64 = ctx.r6.s64 + 21368;
	// addi r26,r7,21360
	r26.s64 = ctx.r7.s64 + 21360;
	// addi r25,r8,23652
	r25.s64 = ctx.r8.s64 + 23652;
	// addi r24,r9,21308
	r24.s64 = ctx.r9.s64 + 21308;
	// addi r23,r10,21356
	r23.s64 = ctx.r10.s64 + 21356;
	// addi r22,r11,21344
	r22.s64 = ctx.r11.s64 + 21344;
loc_824D8AB4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d7948
	ctx.lr = 0x824D8ABC;
	sub_824D7948(ctx, base);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824eac90
	ctx.lr = 0x824D8ACC;
	sub_824EAC90(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// lwz r7,-4(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + -4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,-8(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + -8);
	// bl 0x824d7a78
	ctx.lr = 0x824D8AE4;
	sub_824D7A78(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r6,0(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824eac90
	ctx.lr = 0x824D8AF8;
	sub_824EAC90(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r6,4(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824eac90
	ctx.lr = 0x824D8B0C;
	sub_824EAC90(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r6,8(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824eac90
	ctx.lr = 0x824D8B20;
	sub_824EAC90(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r6,12(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824eac90
	ctx.lr = 0x824D8B34;
	sub_824EAC90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d86b0
	ctx.lr = 0x824D8B3C;
	sub_824D86B0(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// addi r30,r30,24
	r30.s64 = r30.s64 + 24;
	// mulli r11,r11,24
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(24));
	// addi r9,r30,-8
	ctx.r9.s64 = r30.s64 + -8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824d8ab4
	if (ctx.cr6.lt) goto loc_824D8AB4;
loc_824D8B5C:
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d79a8
	ctx.lr = 0x824D8B68;
	sub_824D79A8(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1ce4
	return;
}

DEFINE_REX_FUNC(sub_824DE258) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// bne cr6,0x824de2a8
	if (!ctx.cr6.eq) goto loc_824DE2A8;
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// bge cr6,0x824de274
	if (!ctx.cr6.lt) goto loc_824DE274;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// blr 
	return;
loc_824DE274:
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x824de2a8
	if (ctx.cr6.eq) goto loc_824DE2A8;
loc_824DE288:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r7,r9,20
	ctx.r7.u64 = ctx.r9.u32 & 0xFFF;
	// cmplw cr6,r7,r5
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x824de2b0
	if (ctx.cr6.eq) goto loc_824DE2B0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x824de288
	if (ctx.cr6.lt) goto loc_824DE288;
loc_824DE2A8:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_824DE2B0:
	// rlwinm r11,r9,24,24,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xF0;
	// rlwinm r10,r9,16,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xF;
	// li r3,0
	ctx.r3.s64 = 0;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stb r11,0(r6)
	REX_STORE_U8(ctx.r6.u32 + 0, ctx.r11.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824E1070) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x824E1078;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,23748
	ctx.r4.s64 = ctx.r11.s64 + 23748;
	// bl 0x824df9f0
	ctx.lr = 0x824E1094;
	sub_824DF9F0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r29,r11,19072
	r29.s64 = ctx.r11.s64 + 19072;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x824e0480
	ctx.lr = 0x824E10A8;
	sub_824E0480(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r28,r11,-19772
	r28.s64 = ctx.r11.s64 + -19772;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x824df9f0
	ctx.lr = 0x824E10BC;
	sub_824DF9F0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r4,r11,23728
	ctx.r4.s64 = ctx.r11.s64 + 23728;
	// bl 0x824df9f0
	ctx.lr = 0x824E10D0;
	sub_824DF9F0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e0480
	ctx.lr = 0x824E10DC;
	sub_824E0480(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824df9f0
	ctx.lr = 0x824E10E8;
	sub_824DF9F0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,23716
	ctx.r4.s64 = ctx.r11.s64 + 23716;
	// bl 0x824df9f0
	ctx.lr = 0x824E10F8;
	sub_824DF9F0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r4,r30,8
	ctx.r4.s64 = r30.s64 + 8;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r5,4(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824E1110;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x824e1128
	if (!ctx.cr0.lt) goto loc_824E1128;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x824e1128
	if (ctx.cr6.lt) goto loc_824E1128;
	// stw r3,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r3.u32);
loc_824E1128:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,28528
	ctx.r4.s64 = ctx.r11.s64 + 28528;
	// bl 0x824df9f0
	ctx.lr = 0x824E1138;
	sub_824DF9F0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e0480
	ctx.lr = 0x824E1144;
	sub_824E0480(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824df9f0
	ctx.lr = 0x824E1150;
	sub_824DF9F0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_824E6688) {
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
	// bl 0x826a1cb4
	ctx.lr = 0x824E6690;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// li r10,12
	ctx.r10.s64 = 12;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// rlwimi r9,r3,12,21,23
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 12) & 0x700) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF8FF);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// clrlwi r4,r3,21
	ctx.r4.u64 = ctx.r3.u32 & 0x7FF;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// rlwinm r3,r9,24,27,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0x1F;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// addi r31,r11,4
	r31.s64 = ctx.r11.s64 + 4;
	// bl 0x824e5c68
	ctx.lr = 0x824E66D0;
	sub_824E5C68(ctx, base);
	// rlwinm r11,r27,0,12,15
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xF0000;
	// lis r10,15
	ctx.r10.s64 = 983040;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824e673c
	if (ctx.cr6.eq) goto loc_824E673C;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r9,64
	ctx.r9.s64 = 4194304;
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// rlwimi r9,r10,16,10,15
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x3F0000) | (ctx.r9.u64 & 0xFFFFFFFFFFC0FFFF);
	// rlwinm. r7,r11,0,15,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// addi r9,r31,4
	ctx.r9.s64 = r31.s64 + 4;
	// beq 0x824e670c
	if (ctx.cr0.eq) goto loc_824E670C;
	// li r10,1
	ctx.r10.s64 = 1;
loc_824E670C:
	// rlwinm. r8,r11,0,14,14
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x824e6718
	if (ctx.cr0.eq) goto loc_824E6718;
	// ori r10,r10,4
	ctx.r10.u64 = ctx.r10.u64 | 4;
loc_824E6718:
	// rlwinm. r8,r11,0,13,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x824e6724
	if (ctx.cr0.eq) goto loc_824E6724;
	// ori r10,r10,16
	ctx.r10.u64 = ctx.r10.u64 | 16;
loc_824E6724:
	// rlwinm. r11,r11,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824e6730
	if (ctx.cr0.eq) goto loc_824E6730;
	// ori r10,r10,64
	ctx.r10.u64 = ctx.r10.u64 | 64;
loc_824E6730:
	// stw r10,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// b 0x824e6750
	goto loc_824E6750;
loc_824E673C:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r9,r31,4
	ctx.r9.s64 = r31.s64 + 4;
	// rlwimi r3,r11,16,10,15
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x3F0000) | (ctx.r3.u64 & 0xFFFFFFFFFFC0FFFF);
	// clrlwi r11,r3,10
	ctx.r11.u64 = ctx.r3.u32 & 0x3FFFFF;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_824E6750:
	// rlwinm r11,r30,0,4,7
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xF000000;
	// lis r7,228
	ctx.r7.s64 = 14942208;
	// addis r11,r11,-3328
	ctx.r11.s64 = ctx.r11.s64 + -218103808;
	// rlwinm r10,r30,0,8,15
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFF0000;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// subfe r6,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// and r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 & ctx.r8.u64;
	// addi r11,r11,-19960
	ctx.r11.s64 = ctx.r11.s64 + -19960;
	// bne cr6,0x824e6798
	if (!ctx.cr6.eq) goto loc_824E6798;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x824e6798
	if (!ctx.cr6.eq) goto loc_824E6798;
	// lis r8,4
	ctx.r8.s64 = 262144;
	// ori r8,r8,32
	ctx.r8.u64 = ctx.r8.u64 | 32;
	// stw r8,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// b 0x824e67ec
	goto loc_824E67EC;
loc_824E6798:
	// rlwinm r6,r10,14,18,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0x3FFF;
	// rlwinm r10,r10,18,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0xC;
	// rlwinm r5,r6,30,2,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r6,r6,2,28,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xC;
	// rlwinm r4,r5,2,28,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xC;
	// rlwinm r5,r5,0,28,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xC;
	// lwzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lis r3,68
	ctx.r3.s64 = 4456448;
	// lwzx r6,r6,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// ori r3,r3,32
	ctx.r3.u64 = ctx.r3.u64 | 32;
	// lwzx r4,r4,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// rlwinm r6,r6,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r5,r5,r11
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// rlwinm r4,r4,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// stw r3,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r3.u32);
	// or r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 | ctx.r10.u64;
	// rlwinm r6,r5,12,0,19
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 12) & 0xFFFFF000;
	// or r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 | ctx.r10.u64;
	// or r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 | ctx.r10.u64;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// stwu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r9.u32 = ea;
loc_824E67EC:
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r29,r7
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x824e684c
	if (ctx.cr6.eq) goto loc_824E684C;
	// rlwinm r9,r29,14,18,31
	ctx.r9.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 14) & 0x3FFF;
	// lis r8,68
	ctx.r8.s64 = 4456448;
	// rlwinm r7,r9,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r6,r29,18,28,29
	ctx.r6.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 18) & 0xC;
	// rlwinm r5,r7,2,28,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xC;
	// rlwinm r7,r7,0,28,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xC;
	// ori r8,r8,33
	ctx.r8.u64 = ctx.r8.u64 | 33;
	// rlwinm r9,r9,2,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xC;
	// stw r8,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwzx r8,r6,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// lwzx r6,r5,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// lwzx r7,r7,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// lwzx r11,r9,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// rlwinm r9,r6,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r8,r7,12,0,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 12) & 0xFFFFF000;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// or r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 | ctx.r11.u64;
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// b 0x824e6858
	goto loc_824E6858;
loc_824E684C:
	// lis r9,4
	ctx.r9.s64 = 262144;
	// ori r9,r9,33
	ctx.r9.u64 = ctx.r9.u64 | 33;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_824E6858:
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_824F62F0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x824f63a4
	if (!ctx.cr6.eq) goto loc_824F63A4;
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// blt cr6,0x824f6350
	if (ctx.cr6.lt) goto loc_824F6350;
	// beq cr6,0x824f63a4
	if (ctx.cr6.eq) goto loc_824F63A4;
	// cmplwi cr6,r5,3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 3, ctx.xer);
	// blt cr6,0x824f6318
	if (ctx.cr6.lt) goto loc_824F6318;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// blr 
	return;
loc_824F6318:
	// addi r10,r6,12
	ctx.r10.s64 = ctx.r6.s64 + 12;
	// lwz r9,0(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm r11,r6,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x7FFFFFF;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,244
	ctx.r11.s64 = ctx.r11.s64 + 244;
	// clrlwi r8,r6,27
	ctx.r8.u64 = ctx.r6.u32 & 0x1F;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r7,1
	ctx.r7.s64 = 1;
	// stwx r9,r10,r3
	REX_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r9.u32);
	// slw r10,r7,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r8.u8 & 0x3F));
	// lwzx r9,r11,r3
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stwx r10,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u32);
	// b 0x824f63a4
	goto loc_824F63A4;
loc_824F6350:
	// rlwinm r10,r6,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r6,27
	ctx.r9.u64 = ctx.r6.u32 & 0x1F;
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// li r8,1
	ctx.r8.s64 = 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r8,r8,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r6,r11,r3
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// addi r10,r10,236
	ctx.r10.s64 = ctx.r10.s64 + 236;
	// andc r6,r6,r8
	ctx.r6.u64 = ctx.r6.u64 & ~ctx.r8.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r6,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r6.u32);
	// rotlwi r6,r6,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// lwz r7,0(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// addic r5,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r5.s64 = ctx.r7.s64 + -1;
	// subfe r7,r5,r7
	temp.u8 = (~ctx.r5.u32 + ctx.r7.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r5.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// slw r9,r7,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r9.u8 & 0x3F));
	// or r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 | ctx.r6.u64;
	// stwx r9,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r9.u32);
	// lwzx r11,r10,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// stwx r11,r10,r3
	REX_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r11.u32);
loc_824F63A4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824FE458) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x824fe4a4
	if (ctx.cr6.eq) goto loc_824FE4A4;
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// ble cr6,0x824fe474
	if (!ctx.cr6.gt) goto loc_824FE474;
loc_824FE468:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// blr 
	return;
loc_824FE474:
	// subf. r10,r4,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r4.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x824fe468
	if (ctx.cr0.eq) goto loc_824FE468;
loc_824FE480:
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x824fe468
	if (!ctx.cr6.lt) goto loc_824FE468;
	// lbzx r9,r11,r3
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x824fe4a4
	if (ctx.cr0.eq) goto loc_824FE4A4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x824fe480
	if (ctx.cr6.lt) goto loc_824FE480;
	// b 0x824fe468
	goto loc_824FE468;
loc_824FE4A4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82501A80) {
	REX_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r10,r11,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x82501aa0
	if (ctx.cr6.lt) goto loc_82501AA0;
	// cmplwi cr6,r10,82
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 82, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82501aa4
	if (!ctx.cr6.gt) goto loc_82501AA4;
loc_82501AA0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82501AA4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82501b10
	if (!ctx.cr0.eq) goto loc_82501B10;
	// cmplwi cr6,r10,96
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 96, ctx.xer);
	// bne cr6,0x82501abc
	if (!ctx.cr6.eq) goto loc_82501ABC;
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_82501ABC:
	// blt cr6,0x82501acc
	if (ctx.cr6.lt) goto loc_82501ACC;
	// cmplwi cr6,r10,102
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 102, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82501ad0
	if (!ctx.cr6.gt) goto loc_82501AD0;
loc_82501ACC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82501AD0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82501ae0
	if (ctx.cr0.eq) goto loc_82501AE0;
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_82501AE0:
	// cmplwi cr6,r10,83
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 83, ctx.xer);
	// blt cr6,0x82501af4
	if (ctx.cr6.lt) goto loc_82501AF4;
	// cmplwi cr6,r10,95
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 95, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82501af8
	if (!ctx.cr6.gt) goto loc_82501AF8;
loc_82501AF4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82501AF8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82501b18
	if (!ctx.cr0.eq) goto loc_82501B18;
	// cmplwi cr6,r10,106
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 106, ctx.xer);
	// beq cr6,0x82501b18
	if (ctx.cr6.eq) goto loc_82501B18;
	// cmplwi cr6,r10,110
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 110, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_82501B10:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82501B18:
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82504228) {
	REX_FUNC_PROLOGUE();
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// not r10,r9
	ctx.r10.u64 = ~ctx.r9.u64;
	// clrlwi r7,r11,27
	ctx.r7.u64 = ctx.r11.u32 & 0x1F;
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// slw r4,r6,r7
	ctx.r4.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r7.u8 & 0x3F));
	// addi r8,r9,4
	ctx.r8.s64 = ctx.r9.s64 + 4;
	// bne 0x8250424c
	if (!ctx.cr0.eq) goto loc_8250424C;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
loc_8250424C:
	// rlwinm r11,r11,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// beq cr6,0x82504260
	if (ctx.cr6.eq) goto loc_82504260;
	// addi r3,r9,4
	ctx.r3.s64 = ctx.r9.s64 + 4;
loc_82504260:
	// addi r10,r5,1
	ctx.r10.s64 = ctx.r5.s64 + 1;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFC;
	// subf r9,r4,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r4.u64;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// subfic r11,r7,32
	ctx.xer.ca = ctx.r7.u32 <= 32;
	ctx.r11.u64 = static_cast<uint64_t>(32) - ctx.r7.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// srw r11,r6,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r11.u8 & 0x3F));
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8250A580) {
	REX_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,83
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 83, ctx.xer);
	// blt cr6,0x8250a59c
	if (ctx.cr6.lt) goto loc_8250A59C;
	// cmplwi cr6,r11,95
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 95, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x8250a5a0
	if (!ctx.cr6.gt) goto loc_8250A5A0;
loc_8250A59C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8250A5A0:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8250a5cc
	if (ctx.cr0.eq) goto loc_8250A5CC;
	// cmplwi cr6,r11,85
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 85, ctx.xer);
	// beq cr6,0x8250a5cc
	if (ctx.cr6.eq) goto loc_8250A5CC;
	// cmplwi cr6,r11,87
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 87, ctx.xer);
	// beq cr6,0x8250a5cc
	if (ctx.cr6.eq) goto loc_8250A5CC;
	// cmplwi cr6,r11,90
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 90, ctx.xer);
	// beq cr6,0x8250a5cc
	if (ctx.cr6.eq) goto loc_8250A5CC;
	// cmplwi cr6,r11,94
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 94, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_8250A5CC:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8250B7C0) {
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
	// bl 0x826a1c98
	ctx.lr = 0x8250B7C8;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// cntlzw r11,r7
	ctx.r11.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// stw r4,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r20,r6
	r20.u64 = ctx.r6.u64;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// mr r21,r8
	r21.u64 = ctx.r8.u64;
	// li r25,0
	r25.s64 = 0;
	// li r22,0
	r22.s64 = 0;
	// rlwinm r23,r11,27,31,31
	r23.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x8250ab00
	ctx.lr = 0x8250B800;
	sub_8250AB00(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x8250b9fc
	if (ctx.cr0.eq) goto loc_8250B9FC;
	// li r27,1
	r27.s64 = 1;
loc_8250B80C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x8250b874
	if (ctx.cr6.eq) goto loc_8250B874;
	// lwz r11,48(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 48);
	// lwz r10,40(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 40);
	// clrlwi r9,r11,13
	ctx.r9.u64 = ctx.r11.u32 & 0x7FFFF;
	// rlwinm r11,r9,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// slw r9,r27,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r27.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// and. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8250b874
	if (ctx.cr0.eq) goto loc_8250B874;
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// cmplw cr6,r29,r9
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8250b868
	if (ctx.cr6.eq) goto loc_8250B868;
loc_8250B850:
	// lwz r10,60(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8250b86c
	if (!ctx.cr6.eq) goto loc_8250B86C;
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8250b850
	if (!ctx.cr6.eq) goto loc_8250B850;
loc_8250B868:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8250B86C:
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// b 0x8250b9ec
	goto loc_8250B9EC;
loc_8250B874:
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8250b91c
	if (ctx.cr6.eq) goto loc_8250B91C;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8250b91c
	if (ctx.cr6.eq) goto loc_8250B91C;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_8250B890:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8250b920
	if (ctx.cr6.eq) goto loc_8250B920;
	// lwz r11,48(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 48);
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// clrlwi r9,r11,13
	ctx.r9.u64 = ctx.r11.u32 & 0x7FFFF;
	// rlwinm r11,r9,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// lwz r11,40(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// slw r9,r27,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r27.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r7,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// and. r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 & ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8250b8f8
	if (ctx.cr0.eq) goto loc_8250B8F8;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x8250b914
	if (ctx.cr6.eq) goto loc_8250B914;
	// lwz r9,48(r26)
	ctx.r9.u64 = REX_LOAD_U32(r26.u32 + 48);
	// clrlwi r7,r9,13
	ctx.r7.u64 = ctx.r9.u32 & 0x7FFFF;
	// rlwinm r9,r7,27,5,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r7,r7,27
	ctx.r7.u64 = ctx.r7.u32 & 0x1F;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// slw r7,r27,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (r27.u32 << (ctx.r7.u8 & 0x3F));
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// and. r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8250b914
	if (ctx.cr0.eq) goto loc_8250B914;
loc_8250B8F8:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x8250b910
	if (ctx.cr6.eq) goto loc_8250B910;
	// cmplw cr6,r10,r25
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r25.u32, ctx.xer);
	// beq cr6,0x8250b914
	if (ctx.cr6.eq) goto loc_8250B914;
loc_8250B908:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8250ba24
	goto loc_8250BA24;
loc_8250B910:
	// mr r25,r10
	r25.u64 = ctx.r10.u64;
loc_8250B914:
	// lwz r8,8(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// b 0x8250b890
	goto loc_8250B890;
loc_8250B91C:
	// mr r22,r27
	r22.u64 = r27.u64;
loc_8250B920:
	// clrlwi. r11,r23,24
	ctx.r11.u64 = r23.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8250b9ec
	if (!ctx.cr0.eq) goto loc_8250B9EC;
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 20);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8250b958
	if (ctx.cr0.eq) goto loc_8250B958;
	// lwz r11,28(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 28);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8250b94c
	if (ctx.cr0.eq) goto loc_8250B94C;
	// lwz r11,36(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 36);
	// addi r30,r29,32
	r30.s64 = r29.s64 + 32;
	// b 0x8250b960
	goto loc_8250B960;
loc_8250B94C:
	// lwz r11,28(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 28);
	// addi r30,r29,24
	r30.s64 = r29.s64 + 24;
	// b 0x8250b960
	goto loc_8250B960;
loc_8250B958:
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 20);
	// addi r30,r29,16
	r30.s64 = r29.s64 + 16;
loc_8250B960:
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
	// b 0x8250b9dc
	goto loc_8250B9DC;
loc_8250B974:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250a9a0
	ctx.lr = 0x8250B97C;
	sub_8250A9A0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8250b9e8
	if (!ctx.cr0.eq) goto loc_8250B9E8;
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r31,40(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8250b99c
	if (!ctx.cr0.eq) goto loc_8250B99C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8250b974
	if (!ctx.cr6.eq) goto loc_8250B974;
loc_8250B99C:
	// addi r10,r29,32
	ctx.r10.s64 = r29.s64 + 32;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8250b9ec
	if (ctx.cr6.eq) goto loc_8250B9EC;
	// addi r11,r29,24
	ctx.r11.s64 = r29.s64 + 24;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8250b9cc
	if (ctx.cr6.eq) goto loc_8250B9CC;
	// lwz r9,28(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 28);
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8250b9cc
	if (!ctx.cr0.eq) goto loc_8250B9CC;
	// lwz r31,4(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// b 0x8250b9d4
	goto loc_8250B9D4;
loc_8250B9CC:
	// lwz r31,4(r10)
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// mr r30,r10
	r30.u64 = ctx.r10.u64;
loc_8250B9D4:
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8250b9ec
	if (!ctx.cr0.eq) goto loc_8250B9EC;
loc_8250B9DC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8250b974
	if (!ctx.cr6.eq) goto loc_8250B974;
	// b 0x8250b9ec
	goto loc_8250B9EC;
loc_8250B9E8:
	// mr r23,r27
	r23.u64 = r27.u64;
loc_8250B9EC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8250ab00
	ctx.lr = 0x8250B9F4;
	sub_8250AB00(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne 0x8250b80c
	if (!ctx.cr0.eq) goto loc_8250B80C;
loc_8250B9FC:
	// clrlwi. r11,r22,24
	ctx.r11.u64 = r22.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8250ba0c
	if (!ctx.cr0.eq) goto loc_8250BA0C;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x8250b908
	if (ctx.cr6.eq) goto loc_8250B908;
loc_8250BA0C:
	// stw r25,0(r21)
	REX_STORE_U32(r21.u32 + 0, r25.u32);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x8250ba1c
	if (ctx.cr6.eq) goto loc_8250BA1C;
	// stb r23,0(r24)
	REX_STORE_U8(r24.u32 + 0, r23.u8);
loc_8250BA1C:
	// stb r22,0(r20)
	REX_STORE_U8(r20.u32 + 0, r22.u8);
	// li r3,1
	ctx.r3.s64 = 1;
loc_8250BA24:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1ce8
	return;
}

DEFINE_REX_FUNC(sub_8252DDE0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8252DDE8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// li r31,0
	r31.s64 = 0;
	// clrlwi. r10,r11,29
	ctx.r10.u64 = ctx.r11.u32 & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8252de30
	if (ctx.cr0.eq) goto loc_8252DE30;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8252DE0C:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r29
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r29.u32, ctx.xer);
	// beq cr6,0x8252de30
	if (ctx.cr6.eq) goto loc_8252DE30;
	// lwz r9,16(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 16);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// clrlwi r9,r9,29
	ctx.r9.u64 = ctx.r9.u32 & 0x7;
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8252de0c
	if (ctx.cr6.lt) goto loc_8252DE0C;
loc_8252DE30:
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8252de90
	if (!ctx.cr6.eq) goto loc_8252DE90;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// rlwinm. r11,r11,6,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252de50
	if (ctx.cr0.eq) goto loc_8252DE50;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r5,660(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 660);
	// bl 0x8254f428
	ctx.lr = 0x8252DE50;
	sub_8254F428(ctx, base);
loc_8252DE50:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// rlwinm r11,r11,18,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// subf. r11,r28,r11
	ctx.r11.u64 = ctx.r11.u64 - r28.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// beq 0x8252de84
	if (ctx.cr0.eq) goto loc_8252DE84;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_8252DE70:
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(r31.u32, 4, ctx.xer);
	// beq cr6,0x8252de9c
	if (ctx.cr6.eq) goto loc_8252DE9C;
	// stwu r29,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r29.u32);
	ctx.r11.u32 = ea;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// bdnz 0x8252de70
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8252DE70;
loc_8252DE84:
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// rlwimi r31,r11,0,0,28
	r31.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8) | (r31.u64 & 0xFFFFFFFF00000007);
	// stw r31,16(r30)
	REX_STORE_U32(r30.u32 + 16, r31.u32);
loc_8252DE90:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8252DE94:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_8252DE9C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8252de94
	goto loc_8252DE94;
}

DEFINE_REX_FUNC(sub_82533650) {
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
	// lwz r31,4(r4)
	r31.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_8253366C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8253369c
	if (ctx.cr6.eq) goto loc_8253369C;
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82533694
	if (ctx.cr6.eq) goto loc_82533694;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82533694
	if (ctx.cr0.eq) goto loc_82533694;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825335b8
	ctx.lr = 0x82533694;
	sub_825335B8(ctx, base);
loc_82533694:
	// lwz r31,8(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 8);
	// b 0x8253366c
	goto loc_8253366C;
loc_8253369C:
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

DEFINE_REX_FUNC(sub_825398F0) {
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
	ctx.lr = 0x825398F8;
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,4
	ctx.r11.s64 = ctx.r4.s64 + 4;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r3,308(r1)
	REX_STORE_U32(ctx.r1.u32 + 308, ctx.r3.u32);
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// stw r4,316(r1)
	REX_STORE_U32(ctx.r1.u32 + 316, ctx.r4.u32);
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// stw r5,324(r1)
	REX_STORE_U32(ctx.r1.u32 + 324, ctx.r5.u32);
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// stw r6,332(r1)
	REX_STORE_U32(ctx.r1.u32 + 332, ctx.r6.u32);
loc_82539924:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82539968
	if (ctx.cr6.eq) goto loc_82539968;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82539954
	if (ctx.cr6.eq) goto loc_82539954;
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r9,r9,0,18,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r9,14080
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 14080, ctx.xer);
	// bne cr6,0x82539954
	if (!ctx.cr6.eq) goto loc_82539954;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r9,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8253995c
	if (!ctx.cr0.eq) goto loc_8253995C;
loc_82539954:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82539924
	goto loc_82539924;
loc_8253995C:
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r21,0
	r21.s64 = 0;
	// b 0x82539970
	goto loc_82539970;
loc_82539968:
	// li r21,0
	r21.s64 = 0;
	// stw r21,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r21.u32);
loc_82539970:
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4);
	// addi r29,r26,4
	r29.s64 = r26.s64 + 4;
loc_82539978:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825399b8
	if (ctx.cr6.eq) goto loc_825399B8;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825399a8
	if (ctx.cr6.eq) goto loc_825399A8;
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r9,r9,0,18,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r9,14080
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 14080, ctx.xer);
	// bne cr6,0x825399a8
	if (!ctx.cr6.eq) goto loc_825399A8;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r9,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x825399b0
	if (!ctx.cr0.eq) goto loc_825399B0;
loc_825399A8:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82539978
	goto loc_82539978;
loc_825399B0:
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
	// b 0x825399bc
	goto loc_825399BC;
loc_825399B8:
	// mr r28,r21
	r28.u64 = r21.u64;
loc_825399BC:
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r28,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r28.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825c4a48
	ctx.lr = 0x825399D8;
	sub_825C4A48(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82503a60
	ctx.lr = 0x825399E0;
	sub_82503A60(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825399fc
	if (ctx.cr0.eq) goto loc_825399FC;
	// lwz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 8);
	// lwz r10,8(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 8);
	// rlwinm r14,r11,18,29,31
	r14.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r16,r10,18,29,31
	r16.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x7;
	// b 0x82539a04
	goto loc_82539A04;
loc_825399FC:
	// li r14,2
	r14.s64 = 2;
	// li r16,2
	r16.s64 = 2;
loc_82539A04:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lhz r15,14(r26)
	r15.u64 = REX_LOAD_U16(r26.u32 + 14);
	// add r17,r16,r14
	r17.u64 = r16.u64 + r14.u64;
	// addi r11,r11,-21480
	ctx.r11.s64 = ctx.r11.s64 + -21480;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// add r18,r14,r11
	r18.u64 = r14.u64 + ctx.r11.u64;
	// lbz r11,-1(r18)
	ctx.r11.u64 = REX_LOAD_U8(r18.u32 + -1);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x8253a2cc
	if (ctx.cr6.eq) goto loc_8253A2CC;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// clrlwi. r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8253a2cc
	if (ctx.cr0.eq) goto loc_8253A2CC;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82538a80
	ctx.lr = 0x82539A4C;
	sub_82538A80(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr. r19,r3
	r19.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r19.s32, 0, ctx.xer);
	// rlwinm r10,r11,27,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7;
	// subf r17,r10,r17
	r17.u64 = r17.u64 - ctx.r10.u64;
	// bne 0x82539cc8
	if (!ctx.cr0.eq) goto loc_82539CC8;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
loc_82539A64:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82539ac4
	if (ctx.cr6.eq) goto loc_82539AC4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r10,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82539ab0
	if (!ctx.cr0.eq) goto loc_82539AB0;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x82539a90
	goto loc_82539A90;
loc_82539A88:
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
loc_82539A90:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82539a88
	if (!ctx.cr6.eq) goto loc_82539A88;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 0);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r11,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r11.u32);
	// stw r25,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, r25.u32);
loc_82539AB0:
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82539a64
	if (!ctx.cr6.eq) goto loc_82539A64;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// b 0x82539a64
	goto loc_82539A64;
loc_82539AC4:
	// lwz r30,80(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_82539AC8:
	// lwz r31,0(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82539b88
	if (ctx.cr6.eq) goto loc_82539B88;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82539b74
	if (ctx.cr6.eq) goto loc_82539B74;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82539af8
	goto loc_82539AF8;
loc_82539AF0:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
loc_82539AF8:
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, ctx.xer);
	// bne cr6,0x82539af0
	if (!ctx.cr6.eq) goto loc_82539AF0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r25,4
	ctx.r11.s64 = r25.s64 + 4;
	// lwz r10,4(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 4);
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// stw r31,4(r25)
	REX_STORE_U32(r25.u32 + 4, r31.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm. r10,r11,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r25,12(r31)
	REX_STORE_U32(r31.u32 + 12, r25.u32);
	// beq 0x82539b74
	if (ctx.cr0.eq) goto loc_82539B74;
	// rlwinm r10,r11,22,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x6;
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 16);
	// rlwinm r9,r11,24,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x6;
	// srw r10,r30,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r30.u32 >> (ctx.r10.u8 & 0x3F));
	// srw r9,r30,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r30.u32 >> (ctx.r9.u8 & 0x3F));
	// rlwimi r9,r10,2,28,29
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFF3);
	// rlwinm r8,r11,26,29,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x6;
	// rlwinm r10,r11,28,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x6;
	// clrlwi r9,r9,28
	ctx.r9.u64 = ctx.r9.u32 & 0xF;
	// srw r8,r30,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (r30.u32 >> (ctx.r8.u8 & 0x3F));
	// srw r10,r30,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r30.u32 >> (ctx.r10.u8 & 0x3F));
	// rlwimi r8,r9,2,0,29
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r8.u64 & 0xFFFFFFFF00000003);
	// rlwinm r11,r11,0,27,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// rlwimi r10,r8,2,0,29
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r10.u64 & 0xFFFFFFFF00000003);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x825335b8
	ctx.lr = 0x82539B74;
	sub_825335B8(ctx, base);
loc_82539B74:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bne cr6,0x82539ac8
	if (!ctx.cr6.eq) goto loc_82539AC8;
	// addi r29,r31,8
	r29.s64 = r31.s64 + 8;
	// b 0x82539ac8
	goto loc_82539AC8;
loc_82539B88:
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 8);
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82539c64
	if (ctx.cr0.eq) goto loc_82539C64;
	// lwz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 8);
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82539bc8
	if (ctx.cr0.eq) goto loc_82539BC8;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// std r21,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, r21.u64);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// std r21,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, r21.u64);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8252f958
	ctx.lr = 0x82539BC8;
	sub_8252F958(ctx, base);
loc_82539BC8:
	// lwz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 8);
	// rlwinm. r10,r11,9,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82539be0
	if (ctx.cr0.eq) goto loc_82539BE0;
	// lhz r10,16(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 16);
	// clrlwi. r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82539c4c
	if (ctx.cr0.eq) goto loc_82539C4C;
loc_82539BE0:
	// lwz r10,16(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 16);
	// oris r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 8388608;
	// rlwinm r10,r10,0,16,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFF8FFFF;
	// stw r11,8(r25)
	REX_STORE_U32(r25.u32 + 8, ctx.r11.u32);
	// stw r10,16(r25)
	REX_STORE_U32(r25.u32 + 16, ctx.r10.u32);
	// lwz r3,660(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 660);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82539c28
	if (!ctx.cr0.eq) goto loc_82539C28;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82539c28
	if (ctx.cr0.eq) goto loc_82539C28;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82539c34
	if (!ctx.cr6.gt) goto loc_82539C34;
loc_82539C28:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8251fe00
	ctx.lr = 0x82539C30;
	sub_8251FE00(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82539C34:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// stwx r25,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, r25.u32);
loc_82539C4C:
	// lwz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 8);
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82539c64
	if (!ctx.cr0.eq) goto loc_82539C64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82516448
	ctx.lr = 0x82539C60;
	sub_82516448(ctx, base);
	// sth r3,18(r25)
	REX_STORE_U16(r25.u32 + 18, ctx.r3.u16);
loc_82539C64:
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,652(r27)
	ctx.r5.u64 = REX_LOAD_U32(r27.u32 + 652);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825c2288
	ctx.lr = 0x82539C78;
	sub_825C2288(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82539cb4
	if (ctx.cr6.eq) goto loc_82539CB4;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82539c90
	if (!ctx.cr6.eq) goto loc_82539C90;
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r28.u32);
loc_82539C90:
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r14
	ctx.r6.u64 = r14.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82534f50
	ctx.lr = 0x82539CB4;
	sub_82534F50(ctx, base);
loc_82539CB4:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825335b8
	ctx.lr = 0x82539CC0;
	sub_825335B8(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// b 0x8253ac7c
	goto loc_8253AC7C;
loc_82539CC8:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8253a2c4
	if (ctx.cr6.eq) goto loc_8253A2C4;
	// clrlwi. r9,r11,27
	ctx.r9.u64 = ctx.r11.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mr r10,r21
	ctx.r10.u64 = r21.u64;
	// beq 0x82539d34
	if (ctx.cr0.eq) goto loc_82539D34;
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
loc_82539CE0:
	// addi r8,r11,3
	ctx.r8.s64 = ctx.r11.s64 + 3;
	// rlwinm r7,r11,29,3,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFF8;
	// clrldi r8,r8,58
	ctx.r8.u64 = ctx.r8.u64 & 0x3F;
	// li r6,2
	ctx.r6.s64 = 2;
	// clrldi r5,r11,58
	ctx.r5.u64 = ctx.r11.u64 & 0x3F;
	// sld r8,r6,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r6.u64 << (ctx.r8.u8 & 0x7F));
	// ldx r7,r7,r31
	ctx.r7.u64 = REX_LOAD_U64(ctx.r7.u32 + r31.u32);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// li r6,-1
	ctx.r6.s64 = -1;
	// and r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 & ctx.r7.u64;
	// sld r7,r6,r5
	ctx.r7.u64 = ctx.r5.u8 & 0x40 ? 0 : (ctx.r6.u64 << (ctx.r5.u8 & 0x7F));
	// and r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 & ctx.r7.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// srd r8,r8,r5
	ctx.r8.u64 = ctx.r5.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r5.u8 & 0x7F));
	// clrlwi r8,r8,30
	ctx.r8.u64 = ctx.r8.u32 & 0x3;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// slw r8,r7,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r8.u8 & 0x3F));
	// or r21,r8,r21
	r21.u64 = ctx.r8.u64 | r21.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82539ce0
	if (ctx.cr6.lt) goto loc_82539CE0;
loc_82539D34:
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 8);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// li r5,28
	ctx.r5.s64 = 28;
	// rlwinm r9,r11,31,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0xF;
	// addi r11,r10,-21496
	ctx.r11.s64 = ctx.r10.s64 + -21496;
	// subf r10,r21,r9
	ctx.r10.u64 = ctx.r9.u64 - r21.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lbz r22,-1(r11)
	r22.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// bl 0x824f7678
	ctx.lr = 0x82539D60;
	sub_824F7678(ctx, base);
	// addi r20,r3,4
	r20.s64 = ctx.r3.s64 + 4;
	// ori r11,r3,1
	ctx.r11.u64 = ctx.r3.u64 | 1;
	// ori r10,r20,1
	ctx.r10.u64 = r20.u64 | 1;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r31,4(r19)
	r31.u64 = REX_LOAD_U32(r19.u32 + 4);
loc_82539D7C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82539df8
	if (ctx.cr6.eq) goto loc_82539DF8;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82539df0
	if (ctx.cr6.eq) goto loc_82539DF0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82539df0
	if (ctx.cr0.eq) goto loc_82539DF0;
	// lwz r11,0(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82539dcc
	if (!ctx.cr0.eq) goto loc_82539DCC;
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82539dcc
	if (ctx.cr0.eq) goto loc_82539DCC;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82539dd8
	if (!ctx.cr6.gt) goto loc_82539DD8;
loc_82539DCC:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8251fe00
	ctx.lr = 0x82539DD8;
	sub_8251FE00(ctx, base);
loc_82539DD8:
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
loc_82539DF0:
	// lwz r31,8(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 8);
	// b 0x82539d7c
	goto loc_82539D7C;
loc_82539DF8:
	// lwz r23,80(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_82539DFC:
	// lwz r11,0(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8253a23c
	if (!ctx.cr0.eq) goto loc_8253A23C;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8253a23c
	if (ctx.cr0.eq) goto loc_8253A23C;
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r28,r10,r4
	r28.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// stw r11,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// bne 0x82539e70
	if (!ctx.cr0.eq) goto loc_82539E70;
	// rlwinm r11,r4,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x824e4308
	ctx.lr = 0x82539E70;
	sub_824E4308(ctx, base);
loc_82539E70:
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm. r11,r10,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82539eb8
	if (ctx.cr0.eq) goto loc_82539EB8;
	// rotlwi r6,r10,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// rlwinm r7,r10,27,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0xFF;
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r6,r6,7,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 7) & 0x7;
loc_82539E94:
	// srw r5,r7,r11
	ctx.r5.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r11.u8 & 0x3F));
	// clrlwi r5,r5,30
	ctx.r5.u64 = ctx.r5.u32 & 0x3;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// slw r5,r4,r5
	ctx.r5.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r5.u8 & 0x3F));
	// or r8,r5,r8
	ctx.r8.u64 = ctx.r5.u64 | ctx.r8.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x82539e94
	if (ctx.cr6.lt) goto loc_82539E94;
loc_82539EB8:
	// and. r29,r8,r21
	r29.u64 = ctx.r8.u64 & r21.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x8253a1e8
	if (ctx.cr0.eq) goto loc_8253A1E8;
	// andc. r30,r8,r21
	r30.u64 = ctx.r8.u64 & ~r21.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x8253a164
	if (ctx.cr0.eq) goto loc_8253A164;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// li r31,0
	r31.s64 = 0;
	// li r27,0
	r27.s64 = 0;
	// addi r26,r11,-4
	r26.s64 = ctx.r11.s64 + -4;
loc_82539ED8:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82539f58
	if (ctx.cr6.eq) goto loc_82539F58;
	// addi r11,r29,-1
	ctx.r11.s64 = r29.s64 + -1;
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// li r9,3
	ctx.r9.s64 = 3;
	// lwz r3,308(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// andc r11,r29,r11
	ctx.r11.u64 = r29.u64 & ~ctx.r11.u64;
	// clrlwi r6,r10,27
	ctx.r6.u64 = ctx.r10.u32 & 0x1F;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// subfic r11,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	ctx.r11.u64 = static_cast<uint64_t>(31) - ctx.r11.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// slw r10,r9,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// srw r9,r23,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (r23.u32 >> (ctx.r11.u8 & 0x3F));
	// andc r10,r27,r10
	ctx.r10.u64 = r27.u64 & ~ctx.r10.u64;
	// slw r11,r31,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (r31.u32 << (ctx.r11.u8 & 0x3F));
	// clrlwi r5,r9,30
	ctx.r5.u64 = ctx.r9.u32 & 0x3;
	// or r27,r10,r11
	r27.u64 = ctx.r10.u64 | ctx.r11.u64;
	// bl 0x8250acc8
	ctx.lr = 0x82539F24;
	sub_8250ACC8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// lwz r3,308(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82530ae0
	ctx.lr = 0x82539F40;
	sub_82530AE0(ctx, base);
	// addi r11,r29,-1
	ctx.r11.s64 = r29.s64 + -1;
	// stwu r3,4(r26)
	ea = 4 + r26.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	r26.u32 = ea;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// andc r11,r29,r11
	ctx.r11.u64 = r29.u64 & ~ctx.r11.u64;
	// subf r29,r11,r29
	r29.u64 = r29.u64 - ctx.r11.u64;
	// b 0x82539ed8
	goto loc_82539ED8;
loc_82539F58:
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r29,r11,-4
	r29.s64 = ctx.r11.s64 + -4;
loc_82539F68:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82539fe8
	if (ctx.cr6.eq) goto loc_82539FE8;
	// addi r11,r30,-1
	ctx.r11.s64 = r30.s64 + -1;
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// li r9,3
	ctx.r9.s64 = 3;
	// lwz r26,308(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// andc r11,r30,r11
	ctx.r11.u64 = r30.u64 & ~ctx.r11.u64;
	// clrlwi r6,r10,27
	ctx.r6.u64 = ctx.r10.u32 & 0x1F;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// subfic r11,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	ctx.r11.u64 = static_cast<uint64_t>(31) - ctx.r11.u64;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// slw r10,r9,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// srw r9,r22,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (r22.u32 >> (ctx.r11.u8 & 0x3F));
	// andc r10,r27,r10
	ctx.r10.u64 = r27.u64 & ~ctx.r10.u64;
	// slw r11,r31,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (r31.u32 << (ctx.r11.u8 & 0x3F));
	// clrlwi r5,r9,30
	ctx.r5.u64 = ctx.r9.u32 & 0x3;
	// or r27,r10,r11
	r27.u64 = ctx.r10.u64 | ctx.r11.u64;
	// bl 0x8250acc8
	ctx.lr = 0x82539FB8;
	sub_8250ACC8(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82530ae0
	ctx.lr = 0x82539FD0;
	sub_82530AE0(ctx, base);
	// addi r11,r30,-1
	ctx.r11.s64 = r30.s64 + -1;
	// stwu r3,4(r29)
	ea = 4 + r29.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	r29.u32 = ea;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// andc r11,r30,r11
	ctx.r11.u64 = r30.u64 & ~ctx.r11.u64;
	// subf r30,r11,r30
	r30.u64 = r30.u64 - ctx.r11.u64;
	// b 0x82539f68
	goto loc_82539F68;
loc_82539FE8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8253a230
	if (ctx.cr6.eq) goto loc_8253A230;
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(r31.u32, 4, ctx.xer);
	// bgt cr6,0x8253a230
	if (ctx.cr6.gt) goto loc_8253A230;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,308(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r30,-4(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r4,28(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 28);
	// bl 0x825bb9c8
	ctx.lr = 0x8253A01C;
	sub_825BB9C8(ctx, base);
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r10,r3,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// addi r6,r10,-36
	ctx.r6.s64 = ctx.r10.s64 + -36;
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// stw r7,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r7,r7,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r8,36(r7)
	REX_STORE_U32(ctx.r7.u32 + 36, ctx.r8.u32);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r6,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// beq cr6,0x8253a0ac
	if (ctx.cr6.eq) goto loc_8253A0AC;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r25,r3,40
	r25.s64 = ctx.r3.s64 + 40;
	// addi r26,r11,-4
	r26.s64 = ctx.r11.s64 + -4;
loc_8253A06C:
	// lwzu r29,4(r26)
	ea = 4 + r26.u32;
	r29.u64 = REX_LOAD_U32(ea);
	r26.u32 = ea;
	// lwz r3,308(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8250ab60
	ctx.lr = 0x8253A07C;
	sub_8250AB60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250ad28
	ctx.lr = 0x8253A088;
	sub_8250AD28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stwu r11,4(r25)
	ea = 4 + r25.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	r25.u32 = ea;
	// bl 0x8250aed8
	ctx.lr = 0x8253A098;
	sub_8250AED8(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// stw r11,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r11.u32);
	// bne 0x8253a06c
	if (!ctx.cr0.eq) goto loc_8253A06C;
loc_8253A0AC:
	// lwz r11,12(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8253a0c4
	goto loc_8253A0C4;
loc_8253A0BC:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
loc_8253A0C4:
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r28.u32, ctx.xer);
	// bne cr6,0x8253a0bc
	if (!ctx.cr6.eq) goto loc_8253A0BC;
	// lwz r10,8(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r31,308(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r11,8(r28)
	REX_STORE_U32(r28.u32 + 8, ctx.r11.u32);
	// stw r28,4(r30)
	REX_STORE_U32(r30.u32 + 4, r28.u32);
	// stw r30,12(r28)
	REX_STORE_U32(r28.u32 + 12, r30.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// rlwinm r11,r11,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// rlwinm r10,r11,22,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x6;
	// rlwinm r9,r11,24,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x6;
	// srw r10,r27,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r27.u32 >> (ctx.r10.u8 & 0x3F));
	// srw r9,r27,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r27.u32 >> (ctx.r9.u8 & 0x3F));
	// rlwimi r9,r10,2,28,29
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFF3);
	// rlwinm r10,r11,26,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x6;
	// clrlwi r9,r9,28
	ctx.r9.u64 = ctx.r9.u32 & 0xF;
	// srw r10,r27,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r27.u32 >> (ctx.r10.u8 & 0x3F));
	// rlwinm r8,r11,28,29,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x6;
	// rlwimi r10,r9,2,0,29
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r10.u64 & 0xFFFFFFFF00000003);
	// srw r9,r27,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (r27.u32 >> (ctx.r8.u8 & 0x3F));
	// rlwimi r9,r10,2,0,29
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r9.u64 & 0xFFFFFFFF00000003);
	// rlwinm r11,r11,0,27,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// rlwinm r10,r9,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
	// bl 0x82548eb8
	ctx.lr = 0x8253A13C;
	sub_82548EB8(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// bl 0x825335b8
	ctx.lr = 0x8253A154;
	sub_825335B8(ctx, base);
	// lwz r25,316(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// lwz r26,324(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// mr r27,r31
	r27.u64 = r31.u64;
	// b 0x8253a228
	goto loc_8253A228;
loc_8253A164:
	// lwz r11,12(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8253a17c
	goto loc_8253A17C;
loc_8253A174:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
loc_8253A17C:
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r28.u32, ctx.xer);
	// bne cr6,0x8253a174
	if (!ctx.cr6.eq) goto loc_8253A174;
	// lwz r10,8(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 8);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r25,4
	ctx.r11.s64 = r25.s64 + 4;
	// lwz r10,4(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 4);
	// stw r10,8(r28)
	REX_STORE_U32(r28.u32 + 8, ctx.r10.u32);
	// stw r28,4(r25)
	REX_STORE_U32(r25.u32 + 4, r28.u32);
	// stw r25,12(r28)
	REX_STORE_U32(r28.u32 + 12, r25.u32);
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// rlwinm r9,r10,22,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0x6;
	// rlwinm r8,r10,24,29,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x6;
	// srw r9,r23,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r23.u32 >> (ctx.r9.u8 & 0x3F));
	// srw r8,r23,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (r23.u32 >> (ctx.r8.u8 & 0x3F));
	// rlwimi r8,r9,2,28,29
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xC) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFF3);
	// rlwinm r9,r10,26,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x6;
	// clrlwi r8,r8,28
	ctx.r8.u64 = ctx.r8.u32 & 0xF;
	// srw r9,r23,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r23.u32 >> (ctx.r9.u8 & 0x3F));
	// rlwinm r7,r10,28,29,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x6;
	// rlwimi r9,r8,2,0,29
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r9.u64 & 0xFFFFFFFF00000003);
	// srw r8,r23,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x20 ? 0 : (r23.u32 >> (ctx.r7.u8 & 0x3F));
	// rlwimi r8,r9,2,0,29
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r8.u64 & 0xFFFFFFFF00000003);
	// rlwinm r10,r10,0,27,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// rlwinm r9,r8,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r10,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// b 0x8253a228
	goto loc_8253A228;
loc_8253A1E8:
	// rlwinm r11,r10,22,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0x6;
	// rlwinm r9,r10,24,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x6;
	// srw r11,r22,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (r22.u32 >> (ctx.r11.u8 & 0x3F));
	// srw r9,r22,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r22.u32 >> (ctx.r9.u8 & 0x3F));
	// rlwimi r9,r11,2,28,29
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xC) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFF3);
	// rlwinm r11,r10,26,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x6;
	// clrlwi r9,r9,28
	ctx.r9.u64 = ctx.r9.u32 & 0xF;
	// srw r11,r22,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (r22.u32 >> (ctx.r11.u8 & 0x3F));
	// rlwinm r8,r10,28,29,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x6;
	// rlwimi r11,r9,2,0,29
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r11.u64 & 0xFFFFFFFF00000003);
	// srw r9,r22,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (r22.u32 >> (ctx.r8.u8 & 0x3F));
	// rlwimi r9,r11,2,0,29
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r9.u64 & 0xFFFFFFFF00000003);
	// rlwinm r11,r10,0,27,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// rlwinm r10,r9,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
loc_8253A228:
	// lwz r28,88(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// b 0x82539dfc
	goto loc_82539DFC;
loc_8253A230:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// lwz r3,308(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// bl 0x824e4368
	ctx.lr = 0x8253A23C;
	sub_824E4368(ctx, base);
loc_8253A23C:
	// lwz r10,976(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 976);
	// addi r11,r27,972
	ctx.r11.s64 = r27.s64 + 972;
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r10,0(r24)
	REX_STORE_U32(r24.u32 + 0, ctx.r10.u32);
	// stw r24,976(r27)
	REX_STORE_U32(r27.u32 + 976, r24.u32);
	// lbz r11,-1(r18)
	ctx.r11.u64 = REX_LOAD_U8(r18.u32 + -1);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x8253a2c0
	if (ctx.cr6.eq) goto loc_8253A2C0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r14
	ctx.r6.u64 = r14.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82534f50
	ctx.lr = 0x8253A280;
	sub_82534F50(ctx, base);
	// addi r11,r25,4
	ctx.r11.s64 = r25.s64 + 4;
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
loc_8253A288:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8253a2c0
	if (ctx.cr6.eq) goto loc_8253A2C0;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8253a2b8
	if (ctx.cr6.eq) goto loc_8253A2B8;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r10,r10,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,14080
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14080, ctx.xer);
	// bne cr6,0x8253a2b8
	if (!ctx.cr6.eq) goto loc_8253A2B8;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r10,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8253a2c0
	if (!ctx.cr0.eq) goto loc_8253A2C0;
loc_8253A2B8:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8253a288
	goto loc_8253A288;
loc_8253A2C0:
	// li r21,0
	r21.s64 = 0;
loc_8253A2C4:
	// mr r26,r19
	r26.u64 = r19.u64;
	// stw r19,324(r1)
	REX_STORE_U32(ctx.r1.u32 + 324, r19.u32);
loc_8253A2CC:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// std r21,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, r21.u64);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// std r21,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, r21.u64);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8252f958
	ctx.lr = 0x8253A2F4;
	sub_8252F958(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82533760
	ctx.lr = 0x8253A314;
	sub_82533760(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bne cr6,0x8253a328
	if (!ctx.cr6.eq) goto loc_8253A328;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// bl 0x824e4368
	ctx.lr = 0x8253A328;
	sub_824E4368(ctx, base);
loc_8253A328:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x825bba68
	ctx.lr = 0x8253A330;
	sub_825BBA68(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// rlwimi r11,r17,14,15,17
	ctx.r11.u64 = (__builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 14) & 0x1C000) | (ctx.r11.u64 & 0xFFFFFFFFFFFE3FFF);
	// lwz r9,12(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r10,r10,0,16,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFF8FFFF;
	// rlwinm r11,r11,0,6,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFBFFFFFF;
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// rlwinm r9,r9,0,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFF0000;
	// rlwinm r11,r11,0,2,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lhz r11,14(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 14);
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// clrlwi. r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// beq 0x8253a3bc
	if (ctx.cr0.eq) goto loc_8253A3BC;
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(r16.u32, 0, ctx.xer);
	// beq cr6,0x8253a3bc
	if (ctx.cr6.eq) goto loc_8253A3BC;
	// mr r30,r21
	r30.u64 = r21.u64;
	// mr r31,r21
	r31.u64 = r21.u64;
	// mr r29,r16
	r29.u64 = r16.u64;
loc_8253A384:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// srw r11,r11,r31
	ctx.r11.u64 = r31.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (r31.u8 & 0x3F));
	// clrlwi r4,r11,30
	ctx.r4.u64 = ctx.r11.u32 & 0x3;
	// cmplw cr6,r4,r14
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, r14.u32, ctx.xer);
	// blt cr6,0x8253a3ac
	if (ctx.cr6.lt) goto loc_8253A3AC;
	// srw r11,r15,r30
	ctx.r11.u64 = r30.u8 & 0x20 ? 0 : (r15.u32 >> (r30.u8 & 0x3F));
	// clrlwi r6,r11,28
	ctx.r6.u64 = ctx.r11.u32 & 0xF;
	// li r5,15
	ctx.r5.s64 = 15;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x8254fb50
	ctx.lr = 0x8253A3AC;
	sub_8254FB50(ctx, base);
loc_8253A3AC:
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x8253a384
	if (!ctx.cr0.eq) goto loc_8253A384;
loc_8253A3BC:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// mr r20,r25
	r20.u64 = r25.u64;
	// bl 0x825bcf88
	ctx.lr = 0x8253A3CC;
	sub_825BCF88(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8253a3d8
	if (ctx.cr0.eq) goto loc_8253A3D8;
	// mr r20,r26
	r20.u64 = r26.u64;
loc_8253A3D8:
	// rlwinm r11,r20,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r10,r23,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// addi r8,r11,-36
	ctx.r8.s64 = ctx.r11.s64 + -36;
	// addi r7,r10,-36
	ctx.r7.s64 = ctx.r10.s64 + -36;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r28,0
	r28.s64 = 0;
	// subf r22,r26,r25
	r22.u64 = r25.u64 - r26.u64;
	// mr r27,r28
	r27.u64 = r28.u64;
	// addi r31,r26,44
	r31.s64 = r26.s64 + 44;
	// stw r6,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r6,r6,0,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r7,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r7.u32);
	// stw r8,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r10,16(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 16);
	// lwz r11,20(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 20);
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// clrlwi r10,r10,1
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	// stw r28,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, r28.u32);
	// stw r11,20(r23)
	REX_STORE_U32(r23.u32 + 20, ctx.r11.u32);
	// stw r10,16(r23)
	REX_STORE_U32(r23.u32 + 16, ctx.r10.u32);
loc_8253A440:
	// lwz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 8);
	// rlwinm r11,r11,13,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8253a550
	if (!ctx.cr6.lt) goto loc_8253A550;
	// add r11,r28,r31
	ctx.r11.u64 = r28.u64 + r31.u64;
	// lwzx r25,r28,r31
	r25.u64 = REX_LOAD_U32(r28.u32 + r31.u32);
	// lwzx r26,r11,r22
	r26.u64 = REX_LOAD_U32(ctx.r11.u32 + r22.u32);
	// lwz r4,12(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 12);
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8253a47c
	if (ctx.cr6.lt) goto loc_8253A47C;
	// cmplwi cr6,r11,102
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 102, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8253a480
	if (!ctx.cr6.gt) goto loc_8253A480;
loc_8253A47C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8253A480:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8253a494
	if (ctx.cr0.eq) goto loc_8253A494;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lwz r5,308(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// bl 0x8250adf0
	ctx.lr = 0x8253A494;
	sub_8250ADF0(ctx, base);
loc_8253A494:
	// lwz r4,12(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 12);
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8253a4b4
	if (ctx.cr6.lt) goto loc_8253A4B4;
	// cmplwi cr6,r11,102
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 102, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8253a4b8
	if (!ctx.cr6.gt) goto loc_8253A4B8;
loc_8253A4B4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8253A4B8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8253a4cc
	if (ctx.cr0.eq) goto loc_8253A4CC;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lwz r5,308(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// bl 0x8250adf0
	ctx.lr = 0x8253A4CC;
	sub_8250ADF0(ctx, base);
loc_8253A4CC:
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8253a53c
	if (ctx.cr6.eq) goto loc_8253A53C;
	// mr r30,r31
	r30.u64 = r31.u64;
loc_8253A4DC:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwzx r4,r22,r30
	ctx.r4.u64 = REX_LOAD_U32(r22.u32 + r30.u32);
	// bl 0x824f7010
	ctx.lr = 0x8253A4E8;
	sub_824F7010(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8253a504
	if (ctx.cr0.eq) goto loc_8253A504;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x824f7010
	ctx.lr = 0x8253A4FC;
	sub_824F7010(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8253a514
	if (!ctx.cr0.eq) goto loc_8253A514;
loc_8253A504:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(r29.u32, r27.u32, ctx.xer);
	// blt cr6,0x8253a4dc
	if (ctx.cr6.lt) goto loc_8253A4DC;
loc_8253A514:
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(r29.u32, r27.u32, ctx.xer);
	// bge cr6,0x8253a53c
	if (!ctx.cr6.lt) goto loc_8253A53C;
	// rlwinm r10,r28,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// addi r8,r29,1
	ctx.r8.s64 = r29.s64 + 1;
	// clrlwi r9,r28,27
	ctx.r9.u64 = r28.u32 & 0x1F;
	// slw r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwx r9,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
loc_8253A53C:
	// lwz r25,316(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// lwz r26,324(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// b 0x8253a440
	goto loc_8253A440;
loc_8253A550:
	// lwz r30,4(r25)
	r30.u64 = REX_LOAD_U32(r25.u32 + 4);
	// addi r11,r25,4
	ctx.r11.s64 = r25.s64 + 4;
	// lwz r29,308(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
loc_8253A55C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8253a5c0
	if (ctx.cr6.eq) goto loc_8253A5C0;
	// lwz r3,16(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8253a5b8
	if (ctx.cr6.eq) goto loc_8253A5B8;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8253a58c
	if (ctx.cr6.lt) goto loc_8253A58C;
	// cmplwi cr6,r11,102
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 102, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8253a590
	if (!ctx.cr6.gt) goto loc_8253A590;
loc_8253A58C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8253A590:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8253a5b8
	if (ctx.cr0.eq) goto loc_8253A5B8;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// bl 0x825bcf88
	ctx.lr = 0x8253A5A0;
	sub_825BCF88(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8253a5b8
	if (ctx.cr0.eq) goto loc_8253A5B8;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r3,16(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 16);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// bl 0x8250adf0
	ctx.lr = 0x8253A5B8;
	sub_8250ADF0(ctx, base);
loc_8253A5B8:
	// lwz r30,8(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 8);
	// b 0x8253a55c
	goto loc_8253A55C;
loc_8253A5C0:
	// lwz r30,4(r26)
	r30.u64 = REX_LOAD_U32(r26.u32 + 4);
	// addi r21,r26,4
	r21.s64 = r26.s64 + 4;
loc_8253A5C8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8253a62c
	if (ctx.cr6.eq) goto loc_8253A62C;
	// lwz r3,16(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8253a624
	if (ctx.cr6.eq) goto loc_8253A624;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8253a5f8
	if (ctx.cr6.lt) goto loc_8253A5F8;
	// cmplwi cr6,r11,102
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 102, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8253a5fc
	if (!ctx.cr6.gt) goto loc_8253A5FC;
loc_8253A5F8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8253A5FC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8253a624
	if (ctx.cr0.eq) goto loc_8253A624;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// bl 0x825bcf88
	ctx.lr = 0x8253A60C;
	sub_825BCF88(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8253a624
	if (ctx.cr0.eq) goto loc_8253A624;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r3,16(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 16);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// bl 0x8250adf0
	ctx.lr = 0x8253A624;
	sub_8250ADF0(ctx, base);
loc_8253A624:
	// lwz r30,8(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 8);
	// b 0x8253a5c8
	goto loc_8253A5C8;
loc_8253A62C:
	// lwz r19,324(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// li r26,0
	r26.s64 = 0;
	// lwz r17,316(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// li r24,0
	r24.s64 = 0;
	// subfic r28,r19,-41
	ctx.xer.ca = r19.u32 <= 4294967255;
	r28.u64 = static_cast<uint64_t>(-41) - r19.u64;
	// lwz r18,308(r1)
	r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// subf r25,r19,r23
	r25.u64 = r23.u64 - r19.u64;
	// subfic r27,r19,-44
	ctx.xer.ca = r19.u32 <= 4294967252;
	r27.u64 = static_cast<uint64_t>(-44) - r19.u64;
loc_8253A64C:
	// lwz r11,8(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 8);
	// rlwinm r11,r11,13,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(r24.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8253a778
	if (!ctx.cr6.lt) goto loc_8253A778;
	// add r11,r31,r27
	ctx.r11.u64 = r31.u64 + r27.u64;
	// lwzx r30,r31,r22
	r30.u64 = REX_LOAD_U32(r31.u32 + r22.u32);
	// add r10,r31,r28
	ctx.r10.u64 = r31.u64 + r28.u64;
	// lwz r29,0(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r11,29,3,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// li r7,2
	ctx.r7.s64 = 2;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// slw r10,r7,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r10.u8 & 0x3F));
	// lwzx r9,r9,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// li r8,-1
	ctx.r8.s64 = -1;
	// and r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ctx.r9.u64;
	// slw r9,r8,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r11.u8 & 0x3F));
	// and r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ctx.r9.u64;
	// srw. r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8253a6b4
	if (ctx.cr0.eq) goto loc_8253A6B4;
	// addi r11,r11,10
	ctx.r11.s64 = ctx.r11.s64 + 10;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r11,r23
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + r23.u32);
	// b 0x8253a708
	goto loc_8253A708;
loc_8253A6B4:
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// mr r8,r20
	ctx.r8.u64 = r20.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r19
	ctx.r6.u64 = r19.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x82532998
	ctx.lr = 0x8253A6D8;
	sub_82532998(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bne 0x8253a770
	if (!ctx.cr0.eq) goto loc_8253A770;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwz r8,28(r23)
	ctx.r8.u64 = REX_LOAD_U32(r23.u32 + 28);
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r19
	ctx.r6.u64 = r19.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// bl 0x825355f8
	ctx.lr = 0x8253A704;
	sub_825355F8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_8253A708:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x8250ad28
	ctx.lr = 0x8253A714;
	sub_8250AD28(ctx, base);
	// stwx r3,r31,r25
	REX_STORE_U32(r31.u32 + r25.u32, ctx.r3.u32);
	// lwz r4,12(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,125
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 125, ctx.xer);
	// beq cr6,0x8253a738
	if (ctx.cr6.eq) goto loc_8253A738;
	// cmplwi cr6,r11,124
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 124, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8253a73c
	if (!ctx.cr6.eq) goto loc_8253A73C;
loc_8253A738:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8253A73C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8253a764
	if (ctx.cr0.eq) goto loc_8253A764;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// clrlwi r7,r11,27
	ctx.r7.u64 = ctx.r11.u32 & 0x1F;
	// rlwinm r6,r11,27,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0xFF;
	// rlwinm r5,r11,7,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	// bl 0x8252dea8
	ctx.lr = 0x8253A760;
	sub_8252DEA8(ctx, base);
	// or r26,r3,r26
	r26.u64 = ctx.r3.u64 | r26.u64;
loc_8253A764:
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// b 0x8253a64c
	goto loc_8253A64C;
loc_8253A770:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// bl 0x824e4368
	ctx.lr = 0x8253A778;
	sub_824E4368(ctx, base);
loc_8253A778:
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x8252ffc8
	ctx.lr = 0x8253A788;
	sub_8252FFC8(ctx, base);
	// mr r30,r23
	r30.u64 = r23.u64;
loc_8253A78C:
	// lwz r31,0(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8253a7c8
	if (ctx.cr6.eq) goto loc_8253A7C8;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8253a7b4
	if (!ctx.cr0.eq) goto loc_8253A7B4;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x8250b470
	ctx.lr = 0x8253A7B4;
	sub_8250B470(ctx, base);
loc_8253A7B4:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bne cr6,0x8253a78c
	if (!ctx.cr6.eq) goto loc_8253A78C;
	// addi r30,r31,4
	r30.s64 = r31.s64 + 4;
	// b 0x8253a78c
	goto loc_8253A78C;
loc_8253A7C8:
	// addi r24,r23,4
	r24.s64 = r23.s64 + 4;
	// mr r30,r24
	r30.u64 = r24.u64;
loc_8253A7D0:
	// lwz r31,0(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8253a814
	if (ctx.cr6.eq) goto loc_8253A814;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8253a800
	if (ctx.cr6.eq) goto loc_8253A800;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8253a800
	if (!ctx.cr0.eq) goto loc_8253A800;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8250b470
	ctx.lr = 0x8253A800;
	sub_8250B470(ctx, base);
loc_8253A800:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bne cr6,0x8253a7d0
	if (!ctx.cr6.eq) goto loc_8253A7D0;
	// addi r30,r31,8
	r30.s64 = r31.s64 + 8;
	// b 0x8253a7d0
	goto loc_8253A7D0;
loc_8253A814:
	// mr r8,r20
	ctx.r8.u64 = r20.u64;
loc_8253A818:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8253a878
	if (ctx.cr6.eq) goto loc_8253A878;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r10,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8253a864
	if (!ctx.cr0.eq) goto loc_8253A864;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x8253a844
	goto loc_8253A844;
loc_8253A83C:
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
loc_8253A844:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8253a83c
	if (!ctx.cr6.eq) goto loc_8253A83C;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,0(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 0);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r11,0(r23)
	REX_STORE_U32(r23.u32 + 0, ctx.r11.u32);
	// stw r23,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, r23.u32);
loc_8253A864:
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8253a818
	if (!ctx.cr6.eq) goto loc_8253A818;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// b 0x8253a818
	goto loc_8253A818;
loc_8253A878:
	// addi r8,r17,4
	ctx.r8.s64 = r17.s64 + 4;
loc_8253A87C:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8253a8e0
	if (ctx.cr6.eq) goto loc_8253A8E0;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8253a8cc
	if (ctx.cr6.eq) goto loc_8253A8CC;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x8253a8ac
	goto loc_8253A8AC;
loc_8253A8A4:
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
loc_8253A8AC:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8253a8a4
	if (!ctx.cr6.eq) goto loc_8253A8A4;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,0(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 0);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r11,0(r24)
	REX_STORE_U32(r24.u32 + 0, ctx.r11.u32);
	// stw r23,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r23.u32);
loc_8253A8CC:
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8253a87c
	if (!ctx.cr6.eq) goto loc_8253A87C;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// b 0x8253a87c
	goto loc_8253A87C;
loc_8253A8E0:
	// lwz r29,80(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r30,r21
	r30.u64 = r21.u64;
loc_8253A8E8:
	// lwz r31,0(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8253a9a0
	if (ctx.cr6.eq) goto loc_8253A9A0;
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8253a98c
	if (ctx.cr6.eq) goto loc_8253A98C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm. r10,r11,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8253a954
	if (ctx.cr0.eq) goto loc_8253A954;
	// rlwinm r10,r11,22,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x6;
	// rlwinm r9,r11,24,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x6;
	// srw r10,r29,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r29.u32 >> (ctx.r10.u8 & 0x3F));
	// srw r9,r29,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r29.u32 >> (ctx.r9.u8 & 0x3F));
	// rlwimi r9,r10,2,28,29
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFF3);
	// rlwinm r8,r11,26,29,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x6;
	// rlwinm r10,r11,28,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x6;
	// clrlwi r9,r9,28
	ctx.r9.u64 = ctx.r9.u32 & 0xF;
	// srw r8,r29,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (r29.u32 >> (ctx.r8.u8 & 0x3F));
	// srw r10,r29,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r29.u32 >> (ctx.r10.u8 & 0x3F));
	// rlwimi r8,r9,2,0,29
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r8.u64 & 0xFFFFFFFF00000003);
	// rlwinm r11,r11,0,27,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// rlwimi r10,r8,2,0,29
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r10.u64 & 0xFFFFFFFF00000003);
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x825335b8
	ctx.lr = 0x8253A954;
	sub_825335B8(ctx, base);
loc_8253A954:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8253a96c
	goto loc_8253A96C;
loc_8253A964:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
loc_8253A96C:
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, ctx.xer);
	// bne cr6,0x8253a964
	if (!ctx.cr6.eq) goto loc_8253A964;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stw r31,0(r24)
	REX_STORE_U32(r24.u32 + 0, r31.u32);
	// stw r23,12(r31)
	REX_STORE_U32(r31.u32 + 12, r23.u32);
loc_8253A98C:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bne cr6,0x8253a8e8
	if (!ctx.cr6.eq) goto loc_8253A8E8;
	// addi r30,r31,8
	r30.s64 = r31.s64 + 8;
	// b 0x8253a8e8
	goto loc_8253A8E8;
loc_8253A9A0:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x8250aed8
	ctx.lr = 0x8253A9A8;
	sub_8250AED8(ctx, base);
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 8);
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// stw r11,8(r23)
	REX_STORE_U32(r23.u32 + 8, ctx.r11.u32);
	// lwz r11,8(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 8);
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8253aa80
	if (ctx.cr0.eq) goto loc_8253AA80;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x82516b38
	ctx.lr = 0x8253A9CC;
	sub_82516B38(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x82516b38
	ctx.lr = 0x8253A9DC;
	sub_82516B38(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8253aa10
	if (ctx.cr6.eq) goto loc_8253AA10;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// lwz r6,88(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82519470
	ctx.lr = 0x8253AA10;
	sub_82519470(ctx, base);
loc_8253AA10:
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 8);
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// oris r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 8388608;
	// stw r11,8(r23)
	REX_STORE_U32(r23.u32 + 8, ctx.r11.u32);
	// bl 0x82516448
	ctx.lr = 0x8253AA24;
	sub_82516448(ctx, base);
	// sth r3,18(r23)
	REX_STORE_U16(r23.u32 + 18, ctx.r3.u16);
	// lwz r3,660(r18)
	ctx.r3.u64 = REX_LOAD_U32(r18.u32 + 660);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8253aa5c
	if (!ctx.cr0.eq) goto loc_8253AA5C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8253aa5c
	if (ctx.cr0.eq) goto loc_8253AA5C;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8253aa68
	if (!ctx.cr6.gt) goto loc_8253AA68;
loc_8253AA5C:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8251fe00
	ctx.lr = 0x8253AA64;
	sub_8251FE00(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8253AA68:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// stwx r23,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, r23.u32);
loc_8253AA80:
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x8252e758
	ctx.lr = 0x8253AA90;
	sub_8252E758(ctx, base);
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x8252e758
	ctx.lr = 0x8253AA9C;
	sub_8252E758(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x825335b8
	ctx.lr = 0x8253AAA8;
	sub_825335B8(ctx, base);
	// lwz r11,332(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8253aacc
	if (ctx.cr6.eq) goto loc_8253AACC;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// clrlwi. r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8253aacc
	if (ctx.cr0.eq) goto loc_8253AACC;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x82533650
	ctx.lr = 0x8253AACC;
	sub_82533650(ctx, base);
loc_8253AACC:
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x825c2510
	ctx.lr = 0x8253AAD8;
	sub_825C2510(ctx, base);
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x825c2510
	ctx.lr = 0x8253AAE4;
	sub_825C2510(ctx, base);
	// mr r25,r24
	r25.u64 = r24.u64;
loc_8253AAE8:
	// lwz r26,0(r25)
	r26.u64 = REX_LOAD_U32(r25.u32 + 0);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x8253ac78
	if (ctx.cr6.eq) goto loc_8253AC78;
	// lwz r27,16(r26)
	r27.u64 = REX_LOAD_U32(r26.u32 + 16);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8253ac64
	if (ctx.cr6.eq) goto loc_8253AC64;
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// rlwinm r10,r11,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,14080
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14080, ctx.xer);
	// bne cr6,0x8253ac64
	if (!ctx.cr6.eq) goto loc_8253AC64;
	// addi r7,r27,44
	ctx.r7.s64 = r27.s64 + 44;
	// rlwinm r6,r11,13,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// li r30,0
	r30.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_8253AB28:
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x8253ab6c
	if (!ctx.cr6.lt) goto loc_8253AB6C;
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r5,12(r8)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// cmplw cr6,r5,r23
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, r23.u32, ctx.xer);
	// bne cr6,0x8253ac64
	if (!ctx.cr6.eq) goto loc_8253AC64;
	// lwz r8,0(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// slw r5,r5,r11
	ctx.r5.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r11.u8 & 0x3F));
	// rlwinm r8,r8,27,30,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x3;
	// andc r5,r30,r5
	ctx.r5.u64 = r30.u64 & ~ctx.r5.u64;
	// slw r8,r8,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r11.u8 & 0x3F));
	// or r30,r8,r5
	r30.u64 = ctx.r8.u64 | ctx.r5.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// b 0x8253ab28
	goto loc_8253AB28;
loc_8253AB6C:
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// addi r28,r27,4
	r28.s64 = r27.s64 + 4;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r29,r11,31
	r29.u64 = ctx.r11.u32 & 0x1;
loc_8253AB7C:
	// lwz r31,0(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8253ac50
	if (ctx.cr6.eq) goto loc_8253AC50;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8253ac3c
	if (ctx.cr6.eq) goto loc_8253AC3C;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8253abac
	goto loc_8253ABAC;
loc_8253ABA4:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
loc_8253ABAC:
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, ctx.xer);
	// bne cr6,0x8253aba4
	if (!ctx.cr6.eq) goto loc_8253ABA4;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stw r31,0(r24)
	REX_STORE_U32(r24.u32 + 0, r31.u32);
	// stw r23,12(r31)
	REX_STORE_U32(r31.u32 + 12, r23.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm. r10,r11,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8253ac30
	if (ctx.cr0.eq) goto loc_8253AC30;
	// rlwinm r10,r11,22,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x6;
	// rlwinm r8,r11,24,29,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x6;
	// srw r10,r30,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r30.u32 >> (ctx.r10.u8 & 0x3F));
	// srw r8,r30,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (r30.u32 >> (ctx.r8.u8 & 0x3F));
	// rlwimi r8,r10,2,28,29
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFF3);
	// rlwinm r7,r11,26,29,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x6;
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// clrlwi r10,r8,28
	ctx.r10.u64 = ctx.r8.u32 & 0xF;
	// rlwinm r11,r11,28,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x6;
	// srw r8,r30,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x20 ? 0 : (r30.u32 >> (ctx.r7.u8 & 0x3F));
	// srw r11,r30,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (r30.u32 >> (ctx.r11.u8 & 0x3F));
	// rlwimi r8,r10,2,0,29
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r8.u64 & 0xFFFFFFFF00000003);
	// rlwinm r10,r9,0,27,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// rlwimi r11,r8,2,0,29
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r11.u64 & 0xFFFFFFFF00000003);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x8253ac30
	if (ctx.cr6.eq) goto loc_8253AC30;
	// clrlwi r10,r29,27
	ctx.r10.u64 = r29.u32 & 0x1F;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_8253AC30:
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x825335b8
	ctx.lr = 0x8253AC3C;
	sub_825335B8(ctx, base);
loc_8253AC3C:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bne cr6,0x8253ab7c
	if (!ctx.cr6.eq) goto loc_8253AB7C;
	// addi r28,r31,8
	r28.s64 = r31.s64 + 8;
	// b 0x8253ab7c
	goto loc_8253AB7C;
loc_8253AC50:
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,652(r18)
	ctx.r5.u64 = REX_LOAD_U32(r18.u32 + 652);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x825c2288
	ctx.lr = 0x8253AC64;
	sub_825C2288(ctx, base);
loc_8253AC64:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r26.u32, ctx.xer);
	// bne cr6,0x8253aae8
	if (!ctx.cr6.eq) goto loc_8253AAE8;
	// addi r25,r26,8
	r25.s64 = r26.s64 + 8;
	// b 0x8253aae8
	goto loc_8253AAE8;
loc_8253AC78:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
loc_8253AC7C:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_825DE5F8) {
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
	// bl 0x82600ba8
	ctx.lr = 0x825DE618;
	sub_82600BA8(ctx, base);
	// lbz r11,2144(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 2144);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825de690
	if (ctx.cr0.eq) goto loc_825DE690;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lbz r11,2028(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 2028);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825de63c
	if (ctx.cr0.eq) goto loc_825DE63C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825da550
	ctx.lr = 0x825DE63C;
	sub_825DA550(ctx, base);
loc_825DE63C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825dbe80
	ctx.lr = 0x825DE644;
	sub_825DBE80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825dbf80
	ctx.lr = 0x825DE64C;
	sub_825DBF80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d9780
	ctx.lr = 0x825DE654;
	sub_825D9780(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d9a98
	ctx.lr = 0x825DE65C;
	sub_825D9A98(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r11,2136(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 2136);
	// rlwinm. r11,r11,17,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825de674
	if (ctx.cr0.eq) goto loc_825DE674;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825ddd50
	ctx.lr = 0x825DE674;
	sub_825DDD50(ctx, base);
loc_825DE674:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,1404(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1404);
	// stw r11,2088(r31)
	REX_STORE_U32(r31.u32 + 2088, ctx.r11.u32);
	// bl 0x825d9c90
	ctx.lr = 0x825DE68C;
	sub_825D9C90(ctx, base);
	// b 0x825de6ec
	goto loc_825DE6EC;
loc_825DE690:
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825de6cc
	if (!ctx.cr6.eq) goto loc_825DE6CC;
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825de6cc
	if (!ctx.cr6.eq) goto loc_825DE6CC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r6,r11,9792
	ctx.r6.s64 = ctx.r11.s64 + 9792;
	// addi r5,r10,9880
	ctx.r5.s64 = ctx.r10.s64 + 9880;
	// addi r4,r9,22852
	ctx.r4.s64 = ctx.r9.s64 + 22852;
	// li r7,532
	ctx.r7.s64 = 532;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825DE6CC;
	sub_824EA978(ctx, base);
loc_825DE6CC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825db778
	ctx.lr = 0x825DE6D4;
	sub_825DB778(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825de538
	ctx.lr = 0x825DE6DC;
	sub_825DE538(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d92b0
	ctx.lr = 0x825DE6E4;
	sub_825D92B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825ddbc0
	ctx.lr = 0x825DE6EC;
	sub_825DDBC0(ctx, base);
loc_825DE6EC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825fe5b8
	ctx.lr = 0x825DE6F4;
	sub_825FE5B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d7de0
	ctx.lr = 0x825DE6FC;
	sub_825D7DE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82607160
	ctx.lr = 0x825DE704;
	sub_82607160(ctx, base);
	// lwz r5,2156(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 2156);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x825de720
	if (ctx.cr6.eq) goto loc_825DE720;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r4,r11,10832
	ctx.r4.s64 = ctx.r11.s64 + 10832;
	// bl 0x82130e88
	ctx.lr = 0x825DE720;
	sub_82130E88(ctx, base);
loc_825DE720:
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

DEFINE_REX_FUNC(sub_825E75F0) {
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
	// bl 0x826a1c98
	ctx.lr = 0x825E75F8;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// std r5,272(r1)
	REX_STORE_U64(ctx.r1.u32 + 272, ctx.r5.u64);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r29,r11,22852
	r29.s64 = ctx.r11.s64 + 22852;
	// std r6,280(r1)
	REX_STORE_U64(ctx.r1.u32 + 280, ctx.r6.u64);
	// std r7,288(r1)
	REX_STORE_U64(ctx.r1.u32 + 288, ctx.r7.u64);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// std r8,296(r1)
	REX_STORE_U64(ctx.r1.u32 + 296, ctx.r8.u64);
	// lbz r11,1393(r9)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + 1393);
	// addi r28,r10,13848
	r28.s64 = ctx.r10.s64 + 13848;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825e7650
	if (ctx.cr0.eq) goto loc_825E7650;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r11,13968
	ctx.r5.s64 = ctx.r11.s64 + 13968;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,343
	ctx.r7.s64 = 343;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825E7650;
	sub_824EA978(ctx, base);
loc_825E7650:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// ble cr6,0x825e7660
	if (!ctx.cr6.gt) goto loc_825E7660;
	// cmpwi cr6,r25,5
	ctx.cr6.compare<int32_t>(r25.s32, 5, ctx.xer);
	// blt cr6,0x825e767c
	if (ctx.cr6.lt) goto loc_825E767C;
loc_825E7660:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r11,13780
	ctx.r5.s64 = ctx.r11.s64 + 13780;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,346
	ctx.r7.s64 = 346;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825E767C;
	sub_824EA978(ctx, base);
loc_825E767C:
	// lwz r27,280(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// li r11,4
	ctx.r11.s64 = 4;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r26,0
	r26.s64 = 0;
	// lwz r8,12(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r5,16(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 16);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// lwz r4,272(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// li r9,928
	ctx.r9.s64 = 928;
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r30,276(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lwz r24,284(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// subfic r7,r7,896
	ctx.xer.ca = ctx.r7.u32 <= 896;
	ctx.r7.u64 = static_cast<uint64_t>(896) - ctx.r7.u64;
	// lwz r23,288(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// lwz r22,292(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r21,296(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// lwz r20,300(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// stw r27,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r27.u32);
	// li r27,1
	r27.s64 = 1;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stw r5,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// stw r4,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// stw r3,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// stw r24,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r24.u32);
	// stw r23,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r23.u32);
	// stw r22,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r22.u32);
	// stw r21,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, r21.u32);
	// stw r20,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r20.u32);
loc_825E7700:
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmpw cr6,r6,r25
	ctx.cr6.compare<int32_t>(ctx.r6.s32, r25.s32, ctx.xer);
	// bge cr6,0x825e7730
	if (!ctx.cr6.lt) goto loc_825E7730;
	// add r8,r7,r11
	ctx.r8.u64 = ctx.r7.u64 + ctx.r11.u64;
	// stwx r27,r9,r10
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r27.u32);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r5,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
	// stw r4,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
	// b 0x825e7734
	goto loc_825E7734;
loc_825E7730:
	// stwx r26,r9,r10
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r26.u32);
loc_825E7734:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x825e7700
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825E7700;
	// rlwinm r10,r25,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,28(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 28);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r30,-4(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825f79d0
	ctx.lr = 0x825E7760;
	sub_825F79D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825e7770
	if (ctx.cr0.eq) goto loc_825E7770;
	// lwz r31,28(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// b 0x825e7834
	goto loc_825E7834;
loc_825E7770:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stw r5,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r5.u32);
	// bl 0x825e6c50
	ctx.lr = 0x825E7788;
	sub_825E6C50(ctx, base);
	// lwz r11,40(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x825e77b8
	if (ctx.cr6.eq) goto loc_825E77B8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r11,13940
	ctx.r5.s64 = ctx.r11.s64 + 13940;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,376
	ctx.r7.s64 = 376;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825E77B8;
	sub_824EA978(ctx, base);
loc_825E77B8:
	// lwz r3,40(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x825e77d0
	if (!ctx.cr6.gt) goto loc_825E77D0;
	// lwz r3,8(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x825e77d8
	goto loc_825E77D8;
loc_825E77D0:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825f7718
	ctx.lr = 0x825E77D8;
	sub_825F7718(ctx, base);
loc_825E77D8:
	// li r8,4
	ctx.r8.s64 = 4;
	// lwz r4,0(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r11,r4,928
	ctx.r11.s64 = ctx.r4.s64 + 928;
	// addi r9,r4,896
	ctx.r9.s64 = ctx.r4.s64 + 896;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_825E77F4:
	// cmpw cr6,r7,r25
	ctx.cr6.compare<int32_t>(ctx.r7.s32, r25.s32, ctx.xer);
	// bge cr6,0x825e7814
	if (!ctx.cr6.lt) goto loc_825E7814;
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r6,4(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r27,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r27.u32);
	// stw r8,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stw r6,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r6.u32);
	// b 0x825e7818
	goto loc_825E7818;
loc_825E7814:
	// stw r26,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r26.u32);
loc_825E7818:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// bdnz 0x825e77f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825E77F4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825f7a90
	ctx.lr = 0x825E7834;
	sub_825F7A90(ctx, base);
loc_825E7834:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1ce8
	return;
}

DEFINE_REX_FUNC(sub_825F74B8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addi r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 + 12;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x825f74d0
	goto loc_825F74D0;
loc_825F74C8:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_825F74D0:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x825f74c8
	if (!ctx.cr6.eq) goto loc_825F74C8;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825F79D0) {
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
	ctx.lr = 0x825F79D8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825F79F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lwz r10,8(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 & ctx.r3.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r10
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x825f7a7c
	if (ctx.cr6.eq) goto loc_825F7A7C;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825f7a7c
	if (ctx.cr6.eq) goto loc_825F7A7C;
	// li r28,0
	r28.s64 = 0;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825f7a3c
	if (!ctx.cr6.lt) goto loc_825F7A3C;
loc_825F7A30:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + r28.u64;
	// b 0x825f7a48
	goto loc_825F7A48;
loc_825F7A3C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f7718
	ctx.lr = 0x825F7A48;
	sub_825F7718(ctx, base);
loc_825F7A48:
	// lwz r11,12(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 12);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r29,0(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825F7A60;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825f7a88
	if (ctx.cr0.eq) goto loc_825F7A88;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x825f7a30
	if (ctx.cr6.lt) goto loc_825F7A30;
loc_825F7A7C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825F7A80:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
loc_825F7A88:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x825f7a80
	goto loc_825F7A80;
}

DEFINE_REX_FUNC(sub_825F9DE0) {
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
	ctx.lr = 0x825F9DE8;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,30232
	ctx.r9.s64 = ctx.r10.s64 + 30232;
	// li r31,-1
	r31.s64 = -1;
	// stw r11,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// li r4,48
	ctx.r4.s64 = 48;
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// li r7,12
	ctx.r7.s64 = 12;
	// stw r31,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, r31.u32);
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// stw r4,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r4.u32);
	// addi r6,r3,152
	ctx.r6.s64 = ctx.r3.s64 + 152;
	// lwz r10,-8(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + -8);
	// addi r5,r3,158
	ctx.r5.s64 = ctx.r3.s64 + 158;
	// stw r10,128(r3)
	REX_STORE_U32(ctx.r3.u32 + 128, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r8,-16(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + -16);
	// stw r8,944(r3)
	REX_STORE_U32(ctx.r3.u32 + 944, ctx.r8.u32);
	// lis r8,-32127
	ctx.r8.s64 = -2105475072;
	// lwz r28,4(r9)
	r28.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// addi r30,r8,-21368
	r30.s64 = ctx.r8.s64 + -21368;
	// lwz r29,0(r9)
	r29.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// stb r11,152(r3)
	REX_STORE_U8(ctx.r3.u32 + 152, ctx.r11.u8);
	// stb r11,158(r3)
	REX_STORE_U8(ctx.r3.u32 + 158, ctx.r11.u8);
	// stw r11,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stwbrx r11,r3,r7
	REX_STORE_U32(ctx.r3.u32 + ctx.r7.u32, __builtin_bswap32(ctx.r11.u32));
	// stw r11,200(r3)
	REX_STORE_U32(ctx.r3.u32 + 200, ctx.r11.u32);
loc_825F9E58:
	// addi r8,r10,14
	ctx.r8.s64 = ctx.r10.s64 + 14;
	// addi r7,r10,20
	ctx.r7.s64 = ctx.r10.s64 + 20;
	// rlwinm r27,r8,2,0,29
	r27.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,32
	ctx.r8.s64 = ctx.r10.s64 + 32;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r27,r3
	REX_STORE_U32(r27.u32 + ctx.r3.u32, r31.u32);
	// stwx r4,r7,r3
	REX_STORE_U32(ctx.r7.u32 + ctx.r3.u32, ctx.r4.u32);
	// lwz r7,-16(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + -16);
	// stwx r7,r8,r3
	REX_STORE_U32(ctx.r8.u32 + ctx.r3.u32, ctx.r7.u32);
	// lwz r7,24(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// mulli r7,r7,52
	ctx.r7.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(52));
	// lwzx r7,r7,r30
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + r30.u32);
	// rlwinm. r7,r7,30,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x825f9ea8
	if (ctx.cr0.eq) goto loc_825F9EA8;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x825f9ea4
	if (!ctx.cr6.eq) goto loc_825F9EA4;
	// stw r28,132(r3)
	REX_STORE_U32(ctx.r3.u32 + 132, r28.u32);
	// b 0x825f9ea8
	goto loc_825F9EA8;
loc_825F9EA4:
	// stwx r29,r8,r3
	REX_STORE_U32(ctx.r8.u32 + ctx.r3.u32, r29.u32);
loc_825F9EA8:
	// addi r8,r10,7
	ctx.r8.s64 = ctx.r10.s64 + 7;
	// stbx r11,r6,r10
	REX_STORE_U8(ctx.r6.u32 + ctx.r10.u32, ctx.r11.u8);
	// addi r7,r10,50
	ctx.r7.s64 = ctx.r10.s64 + 50;
	// stbx r11,r5,r10
	REX_STORE_U8(ctx.r5.u32 + ctx.r10.u32, ctx.r11.u8);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// stwx r11,r8,r3
	REX_STORE_U32(ctx.r8.u32 + ctx.r3.u32, ctx.r11.u32);
	// stwx r11,r7,r3
	REX_STORE_U32(ctx.r7.u32 + ctx.r3.u32, ctx.r11.u32);
	// blt cr6,0x825f9e58
	if (ctx.cr6.lt) goto loc_825F9E58;
	// li r10,91
	ctx.r10.s64 = 91;
	// stb r11,164(r3)
	REX_STORE_U8(ctx.r3.u32 + 164, ctx.r11.u8);
	// addi r7,r3,141
	ctx.r7.s64 = ctx.r3.s64 + 141;
loc_825F9EE0:
	// li r8,4
	ctx.r8.s64 = 4;
	// stwx r11,r7,r10
	REX_STORE_U32(ctx.r7.u32 + ctx.r10.u32, ctx.r11.u32);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_825F9EF0:
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// li r6,3
	ctx.r6.s64 = 3;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwx r6,r8,r3
	REX_STORE_U32(ctx.r8.u32 + ctx.r3.u32, ctx.r6.u32);
	// bdnz 0x825f9ef0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825F9EF0;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r10,219
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 219, ctx.xer);
	// blt cr6,0x825f9ee0
	if (ctx.cr6.lt) goto loc_825F9EE0;
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r9,r3,924
	ctx.r9.s64 = ctx.r3.s64 + 924;
	// addi r10,r3,892
	ctx.r10.s64 = ctx.r3.s64 + 892;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_825F9F24:
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stwu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x825f9f24
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825F9F24;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82607F40) {
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
	ctx.lr = 0x82607F48;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// stw r4,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// li r28,0
	r28.s64 = 0;
	// stw r5,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// stw r28,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r28.u32);
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r28,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r28.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,20556(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20556);
	// li r4,20
	ctx.r4.s64 = 20;
	// stwx r10,r9,r11
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u32);
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// lwz r27,1456(r6)
	r27.u64 = REX_LOAD_U32(ctx.r6.u32 + 1456);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825b33a0
	ctx.lr = 0x82607F8C;
	sub_825B33A0(ctx, base);
	// addic. r30,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	r30.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// stw r27,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r27.u32);
	// beq 0x82607fa8
	if (ctx.cr0.eq) goto loc_82607FA8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,1456(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 1456);
	// bl 0x825d7a48
	ctx.lr = 0x82607FA4;
	sub_825D7A48(ctx, base);
	// b 0x82607fac
	goto loc_82607FAC;
loc_82607FA8:
	// mr r30,r28
	r30.u64 = r28.u64;
loc_82607FAC:
	// stw r30,16(r31)
	REX_STORE_U32(r31.u32 + 16, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8260B768) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x827938c4
	__imp__RtlTryEnterCriticalSection(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8260B930) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8260B938;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r29,r3,176
	r29.s64 = ctx.r3.s64 + 176;
	// lwz r3,176(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 176);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8260b9a8
	if (ctx.cr6.eq) goto loc_8260B9A8;
	// lwz r4,184(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 184);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8260b974
	if (ctx.cr6.eq) goto loc_8260B974;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8260B970;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,184(r31)
	REX_STORE_U32(r31.u32 + 184, r30.u32);
loc_8260B974:
	// lwz r4,180(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 180);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8260b998
	if (ctx.cr6.eq) goto loc_8260B998;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8260B994;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,180(r31)
	REX_STORE_U32(r31.u32 + 180, r30.u32);
loc_8260B998:
	// addi r3,r31,592
	ctx.r3.s64 = r31.s64 + 592;
	// bl 0x8260e258
	ctx.lr = 0x8260B9A0;
	sub_8260E258(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8260adc0
	ctx.lr = 0x8260B9A8;
	sub_8260ADC0(ctx, base);
loc_8260B9A8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8260DE98) {
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
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// clrlwi r6,r4,16
	ctx.r6.u64 = ctx.r4.u32 & 0xFFFF;
	// li r11,128
	ctx.r11.s64 = 128;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// sth r11,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r11.u16);
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,40
	ctx.r4.s64 = 40;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82615350
	ctx.lr = 0x8260DED8;
	sub_82615350(ctx, base);
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8260DF00;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
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

DEFINE_REX_FUNC(sub_8260FBC8) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x8261be48
	sub_8261BE48(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8260FC58) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x8260fbc0
	sub_8260FBC0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8260FCA8) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x8260ea30
	sub_8260EA30(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82610858) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82610860;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x826108b8
	if (!ctx.cr6.gt) goto loc_826108B8;
	// li r30,0
	r30.s64 = 0;
loc_8261087C:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// lwz r3,64(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826108a4
	if (ctx.cr6.eq) goto loc_826108A4;
	// bl 0x82794214
	ctx.lr = 0x82610894;
	__imp__XMAReleaseContext(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// stw r10,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
loc_826108A4:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,96
	r30.s64 = r30.s64 + 96;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8261087c
	if (ctx.cr6.lt) goto loc_8261087C;
loc_826108B8:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r11,r11,0,14,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFBFFFF;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82613700) {
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
	ctx.lr = 0x82613708;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,524(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 524);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82613724
	if (ctx.cr6.eq) goto loc_82613724;
	// lwz r29,0(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82613728
	goto loc_82613728;
loc_82613724:
	// li r29,0
	r29.s64 = 0;
loc_82613728:
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r10,12(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 12);
	// li r30,0
	r30.s64 = 0;
	// lwz r8,448(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 448);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stb r9,466(r31)
	REX_STORE_U8(r31.u32 + 466, ctx.r9.u8);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// addi r25,r11,-128
	r25.s64 = ctx.r11.s64 + -128;
	// ble cr6,0x826137c8
	if (!ctx.cr6.gt) goto loc_826137C8;
	// lwz r27,80(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r24,r25,23,9,31
	r24.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 23) & 0x7FFFFF;
	// lwz r28,80(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r26,r31,456
	r26.s64 = r31.s64 + 456;
loc_82613760:
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// lwz r4,4(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 4);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,8(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 8);
	// bl 0x82612c88
	ctx.lr = 0x82613774;
	sub_82612C88(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82613784
	if (ctx.cr0.eq) goto loc_82613784;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// rlwinm r27,r25,25,30,31
	r27.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 25) & 0x3;
loc_82613784:
	// stw r28,460(r31)
	REX_STORE_U32(r31.u32 + 460, r28.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// stb r27,464(r31)
	REX_STORE_U8(r31.u32 + 464, r27.u8);
	// lwz r4,4(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 4);
	// lwz r3,8(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 8);
	// bl 0x82612d68
	ctx.lr = 0x8261379C;
	sub_82612D68(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r3,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r3.u32);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// stb r11,465(r31)
	REX_STORE_U8(r31.u32 + 465, ctx.r11.u8);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,472(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 472);
	// bl 0x82610dd0
	ctx.lr = 0x826137B8;
	sub_82610DD0(ctx, base);
	// lwz r11,448(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 448);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82613760
	if (ctx.cr6.lt) goto loc_82613760;
loc_826137C8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_82617250) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r11,r3,20
	ctx.r11.s64 = ctx.r3.s64 + 20;
loc_82617254:
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
	// bne 0x82617254
	if (!ctx.cr0.eq) goto loc_82617254;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82618BB0) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// b 0x826188d0
	sub_826188D0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82618C88) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// b 0x8261aff0
	sub_8261AFF0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_826191B8) {
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
	// lwz r11,200(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 200);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82619254
	if (!ctx.cr6.eq) goto loc_82619254;
	// addi r9,r3,152
	ctx.r9.s64 = ctx.r3.s64 + 152;
loc_826191E4:
	// lwz r11,160(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 160);
	// xori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 ^ 1;
	// mulli r11,r11,24
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(24));
	// mulli r10,r10,24
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(24));
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// addi r11,r11,80
	ctx.r11.s64 = ctx.r11.s64 + 80;
	// addi r10,r10,80
	ctx.r10.s64 = ctx.r10.s64 + 80;
loc_82619204:
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
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82619228
	if (!ctx.cr6.eq) goto loc_82619228;
	// stwcx. r10,0,r9
	ea = ctx.r9.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x82619204
	if (!ctx.cr0.eq) goto loc_82619204;
	// b 0x82619230
	goto loc_82619230;
loc_82619228:
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
loc_82619230:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// lwsync 
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// bne cr6,0x82619248
	if (!ctx.cr6.eq) goto loc_82619248;
	// db16cyc 
	std::this_thread::yield();
	// b 0x826191e4
	goto loc_826191E4;
loc_82619248:
	// lwz r11,160(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 160);
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// stw r11,160(r31)
	REX_STORE_U32(r31.u32 + 160, ctx.r11.u32);
loc_82619254:
	// lwz r11,160(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 160);
	// addi r3,r30,12
	ctx.r3.s64 = r30.s64 + 12;
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// lwz r9,28(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 28);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// mulli r11,r11,24
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(24));
	// lwzx r4,r11,r31
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a1e70
	ctx.lr = 0x82619280;
	sub_826A1E70(ctx, base);
	// lwz r11,160(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 160);
	// li r10,0
	ctx.r10.s64 = 0;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// mulli r11,r11,24
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(24));
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// lfs f0,84(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 4, temp.u32);
	// lwz r11,160(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 160);
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// mulli r11,r11,24
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(24));
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// lwz r11,160(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 160);
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// mulli r11,r11,24
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(24));
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// lfs f0,88(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 8, temp.u32);
	// stw r10,200(r31)
	REX_STORE_U32(r31.u32 + 200, ctx.r10.u32);
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

DEFINE_REX_FUNC(sub_82627618) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82627620;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,12(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82627644;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82628788
	ctx.lr = 0x82627654;
	sub_82628788(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,20(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82627670;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82628E48) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82628E50;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,12(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82628E74;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82628218
	ctx.lr = 0x82628E88;
	sub_82628218(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,20(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82628EA4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8262ACF8) {
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
	// bl 0x826a1c9c
	ctx.lr = 0x8262AD00;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8262ad50
	if (ctx.cr6.eq) goto loc_8262AD50;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// subf r27,r7,r5
	r27.u64 = ctx.r5.u64 - ctx.r7.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
loc_8262AD24:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,1048(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1048);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8262ad44
	if (ctx.cr0.eq) goto loc_8262AD44;
	// lwzx r3,r27,r30
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + r30.u32);
	// bl 0x82629a98
	ctx.lr = 0x8262AD3C;
	sub_82629A98(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x82629a98
	ctx.lr = 0x8262AD44;
	sub_82629A98(ctx, base);
loc_8262AD44:
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// bne 0x8262ad24
	if (!ctx.cr0.eq) goto loc_8262AD24;
loc_8262AD50:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r26,0
	r26.s64 = 0;
	// li r21,1
	r21.s64 = 1;
	// mr r22,r26
	r22.u64 = r26.u64;
	// lwz r11,1048(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1048);
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x8262add4
	if (!ctx.cr6.eq) goto loc_8262ADD4;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// lis r4,8343
	ctx.r4.s64 = 546766848;
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lhz r29,2(r11)
	r29.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r27,2(r10)
	r27.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// mullw r11,r27,r29
	ctx.r11.s64 = int64_t(r27.s32) * int64_t(r29.s32);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823f02b8
	ctx.lr = 0x8262AD90;
	sub_823F02B8(ctx, base);
	// mr. r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stw r7,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r7.u32);
	// bne 0x8262ade4
	if (!ctx.cr0.eq) goto loc_8262ADE4;
	// lis r22,-32761
	r22.s64 = -2147024896;
	// ori r22,r22,14
	r22.u64 = r22.u64 | 14;
loc_8262ADA4:
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8262adbc
	if (ctx.cr6.eq) goto loc_8262ADBC;
	// lis r4,8343
	ctx.r4.s64 = 546766848;
	// bl 0x823f0350
	ctx.lr = 0x8262ADB8;
	sub_823F0350(ctx, base);
	// stw r26,12(r31)
	REX_STORE_U32(r31.u32 + 12, r26.u32);
loc_8262ADBC:
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r26,8(r31)
	REX_STORE_U32(r31.u32 + 8, r26.u32);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// stw r26,20(r31)
	REX_STORE_U32(r31.u32 + 20, r26.u32);
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// blt cr6,0x8262add8
	if (ctx.cr6.lt) goto loc_8262ADD8;
loc_8262ADD4:
	// stw r21,24(r31)
	REX_STORE_U32(r31.u32 + 24, r21.u32);
loc_8262ADD8:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cec
	return;
loc_8262ADE4:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// lhz r24,14(r11)
	r24.u64 = REX_LOAD_U16(ctx.r11.u32 + 14);
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// mr r23,r24
	r23.u64 = r24.u64;
	// cmplwi cr6,r10,65534
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65534, ctx.xer);
	// bne cr6,0x8262ae08
	if (!ctx.cr6.eq) goto loc_8262AE08;
	// lwz r9,20(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lhz r23,18(r11)
	r23.u64 = REX_LOAD_U16(ctx.r11.u32 + 18);
loc_8262AE08:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// lhz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r8,65534
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 65534, ctx.xer);
	// bne cr6,0x8262ae20
	if (!ctx.cr6.eq) goto loc_8262AE20;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
loc_8262AE20:
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r8,r11,-5916
	ctx.r8.s64 = ctx.r11.s64 + -5916;
	// bne cr6,0x8262ae54
	if (!ctx.cr6.eq) goto loc_8262AE54;
	// clrlwi r11,r29,16
	ctx.r11.u64 = r29.u32 & 0xFFFF;
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8262ae54
	if (ctx.cr6.lt) goto loc_8262AE54;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x8262ae54
	if (ctx.cr6.gt) goto loc_8262AE54;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r9,-4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
loc_8262AE54:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8262ae80
	if (!ctx.cr6.eq) goto loc_8262AE80;
	// clrlwi r11,r27,16
	ctx.r11.u64 = r27.u32 & 0xFFFF;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8262ae80
	if (ctx.cr6.lt) goto loc_8262AE80;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x8262ae80
	if (ctx.cr6.gt) goto loc_8262AE80;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r10,-4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
loc_8262AE80:
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8262a828
	ctx.lr = 0x8262AE94;
	sub_8262A828(ctx, base);
	// mr. r22,r3
	r22.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r22.s32, 0, ctx.xer);
	// blt 0x8262ada4
	if (ctx.cr0.lt) goto loc_8262ADA4;
	// li r30,4
	r30.s64 = 4;
	// stw r26,20(r31)
	REX_STORE_U32(r31.u32 + 20, r26.u32);
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(r29.u32, r27.u32, ctx.xer);
	// bne cr6,0x8262af2c
	if (!ctx.cr6.eq) goto loc_8262AF2C;
	// li r30,7
	r30.s64 = 7;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8262af2c
	if (ctx.cr6.eq) goto loc_8262AF2C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// lfs f0,3716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
loc_8262AEC8:
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8262af1c
	if (ctx.cr6.eq) goto loc_8262AF1C;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
loc_8262AEDC:
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// beq cr6,0x8262af00
	if (ctx.cr6.eq) goto loc_8262AF00;
	// lfsx f13,r7,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x8262af14
	if (ctx.cr6.eq) goto loc_8262AF14;
	// rlwinm r30,r30,0,0,29
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFC;
	// b 0x8262af14
	goto loc_8262AF14;
loc_8262AF00:
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f12,r7,r10
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// beq cr6,0x8262af14
	if (ctx.cr6.eq) goto loc_8262AF14;
	// rlwinm r30,r30,0,0,30
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
loc_8262AF14:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8262aedc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8262AEDC;
loc_8262AF1C:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// add r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 + r29.u64;
	// cmplw cr6,r8,r27
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, r27.u32, ctx.xer);
	// blt cr6,0x8262aec8
	if (ctx.cr6.lt) goto loc_8262AEC8;
loc_8262AF2C:
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8262af48
	if (ctx.cr0.eq) goto loc_8262AF48;
	// lis r4,8343
	ctx.r4.s64 = 546766848;
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x823f0350
	ctx.lr = 0x8262AF40;
	sub_823F0350(ctx, base);
	// stw r26,12(r31)
	REX_STORE_U32(r31.u32 + 12, r26.u32);
	// stw r21,20(r31)
	REX_STORE_U32(r31.u32 + 20, r21.u32);
loc_8262AF48:
	// lwz r3,0(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 0);
	// bl 0x82629a98
	ctx.lr = 0x8262AF50;
	sub_82629A98(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bne cr6,0x8262b01c
	if (!ctx.cr6.eq) goto loc_8262B01C;
	// clrlwi r11,r24,16
	ctx.r11.u64 = r24.u32 & 0xFFFF;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bne cr6,0x8262afb8
	if (!ctx.cr6.eq) goto loc_8262AFB8;
	// clrlwi r11,r23,16
	ctx.r11.u64 = r23.u32 & 0xFFFF;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bne cr6,0x8262af90
	if (!ctx.cr6.eq) goto loc_8262AF90;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x8262fff8
	ctx.lr = 0x8262AF88;
	sub_8262FFF8(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x8262b028
	goto loc_8262B028;
loc_8262AF90:
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bne cr6,0x8262afa8
	if (!ctx.cr6.eq) goto loc_8262AFA8;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x8262fff8
	ctx.lr = 0x8262AFA0;
	sub_8262FFF8(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x8262b028
	goto loc_8262B028;
loc_8262AFA8:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8262fff8
	ctx.lr = 0x8262AFB0;
	sub_8262FFF8(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x8262b028
	goto loc_8262B028;
loc_8262AFB8:
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bne cr6,0x8262afec
	if (!ctx.cr6.eq) goto loc_8262AFEC;
	// clrlwi r11,r23,16
	ctx.r11.u64 = r23.u32 & 0xFFFF;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bne cr6,0x8262afdc
	if (!ctx.cr6.eq) goto loc_8262AFDC;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x8262fff8
	ctx.lr = 0x8262AFD4;
	sub_8262FFF8(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x8262b028
	goto loc_8262B028;
loc_8262AFDC:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8262fff8
	ctx.lr = 0x8262AFE4;
	sub_8262FFF8(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x8262b028
	goto loc_8262B028;
loc_8262AFEC:
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bne cr6,0x8262b008
	if (!ctx.cr6.eq) goto loc_8262B008;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8262fff8
	ctx.lr = 0x8262AFFC;
	sub_8262FFF8(ctx, base);
	// stw r3,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// stw r21,16(r31)
	REX_STORE_U32(r31.u32 + 16, r21.u32);
	// b 0x8262add4
	goto loc_8262ADD4;
loc_8262B008:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8262fff8
	ctx.lr = 0x8262B010;
	sub_8262FFF8(ctx, base);
	// stw r3,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// stw r26,16(r31)
	REX_STORE_U32(r31.u32 + 16, r26.u32);
	// b 0x8262add4
	goto loc_8262ADD4;
loc_8262B01C:
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x8262fff8
	ctx.lr = 0x8262B024;
	sub_8262FFF8(ctx, base);
	// li r11,7
	ctx.r11.s64 = 7;
loc_8262B028:
	// stw r3,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// b 0x8262add4
	goto loc_8262ADD4;
}

DEFINE_REX_FUNC(sub_82642108) {
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
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r10,124(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 124);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r9,120(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// lwz r8,96(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r5,0(r9)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8264214C;
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

DEFINE_REX_FUNC(sub_82642CA8) {
	REX_FUNC_PROLOGUE();
	// li r10,2
	ctx.r10.s64 = 2;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
	// stw r10,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r10.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// stw r11,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r9,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
loc_82642CD4:
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// stw r8,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// bdnz 0x82642cd4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82642CD4;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82643D48) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82643D50;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82643d7c
	if (!ctx.cr6.eq) goto loc_82643D7C;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r28,532(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 532);
	// b 0x82643e08
	goto loc_82643E08;
loc_82643D7C:
	// lwz r11,184(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 184);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82643d9c
	if (!ctx.cr6.eq) goto loc_82643D9C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82643360
	ctx.lr = 0x82643D90;
	sub_82643360(ctx, base);
	// lwz r11,184(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 184);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82643de4
	if (ctx.cr6.eq) goto loc_82643DE4;
loc_82643D9C:
	// lwz r11,192(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 192);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// beq cr6,0x82643dbc
	if (ctx.cr6.eq) goto loc_82643DBC;
	// bl 0x826435b0
	ctx.lr = 0x82643DB8;
	sub_826435B0(ctx, base);
	// b 0x82643dc0
	goto loc_82643DC0;
loc_82643DBC:
	// bl 0x82643408
	ctx.lr = 0x82643DC0;
	sub_82643408(ctx, base);
loc_82643DC0:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x82643dd0
	if (!ctx.cr6.eq) goto loc_82643DD0;
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
loc_82643DD0:
	// add r30,r3,r11
	r30.u64 = ctx.r3.u64 + ctx.r11.u64;
	// subf. r31,r3,r31
	r31.u64 = r31.u64 - ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// bne 0x82643d7c
	if (!ctx.cr0.eq) goto loc_82643D7C;
	// b 0x82643e08
	goto loc_82643E08;
loc_82643DE4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x82643df8
	if (!ctx.cr6.eq) goto loc_82643DF8;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// lwz r30,532(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 532);
	// mr r28,r30
	r28.u64 = r30.u64;
loc_82643DF8:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r5,120(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 120);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826150b8
	ctx.lr = 0x82643E08;
	sub_826150B8(ctx, base);
loc_82643E08:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82642b50
	ctx.lr = 0x82643E10;
	sub_82642B50(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8264C468) {
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
	ctx.lr = 0x8264C470;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r28,r3,8
	r28.s64 = ctx.r3.s64 + 8;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r4,r10,-15776
	ctx.r4.s64 = ctx.r10.s64 + -15776;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8264C4A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x8264c530
	if (ctx.cr0.lt) goto loc_8264C530;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r5,r29,12
	ctx.r5.s64 = r29.s64 + 12;
	// addi r4,r10,-14148
	ctx.r4.s64 = ctx.r10.s64 + -14148;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8264C4C8;
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
	// and r30,r11,r3
	r30.u64 = ctx.r11.u64 & ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x8264c530
	if (ctx.cr6.lt) goto loc_8264C530;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8264C508;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8264c530
	if (ctx.cr0.lt) goto loc_8264C530;
	// lwz r31,80(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r29,100
	ctx.r3.s64 = r29.s64 + 100;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8264C524;
	sub_826A1E70(ctx, base);
	// lis r4,8343
	ctx.r4.s64 = 546766848;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f0350
	ctx.lr = 0x8264C530;
	sub_823F0350(ctx, base);
loc_8264C530:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8264E6D0) {
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
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x8264fb08
	ctx.lr = 0x8264E6EC;
	sub_8264FB08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8264EB28) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8264EB30;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,44
	ctx.r5.s64 = 44;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r29,0
	r29.s64 = 0;
	// bl 0x826a1e70
	ctx.lr = 0x8264EB48;
	sub_826A1E70(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r9,r30,44
	ctx.r9.s64 = r30.s64 + 44;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8264eb64
	if (ctx.cr0.eq) goto loc_8264EB64;
	// lis r29,-32768
	r29.s64 = -2147483648;
	// ori r29,r29,16389
	r29.u64 = r29.u64 | 16389;
	// b 0x8264ebe0
	goto loc_8264EBE0;
loc_8264EB64:
	// lhz r8,38(r31)
	ctx.r8.u64 = REX_LOAD_U16(r31.u32 + 38);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x8264eb78
	if (ctx.cr0.eq) goto loc_8264EB78;
	// stw r9,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r9.u32);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
loc_8264EB78:
	// lhz r10,40(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 40);
	// lwz r7,20(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 20);
	// rotlwi r11,r10,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// lhz r6,42(r31)
	ctx.r6.u64 = REX_LOAD_U16(r31.u32 + 42);
	// stw r9,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r9.u32);
	// subf r7,r11,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r11.u64;
	// lhz r5,26(r31)
	ctx.r5.u64 = REX_LOAD_U16(r31.u32 + 26);
	// mullw r10,r6,r10
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// lhz r6,24(r31)
	ctx.r6.u64 = REX_LOAD_U16(r31.u32 + 24);
	// lhz r4,32(r31)
	ctx.r4.u64 = REX_LOAD_U16(r31.u32 + 32);
	// subf r8,r8,r7
	ctx.r8.u64 = ctx.r7.u64 - ctx.r8.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// subf r9,r10,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r10.u64;
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r9,-44
	ctx.r10.s64 = ctx.r9.s64 + -44;
	// stw r11,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r11.u32);
	// mullw r9,r5,r6
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	// stw r10,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r10.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rotlwi r10,r4,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 1);
	// stw r11,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r11.u32);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r11.u32);
	// stw r10,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r10.u32);
loc_8264EBE0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82652540) {
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
	ctx.lr = 0x82652548;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,95
	ctx.r11.s64 = ctx.r4.s64 + 95;
	// li r28,0
	r28.s64 = 0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r28
	r30.u64 = r28.u64;
	// lwzx r31,r11,r3
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// lwz r11,396(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 396);
	// rlwinm. r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82652578
	if (ctx.cr0.eq) goto loc_82652578;
	// li r30,1
	r30.s64 = 1;
loc_82652578:
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82652588
	if (ctx.cr0.eq) goto loc_82652588;
	// clrlwi r10,r30,16
	ctx.r10.u64 = r30.u32 & 0xFFFF;
	// ori r30,r10,2
	r30.u64 = ctx.r10.u64 | 2;
loc_82652588:
	// rlwinm. r10,r11,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82652598
	if (ctx.cr0.eq) goto loc_82652598;
	// clrlwi r10,r30,16
	ctx.r10.u64 = r30.u32 & 0xFFFF;
	// ori r30,r10,4
	r30.u64 = ctx.r10.u64 | 4;
loc_82652598:
	// rlwinm r11,r11,0,10,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFF3FFFFF;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,396(r31)
	REX_STORE_U32(r31.u32 + 396, ctx.r11.u32);
	// li r4,252
	ctx.r4.s64 = 252;
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823ee6b8
	ctx.lr = 0x826525B4;
	sub_823EE6B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x826525c8
	if (!ctx.cr0.eq) goto loc_826525C8;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82652620
	if (!ctx.cr6.eq) goto loc_82652620;
loc_826525C8:
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,251
	ctx.r4.s64 = 251;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823ee6b8
	ctx.lr = 0x826525DC;
	sub_823EE6B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82652604
	if (!ctx.cr0.eq) goto loc_82652604;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82652634
	if (ctx.cr6.eq) goto loc_82652634;
	// lwz r11,396(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 396);
	// clrlwi r10,r30,16
	ctx.r10.u64 = r30.u32 & 0xFFFF;
	// oris r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 4194304;
	// ori r30,r10,16
	r30.u64 = ctx.r10.u64 | 16;
	// b 0x82652630
	goto loc_82652630;
loc_82652604:
	// cmplwi cr6,r3,1245
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1245, ctx.xer);
	// bne cr6,0x82652634
	if (!ctx.cr6.eq) goto loc_82652634;
	// lwz r11,28(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82652620
	if (ctx.cr6.eq) goto loc_82652620;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82652634
	if (!ctx.cr6.eq) goto loc_82652634;
loc_82652620:
	// lwz r11,396(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 396);
	// clrlwi r10,r30,16
	ctx.r10.u64 = r30.u32 & 0xFFFF;
	// oris r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 8388608;
	// ori r30,r10,8
	r30.u64 = ctx.r10.u64 | 8;
loc_82652630:
	// stw r11,396(r31)
	REX_STORE_U32(r31.u32 + 396, ctx.r11.u32);
loc_82652634:
	// lwz r11,396(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 396);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,235
	ctx.r4.s64 = 235;
	// rlwinm r11,r11,0,12,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFCFFFFF;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,396(r31)
	REX_STORE_U32(r31.u32 + 396, ctx.r11.u32);
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// bl 0x823ee6b8
	ctx.lr = 0x82652654;
	sub_823EE6B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82652674
	if (!ctx.cr0.eq) goto loc_82652674;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82652674
	if (ctx.cr6.eq) goto loc_82652674;
	// clrlwi r10,r30,16
	ctx.r10.u64 = r30.u32 & 0xFFFF;
	// ori r30,r10,32
	r30.u64 = ctx.r10.u64 | 32;
	// b 0x826526d4
	goto loc_826526D4;
loc_82652674:
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,234
	ctx.r4.s64 = 234;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823ee6b8
	ctx.lr = 0x82652688;
	sub_823EE6B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x826526b0
	if (!ctx.cr0.eq) goto loc_826526B0;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826526e0
	if (ctx.cr6.eq) goto loc_826526E0;
	// lwz r11,396(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 396);
	// clrlwi r10,r30,16
	ctx.r10.u64 = r30.u32 & 0xFFFF;
	// oris r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 1048576;
	// ori r30,r10,64
	r30.u64 = ctx.r10.u64 | 64;
	// b 0x826526dc
	goto loc_826526DC;
loc_826526B0:
	// cmplwi cr6,r3,1245
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1245, ctx.xer);
	// bne cr6,0x826526e0
	if (!ctx.cr6.eq) goto loc_826526E0;
	// lwz r11,28(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826526cc
	if (ctx.cr6.eq) goto loc_826526CC;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x826526e0
	if (!ctx.cr6.eq) goto loc_826526E0;
loc_826526CC:
	// clrlwi r10,r30,16
	ctx.r10.u64 = r30.u32 & 0xFFFF;
	// ori r30,r10,8
	r30.u64 = ctx.r10.u64 | 8;
loc_826526D4:
	// lwz r11,396(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 396);
	// oris r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 2097152;
loc_826526DC:
	// stw r11,396(r31)
	REX_STORE_U32(r31.u32 + 396, ctx.r11.u32);
loc_826526E0:
	// lwz r11,396(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 396);
	// rlwinm. r10,r11,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x826526f4
	if (ctx.cr0.eq) goto loc_826526F4;
	// clrlwi r10,r30,16
	ctx.r10.u64 = r30.u32 & 0xFFFF;
	// ori r30,r10,128
	r30.u64 = ctx.r10.u64 | 128;
loc_826526F4:
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82652704
	if (ctx.cr0.eq) goto loc_82652704;
	// clrlwi r11,r30,16
	ctx.r11.u64 = r30.u32 & 0xFFFF;
	// ori r30,r11,256
	r30.u64 = ctx.r11.u64 | 256;
loc_82652704:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8265ECE8) {
	REX_FUNC_PROLOGUE();
	// stw r4,88(r3)
	REX_STORE_U32(ctx.r3.u32 + 88, ctx.r4.u32);
	// stw r3,84(r4)
	REX_STORE_U32(ctx.r4.u32 + 84, ctx.r3.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8265EEE8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,100(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265ef08
	if (!ctx.cr6.eq) goto loc_8265EF08;
	// lwz r11,396(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 396);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8265ef08
	if (!ctx.cr0.eq) goto loc_8265EF08;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8265EF08:
	// lwz r11,396(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 396);
	// rlwinm r3,r11,17,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8265F958) {
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
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x8265f9a8
	if (ctx.cr6.eq) goto loc_8265F9A8;
	// stw r4,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// lwz r3,8(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x82654388
	ctx.lr = 0x8265F984;
	sub_82654388(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8265f9a8
	if (ctx.cr0.lt) goto loc_8265F9A8;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x826544b8
	ctx.lr = 0x8265F994;
	sub_826544B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8265f9a8
	if (ctx.cr0.lt) goto loc_8265F9A8;
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x826512a8
	ctx.lr = 0x8265F9A8;
	sub_826512A8(ctx, base);
loc_8265F9A8:
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

DEFINE_REX_FUNC(sub_826618C8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb4
	ctx.lr = 0x826618D0;
	// lwz r9,12(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r7,16(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// li r8,48
	ctx.r8.s64 = 48;
	// lwz r31,164(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 164);
	// li r6,3
	ctx.r6.s64 = 3;
	// clrlwi r30,r7,8
	r30.u64 = ctx.r7.u32 & 0xFFFFFF;
	// lwz r29,160(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 160);
	// rlwinm r7,r7,19,14,20
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 19) & 0x3F800;
	// lwz r28,200(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 200);
	// lwz r27,60(r9)
	r27.u64 = REX_LOAD_U32(ctx.r9.u32 + 60);
	// addi r10,r3,268
	ctx.r10.s64 = ctx.r3.s64 + 268;
	// stw r8,268(r11)
	REX_STORE_U32(ctx.r11.u32 + 268, ctx.r8.u32);
	// or r7,r7,r30
	ctx.r7.u64 = ctx.r7.u64 | r30.u64;
	// rlwinm r8,r27,25,0,6
	ctx.r8.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 25) & 0xFE000000;
	// stw r6,272(r11)
	REX_STORE_U32(ctx.r11.u32 + 272, ctx.r6.u32);
	// rlwinm r6,r28,18,0,13
	ctx.r6.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 18) & 0xFFFC0000;
	// stw r31,276(r11)
	REX_STORE_U32(ctx.r11.u32 + 276, r31.u32);
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stw r29,280(r11)
	REX_STORE_U32(ctx.r11.u32 + 280, r29.u32);
	// lwz r7,60(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 60);
	// li r3,0
	ctx.r3.s64 = 0;
	// or r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 | ctx.r8.u64;
	// stw r7,284(r11)
	REX_STORE_U32(ctx.r11.u32 + 284, ctx.r7.u32);
	// lwz r9,76(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 76);
	// stw r8,292(r11)
	REX_STORE_U32(ctx.r11.u32 + 292, ctx.r8.u32);
	// stw r9,288(r11)
	REX_STORE_U32(ctx.r11.u32 + 288, ctx.r9.u32);
	// lwz r9,20(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// stw r9,296(r11)
	REX_STORE_U32(ctx.r11.u32 + 296, ctx.r9.u32);
	// lwz r9,24(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// stw r9,300(r11)
	REX_STORE_U32(ctx.r11.u32 + 300, ctx.r9.u32);
	// lwz r9,28(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// stw r9,304(r11)
	REX_STORE_U32(ctx.r11.u32 + 304, ctx.r9.u32);
	// lwz r9,32(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 32);
	// stw r9,308(r11)
	REX_STORE_U32(ctx.r11.u32 + 308, ctx.r9.u32);
	// lwz r9,36(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 36);
	// stw r9,312(r11)
	REX_STORE_U32(ctx.r11.u32 + 312, ctx.r9.u32);
	// stw r10,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// lwz r10,428(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 428);
	// oris r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 2147483648;
	// stw r4,336(r11)
	REX_STORE_U32(ctx.r11.u32 + 336, ctx.r4.u32);
	// stw r10,428(r11)
	REX_STORE_U32(ctx.r11.u32 + 428, ctx.r10.u32);
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_826675A8) {
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
	// lwz r11,240(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 240);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r9,20(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r10,r3,240
	ctx.r10.s64 = ctx.r3.s64 + 240;
	// b 0x826675e8
	goto loc_826675E8;
loc_826675D4:
	// lwz r8,56(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x826675fc
	if (ctx.cr6.eq) goto loc_826675FC;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_826675E8:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x826675f8
	if (ctx.cr6.eq) goto loc_826675F8;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x826675d4
	if (!ctx.cr0.eq) goto loc_826675D4;
loc_826675F8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826675FC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82667640
	if (ctx.cr6.eq) goto loc_82667640;
loc_82667604:
	// mfmsr r10
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r10.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r11,0,r3
	ea = ctx.r3.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r3
	ea = ctx.r3.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x82667604
	if (!ctx.cr0.eq) goto loc_82667604;
	// stw r3,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r3.u32);
	// lwz r4,104(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 104);
	// bl 0x82664cf0
	ctx.lr = 0x8266762C;
	sub_82664CF0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// bl 0x826748e8
	ctx.lr = 0x8266763C;
	sub_826748E8(ctx, base);
	// b 0x82667658
	goto loc_82667658;
loc_82667640:
	// lis r5,-32646
	ctx.r5.s64 = -2139488256;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// ori r5,r5,4106
	ctx.r5.u64 = ctx.r5.u64 | 4106;
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// bl 0x826748e8
	ctx.lr = 0x82667654;
	sub_826748E8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82667658:
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

DEFINE_REX_FUNC(sub_8266DCC0) {
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
	// bl 0x826a1c98
	ctx.lr = 0x8266DCC8;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r21,r4
	r21.u64 = ctx.r4.u64;
	// li r20,0
	r20.s64 = 0;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r6,15
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 15, ctx.xer);
	// bge cr6,0x8266dcf0
	if (!ctx.cr6.lt) goto loc_8266DCF0;
loc_8266DCE4:
	// lis r30,-32646
	r30.s64 = -2139488256;
	// ori r30,r30,4106
	r30.u64 = r30.u64 | 4106;
	// b 0x8266e230
	goto loc_8266E230;
loc_8266DCF0:
	// lwz r22,1(r5)
	r22.u64 = REX_LOAD_U32(ctx.r5.u32 + 1);
	// addi r30,r6,-15
	r30.s64 = ctx.r6.s64 + -15;
	// addi r23,r5,15
	r23.s64 = ctx.r5.s64 + 15;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x8266e1cc
	if (ctx.cr6.eq) goto loc_8266E1CC;
	// lwz r11,60(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 60);
	// cmplw cr6,r22,r11
	ctx.cr6.compare<uint32_t>(r22.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8266e1cc
	if (ctx.cr6.eq) goto loc_8266E1CC;
	// lhz r26,9(r5)
	r26.u64 = REX_LOAD_U16(ctx.r5.u32 + 9);
	// lwz r27,5(r5)
	r27.u64 = REX_LOAD_U32(ctx.r5.u32 + 5);
	// rlwinm r11,r26,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 24) & 0xFFFFFF;
	// lhz r25,11(r5)
	r25.u64 = REX_LOAD_U16(ctx.r5.u32 + 11);
	// lhz r24,13(r5)
	r24.u64 = REX_LOAD_U16(ctx.r5.u32 + 13);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8266dce4
	if (!ctx.cr6.eq) goto loc_8266DCE4;
	// lbz r11,384(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 384);
	// rlwinm r10,r25,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 24) & 0xFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8266dce4
	if (!ctx.cr6.eq) goto loc_8266DCE4;
	// lwz r11,240(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 240);
	// addi r10,r28,240
	ctx.r10.s64 = r28.s64 + 240;
	// b 0x8266dd5c
	goto loc_8266DD5C;
loc_8266DD48:
	// lwz r9,56(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// addi r31,r11,-4
	r31.s64 = ctx.r11.s64 + -4;
	// cmplw cr6,r9,r22
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r22.u32, ctx.xer);
	// beq cr6,0x8266dd70
	if (ctx.cr6.eq) goto loc_8266DD70;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_8266DD5C:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8266dd6c
	if (ctx.cr6.eq) goto loc_8266DD6C;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8266dd48
	if (!ctx.cr0.eq) goto loc_8266DD48;
loc_8266DD6C:
	// li r31,0
	r31.s64 = 0;
loc_8266DD70:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8266dce4
	if (ctx.cr6.eq) goto loc_8266DCE4;
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8266dce4
	if (!ctx.cr6.eq) goto loc_8266DCE4;
	// lwz r11,236(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 236);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8266dce4
	if (!ctx.cr6.eq) goto loc_8266DCE4;
	// lwz r11,428(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 428);
	// rlwinm. r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8266defc
	if (ctx.cr0.eq) goto loc_8266DEFC;
	// lwz r11,292(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 292);
	// rlwinm. r10,r11,23,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8266defc
	if (ctx.cr0.eq) goto loc_8266DEFC;
	// lwz r10,236(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 236);
	// cmplw cr6,r10,r21
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r21.u32, ctx.xer);
	// bne cr6,0x8266dce4
	if (!ctx.cr6.eq) goto loc_8266DCE4;
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8266dce4
	if (ctx.cr0.eq) goto loc_8266DCE4;
	// rlwinm. r11,r11,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8266ddcc
	if (ctx.cr0.eq) goto loc_8266DDCC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82670d68
	ctx.lr = 0x8266DDCC;
	sub_82670D68(ctx, base);
loc_8266DDCC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8266de40
	if (ctx.cr6.eq) goto loc_8266DE40;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// li r3,257
	ctx.r3.s64 = 257;
	// bl 0x82663958
	ctx.lr = 0x8266DDE4;
	sub_82663958(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x8266ddf8
	if (!ctx.cr0.eq) goto loc_8266DDF8;
	// lis r30,-32761
	r30.s64 = -2147024896;
	// ori r30,r30,14
	r30.u64 = r30.u64 | 14;
	// b 0x8266e230
	goto loc_8266E230;
loc_8266DDF8:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82664cf0
	ctx.lr = 0x8266DE04;
	sub_82664CF0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82664c58
	ctx.lr = 0x8266DE10;
	sub_82664C58(ctx, base);
loc_8266DE10:
	// mfmsr r10
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r10.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r11,0,r30
	ea = r30.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r30
	ea = r30.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x8266de10
	if (!ctx.cr0.eq) goto loc_8266DE10;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8266de40
	if (!ctx.cr6.eq) goto loc_8266DE40;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 4);
	// bl 0x8265d850
	ctx.lr = 0x8266DE40;
	sub_8265D850(ctx, base);
loc_8266DE40:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r21,212
	ctx.r3.s64 = r21.s64 + 212;
	// bl 0x826706a8
	ctx.lr = 0x8266DE4C;
	sub_826706A8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x8266e230
	if (!ctx.cr0.eq) goto loc_8266E230;
	// lwz r11,184(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 184);
	// lwz r10,60(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 60);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,184(r31)
	REX_STORE_U32(r31.u32 + 184, ctx.r11.u32);
	// lwz r11,28(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 28);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8266de74
	if (!ctx.cr6.eq) goto loc_8266DE74;
	// stw r31,32(r28)
	REX_STORE_U32(r28.u32 + 32, r31.u32);
loc_8266DE74:
	// stw r27,64(r31)
	REX_STORE_U32(r31.u32 + 64, r27.u32);
	// sth r26,68(r31)
	REX_STORE_U16(r31.u32 + 68, r26.u16);
	// sth r25,70(r31)
	REX_STORE_U16(r31.u32 + 70, r25.u16);
	// lwz r11,180(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 180);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,180(r28)
	REX_STORE_U32(r28.u32 + 180, ctx.r11.u32);
	// lwz r11,292(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 292);
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,292(r31)
	REX_STORE_U32(r31.u32 + 292, ctx.r11.u32);
	// lwz r10,172(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 172);
	// lwz r11,220(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 220);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,220(r28)
	REX_STORE_U32(r28.u32 + 220, ctx.r11.u32);
	// bne cr6,0x8266e1c4
	if (!ctx.cr6.eq) goto loc_8266E1C4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8266decc
	if (!ctx.cr6.eq) goto loc_8266DECC;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8266bb58
	ctx.lr = 0x8266DEC0;
	sub_8266BB58(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x8266e230
	if (!ctx.cr0.eq) goto loc_8266E230;
	// b 0x8266e1c4
	goto loc_8266E1C4;
loc_8266DECC:
	// lwz r11,220(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 220);
	// lwz r10,176(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 176);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8266e1c4
	if (ctx.cr6.lt) goto loc_8266E1C4;
	// lwz r11,428(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 428);
	// rlwinm. r11,r11,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8266e1c4
	if (ctx.cr0.eq) goto loc_8266E1C4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82661f28
	ctx.lr = 0x8266DEF8;
	sub_82661F28(ctx, base);
	// b 0x8266e1c4
	goto loc_8266E1C4;
loc_8266DEFC:
	// addi r29,r21,212
	r29.s64 = r21.s64 + 212;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82670660
	ctx.lr = 0x8266DF0C;
	sub_82670660(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8266dce4
	if (!ctx.cr0.eq) goto loc_8266DCE4;
	// lwz r11,292(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 292);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8266dfbc
	if (ctx.cr0.eq) goto loc_8266DFBC;
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 64);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8266dce4
	if (!ctx.cr6.eq) goto loc_8266DCE4;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r28,8
	ctx.r3.s64 = r28.s64 + 8;
	// bl 0x82672760
	ctx.lr = 0x8266DF38;
	sub_82672760(ctx, base);
	// mr. r20,r3
	r20.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r20.s32, 0, ctx.xer);
	// beq 0x8266dce4
	if (ctx.cr0.eq) goto loc_8266DCE4;
	// sth r26,68(r31)
	REX_STORE_U16(r31.u32 + 68, r26.u16);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// sth r25,70(r31)
	REX_STORE_U16(r31.u32 + 70, r25.u16);
	// beq cr6,0x8266dfbc
	if (ctx.cr6.eq) goto loc_8266DFBC;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// li r3,257
	ctx.r3.s64 = 257;
	// bl 0x82663958
	ctx.lr = 0x8266DF60;
	sub_82663958(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x8266df74
	if (!ctx.cr0.eq) goto loc_8266DF74;
loc_8266DF68:
	// lis r30,-32761
	r30.s64 = -2147024896;
	// ori r30,r30,14
	r30.u64 = r30.u64 | 14;
	// b 0x8266e21c
	goto loc_8266E21C;
loc_8266DF74:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82664cf0
	ctx.lr = 0x8266DF80;
	sub_82664CF0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82664c58
	ctx.lr = 0x8266DF8C;
	sub_82664C58(ctx, base);
loc_8266DF8C:
	// mfmsr r10
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r10.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r11,0,r30
	ea = r30.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r30
	ea = r30.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x8266df8c
	if (!ctx.cr0.eq) goto loc_8266DF8C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8266dfbc
	if (!ctx.cr6.eq) goto loc_8266DFBC;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 4);
	// bl 0x8265d850
	ctx.lr = 0x8266DFBC;
	sub_8265D850(ctx, base);
loc_8266DFBC:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826706a8
	ctx.lr = 0x8266DFC8;
	sub_826706A8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x8266e21c
	if (!ctx.cr0.eq) goto loc_8266E21C;
	// lwz r11,184(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 184);
	// lhz r10,286(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 286);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// subf r10,r10,r24
	ctx.r10.u64 = r24.u64 - ctx.r10.u64;
	// stw r11,184(r31)
	REX_STORE_U32(r31.u32 + 184, ctx.r11.u32);
	// extsh. r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x8266e198
	if (!ctx.cr0.gt) goto loc_8266E198;
	// lwz r11,236(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 236);
	// sth r24,286(r31)
	REX_STORE_U16(r31.u32 + 286, r24.u16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8266e198
	if (!ctx.cr6.eq) goto loc_8266E198;
	// lwz r11,292(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 292);
	// rlwinm. r11,r11,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8266e198
	if (!ctx.cr0.eq) goto loc_8266E198;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// beq cr6,0x8266e034
	if (ctx.cr6.eq) goto loc_8266E034;
	// lis r10,4626
	ctx.r10.s64 = 303169536;
	// lwz r11,116(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 116);
	// ori r10,r10,4626
	ctx.r10.u64 = ctx.r10.u64 | 4626;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8266e034
	if (ctx.cr6.eq) goto loc_8266E034;
	// lis r10,13364
	ctx.r10.s64 = 875823104;
	// ori r10,r10,13364
	ctx.r10.u64 = ctx.r10.u64 | 13364;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8266e198
	if (!ctx.cr6.eq) goto loc_8266E198;
loc_8266E034:
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,18
	ctx.r3.s64 = 18;
	// bl 0x82675ee0
	ctx.lr = 0x8266E040;
	sub_82675EE0(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x8266df68
	if (ctx.cr0.eq) goto loc_8266DF68;
	// li r7,131
	ctx.r7.s64 = 131;
	// lwz r6,32(r29)
	ctx.r6.u64 = REX_LOAD_U32(r29.u32 + 32);
	// addi r5,r29,36
	ctx.r5.s64 = r29.s64 + 36;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826711d8
	ctx.lr = 0x8266E060;
	sub_826711D8(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826715f0
	ctx.lr = 0x8266E07C;
	sub_826715F0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r21,188
	ctx.r3.s64 = r21.s64 + 188;
	// bl 0x826706a8
	ctx.lr = 0x8266E088;
	sub_826706A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8266e09c
	if (!ctx.cr0.eq) goto loc_8266E09C;
	// lwz r11,176(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 176);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,176(r21)
	REX_STORE_U32(r21.u32 + 176, ctx.r11.u32);
loc_8266E09C:
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8266e1d4
	if (!ctx.cr6.eq) goto loc_8266E1D4;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82670e18
	ctx.lr = 0x8266E0B4;
	sub_82670E18(ctx, base);
	// addi r11,r29,68
	ctx.r11.s64 = r29.s64 + 68;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,356(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 356);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,356(r28)
	REX_STORE_U32(r28.u32 + 356, ctx.r11.u32);
	// stb r10,69(r29)
	REX_STORE_U8(r29.u32 + 69, ctx.r10.u8);
	// lhz r11,284(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 284);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r11,284(r31)
	REX_STORE_U16(r31.u32 + 284, ctx.r11.u16);
	// sth r11,70(r29)
	REX_STORE_U16(r29.u32 + 70, ctx.r11.u16);
	// stw r22,72(r29)
	REX_STORE_U32(r29.u32 + 72, r22.u32);
	// bl 0x82671558
	ctx.lr = 0x8266E0F0;
	sub_82671558(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x8266e1d4
	if (ctx.cr0.lt) goto loc_8266E1D4;
	// addi r11,r29,4
	ctx.r11.s64 = r29.s64 + 4;
loc_8266E0FC:
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
	// bne 0x8266e0fc
	if (!ctx.cr0.eq) goto loc_8266E0FC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8266e138
	if (!ctx.cr6.eq) goto loc_8266E138;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266E138;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8266E138:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8266b038
	ctx.lr = 0x8266E144;
	sub_8266B038(ctx, base);
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// beq cr6,0x8266e1c4
	if (ctx.cr6.eq) goto loc_8266E1C4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82661e78
	ctx.lr = 0x8266E158;
	sub_82661E78(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x8266e21c
	if (!ctx.cr0.eq) goto loc_8266E21C;
	// lwz r11,292(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 292);
	// rlwinm. r11,r11,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8266e174
	if (ctx.cr0.eq) goto loc_8266E174;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82670d68
	ctx.lr = 0x8266E174;
	sub_82670D68(ctx, base);
loc_8266E174:
	// lwz r11,172(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 172);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8266e1a0
	if (ctx.cr6.gt) goto loc_8266E1A0;
	// lwz r11,292(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 292);
	// rlwinm. r10,r11,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8266e1a0
	if (!ctx.cr0.eq) goto loc_8266E1A0;
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// stw r11,292(r31)
	REX_STORE_U32(r31.u32 + 292, ctx.r11.u32);
	// b 0x8266e1b8
	goto loc_8266E1B8;
loc_8266E198:
	// li r30,0
	r30.s64 = 0;
	// b 0x8266e21c
	goto loc_8266E21C;
loc_8266E1A0:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// addi r3,r28,8
	ctx.r3.s64 = r28.s64 + 8;
	// bl 0x826748e8
	ctx.lr = 0x8266E1B0;
	sub_826748E8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x8266e21c
	if (!ctx.cr0.eq) goto loc_8266E21C;
loc_8266E1B8:
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// addi r3,r28,8
	ctx.r3.s64 = r28.s64 + 8;
	// bl 0x82672c40
	ctx.lr = 0x8266E1C4;
	sub_82672C40(ctx, base);
loc_8266E1C4:
	// li r30,0
	r30.s64 = 0;
	// b 0x8266e230
	goto loc_8266E230;
loc_8266E1CC:
	// lis r30,-32646
	r30.s64 = -2139488256;
	// ori r30,r30,4106
	r30.u64 = r30.u64 | 4106;
loc_8266E1D4:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8266e21c
	if (ctx.cr6.eq) goto loc_8266E21C;
	// addi r11,r29,4
	ctx.r11.s64 = r29.s64 + 4;
loc_8266E1E0:
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
	// bne 0x8266e1e0
	if (!ctx.cr0.eq) goto loc_8266E1E0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8266e21c
	if (!ctx.cr6.eq) goto loc_8266E21C;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266E21C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8266E21C:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// beq cr6,0x8266e230
	if (ctx.cr6.eq) goto loc_8266E230;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// addi r3,r28,8
	ctx.r3.s64 = r28.s64 + 8;
	// bl 0x82672c40
	ctx.lr = 0x8266E230;
	sub_82672C40(ctx, base);
loc_8266E230:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x826a1ce8
	return;
}

DEFINE_REX_FUNC(sub_8268CFC0) {
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
	// addi r3,r3,52
	ctx.r3.s64 = ctx.r3.s64 + 52;
	// bl 0x82692630
	ctx.lr = 0x8268CFD4;
	sub_82692630(ctx, base);
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

DEFINE_REX_FUNC(sub_8268E1D0) {
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
	ctx.lr = 0x8268E1D8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-32761
	r28.s64 = -2147024896;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r30,0
	r30.s64 = 0;
	// ori r28,r28,87
	r28.u64 = r28.u64 | 87;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8268e238
	if (ctx.cr6.eq) goto loc_8268E238;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
loc_8268E1FC:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8268d968
	ctx.lr = 0x8268E208;
	sub_8268D968(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8268e238
	if (ctx.cr0.eq) goto loc_8268E238;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268E220;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// blt 0x8268e238
	if (ctx.cr0.lt) goto loc_8268E238;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(r30.u32, r29.u32, ctx.xer);
	// blt cr6,0x8268e1fc
	if (ctx.cr6.lt) goto loc_8268E1FC;
loc_8268E238:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_826927B8) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,-5952(r10)
	REX_STORE_U32(ctx.r10.u32 + -5952, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82692EF8) {
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
	// bl 0x826a1ca4
	ctx.lr = 0x82692F00;
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -88, f31.u64);
	// stwu r1,-3200(r1)
	ea = -3200 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// lwz r31,72(r7)
	r31.u64 = REX_LOAD_U32(ctx.r7.u32 + 72);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// mr r23,r9
	r23.u64 = ctx.r9.u64;
	// li r9,100
	ctx.r9.s64 = 100;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r6,r1,1536
	ctx.r6.s64 = ctx.r1.s64 + 1536;
	// addi r5,r1,512
	ctx.r5.s64 = ctx.r1.s64 + 512;
	// mr r25,r10
	r25.u64 = ctx.r10.u64;
	// addi r30,r27,8
	r30.s64 = r27.s64 + 8;
	// bl 0x826969d0
	ctx.lr = 0x82692F48;
	sub_826969D0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,8(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// li r9,100
	ctx.r9.s64 = 100;
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r7,r1,512
	ctx.r7.s64 = ctx.r1.s64 + 512;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,1536
	ctx.r4.s64 = ctx.r1.s64 + 1536;
	// lfs f0,19288(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 19288);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// fdivs f31,f0,f13
	f31.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x82696778
	ctx.lr = 0x82692F78;
	sub_82696778(ctx, base);
	// addi r26,r30,4
	r26.s64 = r30.s64 + 4;
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,100
	ctx.r10.s64 = 100;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r7,r1,1536
	ctx.r7.s64 = ctx.r1.s64 + 1536;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,512
	ctx.r4.s64 = ctx.r1.s64 + 512;
	// addi r3,r29,8
	ctx.r3.s64 = r29.s64 + 8;
	// bl 0x82695d70
	ctx.lr = 0x82692FA0;
	sub_82695D70(ctx, base);
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r1,512
	ctx.r4.s64 = ctx.r1.s64 + 512;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82692d30
	ctx.lr = 0x82692FB0;
	sub_82692D30(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// lhz r6,28(r31)
	ctx.r6.u64 = REX_LOAD_U16(r31.u32 + 28);
	// lfs f0,3704(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,3716(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3716);
	f31.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bne cr6,0x82692fd8
	if (!ctx.cr6.eq) goto loc_82692FD8;
	// extsh. r11,r6
	ctx.r11.s64 = ctx.r6.s16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826930d8
	if (ctx.cr0.eq) goto loc_826930D8;
loc_82692FD8:
	// li r11,256
	ctx.r11.s64 = 256;
	// lha r7,36(r31)
	ctx.r7.s64 = int16_t(REX_LOAD_U16(r31.u32 + 36));
	// fmr f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = f31.f64;
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f0,f31
	ctx.f0.f64 = f31.f64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82692FF4:
	// extsw r11,r8
	ctx.r11.s64 = ctx.r8.s32;
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f11,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fctiwz f11,f11
	ctx.f11.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f11,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f11.u64);
	// lhz r11,102(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 102);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// blt cr6,0x8269305c
	if (ctx.cr6.lt) goto loc_8269305C;
	// extsh. r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi cr6,r11,256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 256, ctx.xer);
	// blt 0x82693050
	if (ctx.cr0.lt) goto loc_82693050;
	// bge cr6,0x82693054
	if (!ctx.cr6.lt) goto loc_82693054;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,512
	ctx.r4.s64 = ctx.r1.s64 + 512;
	// addi r9,r1,1936
	ctx.r9.s64 = ctx.r1.s64 + 1936;
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lfsx f11,r5,r4
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + ctx.r4.u32);
	ctx.f11.f64 = double(temp.f32);
	// stfsx f11,r10,r9
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, temp.u32);
	// b 0x82693070
	goto loc_82693070;
loc_82693050:
	// blt cr6,0x8269305c
	if (ctx.cr6.lt) goto loc_8269305C;
loc_82693054:
	// lfs f11,1532(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 1532);
	ctx.f11.f64 = double(temp.f32);
	// b 0x82693064
	goto loc_82693064;
loc_8269305C:
	// addi r9,r1,512
	ctx.r9.s64 = ctx.r1.s64 + 512;
	// lfsx f11,r10,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	ctx.f11.f64 = double(temp.f32);
loc_82693064:
	// addi r11,r1,1936
	ctx.r11.s64 = ctx.r1.s64 + 1936;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f11,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
loc_82693070:
	// addi r9,r1,512
	ctx.r9.s64 = ctx.r1.s64 + 512;
	// lfs f11,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lfsx f11,r10,r9
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	ctx.f11.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// fadds f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// bdnz 0x82692ff4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82692FF4;
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r11,256
	ctx.r11.s64 = 256;
	// addi r10,r1,1932
	ctx.r10.s64 = ctx.r1.s64 + 1932;
	// lfs f0,18136(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 18136);
	ctx.f0.f64 = double(temp.f32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_826930AC:
	// lfs f13,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfsu f13,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x826930ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826930AC;
	// lis r11,-32119
	ctx.r11.s64 = -2104950784;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r1,1936
	ctx.r4.s64 = ctx.r1.s64 + 1936;
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// lwz r11,-5948(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -5948);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826930D8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826930D8:
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r6,r1,1536
	ctx.r6.s64 = ctx.r1.s64 + 1536;
	// addi r5,r27,16
	ctx.r5.s64 = r27.s64 + 16;
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// bl 0x82696320
	ctx.lr = 0x826930F0;
	sub_82696320(ctx, base);
	// addi r5,r27,20
	ctx.r5.s64 = r27.s64 + 20;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x826962d8
	ctx.lr = 0x82693100;
	sub_826962D8(ctx, base);
	// addi r6,r1,1936
	ctx.r6.s64 = ctx.r1.s64 + 1936;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r23,145
	ctx.r4.s64 = r23.s64 + 145;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82695338
	ctx.lr = 0x82693114;
	sub_82695338(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r6,r1,1936
	ctx.r6.s64 = ctx.r1.s64 + 1936;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,1936
	ctx.r3.s64 = ctx.r1.s64 + 1936;
	// lfs f1,3804(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3804);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82695680
	ctx.lr = 0x8269312C;
	sub_82695680(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,1936
	ctx.r3.s64 = ctx.r1.s64 + 1936;
	// bl 0x826958b8
	ctx.lr = 0x82693138;
	sub_826958B8(ctx, base);
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r1,1936
	ctx.r3.s64 = ctx.r1.s64 + 1936;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// bl 0x82696100
	ctx.lr = 0x82693150;
	sub_82696100(ctx, base);
	// lfs f5,52(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 52);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,48(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 48);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,0(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82695ca0
	ctx.lr = 0x82693168;
	sub_82695CA0(ctx, base);
	// stfs f1,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r26.u32 + 0, temp.u32);
	// addi r1,r1,3200
	ctx.r1.s64 = ctx.r1.s64 + 3200;
	// lfd f31,-88(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_826A1860) {
	REX_FUNC_PROLOGUE();
	// stfd f2,24(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 24, ctx.f2.u64);
	// lwz r11,24(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 24);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stfd f1,16(r1)
	REX_STORE_U64(ctx.r1.u32 + 16, ctx.f1.u64);
	// lwz r9,16(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 16);
	// lwz r8,20(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lfd f0,-3744(r10)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + -3744);
	// stfd f0,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// stw r8,-12(r1)
	REX_STORE_U32(ctx.r1.u32 + -12, ctx.r8.u32);
	// rlwimi r11,r9,0,1,31
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x7FFFFFFF) | (ctx.r11.u64 & 0xFFFFFFFF80000000);
	// stw r11,-16(r1)
	REX_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// lfd f1,-16(r1)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826A1D24) {
	REX_FUNC_PROLOGUE();
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// mr r12,r5
	ctx.r12.u64 = ctx.r5.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_826A23D0) {
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
	// bl 0x826a3a68
	ctx.lr = 0x826A23E0;
	sub_826A3A68(ctx, base);
	// lwz r3,144(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 144);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(__restfpr_17) {
	REX_FUNC_PROLOGUE();
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
	// lfd f17,-120(r12)
	ctx.fpscr.disableFlushMode();
	f17.u64 = REX_LOAD_U64(ctx.r12.u32 + -120);
	// lfd f18,-112(r12)
	f18.u64 = REX_LOAD_U64(ctx.r12.u32 + -112);
	// lfd f19,-104(r12)
	f19.u64 = REX_LOAD_U64(ctx.r12.u32 + -104);
	// lfd f20,-96(r12)
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

DEFINE_REX_FUNC(__savevmx_68) {
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

DEFINE_REX_FUNC(sub_826B3A58) {
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
	// oris r11,r3,544
	ctx.r11.u64 = ctx.r3.u64 | 35651584;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stfs f1,140(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lwz r9,140(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stw r8,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,2272(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 2272);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826b3ab0
	if (ctx.cr6.eq) goto loc_826B3AB0;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// li r3,67
	ctx.r3.s64 = 67;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826B3AB0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826B3AB0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826B6388) {
	REX_FUNC_PROLOGUE();
	// stw r4,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826B63B8) {
	REX_FUNC_PROLOGUE();
	// lwz r3,60(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826B6B00) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r11,r4,640
	ctx.r11.s64 = ctx.r4.s64 + 640;
loc_826B6B04:
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
	// bne 0x826b6b04
	if (!ctx.cr0.eq) goto loc_826B6B04;
	// lwz r11,48(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,52(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_826B99D8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_826BA3A8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x826BA3B0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r10,116(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826BA3D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// ld r9,296(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 296);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpdi cr6,r9,0
	ctx.cr6.compare<int64_t>(ctx.r9.s64, 0, ctx.xer);
	// bne cr6,0x826ba3e4
	if (!ctx.cr6.eq) goto loc_826BA3E4;
	// std r3,296(r31)
	REX_STORE_U64(r31.u32 + 296, ctx.r3.u64);
loc_826BA3E4:
	// ld r10,296(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 296);
	// lfd f0,288(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(r31.u32 + 288);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f12,340(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 340);
	ctx.f12.f64 = double(temp.f32);
	// subf r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	// extsw r8,r30
	ctx.r8.s64 = r30.s32;
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// li r3,0
	ctx.r3.s64 = 0;
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// frsp f8,f13
	ctx.f8.f64 = double(float(ctx.f13.f64));
	// fmadds f7,f9,f12,f8
	ctx.f7.f64 = double(float(std::fma(ctx.f9.f64, ctx.f12.f64, ctx.f8.f64)));
	// fctidz f6,f7
	ctx.f6.s64 = std::isnan(ctx.f7.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f7.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f6,288(r31)
	REX_STORE_U64(r31.u32 + 288, ctx.f6.u64);
	// std r11,296(r31)
	REX_STORE_U64(r31.u32 + 296, ctx.r11.u64);
	// ld r7,288(r31)
	ctx.r7.u64 = REX_LOAD_U64(r31.u32 + 288);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// subf r5,r6,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r6.u64;
	// stw r5,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r5.u32);
	// stw r5,312(r31)
	REX_STORE_U32(r31.u32 + 312, ctx.r5.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_826BF538) {
	REX_FUNC_PROLOGUE();
	// stw r4,284(r3)
	REX_STORE_U32(ctx.r3.u32 + 284, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826BF650) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r11,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,112(r3)
	REX_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
	// stw r11,116(r3)
	REX_STORE_U32(ctx.r3.u32 + 116, ctx.r11.u32);
	// stw r11,120(r3)
	REX_STORE_U32(ctx.r3.u32 + 120, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826C1708) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r10,r11,29792
	ctx.r10.s64 = ctx.r11.s64 + 29792;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x826c8ab0
	sub_826C8AB0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_826C17E0) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,364
	ctx.r3.s64 = ctx.r3.s64 + 364;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826C19A8) {
	REX_FUNC_PROLOGUE();
	// lwz r10,64(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// mulli r10,r10,60
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(60));
	// lwzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r8,60(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 60);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_826C2188) {
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
	ctx.lr = 0x826C21D0;
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

DEFINE_REX_FUNC(sub_826C60B8) {
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
	// bl 0x826bc110
	ctx.lr = 0x826C60D0;
	sub_826BC110(ctx, base);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,30352
	ctx.r9.s64 = ctx.r10.s64 + 30352;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r11.u32);
	// stw r9,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// stw r11,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r11.u32);
	// std r11,56(r31)
	REX_STORE_U64(r31.u32 + 56, ctx.r11.u64);
	// std r11,64(r31)
	REX_STORE_U64(r31.u32 + 64, ctx.r11.u64);
	// stw r8,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r8.u32);
	// std r11,72(r31)
	REX_STORE_U64(r31.u32 + 72, ctx.r11.u64);
	// std r11,80(r31)
	REX_STORE_U64(r31.u32 + 80, ctx.r11.u64);
	// stw r11,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_826C7ED8) {
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
	// lbz r4,16(r3)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r3.u32 + 16);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,72(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 72);
	// bl 0x826c6cf0
	ctx.lr = 0x826C7F04;
	sub_826C6CF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826c7f34
	if (ctx.cr6.lt) goto loc_826C7F34;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826C7F20;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826c7f34
	if (ctx.cr6.lt) goto loc_826C7F34;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x826c7c58
	ctx.lr = 0x826C7F34;
	sub_826C7C58(ctx, base);
loc_826C7F34:
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

DEFINE_REX_FUNC(sub_826CD388) {
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
	ctx.lr = 0x826CD390;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	r28.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r18,r4
	r18.u64 = ctx.r4.u64;
	// mr r19,r5
	r19.u64 = ctx.r5.u64;
	// li r16,2
	r16.s64 = 2;
	// mr r27,r28
	r27.u64 = r28.u64;
	// li r15,3
	r15.s64 = 3;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826cdc08
	if (ctx.cr6.eq) goto loc_826CDC08;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x826cdc08
	if (ctx.cr6.eq) goto loc_826CDC08;
	// lwz r31,0(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x826cdc08
	if (ctx.cr6.eq) goto loc_826CDC08;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// sth r28,0(r4)
	REX_STORE_U16(ctx.r4.u32 + 0, r28.u16);
	// beq cr6,0x826cd3dc
	if (ctx.cr6.eq) goto loc_826CD3DC;
	// sth r28,0(r5)
	REX_STORE_U16(ctx.r5.u32 + 0, r28.u16);
loc_826CD3DC:
	// lis r11,-32764
	ctx.r11.s64 = -2147221504;
	// li r25,32767
	r25.s64 = 32767;
	// li r22,5
	r22.s64 = 5;
	// li r20,1
	r20.s64 = 1;
	// ori r24,r11,4
	r24.u64 = ctx.r11.u64 | 4;
	// li r26,8
	r26.s64 = 8;
	// li r17,4
	r17.s64 = 4;
	// li r23,7
	r23.s64 = 7;
	// li r21,6
	r21.s64 = 6;
loc_826CD400:
	// lwz r11,32(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 32);
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bgt cr6,0x826cd400
	if (ctx.cr6.gt) goto loc_826CD400;
	// lis r12,-32147
	ctx.r12.s64 = -2106785792;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-11228
	ctx.r12.s64 = ctx.r12.s64 + -11228;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_826CD780;
	case 1:
		goto loc_826CD400;
	case 2:
		goto loc_826CD7A0;
	case 3:
		goto loc_826CD868;
	case 4:
		goto loc_826CD44C;
	case 5:
		goto loc_826CD510;
	case 6:
		goto loc_826CD5C4;
	case 7:
		goto loc_826CD604;
	case 8:
		goto loc_826CD648;
	case 9:
		goto loc_826CD70C;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_826CD44C:
	// lwz r11,216(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 216);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826cd4bc
	if (!ctx.cr6.eq) goto loc_826CD4BC;
	// lhz r11,580(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 580);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x826cd4a8
	if (!ctx.cr6.gt) goto loc_826CD4A8;
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// rlwinm r10,r28,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
loc_826CD470:
	// lwz r8,584(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 584);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// lwz r9,320(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 320);
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// lhzx r5,r10,r8
	ctx.r5.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r8.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// mulli r8,r4,1776
	ctx.r8.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(1776));
	// add r3,r8,r9
	ctx.r3.u64 = ctx.r8.u64 + ctx.r9.u64;
	// sth r25,112(r3)
	REX_STORE_U16(ctx.r3.u32 + 112, r25.u16);
	// lhz r9,580(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 580);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x826cd470
	if (ctx.cr6.lt) goto loc_826CD470;
loc_826CD4A8:
	// stw r22,32(r29)
	REX_STORE_U32(r29.u32 + 32, r22.u32);
	// stw r28,36(r29)
	REX_STORE_U32(r29.u32 + 36, r28.u32);
	// stw r28,40(r29)
	REX_STORE_U32(r29.u32 + 40, r28.u32);
	// sth r28,150(r29)
	REX_STORE_U16(r29.u32 + 150, r28.u16);
	// sth r28,152(r29)
	REX_STORE_U16(r29.u32 + 152, r28.u16);
loc_826CD4BC:
	// lhz r11,580(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 580);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x826cd50c
	if (!ctx.cr6.gt) goto loc_826CD50C;
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// rlwinm r10,r28,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
loc_826CD4D4:
	// lwz r8,584(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 584);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// lwz r9,320(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 320);
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// lhzx r5,r10,r8
	ctx.r5.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r8.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// mulli r8,r4,1776
	ctx.r8.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(1776));
	// add r3,r8,r9
	ctx.r3.u64 = ctx.r8.u64 + ctx.r9.u64;
	// sth r20,490(r3)
	REX_STORE_U16(ctx.r3.u32 + 490, r20.u16);
	// lhz r9,580(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 580);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x826cd4d4
	if (ctx.cr6.lt) goto loc_826CD4D4;
loc_826CD50C:
	// sth r20,730(r31)
	REX_STORE_U16(r31.u32 + 730, r20.u16);
loc_826CD510:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r10,176(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 176);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x826cd564
	if (!ctx.cr6.eq) goto loc_826CD564;
	// bl 0x826ebfd8
	ctx.lr = 0x826CD528;
	sub_826EBFD8(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_826CD52C:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// blt cr6,0x826cdc10
	if (ctx.cr6.lt) goto loc_826CDC10;
	// lwz r11,36(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 36);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x826cd5c4
	if (!ctx.cr6.eq) goto loc_826CD5C4;
	// lwz r11,216(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 216);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826cd5b8
	if (ctx.cr6.eq) goto loc_826CD5B8;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r10,176(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 176);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x826cd5ac
	if (!ctx.cr6.eq) goto loc_826CD5AC;
	// stw r23,32(r29)
	REX_STORE_U32(r29.u32 + 32, r23.u32);
	// b 0x826cd400
	goto loc_826CD400;
loc_826CD564:
	// lwz r11,504(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 504);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826CD570;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r24
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r24.u32, ctx.xer);
	// bne cr6,0x826cd52c
	if (!ctx.cr6.eq) goto loc_826CD52C;
	// addi r3,r29,224
	ctx.r3.s64 = r29.s64 + 224;
	// bl 0x82638888
	ctx.lr = 0x826CD584;
	sub_82638888(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x826cdc10
	if (ctx.cr6.eq) goto loc_826CDC10;
	// lwz r11,704(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 704);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826cdc10
	if (ctx.cr6.eq) goto loc_826CDC10;
	// stw r26,32(r29)
	REX_STORE_U32(r29.u32 + 32, r26.u32);
	// mr r27,r17
	r27.u64 = r17.u64;
	// stw r20,216(r29)
	REX_STORE_U32(r29.u32 + 216, r20.u32);
	// sth r28,16(r29)
	REX_STORE_U16(r29.u32 + 16, r28.u16);
	// b 0x826cd400
	goto loc_826CD400;
loc_826CD5AC:
	// lbz r11,144(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 144);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826cd5c0
	if (ctx.cr6.eq) goto loc_826CD5C0;
loc_826CD5B8:
	// stw r26,32(r29)
	REX_STORE_U32(r29.u32 + 32, r26.u32);
	// b 0x826cd400
	goto loc_826CD400;
loc_826CD5C0:
	// stw r21,32(r29)
	REX_STORE_U32(r29.u32 + 32, r21.u32);
loc_826CD5C4:
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x826cd600
	if (ctx.cr6.lt) goto loc_826CD600;
	// addi r30,r29,224
	r30.s64 = r29.s64 + 224;
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r28.u32);
loc_826CD5D8:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826e58b8
	ctx.lr = 0x826CD5E8;
	sub_826E58B8(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826cdc10
	if (ctx.cr6.lt) goto loc_826CDC10;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x826cd5d8
	if (!ctx.cr6.eq) goto loc_826CD5D8;
loc_826CD600:
	// stw r23,32(r29)
	REX_STORE_U32(r29.u32 + 32, r23.u32);
loc_826CD604:
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bgt cr6,0x826cd620
	if (ctx.cr6.gt) goto loc_826CD620;
	// lhz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 16);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// sth r10,16(r29)
	REX_STORE_U16(r29.u32 + 16, ctx.r10.u16);
	// b 0x826cd62c
	goto loc_826CD62C;
loc_826CD620:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826e5ba8
	ctx.lr = 0x826CD628;
	sub_826E5BA8(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_826CD62C:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// blt cr6,0x826cdc10
	if (ctx.cr6.lt) goto loc_826CDC10;
	// lwz r11,704(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 704);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826cd644
	if (ctx.cr6.eq) goto loc_826CD644;
	// sth r28,16(r29)
	REX_STORE_U16(r29.u32 + 16, r28.u16);
loc_826CD644:
	// stw r26,32(r29)
	REX_STORE_U32(r29.u32 + 32, r26.u32);
loc_826CD648:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(r19.u32, 0, ctx.xer);
	// bne cr6,0x826cd654
	if (!ctx.cr6.eq) goto loc_826CD654;
	// addi r19,r1,80
	r19.s64 = ctx.r1.s64 + 80;
loc_826CD654:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,176(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 176);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x826cd68c
	if (!ctx.cr6.eq) goto loc_826CD68C;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r7,708(r29)
	ctx.r7.u64 = REX_LOAD_U32(r29.u32 + 708);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// bl 0x826e1550
	ctx.lr = 0x826CD67C;
	sub_826E1550(ctx, base);
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(r19.u32, 0, ctx.xer);
	// beq cr6,0x826cd690
	if (ctx.cr6.eq) goto loc_826CD690;
	// sth r28,0(r19)
	REX_STORE_U16(r19.u32 + 0, r28.u16);
	// b 0x826cd690
	goto loc_826CD690;
loc_826CD68C:
	// bl 0x826e9d70
	ctx.lr = 0x826CD690;
	sub_826E9D70(ctx, base);
loc_826CD690:
	// lhz r11,220(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 220);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// sth r10,220(r29)
	REX_STORE_U16(r29.u32 + 220, ctx.r10.u16);
	// lhz r8,580(r31)
	ctx.r8.u64 = REX_LOAD_U16(r31.u32 + 580);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x826cd70c
	if (!ctx.cr6.gt) goto loc_826CD70C;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
loc_826CD6B4:
	// lwz r8,584(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 584);
	// lwz r9,320(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 320);
	// lhzx r7,r11,r8
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r8.u32);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// mulli r11,r6,1776
	ctx.r11.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(1776));
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r5,424(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 424);
	// lhz r4,114(r11)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + 114);
	// extsh r9,r4
	ctx.r9.s64 = ctx.r4.s16;
	// lhz r3,0(r5)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r5.u32 + 0);
	// extsh r8,r3
	ctx.r8.s64 = ctx.r3.s16;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x826cda34
	if (!ctx.cr6.lt) goto loc_826CDA34;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// sth r9,114(r11)
	REX_STORE_U16(ctx.r11.u32 + 114, ctx.r9.u16);
	// lhz r5,580(r31)
	ctx.r5.u64 = REX_LOAD_U16(r31.u32 + 580);
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// blt cr6,0x826cd6b4
	if (ctx.cr6.lt) goto loc_826CD6B4;
loc_826CD70C:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r10,176(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 176);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x826cd744
	if (!ctx.cr6.eq) goto loc_826CD744;
	// lwz r10,72(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 72);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x826cd744
	if (!ctx.cr6.eq) goto loc_826CD744;
	// lbz r10,144(r29)
	ctx.r10.u64 = REX_LOAD_U8(r29.u32 + 144);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826cd738
	if (ctx.cr6.eq) goto loc_826CD738;
	// stw r20,372(r11)
	REX_STORE_U32(ctx.r11.u32 + 372, r20.u32);
loc_826CD738:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,708(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 708);
	// bl 0x826e6f48
	ctx.lr = 0x826CD744;
	sub_826E6F48(ctx, base);
loc_826CD744:
	// lwz r11,216(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 216);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826cdc00
	if (ctx.cr6.eq) goto loc_826CDC00;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r10,176(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 176);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x826cdb24
	if (!ctx.cr6.eq) goto loc_826CDB24;
	// lwz r10,392(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 392);
	// lwz r11,388(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 388);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x826cd8c4
	if (!ctx.cr6.gt) goto loc_826CD8C4;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r10,0(r18)
	REX_STORE_U16(r18.u32 + 0, ctx.r10.u16);
	// b 0x826cd400
	goto loc_826CD400;
loc_826CD780:
	// lwz r11,164(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 164);
	// stw r16,32(r29)
	REX_STORE_U32(r29.u32 + 32, r16.u32);
	// stw r16,52(r29)
	REX_STORE_U32(r29.u32 + 52, r16.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826cd400
	if (!ctx.cr6.gt) goto loc_826CD400;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,164(r29)
	REX_STORE_U32(r29.u32 + 164, ctx.r11.u32);
	// b 0x826cd400
	goto loc_826CD400;
loc_826CD7A0:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r10,440(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 440);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,440(r11)
	REX_STORE_U32(ctx.r11.u32 + 440, ctx.r10.u32);
	// stw r28,216(r29)
	REX_STORE_U32(r29.u32 + 216, r28.u32);
	// sth r28,220(r29)
	REX_STORE_U16(r29.u32 + 220, r28.u16);
	// stw r28,380(r31)
	REX_STORE_U32(r31.u32 + 380, r28.u32);
	// stw r28,288(r29)
	REX_STORE_U32(r29.u32 + 288, r28.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r8,176(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 176);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// bne cr6,0x826cd7d8
	if (!ctx.cr6.eq) goto loc_826CD7D8;
	// sth r28,210(r31)
	REX_STORE_U16(r31.u32 + 210, r28.u16);
	// b 0x826cd814
	goto loc_826CD814;
loc_826CD7D8:
	// lwz r10,392(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 392);
	// lwz r11,388(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 388);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x826cd7f8
	if (!ctx.cr6.gt) goto loc_826CD7F8;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r10,0(r18)
	REX_STORE_U16(r18.u32 + 0, ctx.r10.u16);
	// b 0x826cd400
	goto loc_826CD400;
loc_826CD7F8:
	// lwz r10,468(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 468);
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x826cd814
	if (ctx.cr6.lt) goto loc_826CD814;
	// stw r28,392(r31)
	REX_STORE_U32(r31.u32 + 392, r28.u32);
	// stw r28,388(r31)
	REX_STORE_U32(r31.u32 + 388, r28.u32);
loc_826CD814:
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 34);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826cd860
	if (ctx.cr6.eq) goto loc_826CD860;
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
loc_826CD824:
	// lwz r10,320(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 320);
	// mulli r9,r11,1776
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(1776));
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// sth r28,114(r10)
	REX_STORE_U16(ctx.r10.u32 + 114, r28.u16);
	// lwz r9,176(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 176);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x826cd84c
	if (!ctx.cr6.eq) goto loc_826CD84C;
	// lwz r10,356(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 356);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r28,r9,r10
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r28.u32);
loc_826CD84C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lhz r10,34(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 34);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x826cd824
	if (ctx.cr6.lt) goto loc_826CD824;
loc_826CD860:
	// stw r15,32(r29)
	REX_STORE_U32(r29.u32 + 32, r15.u32);
	// b 0x826cd400
	goto loc_826CD400;
loc_826CD868:
	// lhz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826cdbf8
	if (ctx.cr6.eq) goto loc_826CDBF8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826e7e78
	ctx.lr = 0x826CD87C;
	sub_826E7E78(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826cdc10
	if (ctx.cr6.lt) goto loc_826CDC10;
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 34);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826cd8bc
	if (ctx.cr6.eq) goto loc_826CD8BC;
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
loc_826CD898:
	// lwz r10,320(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 320);
	// mulli r9,r11,1776
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(1776));
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// sth r28,116(r10)
	REX_STORE_U16(ctx.r10.u32 + 116, r28.u16);
	// lhz r8,34(r31)
	ctx.r8.u64 = REX_LOAD_U16(r31.u32 + 34);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x826cd898
	if (ctx.cr6.lt) goto loc_826CD898;
loc_826CD8BC:
	// stw r17,32(r29)
	REX_STORE_U32(r29.u32 + 32, r17.u32);
	// b 0x826cd400
	goto loc_826CD400;
loc_826CD8C4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x826cdb94
	if (ctx.cr6.lt) goto loc_826CDB94;
	// lwz r10,468(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 468);
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x826cdb94
	if (!ctx.cr6.lt) goto loc_826CDB94;
	// lwz r9,708(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 708);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x826cd8f8
	if (ctx.cr6.eq) goto loc_826CD8F8;
	// subf r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// stw r9,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// b 0x826cd908
	goto loc_826CD908;
loc_826CD8F8:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82635d20
	ctx.lr = 0x826CD904;
	sub_82635D20(ctx, base);
	// lwz r9,88(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
loc_826CD908:
	// lwz r10,388(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 388);
	// lwz r11,360(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 360);
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r8,392(r31)
	REX_STORE_U32(r31.u32 + 392, ctx.r8.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x826cd9cc
	if (!ctx.cr6.gt) goto loc_826CD9CC;
	// lwz r7,708(r29)
	ctx.r7.u64 = REX_LOAD_U32(r29.u32 + 708);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x826cd9cc
	if (!ctx.cr6.eq) goto loc_826CD9CC;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x826cd950
	if (ctx.cr6.lt) goto loc_826CD950;
	// rotlwi r10,r8,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// subf r9,r9,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r9.u64;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r8,392(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 392);
	// stw r8,388(r31)
	REX_STORE_U32(r31.u32 + 388, ctx.r8.u32);
	// b 0x826cd960
	goto loc_826CD960;
loc_826CD950:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,388(r31)
	REX_STORE_U32(r31.u32 + 388, ctx.r10.u32);
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r28.u32);
loc_826CD960:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826e1470
	ctx.lr = 0x826CD968;
	sub_826E1470(ctx, base);
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x826cd9cc
	if (ctx.cr6.lt) goto loc_826CD9CC;
	// lwz r11,380(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 380);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826cd9cc
	if (ctx.cr6.eq) goto loc_826CD9CC;
	// lwz r10,444(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 444);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x826cd998
	if (ctx.cr6.eq) goto loc_826CD998;
	// lwz r10,456(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 456);
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// b 0x826cd9ac
	goto loc_826CD9AC;
loc_826CD998:
	// lwz r10,448(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 448);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x826cd9ac
	if (ctx.cr6.eq) goto loc_826CD9AC;
	// lwz r10,456(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 456);
	// slw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
loc_826CD9AC:
	// lwz r10,392(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 392);
	// lwz r9,388(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 388);
	// subf r8,r11,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x826cd9cc
	if (!ctx.cr6.lt) goto loc_826CD9CC;
	// stw r28,388(r31)
	REX_STORE_U32(r31.u32 + 388, r28.u32);
	// stw r28,392(r31)
	REX_STORE_U32(r31.u32 + 392, r28.u32);
	// stw r28,380(r31)
	REX_STORE_U32(r31.u32 + 380, r28.u32);
loc_826CD9CC:
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x826cda24
	if (ctx.cr6.lt) goto loc_826CDA24;
	// lwz r11,708(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 708);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826cda24
	if (!ctx.cr6.eq) goto loc_826CDA24;
	// lwz r11,444(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 444);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826cda00
	if (ctx.cr6.eq) goto loc_826CDA00;
	// lwz r11,380(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 380);
	// lwz r10,456(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 456);
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// b 0x826cda18
	goto loc_826CDA18;
loc_826CDA00:
	// lwz r11,448(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 448);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,380(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 380);
	// beq cr6,0x826cda18
	if (ctx.cr6.eq) goto loc_826CDA18;
	// lwz r10,456(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 456);
	// slw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
loc_826CDA18:
	// lwz r10,392(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 392);
	// subf r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// stw r9,392(r31)
	REX_STORE_U32(r31.u32 + 392, ctx.r9.u32);
loc_826CDA24:
	// lwz r11,392(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 392);
	// lwz r10,388(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 388);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x826cda40
	if (!ctx.cr6.lt) goto loc_826CDA40;
loc_826CDA34:
	// lis r27,-32764
	r27.s64 = -2147221504;
	// ori r27,r27,2
	r27.u64 = r27.u64 | 2;
	// b 0x826cdc10
	goto loc_826CDC10;
loc_826CDA40:
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// sth r11,0(r18)
	REX_STORE_U16(r18.u32 + 0, ctx.r11.u16);
	// lwz r9,76(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 76);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x826cdb24
	if (ctx.cr6.eq) goto loc_826CDB24;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(r19.u32, 0, ctx.xer);
	// bne cr6,0x826cda60
	if (!ctx.cr6.eq) goto loc_826CDA60;
	// addi r19,r1,80
	r19.s64 = ctx.r1.s64 + 80;
loc_826CDA60:
	// sth r28,0(r19)
	REX_STORE_U16(r19.u32 + 0, r28.u16);
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bgt cr6,0x826cdb0c
	if (ctx.cr6.gt) goto loc_826CDB0C;
	// lwz r11,320(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 320);
	// lwz r10,444(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 444);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r9,424(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 424);
	// lwz r8,8(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// lhz r5,-2(r8)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r8.u32 + -2);
	// lhz r6,0(r8)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r8.u32 + 0);
	// beq cr6,0x826cdaac
	if (ctx.cr6.eq) goto loc_826CDAAC;
	// lwz r11,456(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 456);
	// extsh r10,r6
	ctx.r10.s64 = ctx.r6.s16;
	// extsh r9,r5
	ctx.r9.s64 = ctx.r5.s16;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// sraw r6,r10,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r6.s64 = ctx.r10.s32 >> temp.u32;
	// sraw r5,r9,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r5.s64 = ctx.r9.s32 >> temp.u32;
	// b 0x826cdad8
	goto loc_826CDAD8;
loc_826CDAAC:
	// lwz r11,448(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 448);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826cdad8
	if (ctx.cr6.eq) goto loc_826CDAD8;
	// lwz r11,456(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 456);
	// extsh r10,r6
	ctx.r10.s64 = ctx.r6.s16;
	// extsh r9,r5
	ctx.r9.s64 = ctx.r5.s16;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// slw r7,r10,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r8.u8 & 0x3F));
	// slw r5,r9,r8
	ctx.r5.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r8.u8 & 0x3F));
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
loc_826CDAD8:
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// addi r7,r1,82
	ctx.r7.s64 = ctx.r1.s64 + 82;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826e6a68
	ctx.lr = 0x826CDAEC;
	sub_826E6A68(ctx, base);
	// lhz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U16(r19.u32 + 0);
	// lhz r10,82(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// lhz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 84);
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// subf r11,r7,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r7.u64;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// sth r6,0(r19)
	REX_STORE_U16(r19.u32 + 0, ctx.r6.u16);
loc_826CDB0C:
	// stw r28,76(r31)
	REX_STORE_U32(r31.u32 + 76, r28.u32);
	// lhz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U16(r19.u32 + 0);
	// ld r10,184(r29)
	ctx.r10.u64 = REX_LOAD_U64(r29.u32 + 184);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r10,184(r29)
	REX_STORE_U64(r29.u32 + 184, ctx.r10.u64);
loc_826CDB24:
	// lwz r11,212(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 212);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826cdbc8
	if (ctx.cr6.eq) goto loc_826CDBC8;
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 34);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826cdbc8
	if (ctx.cr6.eq) goto loc_826CDBC8;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
loc_826CDB40:
	// lwz r10,320(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 320);
	// mulli r11,r8,1776
	ctx.r11.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(1776));
	// lwz r9,60(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 60);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// lwz r11,424(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 424);
	// lhz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r9,r6
	ctx.r9.s64 = ctx.r6.s16;
	// bgt cr6,0x826cdba0
	if (ctx.cr6.gt) goto loc_826CDBA0;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lhz r6,-2(r7)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r7.u32 + -2);
	// sth r6,-2(r10)
	REX_STORE_U16(ctx.r10.u32 + -2, ctx.r6.u16);
	// lwz r5,8(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lhzx r4,r5,r9
	ctx.r4.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r9.u32);
	// sth r4,0(r5)
	REX_STORE_U16(ctx.r5.u32 + 0, ctx.r4.u16);
	// lwz r3,12(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// sth r28,0(r3)
	REX_STORE_U16(ctx.r3.u32 + 0, r28.u16);
	// sth r20,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, r20.u16);
	// b 0x826cdbb4
	goto loc_826CDBB4;
loc_826CDB94:
	// lis r27,-32768
	r27.s64 = -2147483648;
	// ori r27,r27,16389
	r27.u64 = r27.u64 | 16389;
	// b 0x826cdc10
	goto loc_826CDC10;
loc_826CDBA0:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r9,-2(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + -2);
	// sth r9,-2(r11)
	REX_STORE_U16(ctx.r11.u32 + -2, ctx.r9.u16);
loc_826CDBB4:
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// lhz r10,34(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 34);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x826cdb40
	if (ctx.cr6.lt) goto loc_826CDB40;
loc_826CDBC8:
	// stw r20,52(r29)
	REX_STORE_U32(r29.u32 + 52, r20.u32);
	// stw r16,32(r29)
	REX_STORE_U32(r29.u32 + 32, r16.u32);
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x826cdbe8
	if (!ctx.cr6.gt) goto loc_826CDBE8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826e5bf0
	ctx.lr = 0x826CDBE8;
	sub_826E5BF0(ctx, base);
loc_826CDBE8:
	// lhz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 16);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x826cdc10
	if (ctx.cr6.gt) goto loc_826CDC10;
loc_826CDBF8:
	// mr r27,r17
	r27.u64 = r17.u64;
	// b 0x826cdc10
	goto loc_826CDC10;
loc_826CDC00:
	// stw r17,32(r29)
	REX_STORE_U32(r29.u32 + 32, r17.u32);
	// b 0x826cdc10
	goto loc_826CDC10;
loc_826CDC08:
	// lis r27,-32761
	r27.s64 = -2147024896;
	// ori r27,r27,87
	r27.u64 = r27.u64 | 87;
loc_826CDC10:
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(r18.u32, 0, ctx.xer);
	// beq cr6,0x826cdc3c
	if (ctx.cr6.eq) goto loc_826CDC3C;
	// lhz r11,0(r18)
	ctx.r11.u64 = REX_LOAD_U16(r18.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826cdc3c
	if (ctx.cr6.eq) goto loc_826CDC3C;
	// stw r15,692(r29)
	REX_STORE_U32(r29.u32 + 692, r15.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lhz r11,0(r18)
	ctx.r11.u64 = REX_LOAD_U16(r18.u32 + 0);
	// stw r11,700(r29)
	REX_STORE_U32(r29.u32 + 700, ctx.r11.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1cd4
	return;
loc_826CDC3C:
	// stw r16,692(r29)
	REX_STORE_U32(r29.u32 + 692, r16.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1cd4
	return;
}

DEFINE_REX_FUNC(sub_8271F6E0) {
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
	// bl 0x826a1c94
	ctx.lr = 0x8271F6E8;
	// lwz r7,180(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 180);
	// lwz r8,3948(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 3948);
	// srawi r11,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 1;
	// lwz r9,188(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 188);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lwz r10,20624(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20624);
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
	// beq cr6,0x8271f748
	if (ctx.cr6.eq) goto loc_8271F748;
	// srawi r8,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 2;
	// srawi r30,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	r30.s64 = ctx.r10.s32 >> 2;
loc_8271F748:
	// lwz r9,20628(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 20628);
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r31.s32, ctx.xer);
	// lwz r26,20624(r3)
	r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 20624);
	// stw r7,14864(r3)
	REX_STORE_U32(ctx.r3.u32 + 14864, ctx.r7.u32);
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
	// stw r25,14868(r3)
	REX_STORE_U32(ctx.r3.u32 + 14868, r25.u32);
	// lwz r25,188(r3)
	r25.u64 = REX_LOAD_U32(ctx.r3.u32 + 188);
	// stw r25,14872(r3)
	REX_STORE_U32(ctx.r3.u32 + 14872, r25.u32);
	// add r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 + ctx.r10.u64;
	// lwz r24,200(r3)
	r24.u64 = REX_LOAD_U32(ctx.r3.u32 + 200);
	// add r7,r7,r30
	ctx.r7.u64 = ctx.r7.u64 + r30.u64;
	// stw r24,14876(r3)
	REX_STORE_U32(ctx.r3.u32 + 14876, r24.u32);
	// rlwinm r25,r5,4,0,27
	r25.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r23,156(r3)
	r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 156);
	// rlwinm r24,r4,3,0,28
	r24.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r23,14880(r3)
	REX_STORE_U32(ctx.r3.u32 + 14880, r23.u32);
	// lwz r23,160(r3)
	r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 160);
	// stw r23,14884(r3)
	REX_STORE_U32(ctx.r3.u32 + 14884, r23.u32);
	// lwz r23,184(r3)
	r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 184);
	// stw r23,14888(r3)
	REX_STORE_U32(ctx.r3.u32 + 14888, r23.u32);
	// lwz r23,196(r3)
	r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 196);
	// stw r23,14892(r3)
	REX_STORE_U32(ctx.r3.u32 + 14892, r23.u32);
	// lwz r23,152(r3)
	r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 152);
	// stw r23,14896(r3)
	REX_STORE_U32(ctx.r3.u32 + 14896, r23.u32);
	// lwz r23,136(r3)
	r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// stw r23,14900(r3)
	REX_STORE_U32(ctx.r3.u32 + 14900, r23.u32);
	// lwz r23,140(r3)
	r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// stw r23,14904(r3)
	REX_STORE_U32(ctx.r3.u32 + 14904, r23.u32);
	// lwz r23,144(r3)
	r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 144);
	// stw r23,14908(r3)
	REX_STORE_U32(ctx.r3.u32 + 14908, r23.u32);
	// lwz r23,148(r3)
	r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 148);
	// stw r23,14912(r3)
	REX_STORE_U32(ctx.r3.u32 + 14912, r23.u32);
	// lwz r23,204(r3)
	r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 204);
	// stw r23,14916(r3)
	REX_STORE_U32(ctx.r3.u32 + 14916, r23.u32);
	// lwz r23,208(r3)
	r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 208);
	// stw r23,14920(r3)
	REX_STORE_U32(ctx.r3.u32 + 14920, r23.u32);
	// lwz r23,212(r3)
	r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 212);
	// stw r23,14924(r3)
	REX_STORE_U32(ctx.r3.u32 + 14924, r23.u32);
	// lwz r23,216(r3)
	r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 216);
	// stw r23,14928(r3)
	REX_STORE_U32(ctx.r3.u32 + 14928, r23.u32);
	// lwz r23,220(r3)
	r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 220);
	// stw r23,14932(r3)
	REX_STORE_U32(ctx.r3.u32 + 14932, r23.u32);
	// lwz r23,224(r3)
	r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 224);
	// stw r23,14936(r3)
	REX_STORE_U32(ctx.r3.u32 + 14936, r23.u32);
	// lwz r23,228(r3)
	r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 228);
	// stw r23,14940(r3)
	REX_STORE_U32(ctx.r3.u32 + 14940, r23.u32);
	// lwz r23,232(r3)
	r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 232);
	// stw r23,14944(r3)
	REX_STORE_U32(ctx.r3.u32 + 14944, r23.u32);
	// stw r11,14948(r3)
	REX_STORE_U32(ctx.r3.u32 + 14948, ctx.r11.u32);
	// stw r8,14952(r3)
	REX_STORE_U32(ctx.r3.u32 + 14952, ctx.r8.u32);
	// lwz r23,188(r3)
	r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 188);
	// stw r23,14956(r3)
	REX_STORE_U32(ctx.r3.u32 + 14956, r23.u32);
	// lwz r23,200(r3)
	r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 200);
	// stw r23,14960(r3)
	REX_STORE_U32(ctx.r3.u32 + 14960, r23.u32);
	// stw r31,14964(r3)
	REX_STORE_U32(ctx.r3.u32 + 14964, r31.u32);
	// lwz r23,160(r3)
	r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 160);
	// stw r23,14968(r3)
	REX_STORE_U32(ctx.r3.u32 + 14968, r23.u32);
	// stw r27,14972(r3)
	REX_STORE_U32(ctx.r3.u32 + 14972, r27.u32);
	// stw r29,14976(r3)
	REX_STORE_U32(ctx.r3.u32 + 14976, r29.u32);
	// bne cr6,0x8271f870
	if (!ctx.cr6.eq) goto loc_8271F870;
	// lwz r23,188(r3)
	r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 188);
	// lwz r19,160(r3)
	r19.u64 = REX_LOAD_U32(ctx.r3.u32 + 160);
	// cmpw cr6,r23,r19
	ctx.cr6.compare<int32_t>(r23.s32, r19.s32, ctx.xer);
	// li r23,1
	r23.s64 = 1;
	// beq cr6,0x8271f874
	if (ctx.cr6.eq) goto loc_8271F874;
loc_8271F870:
	// li r23,0
	r23.s64 = 0;
loc_8271F874:
	// stw r23,14980(r3)
	REX_STORE_U32(ctx.r3.u32 + 14980, r23.u32);
	// stw r28,14984(r3)
	REX_STORE_U32(ctx.r3.u32 + 14984, r28.u32);
	// lwz r23,140(r3)
	r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// stw r23,14988(r3)
	REX_STORE_U32(ctx.r3.u32 + 14988, r23.u32);
	// lwz r23,140(r3)
	r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// mullw r23,r23,r28
	r23.s64 = int64_t(r23.s32) * int64_t(r28.s32);
	// stw r23,14992(r3)
	REX_STORE_U32(ctx.r3.u32 + 14992, r23.u32);
	// stw r20,14996(r3)
	REX_STORE_U32(ctx.r3.u32 + 14996, r20.u32);
	// stw r5,15000(r3)
	REX_STORE_U32(ctx.r3.u32 + 15000, ctx.r5.u32);
	// stw r4,15004(r3)
	REX_STORE_U32(ctx.r3.u32 + 15004, ctx.r4.u32);
	// lwz r23,212(r3)
	r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 212);
	// stw r23,15008(r3)
	REX_STORE_U32(ctx.r3.u32 + 15008, r23.u32);
	// lwz r23,216(r3)
	r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 216);
	// stw r23,15012(r3)
	REX_STORE_U32(ctx.r3.u32 + 15012, r23.u32);
	// stw r9,15020(r3)
	REX_STORE_U32(ctx.r3.u32 + 15020, ctx.r9.u32);
	// stw r25,15024(r3)
	REX_STORE_U32(ctx.r3.u32 + 15024, r25.u32);
	// stw r24,15028(r3)
	REX_STORE_U32(ctx.r3.u32 + 15028, r24.u32);
	// stw r26,15016(r3)
	REX_STORE_U32(ctx.r3.u32 + 15016, r26.u32);
	// lwz r23,180(r3)
	r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 180);
	// stw r23,15032(r3)
	REX_STORE_U32(ctx.r3.u32 + 15032, r23.u32);
	// lwz r23,192(r3)
	r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 192);
	// stw r23,15036(r3)
	REX_STORE_U32(ctx.r3.u32 + 15036, r23.u32);
	// stw r10,15040(r3)
	REX_STORE_U32(ctx.r3.u32 + 15040, ctx.r10.u32);
	// stw r30,15044(r3)
	REX_STORE_U32(ctx.r3.u32 + 15044, r30.u32);
	// lwz r23,156(r3)
	r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 156);
	// stw r23,15048(r3)
	REX_STORE_U32(ctx.r3.u32 + 15048, r23.u32);
	// stw r21,15052(r3)
	REX_STORE_U32(ctx.r3.u32 + 15052, r21.u32);
	// lwz r23,184(r3)
	r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 184);
	// stw r23,15056(r3)
	REX_STORE_U32(ctx.r3.u32 + 15056, r23.u32);
	// lwz r23,196(r3)
	r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 196);
	// stw r23,15060(r3)
	REX_STORE_U32(ctx.r3.u32 + 15060, r23.u32);
	// lwz r23,180(r3)
	r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 180);
	// lwz r19,156(r3)
	r19.u64 = REX_LOAD_U32(ctx.r3.u32 + 156);
	// cmpw cr6,r23,r19
	ctx.cr6.compare<int32_t>(r23.s32, r19.s32, ctx.xer);
	// bne cr6,0x8271f90c
	if (!ctx.cr6.eq) goto loc_8271F90C;
	// cmpw cr6,r10,r21
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r21.s32, ctx.xer);
	// li r23,1
	r23.s64 = 1;
	// beq cr6,0x8271f910
	if (ctx.cr6.eq) goto loc_8271F910;
loc_8271F90C:
	// li r23,0
	r23.s64 = 0;
loc_8271F910:
	// stw r23,15064(r3)
	REX_STORE_U32(ctx.r3.u32 + 15064, r23.u32);
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r31.s32, ctx.xer);
	// lwz r23,136(r3)
	r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// stw r22,15072(r3)
	REX_STORE_U32(ctx.r3.u32 + 15072, r22.u32);
	// stw r23,15068(r3)
	REX_STORE_U32(ctx.r3.u32 + 15068, r23.u32);
	// lwz r23,136(r3)
	r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// mullw r23,r23,r22
	r23.s64 = int64_t(r23.s32) * int64_t(r22.s32);
	// stw r23,15076(r3)
	REX_STORE_U32(ctx.r3.u32 + 15076, r23.u32);
	// lwz r23,148(r3)
	r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 148);
	// stw r23,15080(r3)
	REX_STORE_U32(ctx.r3.u32 + 15080, r23.u32);
	// lwz r23,204(r3)
	r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 204);
	// stw r23,15084(r3)
	REX_STORE_U32(ctx.r3.u32 + 15084, r23.u32);
	// lwz r23,208(r3)
	r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 208);
	// stw r23,15088(r3)
	REX_STORE_U32(ctx.r3.u32 + 15088, r23.u32);
	// stw r6,15092(r3)
	REX_STORE_U32(ctx.r3.u32 + 15092, ctx.r6.u32);
	// stw r7,15096(r3)
	REX_STORE_U32(ctx.r3.u32 + 15096, ctx.r7.u32);
	// lwz r23,220(r3)
	r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 220);
	// stw r23,15100(r3)
	REX_STORE_U32(ctx.r3.u32 + 15100, r23.u32);
	// lwz r23,224(r3)
	r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 224);
	// stw r23,15104(r3)
	REX_STORE_U32(ctx.r3.u32 + 15104, r23.u32);
	// lwz r23,228(r3)
	r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 228);
	// stw r23,15108(r3)
	REX_STORE_U32(ctx.r3.u32 + 15108, r23.u32);
	// lwz r23,232(r3)
	r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 232);
	// stw r23,15112(r3)
	REX_STORE_U32(ctx.r3.u32 + 15112, r23.u32);
	// stw r11,15116(r3)
	REX_STORE_U32(ctx.r3.u32 + 15116, ctx.r11.u32);
	// stw r8,15120(r3)
	REX_STORE_U32(ctx.r3.u32 + 15120, ctx.r8.u32);
	// stw r10,15124(r3)
	REX_STORE_U32(ctx.r3.u32 + 15124, ctx.r10.u32);
	// stw r30,15128(r3)
	REX_STORE_U32(ctx.r3.u32 + 15128, r30.u32);
	// stw r31,15132(r3)
	REX_STORE_U32(ctx.r3.u32 + 15132, r31.u32);
	// stw r21,15136(r3)
	REX_STORE_U32(ctx.r3.u32 + 15136, r21.u32);
	// stw r27,15140(r3)
	REX_STORE_U32(ctx.r3.u32 + 15140, r27.u32);
	// stw r29,15144(r3)
	REX_STORE_U32(ctx.r3.u32 + 15144, r29.u32);
	// bne cr6,0x8271f9a0
	if (!ctx.cr6.eq) goto loc_8271F9A0;
	// cmpw cr6,r10,r21
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r21.s32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8271f9a4
	if (ctx.cr6.eq) goto loc_8271F9A4;
loc_8271F9A0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8271F9A4:
	// mullw r10,r22,r28
	ctx.r10.s64 = int64_t(r22.s32) * int64_t(r28.s32);
	// stw r11,15148(r3)
	REX_STORE_U32(ctx.r3.u32 + 15148, ctx.r11.u32);
	// stw r28,15152(r3)
	REX_STORE_U32(ctx.r3.u32 + 15152, r28.u32);
	// stw r22,15156(r3)
	REX_STORE_U32(ctx.r3.u32 + 15156, r22.u32);
	// stw r10,15160(r3)
	REX_STORE_U32(ctx.r3.u32 + 15160, ctx.r10.u32);
	// stw r20,15164(r3)
	REX_STORE_U32(ctx.r3.u32 + 15164, r20.u32);
	// stw r5,15168(r3)
	REX_STORE_U32(ctx.r3.u32 + 15168, ctx.r5.u32);
	// stw r4,15172(r3)
	REX_STORE_U32(ctx.r3.u32 + 15172, ctx.r4.u32);
	// stw r6,15176(r3)
	REX_STORE_U32(ctx.r3.u32 + 15176, ctx.r6.u32);
	// stw r7,15180(r3)
	REX_STORE_U32(ctx.r3.u32 + 15180, ctx.r7.u32);
	// stw r26,15184(r3)
	REX_STORE_U32(ctx.r3.u32 + 15184, r26.u32);
	// stw r9,15188(r3)
	REX_STORE_U32(ctx.r3.u32 + 15188, ctx.r9.u32);
	// stw r25,15192(r3)
	REX_STORE_U32(ctx.r3.u32 + 15192, r25.u32);
	// stw r24,15196(r3)
	REX_STORE_U32(ctx.r3.u32 + 15196, r24.u32);
	// b 0x826a1ce4
	return;
}

DEFINE_REX_FUNC(sub_827374C8) {
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
	ctx.lr = 0x827374D0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r6,29
	ctx.r11.u64 = ctx.r6.u32 & 0x7;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82737588
	if (!ctx.cr6.eq) goto loc_82737588;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lvx128 v63,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltisw v13,4
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_set1_epi32(int(0x4)));
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r9,r11,31648
	ctx.r9.s64 = ctx.r11.s64 + 31648;
	// vspltisw v12,3
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_set1_epi32(int(0x3)));
	// li r8,32
	ctx.r8.s64 = 32;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,80
	ctx.r5.s64 = 80;
	// lvx128 v0,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r4,96
	ctx.r4.s64 = 96;
	// li r11,112
	ctx.r11.s64 = 112;
	// vperm128 v11,v63,v63,v0
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// li r9,128
	ctx.r9.s64 = 128;
	// li r31,144
	r31.s64 = 144;
	// li r30,160
	r30.s64 = 160;
	// li r29,176
	r29.s64 = 176;
	// vaddshs v10,v11,v13
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// li r28,192
	r28.s64 = 192;
	// li r27,208
	r27.s64 = 208;
	// li r26,224
	r26.s64 = 224;
	// li r25,240
	r25.s64 = 240;
	// vsrah v9,v10,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvlx v9,0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v9.u8[15 - i]);
	// stvlx v9,r3,r10
	ea = ctx.r3.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v9.u8[15 - i]);
	// stvlx v9,r3,r8
	ea = ctx.r3.u32 + ctx.r8.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v9.u8[15 - i]);
	// stvlx v9,r3,r7
	ea = ctx.r3.u32 + ctx.r7.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v9.u8[15 - i]);
	// stvlx v9,r3,r6
	ea = ctx.r3.u32 + ctx.r6.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v9.u8[15 - i]);
	// stvlx v9,r3,r5
	ea = ctx.r3.u32 + ctx.r5.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v9.u8[15 - i]);
	// stvlx v9,r3,r4
	ea = ctx.r3.u32 + ctx.r4.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v9.u8[15 - i]);
	// stvlx v9,r3,r11
	ea = ctx.r3.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v9.u8[15 - i]);
	// stvlx v9,r3,r9
	ea = ctx.r3.u32 + ctx.r9.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v9.u8[15 - i]);
	// stvlx v9,r3,r31
	ea = ctx.r3.u32 + r31.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v9.u8[15 - i]);
	// stvlx v9,r3,r30
	ea = ctx.r3.u32 + r30.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v9.u8[15 - i]);
	// stvlx v9,r3,r29
	ea = ctx.r3.u32 + r29.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v9.u8[15 - i]);
	// stvlx v9,r3,r28
	ea = ctx.r3.u32 + r28.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v9.u8[15 - i]);
	// stvlx v9,r3,r27
	ea = ctx.r3.u32 + r27.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v9.u8[15 - i]);
	// stvlx v9,r3,r26
	ea = ctx.r3.u32 + r26.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v9.u8[15 - i]);
	// stvlx v9,r3,r25
	ea = ctx.r3.u32 + r25.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v9.u8[15 - i]);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
loc_82737588:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bge cr6,0x8273759c
	if (!ctx.cr6.lt) goto loc_8273759C;
	// bl 0x82736980
	ctx.lr = 0x82737594;
	sub_82736980(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
loc_8273759C:
	// bl 0x82736de8
	ctx.lr = 0x827375A0;
	sub_82736DE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_82740538) {
	REX_FUNC_PROLOGUE();
	PPCVRegister v14{};
	PPCVRegister v15{};
	PPCVRegister v16{};
	PPCVRegister v24{};
	PPCVRegister v25{};
	PPCVRegister v26{};
	PPCVRegister v27{};
	PPCVRegister v28{};
	PPCVRegister v29{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	uint32_t ea{};
	// add r12,r6,r6
	ctx.r12.u64 = ctx.r6.u64 + ctx.r6.u64;
	// vspltish v15,15
	simde_mm_store_si128((simde__m128i*)v15.s16, simde_mm_set1_epi16(short(0xF)));
	// li r0,0
	ctx.r0.s64 = 0;
	// add r6,r12,r12
	ctx.r6.u64 = ctx.r12.u64 + ctx.r12.u64;
	// addi r10,r3,256
	ctx.r10.s64 = ctx.r3.s64 + 256;
	// add r8,r7,r7
	ctx.r8.u64 = ctx.r7.u64 + ctx.r7.u64;
	// vslb v16,v15,v15
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v15.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v15.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi8(0x7));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_sllv_epi8(a, shift));
	}
	// addi r11,r3,384
	ctx.r11.s64 = ctx.r3.s64 + 384;
	// lvx128 v27,r3,r12
	ea = (ctx.r3.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r7,r12,r6
	ctx.r7.u64 = ctx.r12.u64 + ctx.r6.u64;
	// lvx128 v31,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r3,128
	ctx.r9.s64 = ctx.r3.s64 + 128;
	// lvx128 v29,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v0,v31,v16
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// lvx128 v25,r10,r12
	ea = (ctx.r10.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v25.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v2,v29,v16
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// lvx128 v28,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v6,v25,v16
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v25.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// lvx128 v24,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v3,v28,v16
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v28.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// lvx128 v29,r10,r6
	ea = (ctx.r10.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v7,v24,v16
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// lvx128 v25,r10,r7
	ea = (ctx.r10.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v25.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r4,16
	ctx.r10.s64 = ctx.r4.s64 + 16;
	// lvx128 v30,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v4,v27,v16
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// lvx128 v28,r11,r6
	ea = (ctx.r11.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v1,v30,v16
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v30.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// lvx128 v24,r11,r7
	ea = (ctx.r11.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r5,16
	ctx.r11.s64 = ctx.r5.s64 + 16;
	// lvx128 v26,r9,r12
	ea = (ctx.r9.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v10,v29,v16
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// vaddshs v5,v26,v16
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// lvx128 v31,r3,r6
	ea = (ctx.r3.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v30,r9,r6
	ea = (ctx.r9.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r6,r8,r8
	ctx.r6.u64 = ctx.r8.u64 + ctx.r8.u64;
	// lvx128 v27,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v8,v31,v16
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// lvx128 v26,r9,r7
	ea = (ctx.r9.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v9,v30,v16
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v30.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// stvx v0,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r7,r8,r6
	ctx.r7.u64 = ctx.r8.u64 + ctx.r6.u64;
	// stvx v1,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v11,v28,v16
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v28.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// stvx v2,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v12,v27,v16
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// stvx v3,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v13,v26,v16
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// stvx v4,r4,r8
	ea = (ctx.r4.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v14,v25,v16
	simde_mm_store_si128((simde__m128i*)v14.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v25.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// stvx v5,r10,r8
	ea = (ctx.r10.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v15,v24,v16
	simde_mm_store_si128((simde__m128i*)v15.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// stvx v6,r5,r8
	ea = (ctx.r5.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v7,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v8,r4,r6
	ea = (ctx.r4.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v9,r10,r6
	ea = (ctx.r10.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v10,r5,r6
	ea = (ctx.r5.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v11,r11,r6
	ea = (ctx.r11.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r6,r12,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r12.u32 | (ctx.r12.u64 << 32), 2) & 0xFFFFFFFC;
	// stvx v12,r4,r7
	ea = (ctx.r4.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v13,r10,r7
	ea = (ctx.r10.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r3,256
	ctx.r10.s64 = ctx.r3.s64 + 256;
	// stvx v14,r5,r7
	ea = (ctx.r5.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v14.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v15,r11,r7
	ea = (ctx.r11.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v15.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r7,r12,r6
	ctx.r7.u64 = ctx.r12.u64 + ctx.r6.u64;
	// addi r11,r3,384
	ctx.r11.s64 = ctx.r3.s64 + 384;
	// lvx128 v31,r3,r6
	ea = (ctx.r3.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v30,r9,r6
	ea = (ctx.r9.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v1,v30,v16
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v30.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// lvx128 v28,r11,r6
	ea = (ctx.r11.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v0,v31,v16
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// lvx128 v27,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v29,r10,r6
	ea = (ctx.r10.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r6,r12,r7
	ctx.r6.u64 = ctx.r12.u64 + ctx.r7.u64;
	// lvx128 v26,r9,r7
	ea = (ctx.r9.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v2,v29,v16
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// lvx128 v25,r10,r7
	ea = (ctx.r10.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v25.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v4,v27,v16
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// lvx128 v24,r11,r7
	ea = (ctx.r11.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v3,v28,v16
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v28.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// add r7,r12,r6
	ctx.r7.u64 = ctx.r12.u64 + ctx.r6.u64;
	// lvx128 v31,r3,r6
	ea = (ctx.r3.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v6,v25,v16
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v25.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// lvx128 v29,r10,r6
	ea = (ctx.r10.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v7,v24,v16
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// lvx128 v28,r11,r6
	ea = (ctx.r11.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v5,v26,v16
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// lvx128 v30,r9,r6
	ea = (ctx.r9.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lvx128 v25,r10,r7
	ea = (ctx.r10.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v25.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r4,16
	ctx.r10.s64 = ctx.r4.s64 + 16;
	// lvx128 v24,r11,r7
	ea = (ctx.r11.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r5,16
	ctx.r11.s64 = ctx.r5.s64 + 16;
	// lvx128 v27,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v8,v31,v16
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// lvx128 v26,r9,r7
	ea = (ctx.r9.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r7,r8,r6
	ctx.r7.u64 = ctx.r8.u64 + ctx.r6.u64;
	// stvx v0,r4,r6
	ea = (ctx.r4.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v9,v30,v16
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v30.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// stvx v1,r10,r6
	ea = (ctx.r10.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r3,r8,r7
	ctx.r3.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stvx v2,r5,r6
	ea = (ctx.r5.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v10,v29,v16
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// stvx v3,r11,r6
	ea = (ctx.r11.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r12,r8,r3
	ctx.r12.u64 = ctx.r8.u64 + ctx.r3.u64;
	// stvx v4,r4,r7
	ea = (ctx.r4.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v11,v28,v16
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v28.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// stvx v5,r10,r7
	ea = (ctx.r10.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v12,v27,v16
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// stvx v6,r5,r7
	ea = (ctx.r5.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v13,v26,v16
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// stvx v7,r11,r7
	ea = (ctx.r11.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v14,v25,v16
	simde_mm_store_si128((simde__m128i*)v14.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v25.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// stvx v8,r4,r3
	ea = (ctx.r4.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v15,v24,v16
	simde_mm_store_si128((simde__m128i*)v15.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// stvx v9,r10,r3
	ea = (ctx.r10.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v10,r5,r3
	ea = (ctx.r5.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v11,r11,r3
	ea = (ctx.r11.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v12,r4,r12
	ea = (ctx.r4.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v13,r10,r12
	ea = (ctx.r10.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v14,r5,r12
	ea = (ctx.r5.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v14.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v15,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v15.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8275D898) {
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
	ctx.lr = 0x8275D8A0;
	// stwu r1,-640(r1)
	ea = -640 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,152(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 152);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// rlwinm r27,r10,0,0,30
	r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8275d8cc
	if (ctx.cr6.eq) goto loc_8275D8CC;
	// lwz r10,15652(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 15652);
	// bl 0x8275bcb8
	ctx.lr = 0x8275D8C4;
	sub_8275BCB8(ctx, base);
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x826a1d04
	return;
loc_8275D8CC:
	// li r10,32
	ctx.r10.s64 = 32;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8275bcb8
	ctx.lr = 0x8275D8DC;
	sub_8275BCB8(ctx, base);
	// lwz r30,724(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 724);
	// addi r29,r1,80
	r29.s64 = ctx.r1.s64 + 80;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble cr6,0x8275d914
	if (!ctx.cr6.gt) goto loc_8275D914;
	// rlwinm r27,r27,1,0,30
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
loc_8275D8F0:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8275D900;
	sub_826A1E70(ctx, base);
	// lwz r11,15652(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15652);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r29,r29,32
	r29.s64 = r29.s64 + 32;
	// add r28,r11,r28
	r28.u64 = ctx.r11.u64 + r28.u64;
	// bne 0x8275d8f0
	if (!ctx.cr0.eq) goto loc_8275D8F0;
loc_8275D914:
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82761270) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
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
	// srawi r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// mr r31,r9
	r31.u64 = ctx.r9.u64;
	// srawi r9,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r7.s32 >> 2;
	// mullw r8,r8,r4
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r4.s32);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// clrlwi r7,r7,30
	ctx.r7.u64 = ctx.r7.u32 & 0x3;
	// add r3,r9,r3
	ctx.r3.u64 = ctx.r9.u64 + ctx.r3.u64;
	// clrlwi r8,r31,30
	ctx.r8.u64 = r31.u32 & 0x3;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x82761320
	if (!ctx.cr6.eq) goto loc_82761320;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82761320
	if (!ctx.cr6.eq) goto loc_82761320;
	// ld r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// add r11,r5,r6
	ctx.r11.u64 = ctx.r5.u64 + ctx.r6.u64;
	// std r10,0(r5)
	REX_STORE_U64(ctx.r5.u32 + 0, ctx.r10.u64);
	// ldux r9,r3,r4
	ea = ctx.r3.u32 + ctx.r4.u32;
	ctx.r9.u64 = REX_LOAD_U64(ea);
	ctx.r3.u32 = ea;
	// stdx r9,r5,r6
	REX_STORE_U64(ctx.r5.u32 + ctx.r6.u32, ctx.r9.u64);
	// ldux r8,r3,r4
	ea = ctx.r3.u32 + ctx.r4.u32;
	ctx.r8.u64 = REX_LOAD_U64(ea);
	ctx.r3.u32 = ea;
	// stdux r8,r11,r6
	ea = ctx.r11.u32 + ctx.r6.u32;
	REX_STORE_U64(ea, ctx.r8.u64);
	ctx.r11.u32 = ea;
	// ldux r7,r3,r4
	ea = ctx.r3.u32 + ctx.r4.u32;
	ctx.r7.u64 = REX_LOAD_U64(ea);
	ctx.r3.u32 = ea;
	// stdux r7,r11,r6
	ea = ctx.r11.u32 + ctx.r6.u32;
	REX_STORE_U64(ea, ctx.r7.u64);
	ctx.r11.u32 = ea;
	// ldux r5,r3,r4
	ea = ctx.r3.u32 + ctx.r4.u32;
	ctx.r5.u64 = REX_LOAD_U64(ea);
	ctx.r3.u32 = ea;
	// stdux r5,r11,r6
	ea = ctx.r11.u32 + ctx.r6.u32;
	REX_STORE_U64(ea, ctx.r5.u64);
	ctx.r11.u32 = ea;
	// ldux r10,r3,r4
	ea = ctx.r3.u32 + ctx.r4.u32;
	ctx.r10.u64 = REX_LOAD_U64(ea);
	ctx.r3.u32 = ea;
	// stdux r10,r11,r6
	ea = ctx.r11.u32 + ctx.r6.u32;
	REX_STORE_U64(ea, ctx.r10.u64);
	ctx.r11.u32 = ea;
	// ldux r9,r3,r4
	ea = ctx.r3.u32 + ctx.r4.u32;
	ctx.r9.u64 = REX_LOAD_U64(ea);
	ctx.r3.u32 = ea;
	// stdux r9,r11,r6
	ea = ctx.r11.u32 + ctx.r6.u32;
	REX_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// ldx r8,r3,r4
	ctx.r8.u64 = REX_LOAD_U64(ctx.r3.u32 + ctx.r4.u32);
	// stdx r8,r11,r6
	REX_STORE_U64(ctx.r11.u32 + ctx.r6.u32, ctx.r8.u64);
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
loc_82761320:
	// lwz r9,3928(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 3928);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82761334
	if (!ctx.cr6.eq) goto loc_82761334;
	// lwz r10,3164(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 3164);
	// b 0x82761338
	goto loc_82761338;
loc_82761334:
	// lwz r10,3168(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 3168);
loc_82761338:
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82761340;
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

DEFINE_REX_FUNC(sub_82767A30) {
	REX_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82767ab0
	if (ctx.cr6.eq) goto loc_82767AB0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82767ab0
	if (ctx.cr6.eq) goto loc_82767AB0;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x82767ab0
	if (ctx.cr6.lt) goto loc_82767AB0;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r8,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// bne cr6,0x82767a70
	if (!ctx.cr6.eq) goto loc_82767A70;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r8,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
loc_82767A70:
	// stw r4,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bne cr6,0x82767a90
	if (!ctx.cr6.eq) goto loc_82767A90;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_82767A90:
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82767AB0:
	// li r3,-100
	ctx.r3.s64 = -100;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8276A3F8) {
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
	// li r10,16
	ctx.r10.s64 = 16;
	// lvlx128 v63,r0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r11,48
	ctx.r11.s64 = 48;
	// vspltish v0,3
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0x3)));
	// li r9,32
	ctx.r9.s64 = 32;
	// vspltish v13,4
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x4)));
	// li r8,64
	ctx.r8.s64 = 64;
	// vspltish v6,1
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_set1_epi16(short(0x1)));
	// vspltish v5,2
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_set1_epi16(short(0x2)));
	// lvlx128 v62,r10,r5
	temp.u32 = ctx.r10.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltish v4,5
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_set1_epi16(short(0x5)));
	// lvrx128 v61,r10,r5
	temp.u32 = ctx.r10.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vspltisw128 v60,1
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_set1_epi32(int(0x1)));
	// lvlx128 v59,r11,r5
	temp.u32 = ctx.r11.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v10,v63,v61
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// lvrx128 v58,r11,r5
	temp.u32 = ctx.r11.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vspltisw128 v57,3
	simde_mm_store_si128((simde__m128i*)ctx.v57.u32, simde_mm_set1_epi32(int(0x3)));
	// lvrx128 v56,r9,r5
	temp.u32 = ctx.r9.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vspltisw128 v52,2
	simde_mm_store_si128((simde__m128i*)ctx.v52.u32, simde_mm_set1_epi32(int(0x2)));
	// lvrx128 v55,r8,r5
	temp.u32 = ctx.r8.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v12,v62,v56
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8)));
	// lvlx128 v54,r9,r5
	temp.u32 = ctx.r9.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v11,v59,v55
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8)));
	// vor128 v9,v54,v58
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8)));
	// rlwinm r10,r6,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// vspltisw128 v53,6
	simde_mm_store_si128((simde__m128i*)ctx.v53.u32, simde_mm_set1_epi32(int(0x6)));
	// vslh v3,v12,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// vadduhm v8,v12,v11
	simde_mm_store_si128((simde__m128i*)ctx.v8.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vadduhm v7,v10,v9
	simde_mm_store_si128((simde__m128i*)ctx.v7.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vsubuhm v10,v10,v9
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vslh v2,v12,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v1,v8,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v31,v7,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v30,v8,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v29,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v28,v3,v2
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vadduhm v27,v31,v7
	simde_mm_store_si128((simde__m128i*)v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// vadduhm v12,v1,v30
	simde_mm_store_si128((simde__m128i*)ctx.v12.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)v30.u16)));
	// vslh v26,v11,v4
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v25,v29,v10
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vadduhm v11,v13,v27
	simde_mm_store_si128((simde__m128i*)ctx.v11.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)v27.u16)));
	// vadduhm v10,v12,v28
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// vsubuhm v12,v12,v26
	simde_mm_store_si128((simde__m128i*)ctx.v12.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)v26.u16)));
	// vadduhm v13,v13,v25
	simde_mm_store_si128((simde__m128i*)ctx.v13.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)v25.u16)));
	// vadduhm v24,v11,v10
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vsubuhm v23,v11,v10
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vadduhm v22,v13,v12
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vsubuhm v21,v13,v12
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vsrah v20,v24,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v19,v23,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v18,v22,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v17,v21,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vupkhsb128 v47,v20,v96
	simde_mm_store_si128((simde__m128i*)ctx.v47.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)v20.s16), simde_mm_load_si128((simde__m128i*)v20.s16))));
	// vupkhsb128 v44,v19,v96
	simde_mm_store_si128((simde__m128i*)ctx.v44.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)v19.s16), simde_mm_load_si128((simde__m128i*)v19.s16))));
	// vupkhsb128 v46,v18,v96
	simde_mm_store_si128((simde__m128i*)ctx.v46.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)v18.s16), simde_mm_load_si128((simde__m128i*)v18.s16))));
	// vupkhsb128 v45,v17,v96
	simde_mm_store_si128((simde__m128i*)ctx.v45.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)v17.s16), simde_mm_load_si128((simde__m128i*)v17.s16))));
	// vupklsb128 v51,v20,v96
	simde_mm_store_si128((simde__m128i*)ctx.v51.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)v20.s16)));
	// vupklsb128 v50,v19,v96
	simde_mm_store_si128((simde__m128i*)ctx.v50.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)v19.s16)));
	// vupklsb128 v49,v18,v96
	simde_mm_store_si128((simde__m128i*)ctx.v49.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)v18.s16)));
	// vupklsb128 v48,v17,v96
	simde_mm_store_si128((simde__m128i*)ctx.v48.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)v17.s16)));
	// vmrghw128 v41,v47,v45
	simde_mm_store_si128((simde__m128i*)ctx.v41.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v45.u32), simde_mm_load_si128((simde__m128i*)ctx.v47.u32)));
	// vmrghw128 v40,v46,v44
	simde_mm_store_si128((simde__m128i*)ctx.v40.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v44.u32), simde_mm_load_si128((simde__m128i*)ctx.v46.u32)));
	// vmrglw128 v42,v49,v50
	simde_mm_store_si128((simde__m128i*)ctx.v42.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v50.u32), simde_mm_load_si128((simde__m128i*)ctx.v49.u32)));
	// vmrglw128 v43,v51,v48
	simde_mm_store_si128((simde__m128i*)ctx.v43.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v48.u32), simde_mm_load_si128((simde__m128i*)ctx.v51.u32)));
	// vmrghw128 v37,v51,v48
	simde_mm_store_si128((simde__m128i*)ctx.v37.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v48.u32), simde_mm_load_si128((simde__m128i*)ctx.v51.u32)));
	// vmrglw128 v13,v41,v40
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v40.u32), simde_mm_load_si128((simde__m128i*)ctx.v41.u32)));
	// vmrghw128 v36,v49,v50
	simde_mm_store_si128((simde__m128i*)ctx.v36.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v50.u32), simde_mm_load_si128((simde__m128i*)ctx.v49.u32)));
	// vmrglw128 v12,v43,v42
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v42.u32), simde_mm_load_si128((simde__m128i*)ctx.v43.u32)));
	// vmrglw128 v39,v47,v45
	simde_mm_store_si128((simde__m128i*)ctx.v39.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v45.u32), simde_mm_load_si128((simde__m128i*)ctx.v47.u32)));
	// vmrglw128 v38,v46,v44
	simde_mm_store_si128((simde__m128i*)ctx.v38.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v44.u32), simde_mm_load_si128((simde__m128i*)ctx.v46.u32)));
	// vslw128 v7,v13,v60
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v60.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vmrghw128 v35,v41,v40
	simde_mm_store_si128((simde__m128i*)ctx.v35.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v40.u32), simde_mm_load_si128((simde__m128i*)ctx.v41.u32)));
	// vslw128 v15,v13,v52
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v52.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v15.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vslw128 v6,v12,v57
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v57.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vmrglw128 v10,v37,v36
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v36.u32), simde_mm_load_si128((simde__m128i*)ctx.v37.u32)));
	// vaddsws v0,v13,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vmrghw128 v34,v37,v36
	simde_mm_store_si128((simde__m128i*)ctx.v34.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v36.u32), simde_mm_load_si128((simde__m128i*)ctx.v37.u32)));
	// vmrglw128 v11,v39,v38
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v38.u32), simde_mm_load_si128((simde__m128i*)ctx.v39.u32)));
	// vaddsws v16,v7,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v16.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v13,v10,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vspltisw128 v33,5
	simde_mm_store_si128((simde__m128i*)ctx.v33.u32, simde_mm_set1_epi32(int(0x5)));
	// vslw128 v14,v35,v60
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v35.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v60.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v14.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vmrghw128 v9,v39,v38
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v38.u32), simde_mm_load_si128((simde__m128i*)ctx.v39.u32)));
	// vslw128 v5,v35,v52
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v35.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v52.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vmrghw128 v8,v43,v42
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v42.u32), simde_mm_load_si128((simde__m128i*)ctx.v43.u32)));
	// vslw128 v4,v12,v52
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v52.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_sllv_epi32(a, shift));
	}
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// vslw128 v1,v13,v57
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v57.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_sllv_epi32(a, shift));
	}
	// li r9,4
	ctx.r9.s64 = 4;
	// vslw128 v3,v12,v60
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v60.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_sllv_epi32(a, shift));
	}
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	// vaddsws v2,v15,v7
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v15.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// vaddsws v30,v0,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// vslw128 v7,v11,v57
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v57.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_sllv_epi32(a, shift));
	}
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// vslw128 v12,v10,v60
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v60.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vslw128 v31,v11,v52
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v52.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vsubsws v28,v1,v13
	temp.s64 = int64_t(ctx.v1.s32[0]) - int64_t(ctx.v13.s32[0]);
	v28.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v1.s32[1]) - int64_t(ctx.v13.s32[1]);
	v28.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v1.s32[2]) - int64_t(ctx.v13.s32[2]);
	v28.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v1.s32[3]) - int64_t(ctx.v13.s32[3]);
	v28.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vslw128 v29,v10,v52
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v52.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vaddsws v24,v5,v14
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v14.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vslw128 v27,v34,v60
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v34.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v60.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vslw128 v26,v34,v52
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v34.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v52.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vslw128 v25,v60,v33
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v60.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v33.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v25.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vaddsws v22,v6,v3
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v22.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v23,v6,v4
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v23.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vslw128 v21,v11,v60
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v60.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v21.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vor v6,v30,v30
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)v30.u8));
	// vaddsws v20,v12,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v20.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v19,v29,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v19.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vor v11,v28,v28
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)v28.u8));
	// vaddsws v18,v7,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v18.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v12,v24,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v10,v26,v27
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v17,v13,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v17.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v15,v8,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v15.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vslw128 v14,v8,v52
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v52.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v14.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vaddsws v3,v6,v2
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsubsws v2,v6,v22
	temp.s64 = int64_t(ctx.v6.s32[0]) - int64_t(v22.s32[0]);
	ctx.v2.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v6.s32[1]) - int64_t(v22.s32[1]);
	ctx.v2.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v6.s32[2]) - int64_t(v22.s32[2]);
	ctx.v2.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v6.s32[3]) - int64_t(v22.s32[3]);
	ctx.v2.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsubsws v5,v11,v20
	temp.s64 = int64_t(ctx.v11.s32[0]) - int64_t(v20.s32[0]);
	ctx.v5.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[1]) - int64_t(v20.s32[1]);
	ctx.v5.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[2]) - int64_t(v20.s32[2]);
	ctx.v5.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[3]) - int64_t(v20.s32[3]);
	ctx.v5.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsubsws v1,v11,v18
	temp.s64 = int64_t(ctx.v11.s32[0]) - int64_t(v18.s32[0]);
	ctx.v1.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[1]) - int64_t(v18.s32[1]);
	ctx.v1.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[2]) - int64_t(v18.s32[2]);
	ctx.v1.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[3]) - int64_t(v18.s32[3]);
	ctx.v1.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vaddsws v31,v7,v21
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v11,v12,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsubsws v7,v12,v10
	temp.s64 = int64_t(ctx.v12.s32[0]) - int64_t(ctx.v10.s32[0]);
	ctx.v7.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[1]) - int64_t(ctx.v10.s32[1]);
	ctx.v7.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[2]) - int64_t(ctx.v10.s32[2]);
	ctx.v7.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[3]) - int64_t(ctx.v10.s32[3]);
	ctx.v7.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vor v6,v17,v17
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)v17.u8));
	// vslw128 v12,v15,v57
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v15.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v57.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vaddsws v30,v14,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v14.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vslw128 v26,v9,v60
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v60.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vaddsws v28,v6,v19
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v19.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsubsws v27,v6,v31
	temp.s64 = int64_t(ctx.v6.s32[0]) - int64_t(v31.s32[0]);
	v27.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v6.s32[1]) - int64_t(v31.s32[1]);
	v27.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v6.s32[2]) - int64_t(v31.s32[2]);
	v27.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v6.s32[3]) - int64_t(v31.s32[3]);
	v27.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vaddsws v6,v3,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsubsws v8,v12,v30
	temp.s64 = int64_t(ctx.v12.s32[0]) - int64_t(v30.s32[0]);
	ctx.v8.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[1]) - int64_t(v30.s32[1]);
	ctx.v8.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[2]) - int64_t(v30.s32[2]);
	ctx.v8.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[3]) - int64_t(v30.s32[3]);
	ctx.v8.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsraw128 v13,v13,v60
	ctx.v13.s32[0] = ctx.v13.s32[0] >> (ctx.v60.u8[0] & 0x1F);
	ctx.v13.s32[1] = ctx.v13.s32[1] >> (ctx.v60.u8[4] & 0x1F);
	ctx.v13.s32[2] = ctx.v13.s32[2] >> (ctx.v60.u8[8] & 0x1F);
	ctx.v13.s32[3] = ctx.v13.s32[3] >> (ctx.v60.u8[12] & 0x1F);
	// vslw128 v29,v0,v57
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v57.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vslw128 v25,v9,v57
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v57.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v25.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vaddsws v24,v26,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v10,v6,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v9,v11,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsubsws v5,v29,v0
	temp.s64 = int64_t(v29.s32[0]) - int64_t(ctx.v0.s32[0]);
	ctx.v5.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v29.s32[1]) - int64_t(ctx.v0.s32[1]);
	ctx.v5.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v29.s32[2]) - int64_t(ctx.v0.s32[2]);
	ctx.v5.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v29.s32[3]) - int64_t(ctx.v0.s32[3]);
	ctx.v5.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsraw128 v0,v0,v60
	ctx.v0.s32[0] = ctx.v0.s32[0] >> (ctx.v60.u8[0] & 0x1F);
	ctx.v0.s32[1] = ctx.v0.s32[1] >> (ctx.v60.u8[4] & 0x1F);
	ctx.v0.s32[2] = ctx.v0.s32[2] >> (ctx.v60.u8[8] & 0x1F);
	ctx.v0.s32[3] = ctx.v0.s32[3] >> (ctx.v60.u8[12] & 0x1F);
	// vsubsws v6,v11,v8
	temp.s64 = int64_t(ctx.v11.s32[0]) - int64_t(ctx.v8.s32[0]);
	ctx.v6.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[1]) - int64_t(ctx.v8.s32[1]);
	ctx.v6.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[2]) - int64_t(ctx.v8.s32[2]);
	ctx.v6.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[3]) - int64_t(ctx.v8.s32[3]);
	ctx.v6.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vaddsws v22,v9,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v22.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsubsws v4,v5,v23
	temp.s64 = int64_t(ctx.v5.s32[0]) - int64_t(v23.s32[0]);
	ctx.v4.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v5.s32[1]) - int64_t(v23.s32[1]);
	ctx.v4.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v5.s32[2]) - int64_t(v23.s32[2]);
	ctx.v4.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v5.s32[3]) - int64_t(v23.s32[3]);
	ctx.v4.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vaddsws v23,v25,v24
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v24.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v23.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsubsws v5,v5,v16
	temp.s64 = int64_t(ctx.v5.s32[0]) - int64_t(v16.s32[0]);
	ctx.v5.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v5.s32[1]) - int64_t(v16.s32[1]);
	ctx.v5.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v5.s32[2]) - int64_t(v16.s32[2]);
	ctx.v5.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v5.s32[3]) - int64_t(v16.s32[3]);
	ctx.v5.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsraw128 v32,v22,v53
	ctx.v32.s32[0] = v22.s32[0] >> (ctx.v53.u8[0] & 0x1F);
	ctx.v32.s32[1] = v22.s32[1] >> (ctx.v53.u8[4] & 0x1F);
	ctx.v32.s32[2] = v22.s32[2] >> (ctx.v53.u8[8] & 0x1F);
	ctx.v32.s32[3] = v22.s32[3] >> (ctx.v53.u8[12] & 0x1F);
	// vsubsws v4,v4,v28
	temp.s64 = int64_t(ctx.v4.s32[0]) - int64_t(v28.s32[0]);
	ctx.v4.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v4.s32[1]) - int64_t(v28.s32[1]);
	ctx.v4.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v4.s32[2]) - int64_t(v28.s32[2]);
	ctx.v4.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v4.s32[3]) - int64_t(v28.s32[3]);
	ctx.v4.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsubsws v12,v12,v23
	temp.s64 = int64_t(ctx.v12.s32[0]) - int64_t(v23.s32[0]);
	ctx.v12.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[1]) - int64_t(v23.s32[1]);
	ctx.v12.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[2]) - int64_t(v23.s32[2]);
	ctx.v12.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[3]) - int64_t(v23.s32[3]);
	ctx.v12.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vaddsws v5,v5,v27
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vpkswss128 v63,v32,v32
	simde_mm_store_si128((simde__m128i*)ctx.v63.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v32.s32), simde_mm_load_si128((simde__m128i*)ctx.v32.s32)));
	// vaddsws v3,v2,v1
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v11,v4,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsubsws v8,v7,v12
	temp.s64 = int64_t(ctx.v7.s32[0]) - int64_t(ctx.v12.s32[0]);
	ctx.v8.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v7.s32[1]) - int64_t(ctx.v12.s32[1]);
	ctx.v8.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v7.s32[2]) - int64_t(ctx.v12.s32[2]);
	ctx.v8.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v7.s32[3]) - int64_t(ctx.v12.s32[3]);
	ctx.v8.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vaddsws v0,v5,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v12,v7,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v13,v3,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v21,v8,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v21.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// stvewx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// vaddsws v20,v12,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v20.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsraw128 v62,v21,v53
	ctx.v62.s32[0] = v21.s32[0] >> (ctx.v53.u8[0] & 0x1F);
	ctx.v62.s32[1] = v21.s32[1] >> (ctx.v53.u8[4] & 0x1F);
	ctx.v62.s32[2] = v21.s32[2] >> (ctx.v53.u8[8] & 0x1F);
	ctx.v62.s32[3] = v21.s32[3] >> (ctx.v53.u8[12] & 0x1F);
	// stvewx128 v63,r10,r9
	ea = (ctx.r10.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// vsraw128 v61,v20,v53
	ctx.v61.s32[0] = v20.s32[0] >> (ctx.v53.u8[0] & 0x1F);
	ctx.v61.s32[1] = v20.s32[1] >> (ctx.v53.u8[4] & 0x1F);
	ctx.v61.s32[2] = v20.s32[2] >> (ctx.v53.u8[8] & 0x1F);
	ctx.v61.s32[3] = v20.s32[3] >> (ctx.v53.u8[12] & 0x1F);
	// rlwinm r4,r11,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// vaddsws v19,v6,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v19.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsubsws v18,v6,v13
	temp.s64 = int64_t(ctx.v6.s32[0]) - int64_t(ctx.v13.s32[0]);
	v18.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v6.s32[1]) - int64_t(ctx.v13.s32[1]);
	v18.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v6.s32[2]) - int64_t(ctx.v13.s32[2]);
	v18.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v6.s32[3]) - int64_t(ctx.v13.s32[3]);
	v18.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vpkswss128 v58,v62,v62
	simde_mm_store_si128((simde__m128i*)ctx.v58.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.s32), simde_mm_load_si128((simde__m128i*)ctx.v62.s32)));
	// vsubsws v17,v12,v0
	temp.s64 = int64_t(ctx.v12.s32[0]) - int64_t(ctx.v0.s32[0]);
	v17.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[1]) - int64_t(ctx.v0.s32[1]);
	v17.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[2]) - int64_t(ctx.v0.s32[2]);
	v17.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[3]) - int64_t(ctx.v0.s32[3]);
	v17.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vpkswss128 v57,v61,v61
	simde_mm_store_si128((simde__m128i*)ctx.v57.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.s32), simde_mm_load_si128((simde__m128i*)ctx.v61.s32)));
	// vsubsws v16,v8,v11
	temp.s64 = int64_t(ctx.v8.s32[0]) - int64_t(ctx.v11.s32[0]);
	v16.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v8.s32[1]) - int64_t(ctx.v11.s32[1]);
	v16.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v8.s32[2]) - int64_t(ctx.v11.s32[2]);
	v16.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v8.s32[3]) - int64_t(ctx.v11.s32[3]);
	v16.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsraw128 v60,v19,v53
	ctx.v60.s32[0] = v19.s32[0] >> (ctx.v53.u8[0] & 0x1F);
	ctx.v60.s32[1] = v19.s32[1] >> (ctx.v53.u8[4] & 0x1F);
	ctx.v60.s32[2] = v19.s32[2] >> (ctx.v53.u8[8] & 0x1F);
	ctx.v60.s32[3] = v19.s32[3] >> (ctx.v53.u8[12] & 0x1F);
	// vsraw128 v59,v18,v53
	ctx.v59.s32[0] = v18.s32[0] >> (ctx.v53.u8[0] & 0x1F);
	ctx.v59.s32[1] = v18.s32[1] >> (ctx.v53.u8[4] & 0x1F);
	ctx.v59.s32[2] = v18.s32[2] >> (ctx.v53.u8[8] & 0x1F);
	ctx.v59.s32[3] = v18.s32[3] >> (ctx.v53.u8[12] & 0x1F);
	// vsraw128 v54,v17,v53
	ctx.v54.s32[0] = v17.s32[0] >> (ctx.v53.u8[0] & 0x1F);
	ctx.v54.s32[1] = v17.s32[1] >> (ctx.v53.u8[4] & 0x1F);
	ctx.v54.s32[2] = v17.s32[2] >> (ctx.v53.u8[8] & 0x1F);
	ctx.v54.s32[3] = v17.s32[3] >> (ctx.v53.u8[12] & 0x1F);
	// vsraw128 v52,v16,v53
	ctx.v52.s32[0] = v16.s32[0] >> (ctx.v53.u8[0] & 0x1F);
	ctx.v52.s32[1] = v16.s32[1] >> (ctx.v53.u8[4] & 0x1F);
	ctx.v52.s32[2] = v16.s32[2] >> (ctx.v53.u8[8] & 0x1F);
	ctx.v52.s32[3] = v16.s32[3] >> (ctx.v53.u8[12] & 0x1F);
	// vpkswss128 v56,v60,v60
	simde_mm_store_si128((simde__m128i*)ctx.v56.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.s32), simde_mm_load_si128((simde__m128i*)ctx.v60.s32)));
	// vsubsws v15,v9,v10
	temp.s64 = int64_t(ctx.v9.s32[0]) - int64_t(ctx.v10.s32[0]);
	v15.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v9.s32[1]) - int64_t(ctx.v10.s32[1]);
	v15.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v9.s32[2]) - int64_t(ctx.v10.s32[2]);
	v15.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v9.s32[3]) - int64_t(ctx.v10.s32[3]);
	v15.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// stvewx128 v58,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v58.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkswss128 v55,v59,v59
	simde_mm_store_si128((simde__m128i*)ctx.v55.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v59.s32), simde_mm_load_si128((simde__m128i*)ctx.v59.s32)));
	// stvewx128 v58,r8,r9
	ea = (ctx.r8.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v58.u32[3 - ((ea & 0xF) >> 2)]);
	// add r8,r7,r10
	ctx.r8.u64 = ctx.r7.u64 + ctx.r10.u64;
	// stvewx128 v57,r7,r10
	ea = (ctx.r7.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v57.u32[3 - ((ea & 0xF) >> 2)]);
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// vpkswss128 v50,v54,v54
	simde_mm_store_si128((simde__m128i*)ctx.v50.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v54.s32), simde_mm_load_si128((simde__m128i*)ctx.v54.s32)));
	// vsraw128 v51,v15,v53
	ctx.v51.s32[0] = v15.s32[0] >> (ctx.v53.u8[0] & 0x1F);
	ctx.v51.s32[1] = v15.s32[1] >> (ctx.v53.u8[4] & 0x1F);
	ctx.v51.s32[2] = v15.s32[2] >> (ctx.v53.u8[8] & 0x1F);
	ctx.v51.s32[3] = v15.s32[3] >> (ctx.v53.u8[12] & 0x1F);
	// add r3,r11,r7
	ctx.r3.u64 = ctx.r11.u64 + ctx.r7.u64;
	// vpkswss128 v49,v52,v52
	simde_mm_store_si128((simde__m128i*)ctx.v49.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v52.s32), simde_mm_load_si128((simde__m128i*)ctx.v52.s32)));
	// subf r7,r11,r4
	ctx.r7.u64 = ctx.r4.u64 - ctx.r11.u64;
	// stvewx128 v57,r8,r9
	ea = (ctx.r8.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v57.u32[3 - ((ea & 0xF) >> 2)]);
	// add r8,r6,r10
	ctx.r8.u64 = ctx.r6.u64 + ctx.r10.u64;
	// stvewx128 v56,r6,r10
	ea = (ctx.r6.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v56.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkswss128 v48,v51,v51
	simde_mm_store_si128((simde__m128i*)ctx.v48.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v51.s32), simde_mm_load_si128((simde__m128i*)ctx.v51.s32)));
	// stvewx128 v56,r8,r9
	ea = (ctx.r8.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v56.u32[3 - ((ea & 0xF) >> 2)]);
	// add r8,r5,r10
	ctx.r8.u64 = ctx.r5.u64 + ctx.r10.u64;
	// stvewx128 v55,r5,r10
	ea = (ctx.r5.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v55.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v55,r8,r9
	ea = (ctx.r8.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v55.u32[3 - ((ea & 0xF) >> 2)]);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stvewx128 v50,r0,r8
	ea = (ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v50.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v50,r8,r9
	ea = (ctx.r8.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v50.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v49,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v49.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v49,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v49.u32[3 - ((ea & 0xF) >> 2)]);
	// add r11,r7,r10
	ctx.r11.u64 = ctx.r7.u64 + ctx.r10.u64;
	// stvewx128 v48,r7,r10
	ea = (ctx.r7.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v48.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v48,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v48.u32[3 - ((ea & 0xF) >> 2)]);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_827BD938) {
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
	// bl 0x826a1cb4
	ctx.lr = 0x827BD940;
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
	// bl 0x827af298
	ctx.lr = 0x827BD994;
	sub_827AF298(ctx, base);
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
	// vspltish v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0x2)));
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
	// vspltish v12,4
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x4)));
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// vspltish v5,5
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_set1_epi16(short(0x5)));
	// slw r9,r6,r4
	ctx.r9.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r4.u8 & 0x3F));
	// vspltish v8,0
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_set1_epi16(short(0x0)));
	// bne cr6,0x827bda90
	if (!ctx.cr6.eq) goto loc_827BDA90;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x827bdb88
	if (!ctx.cr6.gt) goto loc_827BDB88;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,4
	ctx.r8.s64 = 4;
loc_827BD9F4:
	// lvx128 v13,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lvx128 v63,r10,r9
	ea = (ctx.r10.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v9,v13,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// vsldoi128 v11,v13,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 14));
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// vsldoi128 v10,v13,v63,4
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 12));
	// vsldoi128 v13,v13,v63,6
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 10));
	// vsubshs v4,v7,v9
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// lvx128 v3,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v1,v11,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v31,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v30,v11,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v29,v11,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v28,v10,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v27,v10,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v26,v30,v1
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vadduhm v25,v29,v11
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vslh v24,v13,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v23,v27,v28
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v27.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// vadduhm v22,v25,v26
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v25.u16), simde_mm_load_si128((simde__m128i*)v26.u16)));
	// vsubshs v21,v13,v24
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)v24.s16)));
	// vadduhm v20,v22,v23
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)v23.u16)));
	// vadduhm v19,v21,v4
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vadduhm v18,v20,v3
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vadduhm v17,v18,v19
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v18.u16), simde_mm_load_si128((simde__m128i*)v19.u16)));
	// vsrah v16,v17,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v62,v16,v16
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v16.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// vor v8,v8,v16
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)v16.u8)));
	// stvewx128 v62,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v62,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// bdnz 0x827bd9f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827BD9F4;
	// vand v0,v8,v2
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// li r3,0
	ctx.r3.s64 = 0;
	// vcmpgtuh. v13,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	ctx.cr6.setFromMask(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), 0xFFFF);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d04
	return;
loc_827BDA90:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x827bdb88
	if (!ctx.cr6.gt) goto loc_827BDB88;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r10,r31,32
	ctx.r10.s64 = r31.s64 + 32;
	// li r9,-32
	ctx.r9.s64 = -32;
	// li r8,-16
	ctx.r8.s64 = -16;
loc_827BDAA8:
	// lvx128 v13,r10,r8
	ea = (ctx.r10.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lvx128 v11,r10,r9
	ea = (ctx.r10.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v3,v13,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v61,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v1,v11,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi v10,v11,v13,2
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8), 14));
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// vsldoi128 v9,v13,v61,2
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), 14));
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// vsubshs v31,v7,v3
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vsldoi v4,v11,v13,4
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8), 12));
	// vsldoi128 v3,v13,v61,4
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), 12));
	// vsubshs v30,v7,v1
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vslh v29,v10,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi v11,v11,v13,6
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8), 10));
	// vslh v28,v9,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi128 v13,v13,v61,6
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), 10));
	// vslh v27,v10,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v26,v10,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v25,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v9,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v21,v27,v29
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v27.u16), simde_mm_load_si128((simde__m128i*)v29.u16)));
	// vadduhm v20,v26,v10
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v26.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vslh v23,v4,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v22,v4,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v19,v3,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v17,v25,v28
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v25.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// vadduhm v16,v24,v9
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vslh v18,v3,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v15,v13,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v10,v22,v23
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)v23.u16)));
	// vadduhm v9,v20,v21
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)v21.u16)));
	// vadduhm v4,v18,v19
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v18.u16), simde_mm_load_si128((simde__m128i*)v19.u16)));
	// vslh v14,v11,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v3,v16,v17
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v16.u16), simde_mm_load_si128((simde__m128i*)v17.u16)));
	// vsubshs v1,v13,v15
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)v15.s16)));
	// lvx128 v13,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v28,v9,v10
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vsubshs v29,v11,v14
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)v14.s16)));
	// vadduhm v27,v3,v4
	simde_mm_store_si128((simde__m128i*)v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vadduhm v26,v1,v31
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)v31.u16)));
	// vadduhm v24,v28,v13
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// vadduhm v25,v29,v30
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)v30.u16)));
	// vadduhm v23,v27,v13
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// lvx128 v13,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v22,v24,v25
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)v25.u16)));
	// vadduhm v21,v23,v26
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)v26.u16)));
	// vsrah v20,v22,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v19,v21,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vor128 v60,v8,v20
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)v20.u8)));
	// vpkshus128 v59,v20,v19
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v19.s16), simde_mm_load_si128((simde__m128i*)v20.s16)));
	// vor128 v8,v60,v19
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)v19.u8)));
	// stvx128 v59,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// bdnz 0x827bdaa8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827BDAA8;
loc_827BDB88:
	// vand v0,v8,v2
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// li r3,0
	ctx.r3.s64 = 0;
	// vcmpgtuh. v13,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	ctx.cr6.setFromMask(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), 0xFFFF);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d04
	return;
}

