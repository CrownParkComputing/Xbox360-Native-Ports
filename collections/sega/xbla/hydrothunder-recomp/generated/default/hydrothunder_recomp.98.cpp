#include "hydrothunder_funcs.98.h"

DEFINE_REX_FUNC(sub_82125B68) {
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
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82125B8C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82125BA4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,6036(r10)
	REX_STORE_U32(ctx.r10.u32 + 6036, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_82128228) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82128230;
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
	ctx.lr = 0x82128254;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8212a538
	ctx.lr = 0x8212825C;
	sub_8212A538(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,-24580
	ctx.r4.s64 = ctx.r11.s64 + -24580;
	// bl 0x82120600
	ctx.lr = 0x8212826C;
	sub_82120600(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-26856
	ctx.r4.s64 = ctx.r11.s64 + -26856;
	// bl 0x82120600
	ctx.lr = 0x8212827C;
	sub_82120600(ctx, base);
	// lwz r3,6072(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6072);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8212829C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82120ac0
	ctx.lr = 0x821282AC;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82120ac0
	ctx.lr = 0x821282BC;
	sub_82120AC0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82128328
	if (ctx.cr6.eq) goto loc_82128328;
	// addi r29,r29,-4
	r29.s64 = r29.s64 + -4;
loc_821282D0:
	// addi r4,r31,8
	ctx.r4.s64 = r31.s64 + 8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82123408
	ctx.lr = 0x821282DC;
	sub_82123408(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821289b8
	ctx.lr = 0x821282E8;
	sub_821289B8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82129138
	ctx.lr = 0x821282F4;
	sub_82129138(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82128308
	if (ctx.cr0.eq) goto loc_82128308;
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// or r11,r28,r11
	ctx.r11.u64 = r28.u64 | ctx.r11.u64;
	// stw r11,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
loc_82128308:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x82128318;
	sub_82120AC0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821282d0
	if (!ctx.cr6.eq) goto loc_821282D0;
loc_82128328:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8212a5b0
	ctx.lr = 0x82128330;
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
	ctx.lr = 0x82128344;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_821313D0) {
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
	// mulli r11,r4,436
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(436));
	// add r30,r11,r3
	r30.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r30,284
	ctx.r4.s64 = r30.s64 + 284;
	// bl 0x8269c528
	ctx.lr = 0x821313FC;
	sub_8269C528(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82131410
	if (ctx.cr0.eq) goto loc_82131410;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,272(r30)
	REX_STORE_U8(r30.u32 + 272, ctx.r11.u8);
	// b 0x82131454
	goto loc_82131454;
loc_82131410:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823ed568
	ctx.lr = 0x82131424;
	sub_823ED568(ctx, base);
	// stw r3,428(r30)
	REX_STORE_U32(r30.u32 + 428, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82131458
	if (ctx.cr0.eq) goto loc_82131458;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r11,272(r30)
	REX_STORE_U8(r30.u32 + 272, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269c718
	ctx.lr = 0x82131444;
	sub_8269C718(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,31
	ctx.r4.s64 = 31;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269c780
	ctx.lr = 0x82131454;
	sub_8269C780(ctx, base);
loc_82131454:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82131458:
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

DEFINE_REX_FUNC(sub_821354C8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
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
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,408
	ctx.r10.s64 = ctx.r1.s64 + 408;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8269d1a8
	ctx.lr = 0x82135504;
	sub_8269D1A8(ctx, base);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821381C0) {
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
	// bl 0x826a1cb4
	ctx.lr = 0x821381C8;
	// stfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -72, f29.u64);
	// stfd f30,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, f30.u64);
	// stfd f31,-56(r1)
	REX_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32106
	r29.s64 = -2104098816;
	// addi r5,r3,64
	ctx.r5.s64 = ctx.r3.s64 + 64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,6096(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 6096);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82173338
	ctx.lr = 0x821381F4;
	sub_82173338(ctx, base);
	// lis r30,-32106
	r30.s64 = -2104098816;
	// lwz r11,6096(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 6096);
	// lwz r3,6092(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6092);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,164(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 164);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,72(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// bctrl 
	ctx.lr = 0x8213821C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6092);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,212(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82138238;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f13,120(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lfs f12,96(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// fmuls f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f9,104(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 104);
	ctx.f9.f64 = double(temp.f32);
	// lfs f6,116(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 116);
	ctx.f6.f64 = double(temp.f32);
	// addi r10,r10,16592
	ctx.r10.s64 = ctx.r10.s64 + 16592;
	// lfs f10,100(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f5,f6,f9
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f9.f64));
	// lfs f8,112(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 112);
	ctx.f8.f64 = double(temp.f32);
	// addi r11,r31,112
	ctx.r11.s64 = r31.s64 + 112;
	// fmuls f7,f8,f10
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// addi r11,r31,96
	ctx.r11.s64 = r31.s64 + 96;
	// lfs f0,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmsubs f11,f8,f9,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f8.f64, ctx.f9.f64, -ctx.f11.f64)));
	// fmsubs f13,f13,f10,f5
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f10.f64, -ctx.f5.f64)));
	// fmsubs f12,f12,f6,f7
	ctx.f12.f64 = double(float(std::fma(ctx.f12.f64, ctx.f6.f64, -ctx.f7.f64)));
	// fmuls f10,f11,f11
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f10,f12,f12,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f12.f64, ctx.f12.f64, ctx.f10.f64)));
	// fmadds f10,f13,f13,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f10.f64)));
	// fsqrts f10,f10
	ctx.f10.f64 = double(float(sqrt(ctx.f10.f64)));
	// fdivs f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f10.f64));
	// fmuls f31,f0,f13
	f31.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmuls f30,f0,f11
	f30.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fmuls f29,f0,f12
	f29.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// bl 0x82126320
	ctx.lr = 0x821382A4;
	sub_82126320(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stfs f31,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lfs f0,112(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lfs f13,116(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// lfs f12,120(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lfs f11,96(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// lfs f31,15048(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	f31.f64 = double(temp.f32);
	// lfs f10,100(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,104(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 104);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,80(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 80);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,84(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 84);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,88(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 88);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,132(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 132);
	ctx.f5.f64 = double(temp.f32);
	// stfs f30,132(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f29,136(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f31,180(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f31,184(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f11,144(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f10,148(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f9,152(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f8,160(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f7,164(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f6,168(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f5,176(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// bl 0x823fbd18
	ctx.lr = 0x82138320;
	sub_823FBD18(ctx, base);
	// lwz r5,136(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 136);
	// lis r11,-32118
	ctx.r11.s64 = -2104885248;
	// lfs f13,128(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// extsw r10,r5
	ctx.r10.s64 = ctx.r5.s32;
	// li r29,0
	r29.s64 = 0;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// addi r27,r11,-2544
	r27.s64 = ctx.r11.s64 + -2544;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// fdivs f30,f13,f0
	f30.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// blt cr6,0x821383c8
	if (ctx.cr6.lt) goto loc_821383C8;
	// addis r11,r27,4
	ctx.r11.s64 = r27.s64 + 262144;
	// addi r28,r11,-4
	r28.s64 = ctx.r11.s64 + -4;
loc_8213835C:
	// lfs f0,132(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f31,100(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// stfs f31,104(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x823fbd18
	ctx.lr = 0x8213837C;
	sub_823FBD18(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// ld r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// std r9,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r11,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// lfs f12,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r28)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r28.u32 + 4, temp.u32);
	// stfs f12,8(r28)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r28.u32 + 8, temp.u32);
	// stfsu f13,12(r28)
	ea = 12 + r28.u32;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ea, temp.u32);
	r28.u32 = ea;
	// bl 0x82135730
	ctx.lr = 0x821383B8;
	sub_82135730(ctx, base);
	// lwz r5,136(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 136);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpw cr6,r29,r5
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r5.s32, ctx.xer);
	// ble cr6,0x8213835c
	if (!ctx.cr6.gt) goto loc_8213835C;
loc_821383C8:
	// lwz r3,6092(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6092);
	// li r7,12
	ctx.r7.s64 = 12;
	// addis r6,r27,4
	ctx.r6.s64 = r27.s64 + 262144;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,248(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 248);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821383E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f30,-64(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8214DFB8) {
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
	ctx.lr = 0x8214DFC0;
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -72, f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r4,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// li r27,0
	r27.s64 = 0;
	// addi r3,r3,88
	ctx.r3.s64 = ctx.r3.s64 + 88;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// stw r5,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r5.u32);
	// stb r27,8(r31)
	REX_STORE_U8(r31.u32 + 8, r27.u8);
	// stw r27,12(r31)
	REX_STORE_U32(r31.u32 + 12, r27.u32);
	// stw r27,84(r31)
	REX_STORE_U32(r31.u32 + 84, r27.u32);
	// bl 0x8212dd98
	ctx.lr = 0x8214DFF8;
	sub_8212DD98(ctx, base);
	// lis r29,-32106
	r29.s64 = -2104098816;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,6092(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6092);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214E020;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r6,10
	ctx.r6.s64 = 10;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82177510
	ctx.lr = 0x8214E038;
	sub_82177510(ctx, base);
	// lwz r11,6092(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 6092);
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r11,76(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214E068;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r6,6
	ctx.r6.s64 = 6;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82177510
	ctx.lr = 0x8214E080;
	sub_82177510(ctx, base);
	// stw r3,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r6,6
	ctx.r6.s64 = 6;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82177510
	ctx.lr = 0x8214E098;
	sub_82177510(ctx, base);
	// lwz r11,6092(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 6092);
	// stw r3,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r3.u32);
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,10
	ctx.r6.s64 = 10;
	// lwz r11,72(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214E0C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,6092(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 6092);
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// stw r3,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r3.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r6,6
	ctx.r6.s64 = 6;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,72(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214E0F8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,6092(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6092);
	// stw r11,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r11.u32);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214E118;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,255
	ctx.r11.s64 = 255;
	// stb r27,83(r1)
	REX_STORE_U8(ctx.r1.u32 + 83, r27.u8);
	// stb r27,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, r27.u8);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stb r11,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// li r7,0
	ctx.r7.s64 = 0;
	// stb r27,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, r27.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,6092(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6092);
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f31,15048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,116(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214E158;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6092);
	// lwz r4,60(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 60);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214E170;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r26,24
	ctx.r11.u64 = r26.u32 & 0xFF;
	// li r25,2
	r25.s64 = 2;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r6,6
	ctx.r6.s64 = 6;
	// li r5,1
	ctx.r5.s64 = 1;
	// and r27,r11,r25
	r27.u64 = ctx.r11.u64 & r25.u64;
	// bl 0x82177510
	ctx.lr = 0x8214E198;
	sub_82177510(ctx, base);
	// lwz r11,6092(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 6092);
	// stw r3,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r3.u32);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,64(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214E1C4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,6092(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 6092);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,256(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 256);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214E1E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8214e334
	if (ctx.cr0.eq) goto loc_8214E334;
	// lwz r3,6092(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6092);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214E1FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// srawi r11,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(r26.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8214e334
	if (!ctx.cr6.gt) goto loc_8214E334;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r3,6092(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6092);
	// srawi r10,r28,1
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x1) != 0);
	ctx.r10.s64 = r28.s32 >> 1;
	// stb r11,8(r31)
	REX_STORE_U8(r31.u32 + 8, ctx.r11.u8);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// addze r26,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	r26.s64 = temp.s64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r11,64(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214E240;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,6092(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 6092);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,6
	ctx.r6.s64 = 6;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r11,72(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 72);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214E26C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,6092(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 6092);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r3,76(r31)
	REX_STORE_U32(r31.u32 + 76, ctx.r3.u32);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r11,76(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214E29C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// extsw r11,r30
	ctx.r11.s64 = r30.s32;
	// stfs f31,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// extsw r10,r26
	ctx.r10.s64 = r26.s32;
	// stfs f31,132(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// std r11,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f13,112(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// std r10,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f0,96(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f31,100(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stw r25,12(r31)
	REX_STORE_U32(r31.u32 + 12, r25.u32);
	// frsp f0,f13
	ctx.f0.f64 = double(float(ctx.f13.f64));
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lwz r8,8(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r7,12(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r6,8(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r6,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r6.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
	// stw r4,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r4.u32);
	// stw r5,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r5.u32);
	// stw r9,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r9.u32);
	// stw r10,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r10.u32);
	// stw r8,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r8.u32);
	// stw r7,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r7.u32);
	// b 0x8214e3b4
	goto loc_8214E3B4;
loc_8214E334:
	// lwz r3,6092(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6092);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214E358;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,6092(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 6092);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r6,6
	ctx.r6.s64 = 6;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,72(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214E384;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,6092(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 6092);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r3,76(r31)
	REX_STORE_U32(r31.u32 + 76, ctx.r3.u32);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,76(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214E3B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8214E3B4:
	// stw r3,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// lwz r3,6092(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6092);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,92(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214E3CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8214e3ec
	if (ctx.cr0.eq) goto loc_8214E3EC;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82177510
	ctx.lr = 0x8214E3E8;
	sub_82177510(ctx, base);
	// stw r3,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r3.u32);
loc_8214E3EC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_8216C170) {
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
	ctx.lr = 0x8216C178;
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r31,0
	r31.s64 = 0;
	// addi r11,r11,25360
	ctx.r11.s64 = ctx.r11.s64 + 25360;
	// stb r31,4(r3)
	REX_STORE_U8(ctx.r3.u32 + 4, r31.u8);
	// addi r30,r3,12
	r30.s64 = ctx.r3.s64 + 12;
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
	// li r3,2432
	ctx.r3.s64 = 2432;
	// stw r31,8(r27)
	REX_STORE_U32(r27.u32 + 8, r31.u32);
	// stw r31,12(r27)
	REX_STORE_U32(r27.u32 + 12, r31.u32);
	// stw r31,16(r27)
	REX_STORE_U32(r27.u32 + 16, r31.u32);
	// stw r31,20(r27)
	REX_STORE_U32(r27.u32 + 20, r31.u32);
	// bl 0x8269d1d0
	ctx.lr = 0x8216C1B4;
	sub_8269D1D0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8269d1b8
	ctx.lr = 0x8216C1C0;
	sub_8269D1B8(ctx, base);
	// li r26,8
	r26.s64 = 8;
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r29,12(r27)
	REX_STORE_U32(r27.u32 + 12, r29.u32);
	// li r3,2176
	ctx.r3.s64 = 2176;
	// stw r26,20(r27)
	REX_STORE_U32(r27.u32 + 20, r26.u32);
	// addi r29,r27,24
	r29.s64 = r27.s64 + 24;
	// stw r31,24(r27)
	REX_STORE_U32(r27.u32 + 24, r31.u32);
	// stw r31,28(r27)
	REX_STORE_U32(r27.u32 + 28, r31.u32);
	// stw r31,32(r27)
	REX_STORE_U32(r27.u32 + 32, r31.u32);
	// bl 0x8269d1d0
	ctx.lr = 0x8216C1E8;
	sub_8269D1D0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8269d1b8
	ctx.lr = 0x8216C1F4;
	sub_8269D1B8(ctx, base);
	// stw r28,24(r27)
	REX_STORE_U32(r27.u32 + 24, r28.u32);
	// stw r26,32(r27)
	REX_STORE_U32(r27.u32 + 32, r26.u32);
	// lwz r11,20(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 20);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bge cr6,0x8216c23c
	if (!ctx.cr6.lt) goto loc_8216C23C;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,1824
	ctx.r3.s64 = 1824;
	// bl 0x8269d1d0
	ctx.lr = 0x8216C214;
	sub_8269D1D0(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mulli r5,r11,304
	ctx.r5.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(304));
	// bl 0x826a1e70
	ctx.lr = 0x8216C228;
	sub_826A1E70(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x8269d1b8
	ctx.lr = 0x8216C230;
	sub_8269D1B8(ctx, base);
	// stw r28,0(r30)
	REX_STORE_U32(r30.u32 + 0, r28.u32);
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
loc_8216C23C:
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// std r31,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, r31.u64);
	// li r10,31
	ctx.r10.s64 = 31;
	// std r31,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, r31.u64);
	// addi r28,r11,-16248
	r28.s64 = ctx.r11.s64 + -16248;
	// stw r31,352(r1)
	REX_STORE_U32(ctx.r1.u32 + 352, r31.u32);
	// li r11,11
	ctx.r11.s64 = 11;
	// stb r31,96(r1)
	REX_STORE_U8(ctx.r1.u32 + 96, r31.u8);
	// addi r9,r28,-772
	ctx.r9.s64 = r28.s64 + -772;
	// stw r11,356(r1)
	REX_STORE_U32(ctx.r1.u32 + 356, ctx.r11.u32);
	// li r8,59
	ctx.r8.s64 = 59;
	// rldicr r11,r10,59,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u64, 59) & 0xF800000000000000;
	// stw r9,376(r1)
	REX_STORE_U32(ctx.r1.u32 + 376, ctx.r9.u32);
	// stw r8,360(r1)
	REX_STORE_U32(ctx.r1.u32 + 360, ctx.r8.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// std r11,368(r1)
	REX_STORE_U64(ctx.r1.u32 + 368, ctx.r11.u64);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8216cd30
	ctx.lr = 0x8216C284;
	sub_8216CD30(ctx, base);
	// li r11,7
	ctx.r11.s64 = 7;
	// addi r10,r28,-148
	ctx.r10.s64 = r28.s64 + -148;
	// std r31,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, r31.u64);
	// li r9,56
	ctx.r9.s64 = 56;
	// std r31,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, r31.u64);
	// rldicr r11,r11,56,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 56) & 0xFF00000000000000;
	// stw r10,376(r1)
	REX_STORE_U32(ctx.r1.u32 + 376, ctx.r10.u32);
	// stw r31,352(r1)
	REX_STORE_U32(ctx.r1.u32 + 352, r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r26,356(r1)
	REX_STORE_U32(ctx.r1.u32 + 356, r26.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r9,360(r1)
	REX_STORE_U32(ctx.r1.u32 + 360, ctx.r9.u32);
	// std r11,368(r1)
	REX_STORE_U64(ctx.r1.u32 + 368, ctx.r11.u64);
	// stb r31,96(r1)
	REX_STORE_U8(ctx.r1.u32 + 96, r31.u8);
	// bl 0x8216cd30
	ctx.lr = 0x8216C2C0;
	sub_8216CD30(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// addi r10,r28,-116
	ctx.r10.s64 = r28.s64 + -116;
	// std r31,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, r31.u64);
	// li r9,4
	ctx.r9.s64 = 4;
	// std r31,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, r31.u64);
	// li r8,54
	ctx.r8.s64 = 54;
	// stw r10,376(r1)
	REX_STORE_U32(ctx.r1.u32 + 376, ctx.r10.u32);
	// rldicr r11,r11,54,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 54) & 0xFFC0000000000000;
	// stw r31,352(r1)
	REX_STORE_U32(ctx.r1.u32 + 352, r31.u32);
	// stw r9,356(r1)
	REX_STORE_U32(ctx.r1.u32 + 356, ctx.r9.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r8,360(r1)
	REX_STORE_U32(ctx.r1.u32 + 360, ctx.r8.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// std r11,368(r1)
	REX_STORE_U64(ctx.r1.u32 + 368, ctx.r11.u64);
	// stb r31,96(r1)
	REX_STORE_U8(ctx.r1.u32 + 96, r31.u8);
	// bl 0x8216cd30
	ctx.lr = 0x8216C300;
	sub_8216CD30(ctx, base);
	// li r11,31
	ctx.r11.s64 = 31;
	// addi r10,r28,-100
	ctx.r10.s64 = r28.s64 + -100;
	// std r31,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, r31.u64);
	// li r9,12
	ctx.r9.s64 = 12;
	// std r31,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, r31.u64);
	// li r8,49
	ctx.r8.s64 = 49;
	// stw r10,376(r1)
	REX_STORE_U32(ctx.r1.u32 + 376, ctx.r10.u32);
	// rldicr r11,r11,49,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 49) & 0xFFFE000000000000;
	// stw r31,352(r1)
	REX_STORE_U32(ctx.r1.u32 + 352, r31.u32);
	// stw r9,356(r1)
	REX_STORE_U32(ctx.r1.u32 + 356, ctx.r9.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r8,360(r1)
	REX_STORE_U32(ctx.r1.u32 + 360, ctx.r8.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// std r11,368(r1)
	REX_STORE_U64(ctx.r1.u32 + 368, ctx.r11.u64);
	// stb r31,96(r1)
	REX_STORE_U8(ctx.r1.u32 + 96, r31.u8);
	// bl 0x8216cd30
	ctx.lr = 0x8216C340;
	sub_8216CD30(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// addi r10,r28,-52
	ctx.r10.s64 = r28.s64 + -52;
	// std r31,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, r31.u64);
	// li r9,13
	ctx.r9.s64 = 13;
	// std r31,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, r31.u64);
	// li r8,45
	ctx.r8.s64 = 45;
	// stw r10,376(r1)
	REX_STORE_U32(ctx.r1.u32 + 376, ctx.r10.u32);
	// rldicr r11,r11,45,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 45) & 0xFFFFE00000000000;
	// stw r31,352(r1)
	REX_STORE_U32(ctx.r1.u32 + 352, r31.u32);
	// stw r9,356(r1)
	REX_STORE_U32(ctx.r1.u32 + 356, ctx.r9.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r8,360(r1)
	REX_STORE_U32(ctx.r1.u32 + 360, ctx.r8.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// std r11,368(r1)
	REX_STORE_U64(ctx.r1.u32 + 368, ctx.r11.u64);
	// stb r31,96(r1)
	REX_STORE_U8(ctx.r1.u32 + 96, r31.u8);
	// bl 0x8216cd30
	ctx.lr = 0x8216C380;
	sub_8216CD30(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r28,376(r1)
	REX_STORE_U32(ctx.r1.u32 + 376, r28.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// std r31,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, r31.u64);
	// li r9,44
	ctx.r9.s64 = 44;
	// std r31,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, r31.u64);
	// rldicr r11,r11,44,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 44) & 0xFFFFFFFFFFFFFFFF;
	// stw r31,352(r1)
	REX_STORE_U32(ctx.r1.u32 + 352, r31.u32);
	// stw r10,356(r1)
	REX_STORE_U32(ctx.r1.u32 + 356, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r9,360(r1)
	REX_STORE_U32(ctx.r1.u32 + 360, ctx.r9.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// std r11,368(r1)
	REX_STORE_U64(ctx.r1.u32 + 368, ctx.r11.u64);
	// stb r31,96(r1)
	REX_STORE_U8(ctx.r1.u32 + 96, r31.u8);
	// bl 0x8216cd30
	ctx.lr = 0x8216C3BC;
	sub_8216CD30(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bge cr6,0x8216c3fc
	if (!ctx.cr6.lt) goto loc_8216C3FC;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,8704
	ctx.r3.s64 = 8704;
	// bl 0x8269d1d0
	ctx.lr = 0x8216C3D4;
	sub_8269D1D0(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// lwz r4,0(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mulli r5,r11,272
	ctx.r5.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(272));
	// bl 0x826a1e70
	ctx.lr = 0x8216C3E8;
	sub_826A1E70(ctx, base);
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// bl 0x8269d1b8
	ctx.lr = 0x8216C3F0;
	sub_8269D1B8(ctx, base);
	// stw r31,0(r29)
	REX_STORE_U32(r29.u32 + 0, r31.u32);
	// li r11,32
	ctx.r11.s64 = 32;
	// stw r11,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r11.u32);
loc_8216C3FC:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8216c690
	ctx.lr = 0x8216C404;
	sub_8216C690(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8217F108) {
	REX_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_8217F2C0) {
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
	ctx.lr = 0x8217F2C8;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// mr r24,r9
	r24.u64 = ctx.r9.u64;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8217f308
	if (ctx.cr6.eq) goto loc_8217F308;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8217F304;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_8217F308:
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(r30.s32, 1, ctx.xer);
	// bne cr6,0x8217f318
	if (!ctx.cr6.eq) goto loc_8217F318;
	// li r31,17
	r31.s64 = 17;
loc_8217F318:
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(r25.s32, 1, ctx.xer);
	// bne cr6,0x8217f324
	if (!ctx.cr6.eq) goto loc_8217F324;
	// ori r31,r31,2
	r31.u64 = r31.u64 | 2;
loc_8217F324:
	// cmpwi cr6,r24,1
	ctx.cr6.compare<int32_t>(r24.s32, 1, ctx.xer);
	// bne cr6,0x8217f330
	if (!ctx.cr6.eq) goto loc_8217F330;
	// ori r31,r31,4
	r31.u64 = r31.u64 | 4;
loc_8217F330:
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82125bc8
	ctx.lr = 0x8217F33C;
	sub_82125BC8(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82144680
	ctx.lr = 0x8217F34C;
	sub_82144680(ctx, base);
	// lwz r3,4(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 4);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r31,80(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bctrl 
	ctx.lr = 0x8217F374;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269d1b8
	ctx.lr = 0x8217F37C;
	sub_8269D1B8(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_82186C18) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// fabs f13,f1
	ctx.f13.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lfs f0,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82186c5c
	if (!ctx.cr6.gt) goto loc_82186C5C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r11,-24980
	ctx.r4.s64 = ctx.r11.s64 + -24980;
	// addi r3,r10,32140
	ctx.r3.s64 = ctx.r10.s64 + 32140;
	// li r5,69
	ctx.r5.s64 = 69;
	// bl 0x821231d0
	ctx.lr = 0x82186C5C;
	sub_821231D0(ctx, base);
loc_82186C5C:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x8269d438
	ctx.lr = 0x82186C64;
	sub_8269D438(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-16(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8218A7B8) {
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
	ctx.lr = 0x8218A7C0;
	// lwz r8,156(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 156);
	// addi r4,r3,112
	ctx.r4.s64 = ctx.r3.s64 + 112;
	// lwz r10,112(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 112);
	// li r27,0
	r27.s64 = 0;
	// lwz r9,144(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 144);
	// lwz r11,148(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 148);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r8,4(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// ble cr6,0x8218a95c
	if (!ctx.cr6.gt) goto loc_8218A95C;
	// addi r5,r9,-4
	ctx.r5.s64 = ctx.r9.s64 + -4;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r29,-32243
	r29.s64 = -2113077248;
	// addi r31,r8,-4
	r31.s64 = ctx.r8.s64 + -4;
	// addi r8,r9,16592
	ctx.r8.s64 = ctx.r9.s64 + 16592;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// lfs f10,15048(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 15048);
	ctx.f10.f64 = double(temp.f32);
	// addi r28,r3,152
	r28.s64 = ctx.r3.s64 + 152;
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f9,292(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 292);
	ctx.f9.f64 = double(temp.f32);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// lfs f0,288(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 288);
	ctx.f0.f64 = double(temp.f32);
	// addi r30,r9,-27152
	r30.s64 = ctx.r9.s64 + -27152;
	// lfs f8,180(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 180);
	ctx.f8.f64 = double(temp.f32);
	// addi r29,r7,-27136
	r29.s64 = ctx.r7.s64 + -27136;
	// lfs f7,12(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
loc_8218A82C:
	// lwz r9,0(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 0);
	// srawi r7,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// addze. r7,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r7.s64 = temp.s64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// ble 0x8218a940
	if (!ctx.cr0.gt) goto loc_8218A940;
	// stfs f7,-112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + -112, temp.u32);
	// addi r7,r3,136
	ctx.r7.s64 = ctx.r3.s64 + 136;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
loc_8218A85C:
	// lfd f12,0(r7)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r7.u32 + 0);
	// addi r26,r8,256
	r26.s64 = ctx.r8.s64 + 256;
	// lfsu f13,4(r5)
	ea = 4 + ctx.r5.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r5.u32 = ea;
	// addi r25,r1,-112
	r25.s64 = ctx.r1.s64 + -112;
	// fmul f13,f13,f12
	ctx.f13.f64 = ctx.f13.f64 * ctx.f12.f64;
	// lvx128 v62,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r24,r1,-128
	r24.s64 = ctx.r1.s64 + -128;
	// addi r23,r1,-124
	r23.s64 = ctx.r1.s64 + -124;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fabs f12,f13
	ctx.f12.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f10
	ctx.cr6.compare(ctx.f13.f64, ctx.f10.f64);
	// mfcr r22
	r22.u64 = ctx.cr0.lt ? 0x80000000 : 0;
	r22.u64 |= ctx.cr0.gt ? 0x40000000 : 0;
	r22.u64 |= ctx.cr0.eq ? 0x20000000 : 0;
	r22.u64 |= ctx.cr0.so ? 0x10000000 : 0;
	r22.u64 |= ctx.cr1.lt ? 0x8000000 : 0;
	r22.u64 |= ctx.cr1.gt ? 0x4000000 : 0;
	r22.u64 |= ctx.cr1.eq ? 0x2000000 : 0;
	r22.u64 |= ctx.cr1.so ? 0x1000000 : 0;
	r22.u64 |= ctx.cr2.lt ? 0x800000 : 0;
	r22.u64 |= ctx.cr2.gt ? 0x400000 : 0;
	r22.u64 |= ctx.cr2.eq ? 0x200000 : 0;
	r22.u64 |= ctx.cr2.so ? 0x100000 : 0;
	r22.u64 |= ctx.cr3.lt ? 0x80000 : 0;
	r22.u64 |= ctx.cr3.gt ? 0x40000 : 0;
	r22.u64 |= ctx.cr3.eq ? 0x20000 : 0;
	r22.u64 |= ctx.cr3.so ? 0x10000 : 0;
	r22.u64 |= ctx.cr4.lt ? 0x8000 : 0;
	r22.u64 |= ctx.cr4.gt ? 0x4000 : 0;
	r22.u64 |= ctx.cr4.eq ? 0x2000 : 0;
	r22.u64 |= ctx.cr4.so ? 0x1000 : 0;
	r22.u64 |= ctx.cr5.lt ? 0x800 : 0;
	r22.u64 |= ctx.cr5.gt ? 0x400 : 0;
	r22.u64 |= ctx.cr5.eq ? 0x200 : 0;
	r22.u64 |= ctx.cr5.so ? 0x100 : 0;
	r22.u64 |= ctx.cr6.lt ? 0x80 : 0;
	r22.u64 |= ctx.cr6.gt ? 0x40 : 0;
	r22.u64 |= ctx.cr6.eq ? 0x20 : 0;
	r22.u64 |= ctx.cr6.so ? 0x10 : 0;
	r22.u64 |= ctx.cr7.lt ? 0x8 : 0;
	r22.u64 |= ctx.cr7.gt ? 0x4 : 0;
	r22.u64 |= ctx.cr7.eq ? 0x2 : 0;
	r22.u64 |= ctx.cr7.so ? 0x1 : 0;
	// fmuls f13,f12,f9
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// rlwinm r21,r22,27,29,29
	r21.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 27) & 0x4;
	// rlwinm r22,r22,30,29,29
	r22.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 30) & 0x4;
	// or r22,r21,r22
	r22.u64 = r21.u64 | r22.u64;
	// lfsx f11,r26,r22
	temp.u32 = REX_LOAD_U32(r26.u32 + r22.u32);
	ctx.f11.f64 = double(temp.f32);
	// fctidz f13,f13
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f13.f64));
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fnmsubs f13,f13,f8,f12
	ctx.f13.f64 = double(float(-std::fma(ctx.f13.f64, ctx.f8.f64, -ctx.f12.f64)));
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fneg f12,f13
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fsel f13,f11,f13,f12
	ctx.f13.f64 = ctx.f11.f64 >= 0.0 ? ctx.f13.f64 : ctx.f12.f64;
	// stfs f13,-108(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -108, temp.u32);
	// fmuls f12,f13,f13
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// stfs f12,-104(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -104, temp.u32);
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f13,-100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -100, temp.u32);
	// lvx128 v63,r0,r25
	ea = (r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v61,v63,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v61.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vspltw128 v63,v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xAA));
	// vmsum4fp128 v62,v61,v62
	simde_mm_store_ps(ctx.v62.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v62.f32), 0xFF));
	// vmulfp128 v61,v61,v63
	simde_mm_store_ps(ctx.v61.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v63.f32)));
	// stvewx128 v62,r0,r24
	ea = (r24.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// lvx128 v63,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum4fp128 v63,v61,v63
	simde_mm_store_ps(ctx.v63.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v63.f32), 0xFF));
	// stvewx128 v63,r0,r23
	ea = (r23.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f11,4(r11)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,-128(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -128);
	ctx.f12.f64 = double(temp.f32);
	// lfs f6,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f13,-124(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -124);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f6,f6,f13
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// fmsubs f11,f11,f12,f6
	ctx.f11.f64 = double(float(std::fma(ctx.f11.f64, ctx.f12.f64, -ctx.f6.f64)));
	// stfs f11,4(r9)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// lfs f6,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfsu f11,8(r11)
	ea = 8 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f11.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fmuls f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmadds f13,f6,f13,f12
	ctx.f13.f64 = double(float(std::fma(ctx.f6.f64, ctx.f13.f64, ctx.f12.f64)));
	// stfsu f13,8(r9)
	ea = 8 + ctx.r9.u32;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// lwz r26,0(r4)
	r26.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// srawi r26,r26,1
	ctx.xer.ca = (r26.s32 < 0) & ((r26.u32 & 0x1) != 0);
	r26.s64 = r26.s32 >> 1;
	// addze r26,r26
	temp.s64 = r26.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < r26.u32;
	r26.s64 = temp.s64;
	// cmpw cr6,r10,r26
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r26.s32, ctx.xer);
	// blt cr6,0x8218a85c
	if (ctx.cr6.lt) goto loc_8218A85C;
loc_8218A940:
	// stfs f10,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// stfsu f10,8(r31)
	ea = 8 + r31.u32;
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ea, temp.u32);
	r31.u32 = ea;
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// cmpw cr6,r27,r10
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8218a82c
	if (ctx.cr6.lt) goto loc_8218A82C;
loc_8218A95C:
	// b 0x826a1cec
	return;
}

DEFINE_REX_FUNC(sub_8219B048) {
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
	ctx.lr = 0x8219B050;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,4(r4)
	r30.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// li r24,1
	r24.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// addi r25,r5,12
	r25.s64 = ctx.r5.s64 + 12;
	// lwz r29,4(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r28,r24
	r28.u64 = r24.u64;
	// b 0x8219b09c
	goto loc_8219B09C;
loc_8219B078:
	// addi r4,r29,12
	ctx.r4.s64 = r29.s64 + 12;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// mr r30,r29
	r30.u64 = r29.u64;
	// bl 0x82120780
	ctx.lr = 0x8219B088;
	sub_82120780(ctx, base);
	// rlwinm. r28,r3,1,31,31
	r28.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x8219b098
	if (ctx.cr0.eq) goto loc_8219B098;
	// lwz r29,0(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 0);
	// b 0x8219b09c
	goto loc_8219B09C;
loc_8219B098:
	// lwz r29,8(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 8);
loc_8219B09C:
	// lbz r11,73(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 73);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8219b078
	if (ctx.cr0.eq) goto loc_8219B078;
	// clrlwi. r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// mr r29,r30
	r29.u64 = r30.u64;
	// beq 0x8219b0fc
	if (ctx.cr0.eq) goto loc_8219B0FC;
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8219b0f4
	if (!ctx.cr6.eq) goto loc_8219B0F4;
	// li r5,1
	ctx.r5.s64 = 1;
loc_8219B0D0:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// bl 0x8219b160
	ctx.lr = 0x8219B0E0;
	sub_8219B160(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r24,4(r31)
	REX_STORE_U8(r31.u32 + 4, r24.u8);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// b 0x8219b150
	goto loc_8219B150;
loc_8219B0F4:
	// bl 0x8219b6a8
	ctx.lr = 0x8219B0F8;
	sub_8219B6A8(ctx, base);
	// lwz r29,80(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8219B0FC:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r29,12
	ctx.r3.s64 = r29.s64 + 12;
	// bl 0x82120780
	ctx.lr = 0x8219B108;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8219b11c
	if (!ctx.cr0.lt) goto loc_8219B11C;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// b 0x8219b0d0
	goto loc_8219B0D0;
loc_8219B11C:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r25,28
	ctx.r3.s64 = r25.s64 + 28;
	// bl 0x82120ac0
	ctx.lr = 0x8219B12C;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82120ac0
	ctx.lr = 0x8219B13C;
	sub_82120AC0(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8219B144;
	sub_8269CE98(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
	// stb r11,4(r31)
	REX_STORE_U8(r31.u32 + 4, ctx.r11.u8);
loc_8219B150:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_821A1CF0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-15416
	ctx.r3.s64 = ctx.r11.s64 + -15416;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821A24E8) {
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
	// bl 0x821a2180
	ctx.lr = 0x821A2500;
	sub_821A2180(ctx, base);
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821a2520
	if (ctx.cr6.eq) goto loc_821A2520;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821A2520;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821A2520:
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

DEFINE_REX_FUNC(sub_821A3DA8) {
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
	// lwz r10,-20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + -20);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// lwz r4,-16(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + -16);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821A3DE0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

DEFINE_REX_FUNC(sub_821A5D08) {
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
	// li r3,112
	ctx.r3.s64 = 112;
	// bl 0x822f6280
	ctx.lr = 0x821A5D20;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x821a5d5c
	if (ctx.cr0.eq) goto loc_821A5D5C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82125dc8
	ctx.lr = 0x821A5D30;
	sub_82125DC8(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-25368
	ctx.r10.s64 = ctx.r10.s64 + -25368;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r11.u32);
	// stw r11,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r11.u32);
	// stw r11,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r11.u32);
	// stb r9,108(r31)
	REX_STORE_U8(r31.u32 + 108, ctx.r9.u8);
	// b 0x821a5d60
	goto loc_821A5D60;
loc_821A5D5C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821A5D60:
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

DEFINE_REX_FUNC(sub_821A7530) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-15336
	ctx.r3.s64 = ctx.r11.s64 + -15336;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821A7770) {
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
	// lwz r3,96(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// bl 0x8269ce98
	ctx.lr = 0x821A778C;
	sub_8269CE98(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r11.u32);
	// stw r11,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_821A8ED8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x821A8EE0;
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
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821A8EFC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82121ec8
	ctx.lr = 0x821A8F08;
	sub_82121EC8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821a8f18
	if (!ctx.cr0.eq) goto loc_821A8F18;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821a8f6c
	goto loc_821A8F6C;
loc_821A8F18:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// addi r28,r11,22808
	r28.s64 = ctx.r11.s64 + 22808;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8215f670
	ctx.lr = 0x821A8F2C;
	sub_8215F670(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r29,96
	ctx.r3.s64 = r29.s64 + 96;
	// bl 0x8215f338
	ctx.lr = 0x821A8F3C;
	sub_8215F338(ctx, base);
	// lwz r10,120(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 120);
	// addi r11,r31,120
	ctx.r11.s64 = r31.s64 + 120;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821a8f5c
	if (!ctx.cr6.eq) goto loc_821A8F5C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8215efb0
	ctx.lr = 0x821A8F5C;
	sub_8215EFB0(ctx, base);
loc_821A8F5C:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821a8fd0
	ctx.lr = 0x821A8F6C;
	sub_821A8FD0(ctx, base);
loc_821A8F6C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_821AD4C8) {
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
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,-15256
	ctx.r4.s64 = ctx.r11.s64 + -15256;
	// bl 0x821fd140
	ctx.lr = 0x821AD4F4;
	sub_821FD140(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821ad520
	if (ctx.cr0.eq) goto loc_821AD520;
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ad514
	if (ctx.cr6.eq) goto loc_821AD514;
	// lwz r4,12(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// b 0x821ad518
	goto loc_821AD518;
loc_821AD514:
	// li r4,0
	ctx.r4.s64 = 0;
loc_821AD518:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821ac3e0
	ctx.lr = 0x821AD520;
	sub_821AC3E0(ctx, base);
loc_821AD520:
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

DEFINE_REX_FUNC(sub_821B0A40) {
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
	ctx.lr = 0x821B0A48;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// bl 0x821d4280
	ctx.lr = 0x821B0A5C;
	sub_821D4280(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// addi r10,r10,-23316
	ctx.r10.s64 = ctx.r10.s64 + -23316;
	// li r3,52
	ctx.r3.s64 = 52;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// addi r29,r31,232
	r29.s64 = r31.s64 + 232;
	// addi r27,r31,236
	r27.s64 = r31.s64 + 236;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,232(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 232, temp.u32);
	// stfs f0,236(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 236, temp.u32);
	// bl 0x822f6280
	ctx.lr = 0x821B0A8C;
	sub_822F6280(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x821b0abc
	if (ctx.cr0.eq) goto loc_821B0ABC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-23356
	ctx.r4.s64 = ctx.r11.s64 + -23356;
	// bl 0x82120600
	ctx.lr = 0x821B0AA4;
	sub_82120600(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r30,1
	r30.s64 = 1;
	// bl 0x821a0530
	ctx.lr = 0x821B0AB8;
	sub_821A0530(ctx, base);
	// b 0x821b0ac0
	goto loc_821B0AC0;
loc_821B0ABC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821B0AC0:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r28,r31,80
	r28.s64 = r31.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x821B0AD4;
	sub_82145710(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b0af0
	if (ctx.cr0.eq) goto loc_821B0AF0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rlwinm r30,r30,0,0,30
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
	// bl 0x82120ac0
	ctx.lr = 0x821B0AF0;
	sub_82120AC0(ctx, base);
loc_821B0AF0:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x821B0AF8;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821b0b28
	if (ctx.cr0.eq) goto loc_821B0B28;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-23336
	ctx.r4.s64 = ctx.r11.s64 + -23336;
	// bl 0x82120600
	ctx.lr = 0x821B0B10;
	sub_82120600(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,2
	r30.u64 = r30.u64 | 2;
	// bl 0x821a0530
	ctx.lr = 0x821B0B24;
	sub_821A0530(ctx, base);
	// b 0x821b0b2c
	goto loc_821B0B2C;
loc_821B0B28:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821B0B2C:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x821B0B3C;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b0b54
	if (ctx.cr0.eq) goto loc_821B0B54;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82120ac0
	ctx.lr = 0x821B0B54;
	sub_82120AC0(ctx, base);
loc_821B0B54:
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x822f6280
	ctx.lr = 0x821B0B5C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821b0b74
	if (ctx.cr0.eq) goto loc_821B0B74;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821b0e38
	ctx.lr = 0x821B0B6C;
	sub_821B0E38(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821b0b78
	goto loc_821B0B78;
loc_821B0B74:
	// li r4,0
	ctx.r4.s64 = 0;
loc_821B0B78:
	// stw r4,220(r31)
	REX_STORE_U32(r31.u32 + 220, ctx.r4.u32);
	// addi r30,r31,96
	r30.s64 = r31.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821d3988
	ctx.lr = 0x821B0B88;
	sub_821D3988(ctx, base);
	// li r3,112
	ctx.r3.s64 = 112;
	// bl 0x822f6280
	ctx.lr = 0x821B0B90;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821b0ba8
	if (ctx.cr0.eq) goto loc_821B0BA8;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821a1e80
	ctx.lr = 0x821B0BA0;
	sub_821A1E80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821b0bac
	goto loc_821B0BAC;
loc_821B0BA8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_821B0BAC:
	// stw r4,224(r31)
	REX_STORE_U32(r31.u32 + 224, ctx.r4.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821d3988
	ctx.lr = 0x821B0BB8;
	sub_821D3988(ctx, base);
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x822f6280
	ctx.lr = 0x821B0BC0;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821b0bd8
	if (ctx.cr0.eq) goto loc_821B0BD8;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821dffe8
	ctx.lr = 0x821B0BD0;
	sub_821DFFE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821b0bdc
	goto loc_821B0BDC;
loc_821B0BD8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_821B0BDC:
	// stw r4,228(r31)
	REX_STORE_U32(r31.u32 + 228, ctx.r4.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821d3988
	ctx.lr = 0x821B0BE8;
	sub_821D3988(ctx, base);
	// li r4,39
	ctx.r4.s64 = 39;
	// lwz r3,224(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 224);
	// bl 0x821a1ff8
	ctx.lr = 0x821B0BF4;
	sub_821A1FF8(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,228(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 228);
	// bl 0x821e00d0
	ctx.lr = 0x821B0C00;
	sub_821E00D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_821BC9E8) {
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
	ctx.lr = 0x821BC9FC;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821bca0c
	if (ctx.cr0.eq) goto loc_821BCA0C;
	// bl 0x821bca20
	ctx.lr = 0x821BCA08;
	sub_821BCA20(ctx, base);
	// b 0x821bca10
	goto loc_821BCA10;
loc_821BCA0C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821BCA10:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821BE2C8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-14944
	ctx.r3.s64 = ctx.r11.s64 + -14944;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821BE500) {
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
	// li r3,152
	ctx.r3.s64 = 152;
	// bl 0x822f6280
	ctx.lr = 0x821BE514;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821be524
	if (ctx.cr0.eq) goto loc_821BE524;
	// bl 0x821be538
	ctx.lr = 0x821BE520;
	sub_821BE538(ctx, base);
	// b 0x821be528
	goto loc_821BE528;
loc_821BE524:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821BE528:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821BF6D8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-14896
	ctx.r3.s64 = ctx.r11.s64 + -14896;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821BF938) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x821BF940;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,128(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 128);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r10,128(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 128);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r5,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// beq cr6,0x821bf994
	if (ctx.cr6.eq) goto loc_821BF994;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821b2d80
	ctx.lr = 0x821BF96C;
	sub_821B2D80(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r11,1592
	ctx.r3.s64 = ctx.r11.s64 + 1592;
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// bl 0x8215f5f8
	ctx.lr = 0x821BF980;
	sub_8215F5F8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x821BF988;
	sub_8215F0F0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r29,8(r31)
	REX_STORE_U32(r31.u32 + 8, r29.u32);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_821BF994:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_821C30F0) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821C31C0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,168(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 168);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,116(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 116);
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_821C3FC8) {
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

DEFINE_REX_FUNC(sub_821C4A88) {
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
	ctx.lr = 0x821C4A90;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r3,124(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 124);
	// bl 0x821914c8
	ctx.lr = 0x821C4AA0;
	sub_821914C8(ctx, base);
	// lbz r11,288(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 288);
	// addi r31,r27,136
	r31.s64 = r27.s64 + 136;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821c4ac8
	if (ctx.cr0.eq) goto loc_821C4AC8;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,6168(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6168);
	// bl 0x821c5618
	ctx.lr = 0x821C4AC0;
	sub_821C5618(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e34c8
	ctx.lr = 0x821C4AC8;
	sub_821E34C8(ctx, base);
loc_821C4AC8:
	// lwz r11,708(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 708);
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r31,r27,448
	r31.s64 = r27.s64 + 448;
	// sth r10,660(r27)
	REX_STORE_U16(r27.u32 + 660, ctx.r10.u16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c4af4
	if (ctx.cr6.eq) goto loc_821C4AF4;
	// lwz r9,200(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 200);
	// sth r10,714(r11)
	REX_STORE_U16(ctx.r11.u32 + 714, ctx.r10.u16);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821c4af4
	if (ctx.cr6.eq) goto loc_821C4AF4;
	// sth r10,4(r9)
	REX_STORE_U16(ctx.r9.u32 + 4, ctx.r10.u16);
loc_821C4AF4:
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 260);
	// li r9,-1
	ctx.r9.s64 = -1;
	// sth r9,214(r31)
	REX_STORE_U16(r31.u32 + 214, ctx.r9.u16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c4b1c
	if (ctx.cr6.eq) goto loc_821C4B1C;
	// lwz r10,200(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 200);
	// sth r9,716(r11)
	REX_STORE_U16(ctx.r11.u32 + 716, ctx.r9.u16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821c4b1c
	if (ctx.cr6.eq) goto loc_821C4B1C;
	// sth r9,6(r10)
	REX_STORE_U16(ctx.r10.u32 + 6, ctx.r9.u16);
loc_821C4B1C:
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 260);
	// addi r3,r27,112
	ctx.r3.s64 = r27.s64 + 112;
	// stw r3,244(r31)
	REX_STORE_U32(r31.u32 + 244, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c4b50
	if (ctx.cr6.eq) goto loc_821C4B50;
	// stw r3,500(r11)
	REX_STORE_U32(ctx.r11.u32 + 500, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821c4b50
	if (ctx.cr6.eq) goto loc_821C4B50;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821C4B50;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821C4B50:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e3cf0
	ctx.lr = 0x821C4B58;
	sub_821E3CF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e4490
	ctx.lr = 0x821C4B60;
	sub_821E4490(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r4,r27,116
	ctx.r4.s64 = r27.s64 + 116;
	// lwz r3,6164(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6164);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821C4B7C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r31,-32106
	r31.s64 = -2104098816;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r29,0
	r29.s64 = 0;
	// addi r11,r11,22008
	ctx.r11.s64 = ctx.r11.s64 + 22008;
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r30,6048(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 6048);
	// bl 0x822f6280
	ctx.lr = 0x821C4BA0;
	sub_822F6280(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r28,r11,-12728
	r28.s64 = ctx.r11.s64 + -12728;
	// beq 0x821c4bc8
	if (ctx.cr0.eq) goto loc_821C4BC8;
	// ld r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r27,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r27.u32);
	// stw r28,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// std r11,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r11.u64);
	// b 0x821c4bcc
	goto loc_821C4BCC;
loc_821C4BC8:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
loc_821C4BCC:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r5,r10,-23868
	ctx.r5.s64 = ctx.r10.s64 + -23868;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821C4BE8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r11,r11,31296
	ctx.r11.s64 = ctx.r11.s64 + 31296;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r31,6048(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 6048);
	// bl 0x822f6280
	ctx.lr = 0x821C4C04;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821c4c24
	if (ctx.cr0.eq) goto loc_821C4C24;
	// ld r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r27,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r27.u32);
	// stw r28,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// std r11,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r11.u64);
	// b 0x821c4c28
	goto loc_821C4C28;
loc_821C4C24:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
loc_821C4C28:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r10,-23804
	ctx.r5.s64 = ctx.r10.s64 + -23804;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821C4C44;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_821D3988) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x821D3990;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x821d3a00
	goto loc_821D3A00;
loc_821D39A8:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821D39BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x821fd140
	ctx.lr = 0x821D39C8;
	sub_821FD140(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821d3a58
	if (!ctx.cr0.eq) goto loc_821D3A58;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821D39E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821fd140
	ctx.lr = 0x821D39F0;
	sub_821FD140(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821d3a58
	if (!ctx.cr0.eq) goto loc_821D3A58;
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
loc_821D3A00:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821d39a8
	if (!ctx.cr6.eq) goto loc_821D39A8;
	// lwz r31,0(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r3,12
	ctx.r3.s64 = 12;
	// lwz r30,4(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x822f6280
	ctx.lr = 0x821D3A18;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821d3a90
	if (ctx.cr0.eq) goto loc_821D3A90;
	// addic. r11,r3,8
	ctx.xer.ca = ctx.r3.u32 > 4294967287;
	ctx.r11.s64 = ctx.r3.s64 + 8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// stw r30,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// beq 0x821d3a34
	if (ctx.cr0.eq) goto loc_821D3A34;
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r28.u32);
loc_821D3A34:
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// ori r10,r10,65534
	ctx.r10.u64 = ctx.r10.u64 | 65534;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bge cr6,0x821d3a78
	if (!ctx.cr6.lt) goto loc_821D3A78;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,-26228
	ctx.r3.s64 = ctx.r11.s64 + -26228;
	// bl 0x822f6020
	ctx.lr = 0x821D3A58;
	sub_822F6020(ctx, base);
loc_821D3A58:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r4,r11,8972
	ctx.r4.s64 = ctx.r11.s64 + 8972;
	// addi r3,r10,9016
	ctx.r3.s64 = ctx.r10.s64 + 9016;
	// li r5,87
	ctx.r5.s64 = 87;
	// bl 0x821231d0
	ctx.lr = 0x821D3A70;
	sub_821231D0(ctx, base);
loc_821D3A70:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_821D3A78:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r29)
	REX_STORE_U32(r29.u32 + 4, ctx.r11.u32);
	// stw r3,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r3,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// b 0x821d3a70
	goto loc_821D3A70;
loc_821D3A90:
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
	ctx.lr = 0x821D3AAC;
	sub_82120018(ctx, base);
}

DEFINE_REX_FUNC(sub_821DBB48) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x821DBB50;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,12116
	ctx.r11.s64 = ctx.r11.s64 + 12116;
	// li r30,0
	r30.s64 = 0;
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stw r30,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r30.u32);
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// bl 0x82120600
	ctx.lr = 0x821DBB84;
	sub_82120600(ctx, base);
	// stw r29,40(r31)
	REX_STORE_U32(r31.u32 + 40, r29.u32);
	// addi r3,r31,44
	ctx.r3.s64 = r31.s64 + 44;
	// li r5,36
	ctx.r5.s64 = 36;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x826a1e70
	ctx.lr = 0x821DBB98;
	sub_826A1E70(ctx, base);
	// stw r30,80(r31)
	REX_STORE_U32(r31.u32 + 80, r30.u32);
	// stw r30,84(r31)
	REX_STORE_U32(r31.u32 + 84, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,88(r31)
	REX_STORE_U32(r31.u32 + 88, r30.u32);
	// stw r30,92(r31)
	REX_STORE_U32(r31.u32 + 92, r30.u32);
	// stw r30,100(r31)
	REX_STORE_U32(r31.u32 + 100, r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_821DD660) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x821DD668;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,12480
	ctx.r11.s64 = ctx.r11.s64 + 12480;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r31,r3,16
	r31.s64 = ctx.r3.s64 + 16;
	// lbz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 28);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821dd698
	if (ctx.cr0.eq) goto loc_821DD698;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x8269d1b8
	ctx.lr = 0x821DD698;
	sub_8269D1B8(ctx, base);
loc_821DD698:
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r10,30592
	ctx.r10.s64 = ctx.r10.s64 + 30592;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stb r9,12(r31)
	REX_STORE_U8(r31.u32 + 12, ctx.r9.u8);
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// bl 0x8214e4b0
	ctx.lr = 0x821DD6C4;
	sub_8214E4B0(ctx, base);
	// clrlwi. r11,r29,31
	ctx.r11.u64 = r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821dd6d4
	if (ctx.cr0.eq) goto loc_821DD6D4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8269ce98
	ctx.lr = 0x821DD6D4;
	sub_8269CE98(ctx, base);
loc_821DD6D4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_821E0060) {
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
	// lwz r3,32(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r11,r11,12940
	ctx.r11.s64 = ctx.r11.s64 + 12940;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x8269ce98
	ctx.lr = 0x821E0090;
	sub_8269CE98(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,30592
	ctx.r11.s64 = ctx.r11.s64 + 30592;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x8214e4b0
	ctx.lr = 0x821E00A4;
	sub_8214E4B0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821e00b4
	if (ctx.cr0.eq) goto loc_821E00B4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x821E00B4;
	sub_8269CE98(ctx, base);
loc_821E00B4:
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

DEFINE_REX_FUNC(sub_821E34C8) {
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
	// lbz r11,152(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 152);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821e35d0
	if (ctx.cr0.eq) goto loc_821E35D0;
	// lwz r11,120(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// lwz r10,148(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 148);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stb r11,32(r10)
	REX_STORE_U8(ctx.r10.u32 + 32, ctx.r11.u8);
	// lwz r11,120(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x821e35bc
	if (ctx.cr6.eq) goto loc_821E35BC;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// lwz r3,6168(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 6168);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e35bc
	if (ctx.cr6.eq) goto loc_821E35BC;
	// lwz r10,160(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 160);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r11,r10,64
	ctx.r11.s64 = ctx.r10.s64 + 64;
	// ld r11,64(r10)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + 64);
	// ld r10,72(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 72);
	// std r11,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, ctx.r11.u64);
	// std r10,8(r9)
	REX_STORE_U64(ctx.r9.u32 + 8, ctx.r10.u64);
	// bne cr6,0x821e35a8
	if (!ctx.cr6.eq) goto loc_821E35A8;
	// lwz r11,168(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 168);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// addi r10,r10,16592
	ctx.r10.s64 = ctx.r10.s64 + 16592;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f0,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fadds f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// lfs f0,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// fadds f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// lfs f0,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// ld r11,8(r9)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// ld r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// std r10,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, ctx.r10.u64);
	// std r11,8(r8)
	REX_STORE_U64(ctx.r8.u32 + 8, ctx.r11.u64);
loc_821E35A8:
	// lwz r11,168(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 168);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r5,r11,32
	ctx.r5.s64 = ctx.r11.s64 + 32;
	// bl 0x82149a48
	ctx.lr = 0x821E35B8;
	sub_82149A48(ctx, base);
	// stfs f1,124(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 124, temp.u32);
loc_821E35BC:
	// lfs f0,124(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,180(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 180, temp.u32);
	// stfs f0,212(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 212, temp.u32);
	// stfs f0,244(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 244, temp.u32);
	// stfs f0,276(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 276, temp.u32);
loc_821E35D0:
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

DEFINE_REX_FUNC(sub_821ECF60) {
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
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,15872
	ctx.r11.s64 = ctx.r11.s64 + 15872;
	// li r30,0
	r30.s64 = 0;
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r30,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// bl 0x82120ac0
	ctx.lr = 0x821ECFA4;
	sub_82120AC0(ctx, base);
	// stw r30,40(r31)
	REX_STORE_U32(r31.u32 + 40, r30.u32);
	// stw r30,48(r31)
	REX_STORE_U32(r31.u32 + 48, r30.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822f6280
	ctx.lr = 0x821ECFB4;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821ed050
	if (ctx.cr0.eq) goto loc_821ED050;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r3,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r3.u32);
	// stw r3,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r9,r11,16592
	ctx.r9.s64 = ctx.r11.s64 + 16592;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// stw r11,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// addi r11,r31,64
	ctx.r11.s64 = r31.s64 + 64;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// lfs f0,172(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 172);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// ld r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// lfs f13,596(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 596);
	ctx.f13.f64 = double(temp.f32);
	// ld r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// std r11,64(r31)
	REX_STORE_U64(r31.u32 + 64, ctx.r11.u64);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// std r10,72(r31)
	REX_STORE_U64(r31.u32 + 72, ctx.r10.u64);
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// ld r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// ld r10,8(r8)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r8.u32 + 8);
	// std r10,88(r31)
	REX_STORE_U64(r31.u32 + 88, ctx.r10.u64);
	// std r9,80(r31)
	REX_STORE_U64(r31.u32 + 80, ctx.r9.u64);
	// stw r30,96(r31)
	REX_STORE_U32(r31.u32 + 96, r30.u32);
	// stw r30,100(r31)
	REX_STORE_U32(r31.u32 + 100, r30.u32);
	// stw r30,104(r31)
	REX_STORE_U32(r31.u32 + 104, r30.u32);
	// stw r30,108(r31)
	REX_STORE_U32(r31.u32 + 108, r30.u32);
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
loc_821ED050:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,18624
	ctx.r11.s64 = ctx.r11.s64 + 18624;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82120018
	ctx.lr = 0x821ED068;
	sub_82120018(ctx, base);
}

DEFINE_REX_FUNC(sub_821F74A8) {
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
	// bl 0x826a1c90
	ctx.lr = 0x821F74B0;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,76(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r18,0
	r18.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821f76bc
	if (!ctx.cr6.gt) goto loc_821F76BC;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32126
	ctx.r9.s64 = -2105409536;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// addi r19,r3,24
	r19.s64 = ctx.r3.s64 + 24;
	// addi r20,r3,48
	r20.s64 = ctx.r3.s64 + 48;
	// li r25,0
	r25.s64 = 0;
	// lis r26,-32106
	r26.s64 = -2104098816;
	// addi r24,r11,-25252
	r24.s64 = ctx.r11.s64 + -25252;
	// addi r23,r10,-25320
	r23.s64 = ctx.r10.s64 + -25320;
	// addi r22,r9,-15488
	r22.s64 = ctx.r9.s64 + -15488;
	// addi r21,r8,23924
	r21.s64 = ctx.r8.s64 + 23924;
loc_821F74F8:
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(r18.s32, 0, ctx.xer);
	// blt cr6,0x821f750c
	if (ctx.cr6.lt) goto loc_821F750C;
	// lwz r11,76(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 76);
	// cmpw cr6,r18,r11
	ctx.cr6.compare<int32_t>(r18.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821f751c
	if (ctx.cr6.lt) goto loc_821F751C;
loc_821F750C:
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// li r5,111
	ctx.r5.s64 = 111;
	// bl 0x821231d0
	ctx.lr = 0x821F751C;
	sub_821231D0(ctx, base);
loc_821F751C:
	// lwz r11,72(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 72);
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// lwz r9,20(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 20);
	// add r31,r25,r11
	r31.u64 = r25.u64 + ctx.r11.u64;
	// lwzx r11,r25,r11
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + ctx.r11.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x821a8cf0
	ctx.lr = 0x821F7540;
	sub_821A8CF0(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,32(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821F7564;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821f75dc
	if (!ctx.cr0.eq) goto loc_821F75DC;
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lfs f0,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r9,92(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lfs f13,16(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r10,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// stw r9,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x822fbfc0
	ctx.lr = 0x821F75B0;
	sub_822FBFC0(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x822fbeb0
	ctx.lr = 0x821F75C0;
	sub_822FBEB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821f75d4
	if (!ctx.cr0.eq) goto loc_821F75D4;
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lfs f1,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82300070
	ctx.lr = 0x821F75D4;
	sub_82300070(ctx, base);
loc_821F75D4:
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x822fbe20
	ctx.lr = 0x821F75DC;
	sub_822FBE20(ctx, base);
loc_821F75DC:
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x821a8cf0
	ctx.lr = 0x821F75F8;
	sub_821A8CF0(ctx, base);
	// lwz r11,6184(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 6184);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82150fc0
	ctx.lr = 0x821F760C;
	sub_82150FC0(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x821f76a8
	if (ctx.cr0.eq) goto loc_821F76A8;
	// lwz r3,6184(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 6184);
	// bl 0x82151118
	ctx.lr = 0x821F761C;
	sub_82151118(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x821f76a8
	if (ctx.cr0.eq) goto loc_821F76A8;
	// lwz r3,124(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 124);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821F7638;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r27,16(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// b 0x821f7674
	goto loc_821F7674;
loc_821F7640:
	// lwz r29,32(r27)
	r29.u64 = REX_LOAD_U32(r27.u32 + 32);
	// b 0x821f7668
	goto loc_821F7668;
loc_821F7648:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// lwz r3,16(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 16);
	// bl 0x821fd140
	ctx.lr = 0x821F7654;
	sub_821FD140(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821f7664
	if (ctx.cr0.eq) goto loc_821F7664;
	// lfs f0,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 28, temp.u32);
loc_821F7664:
	// lwz r29,4(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 4);
loc_821F7668:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x821f7648
	if (!ctx.cr6.eq) goto loc_821F7648;
	// lwz r27,16(r27)
	r27.u64 = REX_LOAD_U32(r27.u32 + 16);
loc_821F7674:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// bne cr6,0x821f7640
	if (!ctx.cr6.eq) goto loc_821F7640;
	// lwz r3,124(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 124);
	// addi r4,r31,16
	ctx.r4.s64 = r31.s64 + 16;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821F7694;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,124(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 124);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821F76A8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821F76A8:
	// lwz r11,76(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 76);
	// addi r18,r18,1
	r18.s64 = r18.s64 + 1;
	// addi r25,r25,48
	r25.s64 = r25.s64 + 48;
	// cmpw cr6,r18,r11
	ctx.cr6.compare<int32_t>(r18.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821f74f8
	if (ctx.cr6.lt) goto loc_821F74F8;
loc_821F76BC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,76(r30)
	REX_STORE_U32(r30.u32 + 76, ctx.r11.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1ce0
	return;
}

DEFINE_REX_FUNC(sub_82205608) {
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
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,30140
	ctx.r11.s64 = ctx.r11.s64 + 30140;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x82205634
	if (ctx.cr0.eq) goto loc_82205634;
	// bl 0x8269ce98
	ctx.lr = 0x82205634;
	sub_8269CE98(ctx, base);
loc_82205634:
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

DEFINE_REX_FUNC(sub_82207920) {
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
	ctx.lr = 0x82207928;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,69(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 69);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r26,4(r3)
	r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x822079e4
	if (!ctx.cr0.eq) goto loc_822079E4;
	// li r3,72
	ctx.r3.s64 = 72;
	// addi r27,r4,12
	r27.s64 = ctx.r4.s64 + 12;
	// bl 0x822f6280
	ctx.lr = 0x82207954;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x822079f0
	if (ctx.cr0.eq) goto loc_822079F0;
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// addic. r28,r31,12
	ctx.xer.ca = r31.u32 > 4294967283;
	r28.s64 = r31.s64 + 12;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// stb r11,68(r31)
	REX_STORE_U8(r31.u32 + 68, ctx.r11.u8);
	// stb r11,69(r31)
	REX_STORE_U8(r31.u32 + 69, ctx.r11.u8);
	// beq 0x822079a0
	if (ctx.cr0.eq) goto loc_822079A0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82120d70
	ctx.lr = 0x82207994;
	sub_82120D70(ctx, base);
	// addi r4,r27,28
	ctx.r4.s64 = r27.s64 + 28;
	// addi r3,r28,28
	ctx.r3.s64 = r28.s64 + 28;
	// bl 0x82120d70
	ctx.lr = 0x822079A0;
	sub_82120D70(ctx, base);
loc_822079A0:
	// stw r25,4(r31)
	REX_STORE_U32(r31.u32 + 4, r25.u32);
	// lbz r11,68(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 68);
	// stb r11,68(r31)
	REX_STORE_U8(r31.u32 + 68, ctx.r11.u8);
	// lbz r11,69(r26)
	ctx.r11.u64 = REX_LOAD_U8(r26.u32 + 69);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822079bc
	if (ctx.cr0.eq) goto loc_822079BC;
	// mr r26,r31
	r26.u64 = r31.u64;
loc_822079BC:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82207920
	ctx.lr = 0x822079CC;
	sub_82207920(ctx, base);
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r4,8(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82207920
	ctx.lr = 0x822079E0;
	sub_82207920(ctx, base);
	// stw r3,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r3.u32);
loc_822079E4:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cfc
	return;
loc_822079F0:
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
	ctx.lr = 0x82207A0C;
	sub_82120018(ctx, base);
}

DEFINE_REX_FUNC(sub_8220D518) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8220D520;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	r28.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// bl 0x822e8048
	ctx.lr = 0x8220D534;
	sub_822E8048(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r28,260(r31)
	REX_STORE_U32(r31.u32 + 260, r28.u32);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r11,r11,-30764
	ctx.r11.s64 = ctx.r11.s64 + -30764;
	// addi r3,r31,264
	ctx.r3.s64 = r31.s64 + 264;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// addi r4,r10,-31392
	ctx.r4.s64 = ctx.r10.s64 + -31392;
	// addi r30,r31,260
	r30.s64 = r31.s64 + 260;
	// bl 0x82120600
	ctx.lr = 0x8220D558;
	sub_82120600(ctx, base);
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x8220D560;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x8220d590
	if (ctx.cr0.eq) goto loc_8220D590;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,24544
	ctx.r4.s64 = ctx.r11.s64 + 24544;
	// bl 0x82120600
	ctx.lr = 0x8220D578;
	sub_82120600(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r28,1
	r28.s64 = 1;
	// bl 0x82197628
	ctx.lr = 0x8220D58C;
	sub_82197628(ctx, base);
	// b 0x8220d594
	goto loc_8220D594;
loc_8220D590:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_8220D594:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82145710
	ctx.lr = 0x8220D5A4;
	sub_82145710(ctx, base);
	// clrlwi. r11,r28,31
	ctx.r11.u64 = r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8220d5bc
	if (ctx.cr0.eq) goto loc_8220D5BC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x8220D5BC;
	sub_82120AC0(ctx, base);
loc_8220D5BC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82212DE0) {
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
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x822f6280
	ctx.lr = 0x82212DF8;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x82212e1c
	if (ctx.cr0.eq) goto loc_82212E1C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e7348
	ctx.lr = 0x82212E08;
	sub_822E7348(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,-28552
	ctx.r11.s64 = ctx.r11.s64 + -28552;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// b 0x82212e20
	goto loc_82212E20;
loc_82212E1C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82212E20:
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

DEFINE_REX_FUNC(sub_82216D58) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82216D60;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// bge cr6,0x82216e00
	if (!ctx.cr6.lt) goto loc_82216E00;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82216d94
	if (ctx.cr6.eq) goto loc_82216D94;
	// li r4,16
	ctx.r4.s64 = 16;
	// rlwinm r3,r29,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x8269d1d0
	ctx.lr = 0x82216D8C;
	sub_8269D1D0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x82216d98
	goto loc_82216D98;
loc_82216D94:
	// li r30,0
	r30.s64 = 0;
loc_82216D98:
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82216ddc
	if (!ctx.cr6.gt) goto loc_82216DDC;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_82216DAC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82216dcc
	if (ctx.cr6.eq) goto loc_82216DCC;
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 8);
	// add r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwzx r8,r8,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r8,4(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
loc_82216DCC:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne 0x82216dac
	if (!ctx.cr0.eq) goto loc_82216DAC;
loc_82216DDC:
	// lbz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82216df0
	if (ctx.cr0.eq) goto loc_82216DF0;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x8269d1b8
	ctx.lr = 0x82216DF0;
	sub_8269D1B8(ctx, base);
loc_82216DF0:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
	// stw r29,4(r31)
	REX_STORE_U32(r31.u32 + 4, r29.u32);
	// stb r11,12(r31)
	REX_STORE_U8(r31.u32 + 12, ctx.r11.u8);
loc_82216E00:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8221EE98) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8221EEA0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// subf r10,r9,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r9.u64;
	// srawi r10,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// ble cr6,0x8221ef38
	if (!ctx.cr6.gt) goto loc_8221EF38;
	// rlwinm r10,r4,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8221f024
	if (ctx.cr6.eq) goto loc_8221F024;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8221ef10
	if (ctx.cr6.eq) goto loc_8221EF10;
loc_8221EEE0:
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// stw r8,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r8,4(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stw r8,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// lwz r8,8(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// stw r8,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// lwz r8,12(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// stw r8,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r8.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8221eee0
	if (!ctx.cr6.eq) goto loc_8221EEE0;
loc_8221EF10:
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8221ef30
	if (ctx.cr6.eq) goto loc_8221EF30;
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
loc_8221EF24:
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8221ef24
	if (!ctx.cr6.eq) goto loc_8221EF24;
loc_8221EF30:
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// b 0x8221f024
	goto loc_8221F024;
loc_8221EF38:
	// bge cr6,0x8221f024
	if (!ctx.cr6.lt) goto loc_8221F024;
	// lis r8,4095
	ctx.r8.s64 = 268369920;
	// subf r11,r10,r30
	ctx.r11.u64 = r30.u64 - ctx.r10.u64;
	// ori r8,r8,65535
	ctx.r8.u64 = ctx.r8.u64 | 65535;
	// subf r7,r11,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r11.u64;
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8221ef60
	if (!ctx.cr6.lt) goto loc_8221EF60;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,-26548
	ctx.r3.s64 = ctx.r11.s64 + -26548;
	// bl 0x822f6020
	ctx.lr = 0x8221EF60;
	sub_822F6020(ctx, base);
loc_8221EF60:
	// lwz r7,8(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 8);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r29,0
	r29.s64 = 0;
	// subf r11,r9,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r9.u64;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8221efa8
	if (!ctx.cr6.gt) goto loc_8221EFA8;
	// rlwinm r9,r11,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// subf r8,r9,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r9.u64;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8221ef94
	if (ctx.cr6.lt) goto loc_8221EF94;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_8221EF94:
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8221efa0
	if (!ctx.cr6.lt) goto loc_8221EFA0;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
loc_8221EFA0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821549e8
	ctx.lr = 0x8221EFA8;
	sub_821549E8(ctx, base);
loc_8221EFA8:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// subf r10,r10,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r10.u64;
	// srawi r10,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// subf. r10,r10,r30
	ctx.r10.u64 = r30.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8221f004
	if (ctx.cr0.eq) goto loc_8221F004;
loc_8221EFC0:
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// std r29,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, r29.u64);
	// std r29,8(r9)
	REX_STORE_U64(ctx.r9.u32 + 8, r29.u64);
	// beq cr6,0x8221eff8
	if (ctx.cr6.eq) goto loc_8221EFF8;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,4(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r6,8(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r9,12(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r7,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// stw r6,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// stw r9,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
loc_8221EFF8:
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bne 0x8221efc0
	if (!ctx.cr0.eq) goto loc_8221EFC0;
loc_8221F004:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// subf r10,r10,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r10.u64;
	// srawi r10,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// subf r10,r10,r30
	ctx.r10.u64 = r30.u64 - ctx.r10.u64;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
loc_8221F024:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8222A918) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8222A920;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	r28.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// bl 0x82229520
	ctx.lr = 0x8222A934;
	sub_82229520(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r30,r31,112
	r30.s64 = r31.s64 + 112;
	// addi r11,r11,-22076
	ctx.r11.s64 = ctx.r11.s64 + -22076;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82120ac0
	ctx.lr = 0x8222A954;
	sub_82120AC0(ctx, base);
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x822f6280
	ctx.lr = 0x8222A95C;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x8222a98c
	if (ctx.cr0.eq) goto loc_8222A98C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-22964
	ctx.r4.s64 = ctx.r11.s64 + -22964;
	// bl 0x82120600
	ctx.lr = 0x8222A974;
	sub_82120600(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r28,1
	r28.s64 = 1;
	// bl 0x821bf110
	ctx.lr = 0x8222A988;
	sub_821BF110(ctx, base);
	// b 0x8222a990
	goto loc_8222A990;
loc_8222A98C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8222A990:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82145710
	ctx.lr = 0x8222A9A0;
	sub_82145710(ctx, base);
	// clrlwi. r11,r28,31
	ctx.r11.u64 = r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8222a9b8
	if (ctx.cr0.eq) goto loc_8222A9B8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x8222A9B8;
	sub_82120AC0(ctx, base);
loc_8222A9B8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8222EBE0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ld r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// lfs f0,15048(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// std r7,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, ctx.r7.u64);
	// ld r8,8(r10)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// std r8,8(r9)
	REX_STORE_U64(ctx.r9.u32 + 8, ctx.r8.u64);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stb r11,104(r1)
	REX_STORE_U8(ctx.r1.u32 + 104, ctx.r11.u8);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stb r11,128(r1)
	REX_STORE_U8(ctx.r1.u32 + 128, ctx.r11.u8);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// bl 0x8222ec48
	ctx.lr = 0x8222EC38;
	sub_8222EC48(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82233190) {
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
	// addi r3,r3,848
	ctx.r3.s64 = ctx.r3.s64 + 848;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x822ee9a0
	ctx.lr = 0x822331B4;
	sub_822EE9A0(ctx, base);
	// addi r3,r31,788
	ctx.r3.s64 = r31.s64 + 788;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82120ac0
	ctx.lr = 0x822331C4;
	sub_82120AC0(ctx, base);
	// addi r3,r31,760
	ctx.r3.s64 = r31.s64 + 760;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82120ac0
	ctx.lr = 0x822331D4;
	sub_82120AC0(ctx, base);
	// addi r3,r31,480
	ctx.r3.s64 = r31.s64 + 480;
	// bl 0x821c49e0
	ctx.lr = 0x822331DC;
	sub_821C49E0(ctx, base);
	// addi r3,r31,168
	ctx.r3.s64 = r31.s64 + 168;
	// bl 0x821c4938
	ctx.lr = 0x822331E4;
	sub_821C4938(ctx, base);
	// addi r3,r31,140
	ctx.r3.s64 = r31.s64 + 140;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82120ac0
	ctx.lr = 0x822331F4;
	sub_82120AC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82178388
	ctx.lr = 0x822331FC;
	sub_82178388(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8223320c
	if (ctx.cr0.eq) goto loc_8223320C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8223320C;
	sub_8269CE98(ctx, base);
loc_8223320C:
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

DEFINE_REX_FUNC(sub_82236E50) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r3,448
	r31.s64 = ctx.r3.s64 + 448;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,720(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 720);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821e3c50
	ctx.lr = 0x82236E78;
	sub_821E3C50(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lfs f0,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,724(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 724);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,708(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 708);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// ld r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// ld r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// std r9,672(r30)
	REX_STORE_U64(r30.u32 + 672, ctx.r9.u64);
	// std r10,680(r30)
	REX_STORE_U64(r30.u32 + 680, ctx.r10.u64);
	// beq cr6,0x82236eb8
	if (ctx.cr6.eq) goto loc_82236EB8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e4980
	ctx.lr = 0x82236EB8;
	sub_821E4980(ctx, base);
loc_82236EB8:
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

DEFINE_REX_FUNC(sub_8223B1A0) {
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
	// li r3,3944
	ctx.r3.s64 = 3944;
	// bl 0x822f6280
	ctx.lr = 0x8223B1B4;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8223b1c4
	if (ctx.cr0.eq) goto loc_8223B1C4;
	// bl 0x8223b1d8
	ctx.lr = 0x8223B1C0;
	sub_8223B1D8(ctx, base);
	// b 0x8223b1c8
	goto loc_8223B1C8;
loc_8223B1C4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8223B1C8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8223D210) {
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
	// bl 0x826a1ca4
	ctx.lr = 0x8223D218;
	// stfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -96, f30.u64);
	// stfd f31,-88(r1)
	REX_STORE_U64(ctx.r1.u32 + -88, f31.u64);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// addi r29,r11,-17168
	r29.s64 = ctx.r11.s64 + -17168;
	// bne cr6,0x8223d254
	if (!ctx.cr6.eq) goto loc_8223D254;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r11,-17528
	ctx.r3.s64 = ctx.r11.s64 + -17528;
	// li r5,877
	ctx.r5.s64 = 877;
	// bl 0x821231d0
	ctx.lr = 0x8223D254;
	sub_821231D0(ctx, base);
loc_8223D254:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8223d270
	if (!ctx.cr6.eq) goto loc_8223D270;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// li r5,878
	ctx.r5.s64 = 878;
	// bl 0x821231d0
	ctx.lr = 0x8223D270;
	sub_821231D0(ctx, base);
loc_8223D270:
	// lfs f0,568(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 568);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f13,552(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 552);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// fadds f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// addi r25,r11,16592
	r25.s64 = ctx.r11.s64 + 16592;
	// lfs f0,564(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 564);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lwz r11,128(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 128);
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// lfs f31,15048(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	f31.f64 = double(temp.f32);
	// addi r23,r11,16
	r23.s64 = ctx.r11.s64 + 16;
	// lfs f0,4(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r24,r31,240
	r24.s64 = r31.s64 + 240;
	// stfs f31,112(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// ld r11,8(r9)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// ld r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// std r10,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, ctx.r10.u64);
	// std r11,8(r8)
	REX_STORE_U64(ctx.r8.u32 + 8, ctx.r11.u64);
	// bl 0x823fbd18
	ctx.lr = 0x8223D2D8;
	sub_823FBD18(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// ld r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// std r9,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r11,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// bl 0x823fbd18
	ctx.lr = 0x8223D300;
	sub_823FBD18(ctx, base);
	// lbz r11,224(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 224);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// ld r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r3.u32 + 8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ld r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// std r9,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// std r11,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// bne 0x8223d668
	if (!ctx.cr0.eq) goto loc_8223D668;
	// lwz r3,228(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 228);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223d56c
	if (ctx.cr6.eq) goto loc_8223D56C;
	// bl 0x82151d50
	ctx.lr = 0x8223D330;
	sub_82151D50(ctx, base);
	// lwz r11,228(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 228);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lfs f30,168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 168);
	f30.f64 = double(temp.f32);
	// bl 0x82151d50
	ctx.lr = 0x8223D344;
	sub_82151D50(ctx, base);
	// addi r5,r3,64
	ctx.r5.s64 = ctx.r3.s64 + 64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r6,r29,32
	ctx.r6.s64 = r29.s64 + 32;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821d7b18
	ctx.lr = 0x8223D360;
	sub_821D7B18(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8223d56c
	if (ctx.cr0.eq) goto loc_8223D56C;
	// lis r28,-32106
	r28.s64 = -2104098816;
	// lwz r29,228(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 228);
	// lwz r27,460(r30)
	r27.u64 = REX_LOAD_U32(r30.u32 + 460);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,6288(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 6288);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223D38C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,36(r27)
	REX_STORE_U32(r27.u32 + 36, ctx.r3.u32);
	// lwz r3,460(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 460);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223D3A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r27,80(r1)
	r27.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8223d460
	if (ctx.cr0.eq) goto loc_8223D460;
	// lbz r11,165(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 165);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8223d3c8
	if (!ctx.cr0.eq) goto loc_8223D3C8;
	// lbz r11,166(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 166);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8223d460
	if (ctx.cr0.eq) goto loc_8223D460;
loc_8223D3C8:
	// clrlwi. r11,r27,24
	ctx.r11.u64 = r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8223d460
	if (ctx.cr0.eq) goto loc_8223D460;
	// lwz r11,460(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 460);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x8223d3e8
	if (ctx.cr6.lt) goto loc_8223D3E8;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_8223D3E8:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82120600
	ctx.lr = 0x8223D3F4;
	sub_82120600(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r6,16(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 16);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822318e8
	ctx.lr = 0x8223D408;
	sub_822318E8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8223d43c
	if (ctx.cr0.eq) goto loc_8223D43C;
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// lfs f13,128(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,188(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 188, temp.u32);
	// addi r3,r31,196
	ctx.r3.s64 = r31.s64 + 196;
	// lwz r4,96(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82120b20
	ctx.lr = 0x8223D434;
	sub_82120B20(ctx, base);
	// lfs f0,700(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r25.u32 + 700);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,192(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 192, temp.u32);
loc_8223D43C:
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// lwz r5,16(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 16);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lfs f1,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82231718
	ctx.lr = 0x8223D450;
	sub_82231718(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82120ac0
	ctx.lr = 0x8223D460;
	sub_82120AC0(ctx, base);
loc_8223D460:
	// lwz r3,6288(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 6288);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223D478;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,228(r31)
	REX_STORE_U32(r31.u32 + 228, ctx.r3.u32);
	// lbz r11,113(r26)
	ctx.r11.u64 = REX_LOAD_U8(r26.u32 + 113);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8223d528
	if (ctx.cr0.eq) goto loc_8223D528;
	// lbz r11,166(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 166);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8223d56c
	if (ctx.cr0.eq) goto loc_8223D56C;
	// clrlwi. r11,r27,24
	ctx.r11.u64 = r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// beq 0x8223d4a8
	if (ctx.cr0.eq) goto loc_8223D4A8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x8223d4bc
	goto loc_8223D4BC;
loc_8223D4A8:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bge cr6,0x8223d4c0
	if (!ctx.cr6.lt) goto loc_8223D4C0;
	// li r11,-1
	ctx.r11.s64 = -1;
loc_8223D4BC:
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
loc_8223D4C0:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x8223d500
	if (ctx.cr6.lt) goto loc_8223D500;
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r25,256
	ctx.r10.s64 = r25.s64 + 256;
	// lfs f13,28(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f31,20(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 20, temp.u32);
	// fcmpu cr6,f12,f31
	ctx.cr6.compare(ctx.f12.f64, f31.f64);
	// mfcr r9
	ctx.r9.u64 = ctx.cr0.lt ? 0x80000000 : 0;
	ctx.r9.u64 |= ctx.cr0.gt ? 0x40000000 : 0;
	ctx.r9.u64 |= ctx.cr0.eq ? 0x20000000 : 0;
	ctx.r9.u64 |= ctx.cr0.so ? 0x10000000 : 0;
	ctx.r9.u64 |= ctx.cr1.lt ? 0x8000000 : 0;
	ctx.r9.u64 |= ctx.cr1.gt ? 0x4000000 : 0;
	ctx.r9.u64 |= ctx.cr1.eq ? 0x2000000 : 0;
	ctx.r9.u64 |= ctx.cr1.so ? 0x1000000 : 0;
	ctx.r9.u64 |= ctx.cr2.lt ? 0x800000 : 0;
	ctx.r9.u64 |= ctx.cr2.gt ? 0x400000 : 0;
	ctx.r9.u64 |= ctx.cr2.eq ? 0x200000 : 0;
	ctx.r9.u64 |= ctx.cr2.so ? 0x100000 : 0;
	ctx.r9.u64 |= ctx.cr3.lt ? 0x80000 : 0;
	ctx.r9.u64 |= ctx.cr3.gt ? 0x40000 : 0;
	ctx.r9.u64 |= ctx.cr3.eq ? 0x20000 : 0;
	ctx.r9.u64 |= ctx.cr3.so ? 0x10000 : 0;
	ctx.r9.u64 |= ctx.cr4.lt ? 0x8000 : 0;
	ctx.r9.u64 |= ctx.cr4.gt ? 0x4000 : 0;
	ctx.r9.u64 |= ctx.cr4.eq ? 0x2000 : 0;
	ctx.r9.u64 |= ctx.cr4.so ? 0x1000 : 0;
	ctx.r9.u64 |= ctx.cr5.lt ? 0x800 : 0;
	ctx.r9.u64 |= ctx.cr5.gt ? 0x400 : 0;
	ctx.r9.u64 |= ctx.cr5.eq ? 0x200 : 0;
	ctx.r9.u64 |= ctx.cr5.so ? 0x100 : 0;
	ctx.r9.u64 |= ctx.cr6.lt ? 0x80 : 0;
	ctx.r9.u64 |= ctx.cr6.gt ? 0x40 : 0;
	ctx.r9.u64 |= ctx.cr6.eq ? 0x20 : 0;
	ctx.r9.u64 |= ctx.cr6.so ? 0x10 : 0;
	ctx.r9.u64 |= ctx.cr7.lt ? 0x8 : 0;
	ctx.r9.u64 |= ctx.cr7.gt ? 0x4 : 0;
	ctx.r9.u64 |= ctx.cr7.eq ? 0x2 : 0;
	ctx.r9.u64 |= ctx.cr7.so ? 0x1 : 0;
	// rlwinm r8,r9,27,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x4;
	// rlwinm r9,r9,30,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x4;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// lfsx f12,r10,r9
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	ctx.f12.f64 = double(temp.f32);
	// fsel f0,f12,f13,f0
	ctx.f0.f64 = ctx.f12.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 28, temp.u32);
loc_8223D500:
	// lwz r10,116(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 116);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8223d51c
	if (!ctx.cr6.eq) goto loc_8223D51C;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8223d780
	ctx.lr = 0x8223D51C;
	sub_8223D780(ctx, base);
loc_8223D51C:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// stw r11,676(r30)
	REX_STORE_U32(r30.u32 + 676, ctx.r11.u32);
	// b 0x8223d56c
	goto loc_8223D56C;
loc_8223D528:
	// lbz r11,164(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 164);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8223d540
	if (!ctx.cr0.eq) goto loc_8223D540;
	// lbz r11,166(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 166);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8223d550
	if (ctx.cr0.eq) goto loc_8223D550;
loc_8223D540:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// stw r11,676(r30)
	REX_STORE_U32(r30.u32 + 676, ctx.r11.u32);
loc_8223D550:
	// lbz r11,166(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 166);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8223d56c
	if (ctx.cr0.eq) goto loc_8223D56C;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8223d780
	ctx.lr = 0x8223D56C;
	sub_8223D780(ctx, base);
loc_8223D56C:
	// lwz r11,320(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 320);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223d668
	if (ctx.cr6.eq) goto loc_8223D668;
	// addi r29,r30,720
	r29.s64 = r30.s64 + 720;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x823fbd18
	ctx.lr = 0x8223D58C;
	sub_823FBD18(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// ld r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// std r9,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r11,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// bl 0x823fbd18
	ctx.lr = 0x8223D5B4;
	sub_823FBD18(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r6,320(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 320);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lfs f1,736(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 736);
	ctx.f1.f64 = double(temp.f32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// ld r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// std r9,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r11,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// bl 0x8222f668
	ctx.lr = 0x8223D5E4;
	sub_8222F668(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x8223d610
	if (ctx.cr6.lt) goto loc_8223D610;
	// beq cr6,0x8223d5fc
	if (ctx.cr6.eq) goto loc_8223D5FC;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// bge cr6,0x8223d668
	if (!ctx.cr6.lt) goto loc_8223D668;
	// b 0x8223d658
	goto loc_8223D658;
loc_8223D5FC:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8223d9c8
	ctx.lr = 0x8223D60C;
	sub_8223D9C8(ctx, base);
	// b 0x8223d668
	goto loc_8223D668;
loc_8223D610:
	// lwz r11,116(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 116);
	// lfs f0,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,104(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,68(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f11,72(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 72);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,36(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// lfs f11,64(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,40(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f11,32(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmadds f0,f9,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f9.f64, ctx.f13.f64, ctx.f0.f64)));
	// fmadds f0,f11,f12,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f11.f64, ctx.f12.f64, ctx.f0.f64)));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// blt cr6,0x8223d668
	if (ctx.cr6.lt) goto loc_8223D668;
loc_8223D658:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8223d8c8
	ctx.lr = 0x8223D668;
	sub_8223D8C8(ctx, base);
loc_8223D668:
	// lwz r3,460(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 460);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223D67C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8223d75c
	if (ctx.cr0.eq) goto loc_8223D75C;
	// lfs f13,72(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lfs f0,120(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r25,256
	ctx.r10.s64 = r25.s64 + 256;
	// lfs f12,120(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f10,68(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lfs f8,116(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 116);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,64(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f7.f64 = double(temp.f32);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lfs f6,112(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 112);
	ctx.f6.f64 = double(temp.f32);
	// lfs f12,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
	// std r11,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfs f5,76(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 76);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,124(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 124);
	ctx.f4.f64 = double(temp.f32);
	// lfs f0,12(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f11,f10,f13,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f10.f64, ctx.f13.f64, ctx.f11.f64)));
	// lfs f3,176(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 176);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f13,f8,f13,f9
	ctx.f13.f64 = double(float(std::fma(ctx.f8.f64, ctx.f13.f64, ctx.f9.f64)));
	// lfs f10,188(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 188);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f11,f7,f12,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f7.f64, ctx.f12.f64, ctx.f11.f64)));
	// fmadds f13,f6,f12,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f6.f64, ctx.f12.f64, ctx.f13.f64)));
	// lfd f12,96(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fadds f11,f11,f5
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f5.f64));
	// fadds f13,f13,f4
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f4.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fadds f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// fdivs f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 / ctx.f13.f64));
	// fsubs f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fcmpu cr6,f11,f31
	ctx.cr6.compare(ctx.f11.f64, f31.f64);
	// mfcr r11
	ctx.r11.u64 = ctx.cr0.lt ? 0x80000000 : 0;
	ctx.r11.u64 |= ctx.cr0.gt ? 0x40000000 : 0;
	ctx.r11.u64 |= ctx.cr0.eq ? 0x20000000 : 0;
	ctx.r11.u64 |= ctx.cr0.so ? 0x10000000 : 0;
	ctx.r11.u64 |= ctx.cr1.lt ? 0x8000000 : 0;
	ctx.r11.u64 |= ctx.cr1.gt ? 0x4000000 : 0;
	ctx.r11.u64 |= ctx.cr1.eq ? 0x2000000 : 0;
	ctx.r11.u64 |= ctx.cr1.so ? 0x1000000 : 0;
	ctx.r11.u64 |= ctx.cr2.lt ? 0x800000 : 0;
	ctx.r11.u64 |= ctx.cr2.gt ? 0x400000 : 0;
	ctx.r11.u64 |= ctx.cr2.eq ? 0x200000 : 0;
	ctx.r11.u64 |= ctx.cr2.so ? 0x100000 : 0;
	ctx.r11.u64 |= ctx.cr3.lt ? 0x80000 : 0;
	ctx.r11.u64 |= ctx.cr3.gt ? 0x40000 : 0;
	ctx.r11.u64 |= ctx.cr3.eq ? 0x20000 : 0;
	ctx.r11.u64 |= ctx.cr3.so ? 0x10000 : 0;
	ctx.r11.u64 |= ctx.cr4.lt ? 0x8000 : 0;
	ctx.r11.u64 |= ctx.cr4.gt ? 0x4000 : 0;
	ctx.r11.u64 |= ctx.cr4.eq ? 0x2000 : 0;
	ctx.r11.u64 |= ctx.cr4.so ? 0x1000 : 0;
	ctx.r11.u64 |= ctx.cr5.lt ? 0x800 : 0;
	ctx.r11.u64 |= ctx.cr5.gt ? 0x400 : 0;
	ctx.r11.u64 |= ctx.cr5.eq ? 0x200 : 0;
	ctx.r11.u64 |= ctx.cr5.so ? 0x100 : 0;
	ctx.r11.u64 |= ctx.cr6.lt ? 0x80 : 0;
	ctx.r11.u64 |= ctx.cr6.gt ? 0x40 : 0;
	ctx.r11.u64 |= ctx.cr6.eq ? 0x20 : 0;
	ctx.r11.u64 |= ctx.cr6.so ? 0x10 : 0;
	ctx.r11.u64 |= ctx.cr7.lt ? 0x8 : 0;
	ctx.r11.u64 |= ctx.cr7.gt ? 0x4 : 0;
	ctx.r11.u64 |= ctx.cr7.eq ? 0x2 : 0;
	ctx.r11.u64 |= ctx.cr7.so ? 0x1 : 0;
	// rlwinm r9,r11,27,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x4;
	// rlwinm r11,r11,30,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x4;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// lfsx f11,r10,r11
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsel f0,f11,f0,f13
	ctx.f0.f64 = ctx.f11.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// fnmsubs f0,f0,f3,f10
	ctx.f0.f64 = double(float(-std::fma(ctx.f0.f64, ctx.f3.f64, -ctx.f10.f64)));
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 36, temp.u32);
	// lfs f13,120(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// fmsubs f0,f12,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f13.f64, -ctx.f0.f64)));
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 40, temp.u32);
	// lwa r11,116(r26)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(r26.u32 + 116));
	// lfs f13,120(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// std r11,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfs f12,40(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// lfd f0,96(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmsubs f0,f0,f13,f12
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f13.f64, -ctx.f12.f64)));
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 44, temp.u32);
loc_8223D75C:
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8223D76C;
	sub_826A1E70(ctx, base);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_8226C4F0) {
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
	ctx.lr = 0x8226C4F8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bge cr6,0x8226c5e4
	if (!ctx.cr6.lt) goto loc_8226C5E4;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,240
	ctx.r3.s64 = 240;
	// bl 0x8269d1d0
	ctx.lr = 0x8226C518;
	sub_8269D1D0(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8226c578
	if (!ctx.cr6.gt) goto loc_8226C578;
	// li r29,0
	r29.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
loc_8226C534:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8226c568
	if (ctx.cr6.eq) goto loc_8226C568;
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r30,r11,r29
	r30.u64 = ctx.r11.u64 + r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82120d70
	ctx.lr = 0x8226C550;
	sub_82120D70(ctx, base);
	// addi r11,r31,56
	ctx.r11.s64 = r31.s64 + 56;
	// addi r4,r30,28
	ctx.r4.s64 = r30.s64 + 28;
	// addi r3,r11,-28
	ctx.r3.s64 = ctx.r11.s64 + -28;
	// bl 0x82120d70
	ctx.lr = 0x8226C560;
	sub_82120D70(ctx, base);
	// lwz r11,56(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 56);
	// stw r11,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r11.u32);
loc_8226C568:
	// addic. r27,r27,-1
	ctx.xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// addi r29,r29,60
	r29.s64 = r29.s64 + 60;
	// addi r31,r31,60
	r31.s64 = r31.s64 + 60;
	// bne 0x8226c534
	if (!ctx.cr0.eq) goto loc_8226C534;
loc_8226C578:
	// lwz r31,0(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// ble cr6,0x8226c5bc
	if (!ctx.cr6.gt) goto loc_8226C5BC;
	// li r30,0
	r30.s64 = 0;
loc_8226C588:
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// add r29,r30,r11
	r29.u64 = r30.u64 + ctx.r11.u64;
	// addi r3,r29,28
	ctx.r3.s64 = r29.s64 + 28;
	// bl 0x82120ac0
	ctx.lr = 0x8226C5A0;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82120ac0
	ctx.lr = 0x8226C5B0;
	sub_82120AC0(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r30,r30,60
	r30.s64 = r30.s64 + 60;
	// bne 0x8226c588
	if (!ctx.cr0.eq) goto loc_8226C588;
loc_8226C5BC:
	// lbz r11,12(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8226c5d0
	if (ctx.cr0.eq) goto loc_8226C5D0;
	// lwz r3,8(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 8);
	// bl 0x8269d1b8
	ctx.lr = 0x8226C5D0;
	sub_8269D1B8(ctx, base);
loc_8226C5D0:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r26,8(r28)
	REX_STORE_U32(r28.u32 + 8, r26.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// stb r11,12(r28)
	REX_STORE_U8(r28.u32 + 12, ctx.r11.u8);
	// stw r10,4(r28)
	REX_STORE_U32(r28.u32 + 4, ctx.r10.u32);
loc_8226C5E4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82272B80) {
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
	ctx.lr = 0x82272B88;
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r15,r4
	r15.u64 = ctx.r4.u64;
	// lis r4,-32106
	ctx.r4.s64 = -2104098816;
	// lis r5,-32126
	ctx.r5.s64 = -2105409536;
	// lis r6,-32126
	ctx.r6.s64 = -2105409536;
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r17,0
	r17.s64 = 0;
	// li r16,-1
	r16.s64 = -1;
	// lis r21,-32106
	r21.s64 = -2104098816;
	// addi r26,r4,1624
	r26.s64 = ctx.r4.s64 + 1624;
	// addi r20,r5,-13224
	r20.s64 = ctx.r5.s64 + -13224;
	// addi r19,r6,-13252
	r19.s64 = ctx.r6.s64 + -13252;
	// addi r23,r7,-7312
	r23.s64 = ctx.r7.s64 + -7312;
	// addi r24,r8,-17164
	r24.s64 = ctx.r8.s64 + -17164;
	// addi r25,r9,16492
	r25.s64 = ctx.r9.s64 + 16492;
	// addi r18,r10,-10768
	r18.s64 = ctx.r10.s64 + -10768;
	// addi r22,r11,-17296
	r22.s64 = ctx.r11.s64 + -17296;
loc_82272BE0:
	// lwz r11,0(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82272c04
	if (!ctx.cr6.eq) goto loc_82272C04;
	// lwz r11,8(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// b 0x82272c08
	goto loc_82272C08;
loc_82272C04:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82272C08:
	// cmpw cr6,r17,r11
	ctx.cr6.compare<int32_t>(r17.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82272ec4
	if (!ctx.cr6.lt) goto loc_82272EC4;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x82272C1C;
	sub_8215F1B0(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,648
	ctx.r3.s64 = r31.s64 + 648;
	// bl 0x82145710
	ctx.lr = 0x82272C2C;
	sub_82145710(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// lwz r28,80(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8215f338
	ctx.lr = 0x82272C3C;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x82272C40;
	sub_8215FA30(ctx, base);
	// lbz r11,668(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 668);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82272d84
	if (ctx.cr0.eq) goto loc_82272D84;
	// lbz r11,604(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 604);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82272d38
	if (ctx.cr0.eq) goto loc_82272D38;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82120ac0
	ctx.lr = 0x82272C6C;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82120ac0
	ctx.lr = 0x82272C7C;
	sub_82120AC0(ctx, base);
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r6,r16
	ctx.r6.u64 = r16.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82120b20
	ctx.lr = 0x82272C90;
	sub_82120B20(ctx, base);
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r6,r16
	ctx.r6.u64 = r16.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82120b20
	ctx.lr = 0x82272CA4;
	sub_82120B20(ctx, base);
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82125d00
	ctx.lr = 0x82272CB0;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82272d18
	if (!ctx.cr0.eq) goto loc_82272D18;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82120ac0
	ctx.lr = 0x82272CC8;
	sub_82120AC0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,96(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82272CE4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82272d08
	if (ctx.cr0.eq) goto loc_82272D08;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,92(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82272D08;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82272D08:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82120ac0
	ctx.lr = 0x82272D18;
	sub_82120AC0(ctx, base);
loc_82272D18:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82120ac0
	ctx.lr = 0x82272D28;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82120ac0
	ctx.lr = 0x82272D38;
	sub_82120AC0(ctx, base);
loc_82272D38:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82272D50;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8215f670
	ctx.lr = 0x82272D60;
	sub_8215F670(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8215f5f8
	ctx.lr = 0x82272D68;
	sub_8215F5F8(ctx, base);
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82272d7c
	if (ctx.cr6.lt) goto loc_82272D7C;
	// lwz r4,0(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 0);
	// b 0x82272d80
	goto loc_82272D80;
loc_82272D7C:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
loc_82272D80:
	// bl 0x8215fbf8
	ctx.lr = 0x82272D84;
	sub_8215FBF8(ctx, base);
loc_82272D84:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82273438
	ctx.lr = 0x82272D90;
	sub_82273438(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// bl 0x8215f338
	ctx.lr = 0x82272D9C;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x82272DA0;
	sub_8215FA30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120d70
	ctx.lr = 0x82272DAC;
	sub_82120D70(ctx, base);
	// lbz r11,668(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 668);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82272e68
	if (!ctx.cr0.eq) goto loc_82272E68;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,64(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82272DD4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lwz r11,6200(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 6200);
	// li r29,1
	r29.s64 = 1;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// rlwinm r28,r10,27,31,31
	r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,28(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82272DFC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82272e2c
	if (ctx.cr6.eq) goto loc_82272E2C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82272E20;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r29,r11,27,31,31
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_82272E2C:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82272e68
	if (ctx.cr0.eq) goto loc_82272E68;
	// clrlwi. r11,r29,24
	ctx.r11.u64 = r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82272e68
	if (ctx.cr0.eq) goto loc_82272E68;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r29,0(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8215f338
	ctx.lr = 0x82272E4C;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x82272E50;
	sub_8215FA30(ctx, base);
	// lwz r11,92(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 92);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82272E68;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82272E68:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8215f670
	ctx.lr = 0x82272E74;
	sub_8215F670(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8215f5f8
	ctx.lr = 0x82272E7C;
	sub_8215F5F8(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x82272e90
	if (!ctx.cr6.lt) goto loc_82272E90;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82272E90:
	// bl 0x8215fbf8
	ctx.lr = 0x82272E94;
	sub_8215FBF8(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8215f338
	ctx.lr = 0x82272EA0;
	sub_8215F338(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82272b80
	ctx.lr = 0x82272EAC;
	sub_82272B80(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x82272EBC;
	sub_82120AC0(ctx, base);
	// addi r17,r17,1
	r17.s64 = r17.s64 + 1;
	// b 0x82272be0
	goto loc_82272BE0;
loc_82272EC4:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x826a1cd4
	return;
}

DEFINE_REX_FUNC(sub_822883E8) {
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
	// bl 0x826a1ca8
	ctx.lr = 0x822883F0;
	// stfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -88, f30.u64);
	// stfd f31,-80(r1)
	REX_STORE_U64(ctx.r1.u32 + -80, f31.u64);
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 36);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f30,f1
	f30.f64 = ctx.f1.f64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82288758
	if (ctx.cr0.eq) goto loc_82288758;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6048(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6048);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82288428;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,56(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// fadds f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 56, temp.u32);
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8228845c
	if (ctx.cr6.eq) goto loc_8228845C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,255
	ctx.r5.s64 = 255;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228845C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8228845C:
	// lbz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 52);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82288510
	if (ctx.cr0.eq) goto loc_82288510;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lfs f0,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// fadds f0,f31,f0
	ctx.f0.f64 = double(float(f31.f64 + ctx.f0.f64));
	// addi r10,r10,16592
	ctx.r10.s64 = ctx.r10.s64 + 16592;
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 60, temp.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lfs f13,1372(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1372);
	ctx.f13.f64 = double(temp.f32);
	// bne cr6,0x82288498
	if (!ctx.cr6.eq) goto loc_82288498;
	// lfs f12,56(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// ble cr6,0x82288758
	if (!ctx.cr6.gt) goto loc_82288758;
loc_82288498:
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x822884b4
	if (!ctx.cr6.eq) goto loc_822884B4;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x822884b4
	if (!ctx.cr6.eq) goto loc_822884B4;
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82288758
	if (!ctx.cr6.gt) goto loc_82288758;
loc_822884B4:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r11,2924
	ctx.r3.s64 = ctx.r11.s64 + 2924;
	// bl 0x8226afb8
	ctx.lr = 0x822884C0;
	sub_8226AFB8(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// li r30,0
	r30.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// stb r30,36(r31)
	REX_STORE_U8(r31.u32 + 36, r30.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r30,384(r1)
	REX_STORE_U32(ctx.r1.u32 + 384, r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8216b6a8
	ctx.lr = 0x822884E8;
	sub_8216B6A8(ctx, base);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r31,44
	ctx.r5.s64 = r31.s64 + 44;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8216b6a8
	ctx.lr = 0x822884FC;
	sub_8216B6A8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r11,-27088
	ctx.r3.s64 = ctx.r11.s64 + -27088;
	// bl 0x8216bc98
	ctx.lr = 0x8228850C;
	sub_8216BC98(ctx, base);
	// b 0x82288758
	goto loc_82288758;
loc_82288510:
	// li r30,0
	r30.s64 = 0;
	// li r27,1
	r27.s64 = 1;
	// mr r29,r30
	r29.u64 = r30.u64;
	// lis r28,-32106
	r28.s64 = -2104098816;
loc_82288520:
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// slw r10,r27,r30
	ctx.r10.u64 = r30.u8 & 0x20 ? 0 : (r27.u32 << (r30.u8 & 0x3F));
	// and. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82288558
	if (ctx.cr0.eq) goto loc_82288558;
	// lwz r3,6080(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 6080);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82288548;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82288558
	if (ctx.cr0.eq) goto loc_82288558;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// or r29,r11,r29
	r29.u64 = ctx.r11.u64 | r29.u64;
loc_82288558:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(r30.s32, 4, ctx.xer);
	// blt cr6,0x82288520
	if (ctx.cr6.lt) goto loc_82288520;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// stw r29,48(r31)
	REX_STORE_U32(r31.u32 + 48, r29.u32);
	// andc r30,r29,r11
	r30.u64 = r29.u64 & ~ctx.r11.u64;
	// rlwinm. r11,r30,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82288708
	if (ctx.cr0.eq) goto loc_82288708;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8228858c
	if (!ctx.cr6.eq) goto loc_8228858C;
	// stw r27,32(r31)
	REX_STORE_U32(r31.u32 + 32, r27.u32);
	// b 0x82288704
	goto loc_82288704;
loc_8228858C:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8228859c
	if (!ctx.cr6.eq) goto loc_8228859C;
loc_82288594:
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
	// b 0x82288704
	goto loc_82288704;
loc_8228859C:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x822885ac
	if (!ctx.cr6.eq) goto loc_822885AC;
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x82288594
	goto loc_82288594;
loc_822885AC:
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x822885bc
	if (!ctx.cr6.eq) goto loc_822885BC;
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x82288594
	goto loc_82288594;
loc_822885BC:
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x82288708
	if (!ctx.cr6.eq) goto loc_82288708;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r4,r11,2740
	ctx.r4.s64 = ctx.r11.s64 + 2740;
	// bl 0x82120600
	ctx.lr = 0x822885D4;
	sub_82120600(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x82178b60
	ctx.lr = 0x822885E0;
	sub_82178B60(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82120ac0
	ctx.lr = 0x822885F4;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,2760
	ctx.r4.s64 = ctx.r11.s64 + 2760;
	// bl 0x82120600
	ctx.lr = 0x82288604;
	sub_82120600(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x82178b60
	ctx.lr = 0x82288610;
	sub_82178B60(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82120ac0
	ctx.lr = 0x82288624;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,2780
	ctx.r4.s64 = ctx.r11.s64 + 2780;
	// bl 0x82120600
	ctx.lr = 0x82288634;
	sub_82120600(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x82178b60
	ctx.lr = 0x82288640;
	sub_82178B60(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x82288654;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,2800
	ctx.r4.s64 = ctx.r11.s64 + 2800;
	// bl 0x82120600
	ctx.lr = 0x82288664;
	sub_82120600(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x82178b60
	ctx.lr = 0x82288670;
	sub_82178B60(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82120ac0
	ctx.lr = 0x82288684;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,2864
	ctx.r4.s64 = ctx.r11.s64 + 2864;
	// bl 0x82120600
	ctx.lr = 0x82288694;
	sub_82120600(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x82178b60
	ctx.lr = 0x822886A0;
	sub_82178B60(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82120ac0
	ctx.lr = 0x822886B4;
	sub_82120AC0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82288798
	ctx.lr = 0x822886C0;
	sub_82288798(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82288798
	ctx.lr = 0x822886CC;
	sub_82288798(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82288798
	ctx.lr = 0x822886D8;
	sub_82288798(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82288798
	ctx.lr = 0x822886E4;
	sub_82288798(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82288798
	ctx.lr = 0x822886F0;
	sub_82288798(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r10,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r10.u32);
	// lfs f0,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 60, temp.u32);
loc_82288704:
	// stb r27,52(r31)
	REX_STORE_U8(r31.u32 + 52, r27.u8);
loc_82288708:
	// rlwinm. r11,r30,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82288758
	if (ctx.cr0.eq) goto loc_82288758;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8228874c
	if (ctx.cr6.eq) goto loc_8228874C;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x8228874c
	if (ctx.cr6.eq) goto loc_8228874C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82288734
	if (!ctx.cr6.eq) goto loc_82288734;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x82288750
	goto loc_82288750;
loc_82288734:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82288744
	if (!ctx.cr6.eq) goto loc_82288744;
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x82288750
	goto loc_82288750;
loc_82288744:
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82288758
	if (!ctx.cr6.eq) goto loc_82288758;
loc_8228874C:
	// li r11,2
	ctx.r11.s64 = 2;
loc_82288750:
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
	// stb r27,52(r31)
	REX_STORE_U8(r31.u32 + 52, r27.u8);
loc_82288758:
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// lfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_822A3468) {
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
	ctx.lr = 0x822A3470;
	// stfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -64, f30.u64);
	// stfd f31,-56(r1)
	REX_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// addi r30,r4,48
	r30.s64 = ctx.r4.s64 + 48;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822A34A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822A34B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822A34D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f0,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - f30.f64));
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lfs f13,48(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,56(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,15048(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 - f31.f64));
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fsubs f0,f13,f1
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f1.f64));
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// ld r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// ld r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// std r10,0(r28)
	REX_STORE_U64(r28.u32 + 0, ctx.r10.u64);
	// std r11,8(r28)
	REX_STORE_U64(r28.u32 + 8, ctx.r11.u64);
	// lfs f13,52(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,56(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,48(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// fadds f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 + f31.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 + f30.f64));
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// ld r10,8(r9)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// ld r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// std r11,0(r27)
	REX_STORE_U64(r27.u32 + 0, ctx.r11.u64);
	// std r10,8(r27)
	REX_STORE_U64(r27.u32 + 8, ctx.r10.u64);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-64(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_822A7F58) {
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
	ctx.lr = 0x822A7F60;
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,12(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r3,500(r1)
	REX_STORE_U32(ctx.r1.u32 + 500, ctx.r3.u32);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// stw r7,532(r1)
	REX_STORE_U32(ctx.r1.u32 + 532, ctx.r7.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822a814c
	if (ctx.cr6.eq) goto loc_822A814C;
	// lwz r30,204(r4)
	r30.u64 = REX_LOAD_U32(ctx.r4.u32 + 204);
	// addi r27,r4,16
	r27.s64 = ctx.r4.s64 + 16;
	// lwz r31,204(r5)
	r31.u64 = REX_LOAD_U32(ctx.r5.u32 + 204);
	// addi r15,r1,288
	r15.s64 = ctx.r1.s64 + 288;
	// stw r9,4(r7)
	REX_STORE_U32(ctx.r7.u32 + 4, ctx.r9.u32);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// ld r20,56(r5)
	r20.u64 = REX_LOAD_U64(ctx.r5.u32 + 56);
	// addi r8,r1,208
	ctx.r8.s64 = ctx.r1.s64 + 208;
	// addi r7,r7,16592
	ctx.r7.s64 = ctx.r7.s64 + 16592;
	// ld r18,64(r5)
	r18.u64 = REX_LOAD_U64(ctx.r5.u32 + 64);
	// ld r14,40(r4)
	r14.u64 = REX_LOAD_U64(ctx.r4.u32 + 40);
	// lis r4,-32241
	ctx.r4.s64 = -2112946176;
	// ld r22,48(r5)
	r22.u64 = REX_LOAD_U64(ctx.r5.u32 + 48);
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
	// std r22,168(r1)
	REX_STORE_U64(ctx.r1.u32 + 168, r22.u64);
	// addi r4,r4,6680
	ctx.r4.s64 = ctx.r4.s64 + 6680;
	// lfs f0,308(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 308);
	ctx.f0.f64 = double(temp.f32);
	// ld r7,72(r11)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r11.u32 + 72);
	// ld r22,16(r11)
	r22.u64 = REX_LOAD_U64(ctx.r11.u32 + 16);
	// addi r29,r5,16
	r29.s64 = ctx.r5.s64 + 16;
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// stw r15,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, r15.u32);
	// stfs f0,304(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 304, temp.u32);
	// std r20,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, r20.u64);
	// addi r24,r1,224
	r24.s64 = ctx.r1.s64 + 224;
	// ld r3,48(r11)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r11.u32 + 48);
	// addi r21,r1,240
	r21.s64 = ctx.r1.s64 + 240;
	// ld r15,56(r11)
	r15.u64 = REX_LOAD_U64(ctx.r11.u32 + 56);
	// addi r19,r1,256
	r19.s64 = ctx.r1.s64 + 256;
	// ld r20,64(r11)
	r20.u64 = REX_LOAD_U64(ctx.r11.u32 + 64);
	// addi r17,r1,272
	r17.s64 = ctx.r1.s64 + 272;
	// stw r4,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r4.u32);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// stw r27,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r27.u32);
	// lwz r27,116(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// std r3,136(r1)
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.r3.u64);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// std r7,152(r1)
	REX_STORE_U64(ctx.r1.u32 + 152, ctx.r7.u64);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r16,84(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stb r7,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r7.u8);
	// ld r7,24(r11)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r11.u32 + 24);
	// ld r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 32);
	// std r11,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// rotlwi r9,r8,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r8,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// rotlwi r8,r30,0
	ctx.r8.u64 = __builtin_rotateleft32(r30.u32, 0);
	// stw r29,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// stw r30,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r30.u32);
	// ld r30,96(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// std r18,160(r1)
	REX_STORE_U64(ctx.r1.u32 + 160, r18.u64);
	// li r18,0
	r18.s64 = 0;
	// stw r31,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r31.u32);
	// rotlwi r31,r31,0
	r31.u64 = __builtin_rotateleft32(r31.u32, 0);
	// stw r18,308(r1)
	REX_STORE_U32(ctx.r1.u32 + 308, r18.u32);
	// std r14,8(r9)
	REX_STORE_U64(ctx.r9.u32 + 8, r14.u64);
	// std r30,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, r30.u64);
	// ld r9,136(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 136);
	// std r7,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r7.u64);
	// std r22,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, r22.u64);
	// lwz r11,124(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// ld r28,16(r5)
	r28.u64 = REX_LOAD_U64(ctx.r5.u32 + 16);
	// std r9,0(r16)
	REX_STORE_U64(r16.u32 + 0, ctx.r9.u64);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// ld r9,152(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 152);
	// ld r26,24(r5)
	r26.u64 = REX_LOAD_U64(ctx.r5.u32 + 24);
	// ld r25,32(r5)
	r25.u64 = REX_LOAD_U64(ctx.r5.u32 + 32);
	// ld r23,40(r5)
	r23.u64 = REX_LOAD_U64(ctx.r5.u32 + 40);
	// ld r29,72(r5)
	r29.u64 = REX_LOAD_U64(ctx.r5.u32 + 72);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// lwz r6,20(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 20);
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r27,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r27.u32);
	// stw r8,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r31,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// std r15,8(r16)
	REX_STORE_U64(r16.u32 + 8, r15.u64);
	// std r20,0(r24)
	REX_STORE_U64(r24.u32 + 0, r20.u64);
	// std r9,8(r24)
	REX_STORE_U64(r24.u32 + 8, ctx.r9.u64);
	// ld r9,168(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 168);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// lwz r8,120(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// std r28,0(r21)
	REX_STORE_U64(r21.u32 + 0, r28.u64);
	// std r26,8(r21)
	REX_STORE_U64(r21.u32 + 8, r26.u64);
	// std r25,0(r19)
	REX_STORE_U64(r19.u32 + 0, r25.u64);
	// std r9,0(r17)
	REX_STORE_U64(r17.u32 + 0, ctx.r9.u64);
	// ld r9,144(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// std r23,8(r19)
	REX_STORE_U64(r19.u32 + 8, r23.u64);
	// std r29,8(r8)
	REX_STORE_U64(ctx.r8.u32 + 8, r29.u64);
	// lbz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// std r9,8(r17)
	REX_STORE_U64(r17.u32 + 8, ctx.r9.u64);
	// ld r9,160(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 160);
	// std r9,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, ctx.r9.u64);
	// bl 0x822b2448
	ctx.lr = 0x822A8100;
	sub_822B2448(ctx, base);
	// lwz r11,500(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 500);
	// lbz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822a814c
	if (ctx.cr0.eq) goto loc_822A814C;
	// lwz r11,532(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 532);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,792(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 792);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822a814c
	if (ctx.cr6.eq) goto loc_822A814C;
	// lwz r10,784(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 784);
	// lwz r9,144(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 144);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x822a8140
	if (ctx.cr6.eq) goto loc_822A8140;
	// addi r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 16;
	// addi r4,r11,80
	ctx.r4.s64 = ctx.r11.s64 + 80;
	// b 0x822a8148
	goto loc_822A8148;
loc_822A8140:
	// addi r5,r11,80
	ctx.r5.s64 = ctx.r11.s64 + 80;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
loc_822A8148:
	// bl 0x822ad788
	ctx.lr = 0x822A814C;
	sub_822AD788(ctx, base);
loc_822A814C:
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_822BC930) {
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
	// ld r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r4.u32 + 0);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r10,204(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 204);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// std r11,224(r3)
	REX_STORE_U64(ctx.r3.u32 + 224, ctx.r11.u64);
	// ld r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r4.u32 + 8);
	// std r11,232(r3)
	REX_STORE_U64(ctx.r3.u32 + 232, ctx.r11.u64);
	// ble cr6,0x822bc9b4
	if (!ctx.cr6.gt) goto loc_822BC9B4;
	// li r7,0
	ctx.r7.s64 = 0;
loc_822BC964:
	// lwz r11,212(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 212);
	// lwzx r3,r7,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// lwz r11,224(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 224);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x822bc984
	if (ctx.cr6.eq) goto loc_822BC984;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x822bc988
	if (!ctx.cr6.eq) goto loc_822BC988;
loc_822BC984:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822BC988:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822bc9a0
	if (ctx.cr0.eq) goto loc_822BC9A0;
	// lwz r11,524(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 524);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822bc9a0
	if (!ctx.cr0.eq) goto loc_822BC9A0;
	// bl 0x822c07b8
	ctx.lr = 0x822BC9A0;
	sub_822C07B8(ctx, base);
loc_822BC9A0:
	// lwz r11,204(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 204);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822bc964
	if (ctx.cr6.lt) goto loc_822BC964;
loc_822BC9B4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C0368) {
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r5,-32106
	ctx.r5.s64 = -2104098816;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r31,r5,6464
	r31.s64 = ctx.r5.s64 + 6464;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82292e48
	ctx.lr = 0x822C038C;
	sub_82292E48(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,15828
	ctx.r10.s64 = ctx.r10.s64 + 15828;
	// stb r11,520(r31)
	REX_STORE_U8(r31.u32 + 520, ctx.r11.u8);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,6464(r5)
	REX_STORE_U32(ctx.r5.u32 + 6464, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,516(r31)
	REX_STORE_U32(r31.u32 + 516, ctx.r9.u32);
	// stw r11,508(r31)
	REX_STORE_U32(r31.u32 + 508, ctx.r11.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r10,512(r31)
	REX_STORE_U32(r31.u32 + 512, ctx.r10.u32);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f1,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821e4d38
	ctx.lr = 0x822C03D4;
	sub_821E4D38(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822c03f8
	ctx.lr = 0x822C03E0;
	sub_822C03F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C1F80) {
	REX_FUNC_PROLOGUE();
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
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x826a2ca0
	ctx.lr = 0x822C1F94;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,12616(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12616);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// fmr f29,f5
	f29.f64 = ctx.f5.f64;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// fmr f28,f6
	f28.f64 = ctx.f6.f64;
	// bne 0x822c1fc8
	if (!ctx.cr0.eq) goto loc_822C1FC8;
	// lwz r9,12632(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 12632);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822c21c0
	if (ctx.cr6.eq) goto loc_822C21C0;
loc_822C1FC8:
	// lbz r11,10940(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 10940);
	// rlwinm. r8,r11,0,27,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x822c1fdc
	if (ctx.cr0.eq) goto loc_822C1FDC;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x822c2068
	goto loc_822C2068;
loc_822C1FDC:
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822c2060
	if (ctx.cr0.eq) goto loc_822C2060;
	// lwz r11,12904(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12904);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822c1ff8
	if (ctx.cr6.eq) goto loc_822C1FF8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822c2060
	if (!ctx.cr6.eq) goto loc_822C2060;
loc_822C1FF8:
	// lwz r11,12620(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12620);
	// lwz r10,12908(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12908);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822c2010
	if (ctx.cr6.eq) goto loc_822C2010;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822c2060
	if (!ctx.cr6.eq) goto loc_822C2060;
loc_822C2010:
	// lwz r11,12624(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12624);
	// lwz r10,12912(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12912);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822c2028
	if (ctx.cr6.eq) goto loc_822C2028;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822c2060
	if (!ctx.cr6.eq) goto loc_822C2060;
loc_822C2028:
	// lwz r11,12628(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12628);
	// lwz r10,12916(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12916);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822c2040
	if (ctx.cr6.eq) goto loc_822C2040;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822c2060
	if (!ctx.cr6.eq) goto loc_822C2060;
loc_822C2040:
	// lwz r11,12632(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12632);
	// lwz r10,12920(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12920);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822c2058
	if (ctx.cr6.eq) goto loc_822C2058;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822c2060
	if (!ctx.cr6.eq) goto loc_822C2060;
loc_822C2058:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x822c2064
	goto loc_822C2064;
loc_822C2060:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822C2064:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_822C2068:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822c207c
	if (ctx.cr0.eq) goto loc_822C207C;
	// lwz r11,13356(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 13356);
	// lwz r7,13360(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 13360);
	// b 0x822c2090
	goto loc_822C2090;
loc_822C207C:
	// lwz r10,36(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 36);
	// rlwinm r11,r10,14,18,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0x3FFF;
	// rlwinm r10,r10,29,17,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x7FFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
loc_822C2090:
	// fctiwz f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(f31.f64) ? int64_t(0x80000000U) : (f31.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&f31.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// fctiwz f0,f3
	ctx.f0.s64 = std::isnan(ctx.f3.f64) ? int64_t(0x80000000U) : (ctx.f3.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f3.f64));
	// stfd f0,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// fctiwz f0,f30
	ctx.f0.s64 = std::isnan(f30.f64) ? int64_t(0x80000000U) : (f30.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&f30.f64));
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// stfd f0,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r8,92(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x822c20c4
	if (!ctx.cr6.lt) goto loc_822C20C4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_822C20C4:
	// fctiwz f0,f4
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f4.f64) ? int64_t(0x80000000U) : (ctx.f4.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f4.f64));
	// stfd f0,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r9,92(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x822c20e0
	if (ctx.cr6.lt) goto loc_822C20E0;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
loc_822C20E0:
	// subf. r11,r6,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// subf r10,r8,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r8.u64;
	// blt 0x822c20f4
	if (ctx.cr0.lt) goto loc_822C20F4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x822c20fc
	if (!ctx.cr6.lt) goto loc_822C20FC;
loc_822C20F4:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
loc_822C20FC:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// stfs f31,12824(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 12824, temp.u32);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// stfs f30,12828(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 12828, temp.u32);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// li r11,0
	ctx.r11.s64 = 0;
	// frsp f27,f0
	f27.f64 = double(float(ctx.f0.f64));
	// stfs f29,12840(r31)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r31.u32 + 12840, temp.u32);
	// fcfid f0,f13
	ctx.f0.f64 = double(ctx.f13.s64);
	// stfs f28,12844(r31)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(r31.u32 + 12844, temp.u32);
	// stfs f27,12836(r31)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(r31.u32 + 12836, temp.u32);
	// stw r11,12848(r31)
	REX_STORE_U32(r31.u32 + 12848, ctx.r11.u32);
	// addi r4,r31,12852
	ctx.r4.s64 = r31.s64 + 12852;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// frsp f26,f0
	f26.f64 = double(float(ctx.f0.f64));
	// stfs f26,12832(r31)
	temp.f32 = float(f26.f64);
	REX_STORE_U32(r31.u32 + 12832, temp.u32);
	// bl 0x822c44e8
	ctx.lr = 0x822C2150;
	sub_822C44E8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// fsubs f0,f28,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f28.f64 - f29.f64));
	// stfs f0,10520(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 10520, temp.u32);
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// stfs f29,10524(r31)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r31.u32 + 10524, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f26,f0
	ctx.f13.f64 = double(float(f26.f64 * ctx.f0.f64));
	// stfs f13,10504(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 10504, temp.u32);
	// fmuls f0,f27,f0
	ctx.f0.f64 = double(float(f27.f64 * ctx.f0.f64));
	// fadds f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 + f31.f64));
	// stfs f13,10508(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 10508, temp.u32);
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f13,10512(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 10512, temp.u32);
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + f30.f64));
	// stfs f0,10516(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 10516, temp.u32);
	// ld r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 16);
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// std r11,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r11.u64);
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// std r11,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r11.u64);
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// std r11,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r11.u64);
	// oris r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 8388608;
	// std r11,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r11.u64);
	// oris r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 4194304;
	// std r11,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r11.u64);
	// oris r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 2097152;
	// std r11,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r11.u64);
loc_822C21C0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x826a2cec
	ctx.lr = 0x822C21CC;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822D1D28) {
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
	ctx.lr = 0x822D1D30;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lwz r28,32(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,7816
	ctx.r11.s64 = ctx.r11.s64 + 7816;
	// rlwinm r10,r28,1,25,30
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0x7E;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// mr r19,r5
	r19.u64 = ctx.r5.u64;
	// mr r18,r6
	r18.u64 = ctx.r6.u64;
	// mr r17,r7
	r17.u64 = ctx.r7.u64;
	// lbzx r21,r10,r11
	r21.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// mr r16,r8
	r16.u64 = ctx.r8.u64;
	// mr r15,r9
	r15.u64 = ctx.r9.u64;
	// clrlwi r20,r28,26
	r20.u64 = r28.u32 & 0x3F;
	// bl 0x822c5fd8
	ctx.lr = 0x822D1D70;
	sub_822C5FD8(ctx, base);
	// mr r14,r3
	r14.u64 = ctx.r3.u64;
	// stw r3,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bne cr6,0x822d1de8
	if (!ctx.cr6.eq) goto loc_822D1DE8;
	// bl 0x822d1a98
	ctx.lr = 0x822D1D94;
	sub_822D1A98(ctx, base);
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 28);
	// lwz r10,48(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 48);
	// mr r7,r20
	ctx.r7.u64 = r20.u64;
	// rlwinm r9,r11,10,23,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x1FF;
	// rlwinm r24,r10,23,30,31
	r24.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 23) & 0x3;
	// mullw r10,r9,r21
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(r21.s32);
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r25,92(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r31,r10,2,3,29
	r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x1FFFFFFC;
	// lwz r26,96(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r23,100(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// stw r25,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r25.u32);
	// stw r26,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// stw r23,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r23.u32);
	// bl 0x822d1608
	ctx.lr = 0x822D1DE4;
	sub_822D1608(ctx, base);
	// b 0x822d209c
	goto loc_822D209C;
loc_822D1DE8:
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
	// rlwinm r31,r11,1,31,31
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// rlwinm r8,r31,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x822d1a98
	ctx.lr = 0x822D1DF8;
	sub_822D1A98(ctx, base);
	// lwz r27,48(r30)
	r27.u64 = REX_LOAD_U32(r30.u32 + 48);
	// li r5,1
	ctx.r5.s64 = 1;
	// rlwinm r24,r27,23,30,31
	r24.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 23) & 0x3;
	// cmplwi cr6,r24,2
	ctx.cr6.compare<uint32_t>(r24.u32, 2, ctx.xer);
	// lwz r25,92(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r26,96(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// subf r9,r8,r25
	ctx.r9.u64 = r25.u64 - ctx.r8.u64;
	// lwz r23,100(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// subf r7,r8,r26
	ctx.r7.u64 = r26.u64 - ctx.r8.u64;
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// addi r10,r7,-1
	ctx.r10.s64 = ctx.r7.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// subf r11,r11,r31
	ctx.r11.u64 = r31.u64 - ctx.r11.u64;
	// subf r10,r10,r31
	ctx.r10.u64 = r31.u64 - ctx.r10.u64;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// slw r4,r5,r11
	ctx.r4.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r11.u8 & 0x3F));
	// slw r3,r5,r10
	ctx.r3.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r10.u8 & 0x3F));
	// stw r4,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// bne cr6,0x822d1e6c
	if (!ctx.cr6.eq) goto loc_822D1E6C;
	// subf r11,r8,r23
	ctx.r11.u64 = r23.u64 - ctx.r8.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subf r11,r11,r31
	ctx.r11.u64 = r31.u64 - ctx.r11.u64;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// slw r29,r5,r11
	r29.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r11.u8 & 0x3F));
	// b 0x822d1e70
	goto loc_822D1E70;
loc_822D1E6C:
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
loc_822D1E70:
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// bne cr6,0x822d1f38
	if (!ctx.cr6.eq) goto loc_822D1F38;
	// cmplwi cr6,r4,16
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 16, ctx.xer);
	// ble cr6,0x822d1e8c
	if (!ctx.cr6.gt) goto loc_822D1E8C;
	// cmplwi cr6,r3,16
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 16, ctx.xer);
	// bgt cr6,0x822d1e94
	if (ctx.cr6.gt) goto loc_822D1E94;
loc_822D1E8C:
	// rlwinm. r11,r27,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822d1ea0
	if (!ctx.cr0.eq) goto loc_822D1EA0;
loc_822D1E94:
	// stw r25,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r25.u32);
	// stw r26,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// stw r23,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r23.u32);
loc_822D1EA0:
	// lwz r29,28(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 28);
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// mr r7,r20
	ctx.r7.u64 = r20.u64;
	// rlwinm r14,r29,1,31,31
	r14.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0x1;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r9,r14
	ctx.r9.u64 = r14.u64;
	// bl 0x822d1608
	ctx.lr = 0x822D1EC8;
	sub_822D1608(ctx, base);
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(r14.u32, 0, ctx.xer);
	// bne cr6,0x822d1f24
	if (!ctx.cr6.eq) goto loc_822D1F24;
	// rlwinm. r11,r28,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822d1f24
	if (!ctx.cr0.eq) goto loc_822D1F24;
	// rlwinm. r11,r27,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822d1f24
	if (!ctx.cr0.eq) goto loc_822D1F24;
	// cmplwi cr6,r24,1
	ctx.cr6.compare<uint32_t>(r24.u32, 1, ctx.xer);
	// bne cr6,0x822d1f24
	if (!ctx.cr6.eq) goto loc_822D1F24;
	// lwz r11,44(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 44);
	// rlwinm. r11,r11,0,22,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3C0;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822d1f24
	if (!ctx.cr0.eq) goto loc_822D1F24;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x822d1f24
	if (!ctx.cr6.eq) goto loc_822D1F24;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x822c6b30
	ctx.lr = 0x822D1F0C;
	sub_822C6B30(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// add r10,r11,r26
	ctx.r10.u64 = ctx.r11.u64 + r26.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// andc r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_822D1F24:
	// rlwinm r11,r29,10,23,31
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 10) & 0x1FF;
	// lwz r14,104(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// mullw r11,r11,r21
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r21.s32);
	// rlwinm r31,r11,2,3,29
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1FFFFFFC;
	// b 0x822d209c
	goto loc_822D209C;
loc_822D1F38:
	// srw r11,r9,r22
	ctx.r11.u64 = r22.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (r22.u8 & 0x3F));
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bgt cr6,0x822d1f50
	if (ctx.cr6.gt) goto loc_822D1F50;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_822D1F50:
	// srw r10,r7,r22
	ctx.r10.u64 = r22.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (r22.u8 & 0x3F));
	// add r25,r11,r8
	r25.u64 = ctx.r11.u64 + ctx.r8.u64;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bgt cr6,0x822d1f64
	if (ctx.cr6.gt) goto loc_822D1F64;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
loc_822D1F64:
	// add r26,r10,r8
	r26.u64 = ctx.r10.u64 + ctx.r8.u64;
	// cmplwi cr6,r24,2
	ctx.cr6.compare<uint32_t>(r24.u32, 2, ctx.xer);
	// bne cr6,0x822d1f8c
	if (!ctx.cr6.eq) goto loc_822D1F8C;
	// subf r11,r8,r23
	ctx.r11.u64 = r23.u64 - ctx.r8.u64;
	// srw r11,r11,r22
	ctx.r11.u64 = r22.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (r22.u8 & 0x3F));
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bgt cr6,0x822d1f84
	if (ctx.cr6.gt) goto loc_822D1F84;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_822D1F84:
	// add r23,r11,r8
	r23.u64 = ctx.r11.u64 + ctx.r8.u64;
	// b 0x822d1f90
	goto loc_822D1F90;
loc_822D1F8C:
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
loc_822D1F90:
	// rlwinm. r11,r27,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d2030
	if (ctx.cr0.eq) goto loc_822D2030;
	// subf r10,r8,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r8.u64;
	// subf r11,r8,r6
	ctx.r11.u64 = ctx.r6.u64 - ctx.r8.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cntlzw r7,r11
	ctx.r7.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subf r11,r10,r31
	ctx.r11.u64 = r31.u64 - ctx.r10.u64;
	// subf r10,r7,r31
	ctx.r10.u64 = r31.u64 - ctx.r7.u64;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x822d1fcc
	if (ctx.cr6.lt) goto loc_822D1FCC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_822D1FCC:
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
	// cmplw cr6,r22,r11
	ctx.cr6.compare<uint32_t>(r22.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822d2030
	if (ctx.cr6.lt) goto loc_822D2030;
	// subf r10,r8,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r8.u64;
	// subf r11,r8,r6
	ctx.r11.u64 = ctx.r6.u64 - ctx.r8.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subf r11,r10,r31
	ctx.r11.u64 = r31.u64 - ctx.r10.u64;
	// subf r10,r9,r31
	ctx.r10.u64 = r31.u64 - ctx.r9.u64;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x822d201c
	if (ctx.cr6.lt) goto loc_822D201C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_822D201C:
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
	// and r22,r10,r11
	r22.u64 = ctx.r10.u64 & ctx.r11.u64;
loc_822D2030:
	// srw r11,r4,r22
	ctx.r11.u64 = r22.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (r22.u8 & 0x3F));
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bgt cr6,0x822d2044
	if (ctx.cr6.gt) goto loc_822D2044;
	// stw r5,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
loc_822D2044:
	// srw r11,r3,r22
	ctx.r11.u64 = r22.u8 & 0x20 ? 0 : (ctx.r3.u32 >> (r22.u8 & 0x3F));
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bgt cr6,0x822d2058
	if (ctx.cr6.gt) goto loc_822D2058;
	// stw r5,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
loc_822D2058:
	// srw r11,r29,r22
	ctx.r11.u64 = r22.u8 & 0x20 ? 0 : (r29.u32 >> (r22.u8 & 0x3F));
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bgt cr6,0x822d206c
	if (ctx.cr6.gt) goto loc_822D206C;
	// stw r5,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
loc_822D206C:
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 28);
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// mr r7,r20
	ctx.r7.u64 = r20.u64;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// bl 0x822d1608
	ctx.lr = 0x822D2090;
	sub_822D1608(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// mullw r11,r11,r21
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r21.s32);
	// rlwinm r31,r11,29,3,31
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
loc_822D209C:
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 28);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm. r9,r11,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r25,0(r19)
	REX_STORE_U32(r19.u32 + 0, r25.u32);
	// mullw r11,r31,r10
	ctx.r11.s64 = int64_t(r31.s32) * int64_t(ctx.r10.s32);
	// stw r26,0(r18)
	REX_STORE_U32(r18.u32 + 0, r26.u32);
	// stw r23,0(r17)
	REX_STORE_U32(r17.u32 + 0, r23.u32);
	// stw r31,0(r16)
	REX_STORE_U32(r16.u32 + 0, r31.u32);
	// stw r11,0(r15)
	REX_STORE_U32(r15.u32 + 0, ctx.r11.u32);
	// bne 0x822d20dc
	if (!ctx.cr0.eq) goto loc_822D20DC;
	// cmplwi cr6,r22,1
	ctx.cr6.compare<uint32_t>(r22.u32, 1, ctx.xer);
	// bgt cr6,0x822d20dc
	if (ctx.cr6.gt) goto loc_822D20DC;
	// cmpwi cr6,r14,3
	ctx.cr6.compare<int32_t>(r14.s32, 3, ctx.xer);
	// beq cr6,0x822d20f0
	if (ctx.cr6.eq) goto loc_822D20F0;
	// cmpwi cr6,r14,20
	ctx.cr6.compare<int32_t>(r14.s32, 20, ctx.xer);
	// beq cr6,0x822d20f0
	if (ctx.cr6.eq) goto loc_822D20F0;
loc_822D20DC:
	// cmplwi cr6,r24,2
	ctx.cr6.compare<uint32_t>(r24.u32, 2, ctx.xer);
	// beq cr6,0x822d20f0
	if (ctx.cr6.eq) goto loc_822D20F0;
	// addi r11,r11,4095
	ctx.r11.s64 = ctx.r11.s64 + 4095;
	// rlwinm r11,r11,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// stw r11,0(r15)
	REX_STORE_U32(r15.u32 + 0, ctx.r11.u32);
loc_822D20F0:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_822EE520) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f7,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f8,20(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// addi r9,r11,16592
	ctx.r9.s64 = ctx.r11.s64 + 16592;
	// lfs f13,16(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fadds f8,f8,f7
	ctx.f8.f64 = double(float(ctx.f8.f64 + ctx.f7.f64));
	// lfs f12,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// fsubs f2,f13,f12
	ctx.f2.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f5,24(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f5.f64 = double(temp.f32);
	// fadds f1,f13,f12
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// lfs f4,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// lfd f13,1304(r9)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r9.u32 + 1304);
	// fsubs f3,f5,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 - ctx.f4.f64));
	// fsqrts f31,f13
	f31.f64 = double(float(sqrt(ctx.f13.f64)));
	// lfs f12,12(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,8(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lfs f13,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r8,r11,256
	ctx.r8.s64 = ctx.r11.s64 + 256;
	// lfs f11,1300(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1300);
	ctx.f11.f64 = double(temp.f32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lfs f0,15048(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lfs f10,700(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 700);
	ctx.f10.f64 = double(temp.f32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r11,r10,16592
	ctx.r11.s64 = ctx.r10.s64 + 16592;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r11,r11,256
	ctx.r11.s64 = ctx.r11.s64 + 256;
	// fmuls f6,f6,f6
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f6.f64));
	// fdivs f31,f12,f31
	f31.f64 = double(float(ctx.f12.f64 / f31.f64));
	// fadds f7,f5,f4
	ctx.f7.f64 = double(float(ctx.f5.f64 + ctx.f4.f64));
	// fmuls f12,f1,f13
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmadds f6,f3,f3,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f3.f64, ctx.f3.f64, ctx.f6.f64)));
	// fmuls f5,f31,f9
	ctx.f5.f64 = double(float(f31.f64 * ctx.f9.f64));
	// fmuls f9,f8,f13
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// stfs f9,100(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f13,f7,f13
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmadds f8,f2,f2,f6
	ctx.f8.f64 = double(float(std::fma(ctx.f2.f64, ctx.f2.f64, ctx.f6.f64)));
	// fsqrts f8,f8
	ctx.f8.f64 = double(float(sqrt(ctx.f8.f64)));
	// fsubs f7,f8,f11
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f11.f64));
	// fcmpu cr6,f7,f0
	ctx.cr6.compare(ctx.f7.f64, ctx.f0.f64);
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
	// lfsx f7,r8,r10
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	ctx.f7.f64 = double(temp.f32);
	// fsel f11,f7,f11,f8
	ctx.f11.f64 = ctx.f7.f64 >= 0.0 ? ctx.f11.f64 : ctx.f8.f64;
	// fsubs f8,f10,f11
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// fcmpu cr6,f8,f0
	ctx.cr6.compare(ctx.f8.f64, ctx.f0.f64);
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
	// lfsx f0,r11,r10
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fsel f0,f0,f10,f11
	ctx.f0.f64 = ctx.f0.f64 >= 0.0 ? ctx.f10.f64 : ctx.f11.f64;
	// fmuls f11,f5,f0
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmuls f10,f5,f0
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmuls f0,f31,f0
	ctx.f0.f64 = double(float(f31.f64 * ctx.f0.f64));
	// fadds f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fadds f12,f10,f9
	ctx.f12.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bl 0x8216af20
	ctx.lr = 0x822EE654;
	sub_8216AF20(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

DEFINE_REX_FUNC(sub_822FBAD8) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x822fbae8
	if (!ctx.cr6.eq) goto loc_822FBAE8;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_822FBAE8:
	// lwz r11,172(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822fbafc
	if (ctx.cr6.eq) goto loc_822FBAFC;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// b 0x822fbb00
	goto loc_822FBB00;
loc_822FBAFC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822FBB00:
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822FC2E0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3828(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3828);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x822fc320
	if (!ctx.cr6.gt) goto loc_822FC320;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,3720(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3720);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,3824(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3824);
	ctx.f13.f64 = double(temp.f32);
	// fsel f13,f1,f0,f13
	ctx.f13.f64 = ctx.f1.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// lfs f0,3820(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3820);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f1,f0,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f1.f64, ctx.f0.f64, ctx.f13.f64)));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r3,-12(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// blr 
	return;
loc_822FC320:
	// li r3,-10000
	ctx.r3.s64 = -10000;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822FF3C8) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r4,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r4.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r11,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r11,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// lfs f0,3716(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stw r11,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// beq cr6,0x822ff414
	if (ctx.cr6.eq) goto loc_822FF414;
	// lfs f13,20(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// b 0x822ff418
	goto loc_822FF418;
loc_822FF414:
	// fmr f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f0.f64;
loc_822FF418:
	// stfs f13,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 44, temp.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822ff42c
	if (ctx.cr6.eq) goto loc_822FF42C;
	// lfs f13,24(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// b 0x822ff430
	goto loc_822FF430;
loc_822FF42C:
	// fmr f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f0.f64;
loc_822FF430:
	// stfs f13,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 48, temp.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 28, temp.u32);
	// stw r11,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r11.u32);
	// beq cr6,0x822ff48c
	if (ctx.cr6.eq) goto loc_822FF48C;
	// lwz r10,44(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 44);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822ff488
	if (ctx.cr6.eq) goto loc_822FF488;
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r9,4008
	ctx.r5.s64 = ctx.r9.s64 + 4008;
	// li r6,55
	ctx.r6.s64 = 55;
	// lwz r11,1012(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1012);
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x822FF474;
	sub_82330E40(ctx, base);
	// stw r3,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x822ff48c
	if (!ctx.cr0.eq) goto loc_822FF48C;
	// li r3,44
	ctx.r3.s64 = 44;
	// b 0x822ff490
	goto loc_822FF490;
loc_822FF488:
	// stw r11,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r11.u32);
loc_822FF48C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822FF490:
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

DEFINE_REX_FUNC(sub_82303178) {
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
	ctx.lr = 0x82303180;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 148);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823031a4
	if (!ctx.cr6.eq) goto loc_823031A4;
	// li r3,31
	ctx.r3.s64 = 31;
	// b 0x8230326c
	goto loc_8230326C;
loc_823031A4:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82303268
	if (ctx.cr6.eq) goto loc_82303268;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x82303268
	if (ctx.cr6.eq) goto loc_82303268;
	// lbz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 0);
	// mr r27,r28
	r27.u64 = r28.u64;
	// b 0x823031cc
	goto loc_823031CC;
loc_823031C0:
	// cmpwi cr6,r11,47
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 47, ctx.xer);
	// beq cr6,0x823031d4
	if (ctx.cr6.eq) goto loc_823031D4;
	// lbzu r11,1(r27)
	ea = 1 + r27.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	r27.u32 = ea;
loc_823031CC:
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823031c0
	if (!ctx.cr0.eq) goto loc_823031C0;
loc_823031D4:
	// lbz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82303268
	if (ctx.cr0.eq) goto loc_82303268;
	// lwz r29,124(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 124);
	// addi r26,r3,124
	r26.s64 = ctx.r3.s64 + 124;
	// b 0x82303234
	goto loc_82303234;
loc_823031EC:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// addi r31,r29,-4
	r31.s64 = r29.s64 + -4;
	// bne cr6,0x823031fc
	if (!ctx.cr6.eq) goto loc_823031FC;
	// li r31,0
	r31.s64 = 0;
loc_823031FC:
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82303230
	if (ctx.cr6.eq) goto loc_82303230;
	// subf r30,r28,r27
	r30.u64 = r27.u64 - r28.u64;
	// bl 0x82331458
	ctx.lr = 0x82303210;
	sub_82331458(ctx, base);
	// cmpw cr6,r3,r30
	ctx.cr6.compare<int32_t>(ctx.r3.s32, r30.s32, ctx.xer);
	// bne cr6,0x82303230
	if (!ctx.cr6.eq) goto loc_82303230;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x823316d8
	ctx.lr = 0x82303228;
	sub_823316D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82303244
	if (ctx.cr0.eq) goto loc_82303244;
loc_82303230:
	// lwz r29,0(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 0);
loc_82303234:
	// cmplw cr6,r29,r26
	ctx.cr6.compare<uint32_t>(r29.u32, r26.u32, ctx.xer);
	// bne cr6,0x823031ec
	if (!ctx.cr6.eq) goto loc_823031EC;
	// li r3,91
	ctx.r3.s64 = 91;
	// b 0x8230326c
	goto loc_8230326C;
loc_82303244:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82303264;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8230326c
	goto loc_8230326C;
loc_82303268:
	// li r3,37
	ctx.r3.s64 = 37;
loc_8230326C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_8230D050) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r11,76(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8230d068
	if (!ctx.cr6.eq) goto loc_8230D068;
loc_8230D060:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8230D068:
	// lwz r8,168(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 168);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,28(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 28);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8230d09c
	if (!ctx.cr6.gt) goto loc_8230D09C;
	// lwz r9,32(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 32);
loc_8230D080:
	// lwz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r7,r3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8230d09c
	if (ctx.cr6.eq) goto loc_8230D09C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8230d080
	if (ctx.cr6.lt) goto loc_8230D080;
loc_8230D09C:
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8230d060
	if (!ctx.cr6.lt) goto loc_8230D060;
	// lwz r10,44(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 44);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwzx r4,r10,r9
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x8230d0d4
	if (ctx.cr6.eq) goto loc_8230D0D4;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
loc_8230D0C4:
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// bne cr6,0x8230d0c4
	if (!ctx.cr6.eq) goto loc_8230D0C4;
loc_8230D0D4:
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// b 0x8230c590
	sub_8230C590(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82311468) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823114a4
	if (ctx.cr6.eq) goto loc_823114A4;
	// lbz r11,40(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 40);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x823114c0
	if (!ctx.cr0.eq) goto loc_823114C0;
	// bl 0x823498d8
	ctx.lr = 0x82311494;
	sub_823498D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823114c4
	if (!ctx.cr0.eq) goto loc_823114C4;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x823114bc
	goto loc_823114BC;
loc_823114A4:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823498d8
	ctx.lr = 0x823114B0;
	sub_823498D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823114c4
	if (!ctx.cr0.eq) goto loc_823114C4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823114BC:
	// stb r11,40(r31)
	REX_STORE_U8(r31.u32 + 40, ctx.r11.u8);
loc_823114C0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823114C4:
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

DEFINE_REX_FUNC(sub_82313A20) {
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
	ctx.lr = 0x82313A28;
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82313a50
	if (ctx.cr6.eq) goto loc_82313A50;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
loc_82313A50:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82332540
	ctx.lr = 0x82313A58;
	sub_82332540(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82313A70;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82313ad0
	if (!ctx.cr0.eq) goto loc_82313AD0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82313A90;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82313ad0
	if (!ctx.cr0.eq) goto loc_82313AD0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82313ab0
	if (ctx.cr6.eq) goto loc_82313AB0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,192
	ctx.r5.s64 = 192;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82313AB0;
	sub_826A1E70(ctx, base);
loc_82313AB0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82313acc
	if (ctx.cr6.eq) goto loc_82313ACC;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82332188
	ctx.lr = 0x82313AC8;
	sub_82332188(ctx, base);
	// stw r3,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r3.u32);
loc_82313ACC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82313AD0:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_823164E8) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82316520
	if (ctx.cr6.eq) goto loc_82316520;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82316520
	if (ctx.cr6.lt) goto loc_82316520;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82316520
	if (ctx.cr6.gt) goto loc_82316520;
	// subf r11,r11,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r11.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// clrlwi. r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
loc_82316520:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823177E8) {
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
	// addi r11,r11,6292
	ctx.r11.s64 = ctx.r11.s64 + 6292;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x82317814
	if (ctx.cr0.eq) goto loc_82317814;
	// bl 0x8269ce98
	ctx.lr = 0x82317814;
	sub_8269CE98(ctx, base);
loc_82317814:
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

DEFINE_REX_FUNC(sub_82319978) {
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
	// lis r31,-32126
	r31.s64 = -2105409536;
	// lwz r3,-10768(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + -10768);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823199d0
	if (ctx.cr6.eq) goto loc_823199D0;
	// bl 0x82319850
	ctx.lr = 0x8231999C;
	sub_82319850(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823199d4
	if (!ctx.cr0.eq) goto loc_823199D4;
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lwz r4,-10768(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + -10768);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,6576
	ctx.r5.s64 = ctx.r10.s64 + 6576;
	// li r6,1698
	ctx.r6.s64 = 1698;
	// lwz r11,1012(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1012);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x823199C8;
	sub_82330D00(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-10768(r31)
	REX_STORE_U32(r31.u32 + -10768, ctx.r11.u32);
loc_823199D0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823199D4:
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

DEFINE_REX_FUNC(sub_8231DC70) {
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
	ctx.lr = 0x8231DC78;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r26,-32129
	r26.s64 = -2105606144;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// addi r27,r11,6908
	r27.s64 = ctx.r11.s64 + 6908;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,1012(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 1012);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r6,267
	ctx.r6.s64 = 267;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330a38
	ctx.lr = 0x8231DCB0;
	sub_82330A38(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r25,0
	r25.s64 = 0;
	// beq 0x8231dce0
	if (ctx.cr0.eq) goto loc_8231DCE0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r25,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r25.u32);
	// stw r25,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r25.u32);
	// stw r25,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r25.u32);
	// stw r25,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r25.u32);
	// stw r25,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, r25.u32);
	// stw r25,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, r25.u32);
	// stw r25,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, r25.u32);
	// b 0x8231dce4
	goto loc_8231DCE4;
loc_8231DCE0:
	// mr r29,r25
	r29.u64 = r25.u64;
loc_8231DCE4:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x8231dcf4
	if (!ctx.cr6.eq) goto loc_8231DCF4;
loc_8231DCEC:
	// li r3,44
	ctx.r3.s64 = 44;
	// b 0x8231dee4
	goto loc_8231DEE4;
loc_8231DCF4:
	// stw r25,0(r29)
	REX_STORE_U32(r29.u32 + 0, r25.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r11,4(r29)
	REX_STORE_U32(r29.u32 + 4, ctx.r11.u32);
	// stw r25,8(r29)
	REX_STORE_U32(r29.u32 + 8, r25.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// stw r11,12(r29)
	REX_STORE_U32(r29.u32 + 12, ctx.r11.u32);
	// stw r25,16(r29)
	REX_STORE_U32(r29.u32 + 16, r25.u32);
	// stw r25,20(r29)
	REX_STORE_U32(r29.u32 + 20, r25.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// stw r11,24(r29)
	REX_STORE_U32(r29.u32 + 24, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8231dd64
	if (ctx.cr6.eq) goto loc_8231DD64;
	// lwz r11,1012(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 1012);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,283
	ctx.r6.s64 = 283;
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x8231DD48;
	sub_82330E40(ctx, base);
	// stw r3,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8231dec0
	if (ctx.cr0.eq) goto loc_8231DEC0;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823ef2f8
	ctx.lr = 0x8231DD64;
	sub_823EF2F8(ctx, base);
loc_8231DD64:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8231ddac
	if (ctx.cr6.eq) goto loc_8231DDAC;
	// lwz r11,1012(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 1012);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,295
	ctx.r6.s64 = 295;
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x8231DD90;
	sub_82330E40(ctx, base);
	// stw r3,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8231dec0
	if (ctx.cr0.eq) goto loc_8231DEC0;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823ef2f8
	ctx.lr = 0x8231DDAC;
	sub_823EF2F8(ctx, base);
loc_8231DDAC:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8231de88
	if (ctx.cr6.eq) goto loc_8231DE88;
	// lwz r11,1012(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 1012);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,307
	ctx.r6.s64 = 307;
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x8231DDD8;
	sub_82330E40(ctx, base);
	// stw r3,16(r29)
	REX_STORE_U32(r29.u32 + 16, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8231dec0
	if (ctx.cr0.eq) goto loc_8231DEC0;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r24,r25
	r24.u64 = r25.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8231de88
	if (!ctx.cr6.gt) goto loc_8231DE88;
	// mr r30,r25
	r30.u64 = r25.u64;
loc_8231DDF8:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwzx r10,r30,r11
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8231de74
	if (ctx.cr6.eq) goto loc_8231DE74;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x8231de1c
	goto loc_8231DE1C;
loc_8231DE18:
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
loc_8231DE1C:
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x8231de18
	if (!ctx.cr6.eq) goto loc_8231DE18;
	// lwz r10,1012(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 1012);
	// rlwinm r28,r11,2,0,29
	r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,327
	ctx.r6.s64 = 327;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,4(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x8231DE48;
	sub_82330E40(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// stwx r3,r11,r30
	REX_STORE_U32(ctx.r11.u32 + r30.u32, ctx.r3.u32);
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// lwzx r10,r11,r30
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8231dec0
	if (ctx.cr6.eq) goto loc_8231DEC0;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwzx r3,r11,r30
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// lwzx r4,r30,r10
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + ctx.r10.u32);
	// bl 0x823ef2f8
	ctx.lr = 0x8231DE74;
	sub_823EF2F8(ctx, base);
loc_8231DE74:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(r24.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8231ddf8
	if (ctx.cr6.lt) goto loc_8231DDF8;
loc_8231DE88:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8231dedc
	if (ctx.cr6.eq) goto loc_8231DEDC;
	// lwz r11,1012(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 1012);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,341
	ctx.r6.s64 = 341;
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x8231DEB4;
	sub_82330E40(ctx, base);
	// stw r3,20(r29)
	REX_STORE_U32(r29.u32 + 20, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8231decc
	if (!ctx.cr0.eq) goto loc_8231DECC;
loc_8231DEC0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8231db40
	ctx.lr = 0x8231DEC8;
	sub_8231DB40(ctx, base);
	// b 0x8231dcec
	goto loc_8231DCEC;
loc_8231DECC:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823ef2f8
	ctx.lr = 0x8231DEDC;
	sub_823EF2F8(ctx, base);
loc_8231DEDC:
	// stw r29,0(r23)
	REX_STORE_U32(r23.u32 + 0, r29.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8231DEE4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_82330350) {
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
	// bl 0x82351018
	ctx.lr = 0x8233036C;
	sub_82351018(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82330380
	if (!ctx.cr6.eq) goto loc_82330380;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82351be0
	ctx.lr = 0x82330380;
	sub_82351BE0(ctx, base);
loc_82330380:
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

DEFINE_REX_FUNC(sub_823335F0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x823335F8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// clrlwi r29,r4,24
	r29.u64 = ctx.r4.u32 & 0xFF;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stb r30,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, r30.u8);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// beq cr6,0x82333624
	if (ctx.cr6.eq) goto loc_82333624;
	// lwz r11,22004(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 22004);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823336b4
	if (ctx.cr6.eq) goto loc_823336B4;
loc_82333624:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8233e338
	ctx.lr = 0x8233362C;
	sub_8233E338(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82333648
	if (ctx.cr6.eq) goto loc_82333648;
	// lwz r10,21808(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 21808);
	// subf r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	// cmplwi cr6,r9,1000
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1000, ctx.xer);
	// blt cr6,0x82333680
	if (ctx.cr6.lt) goto loc_82333680;
loc_82333648:
	// stw r11,21808(r31)
	REX_STORE_U32(r31.u32 + 21808, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823d1958
	ctx.lr = 0x82333654;
	sub_823D1958(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823336b8
	if (!ctx.cr6.eq) goto loc_823336B8;
	// lbz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82333680
	if (ctx.cr6.eq) goto loc_82333680;
	// lwz r11,1176(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1176);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,21812(r31)
	REX_STORE_U8(r31.u32 + 21812, ctx.r10.u8);
	// stb r30,44(r11)
	REX_STORE_U8(ctx.r11.u32 + 44, r30.u8);
	// lwz r9,1176(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 1176);
	// stb r30,80(r9)
	REX_STORE_U8(ctx.r9.u32 + 80, r30.u8);
loc_82333680:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x823336b4
	if (ctx.cr6.eq) goto loc_823336B4;
	// lbz r11,21812(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 21812);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823336b4
	if (ctx.cr6.eq) goto loc_823336B4;
	// lwz r11,22004(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22004);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823336B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stb r30,21812(r31)
	REX_STORE_U8(r31.u32 + 21812, r30.u8);
loc_823336B4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823336B8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8233EFC0) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x8234aac0
	ctx.lr = 0x8233EFE4;
	sub_8234AAC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233effc
	if (!ctx.cr6.eq) goto loc_8233EFFC;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8234ccd0
	ctx.lr = 0x8233EFFC;
	sub_8234CCD0(ctx, base);
loc_8233EFFC:
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

DEFINE_REX_FUNC(sub_82340418) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,380(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 380);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8234044c
	if (ctx.cr6.eq) goto loc_8234044C;
	// cmpwi cr6,r3,22
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 22, ctx.xer);
	// beq cr6,0x8234044c
	if (ctx.cr6.eq) goto loc_8234044C;
	// cmpwi cr6,r3,21
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 21, ctx.xer);
	// bne cr6,0x823406fc
	if (!ctx.cr6.eq) goto loc_823406FC;
loc_8234044C:
	// lwz r11,360(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 360);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r8,364(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 364);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82340520
	if (ctx.cr6.lt) goto loc_82340520;
	// lwz r9,344(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 344);
	// lwz r10,352(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 352);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82340490
	if (!ctx.cr6.gt) goto loc_82340490;
	// lwz r6,392(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 392);
	// rlwinm r5,r6,0,22,24
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x380;
	// rlwinm r5,r5,0,24,22
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82340490
	if (!ctx.cr6.eq) goto loc_82340490;
	// subf r6,r10,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r10.u64;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x82340520
	if (ctx.cr6.lt) goto loc_82340520;
loc_82340490:
	// clrldi r4,r11,32
	ctx.r4.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lwz r3,368(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 368);
	// clrldi r5,r9,32
	ctx.r5.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// std r4,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r4.u64);
	// lfd f12,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// std r5,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f8,f0
	ctx.f8.f64 = double(ctx.f0.s64);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// std r3,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lfs f0,3820(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3820);
	ctx.f0.f64 = double(temp.f32);
	// fcfid f10,f13
	ctx.f10.f64 = double(ctx.f13.s64);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// frsp f7,f10
	ctx.f7.f64 = double(float(ctx.f10.f64));
	// frsp f6,f8
	ctx.f6.f64 = double(float(ctx.f8.f64));
	// fsubs f5,f7,f9
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f9.f64));
	// fdivs f4,f5,f6
	ctx.f4.f64 = double(float(ctx.f5.f64 / ctx.f6.f64));
	// fmuls f3,f4,f0
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fctiwz f2,f3
	ctx.f2.s64 = std::isnan(ctx.f3.f64) ? int64_t(0x80000000U) : (ctx.f3.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f3.f64));
	// stfd f2,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f2.u64);
	// lwz r6,92(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// stw r6,376(r31)
	REX_STORE_U32(r31.u32 + 376, ctx.r6.u32);
	// blt cr6,0x82340504
	if (ctx.cr6.lt) goto loc_82340504;
	// lwz r9,348(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 348);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82340508
	if (ctx.cr6.eq) goto loc_82340508;
loc_82340504:
	// stw r7,376(r31)
	REX_STORE_U32(r31.u32 + 376, ctx.r7.u32);
loc_82340508:
	// subf r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// divwu r30,r9,r10
	r30.u64 = uint32_t(ctx.r10.u32 ? ctx.r9.u32 / ctx.r10.u32 : 0);
	// b 0x82340524
	goto loc_82340524;
loc_82340520:
	// li r30,-1
	r30.s64 = -1;
loc_82340524:
	// lwz r10,348(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 348);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8234053c
	if (ctx.cr6.eq) goto loc_8234053C;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(r30.s32, 2, ctx.xer);
	// ble cr6,0x823405d0
	if (!ctx.cr6.gt) goto loc_823405D0;
	// stw r7,348(r31)
	REX_STORE_U32(r31.u32 + 348, ctx.r7.u32);
loc_8234053C:
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(r30.s32, 2, ctx.xer);
	// beq cr6,0x8234057c
	if (ctx.cr6.eq) goto loc_8234057C;
loc_82340544:
	// lwz r11,392(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 392);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8234057c
	if (ctx.cr6.eq) goto loc_8234057C;
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// lwz r3,388(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 388);
	// stw r11,392(r31)
	REX_STORE_U32(r31.u32 + 392, ctx.r11.u32);
	// bl 0x8233e908
	ctx.lr = 0x82340564;
	sub_8233E908(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,388(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 388);
	// bl 0x8233e950
	ctx.lr = 0x82340570;
	sub_8233E950(ctx, base);
	// lwz r10,392(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 392);
	// rlwinm r9,r10,0,27,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// stw r9,392(r31)
	REX_STORE_U32(r31.u32 + 392, ctx.r9.u32);
loc_8234057C:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(r30.s32, 1, ctx.xer);
	// bne cr6,0x823405e8
	if (!ctx.cr6.eq) goto loc_823405E8;
	// lwz r11,344(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 344);
	// lwz r10,352(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 352);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x823405e8
	if (!ctx.cr6.gt) goto loc_823405E8;
	// lwz r11,392(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 392);
	// lwz r3,388(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 388);
	// ori r10,r11,144
	ctx.r10.u64 = ctx.r11.u64 | 144;
	// stw r10,392(r31)
	REX_STORE_U32(r31.u32 + 392, ctx.r10.u32);
	// bl 0x8233e908
	ctx.lr = 0x823405A8;
	sub_8233E908(ctx, base);
	// lwz r11,384(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 384);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x823537f0
	ctx.lr = 0x823405B8;
	sub_823537F0(ctx, base);
	// lwz r11,364(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 364);
	// lwz r10,352(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 352);
	// li r3,0
	ctx.r3.s64 = 0;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,364(r31)
	REX_STORE_U32(r31.u32 + 364, ctx.r9.u32);
	// b 0x823406f8
	goto loc_823406F8;
loc_823405D0:
	// lwz r9,340(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 340);
	// li r30,-1
	r30.s64 = -1;
	// stw r10,368(r31)
	REX_STORE_U32(r31.u32 + 368, ctx.r10.u32);
	// subf r8,r9,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r9.u64;
	// stw r8,364(r31)
	REX_STORE_U32(r31.u32 + 364, ctx.r8.u32);
	// b 0x82340544
	goto loc_82340544;
loc_823405E8:
	// lwz r11,352(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 352);
	// lwz r10,344(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 344);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82340604
	if (!ctx.cr6.gt) goto loc_82340604;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(r30.s32, 2, ctx.xer);
	// beq cr6,0x82340610
	if (ctx.cr6.eq) goto loc_82340610;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
loc_82340604:
	// bne cr6,0x82340618
	if (!ctx.cr6.eq) goto loc_82340618;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(r30.s32, 1, ctx.xer);
	// bne cr6,0x82340618
	if (!ctx.cr6.eq) goto loc_82340618;
loc_82340610:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823406fc
	goto loc_823406FC;
loc_82340618:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x82340640
	if (ctx.cr6.eq) goto loc_82340640;
	// lwz r11,392(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 392);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82340640
	if (ctx.cr6.eq) goto loc_82340640;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82340348
	ctx.lr = 0x82340638;
	sub_82340348(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823406fc
	if (!ctx.cr6.eq) goto loc_823406FC;
loc_82340640:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82340120
	ctx.lr = 0x8234064C;
	sub_82340120(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82340674
	if (ctx.cr6.eq) goto loc_82340674;
	// cmpwi cr6,r3,22
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 22, ctx.xer);
	// beq cr6,0x82340674
	if (ctx.cr6.eq) goto loc_82340674;
loc_8234065C:
	// cmpwi cr6,r3,21
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 21, ctx.xer);
	// bne cr6,0x823406fc
	if (!ctx.cr6.eq) goto loc_823406FC;
	// lwz r11,392(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 392);
	// ori r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 | 32;
	// stw r10,392(r31)
	REX_STORE_U32(r31.u32 + 392, ctx.r10.u32);
	// b 0x823406fc
	goto loc_823406FC;
loc_82340674:
	// lwz r11,392(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 392);
	// lwz r10,352(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 352);
	// lwz r9,344(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 344);
	// rlwinm r8,r11,0,27,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// stw r8,392(r31)
	REX_STORE_U32(r31.u32 + 392, ctx.r8.u32);
	// bne cr6,0x823406a4
	if (!ctx.cr6.eq) goto loc_823406A4;
	// cmpwi cr6,r3,22
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 22, ctx.xer);
	// bne cr6,0x823406a4
	if (!ctx.cr6.eq) goto loc_823406A4;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x823406fc
	if (ctx.cr6.eq) goto loc_823406FC;
loc_823406A4:
	// lwz r11,364(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 364);
	// lwz r9,340(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 340);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// stw r8,364(r31)
	REX_STORE_U32(r31.u32 + 364, ctx.r8.u32);
	// stw r11,368(r31)
	REX_STORE_U32(r31.u32 + 368, ctx.r11.u32);
	// blt cr6,0x823406fc
	if (ctx.cr6.lt) goto loc_823406FC;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82340120
	ctx.lr = 0x823406CC;
	sub_82340120(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823406dc
	if (ctx.cr6.eq) goto loc_823406DC;
	// cmpwi cr6,r3,22
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 22, ctx.xer);
	// bne cr6,0x8234065c
	if (!ctx.cr6.eq) goto loc_8234065C;
loc_823406DC:
	// lwz r11,364(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 364);
	// lwz r9,392(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 392);
	// lwz r10,352(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 352);
	// rlwinm r8,r9,0,27,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r8,392(r31)
	REX_STORE_U32(r31.u32 + 392, ctx.r8.u32);
	// stw r7,364(r31)
	REX_STORE_U32(r31.u32 + 364, ctx.r7.u32);
loc_823406F8:
	// stw r11,368(r31)
	REX_STORE_U32(r31.u32 + 368, ctx.r11.u32);
loc_823406FC:
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

DEFINE_REX_FUNC(sub_82356988) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82356998
	if (!ctx.cr6.eq) goto loc_82356998;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82356998:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r3,528
	ctx.r10.s64 = ctx.r3.s64 + 528;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r11,580(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 580);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,-52
	ctx.r11.s64 = ctx.r11.s64 + -52;
	// bne cr6,0x823569b8
	if (!ctx.cr6.eq) goto loc_823569B8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823569B8:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823569e8
	if (ctx.cr6.eq) goto loc_823569E8;
loc_823569C0:
	// lwz r9,76(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x823569f0
	if (ctx.cr6.eq) goto loc_823569F0;
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,-52
	ctx.r11.s64 = ctx.r11.s64 + -52;
	// bne cr6,0x823569e0
	if (!ctx.cr6.eq) goto loc_823569E0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823569E0:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823569c0
	if (!ctx.cr6.eq) goto loc_823569C0;
loc_823569E8:
	// li r3,68
	ctx.r3.s64 = 68;
	// blr 
	return;
loc_823569F0:
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82359EF0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82359EF8;
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addis r30,r3,2
	r30.s64 = ctx.r3.s64 + 131072;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r31,0
	r31.s64 = 0;
	// addi r30,r30,-4
	r30.s64 = r30.s64 + -4;
	// lfs f31,10516(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 10516);
	f31.f64 = double(temp.f32);
loc_82359F18:
	// extsw r11,r31
	ctx.r11.s64 = r31.s32;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f1,f12,f31
	ctx.f1.f64 = double(float(ctx.f12.f64 * f31.f64));
	// bl 0x826a15c0
	ctx.lr = 0x82359F34;
	sub_826A15C0(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// stfsu f11,4(r30)
	ea = 4 + r30.u32;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ea, temp.u32);
	r30.u32 = ea;
	// cmpwi cr6,r31,8192
	ctx.cr6.compare<int32_t>(r31.s32, 8192, ctx.xer);
	// blt cr6,0x82359f18
	if (ctx.cr6.lt) goto loc_82359F18;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8235DA68) {
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
	ctx.lr = 0x8235DA70;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r21,r4
	r21.u64 = ctx.r4.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// mr r22,r7
	r22.u64 = ctx.r7.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bge cr6,0x8235da98
	if (!ctx.cr6.lt) goto loc_8235DA98;
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cec
	return;
loc_8235DA98:
	// li r10,128
	ctx.r10.s64 = 128;
	// addi r28,r30,1584
	r28.s64 = r30.s64 + 1584;
	// li r23,0
	r23.s64 = 0;
	// addi r11,r28,-4
	ctx.r11.s64 = r28.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8235DAAC:
	// stw r23,-1568(r11)
	REX_STORE_U32(ctx.r11.u32 + -1568, r23.u32);
	// stwu r23,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r23.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8235daac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8235DAAC;
	// addi r11,r5,128
	ctx.r11.s64 = ctx.r5.s64 + 128;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// srawi r9,r11,7
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7F) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 7;
	// lis r29,-32129
	r29.s64 = -2105606144;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// addi r31,r10,10660
	r31.s64 = ctx.r10.s64 + 10660;
	// rlwinm r6,r8,7,0,24
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0xFFFFFF80;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r6,1556(r30)
	REX_STORE_U32(r30.u32 + 1556, ctx.r6.u32);
	// mulli r9,r6,156
	ctx.r9.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(156));
	// lwz r11,1012(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 1012);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r6,52
	ctx.r6.s64 = 52;
	// addi r4,r9,16
	ctx.r4.s64 = ctx.r9.s64 + 16;
	// bl 0x82330e40
	ctx.lr = 0x8235DAF8;
	sub_82330E40(ctx, base);
	// stw r3,524(r30)
	REX_STORE_U32(r30.u32 + 524, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8235db10
	if (!ctx.cr6.eq) goto loc_8235DB10;
loc_8235DB04:
	// li r3,44
	ctx.r3.s64 = 44;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cec
	return;
loc_8235DB10:
	// addi r10,r3,15
	ctx.r10.s64 = ctx.r3.s64 + 15;
	// lwz r11,1556(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 1556);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// rlwinm r9,r10,0,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r9,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,1012(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 1012);
	// li r6,59
	ctx.r6.s64 = 59;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r4,r8,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82330e40
	ctx.lr = 0x8235DB44;
	sub_82330E40(ctx, base);
	// stw r3,1036(r30)
	REX_STORE_U32(r30.u32 + 1036, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8235db04
	if (ctx.cr6.eq) goto loc_8235DB04;
	// stw r24,1552(r30)
	REX_STORE_U32(r30.u32 + 1552, r24.u32);
	// cmpwi cr6,r24,2
	ctx.cr6.compare<int32_t>(r24.s32, 2, ctx.xer);
	// stw r22,1548(r30)
	REX_STORE_U32(r30.u32 + 1548, r22.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// blt cr6,0x8235db68
	if (ctx.cr6.lt) goto loc_8235DB68;
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
loc_8235DB68:
	// cmpw cr6,r22,r24
	ctx.cr6.compare<int32_t>(r22.s32, r24.s32, ctx.xer);
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// blt cr6,0x8235db78
	if (ctx.cr6.lt) goto loc_8235DB78;
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
loc_8235DB78:
	// lwz r11,1012(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 1012);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r8,1556(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 1556);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,77
	ctx.r6.s64 = 77;
	// mullw r4,r8,r10
	ctx.r4.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r11,r4,r9
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x82330e40
	ctx.lr = 0x8235DBA8;
	sub_82330E40(ctx, base);
	// stw r3,2096(r30)
	REX_STORE_U32(r30.u32 + 2096, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8235db04
	if (ctx.cr6.eq) goto loc_8235DB04;
	// addi r29,r30,1572
	r29.s64 = r30.s64 + 1572;
	// stw r3,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r3.u32);
	// stw r23,1580(r30)
	REX_STORE_U32(r30.u32 + 1580, r23.u32);
	// mr r28,r23
	r28.u64 = r23.u64;
	// stw r29,1572(r30)
	REX_STORE_U32(r30.u32 + 1572, r29.u32);
	// stw r29,1576(r30)
	REX_STORE_U32(r30.u32 + 1576, r29.u32);
	// lwz r11,1556(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 1556);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// ble cr6,0x8235dc78
	if (!ctx.cr6.gt) goto loc_8235DC78;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r27,r23
	r27.u64 = r23.u64;
	// mr r26,r23
	r26.u64 = r23.u64;
	// addi r25,r11,10696
	r25.s64 = ctx.r11.s64 + 10696;
loc_8235DBEC:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// add. r31,r26,r11
	r31.u64 = r26.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8235dc1c
	if (ctx.cr0.eq) goto loc_8235DC1C;
	// addi r11,r31,8
	ctx.r11.s64 = r31.s64 + 8;
	// stw r25,0(r31)
	REX_STORE_U32(r31.u32 + 0, r25.u32);
	// addi r10,r31,20
	ctx.r10.s64 = r31.s64 + 20;
	// stw r23,16(r31)
	REX_STORE_U32(r31.u32 + 16, r23.u32);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// stw r10,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// stw r10,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r10.u32);
	// stw r23,28(r31)
	REX_STORE_U32(r31.u32 + 28, r23.u32);
loc_8235DC1C:
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823a4840
	ctx.lr = 0x8235DC30;
	sub_823A4840(ctx, base);
	// lwz r11,1036(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 1036);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// add r11,r27,r11
	ctx.r11.u64 = r27.u64 + ctx.r11.u64;
	// addi r26,r26,156
	r26.s64 = r26.s64 + 156;
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
	// addi r27,r27,12
	r27.s64 = r27.s64 + 12;
	// stw r31,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r31.u32);
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// stw r29,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r29.u32);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r11,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// lwz r7,1556(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 1556);
	// cmpw cr6,r28,r7
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8235dbec
	if (ctx.cr6.lt) goto loc_8235DBEC;
loc_8235DC78:
	// stw r21,8(r30)
	REX_STORE_U32(r30.u32 + 8, r21.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cec
	return;
}

DEFINE_REX_FUNC(sub_8236E2D0) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x8236e2e0
	if (!ctx.cr6.eq) goto loc_8236E2E0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8236E2E0:
	// b 0x8236e140
	sub_8236E140(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8236F8B8) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r11,r3,-28
	ctx.r11.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x8236f8d4
	if (!ctx.cr6.eq) goto loc_8236F8D4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8236F8D4:
	// lwz r3,348(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 348);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,360(r11)
	REX_STORE_U32(ctx.r11.u32 + 360, ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8236f8f4
	if (ctx.cr6.eq) goto loc_8236F8F4;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,356(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 356);
	// bl 0x823ef5f0
	ctx.lr = 0x8236F8F4;
	sub_823EF5F0(ctx, base);
loc_8236F8F4:
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

DEFINE_REX_FUNC(sub_82371AB8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
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
	// bl 0x826a1cac
	ctx.lr = 0x82371AC0;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x826a2c78
	ctx.lr = 0x82371AC8;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8237218c
	if (ctx.cr6.eq) goto loc_8237218C;
	// lfs f1,316(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 316);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,312(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 312);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bne cr6,0x82371b08
	if (!ctx.cr6.eq) goto loc_82371B08;
	// lfs f0,320(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 320);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,324(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 324);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x82371b1c
	if (ctx.cr6.eq) goto loc_82371B1C;
loc_82371B08:
	// lfs f2,324(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 324);
	ctx.f2.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f2,320(r31)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(r31.u32 + 320, temp.u32);
	// stfs f1,312(r31)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 312, temp.u32);
	// bl 0x82371968
	ctx.lr = 0x82371B1C;
	sub_82371968(ctx, base);
loc_82371B1C:
	// li r25,1
	r25.s64 = 1;
	// lhz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 36);
	// slw r11,r25,r30
	ctx.r11.u64 = r30.u8 & 0x20 ? 0 : (r25.u32 << (r30.u8 & 0x3F));
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82371b60
	if (!ctx.cr6.eq) goto loc_82371B60;
	// mullw r11,r27,r30
	ctx.r11.s64 = int64_t(r27.s32) * int64_t(r30.s32);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823ef2f8
	ctx.lr = 0x82371B4C;
	sub_823EF2F8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x826a2cc4
	ctx.lr = 0x82371B5C;
	// b 0x826a1cfc
	return;
loc_82371B60:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,456(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 456);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,3716(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bne cr6,0x82371be0
	if (!ctx.cr6.eq) goto loc_82371BE0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,460(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 460);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3804(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3804);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82371be0
	if (!ctx.cr6.eq) goto loc_82371BE0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,464(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 464);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3788(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3788);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82371be0
	if (!ctx.cr6.eq) goto loc_82371BE0;
	// mullw r11,r27,r30
	ctx.r11.s64 = int64_t(r27.s32) * int64_t(r30.s32);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823ef5f0
	ctx.lr = 0x82371BB0;
	sub_823EF5F0(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble cr6,0x8237218c
	if (!ctx.cr6.gt) goto loc_8237218C;
	// addi r11,r31,324
	ctx.r11.s64 = r31.s64 + 324;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_82371BC0:
	// stfs f31,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfsu f31,8(r11)
	ea = 8 + ctx.r11.u32;
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82371bc0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82371BC0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x826a2cc4
	ctx.lr = 0x82371BDC;
	// b 0x826a1cfc
	return;
loc_82371BE0:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(r30.s32, 1, ctx.xer);
	// bne cr6,0x82371c6c
	if (!ctx.cr6.eq) goto loc_82371C6C;
	// clrlwi r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82372054
	if (ctx.cr6.eq) goto loc_82372054;
	// lfs f13,328(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 328);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// lfs f12,332(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 332);
	ctx.f12.f64 = double(temp.f32);
	// beq cr6,0x82371c50
	if (ctx.cr6.eq) goto loc_82371C50;
	// lis r9,-32129
	ctx.r9.s64 = -2105606144;
	// mtctr r27
	ctx.ctr.u64 = r27.u64;
	// addi r10,r28,-4
	ctx.r10.s64 = r28.s64 + -4;
	// addi r11,r29,-4
	ctx.r11.s64 = r29.s64 + -4;
	// lfs f0,10304(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 10304);
	ctx.f0.f64 = double(temp.f32);
loc_82371C18:
	// lfsu f11,4(r10)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f11.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// lfs f10,464(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 464);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// fmuls f8,f10,f12
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// lfs f7,456(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 456);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,460(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 460);
	ctx.f6.f64 = double(temp.f32);
	// fmr f12,f13
	ctx.f12.f64 = ctx.f13.f64;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fmadds f5,f9,f7,f8
	ctx.f5.f64 = double(float(std::fma(ctx.f9.f64, ctx.f7.f64, ctx.f8.f64)));
	// fmadds f4,f6,f13,f5
	ctx.f4.f64 = double(float(std::fma(ctx.f6.f64, ctx.f13.f64, ctx.f5.f64)));
	// stfs f4,4(r11)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfsu f13,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// bdnz 0x82371c18
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82371C18;
	// stfs f0,10304(r9)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + 10304, temp.u32);
loc_82371C50:
	// stfs f13,328(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 328, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f12,332(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 332, temp.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x826a2cc4
	ctx.lr = 0x82371C68;
	// b 0x826a1cfc
	return;
loc_82371C6C:
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(r30.s32, 2, ctx.xer);
	// bne cr6,0x82371d20
	if (!ctx.cr6.eq) goto loc_82371D20;
	// clrlwi r11,r10,30
	ctx.r11.u64 = ctx.r10.u32 & 0x3;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x82372054
	if (!ctx.cr6.eq) goto loc_82372054;
	// lfs f13,328(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 328);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// lfs f11,332(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 332);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,336(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 336);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,340(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 340);
	ctx.f10.f64 = double(temp.f32);
	// beq cr6,0x82371cfc
	if (ctx.cr6.eq) goto loc_82371CFC;
	// lis r9,-32129
	ctx.r9.s64 = -2105606144;
	// mtctr r27
	ctx.ctr.u64 = r27.u64;
	// addi r11,r28,-4
	ctx.r11.s64 = r28.s64 + -4;
	// addi r10,r29,-4
	ctx.r10.s64 = r29.s64 + -4;
	// lfs f0,10304(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 10304);
	ctx.f0.f64 = double(temp.f32);
loc_82371CAC:
	// lfs f9,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,464(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 464);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// lfsu f9,8(r11)
	ea = 8 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f9.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fmuls f6,f8,f11
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// fadds f5,f9,f0
	ctx.f5.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// lfs f4,456(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 456);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f8,f10
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// lfs f2,460(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 460);
	ctx.f2.f64 = double(temp.f32);
	// fmr f11,f13
	ctx.f11.f64 = ctx.f13.f64;
	// fmr f10,f12
	ctx.f10.f64 = ctx.f12.f64;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fmadds f1,f7,f4,f6
	ctx.f1.f64 = double(float(std::fma(ctx.f7.f64, ctx.f4.f64, ctx.f6.f64)));
	// fmadds f9,f5,f4,f3
	ctx.f9.f64 = double(float(std::fma(ctx.f5.f64, ctx.f4.f64, ctx.f3.f64)));
	// fmadds f13,f2,f13,f1
	ctx.f13.f64 = double(float(std::fma(ctx.f2.f64, ctx.f13.f64, ctx.f1.f64)));
	// stfs f13,4(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// fmadds f12,f2,f12,f9
	ctx.f12.f64 = double(float(std::fma(ctx.f2.f64, ctx.f12.f64, ctx.f9.f64)));
	// stfsu f12,8(r10)
	ea = 8 + ctx.r10.u32;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82371cac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82371CAC;
	// stfs f0,10304(r9)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + 10304, temp.u32);
loc_82371CFC:
	// stfs f13,328(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 328, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f11,332(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + 332, temp.u32);
	// stfs f12,336(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 336, temp.u32);
	// stfs f10,340(r31)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r31.u32 + 340, temp.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x826a2cc4
	ctx.lr = 0x82371D1C;
	// b 0x826a1cfc
	return;
loc_82371D20:
	// cmpwi cr6,r30,6
	ctx.cr6.compare<int32_t>(r30.s32, 6, ctx.xer);
	// bne cr6,0x82371e84
	if (!ctx.cr6.eq) goto loc_82371E84;
	// clrlwi r11,r10,26
	ctx.r11.u64 = ctx.r10.u32 & 0x3F;
	// cmplwi cr6,r11,63
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 63, ctx.xer);
	// bne cr6,0x82372054
	if (!ctx.cr6.eq) goto loc_82372054;
	// lfs f13,328(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 328);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// lfs f7,332(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 332);
	ctx.f7.f64 = double(temp.f32);
	// lfs f12,336(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 336);
	ctx.f12.f64 = double(temp.f32);
	// lfs f6,340(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 340);
	ctx.f6.f64 = double(temp.f32);
	// lfs f11,344(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 344);
	ctx.f11.f64 = double(temp.f32);
	// lfs f5,348(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 348);
	ctx.f5.f64 = double(temp.f32);
	// lfs f10,352(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 352);
	ctx.f10.f64 = double(temp.f32);
	// lfs f4,356(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 356);
	ctx.f4.f64 = double(temp.f32);
	// lfs f9,360(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 360);
	ctx.f9.f64 = double(temp.f32);
	// lfs f3,364(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 364);
	ctx.f3.f64 = double(temp.f32);
	// lfs f8,368(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 368);
	ctx.f8.f64 = double(temp.f32);
	// lfs f2,372(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 372);
	ctx.f2.f64 = double(temp.f32);
	// beq cr6,0x82371e40
	if (ctx.cr6.eq) goto loc_82371E40;
	// lis r9,-32129
	ctx.r9.s64 = -2105606144;
	// mtctr r27
	ctx.ctr.u64 = r27.u64;
	// addi r11,r28,-4
	ctx.r11.s64 = r28.s64 + -4;
	// addi r10,r29,-4
	ctx.r10.s64 = r29.s64 + -4;
	// lfs f0,10304(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 10304);
	ctx.f0.f64 = double(temp.f32);
loc_82371D80:
	// lfs f1,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// fadds f30,f1,f0
	f30.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// lfs f1,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// fadds f28,f1,f0
	f28.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// lfs f1,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// lfs f27,464(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 464);
	f27.f64 = double(temp.f32);
	// fadds f26,f1,f0
	f26.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// lfs f31,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	f31.f64 = double(temp.f32);
	// fmuls f25,f27,f7
	f25.f64 = double(float(f27.f64 * ctx.f7.f64));
	// lfs f29,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	f29.f64 = double(temp.f32);
	// fmuls f24,f27,f6
	f24.f64 = double(float(f27.f64 * ctx.f6.f64));
	// lfsu f1,24(r11)
	ea = 24 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f1.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fmuls f22,f27,f5
	f22.f64 = double(float(f27.f64 * ctx.f5.f64));
	// fmuls f4,f27,f4
	ctx.f4.f64 = double(float(f27.f64 * ctx.f4.f64));
	// lfs f23,456(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 456);
	f23.f64 = double(temp.f32);
	// fadds f31,f31,f0
	f31.f64 = double(float(f31.f64 + ctx.f0.f64));
	// lfs f21,460(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 460);
	f21.f64 = double(temp.f32);
	// fadds f29,f29,f0
	f29.f64 = double(float(f29.f64 + ctx.f0.f64));
	// fmuls f3,f27,f3
	ctx.f3.f64 = double(float(f27.f64 * ctx.f3.f64));
	// fmuls f2,f27,f2
	ctx.f2.f64 = double(float(f27.f64 * ctx.f2.f64));
	// fadds f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// fmr f7,f13
	ctx.f7.f64 = ctx.f13.f64;
	// fmadds f30,f30,f23,f25
	f30.f64 = double(float(std::fma(f30.f64, f23.f64, f25.f64)));
	// fmr f6,f12
	ctx.f6.f64 = ctx.f12.f64;
	// fmadds f28,f28,f23,f22
	f28.f64 = double(float(std::fma(f28.f64, f23.f64, f22.f64)));
	// fmr f5,f11
	ctx.f5.f64 = ctx.f11.f64;
	// fmadds f31,f31,f23,f24
	f31.f64 = double(float(std::fma(f31.f64, f23.f64, f24.f64)));
	// fmadds f29,f29,f23,f4
	f29.f64 = double(float(std::fma(f29.f64, f23.f64, ctx.f4.f64)));
	// fmadds f27,f26,f23,f3
	f27.f64 = double(float(std::fma(f26.f64, f23.f64, ctx.f3.f64)));
	// fmr f4,f10
	ctx.f4.f64 = ctx.f10.f64;
	// fmadds f1,f1,f23,f2
	ctx.f1.f64 = double(float(std::fma(ctx.f1.f64, f23.f64, ctx.f2.f64)));
	// fmr f3,f9
	ctx.f3.f64 = ctx.f9.f64;
	// fmr f2,f8
	ctx.f2.f64 = ctx.f8.f64;
	// fmadds f13,f21,f13,f30
	ctx.f13.f64 = double(float(std::fma(f21.f64, ctx.f13.f64, f30.f64)));
	// stfs f13,4(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// fmadds f11,f21,f11,f28
	ctx.f11.f64 = double(float(std::fma(f21.f64, ctx.f11.f64, f28.f64)));
	// stfs f11,12(r10)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fmadds f12,f21,f12,f31
	ctx.f12.f64 = double(float(std::fma(f21.f64, ctx.f12.f64, f31.f64)));
	// stfs f12,8(r10)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// fmadds f10,f21,f10,f29
	ctx.f10.f64 = double(float(std::fma(f21.f64, ctx.f10.f64, f29.f64)));
	// stfs f10,16(r10)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// fmadds f9,f21,f9,f27
	ctx.f9.f64 = double(float(std::fma(f21.f64, ctx.f9.f64, f27.f64)));
	// stfs f9,20(r10)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// fmadds f8,f21,f8,f1
	ctx.f8.f64 = double(float(std::fma(f21.f64, ctx.f8.f64, ctx.f1.f64)));
	// stfsu f8,24(r10)
	ea = 24 + ctx.r10.u32;
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82371d80
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82371D80;
	// stfs f0,10304(r9)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + 10304, temp.u32);
loc_82371E40:
	// stfs f13,328(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 328, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f7,332(r31)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(r31.u32 + 332, temp.u32);
	// stfs f12,336(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 336, temp.u32);
	// stfs f6,340(r31)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(r31.u32 + 340, temp.u32);
	// stfs f11,344(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + 344, temp.u32);
	// stfs f5,348(r31)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(r31.u32 + 348, temp.u32);
	// stfs f10,352(r31)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r31.u32 + 352, temp.u32);
	// stfs f4,356(r31)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(r31.u32 + 356, temp.u32);
	// stfs f9,360(r31)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(r31.u32 + 360, temp.u32);
	// stfs f3,364(r31)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(r31.u32 + 364, temp.u32);
	// stfs f8,368(r31)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(r31.u32 + 368, temp.u32);
	// stfs f2,372(r31)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(r31.u32 + 372, temp.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x826a2cc4
	ctx.lr = 0x82371E80;
	// b 0x826a1cfc
	return;
loc_82371E84:
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(r30.s32, 8, ctx.xer);
	// bne cr6,0x82372054
	if (!ctx.cr6.eq) goto loc_82372054;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x82372054
	if (!ctx.cr6.eq) goto loc_82372054;
	// lfs f13,328(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 328);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// lfs f31,332(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 332);
	f31.f64 = double(temp.f32);
	// lfs f12,336(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 336);
	ctx.f12.f64 = double(temp.f32);
	// lfs f30,340(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 340);
	f30.f64 = double(temp.f32);
	// lfs f11,344(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 344);
	ctx.f11.f64 = double(temp.f32);
	// lfs f29,348(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 348);
	f29.f64 = double(temp.f32);
	// lfs f10,352(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 352);
	ctx.f10.f64 = double(temp.f32);
	// lfs f28,356(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 356);
	f28.f64 = double(temp.f32);
	// lfs f9,360(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 360);
	ctx.f9.f64 = double(temp.f32);
	// lfs f27,364(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 364);
	f27.f64 = double(temp.f32);
	// lfs f8,368(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 368);
	ctx.f8.f64 = double(temp.f32);
	// lfs f26,372(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 372);
	f26.f64 = double(temp.f32);
	// lfs f7,376(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 376);
	ctx.f7.f64 = double(temp.f32);
	// lfs f25,380(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 380);
	f25.f64 = double(temp.f32);
	// lfs f6,384(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 384);
	ctx.f6.f64 = double(temp.f32);
	// lfs f24,388(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 388);
	f24.f64 = double(temp.f32);
	// beq cr6,0x82372000
	if (ctx.cr6.eq) goto loc_82372000;
	// lis r9,-32129
	ctx.r9.s64 = -2105606144;
	// mtctr r27
	ctx.ctr.u64 = r27.u64;
	// addi r11,r28,-4
	ctx.r11.s64 = r28.s64 + -4;
	// addi r10,r29,-4
	ctx.r10.s64 = r29.s64 + -4;
	// lfs f0,10304(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 10304);
	ctx.f0.f64 = double(temp.f32);
loc_82371EF4:
	// lfs f5,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fadds f3,f5,f0
	ctx.f3.f64 = double(float(ctx.f5.f64 + ctx.f0.f64));
	// lfs f2,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// fadds f1,f4,f0
	ctx.f1.f64 = double(float(ctx.f4.f64 + ctx.f0.f64));
	// lfs f5,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// fadds f4,f2,f0
	ctx.f4.f64 = double(float(ctx.f2.f64 + ctx.f0.f64));
	// fadds f23,f5,f0
	f23.f64 = double(float(ctx.f5.f64 + ctx.f0.f64));
	// lfs f20,464(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 464);
	f20.f64 = double(temp.f32);
	// lfs f2,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f27,f20,f27
	f27.f64 = double(float(f20.f64 * f27.f64));
	// lfs f5,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f5.f64 = double(temp.f32);
	// fadds f2,f2,f0
	ctx.f2.f64 = double(float(ctx.f2.f64 + ctx.f0.f64));
	// lfs f22,28(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28);
	f22.f64 = double(temp.f32);
	// fadds f21,f5,f0
	f21.f64 = double(float(ctx.f5.f64 + ctx.f0.f64));
	// lfsu f5,32(r11)
	ea = 32 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f5.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fmuls f26,f20,f26
	f26.f64 = double(float(f20.f64 * f26.f64));
	// fmuls f29,f20,f29
	f29.f64 = double(float(f20.f64 * f29.f64));
	// lfs f18,456(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 456);
	f18.f64 = double(temp.f32);
	// fmuls f25,f20,f25
	f25.f64 = double(float(f20.f64 * f25.f64));
	// lfs f16,460(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 460);
	f16.f64 = double(temp.f32);
	// fadds f22,f22,f0
	f22.f64 = double(float(f22.f64 + ctx.f0.f64));
	// fmuls f19,f20,f31
	f19.f64 = double(float(f20.f64 * f31.f64));
	// fmuls f17,f20,f30
	f17.f64 = double(float(f20.f64 * f30.f64));
	// fadds f5,f5,f0
	ctx.f5.f64 = double(float(ctx.f5.f64 + ctx.f0.f64));
	// fmuls f28,f20,f28
	f28.f64 = double(float(f20.f64 * f28.f64));
	// fmuls f24,f20,f24
	f24.f64 = double(float(f20.f64 * f24.f64));
	// fmadds f2,f2,f18,f27
	ctx.f2.f64 = double(float(std::fma(ctx.f2.f64, f18.f64, f27.f64)));
	// fmadds f27,f21,f18,f26
	f27.f64 = double(float(std::fma(f21.f64, f18.f64, f26.f64)));
	// fmadds f4,f4,f18,f29
	ctx.f4.f64 = double(float(std::fma(ctx.f4.f64, f18.f64, f29.f64)));
	// fmr f29,f11
	f29.f64 = ctx.f11.f64;
	// fmadds f26,f22,f18,f25
	f26.f64 = double(float(std::fma(f22.f64, f18.f64, f25.f64)));
	// fmadds f3,f3,f18,f19
	ctx.f3.f64 = double(float(std::fma(ctx.f3.f64, f18.f64, f19.f64)));
	// fmadds f1,f1,f18,f17
	ctx.f1.f64 = double(float(std::fma(ctx.f1.f64, f18.f64, f17.f64)));
	// fmr f31,f13
	f31.f64 = ctx.f13.f64;
	// fmadds f23,f23,f18,f28
	f23.f64 = double(float(std::fma(f23.f64, f18.f64, f28.f64)));
	// fmadds f25,f5,f18,f24
	f25.f64 = double(float(std::fma(ctx.f5.f64, f18.f64, f24.f64)));
	// fmr f30,f12
	f30.f64 = ctx.f12.f64;
	// fmr f28,f10
	f28.f64 = ctx.f10.f64;
	// fmadds f11,f16,f11,f4
	ctx.f11.f64 = double(float(std::fma(f16.f64, ctx.f11.f64, ctx.f4.f64)));
	// stfs f11,12(r10)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// fmadds f4,f16,f9,f2
	ctx.f4.f64 = double(float(std::fma(f16.f64, ctx.f9.f64, ctx.f2.f64)));
	// stfs f4,20(r10)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// fmadds f2,f16,f7,f26
	ctx.f2.f64 = double(float(std::fma(f16.f64, ctx.f7.f64, f26.f64)));
	// stfs f2,28(r10)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r10.u32 + 28, temp.u32);
	// fmadds f13,f16,f13,f3
	ctx.f13.f64 = double(float(std::fma(f16.f64, ctx.f13.f64, ctx.f3.f64)));
	// stfs f13,4(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// fmadds f12,f16,f12,f1
	ctx.f12.f64 = double(float(std::fma(f16.f64, ctx.f12.f64, ctx.f1.f64)));
	// stfs f12,8(r10)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// fmadds f3,f16,f8,f27
	ctx.f3.f64 = double(float(std::fma(f16.f64, ctx.f8.f64, f27.f64)));
	// stfs f3,24(r10)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// fmadds f5,f16,f10,f23
	ctx.f5.f64 = double(float(std::fma(f16.f64, ctx.f10.f64, f23.f64)));
	// stfs f5,16(r10)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// fmadds f1,f16,f6,f25
	ctx.f1.f64 = double(float(std::fma(f16.f64, ctx.f6.f64, f25.f64)));
	// stfsu f1,32(r10)
	ea = 32 + ctx.r10.u32;
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// fmr f27,f9
	f27.f64 = ctx.f9.f64;
	// fmr f26,f8
	f26.f64 = ctx.f8.f64;
	// fmr f25,f7
	f25.f64 = ctx.f7.f64;
	// fmr f24,f6
	f24.f64 = ctx.f6.f64;
	// fmr f9,f4
	ctx.f9.f64 = ctx.f4.f64;
	// fmr f7,f2
	ctx.f7.f64 = ctx.f2.f64;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fmr f8,f3
	ctx.f8.f64 = ctx.f3.f64;
	// fmr f10,f5
	ctx.f10.f64 = ctx.f5.f64;
	// fmr f6,f1
	ctx.f6.f64 = ctx.f1.f64;
	// bdnz 0x82371ef4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82371EF4;
	// stfs f0,10304(r9)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + 10304, temp.u32);
loc_82372000:
	// stfs f13,328(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 328, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f31,332(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 332, temp.u32);
	// stfs f12,336(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 336, temp.u32);
	// stfs f30,340(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 340, temp.u32);
	// stfs f11,344(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + 344, temp.u32);
	// stfs f29,348(r31)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r31.u32 + 348, temp.u32);
	// stfs f10,352(r31)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r31.u32 + 352, temp.u32);
	// stfs f28,356(r31)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(r31.u32 + 356, temp.u32);
	// stfs f9,360(r31)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(r31.u32 + 360, temp.u32);
	// stfs f27,364(r31)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(r31.u32 + 364, temp.u32);
	// stfs f8,368(r31)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(r31.u32 + 368, temp.u32);
	// stfs f26,372(r31)
	temp.f32 = float(f26.f64);
	REX_STORE_U32(r31.u32 + 372, temp.u32);
	// stfs f7,376(r31)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(r31.u32 + 376, temp.u32);
	// stfs f25,380(r31)
	temp.f32 = float(f25.f64);
	REX_STORE_U32(r31.u32 + 380, temp.u32);
	// stfs f6,384(r31)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(r31.u32 + 384, temp.u32);
	// stfs f24,388(r31)
	temp.f32 = float(f24.f64);
	REX_STORE_U32(r31.u32 + 388, temp.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x826a2cc4
	ctx.lr = 0x82372050;
	// b 0x826a1cfc
	return;
loc_82372054:
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble cr6,0x8237218c
	if (!ctx.cr6.gt) goto loc_8237218C;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// subf r29,r29,r28
	r29.u64 = r28.u64 - r29.u64;
	// lis r28,-32129
	r28.s64 = -2105606144;
	// addi r26,r31,332
	r26.s64 = r31.s64 + 332;
	// lfs f12,10304(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 10304);
	ctx.f12.f64 = double(temp.f32);
loc_82372074:
	// lhz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 36);
	// slw r9,r25,r3
	ctx.r9.u64 = ctx.r3.u8 & 0x20 ? 0 : (r25.u32 << (ctx.r3.u8 & 0x3F));
	// and r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 & ctx.r11.u64;
	// add r10,r29,r4
	ctx.r10.u64 = r29.u64 + ctx.r4.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82372118
	if (!ctx.cr6.eq) goto loc_82372118;
	// rlwinm r9,r30,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r27,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r7,r30,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r30,r9
	ctx.r6.u64 = r30.u64 + ctx.r9.u64;
	// rlwinm r5,r30,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x823720ec
	if (ctx.cr6.eq) goto loc_823720EC;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r6,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r5,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
loc_823720C0:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfsx f13,r10,r9
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	ctx.f13.f64 = double(temp.f32);
	// stfsx f13,r11,r9
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, temp.u32);
	// lfsx f11,r10,r8
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	ctx.f11.f64 = double(temp.f32);
	// stfsx f11,r11,r8
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, temp.u32);
	// lfsx f10,r10,r7
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	ctx.f10.f64 = double(temp.f32);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// stfsx f10,r11,r7
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r7.u32, temp.u32);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// bdnz 0x823720c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823720C0;
loc_823720EC:
	// clrlwi r8,r27,30
	ctx.r8.u64 = r27.u32 & 0x3;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82372174
	if (ctx.cr6.eq) goto loc_82372174;
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// subf r8,r9,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r9.u64;
	// subf r11,r9,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r9.u64;
loc_82372108:
	// lfsux f0,r11,r9
	ctx.fpscr.disableFlushMode();
	ea = ctx.r11.u32 + ctx.r9.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// stfsux f0,r8,r9
	temp.f32 = float(ctx.f0.f64);
	ea = ctx.r8.u32 + ctx.r9.u32;
	REX_STORE_U32(ea, temp.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x82372108
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82372108;
	// b 0x82372174
	goto loc_82372174;
loc_82372118:
	// lfs f0,-4(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r26.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// lfs f13,0(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// beq cr6,0x8237216c
	if (ctx.cr6.eq) goto loc_8237216C;
	// mtctr r27
	ctx.ctr.u64 = r27.u64;
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r4,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r4.u64;
loc_82372134:
	// lfsx f11,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,464(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 464);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f11,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// fmuls f8,f13,f10
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// lfs f7,456(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 456);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,460(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 460);
	ctx.f6.f64 = double(temp.f32);
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fmadds f5,f9,f7,f8
	ctx.f5.f64 = double(float(std::fma(ctx.f9.f64, ctx.f7.f64, ctx.f8.f64)));
	// fmadds f4,f0,f6,f5
	ctx.f4.f64 = double(float(std::fma(ctx.f0.f64, ctx.f6.f64, ctx.f5.f64)));
	// stfs f4,0(r11)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// fmr f0,f4
	ctx.f0.f64 = ctx.f4.f64;
	// bdnz 0x82372134
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82372134;
loc_8237216C:
	// stfs f0,-4(r26)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r26.u32 + -4, temp.u32);
	// stfs f13,0(r26)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r26.u32 + 0, temp.u32);
loc_82372174:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// addi r26,r26,8
	r26.s64 = r26.s64 + 8;
	// cmpw cr6,r3,r30
	ctx.cr6.compare<int32_t>(ctx.r3.s32, r30.s32, ctx.xer);
	// blt cr6,0x82372074
	if (ctx.cr6.lt) goto loc_82372074;
	// stfs f12,10304(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r28.u32 + 10304, temp.u32);
loc_8237218C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x826a2cc4
	ctx.lr = 0x8237219C;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_823C86B8) {
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
	ctx.lr = 0x823C86C0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	r28.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stb r28,2164(r3)
	REX_STORE_U8(ctx.r3.u32 + 2164, r28.u8);
	// addic. r11,r3,792
	ctx.xer.ca = ctx.r3.u32 > 4294966503;
	ctx.r11.s64 = ctx.r3.s64 + 792;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r10,2165(r3)
	REX_STORE_U8(ctx.r3.u32 + 2165, ctx.r10.u8);
	// beq 0x823c878c
	if (ctx.cr0.eq) goto loc_823C878C;
	// lwz r10,788(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 788);
	// mr r26,r28
	r26.u64 = r28.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x823c878c
	if (!ctx.cr6.gt) goto loc_823C878C;
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
loc_823C86F4:
	// lwz r30,0(r27)
	r30.u64 = REX_LOAD_U32(r27.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x823c8778
	if (ctx.cr6.eq) goto loc_823C8778;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823c8778
	if (ctx.cr6.eq) goto loc_823C8778;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823081d8
	ctx.lr = 0x823C8714;
	sub_823081D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823c8778
	if (!ctx.cr6.eq) goto loc_823C8778;
loc_823C8720:
	// lwz r31,0(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// bl 0x8234f290
	ctx.lr = 0x823C8730;
	sub_8234F290(ctx, base);
	// stw r28,100(r31)
	REX_STORE_U32(r31.u32 + 100, r28.u32);
	// lwz r11,1064(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 1064);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823c875c
	if (ctx.cr6.eq) goto loc_823C875C;
	// lwz r10,80(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 80);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,32(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x823C875C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823C875C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823c8588
	ctx.lr = 0x823C8764;
	sub_823C8588(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823081d8
	ctx.lr = 0x823C876C;
	sub_823081D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823c8720
	if (ctx.cr6.eq) goto loc_823C8720;
loc_823C8778:
	// lwz r11,788(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 788);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823c86f4
	if (ctx.cr6.lt) goto loc_823C86F4;
loc_823C878C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_823CB378) {
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
	ctx.lr = 0x823CB380;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// li r24,0
	r24.s64 = 0;
	// li r23,2
	r23.s64 = 2;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r24
	r29.u64 = r24.u64;
	// lbz r10,3580(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 3580);
	// mr r27,r24
	r27.u64 = r24.u64;
	// li r26,1
	r26.s64 = 1;
	// mr r25,r24
	r25.u64 = r24.u64;
	// stb r10,112(r1)
	REX_STORE_U8(ctx.r1.u32 + 112, ctx.r10.u8);
	// lbz r11,3581(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 3581);
	// rlwinm r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// stb r11,113(r1)
	REX_STORE_U8(ctx.r1.u32 + 113, ctx.r11.u8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r23,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r23.u32);
	// beq cr6,0x823cb3cc
	if (ctx.cr6.eq) goto loc_823CB3CC;
	// mr r25,r26
	r25.u64 = r26.u64;
loc_823CB3CC:
	// mr r30,r24
	r30.u64 = r24.u64;
loc_823CB3D0:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,60(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// bl 0x823dcc18
	ctx.lr = 0x823CB3E8;
	sub_823DCC18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823cb484
	if (ctx.cr6.eq) goto loc_823CB484;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// beq cr6,0x823cb490
	if (ctx.cr6.eq) goto loc_823CB490;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(r30.u32, 2, ctx.xer);
	// stw r7,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// stbx r10,r11,r9
	REX_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u8);
	// blt cr6,0x823cb3d0
	if (ctx.cr6.lt) goto loc_823CB3D0;
	// lbz r11,114(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 114);
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bgt cr6,0x823cb524
	if (ctx.cr6.gt) goto loc_823CB524;
	// lis r12,-32195
	ctx.r12.s64 = -2109931520;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-19388
	ctx.r12.s64 = ctx.r12.s64 + -19388;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_823CB4E4;
	case 1:
		goto loc_823CB4EC;
	case 2:
		goto loc_823CB4FC;
	case 3:
		goto loc_823CB4FC;
	case 4:
		goto loc_823CB4FC;
	case 5:
		goto loc_823CB4FC;
	case 6:
		goto loc_823CB508;
	case 7:
		goto loc_823CB508;
	case 8:
		goto loc_823CB510;
	case 9:
		goto loc_823CB510;
	case 10:
		goto loc_823CB510;
	case 11:
		goto loc_823CB510;
	case 12:
		goto loc_823CB510;
	case 13:
		goto loc_823CB510;
	case 14:
		goto loc_823CB510;
	case 15:
		goto loc_823CB510;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_823CB484:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1cf4
	return;
loc_823CB490:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r10,255
	ctx.r10.s64 = 255;
	// stb r10,3582(r11)
	REX_STORE_U8(ctx.r11.u32 + 3582, ctx.r10.u8);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r26,3520(r9)
	REX_STORE_U32(ctx.r9.u32 + 3520, r26.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r7,3624(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 3624);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x823cbbd0
	if (!ctx.cr6.eq) goto loc_823CBBD0;
	// rotlwi r11,r8,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r5,52(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823CB4D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r23,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r23.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1cf4
	return;
loc_823CB4E4:
	// mr r25,r26
	r25.u64 = r26.u64;
	// b 0x823cb524
	goto loc_823CB524;
loc_823CB4EC:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r10,192
	ctx.r10.s64 = 192;
	// stw r10,1136(r11)
	REX_STORE_U32(ctx.r11.u32 + 1136, ctx.r10.u32);
	// b 0x823cb524
	goto loc_823CB524;
loc_823CB4FC:
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// li r8,576
	ctx.r8.s64 = 576;
	// b 0x823cb518
	goto loc_823CB518;
loc_823CB508:
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// b 0x823cb524
	goto loc_823CB524;
loc_823CB510:
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// li r8,256
	ctx.r8.s64 = 256;
loc_823CB518:
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// slw r7,r8,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// stw r7,1136(r10)
	REX_STORE_U32(ctx.r10.u32 + 1136, ctx.r7.u32);
loc_823CB524:
	// lbz r11,114(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 114);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bgt cr6,0x823cb5c8
	if (ctx.cr6.gt) goto loc_823CB5C8;
	// lis r12,-32195
	ctx.r12.s64 = -2109931520;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-19120
	ctx.r12.s64 = ctx.r12.s64 + -19120;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_823CB590;
	case 1:
		goto loc_823CB5B8;
	case 2:
		goto loc_823CB60C;
	case 3:
		goto loc_823CB61C;
	case 4:
		goto loc_823CB62C;
	case 5:
		goto loc_823CB63C;
	case 6:
		goto loc_823CB64C;
	case 7:
		goto loc_823CB65C;
	case 8:
		goto loc_823CB66C;
	case 9:
		goto loc_823CB67C;
	case 10:
		goto loc_823CB68C;
	case 11:
		goto loc_823CB69C;
	case 12:
		goto loc_823CB6AC;
	case 13:
		goto loc_823CB6AC;
	case 14:
		goto loc_823CB6AC;
	case 15:
		goto loc_823CB6B4;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_823CB590:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r10,248(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 248);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823cb5b0
	if (ctx.cr6.eq) goto loc_823CB5B0;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,288(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 288);
	// stw r10,1140(r11)
	REX_STORE_U32(ctx.r11.u32 + 1140, ctx.r10.u32);
	// b 0x823cb5c8
	goto loc_823CB5C8;
loc_823CB5B0:
	// mr r25,r26
	r25.u64 = r26.u64;
	// b 0x823cb5c8
	goto loc_823CB5C8;
loc_823CB5B8:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// ori r9,r10,22664
	ctx.r9.u64 = ctx.r10.u64 | 22664;
loc_823CB5C4:
	// stw r9,1140(r11)
	REX_STORE_U32(ctx.r11.u32 + 1140, ctx.r9.u32);
loc_823CB5C8:
	// lbz r11,115(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 115);
	// rlwinm r10,r11,28,4,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFF8;
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x823cb71c
	if (ctx.cr6.eq) goto loc_823CB71C;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r23,1144(r11)
	REX_STORE_U32(ctx.r11.u32 + 1144, r23.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r11,r10,29
	ctx.r11.u64 = ctx.r10.u32 & 0x7;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x823cb710
	if (ctx.cr6.lt) goto loc_823CB710;
	// beq cr6,0x823cb704
	if (ctx.cr6.eq) goto loc_823CB704;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x823cb6f4
	if (ctx.cr6.lt) goto loc_823CB6F4;
	// mr r25,r26
	r25.u64 = r26.u64;
	// b 0x823cb730
	goto loc_823CB730;
loc_823CB60C:
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// ori r9,r10,45328
	ctx.r9.u64 = ctx.r10.u64 | 45328;
	// b 0x823cb5c4
	goto loc_823CB5C4;
loc_823CB61C:
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// ori r9,r10,60928
	ctx.r9.u64 = ctx.r10.u64 | 60928;
	// b 0x823cb5c4
	goto loc_823CB5C4;
loc_823CB62C:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r10,8000
	ctx.r10.s64 = 8000;
	// stw r10,1140(r11)
	REX_STORE_U32(ctx.r11.u32 + 1140, ctx.r10.u32);
	// b 0x823cb5c8
	goto loc_823CB5C8;
loc_823CB63C:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r10,16000
	ctx.r10.s64 = 16000;
	// stw r10,1140(r11)
	REX_STORE_U32(ctx.r11.u32 + 1140, ctx.r10.u32);
	// b 0x823cb5c8
	goto loc_823CB5C8;
loc_823CB64C:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r10,22050
	ctx.r10.s64 = 22050;
	// stw r10,1140(r11)
	REX_STORE_U32(ctx.r11.u32 + 1140, ctx.r10.u32);
	// b 0x823cb5c8
	goto loc_823CB5C8;
loc_823CB65C:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r10,24000
	ctx.r10.s64 = 24000;
	// stw r10,1140(r11)
	REX_STORE_U32(ctx.r11.u32 + 1140, ctx.r10.u32);
	// b 0x823cb5c8
	goto loc_823CB5C8;
loc_823CB66C:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r10,32000
	ctx.r10.s64 = 32000;
	// stw r10,1140(r11)
	REX_STORE_U32(ctx.r11.u32 + 1140, ctx.r10.u32);
	// b 0x823cb5c8
	goto loc_823CB5C8;
loc_823CB67C:
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// ori r9,r10,44100
	ctx.r9.u64 = ctx.r10.u64 | 44100;
	// b 0x823cb5c4
	goto loc_823CB5C4;
loc_823CB68C:
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// ori r9,r10,48000
	ctx.r9.u64 = ctx.r10.u64 | 48000;
	// b 0x823cb5c4
	goto loc_823CB5C4;
loc_823CB69C:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// ori r9,r10,30464
	ctx.r9.u64 = ctx.r10.u64 | 30464;
	// b 0x823cb5c4
	goto loc_823CB5C4;
loc_823CB6AC:
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
	// b 0x823cb5c8
	goto loc_823CB5C8;
loc_823CB6B4:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
loc_823CB6B8:
	// lwz r10,3624(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 3624);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x823cbbd0
	if (!ctx.cr6.eq) goto loc_823CBBD0;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r5,52(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823CB6E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r23,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r23.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1cf4
	return;
loc_823CB6F4:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r10,1148(r11)
	REX_STORE_U32(ctx.r11.u32 + 1148, ctx.r10.u32);
	// b 0x823cb730
	goto loc_823CB730;
loc_823CB704:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r23,1148(r11)
	REX_STORE_U32(ctx.r11.u32 + 1148, r23.u32);
	// b 0x823cb730
	goto loc_823CB730;
loc_823CB710:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r26,1148(r11)
	REX_STORE_U32(ctx.r11.u32 + 1148, r26.u32);
	// b 0x823cb730
	goto loc_823CB730;
loc_823CB71C:
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,1144(r10)
	REX_STORE_U32(ctx.r10.u32 + 1144, ctx.r9.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r24,1148(r8)
	REX_STORE_U32(ctx.r8.u32 + 1148, r24.u32);
loc_823CB730:
	// lbz r11,115(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 115);
	// rlwinm r11,r11,31,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x823cb7dc
	if (ctx.cr6.gt) goto loc_823CB7DC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x823cb788
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_823CB788;
	// bdzf 4*cr6+eq,0x823cb798
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_823CB798;
	// bdzf 4*cr6+eq,0x823cb7d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_823CB7D8;
	// bdzf 4*cr6+eq,0x823cb7a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_823CB7A8;
	// bdzf 4*cr6+eq,0x823cb7b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_823CB7B8;
	// bdzf 4*cr6+eq,0x823cb7c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_823CB7C8;
	// bne cr6,0x823cb7d8
	if (!ctx.cr6.eq) goto loc_823CB7D8;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r10,248(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 248);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823cb7d8
	if (ctx.cr6.eq) goto loc_823CB7D8;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,296(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 296);
	// stw r10,1152(r11)
	REX_STORE_U32(ctx.r11.u32 + 1152, ctx.r10.u32);
	// b 0x823cb7dc
	goto loc_823CB7DC;
loc_823CB788:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r10,1152(r11)
	REX_STORE_U32(ctx.r11.u32 + 1152, ctx.r10.u32);
	// b 0x823cb7dc
	goto loc_823CB7DC;
loc_823CB798:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r10,12
	ctx.r10.s64 = 12;
	// stw r10,1152(r11)
	REX_STORE_U32(ctx.r11.u32 + 1152, ctx.r10.u32);
	// b 0x823cb7dc
	goto loc_823CB7DC;
loc_823CB7A8:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r10,16
	ctx.r10.s64 = 16;
	// stw r10,1152(r11)
	REX_STORE_U32(ctx.r11.u32 + 1152, ctx.r10.u32);
	// b 0x823cb7dc
	goto loc_823CB7DC;
loc_823CB7B8:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r10,20
	ctx.r10.s64 = 20;
	// stw r10,1152(r11)
	REX_STORE_U32(ctx.r11.u32 + 1152, ctx.r10.u32);
	// b 0x823cb7dc
	goto loc_823CB7DC;
loc_823CB7C8:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r10,24
	ctx.r10.s64 = 24;
	// stw r10,1152(r11)
	REX_STORE_U32(ctx.r11.u32 + 1152, ctx.r10.u32);
	// b 0x823cb7dc
	goto loc_823CB7DC;
loc_823CB7D8:
	// mr r25,r26
	r25.u64 = r26.u64;
loc_823CB7DC:
	// lbz r11,115(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 115);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823cb7f0
	if (ctx.cr6.eq) goto loc_823CB7F0;
	// mr r25,r26
	r25.u64 = r26.u64;
loc_823CB7F0:
	// lbz r11,113(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 113);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823cb8c8
	if (!ctx.cr6.eq) goto loc_823CB8C8;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r10,248(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 248);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823cb824
	if (ctx.cr6.eq) goto loc_823CB824;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r9,272(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 272);
	// lwz r8,276(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 276);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x823cb8c8
	if (!ctx.cr6.eq) goto loc_823CB8C8;
loc_823CB824:
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// lwz r4,60(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823dd830
	ctx.lr = 0x823CB83C;
	sub_823DD830(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823cb484
	if (ctx.cr6.eq) goto loc_823CB484;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x823cb8b0
	if (!ctx.cr6.eq) goto loc_823CB8B0;
loc_823CB850:
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r7,-1(r8)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + -1);
	// stb r7,3582(r9)
	REX_STORE_U8(ctx.r9.u32 + 3582, ctx.r7.u8);
	// lwz r6,4(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r26,3520(r6)
	REX_STORE_U32(ctx.r6.u32 + 3520, r26.u32);
	// lwz r5,4(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r4,3624(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 3624);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x823cbbd0
	if (!ctx.cr6.eq) goto loc_823CBBD0;
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r5,52(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823CB89C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r23,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r23.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1cf4
	return;
loc_823CB8B0:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r24,1156(r11)
	REX_STORE_U32(ctx.r11.u32 + 1156, r24.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r9,1160(r10)
	REX_STORE_U32(ctx.r10.u32 + 1160, ctx.r9.u32);
	// b 0x823cb90c
	goto loc_823CB90C;
loc_823CB8C8:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,60(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// bl 0x823dd9e8
	ctx.lr = 0x823CB8E4;
	sub_823DD9E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823cb484
	if (ctx.cr6.eq) goto loc_823CB484;
	// ld r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// cmpdi cr6,r11,-1
	ctx.cr6.compare<int64_t>(ctx.r11.s64, -1, ctx.xer);
	// beq cr6,0x823cb850
	if (ctx.cr6.eq) goto loc_823CB850;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r26,1156(r11)
	REX_STORE_U32(ctx.r11.u32 + 1156, r26.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// ld r9,96(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// std r9,1160(r10)
	REX_STORE_U64(ctx.r10.u32 + 1160, ctx.r9.u64);
loc_823CB90C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x823cb9ac
	if (ctx.cr6.eq) goto loc_823CB9AC;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,60(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// bl 0x823dcc18
	ctx.lr = 0x823CB92C;
	sub_823DCC18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823cb484
	if (ctx.cr6.eq) goto loc_823CB484;
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r29,7
	ctx.cr6.compare<uint32_t>(r29.u32, 7, ctx.xer);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stbx r11,r10,r9
	REX_STORE_U8(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u8);
	// bne cr6,0x823cb9a0
	if (!ctx.cr6.eq) goto loc_823CB9A0;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,60(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// bl 0x823dcc18
	ctx.lr = 0x823CB96C;
	sub_823DCC18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823cb484
	if (ctx.cr6.eq) goto loc_823CB484;
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r7,r9,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// or r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 | ctx.r11.u64;
	// stw r5,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stbx r6,r10,r8
	REX_STORE_U8(ctx.r10.u32 + ctx.r8.u32, ctx.r6.u8);
loc_823CB9A0:
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,1136(r10)
	REX_STORE_U32(ctx.r10.u32 + 1136, ctx.r9.u32);
loc_823CB9AC:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x823cba74
	if (ctx.cr6.eq) goto loc_823CBA74;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,60(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// bl 0x823dcc18
	ctx.lr = 0x823CB9CC;
	sub_823DCC18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823cb484
	if (ctx.cr6.eq) goto loc_823CB484;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r27,12
	ctx.cr6.compare<uint32_t>(r27.u32, 12, ctx.xer);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stbx r10,r11,r9
	REX_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// beq cr6,0x823cba54
	if (ctx.cr6.eq) goto loc_823CBA54;
	// li r6,8
	ctx.r6.s64 = 8;
	// lwz r4,60(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823dcc18
	ctx.lr = 0x823CBA0C;
	sub_823DCC18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823cb484
	if (ctx.cr6.eq) goto loc_823CB484;
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r27,13
	ctx.cr6.compare<uint32_t>(r27.u32, 13, ctx.xer);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r7,r9,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// or r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 | ctx.r11.u64;
	// stw r5,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stbx r6,r10,r8
	REX_STORE_U8(ctx.r10.u32 + ctx.r8.u32, ctx.r6.u8);
	// bne cr6,0x823cba60
	if (!ctx.cr6.eq) goto loc_823CBA60;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r11,1140(r10)
	REX_STORE_U32(ctx.r10.u32 + 1140, ctx.r11.u32);
	// b 0x823cba74
	goto loc_823CBA74;
loc_823CBA54:
	// mulli r10,r10,1000
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(1000));
	// stw r10,1140(r11)
	REX_STORE_U32(ctx.r11.u32 + 1140, ctx.r10.u32);
	// b 0x823cba74
	goto loc_823CBA74;
loc_823CBA60:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r7,1140(r9)
	REX_STORE_U32(ctx.r9.u32 + 1140, ctx.r7.u32);
loc_823CBA74:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,60(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// bl 0x823dcc18
	ctx.lr = 0x823CBA8C;
	sub_823DCC18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823cb484
	if (ctx.cr6.eq) goto loc_823CB484;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi r30,r11,24
	r30.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x823e0528
	ctx.lr = 0x823CBAA8;
	sub_823E0528(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r30.u32, ctx.xer);
	// bne cr6,0x823cb6b8
	if (!ctx.cr6.eq) goto loc_823CB6B8;
	// stw r24,236(r11)
	REX_STORE_U32(ctx.r11.u32 + 236, r24.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r9,1156(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 1156);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x823cbb80
	if (!ctx.cr6.eq) goto loc_823CBB80;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r10,1160(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 1160);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r26,1156(r11)
	REX_STORE_U32(ctx.r11.u32 + 1156, r26.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// lwz r8,232(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 232);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x823cbb04
	if (ctx.cr6.eq) goto loc_823CBB04;
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,232(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 232);
	// mulld r7,r8,r9
	ctx.r7.s64 = static_cast<int64_t>(ctx.r8.u64 * ctx.r9.u64);
	// std r7,1160(r11)
	REX_STORE_U64(ctx.r11.u32 + 1160, ctx.r7.u64);
	// b 0x823cbb80
	goto loc_823CBB80;
loc_823CBB04:
	// lwz r10,248(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 248);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823cbb48
	if (ctx.cr6.eq) goto loc_823CBB48;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r10,272(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 272);
	// lwz r9,276(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 276);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x823cbb88
	if (!ctx.cr6.eq) goto loc_823CBB88;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,272(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 272);
	// mulld r7,r8,r9
	ctx.r7.s64 = static_cast<int64_t>(ctx.r8.u64 * ctx.r9.u64);
	// std r7,1160(r11)
	REX_STORE_U64(ctx.r11.u32 + 1160, ctx.r7.u64);
	// lwz r6,4(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r5,276(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 276);
	// stw r5,236(r6)
	REX_STORE_U32(ctx.r6.u32 + 236, ctx.r5.u32);
	// b 0x823cbb80
	goto loc_823CBB80;
loc_823CBB48:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823cbb6c
	if (!ctx.cr6.eq) goto loc_823CBB6C;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// std r24,1160(r11)
	REX_STORE_U64(ctx.r11.u32 + 1160, r24.u64);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r9,1136(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 1136);
	// stw r9,236(r10)
	REX_STORE_U32(ctx.r10.u32 + 236, ctx.r9.u32);
	// b 0x823cbb80
	goto loc_823CBB80;
loc_823CBB6C:
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// clrldi r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lwz r8,1136(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 1136);
	// mulld r7,r8,r9
	ctx.r7.s64 = static_cast<int64_t>(ctx.r8.u64 * ctx.r9.u64);
	// std r7,1160(r10)
	REX_STORE_U64(ctx.r10.u32 + 1160, ctx.r7.u64);
loc_823CBB80:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// beq cr6,0x823cbbd8
	if (ctx.cr6.eq) goto loc_823CBBD8;
loc_823CBB88:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r10,3624(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 3624);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x823cbbc4
	if (!ctx.cr6.eq) goto loc_823CBBC4;
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,52(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823CBBB0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r23,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r23.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1cf4
	return;
loc_823CBBC4:
	// lwz r10,6144(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 6144);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,6144(r11)
	REX_STORE_U32(ctx.r11.u32 + 6144, ctx.r10.u32);
loc_823CBBD0:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r23,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r23.u32);
loc_823CBBD8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_823F42BC) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-160
	ctx.r31.s64 = ctx.r12.s64 + -160;
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r26,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r26.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-32(r1)
	REX_STORE_U32(ctx.r1.u32 + -32, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x823f42e8
	if (ctx.cr6.eq) goto loc_823F42E8;
	// lwz r3,1408(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 1408);
	// bl 0x827938b4
	ctx.lr = 0x823F42E8;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_823F42E8:
	// lwz r1,0(r1)
	ctx.r1.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r26,-24(r1)
	ctx.r26.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// lwz r12,-32(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823F5FB0) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,11960(r3)
	REX_STORE_U32(ctx.r3.u32 + 11960, ctx.r11.u32);
	// stw r10,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stw r10,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stw r11,11024(r3)
	REX_STORE_U32(ctx.r3.u32 + 11024, ctx.r11.u32);
	// stw r10,11988(r3)
	REX_STORE_U32(ctx.r3.u32 + 11988, ctx.r10.u32);
	// stw r11,11980(r3)
	REX_STORE_U32(ctx.r3.u32 + 11980, ctx.r11.u32);
	// stw r11,11984(r3)
	REX_STORE_U32(ctx.r3.u32 + 11984, ctx.r11.u32);
	// stb r10,11958(r3)
	REX_STORE_U8(ctx.r3.u32 + 11958, ctx.r10.u8);
	// stw r11,11964(r3)
	REX_STORE_U32(ctx.r3.u32 + 11964, ctx.r11.u32);
	// stb r11,11959(r3)
	REX_STORE_U8(ctx.r3.u32 + 11959, ctx.r11.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823F7DF8) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r3,2162
	ctx.r8.s64 = ctx.r3.s64 + 2162;
loc_823F7E00:
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823f7e2c
	if (ctx.cr6.eq) goto loc_823F7E2C;
loc_823F7E10:
	// clrlwi. r7,r9,31
	ctx.r7.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x823f7e24
	if (ctx.cr0.eq) goto loc_823F7E24;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
loc_823F7E24:
	// srawi. r9,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823f7e10
	if (!ctx.cr0.eq) goto loc_823F7E10;
loc_823F7E2C:
	// stbx r10,r8,r11
	REX_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 256, ctx.xer);
	// blt cr6,0x823f7e00
	if (ctx.cr6.lt) goto loc_823F7E00;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823F9D68) {
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
	ctx.lr = 0x823F9D70;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// li r30,0
	r30.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
loc_823F9D90:
	// stw r29,9496(r31)
	REX_STORE_U32(r31.u32 + 9496, r29.u32);
	// extsh r4,r29
	ctx.r4.s64 = r29.s16;
	// stw r5,2448(r31)
	REX_STORE_U32(r31.u32 + 2448, ctx.r5.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r28,2456(r31)
	REX_STORE_U32(r31.u32 + 2456, r28.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// stb r30,9502(r31)
	REX_STORE_U8(r31.u32 + 9502, r30.u8);
	// sth r30,9500(r31)
	REX_STORE_U16(r31.u32 + 9500, r30.u16);
	// sth r30,2462(r31)
	REX_STORE_U16(r31.u32 + 2462, r30.u16);
	// ble cr6,0x823f9e08
	if (!ctx.cr6.gt) goto loc_823F9E08;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_823F9DBC:
	// lwz r9,2456(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 2456);
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stbx r30,r11,r9
	REX_STORE_U8(ctx.r11.u32 + ctx.r9.u32, r30.u8);
	// lhzx r9,r7,r5
	ctx.r9.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r5.u32);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x823f9df4
	if (ctx.cr0.eq) goto loc_823F9DF4;
	// lhz r9,9500(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 9500);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// sth r7,9500(r31)
	REX_STORE_U16(r31.u32 + 9500, ctx.r7.u16);
	// addi r9,r9,1230
	ctx.r9.s64 = ctx.r9.s64 + 1230;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r10,r9,r31
	REX_STORE_U16(ctx.r9.u32 + r31.u32, ctx.r10.u16);
loc_823F9DF4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r29.s32, ctx.xer);
	// blt cr6,0x823f9dbc
	if (ctx.cr6.lt) goto loc_823F9DBC;
loc_823F9E08:
	// lha r11,9500(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 9500));
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bge cr6,0x823f9e48
	if (!ctx.cr6.lt) goto loc_823F9E48;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823f9e38
	if (ctx.cr6.eq) goto loc_823F9E38;
	// lhz r11,2462(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 2462);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x823f9e30
	if (!ctx.cr0.eq) goto loc_823F9E30;
	// sth r8,2(r5)
	REX_STORE_U16(ctx.r5.u32 + 2, ctx.r8.u16);
	// b 0x823f9d90
	goto loc_823F9D90;
loc_823F9E30:
	// sth r8,0(r5)
	REX_STORE_U16(ctx.r5.u32 + 0, ctx.r8.u16);
	// b 0x823f9d90
	goto loc_823F9D90;
loc_823F9E38:
	// lha r11,2462(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2462));
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r30,r11,r26
	REX_STORE_U16(ctx.r11.u32 + r26.u32, r30.u16);
	// b 0x823f9edc
	goto loc_823F9EDC;
loc_823F9E48:
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f9c40
	ctx.lr = 0x823F9E54;
	sub_823F9C40(ctx, base);
	// clrlwi. r11,r27,24
	ctx.r11.u64 = r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f9edc
	if (ctx.cr0.eq) goto loc_823F9EDC;
	// li r9,16
	ctx.r9.s64 = 16;
	// sth r30,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, r30.u16);
	// addi r11,r1,82
	ctx.r11.s64 = ctx.r1.s64 + 82;
	// sth r30,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, r30.u16);
	// addi r10,r31,9460
	ctx.r10.s64 = r31.s64 + 9460;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823F9E74:
	// lhz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lhzu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r9,1,16,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFE;
	// sthu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x823f9e74
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823F9E74;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x823f9edc
	if (!ctx.cr6.gt) goto loc_823F9EDC;
	// addi r8,r26,-2
	ctx.r8.s64 = r26.s64 + -2;
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
loc_823F9EA0:
	// lbzx r10,r11,r28
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + r28.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r10,r7
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r7.u32);
	// sthu r10,2(r8)
	ea = 2 + ctx.r8.u32;
	REX_STORE_U16(ea, ctx.r10.u16);
	ctx.r8.u32 = ea;
	// lbzx r10,r11,r28
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + r28.u32);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lhzx r7,r10,r9
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// sthx r7,r10,r9
	REX_STORE_U16(ctx.r10.u32 + ctx.r9.u32, ctx.r7.u16);
	// bdnz 0x823f9ea0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823F9EA0;
loc_823F9EDC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82403970) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lwz r11,20(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// lwz r11,24(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// lwz r11,28(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8240F7C8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8240F7D0;
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
	// beq cr6,0x8240f7f8
	if (ctx.cr6.eq) goto loc_8240F7F8;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x824094e0
	ctx.lr = 0x8240F7F4;
	sub_824094E0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
loc_8240F7F8:
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
	// ble cr6,0x8240f844
	if (!ctx.cr6.gt) goto loc_8240F844;
	// addi r10,r6,-16
	ctx.r10.s64 = ctx.r6.s64 + -16;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_8240F82C:
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
	// blt cr6,0x8240f82c
	if (ctx.cr6.lt) goto loc_8240F82C;
loc_8240F844:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82410A88) {
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
	// bge cr6,0x82410b34
	if (!ctx.cr6.lt) goto loc_82410B34;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lfs f0,20264(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 20264);
	ctx.f0.f64 = double(temp.f32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,3704(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3704);
	ctx.f13.f64 = double(temp.f32);
loc_82410AEC:
	// lhz r10,6(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f12,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,0(r6)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lhzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// stfs f13,8(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// std r10,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// stfs f13,12(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// lfd f12,88(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,4(r6)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// bdnz 0x82410aec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82410AEC;
loc_82410B34:
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82410b50
	if (ctx.cr6.eq) goto loc_82410B50;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x825c73b8
	ctx.lr = 0x82410B50;
	sub_825C73B8(ctx, base);
loc_82410B50:
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82410b6c
	if (ctx.cr6.eq) goto loc_82410B6C;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x82409820
	ctx.lr = 0x82410B6C;
	sub_82409820(ctx, base);
loc_82410B6C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82412C28) {
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
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82408ef8
	ctx.lr = 0x82412C50;
	sub_82408EF8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,20860
	ctx.r11.s64 = ctx.r11.s64 + 20860;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm r11,r11,0,26,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// addis r11,r11,-6688
	ctx.r11.s64 = ctx.r11.s64 + -438304768;
	// addic. r11,r11,-18
	ctx.xer.ca = ctx.r11.u32 > 17;
	ctx.r11.s64 = ctx.r11.s64 + -18;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82412cb0
	if (ctx.cr0.eq) goto loc_82412CB0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82412c98
	if (ctx.cr6.eq) goto loc_82412C98;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82412cd0
	if (!ctx.cr6.eq) goto loc_82412CD0;
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// lis r10,-32188
	ctx.r10.s64 = -2109472768;
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r11,r11,17752
	ctx.r11.s64 = ctx.r11.s64 + 17752;
	// addi r10,r10,17632
	ctx.r10.s64 = ctx.r10.s64 + 17632;
	// b 0x82412cc4
	goto loc_82412CC4;
loc_82412C98:
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// lis r10,-32188
	ctx.r10.s64 = -2109472768;
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r11,r11,17728
	ctx.r11.s64 = ctx.r11.s64 + 17728;
	// addi r10,r10,17536
	ctx.r10.s64 = ctx.r10.s64 + 17536;
	// b 0x82412cc4
	goto loc_82412CC4;
loc_82412CB0:
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// lis r10,-32188
	ctx.r10.s64 = -2109472768;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r11,r11,15120
	ctx.r11.s64 = ctx.r11.s64 + 15120;
	// addi r10,r10,13584
	ctx.r10.s64 = ctx.r10.s64 + 13584;
loc_82412CC4:
	// stw r9,136(r31)
	REX_STORE_U32(r31.u32 + 136, ctx.r9.u32);
	// stw r11,144(r31)
	REX_STORE_U32(r31.u32 + 144, ctx.r11.u32);
	// stw r10,140(r31)
	REX_STORE_U32(r31.u32 + 140, ctx.r10.u32);
loc_82412CD0:
	// addi r3,r31,148
	ctx.r3.s64 = r31.s64 + 148;
	// addi r4,r30,16
	ctx.r4.s64 = r30.s64 + 16;
	// li r5,24
	ctx.r5.s64 = 24;
	// bl 0x826a1e70
	ctx.lr = 0x82412CE0;
	sub_826A1E70(ctx, base);
	// lwz r9,68(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 68);
	// li r11,-1
	ctx.r11.s64 = -1;
	// lwz r8,60(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 60);
	// addi r7,r9,3
	ctx.r7.s64 = ctx.r9.s64 + 3;
	// lwz r9,72(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 72);
	// stw r11,232(r31)
	REX_STORE_U32(r31.u32 + 232, ctx.r11.u32);
	// rlwinm r8,r8,0,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r11,236(r31)
	REX_STORE_U32(r31.u32 + 236, ctx.r11.u32);
	// addi r11,r9,3
	ctx.r11.s64 = ctx.r9.s64 + 3;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,64(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 64);
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r8,196(r31)
	REX_STORE_U32(r31.u32 + 196, ctx.r8.u32);
	// rlwinm r7,r7,0,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r10,240(r31)
	REX_STORE_U32(r31.u32 + 240, ctx.r10.u32);
	// stw r10,244(r31)
	REX_STORE_U32(r31.u32 + 244, ctx.r10.u32);
	// rlwinm r9,r9,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r10,248(r31)
	REX_STORE_U32(r31.u32 + 248, ctx.r10.u32);
	// subf r10,r8,r7
	ctx.r10.u64 = ctx.r7.u64 - ctx.r8.u64;
	// stw r11,208(r31)
	REX_STORE_U32(r31.u32 + 208, ctx.r11.u32);
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// stw r7,204(r31)
	REX_STORE_U32(r31.u32 + 204, ctx.r7.u32);
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r8,76(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 76);
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r7,80(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r9,200(r31)
	REX_STORE_U32(r31.u32 + 200, ctx.r9.u32);
	// subf r9,r8,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r8.u64;
	// stw r10,220(r31)
	REX_STORE_U32(r31.u32 + 220, ctx.r10.u32);
	// stw r11,224(r31)
	REX_STORE_U32(r31.u32 + 224, ctx.r11.u32);
	// stw r8,212(r31)
	REX_STORE_U32(r31.u32 + 212, ctx.r8.u32);
	// stw r9,228(r31)
	REX_STORE_U32(r31.u32 + 228, ctx.r9.u32);
	// stw r7,216(r31)
	REX_STORE_U32(r31.u32 + 216, ctx.r7.u32);
	// lwz r11,156(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 156);
	// lwz r10,160(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 160);
	// lwz r9,148(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 148);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// lwz r8,152(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 152);
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// lwz r7,164(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 164);
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// lwz r6,168(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 168);
	// rlwinm r9,r9,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r8,r8,0,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r11,180(r31)
	REX_STORE_U32(r31.u32 + 180, ctx.r11.u32);
	// rlwinm r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r9,172(r31)
	REX_STORE_U32(r31.u32 + 172, ctx.r9.u32);
	// stw r8,176(r31)
	REX_STORE_U32(r31.u32 + 176, ctx.r8.u32);
	// stw r7,188(r31)
	REX_STORE_U32(r31.u32 + 188, ctx.r7.u32);
	// stw r10,184(r31)
	REX_STORE_U32(r31.u32 + 184, ctx.r10.u32);
	// stw r6,192(r31)
	REX_STORE_U32(r31.u32 + 192, ctx.r6.u32);
	// lwz r11,64(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 64);
	// stw r11,252(r31)
	REX_STORE_U32(r31.u32 + 252, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_8241C9F0) {
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
	ctx.lr = 0x8241C9F8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// bl 0x8241bfe8
	ctx.lr = 0x8241CA14;
	sub_8241BFE8(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
loc_8241CA1C:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8241ca1c
	if (!ctx.cr6.eq) goto loc_8241CA1C;
	// subf r11,r31,r11
	ctx.r11.u64 = ctx.r11.u64 - r31.u64;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r29,r11,1
	r29.s64 = ctx.r11.s64 + 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823f02b8
	ctx.lr = 0x8241CA48;
	sub_823F02B8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x8241ca5c
	if (!ctx.cr0.eq) goto loc_8241CA5C;
loc_8241CA50:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8241cac0
	goto loc_8241CAC0;
loc_8241CA5C:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8241CA6C;
	sub_826A1E70(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x823f02b8
	ctx.lr = 0x8241CA78;
	sub_823F02B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8241caa8
	if (ctx.cr0.eq) goto loc_8241CAA8;
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwzx r10,r10,r28
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r28.u32);
	// stw r9,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// stw r26,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r26.u32);
	// stw r25,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r25.u32);
	// stw r10,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// b 0x8241caac
	goto loc_8241CAAC;
loc_8241CAA8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8241CAAC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8241ca50
	if (ctx.cr6.eq) goto loc_8241CA50;
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// li r3,0
	ctx.r3.s64 = 0;
	// stwx r11,r10,r28
	REX_STORE_U32(ctx.r10.u32 + r28.u32, ctx.r11.u32);
loc_8241CAC0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_82424FF8) {
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
	ctx.lr = 0x82425000;
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -160, f31.u64);
	// stwu r1,-528(r1)
	ea = -528 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r23,0
	r23.s64 = 0;
	// stw r6,572(r1)
	REX_STORE_U32(ctx.r1.u32 + 572, ctx.r6.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r7,580(r1)
	REX_STORE_U32(ctx.r1.u32 + 580, ctx.r7.u32);
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// stw r23,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r23.u32);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r18,r6
	r18.u64 = ctx.r6.u64;
	// mr r19,r7
	r19.u64 = ctx.r7.u64;
	// mr r31,r8
	r31.u64 = ctx.r8.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// ble cr6,0x8242506c
	if (!ctx.cr6.gt) goto loc_8242506C;
	// lwz r8,0(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// addi r10,r5,4
	ctx.r10.s64 = ctx.r5.s64 + 4;
loc_82425048:
	// lwz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82425068
	if (!ctx.cr6.eq) goto loc_82425068;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// blt cr6,0x82425048
	if (ctx.cr6.lt) goto loc_82425048;
	// b 0x8242506c
	goto loc_8242506C;
loc_82425068:
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
loc_8242506C:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// lwz r11,108(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// rlwinm. r10,r11,0,10,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824250f4
	if (ctx.cr0.eq) goto loc_824250F4;
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(r18.u32, 0, ctx.xer);
	// beq cr6,0x824250b4
	if (ctx.cr6.eq) goto loc_824250B4;
	// li r11,33
	ctx.r11.s64 = 33;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// rlwimi r5,r11,23,0,11
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0xFFF00000) | (ctx.r5.u64 & 0xFFFFFFFF000FFFFF);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r18
	ctx.r6.u64 = r18.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82423f70
	ctx.lr = 0x824250AC;
	sub_82423F70(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824259e8
	if (ctx.cr0.lt) goto loc_824259E8;
loc_824250B4:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(r19.u32, 0, ctx.xer);
	// beq cr6,0x824250ec
	if (ctx.cr6.eq) goto loc_824250EC;
	// li r11,265
	ctx.r11.s64 = 265;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// rlwimi r5,r11,20,0,11
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xFFF00000) | (ctx.r5.u64 & 0xFFFFFFFF000FFFFF);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r19
	ctx.r6.u64 = r19.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82423f70
	ctx.lr = 0x824250E4;
	sub_82423F70(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824259e8
	if (ctx.cr0.lt) goto loc_824259E8;
loc_824250EC:
	// mr r30,r23
	r30.u64 = r23.u64;
	// b 0x824259e8
	goto loc_824259E8;
loc_824250F4:
	// rlwinm. r11,r11,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82425380
	if (ctx.cr0.eq) goto loc_82425380;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82425380
	if (ctx.cr6.eq) goto loc_82425380;
	// lwz r3,8(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 8);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,120(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// lfd f1,-23104(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + -23104);
	// bl 0x82478758
	ctx.lr = 0x82425120;
	sub_82478758(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lwz r3,8(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 8);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,120(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// lfd f1,32424(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + 32424);
	// bl 0x82478758
	ctx.lr = 0x82425140;
	sub_82478758(ctx, base);
	// stw r3,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lwz r3,8(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 8);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,120(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// lfd f1,-23112(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + -23112);
	// bl 0x82478758
	ctx.lr = 0x82425160;
	sub_82478758(ctx, base);
	// stw r3,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r3,8(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfd f31,-23672(r11)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r11.u32 + -23672);
	// lwz r4,120(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x82478758
	ctx.lr = 0x82425184;
	sub_82478758(ctx, base);
	// stw r3,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// addi r5,r1,304
	ctx.r5.s64 = ctx.r1.s64 + 304;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,0(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 0);
	// bl 0x82422288
	ctx.lr = 0x82425198;
	sub_82422288(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824259e8
	if (ctx.cr0.lt) goto loc_824259E8;
	// lfd f0,304(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 304);
	// li r27,-1
	r27.s64 = -1;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// blt cr6,0x824251d0
	if (ctx.cr6.lt) goto loc_824251D0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfd f13,312(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 312);
	// lfd f0,-23664(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + -23664);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x824251d0
	if (ctx.cr6.gt) goto loc_824251D0;
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// stw r10,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// b 0x824252cc
	goto loc_824252CC;
loc_824251D0:
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lis r5,8272
	ctx.r5.s64 = 542113792;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// stw r27,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r27.u32);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// stw r27,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, r27.u32);
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// stw r27,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, r27.u32);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// stw r27,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, r27.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r27,16(r10)
	REX_STORE_U32(ctx.r10.u32 + 16, r27.u32);
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// bl 0x82423f70
	ctx.lr = 0x82425210;
	sub_82423F70(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824259e8
	if (ctx.cr0.lt) goto loc_824259E8;
	// lis r5,8256
	ctx.r5.s64 = 541065216;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r6,r1,116
	ctx.r6.s64 = ctx.r1.s64 + 116;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242523C;
	sub_82423F70(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824259e8
	if (ctx.cr0.lt) goto loc_824259E8;
	// lis r5,4160
	ctx.r5.s64 = 272629760;
	// li r9,20
	ctx.r9.s64 = 20;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,116
	ctx.r7.s64 = ctx.r1.s64 + 116;
	// addi r6,r1,120
	ctx.r6.s64 = ctx.r1.s64 + 120;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82423f70
	ctx.lr = 0x82425268;
	sub_82423F70(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824259e8
	if (ctx.cr0.lt) goto loc_824259E8;
	// lis r5,8272
	ctx.r5.s64 = 542113792;
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// addi r7,r1,120
	ctx.r7.s64 = ctx.r1.s64 + 120;
	// addi r6,r1,124
	ctx.r6.s64 = ctx.r1.s64 + 124;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82423f70
	ctx.lr = 0x82425294;
	sub_82423F70(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824259e8
	if (ctx.cr0.lt) goto loc_824259E8;
	// lis r5,8256
	ctx.r5.s64 = 541065216;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,92
	ctx.r8.s64 = ctx.r1.s64 + 92;
	// addi r7,r1,124
	ctx.r7.s64 = ctx.r1.s64 + 124;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82423f70
	ctx.lr = 0x824252C0;
	sub_82423F70(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824259e8
	if (ctx.cr0.lt) goto loc_824259E8;
	// lwz r10,128(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
loc_824252CC:
	// addi r30,r1,352
	r30.s64 = ctx.r1.s64 + 352;
	// addi r28,r1,336
	r28.s64 = ctx.r1.s64 + 336;
	// lis r5,20528
	ctx.r5.s64 = 1345323008;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r27,0(r30)
	REX_STORE_U32(r30.u32 + 0, r27.u32);
	// addi r7,r1,336
	ctx.r7.s64 = ctx.r1.s64 + 336;
	// stw r10,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// addi r6,r1,352
	ctx.r6.s64 = ctx.r1.s64 + 352;
	// stw r27,4(r30)
	REX_STORE_U32(r30.u32 + 4, r27.u32);
	// ori r5,r5,4
	ctx.r5.u64 = ctx.r5.u64 | 4;
	// stw r10,4(r28)
	REX_STORE_U32(r28.u32 + 4, ctx.r10.u32);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// stw r27,8(r30)
	REX_STORE_U32(r30.u32 + 8, r27.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r10,8(r28)
	REX_STORE_U32(r28.u32 + 8, ctx.r10.u32);
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// stw r27,12(r30)
	REX_STORE_U32(r30.u32 + 12, r27.u32);
	// stw r10,12(r28)
	REX_STORE_U32(r28.u32 + 12, ctx.r10.u32);
	// bl 0x82423f70
	ctx.lr = 0x8242531C;
	sub_82423F70(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824259e8
	if (ctx.cr0.lt) goto loc_824259E8;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(r19.u32, 0, ctx.xer);
	// beq cr6,0x82425350
	if (ctx.cr6.eq) goto loc_82425350;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82425350
	if (ctx.cr6.eq) goto loc_82425350;
	// lwz r10,352(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 352);
	// addi r11,r19,-4
	ctx.r11.s64 = r19.s64 + -4;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq 0x82425350
	if (ctx.cr0.eq) goto loc_82425350;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
loc_82425348:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82425348
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82425348;
loc_82425350:
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(r18.u32, 0, ctx.xer);
	// beq cr6,0x824259e4
	if (ctx.cr6.eq) goto loc_824259E4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x824259e4
	if (ctx.cr6.eq) goto loc_824259E4;
	// lwz r10,356(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// addi r11,r18,-4
	ctx.r11.s64 = r18.s64 + -4;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq 0x824259e4
	if (ctx.cr0.eq) goto loc_824259E4;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
loc_82425374:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82425374
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82425374;
	// b 0x824259e4
	goto loc_824259E4;
loc_82425380:
	// subfic r11,r18,0
	ctx.xer.ca = r18.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - r18.u64;
	// lwz r3,8(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 8);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r9,r19,0
	ctx.xer.ca = r19.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - r19.u64;
	// and r21,r11,r31
	r21.u64 = ctx.r11.u64 & r31.u64;
	// subfe r11,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r4,120(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// li r6,0
	ctx.r6.s64 = 0;
	// lfd f1,-23104(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r10.u32 + -23104);
	// and r20,r11,r31
	r20.u64 = ctx.r11.u64 & r31.u64;
	// stw r21,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r21.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r20,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, r20.u32);
	// add r30,r20,r21
	r30.u64 = r20.u64 + r21.u64;
	// bl 0x82478758
	ctx.lr = 0x824253C0;
	sub_82478758(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r3,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r4,120(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// lfd f1,12272(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r10.u32 + 12272);
	// bl 0x82478758
	ctx.lr = 0x824253E4;
	sub_82478758(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r3,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r4,120(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// lfd f1,32424(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r10.u32 + 32424);
	// bl 0x82478758
	ctx.lr = 0x82425408;
	sub_82478758(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r3,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r4,120(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// lfd f1,-23112(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r10.u32 + -23112);
	// bl 0x82478758
	ctx.lr = 0x8242542C;
	sub_82478758(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r3,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r3.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r4,120(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// lfd f1,-23672(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r10.u32 + -23672);
	// bl 0x82478758
	ctx.lr = 0x82425450;
	sub_82478758(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r3,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r3.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r4,120(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// lfd f1,-23120(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r10.u32 + -23120);
	// bl 0x82478758
	ctx.lr = 0x82425474;
	sub_82478758(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r3,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r3.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r4,120(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// lfd f1,-23128(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r10.u32 + -23128);
	// bl 0x82478758
	ctx.lr = 0x82425498;
	sub_82478758(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r3,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r3.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r4,120(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// lfd f1,-23136(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r10.u32 + -23136);
	// bl 0x82478758
	ctx.lr = 0x824254BC;
	sub_82478758(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r3,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r3.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,120(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lfd f1,-23144(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r10.u32 + -23144);
	// bl 0x82478758
	ctx.lr = 0x824254E0;
	sub_82478758(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r3,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r4,120(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// lfd f1,-23152(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r10.u32 + -23152);
	// bl 0x82478758
	ctx.lr = 0x82425504;
	sub_82478758(ctx, base);
	// stw r3,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r3.u32);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mulli r3,r30,108
	ctx.r3.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(108));
	// bl 0x823f02b8
	ctx.lr = 0x82425514;
	sub_823F02B8(ctx, base);
	// stw r3,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8242552c
	if (!ctx.cr0.eq) goto loc_8242552C;
	// lis r30,-32761
	r30.s64 = -2147024896;
	// ori r30,r30,14
	r30.u64 = r30.u64 | 14;
	// b 0x824259e8
	goto loc_824259E8;
loc_8242552C:
	// li r10,27
	ctx.r10.s64 = 27;
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// rlwinm r8,r30,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82425544:
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// bdnz 0x82425544
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82425544;
	// addi r9,r1,192
	ctx.r9.s64 = ctx.r1.s64 + 192;
	// li r8,15
	ctx.r8.s64 = 15;
	// li r27,-1
	r27.s64 = -1;
loc_8242555C:
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82425584
	if (ctx.cr6.eq) goto loc_82425584;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x82425584
	if (ctx.cr0.eq) goto loc_82425584;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242557C:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242557c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242557C;
loc_82425584:
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x8242555c
	if (!ctx.cr0.eq) goto loc_8242555C;
	// lwz r7,296(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// lwz r14,268(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// lwz r15,264(r1)
	r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 264);
	// lwz r16,260(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r8,256(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// lwz r31,252(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// beq cr6,0x82425700
	if (ctx.cr6.eq) goto loc_82425700;
	// rlwinm r10,r21,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r5,272(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// lwz r4,276(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
	// lwz r3,280(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// subf r24,r10,r28
	r24.u64 = r28.u64 - ctx.r10.u64;
	// lwz r27,284(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// lwz r26,288(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// subf r19,r28,r19
	r19.u64 = r19.u64 - r28.u64;
	// lwz r25,292(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// subf r18,r31,r18
	r18.u64 = r18.u64 - r31.u64;
	// subf r21,r31,r8
	r21.u64 = ctx.r8.u64 - r31.u64;
	// subf r10,r31,r16
	ctx.r10.u64 = r16.u64 - r31.u64;
	// subf r9,r31,r15
	ctx.r9.u64 = r15.u64 - r31.u64;
	// subf r6,r31,r14
	ctx.r6.u64 = r14.u64 - r31.u64;
	// subf r5,r31,r5
	ctx.r5.u64 = ctx.r5.u64 - r31.u64;
	// subf r4,r31,r4
	ctx.r4.u64 = ctx.r4.u64 - r31.u64;
	// subf r3,r31,r3
	ctx.r3.u64 = ctx.r3.u64 - r31.u64;
	// subf r27,r31,r27
	r27.u64 = r27.u64 - r31.u64;
	// subf r26,r31,r26
	r26.u64 = r26.u64 - r31.u64;
	// subf r25,r31,r25
	r25.u64 = r25.u64 - r31.u64;
	// subf r17,r31,r28
	r17.u64 = r28.u64 - r31.u64;
	// subf r20,r31,r7
	r20.u64 = ctx.r7.u64 - r31.u64;
loc_82425610:
	// lwz r28,80(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r23,r28
	ctx.cr6.compare<uint32_t>(r23.u32, r28.u32, ctx.xer);
	// bge cr6,0x82425624
	if (!ctx.cr6.lt) goto loc_82425624;
	// lwzx r28,r18,r11
	r28.u64 = REX_LOAD_U32(r18.u32 + ctx.r11.u32);
	// b 0x82425628
	goto loc_82425628;
loc_82425624:
	// lwzx r28,r19,r24
	r28.u64 = REX_LOAD_U32(r19.u32 + r24.u32);
loc_82425628:
	// std r10,136(r1)
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.r10.u64);
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// std r9,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.r9.u64);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r28.u32);
	// cmplw cr6,r23,r9
	ctx.cr6.compare<uint32_t>(r23.u32, ctx.r9.u32, ctx.xer);
	// ld r9,144(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// stwx r10,r21,r11
	REX_STORE_U32(r21.u32 + ctx.r11.u32, ctx.r10.u32);
	// ld r10,136(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 136);
	// lwz r28,88(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// blt cr6,0x82425658
	if (ctx.cr6.lt) goto loc_82425658;
	// lwz r28,84(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_82425658:
	// std r8,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.r8.u64);
	// lwz r8,168(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// std r7,136(r1)
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.r7.u64);
	// lwz r7,172(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// std r31,320(r1)
	REX_STORE_U64(ctx.r1.u32 + 320, r31.u64);
	// lwz r31,156(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// stwx r28,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, r28.u32);
	// stwx r8,r9,r11
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r8.u32);
	// stwx r7,r6,r11
	REX_STORE_U32(ctx.r6.u32 + ctx.r11.u32, ctx.r7.u32);
	// std r30,336(r1)
	REX_STORE_U64(ctx.r1.u32 + 336, r30.u64);
	// stwx r31,r5,r11
	REX_STORE_U32(ctx.r5.u32 + ctx.r11.u32, r31.u32);
	// lwz r30,152(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// std r24,304(r1)
	REX_STORE_U64(ctx.r1.u32 + 304, r24.u64);
	// lwz r24,160(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r28,132(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r8,164(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// stwx r30,r4,r11
	REX_STORE_U32(ctx.r4.u32 + ctx.r11.u32, r30.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stwx r24,r3,r11
	REX_STORE_U32(ctx.r3.u32 + ctx.r11.u32, r24.u32);
	// stwx r28,r27,r11
	REX_STORE_U32(r27.u32 + ctx.r11.u32, r28.u32);
	// cmplw cr6,r23,r7
	ctx.cr6.compare<uint32_t>(r23.u32, ctx.r7.u32, ctx.xer);
	// stwx r8,r26,r11
	REX_STORE_U32(r26.u32 + ctx.r11.u32, ctx.r8.u32);
	// ld r8,144(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// ld r7,136(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 136);
	// ld r31,320(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + 320);
	// ld r30,336(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + 336);
	// ld r24,304(r1)
	r24.u64 = REX_LOAD_U64(ctx.r1.u32 + 304);
	// lwz r28,32(r29)
	r28.u64 = REX_LOAD_U32(r29.u32 + 32);
	// stwx r28,r25,r11
	REX_STORE_U32(r25.u32 + ctx.r11.u32, r28.u32);
	// bge cr6,0x824256d8
	if (!ctx.cr6.lt) goto loc_824256D8;
	// lwzx r28,r17,r11
	r28.u64 = REX_LOAD_U32(r17.u32 + ctx.r11.u32);
	// b 0x824256dc
	goto loc_824256DC;
loc_824256D8:
	// lwz r28,0(r24)
	r28.u64 = REX_LOAD_U32(r24.u32 + 0);
loc_824256DC:
	// stwx r28,r20,r11
	REX_STORE_U32(r20.u32 + ctx.r11.u32, r28.u32);
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r24,r24,4
	r24.s64 = r24.s64 + 4;
	// bdnz 0x82425610
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82425610;
	// lwz r19,580(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 580);
	// lwz r18,572(r1)
	r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 572);
	// lwz r20,176(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r21,80(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_82425700:
	// clrlwi r28,r30,12
	r28.u64 = r30.u32 & 0xFFFFF;
	// lwz r26,192(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// li r9,0
	ctx.r9.s64 = 0;
	// oris r27,r28,8272
	r27.u64 = r28.u64 | 542113792;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82423f70
	ctx.lr = 0x82425724;
	sub_82423F70(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824259e8
	if (ctx.cr0.lt) goto loc_824259E8;
	// lwz r25,196(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// oris r23,r28,8256
	r23.u64 = r28.u64 | 541065216;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r16
	ctx.r8.u64 = r16.u64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82423f70
	ctx.lr = 0x82425754;
	sub_82423F70(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824259e8
	if (ctx.cr0.lt) goto loc_824259E8;
	// lwz r24,200(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// oris r5,r28,4160
	ctx.r5.u64 = r28.u64 | 272629760;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82423f70
	ctx.lr = 0x82425780;
	sub_82423F70(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824259e8
	if (ctx.cr0.lt) goto loc_824259E8;
	// lwz r26,204(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 204);
	// li r9,4
	ctx.r9.s64 = 4;
	// mr r8,r15
	ctx.r8.u64 = r15.u64;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82423f70
	ctx.lr = 0x824257AC;
	sub_82423F70(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824259e8
	if (ctx.cr0.lt) goto loc_824259E8;
	// lwz r28,208(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r14
	ctx.r8.u64 = r14.u64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82423f70
	ctx.lr = 0x824257D8;
	sub_82423F70(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824259e8
	if (ctx.cr0.lt) goto loc_824259E8;
	// lwz r25,212(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// li r9,4
	ctx.r9.s64 = 4;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82423f70
	ctx.lr = 0x82425804;
	sub_82423F70(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824259e8
	if (ctx.cr0.lt) goto loc_824259E8;
	// lwz r28,216(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// lwz r8,272(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82423f70
	ctx.lr = 0x82425830;
	sub_82423F70(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824259e8
	if (ctx.cr0.lt) goto loc_824259E8;
	// lwz r26,220(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// lwz r8,276(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242585C;
	sub_82423F70(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824259e8
	if (ctx.cr0.lt) goto loc_824259E8;
	// lwz r28,224(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82423f70
	ctx.lr = 0x82425888;
	sub_82423F70(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824259e8
	if (ctx.cr0.lt) goto loc_824259E8;
	// lwz r26,228(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// lwz r8,280(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82423f70
	ctx.lr = 0x824258B4;
	sub_82423F70(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824259e8
	if (ctx.cr0.lt) goto loc_824259E8;
	// lwz r28,232(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 232);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82423f70
	ctx.lr = 0x824258E0;
	sub_82423F70(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824259e8
	if (ctx.cr0.lt) goto loc_824259E8;
	// lwz r26,236(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// lwz r8,284(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242590C;
	sub_82423F70(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824259e8
	if (ctx.cr0.lt) goto loc_824259E8;
	// lwz r28,240(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82423f70
	ctx.lr = 0x82425938;
	sub_82423F70(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824259e8
	if (ctx.cr0.lt) goto loc_824259E8;
	// lwz r26,244(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// lwz r8,288(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82423f70
	ctx.lr = 0x82425964;
	sub_82423F70(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824259e8
	if (ctx.cr0.lt) goto loc_824259E8;
	// lwz r28,248(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 248);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82423f70
	ctx.lr = 0x82425990;
	sub_82423F70(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824259e8
	if (ctx.cr0.lt) goto loc_824259E8;
	// li r9,16
	ctx.r9.s64 = 16;
	// lwz r8,292(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82423f70
	ctx.lr = 0x824259B8;
	sub_82423F70(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824259e8
	if (ctx.cr0.lt) goto loc_824259E8;
	// rlwinm r30,r21,2,0,29
	r30.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x826a1e70
	ctx.lr = 0x824259D4;
	sub_826A1E70(ctx, base);
	// rlwinm r5,r20,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r31,r30
	ctx.r4.u64 = r31.u64 + r30.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x826a1e70
	ctx.lr = 0x824259E4;
	sub_826A1E70(ctx, base);
loc_824259E4:
	// li r30,0
	r30.s64 = 0;
loc_824259E8:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x823f0350
	ctx.lr = 0x824259F4;
	sub_823F0350(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_82472670) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82472678;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,260(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r30,12(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r29,16(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// clrlwi r28,r11,12
	r28.u64 = ctx.r11.u32 & 0xFFFFF;
	// bl 0x82477448
	ctx.lr = 0x824726A0;
	sub_82477448(ctx, base);
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,260(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 260);
	// bl 0x82477448
	ctx.lr = 0x824726B0;
	sub_82477448(ctx, base);
	// lis r4,2
	ctx.r4.s64 = 131072;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r8,112(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// lwz r7,116(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// ori r4,r4,66
	ctx.r4.u64 = ctx.r4.u64 | 66;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82471828
	ctx.lr = 0x824726EC;
	sub_82471828(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82474640) {
	REX_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,91
	ctx.r4.s64 = 91;
	// b 0x82473e60
	sub_82473E60(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82474688) {
	REX_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,19
	ctx.r4.s64 = 19;
	// b 0x82473e60
	sub_82473E60(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824746E8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,260(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r4,7
	ctx.r4.s64 = 7;
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,12(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r6,8(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r5,16(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// b 0x82473f80
	sub_82473F80(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82474B88) {
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
	// bl 0x826a1ca0
	ctx.lr = 0x82474B90;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,348(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 348);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82474bac
	if (ctx.cr6.eq) goto loc_82474BAC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82474efc
	goto loc_82474EFC;
loc_82474BAC:
	// lwz r11,112(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 112);
	// li r23,0
	r23.s64 = 0;
	// rlwinm. r11,r11,0,7,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r22,r23
	r22.u64 = r23.u64;
	// beq 0x82474d0c
	if (ctx.cr0.eq) goto loc_82474D0C;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// mr r28,r23
	r28.u64 = r23.u64;
	// mr r24,r23
	r24.u64 = r23.u64;
	// mr r26,r23
	r26.u64 = r23.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// std r23,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, r23.u64);
	// std r23,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, r23.u64);
	// ble cr6,0x82474cc8
	if (!ctx.cr6.gt) goto loc_82474CC8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r27,r23
	r27.u64 = r23.u64;
	// addi r25,r11,30300
	r25.s64 = ctx.r11.s64 + 30300;
loc_82474BF0:
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 16);
	// lwzx r31,r11,r27
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + r27.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82474cb4
	if (ctx.cr0.eq) goto loc_82474CB4;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,108(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 108);
	// lwz r11,112(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82474C2C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,108(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 108);
	// lwz r11,116(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82474C48;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(r29.u32, 1, ctx.xer);
	// beq cr6,0x82474c94
	if (ctx.cr6.eq) goto loc_82474C94;
	// cmplwi cr6,r29,5
	ctx.cr6.compare<uint32_t>(r29.u32, 5, ctx.xer);
	// bne cr6,0x82474cb4
	if (!ctx.cr6.eq) goto loc_82474CB4;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82474cb4
	if (!ctx.cr6.eq) goto loc_82474CB4;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82474cb4
	if (!ctx.cr6.gt) goto loc_82474CB4;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne cr6,0x82474cb4
	if (!ctx.cr6.eq) goto loc_82474CB4;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// lwz r4,96(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 96);
	// li r5,4540
	ctx.r5.s64 = 4540;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82489c30
	ctx.lr = 0x82474C88;
	sub_82489C30(ctx, base);
	// li r28,1
	r28.s64 = 1;
	// li r22,1
	r22.s64 = 1;
	// b 0x82474cb4
	goto loc_82474CB4;
loc_82474C94:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82474cb4
	if (!ctx.cr6.eq) goto loc_82474CB4;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r24,96(r31)
	r24.u64 = REX_LOAD_U32(r31.u32 + 96);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
loc_82474CB4:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82474bf0
	if (ctx.cr6.lt) goto loc_82474BF0;
loc_82474CC8:
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82474CD8:
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82474ce8
	if (ctx.cr6.eq) goto loc_82474CE8;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_82474CE8:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82474cd8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82474CD8;
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// beq cr6,0x82474ee8
	if (ctx.cr6.eq) goto loc_82474EE8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,4541
	ctx.r5.s64 = 4541;
	// addi r6,r11,30232
	ctx.r6.s64 = ctx.r11.s64 + 30232;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// b 0x82474edc
	goto loc_82474EDC;
loc_82474D0C:
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// mr r25,r23
	r25.u64 = r23.u64;
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82474D20:
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x82474d20
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82474D20;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// mr r26,r23
	r26.u64 = r23.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// std r23,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, r23.u64);
	// std r23,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, r23.u64);
	// ble cr6,0x82474e38
	if (!ctx.cr6.gt) goto loc_82474E38;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r28,r23
	r28.u64 = r23.u64;
	// addi r27,r11,30208
	r27.s64 = ctx.r11.s64 + 30208;
loc_82474D50:
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 16);
	// lwzx r31,r11,r28
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + r28.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82474e24
	if (ctx.cr0.eq) goto loc_82474E24;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,108(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 108);
	// lwz r11,112(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82474D8C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,108(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 108);
	// lwz r11,116(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82474DA8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r29,11
	ctx.cr6.compare<uint32_t>(r29.u32, 11, ctx.xer);
	// beq cr6,0x82474df4
	if (ctx.cr6.eq) goto loc_82474DF4;
	// cmplwi cr6,r29,13
	ctx.cr6.compare<uint32_t>(r29.u32, 13, ctx.xer);
	// bne cr6,0x82474e24
	if (!ctx.cr6.eq) goto loc_82474E24;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82474e24
	if (!ctx.cr6.eq) goto loc_82474E24;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82474e24
	if (ctx.cr6.eq) goto loc_82474E24;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// bne cr6,0x82474e24
	if (!ctx.cr6.eq) goto loc_82474E24;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// lwz r4,96(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 96);
	// li r5,4528
	ctx.r5.s64 = 4528;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82489c30
	ctx.lr = 0x82474DE8;
	sub_82489C30(ctx, base);
	// li r25,1
	r25.s64 = 1;
	// li r22,1
	r22.s64 = 1;
	// b 0x82474e24
	goto loc_82474E24;
loc_82474DF4:
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// bge cr6,0x82474e24
	if (!ctx.cr6.lt) goto loc_82474E24;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,96(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 96);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r6,1
	ctx.r6.s64 = 1;
	// stwx r9,r11,r7
	REX_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r9.u32);
	// stwx r6,r10,r8
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r6.u32);
loc_82474E24:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82474d50
	if (ctx.cr6.lt) goto loc_82474D50;
loc_82474E38:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r27,r23
	r27.u64 = r23.u64;
	// li r26,1
	r26.s64 = 1;
	// mr r31,r23
	r31.u64 = r23.u64;
	// addi r29,r11,30168
	r29.s64 = ctx.r11.s64 + 30168;
	// addi r28,r10,30104
	r28.s64 = ctx.r10.s64 + 30104;
loc_82474E54:
	// li r8,4
	ctx.r8.s64 = 4;
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
	// rlwinm r9,r31,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82474E68:
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwzx r8,r8,r7
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// addic r7,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// subfe r8,r7,r8
	temp.u8 = (~ctx.r7.u32 + ctx.r8.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r7.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// bdnz 0x82474e68
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82474E68;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82474f04
	if (!ctx.cr6.eq) goto loc_82474F04;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82474eb4
	if (!ctx.cr6.eq) goto loc_82474EB4;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,4530
	ctx.r5.s64 = 4530;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82489c30
	ctx.lr = 0x82474EB0;
	sub_82489C30(ctx, base);
	// li r22,1
	r22.s64 = 1;
loc_82474EB4:
	// li r27,1
	r27.s64 = 1;
loc_82474EB8:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(r31.u32, 4, ctx.xer);
	// blt cr6,0x82474e54
	if (ctx.cr6.lt) goto loc_82474E54;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// bne cr6,0x82474ee8
	if (!ctx.cr6.eq) goto loc_82474EE8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,4538
	ctx.r5.s64 = 4538;
	// addi r6,r11,30044
	ctx.r6.s64 = ctx.r11.s64 + 30044;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82474EDC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82489c30
	ctx.lr = 0x82474EE4;
	sub_82489C30(ctx, base);
	// li r22,1
	r22.s64 = 1;
loc_82474EE8:
	// subfic r11,r22,0
	ctx.xer.ca = r22.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - r22.u64;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// ori r10,r10,16389
	ctx.r10.u64 = ctx.r10.u64 | 16389;
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
loc_82474EFC:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826a1cf0
	return;
loc_82474F04:
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// beq cr6,0x82474f2c
	if (ctx.cr6.eq) goto loc_82474F2C;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// li r5,4529
	ctx.r5.s64 = 4529;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwzx r4,r9,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// bl 0x82489c30
	ctx.lr = 0x82474F28;
	sub_82489C30(ctx, base);
	// li r22,1
	r22.s64 = 1;
loc_82474F2C:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq cr6,0x82474eb8
	if (ctx.cr6.eq) goto loc_82474EB8;
	// mr r26,r23
	r26.u64 = r23.u64;
	// b 0x82474eb8
	goto loc_82474EB8;
}

DEFINE_REX_FUNC(sub_82495088) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82495090;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824950c4
	if (!ctx.cr6.eq) goto loc_824950C4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,-12428
	ctx.r6.s64 = ctx.r11.s64 + -12428;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82494e30
	ctx.lr = 0x824950B8;
	sub_82494E30(ctx, base);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82495174
	goto loc_82495174;
loc_824950C4:
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// bne cr6,0x82495160
	if (!ctx.cr6.eq) goto loc_82495160;
	// lwz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82495160
	if (ctx.cr6.eq) goto loc_82495160;
	// lwz r10,16(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x82495160
	if (ctx.cr6.eq) goto loc_82495160;
	// addi r31,r11,24
	r31.s64 = ctx.r11.s64 + 24;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// b 0x82495130
	goto loc_82495130;
loc_824950F8:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,20(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 20);
	// lwz r5,8(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r4,32(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// bl 0x824933b0
	ctx.lr = 0x8249511C;
	sub_824933B0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82495174
	if (ctx.cr0.lt) goto loc_82495174;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r31,r11,12
	r31.s64 = ctx.r11.s64 + 12;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
loc_82495130:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824950f8
	if (!ctx.cr6.eq) goto loc_824950F8;
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// lwz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// stw r11,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, ctx.r11.u32);
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// stw r29,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, r29.u32);
loc_82495160:
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// stw r10,20(r30)
	REX_STORE_U32(r30.u32 + 20, ctx.r10.u32);
	// stw r29,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, r29.u32);
loc_82495174:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8249B0C8) {
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
	ctx.lr = 0x8249B0D0;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,8(r4)
	r27.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// lwz r11,16(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 16);
	// mr r24,r9
	r24.u64 = ctx.r9.u64;
	// mr r30,r10
	r30.u64 = ctx.r10.u64;
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8249b148
	if (ctx.cr6.eq) goto loc_8249B148;
	// andi. r10,r10,5
	ctx.r10.u64 = ctx.r10.u64 & 5;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8249b13c
	if (ctx.cr0.eq) goto loc_8249B13C;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lwz r7,8(r6)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,-11092
	ctx.r10.s64 = ctx.r10.s64 + -11092;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// li r5,3005
	ctx.r5.s64 = 3005;
	// addi r6,r8,-11136
	ctx.r6.s64 = ctx.r8.s64 + -11136;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwzx r9,r9,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwzx r8,r11,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82494d48
	ctx.lr = 0x8249B13C;
	sub_82494D48(ctx, base);
loc_8249B13C:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x8249b2d4
	goto loc_8249B2D4;
loc_8249B148:
	// rlwinm. r11,r30,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r31,0
	r31.s64 = 0;
	// beq 0x8249b170
	if (ctx.cr0.eq) goto loc_8249B170;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// lwz r4,24(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 24);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8249aa78
	ctx.lr = 0x8249B16C;
	sub_8249AA78(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_8249B170:
	// rlwinm. r11,r30,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8249b194
	if (ctx.cr0.eq) goto loc_8249B194;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// lwz r4,24(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 24);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82494060
	ctx.lr = 0x8249B190;
	sub_82494060(ctx, base);
	// add r31,r3,r31
	r31.u64 = ctx.r3.u64 + r31.u64;
loc_8249B194:
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(r31.s32, -1, ctx.xer);
	// beq cr6,0x8249b2d0
	if (ctx.cr6.eq) goto loc_8249B2D0;
	// lwz r9,340(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// lwz r11,348(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8249b1bc
	if (!ctx.cr6.lt) goto loc_8249B1BC;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r31,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, r31.u32);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8249B1BC:
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8249b1ec
	if (!ctx.cr6.eq) goto loc_8249B1EC;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,64
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 64, ctx.xer);
	// bge cr6,0x8249b1ec
	if (!ctx.cr6.lt) goto loc_8249B1EC;
	// lwz r8,356(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r27,r10,r8
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, r27.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8249B1EC:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x8249b2d0
	if (ctx.cr6.eq) goto loc_8249B2D0;
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8249b2d0
	if (!ctx.cr6.eq) goto loc_8249B2D0;
	// lwz r11,48(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8249b2d0
	if (ctx.cr6.eq) goto loc_8249B2D0;
	// lwz r11,44(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8249b2d0
	if (!ctx.cr6.eq) goto loc_8249B2D0;
	// lwz r5,32(r24)
	ctx.r5.u64 = REX_LOAD_U32(r24.u32 + 32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r30,1
	r30.s64 = 1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// addi r31,r11,-11280
	r31.s64 = ctx.r11.s64 + -11280;
	// beq cr6,0x8249b28c
	if (ctx.cr6.eq) goto loc_8249B28C;
	// lwz r11,16(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 16);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8249b28c
	if (!ctx.cr6.eq) goto loc_8249B28C;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82493608
	ctx.lr = 0x8249B248;
	sub_82493608(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8249b28c
	if (ctx.cr0.eq) goto loc_8249B28C;
loc_8249B250:
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8249b270
	if (ctx.cr6.eq) goto loc_8249B270;
	// lwz r3,12(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8249b250
	if (!ctx.cr6.eq) goto loc_8249B250;
	// b 0x8249b28c
	goto loc_8249B28C;
loc_8249B270:
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// lwz r7,8(r25)
	ctx.r7.u64 = REX_LOAD_U32(r25.u32 + 8);
	// li r5,3078
	ctx.r5.s64 = 3078;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82494dc0
	ctx.lr = 0x8249B288;
	sub_82494DC0(ctx, base);
	// stw r30,44(r27)
	REX_STORE_U32(r27.u32 + 44, r30.u32);
loc_8249B28C:
	// lwz r11,12(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 12);
	// b 0x8249b2a8
	goto loc_8249B2A8;
loc_8249B294:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,48(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 48);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8249b2b4
	if (ctx.cr6.eq) goto loc_8249B2B4;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
loc_8249B2A8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8249b294
	if (!ctx.cr6.eq) goto loc_8249B294;
	// b 0x8249b2d0
	goto loc_8249B2D0;
loc_8249B2B4:
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// lwz r7,8(r25)
	ctx.r7.u64 = REX_LOAD_U32(r25.u32 + 8);
	// li r5,3078
	ctx.r5.s64 = 3078;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82494dc0
	ctx.lr = 0x8249B2CC;
	sub_82494DC0(ctx, base);
	// stw r30,44(r27)
	REX_STORE_U32(r27.u32 + 44, r30.u32);
loc_8249B2D0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8249B2D4:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_824AE3F0) {
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
	ctx.lr = 0x824AE3F8;
	// stwu r1,-1200(r1)
	ea = -1200 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r23,0
	r23.s64 = 0;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r21,r4
	r21.u64 = ctx.r4.u64;
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// mr r8,r23
	ctx.r8.u64 = r23.u64;
	// beq cr6,0x824ae480
	if (ctx.cr6.eq) goto loc_824AE480;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
loc_824AE41C:
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824ae470
	if (ctx.cr6.eq) goto loc_824AE470;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x824ae468
	if (!ctx.cr6.gt) goto loc_824AE468;
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
loc_824AE43C:
	// lwz r6,16(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r5,20(r24)
	ctx.r5.u64 = REX_LOAD_U32(r24.u32 + 20);
	// lwzx r6,r6,r10
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r6,r5
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	// stw r8,72(r6)
	REX_STORE_U32(ctx.r6.u32 + 72, ctx.r8.u32);
	// lwz r6,12(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x824ae43c
	if (ctx.cr6.lt) goto loc_824AE43C;
loc_824AE468:
	// stw r23,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, r23.u32);
	// stw r23,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, r23.u32);
loc_824AE470:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmplw cr6,r8,r22
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, r22.u32, ctx.xer);
	// blt cr6,0x824ae41c
	if (ctx.cr6.lt) goto loc_824AE41C;
loc_824AE480:
	// lwz r11,8(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 8);
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824ae4cc
	if (!ctx.cr6.gt) goto loc_824AE4CC;
	// mr r8,r23
	ctx.r8.u64 = r23.u64;
loc_824AE494:
	// lwz r11,20(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 20);
	// lwzx r10,r8,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwz r9,56(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 56);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x824ae4b8
	if (ctx.cr6.eq) goto loc_824AE4B8;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// stw r11,72(r10)
	REX_STORE_U32(ctx.r10.u32 + 72, ctx.r11.u32);
loc_824AE4B8:
	// lwz r11,8(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 8);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824ae494
	if (ctx.cr6.lt) goto loc_824AE494;
loc_824AE4CC:
	// mr r26,r23
	r26.u64 = r23.u64;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x824ae5c4
	if (ctx.cr6.eq) goto loc_824AE5C4;
	// mr r25,r21
	r25.u64 = r21.u64;
loc_824AE4DC:
	// lwz r30,0(r25)
	r30.u64 = REX_LOAD_U32(r25.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x824ae5b4
	if (ctx.cr6.eq) goto loc_824AE5B4;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r31,r23
	r31.u64 = r23.u64;
	// mr r27,r23
	r27.u64 = r23.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824ae590
	if (!ctx.cr6.gt) goto loc_824AE590;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r29,r23
	r29.u64 = r23.u64;
	// addi r28,r11,-4
	r28.s64 = ctx.r11.s64 + -4;
loc_824AE508:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwz r10,20(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 20);
	// lwzx r11,r29,r11
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r9,72(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x824ae57c
	if (ctx.cr6.eq) goto loc_824AE57C;
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x824ae554
	if (ctx.cr6.eq) goto loc_824AE554;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
loc_824AE538:
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x824ae554
	if (ctx.cr6.eq) goto loc_824AE554;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// blt cr6,0x824ae538
	if (ctx.cr6.lt) goto loc_824AE538;
loc_824AE554:
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bne cr6,0x824ae564
	if (!ctx.cr6.eq) goto loc_824AE564;
	// stwu r9,4(r28)
	ea = 4 + r28.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	r28.u32 = ea;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
loc_824AE564:
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwzx r3,r11,r21
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + r21.u32);
	// bl 0x824ae360
	ctx.lr = 0x824AE574;
	sub_824AE360(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824ae5c8
	if (ctx.cr0.lt) goto loc_824AE5C8;
loc_824AE57C:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824ae508
	if (ctx.cr6.lt) goto loc_824AE508;
loc_824AE590:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82477a88
	ctx.lr = 0x824AE598;
	sub_82477A88(ctx, base);
	// stw r3,24(r30)
	REX_STORE_U32(r30.u32 + 24, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824ae5d0
	if (ctx.cr0.eq) goto loc_824AE5D0;
	// rlwinm r5,r31,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x826a1e70
	ctx.lr = 0x824AE5B0;
	sub_826A1E70(ctx, base);
	// stw r31,20(r30)
	REX_STORE_U32(r30.u32 + 20, r31.u32);
loc_824AE5B4:
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r25,r25,4
	r25.s64 = r25.s64 + 4;
	// cmplw cr6,r26,r22
	ctx.cr6.compare<uint32_t>(r26.u32, r22.u32, ctx.xer);
	// blt cr6,0x824ae4dc
	if (ctx.cr6.lt) goto loc_824AE4DC;
loc_824AE5C4:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
loc_824AE5C8:
	// addi r1,r1,1200
	ctx.r1.s64 = ctx.r1.s64 + 1200;
	// b 0x826a1cec
	return;
loc_824AE5D0:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x824ae5c8
	goto loc_824AE5C8;
}

DEFINE_REX_FUNC(sub_824BDED0) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,16420
	ctx.r3.s64 = ctx.r11.s64 + 16420;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823ff268
	ctx.lr = 0x824BDEF8;
	sub_823FF268(ctx, base);
	// li r11,64
	ctx.r11.s64 = 64;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
	// li r9,8192
	ctx.r9.s64 = 8192;
	// stw r11,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r10.u32);
	// stw r9,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r9.u32);
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// lwz r10,112(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 112);
	// rlwinm r11,r11,0,10,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFBFFFFF;
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// oris r10,r10,32800
	ctx.r10.u64 = ctx.r10.u64 | 2149580800;
	// rlwinm r11,r11,0,2,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stw r10,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r10.u32);
	// oris r11,r11,9248
	ctx.r11.u64 = ctx.r11.u64 | 606076928;
	// stw r9,268(r31)
	REX_STORE_U32(r31.u32 + 268, ctx.r9.u32);
	// stw r11,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_824BFE40) {
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
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824BFE6C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32180
	ctx.r9.s64 = -2108948480;
	// stw r3,440(r31)
	REX_STORE_U32(r31.u32 + 440, ctx.r3.u32);
	// lis r8,-32180
	ctx.r8.s64 = -2108948480;
	// lis r7,-32180
	ctx.r7.s64 = -2108948480;
	// lis r6,-32180
	ctx.r6.s64 = -2108948480;
	// addi r5,r9,-904
	ctx.r5.s64 = ctx.r9.s64 + -904;
	// addi r4,r8,-600
	ctx.r4.s64 = ctx.r8.s64 + -600;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r5,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// addi r10,r7,-1016
	ctx.r10.s64 = ctx.r7.s64 + -1016;
	// stw r4,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// addi r9,r6,-472
	ctx.r9.s64 = ctx.r6.s64 + -472;
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r9,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r8,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r8.u32);
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

DEFINE_REX_FUNC(sub_824C1B38) {
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
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824C1B64;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r3,424(r31)
	REX_STORE_U32(r31.u32 + 424, ctx.r3.u32);
	// lis r8,-32180
	ctx.r8.s64 = -2108948480;
	// lis r7,-32180
	ctx.r7.s64 = -2108948480;
	// addi r6,r8,6344
	ctx.r6.s64 = ctx.r8.s64 + 6344;
	// addi r5,r7,6888
	ctx.r5.s64 = ctx.r7.s64 + 6888;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r6,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// stw r5,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r4,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r4.u32);
	// bl 0x824c1580
	ctx.lr = 0x824C1B94;
	sub_824C1580(ctx, base);
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

DEFINE_REX_FUNC(sub_824C37C8) {
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
	ctx.lr = 0x824C37D0;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x824c3afc
	if (ctx.cr6.eq) goto loc_824C3AFC;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824c3afc
	if (ctx.cr6.eq) goto loc_824C3AFC;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r10,11(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 11);
	// addi r9,r9,6152
	ctx.r9.s64 = ctx.r9.s64 + 6152;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// lwzx r25,r8,r9
	r25.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// mullw r27,r11,r25
	r27.s64 = int64_t(ctx.r11.s32) * int64_t(r25.s32);
	// beq cr6,0x824c3a24
	if (ctx.cr6.eq) goto loc_824C3A24;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// beq cr6,0x824c3958
	if (ctx.cr6.eq) goto loc_824C3958;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// beq cr6,0x824c3894
	if (ctx.cr6.eq) goto loc_824C3894;
	// rlwinm r31,r10,29,3,31
	r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// addi r9,r27,-1
	ctx.r9.s64 = r27.s64 + -1;
	// mullw r10,r10,r31
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r31.s32);
	// mullw r9,r9,r31
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(r31.s32);
	// add r30,r10,r4
	r30.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r26,r9,r4
	r26.u64 = ctx.r9.u64 + ctx.r4.u64;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824c3ae4
	if (ctx.cr6.eq) goto loc_824C3AE4;
loc_824C3844:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826a1e70
	ctx.lr = 0x824C3854;
	sub_826A1E70(ctx, base);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// ble cr6,0x824c387c
	if (!ctx.cr6.gt) goto loc_824C387C;
	// mr r28,r25
	r28.u64 = r25.u64;
loc_824C3860:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826a1e70
	ctx.lr = 0x824C3870;
	sub_826A1E70(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// subf r26,r31,r26
	r26.u64 = r26.u64 - r31.u64;
	// bne 0x824c3860
	if (!ctx.cr0.eq) goto loc_824C3860;
loc_824C387C:
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// subf r30,r31,r30
	r30.u64 = r30.u64 - r31.u64;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824c3844
	if (ctx.cr6.lt) goto loc_824C3844;
	// b 0x824c3ae4
	goto loc_824C3AE4;
loc_824C3894:
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// addi r8,r27,-1
	ctx.r8.s64 = r27.s64 + -1;
	// addi r7,r27,-1
	ctx.r7.s64 = r27.s64 + -1;
	// rlwinm r6,r9,2,29,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x4;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r9,r8,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r5,r7,2,29,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x4;
	// subfic r8,r6,4
	ctx.xer.ca = ctx.r6.u32 <= 4;
	ctx.r8.u64 = static_cast<uint64_t>(4) - ctx.r6.u64;
	// add r7,r10,r4
	ctx.r7.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// subfic r10,r5,4
	ctx.xer.ca = ctx.r5.u32 <= 4;
	ctx.r10.u64 = static_cast<uint64_t>(4) - ctx.r5.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824c3ae4
	if (ctx.cr6.eq) goto loc_824C3AE4;
loc_824C38D0:
	// lbz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// clrlwi r5,r8,24
	ctx.r5.u64 = ctx.r8.u32 & 0xFF;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// srw r11,r11,r5
	ctx.r11.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r5.u8 & 0x3F));
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// ble cr6,0x824c392c
	if (!ctx.cr6.gt) goto loc_824C392C;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mtctr r25
	ctx.ctr.u64 = r25.u64;
loc_824C38F0:
	// subfic r4,r10,4
	ctx.xer.ca = ctx.r10.u32 <= 4;
	ctx.r4.u64 = static_cast<uint64_t>(4) - ctx.r10.u64;
	// lbz r5,0(r9)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// li r3,3855
	ctx.r3.s64 = 3855;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// sraw r4,r3,r4
	temp.u32 = ctx.r4.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r3.s32 < 0) & (((ctx.r3.s32 >> temp.u32) << temp.u32) != ctx.r3.s32);
	ctx.r4.s64 = ctx.r3.s32 >> temp.u32;
	// and r5,r4,r5
	ctx.r5.u64 = ctx.r4.u64 & ctx.r5.u64;
	// slw r4,r11,r10
	ctx.r4.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// or r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 | ctx.r4.u64;
	// stb r5,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r5.u8);
	// bne cr6,0x824c3924
	if (!ctx.cr6.eq) goto loc_824C3924;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// b 0x824c3928
	goto loc_824C3928;
loc_824C3924:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
loc_824C3928:
	// bdnz 0x824c38f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824C38F0;
loc_824C392C:
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// bne cr6,0x824c3940
	if (!ctx.cr6.eq) goto loc_824C3940;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// b 0x824c3944
	goto loc_824C3944;
loc_824C3940:
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
loc_824C3944:
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824c38d0
	if (ctx.cr6.lt) goto loc_824C38D0;
	// b 0x824c3ae4
	goto loc_824C3AE4;
loc_824C3958:
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// addi r9,r27,-1
	ctx.r9.s64 = r27.s64 + -1;
	// clrlwi r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// clrlwi r6,r9,30
	ctx.r6.u64 = ctx.r9.u32 & 0x3;
	// addi r7,r27,-1
	ctx.r7.s64 = r27.s64 + -1;
	// subfic r5,r10,3
	ctx.xer.ca = ctx.r10.u32 <= 3;
	ctx.r5.u64 = static_cast<uint64_t>(3) - ctx.r10.u64;
	// rlwinm r10,r8,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r9,r7,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3FFFFFFF;
	// subfic r6,r6,3
	ctx.xer.ca = ctx.r6.u32 <= 3;
	ctx.r6.u64 = static_cast<uint64_t>(3) - ctx.r6.u64;
	// add r7,r10,r4
	ctx.r7.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r8,r9,r4
	ctx.r8.u64 = ctx.r9.u64 + ctx.r4.u64;
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r5,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824c3ae4
	if (ctx.cr6.eq) goto loc_824C3AE4;
loc_824C399C:
	// lbz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// clrlwi r5,r9,24
	ctx.r5.u64 = ctx.r9.u32 & 0xFF;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// srw r11,r11,r5
	ctx.r11.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r5.u8 & 0x3F));
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// ble cr6,0x824c39f8
	if (!ctx.cr6.gt) goto loc_824C39F8;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mtctr r25
	ctx.ctr.u64 = r25.u64;
loc_824C39BC:
	// subfic r4,r10,6
	ctx.xer.ca = ctx.r10.u32 <= 6;
	ctx.r4.u64 = static_cast<uint64_t>(6) - ctx.r10.u64;
	// lbz r5,0(r8)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// li r3,16191
	ctx.r3.s64 = 16191;
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// sraw r4,r3,r4
	temp.u32 = ctx.r4.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r3.s32 < 0) & (((ctx.r3.s32 >> temp.u32) << temp.u32) != ctx.r3.s32);
	ctx.r4.s64 = ctx.r3.s32 >> temp.u32;
	// and r5,r4,r5
	ctx.r5.u64 = ctx.r4.u64 & ctx.r5.u64;
	// slw r4,r11,r10
	ctx.r4.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// or r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 | ctx.r4.u64;
	// stb r5,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r5.u8);
	// bne cr6,0x824c39f0
	if (!ctx.cr6.eq) goto loc_824C39F0;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// b 0x824c39f4
	goto loc_824C39F4;
loc_824C39F0:
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
loc_824C39F4:
	// bdnz 0x824c39bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824C39BC;
loc_824C39F8:
	// cmpwi cr6,r9,6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 6, ctx.xer);
	// bne cr6,0x824c3a0c
	if (!ctx.cr6.eq) goto loc_824C3A0C;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// b 0x824c3a10
	goto loc_824C3A10;
loc_824C3A0C:
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
loc_824C3A10:
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824c399c
	if (ctx.cr6.lt) goto loc_824C399C;
	// b 0x824c3ae4
	goto loc_824C3AE4;
loc_824C3A24:
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// addi r8,r27,-1
	ctx.r8.s64 = r27.s64 + -1;
	// addi r7,r27,-1
	ctx.r7.s64 = r27.s64 + -1;
	// clrlwi r6,r9,29
	ctx.r6.u64 = ctx.r9.u32 & 0x7;
	// rlwinm r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r9,r8,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFF;
	// clrlwi r5,r7,29
	ctx.r5.u64 = ctx.r7.u32 & 0x7;
	// subfic r8,r6,7
	ctx.xer.ca = ctx.r6.u32 <= 7;
	ctx.r8.u64 = static_cast<uint64_t>(7) - ctx.r6.u64;
	// add r7,r10,r4
	ctx.r7.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// subfic r10,r5,7
	ctx.xer.ca = ctx.r5.u32 <= 7;
	ctx.r10.u64 = static_cast<uint64_t>(7) - ctx.r5.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824c3ae4
	if (ctx.cr6.eq) goto loc_824C3AE4;
loc_824C3A60:
	// lbz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// clrlwi r5,r8,24
	ctx.r5.u64 = ctx.r8.u32 & 0xFF;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// srw r11,r11,r5
	ctx.r11.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r5.u8 & 0x3F));
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// ble cr6,0x824c3abc
	if (!ctx.cr6.gt) goto loc_824C3ABC;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mtctr r25
	ctx.ctr.u64 = r25.u64;
loc_824C3A80:
	// subfic r4,r10,7
	ctx.xer.ca = ctx.r10.u32 <= 7;
	ctx.r4.u64 = static_cast<uint64_t>(7) - ctx.r10.u64;
	// lbz r5,0(r9)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// li r3,32639
	ctx.r3.s64 = 32639;
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// sraw r4,r3,r4
	temp.u32 = ctx.r4.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r3.s32 < 0) & (((ctx.r3.s32 >> temp.u32) << temp.u32) != ctx.r3.s32);
	ctx.r4.s64 = ctx.r3.s32 >> temp.u32;
	// and r5,r4,r5
	ctx.r5.u64 = ctx.r4.u64 & ctx.r5.u64;
	// slw r4,r11,r10
	ctx.r4.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// or r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 | ctx.r4.u64;
	// stb r5,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r5.u8);
	// bne cr6,0x824c3ab4
	if (!ctx.cr6.eq) goto loc_824C3AB4;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// b 0x824c3ab8
	goto loc_824C3AB8;
loc_824C3AB4:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_824C3AB8:
	// bdnz 0x824c3a80
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824C3A80;
loc_824C3ABC:
	// cmpwi cr6,r8,7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 7, ctx.xer);
	// bne cr6,0x824c3ad0
	if (!ctx.cr6.eq) goto loc_824C3AD0;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// b 0x824c3ad4
	goto loc_824C3AD4;
loc_824C3AD0:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_824C3AD4:
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824c3a60
	if (ctx.cr6.lt) goto loc_824C3A60;
loc_824C3AE4:
	// lbz r11,11(r24)
	ctx.r11.u64 = REX_LOAD_U8(r24.u32 + 11);
	// stw r27,0(r24)
	REX_STORE_U32(r24.u32 + 0, r27.u32);
	// mullw r11,r11,r27
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r27.s32);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// stw r11,4(r24)
	REX_STORE_U32(r24.u32 + 4, ctx.r11.u32);
loc_824C3AFC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_824D6038) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// clrlwi. r9,r4,30
	ctx.r9.u64 = ctx.r4.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// b 0x824d6068
	goto loc_824D6068;
loc_824D6048:
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// blt cr6,0x824d6070
	if (ctx.cr6.lt) goto loc_824D6070;
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// clrlwi. r8,r11,30
	ctx.r8.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stb r9,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_824D6068:
	// stw r10,-16(r1)
	REX_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// bne 0x824d6048
	if (!ctx.cr0.eq) goto loc_824D6048;
loc_824D6070:
	// clrlwi. r9,r11,29
	ctx.r9.u64 = ctx.r11.u32 & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x824d60a0
	if (ctx.cr0.eq) goto loc_824D60A0;
loc_824D6078:
	// cmplwi cr6,r5,4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 4, ctx.xer);
	// blt cr6,0x824d60a0
	if (ctx.cr6.lt) goto loc_824D60A0;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r5,r5,-4
	ctx.r5.s64 = ctx.r5.s64 + -4;
	// clrlwi. r8,r11,29
	ctx.r8.u64 = ctx.r11.u32 & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r10,-16(r1)
	REX_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// bne 0x824d6078
	if (!ctx.cr0.eq) goto loc_824D6078;
loc_824D60A0:
	// clrlwi. r9,r11,28
	ctx.r9.u64 = ctx.r11.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x824d60d0
	if (ctx.cr0.eq) goto loc_824D60D0;
loc_824D60A8:
	// cmplwi cr6,r5,8
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 8, ctx.xer);
	// blt cr6,0x824d60d0
	if (ctx.cr6.lt) goto loc_824D60D0;
	// ld r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r5,r5,-8
	ctx.r5.s64 = ctx.r5.s64 + -8;
	// clrlwi. r8,r11,28
	ctx.r8.u64 = ctx.r11.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// std r9,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// stw r10,-16(r1)
	REX_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// bne 0x824d60a8
	if (!ctx.cr0.eq) goto loc_824D60A8;
loc_824D60D0:
	// li r9,16
	ctx.r9.s64 = 16;
	// b 0x824d60fc
	goto loc_824D60FC;
loc_824D60D8:
	// cmplwi cr6,r5,16
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 16, ctx.xer);
	// blt cr6,0x824d61a8
	if (ctx.cr6.lt) goto loc_824D61A8;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stvlx128 v63,r0,r10
	ea = ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// addi r5,r5,-16
	ctx.r5.s64 = ctx.r5.s64 + -16;
	// stvrx128 v63,r10,r9
	ea = ctx.r10.u32 + ctx.r9.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stw r10,-16(r1)
	REX_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
loc_824D60FC:
	// addi r8,r10,15
	ctx.r8.s64 = ctx.r10.s64 + 15;
	// clrlwi r8,r8,25
	ctx.r8.u64 = ctx.r8.u32 & 0x7F;
	// cmplwi cr6,r8,16
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 16, ctx.xer);
	// bge cr6,0x824d60d8
	if (!ctx.cr6.lt) goto loc_824D60D8;
	// b 0x824d61a8
	goto loc_824D61A8;
loc_824D6110:
	// li r8,15
	ctx.r8.s64 = 15;
	// dcbzl r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r10,-16(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// addi r8,r11,32
	ctx.r8.s64 = ctx.r11.s64 + 32;
	// addi r7,r10,32
	ctx.r7.s64 = ctx.r10.s64 + 32;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_824D612C:
	// lvrx128 v62,r9,r11
	temp.u32 = ctx.r9.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r6,r8,-16
	ctx.r6.s64 = ctx.r8.s64 + -16;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r4,r8,16
	ctx.r4.s64 = ctx.r8.s64 + 16;
	// vor128 v63,v63,v62
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8)));
	// lvrx128 v61,r9,r8
	temp.u32 = ctx.r9.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v62,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r3,r7,-16
	ctx.r3.s64 = ctx.r7.s64 + -16;
	// vor128 v62,v62,v61
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// lvlx128 v60,r0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r8,r8,64
	ctx.r8.s64 = ctx.r8.s64 + 64;
	// lvrx128 v61,r9,r6
	temp.u32 = ctx.r9.u32 + ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r6,r7,16
	ctx.r6.s64 = ctx.r7.s64 + 16;
	// vor128 v61,v60,v61
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// lvlx128 v60,r0,r4
	temp.u32 = ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v59,r9,r4
	temp.u32 = ctx.r9.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r5,r5,-64
	ctx.r5.s64 = ctx.r5.s64 + -64;
	// stvlx128 v63,r0,r10
	ea = ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// vor128 v60,v60,v59
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8)));
	// stvrx128 v63,r10,r9
	ea = ctx.r10.u32 + ctx.r9.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// stvlx128 v61,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v61.u8[15 - i]);
	// stvrx128 v61,r3,r9
	ea = ctx.r3.u32 + ctx.r9.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v61.u8[i]);
	// stvlx128 v62,r0,r7
	ea = ctx.r7.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v62.u8[15 - i]);
	// stvrx128 v62,r7,r9
	ea = ctx.r7.u32 + ctx.r9.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v62.u8[i]);
	// addi r7,r7,64
	ctx.r7.s64 = ctx.r7.s64 + 64;
	// stvlx128 v60,r0,r6
	ea = ctx.r6.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v60.u8[15 - i]);
	// stvrx128 v60,r6,r9
	ea = ctx.r6.u32 + ctx.r9.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v60.u8[i]);
	// bdnz 0x824d612c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824D612C;
	// stw r10,-16(r1)
	REX_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
loc_824D61A8:
	// cmplwi cr6,r5,143
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 143, ctx.xer);
	// bge cr6,0x824d6110
	if (!ctx.cr6.lt) goto loc_824D6110;
	// cmplwi cr6,r5,16
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 16, ctx.xer);
	// blt cr6,0x824d61dc
	if (ctx.cr6.lt) goto loc_824D61DC;
	// rlwinm r8,r5,28,4,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 28) & 0xFFFFFFF;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_824D61C0:
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stvlx128 v63,r0,r10
	ea = ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// addi r5,r5,-16
	ctx.r5.s64 = ctx.r5.s64 + -16;
	// stvrx128 v63,r10,r9
	ea = ctx.r10.u32 + ctx.r9.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bdnz 0x824d61c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824D61C0;
loc_824D61DC:
	// clrlwi. r9,r11,28
	ctx.r9.u64 = ctx.r11.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x824d6208
	if (ctx.cr0.eq) goto loc_824D6208;
loc_824D61E4:
	// cmplwi cr6,r5,8
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 8, ctx.xer);
	// blt cr6,0x824d6208
	if (ctx.cr6.lt) goto loc_824D6208;
	// ld r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r5,r5,-8
	ctx.r5.s64 = ctx.r5.s64 + -8;
	// clrlwi. r8,r11,28
	ctx.r8.u64 = ctx.r11.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// std r9,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bne 0x824d61e4
	if (!ctx.cr0.eq) goto loc_824D61E4;
loc_824D6208:
	// clrlwi. r9,r11,29
	ctx.r9.u64 = ctx.r11.u32 & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x824d6234
	if (ctx.cr0.eq) goto loc_824D6234;
loc_824D6210:
	// cmplwi cr6,r5,4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 4, ctx.xer);
	// blt cr6,0x824d6234
	if (ctx.cr6.lt) goto loc_824D6234;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r5,r5,-4
	ctx.r5.s64 = ctx.r5.s64 + -4;
	// clrlwi. r8,r11,29
	ctx.r8.u64 = ctx.r11.u32 & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x824d6210
	if (!ctx.cr0.eq) goto loc_824D6210;
loc_824D6234:
	// clrlwi. r9,r11,30
	ctx.r9.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
loc_824D6240:
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// stbx r9,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi. r9,r11,30
	ctx.r9.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x824d6240
	if (!ctx.cr0.eq) goto loc_824D6240;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824E6438) {
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
	ctx.lr = 0x824E6440;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r3,0,8,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFF0000;
	// lwz r30,0(r7)
	r30.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// lis r10,228
	ctx.r10.s64 = 14942208;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824e64b8
	if (ctx.cr6.eq) goto loc_824E64B8;
	// rlwinm r10,r11,14,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// lis r9,-32128
	ctx.r9.s64 = -2105540608;
	// rlwinm r8,r10,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r9,r9,-19960
	ctx.r9.s64 = ctx.r9.s64 + -19960;
	// rlwinm r10,r10,2,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC;
	// rlwinm r11,r11,18,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0xC;
	// rlwinm r7,r8,2,28,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xC;
	// rlwinm r8,r8,0,28,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r7,r7,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// lwzx r9,r8,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// rlwinm r10,r7,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r9,r9,12,0,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFFFF000;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// or r25,r9,r11
	r25.u64 = ctx.r9.u64 | ctx.r11.u64;
	// b 0x824e64bc
	goto loc_824E64BC;
loc_824E64B8:
	// li r25,12816
	r25.s64 = 12816;
loc_824E64BC:
	// rlwinm r3,r31,0,4,7
	ctx.r3.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xF000000;
	// bl 0x824e5b18
	ctx.lr = 0x824E64C4;
	sub_824E5B18(ctx, base);
	// or r27,r3,r29
	r27.u64 = ctx.r3.u64 | r29.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e6198
	ctx.lr = 0x824E64D8;
	sub_824E6198(ctx, base);
	// rlwinm r11,r31,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x2000;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r11,8192
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8192, ctx.xer);
	// bne cr6,0x824e653c
	if (!ctx.cr6.eq) goto loc_824E653C;
	// rlwimi r31,r31,12,21,23
	r31.u64 = (__builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 12) & 0x700) | (r31.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r31,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// bne cr6,0x824e653c
	if (!ctx.cr6.eq) goto loc_824E653C;
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// rlwimi r11,r26,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,3840
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3840, ctx.xer);
	// beq cr6,0x824e6518
	if (ctx.cr6.eq) goto loc_824E6518;
	// bl 0x826b40a0
	ctx.lr = 0x824E6514;
	sub_826B40A0(ctx, base);
	// b 0x824e653c
	goto loc_824E653C;
loc_824E6518:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi r10,r26,21
	ctx.r10.u64 = r26.u32 & 0x7FF;
	// andis. r11,r11,65521
	ctx.r11.u64 = ctx.r11.u64 & 4293984256;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// oris r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 65536;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// beq 0x824e6538
	if (ctx.cr0.eq) goto loc_824E6538;
	// bl 0x826b40a0
	ctx.lr = 0x824E6538;
	sub_826B40A0(ctx, base);
loc_824E6538:
	// li r28,1
	r28.s64 = 1;
loc_824E653C:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// bne cr6,0x824e6564
	if (!ctx.cr6.eq) goto loc_824E6564;
	// cmplwi cr6,r25,12816
	ctx.cr6.compare<uint32_t>(r25.u32, 12816, ctx.xer);
	// bne cr6,0x824e6564
	if (!ctx.cr6.eq) goto loc_824E6564;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwimi r10,r28,7,24,24
	ctx.r10.u64 = (__builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 7) & 0x80) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF7F);
	// andi. r10,r10,191
	ctx.r10.u64 = ctx.r10.u64 & 191;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwimi r29,r10,16,0,15
	r29.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000) | (r29.u64 & 0xFFFFFFFF0000FFFF);
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
	// b 0x824e658c
	goto loc_824E658C;
loc_824E6564:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r10,r29,16
	ctx.r10.u64 = r29.u32 & 0xFFFF;
	// or r9,r27,r25
	ctx.r9.u64 = r27.u64 | r25.u64;
	// rlwimi r11,r28,7,24,24
	ctx.r11.u64 = (__builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 7) & 0x80) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF7F);
	// rlwinm r11,r11,16,8,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF0000;
	// rlwinm r11,r11,0,10,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFBFFFFF;
	// oris r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 4194304;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// stwu r9,4(r30)
	ea = 4 + r30.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	r30.u32 = ea;
loc_824E658C:
	// addi r11,r30,4
	ctx.r11.s64 = r30.s64 + 4;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x824e65a4
	if (ctx.cr6.eq) goto loc_824E65A4;
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_824E65A4:
	// stw r11,0(r24)
	REX_STORE_U32(r24.u32 + 0, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_824F08F8) {
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
	// bne cr6,0x824f0934
	if (!ctx.cr6.eq) goto loc_824F0934;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r6,r11,-25912
	ctx.r6.s64 = ctx.r11.s64 + -25912;
	// addi r5,r10,-26852
	ctx.r5.s64 = ctx.r10.s64 + -26852;
	// addi r4,r9,22852
	ctx.r4.s64 = ctx.r9.s64 + 22852;
	// li r7,1138
	ctx.r7.s64 = 1138;
	// bl 0x824ea978
	ctx.lr = 0x824F0934;
	sub_824EA978(ctx, base);
loc_824F0934:
	// lwz r3,2440(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 2440);
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

DEFINE_REX_FUNC(sub_824F2780) {
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
	ctx.lr = 0x824F2788;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r28,r11,22852
	r28.s64 = ctx.r11.s64 + 22852;
	// addi r27,r10,-23616
	r27.s64 = ctx.r10.s64 + -23616;
	// bne cr6,0x824f27c8
	if (!ctx.cr6.eq) goto loc_824F27C8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r5,r11,-23632
	ctx.r5.s64 = ctx.r11.s64 + -23632;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,193
	ctx.r7.s64 = 193;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824F27C8;
	sub_824EA978(ctx, base);
loc_824F27C8:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x824f27ec
	if (!ctx.cr6.eq) goto loc_824F27EC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r5,r11,-23640
	ctx.r5.s64 = ctx.r11.s64 + -23640;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,194
	ctx.r7.s64 = 194;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824F27EC;
	sub_824EA978(ctx, base);
loc_824F27EC:
	// lwz r3,12(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824f285c
	if (ctx.cr6.eq) goto loc_824F285C;
	// bl 0x824ef898
	ctx.lr = 0x824F27FC;
	sub_824EF898(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x824f2854
	if (ctx.cr0.eq) goto loc_824F2854;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r26,r11,-26852
	r26.s64 = ctx.r11.s64 + -26852;
loc_824F280C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824efba8
	ctx.lr = 0x824F2814;
	sub_824EFBA8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x824f2834
	if (!ctx.cr0.eq) goto loc_824F2834;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,203
	ctx.r7.s64 = 203;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824F2834;
	sub_824EA978(ctx, base);
loc_824F2834:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824effc8
	ctx.lr = 0x824F283C;
	sub_824EFFC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824efb70
	ctx.lr = 0x824F2844;
	sub_824EFB70(ctx, base);
	// lwz r3,12(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 12);
	// bl 0x824ef898
	ctx.lr = 0x824F284C;
	sub_824EF898(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x824f280c
	if (!ctx.cr0.eq) goto loc_824F280C;
loc_824F2854:
	// lwz r3,12(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 12);
	// bl 0x824ef3e0
	ctx.lr = 0x824F285C;
	sub_824EF3E0(ctx, base);
loc_824F285C:
	// lwz r4,4(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 4);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x824f2878
	if (ctx.cr6.eq) goto loc_824F2878;
	// lwz r11,12(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 12);
	// lwz r3,4(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824F2878;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824F2878:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,0(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 0);
	// bl 0x825a28c0
	ctx.lr = 0x824F2884;
	sub_825A28C0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_824FDA20) {
	REX_FUNC_PROLOGUE();
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// std r3,16(r1)
	REX_STORE_U64(ctx.r1.u32 + 16, ctx.r3.u64);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r7,20(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// addi r10,r1,16
	ctx.r10.s64 = ctx.r1.s64 + 16;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// std r6,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, ctx.r6.u64);
	// lwz r9,-12(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// rlwimi r9,r7,0,16,20
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xF800) | (ctx.r9.u64 & 0xFFFFFFFFFFFF07FF);
	// stw r9,-12(r1)
	REX_STORE_U32(ctx.r1.u32 + -12, ctx.r9.u32);
loc_824FDA4C:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x824fda6c
	if (!ctx.cr0.eq) goto loc_824FDA6C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x824fda4c
	if (!ctx.cr6.eq) goto loc_824FDA4C;
loc_824FDA6C:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x824fdacc
	if (!ctx.cr0.eq) goto loc_824FDACC;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// addic. r10,r10,4
	ctx.xer.ca = ctx.r10.u32 > 4294967291;
	ctx.r10.s64 = ctx.r10.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r9,r11,19,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0x7;
	// beq 0x824fdacc
	if (ctx.cr0.eq) goto loc_824FDACC;
	// lbz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,35
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 35, ctx.xer);
	// bge cr6,0x824fdaa8
	if (!ctx.cr6.lt) goto loc_824FDAA8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x824fdaac
	if (ctx.cr6.gt) goto loc_824FDAAC;
loc_824FDAA8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_824FDAAC:
	// cmpwi cr6,r11,33
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 33, ctx.xer);
	// bne cr6,0x824fdacc
	if (!ctx.cr6.eq) goto loc_824FDACC;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x824fdacc
	if (!ctx.cr6.gt) goto loc_824FDACC;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// bgt cr6,0x824fdacc
	if (ctx.cr6.gt) goto loc_824FDACC;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_824FDACC:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825039C8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm. r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82503a0c
	if (!ctx.cr0.eq) goto loc_82503A0C;
	// rlwinm. r10,r11,0,8,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82503a0c
	if (!ctx.cr0.eq) goto loc_82503A0C;
	// rlwinm r10,r11,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r10,125
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 125, ctx.xer);
	// beq cr6,0x825039f4
	if (ctx.cr6.eq) goto loc_825039F4;
	// cmplwi cr6,r10,124
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 124, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x825039f8
	if (!ctx.cr6.eq) goto loc_825039F8;
loc_825039F4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_825039F8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82503a0c
	if (!ctx.cr0.eq) goto loc_82503A0C;
	// cmplwi cr6,r10,120
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 120, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x82503a10
	if (!ctx.cr6.eq) goto loc_82503A10;
loc_82503A0C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82503A10:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82505538) {
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
	// bl 0x826a1cac
	ctx.lr = 0x82505540;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,712(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 712);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82505734
	if (ctx.cr6.eq) goto loc_82505734;
	// lwz r11,24(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82505560
	if (!ctx.cr6.eq) goto loc_82505560;
	// bl 0x82505370
	ctx.lr = 0x82505560;
	sub_82505370(ctx, base);
loc_82505560:
	// lwz r25,24(r4)
	r25.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// li r11,997
	ctx.r11.s64 = 997;
	// lwz r26,4(r4)
	r26.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// li r27,0
	r27.s64 = 0;
	// divwu r10,r25,r11
	ctx.r10.u64 = uint32_t(ctx.r11.u32 ? r25.u32 / ctx.r11.u32 : 0);
	// mulli r10,r10,997
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(997));
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r10,r10,r25
	ctx.r10.u64 = r25.u64 - ctx.r10.u64;
	// bne 0x825055b0
	if (!ctx.cr0.eq) goto loc_825055B0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825055b0
	if (ctx.cr0.eq) goto loc_825055B0;
loc_82505590:
	// rlwinm r9,r11,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// add r27,r11,r27
	r27.u64 = ctx.r11.u64 + r27.u64;
	// lwz r11,4(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x825055b0
	if (!ctx.cr0.eq) goto loc_825055B0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82505590
	if (!ctx.cr6.eq) goto loc_82505590;
loc_825055B0:
	// lwz r11,712(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 712);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r28,r10,r11
	r28.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x8250572c
	goto loc_8250572C;
loc_825055C0:
	// lwz r11,24(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 24);
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r25.u32, ctx.xer);
	// bne cr6,0x82505728
	if (!ctx.cr6.eq) goto loc_82505728;
	// lwz r11,12(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 12);
	// lwz r10,12(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82505728
	if (!ctx.cr6.eq) goto loc_82505728;
	// lwz r11,20(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 20);
	// lwz r10,20(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82505728
	if (!ctx.cr6.eq) goto loc_82505728;
	// lwz r29,4(r28)
	r29.u64 = REX_LOAD_U32(r28.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82505628
	if (!ctx.cr0.eq) goto loc_82505628;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82505628
	if (ctx.cr0.eq) goto loc_82505628;
loc_82505608:
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82505628
	if (!ctx.cr0.eq) goto loc_82505628;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82505608
	if (!ctx.cr6.eq) goto loc_82505608;
loc_82505628:
	// cmplw cr6,r3,r27
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r27.u32, ctx.xer);
	// bne cr6,0x82505728
	if (!ctx.cr6.eq) goto loc_82505728;
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x82505720
	if (ctx.cr6.eq) goto loc_82505720;
	// lwz r31,4(r26)
	r31.u64 = REX_LOAD_U32(r26.u32 + 4);
	// clrlwi r30,r31,31
	r30.u64 = r31.u32 & 0x1;
loc_82505644:
	// addic r11,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	ctx.r11.s64 = r30.s64 + -1;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 & r31.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r5,r9
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82505688
	if (ctx.cr6.lt) goto loc_82505688;
loc_82505660:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
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
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82505660
	if (!ctx.cr6.lt) goto loc_82505660;
loc_82505688:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// li r8,0
	ctx.r8.s64 = 0;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwzx r6,r10,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// beq cr6,0x8250570c
	if (ctx.cr6.eq) goto loc_8250570C;
	// lwz r7,4(r29)
	ctx.r7.u64 = REX_LOAD_U32(r29.u32 + 4);
loc_825056A4:
	// clrlwi r11,r7,31
	ctx.r11.u64 = ctx.r7.u32 & 0x1;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 & ctx.r7.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x825056ec
	if (ctx.cr6.lt) goto loc_825056EC;
loc_825056C4:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// subf r9,r10,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r10.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x825056c4
	if (!ctx.cr6.lt) goto loc_825056C4;
loc_825056EC:
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x8250570c
	if (ctx.cr6.eq) goto loc_8250570C;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmplw cr6,r8,r3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x825056a4
	if (ctx.cr6.lt) goto loc_825056A4;
loc_8250570C:
	// cmplw cr6,r8,r3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82505720
	if (ctx.cr6.eq) goto loc_82505720;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// cmplw cr6,r5,r27
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, r27.u32, ctx.xer);
	// blt cr6,0x82505644
	if (ctx.cr6.lt) goto loc_82505644;
loc_82505720:
	// cmplw cr6,r5,r27
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, r27.u32, ctx.xer);
	// beq cr6,0x82505740
	if (ctx.cr6.eq) goto loc_82505740;
loc_82505728:
	// lwz r28,28(r28)
	r28.u64 = REX_LOAD_U32(r28.u32 + 28);
loc_8250572C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x825055c0
	if (!ctx.cr6.eq) goto loc_825055C0;
loc_82505734:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82505738:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
loc_82505740:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82505738
	goto loc_82505738;
}

DEFINE_REX_FUNC(sub_82522640) {
	REX_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm. r7,r11,13,29,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x825226a0
	if (ctx.cr0.eq) goto loc_825226A0;
	// addi r10,r3,44
	ctx.r10.s64 = ctx.r3.s64 + 44;
loc_82522654:
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,12(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,125
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 125, ctx.xer);
	// beq cr6,0x82522678
	if (ctx.cr6.eq) goto loc_82522678;
	// cmplwi cr6,r11,124
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 124, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8252267c
	if (!ctx.cr6.eq) goto loc_8252267C;
loc_82522678:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8252267C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82522690
	if (ctx.cr0.eq) goto loc_82522690;
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825226a8
	if (!ctx.cr0.eq) goto loc_825226A8;
loc_82522690:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82522654
	if (ctx.cr6.lt) goto loc_82522654;
loc_825226A0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_825226A8:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82525B60) {
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
	ctx.lr = 0x82525B68;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r21,44(r4)
	r21.u64 = REX_LOAD_U32(ctx.r4.u32 + 44);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r10,8(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// mr r20,r5
	r20.u64 = ctx.r5.u64;
	// mr r22,r6
	r22.u64 = ctx.r6.u64;
	// rlwinm. r11,r11,25,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r19,12(r21)
	r19.u64 = REX_LOAD_U32(r21.u32 + 12);
	// beq 0x82525ba8
	if (ctx.cr0.eq) goto loc_82525BA8;
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r9,r10,18,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x7;
	// slw r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r9.u8 & 0x3F));
	// addi r31,r11,-1
	r31.s64 = ctx.r11.s64 + -1;
	// b 0x82525bac
	goto loc_82525BAC;
loc_82525BA8:
	// rlwinm r31,r10,31,28,31
	r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0xF;
loc_82525BAC:
	// lwz r23,28(r29)
	r23.u64 = REX_LOAD_U32(r29.u32 + 28);
	// li r24,0
	r24.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82525bd0
	if (ctx.cr6.eq) goto loc_82525BD0;
	// addi r11,r31,-1
	ctx.r11.s64 = r31.s64 + -1;
	// andc r11,r31,r11
	ctx.r11.u64 = r31.u64 & ~ctx.r11.u64;
	// subf. r11,r11,r31
	ctx.r11.u64 = r31.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x82525bd4
	if (ctx.cr0.eq) goto loc_82525BD4;
loc_82525BD0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82525BD4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82525c20
	if (!ctx.cr0.eq) goto loc_82525C20;
	// rlwinm. r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82525c20
	if (!ctx.cr0.eq) goto loc_82525C20;
	// lis r11,-28311
	ctx.r11.s64 = -1855389696;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,5192
	ctx.r11.u64 = ctx.r11.u64 | 5192;
	// ori r10,r10,36262
	ctx.r10.u64 = ctx.r10.u64 | 36262;
	// clrldi r9,r31,32
	ctx.r9.u64 = r31.u64 & 0xFFFFFFFF;
	// rldimi r11,r10,32,0
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r11.u64 & 0xFFFFFFFF);
	// li r5,0
	ctx.r5.s64 = 0;
	// srd r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// srd r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// srd r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// clrlwi r6,r11,29
	ctx.r6.u64 = ctx.r11.u32 & 0x7;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x825bb9c8
	ctx.lr = 0x82525C1C;
	sub_825BB9C8(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
loc_82525C20:
	// li r25,0
	r25.s64 = 0;
	// b 0x82525d20
	goto loc_82525D20;
loc_82525C28:
	// addi r11,r31,-1
	ctx.r11.s64 = r31.s64 + -1;
	// li r8,1
	ctx.r8.s64 = 1;
	// andc r11,r31,r11
	ctx.r11.u64 = r31.u64 & ~ctx.r11.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// mr r6,r20
	ctx.r6.u64 = r20.u64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// subf r31,r11,r31
	r31.u64 = r31.u64 - ctx.r11.u64;
	// subfic r28,r10,31
	ctx.xer.ca = ctx.r10.u32 <= 31;
	r28.u64 = static_cast<uint64_t>(31) - ctx.r10.u64;
	// bl 0x825bb860
	ctx.lr = 0x82525C58;
	sub_825BB860(ctx, base);
	// lwz r27,0(r29)
	r27.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_82525C60:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x82525c98
	if (ctx.cr6.eq) goto loc_82525C98;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82525c90
	if (!ctx.cr0.eq) goto loc_82525C90;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r5,12(r27)
	ctx.r5.u64 = REX_LOAD_U32(r27.u32 + 12);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82503da0
	ctx.lr = 0x82525C84;
	sub_82503DA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82525C90;
	sub_8250AD28(ctx, base);
loc_82525C90:
	// lwz r27,4(r27)
	r27.u64 = REX_LOAD_U32(r27.u32 + 4);
	// b 0x82525c60
	goto loc_82525C60;
loc_82525C98:
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 0);
	// rlwinm r10,r28,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// rlwinm r9,r11,27,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0xFF;
	// clrlwi r6,r11,27
	ctx.r6.u64 = ctx.r11.u32 & 0x1F;
	// srw r11,r9,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r5,r11,30
	ctx.r5.u64 = ctx.r11.u32 & 0x3;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8250acc8
	ctx.lr = 0x82525CBC;
	sub_8250ACC8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82525CC8;
	sub_8250AD28(ctx, base);
	// stw r3,44(r30)
	REX_STORE_U32(r30.u32 + 44, ctx.r3.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82525ce4
	if (ctx.cr0.eq) goto loc_82525CE4;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
loc_82525CE4:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8254fb38
	ctx.lr = 0x82525CF0;
	sub_8254FB38(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8254fbd8
	ctx.lr = 0x82525D00;
	sub_8254FBD8(ctx, base);
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82523e00
	ctx.lr = 0x82525D1C;
	sub_82523E00(ctx, base);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
loc_82525D20:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82525c28
	if (!ctx.cr6.eq) goto loc_82525C28;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x82525d64
	if (ctx.cr6.eq) goto loc_82525D64;
	// rlwinm r11,r24,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r9,0(r22)
	ctx.r9.u64 = REX_LOAD_U32(r22.u32 + 0);
	// addi r10,r22,-36
	ctx.r10.s64 = r22.s64 + -36;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// ori r8,r10,1
	ctx.r8.u64 = ctx.r10.u64 | 1;
	// addi r7,r11,-36
	ctx.r7.s64 = ctx.r11.s64 + -36;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,0(r22)
	ctx.r9.u64 = REX_LOAD_U32(r22.u32 + 0);
	// rlwinm r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r7,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r10,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r10.u32);
loc_82525D64:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1ce4
	return;
}

DEFINE_REX_FUNC(sub_825490A0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x825490A8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r28,0
	r28.s64 = 0;
	// li r31,0
	r31.s64 = 0;
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8254912c
	if (ctx.cr6.eq) goto loc_8254912C;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// addi r9,r11,44
	ctx.r9.s64 = ctx.r11.s64 + 44;
loc_825490DC:
	// and. r11,r8,r6
	ctx.r11.u64 = ctx.r8.u64 & ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82549120
	if (ctx.cr0.eq) goto loc_82549120;
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x825490fc
	if (!ctx.cr6.eq) goto loc_825490FC;
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,12(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// clrlwi r28,r7,27
	r28.u64 = ctx.r7.u32 & 0x1F;
loc_825490FC:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// slw r7,r7,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r11,r11,27,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3;
	// andc r7,r30,r7
	ctx.r7.u64 = r30.u64 & ~ctx.r7.u64;
	// slw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// or r30,r7,r11
	r30.u64 = ctx.r7.u64 | ctx.r11.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
loc_82549120:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// bdnz 0x825490dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825490DC;
loc_8254912C:
	// bl 0x8250ab60
	ctx.lr = 0x82549130;
	sub_8250AB60(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// add r11,r31,r29
	ctx.r11.u64 = r31.u64 + r29.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// rlwimi r10,r11,25,4,6
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0xE000000) | (ctx.r10.u64 & 0xFFFFFFFFF1FFFFFF);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// beq cr6,0x82549154
	if (ctx.cr6.eq) goto loc_82549154;
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
loc_8254914C:
	// rlwimi r30,r30,2,0,29
	r30.u64 = (__builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC) | (r30.u64 & 0xFFFFFFFF00000003);
	// bdnz 0x8254914c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8254914C;
loc_82549154:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwimi r11,r30,5,19,26
	ctx.r11.u64 = (__builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 5) & 0x1FE0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFE01F);
	// rlwimi r11,r28,0,27,31
	ctx.r11.u64 = (__builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x1F) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFE0);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8254FB38) {
	REX_FUNC_PROLOGUE();
	// lhz r11,14(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 14);
	// rlwinm r10,r4,2,16,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFC;
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r3,r11,28
	ctx.r3.u64 = ctx.r11.u32 & 0xF;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8254FBD8) {
	REX_FUNC_PROLOGUE();
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,12(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// slw r11,r5,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r11.u8 & 0x3F));
	// and r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 & ctx.r11.u64;
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8254fc00
	if (!ctx.cr6.eq) goto loc_8254FC00;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8254FC00:
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// sth r11,14(r10)
	REX_STORE_U16(ctx.r10.u32 + 14, ctx.r11.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82550010) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82550018;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r5,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r5.u32);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// beq cr6,0x82550054
	if (ctx.cr6.eq) goto loc_82550054;
loc_82550044:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82550048:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_82550050:
	// lwz r4,164(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
loc_82550054:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r9,r9,0,18,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r9,16000
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16000, ctx.xer);
	// beq cr6,0x825500dc
	if (ctx.cr6.eq) goto loc_825500DC;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,44(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 44);
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,164
	ctx.r6.s64 = ctx.r1.s64 + 164;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// bl 0x825ba3a0
	ctx.lr = 0x8255008C;
	sub_825BA3A0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82550044
	if (!ctx.cr6.eq) goto loc_82550044;
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,4(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
loc_825500A0:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825500c4
	if (ctx.cr6.eq) goto loc_825500C4;
	// lwz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825500bc
	if (ctx.cr6.eq) goto loc_825500BC;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bne cr6,0x82550044
	if (!ctx.cr6.eq) goto loc_82550044;
loc_825500BC:
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x825500a0
	goto loc_825500A0;
loc_825500C4:
	// lwz r11,8(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// mr r31,r9
	r31.u64 = ctx.r9.u64;
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// beq cr6,0x82550050
	if (ctx.cr6.eq) goto loc_82550050;
	// b 0x82550044
	goto loc_82550044;
loc_825500DC:
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r9,27,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0xFF;
	// srw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
	// b 0x82550048
	goto loc_82550048;
}

DEFINE_REX_FUNC(sub_825542E8) {
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
	ctx.lr = 0x825542F0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lwz r4,28(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 28);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,54
	ctx.r6.s64 = 54;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x825bb860
	ctx.lr = 0x8255431C;
	sub_825BB860(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// beq cr6,0x82554340
	if (ctx.cr6.eq) goto loc_82554340;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,12(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x8255433C;
	sub_82503DA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82554340:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82554348;
	sub_8250AD28(ctx, base);
	// stw r3,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r3.u32);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824ffc30
	ctx.lr = 0x82554360;
	sub_824FFC30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82555698) {
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
	// bl 0x826a1c8c
	ctx.lr = 0x825556A0;
	// stfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -144, f30.u64);
	// stfd f31,-136(r1)
	REX_STORE_U64(ctx.r1.u32 + -136, f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82556fec
	if (!ctx.cr0.eq) goto loc_82556FEC;
	// mr r21,r11
	r21.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82556fec
	if (ctx.cr0.eq) goto loc_82556FEC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r23,0
	r23.s64 = 0;
	// li r20,1
	r20.s64 = 1;
	// lis r19,8
	r19.s64 = 524288;
	// lfs f30,3704(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	f30.f64 = double(temp.f32);
	// lfs f31,3716(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3716);
	f31.f64 = double(temp.f32);
loc_825556E4:
	// lwz r11,40(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 40);
	// rlwinm. r11,r11,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825556fc
	if (ctx.cr0.eq) goto loc_825556FC;
	// lwz r11,48(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 48);
	// oris r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 536870912;
	// stw r11,48(r21)
	REX_STORE_U32(r21.u32 + 48, ctx.r11.u32);
loc_825556FC:
	// lwz r11,48(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 48);
	// rlwinm. r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82556fd0
	if (ctx.cr0.eq) goto loc_82556FD0;
	// lwz r11,28(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 28);
	// addi r22,r21,24
	r22.s64 = r21.s64 + 24;
	// mr r25,r23
	r25.u64 = r23.u64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r24,r23
	r24.u64 = r23.u64;
	// mr r26,r23
	r26.u64 = r23.u64;
	// bne 0x82556320
	if (!ctx.cr0.eq) goto loc_82556320;
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r31,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	r31.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x82556320
	if (ctx.cr0.eq) goto loc_82556320;
loc_82555734:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm. r10,r11,15,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82556ffc
	if (!ctx.cr0.eq) goto loc_82556FFC;
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 21, ctx.xer);
	// blt cr6,0x82555758
	if (ctx.cr6.lt) goto loc_82555758;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// mr r10,r20
	ctx.r10.u64 = r20.u64;
	// ble cr6,0x8255575c
	if (!ctx.cr6.gt) goto loc_8255575C;
loc_82555758:
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
loc_8255575C:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82555988
	if (ctx.cr0.eq) goto loc_82555988;
	// li r4,1
	ctx.r4.s64 = 1;
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f31.f64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x825c1a18
	ctx.lr = 0x82555780;
	sub_825C1A18(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f31.f64;
	// li r4,1
	ctx.r4.s64 = 1;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x825c1a18
	ctx.lr = 0x825557A0;
	sub_825C1A18(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,44(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 44);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82580638
	ctx.lr = 0x825557B4;
	sub_82580638(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8250ac70
	ctx.lr = 0x825557C8;
	sub_8250AC70(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82530a10
	ctx.lr = 0x825557E0;
	sub_82530A10(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8250ac70
	ctx.lr = 0x825557F4;
	sub_8250AC70(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// bl 0x82555138
	ctx.lr = 0x82555810;
	sub_82555138(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,48(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 48);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82580638
	ctx.lr = 0x82555824;
	sub_82580638(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8250ab60
	ctx.lr = 0x82555834;
	sub_8250AB60(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// cmpwi cr6,r11,21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 21, ctx.xer);
	// beq cr6,0x825558b0
	if (ctx.cr6.eq) goto loc_825558B0;
	// cmpwi cr6,r11,22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 22, ctx.xer);
	// beq cr6,0x82555894
	if (ctx.cr6.eq) goto loc_82555894;
	// cmpwi cr6,r11,23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 23, ctx.xer);
	// beq cr6,0x8255587c
	if (ctx.cr6.eq) goto loc_8255587C;
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// bne cr6,0x82557008
	if (!ctx.cr6.eq) goto loc_82557008;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82555228
	ctx.lr = 0x82555878;
	sub_82555228(ctx, base);
	// b 0x825558c4
	goto loc_825558C4;
loc_8255587C:
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82555318
	ctx.lr = 0x82555890;
	sub_82555318(ctx, base);
	// b 0x825558c4
	goto loc_825558C4;
loc_82555894:
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82554c88
	ctx.lr = 0x825558AC;
	sub_82554C88(ctx, base);
	// b 0x825558c4
	goto loc_825558C4;
loc_825558B0:
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82555138
	ctx.lr = 0x825558C4;
	sub_82555138(ctx, base);
loc_825558C4:
	// addi r8,r31,4
	ctx.r8.s64 = r31.s64 + 4;
loc_825558C8:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82555970
	if (ctx.cr6.eq) goto loc_82555970;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8255595c
	if (ctx.cr6.eq) goto loc_8255595C;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x825558f8
	goto loc_825558F8;
loc_825558F0:
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
loc_825558F8:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825558f0
	if (!ctx.cr6.eq) goto loc_825558F0;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,22,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0x6;
	// rlwinm r7,r10,24,29,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x6;
	// stw r3,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
	// srw r9,r23,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r23.u32 >> (ctx.r9.u8 & 0x3F));
	// srw r7,r23,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (r23.u32 >> (ctx.r7.u8 & 0x3F));
	// rlwimi r7,r9,2,28,29
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xC) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFFF3);
	// rlwinm r9,r10,26,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x6;
	// clrlwi r7,r7,28
	ctx.r7.u64 = ctx.r7.u32 & 0xF;
	// srw r9,r23,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r23.u32 >> (ctx.r9.u8 & 0x3F));
	// rlwinm r6,r10,28,29,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x6;
	// rlwimi r9,r7,2,0,29
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r9.u64 & 0xFFFFFFFF00000003);
	// srw r7,r23,r6
	ctx.r7.u64 = ctx.r6.u8 & 0x20 ? 0 : (r23.u32 >> (ctx.r6.u8 & 0x3F));
	// rlwimi r7,r9,2,0,29
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r7.u64 & 0xFFFFFFFF00000003);
	// rlwinm r10,r10,0,27,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// rlwinm r9,r7,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8255595C:
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825558c8
	if (!ctx.cr6.eq) goto loc_825558C8;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// b 0x825558c8
	goto loc_825558C8;
loc_82555970:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825c2288
	ctx.lr = 0x82555984;
	sub_825C2288(ctx, base);
	// b 0x8255621c
	goto loc_8255621C;
loc_82555988:
	// cmpwi cr6,r11,55
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 55, ctx.xer);
	// bgt cr6,0x82555b90
	if (ctx.cr6.gt) goto loc_82555B90;
	// beq cr6,0x82555b4c
	if (ctx.cr6.eq) goto loc_82555B4C;
	// cmpwi cr6,r11,25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 25, ctx.xer);
	// blt cr6,0x82556138
	if (ctx.cr6.lt) goto loc_82556138;
	// cmpwi cr6,r11,28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 28, ctx.xer);
	// ble cr6,0x82555bc0
	if (!ctx.cr6.gt) goto loc_82555BC0;
	// cmpwi cr6,r11,30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 30, ctx.xer);
	// beq cr6,0x82555a30
	if (ctx.cr6.eq) goto loc_82555A30;
	// cmpwi cr6,r11,33
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 33, ctx.xer);
	// beq cr6,0x82555de0
	if (ctx.cr6.eq) goto loc_82555DE0;
	// cmpwi cr6,r11,35
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 35, ctx.xer);
	// beq cr6,0x82555a28
	if (ctx.cr6.eq) goto loc_82555A28;
	// cmpwi cr6,r11,36
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 36, ctx.xer);
	// bne cr6,0x82556138
	if (!ctx.cr6.eq) goto loc_82556138;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
loc_825559C8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82556138
	if (ctx.cr6.eq) goto loc_82556138;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82555a20
	if (ctx.cr6.eq) goto loc_82555A20;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
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
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82555A20:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x825559c8
	goto loc_825559C8;
loc_82555A28:
	// li r28,2
	r28.s64 = 2;
	// b 0x82555de4
	goto loc_82555DE4;
loc_82555A30:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// addi r29,r31,4
	r29.s64 = r31.s64 + 4;
loc_82555A38:
	// lwz r30,0(r29)
	r30.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82555b44
	if (ctx.cr6.eq) goto loc_82555B44;
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82555b30
	if (ctx.cr6.eq) goto loc_82555B30;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82555a68
	if (ctx.cr0.eq) goto loc_82555A68;
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
	// beq 0x82555a6c
	if (ctx.cr0.eq) goto loc_82555A6C;
loc_82555A68:
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
loc_82555A6C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82555b30
	if (ctx.cr0.eq) goto loc_82555B30;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82555af8
	if (!ctx.cr6.eq) goto loc_82555AF8;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,12(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r11,r10,7,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x7;
	// rlwinm r9,r10,27,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0xFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// clrlwi r28,r10,27
	r28.u64 = ctx.r10.u32 & 0x1F;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// srw r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r11.u8 & 0x3F));
	// clrlwi r18,r11,30
	r18.u64 = ctx.r11.u32 & 0x3;
	// bl 0x8250ab60
	ctx.lr = 0x82555AAC;
	sub_8250AB60(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r17,r3
	r17.u64 = ctx.r3.u64;
	// rlwimi r11,r20,26,4,6
	ctx.r11.u64 = (__builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 26) & 0xE000000) | (ctx.r11.u64 & 0xFFFFFFFFF1FFFFFF);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8250a620
	ctx.lr = 0x82555AC4;
	sub_8250A620(ctx, base);
	// li r11,224
	ctx.r11.s64 = 224;
	// lwz r10,0(r17)
	ctx.r10.u64 = REX_LOAD_U32(r17.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// rlwimi r11,r18,2,27,29
	ctx.r11.u64 = (__builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 2) & 0x1C) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFE3);
	// rlwinm r10,r10,0,27,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFC1F;
	// or r11,r11,r18
	ctx.r11.u64 = ctx.r11.u64 | r18.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// stw r11,0(r17)
	REX_STORE_U32(r17.u32 + 0, ctx.r11.u32);
	// bl 0x82554370
	ctx.lr = 0x82555AF8;
	sub_82554370(ctx, base);
loc_82555AF8:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82555b10
	goto loc_82555B10;
loc_82555B08:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
loc_82555B10:
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r30.u32, ctx.xer);
	// bne cr6,0x82555b08
	if (!ctx.cr6.eq) goto loc_82555B08;
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// stw r30,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// stw r3,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r3.u32);
loc_82555B30:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// bne cr6,0x82555a38
	if (!ctx.cr6.eq) goto loc_82555A38;
	// addi r29,r30,8
	r29.s64 = r30.s64 + 8;
	// b 0x82555a38
	goto loc_82555A38;
loc_82555B44:
	// li r10,3
	ctx.r10.s64 = 3;
	// b 0x8255611c
	goto loc_8255611C;
loc_82555B4C:
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
loc_82555B50:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82556138
	if (ctx.cr6.eq) goto loc_82556138;
	// lwz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82555b88
	if (ctx.cr6.eq) goto loc_82555B88;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r9,r11,0,1,1
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82555b7c
	if (ctx.cr0.eq) goto loc_82555B7C;
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
	// beq 0x82555b80
	if (ctx.cr0.eq) goto loc_82555B80;
loc_82555B7C:
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
loc_82555B80:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82555fac
	if (ctx.cr0.eq) goto loc_82555FAC;
loc_82555B88:
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x82555b50
	goto loc_82555B50;
loc_82555B90:
	// cmpwi cr6,r11,56
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 56, ctx.xer);
	// beq cr6,0x82555fac
	if (ctx.cr6.eq) goto loc_82555FAC;
	// cmpwi cr6,r11,58
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 58, ctx.xer);
	// beq cr6,0x82555de0
	if (ctx.cr6.eq) goto loc_82555DE0;
	// cmpwi cr6,r11,66
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 66, ctx.xer);
	// ble cr6,0x82556138
	if (!ctx.cr6.gt) goto loc_82556138;
	// cmpwi cr6,r11,71
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 71, ctx.xer);
	// ble cr6,0x82555bc0
	if (!ctx.cr6.gt) goto loc_82555BC0;
	// cmpwi cr6,r11,82
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 82, ctx.xer);
	// bne cr6,0x82556138
	if (!ctx.cr6.eq) goto loc_82556138;
	// li r28,3
	r28.s64 = 3;
	// b 0x82555de4
	goto loc_82555DE4;
loc_82555BC0:
	// mr r30,r23
	r30.u64 = r23.u64;
	// addi r28,r31,4
	r28.s64 = r31.s64 + 4;
loc_82555BC8:
	// lwz r29,0(r28)
	r29.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82556138
	if (ctx.cr6.eq) goto loc_82556138;
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82555dcc
	if (ctx.cr6.eq) goto loc_82555DCC;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82555dcc
	if (ctx.cr0.eq) goto loc_82555DCC;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x82555d40
	if (!ctx.cr6.eq) goto loc_82555D40;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,71
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 71, ctx.xer);
	// bne cr6,0x82555c54
	if (!ctx.cr6.eq) goto loc_82555C54;
	// li r4,1
	ctx.r4.s64 = 1;
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f31.f64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x825c1a18
	ctx.lr = 0x82555C20;
	sub_825C1A18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r30,44(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 44);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8250ac70
	ctx.lr = 0x82555C34;
	sub_8250AC70(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82530c80
	ctx.lr = 0x82555C4C;
	sub_82530C80(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x82555d40
	goto loc_82555D40;
loc_82555C54:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82555c68
	if (ctx.cr6.lt) goto loc_82555C68;
	// cmplwi cr6,r11,31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 31, ctx.xer);
	// mr r10,r20
	ctx.r10.u64 = r20.u64;
	// ble cr6,0x82555c6c
	if (!ctx.cr6.gt) goto loc_82555C6C;
loc_82555C68:
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
loc_82555C6C:
	// lwz r4,28(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 28);
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r8,4
	ctx.r8.s64 = 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// beq 0x82555cec
	if (ctx.cr0.eq) goto loc_82555CEC;
	// li r7,2
	ctx.r7.s64 = 2;
	// addi r6,r11,-20
	ctx.r6.s64 = ctx.r11.s64 + -20;
	// bl 0x825bb860
	ctx.lr = 0x82555C90;
	sub_825BB860(ctx, base);
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
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
	// lwz r4,44(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 44);
	// bl 0x8250ad28
	ctx.lr = 0x82555CD4;
	sub_8250AD28(ctx, base);
	// stw r3,44(r30)
	REX_STORE_U32(r30.u32 + 44, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,48(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 48);
	// bl 0x8250ad28
	ctx.lr = 0x82555CE4;
	sub_8250AD28(ctx, base);
	// stw r3,48(r30)
	REX_STORE_U32(r30.u32 + 48, ctx.r3.u32);
	// b 0x82555d40
	goto loc_82555D40;
loc_82555CEC:
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r11,-28
	ctx.r6.s64 = ctx.r11.s64 + -28;
	// bl 0x825bb860
	ctx.lr = 0x82555CF8;
	sub_825BB860(ctx, base);
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
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
	// lwz r4,44(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 44);
	// bl 0x8250ad28
	ctx.lr = 0x82555D3C;
	sub_8250AD28(ctx, base);
	// stw r3,44(r30)
	REX_STORE_U32(r30.u32 + 44, ctx.r3.u32);
loc_82555D40:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,9088
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9088, ctx.xer);
	// bne cr6,0x82555d94
	if (!ctx.cr6.eq) goto loc_82555D94;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm r10,r11,22,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x6;
	// rlwinm r9,r11,24,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x6;
	// srw r10,r23,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r23.u32 >> (ctx.r10.u8 & 0x3F));
	// srw r9,r23,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r23.u32 >> (ctx.r9.u8 & 0x3F));
	// rlwimi r9,r10,2,28,29
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFF3);
	// rlwinm r10,r11,26,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x6;
	// clrlwi r9,r9,28
	ctx.r9.u64 = ctx.r9.u32 & 0xF;
	// srw r10,r23,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r23.u32 >> (ctx.r10.u8 & 0x3F));
	// rlwinm r8,r11,28,29,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x6;
	// rlwimi r10,r9,2,0,29
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r10.u64 & 0xFFFFFFFF00000003);
	// srw r9,r23,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (r23.u32 >> (ctx.r8.u8 & 0x3F));
	// rlwimi r9,r10,2,0,29
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r9.u64 & 0xFFFFFFFF00000003);
	// rlwinm r11,r11,0,27,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// rlwinm r10,r9,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
loc_82555D94:
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82555dac
	goto loc_82555DAC;
loc_82555DA4:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
loc_82555DAC:
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r29.u32, ctx.xer);
	// bne cr6,0x82555da4
	if (!ctx.cr6.eq) goto loc_82555DA4;
	// lwz r10,8(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 8);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r11,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r11.u32);
	// stw r29,4(r30)
	REX_STORE_U32(r30.u32 + 4, r29.u32);
	// stw r30,12(r29)
	REX_STORE_U32(r29.u32 + 12, r30.u32);
loc_82555DCC:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// bne cr6,0x82555bc8
	if (!ctx.cr6.eq) goto loc_82555BC8;
	// addi r28,r29,8
	r28.s64 = r29.s64 + 8;
	// b 0x82555bc8
	goto loc_82555BC8;
loc_82555DE0:
	// mr r28,r20
	r28.u64 = r20.u64;
loc_82555DE4:
	// lwz r29,0(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_82555DE8:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82557010
	if (ctx.cr6.eq) goto loc_82557010;
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm. r11,r10,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82555e08
	if (ctx.cr0.eq) goto loc_82555E08;
	// rlwinm. r11,r10,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
	// beq 0x82555e0c
	if (ctx.cr0.eq) goto loc_82555E0C;
loc_82555E08:
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
loc_82555E0C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82555e20
	if (ctx.cr0.eq) goto loc_82555E20;
	// rlwinm r11,r10,0,7,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1FFE000;
	// cmplwi cr6,r11,49152
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 49152, ctx.xer);
	// beq cr6,0x82555e28
	if (ctx.cr6.eq) goto loc_82555E28;
loc_82555E20:
	// lwz r29,4(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 4);
	// b 0x82555de8
	goto loc_82555DE8;
loc_82555E28:
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r4,28(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 28);
	// li r7,2
	ctx.r7.s64 = 2;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825bb860
	ctx.lr = 0x82555E44;
	sub_825BB860(ctx, base);
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r10,r3,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// addi r8,r11,-36
	ctx.r8.s64 = ctx.r11.s64 + -36;
	// addi r6,r10,-36
	ctx.r6.s64 = ctx.r10.s64 + -36;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r7,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r7,r7,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r6,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
	// stw r8,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r4,12(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 12);
	// bl 0x8250ac70
	ctx.lr = 0x82555E90;
	sub_8250AC70(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,7424
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7424, ctx.xer);
	// bne cr6,0x82555ec0
	if (!ctx.cr6.eq) goto loc_82555EC0;
	// lwz r5,12(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82503da0
	ctx.lr = 0x82555EB4;
	sub_82503DA0(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x8250a620
	ctx.lr = 0x82555EC0;
	sub_8250A620(ctx, base);
loc_82555EC0:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82555ECC;
	sub_8250AD28(ctx, base);
	// stw r3,48(r30)
	REX_STORE_U32(r30.u32 + 48, ctx.r3.u32);
	// cmpwi cr6,r28,3
	ctx.cr6.compare<int32_t>(r28.s32, 3, ctx.xer);
	// beq cr6,0x82555ef0
	if (ctx.cr6.eq) goto loc_82555EF0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,44(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 44);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82551368
	ctx.lr = 0x82555EE8;
	sub_82551368(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82555ef4
	goto loc_82555EF4;
loc_82555EF0:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
loc_82555EF4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82555EFC;
	sub_8250AD28(ctx, base);
	// stw r3,44(r30)
	REX_STORE_U32(r30.u32 + 44, ctx.r3.u32);
	// addi r8,r31,4
	ctx.r8.s64 = r31.s64 + 4;
loc_82555F04:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82555970
	if (ctx.cr6.eq) goto loc_82555970;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82555f98
	if (ctx.cr6.eq) goto loc_82555F98;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x82555f34
	goto loc_82555F34;
loc_82555F2C:
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
loc_82555F34:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82555f2c
	if (!ctx.cr6.eq) goto loc_82555F2C;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r11,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r11.u32);
	// stw r30,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r30.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,22,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0x6;
	// rlwinm r7,r10,24,29,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x6;
	// srw r9,r23,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r23.u32 >> (ctx.r9.u8 & 0x3F));
	// srw r7,r23,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (r23.u32 >> (ctx.r7.u8 & 0x3F));
	// rlwimi r7,r9,2,28,29
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xC) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFFF3);
	// rlwinm r9,r10,26,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x6;
	// clrlwi r7,r7,28
	ctx.r7.u64 = ctx.r7.u32 & 0xF;
	// srw r9,r23,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r23.u32 >> (ctx.r9.u8 & 0x3F));
	// rlwinm r6,r10,28,29,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x6;
	// rlwimi r9,r7,2,0,29
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r9.u64 & 0xFFFFFFFF00000003);
	// srw r7,r23,r6
	ctx.r7.u64 = ctx.r6.u8 & 0x20 ? 0 : (r23.u32 >> (ctx.r6.u8 & 0x3F));
	// rlwimi r7,r9,2,0,29
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r7.u64 & 0xFFFFFFFF00000003);
	// rlwinm r10,r10,0,27,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// rlwinm r9,r7,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82555F98:
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82555f04
	if (!ctx.cr6.eq) goto loc_82555F04;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// b 0x82555f04
	goto loc_82555F04;
loc_82555FAC:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// addi r28,r31,4
	r28.s64 = r31.s64 + 4;
loc_82555FB4:
	// lwz r29,0(r28)
	r29.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82556118
	if (ctx.cr6.eq) goto loc_82556118;
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82556104
	if (ctx.cr6.eq) goto loc_82556104;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82555fe4
	if (ctx.cr0.eq) goto loc_82555FE4;
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
	// beq 0x82555fe8
	if (ctx.cr0.eq) goto loc_82555FE8;
loc_82555FE4:
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
loc_82555FE8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82556104
	if (ctx.cr0.eq) goto loc_82556104;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x825560cc
	if (!ctx.cr6.eq) goto loc_825560CC;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r6,44(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 44);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,7168
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7168, ctx.xer);
	// bne cr6,0x825560bc
	if (!ctx.cr6.eq) goto loc_825560BC;
	// lwz r10,0(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,12(r6)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r6.u32 + 12);
	// rlwinm r11,r10,7,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x7;
	// rlwinm r9,r10,27,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0xFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// clrlwi r30,r10,27
	r30.u64 = ctx.r10.u32 & 0x1F;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// srw r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r11.u8 & 0x3F));
	// clrlwi r18,r11,30
	r18.u64 = ctx.r11.u32 & 0x3;
	// bl 0x8250ab60
	ctx.lr = 0x82556038;
	sub_8250AB60(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r17,r3
	r17.u64 = ctx.r3.u64;
	// rlwimi r11,r20,26,4,6
	ctx.r11.u64 = (__builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 26) & 0xE000000) | (ctx.r11.u64 & 0xFFFFFFFFF1FFFFFF);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8250a620
	ctx.lr = 0x82556050;
	sub_8250A620(ctx, base);
	// li r11,224
	ctx.r11.s64 = 224;
	// lwz r10,0(r17)
	ctx.r10.u64 = REX_LOAD_U32(r17.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// rlwimi r11,r18,2,27,29
	ctx.r11.u64 = (__builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 2) & 0x1C) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFE3);
	// rlwinm r10,r10,0,27,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFC1F;
	// or r11,r11,r18
	ctx.r11.u64 = ctx.r11.u64 | r18.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// stw r11,0(r17)
	REX_STORE_U32(r17.u32 + 0, ctx.r11.u32);
	// bl 0x82553e38
	ctx.lr = 0x82556084;
	sub_82553E38(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8250ab60
	ctx.lr = 0x82556090;
	sub_8250AB60(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwimi r11,r20,26,4,6
	ctx.r11.u64 = (__builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 26) & 0xE000000) | (ctx.r11.u64 & 0xFFFFFFFFF1FFFFFF);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8250a620
	ctx.lr = 0x825560A8;
	sub_8250A620(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r11,7
	ctx.r11.s64 = 7;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// rlwimi r10,r11,10,19,26
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x1FE0) | (ctx.r10.u64 & 0xFFFFFFFFFFFFE01F);
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
loc_825560BC:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82554370
	ctx.lr = 0x825560CC;
	sub_82554370(ctx, base);
loc_825560CC:
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x825560e4
	goto loc_825560E4;
loc_825560DC:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
loc_825560E4:
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r29.u32, ctx.xer);
	// bne cr6,0x825560dc
	if (!ctx.cr6.eq) goto loc_825560DC;
	// lwz r10,8(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 8);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r11.u32);
	// stw r29,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r29.u32);
	// stw r3,12(r29)
	REX_STORE_U32(r29.u32 + 12, ctx.r3.u32);
loc_82556104:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// bne cr6,0x82555fb4
	if (!ctx.cr6.eq) goto loc_82555FB4;
	// addi r28,r29,8
	r28.s64 = r29.s64 + 8;
	// b 0x82555fb4
	goto loc_82555FB4;
loc_82556118:
	// li r10,37
	ctx.r10.s64 = 37;
loc_8255611C:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lhz r9,14(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 14);
	// rlwimi r11,r10,7,18,25
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x3FC0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFC03F);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// beq 0x82556138
	if (ctx.cr0.eq) goto loc_82556138;
	// sth r23,14(r31)
	REX_STORE_U16(r31.u32 + 14, r23.u16);
loc_82556138:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm. r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82556164
	if (ctx.cr0.eq) goto loc_82556164;
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82556158
	if (ctx.cr6.eq) goto loc_82556158;
	// cmplwi cr6,r11,105
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 105, ctx.xer);
	// bne cr6,0x8255701c
	if (!ctx.cr6.eq) goto loc_8255701C;
loc_82556158:
	// lwz r11,48(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 48);
	// oris r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 268435456;
	// stw r11,48(r21)
	REX_STORE_U32(r21.u32 + 48, ctx.r11.u32);
loc_82556164:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82550318
	ctx.lr = 0x8255616C;
	sub_82550318(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825561d8
	if (ctx.cr0.eq) goto loc_825561D8;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r10,r11,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,12288
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 12288, ctx.xer);
	// bne cr6,0x82556194
	if (!ctx.cr6.eq) goto loc_82556194;
	// rlwinm r11,r11,0,10,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x380000;
	// cmplw cr6,r11,r19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r19.u32, ctx.xer);
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
	// bgt cr6,0x82556198
	if (ctx.cr6.gt) goto loc_82556198;
loc_82556194:
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
loc_82556198:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// li r6,0
	ctx.r6.s64 = 0;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 + 11;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// lwz r5,12(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x82550808
	ctx.lr = 0x825561C4;
	sub_82550808(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825561d8
	if (!ctx.cr0.eq) goto loc_825561D8;
	// lwz r11,40(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 40);
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// stw r11,40(r27)
	REX_STORE_U32(r27.u32 + 40, ctx.r11.u32);
loc_825561D8:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r10,r11,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,12288
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 12288, ctx.xer);
	// bne cr6,0x8255621c
	if (!ctx.cr6.eq) goto loc_8255621C;
	// rlwinm r11,r11,0,10,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x380000;
	// cmplw cr6,r11,r19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r19.u32, ctx.xer);
	// bne cr6,0x8255621c
	if (!ctx.cr6.eq) goto loc_8255621C;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x82556214
	if (ctx.cr6.eq) goto loc_82556214;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8250b4d8
	ctx.lr = 0x82556210;
	sub_8250B4D8(ctx, base);
	// b 0x82556218
	goto loc_82556218;
loc_82556214:
	// mr r24,r31
	r24.u64 = r31.u64;
loc_82556218:
	// mr r25,r31
	r25.u64 = r31.u64;
loc_8255621C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x82556274
	if (ctx.cr6.eq) goto loc_82556274;
	// rlwinm r11,r26,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8255623c
	if (ctx.cr0.eq) goto loc_8255623C;
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
	// b 0x82556244
	goto loc_82556244;
loc_8255623C:
	// rlwinm r11,r10,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,-40
	ctx.r11.s64 = ctx.r11.s64 + -40;
loc_82556244:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82556264
	if (!ctx.cr6.eq) goto loc_82556264;
loc_8255624C:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r26,r31
	r26.u64 = r31.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825562bc
	if (!ctx.cr0.eq) goto loc_825562BC;
	// b 0x825562ac
	goto loc_825562AC;
loc_82556264:
	// clrlwi. r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825562bc
	if (!ctx.cr0.eq) goto loc_825562BC;
	// rlwinm r11,r10,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// b 0x825562b0
	goto loc_825562B0;
loc_82556274:
	// lwz r11,4(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82556288
	if (ctx.cr0.eq) goto loc_82556288;
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
	// b 0x82556294
	goto loc_82556294;
loc_82556288:
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,-40
	ctx.r11.s64 = ctx.r11.s64 + -40;
loc_82556294:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8255624c
	if (ctx.cr6.eq) goto loc_8255624C;
	// lwz r11,4(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825562bc
	if (!ctx.cr0.eq) goto loc_825562BC;
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 0);
loc_825562AC:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
loc_825562B0:
	// addi r31,r11,-40
	r31.s64 = ctx.r11.s64 + -40;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82555734
	if (!ctx.cr6.eq) goto loc_82555734;
loc_825562BC:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x82556320
	if (ctx.cr6.eq) goto loc_82556320;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,117
	ctx.r6.s64 = 117;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825bb860
	ctx.lr = 0x825562E0;
	sub_825BB860(ctx, base);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8250b4d8
	ctx.lr = 0x825562F4;
	sub_8250B4D8(ctx, base);
	// lwz r5,104(r21)
	ctx.r5.u64 = REX_LOAD_U32(r21.u32 + 104);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82556310
	if (ctx.cr6.eq) goto loc_82556310;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250b4d8
	ctx.lr = 0x82556310;
	sub_8250B4D8(ctx, base);
loc_82556310:
	// stw r31,104(r21)
	REX_STORE_U32(r21.u32 + 104, r31.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
loc_82556320:
	// lwz r11,76(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 76);
	// rlwinm. r11,r11,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82556fd0
	if (!ctx.cr0.eq) goto loc_82556FD0;
	// lwz r31,4(r22)
	r31.u64 = REX_LOAD_U32(r22.u32 + 4);
	// mr r26,r23
	r26.u64 = r23.u64;
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82556fd0
	if (!ctx.cr0.eq) goto loc_82556FD0;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq 0x82556fd0
	if (ctx.cr0.eq) goto loc_82556FD0;
loc_82556344:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// addi r10,r11,-12
	ctx.r10.s64 = ctx.r11.s64 + -12;
	// cmplwi cr6,r10,67
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 67, ctx.xer);
	// bgt cr6,0x82556ec0
	if (ctx.cr6.gt) goto loc_82556EC0;
	// lis r12,-32251
	ctx.r12.s64 = -2113601536;
	// rlwinm r0,r10,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r12,r12,-21280
	ctx.r12.s64 = ctx.r12.s64 + -21280;
	// lhzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32171
	ctx.r12.s64 = -2108358656;
	// addi r12,r12,25472
	ctx.r12.s64 = ctx.r12.s64 + 25472;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_82556380;
	case 1:
		goto loc_82556EC0;
	case 2:
		goto loc_82556EC0;
	case 3:
		goto loc_82556EC0;
	case 4:
		goto loc_82556418;
	case 5:
		goto loc_82556418;
	case 6:
		goto loc_82556418;
	case 7:
		goto loc_82556EC0;
	case 8:
		goto loc_82556570;
	case 9:
		goto loc_82556EC0;
	case 10:
		goto loc_82556EC0;
	case 11:
		goto loc_82556EC0;
	case 12:
		goto loc_82556EC0;
	case 13:
		goto loc_82556EC0;
	case 14:
		goto loc_82556EC0;
	case 15:
		goto loc_82556EC0;
	case 16:
		goto loc_82556EC0;
	case 17:
		goto loc_82556EC0;
	case 18:
		goto loc_82556EC0;
	case 19:
		goto loc_82556EC0;
	case 20:
		goto loc_825566B0;
	case 21:
		goto loc_82556EC0;
	case 22:
		goto loc_825566B8;
	case 23:
		goto loc_82556EC0;
	case 24:
		goto loc_82556EC0;
	case 25:
		goto loc_825566C0;
	case 26:
		goto loc_825566C8;
	case 27:
		goto loc_82556994;
	case 28:
		goto loc_8255699C;
	case 29:
		goto loc_825569A4;
	case 30:
		goto loc_825569AC;
	case 31:
		goto loc_82556D8C;
	case 32:
		goto loc_82556D94;
	case 33:
		goto loc_82556D9C;
	case 34:
		goto loc_82556EC0;
	case 35:
		goto loc_82556EC0;
	case 36:
		goto loc_82556EC0;
	case 37:
		goto loc_82556EC0;
	case 38:
		goto loc_82556EC0;
	case 39:
		goto loc_82556EC0;
	case 40:
		goto loc_82556EC0;
	case 41:
		goto loc_82556EC0;
	case 42:
		goto loc_82556EC0;
	case 43:
		goto loc_82556EC0;
	case 44:
		goto loc_82556EC0;
	case 45:
		goto loc_825566B0;
	case 46:
		goto loc_82556EC0;
	case 47:
		goto loc_82556EC0;
	case 48:
		goto loc_82556EC0;
	case 49:
		goto loc_82556EC0;
	case 50:
		goto loc_82556EC0;
	case 51:
		goto loc_82556EC0;
	case 52:
		goto loc_82556EC0;
	case 53:
		goto loc_82556EC0;
	case 54:
		goto loc_82556EC0;
	case 55:
		goto loc_825569B4;
	case 56:
		goto loc_825569BC;
	case 57:
		goto loc_825569C4;
	case 58:
		goto loc_825569C4;
	case 59:
		goto loc_82556BE0;
	case 60:
		goto loc_82556EC0;
	case 61:
		goto loc_82556EC0;
	case 62:
		goto loc_82556840;
	case 63:
		goto loc_82556840;
	case 64:
		goto loc_82556838;
	case 65:
		goto loc_82556838;
	case 66:
		goto loc_82556838;
	case 67:
		goto loc_82556838;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_82556380:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r7,48(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 48);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r6,44(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 44);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82553b38
	ctx.lr = 0x82556398;
	sub_82553B38(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r7,52(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 52);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825547f0
	ctx.lr = 0x825563B0;
	sub_825547F0(ctx, base);
	// addi r8,r31,4
	ctx.r8.s64 = r31.s64 + 4;
loc_825563B4:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82556bc8
	if (ctx.cr6.eq) goto loc_82556BC8;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82556404
	if (ctx.cr6.eq) goto loc_82556404;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x825563e4
	goto loc_825563E4;
loc_825563DC:
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
loc_825563E4:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825563dc
	if (!ctx.cr6.eq) goto loc_825563DC;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r3,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
loc_82556404:
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825563b4
	if (!ctx.cr6.eq) goto loc_825563B4;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// b 0x825563b4
	goto loc_825563B4;
loc_82556418:
	// subfic r28,r11,20
	ctx.xer.ca = ctx.r11.u32 <= 20;
	r28.u64 = static_cast<uint64_t>(20) - ctx.r11.u64;
	// mr r30,r23
	r30.u64 = r23.u64;
	// cmplwi cr6,r11,18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 18, ctx.xer);
	// bne cr6,0x82556444
	if (!ctx.cr6.eq) goto loc_82556444;
	// lwz r6,52(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 52);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82530ae0
	ctx.lr = 0x82556440;
	sub_82530AE0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_82556444:
	// mr r29,r23
	r29.u64 = r23.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x825564c4
	if (ctx.cr6.eq) goto loc_825564C4;
loc_82556450:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r4,48(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 48);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82551368
	ctx.lr = 0x82556460;
	sub_82551368(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r4,44(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 44);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82551368
	ctx.lr = 0x82556474;
	sub_82551368(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82553b38
	ctx.lr = 0x8255648C;
	sub_82553B38(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x825564a0
	if (!ctx.cr6.eq) goto loc_825564A0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x825564b8
	goto loc_825564B8;
loc_825564A0:
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82554d78
	ctx.lr = 0x825564B4;
	sub_82554D78(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_825564B8:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(r29.u32, r28.u32, ctx.xer);
	// blt cr6,0x82556450
	if (ctx.cr6.lt) goto loc_82556450;
loc_825564C4:
	// addi r8,r31,4
	ctx.r8.s64 = r31.s64 + 4;
loc_825564C8:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82556bc8
	if (ctx.cr6.eq) goto loc_82556BC8;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8255655c
	if (ctx.cr6.eq) goto loc_8255655C;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x825564f8
	goto loc_825564F8;
loc_825564F0:
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
loc_825564F8:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825564f0
	if (!ctx.cr6.eq) goto loc_825564F0;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r11,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r11.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,22,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0x6;
	// rlwinm r7,r10,24,29,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x6;
	// stw r30,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r30.u32);
	// srw r9,r23,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r23.u32 >> (ctx.r9.u8 & 0x3F));
	// srw r7,r23,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (r23.u32 >> (ctx.r7.u8 & 0x3F));
	// rlwimi r7,r9,2,28,29
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xC) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFFF3);
	// rlwinm r9,r10,26,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x6;
	// clrlwi r7,r7,28
	ctx.r7.u64 = ctx.r7.u32 & 0xF;
	// srw r9,r23,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r23.u32 >> (ctx.r9.u8 & 0x3F));
	// rlwinm r6,r10,28,29,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x6;
	// rlwimi r9,r7,2,0,29
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r9.u64 & 0xFFFFFFFF00000003);
	// srw r7,r23,r6
	ctx.r7.u64 = ctx.r6.u8 & 0x20 ? 0 : (r23.u32 >> (ctx.r6.u8 & 0x3F));
	// rlwimi r7,r9,2,0,29
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r7.u64 & 0xFFFFFFFF00000003);
	// rlwinm r10,r10,0,27,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// rlwinm r9,r7,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8255655C:
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825564c8
	if (!ctx.cr6.eq) goto loc_825564C8;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// b 0x825564c8
	goto loc_825564C8;
loc_82556570:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,44(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 44);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82551368
	ctx.lr = 0x82556580;
	sub_82551368(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,44(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 44);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82551368
	ctx.lr = 0x82556594;
	sub_82551368(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82530ae0
	ctx.lr = 0x825565AC;
	sub_82530AE0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r4,44(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 44);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82551368
	ctx.lr = 0x825565C0;
	sub_82551368(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82554970
	ctx.lr = 0x825565D8;
	sub_82554970(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// lwz r4,44(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 44);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82551368
	ctx.lr = 0x825565EC;
	sub_82551368(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82554970
	ctx.lr = 0x82556604;
	sub_82554970(ctx, base);
	// addi r8,r31,4
	ctx.r8.s64 = r31.s64 + 4;
loc_82556608:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82556bc8
	if (ctx.cr6.eq) goto loc_82556BC8;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8255669c
	if (ctx.cr6.eq) goto loc_8255669C;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x82556638
	goto loc_82556638;
loc_82556630:
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
loc_82556638:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82556630
	if (!ctx.cr6.eq) goto loc_82556630;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r3,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,22,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0x6;
	// rlwinm r7,r10,24,29,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x6;
	// srw r9,r23,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r23.u32 >> (ctx.r9.u8 & 0x3F));
	// srw r7,r23,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (r23.u32 >> (ctx.r7.u8 & 0x3F));
	// rlwimi r7,r9,2,28,29
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xC) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFFF3);
	// rlwinm r9,r10,26,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x6;
	// clrlwi r7,r7,28
	ctx.r7.u64 = ctx.r7.u32 & 0xF;
	// srw r9,r23,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r23.u32 >> (ctx.r9.u8 & 0x3F));
	// rlwinm r6,r10,28,29,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x6;
	// rlwimi r9,r7,2,0,29
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r9.u64 & 0xFFFFFFFF00000003);
	// srw r7,r23,r6
	ctx.r7.u64 = ctx.r6.u8 & 0x20 ? 0 : (r23.u32 >> (ctx.r6.u8 & 0x3F));
	// rlwimi r7,r9,2,0,29
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r7.u64 & 0xFFFFFFFF00000003);
	// rlwinm r10,r10,0,27,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// rlwinm r9,r7,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8255669C:
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82556608
	if (!ctx.cr6.eq) goto loc_82556608;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// b 0x82556608
	goto loc_82556608;
loc_825566B0:
	// mr r6,r20
	ctx.r6.u64 = r20.u64;
	// b 0x825566cc
	goto loc_825566CC;
loc_825566B8:
	// li r6,2
	ctx.r6.s64 = 2;
	// b 0x825566cc
	goto loc_825566CC;
loc_825566C0:
	// li r6,3
	ctx.r6.s64 = 3;
	// b 0x825566cc
	goto loc_825566CC;
loc_825566C8:
	// li r6,4
	ctx.r6.s64 = 4;
loc_825566CC:
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r4,28(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 28);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825bb860
	ctx.lr = 0x825566E4;
	sub_825BB860(ctx, base);
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r10,r3,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// addi r8,r11,-36
	ctx.r8.s64 = ctx.r11.s64 + -36;
	// addi r6,r10,-36
	ctx.r6.s64 = ctx.r10.s64 + -36;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r7,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r7,r7,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r6,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
	// stw r8,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r4,44(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 44);
	// bl 0x82551368
	ctx.lr = 0x82556730;
	sub_82551368(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250ad28
	ctx.lr = 0x8255673C;
	sub_8250AD28(ctx, base);
	// stw r3,44(r30)
	REX_STORE_U32(r30.u32 + 44, ctx.r3.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,44(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 44);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82551368
	ctx.lr = 0x82556750;
	sub_82551368(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,7296
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7296, ctx.xer);
	// bne cr6,0x82556780
	if (!ctx.cr6.eq) goto loc_82556780;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r5,12(r4)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x82556770;
	sub_82503DA0(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x8250a620
	ctx.lr = 0x8255677C;
	sub_8250A620(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
loc_82556780:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82556788;
	sub_8250AD28(ctx, base);
	// stw r3,48(r30)
	REX_STORE_U32(r30.u32 + 48, ctx.r3.u32);
	// addi r8,r31,4
	ctx.r8.s64 = r31.s64 + 4;
loc_82556790:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82556bc8
	if (ctx.cr6.eq) goto loc_82556BC8;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82556824
	if (ctx.cr6.eq) goto loc_82556824;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x825567c0
	goto loc_825567C0;
loc_825567B8:
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
loc_825567C0:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825567b8
	if (!ctx.cr6.eq) goto loc_825567B8;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r11,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r11.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,22,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0x6;
	// rlwinm r7,r10,24,29,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x6;
	// stw r30,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r30.u32);
	// srw r9,r23,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r23.u32 >> (ctx.r9.u8 & 0x3F));
	// srw r7,r23,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (r23.u32 >> (ctx.r7.u8 & 0x3F));
	// rlwimi r7,r9,2,28,29
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xC) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFFF3);
	// rlwinm r9,r10,26,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x6;
	// clrlwi r7,r7,28
	ctx.r7.u64 = ctx.r7.u32 & 0xF;
	// srw r9,r23,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r23.u32 >> (ctx.r9.u8 & 0x3F));
	// rlwinm r6,r10,28,29,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x6;
	// rlwimi r9,r7,2,0,29
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r9.u64 & 0xFFFFFFFF00000003);
	// srw r7,r23,r6
	ctx.r7.u64 = ctx.r6.u8 & 0x20 ? 0 : (r23.u32 >> (ctx.r6.u8 & 0x3F));
	// rlwimi r7,r9,2,0,29
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r7.u64 & 0xFFFFFFFF00000003);
	// rlwinm r10,r10,0,27,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// rlwinm r9,r7,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82556824:
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82556790
	if (!ctx.cr6.eq) goto loc_82556790;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// b 0x82556790
	goto loc_82556790;
loc_82556838:
	// mr r6,r20
	ctx.r6.u64 = r20.u64;
	// b 0x82556844
	goto loc_82556844;
loc_82556840:
	// li r6,2
	ctx.r6.s64 = 2;
loc_82556844:
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r4,28(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 28);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825bb860
	ctx.lr = 0x8255685C;
	sub_825BB860(ctx, base);
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r10,r3,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// addi r8,r11,-36
	ctx.r8.s64 = ctx.r11.s64 + -36;
	// addi r6,r10,-36
	ctx.r6.s64 = ctx.r10.s64 + -36;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r7,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r7,r7,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r6,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
	// stw r8,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r4,44(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 44);
	// bl 0x8250ad28
	ctx.lr = 0x825568A0;
	sub_8250AD28(ctx, base);
	// stw r3,44(r30)
	REX_STORE_U32(r30.u32 + 44, ctx.r3.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// lwz r4,48(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmplwi cr6,r11,78
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 78, ctx.xer);
	// beq cr6,0x825568c0
	if (ctx.cr6.eq) goto loc_825568C0;
	// cmplwi cr6,r11,79
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 79, ctx.xer);
	// bne cr6,0x825568dc
	if (!ctx.cr6.eq) goto loc_825568DC;
loc_825568C0:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r5,12(r4)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x825568CC;
	sub_82503DA0(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x8250a620
	ctx.lr = 0x825568D8;
	sub_8250A620(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
loc_825568DC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250ad28
	ctx.lr = 0x825568E4;
	sub_8250AD28(ctx, base);
	// stw r3,48(r30)
	REX_STORE_U32(r30.u32 + 48, ctx.r3.u32);
	// addi r8,r31,4
	ctx.r8.s64 = r31.s64 + 4;
loc_825568EC:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82556bc8
	if (ctx.cr6.eq) goto loc_82556BC8;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82556980
	if (ctx.cr6.eq) goto loc_82556980;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x8255691c
	goto loc_8255691C;
loc_82556914:
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
loc_8255691C:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82556914
	if (!ctx.cr6.eq) goto loc_82556914;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r11,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r11.u32);
	// stw r30,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r30.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,22,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0x6;
	// rlwinm r7,r10,24,29,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x6;
	// srw r9,r23,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r23.u32 >> (ctx.r9.u8 & 0x3F));
	// srw r7,r23,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (r23.u32 >> (ctx.r7.u8 & 0x3F));
	// rlwimi r7,r9,2,28,29
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xC) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFFF3);
	// rlwinm r9,r10,26,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x6;
	// clrlwi r7,r7,28
	ctx.r7.u64 = ctx.r7.u32 & 0xF;
	// srw r9,r23,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r23.u32 >> (ctx.r9.u8 & 0x3F));
	// rlwinm r6,r10,28,29,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x6;
	// rlwimi r9,r7,2,0,29
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r9.u64 & 0xFFFFFFFF00000003);
	// srw r7,r23,r6
	ctx.r7.u64 = ctx.r6.u8 & 0x20 ? 0 : (r23.u32 >> (ctx.r6.u8 & 0x3F));
	// rlwimi r7,r9,2,0,29
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r7.u64 & 0xFFFFFFFF00000003);
	// rlwinm r10,r10,0,27,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// rlwinm r9,r7,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82556980:
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825568ec
	if (!ctx.cr6.eq) goto loc_825568EC;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// b 0x825568ec
	goto loc_825568EC;
loc_82556994:
	// li r6,5
	ctx.r6.s64 = 5;
	// b 0x825569c8
	goto loc_825569C8;
loc_8255699C:
	// li r6,6
	ctx.r6.s64 = 6;
	// b 0x825569c8
	goto loc_825569C8;
loc_825569A4:
	// li r6,7
	ctx.r6.s64 = 7;
	// b 0x825569c8
	goto loc_825569C8;
loc_825569AC:
	// li r6,8
	ctx.r6.s64 = 8;
	// b 0x825569c8
	goto loc_825569C8;
loc_825569B4:
	// li r6,25
	ctx.r6.s64 = 25;
	// b 0x825569c8
	goto loc_825569C8;
loc_825569BC:
	// li r6,26
	ctx.r6.s64 = 26;
	// b 0x825569c8
	goto loc_825569C8;
loc_825569C4:
	// li r6,28
	ctx.r6.s64 = 28;
loc_825569C8:
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r4,28(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 28);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825bb860
	ctx.lr = 0x825569E0;
	sub_825BB860(ctx, base);
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r10,r3,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f31.f64;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// addi r8,r11,-36
	ctx.r8.s64 = ctx.r11.s64 + -36;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// addi r6,r10,-36
	ctx.r6.s64 = ctx.r10.s64 + -36;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r7,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r7,r7,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r6,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
	// stw r8,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// bl 0x825c1a18
	ctx.lr = 0x82556A38;
	sub_825C1A18(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,44(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 44);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82551368
	ctx.lr = 0x82556A4C;
	sub_82551368(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82556A58;
	sub_8250AD28(ctx, base);
	// stw r3,44(r30)
	REX_STORE_U32(r30.u32 + 44, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8250ac70
	ctx.lr = 0x82556A6C;
	sub_8250AC70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82556A78;
	sub_8250AD28(ctx, base);
	// stw r3,48(r30)
	REX_STORE_U32(r30.u32 + 48, ctx.r3.u32);
	// addi r8,r31,4
	ctx.r8.s64 = r31.s64 + 4;
loc_82556A80:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82556b28
	if (ctx.cr6.eq) goto loc_82556B28;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82556b14
	if (ctx.cr6.eq) goto loc_82556B14;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x82556ab0
	goto loc_82556AB0;
loc_82556AA8:
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
loc_82556AB0:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82556aa8
	if (!ctx.cr6.eq) goto loc_82556AA8;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r11,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r11.u32);
	// stw r30,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r30.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,22,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0x6;
	// rlwinm r7,r10,24,29,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x6;
	// srw r9,r23,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r23.u32 >> (ctx.r9.u8 & 0x3F));
	// srw r7,r23,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (r23.u32 >> (ctx.r7.u8 & 0x3F));
	// rlwimi r7,r9,2,28,29
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xC) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFFF3);
	// rlwinm r9,r10,26,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x6;
	// clrlwi r7,r7,28
	ctx.r7.u64 = ctx.r7.u32 & 0xF;
	// srw r9,r23,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r23.u32 >> (ctx.r9.u8 & 0x3F));
	// rlwinm r6,r10,28,29,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x6;
	// rlwimi r9,r7,2,0,29
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r9.u64 & 0xFFFFFFFF00000003);
	// srw r7,r23,r6
	ctx.r7.u64 = ctx.r6.u8 & 0x20 ? 0 : (r23.u32 >> (ctx.r6.u8 & 0x3F));
	// rlwimi r7,r9,2,0,29
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r7.u64 & 0xFFFFFFFF00000003);
	// rlwinm r10,r10,0,27,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// rlwinm r9,r7,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82556B14:
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82556a80
	if (!ctx.cr6.eq) goto loc_82556A80;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// b 0x82556a80
	goto loc_82556A80;
loc_82556B28:
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
loc_82556B2C:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82556b8c
	if (ctx.cr6.eq) goto loc_82556B8C;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r10,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82556b78
	if (!ctx.cr0.eq) goto loc_82556B78;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x82556b58
	goto loc_82556B58;
loc_82556B50:
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
loc_82556B58:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82556b50
	if (!ctx.cr6.eq) goto loc_82556B50;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// stw r30,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, r30.u32);
loc_82556B78:
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82556b2c
	if (!ctx.cr6.eq) goto loc_82556B2C;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// b 0x82556b2c
	goto loc_82556B2C;
loc_82556B8C:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm. r11,r11,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82556bc8
	if (ctx.cr0.eq) goto loc_82556BC8;
	// lwz r9,8(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 8);
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r11,r21,92
	ctx.r11.s64 = r21.s64 + 92;
	// oris r9,r9,512
	ctx.r9.u64 = ctx.r9.u64 | 33554432;
	// stw r9,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r9.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82556BB0:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, ctx.xer);
	// bne cr6,0x82556bc0
	if (!ctx.cr6.eq) goto loc_82556BC0;
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r30.u32);
loc_82556BC0:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82556bb0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82556BB0;
loc_82556BC8:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825c2288
	ctx.lr = 0x82556BDC;
	sub_825C2288(ctx, base);
	// b 0x82556f58
	goto loc_82556F58;
loc_82556BE0:
	// li r4,1
	ctx.r4.s64 = 1;
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f31.f64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x825c1a18
	ctx.lr = 0x82556BFC;
	sub_825C1A18(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r4,44(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 44);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82551368
	ctx.lr = 0x82556C10;
	sub_82551368(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8250ac70
	ctx.lr = 0x82556C24;
	sub_8250AC70(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82554108
	ctx.lr = 0x82556C3C;
	sub_82554108(ctx, base);
	// addi r8,r31,4
	ctx.r8.s64 = r31.s64 + 4;
loc_82556C40:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82556ce8
	if (ctx.cr6.eq) goto loc_82556CE8;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82556cd4
	if (ctx.cr6.eq) goto loc_82556CD4;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x82556c70
	goto loc_82556C70;
loc_82556C68:
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
loc_82556C70:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82556c68
	if (!ctx.cr6.eq) goto loc_82556C68;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r3,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,22,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0x6;
	// rlwinm r7,r10,24,29,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x6;
	// srw r9,r23,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r23.u32 >> (ctx.r9.u8 & 0x3F));
	// srw r7,r23,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (r23.u32 >> (ctx.r7.u8 & 0x3F));
	// rlwimi r7,r9,2,28,29
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xC) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFFF3);
	// rlwinm r9,r10,26,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x6;
	// clrlwi r7,r7,28
	ctx.r7.u64 = ctx.r7.u32 & 0xF;
	// srw r9,r23,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r23.u32 >> (ctx.r9.u8 & 0x3F));
	// rlwinm r6,r10,28,29,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x6;
	// rlwimi r9,r7,2,0,29
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r9.u64 & 0xFFFFFFFF00000003);
	// srw r7,r23,r6
	ctx.r7.u64 = ctx.r6.u8 & 0x20 ? 0 : (r23.u32 >> (ctx.r6.u8 & 0x3F));
	// rlwimi r7,r9,2,0,29
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r7.u64 & 0xFFFFFFFF00000003);
	// rlwinm r10,r10,0,27,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// rlwinm r9,r7,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82556CD4:
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82556c40
	if (!ctx.cr6.eq) goto loc_82556C40;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// b 0x82556c40
	goto loc_82556C40;
loc_82556CE8:
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
loc_82556CEC:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82556d4c
	if (ctx.cr6.eq) goto loc_82556D4C;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r10,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82556d38
	if (!ctx.cr0.eq) goto loc_82556D38;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x82556d18
	goto loc_82556D18;
loc_82556D10:
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
loc_82556D18:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82556d10
	if (!ctx.cr6.eq) goto loc_82556D10;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r3,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r3.u32);
loc_82556D38:
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82556cec
	if (!ctx.cr6.eq) goto loc_82556CEC;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// b 0x82556cec
	goto loc_82556CEC;
loc_82556D4C:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm. r11,r11,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82556bc8
	if (ctx.cr0.eq) goto loc_82556BC8;
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r11,r21,92
	ctx.r11.s64 = r21.s64 + 92;
	// oris r9,r9,512
	ctx.r9.u64 = ctx.r9.u64 | 33554432;
	// stw r9,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82556D70:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, ctx.xer);
	// bne cr6,0x82556d80
	if (!ctx.cr6.eq) goto loc_82556D80;
	// stw r3,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
loc_82556D80:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82556d70
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82556D70;
	// b 0x82556bc8
	goto loc_82556BC8;
loc_82556D8C:
	// li r6,9
	ctx.r6.s64 = 9;
	// b 0x82556da0
	goto loc_82556DA0;
loc_82556D94:
	// li r6,10
	ctx.r6.s64 = 10;
	// b 0x82556da0
	goto loc_82556DA0;
loc_82556D9C:
	// li r6,11
	ctx.r6.s64 = 11;
loc_82556DA0:
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r4,28(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 28);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825bb860
	ctx.lr = 0x82556DB8;
	sub_825BB860(ctx, base);
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r10,r3,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// addi r8,r11,-36
	ctx.r8.s64 = ctx.r11.s64 + -36;
	// addi r6,r10,-36
	ctx.r6.s64 = ctx.r10.s64 + -36;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r7,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r7,r7,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r6,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
	// stw r8,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r4,44(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 44);
	// bl 0x82551368
	ctx.lr = 0x82556E04;
	sub_82551368(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82556E10;
	sub_8250AD28(ctx, base);
	// stw r3,44(r30)
	REX_STORE_U32(r30.u32 + 44, ctx.r3.u32);
	// addi r8,r31,4
	ctx.r8.s64 = r31.s64 + 4;
loc_82556E18:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82556bc8
	if (ctx.cr6.eq) goto loc_82556BC8;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82556eac
	if (ctx.cr6.eq) goto loc_82556EAC;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x82556e48
	goto loc_82556E48;
loc_82556E40:
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
loc_82556E48:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82556e40
	if (!ctx.cr6.eq) goto loc_82556E40;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r11,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r11.u32);
	// stw r30,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r30.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,22,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0x6;
	// rlwinm r7,r10,24,29,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x6;
	// srw r9,r23,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r23.u32 >> (ctx.r9.u8 & 0x3F));
	// srw r7,r23,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (r23.u32 >> (ctx.r7.u8 & 0x3F));
	// rlwimi r7,r9,2,28,29
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xC) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFFF3);
	// rlwinm r9,r10,26,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x6;
	// clrlwi r7,r7,28
	ctx.r7.u64 = ctx.r7.u32 & 0xF;
	// srw r9,r23,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r23.u32 >> (ctx.r9.u8 & 0x3F));
	// rlwinm r6,r10,28,29,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x6;
	// rlwimi r9,r7,2,0,29
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r9.u64 & 0xFFFFFFFF00000003);
	// srw r7,r23,r6
	ctx.r7.u64 = ctx.r6.u8 & 0x20 ? 0 : (r23.u32 >> (ctx.r6.u8 & 0x3F));
	// rlwimi r7,r9,2,0,29
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r7.u64 & 0xFFFFFFFF00000003);
	// rlwinm r10,r10,0,27,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// rlwinm r9,r7,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82556EAC:
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82556e18
	if (!ctx.cr6.eq) goto loc_82556E18;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// b 0x82556e18
	goto loc_82556E18;
loc_82556EC0:
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// blt cr6,0x82556ed4
	if (ctx.cr6.lt) goto loc_82556ED4;
	// cmplwi cr6,r11,82
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 82, ctx.xer);
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
	// ble cr6,0x82556ed8
	if (!ctx.cr6.gt) goto loc_82556ED8;
loc_82556ED4:
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
loc_82556ED8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82556f58
	if (ctx.cr0.eq) goto loc_82556F58;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
loc_82556EE4:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82556f4c
	if (ctx.cr6.eq) goto loc_82556F4C;
	// lwz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82556f44
	if (ctx.cr6.eq) goto loc_82556F44;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r9,r11,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82556f44
	if (ctx.cr0.eq) goto loc_82556F44;
	// rlwinm r9,r11,22,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x6;
	// rlwinm r8,r11,24,29,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x6;
	// srw r9,r23,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r23.u32 >> (ctx.r9.u8 & 0x3F));
	// srw r8,r23,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (r23.u32 >> (ctx.r8.u8 & 0x3F));
	// rlwimi r8,r9,2,28,29
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xC) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFF3);
	// rlwinm r9,r11,26,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x6;
	// clrlwi r8,r8,28
	ctx.r8.u64 = ctx.r8.u32 & 0xF;
	// srw r9,r23,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r23.u32 >> (ctx.r9.u8 & 0x3F));
	// rlwinm r7,r11,28,29,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x6;
	// rlwimi r9,r8,2,0,29
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r9.u64 & 0xFFFFFFFF00000003);
	// srw r8,r23,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x20 ? 0 : (r23.u32 >> (ctx.r7.u8 & 0x3F));
	// rlwimi r8,r9,2,0,29
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r8.u64 & 0xFFFFFFFF00000003);
	// rlwinm r11,r11,0,27,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// rlwinm r9,r8,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_82556F44:
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x82556ee4
	goto loc_82556EE4;
loc_82556F4C:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwimi r11,r20,14,15,17
	ctx.r11.u64 = (__builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 14) & 0x1C000) | (ctx.r11.u64 & 0xFFFFFFFFFFFE3FFF);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
loc_82556F58:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x82556fa0
	if (ctx.cr6.eq) goto loc_82556FA0;
	// rlwinm r11,r26,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82556f90
	if (!ctx.cr6.eq) goto loc_82556F90;
loc_82556F80:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r26,r31
	r26.u64 = r31.u64;
	// lwz r31,40(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// b 0x82556fc0
	goto loc_82556FC0;
loc_82556F90:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82556fd0
	if (!ctx.cr0.eq) goto loc_82556FD0;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// b 0x82556fc8
	goto loc_82556FC8;
loc_82556FA0:
	// lwz r11,4(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 4);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82556f80
	if (ctx.cr6.eq) goto loc_82556F80;
	// lwz r31,4(r22)
	r31.u64 = REX_LOAD_U32(r22.u32 + 4);
loc_82556FC0:
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82556fd0
	if (!ctx.cr0.eq) goto loc_82556FD0;
loc_82556FC8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82556344
	if (!ctx.cr6.eq) goto loc_82556344;
loc_82556FD0:
	// rlwinm r11,r21,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82556fec
	if (!ctx.cr0.eq) goto loc_82556FEC;
	// mr r21,r11
	r21.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825556e4
	if (!ctx.cr6.eq) goto loc_825556E4;
loc_82556FEC:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x826a1cdc
	return;
loc_82556FFC:
	// li r4,3539
	ctx.r4.s64 = 3539;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824e4368
	ctx.lr = 0x82557008;
	sub_824E4368(ctx, base);
loc_82557008:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// bl 0x824e4368
	ctx.lr = 0x82557010;
	sub_824E4368(ctx, base);
loc_82557010:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824e4368
	ctx.lr = 0x8255701C;
	sub_824E4368(ctx, base);
loc_8255701C:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824e4368
	ctx.lr = 0x82557028;
	sub_824E4368(ctx, base);
}

DEFINE_REX_FUNC(sub_82626048) {
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
	// bl 0x826a1cac
	ctx.lr = 0x82626050;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// li r27,0
	r27.s64 = 0;
	// addi r25,r3,656
	r25.s64 = ctx.r3.s64 + 656;
loc_82626068:
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
	// stwcx. r27,0,r25
	ea = r25.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(r27.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x82626068
	if (!ctx.cr0.eq) goto loc_82626068;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// ld r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// clrldi r10,r29,32
	ctx.r10.u64 = r29.u64 & 0xFFFFFFFF;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// std r10,0(r30)
	REX_STORE_U64(r30.u32 + 0, ctx.r10.u64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826260a8
	if (ctx.cr6.eq) goto loc_826260A8;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// ble cr6,0x826260ac
	if (!ctx.cr6.gt) goto loc_826260AC;
loc_826260A8:
	// stw r29,16(r30)
	REX_STORE_U32(r30.u32 + 16, r29.u32);
loc_826260AC:
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826260c0
	if (ctx.cr6.eq) goto loc_826260C0;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// bge cr6,0x826260c4
	if (!ctx.cr6.lt) goto loc_826260C4;
loc_826260C0:
	// stw r29,20(r30)
	REX_STORE_U32(r30.u32 + 20, r29.u32);
loc_826260C4:
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// lwz r3,132(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 132);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826260DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,28(r30)
	REX_STORE_U32(r30.u32 + 28, ctx.r3.u32);
	// lwz r28,120(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 120);
	// lwz r11,148(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 148);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82626144
	if (ctx.cr6.eq) goto loc_82626144;
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// clrldi r10,r29,32
	ctx.r10.u64 = r29.u64 & 0xFFFFFFFF;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// ld r3,-5968(r11)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r11.u32 + -5968);
	// bl 0x826a2d40
	ctx.lr = 0x82626104;
	sub_826A2D40(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 100);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r10,104(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 104);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// fdiv f0,f0,f1
	ctx.f0.f64 = ctx.f0.f64 / ctx.f1.f64;
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fdiv f13,f13,f12
	ctx.f13.f64 = ctx.f13.f64 / ctx.f12.f64;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82626144
	if (!ctx.cr6.gt) goto loc_82626144;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82641ce8
	ctx.lr = 0x82626144;
	sub_82641CE8(ctx, base);
loc_82626144:
	// lwz r8,120(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 120);
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// lwz r8,152(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 152);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// stw r8,32(r30)
	REX_STORE_U32(r30.u32 + 32, ctx.r8.u32);
loc_82626160:
	// stdu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U64(ea, ctx.r10.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x82626160
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82626160;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// mftb r11
	ctx.r11.u64 = REX_QUERY_TIMEBASE();
	// ld r10,680(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 680);
	// clrldi r28,r26,32
	r28.u64 = r26.u64 & 0xFFFFFFFF;
	// rldicl r9,r11,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF;
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// subf r3,r10,r28
	ctx.r3.u64 = r28.u64 - ctx.r10.u64;
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// bl 0x826a2d40
	ctx.lr = 0x8262618C;
	sub_826A2D40(ctx, base);
	// clrldi r11,r29,32
	ctx.r11.u64 = r29.u64 & 0xFFFFFFFF;
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// std r28,680(r31)
	REX_STORE_U64(r31.u32 + 680, r28.u64);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,20576
	ctx.r3.s64 = ctx.r11.s64 + 20576;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,-1
	ctx.r4.s64 = -1;
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f12,f0
	ctx.f12.f64 = double(float(ctx.f0.f64));
	// lfs f0,3820(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3820);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x82625ce0
	ctx.lr = 0x826261D8;
	sub_82625CE0(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// li r29,1
	r29.s64 = 1;
	// lwz r9,668(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 668);
	// stw r10,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// lwz r10,152(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 152);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82626204
	if (ctx.cr6.eq) goto loc_82626204;
	// stw r29,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r29.u32);
	// lwz r11,152(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 152);
	// stw r11,668(r31)
	REX_STORE_U32(r31.u32 + 668, ctx.r11.u32);
loc_82626204:
	// lwz r3,108(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 108);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8262621C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r3,22593
	ctx.r3.s64 = 1480654848;
	// li r5,52
	ctx.r5.s64 = 52;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// ori r3,r3,30002
	ctx.r3.u64 = ctx.r3.u64 | 30002;
	// bl 0x826b3ac0
	ctx.lr = 0x82626230;
	sub_826B3AC0(ctx, base);
	// lwsync 
	// stw r30,0(r25)
	REX_STORE_U32(r25.u32 + 0, r30.u32);
	// stw r29,664(r31)
	REX_STORE_U32(r31.u32 + 664, r29.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_82635F90) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,444(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 444);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82635fd4
	if (ctx.cr6.eq) goto loc_82635FD4;
	// lwz r9,456(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 456);
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// lwz r8,252(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 252);
	// lwz r7,256(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 256);
	// sraw r6,r8,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r6.s64 = ctx.r8.s32 >> temp.u32;
	// lwz r10,268(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 268);
	// sraw r5,r7,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r7.s32 < 0) & (((ctx.r7.s32 >> temp.u32) << temp.u32) != ctx.r7.s32);
	ctx.r5.s64 = ctx.r7.s32 >> temp.u32;
	// stw r6,464(r3)
	REX_STORE_U32(ctx.r3.u32 + 464, ctx.r6.u32);
	// stw r5,468(r3)
	REX_STORE_U32(ctx.r3.u32 + 468, ctx.r5.u32);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82635fcc
	if (!ctx.cr6.lt) goto loc_82635FCC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82635FCC:
	// stw r11,472(r3)
	REX_STORE_U32(ctx.r3.u32 + 472, ctx.r11.u32);
	// blr 
	return;
loc_82635FD4:
	// lwz r11,448(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 448);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82636008
	if (ctx.cr6.eq) goto loc_82636008;
	// lwz r11,456(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 456);
	// lwz r10,252(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 252);
	// lwz r9,256(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 256);
	// lwz r8,268(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 268);
	// slw r7,r10,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// slw r6,r9,r11
	ctx.r6.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// stw r7,464(r3)
	REX_STORE_U32(ctx.r3.u32 + 464, ctx.r7.u32);
	// stw r6,468(r3)
	REX_STORE_U32(ctx.r3.u32 + 468, ctx.r6.u32);
	// stw r8,472(r3)
	REX_STORE_U32(ctx.r3.u32 + 472, ctx.r8.u32);
	// blr 
	return;
loc_82636008:
	// lwz r11,252(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 252);
	// lwz r10,256(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 256);
	// lwz r9,268(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 268);
	// stw r11,464(r3)
	REX_STORE_U32(ctx.r3.u32 + 464, ctx.r11.u32);
	// stw r10,468(r3)
	REX_STORE_U32(ctx.r3.u32 + 468, ctx.r10.u32);
	// stw r9,472(r3)
	REX_STORE_U32(ctx.r3.u32 + 472, ctx.r9.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82638968) {
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
	// bl 0x826a1ca4
	ctx.lr = 0x82638970;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	r26.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// mr r24,r9
	r24.u64 = ctx.r9.u64;
	// li r23,1
	r23.s64 = 1;
	// mr r25,r26
	r25.u64 = r26.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x826389a8
	if (ctx.cr6.eq) goto loc_826389A8;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x826389ac
	if (ctx.cr6.eq) goto loc_826389AC;
loc_826389A8:
	// stw r23,76(r31)
	REX_STORE_U32(r31.u32 + 76, r23.u32);
loc_826389AC:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble cr6,0x82638bdc
	if (!ctx.cr6.gt) goto loc_82638BDC;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r29,28(r31)
	REX_STORE_U32(r31.u32 + 28, r29.u32);
	// stw r30,32(r31)
	REX_STORE_U32(r31.u32 + 32, r30.u32);
	// bne cr6,0x826389cc
	if (!ctx.cr6.eq) goto loc_826389CC;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r10,r11,3720
	ctx.r10.s64 = ctx.r11.s64 + 3720;
loc_826389CC:
	// stw r10,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r10.u32);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// bne cr6,0x826389e0
	if (!ctx.cr6.eq) goto loc_826389E0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x82638a48
	if (ctx.cr6.eq) goto loc_82638A48;
loc_826389E0:
	// stw r29,20(r31)
	REX_STORE_U32(r31.u32 + 20, r29.u32);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// stw r30,24(r31)
	REX_STORE_U32(r31.u32 + 24, r30.u32);
	// beq cr6,0x82638a48
	if (ctx.cr6.eq) goto loc_82638A48;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x8261d770
	ctx.lr = 0x826389F8;
	sub_8261D770(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// srawi r10,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 3;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// subf. r7,r8,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x82638a1c
	if (ctx.cr0.eq) goto loc_82638A1C;
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// stw r11,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r11.u32);
loc_82638A1C:
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82638a48
	if (ctx.cr6.eq) goto loc_82638A48;
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82638a40
	if (!ctx.cr6.gt) goto loc_82638A40;
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
	// stw r26,68(r31)
	REX_STORE_U32(r31.u32 + 68, r26.u32);
	// b 0x82638a48
	goto loc_82638A48;
loc_82638A40:
	// subf r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - r30.u64;
	// stw r11,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r11.u32);
loc_82638A48:
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82638a70
	if (!ctx.cr6.eq) goto loc_82638A70;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq cr6,0x82638bd0
	if (ctx.cr6.eq) goto loc_82638BD0;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r10,r11,22
	ctx.r10.u64 = ctx.r11.u32 & 0x3FF;
	// stw r10,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// b 0x82638bd0
	goto loc_82638BD0;
loc_82638A70:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq cr6,0x82638bd0
	if (ctx.cr6.eq) goto loc_82638BD0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne cr6,0x82638bd0
	if (!ctx.cr6.eq) goto loc_82638BD0;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// stw r26,16(r31)
	REX_STORE_U32(r31.u32 + 16, r26.u32);
	// lwz r10,84(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 84);
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// lbz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U8(r29.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82638A9C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,28(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwz r8,84(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 84);
	// rlwinm r30,r3,8,16,23
	r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFF00;
	// lbz r3,1(r9)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82638AB4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,28(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 28);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// lwz r5,84(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 84);
	// or r4,r6,r30
	ctx.r4.u64 = ctx.r6.u64 | r30.u64;
	// rlwinm r30,r4,8,0,23
	r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r3,2(r7)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r7.u32 + 2);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82638AD4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lwz r9,84(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 84);
	// or r8,r10,r30
	ctx.r8.u64 = ctx.r10.u64 | r30.u64;
	// rlwinm r30,r8,8,0,23
	r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r3,3(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82638AF4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// lwz r29,8(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 8);
	// or r30,r7,r30
	r30.u64 = ctx.r7.u64 | r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r30,16(r31)
	REX_STORE_U32(r31.u32 + 16, r30.u32);
	// bl 0x8261d770
	ctx.lr = 0x82638B0C;
	sub_8261D770(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lwz r9,28(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 28);
	// rlwinm r11,r3,29,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 29) & 0x1F;
	// srawi r4,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r4.s64 = ctx.r10.s32 >> 3;
	// lwz r6,32(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 32);
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r5,60(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 60);
	// addze r9,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r9.s64 = temp.s64;
	// lwz r8,52(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 52);
	// subf r7,r11,r6
	ctx.r7.u64 = ctx.r6.u64 - ctx.r11.u64;
	// stw r3,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r3.u32);
	// rlwinm r6,r9,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r11,r30,4,28,31
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xF;
	// stw r7,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r7.u32);
	// subf r25,r6,r10
	r25.u64 = ctx.r10.u64 - ctx.r6.u64;
	// stw r11,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r11.u32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x82638bcc
	if (!ctx.cr6.eq) goto loc_82638BCC;
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// cmpwi cr6,r24,2
	ctx.cr6.compare<int32_t>(r24.s32, 2, ctx.xer);
	// ble cr6,0x82638b70
	if (!ctx.cr6.gt) goto loc_82638B70;
	// rlwinm r7,r30,0,5,5
	ctx.r7.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x4000000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82638b70
	if (ctx.cr6.eq) goto loc_82638B70;
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
loc_82638B70:
	// subf r11,r8,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r8.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82638b88
	if (ctx.cr6.eq) goto loc_82638B88;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82638b98
	if (!ctx.cr6.eq) goto loc_82638B98;
loc_82638B88:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82638b98
	if (!ctx.cr6.eq) goto loc_82638B98;
	// stw r26,12(r29)
	REX_STORE_U32(r29.u32 + 12, r26.u32);
	// b 0x82638bd0
	goto loc_82638BD0;
loc_82638B98:
	// subfic r9,r10,32
	ctx.xer.ca = ctx.r10.u32 <= 32;
	ctx.r9.u64 = static_cast<uint64_t>(32) - ctx.r10.u64;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// li r3,6
	ctx.r3.s64 = 6;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// stw r30,36(r31)
	REX_STORE_U32(r31.u32 + 36, r30.u32);
	// addi r7,r10,-4
	ctx.r7.s64 = ctx.r10.s64 + -4;
	// stw r9,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r9.u32);
	// stw r8,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r8.u32);
	// stw r7,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r7.u32);
	// stw r23,12(r29)
	REX_STORE_U32(r29.u32 + 12, r23.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf4
	return;
loc_82638BCC:
	// stw r26,60(r31)
	REX_STORE_U32(r31.u32 + 60, r26.u32);
loc_82638BD0:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82638640
	ctx.lr = 0x82638BDC;
	sub_82638640(ctx, base);
loc_82638BDC:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_82648008) {
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
	ctx.lr = 0x82648010;
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r7,400(r1)
	REX_STORE_U64(ctx.r1.u32 + 400, ctx.r7.u64);
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// lwz r26,404(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// li r25,0
	r25.s64 = 0;
	// lwz r15,12(r4)
	r15.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// li r17,1
	r17.s64 = 1;
	// lwz r16,16(r4)
	r16.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// cmpwi cr6,r26,6
	ctx.cr6.compare<int32_t>(r26.s32, 6, ctx.xer);
	// lwz r24,4(r4)
	r24.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// std r8,408(r1)
	REX_STORE_U64(ctx.r1.u32 + 408, ctx.r8.u64);
	// beq cr6,0x82648070
	if (ctx.cr6.eq) goto loc_82648070;
	// lwz r11,60(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82648068
	if (ctx.cr6.eq) goto loc_82648068;
	// lwz r11,80(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// cmpwi cr6,r11,32000
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32000, ctx.xer);
	// blt cr6,0x82648068
	if (ctx.cr6.lt) goto loc_82648068;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r9,r10,44100
	ctx.r9.u64 = ctx.r10.u64 | 44100;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82648070
	if (ctx.cr6.lt) goto loc_82648070;
loc_82648068:
	// li r14,0
	r14.s64 = 0;
	// b 0x82648074
	goto loc_82648074;
loc_82648070:
	// mr r14,r17
	r14.u64 = r17.u64;
loc_82648074:
	// lwz r11,400(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 400);
	// li r27,0
	r27.s64 = 0;
	// li r28,0
	r28.s64 = 0;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(r14.s32, 0, ctx.xer);
	// bne cr6,0x826480ac
	if (!ctx.cr6.eq) goto loc_826480AC;
	// lhz r10,118(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 118);
	// lwz r9,276(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 276);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// lwz r7,256(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 256);
	// slw r6,r8,r26
	ctx.r6.u64 = r26.u8 & 0x20 ? 0 : (ctx.r8.u32 << (r26.u8 & 0x3F));
	// srawi r4,r6,6
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3F) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 6;
	// mullw r10,r4,r9
	ctx.r10.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// divw r22,r10,r7
	r22.u64 = uint32_t((ctx.r7.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r7.s32 == -1)) ? ctx.r10.s32 / ctx.r7.s32 : 0);
	// b 0x826480b0
	goto loc_826480B0;
loc_826480AC:
	// lwz r22,80(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_826480B0:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r19,404(r3)
	r19.u64 = REX_LOAD_U32(ctx.r3.u32 + 404);
	// lwz r20,268(r3)
	r20.u64 = REX_LOAD_U32(ctx.r3.u32 + 268);
	// add r18,r11,r15
	r18.u64 = ctx.r11.u64 + r15.u64;
	// add r21,r10,r5
	r21.u64 = ctx.r10.u64 + ctx.r5.u64;
loc_826480C4:
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 0);
	// cmpw cr6,r11,r19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r19.s32, ctx.xer);
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// bgt cr6,0x826480d8
	if (ctx.cr6.gt) goto loc_826480D8;
	// mr r29,r19
	r29.u64 = r19.u64;
loc_826480D8:
	// cmpw cr6,r29,r20
	ctx.cr6.compare<int32_t>(r29.s32, r20.s32, ctx.xer);
	// bge cr6,0x826482a8
	if (!ctx.cr6.lt) goto loc_826482A8;
	// lbz r10,0(r18)
	ctx.r10.u64 = REX_LOAD_U8(r18.u32 + 0);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x8264829c
	if (!ctx.cr6.eq) goto loc_8264829C;
	// addi r11,r28,1
	ctx.r11.s64 = r28.s64 + 1;
	// slw r9,r29,r26
	ctx.r9.u64 = r26.u8 & 0x20 ? 0 : (r29.u32 << (r26.u8 & 0x3F));
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r11,r9,6
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 6;
	// add r10,r10,r23
	ctx.r10.u64 = ctx.r10.u64 + r23.u64;
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x8264811c
	if (ctx.cr6.gt) goto loc_8264811C;
loc_8264810C:
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8264810c
	if (!ctx.cr6.gt) goto loc_8264810C;
loc_8264811C:
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(r14.s32, 0, ctx.xer);
	// beq cr6,0x8264813c
	if (ctx.cr6.eq) goto loc_8264813C;
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r25,2,22,29
	ctx.r9.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0x3FC;
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// lwzx r7,r10,r24
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + r24.u32);
	// stwx r7,r9,r8
	REX_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r7.u32);
	// b 0x82648290
	goto loc_82648290;
loc_8264813C:
	// lwz r11,4(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 4);
	// mr r30,r20
	r30.u64 = r20.u64;
	// cmpw cr6,r20,r11
	ctx.cr6.compare<int32_t>(r20.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82648150
	if (ctx.cr6.lt) goto loc_82648150;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
loc_82648150:
	// rlwinm r7,r28,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r7,r23
	ctx.r11.u64 = ctx.r7.u64 + r23.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r11,r22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r22.s32, ctx.xer);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// blt cr6,0x8264816c
	if (ctx.cr6.lt) goto loc_8264816C;
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
loc_8264816C:
	// slw r11,r30,r26
	ctx.r11.u64 = r26.u8 & 0x20 ? 0 : (r30.u32 << (r26.u8 & 0x3F));
	// srawi r11,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 6;
	// cmpw cr6,r11,r22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r22.s32, ctx.xer);
	// blt cr6,0x82648180
	if (ctx.cr6.lt) goto loc_82648180;
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
loc_82648180:
	// addi r9,r27,1
	ctx.r9.s64 = r27.s64 + 1;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + r23.u64;
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r6,r10
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x826481ac
	if (ctx.cr6.gt) goto loc_826481AC;
loc_8264819C:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x8264819c
	if (!ctx.cr6.gt) goto loc_8264819C;
loc_826481AC:
	// cmpw cr6,r27,r28
	ctx.cr6.compare<int32_t>(r27.s32, r28.s32, ctx.xer);
	// bne cr6,0x826481d0
	if (!ctx.cr6.eq) goto loc_826481D0;
	// lwzx r3,r7,r24
	ctx.r3.u64 = REX_LOAD_U32(ctx.r7.u32 + r24.u32);
	// bl 0x82647ec0
	ctx.lr = 0x826481BC;
	sub_82647EC0(ctx, base);
	// rlwinm r10,r25,2,22,29
	ctx.r10.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0x3FC;
	// fmuls f0,f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stfsx f0,r10,r9
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, temp.u32);
	// b 0x82648290
	goto loc_82648290;
loc_826481D0:
	// cmpwi cr6,r26,6
	ctx.cr6.compare<int32_t>(r26.s32, 6, ctx.xer);
	// ble cr6,0x826481f0
	if (!ctx.cr6.gt) goto loc_826481F0;
	// addi r11,r26,-7
	ctx.r11.s64 = r26.s64 + -7;
	// addi r10,r26,-6
	ctx.r10.s64 = r26.s64 + -6;
	// slw r11,r17,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (r17.u32 << (ctx.r11.u8 & 0x3F));
	// add r9,r11,r8
	ctx.r9.u64 = ctx.r11.u64 + ctx.r8.u64;
	// sraw r31,r9,r10
	temp.u32 = ctx.r10.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	r31.s64 = ctx.r9.s32 >> temp.u32;
	// b 0x826481f8
	goto loc_826481F8;
loc_826481F0:
	// subfic r11,r26,6
	ctx.xer.ca = r26.u32 <= 6;
	ctx.r11.u64 = static_cast<uint64_t>(6) - r26.u64;
	// slw r31,r8,r11
	r31.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r11.u8 & 0x3F));
loc_826481F8:
	// lwzx r3,r7,r24
	ctx.r3.u64 = REX_LOAD_U32(ctx.r7.u32 + r24.u32);
	// bl 0x82647ec0
	ctx.lr = 0x82648200;
	sub_82647EC0(ctx, base);
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// fmr f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f1.f64;
	// lwzx r3,r11,r24
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + r24.u32);
	// bl 0x82647ec0
	ctx.lr = 0x82648210;
	sub_82647EC0(ctx, base);
	// extsw r6,r31
	ctx.r6.s64 = r31.s32;
	// fmuls f9,f10,f10
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// subf r9,r29,r30
	ctx.r9.u64 = r30.u64 - r29.u64;
	// fmuls f12,f1,f1
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// std r6,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r6.u64);
	// lfd f5,104(r1)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// clrldi r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// extsw r7,r29
	ctx.r7.s64 = r29.s32;
	// std r8,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfd f7,88(r1)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// std r7,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r7.u64);
	// lfd f6,96(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// extsw r10,r30
	ctx.r10.s64 = r30.s32;
	// rlwinm r5,r25,2,22,29
	ctx.r5.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0x3FC;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f8,80(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f3,f8
	ctx.f3.f64 = double(ctx.f8.s64);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// fcfid f0,f7
	ctx.f0.f64 = double(ctx.f7.s64);
	// fcfid f13,f6
	ctx.f13.f64 = double(ctx.f6.s64);
	// frsp f11,f3
	ctx.f11.f64 = double(float(ctx.f3.f64));
	// frsp f2,f4
	ctx.f2.f64 = double(float(ctx.f4.f64));
	// frsp f10,f0
	ctx.f10.f64 = double(float(ctx.f0.f64));
	// frsp f8,f13
	ctx.f8.f64 = double(float(ctx.f13.f64));
	// fsubs f7,f11,f2
	ctx.f7.f64 = double(float(ctx.f11.f64 - ctx.f2.f64));
	// fsubs f6,f2,f8
	ctx.f6.f64 = double(float(ctx.f2.f64 - ctx.f8.f64));
	// fdivs f5,f7,f10
	ctx.f5.f64 = double(float(ctx.f7.f64 / ctx.f10.f64));
	// fdivs f4,f6,f10
	ctx.f4.f64 = double(float(ctx.f6.f64 / ctx.f10.f64));
	// fmuls f3,f5,f12
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// fmadds f2,f4,f9,f3
	ctx.f2.f64 = double(float(std::fma(ctx.f4.f64, ctx.f9.f64, ctx.f3.f64)));
	// stfsx f2,r5,r4
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r5.u32 + ctx.r4.u32, temp.u32);
loc_82648290:
	// clrlwi r11,r25,24
	ctx.r11.u64 = r25.u32 & 0xFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r25,r11,24
	r25.u64 = ctx.r11.u32 & 0xFF;
loc_8264829C:
	// addi r18,r18,1
	r18.s64 = r18.s64 + 1;
	// addi r21,r21,4
	r21.s64 = r21.s64 + 4;
	// b 0x826480c4
	goto loc_826480C4;
loc_826482A8:
	// clrlwi r28,r25,24
	r28.u64 = r25.u32 & 0xFF;
	// addic. r11,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	ctx.r11.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82648318
	if (!ctx.cr0.gt) goto loc_82648318;
	// rlwinm r30,r28,2,0,29
	r30.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// li r31,0
	r31.s64 = 0;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
loc_826482C0:
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(r14.s32, 0, ctx.xer);
	// beq cr6,0x826482ec
	if (ctx.cr6.eq) goto loc_826482EC;
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// add r9,r30,r11
	ctx.r9.u64 = r30.u64 + ctx.r11.u64;
	// lwzx r8,r31,r10
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + ctx.r10.u32);
	// lwz r7,-4(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + -4);
	// subf r3,r7,r8
	ctx.r3.u64 = ctx.r8.u64 - ctx.r7.u64;
	// bl 0x82647ec0
	ctx.lr = 0x826482E4;
	sub_82647EC0(ctx, base);
	// stfsx f1,r31,r16
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + r16.u32, temp.u32);
	// b 0x8264830c
	goto loc_8264830C;
loc_826482EC:
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// add r9,r30,r11
	ctx.r9.u64 = r30.u64 + ctx.r11.u64;
	// lfsx f0,r31,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fsqrts f11,f12
	ctx.f11.f64 = double(float(sqrt(ctx.f12.f64)));
	// stfsx f11,r31,r16
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + r16.u32, temp.u32);
loc_8264830C:
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bne 0x826482c0
	if (!ctx.cr0.eq) goto loc_826482C0;
loc_82648318:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82648334
	if (ctx.cr6.eq) goto loc_82648334;
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// add r9,r11,r16
	ctx.r9.u64 = ctx.r11.u64 + r16.u64;
	// lfs f0,3704(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3704);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-4(r9)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + -4, temp.u32);
loc_82648334:
	// stb r25,0(r15)
	REX_STORE_U8(r15.u32 + 0, r25.u8);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_8265D6C8) {
	REX_FUNC_PROLOGUE();
	// b 0x826677d0
	sub_826677D0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8265D6D8) {
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
	// bl 0x82663508
	ctx.lr = 0x8265D6F0;
	sub_82663508(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8265DB68) {
	REX_FUNC_PROLOGUE();
	// cmpwi cr6,r5,24
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 24, ctx.xer);
	// bne cr6,0x8265db7c
	if (!ctx.cr6.eq) goto loc_8265DB7C;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16385
	ctx.r3.u64 = ctx.r3.u64 | 16385;
	// blr 
	return;
loc_8265DB7C:
	// cmplwi cr6,r7,20
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 20, ctx.xer);
	// bne cr6,0x8265db8c
	if (!ctx.cr6.eq) goto loc_8265DB8C;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// b 0x8265da48
	sub_8265DA48(ctx, base);
	return;
loc_8265DB8C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8265E8C8) {
	REX_FUNC_PROLOGUE();
	// lis r4,-32761
	ctx.r4.s64 = -2147024896;
	// ori r4,r4,1235
	ctx.r4.u64 = ctx.r4.u64 | 1235;
	// b 0x8265e3d0
	sub_8265E3D0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8265ECA8) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// b 0x82651d80
	sub_82651D80(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8265F170) {
	REX_FUNC_PROLOGUE();
	// lwz r11,396(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 396);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8265f18c
	if (ctx.cr0.eq) goto loc_8265F18C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
loc_8265F18C:
	// lwz r3,8(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// b 0x8265bac0
	sub_8265BAC0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8265F7C8) {
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
	ctx.lr = 0x8265F7D0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// bl 0x8264fec0
	ctx.lr = 0x8265F7F0;
	sub_8264FEC0(ctx, base);
	// addi r11,r31,4
	ctx.r11.s64 = r31.s64 + 4;
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// li r5,28
	ctx.r5.s64 = 28;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// bl 0x826a2e60
	ctx.lr = 0x8265F810;
	sub_826A2E60(ctx, base);
	// std r29,40(r31)
	REX_STORE_U64(r31.u32 + 40, r29.u64);
	// stw r28,48(r31)
	REX_STORE_U32(r31.u32 + 48, r28.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r27,52(r31)
	REX_STORE_U32(r31.u32 + 52, r27.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82661600) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r3,0(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8264c828
	ctx.lr = 0x8266162C;
	sub_8264C828(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82661640
	if (ctx.cr0.eq) goto loc_82661640;
	// lis r3,-32646
	ctx.r3.s64 = -2139488256;
	// ori r3,r3,4105
	ctx.r3.u64 = ctx.r3.u64 | 4105;
	// b 0x8266164c
	goto loc_8266164C;
loc_82661640:
	// lhz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r11,36(r30)
	REX_STORE_U16(r30.u32 + 36, ctx.r11.u16);
loc_8266164C:
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

DEFINE_REX_FUNC(sub_826637C0) {
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
	ctx.lr = 0x826637C8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r26,r3,132
	r26.s64 = ctx.r3.s64 + 132;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// rlwinm r30,r4,7,25,31
	r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 7) & 0x7F;
	// rlwinm r29,r4,14,25,31
	r29.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 14) & 0x7F;
	// bl 0x827938a4
	ctx.lr = 0x826637E8;
	__imp__RtlEnterCriticalSection(ctx, base);
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(r30.u32, r29.u32, ctx.xer);
	// bne cr6,0x826638c8
	if (!ctx.cr6.eq) goto loc_826638C8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82663800
	if (!ctx.cr6.eq) goto loc_82663800;
	// li r27,0
	r27.s64 = 0;
	// b 0x82663864
	goto loc_82663864;
loc_82663800:
	// rlwinm. r11,r31,0,14,14
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826638e8
	if (!ctx.cr0.eq) goto loc_826638E8;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// subfic r11,r30,127
	ctx.xer.ca = r30.u32 <= 127;
	ctx.r11.u64 = static_cast<uint64_t>(127) - r30.u64;
	// clrlwi r9,r31,15
	ctx.r9.u64 = r31.u32 & 0x1FFFF;
	// ori r10,r10,65534
	ctx.r10.u64 = ctx.r10.u64 | 65534;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// bge cr6,0x826638e8
	if (!ctx.cr6.lt) goto loc_826638E8;
	// addi r9,r11,94
	ctx.r9.s64 = ctx.r11.s64 + 94;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r9,r9,r28
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + r28.u32);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x826638e8
	if (!ctx.cr6.lt) goto loc_826638E8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82663844
	if (!ctx.cr6.eq) goto loc_82663844;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
loc_82663844:
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x826638e8
	if (ctx.cr6.eq) goto loc_826638E8;
	// lis r9,255
	ctx.r9.s64 = 16711680;
	// subfic r11,r11,127
	ctx.xer.ca = ctx.r11.u32 <= 127;
	ctx.r11.u64 = static_cast<uint64_t>(127) - ctx.r11.u64;
	// ori r9,r9,65534
	ctx.r9.u64 = ctx.r9.u64 | 65534;
	// rlwinm r11,r11,24,0,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF000000;
	// subf r10,r10,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r10.u64;
	// or r27,r11,r10
	r27.u64 = ctx.r11.u64 | ctx.r10.u64;
loc_82663864:
	// lwz r30,240(r28)
	r30.u64 = REX_LOAD_U32(r28.u32 + 240);
	// addi r29,r28,240
	r29.s64 = r28.s64 + 240;
	// b 0x826638b0
	goto loc_826638B0;
loc_82663870:
	// lwz r11,288(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 288);
	// rlwinm. r10,r11,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x826638ac
	if (!ctx.cr0.eq) goto loc_826638AC;
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x826638ac
	if (!ctx.cr0.eq) goto loc_826638AC;
	// rlwinm. r11,r11,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826638ac
	if (!ctx.cr0.eq) goto loc_826638AC;
	// lwz r11,232(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 232);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826638ac
	if (!ctx.cr6.eq) goto loc_826638AC;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,68(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 68);
	// bl 0x82675a98
	ctx.lr = 0x826638A4;
	sub_82675A98(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x82663944
	if (!ctx.cr0.eq) goto loc_82663944;
loc_826638AC:
	// lwz r30,0(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 0);
loc_826638B0:
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(r30.u32, r29.u32, ctx.xer);
	// beq cr6,0x826638c0
	if (ctx.cr6.eq) goto loc_826638C0;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne 0x82663870
	if (!ctx.cr0.eq) goto loc_82663870;
loc_826638C0:
	// li r31,0
	r31.s64 = 0;
	// b 0x82663944
	goto loc_82663944;
loc_826638C8:
	// lwz r11,200(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 200);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x826638e8
	if (!ctx.cr6.eq) goto loc_826638E8;
	// addi r11,r28,432
	ctx.r11.s64 = r28.s64 + 432;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826638f4
	if (!ctx.cr6.eq) goto loc_826638F4;
loc_826638E8:
	// lis r31,-32646
	r31.s64 = -2139488256;
	// ori r31,r31,4111
	r31.u64 = r31.u64 | 4111;
	// b 0x82663944
	goto loc_82663944;
loc_826638F4:
	// lwz r10,292(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 292);
	// rlwinm. r10,r10,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8266390c
	if (ctx.cr0.eq) goto loc_8266390C;
	// lis r31,-32646
	r31.s64 = -2139488256;
	// ori r31,r31,4112
	r31.u64 = r31.u64 | 4112;
	// b 0x82663944
	goto loc_82663944;
loc_8266390C:
	// lwz r10,236(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 236);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8266391c
	if (!ctx.cr6.eq) goto loc_8266391C;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8266391C:
	// lwz r11,292(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 292);
	// clrlwi r9,r31,21
	ctx.r9.u64 = r31.u32 & 0x7FF;
	// rlwinm r8,r31,13,1,7
	ctx.r8.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 13) & 0x7F000000;
	// rlwinm. r11,r11,23,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// or r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 | ctx.r9.u64;
	// bne 0x82663938
	if (!ctx.cr0.eq) goto loc_82663938;
	// oris r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 2147483648;
loc_82663938:
	// lwz r3,72(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 72);
	// bl 0x82675a98
	ctx.lr = 0x82663940;
	sub_82675A98(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_82663944:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x827938b4
	ctx.lr = 0x8266394C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82670EB0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,236(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 236);
	// bne cr6,0x82670ee4
	if (!ctx.cr6.eq) goto loc_82670EE4;
	// stw r11,240(r3)
	REX_STORE_U32(ctx.r3.u32 + 240, ctx.r11.u32);
	// b 0x82670f1c
	goto loc_82670F1C;
loc_82670EE4:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,224
	ctx.r3.s64 = ctx.r11.s64 + 224;
	// bl 0x826707c0
	ctx.lr = 0x82670EF0;
	sub_826707C0(ctx, base);
	// lwz r3,236(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 236);
loc_82670EF4:
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
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
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
	// bne 0x82670ef4
	if (!ctx.cr0.eq) goto loc_82670EF4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82670f1c
	if (!ctx.cr6.eq) goto loc_82670F1C;
	// bl 0x82670cd8
	ctx.lr = 0x82670F1C;
	sub_82670CD8(ctx, base);
loc_82670F1C:
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
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
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
	// bne 0x82670f1c
	if (!ctx.cr0.eq) goto loc_82670F1C;
	// stw r30,236(r31)
	REX_STORE_U32(r31.u32 + 236, r30.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,224
	ctx.r3.s64 = r30.s64 + 224;
	// bl 0x826706a8
	ctx.lr = 0x82670F48;
	sub_826706A8(ctx, base);
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

DEFINE_REX_FUNC(sub_826752D0) {
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
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82675304
	if (ctx.cr6.eq) goto loc_82675304;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// subf. r10,r11,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x826752fc
	if (!ctx.cr0.lt) goto loc_826752FC;
	// subf r11,r5,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r5.u64;
	// cmplwi cr6,r11,1000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1000, ctx.xer);
	// b 0x82675300
	goto loc_82675300;
loc_826752FC:
	// cmplwi cr6,r10,1000
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1000, ctx.xer);
loc_82675300:
	// ble cr6,0x82675310
	if (!ctx.cr6.gt) goto loc_82675310;
loc_82675304:
	// lis r3,-32646
	ctx.r3.s64 = -2139488256;
	// ori r3,r3,4106
	ctx.r3.u64 = ctx.r3.u64 | 4106;
	// b 0x82675390
	goto loc_82675390;
loc_82675310:
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// addi r10,r3,44
	ctx.r10.s64 = ctx.r3.s64 + 44;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8267538c
	if (ctx.cr6.eq) goto loc_8267538C;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8267538c
	if (ctx.cr0.eq) goto loc_8267538C;
loc_82675330:
	// lwz r7,20(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// addi r11,r9,-4
	ctx.r11.s64 = ctx.r9.s64 + -4;
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x82675364
	if (!ctx.cr6.eq) goto loc_82675364;
	// lwz r7,36(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// cmplw cr6,r7,r5
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, ctx.xer);
	// bgt cr6,0x8267537c
	if (ctx.cr6.gt) goto loc_8267537C;
	// lwz r7,52(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// bne cr6,0x82675364
	if (!ctx.cr6.eq) goto loc_82675364;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r7,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r7.u32);
loc_82675364:
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8267537c
	if (ctx.cr6.eq) goto loc_8267537C;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82675330
	if (!ctx.cr0.eq) goto loc_82675330;
loc_8267537C:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8267538c
	if (ctx.cr6.eq) goto loc_8267538C;
	// bl 0x826741d0
	ctx.lr = 0x82675388;
	sub_826741D0(ctx, base);
	// b 0x82675390
	goto loc_82675390;
loc_8267538C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82675390:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82678658) {
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
	ctx.lr = 0x82678660;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r26,168(r3)
	r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 168);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r27,r3,416
	r27.s64 = ctx.r3.s64 + 416;
	// addi r30,r3,444
	r30.s64 = ctx.r3.s64 + 444;
	// li r29,0
	r29.s64 = 0;
loc_82678678:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826786c0
	if (!ctx.cr6.eq) goto loc_826786C0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,1264
	ctx.r3.s64 = 1264;
	// bl 0x82681488
	ctx.lr = 0x82678690;
	sub_82681488(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x826786c0
	if (!ctx.cr0.lt) goto loc_826786C0;
	// lwz r11,440(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 440);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
loc_826786A4:
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
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r8
	ea = ctx.r8.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x826786a4
	if (!ctx.cr0.eq) goto loc_826786A4;
loc_826786C0:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// lwz r3,280(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 280);
	// addi r9,r11,32
	ctx.r9.s64 = ctx.r11.s64 + 32;
	// stw r29,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// stw r29,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r29.u32);
	// addi r4,r11,36
	ctx.r4.s64 = ctx.r11.s64 + 36;
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x8264cf68
	ctx.lr = 0x826786F4;
	sub_8264CF68(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82678744
	if (!ctx.cr6.eq) goto loc_82678744;
	// bl 0x8264d050
	ctx.lr = 0x82678700;
	sub_8264D050(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,997
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 997, ctx.xer);
	// beq cr6,0x82678768
	if (ctx.cr6.eq) goto loc_82678768;
	// addi r4,r31,20
	ctx.r4.s64 = r31.s64 + 20;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,400
	ctx.r3.s64 = r31.s64 + 400;
	// bl 0x82676808
	ctx.lr = 0x8267871C;
	sub_82676808(ctx, base);
	// cmpwi cr6,r28,10040
	ctx.cr6.compare<int32_t>(r28.s32, 10040, ctx.xer);
	// beq cr6,0x82678678
	if (ctx.cr6.eq) goto loc_82678678;
	// cmpwi cr6,r28,10054
	ctx.cr6.compare<int32_t>(r28.s32, 10054, ctx.xer);
	// beq cr6,0x82678678
	if (ctx.cr6.eq) goto loc_82678678;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x82676d18
	ctx.lr = 0x82678734;
	sub_82676D18(ctx, base);
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826610a8
	ctx.lr = 0x82678740;
	sub_826610A8(ctx, base);
	// b 0x826787bc
	goto loc_826787BC;
loc_82678744:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x8267878c
	if (ctx.cr6.eq) goto loc_8267878C;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r26,r26,-1
	r26.s64 = r26.s64 + -1;
	// stw r10,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// bl 0x82677940
	ctx.lr = 0x82678764;
	sub_82677940(ctx, base);
	// b 0x82678678
	goto loc_82678678;
loc_82678768:
	// addi r11,r31,4
	ctx.r11.s64 = r31.s64 + 4;
loc_8267876C:
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
	// bne 0x8267876c
	if (!ctx.cr0.eq) goto loc_8267876C;
	// b 0x826787ac
	goto loc_826787AC;
loc_8267878C:
	// addi r11,r31,4
	ctx.r11.s64 = r31.s64 + 4;
loc_82678790:
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
	// bne 0x82678790
	if (!ctx.cr0.eq) goto loc_82678790;
loc_826787AC:
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r3,r31,400
	ctx.r3.s64 = r31.s64 + 400;
	// bl 0x82681410
	ctx.lr = 0x826787B8;
	sub_82681410(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_826787BC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_826818D8) {
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
	ctx.lr = 0x826818E0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,28(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// li r27,2
	r27.s64 = 2;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// lwz r28,0(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r29,r8
	r29.u64 = ctx.r8.u64;
	// mr r30,r9
	r30.u64 = ctx.r9.u64;
	// lwz r9,220(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// lwz r8,212(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// stw r28,44(r31)
	REX_STORE_U32(r31.u32 + 44, r28.u32);
	// lhz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// sth r11,42(r31)
	REX_STORE_U16(r31.u32 + 42, ctx.r11.u16);
	// sth r27,40(r31)
	REX_STORE_U16(r31.u32 + 40, r27.u16);
	// bl 0x82681098
	ctx.lr = 0x82681924;
	sub_82681098(ctx, base);
	// stw r3,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82681948
	if (ctx.cr6.eq) goto loc_82681948;
	// stw r30,32(r31)
	REX_STORE_U32(r31.u32 + 32, r30.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,36(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 36);
	// bl 0x826a1e70
	ctx.lr = 0x82681944;
	sub_826A1E70(ctx, base);
	// b 0x82681950
	goto loc_82681950;
loc_82681948:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
loc_82681950:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_826837A0) {
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
	ctx.lr = 0x826837A8;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// bl 0x82683300
	ctx.lr = 0x826837C0;
	sub_82683300(ctx, base);
	// li r24,0
	r24.s64 = 0;
	// b 0x826839a0
	goto loc_826839A0;
loc_826837C8:
	// oris r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 268435456;
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r11.u32);
	// bl 0x82687280
	ctx.lr = 0x826837D8;
	sub_82687280(ctx, base);
	// stw r3,4(r26)
	REX_STORE_U32(r26.u32 + 4, ctx.r3.u32);
	// lbz r10,18(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 18);
	// mr r28,r24
	r28.u64 = r24.u64;
	// lbz r11,21(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 21);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// mulli r11,r11,24
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(24));
	// addi r30,r3,4
	r30.s64 = ctx.r3.s64 + 4;
	// rlwinm. r10,r10,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subf r27,r11,r3
	r27.u64 = ctx.r3.u64 - ctx.r11.u64;
	// beq 0x82683840
	if (ctx.cr0.eq) goto loc_82683840;
	// subf r11,r27,r3
	ctx.r11.u64 = ctx.r3.u64 - r27.u64;
	// ld r10,816(r27)
	ctx.r10.u64 = REX_LOAD_U64(r27.u32 + 816);
	// li r9,24
	ctx.r9.s64 = 24;
	// addi r8,r11,-48
	ctx.r8.s64 = ctx.r11.s64 + -48;
	// rldicr r11,r10,5,58
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u64, 5) & 0xFFFFFFFFFFFFFFE0;
	// divw r10,r8,r9
	ctx.r10.u64 = uint32_t((ctx.r9.s32 && !(ctx.r8.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r8.s32 / ctx.r9.s32 : 0);
	// li r28,2
	r28.s64 = 2;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r11,72(r31)
	REX_STORE_U64(r31.u32 + 72, ctx.r11.u64);
	// lbz r11,14(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 14);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82683840
	if (ctx.cr0.eq) goto loc_82683840;
	// lhz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,80(r31)
	REX_STORE_U16(r31.u32 + 80, ctx.r11.u16);
loc_82683840:
	// lbz r11,14(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 14);
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82683864
	if (ctx.cr0.eq) goto loc_82683864;
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ori r28,r28,1
	r28.u64 = r28.u64 | 1;
	// bne 0x82683864
	if (!ctx.cr0.eq) goto loc_82683864;
	// lhz r11,82(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 82);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,82(r31)
	REX_STORE_U16(r31.u32 + 82, ctx.r11.u16);
loc_82683864:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82683874
	if (ctx.cr6.eq) goto loc_82683874;
	// ori r28,r28,4
	r28.u64 = r28.u64 | 4;
loc_82683874:
	// lbz r11,15(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 15);
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// bne cr6,0x826838e8
	if (!ctx.cr6.eq) goto loc_826838E8;
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// lhz r29,8(r30)
	r29.u64 = REX_LOAD_U16(r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82683a00
	if (ctx.cr6.eq) goto loc_82683A00;
	// lbz r10,14(r30)
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + 14);
	// rlwinm. r10,r10,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82683a00
	if (ctx.cr0.eq) goto loc_82683A00;
	// lwz r10,88(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 88);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826838c0
	if (ctx.cr6.eq) goto loc_826838C0;
	// lwz r9,92(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 92);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x826a1e70
	ctx.lr = 0x826838C0;
	sub_826A1E70(ctx, base);
loc_826838C0:
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// subf. r11,r29,r11
	ctx.r11.u64 = ctx.r11.u64 - r29.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r11.u32);
	// bne 0x82683974
	if (!ctx.cr0.eq) goto loc_82683974;
	// lwz r5,88(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 88);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82683974
	if (ctx.cr6.eq) goto loc_82683974;
	// lwz r6,92(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 92);
	// ori r7,r28,8
	ctx.r7.u64 = r28.u64 | 8;
	// b 0x82683a1c
	goto loc_82683A1C;
loc_826838E8:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82683a2c
	if (ctx.cr6.eq) goto loc_82683A2C;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82683aa8
	if (ctx.cr6.eq) goto loc_82683AA8;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x8268396c
	if (!ctx.cr6.eq) goto loc_8268396C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lhz r5,8(r30)
	ctx.r5.u64 = REX_LOAD_U16(r30.u32 + 8);
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x82687250
	ctx.lr = 0x82683910;
	sub_82687250(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 100);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,6
	ctx.r3.s64 = 6;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lhz r9,8(r30)
	ctx.r9.u64 = REX_LOAD_U16(r30.u32 + 8);
	// stw r11,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r11.u32);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// addi r30,r9,-4
	r30.s64 = ctx.r9.s64 + -4;
	// lwz r4,0(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r4,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r4.u32);
	// stw r4,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r4.u32);
	// bl 0x8265d838
	ctx.lr = 0x82683940;
	sub_8265D838(ctx, base);
	// stw r3,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8268395c
	if (ctx.cr0.eq) goto loc_8268395C;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// bl 0x826a1e70
	ctx.lr = 0x8268395C;
	sub_826A1E70(ctx, base);
loc_8268395C:
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// subf r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - r30.u64;
	// stw r11,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r11.u32);
	// b 0x82683974
	goto loc_82683974;
loc_8268396C:
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x82683ae4
	if (!ctx.cr6.eq) goto loc_82683AE4;
loc_82683974:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r4,4(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 4);
	// bl 0x82681598
	ctx.lr = 0x82683984;
	sub_82681598(ctx, base);
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// rlwinm r11,r11,0,4,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFEFFFFFFF;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r11.u32);
	// stw r24,4(r26)
	REX_STORE_U32(r26.u32 + 4, r24.u32);
	// bl 0x82683300
	ctx.lr = 0x826839A0;
	sub_82683300(ctx, base);
loc_826839A0:
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// cmpldi cr6,r3,0
	ctx.cr6.compare<uint64_t>(ctx.r3.u64, 0, ctx.xer);
	// bne cr6,0x826837c8
	if (!ctx.cr6.eq) goto loc_826837C8;
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826839c0
	if (!ctx.cr0.eq) goto loc_826839C0;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
loc_826839B8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf8
	return;
loc_826839C0:
	// addi r3,r31,48
	ctx.r3.s64 = r31.s64 + 48;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x82687630
	ctx.lr = 0x826839CC;
	sub_82687630(ctx, base);
	// addi r3,r31,60
	ctx.r3.s64 = r31.s64 + 60;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x82687630
	ctx.lr = 0x826839D8;
	sub_82687630(ctx, base);
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// stw r24,100(r31)
	REX_STORE_U32(r31.u32 + 100, r24.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// oris r11,r11,20480
	ctx.r11.u64 = ctx.r11.u64 | 1342177280;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r11.u32);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82683168
	ctx.lr = 0x826839FC;
	sub_82683168(ctx, base);
	// b 0x82683adc
	goto loc_82683ADC;
loc_82683A00:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82683a10
	if (ctx.cr6.eq) goto loc_82683A10;
	// lwz r5,0(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 0);
	// b 0x82683a14
	goto loc_82683A14;
loc_82683A10:
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
loc_82683A14:
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
loc_82683A1C:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826834e8
	ctx.lr = 0x82683A28;
	sub_826834E8(ctx, base);
	// b 0x82683adc
	goto loc_82683ADC;
loc_82683A2C:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lhz r5,8(r30)
	ctx.r5.u64 = REX_LOAD_U16(r30.u32 + 8);
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x82687208
	ctx.lr = 0x82683A3C;
	sub_82687208(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r10,r11,7
	ctx.r10.s64 = ctx.r11.s64 + 7;
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rlwinm. r9,r9,0,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r11,3(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 3);
	// beq 0x82683a58
	if (ctx.cr0.eq) goto loc_82683A58;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
loc_82683A58:
	// li r8,32
	ctx.r8.s64 = 32;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r8,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r8.u32);
	// stw r9,4(r25)
	REX_STORE_U32(r25.u32 + 4, ctx.r9.u32);
	// subfic r9,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r9,16(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// stw r9,8(r25)
	REX_STORE_U32(r25.u32 + 8, ctx.r9.u32);
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r9,12(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// stw r9,12(r25)
	REX_STORE_U32(r25.u32 + 12, ctx.r9.u32);
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 16);
	// stw r9,16(r25)
	REX_STORE_U32(r25.u32 + 16, ctx.r9.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r9,20(r25)
	REX_STORE_U32(r25.u32 + 20, ctx.r9.u32);
	// stw r10,24(r25)
	REX_STORE_U32(r25.u32 + 24, ctx.r10.u32);
	// stw r11,28(r25)
	REX_STORE_U32(r25.u32 + 28, ctx.r11.u32);
	// b 0x82683adc
	goto loc_82683ADC;
loc_82683AA8:
	// lhz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 8);
	// addic. r6,r11,-6
	ctx.xer.ca = ctx.r11.u32 > 5;
	ctx.r6.s64 = ctx.r11.s64 + -6;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x82683ac0
	if (ctx.cr0.eq) goto loc_82683AC0;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r5,r11,6
	ctx.r5.s64 = ctx.r11.s64 + 6;
	// b 0x82683ac4
	goto loc_82683AC4;
loc_82683AC0:
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
loc_82683AC4:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82683168
	ctx.lr = 0x82683AD0;
	sub_82683168(ctx, base);
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// oris r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 1073741824;
	// stw r11,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r11.u32);
loc_82683ADC:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826839b8
	goto loc_826839B8;
loc_82683AE4:
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// rlwinm r11,r11,0,4,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFEFFFFFFF;
	// stw r11,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r11.u32);
}

DEFINE_REX_FUNC(sub_8269B078) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8269B080;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8269b09c
	if (!ctx.cr6.eq) goto loc_8269B09C;
	// li r3,87
	ctx.r3.s64 = 87;
	// b 0x8269b198
	goto loc_8269B198;
loc_8269B09C:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82699a50
	ctx.lr = 0x8269B0AC;
	sub_82699A50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8269b198
	if (!ctx.cr0.eq) goto loc_8269B198;
	// lwz r30,84(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r6,3
	ctx.r6.s64 = 3;
	// lhz r28,80(r1)
	r28.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82699af8
	ctx.lr = 0x8269B0D0;
	sub_82699AF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8269b198
	if (!ctx.cr0.eq) goto loc_8269B198;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8269ad98
	ctx.lr = 0x8269B0E8;
	sub_8269AD98(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8269b198
	if (!ctx.cr0.eq) goto loc_8269B198;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// li r8,16
	ctx.r8.s64 = 16;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// lis r7,20480
	ctx.r7.s64 = 1342177280;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// cmplw cr6,r30,r7
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r7.u32, ctx.xer);
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// sth r10,4(r31)
	REX_STORE_U16(r31.u32 + 4, ctx.r10.u16);
	// sth r10,6(r31)
	REX_STORE_U16(r31.u32 + 6, ctx.r10.u16);
	// stw r9,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// sth r8,12(r31)
	REX_STORE_U16(r31.u32 + 12, ctx.r8.u16);
	// beq cr6,0x8269b158
	if (ctx.cr6.eq) goto loc_8269B158;
	// lis r10,24576
	ctx.r10.s64 = 1610612736;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8269b144
	if (ctx.cr6.eq) goto loc_8269B144;
	// li r3,1167
	ctx.r3.s64 = 1167;
	// b 0x8269b198
	goto loc_8269B198;
loc_8269B144:
	// li r10,1000
	ctx.r10.s64 = 1000;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// li r11,255
	ctx.r11.s64 = 255;
	// sth r10,14(r31)
	REX_STORE_U16(r31.u32 + 14, ctx.r10.u16);
	// b 0x8269b190
	goto loc_8269B190;
loc_8269B158:
	// li r11,9
	ctx.r11.s64 = 9;
	// sth r28,90(r1)
	REX_STORE_U16(ctx.r1.u32 + 90, r28.u16);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// sth r11,88(r1)
	REX_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
	// bl 0x82794294
	ctx.lr = 0x8269B16C;
	__imp__RmcDeviceRequest(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8269b17c
	if (!ctx.cr0.lt) goto loc_8269B17C;
	// bl 0x82793b74
	ctx.lr = 0x8269B178;
	__imp__RtlNtStatusToDosError(ctx, base);
	// b 0x8269b198
	goto loc_8269B198;
loc_8269B17C:
	// li r10,7
	ctx.r10.s64 = 7;
	// lbz r11,98(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 98);
	// li r9,8000
	ctx.r9.s64 = 8000;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// sth r9,14(r31)
	REX_STORE_U16(r31.u32 + 14, ctx.r9.u16);
loc_8269B190:
	// stb r11,16(r31)
	REX_STORE_U8(r31.u32 + 16, ctx.r11.u8);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8269B198:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8269F580) {
	REX_FUNC_PROLOGUE();
	// stfd f1,16(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 16, ctx.f1.u64);
	// lhz r11,16(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 16);
	// rlwinm. r11,r11,0,17,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7FF0;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8269f5a8
	if (!ctx.cr0.eq) goto loc_8269F5A8;
	// lwz r11,16(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 16);
	// clrlwi. r11,r11,12
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8269f5e4
	if (!ctx.cr0.eq) goto loc_8269F5E4;
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8269f5e4
	if (!ctx.cr6.eq) goto loc_8269F5E4;
loc_8269F5A8:
	// fctid f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvtsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bne cr6,0x8269f5e4
	if (!ctx.cr6.eq) goto loc_8269F5E4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f0,32424(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 32424);
	// fmul f0,f1,f0
	ctx.f0.f64 = ctx.f1.f64 * ctx.f0.f64;
	// fctid f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvtsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x8269f5dc
	if (!ctx.cr6.eq) goto loc_8269F5DC;
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_8269F5DC:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8269F5E4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(__restgprlr_23) {
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

DEFINE_REX_FUNC(__savefpr_27) {
	REX_FUNC_PROLOGUE();
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	// stfd f27,-40(r12)
	ctx.fpscr.disableFlushMode();
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

DEFINE_REX_FUNC(sub_826A2E60) {
	REX_FUNC_PROLOGUE();
	// addi r0,r5,1
	ctx.r0.s64 = ctx.r5.s64 + 1;
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// ori r6,r3,0
	ctx.r6.u64 = ctx.r3.u64 | 0;
	// b 0x826a2e7c
	goto loc_826A2E7C;
loc_826A2E70:
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// stb r4,0(r6)
	REX_STORE_U8(ctx.r6.u32 + 0, ctx.r4.u8);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
loc_826A2E7C:
	// andi. r0,r6,3
	ctx.r0.u64 = ctx.r6.u64 & 3;
	ctx.cr0.compare<int32_t>(ctx.r0.s32, 0, ctx.xer);
	// bdnzf eq,0x826a2e70
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0 && !ctx.cr0.eq) goto loc_826A2E70;
	// rlwimi r4,r4,8,16,23
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFF00) | (ctx.r4.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwinm. r0,r5,28,4,31
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 28) & 0xFFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r0.s32, 0, ctx.xer);
	// rlwimi r4,r4,16,0,15
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0xFFFF0000) | (ctx.r4.u64 & 0xFFFFFFFF0000FFFF);
	// beq+ 0x826a2eb0
	if (ctx.cr0.eq) goto loc_826A2EB0;
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
loc_826A2E98:
	// stw r4,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r4.u32);
	// stw r4,4(r6)
	REX_STORE_U32(ctx.r6.u32 + 4, ctx.r4.u32);
	// stw r4,8(r6)
	REX_STORE_U32(ctx.r6.u32 + 8, ctx.r4.u32);
	// stw r4,12(r6)
	REX_STORE_U32(ctx.r6.u32 + 12, ctx.r4.u32);
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// bdnz+ 0x826a2e98
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826A2E98;
loc_826A2EB0:
	// rlwinm. r0,r5,30,30,31
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r0.s32, 0, ctx.xer);
	// beq- 0x826a2edc
	if (ctx.cr0.eq) goto loc_826A2EDC;
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// stw r4,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r4.u32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// bdz- 0x826a2edc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_826A2EDC;
	// stw r4,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r4.u32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// bdz- 0x826a2edc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_826A2EDC;
	// stw r4,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r4.u32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
loc_826A2EDC:
	// andi. r0,r5,3
	ctx.r0.u64 = ctx.r5.u64 & 3;
	ctx.cr0.compare<int32_t>(ctx.r0.s32, 0, ctx.xer);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// beqlr+ 
	if (ctx.cr0.eq) return;
	// stb r4,0(r6)
	REX_STORE_U8(ctx.r6.u32 + 0, ctx.r4.u8);
	// bdzlr- 
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) return;
	// stb r4,1(r6)
	REX_STORE_U8(ctx.r6.u32 + 1, ctx.r4.u8);
	// bdzlr- 
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) return;
	// stb r4,2(r6)
	REX_STORE_U8(ctx.r6.u32 + 2, ctx.r4.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(__restvmx_17) {
	REX_FUNC_PROLOGUE();
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
	// li r11,-240
	ctx.r11.s64 = -240;
	// lvx v17,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v17.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-224
	ctx.r11.s64 = -224;
	// lvx v18,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v18.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-208
	ctx.r11.s64 = -208;
	// lvx v19,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v19.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-192
	ctx.r11.s64 = -192;
	// lvx v20,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v20.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-176
	ctx.r11.s64 = -176;
	// lvx v21,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v21.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-160
	ctx.r11.s64 = -160;
	// lvx v22,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v22.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-144
	ctx.r11.s64 = -144;
	// lvx v23,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v23.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-128
	ctx.r11.s64 = -128;
	// lvx v24,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-112
	ctx.r11.s64 = -112;
	// lvx v25,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v25.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-96
	ctx.r11.s64 = -96;
	// lvx v26,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-80
	ctx.r11.s64 = -80;
	// lvx v27,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-64
	ctx.r11.s64 = -64;
	// lvx v28,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// lvx v29,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
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

DEFINE_REX_FUNC(__restvmx_110) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(sub_826A96A8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,26472
	ctx.r11.s64 = ctx.r11.s64 + 26472;
	// lwzx r3,r10,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x827938b4
	__imp__RtlLeaveCriticalSection(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_826A9D14) {
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
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826b03f0
	ctx.lr = 0x826A9D34;
	sub_826B03F0(ctx, base);
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

DEFINE_REX_FUNC(sub_826AA800) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32119
	ctx.r11.s64 = -2104950784;
	// lwz r3,9440(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 9440);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826AAB00) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x826AAB08;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// lbz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// li r29,0
	r29.s64 = 0;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lwz r10,9476(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 9476);
	// b 0x826aab30
	goto loc_826AAB30;
loc_826AAB2C:
	// lbzu r11,1(r4)
	ea = 1 + ctx.r4.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r4.u32 = ea;
loc_826AAB30:
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// beq cr6,0x826aab2c
	if (ctx.cr6.eq) goto loc_826AAB2C;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,97
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 97, ctx.xer);
	// beq cr6,0x826aab80
	if (ctx.cr6.eq) goto loc_826AAB80;
	// cmplwi cr6,r11,114
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 114, ctx.xer);
	// beq cr6,0x826aab74
	if (ctx.cr6.eq) goto loc_826AAB74;
	// cmplwi cr6,r11,119
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 119, ctx.xer);
	// beq cr6,0x826aab6c
	if (ctx.cr6.eq) goto loc_826AAB6C;
loc_826AAB54:
	// bl 0x826a33d0
	ctx.lr = 0x826AAB58;
	sub_826A33D0(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8269cb20
	ctx.lr = 0x826AAB64;
	sub_8269CB20(ctx, base);
loc_826AAB64:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826aad30
	goto loc_826AAD30;
loc_826AAB6C:
	// li r9,769
	ctx.r9.s64 = 769;
	// b 0x826aab84
	goto loc_826AAB84;
loc_826AAB74:
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// ori r31,r10,1
	r31.u64 = ctx.r10.u64 | 1;
	// b 0x826aab88
	goto loc_826AAB88;
loc_826AAB80:
	// li r9,265
	ctx.r9.s64 = 265;
loc_826AAB84:
	// ori r31,r10,2
	r31.u64 = ctx.r10.u64 | 2;
loc_826AAB88:
	// li r8,1
	ctx.r8.s64 = 1;
	// b 0x826aacb8
	goto loc_826AACB8;
loc_826AAB90:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x826aacd0
	if (ctx.cr6.eq) goto loc_826AACD0;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,83
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 83, ctx.xer);
	// bgt cr6,0x826aac34
	if (ctx.cr6.gt) goto loc_826AAC34;
	// beq cr6,0x826aac20
	if (ctx.cr6.eq) goto loc_826AAC20;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// beq cr6,0x826aacb8
	if (ctx.cr6.eq) goto loc_826AACB8;
	// cmplwi cr6,r11,43
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 43, ctx.xer);
	// beq cr6,0x826aac04
	if (ctx.cr6.eq) goto loc_826AAC04;
	// cmplwi cr6,r11,44
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 44, ctx.xer);
	// beq cr6,0x826aacac
	if (ctx.cr6.eq) goto loc_826AACAC;
	// cmplwi cr6,r11,68
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 68, ctx.xer);
	// beq cr6,0x826aabf4
	if (ctx.cr6.eq) goto loc_826AABF4;
	// cmplwi cr6,r11,78
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 78, ctx.xer);
	// beq cr6,0x826aabec
	if (ctx.cr6.eq) goto loc_826AABEC;
	// cmplwi cr6,r11,82
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 82, ctx.xer);
	// bne cr6,0x826aab54
	if (!ctx.cr6.eq) goto loc_826AAB54;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x826aacac
	if (!ctx.cr6.eq) goto loc_826AACAC;
	// li r6,1
	ctx.r6.s64 = 1;
	// ori r9,r9,16
	ctx.r9.u64 = ctx.r9.u64 | 16;
	// b 0x826aacb8
	goto loc_826AACB8;
loc_826AABEC:
	// ori r9,r9,128
	ctx.r9.u64 = ctx.r9.u64 | 128;
	// b 0x826aacb8
	goto loc_826AACB8;
loc_826AABF4:
	// rlwinm. r11,r9,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826aacac
	if (!ctx.cr0.eq) goto loc_826AACAC;
	// ori r9,r9,64
	ctx.r9.u64 = ctx.r9.u64 | 64;
	// b 0x826aacb8
	goto loc_826AACB8;
loc_826AAC04:
	// rlwinm. r11,r9,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826aacac
	if (!ctx.cr0.eq) goto loc_826AACAC;
	// rlwinm r11,r9,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r10,r31,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFC;
	// ori r9,r11,2
	ctx.r9.u64 = ctx.r11.u64 | 2;
	// ori r31,r10,128
	r31.u64 = ctx.r10.u64 | 128;
	// b 0x826aacb8
	goto loc_826AACB8;
loc_826AAC20:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x826aacac
	if (!ctx.cr6.eq) goto loc_826AACAC;
	// li r6,1
	ctx.r6.s64 = 1;
	// ori r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 | 32;
	// b 0x826aacb8
	goto loc_826AACB8;
loc_826AAC34:
	// cmplwi cr6,r11,84
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 84, ctx.xer);
	// beq cr6,0x826aaca4
	if (ctx.cr6.eq) goto loc_826AACA4;
	// cmplwi cr6,r11,98
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 98, ctx.xer);
	// beq cr6,0x826aac94
	if (ctx.cr6.eq) goto loc_826AAC94;
	// cmplwi cr6,r11,99
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 99, ctx.xer);
	// beq cr6,0x826aac80
	if (ctx.cr6.eq) goto loc_826AAC80;
	// cmplwi cr6,r11,110
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 110, ctx.xer);
	// beq cr6,0x826aac6c
	if (ctx.cr6.eq) goto loc_826AAC6C;
	// cmplwi cr6,r11,116
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 116, ctx.xer);
	// bne cr6,0x826aab54
	if (!ctx.cr6.eq) goto loc_826AAB54;
	// rlwinm. r11,r9,0,16,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xC000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826aacac
	if (!ctx.cr0.eq) goto loc_826AACAC;
	// ori r9,r9,16384
	ctx.r9.u64 = ctx.r9.u64 | 16384;
	// b 0x826aacb8
	goto loc_826AACB8;
loc_826AAC6C:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x826aacac
	if (!ctx.cr6.eq) goto loc_826AACAC;
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwinm r31,r31,0,18,16
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFFBFFF;
	// b 0x826aacb8
	goto loc_826AACB8;
loc_826AAC80:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x826aacac
	if (!ctx.cr6.eq) goto loc_826AACAC;
	// li r7,1
	ctx.r7.s64 = 1;
	// ori r31,r31,16384
	r31.u64 = r31.u64 | 16384;
	// b 0x826aacb8
	goto loc_826AACB8;
loc_826AAC94:
	// rlwinm. r11,r9,0,16,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xC000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826aacac
	if (!ctx.cr0.eq) goto loc_826AACAC;
	// ori r9,r9,32768
	ctx.r9.u64 = ctx.r9.u64 | 32768;
	// b 0x826aacb8
	goto loc_826AACB8;
loc_826AACA4:
	// rlwinm. r11,r9,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826aacb4
	if (ctx.cr0.eq) goto loc_826AACB4;
loc_826AACAC:
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// b 0x826aacb8
	goto loc_826AACB8;
loc_826AACB4:
	// ori r9,r9,4096
	ctx.r9.u64 = ctx.r9.u64 | 4096;
loc_826AACB8:
	// lbzu r10,1(r4)
	ea = 1 + ctx.r4.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r4.u32 = ea;
	// extsb. r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826aab90
	if (!ctx.cr0.eq) goto loc_826AAB90;
	// b 0x826aacd0
	goto loc_826AACD0;
loc_826AACC8:
	// lbzu r11,1(r4)
	ea = 1 + ctx.r4.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r4.u32 = ea;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
loc_826AACD0:
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// beq cr6,0x826aacc8
	if (ctx.cr6.eq) goto loc_826AACC8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826aab54
	if (!ctx.cr6.eq) goto loc_826AAB54;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r7,384
	ctx.r7.s64 = 384;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826b11d8
	ctx.lr = 0x826AACF8;
	sub_826B11D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826aab64
	if (!ctx.cr0.eq) goto loc_826AAB64;
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,8932(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8932);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8932(r10)
	REX_STORE_U32(ctx.r10.u32 + 8932, ctx.r11.u32);
	// stw r31,12(r30)
	REX_STORE_U32(r30.u32 + 12, r31.u32);
	// stw r29,4(r30)
	REX_STORE_U32(r30.u32 + 4, r29.u32);
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
	// stw r29,8(r30)
	REX_STORE_U32(r30.u32 + 8, r29.u32);
	// stw r29,28(r30)
	REX_STORE_U32(r30.u32 + 28, r29.u32);
	// stw r9,16(r30)
	REX_STORE_U32(r30.u32 + 16, ctx.r9.u32);
loc_826AAD30:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_826BC358) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r10,r11,28840
	ctx.r10.s64 = ctx.r11.s64 + 28840;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x826bc158
	sub_826BC158(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_826BC9E0) {
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
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r3,568(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 568);
	// bl 0x826c6cf0
	ctx.lr = 0x826BCA14;
	sub_826C6CF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826bca5c
	if (ctx.cr6.lt) goto loc_826BCA5C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,572(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 572);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x826c6cf0
	ctx.lr = 0x826BCA2C;
	sub_826C6CF0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826bca50
	if (ctx.cr6.eq) goto loc_826BCA50;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826bca50
	if (ctx.cr6.eq) goto loc_826BCA50;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,572(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 572);
	// bl 0x826c6c70
	ctx.lr = 0x826BCA50;
	sub_826C6C70(ctx, base);
loc_826BCA50:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,568(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 568);
	// bl 0x826c6c70
	ctx.lr = 0x826BCA5C;
	sub_826C6C70(ctx, base);
loc_826BCA5C:
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

DEFINE_REX_FUNC(sub_826C1C30) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r11,60(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// lwz r10,52(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x826c1c74
	if (ctx.cr6.lt) goto loc_826C1C74;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r3,68
	ctx.r8.s64 = ctx.r3.s64 + 68;
	// stw r11,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
loc_826C1C54:
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
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r8
	ea = ctx.r8.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x826c1c54
	if (!ctx.cr0.eq) goto loc_826C1C54;
	// blr 
	return;
loc_826C1C74:
	// addi r11,r3,68
	ctx.r11.s64 = ctx.r3.s64 + 68;
loc_826C1C78:
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
	// bne 0x826c1c78
	if (!ctx.cr0.eq) goto loc_826C1C78;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826C6D18) {
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
loc_826C6D34:
	// lwzx r9,r9,r3
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x826c6d64
	if (!ctx.cr6.eq) goto loc_826C6D64;
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
	// blt cr6,0x826c6d34
	if (ctx.cr6.lt) goto loc_826C6D34;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
	// blr 
	return;
loc_826C6D64:
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

DEFINE_REX_FUNC(sub_826CA9E0) {
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
	ctx.lr = 0x826CA9E8;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// ld r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// clrldi r10,r5,32
	ctx.r10.u64 = ctx.r5.u64 & 0xFFFFFFFF;
	// lwz r9,232(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 232);
	// li r16,0
	r16.s64 = 0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// clrldi r10,r4,32
	ctx.r10.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// stw r16,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r16.u32);
	// addi r4,r11,24
	ctx.r4.s64 = ctx.r11.s64 + 24;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// add r11,r10,r4
	ctx.r11.u64 = ctx.r10.u64 + ctx.r4.u64;
	// mr r30,r16
	r30.u64 = r16.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r21,r11,-24
	r21.s64 = ctx.r11.s64 + -24;
	// bne cr6,0x826caef4
	if (!ctx.cr6.eq) goto loc_826CAEF4;
	// addi r31,r4,2
	r31.s64 = ctx.r4.s64 + 2;
	// lis r11,9356
	ctx.r11.s64 = 613154816;
	// cmpld cr6,r31,r21
	ctx.cr6.compare<uint64_t>(r31.u64, r21.u64, ctx.xer);
	// ori r17,r11,32768
	r17.u64 = ctx.r11.u64 | 32768;
	// ble cr6,0x826caa40
	if (!ctx.cr6.gt) goto loc_826CAA40;
loc_826CAA38:
	// li r24,6
	r24.s64 = 6;
	// b 0x826cae60
	goto loc_826CAE60;
loc_826CAA40:
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x826b9678
	ctx.lr = 0x826CAA50;
	sub_826B9678(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bne cr6,0x826cae5c
	if (!ctx.cr6.eq) goto loc_826CAE5C;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r29,r31
	r29.u64 = r31.u64;
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// lbz r8,1(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r10,r8,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// clrlwi r31,r7,16
	r31.u64 = ctx.r7.u32 & 0xFFFF;
	// mr r19,r31
	r19.u64 = r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x826caef4
	if (ctx.cr6.eq) goto loc_826CAEF4;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x823f02b8
	ctx.lr = 0x826CAA94;
	sub_823F02B8(ctx, base);
	// stw r3,232(r23)
	REX_STORE_U32(r23.u32 + 232, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x826caaa8
	if (!ctx.cr6.eq) goto loc_826CAAA8;
loc_826CAAA0:
	// li r24,5
	r24.s64 = 5;
	// b 0x826cae60
	goto loc_826CAE60;
loc_826CAAA8:
	// sth r31,0(r3)
	REX_STORE_U16(ctx.r3.u32 + 0, r31.u16);
	// rlwinm r11,r19,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// add r11,r19,r11
	ctx.r11.u64 = r19.u64 + ctx.r11.u64;
	// rlwinm r31,r11,2,0,29
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f02b8
	ctx.lr = 0x826CAAC4;
	sub_823F02B8(ctx, base);
	// lwz r10,232(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 232);
	// stw r3,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
	// lwz r9,232(r23)
	ctx.r9.u64 = REX_LOAD_U32(r23.u32 + 232);
	// lwz r3,4(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x826caae4
	if (!ctx.cr6.eq) goto loc_826CAAE4;
	// li r24,5
	r24.s64 = 5;
	// b 0x826cae60
	goto loc_826CAE60;
loc_826CAAE4:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826a2e60
	ctx.lr = 0x826CAAF0;
	sub_826A2E60(ctx, base);
	// lwz r11,232(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 232);
	// mr r31,r16
	r31.u64 = r16.u64;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(r19.u32, 0, ctx.xer);
	// lwz r22,4(r11)
	r22.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// beq cr6,0x826caef4
	if (ctx.cr6.eq) goto loc_826CAEF4;
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r18,1
	r18.s64 = 1;
	// ori r20,r11,65535
	r20.u64 = ctx.r11.u64 | 65535;
loc_826CAB10:
	// addi r30,r29,12
	r30.s64 = r29.s64 + 12;
	// cmpld cr6,r30,r21
	ctx.cr6.compare<uint64_t>(r30.u64, r21.u64, ctx.xer);
	// bgt cr6,0x826caa38
	if (ctx.cr6.gt) goto loc_826CAA38;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x826b9678
	ctx.lr = 0x826CAB30;
	sub_826B9678(ctx, base);
	// cmplwi cr6,r3,12
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 12, ctx.xer);
	// bne cr6,0x826cae5c
	if (!ctx.cr6.eq) goto loc_826CAE5C;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r10,r31,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0x3FFFC;
	// clrlwi r25,r31,16
	r25.u64 = r31.u32 & 0xFFFF;
	// std r30,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, r30.u64);
	// add r10,r25,r10
	ctx.r10.u64 = r25.u64 + ctx.r10.u64;
	// lbz r9,1(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// add r31,r10,r22
	r31.u64 = ctx.r10.u64 + r22.u64;
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r6,r31,4
	ctx.r6.s64 = r31.s64 + 4;
	// sthx r8,r10,r22
	REX_STORE_U16(ctx.r10.u32 + r22.u32, ctx.r8.u16);
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r5,2
	ctx.r11.s64 = ctx.r5.s64 + 2;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lbz r4,1(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r10,r4,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 8);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sth r3,2(r31)
	REX_STORE_U16(r31.u32 + 2, ctx.r3.u16);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r10,2
	ctx.r11.s64 = ctx.r10.s64 + 2;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lbz r9,1(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r10,r9,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sth r8,4(r31)
	REX_STORE_U16(r31.u32 + 4, ctx.r8.u16);
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r5,2
	ctx.r11.s64 = ctx.r5.s64 + 2;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lbz r4,1(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r10,r4,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 8);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sth r3,6(r31)
	REX_STORE_U16(r31.u32 + 6, ctx.r3.u16);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r10,2
	ctx.r11.s64 = ctx.r10.s64 + 2;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lbz r8,2(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r9,1(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r7,3(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// rotlwi r10,r7,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rlwinm r11,r5,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r4,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r3,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lhz r11,6(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 6);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x826cac5c
	if (ctx.cr6.gt) goto loc_826CAC5C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x826cac40
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_826CAC40;
	// bdzf 4*cr6+eq,0x826cac4c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_826CAC4C;
	// bne cr6,0x826cac34
	if (!ctx.cr6.eq) goto loc_826CAC34;
loc_826CAC34:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// b 0x826cac54
	goto loc_826CAC54;
loc_826CAC40:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// b 0x826cac54
	goto loc_826CAC54;
loc_826CAC4C:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
loc_826CAC54:
	// beq cr6,0x826cac5c
	if (ctx.cr6.eq) goto loc_826CAC5C;
	// sth r18,6(r31)
	REX_STORE_U16(r31.u32 + 6, r18.u16);
loc_826CAC5C:
	// addi r7,r31,12
	ctx.r7.s64 = r31.s64 + 12;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x826c8b80
	ctx.lr = 0x826CAC70;
	sub_826C8B80(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x826cae60
	if (!ctx.cr6.eq) goto loc_826CAE60;
	// lhz r11,6(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 6);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826cad14
	if (!ctx.cr6.eq) goto loc_826CAD14;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r29,r16
	r29.u64 = r16.u64;
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// ble cr6,0x826caca0
	if (!ctx.cr6.gt) goto loc_826CACA0;
	// subf r29,r20,r11
	r29.u64 = ctx.r11.u64 - r20.u64;
	// stw r20,8(r31)
	REX_STORE_U32(r31.u32 + 8, r20.u32);
loc_826CACA0:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r30,r31,16
	r30.s64 = r31.s64 + 16;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// sth r11,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x826c8b80
	ctx.lr = 0x826CACC4;
	sub_826C8B80(ctx, base);
	// lhz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// bne cr6,0x826cae60
	if (!ctx.cr6.eq) goto loc_826CAE60;
	// ld r8,88(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// clrldi r10,r29,32
	ctx.r10.u64 = r29.u64 & 0xFFFFFFFF;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// add r29,r10,r8
	r29.u64 = ctx.r10.u64 + ctx.r8.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826cae40
	if (ctx.cr6.eq) goto loc_826CAE40;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
loc_826CACFC:
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
	// bdnz 0x826cacfc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826CACFC;
	// b 0x826cae40
	goto loc_826CAE40;
loc_826CAD14:
	// lwz r27,8(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 8);
	// ld r26,88(r1)
	r26.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// add r11,r27,r26
	ctx.r11.u64 = r27.u64 + r26.u64;
	// cmpld cr6,r11,r21
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, r21.u64, ctx.xer);
	// bgt cr6,0x826caa38
	if (ctx.cr6.gt) goto loc_826CAA38;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823f02b8
	ctx.lr = 0x826CAD34;
	sub_823F02B8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// beq cr6,0x826caaa0
	if (ctx.cr6.eq) goto loc_826CAAA0;
	// mr r30,r16
	r30.u64 = r16.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x826cada0
	if (ctx.cr6.eq) goto loc_826CADA0;
loc_826CAD4C:
	// subf r28,r30,r27
	r28.u64 = r27.u64 - r30.u64;
	// cmplwi cr6,r28,128
	ctx.cr6.compare<uint32_t>(r28.u32, 128, ctx.xer);
	// ble cr6,0x826cad5c
	if (!ctx.cr6.gt) goto loc_826CAD5C;
	// li r28,128
	r28.s64 = 128;
loc_826CAD5C:
	// clrldi r11,r30,32
	ctx.r11.u64 = r30.u64 & 0xFFFFFFFF;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// add r4,r11,r26
	ctx.r4.u64 = ctx.r11.u64 + r26.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x826b9678
	ctx.lr = 0x826CAD74;
	sub_826B9678(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r28
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r28.u32, ctx.xer);
	// bne cr6,0x826cae5c
	if (!ctx.cr6.eq) goto loc_826CAE5C;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r3,r30,r11
	ctx.r3.u64 = r30.u64 + ctx.r11.u64;
	// bl 0x826a1e70
	ctx.lr = 0x826CAD94;
	sub_826A1E70(ctx, base);
	// add r30,r30,r29
	r30.u64 = r30.u64 + r29.u64;
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(r30.u32, r27.u32, ctx.xer);
	// blt cr6,0x826cad4c
	if (ctx.cr6.lt) goto loc_826CAD4C;
loc_826CADA0:
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(r30.u32, r27.u32, ctx.xer);
	// bne cr6,0x826cae5c
	if (!ctx.cr6.eq) goto loc_826CAE5C;
	// clrldi r11,r30,32
	ctx.r11.u64 = r30.u64 & 0xFFFFFFFF;
	// lhz r10,6(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 6);
	// add r29,r11,r26
	r29.u64 = ctx.r11.u64 + r26.u64;
	// addi r11,r10,-2
	ctx.r11.s64 = ctx.r10.s64 + -2;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x826cae40
	if (ctx.cr6.gt) goto loc_826CAE40;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x826cadec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_826CADEC;
	// bdzf 4*cr6+eq,0x826cae14
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_826CAE14;
	// bne cr6,0x826cadd4
	if (!ctx.cr6.eq) goto loc_826CADD4;
loc_826CADD4:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,1(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// stb r10,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r10.u8);
	// stb r9,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// b 0x826cae40
	goto loc_826CAE40;
loc_826CADEC:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,3(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r8,2(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r7,1(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// stb r10,3(r11)
	REX_STORE_U8(ctx.r11.u32 + 3, ctx.r10.u8);
	// stb r9,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// stb r8,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// stb r7,2(r11)
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// b 0x826cae40
	goto loc_826CAE40;
loc_826CAE14:
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 16);
	// mr r11,r16
	ctx.r11.u64 = r16.u64;
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
loc_826CAE24:
	// lbz r8,-1(r9)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + -1);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lbz r7,1(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// stbu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r8.u8);
	ctx.r10.u32 = ea;
	// stbu r7,-1(r9)
	ea = -1 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r7.u8);
	ctx.r9.u32 = ea;
	// blt cr6,0x826cae24
	if (ctx.cr6.lt) goto loc_826CAE24;
loc_826CAE40:
	// addi r11,r25,1
	ctx.r11.s64 = r25.s64 + 1;
	// clrlwi r31,r11,16
	r31.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r31,r19
	ctx.cr6.compare<uint32_t>(r31.u32, r19.u32, ctx.xer);
	// blt cr6,0x826cab10
	if (ctx.cr6.lt) goto loc_826CAB10;
loc_826CAE50:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1cd8
	return;
loc_826CAE5C:
	// li r24,3
	r24.s64 = 3;
loc_826CAE60:
	// lwz r11,232(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 232);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826cae50
	if (ctx.cr6.eq) goto loc_826CAE50;
	// lwz r29,4(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x826caed8
	if (ctx.cr6.eq) goto loc_826CAED8;
	// lhz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826caec8
	if (ctx.cr6.eq) goto loc_826CAEC8;
	// mr r31,r16
	r31.u64 = r16.u64;
loc_826CAE88:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// add r11,r31,r11
	ctx.r11.u64 = r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r29
	r30.u64 = ctx.r11.u64 + r29.u64;
	// lwz r3,12(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 12);
	// bl 0x823f0350
	ctx.lr = 0x826CAEA4;
	sub_823F0350(ctx, base);
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// lwz r3,16(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 16);
	// bl 0x823f0350
	ctx.lr = 0x826CAEB0;
	sub_823F0350(ctx, base);
	// lwz r9,232(r23)
	ctx.r9.u64 = REX_LOAD_U32(r23.u32 + 232);
	// addi r10,r31,1
	ctx.r10.s64 = r31.s64 + 1;
	// clrlwi r31,r10,16
	r31.u64 = ctx.r10.u32 & 0xFFFF;
	// lhz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + 0);
	// cmplw cr6,r31,r8
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x826cae88
	if (ctx.cr6.lt) goto loc_826CAE88;
loc_826CAEC8:
	// lwz r11,232(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 232);
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x823f0350
	ctx.lr = 0x826CAED8;
	sub_823F0350(ctx, base);
loc_826CAED8:
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// lwz r3,232(r23)
	ctx.r3.u64 = REX_LOAD_U32(r23.u32 + 232);
	// bl 0x823f0350
	ctx.lr = 0x826CAEE4;
	sub_823F0350(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// stw r16,232(r23)
	REX_STORE_U32(r23.u32 + 232, r16.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1cd8
	return;
loc_826CAEF4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1cd8
	return;
}

DEFINE_REX_FUNC(sub_826F32A0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r30{};
	PPCRegister r31{};
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lis r10,-32688
	ctx.r10.s64 = -2142240768;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r3,r10,3
	ctx.r3.u64 = ctx.r10.u64 | 3;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bne cr6,0x826f3414
	if (!ctx.cr6.eq) goto loc_826F3414;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lis r11,22358
	ctx.r11.s64 = 1465253888;
	// ori r9,r11,17201
	ctx.r9.u64 = ctx.r11.u64 | 17201;
	// lwz r11,20(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x826f3378
	if (ctx.cr6.eq) goto loc_826F3378;
	// lis r9,22349
	ctx.r9.s64 = 1464664064;
	// ori r8,r9,22081
	ctx.r8.u64 = ctx.r9.u64 | 22081;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x826f3378
	if (ctx.cr6.eq) goto loc_826F3378;
	// lis r9,22349
	ctx.r9.s64 = 1464664064;
	// ori r8,r9,22067
	ctx.r8.u64 = ctx.r9.u64 | 22067;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x826f3378
	if (ctx.cr6.eq) goto loc_826F3378;
	// lis r9,22349
	ctx.r9.s64 = 1464664064;
	// ori r8,r9,22066
	ctx.r8.u64 = ctx.r9.u64 | 22066;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x826f3378
	if (ctx.cr6.eq) goto loc_826F3378;
	// lis r9,22349
	ctx.r9.s64 = 1464664064;
	// ori r8,r9,22065
	ctx.r8.u64 = ctx.r9.u64 | 22065;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x826f3378
	if (ctx.cr6.eq) goto loc_826F3378;
	// lis r9,22358
	ctx.r9.s64 = 1465253888;
	// ori r8,r9,20530
	ctx.r8.u64 = ctx.r9.u64 | 20530;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x826f3378
	if (ctx.cr6.eq) goto loc_826F3378;
	// lis r9,22349
	ctx.r9.s64 = 1464664064;
	// ori r8,r9,22096
	ctx.r8.u64 = ctx.r9.u64 | 22096;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x826f3378
	if (ctx.cr6.eq) goto loc_826F3378;
	// lis r9,22349
	ctx.r9.s64 = 1464664064;
	// ori r8,r9,22098
	ctx.r8.u64 = ctx.r9.u64 | 22098;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x826f3378
	if (ctx.cr6.eq) goto loc_826F3378;
	// lis r9,19792
	ctx.r9.s64 = 1297088512;
	// ori r8,r9,13395
	ctx.r8.u64 = ctx.r9.u64 | 13395;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x826f3378
	if (ctx.cr6.eq) goto loc_826F3378;
	// lis r9,19792
	ctx.r9.s64 = 1297088512;
	// ori r8,r9,13363
	ctx.r8.u64 = ctx.r9.u64 | 13363;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x826f3378
	if (ctx.cr6.eq) goto loc_826F3378;
	// lis r9,19792
	ctx.r9.s64 = 1297088512;
	// ori r8,r9,13362
	ctx.r8.u64 = ctx.r9.u64 | 13362;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x826f3414
	if (!ctx.cr6.eq) goto loc_826F3414;
loc_826F3378:
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826f3414
	if (ctx.cr6.eq) goto loc_826F3414;
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826f3414
	if (ctx.cr6.eq) goto loc_826F3414;
	// lhz r11,18(r10)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + 18);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826f3414
	if (ctx.cr6.eq) goto loc_826F3414;
	// lis r11,-32145
	ctx.r11.s64 = -2106654720;
	// stw r5,36(r5)
	REX_STORE_U32(ctx.r5.u32 + 36, ctx.r5.u32);
	// lis r10,-32145
	ctx.r10.s64 = -2106654720;
	// addi r11,r11,12112
	ctx.r11.s64 = ctx.r11.s64 + 12112;
	// addi r10,r10,11280
	ctx.r10.s64 = ctx.r10.s64 + 11280;
	// lis r9,-32145
	ctx.r9.s64 = -2106654720;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lis r8,-32145
	ctx.r8.s64 = -2106654720;
	// stw r10,4(r5)
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r10.u32);
	// lis r7,-32145
	ctx.r7.s64 = -2106654720;
	// lis r6,-32229
	ctx.r6.s64 = -2112159744;
	// lis r4,-32229
	ctx.r4.s64 = -2112159744;
	// lis r31,-32157
	r31.s64 = -2107441152;
	// lis r30,-32145
	r30.s64 = -2106654720;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r9,r9,11456
	ctx.r9.s64 = ctx.r9.s64 + 11456;
	// addi r8,r8,11552
	ctx.r8.s64 = ctx.r8.s64 + 11552;
	// stw r3,32(r5)
	REX_STORE_U32(ctx.r5.u32 + 32, ctx.r3.u32);
	// addi r7,r7,11192
	ctx.r7.s64 = ctx.r7.s64 + 11192;
	// stw r9,8(r5)
	REX_STORE_U32(ctx.r5.u32 + 8, ctx.r9.u32);
	// addi r6,r6,-20880
	ctx.r6.s64 = ctx.r6.s64 + -20880;
	// stw r8,12(r5)
	REX_STORE_U32(ctx.r5.u32 + 12, ctx.r8.u32);
	// addi r4,r4,-20880
	ctx.r4.s64 = ctx.r4.s64 + -20880;
	// stw r7,16(r5)
	REX_STORE_U32(ctx.r5.u32 + 16, ctx.r7.u32);
	// addi r11,r31,-27128
	ctx.r11.s64 = r31.s64 + -27128;
	// stw r6,20(r5)
	REX_STORE_U32(ctx.r5.u32 + 20, ctx.r6.u32);
	// addi r10,r30,10488
	ctx.r10.s64 = r30.s64 + 10488;
	// stw r4,24(r5)
	REX_STORE_U32(ctx.r5.u32 + 24, ctx.r4.u32);
	// stw r11,28(r5)
	REX_STORE_U32(ctx.r5.u32 + 28, ctx.r11.u32);
	// stw r10,40(r5)
	REX_STORE_U32(ctx.r5.u32 + 40, ctx.r10.u32);
loc_826F3414:
	// ld r30,-16(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826FC8F0) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826fc938
	if (ctx.cr6.eq) goto loc_826FC938;
	// lwz r11,20696(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20696);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826fc938
	if (!ctx.cr6.eq) goto loc_826FC938;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823ecc50
	ctx.lr = 0x826FC920;
	sub_823ECC50(ctx, base);
	// ld r10,20672(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 20672);
	// ld r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// li r11,1
	ctx.r11.s64 = 1;
	// subf r8,r9,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r9.u64;
	// stw r11,20696(r31)
	REX_STORE_U32(r31.u32 + 20696, ctx.r11.u32);
	// std r8,20672(r31)
	REX_STORE_U64(r31.u32 + 20672, ctx.r8.u64);
loc_826FC938:
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

DEFINE_REX_FUNC(sub_82702BB0) {
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
	ctx.lr = 0x82702BB8;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	r28.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// sth r28,0(r4)
	REX_STORE_U16(ctx.r4.u32 + 0, r28.u16);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bne cr6,0x82702bf4
	if (!ctx.cr6.eq) goto loc_82702BF4;
	// li r3,7
	ctx.r3.s64 = 7;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1d00
	return;
loc_82702BF4:
	// lwz r11,15584(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15584);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x82702c0c
	if (!ctx.cr6.gt) goto loc_82702C0C;
	// lwz r11,3444(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3444);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,3444(r31)
	REX_STORE_U32(r31.u32 + 3444, ctx.r11.u32);
loc_82702C0C:
	// lhz r11,3708(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 3708);
	// stw r28,15584(r31)
	REX_STORE_U32(r31.u32 + 15584, r28.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82702c3c
	if (ctx.cr6.eq) goto loc_82702C3C;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,15536(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 15536);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,15528(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 15528);
	// lhz r5,15524(r31)
	ctx.r5.u64 = REX_LOAD_U16(r31.u32 + 15524);
	// lwz r4,15520(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 15520);
	// bl 0x82701cf8
	ctx.lr = 0x82702C38;
	sub_82701CF8(ctx, base);
	// sth r28,3708(r31)
	REX_STORE_U16(r31.u32 + 3708, r28.u16);
loc_82702C3C:
	// lwz r11,15588(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15588);
	// rlwinm r10,r11,28,0,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xF0000000;
	// srawi. r11,r10,28
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFFFFF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 28;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x82702c58
	if (ctx.cr0.lt) goto loc_82702C58;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bgt cr6,0x82702c58
	if (ctx.cr6.gt) goto loc_82702C58;
	// stw r11,3668(r31)
	REX_STORE_U32(r31.u32 + 3668, ctx.r11.u32);
loc_82702C58:
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// lwz r3,3364(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 3364);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r28
	r30.u64 = r28.u64;
	// bl 0x82716b40
	ctx.lr = 0x82702C78;
	sub_82716B40(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82702d70
	if (ctx.cr6.eq) goto loc_82702D70;
loc_82702C84:
	// lwz r11,15504(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15504);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x82702cdc
	if (!ctx.cr6.eq) goto loc_82702CDC;
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r29,r30,r5
	r29.u64 = r30.u64 + ctx.r5.u64;
	// cmplwi cr6,r29,64
	ctx.cr6.compare<uint32_t>(r29.u32, 64, ctx.xer);
	// bge cr6,0x82702ce0
	if (!ctx.cr6.lt) goto loc_82702CE0;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r3,r30,r11
	ctx.r3.u64 = r30.u64 + ctx.r11.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82702CB0;
	sub_826A1E70(ctx, base);
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r3,3364(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 3364);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r29
	r30.u64 = r29.u64;
	// bl 0x82716b40
	ctx.lr = 0x82702CD0;
	sub_82716B40(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82702c84
	if (!ctx.cr6.eq) goto loc_82702C84;
loc_82702CDC:
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_82702CE0:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x82702d74
	if (ctx.cr6.eq) goto loc_82702D74;
	// lwz r11,24176(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24176);
	// add r29,r30,r5
	r29.u64 = r30.u64 + ctx.r5.u64;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82702d34
	if (!ctx.cr6.gt) goto loc_82702D34;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82702d08
	if (ctx.cr6.eq) goto loc_82702D08;
	// lwz r3,24180(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24180);
	// bl 0x8271b1a0
	ctx.lr = 0x82702D08;
	sub_8271B1A0(ctx, base);
loc_82702D08:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8271b190
	ctx.lr = 0x82702D14;
	sub_8271B190(ctx, base);
	// stw r3,24180(r31)
	REX_STORE_U32(r31.u32 + 24180, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82702d30
	if (!ctx.cr6.eq) goto loc_82702D30;
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r28,24176(r31)
	REX_STORE_U32(r31.u32 + 24176, r28.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1d00
	return;
loc_82702D30:
	// stw r29,24176(r31)
	REX_STORE_U32(r31.u32 + 24176, r29.u32);
loc_82702D34:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,24180(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24180);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x826a1e70
	ctx.lr = 0x82702D44;
	sub_826A1E70(ctx, base);
	// lwz r11,24180(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24180);
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + r30.u64;
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x826a1e70
	ctx.lr = 0x82702D58;
	sub_826A1E70(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,24180(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24180);
	// add r5,r30,r11
	ctx.r5.u64 = r30.u64 + ctx.r11.u64;
	// stw r5,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// b 0x82702d74
	goto loc_82702D74;
loc_82702D70:
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_82702D74:
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r6,88(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ff418
	ctx.lr = 0x82702D90;
	sub_826FF418(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8271AB38) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// stw r4,404(r3)
	REX_STORE_U32(ctx.r3.u32 + 404, ctx.r4.u32);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,27072
	ctx.r11.s64 = ctx.r11.s64 + 27072;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r11,-16
	ctx.r8.s64 = ctx.r11.s64 + -16;
	// lwzx r7,r10,r8
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// stw r7,408(r3)
	REX_STORE_U32(ctx.r3.u32 + 408, ctx.r7.u32);
	// lwzx r6,r10,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rotlwi r11,r7,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// rotlwi r10,r6,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r6,412(r3)
	REX_STORE_U32(ctx.r3.u32 + 412, ctx.r6.u32);
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// slw r11,r9,r5
	ctx.r11.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r5.u8 & 0x3F));
	// slw r10,r9,r4
	ctx.r10.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r4.u8 & 0x3F));
	// stw r11,416(r3)
	REX_STORE_U32(ctx.r3.u32 + 416, ctx.r11.u32);
	// stw r10,420(r3)
	REX_STORE_U32(ctx.r3.u32 + 420, ctx.r10.u32);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// stw r9,424(r3)
	REX_STORE_U32(ctx.r3.u32 + 424, ctx.r9.u32);
	// stw r8,428(r3)
	REX_STORE_U32(ctx.r3.u32 + 428, ctx.r8.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8271FB00) {
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
	ctx.lr = 0x8271FB08;
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r16,r9
	r16.u64 = ctx.r9.u64;
	// lwz r10,14860(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 14860);
	// lwz r9,14856(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 14856);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r11,r11,27088
	ctx.r11.s64 = ctx.r11.s64 + 27088;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r22,r8
	r22.u64 = ctx.r8.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r8,r11,24
	ctx.r8.s64 = ctx.r11.s64 + 24;
	// mulli r10,r10,84
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(84));
	// lwzx r18,r7,r11
	r18.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// lwzx r19,r7,r8
	r19.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// add r11,r10,r28
	ctx.r11.u64 = ctx.r10.u64 + r28.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r26,14864(r11)
	r26.u64 = REX_LOAD_U32(ctx.r11.u32 + 14864);
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// lwz r25,14872(r11)
	r25.u64 = REX_LOAD_U32(ctx.r11.u32 + 14872);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// lwz r23,14916(r11)
	r23.u64 = REX_LOAD_U32(ctx.r11.u32 + 14916);
	// mr r24,r27
	r24.u64 = r27.u64;
	// lwz r14,14920(r11)
	r14.u64 = REX_LOAD_U32(ctx.r11.u32 + 14920);
	// mr r21,r22
	r21.u64 = r22.u64;
	// mr r15,r16
	r15.u64 = r16.u64;
	// cmpwi cr6,r19,2
	ctx.cr6.compare<int32_t>(r19.s32, 2, ctx.xer);
	// bne cr6,0x8271fb8c
	if (!ctx.cr6.eq) goto loc_8271FB8C;
	// addi r11,r26,31
	ctx.r11.s64 = r26.s64 + 31;
	// rlwinm r26,r11,0,0,26
	r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
loc_8271FB8C:
	// cmpwi cr6,r18,2
	ctx.cr6.compare<int32_t>(r18.s32, 2, ctx.xer);
	// bne cr6,0x8271fb9c
	if (!ctx.cr6.eq) goto loc_8271FB9C;
	// addi r11,r25,31
	ctx.r11.s64 = r25.s64 + 31;
	// rlwinm r25,r11,0,0,26
	r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
loc_8271FB9C:
	// lwz r11,3948(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 3948);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8271fbb4
	if (ctx.cr6.eq) goto loc_8271FBB4;
	// srawi r20,r26,2
	ctx.xer.ca = (r26.s32 < 0) & ((r26.u32 & 0x3) != 0);
	r20.s64 = r26.s32 >> 2;
	// mr r17,r25
	r17.u64 = r25.u64;
	// b 0x8271fbbc
	goto loc_8271FBBC;
loc_8271FBB4:
	// srawi r20,r26,1
	ctx.xer.ca = (r26.s32 < 0) & ((r26.u32 & 0x1) != 0);
	r20.s64 = r26.s32 >> 1;
	// srawi r17,r25,1
	ctx.xer.ca = (r25.s32 < 0) & ((r25.u32 & 0x1) != 0);
	r17.s64 = r25.s32 >> 1;
loc_8271FBBC:
	// cmpwi cr6,r19,2
	ctx.cr6.compare<int32_t>(r19.s32, 2, ctx.xer);
	// bne cr6,0x8271fc34
	if (!ctx.cr6.eq) goto loc_8271FC34;
	// lwz r9,15844(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 15844);
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// lwz r11,15220(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 15220);
	// mr r8,r16
	ctx.r8.u64 = r16.u64;
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// stw r14,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r14.u32);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// stw r23,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r23.u32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// stw r17,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r17.u32);
	// stw r9,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// stw r11,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// stw r20,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r20.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271FC10;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r18,2
	ctx.cr6.compare<int32_t>(r18.s32, 2, ctx.xer);
	// bne cr6,0x8271fc74
	if (!ctx.cr6.eq) goto loc_8271FC74;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r5,r16
	ctx.r5.u64 = r16.u64;
	// mr r24,r31
	r24.u64 = r31.u64;
	// mr r21,r30
	r21.u64 = r30.u64;
	// mr r15,r29
	r15.u64 = r29.u64;
	// b 0x8271fc3c
	goto loc_8271FC3C;
loc_8271FC34:
	// cmpwi cr6,r18,2
	ctx.cr6.compare<int32_t>(r18.s32, 2, ctx.xer);
	// bne cr6,0x8271fc74
	if (!ctx.cr6.eq) goto loc_8271FC74;
loc_8271FC3C:
	// stw r20,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r20.u32);
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// lwz r11,15220(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 15220);
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// lwz r31,15848(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 15848);
	// mr r8,r15
	ctx.r8.u64 = r15.u64;
	// mr r7,r21
	ctx.r7.u64 = r21.u64;
	// stw r14,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r14.u32);
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// stw r23,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r23.u32);
	// stw r17,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r17.u32);
	// stw r11,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
	// bctrl 
	ctx.lr = 0x8271FC74;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8271FC74:
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// ble cr6,0x8271fcc4
	if (!ctx.cr6.gt) goto loc_8271FCC4;
	// mullw r7,r18,r23
	ctx.r7.s64 = int64_t(r18.s32) * int64_t(r23.s32);
loc_8271FC88:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// ble cr6,0x8271fcac
	if (!ctx.cr6.gt) goto loc_8271FCAC;
	// addi r9,r27,-1
	ctx.r9.s64 = r27.s64 + -1;
loc_8271FC98:
	// lbzx r6,r11,r10
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// add r11,r11,r19
	ctx.r11.u64 = ctx.r11.u64 + r19.u64;
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r26.s32, ctx.xer);
	// stbu r6,1(r9)
	ea = 1 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r6.u8);
	ctx.r9.u32 = ea;
	// blt cr6,0x8271fc98
	if (ctx.cr6.lt) goto loc_8271FC98;
loc_8271FCAC:
	// lwz r11,204(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 204);
	// add r8,r8,r18
	ctx.r8.u64 = ctx.r8.u64 + r18.u64;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r27,r11,r27
	r27.u64 = ctx.r11.u64 + r27.u64;
	// cmpw cr6,r8,r25
	ctx.cr6.compare<int32_t>(ctx.r8.s32, r25.s32, ctx.xer);
	// blt cr6,0x8271fc88
	if (ctx.cr6.lt) goto loc_8271FC88;
loc_8271FCC4:
	// mr r10,r21
	ctx.r10.u64 = r21.u64;
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(r17.s32, 0, ctx.xer);
	// ble cr6,0x8271fd18
	if (!ctx.cr6.gt) goto loc_8271FD18;
	// mullw r6,r18,r14
	ctx.r6.s64 = int64_t(r18.s32) * int64_t(r14.s32);
loc_8271FCDC:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// ble cr6,0x8271fd00
	if (!ctx.cr6.gt) goto loc_8271FD00;
	// addi r9,r7,-1
	ctx.r9.s64 = ctx.r7.s64 + -1;
loc_8271FCEC:
	// lbzx r5,r11,r10
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// add r11,r11,r19
	ctx.r11.u64 = ctx.r11.u64 + r19.u64;
	// cmpw cr6,r11,r20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r20.s32, ctx.xer);
	// stbu r5,1(r9)
	ea = 1 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r5.u8);
	ctx.r9.u32 = ea;
	// blt cr6,0x8271fcec
	if (ctx.cr6.lt) goto loc_8271FCEC;
loc_8271FD00:
	// lwz r11,208(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 208);
	// add r8,r8,r18
	ctx.r8.u64 = ctx.r8.u64 + r18.u64;
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// cmpw cr6,r8,r17
	ctx.cr6.compare<int32_t>(ctx.r8.s32, r17.s32, ctx.xer);
	// blt cr6,0x8271fcdc
	if (ctx.cr6.lt) goto loc_8271FCDC;
loc_8271FD18:
	// mr r10,r15
	ctx.r10.u64 = r15.u64;
	// mr r7,r16
	ctx.r7.u64 = r16.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(r17.s32, 0, ctx.xer);
	// ble cr6,0x8271fd6c
	if (!ctx.cr6.gt) goto loc_8271FD6C;
	// mullw r6,r18,r14
	ctx.r6.s64 = int64_t(r18.s32) * int64_t(r14.s32);
loc_8271FD30:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// ble cr6,0x8271fd54
	if (!ctx.cr6.gt) goto loc_8271FD54;
	// addi r9,r7,-1
	ctx.r9.s64 = ctx.r7.s64 + -1;
loc_8271FD40:
	// lbzx r5,r11,r10
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// add r11,r11,r19
	ctx.r11.u64 = ctx.r11.u64 + r19.u64;
	// cmpw cr6,r11,r20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r20.s32, ctx.xer);
	// stbu r5,1(r9)
	ea = 1 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r5.u8);
	ctx.r9.u32 = ea;
	// blt cr6,0x8271fd40
	if (ctx.cr6.lt) goto loc_8271FD40;
loc_8271FD54:
	// lwz r11,208(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 208);
	// add r8,r8,r18
	ctx.r8.u64 = ctx.r8.u64 + r18.u64;
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// cmpw cr6,r8,r17
	ctx.cr6.compare<int32_t>(ctx.r8.s32, r17.s32, ctx.xer);
	// blt cr6,0x8271fd30
	if (ctx.cr6.lt) goto loc_8271FD30;
loc_8271FD6C:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_8272CED0) {
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
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1ca0
	ctx.lr = 0x8272CED8;
	// stfd f29,-112(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -112, f29.u64);
	// stfd f30,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, f30.u64);
	// stfd f31,-96(r1)
	REX_STORE_U64(ctx.r1.u32 + -96, f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8272d234
	if (ctx.cr6.eq) goto loc_8272D234;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8272d234
	if (ctx.cr6.eq) goto loc_8272D234;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8272d234
	if (ctx.cr6.eq) goto loc_8272D234;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8272d234
	if (ctx.cr6.eq) goto loc_8272D234;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8272d234
	if (ctx.cr6.eq) goto loc_8272D234;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8272d234
	if (ctx.cr6.eq) goto loc_8272D234;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8272d234
	if (ctx.cr6.eq) goto loc_8272D234;
	// lwz r29,292(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8272d234
	if (ctx.cr6.eq) goto loc_8272D234;
	// lwz r30,300(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8272d234
	if (ctx.cr6.eq) goto loc_8272D234;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,52(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,25700(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 25700);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x8272cfc0
	if (!ctx.cr6.eq) goto loc_8272CFC0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// mullw r5,r9,r11
	ctx.r5.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// bl 0x826a2e60
	ctx.lr = 0x8272CF68;
	sub_826A2E60(ctx, base);
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mullw r6,r8,r7
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// srawi r5,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 2;
	// li r4,128
	ctx.r4.s64 = 128;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addze r5,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r5.s64 = temp.s64;
	// bl 0x826a2e60
	ctx.lr = 0x8272CF88;
	sub_826A2E60(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,128
	ctx.r4.s64 = 128;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mullw r9,r11,r10
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// srawi r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// addze r5,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r5.s64 = temp.s64;
	// bl 0x826a2e60
	ctx.lr = 0x8272CFA8;
	sub_826A2E60(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f29,-112(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f30,-104(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x826a1cf0
	return;
loc_8272CFC0:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8272cfd8
	if (!ctx.cr6.lt) goto loc_8272CFD8;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// mr r22,r6
	r22.u64 = ctx.r6.u64;
	// b 0x8272cff4
	goto loc_8272CFF4;
loc_8272CFD8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// mr r23,r8
	r23.u64 = ctx.r8.u64;
	// mr r22,r9
	r22.u64 = ctx.r9.u64;
	// lfs f13,3792(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3792);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 52, temp.u32);
loc_8272CFF4:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lfs f0,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// mr r26,r10
	r26.u64 = ctx.r10.u64;
	// lfs f30,56(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 56);
	f30.f64 = double(temp.f32);
	// mr r27,r29
	r27.u64 = r29.u64;
	// mr r28,r30
	r28.u64 = r30.u64;
	// srawi r25,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	r25.s64 = ctx.r9.s32 >> 1;
	// lfd f31,30752(r11)
	f31.u64 = REX_LOAD_U64(ctx.r11.u32 + 30752);
	// fmul f1,f0,f31
	ctx.f1.f64 = ctx.f0.f64 * f31.f64;
	// bl 0x826a14e0
	ctx.lr = 0x8272D020;
	sub_826A14E0(ctx, base);
	// lfs f13,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// frsp f29,f1
	f29.f64 = double(float(ctx.f1.f64));
	// fmul f1,f13,f31
	ctx.f1.f64 = ctx.f13.f64 * f31.f64;
	// bl 0x826a15c0
	ctx.lr = 0x8272D030;
	sub_826A15C0(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lwz r6,0(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// fmuls f12,f12,f30
	ctx.f12.f64 = double(float(ctx.f12.f64 * f30.f64));
	// ble cr6,0x8272d18c
	if (!ctx.cr6.gt) goto loc_8272D18C;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r6,-32249
	ctx.r6.s64 = -2113470464;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// lis r29,-32256
	r29.s64 = -2113929216;
	// lfs f6,30748(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 30748);
	ctx.f6.f64 = double(temp.f32);
	// lfs f7,30744(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 30744);
	ctx.f7.f64 = double(temp.f32);
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// lfs f8,-11308(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + -11308);
	ctx.f8.f64 = double(temp.f32);
	// lfd f10,32424(r5)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r5.u32 + 32424);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// lfs f11,3704(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 3704);
	ctx.f11.f64 = double(temp.f32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f9,3716(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 3716);
	ctx.f9.f64 = double(temp.f32);
	// ori r5,r10,65535
	ctx.r5.u64 = ctx.r10.u64 | 65535;
	// ori r6,r9,1
	ctx.r6.u64 = ctx.r9.u64 | 1;
loc_8272D098:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// subf r9,r10,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r10.u64;
	// extsw r3,r9
	ctx.r3.s64 = ctx.r9.s32;
	// std r3,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmadds f0,f13,f29,f12
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, f29.f64, ctx.f12.f64)));
	// fcmpu cr6,f0,f9
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// ble cr6,0x8272d15c
	if (!ctx.cr6.gt) goto loc_8272D15C;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// fdivs f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 / ctx.f0.f64));
	// lwz r9,64(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 64);
	// std r10,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// fmuls f3,f0,f13
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfd f5,88(r1)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// frsp f2,f4
	ctx.f2.f64 = double(float(ctx.f4.f64));
	// fmadds f1,f3,f30,f2
	ctx.f1.f64 = double(float(std::fma(ctx.f3.f64, f30.f64, ctx.f2.f64)));
	// fadd f13,f1,f10
	ctx.f13.f64 = ctx.f1.f64 + ctx.f10.f64;
	// fctiwz f5,f13
	ctx.f5.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfiwx f5,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.f5.u32);
	// lwz r9,64(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 64);
	// lwzx r10,r11,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x8272d158
	if (ctx.cr6.lt) goto loc_8272D158;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmpw cr6,r10,r3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x8272d158
	if (!ctx.cr6.lt) goto loc_8272D158;
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// clrlwi r10,r8,29
	ctx.r10.u64 = ctx.r8.u32 & 0x7;
	// clrlwi r9,r7,24
	ctx.r9.u64 = ctx.r7.u32 & 0xFF;
	// slw r7,r4,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r10.u8 & 0x3F));
	// lwz r10,68(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 68);
	// or r3,r7,r9
	ctx.r3.u64 = ctx.r7.u64 | ctx.r9.u64;
	// fcmpu cr6,f0,f8
	ctx.cr6.compare(ctx.f0.f64, ctx.f8.f64);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// ble cr6,0x8272d138
	if (!ctx.cr6.gt) goto loc_8272D138;
	// stwx r5,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r5.u32);
	// b 0x8272d15c
	goto loc_8272D15C;
loc_8272D138:
	// fcmpu cr6,f0,f7
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f7.f64);
	// bge cr6,0x8272d148
	if (!ctx.cr6.lt) goto loc_8272D148;
	// stwx r6,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r6.u32);
	// b 0x8272d15c
	goto loc_8272D15C;
loc_8272D148:
	// fmuls f0,f0,f6
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f6.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f13,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.f13.u32);
	// b 0x8272d15c
	goto loc_8272D15C;
loc_8272D158:
	// stwx r30,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, r30.u32);
loc_8272D15C:
	// clrlwi r10,r8,29
	ctx.r10.u64 = ctx.r8.u32 & 0x7;
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// bne cr6,0x8272d178
	if (!ctx.cr6.eq) goto loc_8272D178;
	// lwz r10,60(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 60);
	// srawi r9,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 3;
	// stbx r7,r9,r10
	REX_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r7.u8);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
loc_8272D178:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8272d098
	if (ctx.cr6.lt) goto loc_8272D098;
loc_8272D18C:
	// clrlwi r11,r8,29
	ctx.r11.u64 = ctx.r8.u32 & 0x7;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8272d1a4
	if (ctx.cr6.eq) goto loc_8272D1A4;
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// srawi r10,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 3;
	// stbx r7,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r7.u8);
loc_8272D1A4:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r29,r30
	r29.u64 = r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8272d1dc
	if (!ctx.cr6.gt) goto loc_8272D1DC;
loc_8272D1B4:
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8272c4a8
	ctx.lr = 0x8272D1C8;
	sub_8272C4A8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8272d1b4
	if (ctx.cr6.lt) goto loc_8272D1B4;
loc_8272D1DC:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8272d21c
	if (!ctx.cr6.gt) goto loc_8272D21C;
loc_8272D1E8:
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8272c9f8
	ctx.lr = 0x8272D204;
	sub_8272C9F8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// add r28,r25,r28
	r28.u64 = r25.u64 + r28.u64;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8272d1e8
	if (ctx.cr6.lt) goto loc_8272D1E8;
loc_8272D21C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f29,-112(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f30,-104(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x826a1cf0
	return;
loc_8272D234:
	// li r3,7
	ctx.r3.s64 = 7;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f29,-112(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f30,-104(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_82745E48) {
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
	// bl 0x826a1c90
	ctx.lr = 0x82745E50;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r22,332(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// neg r10,r9
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// lwz r27,324(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// mr r21,r8
	r21.u64 = ctx.r8.u64;
	// add r8,r3,r6
	ctx.r8.u64 = ctx.r3.u64 + ctx.r6.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// lwz r11,30048(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 30048);
	// clrlwi r5,r10,28
	ctx.r5.u64 = ctx.r10.u32 & 0xF;
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwinm r6,r11,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r28,r11,r8
	r28.u64 = ctx.r8.u64 - ctx.r11.u64;
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// add r26,r6,r9
	r26.u64 = ctx.r6.u64 + ctx.r9.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mr r31,r28
	r31.u64 = r28.u64;
	// subf r11,r11,r26
	ctx.r11.u64 = r26.u64 - ctx.r11.u64;
	// beq cr6,0x82745ebc
	if (ctx.cr6.eq) goto loc_82745EBC;
	// rlwinm r9,r26,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r27,r9
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82745eb0
	if (ctx.cr6.lt) goto loc_82745EB0;
	// srawi r27,r27,1
	ctx.xer.ca = (r27.s32 < 0) & ((r27.u32 & 0x1) != 0);
	r27.s64 = r27.s32 >> 1;
loc_82745EB0:
	// srawi r23,r27,3
	ctx.xer.ca = (r27.s32 < 0) & ((r27.u32 & 0x7) != 0);
	r23.s64 = r27.s32 >> 3;
	// li r24,40
	r24.s64 = 40;
	// b 0x82745ec4
	goto loc_82745EC4;
loc_82745EBC:
	// srawi r23,r27,4
	ctx.xer.ca = (r27.s32 < 0) & ((r27.u32 & 0xF) != 0);
	r23.s64 = r27.s32 >> 4;
	// li r24,20
	r24.s64 = 20;
loc_82745EC4:
	// cmpw cr6,r4,r25
	ctx.cr6.compare<int32_t>(ctx.r4.s32, r25.s32, ctx.xer);
	// bge cr6,0x82745f60
	if (!ctx.cr6.lt) goto loc_82745F60;
	// subf r6,r4,r25
	ctx.r6.u64 = r25.u64 - ctx.r4.u64;
	// addi r3,r11,-16
	ctx.r3.s64 = ctx.r11.s64 + -16;
	// subf r30,r28,r8
	r30.u64 = ctx.r8.u64 - r28.u64;
	// li r4,16
	ctx.r4.s64 = 16;
loc_82745EDC:
	// lbz r29,0(r10)
	r29.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// addi r20,r1,96
	r20.s64 = ctx.r1.s64 + 96;
	// addi r18,r1,96
	r18.s64 = ctx.r1.s64 + 96;
	// lbzx r11,r30,r31
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + r31.u32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r19,r1,80
	r19.s64 = ctx.r1.s64 + 80;
	// add r9,r3,r31
	ctx.r9.u64 = ctx.r3.u64 + r31.u64;
	// stw r29,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// lvx128 v13,r0,r20
	ea = (r20.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lvx128 v0,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltb v0,v0,3
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_set1_epi8(char(0xC))));
	// vspltb v13,v13,3
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_set1_epi8(char(0xC))));
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stvx128 v0,r0,r19
	ea = (r19.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r0,r18
	ea = (r18.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// ble cr6,0x82745f40
	if (!ctx.cr6.gt) goto loc_82745F40;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_82745F30:
	// lbz r29,0(r10)
	r29.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// stbx r29,r8,r11
	REX_STORE_U8(ctx.r8.u32 + ctx.r11.u32, r29.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82745f30
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82745F30;
loc_82745F40:
	// stvx128 v0,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// stvx128 v13,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + r27.u64;
	// stvx128 v0,r31,r4
	ea = (r31.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r31,r31,r27
	r31.u64 = r31.u64 + r27.u64;
	// stvx128 v13,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bne 0x82745edc
	if (!ctx.cr0.eq) goto loc_82745EDC;
loc_82745F60:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82745fc8
	if (ctx.cr6.eq) goto loc_82745FC8;
	// mullw r11,r24,r27
	ctx.r11.s64 = int64_t(r24.s32) * int64_t(r27.s32);
	// subf r30,r11,r28
	r30.u64 = r28.u64 - ctx.r11.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r29,r23,3,0,27
	r29.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 3) & 0xFFFFFFF0;
	// bl 0x823ef2f8
	ctx.lr = 0x82745F84;
	sub_823EF2F8(ctx, base);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// ble cr6,0x82745fc8
	if (!ctx.cr6.gt) goto loc_82745FC8;
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
loc_82745F90:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x82745fbc
	if (!ctx.cr6.gt) goto loc_82745FBC;
	// addi r10,r29,-1
	ctx.r10.s64 = r29.s64 + -1;
	// rlwinm r10,r10,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82745FAC:
	// lvlx128 v63,r11,r28
	temp.u32 = ctx.r11.u32 + r28.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stvx128 v63,r11,r30
	ea = (ctx.r11.u32 + r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x82745fac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82745FAC;
loc_82745FBC:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// add r30,r30,r27
	r30.u64 = r30.u64 + r27.u64;
	// bne 0x82745f90
	if (!ctx.cr0.eq) goto loc_82745F90;
loc_82745FC8:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// beq cr6,0x82746044
	if (ctx.cr6.eq) goto loc_82746044;
	// subf r29,r27,r31
	r29.u64 = r31.u64 - r27.u64;
	// rlwinm r28,r23,3,0,27
	r28.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 3) & 0xFFFFFFF0;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// neg r11,r25
	ctx.r11.s64 = static_cast<int64_t>(-r25.u64);
	// beq cr6,0x82745fec
	if (ctx.cr6.eq) goto loc_82745FEC;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// b 0x82745ff0
	goto loc_82745FF0;
loc_82745FEC:
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
loc_82745FF0:
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r30,r11,r24
	r30.u64 = ctx.r11.u64 + r24.u64;
	// bl 0x823ef2f8
	ctx.lr = 0x82746004;
	sub_823EF2F8(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble cr6,0x82746044
	if (!ctx.cr6.gt) goto loc_82746044;
loc_8274600C:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// ble cr6,0x82746038
	if (!ctx.cr6.gt) goto loc_82746038;
	// addi r10,r28,-1
	ctx.r10.s64 = r28.s64 + -1;
	// rlwinm r10,r10,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82746028:
	// lvlx128 v62,r11,r29
	temp.u32 = ctx.r11.u32 + r29.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stvx128 v62,r11,r31
	ea = (ctx.r11.u32 + r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x82746028
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82746028;
loc_82746038:
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// add r31,r31,r27
	r31.u64 = r31.u64 + r27.u64;
	// bne 0x8274600c
	if (!ctx.cr0.eq) goto loc_8274600C;
loc_82746044:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1ce0
	return;
}

DEFINE_REX_FUNC(sub_8274FE60) {
	REX_FUNC_PROLOGUE();
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb0
	ctx.lr = 0x8274FE68;
	// lwz r31,0(r6)
	r31.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lwz r30,0(r7)
	r30.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// beq cr6,0x8274ffa0
	if (ctx.cr6.eq) goto loc_8274FFA0;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// beq cr6,0x8274ffa0
	if (ctx.cr6.eq) goto loc_8274FFA0;
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// beq cr6,0x8274ffa0
	if (ctx.cr6.eq) goto loc_8274FFA0;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x8274ff24
	if (!ctx.cr6.eq) goto loc_8274FF24;
	// lwz r9,136(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lbz r4,4(r5)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r5.u32 + 4);
	// lis r27,-32246
	r27.s64 = -2113273856;
	// rlwinm r29,r9,1,0,30
	r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r3,6576(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 6576);
	// rotlwi r28,r4,2
	r28.u64 = __builtin_rotateleft32(ctx.r4.u32, 2);
	// add r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 + r29.u64;
	// add r4,r4,r28
	ctx.r4.u64 = ctx.r4.u64 + r28.u64;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
	// subf r5,r9,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r9.u64;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r27,-30440
	ctx.r4.s64 = r27.s64 + -30440;
	// add r27,r9,r3
	r27.u64 = ctx.r9.u64 + ctx.r3.u64;
	// lbz r11,4(r5)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r5.u32 + 4);
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r9,16(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 16);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwzx r11,r5,r4
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r4.u32);
	// lwz r9,16(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mullw r5,r9,r11
	ctx.r5.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// mullw r4,r5,r10
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// mullw r3,r5,r31
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(r31.s32);
	// add r11,r4,r28
	ctx.r11.u64 = ctx.r4.u64 + r28.u64;
	// add r9,r3,r28
	ctx.r9.u64 = ctx.r3.u64 + r28.u64;
	// srawi r10,r11,18
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3FFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 18;
	// srawi r31,r9,18
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3FFFF) != 0);
	r31.s64 = ctx.r9.s32 >> 18;
	// stw r31,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, r31.u32);
	// stw r30,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, r30.u32);
	// stw r10,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// b 0x826a1d00
	return;
loc_8274FF24:
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// bne cr6,0x8275005c
	if (!ctx.cr6.eq) goto loc_8275005C;
	// lbz r9,4(r5)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r5.u32 + 4);
	// lis r29,-32246
	r29.s64 = -2113273856;
	// lwz r4,6576(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 6576);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// rotlwi r3,r9,2
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// lbz r5,-20(r5)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r5.u32 + -20);
	// addi r29,r29,-30440
	r29.s64 = r29.s64 + -30440;
	// add r3,r9,r3
	ctx.r3.u64 = ctx.r9.u64 + ctx.r3.u64;
	// rotlwi r9,r5,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r5.u32, 2);
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 + ctx.r9.u64;
	// add r5,r3,r4
	ctx.r5.u64 = ctx.r3.u64 + ctx.r4.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r9,r4
	ctx.r4.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lwz r3,16(r5)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + 16);
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r5,16(r4)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// lwzx r4,r9,r29
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + r29.u32);
	// stw r31,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, r31.u32);
	// mullw r3,r5,r4
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r4.s32);
	// mullw r10,r3,r10
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r10.s32);
	// mullw r9,r3,r30
	ctx.r9.s64 = int64_t(ctx.r3.s32) * int64_t(r30.s32);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// srawi r10,r5,18
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3FFFF) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 18;
	// srawi r30,r4,18
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3FFFF) != 0);
	r30.s64 = ctx.r4.s32 >> 18;
	// stw r30,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, r30.u32);
	// stw r10,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// b 0x826a1d00
	return;
loc_8274FFA0:
	// lwz r29,136(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// lis r26,-32246
	r26.s64 = -2113273856;
	// lbz r28,4(r5)
	r28.u64 = REX_LOAD_U8(ctx.r5.u32 + 4);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// rlwinm r27,r29,1,0,30
	r27.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,6576(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 6576);
	// rotlwi r3,r28,2
	ctx.r3.u64 = __builtin_rotateleft32(r28.u32, 2);
	// lbz r4,-20(r5)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r5.u32 + -20);
	// add r29,r29,r27
	r29.u64 = r29.u64 + r27.u64;
	// add r3,r28,r3
	ctx.r3.u64 = r28.u64 + ctx.r3.u64;
	// rlwinm r29,r29,3,0,28
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r29,r29,r5
	r29.u64 = ctx.r5.u64 - r29.u64;
	// rotlwi r5,r4,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r4.u32, 2);
	// add r27,r3,r9
	r27.u64 = ctx.r3.u64 + ctx.r9.u64;
	// add r5,r4,r5
	ctx.r5.u64 = ctx.r4.u64 + ctx.r5.u64;
	// addi r26,r26,-30440
	r26.s64 = r26.s64 + -30440;
	// lbz r4,-20(r29)
	ctx.r4.u64 = REX_LOAD_U8(r29.u32 + -20);
	// rlwinm r3,r5,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r5,4(r29)
	ctx.r5.u64 = REX_LOAD_U8(r29.u32 + 4);
	// rotlwi r28,r4,2
	r28.u64 = __builtin_rotateleft32(ctx.r4.u32, 2);
	// lwz r27,16(r27)
	r27.u64 = REX_LOAD_U32(r27.u32 + 16);
	// rotlwi r29,r5,2
	r29.u64 = __builtin_rotateleft32(ctx.r5.u32, 2);
	// add r4,r4,r28
	ctx.r4.u64 = ctx.r4.u64 + r28.u64;
	// add r5,r5,r29
	ctx.r5.u64 = ctx.r5.u64 + r29.u64;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r4,r9
	ctx.r4.u64 = ctx.r4.u64 + ctx.r9.u64;
	// rlwinm r29,r27,2,0,29
	r29.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r5,r9
	ctx.r5.u64 = ctx.r5.u64 + ctx.r9.u64;
	// add r3,r3,r9
	ctx.r3.u64 = ctx.r3.u64 + ctx.r9.u64;
	// lwz r4,16(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// lwzx r9,r29,r26
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + r26.u32);
	// lwz r5,16(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 16);
	// lwz r3,16(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mullw r4,r4,r9
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// mullw r5,r5,r9
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// mullw r3,r3,r9
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// mullw r10,r4,r10
	ctx.r10.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r10.s32);
	// mullw r9,r5,r31
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(r31.s32);
	// mullw r5,r3,r30
	ctx.r5.s64 = int64_t(ctx.r3.s32) * int64_t(r30.s32);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// srawi r10,r4,18
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3FFFF) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 18;
	// srawi r31,r3,18
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3FFFF) != 0);
	r31.s64 = ctx.r3.s32 >> 18;
	// srawi r30,r11,18
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3FFFF) != 0);
	r30.s64 = ctx.r11.s32 >> 18;
loc_8275005C:
	// stw r31,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, r31.u32);
	// stw r30,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, r30.u32);
	// stw r10,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82761670) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82761678;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x827616d0
	if (!ctx.cr6.gt) goto loc_827616D0;
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
loc_82761684:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x827616bc
	if (!ctx.cr6.gt) goto loc_827616BC;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// subf r30,r5,r3
	r30.u64 = ctx.r3.u64 - ctx.r5.u64;
	// subf r29,r5,r7
	r29.u64 = ctx.r7.u64 - ctx.r5.u64;
loc_8276169C:
	// lbzx r10,r30,r11
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + ctx.r11.u32);
	// lbz r31,0(r11)
	r31.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// stbx r10,r29,r11
	REX_STORE_U8(r29.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8276169c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8276169C;
loc_827616BC:
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// add r3,r3,r4
	ctx.r3.u64 = ctx.r3.u64 + ctx.r4.u64;
	// add r5,r5,r6
	ctx.r5.u64 = ctx.r5.u64 + ctx.r6.u64;
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// bne 0x82761684
	if (!ctx.cr0.eq) goto loc_82761684;
loc_827616D0:
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82762810) {
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
	ctx.lr = 0x82762818;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1760(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1760);
	// vspltisw128 v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_set1_epi32(int(0x0)));
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// li r27,16
	r27.s64 = 16;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// stw r30,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r30.u32);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r5,1760(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 1760);
	// li r9,32
	ctx.r9.s64 = 32;
	// std r30,8(r5)
	REX_STORE_U64(ctx.r5.u32 + 8, r30.u64);
	// mr r29,r8
	r29.u64 = ctx.r8.u64;
	// lwz r5,1760(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1760);
	// li r8,48
	ctx.r8.s64 = 48;
	// stvx128 v63,r5,r27
	ea = (ctx.r5.u32 + r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// lwz r5,1760(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1760);
	// li r7,64
	ctx.r7.s64 = 64;
	// stvx128 v63,r5,r9
	ea = (ctx.r5.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r9,1760(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 1760);
	// li r3,80
	ctx.r3.s64 = 80;
	// stvx128 v63,r9,r8
	ea = (ctx.r9.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r8,1760(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 1760);
	// li r11,96
	ctx.r11.s64 = 96;
	// stvx128 v63,r8,r7
	ea = (ctx.r8.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r7,112
	ctx.r7.s64 = 112;
	// lwz r5,1760(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1760);
	// stvx128 v63,r5,r3
	ea = (ctx.r5.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r3,1760(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1760);
	// stvx128 v63,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r11,1760(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1760);
	// stvx128 v63,r11,r7
	ea = (ctx.r11.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r9,1760(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 1760);
	// li r8,128
	ctx.r8.s64 = 128;
	// dcbz r8,r9
	ea = (ctx.r8.u32 + ctx.r9.u32) & ~31;
	memset((void*)REX_RAW_ADDR(ea), 0, 32);
	// lwz r7,0(r28)
	ctx.r7.u64 = REX_LOAD_U32(r28.u32 + 0);
	// rlwinm r5,r7,0,27,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x18;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82762940
	if (ctx.cr6.eq) goto loc_82762940;
	// lwz r9,1796(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 1796);
	// subf r10,r6,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r6.u64;
	// lwz r11,228(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// li r9,7
	ctx.r9.s64 = 7;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// beq cr6,0x8276290c
	if (ctx.cr6.eq) goto loc_8276290C;
	// addi r11,r6,2
	ctx.r11.s64 = ctx.r6.s64 + 2;
loc_827628DC:
	// sth r30,16(r11)
	REX_STORE_U16(ctx.r11.u32 + 16, r30.u16);
	// lhzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// sth r9,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x827628dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827628DC;
	// lwz r11,1796(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1796);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82762904
	if (ctx.cr6.eq) goto loc_82762904;
	// lwz r7,1820(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 1820);
	// b 0x82762990
	goto loc_82762990;
loc_82762904:
	// lwz r7,1804(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 1804);
	// b 0x82762990
	goto loc_82762990;
loc_8276290C:
	// addi r11,r6,18
	ctx.r11.s64 = ctx.r6.s64 + 18;
loc_82762910:
	// lhzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// sth r30,-16(r11)
	REX_STORE_U16(ctx.r11.u32 + -16, r30.u16);
	// sth r9,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x82762910
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82762910;
	// lwz r11,1796(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1796);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82762938
	if (ctx.cr6.eq) goto loc_82762938;
	// lwz r7,1816(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 1816);
	// b 0x82762990
	goto loc_82762990;
loc_82762938:
	// lwz r7,1808(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 1808);
	// b 0x82762990
	goto loc_82762990;
loc_82762940:
	// sth r30,28(r6)
	REX_STORE_U16(ctx.r6.u32 + 28, r30.u16);
	// sth r30,6(r6)
	REX_STORE_U16(ctx.r6.u32 + 6, r30.u16);
	// sth r30,10(r6)
	REX_STORE_U16(ctx.r6.u32 + 10, r30.u16);
	// sth r30,26(r6)
	REX_STORE_U16(ctx.r6.u32 + 26, r30.u16);
	// sth r30,22(r6)
	REX_STORE_U16(ctx.r6.u32 + 22, r30.u16);
	// sth r30,8(r6)
	REX_STORE_U16(ctx.r6.u32 + 8, r30.u16);
	// sth r30,2(r6)
	REX_STORE_U16(ctx.r6.u32 + 2, r30.u16);
	// sth r30,18(r6)
	REX_STORE_U16(ctx.r6.u32 + 18, r30.u16);
	// sth r30,4(r6)
	REX_STORE_U16(ctx.r6.u32 + 4, r30.u16);
	// sth r30,20(r6)
	REX_STORE_U16(ctx.r6.u32 + 20, r30.u16);
	// sth r30,24(r6)
	REX_STORE_U16(ctx.r6.u32 + 24, r30.u16);
	// sth r30,12(r6)
	REX_STORE_U16(ctx.r6.u32 + 12, r30.u16);
	// sth r30,14(r6)
	REX_STORE_U16(ctx.r6.u32 + 14, r30.u16);
	// sth r30,30(r6)
	REX_STORE_U16(ctx.r6.u32 + 30, r30.u16);
	// lwz r11,1796(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1796);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8276298c
	if (ctx.cr6.eq) goto loc_8276298C;
	// lwz r7,1812(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 1812);
	// b 0x82762990
	goto loc_82762990;
loc_8276298C:
	// lwz r7,1800(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 1800);
loc_82762990:
	// lwz r11,15504(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15504);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// blt cr6,0x827629b4
	if (ctx.cr6.lt) goto loc_827629B4;
	// add r11,r28,r29
	ctx.r11.u64 = r28.u64 + r29.u64;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// lbz r5,14(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 14);
	// bl 0x82768f28
	ctx.lr = 0x827629B0;
	sub_82768F28(ctx, base);
	// b 0x827629d4
	goto loc_827629D4;
loc_827629B4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r11,r28,r29
	ctx.r11.u64 = r28.u64 + r29.u64;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// lbz r5,14(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 14);
	// beq cr6,0x827629d0
	if (ctx.cr6.eq) goto loc_827629D0;
	// bl 0x82768f28
	ctx.lr = 0x827629CC;
	sub_82768F28(ctx, base);
	// b 0x827629d4
	goto loc_827629D4;
loc_827629D0:
	// bl 0x82712b98
	ctx.lr = 0x827629D4;
	sub_82712B98(ctx, base);
loc_827629D4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82762cd8
	if (!ctx.cr6.eq) goto loc_82762CD8;
	// lwz r11,2992(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2992);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82762cb0
	if (ctx.cr6.eq) goto loc_82762CB0;
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// mtctr r27
	ctx.ctr.u64 = r27.u64;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_827629F8:
	// lwz r7,1760(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 1760);
	// addi r9,r11,12
	ctx.r9.s64 = ctx.r11.s64 + 12;
	// lwz r6,1884(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 1884);
	// addi r8,r10,6
	ctx.r8.s64 = ctx.r10.s64 + 6;
	// lwzx r5,r11,r7
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// sthx r5,r6,r10
	REX_STORE_U16(ctx.r6.u32 + ctx.r10.u32, ctx.r5.u16);
	// lwz r6,1884(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 1884);
	// lwz r7,1760(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 1760);
	// add r3,r11,r7
	ctx.r3.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwz r7,4(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// add r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 + ctx.r10.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// sth r7,2(r6)
	REX_STORE_U16(ctx.r6.u32 + 2, ctx.r7.u16);
	// lwz r6,1884(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 1884);
	// lwz r7,1760(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 1760);
	// add r4,r9,r7
	ctx.r4.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r3,r6,r8
	ctx.r3.u64 = ctx.r6.u64 + ctx.r8.u64;
	// lwz r7,-4(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + -4);
	// sth r7,-2(r3)
	REX_STORE_U16(ctx.r3.u32 + -2, ctx.r7.u16);
	// lwz r5,1760(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1760);
	// lwzx r3,r9,r5
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	// lwz r4,1884(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 1884);
	// sthx r3,r4,r8
	REX_STORE_U16(ctx.r4.u32 + ctx.r8.u32, ctx.r3.u16);
	// bdnz 0x827629f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827629F8;
	// lwz r11,3204(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3204);
	// li r6,255
	ctx.r6.s64 = 255;
	// lwz r3,1884(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1884);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82762A78;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,2992(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2992);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82762af4
	if (ctx.cr6.eq) goto loc_82762AF4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82762af4
	if (ctx.cr6.eq) goto loc_82762AF4;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// rlwinm r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82762af4
	if (!ctx.cr6.eq) goto loc_82762AF4;
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// li r7,8
	ctx.r7.s64 = 8;
loc_82762AA4:
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// li r8,128
	ctx.r8.s64 = 128;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82762AB4:
	// stbu r8,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r8.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x82762ab4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82762AB4;
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// add r9,r9,r26
	ctx.r9.u64 = ctx.r9.u64 + r26.u64;
	// bne 0x82762aa4
	if (!ctx.cr0.eq) goto loc_82762AA4;
	// lwz r11,3172(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3172);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r7,260(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 260);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r5,1884(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1884);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82762AE8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
loc_82762AF4:
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(r29.s32, 4, ctx.xer);
	// bge cr6,0x82762b2c
	if (!ctx.cr6.lt) goto loc_82762B2C;
	// rlwinm r11,r29,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x2;
	// lwz r9,236(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// clrlwi r10,r29,31
	ctx.r10.u64 = r29.u32 & 0x1;
	// lwz r8,136(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 136);
	// addi r7,r11,751
	ctx.r7.s64 = ctx.r11.s64 + 751;
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r8,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r9,r5,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r11,r6,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + r31.u32);
	// b 0x82762b50
	goto loc_82762B50;
loc_82762B2C:
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(r29.s32, 4, ctx.xer);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bne cr6,0x82762b44
	if (!ctx.cr6.eq) goto loc_82762B44;
	// lwz r11,3016(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3016);
	// b 0x82762b48
	goto loc_82762B48;
loc_82762B44:
	// lwz r11,3024(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3024);
loc_82762B48:
	// lwz r9,236(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
loc_82762B50:
	// li r7,8
	ctx.r7.s64 = 8;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r9,1884(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 1884);
	// addi r8,r11,-2
	ctx.r8.s64 = ctx.r11.s64 + -2;
	// addi r9,r9,-2
	ctx.r9.s64 = ctx.r9.s64 + -2;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_82762B68:
	// lhzu r7,2(r9)
	ea = 2 + ctx.r9.u32;
	ctx.r7.u64 = REX_LOAD_U16(ea);
	ctx.r9.u32 = ea;
	// sthu r7,2(r8)
	ea = 2 + ctx.r8.u32;
	REX_STORE_U16(ea, ctx.r7.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x82762b68
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82762B68;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r6,1884(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 1884);
	// li r8,8
	ctx.r8.s64 = 8;
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r6,r6,14
	ctx.r6.s64 = ctx.r6.s64 + 14;
	// addi r7,r7,-2
	ctx.r7.s64 = ctx.r7.s64 + -2;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82762B90:
	// lhzu r8,2(r6)
	ea = 2 + ctx.r6.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r6.u32 = ea;
	// sthu r8,2(r7)
	ea = 2 + ctx.r7.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r7.u32 = ea;
	// bdnz 0x82762b90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82762B90;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r7,1884(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 1884);
	// li r9,8
	ctx.r9.s64 = 8;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r7,r7,30
	ctx.r7.s64 = ctx.r7.s64 + 30;
	// addi r8,r8,-2
	ctx.r8.s64 = ctx.r8.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82762BB8:
	// lhzu r9,2(r7)
	ea = 2 + ctx.r7.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r7.u32 = ea;
	// sthu r9,2(r8)
	ea = 2 + ctx.r8.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x82762bb8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82762BB8;
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,1884(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 1884);
	// li r9,8
	ctx.r9.s64 = 8;
	// add r6,r10,r7
	ctx.r6.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addi r7,r8,46
	ctx.r7.s64 = ctx.r8.s64 + 46;
	// rlwinm r8,r6,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r9,r8,-2
	ctx.r9.s64 = ctx.r8.s64 + -2;
loc_82762BE8:
	// lhzu r8,2(r7)
	ea = 2 + ctx.r7.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r7.u32 = ea;
	// sthu r8,2(r9)
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x82762be8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82762BE8;
	// rlwinm r8,r10,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r7,1884(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 1884);
	// li r9,8
	ctx.r9.s64 = 8;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r7,r7,62
	ctx.r7.s64 = ctx.r7.s64 + 62;
	// addi r8,r8,-2
	ctx.r8.s64 = ctx.r8.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82762C10:
	// lhzu r9,2(r7)
	ea = 2 + ctx.r7.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r7.u32 = ea;
	// sthu r9,2(r8)
	ea = 2 + ctx.r8.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x82762c10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82762C10;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,1884(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 1884);
	// li r9,8
	ctx.r9.s64 = 8;
	// add r6,r10,r7
	ctx.r6.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addi r7,r8,78
	ctx.r7.s64 = ctx.r8.s64 + 78;
	// rlwinm r8,r6,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r9,r8,-2
	ctx.r9.s64 = ctx.r8.s64 + -2;
loc_82762C40:
	// lhzu r8,2(r7)
	ea = 2 + ctx.r7.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r7.u32 = ea;
	// sthu r8,2(r9)
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x82762c40
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82762C40;
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,1884(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 1884);
	// li r9,8
	ctx.r9.s64 = 8;
	// add r6,r10,r7
	ctx.r6.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addi r7,r8,94
	ctx.r7.s64 = ctx.r8.s64 + 94;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r9,r8,-2
	ctx.r9.s64 = ctx.r8.s64 + -2;
loc_82762C70:
	// lhzu r8,2(r7)
	ea = 2 + ctx.r7.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r7.u32 = ea;
	// sthu r8,2(r9)
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x82762c70
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82762C70;
	// mulli r8,r10,14
	ctx.r8.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(14));
	// lwz r9,1884(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 1884);
	// li r10,8
	ctx.r10.s64 = 8;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r9,r9,110
	ctx.r9.s64 = ctx.r9.s64 + 110;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82762C98:
	// lhzu r10,2(r9)
	ea = 2 + ctx.r9.u32;
	ctx.r10.u64 = REX_LOAD_U16(ea);
	ctx.r9.u32 = ea;
	// sthu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r10.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x82762c98
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82762C98;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
loc_82762CB0:
	// addi r11,r29,486
	ctx.r11.s64 = r29.s64 + 486;
	// lwz r10,3184(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 3184);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r5,1760(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1760);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lwzx r6,r9,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + r31.u32);
	// bctrl 
	ctx.lr = 0x82762CD4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82762CD8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_82788DC0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82788ddc
	if (ctx.cr6.eq) goto loc_82788DDC;
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// li r6,0
	ctx.r6.s64 = 0;
	// bne cr6,0x82788de0
	if (!ctx.cr6.eq) goto loc_82788DE0;
loc_82788DDC:
	// li r6,1
	ctx.r6.s64 = 1;
loc_82788DE0:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,12849
	ctx.r10.s64 = 842072064;
	// lis r8,12338
	ctx.r8.s64 = 808583168;
	// ori r10,r10,22105
	ctx.r10.u64 = ctx.r10.u64 | 22105;
	// lis r7,22101
	ctx.r7.s64 = 1448411136;
	// ori r8,r8,13385
	ctx.r8.u64 = ctx.r8.u64 | 13385;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// ori r7,r7,22857
	ctx.r7.u64 = ctx.r7.u64 | 22857;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82788e88
	if (ctx.cr6.gt) goto loc_82788E88;
	// beq cr6,0x82788ea8
	if (ctx.cr6.eq) goto loc_82788EA8;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82788ea8
	if (ctx.cr6.eq) goto loc_82788EA8;
	// lis r10,12593
	ctx.r10.s64 = 825294848;
	// ori r7,r10,13392
	ctx.r7.u64 = ctx.r10.u64 | 13392;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82788ea0
	if (!ctx.cr6.eq) goto loc_82788EA0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x82788eb0
	if (!ctx.cr6.eq) goto loc_82788EB0;
	// lis r11,12889
	ctx.r11.s64 = 844693504;
	// ori r10,r11,21849
	ctx.r10.u64 = ctx.r11.u64 | 21849;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82788e50
	if (!ctx.cr6.eq) goto loc_82788E50;
	// lis r11,-32135
	ctx.r11.s64 = -2105999360;
	// addi r10,r11,-32736
	ctx.r10.s64 = ctx.r11.s64 + -32736;
	// stw r10,14664(r3)
	REX_STORE_U32(ctx.r3.u32 + 14664, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82788E50:
	// lis r11,22101
	ctx.r11.s64 = 1448411136;
	// ori r10,r11,22857
	ctx.r10.u64 = ctx.r11.u64 | 22857;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82788e68
	if (ctx.cr6.eq) goto loc_82788E68;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82788eb0
	if (!ctx.cr6.eq) goto loc_82788EB0;
loc_82788E68:
	// lwz r11,14620(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14620);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82788eb0
	if (ctx.cr6.eq) goto loc_82788EB0;
	// lis r11,-32135
	ctx.r11.s64 = -2105999360;
	// addi r10,r11,-23368
	ctx.r10.s64 = ctx.r11.s64 + -23368;
	// stw r10,14660(r3)
	REX_STORE_U32(ctx.r3.u32 + 14660, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82788E88:
	// lis r5,12850
	ctx.r5.s64 = 842137600;
	// ori r4,r5,13392
	ctx.r4.u64 = ctx.r5.u64 | 13392;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82788f28
	if (ctx.cr6.eq) goto loc_82788F28;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82788ea8
	if (ctx.cr6.eq) goto loc_82788EA8;
loc_82788EA0:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_82788EA8:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82788eb8
	if (ctx.cr6.eq) goto loc_82788EB8;
loc_82788EB0:
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
loc_82788EB8:
	// lis r11,12889
	ctx.r11.s64 = 844693504;
	// ori r6,r11,21849
	ctx.r6.u64 = ctx.r11.u64 | 21849;
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x82788efc
	if (!ctx.cr6.eq) goto loc_82788EFC;
	// lwz r11,14620(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14620);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82788ee8
	if (!ctx.cr6.eq) goto loc_82788EE8;
	// lis r11,-32135
	ctx.r11.s64 = -2105999360;
	// addi r10,r11,-32408
	ctx.r10.s64 = ctx.r11.s64 + -32408;
	// stw r10,14664(r3)
	REX_STORE_U32(ctx.r3.u32 + 14664, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82788EE8:
	// lis r11,-32135
	ctx.r11.s64 = -2105999360;
	// addi r10,r11,-30096
	ctx.r10.s64 = ctx.r11.s64 + -30096;
	// stw r10,14664(r3)
	REX_STORE_U32(ctx.r3.u32 + 14664, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82788EFC:
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82788f14
	if (ctx.cr6.eq) goto loc_82788F14;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82788f14
	if (ctx.cr6.eq) goto loc_82788F14;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82788eb0
	if (!ctx.cr6.eq) goto loc_82788EB0;
loc_82788F14:
	// lis r11,-32135
	ctx.r11.s64 = -2105999360;
	// addi r10,r11,-19256
	ctx.r10.s64 = ctx.r11.s64 + -19256;
	// stw r10,14660(r3)
	REX_STORE_U32(ctx.r3.u32 + 14660, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82788F28:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x82788eb0
	if (!ctx.cr6.eq) goto loc_82788EB0;
	// lis r11,12889
	ctx.r11.s64 = 844693504;
	// ori r8,r11,21849
	ctx.r8.u64 = ctx.r11.u64 | 21849;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82788f54
	if (!ctx.cr6.eq) goto loc_82788F54;
	// lis r11,-32135
	ctx.r11.s64 = -2105999360;
	// addi r10,r11,-31280
	ctx.r10.s64 = ctx.r11.s64 + -31280;
	// stw r10,14664(r3)
	REX_STORE_U32(ctx.r3.u32 + 14664, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82788F54:
	// lis r11,12338
	ctx.r11.s64 = 808583168;
	// ori r8,r11,13385
	ctx.r8.u64 = ctx.r11.u64 | 13385;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82788f7c
	if (ctx.cr6.eq) goto loc_82788F7C;
	// lis r11,22101
	ctx.r11.s64 = 1448411136;
	// ori r8,r11,22857
	ctx.r8.u64 = ctx.r11.u64 | 22857;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82788f7c
	if (ctx.cr6.eq) goto loc_82788F7C;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82788eb0
	if (!ctx.cr6.eq) goto loc_82788EB0;
loc_82788F7C:
	// lis r11,-32135
	ctx.r11.s64 = -2105999360;
	// addi r10,r11,-20976
	ctx.r10.s64 = ctx.r11.s64 + -20976;
	// stw r10,14660(r3)
	REX_STORE_U32(ctx.r3.u32 + 14660, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8278F4C0) {
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
	// bl 0x826a1c90
	ctx.lr = 0x8278F4C8;
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// mr r18,r8
	r18.u64 = ctx.r8.u64;
	// vspltish v4,3
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_set1_epi16(short(0x3)));
	// mr r19,r10
	r19.u64 = ctx.r10.u64;
	// mr r21,r9
	r21.u64 = ctx.r9.u64;
	// addi r9,r11,-21920
	ctx.r9.s64 = ctx.r11.s64 + -21920;
	// li r10,16
	ctx.r10.s64 = 16;
	// li r8,32
	ctx.r8.s64 = 32;
	// mr r23,r7
	r23.u64 = ctx.r7.u64;
	// mr r22,r6
	r22.u64 = ctx.r6.u64;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lvx128 v7,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r7,48
	ctx.r7.s64 = 48;
	// lvx128 v12,r9,r8
	ea = (ctx.r9.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r6,64
	ctx.r6.s64 = 64;
	// addi r29,r1,112
	r29.s64 = ctx.r1.s64 + 112;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// stvx128 v7,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r28,r1,160
	r28.s64 = ctx.r1.s64 + 160;
	// lvx128 v11,r9,r7
	ea = (ctx.r9.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r24,r22,0,0,27
	r24.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 0) & 0xFFFFFFF0;
	// lvx128 v10,r9,r6
	ea = (ctx.r9.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// stvx128 v13,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r30,16
	r30.s64 = 16;
	// stvx128 v12,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// stvx128 v11,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r31,r5,r23
	r31.u64 = ctx.r5.u64 + r23.u64;
	// stvx128 v10,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r7,0
	ctx.r7.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// ble cr6,0x8278f614
	if (!ctx.cr6.gt) goto loc_8278F614;
	// addi r11,r24,-1
	ctx.r11.s64 = r24.s64 + -1;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// rlwinm r11,r8,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8278F588:
	// lvrx128 v63,r6,r10
	temp.u32 = ctx.r6.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// lvlx128 v62,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// vor128 v63,v62,v63
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// lvrx128 v61,r4,r8
	temp.u32 = ctx.r4.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v60,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vperm128 v9,v63,v63,v7
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vor128 v63,v60,v61
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// vmrghb v6,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v8,v63,v63,v7
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vmrglb v9,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v3,v6,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v5,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v2,v6,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrglb v8,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v1,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v31,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v30,v5,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v29,v8,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v28,v8,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v27,v5,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v26,v31,v1
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v25,v2,v3
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vsubshs v24,v28,v29
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v28.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
	// vsubshs v23,v27,v30
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// vaddshs v22,v26,v24
	simde_mm_store_si128((simde__m128i*)v22.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)v24.s16)));
	// vaddshs v21,v25,v23
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v25.s16), simde_mm_load_si128((simde__m128i*)v23.s16)));
	// vsrah v20,v22,v4
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v19,v21,v4
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v59,v19,v20
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v20.s16), simde_mm_load_si128((simde__m128i*)v19.s16)));
	// stvlx128 v59,r0,r9
	ea = ctx.r9.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v59.u8[15 - i]);
	// stvrx128 v59,r9,r30
	ea = ctx.r9.u32 + r30.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v59.u8[i]);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// bdnz 0x8278f588
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8278F588;
loc_8278F614:
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r11,r22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r22.s32, ctx.xer);
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// bge cr6,0x8278f668
	if (!ctx.cr6.lt) goto loc_8278F668;
	// subf r9,r11,r22
	ctx.r9.u64 = r22.u64 - ctx.r11.u64;
	// addi r7,r3,1
	ctx.r7.s64 = ctx.r3.s64 + 1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8278F634:
	// srawi r9,r10,7
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7F) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 7;
	// clrlwi r6,r10,25
	ctx.r6.u64 = ctx.r10.u32 & 0x7F;
	// addi r10,r10,96
	ctx.r10.s64 = ctx.r10.s64 + 96;
	// subfic r4,r6,128
	ctx.xer.ca = ctx.r6.u32 <= 128;
	ctx.r4.u64 = static_cast<uint64_t>(128) - ctx.r6.u64;
	// lbzx r8,r9,r3
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r3.u32);
	// lbzx r9,r7,r9
	ctx.r9.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r9.u32);
	// mullw r8,r8,r4
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r4.s32);
	// mullw r9,r9,r6
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r6.s32);
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// srawi r6,r8,7
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7F) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 7;
	// stbx r6,r11,r5
	REX_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r6.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8278f634
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8278F634;
loc_8278F668:
	// cmpw cr6,r11,r23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r23.s32, ctx.xer);
	// bge cr6,0x8278f690
	if (!ctx.cr6.lt) goto loc_8278F690;
	// subf r9,r11,r23
	ctx.r9.u64 = r23.u64 - ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8278F678:
	// srawi r9,r10,7
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7F) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 7;
	// addi r10,r10,96
	ctx.r10.s64 = ctx.r10.s64 + 96;
	// lbzx r8,r9,r3
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r3.u32);
	// stbx r8,r11,r5
	REX_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8278f678
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8278F678;
loc_8278F690:
	// add r28,r3,r21
	r28.u64 = ctx.r3.u64 + r21.u64;
	// li r20,0
	r20.s64 = 0;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// ble cr6,0x8278fcd4
	if (!ctx.cr6.gt) goto loc_8278FCD4;
	// addi r26,r28,1
	r26.s64 = r28.s64 + 1;
loc_8278F6A4:
	// clrlwi r11,r20,30
	ctx.r11.u64 = r20.u32 & 0x3;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x8278fcc4
	if (ctx.cr6.gt) goto loc_8278FCC4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8278f700
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8278F700;
	// bdzf 4*cr6+eq,0x8278f8f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8278F8F0;
	// bne cr6,0x8278fac4
	if (!ctx.cr6.eq) goto loc_8278FAC4;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8278F6D4;
	sub_826A1E70(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// lvx128 v7,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v11,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v10,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x8278fcc4
	goto loc_8278FCC4;
loc_8278F700:
	// li r29,0
	r29.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// ble cr6,0x8278f830
	if (!ctx.cr6.gt) goto loc_8278F830;
	// addi r11,r24,-1
	ctx.r11.s64 = r24.s64 + -1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r9,r11,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// rlwinm r9,r8,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r7,r31,r27
	ctx.r7.u64 = r27.u64 - r31.u64;
	// mr r29,r9
	r29.u64 = ctx.r9.u64;
	// subf r6,r31,r25
	ctx.r6.u64 = r25.u64 - r31.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8278F73C:
	// lvrx128 v58,r30,r10
	temp.u32 = r30.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// lvlx128 v57,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r5,r7,r11
	ctx.r5.u64 = ctx.r7.u64 + ctx.r11.u64;
	// vor128 v63,v57,v58
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8)));
	// lvlx128 v56,r7,r11
	temp.u32 = ctx.r7.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// add r4,r6,r11
	ctx.r4.u64 = ctx.r6.u64 + ctx.r11.u64;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// lvlx128 v55,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v54,r30,r8
	temp.u32 = r30.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vperm128 v8,v63,v63,v7
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vor128 v63,v55,v54
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8)));
	// lvrx128 v53,r3,r5
	temp.u32 = ctx.r3.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v9,v56,v53
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8)));
	// vmrghb v5,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v6,v63,v63,v7
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vmrglb v8,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v3,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v2,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v1,v5,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v4,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v31,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrglb v0,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v30,v8,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v29,v8,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vspltish v9,1
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_set1_epi16(short(0x1)));
	// vspltish v5,2
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_set1_epi16(short(0x2)));
	// vslh v28,v4,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v27,v0,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v26,v0,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vspltish v0,3
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0x3)));
	// vslh v25,v4,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v24,v31,v1
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v23,v29,v30
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// vsubshs v22,v26,v27
	simde_mm_store_si128((simde__m128i*)v22.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)v27.s16)));
	// vsubshs v21,v25,v28
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v25.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// vslh v20,v3,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v19,v2,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v18,v23,v22
	simde_mm_store_si128((simde__m128i*)v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v23.s16), simde_mm_load_si128((simde__m128i*)v22.s16)));
	// vaddshs v17,v24,v21
	simde_mm_store_si128((simde__m128i*)v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)v21.s16)));
	// vsrah v6,v18,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v18.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v8,v17,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vslh v16,v6,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v15,v8,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vpkshus128 v52,v8,v6
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vslh v14,v8,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v9,v6,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v8,v14,v15
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v14.s16), simde_mm_load_si128((simde__m128i*)v15.s16)));
	// vaddshs v6,v9,v16
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// stvlx128 v52,r0,r11
	ea = ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v52.u8[15 - i]);
	// stvrx128 v52,r11,r30
	ea = ctx.r11.u32 + r30.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v52.u8[i]);
	// vaddshs v5,v8,v19
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)v19.s16)));
	// vaddshs v4,v6,v20
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)v20.s16)));
	// vsrah v3,v5,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v2,v4,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v51,v3,v2
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// stvlx128 v51,r6,r11
	ea = ctx.r6.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v51.u8[15 - i]);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stvrx128 v51,r4,r30
	ea = ctx.r4.u32 + r30.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v51.u8[i]);
	// bdnz 0x8278f73c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8278F73C;
loc_8278F830:
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// add r11,r29,r11
	ctx.r11.u64 = r29.u64 + ctx.r11.u64;
	// cmpw cr6,r9,r22
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r22.s32, ctx.xer);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// bge cr6,0x8278f884
	if (!ctx.cr6.lt) goto loc_8278F884;
	// subf r10,r9,r22
	ctx.r10.u64 = r22.u64 - ctx.r9.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8278F850:
	// srawi r10,r11,7
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 7;
	// clrlwi r6,r11,25
	ctx.r6.u64 = ctx.r11.u32 & 0x7F;
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// subfic r5,r6,128
	ctx.xer.ca = ctx.r6.u32 <= 128;
	ctx.r5.u64 = static_cast<uint64_t>(128) - ctx.r6.u64;
	// lbzx r4,r10,r28
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + r28.u32);
	// lbzx r3,r26,r10
	ctx.r3.u64 = REX_LOAD_U8(r26.u32 + ctx.r10.u32);
	// mullw r8,r4,r5
	ctx.r8.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r5.s32);
	// mullw r10,r3,r6
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r6.s32);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// srawi r8,r10,7
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7F) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 7;
	// stbx r8,r9,r31
	REX_STORE_U8(ctx.r9.u32 + r31.u32, ctx.r8.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x8278f850
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8278F850;
loc_8278F884:
	// cmpw cr6,r9,r23
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r23.s32, ctx.xer);
	// bge cr6,0x8278f8ac
	if (!ctx.cr6.lt) goto loc_8278F8AC;
	// subf r10,r9,r23
	ctx.r10.u64 = r23.u64 - ctx.r9.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8278F894:
	// srawi r10,r11,7
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 7;
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// lbzx r8,r10,r28
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + r28.u32);
	// stbx r8,r9,r31
	REX_STORE_U8(ctx.r9.u32 + r31.u32, ctx.r8.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x8278f894
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8278F894;
loc_8278F8AC:
	// cmpw cr6,r7,r23
	ctx.cr6.compare<int32_t>(ctx.r7.s32, r23.s32, ctx.xer);
	// bge cr6,0x8278fcb0
	if (!ctx.cr6.lt) goto loc_8278FCB0;
	// subf r10,r7,r23
	ctx.r10.u64 = r23.u64 - ctx.r7.u64;
	// add r11,r7,r27
	ctx.r11.u64 = ctx.r7.u64 + r27.u64;
	// subf r7,r27,r31
	ctx.r7.u64 = r31.u64 - r27.u64;
	// subf r6,r27,r25
	ctx.r6.u64 = r25.u64 - r27.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8278F8C8:
	// lbzx r10,r7,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r9,r10,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// srawi r9,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// stbx r9,r6,r11
	REX_STORE_U8(ctx.r6.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8278f8c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8278F8C8;
	// b 0x8278fcb0
	goto loc_8278FCB0;
loc_8278F8F0:
	// li r29,0
	r29.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// ble cr6,0x8278fa0c
	if (!ctx.cr6.gt) goto loc_8278FA0C;
	// addi r11,r24,-1
	ctx.r11.s64 = r24.s64 + -1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r9,r11,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// rlwinm r9,r8,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r7,r31,r27
	ctx.r7.u64 = r27.u64 - r31.u64;
	// mr r29,r9
	r29.u64 = ctx.r9.u64;
	// subf r6,r31,r25
	ctx.r6.u64 = r25.u64 - r31.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8278F92C:
	// lvrx128 v50,r30,r10
	temp.u32 = r30.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// lvlx128 v49,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r5,r11,r7
	ctx.r5.u64 = ctx.r11.u64 + ctx.r7.u64;
	// vor128 v63,v49,v50
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8)));
	// lvlx128 v48,r11,r7
	temp.u32 = ctx.r11.u32 + ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// add r4,r11,r6
	ctx.r4.u64 = ctx.r11.u64 + ctx.r6.u64;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// lvlx128 v47,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v46,r30,r8
	temp.u32 = r30.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vperm128 v8,v63,v63,v7
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vor128 v63,v47,v46
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v46.u8)));
	// lvrx128 v45,r3,r5
	temp.u32 = ctx.r3.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v9,v48,v45
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v45.u8)));
	// vmrghb v5,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v6,v63,v63,v7
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vmrglb v8,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v3,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v2,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v1,v5,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v4,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v31,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrglb v0,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v30,v8,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v29,v8,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vspltish v9,2
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_set1_epi16(short(0x2)));
	// vslh v28,v4,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v27,v0,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v26,v0,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vspltish v0,3
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0x3)));
	// vslh v25,v4,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v24,v31,v1
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v23,v29,v30
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// vsubshs v22,v26,v27
	simde_mm_store_si128((simde__m128i*)v22.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)v27.s16)));
	// vsubshs v21,v25,v28
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v25.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// vslh v20,v3,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v19,v2,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v18,v23,v22
	simde_mm_store_si128((simde__m128i*)v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v23.s16), simde_mm_load_si128((simde__m128i*)v22.s16)));
	// vaddshs v17,v24,v21
	simde_mm_store_si128((simde__m128i*)v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)v21.s16)));
	// vsrah v6,v18,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v18.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v8,v17,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vslh v16,v6,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v15,v8,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vpkshus128 v44,v8,v6
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vaddshs v14,v20,v16
	simde_mm_store_si128((simde__m128i*)v14.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v20.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// vaddshs v9,v19,v15
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v19.s16), simde_mm_load_si128((simde__m128i*)v15.s16)));
	// vsrah v8,v14,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v14.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvlx128 v44,r0,r11
	ea = ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v44.u8[15 - i]);
	// vsrah v6,v9,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvrx128 v44,r11,r30
	ea = ctx.r11.u32 + r30.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v44.u8[i]);
	// vpkshus128 v43,v6,v8
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// stvlx128 v43,r11,r6
	ea = ctx.r11.u32 + ctx.r6.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v43.u8[15 - i]);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stvrx128 v43,r4,r30
	ea = ctx.r4.u32 + r30.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v43.u8[i]);
	// bdnz 0x8278f92c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8278F92C;
loc_8278FA0C:
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// add r11,r29,r11
	ctx.r11.u64 = r29.u64 + ctx.r11.u64;
	// cmpw cr6,r9,r22
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r22.s32, ctx.xer);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// bge cr6,0x8278fa60
	if (!ctx.cr6.lt) goto loc_8278FA60;
	// subf r10,r9,r22
	ctx.r10.u64 = r22.u64 - ctx.r9.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8278FA2C:
	// srawi r10,r11,7
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 7;
	// clrlwi r6,r11,25
	ctx.r6.u64 = ctx.r11.u32 & 0x7F;
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// subfic r5,r6,128
	ctx.xer.ca = ctx.r6.u32 <= 128;
	ctx.r5.u64 = static_cast<uint64_t>(128) - ctx.r6.u64;
	// lbzx r4,r10,r28
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + r28.u32);
	// lbzx r3,r26,r10
	ctx.r3.u64 = REX_LOAD_U8(r26.u32 + ctx.r10.u32);
	// mullw r8,r4,r5
	ctx.r8.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r5.s32);
	// mullw r10,r3,r6
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r6.s32);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// srawi r8,r10,7
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7F) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 7;
	// stbx r8,r9,r31
	REX_STORE_U8(ctx.r9.u32 + r31.u32, ctx.r8.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x8278fa2c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8278FA2C;
loc_8278FA60:
	// cmpw cr6,r9,r23
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r23.s32, ctx.xer);
	// bge cr6,0x8278fa88
	if (!ctx.cr6.lt) goto loc_8278FA88;
	// subf r10,r9,r23
	ctx.r10.u64 = r23.u64 - ctx.r9.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8278FA70:
	// srawi r10,r11,7
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 7;
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// lbzx r8,r10,r28
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + r28.u32);
	// stbx r8,r9,r31
	REX_STORE_U8(ctx.r9.u32 + r31.u32, ctx.r8.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x8278fa70
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8278FA70;
loc_8278FA88:
	// cmpw cr6,r7,r23
	ctx.cr6.compare<int32_t>(ctx.r7.s32, r23.s32, ctx.xer);
	// bge cr6,0x8278fcb0
	if (!ctx.cr6.lt) goto loc_8278FCB0;
	// subf r10,r7,r23
	ctx.r10.u64 = r23.u64 - ctx.r7.u64;
	// add r11,r7,r27
	ctx.r11.u64 = ctx.r7.u64 + r27.u64;
	// subf r8,r27,r31
	ctx.r8.u64 = r31.u64 - r27.u64;
	// subf r7,r27,r25
	ctx.r7.u64 = r25.u64 - r27.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8278FAA4:
	// lbzx r9,r8,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// stbx r9,r7,r11
	REX_STORE_U8(ctx.r7.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8278faa4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8278FAA4;
	// b 0x8278fcb0
	goto loc_8278FCB0;
loc_8278FAC4:
	// li r29,0
	r29.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// ble cr6,0x8278fbf4
	if (!ctx.cr6.gt) goto loc_8278FBF4;
	// addi r11,r24,-1
	ctx.r11.s64 = r24.s64 + -1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r9,r11,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// rlwinm r9,r8,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r7,r31,r27
	ctx.r7.u64 = r27.u64 - r31.u64;
	// mr r29,r9
	r29.u64 = ctx.r9.u64;
	// subf r6,r31,r25
	ctx.r6.u64 = r25.u64 - r31.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8278FB00:
	// lvrx128 v42,r30,r10
	temp.u32 = r30.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// lvlx128 v41,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// vor128 v63,v41,v42
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)ctx.v42.u8)));
	// add r5,r7,r11
	ctx.r5.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lvlx128 v40,r7,r11
	temp.u32 = ctx.r7.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r4,r6,r11
	ctx.r4.u64 = ctx.r6.u64 + ctx.r11.u64;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// lvlx128 v39,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v38,r30,r8
	temp.u32 = r30.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vperm128 v8,v63,v63,v7
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vor128 v63,v39,v38
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8)));
	// lvrx128 v37,r3,r5
	temp.u32 = ctx.r3.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v9,v40,v37
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)ctx.v37.u8)));
	// vmrghb v4,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v6,v63,v63,v7
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vmrglb v8,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v5,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v2,v4,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrglb v9,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v3,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v1,v4,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrglb v6,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v31,v8,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v30,v8,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vspltish v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0x1)));
	// vspltish v8,2
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_set1_epi16(short(0x2)));
	// vslh v29,v3,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v28,v6,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v27,v6,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v26,v3,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v25,v1,v2
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vaddshs v24,v30,v31
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v30.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// vsubshs v23,v27,v28
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// vsubshs v22,v26,v29
	simde_mm_store_si128((simde__m128i*)v22.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
	// vslh v21,v9,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v20,v9,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vspltish v9,3
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_set1_epi16(short(0x3)));
	// vaddshs v19,v24,v23
	simde_mm_store_si128((simde__m128i*)v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)v23.s16)));
	// vaddshs v18,v25,v22
	simde_mm_store_si128((simde__m128i*)v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v25.s16), simde_mm_load_si128((simde__m128i*)v22.s16)));
	// vslh v17,v5,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v16,v5,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsrah v6,v19,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v19.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v8,v18,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v18.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v15,v21,v20
	simde_mm_store_si128((simde__m128i*)v15.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v21.s16), simde_mm_load_si128((simde__m128i*)v20.s16)));
	// vaddshs v14,v17,v16
	simde_mm_store_si128((simde__m128i*)v14.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v17.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// vslh v5,v6,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v4,v8,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vpkshus128 v36,v8,v6
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vaddshs v3,v15,v5
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vaddshs v2,v14,v4
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v14.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vsrah v1,v3,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvlx128 v36,r0,r11
	ea = ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v36.u8[15 - i]);
	// vsrah v31,v2,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvrx128 v36,r11,r30
	ea = ctx.r11.u32 + r30.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v36.u8[i]);
	// vpkshus128 v35,v31,v1
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// stvlx128 v35,r6,r11
	ea = ctx.r6.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v35.u8[15 - i]);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stvrx128 v35,r4,r30
	ea = ctx.r4.u32 + r30.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v35.u8[i]);
	// bdnz 0x8278fb00
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8278FB00;
loc_8278FBF4:
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// add r11,r29,r11
	ctx.r11.u64 = r29.u64 + ctx.r11.u64;
	// cmpw cr6,r9,r22
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r22.s32, ctx.xer);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// bge cr6,0x8278fc48
	if (!ctx.cr6.lt) goto loc_8278FC48;
	// subf r10,r9,r22
	ctx.r10.u64 = r22.u64 - ctx.r9.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8278FC14:
	// srawi r10,r11,7
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 7;
	// clrlwi r6,r11,25
	ctx.r6.u64 = ctx.r11.u32 & 0x7F;
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// subfic r5,r6,128
	ctx.xer.ca = ctx.r6.u32 <= 128;
	ctx.r5.u64 = static_cast<uint64_t>(128) - ctx.r6.u64;
	// lbzx r4,r10,r28
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + r28.u32);
	// lbzx r3,r26,r10
	ctx.r3.u64 = REX_LOAD_U8(r26.u32 + ctx.r10.u32);
	// mullw r8,r4,r5
	ctx.r8.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r5.s32);
	// mullw r10,r3,r6
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r6.s32);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// srawi r8,r10,7
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7F) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 7;
	// stbx r8,r9,r31
	REX_STORE_U8(ctx.r9.u32 + r31.u32, ctx.r8.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x8278fc14
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8278FC14;
loc_8278FC48:
	// cmpw cr6,r9,r23
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r23.s32, ctx.xer);
	// bge cr6,0x8278fc70
	if (!ctx.cr6.lt) goto loc_8278FC70;
	// subf r10,r9,r23
	ctx.r10.u64 = r23.u64 - ctx.r9.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8278FC58:
	// srawi r10,r11,7
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 7;
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// lbzx r8,r10,r28
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + r28.u32);
	// stbx r8,r9,r31
	REX_STORE_U8(ctx.r9.u32 + r31.u32, ctx.r8.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x8278fc58
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8278FC58;
loc_8278FC70:
	// cmpw cr6,r7,r23
	ctx.cr6.compare<int32_t>(ctx.r7.s32, r23.s32, ctx.xer);
	// bge cr6,0x8278fcb0
	if (!ctx.cr6.lt) goto loc_8278FCB0;
	// subf r10,r7,r23
	ctx.r10.u64 = r23.u64 - ctx.r7.u64;
	// add r11,r7,r31
	ctx.r11.u64 = ctx.r7.u64 + r31.u64;
	// subf r7,r31,r27
	ctx.r7.u64 = r27.u64 - r31.u64;
	// subf r6,r31,r25
	ctx.r6.u64 = r25.u64 - r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8278FC8C:
	// lbzx r10,r7,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r9,r10,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// srawi r9,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// stbx r9,r6,r11
	REX_STORE_U8(ctx.r6.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8278fc8c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8278FC8C;
loc_8278FCB0:
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// mr r31,r27
	r31.u64 = r27.u64;
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
	// add r28,r28,r21
	r28.u64 = r28.u64 + r21.u64;
	// add r26,r26,r21
	r26.u64 = r26.u64 + r21.u64;
loc_8278FCC4:
	// addi r20,r20,1
	r20.s64 = r20.s64 + 1;
	// add r25,r25,r18
	r25.u64 = r25.u64 + r18.u64;
	// cmpw cr6,r20,r19
	ctx.cr6.compare<int32_t>(r20.s32, r19.s32, ctx.xer);
	// blt cr6,0x8278f6a4
	if (ctx.cr6.lt) goto loc_8278F6A4;
loc_8278FCD4:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x826a1ce0
	return;
}

