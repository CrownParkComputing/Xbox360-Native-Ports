#include "hydrothunder_funcs.45.h"

DEFINE_REX_FUNC(sub_82122348) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120600
	ctx.lr = 0x82122368;
	sub_82120600(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r30,4
	ctx.r4.s64 = r30.s64 + 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82122690
	ctx.lr = 0x82122378;
	sub_82122690(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82120ac0
	ctx.lr = 0x82122390;
	sub_82120AC0(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821223b4
	if (ctx.cr6.eq) goto loc_821223B4;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// li r10,28
	ctx.r10.s64 = 28;
	// lwz r9,40(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 40);
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// divw r3,r11,r10
	ctx.r3.u64 = uint32_t((ctx.r10.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r11.s32 / ctx.r10.s32 : 0);
	// b 0x821223b8
	goto loc_821223B8;
loc_821223B4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821223B8:
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

DEFINE_REX_FUNC(sub_8212A850) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8212A858;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,61(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 61);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// b 0x8212a8ac
	goto loc_8212A8AC;
loc_8212A870:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x8212a850
	ctx.lr = 0x8212A87C;
	sub_8212A850(ctx, base);
	// addi r29,r30,12
	r29.s64 = r30.s64 + 12;
	// addi r3,r29,28
	ctx.r3.s64 = r29.s64 + 28;
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82122800
	ctx.lr = 0x8212A88C;
	sub_82122800(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82120ac0
	ctx.lr = 0x8212A89C;
	sub_82120AC0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8212A8A4;
	sub_8269CE98(ctx, base);
	// lbz r11,61(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 61);
	// mr r30,r31
	r30.u64 = r31.u64;
loc_8212A8AC:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8212a870
	if (ctx.cr0.eq) goto loc_8212A870;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8212D080) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8212D088;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r11,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// beq cr6,0x8212d0d4
	if (ctx.cr6.eq) goto loc_8212D0D4;
loc_8212D0BC:
	// lwz r30,0(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8269ce98
	ctx.lr = 0x8212D0C4;
	sub_8269CE98(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8212d0bc
	if (!ctx.cr6.eq) goto loc_8212D0BC;
loc_8212D0D4:
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x8269ce98
	ctx.lr = 0x8212D0DC;
	sub_8269CE98(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// clrlwi. r10,r29,31
	ctx.r10.u64 = r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,-23376
	ctx.r11.s64 = ctx.r11.s64 + -23376;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// beq 0x8212d0f8
	if (ctx.cr0.eq) goto loc_8212D0F8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8212D0F8;
	sub_8269CE98(ctx, base);
loc_8212D0F8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82131470) {
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
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// ori r11,r11,19
	ctx.r11.u64 = ctx.r11.u64 | 19;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821314e0
	if (!ctx.cr6.eq) goto loc_821314E0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x8269c718
	ctx.lr = 0x821314A8;
	sub_8269C718(ctx, base);
	// addi r31,r31,-268
	r31.s64 = r31.s64 + -268;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821313d0
	ctx.lr = 0x821314B8;
	sub_821313D0(ctx, base);
	// mulli r11,r30,436
	ctx.r11.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(436));
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// lbz r10,272(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 272);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x821314e0
	if (ctx.cr0.eq) goto loc_821314E0;
	// addi r6,r11,416
	ctx.r6.s64 = ctx.r11.s64 + 416;
	// lwz r5,2016(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 2016);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,2036(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 2036);
	// bl 0x8269c588
	ctx.lr = 0x821314E0;
	sub_8269C588(ctx, base);
loc_821314E0:
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

DEFINE_REX_FUNC(sub_82135518) {
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
	// addi r11,r11,-19716
	ctx.r11.s64 = ctx.r11.s64 + -19716;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x82135544
	if (ctx.cr0.eq) goto loc_82135544;
	// bl 0x8269ce98
	ctx.lr = 0x82135544;
	sub_8269CE98(ctx, base);
loc_82135544:
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

DEFINE_REX_FUNC(sub_82137F98) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82137FA0;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32106
	r30.s64 = -2104098816;
	// addi r5,r3,64
	ctx.r5.s64 = ctx.r3.s64 + 64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,6096(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 6096);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82173338
	ctx.lr = 0x82137FC0;
	sub_82173338(ctx, base);
	// lis r29,-32106
	r29.s64 = -2104098816;
	// lwz r11,6096(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 6096);
	// lwz r3,6092(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6092);
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
	ctx.lr = 0x82137FE8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6092);
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
	ctx.lr = 0x82138004;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,3
	ctx.r9.s64 = 3;
	// sth r9,106(r1)
	REX_STORE_U16(ctx.r1.u32 + 106, ctx.r9.u16);
	// li r10,4
	ctx.r10.s64 = 4;
	// sth r10,110(r1)
	REX_STORE_U16(ctx.r1.u32 + 110, ctx.r10.u16);
	// sth r9,100(r1)
	REX_STORE_U16(ctx.r1.u32 + 100, ctx.r9.u16);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// sth r10,102(r1)
	REX_STORE_U16(ctx.r1.u32 + 102, ctx.r10.u16);
	// lfs f13,76(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 76);
	ctx.f13.f64 = double(temp.f32);
	// lwz r3,6092(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6092);
	// lfs f12,72(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 72);
	ctx.f12.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// fneg f11,f13
	ctx.f11.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// li r7,2
	ctx.r7.s64 = 2;
	// stfs f11,148(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// lfs f0,15048(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// sth r8,96(r1)
	REX_STORE_U16(ctx.r1.u32 + 96, ctx.r8.u16);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// sth r7,98(r1)
	REX_STORE_U16(ctx.r1.u32 + 98, ctx.r7.u16);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// sth r11,104(r1)
	REX_STORE_U16(ctx.r1.u32 + 104, ctx.r11.u16);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// sth r11,108(r1)
	REX_STORE_U16(ctx.r1.u32 + 108, ctx.r11.u16);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stw r5,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// stfs f13,160(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r6,5
	ctx.r6.s64 = 5;
	// lfs f0,68(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// fsubs f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f12,140(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stfs f12,152(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f12,164(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,252(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 252);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821380C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82142D50) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82142D58;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,192(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 192);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82142d90
	if (ctx.cr0.eq) goto loc_82142D90;
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
	ctx.lr = 0x82142D90;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82142D90:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82142DA4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r31,-32(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + -32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x82142dcc
	goto loc_82142DCC;
loc_82142DB0:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82142DC8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_82142DCC:
	// lwz r11,-28(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + -28);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82142db0
	if (!ctx.cr6.eq) goto loc_82142DB0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82147E80) {
	REX_FUNC_PROLOGUE();
	// lwz r3,56(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
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

DEFINE_REX_FUNC(sub_821483E0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x821483E8;
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,72(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 72);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8214842c
	goto loc_8214842C;
loc_82148408:
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82148424;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,72(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 72);
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_8214842C:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82148408
	if (!ctx.cr6.eq) goto loc_82148408;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8214B8E0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f13,48(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lfs f12,52(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lfs f11,56(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f11.f64 = double(temp.f32);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,15048(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r5,32
	ctx.r11.s64 = ctx.r5.s64 + 32;
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// ld r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// ld r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// lfs f10,32(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,36(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// std r9,8(r7)
	REX_STORE_U64(ctx.r7.u32 + 8, ctx.r9.u64);
	// lfs f8,40(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f8.f64 = double(temp.f32);
	// std r11,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r11.u64);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stfs f10,112(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f9,116(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stfs f8,120(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// ld r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// ld r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// std r9,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, ctx.r9.u64);
	// std r10,8(r8)
	REX_STORE_U64(ctx.r8.u32 + 8, ctx.r10.u64);
	// bl 0x82293ac8
	ctx.lr = 0x8214B978;
	sub_82293AC8(ctx, base);
	// stw r3,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r3.u32);
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

DEFINE_REX_FUNC(sub_82151278) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82151280;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r8,36(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r10,112(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 112);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r9,116(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 116);
	// addi r11,r3,36
	ctx.r11.s64 = ctx.r3.s64 + 36;
	// cmplw cr6,r4,r8
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x821512a8
	if (!ctx.cr6.eq) goto loc_821512A8;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_821512A8:
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r31,r8
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x821512b8
	if (!ctx.cr6.eq) goto loc_821512B8;
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
loc_821512B8:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821512c4
	if (ctx.cr6.eq) goto loc_821512C4;
	// stw r9,116(r10)
	REX_STORE_U32(ctx.r10.u32 + 116, ctx.r9.u32);
loc_821512C4:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821512d0
	if (ctx.cr6.eq) goto loc_821512D0;
	// stw r10,112(r9)
	REX_STORE_U32(ctx.r9.u32 + 112, ctx.r10.u32);
loc_821512D0:
	// li r30,0
	r30.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,112(r31)
	REX_STORE_U32(r31.u32 + 112, r30.u32);
	// stw r30,116(r31)
	REX_STORE_U32(r31.u32 + 116, r30.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// bl 0x821788c8
	ctx.lr = 0x821512F0;
	sub_821788C8(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r4,124(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 124);
	// lwz r3,6180(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6180);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8215130C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,28(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 28);
	// addi r11,r29,24
	ctx.r11.s64 = r29.s64 + 24;
	// stw r30,112(r31)
	REX_STORE_U32(r31.u32 + 112, r30.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82151330
	if (ctx.cr6.eq) goto loc_82151330;
	// stw r10,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r31,112(r10)
	REX_STORE_U32(ctx.r10.u32 + 112, r31.u32);
	// b 0x82151338
	goto loc_82151338;
loc_82151330:
	// stw r30,116(r31)
	REX_STORE_U32(r31.u32 + 116, r30.u32);
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r31.u32);
loc_82151338:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r31,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r31.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82157290) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x821572c0
	if (ctx.cr6.eq) goto loc_821572C0;
loc_821572B8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8215730c
	goto loc_8215730C;
loc_821572C0:
	// lwz r11,4692(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4692);
	// addi r3,r31,4692
	ctx.r3.s64 = r31.s64 + 4692;
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x82157308
	if (ctx.cr6.eq) goto loc_82157308;
	// bl 0x823ede70
	ctx.lr = 0x821572D4;
	sub_823EDE70(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// blt 0x821572b8
	if (ctx.cr0.lt) goto loc_821572B8;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82157dc8
	ctx.lr = 0x821572F8;
	sub_82157DC8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x8215730c
	goto loc_8215730C;
loc_82157308:
	// li r3,3
	ctx.r3.s64 = 3;
loc_8215730C:
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

DEFINE_REX_FUNC(sub_8215B388) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8215B390;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// bne cr6,0x8215b3ac
	if (!ctx.cr6.eq) goto loc_8215B3AC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8215b55c
	goto loc_8215B55C;
loc_8215B3AC:
	// lwz r10,36(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 36);
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8215b3f8
	if (ctx.cr6.eq) goto loc_8215B3F8;
	// lwz r11,52(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 52);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8215b3f8
	if (!ctx.cr6.lt) goto loc_8215B3F8;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,36(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 36);
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, r31.u8);
	// b 0x8215b558
	goto loc_8215B558;
loc_8215B3F8:
	// lwz r4,76(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 76);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8215b40c
	if (!ctx.cr6.eq) goto loc_8215B40C;
loc_8215B404:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8215b55c
	goto loc_8215B55C;
loc_8215B40C:
	// lwz r11,60(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8215b430
	if (!ctx.cr6.eq) goto loc_8215B430;
	// extsb r3,r31
	ctx.r3.s64 = r31.s8;
	// bl 0x8269db20
	ctx.lr = 0x8215B420;
	sub_8269DB20(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne cr6,0x8215b55c
	if (!ctx.cr6.eq) goto loc_8215B55C;
	// b 0x8215b404
	goto loc_8215B404;
loc_8215B430:
	// stb r31,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, r31.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8215bd58
	ctx.lr = 0x8215B43C;
	sub_8215BD58(ctx, base);
	// addi r28,r29,68
	r28.s64 = r29.s64 + 68;
loc_8215B440:
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r9,96(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x8215b458
	if (!ctx.cr6.lt) goto loc_8215B458;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// blt cr6,0x8215b460
	if (ctx.cr6.lt) goto loc_8215B460;
loc_8215B458:
	// lwz r8,96(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// b 0x8215b464
	goto loc_8215B464;
loc_8215B460:
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
loc_8215B464:
	// lwz r3,60(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 60);
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,81
	ctx.r6.s64 = ctx.r1.s64 + 81;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8215B494;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bge cr6,0x8215b524
	if (!ctx.cr6.lt) goto loc_8215B524;
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// bge cr6,0x8215b4b4
	if (!ctx.cr6.lt) goto loc_8215B4B4;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
loc_8215B4B4:
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// subf. r30,r11,r9
	r30.u64 = ctx.r9.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x8215b4e4
	if (ctx.cr0.eq) goto loc_8215B4E4;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// bge cr6,0x8215b4cc
	if (!ctx.cr6.lt) goto loc_8215B4CC;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
loc_8215B4CC:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r6,76(r29)
	ctx.r6.u64 = REX_LOAD_U32(r29.u32 + 76);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8269e4b8
	ctx.lr = 0x8215B4DC;
	sub_8269E4B8(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x8215b544
	if (!ctx.cr6.eq) goto loc_8215B544;
loc_8215B4E4:
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stb r10,65(r29)
	REX_STORE_U8(r29.u32 + 65, ctx.r10.u8);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8215b548
	if (!ctx.cr6.eq) goto loc_8215B548;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x8215b440
	if (!ctx.cr6.eq) goto loc_8215B440;
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bge cr6,0x8215b544
	if (!ctx.cr6.lt) goto loc_8215B544;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8212a778
	ctx.lr = 0x8215B520;
	sub_8212A778(ctx, base);
	// b 0x8215b440
	goto loc_8215B440;
loc_8215B524:
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// bne cr6,0x8215b544
	if (!ctx.cr6.eq) goto loc_8215B544;
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,76(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 76);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x8269db20
	ctx.lr = 0x8215B53C;
	sub_8269DB20(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x8215b548
	if (!ctx.cr6.eq) goto loc_8215B548;
loc_8215B544:
	// li r31,-1
	r31.s64 = -1;
loc_8215B548:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x8215B558;
	sub_82120AC0(ctx, base);
loc_8215B558:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8215B55C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8216A0D0) {
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
	ctx.lr = 0x8216A0D8;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,4(r4)
	r30.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// li r25,1
	r25.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r29,r25
	r29.u64 = r25.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lbz r10,33(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x8216a138
	if (!ctx.cr0.eq) goto loc_8216A138;
	// lwz r10,12(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
loc_8216A108:
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// subfc r9,r9,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r9.u32;
	ctx.r9.u64 = ctx.r10.u64 - ctx.r9.u64;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi. r29,r9,31
	r29.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x8216a128
	if (ctx.cr0.eq) goto loc_8216A128;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8216a12c
	goto loc_8216A12C;
loc_8216A128:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
loc_8216A12C:
	// lbz r9,33(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x8216a108
	if (ctx.cr0.eq) goto loc_8216A108;
loc_8216A138:
	// clrlwi. r11,r29,24
	ctx.r11.u64 = r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// mr r26,r30
	r26.u64 = r30.u64;
	// beq 0x8216a18c
	if (ctx.cr0.eq) goto loc_8216A18C;
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8216a184
	if (!ctx.cr6.eq) goto loc_8216A184;
	// li r5,1
	ctx.r5.s64 = 1;
loc_8216A160:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// bl 0x8216a1f0
	ctx.lr = 0x8216A170;
	sub_8216A1F0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r25,4(r31)
	REX_STORE_U8(r31.u32 + 4, r25.u8);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// b 0x8216a1e4
	goto loc_8216A1E4;
loc_8216A184:
	// bl 0x8216a6c8
	ctx.lr = 0x8216A188;
	sub_8216A6C8(ctx, base);
	// lwz r26,80(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8216A18C:
	// lwz r11,12(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 12);
	// lwz r10,12(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8216a1a8
	if (!ctx.cr6.lt) goto loc_8216A1A8;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// b 0x8216a160
	goto loc_8216A160;
loc_8216A1A8:
	// lbz r11,28(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 28);
	// addi r30,r28,16
	r30.s64 = r28.s64 + 16;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8216a1c0
	if (ctx.cr0.eq) goto loc_8216A1C0;
	// lwz r3,8(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 8);
	// bl 0x8269d1b8
	ctx.lr = 0x8216A1C0;
	sub_8269D1B8(ctx, base);
loc_8216A1C0:
	// li r29,0
	r29.s64 = 0;
	// stb r25,12(r30)
	REX_STORE_U8(r30.u32 + 12, r25.u8);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
	// stw r29,4(r30)
	REX_STORE_U32(r30.u32 + 4, r29.u32);
	// stw r29,8(r30)
	REX_STORE_U32(r30.u32 + 8, r29.u32);
	// bl 0x8269ce98
	ctx.lr = 0x8216A1DC;
	sub_8269CE98(ctx, base);
	// stw r26,0(r31)
	REX_STORE_U32(r31.u32 + 0, r26.u32);
	// stb r29,4(r31)
	REX_STORE_U8(r31.u32 + 4, r29.u8);
loc_8216A1E4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_82172AB0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82172AB8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r3,6116(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82172b80
	if (ctx.cr6.eq) goto loc_82172B80;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82172AE4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x82172b80
	if (ctx.cr0.eq) goto loc_82172B80;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82172B00;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,27404
	ctx.r4.s64 = ctx.r11.s64 + 27404;
	// bl 0x82125d00
	ctx.lr = 0x82172B0C;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82172b80
	if (!ctx.cr0.eq) goto loc_82172B80;
	// clrlwi. r11,r30,24
	ctx.r11.u64 = r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82172b28
	if (ctx.cr0.eq) goto loc_82172B28;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r30,r11,27408
	r30.s64 = ctx.r11.s64 + 27408;
	// b 0x82172b30
	goto loc_82172B30;
loc_82172B28:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r30,r11,27416
	r30.s64 = ctx.r11.s64 + 27416;
loc_82172B30:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lhz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 4);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lbz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U8(r31.u32 + 0);
	// addi r28,r11,7192
	r28.s64 = ctx.r11.s64 + 7192;
	// lbz r7,1(r31)
	ctx.r7.u64 = REX_LOAD_U8(r31.u32 + 1);
	// addi r4,r10,-12816
	ctx.r4.s64 = ctx.r10.s64 + -12816;
	// lbz r6,2(r31)
	ctx.r6.u64 = REX_LOAD_U8(r31.u32 + 2);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lbz r5,3(r31)
	ctx.r5.u64 = REX_LOAD_U8(r31.u32 + 3);
	// bl 0x826a0568
	ctx.lr = 0x82172B5C;
	sub_826A0568(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r4,r11,27424
	ctx.r4.s64 = ctx.r11.s64 + 27424;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82172B80;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82172B80:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8217A1D8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8217A1E0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,47
	ctx.r11.s64 = 47;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stb r11,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821235c8
	ctx.lr = 0x8217A204;
	sub_821235C8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq cr6,0x8217a238
	if (ctx.cr6.eq) goto loc_8217A238;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82120ac0
	ctx.lr = 0x8217A220;
	sub_82120AC0(ctx, base);
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r5,r29,1
	ctx.r5.s64 = r29.s64 + 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82120b20
	ctx.lr = 0x8217A234;
	sub_82120B20(ctx, base);
	// b 0x8217a240
	goto loc_8217A240;
loc_8217A238:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82120d70
	ctx.lr = 0x8217A240;
	sub_82120D70(ctx, base);
loc_8217A240:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8217B818) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8217B820;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	r28.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8217B838:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8217b838
	if (!ctx.cr6.eq) goto loc_8217B838;
	// subf r11,r31,r11
	ctx.r11.u64 = ctx.r11.u64 - r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8217a250
	ctx.lr = 0x8217B85C;
	sub_8217A250(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r31,80(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r30,r31,8
	r30.s64 = r31.s64 + 8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x826a1e70
	ctx.lr = 0x8217B874;
	sub_826A1E70(ctx, base);
	// addi r3,r29,32
	ctx.r3.s64 = r29.s64 + 32;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8217a390
	ctx.lr = 0x8217B884;
	sub_8217A390(ctx, base);
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// lwz r11,32(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// addi r5,r10,28508
	ctx.r5.s64 = ctx.r10.s64 + 28508;
	// bl 0x8269f340
	ctx.lr = 0x8217B8A0;
	sub_8269F340(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8217b8b4
	if (!ctx.cr0.eq) goto loc_8217B8B4;
	// lwz r30,80(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x8217b8c0
	if (!ctx.cr6.eq) goto loc_8217B8C0;
loc_8217B8B4:
	// mr r30,r28
	r30.u64 = r28.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8217b8f8
	if (ctx.cr6.eq) goto loc_8217B8F8;
loc_8217B8C0:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8217b938
	ctx.lr = 0x8217B8CC;
	sub_8217B938(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8269ef08
	ctx.lr = 0x8217B8D8;
	sub_8269EF08(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r11,r11,-20
	ctx.r11.s64 = ctx.r11.s64 + -20;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8217b8f0
	if (ctx.cr6.eq) goto loc_8217B8F0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269d6a0
	ctx.lr = 0x8217B8F0;
	sub_8269D6A0(ctx, base);
loc_8217B8F0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x8217b92c
	goto loc_8217B92C;
loc_8217B8F8:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8217daf0
	ctx.lr = 0x8217B910;
	sub_8217DAF0(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r11,r11,-20
	ctx.r11.s64 = ctx.r11.s64 + -20;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8217b928
	if (ctx.cr6.eq) goto loc_8217B928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269d6a0
	ctx.lr = 0x8217B928;
	sub_8269D6A0(ctx, base);
loc_8217B928:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8217B92C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82185978) {
	REX_FUNC_PROLOGUE();
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lfs f12,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lfs f13,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f11,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f13,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f9,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// fsubs f8,f11,f9
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f9.f64));
	// lfs f0,15048(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r11,256
	ctx.r10.s64 = ctx.r11.s64 + 256;
	// addi r9,r11,256
	ctx.r9.s64 = ctx.r11.s64 + 256;
	// addi r8,r11,256
	ctx.r8.s64 = ctx.r11.s64 + 256;
	// addi r11,r11,256
	ctx.r11.s64 = ctx.r11.s64 + 256;
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// mfcr r7
	ctx.r7.u64 = ctx.cr0.lt ? 0x80000000 : 0;
	ctx.r7.u64 |= ctx.cr0.gt ? 0x40000000 : 0;
	ctx.r7.u64 |= ctx.cr0.eq ? 0x20000000 : 0;
	ctx.r7.u64 |= ctx.cr0.so ? 0x10000000 : 0;
	ctx.r7.u64 |= ctx.cr1.lt ? 0x8000000 : 0;
	ctx.r7.u64 |= ctx.cr1.gt ? 0x4000000 : 0;
	ctx.r7.u64 |= ctx.cr1.eq ? 0x2000000 : 0;
	ctx.r7.u64 |= ctx.cr1.so ? 0x1000000 : 0;
	ctx.r7.u64 |= ctx.cr2.lt ? 0x800000 : 0;
	ctx.r7.u64 |= ctx.cr2.gt ? 0x400000 : 0;
	ctx.r7.u64 |= ctx.cr2.eq ? 0x200000 : 0;
	ctx.r7.u64 |= ctx.cr2.so ? 0x100000 : 0;
	ctx.r7.u64 |= ctx.cr3.lt ? 0x80000 : 0;
	ctx.r7.u64 |= ctx.cr3.gt ? 0x40000 : 0;
	ctx.r7.u64 |= ctx.cr3.eq ? 0x20000 : 0;
	ctx.r7.u64 |= ctx.cr3.so ? 0x10000 : 0;
	ctx.r7.u64 |= ctx.cr4.lt ? 0x8000 : 0;
	ctx.r7.u64 |= ctx.cr4.gt ? 0x4000 : 0;
	ctx.r7.u64 |= ctx.cr4.eq ? 0x2000 : 0;
	ctx.r7.u64 |= ctx.cr4.so ? 0x1000 : 0;
	ctx.r7.u64 |= ctx.cr5.lt ? 0x800 : 0;
	ctx.r7.u64 |= ctx.cr5.gt ? 0x400 : 0;
	ctx.r7.u64 |= ctx.cr5.eq ? 0x200 : 0;
	ctx.r7.u64 |= ctx.cr5.so ? 0x100 : 0;
	ctx.r7.u64 |= ctx.cr6.lt ? 0x80 : 0;
	ctx.r7.u64 |= ctx.cr6.gt ? 0x40 : 0;
	ctx.r7.u64 |= ctx.cr6.eq ? 0x20 : 0;
	ctx.r7.u64 |= ctx.cr6.so ? 0x10 : 0;
	ctx.r7.u64 |= ctx.cr7.lt ? 0x8 : 0;
	ctx.r7.u64 |= ctx.cr7.gt ? 0x4 : 0;
	ctx.r7.u64 |= ctx.cr7.eq ? 0x2 : 0;
	ctx.r7.u64 |= ctx.cr7.so ? 0x1 : 0;
	// fcmpu cr6,f8,f0
	ctx.cr6.compare(ctx.f8.f64, ctx.f0.f64);
	// mfcr r6
	ctx.r6.u64 = ctx.cr0.lt ? 0x80000000 : 0;
	ctx.r6.u64 |= ctx.cr0.gt ? 0x40000000 : 0;
	ctx.r6.u64 |= ctx.cr0.eq ? 0x20000000 : 0;
	ctx.r6.u64 |= ctx.cr0.so ? 0x10000000 : 0;
	ctx.r6.u64 |= ctx.cr1.lt ? 0x8000000 : 0;
	ctx.r6.u64 |= ctx.cr1.gt ? 0x4000000 : 0;
	ctx.r6.u64 |= ctx.cr1.eq ? 0x2000000 : 0;
	ctx.r6.u64 |= ctx.cr1.so ? 0x1000000 : 0;
	ctx.r6.u64 |= ctx.cr2.lt ? 0x800000 : 0;
	ctx.r6.u64 |= ctx.cr2.gt ? 0x400000 : 0;
	ctx.r6.u64 |= ctx.cr2.eq ? 0x200000 : 0;
	ctx.r6.u64 |= ctx.cr2.so ? 0x100000 : 0;
	ctx.r6.u64 |= ctx.cr3.lt ? 0x80000 : 0;
	ctx.r6.u64 |= ctx.cr3.gt ? 0x40000 : 0;
	ctx.r6.u64 |= ctx.cr3.eq ? 0x20000 : 0;
	ctx.r6.u64 |= ctx.cr3.so ? 0x10000 : 0;
	ctx.r6.u64 |= ctx.cr4.lt ? 0x8000 : 0;
	ctx.r6.u64 |= ctx.cr4.gt ? 0x4000 : 0;
	ctx.r6.u64 |= ctx.cr4.eq ? 0x2000 : 0;
	ctx.r6.u64 |= ctx.cr4.so ? 0x1000 : 0;
	ctx.r6.u64 |= ctx.cr5.lt ? 0x800 : 0;
	ctx.r6.u64 |= ctx.cr5.gt ? 0x400 : 0;
	ctx.r6.u64 |= ctx.cr5.eq ? 0x200 : 0;
	ctx.r6.u64 |= ctx.cr5.so ? 0x100 : 0;
	ctx.r6.u64 |= ctx.cr6.lt ? 0x80 : 0;
	ctx.r6.u64 |= ctx.cr6.gt ? 0x40 : 0;
	ctx.r6.u64 |= ctx.cr6.eq ? 0x20 : 0;
	ctx.r6.u64 |= ctx.cr6.so ? 0x10 : 0;
	ctx.r6.u64 |= ctx.cr7.lt ? 0x8 : 0;
	ctx.r6.u64 |= ctx.cr7.gt ? 0x4 : 0;
	ctx.r6.u64 |= ctx.cr7.eq ? 0x2 : 0;
	ctx.r6.u64 |= ctx.cr7.so ? 0x1 : 0;
	// rlwinm r31,r7,27,29,29
	r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x4;
	// rlwinm r30,r6,27,29,29
	r30.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x4;
	// rlwinm r7,r7,30,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x4;
	// rlwinm r6,r6,30,29,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x4;
	// or r7,r31,r7
	ctx.r7.u64 = r31.u64 | ctx.r7.u64;
	// or r6,r30,r6
	ctx.r6.u64 = r30.u64 | ctx.r6.u64;
	// lfsx f10,r10,r7
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	ctx.f10.f64 = double(temp.f32);
	// lfsx f8,r9,r6
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	ctx.f8.f64 = double(temp.f32);
	// fsel f13,f10,f12,f13
	ctx.f13.f64 = ctx.f10.f64 >= 0.0 ? ctx.f12.f64 : ctx.f13.f64;
	// fsel f12,f8,f9,f11
	ctx.f12.f64 = ctx.f8.f64 >= 0.0 ? ctx.f9.f64 : ctx.f11.f64;
	// stfs f13,-32(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// stfs f12,-28(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -28, temp.u32);
	// ld r10,-32(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + -32);
	// std r10,0(r5)
	REX_STORE_U64(ctx.r5.u32 + 0, ctx.r10.u64);
	// lfs f13,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f9,12(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f9,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
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
	// fcmpu cr6,f8,f0
	ctx.cr6.compare(ctx.f8.f64, ctx.f0.f64);
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
	// rlwinm r7,r10,27,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x4;
	// rlwinm r6,r9,27,29,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x4;
	// rlwinm r10,r10,30,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x4;
	// rlwinm r9,r9,30,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x4;
	// or r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 | ctx.r10.u64;
	// or r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 | ctx.r9.u64;
	// lfsx f0,r8,r10
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f10,r11,r9
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f10.f64 = double(temp.f32);
	// fsel f0,f0,f12,f13
	ctx.f0.f64 = ctx.f0.f64 >= 0.0 ? ctx.f12.f64 : ctx.f13.f64;
	// fsel f13,f10,f9,f11
	ctx.f13.f64 = ctx.f10.f64 >= 0.0 ? ctx.f9.f64 : ctx.f11.f64;
	// stfs f0,-32(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// stfs f13,-28(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -28, temp.u32);
	// ld r11,-32(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + -32);
	// std r11,8(r5)
	REX_STORE_U64(ctx.r5.u32 + 8, ctx.r11.u64);
	// ld r30,-16(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821957B0) {
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
	ctx.lr = 0x821957B8;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// bl 0x823fbd18
	ctx.lr = 0x821957DC;
	sub_823FBD18(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r31,16
	ctx.r4.s64 = r31.s64 + 16;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// ld r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// std r9,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r11,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// bl 0x823fbd18
	ctx.lr = 0x82195804;
	sub_823FBD18(ctx, base);
	// ld r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// ld r7,8(r3)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r3.u32 + 8);
	// lfs f12,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lfs f8,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f8.f64 = double(temp.f32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r10,r10,16592
	ctx.r10.s64 = ctx.r10.s64 + 16592;
	// std r8,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// std r7,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r7.u64);
	// lfs f11,104(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f9.f64 = double(temp.f32);
	// lfs f13,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f7,f13,f12
	ctx.f7.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fadds f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// lfs f0,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fadds f12,f10,f11
	ctx.f12.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// fadds f6,f9,f8
	ctx.f6.f64 = double(float(ctx.f9.f64 + ctx.f8.f64));
	// fsubs f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// fmuls f10,f7,f7
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f7.f64));
	// fsubs f9,f9,f8
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f8.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmuls f8,f6,f0
	ctx.f8.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfs f8,96(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// ld r10,8(r9)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// fmadds f13,f11,f11,f10
	ctx.f13.f64 = double(float(std::fma(ctx.f11.f64, ctx.f11.f64, ctx.f10.f64)));
	// ld r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// std r11,0(r29)
	REX_STORE_U64(r29.u32 + 0, ctx.r11.u64);
	// fmadds f13,f9,f9,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f9.f64, ctx.f9.f64, ctx.f13.f64)));
	// std r10,8(r29)
	REX_STORE_U64(r29.u32 + 8, ctx.r10.u64);
	// fsqrts f13,f13
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,0(r28)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r28.u32 + 0, temp.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8219D628) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x8219d644
	if (ctx.cr6.lt) goto loc_8219D644;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_8219D644:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// b 0x8215fbf8
	sub_8215FBF8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8219DCD8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x82166f38
	ctx.lr = 0x8219DD00;
	sub_82166F38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8219ddcc
	if (ctx.cr0.eq) goto loc_8219DDCC;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r31,64
	ctx.r11.s64 = r31.s64 + 64;
	// lfs f13,64(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x8219dd40
	if (!ctx.cr6.eq) goto loc_8219DD40;
	// lfs f0,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x8219dd40
	if (!ctx.cr6.eq) goto loc_8219DD40;
	// lfs f0,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f13,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x8219dd44
	if (ctx.cr6.eq) goto loc_8219DD44;
loc_8219DD40:
	// li r10,1
	ctx.r10.s64 = 1;
loc_8219DD44:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8219ddcc
	if (ctx.cr0.eq) goto loc_8219DDCC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ld r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// ld r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// lwz r9,44(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 44);
	// std r8,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// std r10,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8219DD7C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,80(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// std r9,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// std r11,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8219DDA8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r30,24
	ctx.r11.u64 = r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8219ddcc
	if (ctx.cr0.eq) goto loc_8219DDCC;
	// lwz r3,36(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8219ddcc
	if (ctx.cr6.eq) goto loc_8219DDCC;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8219DDCC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8219DDCC:
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

DEFINE_REX_FUNC(sub_821A5B68) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-15384
	ctx.r3.s64 = ctx.r11.s64 + -15384;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821A65C8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-14596
	ctx.r3.s64 = ctx.r11.s64 + -14596;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821A6648) {
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
	// lwz r3,96(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r11,r11,-25276
	ctx.r11.s64 = ctx.r11.s64 + -25276;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x821a6688
	if (ctx.cr6.eq) goto loc_821A6688;
	// bl 0x821357c8
	ctx.lr = 0x821A6680;
	sub_821357C8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r11.u32);
loc_821A6688:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,-25316
	ctx.r11.s64 = ctx.r11.s64 + -25316;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x82125e40
	ctx.lr = 0x821A669C;
	sub_82125E40(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821a66ac
	if (ctx.cr0.eq) goto loc_821A66AC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x821A66AC;
	sub_8269CE98(ctx, base);
loc_821A66AC:
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

DEFINE_REX_FUNC(sub_821A87F0) {
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
	// bl 0x826a1ca8
	ctx.lr = 0x821A87F8;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x826a2ca0
	ctx.lr = 0x821A8800;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,156(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 156);
	// lfs f30,120(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 120);
	f30.f64 = double(temp.f32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f26,15048(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	f26.f64 = double(temp.f32);
	// fmr f29,f26
	f29.f64 = f26.f64;
	// ble cr6,0x821a893c
	if (!ctx.cr6.gt) goto loc_821A893C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r27,r3,152
	r27.s64 = ctx.r3.s64 + 152;
	// addi r28,r11,16592
	r28.s64 = ctx.r11.s64 + 16592;
	// addi r30,r3,128
	r30.s64 = ctx.r3.s64 + 128;
	// lfs f31,248(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 248);
	f31.f64 = double(temp.f32);
	// lfs f28,12(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 12);
	f28.f64 = double(temp.f32);
	// lfs f27,8(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 8);
	f27.f64 = double(temp.f32);
loc_821A8844:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x821a8c80
	ctx.lr = 0x821A8850;
	sub_821A8C80(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,0(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 0);
	// bl 0x821a8ba0
	ctx.lr = 0x821A8860;
	sub_821A8BA0(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// lwz r4,4(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821a8ba0
	ctx.lr = 0x821A8870;
	sub_821A8BA0(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,8(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 8);
	// bl 0x821a8ba0
	ctx.lr = 0x821A8880;
	sub_821A8BA0(ctx, base);
	// lfs f12,4(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r24.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,4(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lwz r10,156(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 156);
	// lfs f9,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// lfs f0,0(r24)
	temp.u32 = REX_LOAD_U32(r24.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// lfs f13,0(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f10,f10,f9
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f7,0(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f5,40(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 40);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f0,f7,f0
	ctx.f0.f64 = double(float(ctx.f7.f64 - ctx.f0.f64));
	// fcmpu cr6,f5,f26
	ctx.cr6.compare(ctx.f5.f64, f26.f64);
	// lfs f6,8(r24)
	temp.u32 = REX_LOAD_U32(r24.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f13,f13,f7
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f7.f64));
	// lfs f9,8(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f6,f30,f6
	ctx.f6.f64 = double(float(f30.f64 - ctx.f6.f64));
	// lfs f7,8(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f9,f30,f9
	ctx.f9.f64 = double(float(f30.f64 - ctx.f9.f64));
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
	// fmuls f5,f12,f11
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// rlwinm r8,r9,27,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x4;
	// fmuls f4,f0,f10
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// fmuls f3,f8,f13
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// rlwinm r9,r9,30,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x4;
	// fsubs f7,f30,f7
	ctx.f7.f64 = double(float(f30.f64 - ctx.f7.f64));
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r10.s32, ctx.xer);
	// addi r11,r28,256
	ctx.r11.s64 = r28.s64 + 256;
	// or r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 | ctx.r9.u64;
	// fmsubs f0,f0,f8,f5
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f8.f64, -ctx.f5.f64)));
	// lfsx f2,r11,r10
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f2.f64 = double(temp.f32);
	// fmsubs f13,f12,f13,f4
	ctx.f13.f64 = double(float(std::fma(ctx.f12.f64, ctx.f13.f64, -ctx.f4.f64)));
	// fmsubs f12,f10,f11,f3
	ctx.f12.f64 = double(float(std::fma(ctx.f10.f64, ctx.f11.f64, -ctx.f3.f64)));
	// fsel f2,f2,f27,f28
	ctx.f2.f64 = ctx.f2.f64 >= 0.0 ? f27.f64 : f28.f64;
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fabs f12,f12
	ctx.f12.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fmuls f0,f0,f6
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f6.f64));
	// fmuls f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// fmuls f12,f12,f7
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * f31.f64));
	// fmadds f0,f13,f31,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, f31.f64, ctx.f0.f64)));
	// fmadds f0,f12,f31,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, f31.f64, ctx.f0.f64)));
	// fmadds f29,f0,f2,f29
	f29.f64 = double(float(std::fma(ctx.f0.f64, ctx.f2.f64, f29.f64)));
	// blt cr6,0x821a8844
	if (ctx.cr6.lt) goto loc_821A8844;
loc_821A893C:
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x826a2cec
	ctx.lr = 0x821A894C;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_821B62D8) {
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
	// bl 0x826a1ca8
	ctx.lr = 0x821B62E0;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x826a2ca0
	ctx.lr = 0x821B62E8;
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,8
	ctx.r11.s64 = 8;
	// lwz r10,116(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 116);
	// addi r9,r1,200
	ctx.r9.s64 = ctx.r1.s64 + 200;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821B6308:
	// ldu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x821b6308
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821B6308;
	// lwa r10,140(r31)
	ctx.r10.s64 = int32_t(REX_LOAD_U32(r31.u32 + 140));
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// std r10,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// addi r30,r11,16592
	r30.s64 = ctx.r11.s64 + 16592;
	// lwa r9,136(r31)
	ctx.r9.s64 = int32_t(REX_LOAD_U32(r31.u32 + 136));
	// lfs f13,288(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 288);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lfd f0,96(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// std r9,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f12,96(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// lfs f0,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f13,f11
	ctx.f13.f64 = double(float(ctx.f11.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x821884b0
	ctx.lr = 0x821B6370;
	sub_821884B0(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r4,r11,176
	ctx.r4.s64 = ctx.r11.s64 + 176;
	// bl 0x8218cc20
	ctx.lr = 0x821B6380;
	sub_8218CC20(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// lfs f12,292(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 292);
	ctx.f12.f64 = double(temp.f32);
	// lfs f31,12(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 12);
	f31.f64 = double(temp.f32);
	// lfs f0,15048(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-19392(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -19392);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x821b63b0
	if (!ctx.cr6.gt) goto loc_821B63B0;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
	// fsubs f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fdivs f0,f31,f0
	ctx.f0.f64 = double(float(f31.f64 / ctx.f0.f64));
loc_821B63B0:
	// lfs f12,292(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 292);
	ctx.f12.f64 = double(temp.f32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f31,96(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fsubs f29,f31,f12
	f29.f64 = double(float(f31.f64 - ctx.f12.f64));
	// stfs f29,100(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f31,80(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r29,r1,176
	r29.s64 = ctx.r1.s64 + 176;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lfs f30,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	f30.f64 = double(temp.f32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stfs f30,112(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// stfs f30,128(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f29,132(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// addi r30,r1,160
	r30.s64 = ctx.r1.s64 + 160;
	// addi r28,r1,192
	r28.s64 = ctx.r1.s64 + 192;
	// lis r27,-32106
	r27.s64 = -2104098816;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// addi r31,r31,165
	r31.s64 = r31.s64 + 165;
	// fneg f28,f29
	f28.u64 = f29.u64 ^ 0x8000000000000000;
	// stfs f28,116(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f28,84(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,6096(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 6096);
	// fmuls f27,f0,f29
	f27.f64 = double(float(ctx.f0.f64 * f29.f64));
	// stfs f27,104(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// ld r25,0(r9)
	r25.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// stfs f27,136(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// ld r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// ld r26,0(r8)
	r26.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// ld r8,8(r8)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r8.u32 + 8);
	// std r25,0(r29)
	REX_STORE_U64(r29.u32 + 0, r25.u64);
	// fneg f26,f27
	f26.u64 = f27.u64 ^ 0x8000000000000000;
	// stfs f26,120(r1)
	temp.f32 = float(f26.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f26,88(r1)
	temp.f32 = float(f26.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// std r9,8(r29)
	REX_STORE_U64(r29.u32 + 8, ctx.r9.u64);
	// ld r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// ld r24,0(r11)
	r24.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// ld r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// std r26,0(r28)
	REX_STORE_U64(r28.u32 + 0, r26.u64);
	// std r8,8(r28)
	REX_STORE_U64(r28.u32 + 8, ctx.r8.u64);
	// std r9,0(r30)
	REX_STORE_U64(r30.u32 + 0, ctx.r9.u64);
	// std r24,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, r24.u64);
	// std r10,8(r30)
	REX_STORE_U64(r30.u32 + 8, ctx.r10.u64);
	// std r11,8(r7)
	REX_STORE_U64(ctx.r7.u32 + 8, ctx.r11.u64);
	// bl 0x82138400
	ctx.lr = 0x821B647C;
	sub_82138400(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// stfs f30,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f30,84(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// stfs f30,88(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// stfs f31,112(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// ld r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// stfs f30,116(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// stfs f30,120(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// ld r5,0(r10)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// addi r28,r1,80
	r28.s64 = ctx.r1.s64 + 80;
	// stfs f31,128(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// ld r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// stfs f28,132(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// addi r30,r1,176
	r30.s64 = ctx.r1.s64 + 176;
	// stfs f26,136(r1)
	temp.f32 = float(f26.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// ld r3,0(r9)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// stfs f30,80(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// ld r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// stfs f28,84(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r29,r1,192
	r29.s64 = ctx.r1.s64 + 192;
	// stfs f26,88(r1)
	temp.f32 = float(f26.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// std r6,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, ctx.r6.u64);
	// std r11,8(r8)
	REX_STORE_U64(ctx.r8.u32 + 8, ctx.r11.u64);
	// ld r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U64(r28.u32 + 0);
	// std r5,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r5.u64);
	// ld r8,8(r28)
	ctx.r8.u64 = REX_LOAD_U64(r28.u32 + 8);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// std r3,0(r30)
	REX_STORE_U64(r30.u32 + 0, ctx.r3.u64);
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// std r10,8(r7)
	REX_STORE_U64(ctx.r7.u32 + 8, ctx.r10.u64);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// std r9,8(r30)
	REX_STORE_U64(r30.u32 + 8, ctx.r9.u64);
	// std r11,0(r29)
	REX_STORE_U64(r29.u32 + 0, ctx.r11.u64);
	// std r8,8(r29)
	REX_STORE_U64(r29.u32 + 8, ctx.r8.u64);
	// lwz r3,6096(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 6096);
	// bl 0x82138400
	ctx.lr = 0x821B6520;
	sub_82138400(ctx, base);
	// stfs f30,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f31,96(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// stfs f29,100(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// stfs f27,104(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// stfs f31,84(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stfs f31,80(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r3,6096(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 6096);
	// stfs f30,112(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stfs f31,116(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// stfs f29,132(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// addi r30,r1,160
	r30.s64 = ctx.r1.s64 + 160;
	// stfs f31,120(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// ld r27,8(r10)
	r27.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// stfs f27,136(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// ld r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// stfs f31,88(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r29,r1,176
	r29.s64 = ctx.r1.s64 + 176;
	// addi r26,r1,192
	r26.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// std r27,8(r26)
	REX_STORE_U64(r26.u32 + 8, r27.u64);
	// ld r28,0(r9)
	r28.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// ld r31,0(r8)
	r31.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// ld r6,8(r11)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// ld r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// ld r8,8(r8)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r8.u32 + 8);
	// ld r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// std r28,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, r28.u64);
	// std r10,0(r26)
	REX_STORE_U64(r26.u32 + 0, ctx.r10.u64);
	// std r6,8(r29)
	REX_STORE_U64(r29.u32 + 8, ctx.r6.u64);
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// std r9,8(r7)
	REX_STORE_U64(ctx.r7.u32 + 8, ctx.r9.u64);
	// std r31,0(r30)
	REX_STORE_U64(r30.u32 + 0, r31.u64);
	// std r8,8(r30)
	REX_STORE_U64(r30.u32 + 8, ctx.r8.u64);
	// std r11,0(r29)
	REX_STORE_U64(r29.u32 + 0, ctx.r11.u64);
	// bl 0x82138400
	ctx.lr = 0x821B65C4;
	sub_82138400(ctx, base);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x826a2cec
	ctx.lr = 0x821B65D0;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_821D0920) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x821D0928;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,132(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 132);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821d0944
	if (ctx.cr6.eq) goto loc_821D0944;
	// bl 0x8269ce98
	ctx.lr = 0x821D0944;
	sub_8269CE98(ctx, base);
loc_821D0944:
	// li r30,0
	r30.s64 = 0;
	// stw r30,132(r31)
	REX_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r30,136(r31)
	REX_STORE_U32(r31.u32 + 136, r30.u32);
	// stw r30,140(r31)
	REX_STORE_U32(r31.u32 + 140, r30.u32);
	// lwz r3,116(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821d0964
	if (ctx.cr6.eq) goto loc_821D0964;
	// bl 0x8269ce98
	ctx.lr = 0x821D0964;
	sub_8269CE98(ctx, base);
loc_821D0964:
	// stw r30,116(r31)
	REX_STORE_U32(r31.u32 + 116, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,120(r31)
	REX_STORE_U32(r31.u32 + 120, r30.u32);
	// stw r30,124(r31)
	REX_STORE_U32(r31.u32 + 124, r30.u32);
	// bl 0x82178388
	ctx.lr = 0x821D0978;
	sub_82178388(ctx, base);
	// clrlwi. r11,r29,31
	ctx.r11.u64 = r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821d0988
	if (ctx.cr0.eq) goto loc_821D0988;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x821D0988;
	sub_8269CE98(ctx, base);
loc_821D0988:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_821D56B0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82197960
	ctx.lr = 0x821D56D0;
	sub_82197960(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821d5710
	ctx.lr = 0x821D56E0;
	sub_821D5710(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215efb0
	ctx.lr = 0x821D56EC;
	sub_8215EFB0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8215f0f0
	ctx.lr = 0x821D56F4;
	sub_8215F0F0(ctx, base);
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

DEFINE_REX_FUNC(sub_821D7818) {
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
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x826a2c88
	ctx.lr = 0x821D7828;
	// lfs f0,4(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f13,4(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f4,f13,f0
	ctx.f4.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f10,0(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fadds f7,f13,f0
	ctx.f7.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f9,0(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f5,0(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f2,f9,f10
	ctx.f2.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// lfs f6,8(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fadds f31,f9,f10
	f31.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// lfs f0,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lfs f13,8(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f10,f0,f5
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f5.f64));
	// lfs f12,8(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f13,f6
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f6.f64));
	// lfs f11,8(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f3,f11,f12
	ctx.f3.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// lfs f30,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	f30.f64 = double(temp.f32);
	// lfs f0,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fadds f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// fmuls f29,f4,f4
	f29.f64 = double(float(ctx.f4.f64 * ctx.f4.f64));
	// lfs f12,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f9,f0,f30
	ctx.f9.f64 = double(float(ctx.f0.f64 - f30.f64));
	// lfs f0,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f1,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f8,f12,f6
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f6.f64));
	// fmuls f24,f31,f0
	f24.f64 = double(float(f31.f64 * ctx.f0.f64));
	// lfs f28,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	f28.f64 = double(temp.f32);
	// fmuls f26,f7,f0
	f26.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// lfs f27,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	f27.f64 = double(temp.f32);
	// fsubs f12,f1,f5
	ctx.f12.f64 = double(float(ctx.f1.f64 - ctx.f5.f64));
	// lfs f1,920(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 920);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f31,f13,f10
	f31.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// fmuls f25,f11,f0
	f25.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmadds f29,f3,f3,f29
	f29.f64 = double(float(std::fma(ctx.f3.f64, ctx.f3.f64, f29.f64)));
	// fsubs f11,f28,f30
	ctx.f11.f64 = double(float(f28.f64 - f30.f64));
	// fsubs f5,f24,f5
	ctx.f5.f64 = double(float(f24.f64 - ctx.f5.f64));
	// fsubs f7,f26,f30
	ctx.f7.f64 = double(float(f26.f64 - f30.f64));
	// fmuls f28,f9,f12
	f28.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fmsubs f30,f8,f12,f31
	f30.f64 = double(float(std::fma(ctx.f8.f64, ctx.f12.f64, -f31.f64)));
	// fsubs f6,f25,f6
	ctx.f6.f64 = double(float(f25.f64 - ctx.f6.f64));
	// fmadds f31,f2,f2,f29
	f31.f64 = double(float(std::fma(ctx.f2.f64, ctx.f2.f64, f29.f64)));
	// fmuls f23,f11,f8
	f23.f64 = double(float(ctx.f11.f64 * ctx.f8.f64));
	// fmsubs f29,f11,f10,f28
	f29.f64 = double(float(std::fma(ctx.f11.f64, ctx.f10.f64, -f28.f64)));
	// fsqrts f31,f31
	f31.f64 = double(float(sqrt(f31.f64)));
	// fdivs f22,f27,f31
	f22.f64 = double(float(f27.f64 / f31.f64));
	// fmsubs f28,f13,f9,f23
	f28.f64 = double(float(std::fma(ctx.f13.f64, ctx.f9.f64, -f23.f64)));
	// fmuls f23,f31,f0
	f23.f64 = double(float(f31.f64 * ctx.f0.f64));
	// fmuls f0,f4,f22
	ctx.f0.f64 = double(float(ctx.f4.f64 * f22.f64));
	// fmuls f4,f3,f22
	ctx.f4.f64 = double(float(ctx.f3.f64 * f22.f64));
	// fmuls f3,f22,f2
	ctx.f3.f64 = double(float(f22.f64 * ctx.f2.f64));
	// fmuls f2,f30,f0
	ctx.f2.f64 = double(float(f30.f64 * ctx.f0.f64));
	// fmadds f2,f29,f4,f2
	ctx.f2.f64 = double(float(std::fma(f29.f64, ctx.f4.f64, ctx.f2.f64)));
	// fmadds f2,f28,f3,f2
	ctx.f2.f64 = double(float(std::fma(f28.f64, ctx.f3.f64, ctx.f2.f64)));
	// fcmpu cr6,f2,f1
	ctx.cr6.compare(ctx.f2.f64, ctx.f1.f64);
	// ble cr6,0x821d7918
	if (!ctx.cr6.gt) goto loc_821D7918;
	// fmr f1,f27
	ctx.f1.f64 = f27.f64;
	// b 0x821d792c
	goto loc_821D792C;
loc_821D7918:
	// lfs f1,1180(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1180);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f2,f1
	ctx.cr6.compare(ctx.f2.f64, ctx.f1.f64);
	// bge cr6,0x821d7a14
	if (!ctx.cr6.lt) goto loc_821D7A14;
	// lfs f1,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// fneg f2,f2
	ctx.f2.u64 = ctx.f2.u64 ^ 0x8000000000000000;
loc_821D792C:
	// fmuls f22,f13,f5
	ctx.fpscr.disableFlushMode();
	f22.f64 = double(float(ctx.f13.f64 * ctx.f5.f64));
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// fmuls f21,f7,f12
	f21.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// fmuls f20,f11,f6
	f20.f64 = double(float(ctx.f11.f64 * ctx.f6.f64));
	// lfs f31,15048(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	f31.f64 = double(temp.f32);
	// fmsubs f12,f6,f12,f22
	ctx.f12.f64 = double(float(std::fma(ctx.f6.f64, ctx.f12.f64, -f22.f64)));
	// fmsubs f11,f11,f5,f21
	ctx.f11.f64 = double(float(std::fma(ctx.f11.f64, ctx.f5.f64, -f21.f64)));
	// fmsubs f13,f13,f7,f20
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f7.f64, -f20.f64)));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmadds f12,f11,f4,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f11.f64, ctx.f4.f64, ctx.f12.f64)));
	// fmadds f13,f13,f3,f12
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f3.f64, ctx.f12.f64)));
	// fmuls f12,f13,f1
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// fcmpu cr6,f12,f31
	ctx.cr6.compare(ctx.f12.f64, f31.f64);
	// blt cr6,0x821d7a14
	if (ctx.cr6.lt) goto loc_821D7A14;
	// fmuls f13,f6,f10
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f10.f64));
	// fmuls f11,f9,f5
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f5.f64));
	// fmuls f22,f8,f7
	f22.f64 = double(float(ctx.f8.f64 * ctx.f7.f64));
	// fmsubs f13,f8,f5,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f8.f64, ctx.f5.f64, -ctx.f13.f64)));
	// fmsubs f11,f7,f10,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f7.f64, ctx.f10.f64, -ctx.f11.f64)));
	// fmsubs f10,f9,f6,f22
	ctx.f10.f64 = double(float(std::fma(ctx.f9.f64, ctx.f6.f64, -f22.f64)));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmadds f13,f11,f4,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f11.f64, ctx.f4.f64, ctx.f13.f64)));
	// fmadds f13,f10,f3,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f10.f64, ctx.f3.f64, ctx.f13.f64)));
	// fmuls f13,f13,f1
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, f31.f64);
	// blt cr6,0x821d7a14
	if (ctx.cr6.lt) goto loc_821D7A14;
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// fcmpu cr6,f13,f2
	ctx.cr6.compare(ctx.f13.f64, ctx.f2.f64);
	// bgt cr6,0x821d7a14
	if (ctx.cr6.gt) goto loc_821D7A14;
	// fmuls f13,f30,f7
	ctx.f13.f64 = double(float(f30.f64 * ctx.f7.f64));
	// fmuls f12,f2,f23
	ctx.f12.f64 = double(float(ctx.f2.f64 * f23.f64));
	// fmadds f13,f29,f6,f13
	ctx.f13.f64 = double(float(std::fma(f29.f64, ctx.f6.f64, ctx.f13.f64)));
	// fneg f11,f12
	ctx.f11.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fmadds f13,f28,f5,f13
	ctx.f13.f64 = double(float(std::fma(f28.f64, ctx.f5.f64, ctx.f13.f64)));
	// fmuls f13,f13,f1
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f11,f13
	ctx.cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// bgt cr6,0x821d7a14
	if (ctx.cr6.gt) goto loc_821D7A14;
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bgt cr6,0x821d7a14
	if (ctx.cr6.gt) goto loc_821D7A14;
	// fdivs f12,f27,f2
	ctx.f12.f64 = double(float(f27.f64 / ctx.f2.f64));
	// addi r11,r1,-128
	ctx.r11.s64 = ctx.r1.s64 + -128;
	// li r3,1
	ctx.r3.s64 = 1;
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmuls f12,f3,f13
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// fmuls f13,f4,f13
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// fadds f0,f0,f26
	ctx.f0.f64 = double(float(ctx.f0.f64 + f26.f64));
	// stfs f0,-124(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -124, temp.u32);
	// fadds f12,f12,f24
	ctx.f12.f64 = double(float(ctx.f12.f64 + f24.f64));
	// stfs f12,-128(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -128, temp.u32);
	// fadds f0,f13,f25
	ctx.f0.f64 = double(float(ctx.f13.f64 + f25.f64));
	// stfs f0,-120(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -120, temp.u32);
	// ld r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// std r10,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, ctx.r10.u64);
	// std r11,8(r8)
	REX_STORE_U64(ctx.r8.u32 + 8, ctx.r11.u64);
	// b 0x821d7a18
	goto loc_821D7A18;
loc_821D7A14:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821D7A18:
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x826a2cd4
	ctx.lr = 0x821D7A20;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821E9518) {
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
	ctx.lr = 0x821E9520;
	// stfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -88, f30.u64);
	// stfd f31,-80(r1)
	REX_STORE_U64(ctx.r1.u32 + -80, f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lwz r9,12(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r8,32(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lis r11,-32118
	ctx.r11.s64 = -2104885248;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// addi r25,r11,-2544
	r25.s64 = ctx.r11.s64 + -2544;
	// lfs f30,15048(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	f30.f64 = double(temp.f32);
	// lwz r26,12(r9)
	r26.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// fmr f31,f30
	f31.f64 = f30.f64;
	// ble cr6,0x821e96b4
	if (!ctx.cr6.gt) goto loc_821E96B4;
	// addi r24,r3,28
	r24.s64 = ctx.r3.s64 + 28;
loc_821E9560:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8228ca78
	ctx.lr = 0x821E956C;
	sub_8228CA78(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r10.s32, ctx.xer);
	// lfs f0,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fadds f31,f0,f31
	f31.f64 = double(float(ctx.f0.f64 + f31.f64));
	// blt cr6,0x821e9560
	if (ctx.cr6.lt) goto loc_821E9560;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r30,r11,16592
	r30.s64 = ctx.r11.s64 + 16592;
	// lfs f0,920(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 920);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(f31.f64, ctx.f0.f64);
	// ble cr6,0x821e96b4
	if (!ctx.cr6.gt) goto loc_821E96B4;
	// mulli r5,r26,48
	ctx.r5.s64 = static_cast<int64_t>(r26.u64 * static_cast<uint64_t>(48));
	// lwz r3,52(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 52);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826a2e60
	ctx.lr = 0x821E95AC;
	sub_826A2E60(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lfs f0,172(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 172);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r27,0
	r27.s64 = 0;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// ld r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// lfs f13,596(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 596);
	ctx.f13.f64 = double(temp.f32);
	// ld r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// std r11,64(r31)
	REX_STORE_U64(r31.u32 + 64, ctx.r11.u64);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// ld r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// ld r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// addi r30,r31,64
	r30.s64 = r31.s64 + 64;
	// std r10,80(r31)
	REX_STORE_U64(r31.u32 + 80, ctx.r10.u64);
	// std r9,72(r31)
	REX_STORE_U64(r31.u32 + 72, ctx.r9.u64);
	// addi r29,r30,16
	r29.s64 = r30.s64 + 16;
	// std r11,88(r31)
	REX_STORE_U64(r31.u32 + 88, ctx.r11.u64);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821e9684
	if (!ctx.cr6.gt) goto loc_821E9684;
loc_821E960C:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8228ca78
	ctx.lr = 0x821E9618;
	sub_8228CA78(ctx, base);
	// lwz r28,0(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f0,32(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// ble cr6,0x821e9674
	if (!ctx.cr6.gt) goto loc_821E9674;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// lfs f1,28(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,16(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 16);
	// bl 0x821dad68
	ctx.lr = 0x821E9638;
	sub_821DAD68(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r6,52(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lfs f1,32(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821ec4d0
	ctx.lr = 0x821E964C;
	sub_821EC4D0(ctx, base);
	// lwz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 16);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r28,r11,32
	r28.s64 = ctx.r11.s64 + 32;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82176218
	ctx.lr = 0x821E9664;
	sub_82176218(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r28,16
	ctx.r3.s64 = r28.s64 + 16;
	// bl 0x82176218
	ctx.lr = 0x821E9674;
	sub_82176218(ctx, base);
loc_821E9674:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821e960c
	if (ctx.cr6.lt) goto loc_821E960C;
loc_821E9684:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// ble cr6,0x821e96cc
	if (!ctx.cr6.gt) goto loc_821E96CC;
	// li r29,0
	r29.s64 = 0;
	// mr r30,r26
	r30.u64 = r26.u64;
loc_821E9694:
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + r29.u64;
	// bl 0x821e9248
	ctx.lr = 0x821E96A4;
	sub_821E9248(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r29,r29,48
	r29.s64 = r29.s64 + 48;
	// bne 0x821e9694
	if (!ctx.cr0.eq) goto loc_821E9694;
	// b 0x821e96cc
	goto loc_821E96CC;
loc_821E96B4:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r3,52(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r4,28(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mulli r5,r10,48
	ctx.r5.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(48));
	// bl 0x826a1e70
	ctx.lr = 0x821E96CC;
	sub_826A1E70(ctx, base);
loc_821E96CC:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821e9764
	if (ctx.cr6.eq) goto loc_821E9764;
	// li r27,0
	r27.s64 = 0;
	// ble cr6,0x821e9764
	if (!ctx.cr6.gt) goto loc_821E9764;
	// addi r24,r31,40
	r24.s64 = r31.s64 + 40;
loc_821E96E4:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8228ca78
	ctx.lr = 0x821E96F0;
	sub_8228CA78(ctx, base);
	// lwz r30,0(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f0,32(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// ble cr6,0x821e9754
	if (!ctx.cr6.gt) goto loc_821E9754;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// lfs f1,28(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,16(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 16);
	// bl 0x821dad68
	ctx.lr = 0x821E9710;
	sub_821DAD68(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r6,52(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lfs f1,32(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821ec618
	ctx.lr = 0x821E9724;
	sub_821EC618(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// addi r29,r31,64
	r29.s64 = r31.s64 + 64;
	// addi r30,r11,32
	r30.s64 = ctx.r11.s64 + 32;
	// addi r28,r29,16
	r28.s64 = r29.s64 + 16;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82176218
	ctx.lr = 0x821E9744;
	sub_82176218(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r30,16
	ctx.r3.s64 = r30.s64 + 16;
	// bl 0x82176218
	ctx.lr = 0x821E9754;
	sub_82176218(ctx, base);
loc_821E9754:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821e96e4
	if (ctx.cr6.lt) goto loc_821E96E4;
loc_821E9764:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_821FC660) {
	REX_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mulli r11,r11,28
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(28));
	// li r5,0
	ctx.r5.s64 = 0;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// b 0x82120b20
	sub_82120B20(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821FD360) {
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
	// bl 0x821fd3f8
	ctx.lr = 0x821FD380;
	sub_821FD3F8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821fd390
	if (ctx.cr0.eq) goto loc_821FD390;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x821FD390;
	sub_8269CE98(ctx, base);
loc_821FD390:
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

DEFINE_REX_FUNC(sub_82200460) {
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
	// blt cr6,0x82200490
	if (ctx.cr6.lt) goto loc_82200490;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822004a8
	if (ctx.cr6.lt) goto loc_822004A8;
loc_82200490:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r4,r11,26968
	ctx.r4.s64 = ctx.r11.s64 + 26968;
	// addi r3,r10,28176
	ctx.r3.s64 = ctx.r10.s64 + 28176;
	// li r5,650
	ctx.r5.s64 = 650;
	// bl 0x821231d0
	ctx.lr = 0x822004A8;
	sub_821231D0(ctx, base);
loc_822004A8:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_82203B58) {
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
	ctx.lr = 0x82203B60;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r27,0
	r27.s64 = 0;
	// lwz r29,4(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r31,r29
	r31.u64 = r29.u64;
	// lbz r11,77(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 77);
	// b 0x82203bd0
	goto loc_82203BD0;
loc_82203B80:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x82203cd8
	ctx.lr = 0x82203B8C;
	sub_82203CD8(ctx, base);
	// lwz r3,52(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 52);
	// addi r30,r29,16
	r30.s64 = r29.s64 + 16;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
	// beq cr6,0x82203ba4
	if (ctx.cr6.eq) goto loc_82203BA4;
	// bl 0x8269ce98
	ctx.lr = 0x82203BA4;
	sub_8269CE98(ctx, base);
loc_82203BA4:
	// stw r27,36(r30)
	REX_STORE_U32(r30.u32 + 36, r27.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r27,40(r30)
	REX_STORE_U32(r30.u32 + 40, r27.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r27,44(r30)
	REX_STORE_U32(r30.u32 + 44, r27.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82120ac0
	ctx.lr = 0x82203BC0;
	sub_82120AC0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8269ce98
	ctx.lr = 0x82203BC8;
	sub_8269CE98(ctx, base);
	// lbz r11,77(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 77);
	// mr r29,r31
	r29.u64 = r31.u64;
loc_82203BD0:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82203b80
	if (ctx.cr0.eq) goto loc_82203B80;
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// stw r11,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// stw r11,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// stw r11,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// stw r27,8(r28)
	REX_STORE_U32(r28.u32 + 8, r27.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82206090) {
	REX_FUNC_PROLOGUE();
	// lbz r3,109(r3)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r3.u32 + 109);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822066B0) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120a20
	ctx.lr = 0x822066DC;
	sub_82120A20(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822066f4
	if (!ctx.cr6.eq) goto loc_822066F4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8220670c
	goto loc_8220670C;
loc_822066F4:
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,40
	ctx.r4.s64 = ctx.r11.s64 + 40;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82120b20
	ctx.lr = 0x82206708;
	sub_82120B20(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_8220670C:
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

DEFINE_REX_FUNC(sub_82208A88) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-14444
	ctx.r3.s64 = ctx.r11.s64 + -14444;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82208C88) {
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
	// li r3,256
	ctx.r3.s64 = 256;
	// bl 0x822f6280
	ctx.lr = 0x82208C9C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82208cac
	if (ctx.cr0.eq) goto loc_82208CAC;
	// bl 0x82208d10
	ctx.lr = 0x82208CA8;
	sub_82208D10(ctx, base);
	// b 0x82208cb0
	goto loc_82208CB0;
loc_82208CAC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82208CB0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8220AD10) {
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
	ctx.lr = 0x8220AD18;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x8220AD30;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r24,r11,23080
	r24.s64 = ctx.r11.s64 + 23080;
	// addi r26,r10,23076
	r26.s64 = ctx.r10.s64 + 23076;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r23,r10,1624
	r23.s64 = ctx.r10.s64 + 1624;
	// addi r25,r9,-19348
	r25.s64 = ctx.r9.s64 + -19348;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lbz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 124);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r27,r11,16492
	r27.s64 = ctx.r11.s64 + 16492;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// beq 0x8220aea4
	if (ctx.cr0.eq) goto loc_8220AEA4;
	// bl 0x8215f338
	ctx.lr = 0x8220AD70;
	sub_8215F338(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,16528
	ctx.r4.s64 = ctx.r11.s64 + 16528;
	// bl 0x8215f338
	ctx.lr = 0x8220AD7C;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x8220AD80;
	sub_8215FA30(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x8215f338
	ctx.lr = 0x8220AD90;
	sub_8215F338(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,16576
	ctx.r4.s64 = ctx.r11.s64 + 16576;
	// bl 0x8215f338
	ctx.lr = 0x8220AD9C;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x8220ADA0;
	sub_8215FA30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// addi r4,r11,32388
	ctx.r4.s64 = ctx.r11.s64 + 32388;
	// bl 0x8215f338
	ctx.lr = 0x8220ADB4;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x8220ADB8;
	sub_8215FA30(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x8215f338
	ctx.lr = 0x8220ADC8;
	sub_8215F338(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,16536
	ctx.r4.s64 = ctx.r11.s64 + 16536;
	// bl 0x8215f338
	ctx.lr = 0x8220ADD4;
	sub_8215F338(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8220ade8
	if (!ctx.cr6.eq) goto loc_8220ADE8;
	// lbz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 8);
	// b 0x8220adec
	goto loc_8220ADEC;
loc_8220ADE8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8220ADEC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8220ae3c
	if (ctx.cr0.eq) goto loc_8220AE3C;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6272(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6272);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,108(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220AE0C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,-17296
	ctx.r4.s64 = ctx.r11.s64 + -17296;
	// bl 0x8215f338
	ctx.lr = 0x8220AE18;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x8220AE1C;
	sub_8215FA30(ctx, base);
	// lwz r11,132(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 132);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r10,22808
	ctx.r4.s64 = ctx.r10.s64 + 22808;
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// bl 0x8215f338
	ctx.lr = 0x8220AE34;
	sub_8215F338(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// b 0x8220afdc
	goto loc_8220AFDC;
loc_8220AE3C:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,16568
	ctx.r4.s64 = ctx.r11.s64 + 16568;
	// bl 0x82125d00
	ctx.lr = 0x8220AE4C;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8220ae9c
	if (!ctx.cr0.eq) goto loc_8220AE9C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,32420
	ctx.r4.s64 = ctx.r11.s64 + 32420;
	// bl 0x82125d00
	ctx.lr = 0x8220AE64;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8220ae74
	if (!ctx.cr0.eq) goto loc_8220AE74;
loc_8220AE6C:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// b 0x8220afb4
	goto loc_8220AFB4;
loc_8220AE74:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,32428
	ctx.r4.s64 = ctx.r11.s64 + 32428;
	// bl 0x82125d00
	ctx.lr = 0x8220AE84;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8220ae94
	if (!ctx.cr0.eq) goto loc_8220AE94;
loc_8220AE8C:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// b 0x8220afb4
	goto loc_8220AFB4;
loc_8220AE94:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x8220af9c
	goto loc_8220AF9C;
loc_8220AE9C:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// b 0x8220aff4
	goto loc_8220AFF4;
loc_8220AEA4:
	// bl 0x8215f338
	ctx.lr = 0x8220AEA8;
	sub_8215F338(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,16528
	ctx.r4.s64 = ctx.r11.s64 + 16528;
	// bl 0x8215f338
	ctx.lr = 0x8220AEB4;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x8220AEB8;
	sub_8215FA30(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x8215f338
	ctx.lr = 0x8220AEC8;
	sub_8215F338(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,16576
	ctx.r4.s64 = ctx.r11.s64 + 16576;
	// bl 0x8215f338
	ctx.lr = 0x8220AED4;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x8220AED8;
	sub_8215FA30(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x8215f338
	ctx.lr = 0x8220AEE8;
	sub_8215F338(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r22,r11,20280
	r22.s64 = ctx.r11.s64 + 20280;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x8215f338
	ctx.lr = 0x8220AEF8;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x8220AEFC;
	sub_8215FA30(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x8215f338
	ctx.lr = 0x8220AF0C;
	sub_8215F338(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,16176
	ctx.r4.s64 = ctx.r11.s64 + 16176;
	// bl 0x8215f338
	ctx.lr = 0x8220AF18;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x8220AF1C;
	sub_8215FA30(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82125d00
	ctx.lr = 0x8220AF2C;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8220af50
	if (!ctx.cr0.eq) goto loc_8220AF50;
	// lwz r11,132(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 132);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r10,22808
	ctx.r4.s64 = ctx.r10.s64 + 22808;
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// bl 0x8215f338
	ctx.lr = 0x8220AF48;
	sub_8215F338(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// b 0x8220afdc
	goto loc_8220AFDC;
loc_8220AF50:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,16568
	ctx.r4.s64 = ctx.r11.s64 + 16568;
	// bl 0x82125d00
	ctx.lr = 0x8220AF60;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8220afc4
	if (!ctx.cr0.eq) goto loc_8220AFC4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,32420
	ctx.r4.s64 = ctx.r11.s64 + 32420;
	// bl 0x82125d00
	ctx.lr = 0x8220AF78;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8220ae6c
	if (ctx.cr0.eq) goto loc_8220AE6C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,32428
	ctx.r4.s64 = ctx.r11.s64 + 32428;
	// bl 0x82125d00
	ctx.lr = 0x8220AF90;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8220ae8c
	if (ctx.cr0.eq) goto loc_8220AE8C;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_8220AF9C:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,32436
	ctx.r4.s64 = ctx.r11.s64 + 32436;
	// bl 0x82125d00
	ctx.lr = 0x8220AFA8;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8220b004
	if (!ctx.cr0.eq) goto loc_8220B004;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
loc_8220AFB4:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120c08
	ctx.lr = 0x8220AFC0;
	sub_82120C08(ctx, base);
	// b 0x8220b004
	goto loc_8220B004;
loc_8220AFC4:
	// lwz r11,128(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 128);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r10,22808
	ctx.r4.s64 = ctx.r10.s64 + 22808;
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// bl 0x8215f338
	ctx.lr = 0x8220AFD8;
	sub_8215F338(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
loc_8220AFDC:
	// bl 0x8215f2d0
	ctx.lr = 0x8220AFE0;
	sub_8215F2D0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,32412
	ctx.r4.s64 = ctx.r11.s64 + 32412;
	// bl 0x8215f338
	ctx.lr = 0x8220AFEC;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x8220AFF0;
	sub_8215FA30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_8220AFF4:
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120b20
	ctx.lr = 0x8220B004;
	sub_82120B20(ctx, base);
loc_8220B004:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r31,-1
	r31.s64 = -1;
	// bl 0x82125d00
	ctx.lr = 0x8220B014;
	sub_82125D00(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// and r31,r11,r31
	r31.u64 = ctx.r11.u64 & r31.u64;
	// bl 0x82125d00
	ctx.lr = 0x8220B02C;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8220b038
	if (!ctx.cr0.eq) goto loc_8220B038;
	// li r31,1
	r31.s64 = 1;
loc_8220B038:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82125d00
	ctx.lr = 0x8220B044;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8220b050
	if (!ctx.cr0.eq) goto loc_8220B050;
	// li r31,2
	r31.s64 = 2;
loc_8220B050:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x8220B060;
	sub_82120AC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_82227E40) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82227E48;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82178268
	ctx.lr = 0x82227E58;
	sub_82178268(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r11,r11,-23804
	ctx.r11.s64 = ctx.r11.s64 + -23804;
	// stw r10,116(r30)
	REX_STORE_U32(r30.u32 + 116, ctx.r10.u32);
	// li r3,100
	ctx.r3.s64 = 100;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x82227E74;
	sub_822F6280(ctx, base);
	// li r29,0
	r29.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82227e98
	if (ctx.cr0.eq) goto loc_82227E98;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,100
	ctx.r5.s64 = 100;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x821dc550
	ctx.lr = 0x82227E90;
	sub_821DC550(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82227e9c
	goto loc_82227E9C;
loc_82227E98:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
loc_82227E9C:
	// stw r4,112(r30)
	REX_STORE_U32(r30.u32 + 112, ctx.r4.u32);
	// addi r3,r30,96
	ctx.r3.s64 = r30.s64 + 96;
	// bl 0x821d3988
	ctx.lr = 0x82227EA8;
	sub_821D3988(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x82227EB0;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x82227f24
	if (ctx.cr0.eq) goto loc_82227F24;
	// stw r29,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-19180
	ctx.r4.s64 = ctx.r11.s64 + -19180;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821dbb48
	ctx.lr = 0x82227ED4;
	sub_821DBB48(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r3,12
	ctx.r3.s64 = 12;
	// addi r11,r11,-23836
	ctx.r11.s64 = ctx.r11.s64 + -23836;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x82227EE8;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82227f14
	if (ctx.cr0.eq) goto loc_82227F14;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r30,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// addi r11,r11,-15424
	ctx.r11.s64 = ctx.r11.s64 + -15424;
	// addi r10,r10,32680
	ctx.r10.s64 = ctx.r10.s64 + 32680;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82227f18
	goto loc_82227F18;
loc_82227F14:
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
loc_82227F18:
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// stw r11,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r11.u32);
	// b 0x82227f28
	goto loc_82227F28;
loc_82227F24:
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
loc_82227F28:
	// lwz r11,112(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 112);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r11,80(r10)
	REX_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// bl 0x82264568
	ctx.lr = 0x82227F40;
	sub_82264568(ctx, base);
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x822f6280
	ctx.lr = 0x82227F48;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x82227f80
	if (ctx.cr0.eq) goto loc_82227F80;
	// stw r29,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-19168
	ctx.r4.s64 = ctx.r11.s64 + -19168;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821dbb48
	ctx.lr = 0x82227F6C;
	sub_821DBB48(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// addi r11,r11,-23824
	ctx.r11.s64 = ctx.r11.s64 + -23824;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// b 0x82227f84
	goto loc_82227F84;
loc_82227F80:
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
loc_82227F84:
	// lwz r11,112(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 112);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r11,80(r10)
	REX_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// bl 0x82264568
	ctx.lr = 0x82227F9C;
	sub_82264568(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8222D8F0) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lhz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bne cr6,0x8222d954
	if (!ctx.cr6.eq) goto loc_8222D954;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8217f7f0
	ctx.lr = 0x8222D924;
	sub_8217F7F0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r11,-21320
	ctx.r3.s64 = ctx.r11.s64 + -21320;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82162af8
	ctx.lr = 0x8222D938;
	sub_82162AF8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x8222d94c
	if (!ctx.cr6.eq) goto loc_8222D94C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,178(r30)
	REX_STORE_U8(r30.u32 + 178, ctx.r11.u8);
loc_8222D94C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x8222d958
	goto loc_8222D958;
loc_8222D954:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8222D958:
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

DEFINE_REX_FUNC(sub_82231A08) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stb r11,167(r4)
	REX_STORE_U8(ctx.r4.u32 + 167, ctx.r11.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822321D0) {
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
	ctx.lr = 0x822321D8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// bge cr6,0x822322b4
	if (!ctx.cr6.lt) goto loc_822322B4;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8223220c
	if (ctx.cr6.eq) goto loc_8223220C;
	// li r4,16
	ctx.r4.s64 = 16;
	// rlwinm r3,r26,5,0,26
	ctx.r3.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 5) & 0xFFFFFFE0;
	// bl 0x8269d1d0
	ctx.lr = 0x82232204;
	sub_8269D1D0(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// b 0x82232210
	goto loc_82232210;
loc_8223220C:
	// li r27,0
	r27.s64 = 0;
loc_82232210:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8223225c
	if (!ctx.cr6.gt) goto loc_8223225C;
	// li r30,0
	r30.s64 = 0;
	// mr r31,r27
	r31.u64 = r27.u64;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
loc_82232228:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8223224c
	if (ctx.cr6.eq) goto loc_8223224C;
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// bl 0x82120d70
	ctx.lr = 0x8223224C;
	sub_82120D70(ctx, base);
loc_8223224C:
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r30,r30,32
	r30.s64 = r30.s64 + 32;
	// addi r31,r31,32
	r31.s64 = r31.s64 + 32;
	// bne 0x82232228
	if (!ctx.cr0.eq) goto loc_82232228;
loc_8223225C:
	// lwz r31,0(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// ble cr6,0x82232290
	if (!ctx.cr6.gt) goto loc_82232290;
	// li r30,0
	r30.s64 = 0;
loc_8223226C:
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82120ac0
	ctx.lr = 0x82232284;
	sub_82120AC0(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r30,r30,32
	r30.s64 = r30.s64 + 32;
	// bne 0x8223226c
	if (!ctx.cr0.eq) goto loc_8223226C;
loc_82232290:
	// lbz r11,12(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822322a4
	if (ctx.cr0.eq) goto loc_822322A4;
	// lwz r3,8(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 8);
	// bl 0x8269d1b8
	ctx.lr = 0x822322A4;
	sub_8269D1B8(ctx, base);
loc_822322A4:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r27,8(r28)
	REX_STORE_U32(r28.u32 + 8, r27.u32);
	// stw r26,4(r28)
	REX_STORE_U32(r28.u32 + 4, r26.u32);
	// stb r11,12(r28)
	REX_STORE_U8(r28.u32 + 12, ctx.r11.u8);
loc_822322B4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82238648) {
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
	// li r3,3912
	ctx.r3.s64 = 3912;
	// bl 0x822f6280
	ctx.lr = 0x8223865C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8223866c
	if (ctx.cr0.eq) goto loc_8223866C;
	// bl 0x82238680
	ctx.lr = 0x82238668;
	sub_82238680(ctx, base);
	// b 0x82238670
	goto loc_82238670;
loc_8223866C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82238670:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8223B590) {
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
	ctx.lr = 0x8223B598;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// addi r11,r11,-16896
	ctx.r11.s64 = ctx.r11.s64 + -16896;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lwz r4,3936(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 3936);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,6040(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 6040);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223B5CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,3908
	ctx.r3.s64 = r31.s64 + 3908;
	// bl 0x82120ac0
	ctx.lr = 0x8223B5DC;
	sub_82120AC0(ctx, base);
	// addi r30,r31,3876
	r30.s64 = r31.s64 + 3876;
	// li r27,0
	r27.s64 = 0;
	// lwz r29,3876(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 3876);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x8223b61c
	if (!ctx.cr6.gt) goto loc_8223B61C;
	// mr r28,r27
	r28.u64 = r27.u64;
loc_8223B5F4:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + r28.u64;
	// lwzx r11,r11,r28
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r28.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223B610;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r28,r28,336
	r28.s64 = r28.s64 + 336;
	// bne 0x8223b5f4
	if (!ctx.cr0.eq) goto loc_8223B5F4;
loc_8223B61C:
	// lbz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8223b630
	if (ctx.cr0.eq) goto loc_8223B630;
	// lwz r3,8(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 8);
	// bl 0x8269d1b8
	ctx.lr = 0x8223B630;
	sub_8269D1B8(ctx, base);
loc_8223B630:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r27,0(r30)
	REX_STORE_U32(r30.u32 + 0, r27.u32);
	// stw r27,4(r30)
	REX_STORE_U32(r30.u32 + 4, r27.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r27,8(r30)
	REX_STORE_U32(r30.u32 + 8, r27.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stb r11,12(r30)
	REX_STORE_U8(r30.u32 + 12, ctx.r11.u8);
	// addi r3,r31,3832
	ctx.r3.s64 = r31.s64 + 3832;
	// bl 0x82120ac0
	ctx.lr = 0x8223B654;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,3804
	ctx.r3.s64 = r31.s64 + 3804;
	// bl 0x82120ac0
	ctx.lr = 0x8223B664;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,3776
	ctx.r3.s64 = r31.s64 + 3776;
	// bl 0x82120ac0
	ctx.lr = 0x8223B674;
	sub_82120AC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82278050
	ctx.lr = 0x8223B67C;
	sub_82278050(ctx, base);
	// clrlwi. r11,r26,31
	ctx.r11.u64 = r26.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8223b68c
	if (ctx.cr0.eq) goto loc_8223B68C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8223B68C;
	sub_8269CE98(ctx, base);
loc_8223B68C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_822434C8) {
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
	// blt cr6,0x822434f8
	if (ctx.cr6.lt) goto loc_822434F8;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82243510
	if (ctx.cr6.lt) goto loc_82243510;
loc_822434F8:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r11,-25320
	ctx.r4.s64 = ctx.r11.s64 + -25320;
	// addi r3,r10,-25252
	ctx.r3.s64 = ctx.r10.s64 + -25252;
	// li r5,111
	ctx.r5.s64 = 111;
	// bl 0x821231d0
	ctx.lr = 0x82243510;
	sub_821231D0(ctx, base);
loc_82243510:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm r10,r31,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
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

DEFINE_REX_FUNC(sub_82245210) {
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
	// li r3,120
	ctx.r3.s64 = 120;
	// bl 0x822f6280
	ctx.lr = 0x82245224;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82245234
	if (ctx.cr0.eq) goto loc_82245234;
	// bl 0x82245248
	ctx.lr = 0x82245230;
	sub_82245248(ctx, base);
	// b 0x82245238
	goto loc_82245238;
loc_82245234:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82245238:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82246600) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82246608;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,116(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 116);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822466d4
	if (ctx.cr0.eq) goto loc_822466D4;
	// li r31,0
	r31.s64 = 0;
	// stw r4,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r31,116(r29)
	REX_STORE_U8(r29.u32 + 116, r31.u8);
	// lwz r11,128(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 128);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x821b2d80
	ctx.lr = 0x82246638;
	sub_821B2D80(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x822466d4
	if (!ctx.cr6.eq) goto loc_822466D4;
	// lis r30,-32106
	r30.s64 = -2104098816;
	// lwz r3,6152(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6152);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,132(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 132);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82246658;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x822466d4
	if (!ctx.cr0.gt) goto loc_822466D4;
	// addi r29,r29,120
	r29.s64 = r29.s64 + 120;
loc_82246664:
	// lwz r3,6152(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6152);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,136(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224667C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224668C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82125d00
	ctx.lr = 0x82246698;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r3,6152(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6152);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// beq 0x822466c4
	if (ctx.cr0.eq) goto loc_822466C4;
	// lwz r11,132(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 132);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822466B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r31,r3
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x82246664
	if (ctx.cr6.lt) goto loc_82246664;
	// b 0x822466d4
	goto loc_822466D4;
loc_822466C4:
	// lwz r11,160(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 160);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822466D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822466D4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8224F948) {
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
	// li r11,8
	ctx.r11.s64 = 8;
	// lwz r10,128(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 128);
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8224F970:
	// ldu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x8224f970
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8224F970;
	// addi r4,r31,576
	ctx.r4.s64 = r31.s64 + 576;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8216d040
	ctx.lr = 0x8224F988;
	sub_8216D040(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lwz r11,468(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 468);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r11,320
	ctx.r7.s64 = ctx.r11.s64 + 320;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lfs f0,15048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// ld r10,8(r9)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// ld r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// std r9,320(r11)
	REX_STORE_U64(ctx.r11.u32 + 320, ctx.r9.u64);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// std r10,328(r11)
	REX_STORE_U64(ctx.r11.u32 + 328, ctx.r10.u64);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r11,468(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 468);
	// ld r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// ld r9,8(r8)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r8.u32 + 8);
	// addi r8,r11,336
	ctx.r8.s64 = ctx.r11.s64 + 336;
	// std r10,336(r11)
	REX_STORE_U64(ctx.r11.u32 + 336, ctx.r10.u64);
	// std r9,344(r11)
	REX_STORE_U64(ctx.r11.u32 + 344, ctx.r9.u64);
	// bl 0x821c3ec8
	ctx.lr = 0x8224F9F4;
	sub_821C3EC8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,468(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 468);
	// bl 0x822c0f18
	ctx.lr = 0x8224FA00;
	sub_822C0F18(ctx, base);
	// lwz r10,464(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 464);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,816(r10)
	REX_STORE_U8(ctx.r10.u32 + 816, ctx.r11.u8);
	// lwz r3,136(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 136);
	// bl 0x822ef0b8
	ctx.lr = 0x8224FA14;
	sub_822EF0B8(ctx, base);
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

DEFINE_REX_FUNC(sub_822536D8) {
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
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r11,r11,-10588
	ctx.r11.s64 = ctx.r11.s64 + -10588;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82253710
	if (ctx.cr6.eq) goto loc_82253710;
	// bl 0x82253748
	ctx.lr = 0x82253710;
	sub_82253748(ctx, base);
loc_82253710:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// clrlwi. r10,r30,31
	ctx.r10.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,30860
	ctx.r11.s64 = ctx.r11.s64 + 30860;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// beq 0x8225372c
	if (ctx.cr0.eq) goto loc_8225372C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8225372C;
	sub_8269CE98(ctx, base);
loc_8225372C:
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

DEFINE_REX_FUNC(sub_82255680) {
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
	ctx.lr = 0x822556A8;
	sub_8216B740(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r11,r11,-22064
	ctx.r11.s64 = ctx.r11.s64 + -22064;
loc_822556B0:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// beq 0x822556d4
	if (ctx.cr0.eq) goto loc_822556D4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822556b0
	if (ctx.cr6.eq) goto loc_822556B0;
loc_822556D4:
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82255730
	if (!ctx.cr0.eq) goto loc_82255730;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6200(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6200);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822556F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82255730
	if (!ctx.cr6.eq) goto loc_82255730;
	// lbz r11,133(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 133);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82255730
	if (!ctx.cr0.eq) goto loc_82255730;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// stb r11,133(r31)
	REX_STORE_U8(r31.u32 + 133, ctx.r11.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,6268(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 6268);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82255730;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82255730:
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

DEFINE_REX_FUNC(sub_8225AB08) {
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
	ctx.lr = 0x8225AB10;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r22,-32106
	r22.s64 = -2104098816;
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// li r23,0
	r23.s64 = 0;
	// lwz r3,6284(r22)
	ctx.r3.u64 = REX_LOAD_U32(r22.u32 + 6284);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225AB34;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x8225ac84
	if (!ctx.cr0.gt) goto loc_8225AC84;
	// lis r8,-32106
	ctx.r8.s64 = -2104098816;
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lis r24,-32106
	r24.s64 = -2104098816;
	// addi r30,r8,1624
	r30.s64 = ctx.r8.s64 + 1624;
	// addi r27,r7,-31444
	r27.s64 = ctx.r7.s64 + -31444;
	// addi r26,r9,-26752
	r26.s64 = ctx.r9.s64 + -26752;
	// addi r29,r10,-27048
	r29.s64 = ctx.r10.s64 + -27048;
	// addi r25,r11,-13316
	r25.s64 = ctx.r11.s64 + -13316;
loc_8225AB68:
	// lwz r3,6284(r22)
	ctx.r3.u64 = REX_LOAD_U32(r22.u32 + 6284);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225AB80;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,460(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 460);
	// bl 0x821fd140
	ctx.lr = 0x8225AB90;
	sub_821FD140(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225ac64
	if (ctx.cr0.eq) goto loc_8225AC64;
	// lwz r3,6080(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 6080);
	// lwz r11,460(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 460);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r28,128(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 128);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,32(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225ABB8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8225ac64
	if (!ctx.cr0.eq) goto loc_8225AC64;
	// lwz r11,156(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8225ac64
	if (ctx.cr6.eq) goto loc_8225AC64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215f338
	ctx.lr = 0x8225ABD8;
	sub_8215F338(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8215f338
	ctx.lr = 0x8225ABE0;
	sub_8215F338(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215f338
	ctx.lr = 0x8225ABF0;
	sub_8215F338(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8215f338
	ctx.lr = 0x8225ABF8;
	sub_8215F338(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8225ac1c
	if (!ctx.cr6.eq) goto loc_8225AC1C;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// b 0x8225ac20
	goto loc_8225AC20;
loc_8225AC1C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8225AC20:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8225ac64
	if (!ctx.cr6.eq) goto loc_8225AC64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8225ac4c
	if (!ctx.cr6.eq) goto loc_8225AC4C;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// b 0x8225ac50
	goto loc_8225AC50;
loc_8225AC4C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8225AC50:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8225ac64
	if (!ctx.cr6.eq) goto loc_8225AC64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,156(r21)
	ctx.r3.u64 = REX_LOAD_U32(r21.u32 + 156);
	// bl 0x8228d508
	ctx.lr = 0x8225AC64;
	sub_8228D508(ctx, base);
loc_8225AC64:
	// lwz r3,6284(r22)
	ctx.r3.u64 = REX_LOAD_U32(r22.u32 + 6284);
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225AC7C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r23,r3
	ctx.cr6.compare<int32_t>(r23.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x8225ab68
	if (ctx.cr6.lt) goto loc_8225AB68;
loc_8225AC84:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cec
	return;
}

DEFINE_REX_FUNC(sub_82266D30) {
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
	ctx.lr = 0x82266D38;
	// stwu r1,-544(r1)
	ea = -544 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r14,0
	r14.s64 = 0;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// stw r14,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r14.u32);
	// std r14,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, r14.u64);
	// bl 0x82160340
	ctx.lr = 0x82266D50;
	sub_82160340(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6072(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6072);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82266D68;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r11,-24868
	ctx.r5.s64 = ctx.r11.s64 + -24868;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82121610
	ctx.lr = 0x82266D7C;
	sub_82121610(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82160388
	ctx.lr = 0x82266D8C;
	sub_82160388(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r5,0
	ctx.r5.s64 = 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// rlwinm r31,r11,27,31,31
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82120ac0
	ctx.lr = 0x82266DA8;
	sub_82120AC0(ctx, base);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq 0x82266dd4
	if (ctx.cr0.eq) goto loc_82266DD4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,228
	ctx.r3.s64 = ctx.r1.s64 + 228;
	// bl 0x82120ac0
	ctx.lr = 0x82266DC0;
	sub_82120AC0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8215f0f0
	ctx.lr = 0x82266DC8;
	sub_8215F0F0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82266DCC:
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x826a1cd0
	return;
loc_82266DD4:
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// stw r14,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r14.u32);
	// mr r11,r14
	ctx.r11.u64 = r14.u64;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r31,-32241
	r31.s64 = -2112946176;
	// lis r30,-32243
	r30.s64 = -2113077248;
	// stb r14,-21370(r10)
	REX_STORE_U8(ctx.r10.u32 + -21370, r14.u8);
	// lis r29,-32241
	r29.s64 = -2112946176;
	// lis r28,-32243
	r28.s64 = -2113077248;
	// lis r27,-32241
	r27.s64 = -2112946176;
	// lis r26,-32243
	r26.s64 = -2113077248;
	// lis r25,-32241
	r25.s64 = -2112946176;
	// lis r24,-32243
	r24.s64 = -2113077248;
	// lis r23,-32241
	r23.s64 = -2112946176;
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// lis r4,-32241
	ctx.r4.s64 = -2112946176;
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r11,r11,-17632
	ctx.r11.s64 = ctx.r11.s64 + -17632;
	// addi r31,r31,-6736
	r31.s64 = r31.s64 + -6736;
	// addi r30,r30,-25800
	r30.s64 = r30.s64 + -25800;
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// addi r29,r29,-6744
	r29.s64 = r29.s64 + -6744;
	// addi r28,r28,-25808
	r28.s64 = r28.s64 + -25808;
	// addi r27,r27,-6752
	r27.s64 = r27.s64 + -6752;
	// addi r26,r26,-25792
	r26.s64 = r26.s64 + -25792;
	// addi r25,r25,-6760
	r25.s64 = r25.s64 + -6760;
	// addi r24,r24,-25752
	r24.s64 = r24.s64 + -25752;
	// addi r23,r23,-6768
	r23.s64 = r23.s64 + -6768;
	// addi r22,r3,-25784
	r22.s64 = ctx.r3.s64 + -25784;
	// addi r21,r4,-6776
	r21.s64 = ctx.r4.s64 + -6776;
	// addi r20,r5,-25768
	r20.s64 = ctx.r5.s64 + -25768;
	// addi r19,r6,-6784
	r19.s64 = ctx.r6.s64 + -6784;
	// addi r18,r7,-25776
	r18.s64 = ctx.r7.s64 + -25776;
	// addi r17,r8,-6792
	r17.s64 = ctx.r8.s64 + -6792;
	// addi r16,r9,-25760
	r16.s64 = ctx.r9.s64 + -25760;
	// addi r15,r10,-17672
	r15.s64 = ctx.r10.s64 + -17672;
loc_82266E78:
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x82266e90
	if (!ctx.cr6.eq) goto loc_82266E90;
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82266e94
	goto loc_82266E94;
loc_82266E90:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82266E94:
	// cmpw cr6,r14,r11
	ctx.cr6.compare<int32_t>(r14.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82267038
	if (!ctx.cr6.lt) goto loc_82267038;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8215f530
	ctx.lr = 0x82266EA8;
	sub_8215F530(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r14,6072(r11)
	r14.u64 = REX_LOAD_U32(ctx.r11.u32 + 6072);
	// bl 0x8215f5f8
	ctx.lr = 0x82266EBC;
	sub_8215F5F8(ctx, base);
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// bl 0x8215f670
	ctx.lr = 0x82266EC4;
	sub_8215F670(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x82266EC8;
	sub_8215FA30(ctx, base);
	// lwz r11,0(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82266EE4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82126238
	ctx.lr = 0x82266EF4;
	sub_82126238(ctx, base);
	// lwz r4,112(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82121928
	ctx.lr = 0x82266EFC;
	sub_82121928(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82120670
	ctx.lr = 0x82266F08;
	sub_82120670(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82120ac0
	ctx.lr = 0x82266F18;
	sub_82120AC0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r14,r1,128
	r14.s64 = ctx.r1.s64 + 128;
	// stw r16,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r16.u32);
	// stw r17,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r17.u32);
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r18,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, r18.u32);
	// stw r14,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r14.u32);
	// stw r19,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, r19.u32);
	// stw r20,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, r20.u32);
	// stw r21,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, r21.u32);
	// stw r22,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, r22.u32);
	// stw r23,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, r23.u32);
	// stw r24,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, r24.u32);
	// stw r25,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, r25.u32);
	// stw r26,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, r26.u32);
	// stw r27,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, r27.u32);
	// stw r28,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, r28.u32);
	// stw r29,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, r29.u32);
	// stw r30,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, r30.u32);
	// stw r31,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, r31.u32);
loc_82266F68:
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// lwz r4,4(r14)
	ctx.r4.u64 = REX_LOAD_U32(r14.u32 + 4);
	// bl 0x82120600
	ctx.lr = 0x82266F74;
	sub_82120600(ctx, base);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// lwz r4,0(r14)
	ctx.r4.u64 = REX_LOAD_U32(r14.u32 + 0);
	// bl 0x82120600
	ctx.lr = 0x82266F80;
	sub_82120600(ctx, base);
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82267040
	ctx.lr = 0x82266F90;
	sub_82267040(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r5,0
	ctx.r5.s64 = 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// rlwinm r14,r11,27,31,31
	r14.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82120ac0
	ctx.lr = 0x82266FAC;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82120ac0
	ctx.lr = 0x82266FBC;
	sub_82120AC0(ctx, base);
	// cmplwi r14,0
	ctx.cr0.compare<uint32_t>(r14.u32, 0, ctx.xer);
	// bne 0x82267004
	if (!ctx.cr0.eq) goto loc_82267004;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r14,r10,8
	r14.s64 = ctx.r10.s64 + 8;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// stw r14,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r14.u32);
	// blt cr6,0x82266f68
	if (ctx.cr6.lt) goto loc_82266F68;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82120ac0
	ctx.lr = 0x82266FF4;
	sub_82120AC0(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r14,r11,1
	r14.s64 = ctx.r11.s64 + 1;
	// stw r14,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r14.u32);
	// b 0x82266e78
	goto loc_82266E78;
loc_82267004:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82120ac0
	ctx.lr = 0x82267014;
	sub_82120AC0(ctx, base);
	// li r31,0
	r31.s64 = 0;
loc_82267018:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,228
	ctx.r3.s64 = ctx.r1.s64 + 228;
	// bl 0x82120ac0
	ctx.lr = 0x82267028;
	sub_82120AC0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8215f0f0
	ctx.lr = 0x82267030;
	sub_8215F0F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82266dcc
	goto loc_82266DCC;
loc_82267038:
	// li r31,1
	r31.s64 = 1;
	// b 0x82267018
	goto loc_82267018;
}

DEFINE_REX_FUNC(sub_8227B138) {
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
	ctx.lr = 0x8227B140;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r3,304
	ctx.r3.s64 = ctx.r3.s64 + 304;
	// addi r4,r11,-7936
	ctx.r4.s64 = ctx.r11.s64 + -7936;
	// bl 0x8215f670
	ctx.lr = 0x8227B158;
	sub_8215F670(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8215f200
	ctx.lr = 0x8227B160;
	sub_8215F200(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,-7880
	ctx.r4.s64 = ctx.r11.s64 + -7880;
	// bl 0x8215f670
	ctx.lr = 0x8227B16C;
	sub_8215F670(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r30,80(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r26,0
	r26.s64 = 0;
	// li r27,0
	r27.s64 = 0;
	// li r31,0
	r31.s64 = 0;
	// addi r25,r11,-7860
	r25.s64 = ctx.r11.s64 + -7860;
loc_8227B188:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8227b1ac
	if (!ctx.cr6.eq) goto loc_8227B1AC;
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// b 0x8227b1b0
	goto loc_8227B1B0;
loc_8227B1AC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8227B1B0:
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8227b218
	if (!ctx.cr6.lt) goto loc_8227B218;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x8227B1C4;
	sub_8215F1B0(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x8215f338
	ctx.lr = 0x8227B1CC;
	sub_8215F338(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8215fb00
	ctx.lr = 0x8227B1D4;
	sub_8215FB00(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8227b1e8
	if (ctx.cr0.eq) goto loc_8227B1E8;
	// lwz r30,80(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8227b1ec
	goto loc_8227B1EC;
loc_8227B1E8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8227B1EC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8227b210
	if (ctx.cr0.eq) goto loc_8227B210;
	// lwz r11,320(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 320);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8227b210
	if (!ctx.cr6.lt) goto loc_8227B210;
	// cmpw cr6,r30,r26
	ctx.cr6.compare<int32_t>(r30.s32, r26.s32, ctx.xer);
	// ble cr6,0x8227b210
	if (!ctx.cr6.gt) goto loc_8227B210;
	// mr r26,r30
	r26.u64 = r30.u64;
	// mr r27,r31
	r27.u64 = r31.u64;
loc_8227B210:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// b 0x8227b188
	goto loc_8227B188;
loc_8227B218:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// addi r30,r11,16492
	r30.s64 = ctx.r11.s64 + 16492;
	// addi r25,r10,1624
	r25.s64 = ctx.r10.s64 + 1624;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8215f338
	ctx.lr = 0x8227B234;
	sub_8215F338(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,16504
	ctx.r4.s64 = ctx.r11.s64 + 16504;
	// bl 0x8215f338
	ctx.lr = 0x8227B240;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x8227B244;
	sub_8215FA30(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8215f338
	ctx.lr = 0x8227B254;
	sub_8215F338(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,16576
	ctx.r4.s64 = ctx.r11.s64 + 16576;
	// bl 0x8215f338
	ctx.lr = 0x8227B260;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x8227B264;
	sub_8215FA30(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// beq cr6,0x8227b2dc
	if (ctx.cr6.eq) goto loc_8227B2DC;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x8227B27C;
	sub_8215F1B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8227af18
	ctx.lr = 0x8227B288;
	sub_8227AF18(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x8227B294;
	sub_8215F1B0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,-17296
	ctx.r4.s64 = ctx.r11.s64 + -17296;
	// bl 0x8215f338
	ctx.lr = 0x8227B2A0;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x8227B2A4;
	sub_8215FA30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r29,324
	ctx.r3.s64 = r29.s64 + 324;
	// bl 0x82120b20
	ctx.lr = 0x8227B2B8;
	sub_82120B20(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r7,r29,352
	ctx.r7.s64 = r29.s64 + 352;
	// bl 0x8215f1b0
	ctx.lr = 0x8227B2C8;
	sub_8215F1B0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r29,124
	ctx.r3.s64 = r29.s64 + 124;
	// bl 0x8226e2a8
	ctx.lr = 0x8227B2DC;
	sub_8226E2A8(ctx, base);
loc_8227B2DC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_82286398) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821c3de8
	ctx.lr = 0x822863B8;
	sub_821C3DE8(ctx, base);
	// addi r30,r31,16
	r30.s64 = r31.s64 + 16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x826a1e70
	ctx.lr = 0x822863CC;
	sub_826A1E70(ctx, base);
	// lfs f0,464(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 464);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,468(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 468);
	ctx.f13.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f12,472(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 472);
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
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8216d040
	ctx.lr = 0x822863FC;
	sub_8216D040(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
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

DEFINE_REX_FUNC(sub_82288E20) {
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
	ctx.lr = 0x82288E28;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// blt cr6,0x82288e50
	if (ctx.cr6.lt) goto loc_82288E50;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r4,r11,2984
	ctx.r4.s64 = ctx.r11.s64 + 2984;
	// addi r3,r10,-4520
	ctx.r3.s64 = ctx.r10.s64 + -4520;
	// li r5,275
	ctx.r5.s64 = 275;
	// bl 0x821231d0
	ctx.lr = 0x82288E50;
	sub_821231D0(ctx, base);
loc_82288E50:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mulli r29,r28,392
	r29.s64 = static_cast<int64_t>(r28.u64 * static_cast<uint64_t>(392));
	// addi r30,r11,4376
	r30.s64 = ctx.r11.s64 + 4376;
	// lwzx r11,r29,r30
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82288ed4
	if (ctx.cr6.eq) goto loc_82288ED4;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r31,r11,36
	r31.s64 = ctx.r11.s64 + 36;
	// lwz r11,-4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + -4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82288ea4
	if (!ctx.cr6.eq) goto loc_82288EA4;
	// addi r3,r31,-1492
	ctx.r3.s64 = r31.s64 + -1492;
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826a2e60
	ctx.lr = 0x82288E8C;
	sub_826A2E60(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823ed568
	ctx.lr = 0x82288EA0;
	sub_823ED568(ctx, base);
	// stw r3,-1480(r31)
	REX_STORE_U32(r31.u32 + -1480, ctx.r3.u32);
loc_82288EA4:
	// addi r11,r30,8
	ctx.r11.s64 = r30.s64 + 8;
	// lwzx r3,r29,r30
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + r30.u32);
	// addi r5,r31,-1492
	ctx.r5.s64 = r31.s64 + -1492;
	// add r4,r29,r11
	ctx.r4.u64 = r29.u64 + ctx.r11.u64;
	// bl 0x823ee4d0
	ctx.lr = 0x82288EB8;
	sub_823EE4D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82288f5c
	if (ctx.cr0.lt) goto loc_82288F5C;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82288EC4:
	// stw r28,0(r31)
	REX_STORE_U32(r31.u32 + 0, r28.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,-4(r31)
	REX_STORE_U32(r31.u32 + -4, ctx.r11.u32);
	// b 0x82288f60
	goto loc_82288F60;
loc_82288ED4:
	// addi r27,r30,4
	r27.s64 = r30.s64 + 4;
	// lwzx r11,r29,r27
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + r27.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82288f5c
	if (ctx.cr6.eq) goto loc_82288F5C;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r31,r11,36
	r31.s64 = ctx.r11.s64 + 36;
	// lwz r11,-4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + -4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82288f20
	if (!ctx.cr6.eq) goto loc_82288F20;
	// addi r3,r31,-1492
	ctx.r3.s64 = r31.s64 + -1492;
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826a2e60
	ctx.lr = 0x82288F08;
	sub_826A2E60(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823ed568
	ctx.lr = 0x82288F1C;
	sub_823ED568(ctx, base);
	// stw r3,-1480(r31)
	REX_STORE_U32(r31.u32 + -1480, ctx.r3.u32);
loc_82288F20:
	// lwzx r11,r29,r27
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + r27.u32);
	// mulli r10,r28,98
	ctx.r10.s64 = static_cast<int64_t>(r28.u64 * static_cast<uint64_t>(98));
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r9,r30,264
	ctx.r9.s64 = r30.s64 + 264;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r6,r31,-1492
	ctx.r6.s64 = r31.s64 + -1492;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwzx r4,r11,r9
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// bl 0x823ee970
	ctx.lr = 0x82288F4C;
	sub_823EE970(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82288f5c
	if (ctx.cr0.lt) goto loc_82288F5C;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82288ec4
	goto loc_82288EC4;
loc_82288F5C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82288F60:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8228ED60) {
	REX_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8228ed70
	sub_8228ED70(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8228F340) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8228F348;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,0(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228F370;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8228f390
	if (ctx.cr0.eq) goto loc_8228F390;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x822aba78
	ctx.lr = 0x8228F38C;
	sub_822ABA78(ctx, base);
	// b 0x8228f394
	goto loc_8228F394;
loc_8228F390:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8228F394:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82290EB8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82290EC0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lbz r10,152(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 152);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,4696
	ctx.r11.s64 = ctx.r11.s64 + 4696;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x82290f2c
	if (ctx.cr0.eq) goto loc_82290F2C;
	// lwz r3,96(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82290EFC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82290f2c
	if (ctx.cr6.eq) goto loc_82290F2C;
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
	ctx.lr = 0x82290F2C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82290F2C:
	// addi r30,r31,84
	r30.s64 = r31.s64 + 84;
	// li r29,1
	r29.s64 = 1;
loc_82290F34:
	// addi r30,r30,-40
	r30.s64 = r30.s64 + -40;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822937c0
	ctx.lr = 0x82290F40;
	sub_822937C0(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bge 0x82290f34
	if (!ctx.cr0.lt) goto loc_82290F34;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// clrlwi. r10,r28,31
	ctx.r10.u64 = r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,4644
	ctx.r11.s64 = ctx.r11.s64 + 4644;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// beq 0x82290f64
	if (ctx.cr0.eq) goto loc_82290F64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x82290F64;
	sub_8269CE98(ctx, base);
loc_82290F64:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82299150) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82299180;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82298f70
	ctx.lr = 0x8229918C;
	sub_82298F70(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822991A0;
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

DEFINE_REX_FUNC(sub_8229E338) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8229E398) {
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
	// bl 0x8229e410
	ctx.lr = 0x8229E3B8;
	sub_8229E410(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8229e3ec
	if (ctx.cr0.eq) goto loc_8229E3EC;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8229e3ec
	if (ctx.cr6.eq) goto loc_8229E3EC;
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
	ctx.lr = 0x8229E3EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8229E3EC:
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

DEFINE_REX_FUNC(sub_822A1F48) {
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
	ctx.lr = 0x822A1F50;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// addi r9,r3,28
	ctx.r9.s64 = ctx.r3.s64 + 28;
	// addi r10,r4,12
	ctx.r10.s64 = ctx.r4.s64 + 12;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_822A1F6C:
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
	// bdnz 0x822a1f6c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822A1F6C;
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r10,r26,-4
	ctx.r10.s64 = r26.s64 + -4;
	// addi r9,r31,12
	ctx.r9.s64 = r31.s64 + 12;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_822A1F88:
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
	// bdnz 0x822a1f88
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822A1F88;
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r9,r31,44
	ctx.r9.s64 = r31.s64 + 44;
	// addi r10,r26,28
	ctx.r10.s64 = r26.s64 + 28;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_822A1FA4:
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
	// bdnz 0x822a1fa4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822A1FA4;
	// lwz r11,48(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 48);
	// addi r30,r31,96
	r30.s64 = r31.s64 + 96;
	// lis r24,-32126
	r24.s64 = -2105409536;
	// li r23,0
	r23.s64 = 0;
	// li r22,1
	r22.s64 = 1;
	// lis r25,-32106
	r25.s64 = -2104098816;
	// stw r11,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r11.u32);
	// lwz r11,52(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 52);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stb r11,72(r31)
	REX_STORE_U8(r31.u32 + 72, ctx.r11.u8);
	// lwz r27,100(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 100);
	// lwz r29,56(r26)
	r29.u64 = REX_LOAD_U32(r26.u32 + 56);
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(r29.s32, r27.s32, ctx.xer);
	// blt cr6,0x822a20f8
	if (ctx.cr6.lt) goto loc_822A20F8;
	// ble cr6,0x822a20b0
	if (!ctx.cr6.gt) goto loc_822A20B0;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r29.s32, ctx.xer);
	// bge cr6,0x822a20b0
	if (!ctx.cr6.lt) goto loc_822A20B0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x822a2014
	if (ctx.cr6.eq) goto loc_822A2014;
	// rlwinm r3,r29,6,0,25
	ctx.r3.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 6) & 0xFFFFFFC0;
	// bl 0x822c1a70
	ctx.lr = 0x822A200C;
	sub_822C1A70(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// b 0x822a2018
	goto loc_822A2018;
loc_822A2014:
	// mr r28,r23
	r28.u64 = r23.u64;
loc_822A2018:
	// lwz r9,4(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x822a206c
	if (!ctx.cr6.gt) goto loc_822A206C;
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
loc_822A2030:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a205c
	if (ctx.cr6.eq) goto loc_822A205C;
	// lwz r8,12(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 12);
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r7,r11,-8
	ctx.r7.s64 = ctx.r11.s64 + -8;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r8,r8,-8
	ctx.r8.s64 = ctx.r8.s64 + -8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822A2050:
	// ldu r9,8(r8)
	ea = 8 + ctx.r8.u32;
	ctx.r9.u64 = REX_LOAD_U64(ea);
	ctx.r8.u32 = ea;
	// stdu r9,8(r7)
	ea = 8 + ctx.r7.u32;
	REX_STORE_U64(ea, ctx.r9.u64);
	ctx.r7.u32 = ea;
	// bdnz 0x822a2050
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822A2050;
loc_822A205C:
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// bne 0x822a2030
	if (!ctx.cr0.eq) goto loc_822A2030;
loc_822A206C:
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822a20a4
	if (ctx.cr6.eq) goto loc_822A20A4;
	// lbz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822a20a0
	if (ctx.cr0.eq) goto loc_822A20A0;
	// lwz r11,112(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 112);
	// lwz r9,-19400(r24)
	ctx.r9.u64 = REX_LOAD_U32(r24.u32 + -19400);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r3,-4(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// stw r11,112(r25)
	REX_STORE_U32(r25.u32 + 112, ctx.r11.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822A20A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822A20A0:
	// stw r23,12(r30)
	REX_STORE_U32(r30.u32 + 12, r23.u32);
loc_822A20A4:
	// stw r28,12(r30)
	REX_STORE_U32(r30.u32 + 12, r28.u32);
	// stw r29,8(r30)
	REX_STORE_U32(r30.u32 + 8, r29.u32);
	// stb r22,16(r30)
	REX_STORE_U8(r30.u32 + 16, r22.u8);
loc_822A20B0:
	// cmpw cr6,r27,r29
	ctx.cr6.compare<int32_t>(r27.s32, r29.s32, ctx.xer);
	// bge cr6,0x822a20f8
	if (!ctx.cr6.lt) goto loc_822A20F8;
	// rlwinm r7,r27,6,0,25
	ctx.r7.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 6) & 0xFFFFFFC0;
	// subf r6,r27,r29
	ctx.r6.u64 = r29.u64 - r27.u64;
loc_822A20C0:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// add. r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822a20ec
	if (ctx.cr0.eq) goto loc_822A20EC;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r11,-8
	ctx.r8.s64 = ctx.r11.s64 + -8;
	// addi r11,r9,-8
	ctx.r11.s64 = ctx.r9.s64 + -8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822A20E0:
	// ldu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r10,8(r8)
	ea = 8 + ctx.r8.u32;
	REX_STORE_U64(ea, ctx.r10.u64);
	ctx.r8.u32 = ea;
	// bdnz 0x822a20e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822A20E0;
loc_822A20EC:
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addi r7,r7,64
	ctx.r7.s64 = ctx.r7.s64 + 64;
	// bne 0x822a20c0
	if (!ctx.cr0.eq) goto loc_822A20C0;
loc_822A20F8:
	// stw r29,4(r30)
	REX_STORE_U32(r30.u32 + 4, r29.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x822a219c
	if (ctx.cr6.eq) goto loc_822A219C;
	// lwz r10,64(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 64);
	// ble cr6,0x822a219c
	if (!ctx.cr6.gt) goto loc_822A219C;
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
loc_822A2114:
	// lwz r8,108(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 108);
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r7,r10,12
	ctx.r7.s64 = ctx.r10.s64 + 12;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r8,r8,12
	ctx.r8.s64 = ctx.r8.s64 + 12;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822A212C:
	// lfsu f0,4(r7)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r7.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r7.u32 = ea;
	// stfsu f0,4(r8)
	ea = 4 + ctx.r8.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x822a212c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822A212C;
	// lwz r9,108(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 108);
	// li r8,4
	ctx.r8.s64 = 4;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// subf r7,r9,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r9.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_822A214C:
	// lfsx f0,r7,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r9)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x822a214c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822A214C;
	// lwz r9,108(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 108);
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lwz r8,32(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r8,32(r9)
	REX_STORE_U32(ctx.r9.u32 + 32, ctx.r8.u32);
	// lwz r9,108(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 108);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r8,36(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 36);
	// stw r8,36(r9)
	REX_STORE_U32(ctx.r9.u32 + 36, ctx.r8.u32);
	// lwz r8,40(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// addi r10,r10,44
	ctx.r10.s64 = ctx.r10.s64 + 44;
	// lwz r9,108(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 108);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// stw r8,40(r9)
	REX_STORE_U32(ctx.r9.u32 + 40, ctx.r8.u32);
	// bne 0x822a2114
	if (!ctx.cr0.eq) goto loc_822A2114;
loc_822A219C:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r29,60(r26)
	r29.u64 = REX_LOAD_U32(r26.u32 + 60);
	// lwz r27,140(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 140);
	// addi r30,r31,136
	r30.s64 = r31.s64 + 136;
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(r29.s32, r27.s32, ctx.xer);
	// std r23,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, r23.u64);
	// std r23,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, r23.u64);
	// blt cr6,0x822a22ac
	if (ctx.cr6.lt) goto loc_822A22AC;
	// ble cr6,0x822a2270
	if (!ctx.cr6.gt) goto loc_822A2270;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r29.s32, ctx.xer);
	// bge cr6,0x822a2270
	if (!ctx.cr6.lt) goto loc_822A2270;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x822a21e4
	if (ctx.cr6.eq) goto loc_822A21E4;
	// rlwinm r3,r29,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x822c1a70
	ctx.lr = 0x822A21DC;
	sub_822C1A70(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// b 0x822a21e8
	goto loc_822A21E8;
loc_822A21E4:
	// mr r28,r23
	r28.u64 = r23.u64;
loc_822A21E8:
	// lwz r9,4(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x822a222c
	if (!ctx.cr6.gt) goto loc_822A222C;
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
loc_822A21FC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a221c
	if (ctx.cr6.eq) goto loc_822A221C;
	// lwz r8,12(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 12);
	// add r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 + ctx.r10.u64;
	// ldx r8,r8,r10
	ctx.r8.u64 = REX_LOAD_U64(ctx.r8.u32 + ctx.r10.u32);
	// std r8,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// ld r8,8(r7)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r7.u32 + 8);
	// std r8,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
loc_822A221C:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bne 0x822a21fc
	if (!ctx.cr0.eq) goto loc_822A21FC;
loc_822A222C:
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822a2264
	if (ctx.cr6.eq) goto loc_822A2264;
	// lbz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822a2260
	if (ctx.cr0.eq) goto loc_822A2260;
	// lwz r11,112(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 112);
	// lwz r9,-19400(r24)
	ctx.r9.u64 = REX_LOAD_U32(r24.u32 + -19400);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r3,-4(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// stw r11,112(r25)
	REX_STORE_U32(r25.u32 + 112, ctx.r11.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822A2260;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822A2260:
	// stw r23,12(r30)
	REX_STORE_U32(r30.u32 + 12, r23.u32);
loc_822A2264:
	// stw r28,12(r30)
	REX_STORE_U32(r30.u32 + 12, r28.u32);
	// stw r29,8(r30)
	REX_STORE_U32(r30.u32 + 8, r29.u32);
	// stb r22,16(r30)
	REX_STORE_U8(r30.u32 + 16, r22.u8);
loc_822A2270:
	// cmpw cr6,r27,r29
	ctx.cr6.compare<int32_t>(r27.s32, r29.s32, ctx.xer);
	// bge cr6,0x822a22ac
	if (!ctx.cr6.lt) goto loc_822A22AC;
	// rlwinm r11,r27,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r9,r27,r29
	ctx.r9.u64 = r29.u64 - r27.u64;
loc_822A2280:
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 12);
	// add. r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822a22a0
	if (ctx.cr0.eq) goto loc_822A22A0;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// ld r7,0(r8)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// ld r8,8(r8)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r8.u32 + 8);
	// std r7,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r7.u64);
	// std r8,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r8.u64);
loc_822A22A0:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bne 0x822a2280
	if (!ctx.cr0.eq) goto loc_822A2280;
loc_822A22AC:
	// stw r29,4(r30)
	REX_STORE_U32(r30.u32 + 4, r29.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x822a2340
	if (ctx.cr6.eq) goto loc_822A2340;
	// lwz r10,68(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 68);
	// ble cr6,0x822a2340
	if (!ctx.cr6.gt) goto loc_822A2340;
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
loc_822A22CC:
	// lwz r9,148(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 148);
	// lwz r8,8(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r8,12(r9)
	REX_STORE_U32(ctx.r9.u32 + 12, ctx.r8.u32);
	// lhz r8,18(r10)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 18);
	// lwz r9,148(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 148);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// sth r8,6(r9)
	REX_STORE_U16(ctx.r9.u32 + 6, ctx.r8.u16);
	// lhz r8,20(r10)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 20);
	// lwz r9,148(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 148);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// sth r8,8(r9)
	REX_STORE_U16(ctx.r9.u32 + 8, ctx.r8.u16);
	// lhz r8,22(r10)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 22);
	// lwz r9,148(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 148);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// sth r8,10(r9)
	REX_STORE_U16(ctx.r9.u32 + 10, ctx.r8.u16);
	// lhz r9,12(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 12);
	// lwz r8,148(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 148);
	// sthx r9,r11,r8
	REX_STORE_U16(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u16);
	// lhz r8,14(r10)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 14);
	// lwz r9,148(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 148);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// sth r8,2(r9)
	REX_STORE_U16(ctx.r9.u32 + 2, ctx.r8.u16);
	// lhzu r9,16(r10)
	ea = 16 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// lwz r8,148(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 148);
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// sth r9,4(r8)
	REX_STORE_U16(ctx.r8.u32 + 4, ctx.r9.u16);
	// bdnz 0x822a22cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822A22CC;
loc_822A2340:
	// lwz r11,72(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 72);
	// addi r30,r31,160
	r30.s64 = r31.s64 + 160;
	// stw r11,156(r31)
	REX_STORE_U32(r31.u32 + 156, ctx.r11.u32);
	// lwz r29,76(r26)
	r29.u64 = REX_LOAD_U32(r26.u32 + 76);
	// lwz r27,164(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 164);
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(r29.s32, r27.s32, ctx.xer);
	// blt cr6,0x822a246c
	if (ctx.cr6.lt) goto loc_822A246C;
	// ble cr6,0x822a2420
	if (!ctx.cr6.gt) goto loc_822A2420;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r29.s32, ctx.xer);
	// bge cr6,0x822a2420
	if (!ctx.cr6.lt) goto loc_822A2420;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x822a2384
	if (ctx.cr6.eq) goto loc_822A2384;
	// rlwinm r3,r29,5,0,26
	ctx.r3.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 5) & 0xFFFFFFE0;
	// bl 0x822c1a70
	ctx.lr = 0x822A237C;
	sub_822C1A70(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// b 0x822a2388
	goto loc_822A2388;
loc_822A2384:
	// mr r28,r23
	r28.u64 = r23.u64;
loc_822A2388:
	// lwz r9,4(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x822a23dc
	if (!ctx.cr6.gt) goto loc_822A23DC;
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
loc_822A239C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a23cc
	if (ctx.cr6.eq) goto loc_822A23CC;
	// lwz r8,12(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 12);
	// add r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 + ctx.r10.u64;
	// ldx r8,r8,r10
	ctx.r8.u64 = REX_LOAD_U64(ctx.r8.u32 + ctx.r10.u32);
	// std r8,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// ld r8,8(r7)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r7.u32 + 8);
	// std r8,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// ld r8,16(r7)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r7.u32 + 16);
	// std r8,16(r11)
	REX_STORE_U64(ctx.r11.u32 + 16, ctx.r8.u64);
	// ld r8,24(r7)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r7.u32 + 24);
	// std r8,24(r11)
	REX_STORE_U64(ctx.r11.u32 + 24, ctx.r8.u64);
loc_822A23CC:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// bne 0x822a239c
	if (!ctx.cr0.eq) goto loc_822A239C;
loc_822A23DC:
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822a2414
	if (ctx.cr6.eq) goto loc_822A2414;
	// lbz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822a2410
	if (ctx.cr0.eq) goto loc_822A2410;
	// lwz r11,112(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 112);
	// lwz r9,-19400(r24)
	ctx.r9.u64 = REX_LOAD_U32(r24.u32 + -19400);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r3,-4(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// stw r11,112(r25)
	REX_STORE_U32(r25.u32 + 112, ctx.r11.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822A2410;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822A2410:
	// stw r23,12(r30)
	REX_STORE_U32(r30.u32 + 12, r23.u32);
loc_822A2414:
	// stw r28,12(r30)
	REX_STORE_U32(r30.u32 + 12, r28.u32);
	// stw r29,8(r30)
	REX_STORE_U32(r30.u32 + 8, r29.u32);
	// stb r22,16(r30)
	REX_STORE_U8(r30.u32 + 16, r22.u8);
loc_822A2420:
	// cmpw cr6,r27,r29
	ctx.cr6.compare<int32_t>(r27.s32, r29.s32, ctx.xer);
	// bge cr6,0x822a246c
	if (!ctx.cr6.lt) goto loc_822A246C;
	// rlwinm r10,r27,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r9,r27,r29
	ctx.r9.u64 = r29.u64 - r27.u64;
loc_822A2430:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822a2460
	if (ctx.cr0.eq) goto loc_822A2460;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// ld r7,0(r8)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// ld r6,8(r8)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r8.u32 + 8);
	// ld r5,16(r8)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r8.u32 + 16);
	// ld r8,24(r8)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r8.u32 + 24);
	// std r7,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r7.u64);
	// std r6,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r6.u64);
	// std r5,16(r11)
	REX_STORE_U64(ctx.r11.u32 + 16, ctx.r5.u64);
	// std r8,24(r11)
	REX_STORE_U64(ctx.r11.u32 + 24, ctx.r8.u64);
loc_822A2460:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// bne 0x822a2430
	if (!ctx.cr0.eq) goto loc_822A2430;
loc_822A246C:
	// stw r29,4(r30)
	REX_STORE_U32(r30.u32 + 4, r29.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x822a2510
	if (ctx.cr6.eq) goto loc_822A2510;
	// lwz r10,80(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 80);
	// ble cr6,0x822a2510
	if (!ctx.cr6.gt) goto loc_822A2510;
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
loc_822A248C:
	// lwz r9,172(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 172);
	// lhz r8,30(r10)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 30);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// sth r8,6(r9)
	REX_STORE_U16(ctx.r9.u32 + 6, ctx.r8.u16);
	// lwz r9,172(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 172);
	// lhz r8,32(r10)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 32);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// sth r8,8(r9)
	REX_STORE_U16(ctx.r9.u32 + 8, ctx.r8.u16);
	// lhz r8,34(r10)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 34);
	// lwz r9,172(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 172);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// sth r8,10(r9)
	REX_STORE_U16(ctx.r9.u32 + 10, ctx.r8.u16);
	// lhz r9,24(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 24);
	// lwz r8,172(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 172);
	// sthx r9,r11,r8
	REX_STORE_U16(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u16);
	// lhz r8,26(r10)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 26);
	// lwz r9,172(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 172);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// sth r8,2(r9)
	REX_STORE_U16(ctx.r9.u32 + 2, ctx.r8.u16);
	// lhz r8,28(r10)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 28);
	// lwz r9,172(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 172);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// sth r8,4(r9)
	REX_STORE_U16(ctx.r9.u32 + 4, ctx.r8.u16);
	// lwz r8,16(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r9,172(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 172);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r8,12(r9)
	REX_STORE_U32(ctx.r9.u32 + 12, ctx.r8.u32);
	// lwzu r9,20(r10)
	ea = 20 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// lwz r8,172(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 172);
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// stw r9,16(r8)
	REX_STORE_U32(ctx.r8.u32 + 16, ctx.r9.u32);
	// bdnz 0x822a248c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822A248C;
loc_822A2510:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_822CD3A0) {
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
	ctx.lr = 0x822CD3A8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r27,0
	r27.s64 = 0;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mulli r11,r11,9936
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(9936));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r31,r11,16
	r31.s64 = ctx.r11.s64 + 16;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// stw r27,136(r11)
	REX_STORE_U32(ctx.r11.u32 + 136, r27.u32);
	// lwz r11,19892(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 19892);
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm. r11,r11,28,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822cd49c
	if (ctx.cr0.eq) goto loc_822CD49C;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r28,r11,20,28,31
	r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xF;
	// slw r29,r10,r28
	r29.u64 = r28.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r28.u8 & 0x3F));
	// andi. r11,r29,28664
	ctx.r11.u64 = r29.u64 & 28664;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822cd42c
	if (ctx.cr0.eq) goto loc_822CD42C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r26,100(r31)
	r26.u64 = REX_LOAD_U32(r31.u32 + 100);
	// bl 0x822cc898
	ctx.lr = 0x822CD404;
	sub_822CC898(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 100);
	// subf. r10,r26,r11
	ctx.r10.u64 = ctx.r11.u64 - r26.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822cd42c
	if (ctx.cr0.eq) goto loc_822CD42C;
	// andi. r11,r29,24702
	ctx.r11.u64 = r29.u64 & 24702;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822cd42c
	if (ctx.cr0.eq) goto loc_822CD42C;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwimi r10,r11,0,0,19
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000) | (ctx.r10.u64 & 0xFFFFFFFF00000FFF);
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
loc_822CD42C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,19892(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 19892);
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822cd49c
	if (ctx.cr0.eq) goto loc_822CD49C;
	// cmplwi cr6,r28,12
	ctx.cr6.compare<uint32_t>(r28.u32, 12, ctx.xer);
	// bne cr6,0x822cd49c
	if (!ctx.cr6.eq) goto loc_822CD49C;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// rlwinm. r11,r11,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822cd49c
	if (!ctx.cr0.eq) goto loc_822CD49C;
	// li r5,32
	ctx.r5.s64 = 32;
	// stw r27,4(r31)
	REX_STORE_U32(r31.u32 + 4, r27.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r27,124(r31)
	REX_STORE_U8(r31.u32 + 124, r27.u8);
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x826a2e60
	ctx.lr = 0x822CD46C;
	sub_826A2E60(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x826a2e60
	ctx.lr = 0x822CD47C;
	sub_826A2E60(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// bl 0x826a2e60
	ctx.lr = 0x822CD48C;
	sub_826A2E60(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// bl 0x826a2e60
	ctx.lr = 0x822CD49C;
	sub_826A2E60(ctx, base);
loc_822CD49C:
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,108
	ctx.r3.s64 = r31.s64 + 108;
	// bl 0x822cef20
	ctx.lr = 0x822CD4AC;
	sub_822CEF20(ctx, base);
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_822D4978) {
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
	// lis r30,16384
	r30.s64 = 1073741824;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d49c0
	if (ctx.cr6.eq) goto loc_822D49C0;
	// lwz r9,12(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r10,r9,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFF;
	// clrlwi r9,r9,3
	ctx.r9.u64 = ctx.r9.u32 & 0x1FFFFFFF;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r10,r30,r10
	ctx.r10.u64 = ctx.r10.u64 - r30.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_822D49C0:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r5,128
	ctx.r5.s64 = 128;
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// rlwinm r4,r11,30,2,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// bl 0x822d4ea8
	ctx.lr = 0x822D49D4;
	sub_822D4EA8(ctx, base);
	// mr. r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x822d49f0
	if (!ctx.cr0.eq) goto loc_822D49F0;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r8,16940(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 16940);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// b 0x822d4a64
	goto loc_822D4A64;
loc_822D49F0:
	// addi r11,r8,4
	ctx.r11.s64 = ctx.r8.s64 + 4;
	// rlwinm r9,r11,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r11,3
	ctx.r10.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// addi r11,r9,512
	ctx.r11.s64 = ctx.r9.s64 + 512;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - r30.u64;
	// stw r11,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d4a3c
	if (ctx.cr6.eq) goto loc_822D4A3C;
	// rlwinm r10,r8,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 12) & 0xFFF;
	// clrlwi r9,r8,3
	ctx.r9.u64 = ctx.r8.u32 & 0x1FFFFFFF;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r10,r30,r10
	ctx.r10.u64 = ctx.r10.u64 - r30.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x822d4a40
	goto loc_822D4A40;
loc_822D4A3C:
	// stw r8,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r8.u32);
loc_822D4A40:
	// rlwinm r10,r8,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 12) & 0xFFF;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// clrlwi r9,r8,3
	ctx.r9.u64 = ctx.r8.u32 & 0x1FFFFFFF;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r3,r30,r10
	ctx.r3.u64 = ctx.r10.u64 - r30.u64;
	// add r4,r11,r3
	ctx.r4.u64 = ctx.r11.u64 + ctx.r3.u64;
	// bl 0x822daf40
	ctx.lr = 0x822D4A64;
	sub_822DAF40(ctx, base);
loc_822D4A64:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r3,r8,4
	ctx.r3.s64 = ctx.r8.s64 + 4;
	// stw r8,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r8.u32);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// stw r3,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_822DE230) {
	REX_FUNC_PROLOGUE();
	// lwz r10,84(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 84);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// clrlwi r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r10,r10,23
	ctx.r10.s64 = ctx.r10.s64 + 23;
	// li r4,1
	ctx.r4.s64 = 1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r11,60
	ctx.r3.s64 = ctx.r11.s64 + 60;
	// stwx r9,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// lwz r10,84(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,84(r11)
	REX_STORE_U32(ctx.r11.u32 + 84, ctx.r10.u32);
	// b 0x82793e24
	__imp__KeSetEvent(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822DF738) {
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
	// bl 0x826a1c9c
	ctx.lr = 0x822DF740;
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x826a2ca4
	ctx.lr = 0x822DF748;
	// stwu r1,-528(r1)
	ea = -528 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,6
	ctx.r11.s64 = 6;
	// mr r26,r10
	r26.u64 = ctx.r10.u64;
	// li r30,0
	r30.s64 = 0;
	// addi r10,r1,328
	ctx.r10.s64 = ctx.r1.s64 + 328;
	// mr r27,r9
	r27.u64 = ctx.r9.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r22,r6
	r22.u64 = ctx.r6.u64;
	// mr r21,r7
	r21.u64 = ctx.r7.u64;
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
loc_822DF780:
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x822df780
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822DF780;
	// stw r9,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r7,r1,336
	ctx.r7.s64 = ctx.r1.s64 + 336;
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// lis r9,2048
	ctx.r9.s64 = 134217728;
	// stw r8,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// addi r11,r1,136
	ctx.r11.s64 = ctx.r1.s64 + 136;
	// stw r7,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// ori r9,r9,74
	ctx.r9.u64 = ctx.r9.u64 | 74;
	// stw r11,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,2048
	ctx.r4.s64 = 2048;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x822d2970
	ctx.lr = 0x822DF7D8;
	sub_822D2970(ctx, base);
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// lwz r10,368(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 368);
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r9,384(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 384);
	// li r5,112
	ctx.r5.s64 = 112;
	// rlwimi r10,r11,0,0,19
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000) | (ctx.r10.u64 & 0xFFFFFFFF00000FFF);
	// clrlwi r11,r9,20
	ctx.r11.u64 = ctx.r9.u32 & 0xFFF;
	// stw r10,368(r1)
	REX_STORE_U32(ctx.r1.u32 + 368, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,384(r1)
	REX_STORE_U32(ctx.r1.u32 + 384, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c9a30
	ctx.lr = 0x822DF808;
	sub_822C9A30(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,336
	ctx.r5.s64 = ctx.r1.s64 + 336;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c6778
	ctx.lr = 0x822DF81C;
	sub_822C6778(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r10,56(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x822df838
	if (!ctx.cr6.gt) goto loc_822DF838;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d5b28
	ctx.lr = 0x822DF834;
	sub_822D5B28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_822DF838:
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// li r9,768
	ctx.r9.s64 = 768;
	// ori r10,r10,15104
	ctx.r10.u64 = ctx.r10.u64 | 15104;
	// li r4,309
	ctx.r4.s64 = 309;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// bl 0x822d48b8
	ctx.lr = 0x822DF85C;
	sub_822D48B8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r28,r11,15048
	r28.s64 = ctx.r11.s64 + 15048;
	// bne 0x822df874
	if (!ctx.cr0.eq) goto loc_822DF874;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// b 0x822df8b0
	goto loc_822DF8B0;
loc_822DF874:
	// lis r11,-16077
	ctx.r11.s64 = -1053622272;
	// li r9,306
	ctx.r9.s64 = 306;
	// ori r11,r11,11008
	ctx.r11.u64 = ctx.r11.u64 | 11008;
	// addi r4,r28,-2120
	ctx.r4.s64 = r28.s64 + -2120;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// li r5,1224
	ctx.r5.s64 = 1224;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stwu r30,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r30.u32);
	ctx.r3.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stwu r9,4(r29)
	ea = 4 + r29.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	r29.u32 = ea;
	// addi r3,r29,4
	ctx.r3.s64 = r29.s64 + 4;
	// bl 0x826a1e70
	ctx.lr = 0x822DF8A4;
	sub_826A1E70(ctx, base);
	// addi r10,r29,1224
	ctx.r10.s64 = r29.s64 + 1224;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r10.u32);
loc_822DF8B0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822df8cc
	if (ctx.cr0.eq) goto loc_822DF8CC;
	// addi r5,r28,-2312
	ctx.r5.s64 = r28.s64 + -2312;
	// li r6,12
	ctx.r6.s64 = 12;
	// li r4,244
	ctx.r4.s64 = 244;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822dea68
	ctx.lr = 0x822DF8CC;
	sub_822DEA68(ctx, base);
loc_822DF8CC:
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d48b8
	ctx.lr = 0x822DF8D8;
	sub_822D48B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822df918
	if (ctx.cr0.eq) goto loc_822DF918;
	// lis r11,-16374
	ctx.r11.s64 = -1073086464;
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r11,r11,11008
	ctx.r11.u64 = ctx.r11.u64 | 11008;
	// li r9,9
	ctx.r9.s64 = 9;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// addi r4,r28,-5388
	ctx.r4.s64 = r28.s64 + -5388;
	// li r5,36
	ctx.r5.s64 = 36;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stwu r9,4(r29)
	ea = 4 + r29.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	r29.u32 = ea;
	// addi r3,r29,4
	ctx.r3.s64 = r29.s64 + 4;
	// bl 0x826a1e70
	ctx.lr = 0x822DF910;
	sub_826A1E70(ctx, base);
	// addi r11,r29,36
	ctx.r11.s64 = r29.s64 + 36;
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
loc_822DF918:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r10,56(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x822df934
	if (!ctx.cr6.gt) goto loc_822DF934;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d5b28
	ctx.lr = 0x822DF930;
	sub_822D5B28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_822DF934:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,5888
	ctx.r9.s64 = 385875968;
	// ori r10,r10,8576
	ctx.r10.u64 = ctx.r10.u64 | 8576;
	// ori r9,r9,15
	ctx.r9.u64 = ctx.r9.u64 | 15;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// stwu r30,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r30.u32);
	ctx.r11.u32 = ea;
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// bl 0x822ded40
	ctx.lr = 0x822DF960;
	sub_822DED40(ctx, base);
	// addi r5,r24,28
	ctx.r5.s64 = r24.s64 + 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822deb40
	ctx.lr = 0x822DF970;
	sub_822DEB40(ctx, base);
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x822df988
	if (!ctx.cr6.gt) goto loc_822DF988;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d5b28
	ctx.lr = 0x822DF988;
	sub_822D5B28(ctx, base);
loc_822DF988:
	// lwz r24,620(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 620);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lwz r11,612(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 612);
	// lfs f11,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// ori r10,r10,20480
	ctx.r10.u64 = ctx.r10.u64 | 20480;
	// lfs f10,4(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// lfs f1,0(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// lfs f0,0(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// std r24,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, r24.u64);
	// lfd f13,128(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lfs f6,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// fdivs f3,f11,f6
	ctx.f3.f64 = double(float(ctx.f11.f64 / ctx.f6.f64));
	// addi r10,r8,16592
	ctx.r10.s64 = ctx.r8.s64 + 16592;
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stwu r30,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r30.u32);
	ctx.r3.u32 = ea;
	// fcfid f9,f13
	ctx.f9.f64 = double(ctx.f13.s64);
	// lfs f12,668(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 668);
	ctx.f12.f64 = double(temp.f32);
	// addi r9,r1,148
	ctx.r9.s64 = ctx.r1.s64 + 148;
	// fmuls f4,f6,f12
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// lfs f5,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f13,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lis r8,-32126
	ctx.r8.s64 = -2105409536;
	// fdivs f2,f10,f5
	ctx.f2.f64 = double(float(ctx.f10.f64 / ctx.f5.f64));
	// lfs f10,144(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 144);
	ctx.f10.f64 = double(temp.f32);
	// stwu r30,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r30.u32);
	ctx.r3.u32 = ea;
	// fsubs f3,f3,f13
	ctx.f3.f64 = double(float(ctx.f3.f64 - ctx.f13.f64));
	// stw r30,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, r30.u32);
	// lfs f31,4(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 4);
	f31.f64 = double(temp.f32);
	// stw r30,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, r30.u32);
	// lfs f7,124(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 124);
	ctx.f7.f64 = double(temp.f32);
	// stw r30,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, r30.u32);
	// stfs f1,176(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// fmuls f28,f5,f12
	f28.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// frsp f30,f9
	f30.f64 = double(float(ctx.f9.f64));
	// stfs f10,184(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// lfs f9,904(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f9.f64 = double(temp.f32);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// fdivs f29,f11,f4
	f29.f64 = double(float(ctx.f11.f64 / ctx.f4.f64));
	// stfs f31,180(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f5,196(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// lfs f8,176(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 176);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f2,f2,f13
	ctx.f2.f64 = double(float(ctx.f2.f64 - ctx.f13.f64));
	// lfs f11,1608(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1608);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r1,304
	ctx.r11.s64 = ctx.r1.s64 + 304;
	// stfs f12,208(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stfs f12,212(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stfs f9,188(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f4,224(r1)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// fadds f4,f3,f13
	ctx.f4.f64 = double(float(ctx.f3.f64 + ctx.f13.f64));
	// fdivs f1,f13,f30
	ctx.f1.f64 = double(float(ctx.f13.f64 / f30.f64));
	// lfs f12,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,1612(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1612);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f27,f30,f7
	f27.f64 = double(float(f30.f64 * ctx.f7.f64));
	// fdivs f31,f13,f29
	f31.f64 = double(float(ctx.f13.f64 / f29.f64));
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f0,164(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lfs f10,-16132(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -16132);
	ctx.f10.f64 = double(temp.f32);
	// stwu r30,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r30.u32);
	ctx.r3.u32 = ea;
	// stfs f10,216(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stfs f10,220(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// lfs f10,544(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 544);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f5,f1,f10
	ctx.f5.f64 = double(float(ctx.f1.f64 * ctx.f10.f64));
	// lfs f10,1160(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1160);
	ctx.f10.f64 = double(temp.f32);
	// stfs f0,172(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f6,192(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f3,200(r1)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f2,204(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// stfs f28,228(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// stfs f29,232(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// stfs f31,236(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// stfs f8,256(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// stfs f11,260(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// stfs f30,240(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// lfs f8,1616(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1616);
	ctx.f8.f64 = double(temp.f32);
	// fadds f13,f2,f13
	ctx.f13.f64 = double(float(ctx.f2.f64 + ctx.f13.f64));
	// lfs f7,1620(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1620);
	ctx.f7.f64 = double(temp.f32);
	// li r6,8
	ctx.r6.s64 = 8;
	// lfs f6,1624(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1624);
	ctx.f6.f64 = double(temp.f32);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// stfs f0,268(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 268, temp.u32);
	// fctidz f0,f4
	ctx.f0.s64 = std::isnan(ctx.f4.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f4.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f4.f64));
	// stfs f27,252(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// stfs f10,264(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 264, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f11,272(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 272, temp.u32);
	// mr r27,r30
	r27.u64 = r30.u64;
	// stfs f9,276(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 276, temp.u32);
	// stfs f8,280(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 280, temp.u32);
	// stfs f12,284(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 284, temp.u32);
	// stfs f7,288(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + 288, temp.u32);
	// fctidz f13,f13
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f13.f64));
	// stfs f1,244(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// stfs f5,248(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// stfs f6,292(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + 292, temp.u32);
	// stfs f11,296(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 296, temp.u32);
	// stfs f12,300(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 300, temp.u32);
	// std r30,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, r30.u64);
	// std r30,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, r30.u64);
	// stfd f0,136(r1)
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.f0.u64);
	// std r30,16(r11)
	REX_STORE_U64(ctx.r11.u32 + 16, r30.u64);
	// stfd f13,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.f13.u64);
	// std r30,24(r11)
	REX_STORE_U64(ctx.r11.u32 + 24, r30.u64);
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r10,140(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// mullw r28,r11,r10
	r28.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// bl 0x822dea68
	ctx.lr = 0x822DFB50;
	sub_822DEA68(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x822dfc68
	if (ctx.cr6.eq) goto loc_822DFC68;
loc_822DFB5C:
	// lwz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 0);
	// addi r26,r11,1
	r26.s64 = ctx.r11.s64 + 1;
	// mr r9,r21
	ctx.r9.u64 = r21.u64;
	// add r11,r10,r23
	ctx.r11.u64 = ctx.r10.u64 + r23.u64;
	// cmplw cr6,r26,r22
	ctx.cr6.compare<uint32_t>(r26.u32, r22.u32, ctx.xer);
	// beq cr6,0x822dfb78
	if (ctx.cr6.eq) goto loc_822DFB78;
	// li r9,16384
	ctx.r9.s64 = 16384;
loc_822DFB78:
	// subf r9,r11,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r11.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r9,r10,255
	ctx.r9.s64 = ctx.r10.s64 + 255;
	// rlwinm r9,r9,24,8,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFFFF;
	// mulli r29,r9,42
	r29.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(42));
	// cmplw cr6,r28,r29
	ctx.cr6.compare<uint32_t>(r28.u32, r29.u32, ctx.xer);
	// bge cr6,0x822dfb98
	if (!ctx.cr6.lt) goto loc_822DFB98;
	// mr r29,r28
	r29.u64 = r28.u64;
loc_822DFB98:
	// clrldi r7,r27,32
	ctx.r7.u64 = r27.u64 & 0xFFFFFFFF;
	// lwz r8,152(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// rlwinm r9,r11,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// std r7,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r7.u64);
	// rlwinm r11,r11,0,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1FFFFFFC;
	// addi r6,r9,512
	ctx.r6.s64 = ctx.r9.s64 + 512;
	// rlwinm r9,r10,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r10,r6,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x1000;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// andi. r10,r8,49400
	ctx.r10.u64 = ctx.r8.u64 & 49400;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfd f0,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// clrlwi r9,r9,9
	ctx.r9.u64 = ctx.r9.u32 & 0x7FFFFF;
	// oris r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 1073741824;
	// oris r10,r10,19200
	ctx.r10.u64 = ctx.r10.u64 | 1258291200;
	// stw r11,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// lis r8,19200
	ctx.r8.s64 = 1258291200;
	// ori r10,r10,2561
	ctx.r10.u64 = ctx.r10.u64 | 2561;
	// oris r11,r9,19200
	ctx.r11.u64 = ctx.r9.u64 | 1258291200;
	// stw r8,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r8.u32);
	// stw r10,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r10.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r11,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// bl 0x822dea68
	ctx.lr = 0x822DFC14;
	sub_822DEA68(ctx, base);
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x822dfc2c
	if (!ctx.cr6.gt) goto loc_822DFC2C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d5b28
	ctx.lr = 0x822DFC2C;
	sub_822D5B28(ctx, base);
loc_822DFC2C:
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// mullw r10,r29,r24
	ctx.r10.s64 = int64_t(r29.s32) * int64_t(r24.s32);
	// ori r11,r11,13824
	ctx.r11.u64 = ctx.r11.u64 | 13824;
	// li r9,129
	ctx.r9.s64 = 129;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// subf r28,r29,r28
	r28.u64 = r28.u64 - r29.u64;
	// rlwimi r9,r10,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// add r27,r29,r27
	r27.u64 = r29.u64 + r27.u64;
	// mr r23,r30
	r23.u64 = r30.u64;
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// addi r25,r25,4
	r25.s64 = r25.s64 + 4;
	// cmplw cr6,r26,r22
	ctx.cr6.compare<uint32_t>(r26.u32, r22.u32, ctx.xer);
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// blt cr6,0x822dfb5c
	if (ctx.cr6.lt) goto loc_822DFB5C;
loc_822DFC68:
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,336
	ctx.r5.s64 = ctx.r1.s64 + 336;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c68c8
	ctx.lr = 0x822DFC7C;
	sub_822C68C8(ctx, base);
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c9a30
	ctx.lr = 0x822DFC90;
	sub_822C9A30(ctx, base);
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x826a2cf0
	ctx.lr = 0x822DFC9C;
	// b 0x826a1cec
	return;
}

DEFINE_REX_FUNC(sub_82301698) {
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
	ctx.lr = 0x823016A0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,152(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 152);
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8230170c
	if (ctx.cr6.eq) goto loc_8230170C;
	// lwz r11,148(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 148);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823016fc
	if (ctx.cr6.eq) goto loc_823016FC;
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823016fc
	if (ctx.cr6.eq) goto loc_823016FC;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
loc_823016DC:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8230181c
	if (ctx.cr6.eq) goto loc_8230181C;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823016dc
	if (!ctx.cr6.eq) goto loc_823016DC;
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
loc_823016F4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82301708
	if (!ctx.cr0.eq) goto loc_82301708;
loc_823016FC:
	// bl 0x8230fe68
	ctx.lr = 0x82301700;
	sub_8230FE68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82301814
	if (!ctx.cr0.eq) goto loc_82301814;
loc_82301708:
	// stw r26,152(r31)
	REX_STORE_U32(r31.u32 + 152, r26.u32);
loc_8230170C:
	// lwz r3,72(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 72);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82301728
	if (ctx.cr6.eq) goto loc_82301728;
	// bl 0x823151e8
	ctx.lr = 0x8230171C;
	sub_823151E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82301814
	if (!ctx.cr0.eq) goto loc_82301814;
	// stw r26,72(r31)
	REX_STORE_U32(r31.u32 + 72, r26.u32);
loc_82301728:
	// lwz r4,184(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 184);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r28,-32129
	r28.s64 = -2105606144;
	// addi r29,r11,4384
	r29.s64 = ctx.r11.s64 + 4384;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8230175c
	if (ctx.cr6.eq) goto loc_8230175C;
	// lwz r11,1012(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 1012);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,667
	ctx.r6.s64 = 667;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x82301758;
	sub_82330D00(ctx, base);
	// stw r26,184(r31)
	REX_STORE_U32(r31.u32 + 184, r26.u32);
loc_8230175C:
	// lwz r3,148(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 148);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82301778
	if (ctx.cr6.eq) goto loc_82301778;
	// bl 0x8230fe68
	ctx.lr = 0x8230176C;
	sub_8230FE68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82301814
	if (!ctx.cr0.eq) goto loc_82301814;
	// stw r26,148(r31)
	REX_STORE_U32(r31.u32 + 148, r26.u32);
loc_82301778:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823017f8
	if (ctx.cr6.eq) goto loc_823017F8;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// mr r27,r26
	r27.u64 = r26.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823017d8
	if (!ctx.cr6.gt) goto loc_823017D8;
	// mr r30,r26
	r30.u64 = r26.u64;
loc_82301798:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// lwzx r10,r30,r11
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823017c4
	if (ctx.cr6.eq) goto loc_823017C4;
	// lwz r10,1012(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 1012);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwzx r4,r30,r11
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// li r6,681
	ctx.r6.s64 = 681;
	// lwz r3,4(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x823017C4;
	sub_82330D00(ctx, base);
loc_823017C4:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82301798
	if (ctx.cr6.lt) goto loc_82301798;
loc_823017D8:
	// lwz r11,1012(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 1012);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,44(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 44);
	// li r6,684
	ctx.r6.s64 = 684;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x823017F4;
	sub_82330D00(ctx, base);
	// stw r26,44(r31)
	REX_STORE_U32(r31.u32 + 44, r26.u32);
loc_823017F8:
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82301810
	if (ctx.cr6.eq) goto loc_82301810;
	// bl 0x8232f5d0
	ctx.lr = 0x82301808;
	sub_8232F5D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82301814
	if (!ctx.cr0.eq) goto loc_82301814;
loc_82301810:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82301814:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
loc_8230181C:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x823016f4
	goto loc_823016F4;
}

DEFINE_REX_FUNC(sub_8230F9D0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8230f9e0
	if (!ctx.cr6.eq) goto loc_8230F9E0;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_8230F9E0:
	// lfs f0,36(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// beq cr6,0x8230fa18
	if (ctx.cr6.eq) goto loc_8230FA18;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x8230fa0c
	if (ctx.cr6.eq) goto loc_8230FA0C;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// bne cr6,0x8230fa28
	if (!ctx.cr6.eq) goto loc_8230FA28;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,3812(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3812);
	ctx.f13.f64 = double(temp.f32);
	// b 0x8230fa20
	goto loc_8230FA20;
loc_8230FA0C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,3808(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3808);
	ctx.f13.f64 = double(temp.f32);
	// b 0x8230fa20
	goto loc_8230FA20;
loc_8230FA18:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,5152(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 5152);
	ctx.f13.f64 = double(temp.f32);
loc_8230FA20:
	// fmuls f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 0, temp.u32);
loc_8230FA28:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82312A90) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82312A98;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82312ab8
	if (!ctx.cr6.eq) goto loc_82312AB8;
	// li r3,33
	ctx.r3.s64 = 33;
	// b 0x82312bd8
	goto loc_82312BD8;
loc_82312AB8:
	// lwz r11,172(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82312acc
	if (ctx.cr6.eq) goto loc_82312ACC;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// b 0x82312ad0
	goto loc_82312AD0;
loc_82312ACC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82312AD0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82312aec
	if (!ctx.cr6.eq) goto loc_82312AEC;
	// li r6,148
	ctx.r6.s64 = 148;
	// lis r5,8
	ctx.r5.s64 = 524288;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82331a00
	ctx.lr = 0x82312AEC;
	sub_82331A00(ctx, base);
loc_82312AEC:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82312b18
	if (ctx.cr6.eq) goto loc_82312B18;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82312B10;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82312bd8
	if (!ctx.cr0.eq) goto loc_82312BD8;
loc_82312B18:
	// lwz r3,40(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 40);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82312b50
	if (ctx.cr6.eq) goto loc_82312B50;
	// lwz r11,152(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 152);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82312b34
	if (ctx.cr6.eq) goto loc_82312B34;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_82312B34:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82312B48;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82312bd8
	if (!ctx.cr0.eq) goto loc_82312BD8;
loc_82312B50:
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82312b6c
	if (ctx.cr6.eq) goto loc_82312B6C;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82311468
	ctx.lr = 0x82312B64;
	sub_82311468(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82312bd8
	if (!ctx.cr0.eq) goto loc_82312BD8;
loc_82312B6C:
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82312b90
	if (ctx.cr6.eq) goto loc_82312B90;
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// lis r5,8
	ctx.r5.s64 = 524288;
	// li r4,1
	ctx.r4.s64 = 1;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82331a00
	ctx.lr = 0x82312B90;
	sub_82331A00(ctx, base);
loc_82312B90:
	// addi r30,r31,128
	r30.s64 = r31.s64 + 128;
	// lwz r31,128(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 128);
	// b 0x82312bcc
	goto loc_82312BCC;
loc_82312B9C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// addi r3,r31,-4
	ctx.r3.s64 = r31.s64 + -4;
	// bne cr6,0x82312bac
	if (!ctx.cr6.eq) goto loc_82312BAC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82312BAC:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82312BC0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82312bd8
	if (!ctx.cr0.eq) goto loc_82312BD8;
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_82312BCC:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// bne cr6,0x82312b9c
	if (!ctx.cr6.eq) goto loc_82312B9C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82312BD8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82318C10) {
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
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// bl 0x82316468
	ctx.lr = 0x82318C2C;
	sub_82316468(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82318c4c
	if (ctx.cr6.eq) goto loc_82318C4C;
	// bl 0x823151e8
	ctx.lr = 0x82318C3C;
	sub_823151E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82318c50
	if (!ctx.cr0.eq) goto loc_82318C50;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
loc_82318C4C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82318C50:
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

DEFINE_REX_FUNC(sub_8231AC40) {
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
	// bl 0x826a1cb0
	ctx.lr = 0x8231AC48;
	// stfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -72, f30.u64);
	// stfd f31,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r26,r10
	r26.u64 = ctx.r10.u64;
	// bl 0x823d1958
	ctx.lr = 0x8231AC78;
	sub_823D1958(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8231ad34
	if (!ctx.cr0.eq) goto loc_8231AD34;
	// stfs f31,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 24, temp.u32);
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// stfs f30,28(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 28, temp.u32);
	// stw r29,12(r31)
	REX_STORE_U32(r31.u32 + 12, r29.u32);
	// stw r28,16(r31)
	REX_STORE_U32(r31.u32 + 16, r28.u32);
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// sth r27,20(r31)
	REX_STORE_U16(r31.u32 + 20, r27.u16);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r26,32(r31)
	REX_STORE_U32(r31.u32 + 32, r26.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r10,6576
	ctx.r5.s64 = ctx.r10.s64 + 6576;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,394
	ctx.r6.s64 = 394;
	// lwz r11,1012(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1012);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330a38
	ctx.lr = 0x8231ACC4;
	sub_82330A38(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8231acf8
	if (ctx.cr0.eq) goto loc_8231ACF8;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,6340
	ctx.r11.s64 = ctx.r11.s64 + 6340;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// b 0x8231acfc
	goto loc_8231ACFC;
loc_8231ACF8:
	// li r30,0
	r30.s64 = 0;
loc_8231ACFC:
	// stw r30,36(r31)
	REX_STORE_U32(r31.u32 + 36, r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x8231ad10
	if (!ctx.cr6.eq) goto loc_8231AD10;
	// li r3,44
	ctx.r3.s64 = 44;
	// b 0x8231ad34
	goto loc_8231AD34;
loc_8231AD10:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,244(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// bl 0x8231f670
	ctx.lr = 0x8231AD1C;
	sub_8231F670(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8231ad34
	if (!ctx.cr0.eq) goto loc_8231AD34;
	// lwz r11,252(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// lwz r10,260(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// stw r11,16(r30)
	REX_STORE_U32(r30.u32 + 16, ctx.r11.u32);
	// stw r10,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r10.u32);
loc_8231AD34:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82324D68) {
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
	ctx.lr = 0x82324D70;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r25,12(r3)
	r25.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r24,r3,12
	r24.s64 = ctx.r3.s64 + 12;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// cmplw cr6,r25,r24
	ctx.cr6.compare<uint32_t>(r25.u32, r24.u32, ctx.xer);
	// beq cr6,0x82324f58
	if (ctx.cr6.eq) goto loc_82324F58;
	// li r23,0
	r23.s64 = 0;
loc_82324D8C:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// addi r11,r25,-4
	ctx.r11.s64 = r25.s64 + -4;
	// bne cr6,0x82324d9c
	if (!ctx.cr6.eq) goto loc_82324D9C;
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
loc_82324D9C:
	// lwz r28,52(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// addi r26,r11,52
	r26.s64 = ctx.r11.s64 + 52;
	// b 0x82324f34
	goto loc_82324F34;
loc_82324DA8:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// addi r31,r28,-4
	r31.s64 = r28.s64 + -4;
	// bne cr6,0x82324db8
	if (!ctx.cr6.eq) goto loc_82324DB8;
	// mr r31,r23
	r31.u64 = r23.u64;
loc_82324DB8:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82324e9c
	if (!ctx.cr0.eq) goto loc_82324E9C;
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82324e9c
	if (!ctx.cr0.eq) goto loc_82324E9C;
	// lwz r30,128(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 128);
	// addi r29,r31,128
	r29.s64 = r31.s64 + 128;
	// b 0x82324e80
	goto loc_82324E80;
loc_82324DD8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// addi r31,r30,-4
	r31.s64 = r30.s64 + -4;
	// bne cr6,0x82324de8
	if (!ctx.cr6.eq) goto loc_82324DE8;
	// mr r31,r23
	r31.u64 = r23.u64;
loc_82324DE8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,52(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 52);
	// bl 0x8233f250
	ctx.lr = 0x82324DF4;
	sub_8233F250(ctx, base);
	// cmpwi cr6,r3,36
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 36, ctx.xer);
	// beq cr6,0x82324e10
	if (ctx.cr6.eq) goto loc_82324E10;
	// cmpwi cr6,r3,11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 11, ctx.xer);
	// beq cr6,0x82324e10
	if (ctx.cr6.eq) goto loc_82324E10;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82324f5c
	if (!ctx.cr6.eq) goto loc_82324F5C;
	// b 0x82324e14
	goto loc_82324E14;
loc_82324E10:
	// stb r23,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, r23.u8);
loc_82324E14:
	// lwz r3,40(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 40);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82324e70
	if (ctx.cr6.eq) goto loc_82324E70;
	// addi r6,r1,81
	ctx.r6.s64 = ctx.r1.s64 + 81;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x8233f898
	ctx.lr = 0x82324E30;
	sub_8233F898(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82324f5c
	if (!ctx.cr0.eq) goto loc_82324F5C;
	// lbz r11,81(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82324e50
	if (ctx.cr0.eq) goto loc_82324E50;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
loc_82324E50:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82324e70
	if (ctx.cr6.eq) goto loc_82324E70;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x82324e70
	if (ctx.cr6.eq) goto loc_82324E70;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
loc_82324E70:
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82324e8c
	if (!ctx.cr0.eq) goto loc_82324E8C;
	// lwz r30,0(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 0);
loc_82324E80:
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(r30.u32, r29.u32, ctx.xer);
	// bne cr6,0x82324dd8
	if (!ctx.cr6.eq) goto loc_82324DD8;
	// b 0x82324f30
	goto loc_82324F30;
loc_82324E8C:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
	// b 0x82324f30
	goto loc_82324F30;
loc_82324E9C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,52(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 52);
	// bl 0x8233f250
	ctx.lr = 0x82324EA8;
	sub_8233F250(ctx, base);
	// cmpwi cr6,r3,36
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 36, ctx.xer);
	// beq cr6,0x82324ec4
	if (ctx.cr6.eq) goto loc_82324EC4;
	// cmpwi cr6,r3,11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 11, ctx.xer);
	// beq cr6,0x82324ec4
	if (ctx.cr6.eq) goto loc_82324EC4;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82324f5c
	if (!ctx.cr6.eq) goto loc_82324F5C;
	// b 0x82324ec8
	goto loc_82324EC8;
loc_82324EC4:
	// stb r23,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, r23.u8);
loc_82324EC8:
	// lwz r3,40(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 40);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82324f24
	if (ctx.cr6.eq) goto loc_82324F24;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8233f898
	ctx.lr = 0x82324EE4;
	sub_8233F898(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82324f5c
	if (!ctx.cr0.eq) goto loc_82324F5C;
	// lbz r11,82(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82324f04
	if (ctx.cr0.eq) goto loc_82324F04;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
loc_82324F04:
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82324f24
	if (ctx.cr6.eq) goto loc_82324F24;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x82324f24
	if (ctx.cr6.eq) goto loc_82324F24;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
loc_82324F24:
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82324f40
	if (!ctx.cr0.eq) goto loc_82324F40;
loc_82324F30:
	// lwz r28,0(r28)
	r28.u64 = REX_LOAD_U32(r28.u32 + 0);
loc_82324F34:
	// cmplw cr6,r28,r26
	ctx.cr6.compare<uint32_t>(r28.u32, r26.u32, ctx.xer);
	// bne cr6,0x82324da8
	if (!ctx.cr6.eq) goto loc_82324DA8;
	// b 0x82324f4c
	goto loc_82324F4C;
loc_82324F40:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
loc_82324F4C:
	// lwz r25,0(r25)
	r25.u64 = REX_LOAD_U32(r25.u32 + 0);
	// cmplw cr6,r25,r24
	ctx.cr6.compare<uint32_t>(r25.u32, r24.u32, ctx.xer);
	// bne cr6,0x82324d8c
	if (!ctx.cr6.eq) goto loc_82324D8C;
loc_82324F58:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82324F5C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_82333C08) {
	REX_FUNC_PROLOGUE();
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// blt cr6,0x82333c24
	if (ctx.cr6.lt) goto loc_82333C24;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// bgt cr6,0x82333c24
	if (ctx.cr6.gt) goto loc_82333C24;
	// stw r4,21344(r3)
	REX_STORE_U32(ctx.r3.u32 + 21344, ctx.r4.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82333C24:
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82335088) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x823350b0
	if (!ctx.cr6.eq) goto loc_823350B0;
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_823350B0:
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x823350c4
	if (ctx.cr6.eq) goto loc_823350C4;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,26164(r3)
	REX_STORE_U8(ctx.r3.u32 + 26164, ctx.r11.u8);
loc_823350C4:
	// li r5,124
	ctx.r5.s64 = 124;
	// addi r3,r3,26168
	ctx.r3.s64 = ctx.r3.s64 + 26168;
	// bl 0x823ef2f8
	ctx.lr = 0x823350D0;
	sub_823EF2F8(ctx, base);
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

DEFINE_REX_FUNC(sub_8233E398) {
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
	// bl 0x823eea88
	ctx.lr = 0x8233E3B0;
	sub_823EEA88(ctx, base);
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
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

DEFINE_REX_FUNC(sub_8233EC48) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8233EC50;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bl 0x8234aac0
	ctx.lr = 0x8233EC68;
	sub_8234AAC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8233ec94
	if (ctx.cr6.eq) goto loc_8233EC94;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8233ec80
	if (ctx.cr6.eq) goto loc_8233EC80;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_8233EC80:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8233eca8
	if (ctx.cr6.eq) goto loc_8233ECA8;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
loc_8233EC94:
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8234c0e8
	ctx.lr = 0x8233ECA8;
	sub_8234C0E8(ctx, base);
loc_8233ECA8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8233FB68) {
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
	ctx.lr = 0x8233FB84;
	sub_8235ACE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233fbd0
	if (!ctx.cr6.eq) goto loc_8233FBD0;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,220(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 220);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233fbbc
	if (ctx.cr6.eq) goto loc_8233FBBC;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x8233fbbc
	if (ctx.cr6.eq) goto loc_8233FBBC;
	// li r3,56
	ctx.r3.s64 = 56;
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
loc_8233FBBC:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r10,164(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 164);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8233FBD0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8233FBD0:
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

DEFINE_REX_FUNC(sub_82343380) {
	REX_FUNC_PROLOGUE();
	// lwz r11,68(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823433a4
	if (ctx.cr6.eq) goto loc_823433A4;
	// lwz r10,164(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 164);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823433a4
	if (ctx.cr6.eq) goto loc_823433A4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r3,r11,28
	ctx.r3.s64 = ctx.r11.s64 + 28;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_823433A4:
	// li r3,25
	ctx.r3.s64 = 25;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823467A0) {
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
	ctx.lr = 0x823467A8;
	// stwu r1,-512(r1)
	ea = -512 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,68(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 68);
	// li r21,0
	r21.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r20,r4
	r20.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r19,r6
	r19.u64 = ctx.r6.u64;
	// mr r28,r21
	r28.u64 = r21.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823467dc
	if (!ctx.cr6.eq) goto loc_823467DC;
	// li r3,68
	ctx.r3.s64 = 68;
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x826a1ce4
	return;
loc_823467DC:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// bne cr6,0x823467f0
	if (!ctx.cr6.eq) goto loc_823467F0;
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x826a1ce4
	return;
loc_823467F0:
	// lwz r10,28(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 28);
	// cmplwi cr6,r10,11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 11, ctx.xer);
	// bgt cr6,0x82346844
	if (ctx.cr6.gt) goto loc_82346844;
	// lis r12,-32204
	ctx.r12.s64 = -2110521344;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,26644
	ctx.r12.s64 = ctx.r12.s64 + 26644;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_82346850;
	case 1:
		goto loc_82346850;
	case 2:
		goto loc_82346850;
	case 3:
		goto loc_82346850;
	case 4:
		goto loc_82346850;
	case 5:
		goto loc_82346850;
	case 6:
		goto loc_82346850;
	case 7:
		goto loc_82346850;
	case 8:
		goto loc_82346850;
	case 9:
		goto loc_82346850;
	case 10:
		goto loc_82346850;
	case 11:
		goto loc_82346850;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_82346844:
	// li r3,25
	ctx.r3.s64 = 25;
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x826a1ce4
	return;
loc_82346850:
	// lwz r10,256(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 256);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82346868
	if (!ctx.cr6.eq) goto loc_82346868;
	// li r3,82
	ctx.r3.s64 = 82;
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x826a1ce4
	return;
loc_82346868:
	// lwz r10,116(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 116);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r11,28
	ctx.r3.s64 = ctx.r11.s64 + 28;
	// lwz r4,200(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 200);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82346880;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82346b10
	if (!ctx.cr6.eq) goto loc_82346B10;
	// lwz r10,356(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// mr r27,r21
	r27.u64 = r21.u64;
	// lwz r11,72(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 72);
	// mr r25,r21
	r25.u64 = r21.u64;
	// li r22,1
	r22.s64 = 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x823468b4
	if (ctx.cr6.eq) goto loc_823468B4;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x823468b4
	if (!ctx.cr6.eq) goto loc_823468B4;
	// mr r22,r10
	r22.u64 = ctx.r10.u64;
loc_823468B4:
	// lwz r10,32(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 32);
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r9,r10,0,24,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823468d8
	if (ctx.cr6.eq) goto loc_823468D8;
	// lwz r10,68(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 68);
	// lwz r10,208(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 208);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// b 0x823468e0
	goto loc_823468E0;
loc_823468D8:
	// lwz r10,372(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
loc_823468E0:
	// beq cr6,0x823468e8
	if (ctx.cr6.eq) goto loc_823468E8;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_823468E8:
	// li r10,16384
	ctx.r10.s64 = 16384;
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r9,r10,r11
	ctx.r9.u64 = uint32_t(ctx.r11.u32 ? ctx.r10.u32 / ctx.r11.u32 : 0);
	// mullw. r10,r9,r11
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82346900
	if (!ctx.cr0.eq) goto loc_82346900;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82346900:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x82346b04
	if (ctx.cr6.eq) goto loc_82346B04;
	// divwu r24,r10,r22
	r24.u64 = uint32_t(r22.u32 ? ctx.r10.u32 / r22.u32 : 0);
	// twllei r22,0
	if (r22.s32 == 0 || r22.u32 < 0u) ppc_trap(ctx, base, 0);
	// li r23,36
	r23.s64 = 36;
loc_82346914:
	// cmplw cr6,r26,r24
	ctx.cr6.compare<uint32_t>(r26.u32, r24.u32, ctx.xer);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// bgt cr6,0x82346924
	if (ctx.cr6.gt) goto loc_82346924;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
loc_82346924:
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 32);
	// add r31,r27,r20
	r31.u64 = r27.u64 + r20.u64;
	// stw r21,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r21.u32);
	// rlwinm r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8234695c
	if (ctx.cr6.eq) goto loc_8234695C;
	// lwz r11,68(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 68);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,256(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 256);
	// bl 0x82340718
	ctx.lr = 0x82346958;
	sub_82340718(ctx, base);
	// b 0x82346968
	goto loc_82346968;
loc_8234695C:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,68(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 68);
	// bl 0x8239e890
	ctx.lr = 0x82346968;
	sub_8239E890(ctx, base);
loc_82346968:
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8234697c
	if (ctx.cr6.eq) goto loc_8234697C;
	// cmpwi cr6,r3,22
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 22, ctx.xer);
	// bne cr6,0x82346b10
	if (!ctx.cr6.eq) goto loc_82346B10;
loc_8234697C:
	// lwz r11,256(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 256);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823469a4
	if (ctx.cr6.eq) goto loc_823469A4;
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823469a4
	if (ctx.cr6.eq) goto loc_823469A4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,264(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 264);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823469A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823469A4:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r29,22
	ctx.cr6.compare<int32_t>(r29.s32, 22, ctx.xer);
	// twllei r22,0
	if (r22.s32 == 0 || r22.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r11,r11,r22
	ctx.r11.u64 = uint32_t(r22.u32 ? ctx.r11.u32 / r22.u32 : 0);
	// bne cr6,0x823469bc
	if (!ctx.cr6.eq) goto loc_823469BC;
	// mr r26,r11
	r26.u64 = ctx.r11.u64;
loc_823469BC:
	// lwz r9,72(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 72);
	// subf r26,r11,r26
	r26.u64 = r26.u64 - ctx.r11.u64;
	// lwz r10,28(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 28);
	// add r27,r11,r27
	r27.u64 = ctx.r11.u64 + r27.u64;
	// add r25,r11,r25
	r25.u64 = ctx.r11.u64 + r25.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82346ae0
	if (ctx.cr6.eq) goto loc_82346AE0;
	// cmplwi cr6,r10,11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 11, ctx.xer);
	// bgt cr6,0x82346ae0
	if (ctx.cr6.gt) goto loc_82346AE0;
	// lis r12,-32204
	ctx.r12.s64 = -2110521344;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,27128
	ctx.r12.s64 = ctx.r12.s64 + 27128;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_82346A60;
	case 1:
		goto loc_82346A28;
	case 2:
		goto loc_82346A30;
	case 3:
		goto loc_82346A38;
	case 4:
		goto loc_82346A40;
	case 5:
		goto loc_82346A40;
	case 6:
		goto loc_82346A60;
	case 7:
		goto loc_82346A60;
	case 8:
		goto loc_82346A60;
	case 9:
		goto loc_82346A60;
	case 10:
		goto loc_82346A60;
	case 11:
		goto loc_82346A60;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_82346A28:
	// li r10,8
	ctx.r10.s64 = 8;
	// b 0x82346a44
	goto loc_82346A44;
loc_82346A30:
	// li r10,16
	ctx.r10.s64 = 16;
	// b 0x82346a44
	goto loc_82346A44;
loc_82346A38:
	// li r10,24
	ctx.r10.s64 = 24;
	// b 0x82346a44
	goto loc_82346A44;
loc_82346A40:
	// li r10,32
	ctx.r10.s64 = 32;
loc_82346A44:
	// rldicl r11,r11,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 3) & 0x7FFFFFFFF;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// rldicr r11,r11,0,60
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 0) & 0xFFFFFFFFFFFFFFF8;
	// tdllei r10,0
	if (ctx.r10.s64 == 0ll || ctx.r10.u64 < 0ull) ppc_trap(ctx, base, 0);
	// divdu r8,r11,r10
	ctx.r8.u64 = ctx.r10.u64 ? ctx.r11.u64 / ctx.r10.u64 : 0;
	// rotlwi r11,r8,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// b 0x82346ad8
	goto loc_82346AD8;
loc_82346A60:
	// lis r12,-32204
	ctx.r12.s64 = -2110521344;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,27256
	ctx.r12.s64 = ctx.r12.s64 + 27256;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_82346AD4;
	case 1:
		goto loc_82346AE0;
	case 2:
		goto loc_82346AE0;
	case 3:
		goto loc_82346AE0;
	case 4:
		goto loc_82346AE0;
	case 5:
		goto loc_82346AE0;
	case 6:
		goto loc_82346AA8;
	case 7:
		goto loc_82346AB4;
	case 8:
		goto loc_82346AC0;
	case 9:
		goto loc_82346ACC;
	case 10:
		goto loc_82346ACC;
	case 11:
		goto loc_82346ACC;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_82346AA8:
	// mulli r11,r11,14
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(14));
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// b 0x82346ad8
	goto loc_82346AD8;
loc_82346AB4:
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// divwu r11,r11,r23
	ctx.r11.u64 = uint32_t(r23.u32 ? ctx.r11.u32 / r23.u32 : 0);
	// b 0x82346ad8
	goto loc_82346AD8;
loc_82346AC0:
	// mulli r11,r11,28
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(28));
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// b 0x82346ad8
	goto loc_82346AD8;
loc_82346ACC:
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
	// b 0x82346ae0
	goto loc_82346AE0;
loc_82346AD4:
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
loc_82346AD8:
	// divwu r28,r11,r9
	r28.u64 = uint32_t(ctx.r9.u32 ? ctx.r11.u32 / ctx.r9.u32 : 0);
	// twllei r9,0
	if (ctx.r9.s32 == 0 || ctx.r9.u32 < 0u) ppc_trap(ctx, base, 0);
loc_82346AE0:
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
	// lwz r10,44(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 44);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// stw r11,40(r30)
	REX_STORE_U32(r30.u32 + 40, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82346afc
	if (!ctx.cr6.gt) goto loc_82346AFC;
	// stw r10,40(r30)
	REX_STORE_U32(r30.u32 + 40, ctx.r10.u32);
loc_82346AFC:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// bne cr6,0x82346914
	if (!ctx.cr6.eq) goto loc_82346914;
loc_82346B04:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(r19.u32, 0, ctx.xer);
	// beq cr6,0x82346b10
	if (ctx.cr6.eq) goto loc_82346B10;
	// stw r25,0(r19)
	REX_STORE_U32(r19.u32 + 0, r25.u32);
loc_82346B10:
	// lwz r11,64(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 64);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,64(r30)
	REX_STORE_U32(r30.u32 + 64, ctx.r10.u32);
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x826a1ce4
	return;
}

DEFINE_REX_FUNC(sub_8235C210) {
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
	// beq cr6,0x8235c258
	if (ctx.cr6.eq) goto loc_8235C258;
	// lbz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8235c280
	if (!ctx.cr6.eq) goto loc_8235C280;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8235C248;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235c284
	if (!ctx.cr6.eq) goto loc_8235C284;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8235c27c
	goto loc_8235C27C;
loc_8235C258:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8235C270;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235c284
	if (!ctx.cr6.eq) goto loc_8235C284;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8235C27C:
	// stb r11,16(r31)
	REX_STORE_U8(r31.u32 + 16, ctx.r11.u8);
loc_8235C280:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8235C284:
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

DEFINE_REX_FUNC(sub_8235F828) {
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
	ctx.lr = 0x8235F830;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,400(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 400);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r20,r4
	r20.u64 = ctx.r4.u64;
	// mr r19,r5
	r19.u64 = ctx.r5.u64;
	// mr r21,r6
	r21.u64 = ctx.r6.u64;
	// mr r22,r9
	r22.u64 = ctx.r9.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8235f870
	if (ctx.cr6.lt) goto loc_8235F870;
	// lwz r11,284(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 284);
	// ori r10,r11,8
	ctx.r10.u64 = ctx.r11.u64 | 8;
	// stw r10,284(r3)
	REX_STORE_U32(ctx.r3.u32 + 284, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1ce4
	return;
loc_8235F870:
	// lwz r10,284(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 284);
	// li r23,0
	r23.s64 = 0;
	// lwz r11,208(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 208);
	// rlwinm r9,r10,0,29,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFE7;
	// lwz r10,140(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 140);
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// stw r9,284(r31)
	REX_STORE_U32(r31.u32 + 284, ctx.r9.u32);
	// bgt cr6,0x8235f9b8
	if (ctx.cr6.gt) goto loc_8235F9B8;
	// lis r12,-32202
	ctx.r12.s64 = -2110390272;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-1880
	ctx.r12.s64 = ctx.r12.s64 + -1880;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8235F938;
	case 1:
		goto loc_8235F8D8;
	case 2:
		goto loc_8235F8F0;
	case 3:
		goto loc_8235F908;
	case 4:
		goto loc_8235F920;
	case 5:
		goto loc_8235F920;
	case 6:
		goto loc_8235F938;
	case 7:
		goto loc_8235F938;
	case 8:
		goto loc_8235F938;
	case 9:
		goto loc_8235F938;
	case 10:
		goto loc_8235F938;
	case 11:
		goto loc_8235F938;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_8235F8D8:
	// li r11,8
	ctx.r11.s64 = 8;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// rldicl r9,r11,61,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 61) & 0x1FFFFFFFFFFFFFFF;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// mullw r28,r10,r11
	r28.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// b 0x8235f9bc
	goto loc_8235F9BC;
loc_8235F8F0:
	// li r11,16
	ctx.r11.s64 = 16;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// rldicl r9,r11,61,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 61) & 0x1FFFFFFFFFFFFFFF;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// mullw r28,r10,r11
	r28.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// b 0x8235f9bc
	goto loc_8235F9BC;
loc_8235F908:
	// li r11,24
	ctx.r11.s64 = 24;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// rldicl r9,r11,61,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 61) & 0x1FFFFFFFFFFFFFFF;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// mullw r28,r10,r11
	r28.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// b 0x8235f9bc
	goto loc_8235F9BC;
loc_8235F920:
	// li r11,32
	ctx.r11.s64 = 32;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// rldicl r9,r11,61,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 61) & 0x1FFFFFFFFFFFFFFF;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// mullw r28,r10,r11
	r28.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// b 0x8235f9bc
	goto loc_8235F9BC;
loc_8235F938:
	// lis r12,-32202
	ctx.r12.s64 = -2110390272;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-1712
	ctx.r12.s64 = ctx.r12.s64 + -1712;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8235F9AC;
	case 1:
		goto loc_8235F9B8;
	case 2:
		goto loc_8235F9B8;
	case 3:
		goto loc_8235F9B8;
	case 4:
		goto loc_8235F9B8;
	case 5:
		goto loc_8235F9B8;
	case 6:
		goto loc_8235F980;
	case 7:
		goto loc_8235F98C;
	case 8:
		goto loc_8235F998;
	case 9:
		goto loc_8235F9A4;
	case 10:
		goto loc_8235F9A4;
	case 11:
		goto loc_8235F9A4;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_8235F980:
	// li r11,8
	ctx.r11.s64 = 8;
	// mullw r28,r10,r11
	r28.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// b 0x8235f9bc
	goto loc_8235F9BC;
loc_8235F98C:
	// li r11,36
	ctx.r11.s64 = 36;
	// mullw r28,r10,r11
	r28.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// b 0x8235f9bc
	goto loc_8235F9BC;
loc_8235F998:
	// li r11,16
	ctx.r11.s64 = 16;
	// mullw r28,r10,r11
	r28.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// b 0x8235f9bc
	goto loc_8235F9BC;
loc_8235F9A4:
	// li r28,1
	r28.s64 = 1;
	// b 0x8235f9bc
	goto loc_8235F9BC;
loc_8235F9AC:
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
	// mullw r28,r10,r23
	r28.s64 = int64_t(ctx.r10.s32) * int64_t(r23.s32);
	// b 0x8235f9bc
	goto loc_8235F9BC;
loc_8235F9B8:
	// lwz r28,84(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_8235F9BC:
	// lwz r11,280(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 280);
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r22.u32, ctx.xer);
	// beq cr6,0x823600e0
	if (ctx.cr6.eq) goto loc_823600E0;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r27,r23
	r27.u64 = r23.u64;
	// stw r23,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r23.u32);
	// stw r23,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r23.u32);
	// lwz r26,0(r21)
	r26.u64 = REX_LOAD_U32(r21.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// rlwinm r9,r10,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8235f9f4
	if (ctx.cr6.eq) goto loc_8235F9F4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8233e2b0
	ctx.lr = 0x8235F9F4;
	sub_8233E2B0(ctx, base);
loc_8235F9F4:
	// ld r10,320(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 320);
	// lwz r11,400(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 400);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// std r10,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// beq cr6,0x8235fb84
	if (ctx.cr6.eq) goto loc_8235FB84;
	// ld r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// ble cr6,0x8235fa88
	if (!ctx.cr6.gt) goto loc_8235FA88;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// extsw r9,r26
	ctx.r9.s64 = r26.s32;
	// ld r11,20888(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 20888);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmpld cr6,r10,r9
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r9.u64, ctx.xer);
	// bge cr6,0x8235fa88
	if (!ctx.cr6.lt) goto loc_8235FA88;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + r26.u64;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r26.u32, ctx.xer);
	// ble cr6,0x8235fa48
	if (!ctx.cr6.gt) goto loc_8235FA48;
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
loc_8235FA48:
	// lwz r9,140(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 140);
	// subf r30,r11,r26
	r30.u64 = r26.u64 - ctx.r11.u64;
	// lwz r10,272(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 272);
	// li r4,0
	ctx.r4.s64 = 0;
	// mullw r8,r30,r9
	ctx.r8.s64 = int64_t(r30.s32) * int64_t(ctx.r9.s32);
	// mullw r7,r9,r11
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x823ef5f0
	ctx.lr = 0x8235FA70;
	sub_823EF5F0(ctx, base);
	// lwz r6,400(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 400);
	// mr r26,r30
	r26.u64 = r30.u64;
	// stw r22,36(r6)
	REX_STORE_U32(ctx.r6.u32 + 36, r22.u32);
	// lwz r5,284(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 284);
	// ori r4,r5,8
	ctx.r4.u64 = ctx.r5.u64 | 8;
	// stw r4,284(r31)
	REX_STORE_U32(r31.u32 + 284, ctx.r4.u32);
loc_8235FA88:
	// lwz r11,400(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 400);
	// ld r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 16);
	// cmpldi cr6,r9,0
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 0, ctx.xer);
	// ble cr6,0x8235fb1c
	if (!ctx.cr6.gt) goto loc_8235FB1C;
	// lwz r7,20(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 20);
	// extsw r11,r26
	ctx.r11.s64 = r26.s32;
	// lwz r10,376(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 376);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ld r11,20888(r7)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r7.u32 + 20888);
	// add r6,r8,r11
	ctx.r6.u64 = ctx.r8.u64 + ctx.r11.u64;
	// cmpld cr6,r9,r6
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r6.u64, ctx.xer);
	// bge cr6,0x8235fb1c
	if (!ctx.cr6.lt) goto loc_8235FB1C;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + r26.u64;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r26.u32, ctx.xer);
	// ble cr6,0x8235fad8
	if (!ctx.cr6.gt) goto loc_8235FAD8;
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
loc_8235FAD8:
	// lwz r7,140(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 140);
	// subf r30,r11,r26
	r30.u64 = r26.u64 - ctx.r11.u64;
	// lwz r8,272(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 272);
	// li r4,0
	ctx.r4.s64 = 0;
	// mullw r9,r30,r7
	ctx.r9.s64 = int64_t(r30.s32) * int64_t(ctx.r7.s32);
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mullw r5,r7,r11
	ctx.r5.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r8
	ctx.r3.u64 = ctx.r11.u64 + ctx.r8.u64;
	// bl 0x823ef5f0
	ctx.lr = 0x8235FB04;
	sub_823EF5F0(ctx, base);
	// lwz r4,284(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 284);
	// lwz r3,400(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 400);
	// mr r26,r30
	r26.u64 = r30.u64;
	// rlwinm r11,r4,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r11,284(r31)
	REX_STORE_U32(r31.u32 + 284, ctx.r11.u32);
	// std r23,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, r23.u64);
loc_8235FB1C:
	// lwz r11,400(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 400);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// ld r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// ld r10,20888(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 20888);
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// ble cr6,0x8235fb84
	if (!ctx.cr6.gt) goto loc_8235FB84;
	// extsw r9,r26
	ctx.r9.s64 = r26.s32;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmpld cr6,r9,r10
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r10.u64, ctx.xer);
	// ble cr6,0x8235fb84
	if (!ctx.cr6.gt) goto loc_8235FB84;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// subf r30,r10,r11
	r30.u64 = ctx.r11.u64 - ctx.r10.u64;
	// cmplw cr6,r30,r26
	ctx.cr6.compare<uint32_t>(r30.u32, r26.u32, ctx.xer);
	// ble cr6,0x8235fb5c
	if (!ctx.cr6.gt) goto loc_8235FB5C;
	// mr r30,r26
	r30.u64 = r26.u64;
loc_8235FB5C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8235fb84
	if (ctx.cr6.eq) goto loc_8235FB84;
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,272(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 272);
	// mullw r10,r30,r11
	ctx.r10.s64 = int64_t(r30.s32) * int64_t(ctx.r11.s32);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823ef5f0
	ctx.lr = 0x8235FB7C;
	sub_823EF5F0(ctx, base);
	// subf r26,r30,r26
	r26.u64 = r26.u64 - r30.u64;
	// mr r27,r30
	r27.u64 = r30.u64;
loc_8235FB84:
	// mr r25,r26
	r25.u64 = r26.u64;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// beq cr6,0x8235ff18
	if (ctx.cr6.eq) goto loc_8235FF18;
loc_8235FB90:
	// lwz r11,380(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 380);
	// mr r24,r23
	r24.u64 = r23.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8235fcac
	if (ctx.cr6.eq) goto loc_8235FCAC;
loc_8235FBA0:
	// lwz r29,364(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 364);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,348(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 348);
	// lwz r9,368(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 368);
	// mullw r10,r29,r28
	ctx.r10.s64 = int64_t(r29.s32) * int64_t(r28.s32);
	// lwz r30,356(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 356);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// bne cr6,0x8235fbe8
	if (!ctx.cr6.eq) goto loc_8235FBE8;
	// stw r31,28(r31)
	REX_STORE_U32(r31.u32 + 28, r31.u32);
	// addi r3,r31,28
	ctx.r3.s64 = r31.s64 + 28;
	// lwz r11,156(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 156);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lwz r7,140(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 140);
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8235FBE4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8235fc00
	goto loc_8235FC00;
loc_8235FBE8:
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mullw r10,r30,r11
	ctx.r10.s64 = int64_t(r30.s32) * int64_t(ctx.r11.s32);
	// rlwinm r5,r10,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x823ef5f0
	ctx.lr = 0x8235FBFC;
	sub_823EF5F0(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
loc_8235FC00:
	// lwz r11,364(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 364);
	// lwz r10,360(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 360);
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// stw r11,364(r31)
	REX_STORE_U32(r31.u32 + 364, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8235fc1c
	if (ctx.cr6.lt) goto loc_8235FC1C;
	// stw r23,364(r31)
	REX_STORE_U32(r31.u32 + 364, r23.u32);
loc_8235FC1C:
	// lwz r11,368(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 368);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8235fc44
	if (!ctx.cr6.eq) goto loc_8235FC44;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8235fc44
	if (ctx.cr6.eq) goto loc_8235FC44;
	// lwz r11,364(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 364);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,368(r31)
	REX_STORE_U32(r31.u32 + 368, ctx.r11.u32);
	// bne cr6,0x8235fc44
	if (!ctx.cr6.eq) goto loc_8235FC44;
	// stw r10,368(r31)
	REX_STORE_U32(r31.u32 + 368, ctx.r10.u32);
loc_8235FC44:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x8235fc94
	if (!ctx.cr6.eq) goto loc_8235FC94;
	// lwz r10,372(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 372);
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
	// mullw r9,r10,r28
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(r28.s32);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8235fc94
	if (ctx.cr6.eq) goto loc_8235FC94;
loc_8235FC64:
	// lwz r10,348(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 348);
	// lwz r9,360(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 360);
	// mullw r9,r28,r9
	ctx.r9.s64 = int64_t(r28.s32) * int64_t(ctx.r9.s32);
	// lbzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stbx r8,r7,r11
	REX_STORE_U8(ctx.r7.u32 + ctx.r11.u32, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r6,372(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 372);
	// mullw r5,r6,r28
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(r28.s32);
	// rlwinm r4,r5,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x8235fc64
	if (ctx.cr6.lt) goto loc_8235FC64;
loc_8235FC94:
	// lwz r11,380(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 380);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,380(r31)
	REX_STORE_U32(r31.u32 + 380, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8235fba0
	if (!ctx.cr6.eq) goto loc_8235FBA0;
loc_8235FCAC:
	// ld r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// mr r29,r25
	r29.u64 = r25.u64;
	// cmpdi cr6,r5,256
	ctx.cr6.compare<int64_t>(ctx.r5.s64, 256, ctx.xer);
	// ble cr6,0x8235fd88
	if (!ctx.cr6.gt) goto loc_8235FD88;
	// stw r23,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r23.u32);
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// lwz r11,372(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 372);
	// lwz r10,336(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 336);
	// lwz r4,356(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 356);
	// subf r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	// lwz r10,368(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 368);
	// ld r9,336(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 336);
	// twllei r4,0
	if (ctx.r4.s32 == 0 || ctx.r4.u32 < 0u) ppc_trap(ctx, base, 0);
	// divw r7,r3,r4
	ctx.r7.u64 = uint32_t((ctx.r4.s32 && !(ctx.r3.s32 == INT32_MIN && ctx.r4.s32 == -1)) ? ctx.r3.s32 / ctx.r4.s32 : 0);
	// rotlwi r8,r3,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r3,r8,-1
	ctx.r3.s64 = ctx.r8.s64 + -1;
	// mullw r8,r7,r4
	ctx.r8.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r4.s32);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// andc r8,r4,r3
	ctx.r8.u64 = ctx.r4.u64 & ~ctx.r3.u64;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// ld r7,96(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// twlgei r8,-1
	if (ctx.r8.s32 == -1 || ctx.r8.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// subf r11,r9,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r9.u64;
	// beq cr6,0x8235fd38
	if (ctx.cr6.eq) goto loc_8235FD38;
	// stw r10,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r23,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r23.u32);
	// ld r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// std r10,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// cmpld cr6,r10,r11
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r11.u64, ctx.xer);
	// bgt cr6,0x8235fd38
	if (ctx.cr6.gt) goto loc_8235FD38;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r6,1
	ctx.r6.s64 = 1;
loc_8235FD38:
	// divdu r10,r11,r5
	ctx.r10.u64 = ctx.r5.u64 ? ctx.r11.u64 / ctx.r5.u64 : 0;
	// tdllei r5,0
	if (ctx.r5.s64 == 0ll || ctx.r5.u64 < 0ull) ppc_trap(ctx, base, 0);
	// mulld r9,r10,r5
	ctx.r9.s64 = static_cast<int64_t>(ctx.r10.u64 * ctx.r5.u64);
	// subf r8,r9,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r9.u64;
	// divdu r11,r11,r5
	ctx.r11.u64 = ctx.r5.u64 ? ctx.r11.u64 / ctx.r5.u64 : 0;
	// tdllei r5,0
	if (ctx.r5.s64 == 0ll || ctx.r5.u64 < 0ull) ppc_trap(ctx, base, 0);
	// cmpldi cr6,r8,0
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, 0, ctx.xer);
	// std r11,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// beq cr6,0x8235fd64
	if (ctx.cr6.eq) goto loc_8235FD64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// std r11,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
loc_8235FD64:
	// clrldi r10,r25,32
	ctx.r10.u64 = r25.u64 & 0xFFFFFFFF;
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// bgt cr6,0x8235fd88
	if (ctx.cr6.gt) goto loc_8235FD88;
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// lwz r29,100(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// addi r24,r11,1
	r24.s64 = ctx.r11.s64 + 1;
loc_8235FD88:
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8235fdd4
	if (!ctx.cr6.eq) goto loc_8235FDD4;
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8235fdd4
	if (!ctx.cr6.eq) goto loc_8235FDD4;
loc_8235FDA0:
	// lwz r9,140(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 140);
	// addi r30,r31,336
	r30.s64 = r31.s64 + 336;
	// lwz r10,272(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 272);
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// mullw r11,r9,r27
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(r27.s32);
	// lwz r6,208(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 208);
	// lwz r5,348(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 348);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x823b9c58
	ctx.lr = 0x8235FDD0;
	sub_823B9C58(ctx, base);
	// b 0x8235fe90
	goto loc_8235FE90;
loc_8235FDD4:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r11,21948(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 21948);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x8235fe60
	if (ctx.cr6.gt) goto loc_8235FE60;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8235fda0
	if (ctx.cr6.eq) goto loc_8235FDA0;
	// bdz 0x8235fe60
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8235FE60;
	// bdnz 0x8235fe2c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8235FE2C;
	// lwz r9,140(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 140);
	// addi r30,r31,336
	r30.s64 = r31.s64 + 336;
	// lwz r10,272(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 272);
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// mullw r11,r9,r27
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(r27.s32);
	// lwz r6,208(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 208);
	// lwz r5,348(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 348);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x823b73e0
	ctx.lr = 0x8235FE28;
	sub_823B73E0(ctx, base);
	// b 0x8235fe90
	goto loc_8235FE90;
loc_8235FE2C:
	// lwz r9,140(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 140);
	// addi r30,r31,336
	r30.s64 = r31.s64 + 336;
	// lwz r10,272(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 272);
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// mullw r11,r9,r27
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(r27.s32);
	// lwz r6,208(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 208);
	// lwz r5,348(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 348);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x823b55c0
	ctx.lr = 0x8235FE5C;
	sub_823B55C0(ctx, base);
	// b 0x8235fe90
	goto loc_8235FE90;
loc_8235FE60:
	// lwz r9,140(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 140);
	// addi r30,r31,336
	r30.s64 = r31.s64 + 336;
	// lwz r10,272(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 272);
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// mullw r11,r9,r27
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(r27.s32);
	// lwz r6,208(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 208);
	// lwz r5,348(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 348);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x823b2940
	ctx.lr = 0x8235FE90;
	sub_823B2940(ctx, base);
loc_8235FE90:
	// lwz r11,360(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 360);
	// lwz r9,372(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 372);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8235feb0
	if (ctx.cr6.lt) goto loc_8235FEB0;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
loc_8235FEB0:
	// subf r25,r29,r25
	r25.u64 = r25.u64 - r29.u64;
	// add r27,r29,r27
	r27.u64 = r29.u64 + r27.u64;
	// cmpwi cr6,r24,2
	ctx.cr6.compare<int32_t>(r24.s32, 2, ctx.xer);
	// beq cr6,0x8235fee0
	if (ctx.cr6.eq) goto loc_8235FEE0;
	// cmpwi cr6,r24,1
	ctx.cr6.compare<int32_t>(r24.s32, 1, ctx.xer);
	// bne cr6,0x8235fed4
	if (!ctx.cr6.eq) goto loc_8235FED4;
	// lwz r11,380(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 380);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,380(r31)
	REX_STORE_U32(r31.u32 + 380, ctx.r11.u32);
loc_8235FED4:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// bne cr6,0x8235fb90
	if (!ctx.cr6.eq) goto loc_8235FB90;
	// b 0x8235ff18
	goto loc_8235FF18;
loc_8235FEE0:
	// lwz r9,140(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 140);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,272(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 272);
	// mullw r8,r9,r27
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(r27.s32);
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mullw r7,r9,r25
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(r25.s32);
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x823ef5f0
	ctx.lr = 0x8235FF04;
	sub_823EF5F0(ctx, base);
	// lwz r6,400(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 400);
	// stw r22,36(r6)
	REX_STORE_U32(ctx.r6.u32 + 36, r22.u32);
	// lwz r5,284(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 284);
	// ori r4,r5,8
	ctx.r4.u64 = ctx.r5.u64 | 8;
	// stw r4,284(r31)
	REX_STORE_U32(r31.u32 + 284, ctx.r4.u32);
loc_8235FF18:
	// lwz r11,400(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 400);
	// lwz r9,392(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 392);
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r8,32(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x8235ff3c
	if (!ctx.cr6.lt) goto loc_8235FF3C;
	// subf r10,r10,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r10.u64;
	// stw r10,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
loc_8235FF3C:
	// lwz r11,388(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 388);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8235ffcc
	if (!ctx.cr6.eq) goto loc_8235FFCC;
	// lwz r9,400(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 400);
	// lwz r11,24(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8235ff70
	if (ctx.cr6.eq) goto loc_8235FF70;
	// lwz r11,396(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 396);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8235ff70
	if (ctx.cr6.eq) goto loc_8235FF70;
	// lwz r10,28(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 28);
	// b 0x8235ff74
	goto loc_8235FF74;
loc_8235FF70:
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
loc_8235FF74:
	// ld r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// extsw r8,r26
	ctx.r8.s64 = r26.s32;
	// ld r7,312(r31)
	ctx.r7.u64 = REX_LOAD_U64(r31.u32 + 312);
	// mulld r6,r8,r11
	ctx.r6.s64 = static_cast<int64_t>(ctx.r8.u64 * ctx.r11.u64);
	// subf r5,r6,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r6.u64;
	// std r5,312(r31)
	REX_STORE_U64(r31.u32 + 312, ctx.r5.u64);
	// lwz r11,312(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 312);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x8236009c
	if (ctx.cr6.gt) goto loc_8236009C;
	// lwz r10,24(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
	// rlwinm r8,r10,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8235ffbc
	if (!ctx.cr6.eq) goto loc_8235FFBC;
	// lwz r10,392(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 392);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x8235ffbc
	if (ctx.cr6.eq) goto loc_8235FFBC;
	// stw r23,312(r31)
	REX_STORE_U32(r31.u32 + 312, r23.u32);
	// b 0x8236009c
	goto loc_8236009C;
loc_8235FFBC:
	// lwz r10,32(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,312(r31)
	REX_STORE_U32(r31.u32 + 312, ctx.r11.u32);
	// b 0x8236009c
	goto loc_8236009C;
loc_8235FFCC:
	// lwz r11,400(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 400);
	// lwz r10,392(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 392);
	// lwz r9,28(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r8,32(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x8235fff0
	if (!ctx.cr6.lt) goto loc_8235FFF0;
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// stw r10,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
loc_8235FFF0:
	// lwz r9,400(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 400);
	// lwz r11,24(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82360030
	if (ctx.cr6.eq) goto loc_82360030;
	// lwz r11,396(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 396);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82360030
	if (ctx.cr6.eq) goto loc_82360030;
	// lwz r11,32(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// lwz r10,28(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 28);
	// stw r8,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// stw r7,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// b 0x82360044
	goto loc_82360044;
loc_82360030:
	// lwz r11,392(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 392);
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r8,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
loc_82360044:
	// ld r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// extsw r8,r26
	ctx.r8.s64 = r26.s32;
	// ld r10,312(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 312);
	// mulld r11,r8,r11
	ctx.r11.s64 = static_cast<int64_t>(ctx.r8.u64 * ctx.r11.u64);
	// ld r7,96(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,312(r31)
	REX_STORE_U64(r31.u32 + 312, ctx.r11.u64);
	// cmpld cr6,r11,r7
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r7.u64, ctx.xer);
	// ble cr6,0x8236009c
	if (!ctx.cr6.gt) goto loc_8236009C;
	// lwz r11,24(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8236008c
	if (!ctx.cr6.eq) goto loc_8236008C;
	// lwz r11,392(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 392);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8236008c
	if (ctx.cr6.eq) goto loc_8236008C;
	// stw r11,312(r31)
	REX_STORE_U32(r31.u32 + 312, ctx.r11.u32);
	// b 0x8236009c
	goto loc_8236009C;
loc_8236008C:
	// lwz r11,312(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 312);
	// lwz r10,32(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 32);
	// subf r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stw r9,312(r31)
	REX_STORE_U32(r31.u32 + 312, ctx.r9.u32);
loc_8236009C:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// rlwinm r9,r10,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823600e0
	if (ctx.cr6.eq) goto loc_823600E0;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8233e2b0
	ctx.lr = 0x823600B8;
	sub_8233E2B0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,140(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 140);
	// subf r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// lwz r4,272(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 272);
	// sth r9,86(r31)
	REX_STORE_U16(r31.u32 + 86, ctx.r9.u16);
	// lwz r5,0(r21)
	ctx.r5.u64 = REX_LOAD_U32(r21.u32 + 0);
	// bl 0x823496f8
	ctx.lr = 0x823600E0;
	sub_823496F8(ctx, base);
loc_823600E0:
	// lwz r11,272(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 272);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r20)
	REX_STORE_U32(r20.u32 + 0, ctx.r11.u32);
	// lwz r10,140(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 140);
	// stw r10,0(r19)
	REX_STORE_U32(r19.u32 + 0, ctx.r10.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1ce4
	return;
}

DEFINE_REX_FUNC(sub_823B11F8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x823B1200;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r30,r6,1
	r30.s64 = ctx.r6.s64 + 65536;
	// addis r29,r6,1
	r29.s64 = ctx.r6.s64 + 65536;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// addi r30,r30,-11016
	r30.s64 = r30.s64 + -11016;
	// addi r29,r29,-15112
	r29.s64 = r29.s64 + -15112;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r6,256
	ctx.r6.s64 = 256;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d5940
	ctx.lr = 0x823B122C;
	sub_823D5940(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r3,r31,10256
	ctx.r3.s64 = r31.s64 + 10256;
	// bl 0x823d6568
	ctx.lr = 0x823B1240;
	sub_823D6568(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r3,r31,19488
	ctx.r3.s64 = r31.s64 + 19488;
	// bl 0x823d5940
	ctx.lr = 0x823B1254;
	sub_823D5940(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r3,r31,29744
	ctx.r3.s64 = r31.s64 + 29744;
	// bl 0x823d5940
	ctx.lr = 0x823B1268;
	sub_823D5940(ctx, base);
	// addis r3,r31,1
	ctx.r3.s64 = r31.s64 + 65536;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r6,256
	ctx.r6.s64 = 256;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r3,-25536
	ctx.r3.s64 = ctx.r3.s64 + -25536;
	// bl 0x823d5940
	ctx.lr = 0x823B1280;
	sub_823D5940(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addis r5,r31,1
	ctx.r5.s64 = r31.s64 + 65536;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r5,r5,-15280
	ctx.r5.s64 = ctx.r5.s64 + -15280;
	// lfs f1,25712(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 25712);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823d54f8
	ctx.lr = 0x823B1298;
	sub_823D54F8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addis r5,r31,1
	ctx.r5.s64 = r31.s64 + 65536;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r5,r5,-15268
	ctx.r5.s64 = ctx.r5.s64 + -15268;
	// lfs f1,25708(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 25708);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823d54f8
	ctx.lr = 0x823B12B0;
	sub_823D54F8(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addis r5,r31,1
	ctx.r5.s64 = r31.s64 + 65536;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r5,r5,-15256
	ctx.r5.s64 = ctx.r5.s64 + -15256;
	// lfs f1,25704(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 25704);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823d54f8
	ctx.lr = 0x823B12C8;
	sub_823D54F8(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addis r5,r31,1
	ctx.r5.s64 = r31.s64 + 65536;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r5,r5,-15244
	ctx.r5.s64 = ctx.r5.s64 + -15244;
	// lfs f1,25700(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 25700);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823d54f8
	ctx.lr = 0x823B12E0;
	sub_823D54F8(ctx, base);
	// addis r3,r31,1
	ctx.r3.s64 = r31.s64 + 65536;
	// addi r3,r3,-15232
	ctx.r3.s64 = ctx.r3.s64 + -15232;
	// bl 0x823d5068
	ctx.lr = 0x823B12EC;
	sub_823D5068(ctx, base);
	// addis r4,r31,1
	ctx.r4.s64 = r31.s64 + 65536;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r4,-15188
	ctx.r4.s64 = ctx.r4.s64 + -15188;
	// bl 0x823d4cc8
	ctx.lr = 0x823B12FC;
	sub_823D4CC8(ctx, base);
	// addis r4,r31,1
	ctx.r4.s64 = r31.s64 + 65536;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r4,-15152
	ctx.r4.s64 = ctx.r4.s64 + -15152;
	// bl 0x823d4cc8
	ctx.lr = 0x823B130C;
	sub_823D4CC8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_823C0730) {
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
	// bne cr6,0x823c0754
	if (!ctx.cr6.eq) goto loc_823C0754;
	// bl 0x8269dfa8
	ctx.lr = 0x823C0748;
	sub_8269DFA8(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r5,r10,-31096
	ctx.r5.s64 = ctx.r10.s64 + -31096;
	// b 0x823c07a8
	goto loc_823C07A8;
loc_823C0754:
	// lis r10,19523
	ctx.r10.s64 = 1279459328;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// ori r9,r10,17492
	ctx.r9.u64 = ctx.r10.u64 | 17492;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x823c077c
	if (!ctx.cr6.eq) goto loc_823C077C;
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
loc_823C077C:
	// lis r10,19456
	ctx.r10.s64 = 1275068416;
	// ori r9,r10,17408
	ctx.r9.u64 = ctx.r10.u64 | 17408;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x823c079c
	if (!ctx.cr6.eq) goto loc_823C079C;
	// bl 0x8269dfa8
	ctx.lr = 0x823C0790;
	sub_8269DFA8(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r5,r10,-31148
	ctx.r5.s64 = ctx.r10.s64 + -31148;
	// b 0x823c07a8
	goto loc_823C07A8;
loc_823C079C:
	// bl 0x8269dfa8
	ctx.lr = 0x823C07A0;
	sub_8269DFA8(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r5,r10,-31192
	ctx.r5.s64 = ctx.r10.s64 + -31192;
loc_823C07A8:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r3,64
	ctx.r3.s64 = ctx.r3.s64 + 64;
	// addi r4,r11,-31628
	ctx.r4.s64 = ctx.r11.s64 + -31628;
	// bl 0x8269f3c0
	ctx.lr = 0x823C07B8;
	sub_8269F3C0(ctx, base);
	// li r3,-6
	ctx.r3.s64 = -6;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823C3580) {
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
	ctx.lr = 0x823C3588;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lwz r10,12(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// li r24,0
	r24.s64 = 0;
	// addi r11,r11,26632
	ctx.r11.s64 = ctx.r11.s64 + 26632;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// lbzx r30,r10,r11
	r30.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// lbzx r26,r10,r9
	r26.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// stw r24,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, r24.u32);
	// lwz r8,16(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 16);
	// cmplwi cr6,r8,2
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 2, ctx.xer);
	// bne cr6,0x823c366c
	if (!ctx.cr6.eq) goto loc_823C366C;
	// add r11,r26,r30
	ctx.r11.u64 = r26.u64 + r30.u64;
	// li r29,18
	r29.s64 = 18;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r10,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// lwz r9,20(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 20);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823c3618
	if (ctx.cr6.eq) goto loc_823C3618;
	// li r29,8
	r29.s64 = 8;
loc_823C35EC:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823c16c0
	ctx.lr = 0x823C35F8;
	sub_823C16C0(ctx, base);
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bne 0x823c35ec
	if (!ctx.cr0.eq) goto loc_823C35EC;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// li r29,9
	r29.s64 = 9;
	// subf r10,r30,r11
	ctx.r10.u64 = ctx.r11.u64 - r30.u64;
	// stw r10,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r10.u32);
loc_823C3618:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823c16c0
	ctx.lr = 0x823C3624;
	sub_823C16C0(ctx, base);
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bne 0x823c3618
	if (!ctx.cr0.eq) goto loc_823C3618;
	// li r30,18
	r30.s64 = 18;
loc_823C3638:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823c16c0
	ctx.lr = 0x823C3644;
	sub_823C16C0(ctx, base);
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bne 0x823c3638
	if (!ctx.cr0.eq) goto loc_823C3638;
	// stw r24,0(r31)
	REX_STORE_U32(r31.u32 + 0, r24.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stwu r24,4(r31)
	ea = 4 + r31.u32;
	REX_STORE_U32(ea, r24.u32);
	r31.u32 = ea;
	// stw r24,4(r31)
	REX_STORE_U32(r31.u32 + 4, r24.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
loc_823C366C:
	// lwz r25,0(r5)
	r25.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// bge cr6,0x823c36e0
	if (!ctx.cr6.lt) goto loc_823C36E0;
	// li r29,11
	r29.s64 = 11;
loc_823C367C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823c16c0
	ctx.lr = 0x823C3688;
	sub_823C16C0(ctx, base);
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bne 0x823c367c
	if (!ctx.cr0.eq) goto loc_823C367C;
	// li r29,10
	r29.s64 = 10;
loc_823C369C:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823c16c0
	ctx.lr = 0x823C36A8;
	sub_823C16C0(ctx, base);
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bne 0x823c369c
	if (!ctx.cr0.eq) goto loc_823C369C;
	// add r11,r26,r30
	ctx.r11.u64 = r26.u64 + r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + r30.u64;
	// stw r10,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r10.u32);
	// stw r24,0(r31)
	REX_STORE_U32(r31.u32 + 0, r24.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
loc_823C36E0:
	// rlwinm r11,r25,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0x8;
	// stw r24,0(r27)
	REX_STORE_U32(r27.u32 + 0, r24.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823c372c
	if (!ctx.cr6.eq) goto loc_823C372C;
	// li r29,6
	r29.s64 = 6;
loc_823C36F4:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823c16c0
	ctx.lr = 0x823C3700;
	sub_823C16C0(ctx, base);
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bne 0x823c36f4
	if (!ctx.cr0.eq) goto loc_823C36F4;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,0(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 0);
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r10,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r10.u32);
	// b 0x823c3730
	goto loc_823C3730;
loc_823C372C:
	// addi r31,r31,24
	r31.s64 = r31.s64 + 24;
loc_823C3730:
	// rlwinm r11,r25,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823c3774
	if (!ctx.cr6.eq) goto loc_823C3774;
	// li r29,5
	r29.s64 = 5;
loc_823C3740:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823c16c0
	ctx.lr = 0x823C374C;
	sub_823C16C0(ctx, base);
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bne 0x823c3740
	if (!ctx.cr0.eq) goto loc_823C3740;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 0);
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
	// b 0x823c3778
	goto loc_823C3778;
loc_823C3774:
	// addi r31,r31,20
	r31.s64 = r31.s64 + 20;
loc_823C3778:
	// rlwinm r11,r25,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823c37bc
	if (!ctx.cr6.eq) goto loc_823C37BC;
	// li r30,5
	r30.s64 = 5;
loc_823C3788:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823c16c0
	ctx.lr = 0x823C3794;
	sub_823C16C0(ctx, base);
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bne 0x823c3788
	if (!ctx.cr0.eq) goto loc_823C3788;
	// rlwinm r11,r26,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 0);
	// add r11,r26,r11
	ctx.r11.u64 = r26.u64 + ctx.r11.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
	// b 0x823c37c0
	goto loc_823C37C0;
loc_823C37BC:
	// addi r31,r31,20
	r31.s64 = r31.s64 + 20;
loc_823C37C0:
	// clrlwi r11,r25,31
	ctx.r11.u64 = r25.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823c3810
	if (!ctx.cr6.eq) goto loc_823C3810;
	// li r30,5
	r30.s64 = 5;
loc_823C37D0:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823c16c0
	ctx.lr = 0x823C37DC;
	sub_823C16C0(ctx, base);
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bne 0x823c37d0
	if (!ctx.cr0.eq) goto loc_823C37D0;
	// rlwinm r11,r26,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// add r11,r26,r11
	ctx.r11.u64 = r26.u64 + ctx.r11.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
	// stw r24,0(r31)
	REX_STORE_U32(r31.u32 + 0, r24.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
loc_823C3810:
	// addi r31,r31,20
	r31.s64 = r31.s64 + 20;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r24,0(r31)
	REX_STORE_U32(r31.u32 + 0, r24.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_823D1868) {
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

DEFINE_REX_FUNC(sub_823D1960) {
	REX_FUNC_PROLOGUE();
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
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x826a2c98
	ctx.lr = 0x823D1974;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// fmr f27,f3
	f27.f64 = ctx.f3.f64;
	// fmr f24,f4
	f24.f64 = ctx.f4.f64;
	// fmr f28,f5
	f28.f64 = ctx.f5.f64;
	// fmr f29,f6
	f29.f64 = ctx.f6.f64;
	// fmr f26,f7
	f26.f64 = ctx.f7.f64;
	// fmr f25,f8
	f25.f64 = ctx.f8.f64;
	// bne cr6,0x823d1d44
	if (!ctx.cr6.eq) goto loc_823D1D44;
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d1c70
	if (ctx.cr6.eq) goto loc_823D1C70;
	// lwz r10,168(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 168);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823d19c8
	if (ctx.cr6.eq) goto loc_823D19C8;
	// lwz r10,72(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 72);
	// b 0x823d19cc
	goto loc_823D19CC;
loc_823D19C8:
	// lwz r10,72(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
loc_823D19CC:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// ble cr6,0x823d1c70
	if (!ctx.cr6.gt) goto loc_823D1C70;
	// lwz r11,92(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// rlwinm r10,r11,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823d1ac8
	if (!ctx.cr6.eq) goto loc_823D1AC8;
	// rlwinm r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// beq cr6,0x823d1a54
	if (ctx.cr6.eq) goto loc_823D1A54;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r11,r8,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r8.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x823d1a80
	if (ctx.cr6.lt) goto loc_823D1A80;
	// bne cr6,0x823d1d44
	if (!ctx.cr6.eq) goto loc_823D1D44;
loc_823D1A10:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,64(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 64);
	// lfs f2,3704(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823D1A30;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r7,16(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r6,56(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 56);
	// lfs f0,176(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f0,f30
	ctx.f1.f64 = double(float(ctx.f0.f64 * f30.f64));
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x823D1A50;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x823d1d44
	goto loc_823D1D44;
loc_823D1A54:
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x823d1d44
	if (ctx.cr6.gt) goto loc_823D1D44;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x823d1a10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_823D1A10;
	// bdzf 4*cr6+eq,0x823d1ac8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_823D1AC8;
	// bdzf 4*cr6+eq,0x823d1b10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_823D1B10;
	// bdzf 4*cr6+eq,0x823d1b54
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_823D1B54;
	// bdzf 4*cr6+eq,0x823d1b98
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_823D1B98;
	// bdzf 4*cr6+eq,0x823d1be0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_823D1BE0;
	// bne cr6,0x823d1c28
	if (!ctx.cr6.eq) goto loc_823D1C28;
loc_823D1A80:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,64(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// lfs f2,3704(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3704);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,3788(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3788);
	ctx.f1.f64 = double(temp.f32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823D1AA4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,16(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r5,56(r7)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 56);
	// lfs f0,176(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * f31.f64));
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x823D1AC4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x823d1d44
	goto loc_823D1D44;
loc_823D1AC8:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,64(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// lfs f2,3704(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3704);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,3716(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3716);
	ctx.f1.f64 = double(temp.f32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823D1AEC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,16(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r5,56(r7)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 56);
	// lfs f0,176(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f0,f27
	ctx.f1.f64 = double(float(ctx.f0.f64 * f27.f64));
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x823D1B0C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x823d1d44
	goto loc_823D1D44;
loc_823D1B10:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,64(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 64);
	// lfs f2,3716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823D1B30;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r7,16(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r6,56(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 56);
	// lfs f0,176(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f0,f24
	ctx.f1.f64 = double(float(ctx.f0.f64 * f24.f64));
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x823D1B50;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x823d1d44
	goto loc_823D1D44;
loc_823D1B54:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,64(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 64);
	// lfs f2,3788(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3788);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823D1B74;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r7,16(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r6,56(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 56);
	// lfs f0,176(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f0,f28
	ctx.f1.f64 = double(float(ctx.f0.f64 * f28.f64));
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x823D1B94;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x823d1d44
	goto loc_823D1D44;
loc_823D1B98:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,64(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// lfs f2,3788(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3788);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,3704(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3704);
	ctx.f1.f64 = double(temp.f32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823D1BBC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,16(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r5,56(r7)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 56);
	// lfs f0,176(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f0,f29
	ctx.f1.f64 = double(float(ctx.f0.f64 * f29.f64));
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x823D1BDC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x823d1d44
	goto loc_823D1D44;
loc_823D1BE0:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,64(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// lfs f2,3716(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3716);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,3788(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3788);
	ctx.f1.f64 = double(temp.f32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823D1C04;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,16(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r5,56(r7)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 56);
	// lfs f0,176(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f0,f26
	ctx.f1.f64 = double(float(ctx.f0.f64 * f26.f64));
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x823D1C24;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x823d1d44
	goto loc_823D1D44;
loc_823D1C28:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,64(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// lfs f2,3716(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3716);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,3704(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3704);
	ctx.f1.f64 = double(temp.f32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823D1C4C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,16(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r5,56(r7)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 56);
	// lfs f0,176(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f0,f25
	ctx.f1.f64 = double(float(ctx.f0.f64 * f25.f64));
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x823D1C6C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x823d1d44
	goto loc_823D1D44;
loc_823D1C70:
	// fadds f0,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f31.f64 + f30.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fneg f13,f31
	ctx.f13.u64 = f31.u64 ^ 0x8000000000000000;
	// fadds f12,f31,f30
	ctx.f12.f64 = double(float(f31.f64 + f30.f64));
	// lfs f31,3704(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	f31.f64 = double(temp.f32);
	// fadds f11,f0,f27
	ctx.f11.f64 = double(float(ctx.f0.f64 + f27.f64));
	// fadds f10,f13,f30
	ctx.f10.f64 = double(float(ctx.f13.f64 + f30.f64));
	// fadds f9,f12,f27
	ctx.f9.f64 = double(float(ctx.f12.f64 + f27.f64));
	// fadds f8,f11,f24
	ctx.f8.f64 = double(float(ctx.f11.f64 + f24.f64));
	// fsubs f7,f10,f28
	ctx.f7.f64 = double(float(ctx.f10.f64 - f28.f64));
	// fsubs f6,f9,f28
	ctx.f6.f64 = double(float(ctx.f9.f64 - f28.f64));
	// fadds f5,f8,f28
	ctx.f5.f64 = double(float(ctx.f8.f64 + f28.f64));
	// fadds f4,f7,f29
	ctx.f4.f64 = double(float(ctx.f7.f64 + f29.f64));
	// fsubs f30,f6,f29
	f30.f64 = double(float(ctx.f6.f64 - f29.f64));
	// fadds f3,f5,f29
	ctx.f3.f64 = double(float(ctx.f5.f64 + f29.f64));
	// fsubs f2,f4,f26
	ctx.f2.f64 = double(float(ctx.f4.f64 - f26.f64));
	// fadds f1,f3,f26
	ctx.f1.f64 = double(float(ctx.f3.f64 + f26.f64));
	// fadds f29,f2,f25
	f29.f64 = double(float(ctx.f2.f64 + f25.f64));
	// fadds f0,f1,f25
	ctx.f0.f64 = double(float(ctx.f1.f64 + f25.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// ble cr6,0x823d1cc8
	if (!ctx.cr6.gt) goto loc_823D1CC8;
	// fmr f0,f31
	ctx.f0.f64 = f31.f64;
loc_823D1CC8:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r9,56(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// lfs f13,176(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 176);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823D1CE8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f1,3788(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 3788);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f30,f1
	ctx.cr6.compare(f30.f64, ctx.f1.f64);
	// bge cr6,0x823d1d00
	if (!ctx.cr6.lt) goto loc_823D1D00;
	// fmr f2,f1
	ctx.f2.f64 = ctx.f1.f64;
	// b 0x823d1d14
	goto loc_823D1D14;
loc_823D1D00:
	// fcmpu cr6,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f30.f64, f31.f64);
	// ble cr6,0x823d1d10
	if (!ctx.cr6.gt) goto loc_823D1D10;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// b 0x823d1d14
	goto loc_823D1D14;
loc_823D1D10:
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
loc_823D1D14:
	// fcmpu cr6,f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f29.f64, ctx.f1.f64);
	// blt cr6,0x823d1d30
	if (ctx.cr6.lt) goto loc_823D1D30;
	// fcmpu cr6,f29,f31
	ctx.cr6.compare(f29.f64, f31.f64);
	// ble cr6,0x823d1d2c
	if (!ctx.cr6.gt) goto loc_823D1D2C;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// b 0x823d1d30
	goto loc_823D1D30;
loc_823D1D2C:
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
loc_823D1D30:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823D1D44;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823D1D44:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x826a2ce4
	ctx.lr = 0x823D1D54;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823E9E98) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// srawi r11,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 1;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r11,-8
	ctx.r10.s64 = ctx.r11.s64 + -8;
	// subf r11,r11,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r11.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,9
	ctx.r9.s64 = ctx.r11.s64 + 9;
	// add r11,r10,r4
	ctx.r11.u64 = ctx.r10.u64 + ctx.r4.u64;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_823E9EBC:
	// lfs f0,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// add r9,r8,r3
	ctx.r9.u64 = ctx.r8.u64 + ctx.r3.u64;
	// lfs f13,-12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,28(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f11,-12(r10)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r10.u32 + -12, temp.u32);
	// fsubs f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f9,-8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,28(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f8,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 + ctx.f9.f64));
	// stfs f7,-8(r10)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r10.u32 + -8, temp.u32);
	// fsubs f6,f9,f12
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// lfs f5,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,0(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f4,f10
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f10.f64));
	// fmadds f2,f5,f6,f3
	ctx.f2.f64 = double(float(std::fma(ctx.f5.f64, ctx.f6.f64, ctx.f3.f64)));
	// stfs f2,24(r11)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lfs f1,0(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f10
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// fmsubs f12,f1,f6,f13
	ctx.f12.f64 = double(float(std::fma(ctx.f1.f64, ctx.f6.f64, -ctx.f13.f64)));
	// stfs f12,28(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// lfs f11,-16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -16);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,-20(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -20);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f8,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 + ctx.f9.f64));
	// stfs f7,-20(r10)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r10.u32 + -20, temp.u32);
	// fsubs f6,f8,f9
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f9.f64));
	// lfs f5,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f5.f64 = double(temp.f32);
	// fadds f4,f5,f11
	ctx.f4.f64 = double(float(ctx.f5.f64 + ctx.f11.f64));
	// stfs f4,-16(r10)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r10.u32 + -16, temp.u32);
	// fsubs f3,f11,f10
	ctx.f3.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f2,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfsx f1,r8,r3
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f0,f1,f6
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f6.f64));
	// fmadds f13,f2,f3,f0
	ctx.f13.f64 = double(float(std::fma(ctx.f2.f64, ctx.f3.f64, ctx.f0.f64)));
	// stfs f13,16(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lfsx f12,r8,r3
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f6
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f6.f64));
	// fmsubs f9,f12,f3,f10
	ctx.f9.f64 = double(float(std::fma(ctx.f12.f64, ctx.f3.f64, -ctx.f10.f64)));
	// stfs f9,20(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lfs f8,-24(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -24);
	ctx.f8.f64 = double(temp.f32);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lfs f7,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,-28(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -28);
	ctx.f5.f64 = double(temp.f32);
	// fadds f4,f5,f6
	ctx.f4.f64 = double(float(ctx.f5.f64 + ctx.f6.f64));
	// stfs f4,-28(r10)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r10.u32 + -28, temp.u32);
	// fsubs f3,f5,f6
	ctx.f3.f64 = double(float(ctx.f5.f64 - ctx.f6.f64));
	// lfs f2,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// fadds f1,f2,f8
	ctx.f1.f64 = double(float(ctx.f2.f64 + ctx.f8.f64));
	// stfs f1,-24(r10)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r10.u32 + -24, temp.u32);
	// fsubs f0,f8,f7
	ctx.f0.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// lfs f13,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f3
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f3.f64));
	// fmadds f10,f13,f0,f11
	ctx.f10.f64 = double(float(std::fma(ctx.f13.f64, ctx.f0.f64, ctx.f11.f64)));
	// stfs f10,8(r11)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f9,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f8,f3
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f3.f64));
	// fmsubs f6,f9,f0,f7
	ctx.f6.f64 = double(float(std::fma(ctx.f9.f64, ctx.f0.f64, -ctx.f7.f64)));
	// stfs f6,12(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f5,-32(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -32);
	ctx.f5.f64 = double(temp.f32);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lfs f4,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,-36(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -36);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// fadds f0,f3,f2
	ctx.f0.f64 = double(float(ctx.f3.f64 + ctx.f2.f64));
	// stfs f0,-36(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + -36, temp.u32);
	// fsubs f1,f3,f2
	ctx.f1.f64 = double(float(ctx.f3.f64 - ctx.f2.f64));
	// lfs f13,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f5
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f5.f64));
	// stfsu f12,-32(r10)
	ea = -32 + ctx.r10.u32;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// fsubs f11,f5,f4
	ctx.f11.f64 = double(float(ctx.f5.f64 - ctx.f4.f64));
	// lfs f8,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f10,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f1
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f1.f64));
	// fmadds f7,f8,f11,f9
	ctx.f7.f64 = double(float(std::fma(ctx.f8.f64, ctx.f11.f64, ctx.f9.f64)));
	// stfs f7,0(r11)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// add r3,r8,r9
	ctx.r3.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lfs f6,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f5,f1
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f1.f64));
	// fmsubs f3,f6,f11,f4
	ctx.f3.f64 = double(float(std::fma(ctx.f6.f64, ctx.f11.f64, -ctx.f4.f64)));
	// stfs f3,4(r11)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x823e9ebc
	if (!ctx.cr6.lt) goto loc_823E9EBC;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823F2DE8) {
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
	ctx.lr = 0x823F2DF0;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1412(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1412);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823f3130
	if (!ctx.cr6.eq) goto loc_823F3130;
	// addis r10,r4,1
	ctx.r10.s64 = ctx.r4.s64 + 65536;
	// lbz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 4);
	// li r19,0
	r19.s64 = 0;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// rlwinm r9,r10,0,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF0000;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r4,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r4.u64;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// srawi r10,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// mr r23,r19
	r23.u64 = r19.u64;
	// clrlwi r26,r10,16
	r26.u64 = ctx.r10.u32 & 0xFFFF;
	// lwzx r25,r11,r3
	r25.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// cmplwi cr6,r26,1
	ctx.cr6.compare<uint32_t>(r26.u32, 1, ctx.xer);
	// bne cr6,0x823f2e5c
	if (!ctx.cr6.eq) goto loc_823F2E5C;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// li r26,4097
	r26.s64 = 4097;
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// b 0x823f2e78
	goto loc_823F2E78;
loc_823F2E5C:
	// lhz r11,2(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 2);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x823f2e78
	if (ctx.cr0.eq) goto loc_823F2E78;
	// cmplw cr6,r9,r31
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r31.u32, ctx.xer);
	// bne cr6,0x823f2e78
	if (!ctx.cr6.eq) goto loc_823F2E78;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r23,r11,r31
	r23.u64 = r31.u64 - ctx.r11.u64;
loc_823F2E78:
	// rlwinm r11,r24,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r20,r19
	r20.u64 = r19.u64;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + r31.u64;
	// rlwinm r11,r10,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF0000;
	// subf r8,r11,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r8,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 4;
	// clrlwi r27,r8,16
	r27.u64 = ctx.r8.u32 & 0xFFFF;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// cmplwi cr6,r27,1
	ctx.cr6.compare<uint32_t>(r27.u32, 1, ctx.xer);
	// bne cr6,0x823f2eac
	if (!ctx.cr6.eq) goto loc_823F2EAC;
	// li r27,4097
	r27.s64 = 4097;
	// subf r11,r7,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r7.u64;
	// b 0x823f2ec4
	goto loc_823F2EC4;
loc_823F2EAC:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x823f2ec4
	if (!ctx.cr6.eq) goto loc_823F2EC4;
	// lbz r8,5(r31)
	ctx.r8.u64 = REX_LOAD_U8(r31.u32 + 5);
	// rlwinm. r8,r8,0,27,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x823f2ec4
	if (!ctx.cr0.eq) goto loc_823F2EC4;
	// mr r20,r10
	r20.u64 = ctx.r10.u64;
loc_823F2EC4:
	// rlwinm r22,r27,4,12,27
	r22.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 4) & 0xFFFF0;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// clrlwi r21,r27,16
	r21.u64 = r27.u32 & 0xFFFF;
	// subf r28,r22,r10
	r28.u64 = ctx.r10.u64 - r22.u64;
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// bgt cr6,0x823f2ee0
	if (ctx.cr6.gt) goto loc_823F2EE0;
	// mr r11,r19
	ctx.r11.u64 = r19.u64;
loc_823F2EE0:
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823f3130
	if (ctx.cr6.eq) goto loc_823F3130;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x823f1950
	ctx.lr = 0x823F2EF4;
	sub_823F1950(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x823f3130
	if (ctx.cr0.eq) goto loc_823F3130;
	// li r5,16384
	ctx.r5.s64 = 16384;
	// lwz r6,1424(r29)
	ctx.r6.u64 = REX_LOAD_U32(r29.u32 + 1424);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82793b64
	ctx.lr = 0x823F2F10;
	__imp__NtFreeVirtualMemory(ctx, base);
	// lwz r11,24(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 24);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// lwz r11,24(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 24);
	// stw r30,76(r11)
	REX_STORE_U32(ctx.r11.u32 + 76, r30.u32);
	// stw r19,4(r30)
	REX_STORE_U32(r30.u32 + 4, r19.u32);
	// stw r19,8(r30)
	REX_STORE_U32(r30.u32 + 8, r19.u32);
	// blt 0x823f3130
	if (ctx.cr0.lt) goto loc_823F3130;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x823f1b28
	ctx.lr = 0x823F2F44;
	sub_823F1B28(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,48(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 48);
	// clrlwi. r11,r26,16
	ctx.r11.u64 = r26.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r9,r9,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// li r8,1
	ctx.r8.s64 = 1;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,48(r25)
	REX_STORE_U32(r25.u32 + 48, ctx.r10.u32);
	// beq 0x823f3018
	if (ctx.cr0.eq) goto loc_823F3018;
	// li r10,16
	ctx.r10.s64 = 16;
	// sth r26,0(r31)
	REX_STORE_U16(r31.u32 + 0, r26.u16);
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// stb r10,5(r31)
	REX_STORE_U8(r31.u32 + 5, ctx.r10.u8);
	// lwz r10,48(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 48);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r10,48(r29)
	REX_STORE_U32(r29.u32 + 48, ctx.r10.u32);
	// stw r31,64(r25)
	REX_STORE_U32(r25.u32 + 64, r31.u32);
	// lbz r10,5(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 5);
	// rlwinm r10,r10,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// stb r10,5(r31)
	REX_STORE_U8(r31.u32 + 5, ctx.r10.u8);
	// bge cr6,0x823f2fd4
	if (!ctx.cr6.lt) goto loc_823F2FD4;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823f2ffc
	if (!ctx.cr6.eq) goto loc_823F2FFC;
	// lhz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 0);
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r10,r29
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + r29.u32);
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// stwx r9,r10,r29
	REX_STORE_U32(ctx.r10.u32 + r29.u32, ctx.r9.u32);
	// b 0x823f2ffc
	goto loc_823F2FFC;
loc_823F2FD4:
	// lwz r10,384(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 384);
	// addi r9,r29,384
	ctx.r9.s64 = r29.s64 + 384;
	// b 0x823f2ff0
	goto loc_823F2FF0;
loc_823F2FE0:
	// lhz r7,-8(r10)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + -8);
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// ble cr6,0x823f2ff8
	if (!ctx.cr6.gt) goto loc_823F2FF8;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
loc_823F2FF0:
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823f2fe0
	if (!ctx.cr6.eq) goto loc_823F2FE0;
loc_823F2FF8:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_823F2FFC:
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r31,8
	ctx.r10.s64 = r31.s64 + 8;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stw r9,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// stw r10,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// b 0x823f305c
	goto loc_823F305C;
loc_823F3018:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x823f3034
	if (ctx.cr6.eq) goto loc_823F3034;
	// lbz r11,5(r23)
	ctx.r11.u64 = REX_LOAD_U8(r23.u32 + 5);
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// stb r11,5(r23)
	REX_STORE_U8(r23.u32 + 5, ctx.r11.u8);
	// stw r23,64(r25)
	REX_STORE_U32(r25.u32 + 64, r23.u32);
	// b 0x823f305c
	goto loc_823F305C;
loc_823F3034:
	// lwz r11,64(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 64);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823f305c
	if (ctx.cr6.lt) goto loc_823F305C;
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x823f305c
	if (!ctx.cr6.lt) goto loc_823F305C;
	// lwz r11,40(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 40);
	// stw r11,64(r25)
	REX_STORE_U32(r25.u32 + 64, ctx.r11.u32);
loc_823F305C:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x823f3120
	if (ctx.cr6.eq) goto loc_823F3120;
	// add r11,r22,r28
	ctx.r11.u64 = r22.u64 + r28.u64;
	// sth r19,2(r28)
	REX_STORE_U16(r28.u32 + 2, r19.u16);
	// lbz r10,4(r25)
	ctx.r10.u64 = REX_LOAD_U8(r25.u32 + 4);
	// cmplwi cr6,r21,128
	ctx.cr6.compare<uint32_t>(r21.u32, 128, ctx.xer);
	// stb r19,5(r28)
	REX_STORE_U8(r28.u32 + 5, r19.u8);
	// stb r10,4(r28)
	REX_STORE_U8(r28.u32 + 4, ctx.r10.u8);
	// sth r27,0(r28)
	REX_STORE_U16(r28.u32 + 0, r27.u16);
	// sth r27,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, r27.u16);
	// lbz r11,5(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 5);
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// stb r11,5(r28)
	REX_STORE_U8(r28.u32 + 5, ctx.r11.u8);
	// bge cr6,0x823f30d4
	if (!ctx.cr6.lt) goto loc_823F30D4;
	// addi r11,r21,48
	ctx.r11.s64 = r21.s64 + 48;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823f30f8
	if (!ctx.cr6.eq) goto loc_823F30F8;
	// lhz r9,0(r28)
	ctx.r9.u64 = REX_LOAD_U16(r28.u32 + 0);
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r29
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + r29.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwx r9,r10,r29
	REX_STORE_U32(ctx.r10.u32 + r29.u32, ctx.r9.u32);
	// b 0x823f30f8
	goto loc_823F30F8;
loc_823F30D4:
	// lwz r11,384(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 384);
	// addi r10,r29,384
	ctx.r10.s64 = r29.s64 + 384;
	// b 0x823f30f0
	goto loc_823F30F0;
loc_823F30E0:
	// lhz r9,-8(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + -8);
	// cmplw cr6,r21,r9
	ctx.cr6.compare<uint32_t>(r21.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x823f30f8
	if (!ctx.cr6.gt) goto loc_823F30F8;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_823F30F0:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823f30e0
	if (!ctx.cr6.eq) goto loc_823F30E0;
loc_823F30F8:
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r28,8
	ctx.r10.s64 = r28.s64 + 8;
	// stw r11,8(r28)
	REX_STORE_U32(r28.u32 + 8, ctx.r11.u32);
	// stw r9,12(r28)
	REX_STORE_U32(r28.u32 + 12, ctx.r9.u32);
	// stw r10,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,48(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 48);
	// add r11,r21,r11
	ctx.r11.u64 = r21.u64 + ctx.r11.u64;
	// stw r11,48(r29)
	REX_STORE_U32(r29.u32 + 48, ctx.r11.u32);
	// b 0x823f3140
	goto loc_823F3140;
loc_823F3120:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// beq cr6,0x823f3140
	if (ctx.cr6.eq) goto loc_823F3140;
	// sth r19,2(r20)
	REX_STORE_U16(r20.u32 + 2, r19.u16);
	// b 0x823f3140
	goto loc_823F3140;
loc_823F3130:
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823f22e0
	ctx.lr = 0x823F3140;
	sub_823F22E0(ctx, base);
loc_823F3140:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1ce4
	return;
}

DEFINE_REX_FUNC(sub_8240B3F8) {
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
	ctx.lr = 0x8240B400;
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
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8240b430
	if (ctx.cr6.eq) goto loc_8240B430;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x82408848
	ctx.lr = 0x8240B42C;
	sub_82408848(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_8240B430:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8240b44c
	if (ctx.cr6.eq) goto loc_8240B44C;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824094e0
	ctx.lr = 0x8240B448;
	sub_824094E0(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_8240B44C:
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// clrlwi. r4,r30,31
	ctx.r4.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lwz r10,96(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 96);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// lwz r3,100(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 100);
	// rlwinm r7,r30,3,27,28
	ctx.r7.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0x18;
	// mullw r10,r10,r30
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r30.s32);
	// lwz r6,32(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r5,52(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 52);
	// mullw r9,r9,r4
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r4.s32);
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
	// bne 0x8240b4ac
	if (!ctx.cr0.eq) goto loc_8240B4AC;
	// li r30,0
	r30.s64 = 0;
	// li r29,1
	r29.s64 = 1;
	// b 0x8240b4b4
	goto loc_8240B4B4;
loc_8240B4AC:
	// addi r30,r11,-1
	r30.s64 = ctx.r11.s64 + -1;
	// li r29,-1
	r29.s64 = -1;
loc_8240B4B4:
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8240b4cc
	if (ctx.cr6.eq) goto loc_8240B4CC;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82409a88
	ctx.lr = 0x8240B4CC;
	sub_82409A88(ctx, base);
loc_8240B4CC:
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8240b614
	if (!ctx.cr6.gt) goto loc_8240B614;
	// add r11,r29,r30
	ctx.r11.u64 = r29.u64 + r30.u64;
	// subf r9,r29,r30
	ctx.r9.u64 = r30.u64 - r29.u64;
	// rlwinm r10,r30,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r6,r11,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r7,r9,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r30,r27,12
	r30.s64 = r27.s64 + 12;
	// subf r3,r29,r28
	ctx.r3.u64 = r28.u64 - r29.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r28,-32256
	r28.s64 = -2113929216;
	// lis r27,-32256
	r27.s64 = -2113929216;
	// lis r25,-32255
	r25.s64 = -2113863680;
	// lfd f9,20216(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f9.u64 = REX_LOAD_U64(ctx.r11.u32 + 20216);
	// lfs f10,15196(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15196);
	ctx.f10.f64 = double(temp.f32);
	// rlwinm r5,r29,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f11,20208(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 20208);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,17280(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 17280);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,20328(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 20328);
	ctx.f13.f64 = double(temp.f32);
	// lfs f8,20204(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 20204);
	ctx.f8.f64 = double(temp.f32);
loc_8240B52C:
	// lfsx f0,r30,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r11,r4,2,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xC;
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + f31.f64));
	// lwz r9,92(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
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
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// beq cr6,0x8240b5c8
	if (ctx.cr6.eq) goto loc_8240B5C8;
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// std r8,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfd f7,88(r1)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f7,f7
	ctx.f7.f64 = double(ctx.f7.s64);
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// frsp f7,f7
	ctx.f7.f64 = double(float(ctx.f7.f64));
	// lfs f6,28(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f6.f64 = double(temp.f32);
	// addi r8,r11,28
	ctx.r8.s64 = ctx.r11.s64 + 28;
	// fsubs f0,f0,f7
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f7.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmadds f7,f0,f12,f6
	ctx.f7.f64 = double(float(std::fma(ctx.f0.f64, ctx.f12.f64, ctx.f6.f64)));
	// stfs f7,28(r11)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f7,28(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f7,f0,f11,f7
	ctx.f7.f64 = double(float(std::fma(ctx.f0.f64, ctx.f11.f64, ctx.f7.f64)));
	// fmul f6,f0,f9
	ctx.f6.f64 = ctx.f0.f64 * ctx.f9.f64;
	// stfs f7,28(r11)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// addi r8,r11,28
	ctx.r8.s64 = ctx.r11.s64 + 28;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lfs f7,28(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f0,f0,f10,f7
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f10.f64, ctx.f7.f64)));
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// frsp f31,f6
	f31.f64 = double(float(ctx.f6.f64));
	// addi r8,r11,28
	ctx.r8.s64 = ctx.r11.s64 + 28;
loc_8240B5C8:
	// cmpwi cr6,r9,255
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 255, ctx.xer);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// blt cr6,0x8240b5d8
	if (ctx.cr6.lt) goto loc_8240B5D8;
	// li r11,255
	ctx.r11.s64 = 255;
loc_8240B5D8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8240b5f0
	if (!ctx.cr6.gt) goto loc_8240B5F0;
	// cmpwi cr6,r9,255
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 255, ctx.xer);
	// blt cr6,0x8240b5f4
	if (ctx.cr6.lt) goto loc_8240B5F4;
	// li r9,255
	ctx.r9.s64 = 255;
	// b 0x8240b5f4
	goto loc_8240B5F4;
loc_8240B5F0:
	// li r9,0
	ctx.r9.s64 = 0;
loc_8240B5F4:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// stbux r9,r3,r29
	ea = ctx.r3.u32 + r29.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r3.u32 = ea;
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8240b52c
	if (ctx.cr6.lt) goto loc_8240B52C;
loc_8240B614:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_82414950) {
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
	// lwz r11,680(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 680);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82414984
	if (ctx.cr6.eq) goto loc_82414984;
	// lwz r3,684(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 684);
	// bl 0x824446d0
	ctx.lr = 0x82414978;
	sub_824446D0(ctx, base);
	// bl 0x82448710
	ctx.lr = 0x8241497C;
	sub_82448710(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,680(r31)
	REX_STORE_U32(r31.u32 + 680, ctx.r11.u32);
loc_82414984:
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

DEFINE_REX_FUNC(sub_82415B40) {
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
	// bl 0x82415ab0
	ctx.lr = 0x82415B60;
	sub_82415AB0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82415b74
	if (ctx.cr0.eq) goto loc_82415B74;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f0350
	ctx.lr = 0x82415B74;
	sub_823F0350(ctx, base);
loc_82415B74:
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

DEFINE_REX_FUNC(sub_82417490) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82417498;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,640
	r30.s64 = ctx.r3.s64 + 640;
	// lwz r4,672(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 672);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,632(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 632);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x8241b778
	ctx.lr = 0x824174B4;
	sub_8241B778(ctx, base);
	// li r29,1
	r29.s64 = 1;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82417628
	if (ctx.cr0.lt) goto loc_82417628;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x82417604
	if (!ctx.cr6.eq) goto loc_82417604;
	// lwz r7,648(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 648);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r29,72(r31)
	REX_STORE_U32(r31.u32 + 72, r29.u32);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// addi r10,r10,23948
	ctx.r10.s64 = ctx.r10.s64 + 23948;
loc_824174E0:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x82417504
	if (ctx.cr0.eq) goto loc_82417504;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x824174e0
	if (ctx.cr6.eq) goto loc_824174E0;
loc_82417504:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82417518
	if (!ctx.cr0.eq) goto loc_82417518;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82414d00
	ctx.lr = 0x82417514;
	sub_82414D00(ctx, base);
	// b 0x8241762c
	goto loc_8241762C;
loc_82417518:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// addi r10,r10,23940
	ctx.r10.s64 = ctx.r10.s64 + 23940;
loc_82417524:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x82417548
	if (ctx.cr0.eq) goto loc_82417548;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82417524
	if (ctx.cr6.eq) goto loc_82417524;
loc_82417548:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8241755c
	if (!ctx.cr0.eq) goto loc_8241755C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82414ef8
	ctx.lr = 0x82417558;
	sub_82414EF8(ctx, base);
	// b 0x8241762c
	goto loc_8241762C;
loc_8241755C:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// addi r10,r10,23936
	ctx.r10.s64 = ctx.r10.s64 + 23936;
loc_82417568:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x8241758c
	if (ctx.cr0.eq) goto loc_8241758C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82417568
	if (ctx.cr6.eq) goto loc_82417568;
loc_8241758C:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x824175a0
	if (!ctx.cr0.eq) goto loc_824175A0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82416910
	ctx.lr = 0x8241759C;
	sub_82416910(ctx, base);
	// b 0x8241762c
	goto loc_8241762C;
loc_824175A0:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// addi r10,r10,23924
	ctx.r10.s64 = ctx.r10.s64 + 23924;
loc_824175AC:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x824175d0
	if (ctx.cr0.eq) goto loc_824175D0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x824175ac
	if (ctx.cr6.eq) goto loc_824175AC;
loc_824175D0:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x824175e4
	if (!ctx.cr0.eq) goto loc_824175E4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82416810
	ctx.lr = 0x824175E0;
	sub_82416810(ctx, base);
	// b 0x8241762c
	goto loc_8241762C;
loc_824175E4:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,3568
	ctx.r5.s64 = 3568;
	// addi r6,r11,23892
	ctx.r6.s64 = ctx.r11.s64 + 23892;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// bl 0x8241a718
	ctx.lr = 0x824175FC;
	sub_8241A718(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,668(r31)
	REX_STORE_U32(r31.u32 + 668, ctx.r11.u32);
loc_82417604:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// beq cr6,0x82417624
	if (ctx.cr6.eq) goto loc_82417624;
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x82417624
	if (ctx.cr6.eq) goto loc_82417624;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,632(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 632);
	// bl 0x8241ab70
	ctx.lr = 0x82417624;
	sub_8241AB70(ctx, base);
loc_82417624:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82417628:
	// stw r29,76(r31)
	REX_STORE_U32(r31.u32 + 76, r29.u32);
loc_8241762C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82423C70) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwzx r31,r11,r10
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm. r11,r11,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82423ccc
	if (ctx.cr0.eq) goto loc_82423CCC;
	// lfd f1,32(r31)
	ctx.f1.u64 = REX_LOAD_U64(r31.u32 + 32);
	// bl 0x826a18c8
	ctx.lr = 0x82423CB0;
	sub_826A18C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82423d10
	if (ctx.cr0.eq) goto loc_82423D10;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82423d08
	if (ctx.cr6.eq) goto loc_82423D08;
	// lfd f0,32(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(r31.u32 + 32);
	// stfd f0,0(r30)
	REX_STORE_U64(r30.u32 + 0, ctx.f0.u64);
	// b 0x82423d08
	goto loc_82423D08;
loc_82423CCC:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x82422288
	ctx.lr = 0x82423CD4;
	sub_82422288(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82423d18
	if (ctx.cr0.lt) goto loc_82423D18;
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// lfd f31,80(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(f31.f64, ctx.f0.f64);
	// bne cr6,0x82423d10
	if (!ctx.cr6.eq) goto loc_82423D10;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x826a18c8
	ctx.lr = 0x82423CF4;
	sub_826A18C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82423d10
	if (ctx.cr0.eq) goto loc_82423D10;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82423d08
	if (ctx.cr6.eq) goto loc_82423D08;
	// stfd f31,0(r30)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(r30.u32 + 0, f31.u64);
loc_82423D08:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82423d18
	goto loc_82423D18;
loc_82423D10:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_82423D18:
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

DEFINE_REX_FUNC(sub_82437D90) {
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
	// bl 0x822c8e98
	ctx.lr = 0x82437DCC;
	sub_822C8E98(ctx, base);
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

DEFINE_REX_FUNC(sub_8243ADE0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8243ADE8;
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
	// b 0x8243ae0c
	goto loc_8243AE0C;
loc_8243AE00:
	// lwz r31,36(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8243ae30
	if (ctx.cr6.eq) goto loc_8243AE30;
loc_8243AE0C:
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
	// bl 0x82438a18
	ctx.lr = 0x8243AE24;
	sub_82438A18(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8243ae00
	if (!ctx.cr0.lt) goto loc_8243AE00;
	// b 0x8243ae34
	goto loc_8243AE34;
loc_8243AE30:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8243AE34:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8243C300) {
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
	// li r9,4
	ctx.r9.s64 = 4;
	// li r30,0
	r30.s64 = 0;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r6,r3,1548
	ctx.r6.s64 = ctx.r3.s64 + 1548;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// addi r8,r9,-21196
	ctx.r8.s64 = ctx.r9.s64 + -21196;
loc_8243C33C:
	// lbzx r9,r6,r7
	ctx.r9.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r7.u32);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmpwi cr6,r9,41
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 41, ctx.xer);
	// blt cr6,0x8243c36c
	if (ctx.cr6.lt) goto loc_8243C36C;
	// cmpwi cr6,r9,122
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 122, ctx.xer);
	// bgt cr6,0x8243c36c
	if (ctx.cr6.gt) goto loc_8243C36C;
	// cmpwi cr6,r9,90
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 90, ctx.xer);
	// ble cr6,0x8243c364
	if (!ctx.cr6.gt) goto loc_8243C364;
	// cmpwi cr6,r9,97
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 97, ctx.xer);
	// blt cr6,0x8243c36c
	if (ctx.cr6.lt) goto loc_8243C36C;
loc_8243C364:
	// stbx r9,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// b 0x8243c3a4
	goto loc_8243C3A4;
loc_8243C36C:
	// li r5,91
	ctx.r5.s64 = 91;
	// srawi r3,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r9.s32 >> 4;
	// stbx r5,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r5.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r5,r3,28
	ctx.r5.u64 = ctx.r3.u32 & 0xF;
	// clrlwi r9,r9,28
	ctx.r9.u64 = ctx.r9.u32 & 0xF;
	// li r3,93
	ctx.r3.s64 = 93;
	// lbzx r5,r5,r8
	ctx.r5.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r8.u32);
	// stbx r5,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r5.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbzx r9,r9,r8
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// stbx r9,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stbx r3,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u8);
loc_8243C3A4:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x8243c33c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8243C33C;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8243c3bc
	if (!ctx.cr6.eq) goto loc_8243C3BC;
	// stbx r30,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, r30.u8);
	// b 0x8243c3e8
	goto loc_8243C3E8;
loc_8243C3BC:
	// li r9,58
	ctx.r9.s64 = 58;
	// li r8,32
	ctx.r8.s64 = 32;
	// stbx r9,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// li r5,64
	ctx.r5.s64 = 64;
	// stbx r8,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r31,r10,r11
	r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8243C3E4;
	sub_826A1E70(ctx, base);
	// stb r30,63(r31)
	REX_STORE_U8(r31.u32 + 63, r30.u8);
loc_8243C3E8:
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

DEFINE_REX_FUNC(sub_82441F18) {
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
	// lwz r11,1376(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1376);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lbz r30,1558(r3)
	r30.u64 = REX_LOAD_U8(ctx.r3.u32 + 1558);
	// rlwinm r11,r11,0,9,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7FE000;
	// rlwinm. r11,r11,0,18,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFE03FFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82441f9c
	if (ctx.cr0.eq) goto loc_82441F9C;
	// bl 0x82441b88
	ctx.lr = 0x82441F48;
	sub_82441B88(ctx, base);
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(r30.s32, 3, ctx.xer);
	// bne cr6,0x82441f9c
	if (!ctx.cr6.eq) goto loc_82441F9C;
	// lhz r11,1544(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 1544);
	// lwz r10,1540(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1540);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82441f9c
	if (!ctx.cr0.gt) goto loc_82441F9C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
loc_82441F68:
	// lwz r9,1592(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 1592);
	// lbz r10,1(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r8,2(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r7,3(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// lbzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// stb r10,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r10.u8);
	// lwz r10,1592(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1592);
	// lbzx r10,r8,r10
	ctx.r10.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// stb r10,2(r11)
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r10.u8);
	// lwz r10,1592(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1592);
	// lbzx r10,r7,r10
	ctx.r10.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r10.u32);
	// stbu r10,3(r11)
	ea = 3 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r10.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x82441f68
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82441F68;
loc_82441F9C:
	// lwz r11,1376(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1376);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82442080
	if (ctx.cr0.eq) goto loc_82442080;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(r30.s32, 3, ctx.xer);
	// bne cr6,0x82442080
	if (!ctx.cr6.eq) goto loc_82442080;
	// lbz r11,1616(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 1616);
	// lbz r10,1617(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 1617);
	// lbz r7,1618(r31)
	ctx.r7.u64 = REX_LOAD_U8(r31.u32 + 1618);
	// subfic r11,r11,8
	ctx.xer.ca = ctx.r11.u32 <= 8;
	ctx.r11.u64 = static_cast<uint64_t>(8) - ctx.r11.u64;
	// subfic r9,r10,8
	ctx.xer.ca = ctx.r10.u32 <= 8;
	ctx.r9.u64 = static_cast<uint64_t>(8) - ctx.r10.u64;
	// lhz r8,1544(r31)
	ctx.r8.u64 = REX_LOAD_U16(r31.u32 + 1544);
	// subfic r10,r7,8
	ctx.xer.ca = ctx.r7.u32 <= 8;
	ctx.r10.u64 = static_cast<uint64_t>(8) - ctx.r7.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82441fdc
	if (ctx.cr6.lt) goto loc_82441FDC;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// ble cr6,0x82441fe0
	if (!ctx.cr6.gt) goto loc_82441FE0;
loc_82441FDC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82441FE0:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt cr6,0x82441ff0
	if (ctx.cr6.lt) goto loc_82441FF0;
	// cmpwi cr6,r9,8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 8, ctx.xer);
	// ble cr6,0x82441ff4
	if (!ctx.cr6.gt) goto loc_82441FF4;
loc_82441FF0:
	// li r9,0
	ctx.r9.s64 = 0;
loc_82441FF4:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x82442004
	if (ctx.cr6.lt) goto loc_82442004;
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// ble cr6,0x82442008
	if (!ctx.cr6.gt) goto loc_82442008;
loc_82442004:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82442008:
	// clrlwi. r4,r8,16
	ctx.r4.u64 = ctx.r8.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x82442080
	if (ctx.cr0.eq) goto loc_82442080;
	// clrlwi r6,r9,24
	ctx.r6.u64 = ctx.r9.u32 & 0xFF;
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r5,r10,24
	ctx.r5.u64 = ctx.r10.u32 & 0xFF;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82442020:
	// lwz r10,1540(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1540);
	// mulli r11,r9,3
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(3));
	// lbzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// clrlwi r3,r7,24
	ctx.r3.u64 = ctx.r7.u32 & 0xFF;
	// clrlwi r30,r6,24
	r30.u64 = ctx.r6.u32 & 0xFF;
	// srw r8,r8,r3
	ctx.r8.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r3.u8 & 0x3F));
	// stbx r8,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u8);
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// clrlwi r3,r5,24
	ctx.r3.u64 = ctx.r5.u32 & 0xFF;
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// lwz r10,1540(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1540);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// lbz r8,1(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// srw r8,r8,r30
	ctx.r8.u64 = r30.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (r30.u8 & 0x3F));
	// stb r8,1(r10)
	REX_STORE_U8(ctx.r10.u32 + 1, ctx.r8.u8);
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// lwz r10,1540(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1540);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// srw r8,r10,r3
	ctx.r8.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r3.u8 & 0x3F));
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// stb r8,2(r11)
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r8.u8);
	// blt cr6,0x82442020
	if (ctx.cr6.lt) goto loc_82442020;
loc_82442080:
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

DEFINE_REX_FUNC(sub_82448180) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r4,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r5,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r5.u32);
	// li r9,26
	ctx.r9.s64 = 26;
	// stw r6,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r6.u32);
	// addi r10,r10,-7840
	ctx.r10.s64 = ctx.r10.s64 + -7840;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r9,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82449708) {
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
	ctx.lr = 0x82449710;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82449748
	if (ctx.cr6.eq) goto loc_82449748;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82449748
	if (!ctx.cr6.eq) goto loc_82449748;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x824498ec
	goto loc_824498EC;
loc_82449748:
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(r30.s32, -1, ctx.xer);
	// bne cr6,0x82449774
	if (!ctx.cr6.eq) goto loc_82449774;
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
loc_82449754:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82449754
	if (!ctx.cr6.eq) goto loc_82449754;
	// subf r11,r28,r11
	ctx.r11.u64 = ctx.r11.u64 - r28.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r30,r11,1
	r30.s64 = ctx.r11.s64 + 1;
loc_82449774:
	// clrlwi. r11,r27,31
	ctx.r11.u64 = r27.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82449780
	if (!ctx.cr0.eq) goto loc_82449780;
	// ori r27,r27,2
	r27.u64 = r27.u64 | 2;
loc_82449780:
	// rlwinm. r11,r27,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824497f4
	if (ctx.cr0.eq) goto loc_824497F4;
	// lwz r8,8(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 8);
	// b 0x824497ec
	goto loc_824497EC;
loc_82449790:
	// lwz r11,8(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824497e8
	if (ctx.cr0.eq) goto loc_824497E8;
	// lwz r11,4(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x824497e8
	if (!ctx.cr6.eq) goto loc_824497E8;
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x824497e0
	if (ctx.cr0.eq) goto loc_824497E0;
	// add r7,r28,r30
	ctx.r7.u64 = r28.u64 + r30.u64;
loc_824497C0:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r6,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x824497e0
	if (!ctx.cr0.eq) goto loc_824497E0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x824497c0
	if (!ctx.cr6.eq) goto loc_824497C0;
loc_824497E0:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82449814
	if (ctx.cr0.eq) goto loc_82449814;
loc_824497E8:
	// lwz r8,16(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
loc_824497EC:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82449790
	if (!ctx.cr6.eq) goto loc_82449790;
loc_824497F4:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x823f02b8
	ctx.lr = 0x82449800;
	sub_823F02B8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x82449844
	if (!ctx.cr0.eq) goto loc_82449844;
loc_82449808:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x824498ec
	goto loc_824498EC;
loc_82449814:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x82449824
	if (ctx.cr6.eq) goto loc_82449824;
	// lwz r11,12(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// stw r11,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r11.u32);
loc_82449824:
	// clrlwi. r11,r27,31
	ctx.r11.u64 = r27.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824498e8
	if (ctx.cr0.eq) goto loc_824498E8;
	// rlwinm. r11,r27,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824498e8
	if (ctx.cr0.eq) goto loc_824498E8;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823f0350
	ctx.lr = 0x82449840;
	sub_823F0350(ctx, base);
	// b 0x824498e8
	goto loc_824498E8;
loc_82449844:
	// clrlwi. r11,r27,31
	ctx.r11.u64 = r27.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82449884
	if (!ctx.cr0.eq) goto loc_82449884;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823f02b8
	ctx.lr = 0x82449858;
	sub_823F02B8(ctx, base);
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82449874
	if (!ctx.cr0.eq) goto loc_82449874;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f0350
	ctx.lr = 0x82449870;
	sub_823F0350(ctx, base);
	// b 0x82449808
	goto loc_82449808;
loc_82449874:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82449880;
	sub_826A1E70(ctx, base);
	// b 0x82449888
	goto loc_82449888;
loc_82449884:
	// stw r28,0(r31)
	REX_STORE_U32(r31.u32 + 0, r28.u32);
loc_82449888:
	// rlwinm. r11,r27,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824498a0
	if (!ctx.cr0.eq) goto loc_824498A0;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r11,4(r29)
	REX_STORE_U32(r29.u32 + 4, ctx.r11.u32);
loc_824498A0:
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// addi r11,r31,16
	ctx.r11.s64 = r31.s64 + 16;
	// stw r27,8(r31)
	REX_STORE_U32(r31.u32 + 8, r27.u32);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// stw r9,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r9.u32);
	// stw r25,20(r31)
	REX_STORE_U32(r31.u32 + 20, r25.u32);
	// stw r10,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// lwz r9,12(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 12);
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 4);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// stw r10,4(r29)
	REX_STORE_U32(r29.u32 + 4, ctx.r10.u32);
	// stw r31,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, r31.u32);
	// stw r11,12(r29)
	REX_STORE_U32(r29.u32 + 12, ctx.r11.u32);
	// beq cr6,0x824498e8
	if (ctx.cr6.eq) goto loc_824498E8;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// stw r11,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r11.u32);
loc_824498E8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824498EC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_82458A70) {
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
	ctx.lr = 0x82458A78;
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1816(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1816);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r21,r5
	r21.u64 = ctx.r5.u64;
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// mr r22,r7
	r22.u64 = ctx.r7.u64;
	// lis r20,29760
	r20.s64 = 1950351360;
	// lis r19,29616
	r19.s64 = 1940914176;
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82458bb8
	if (ctx.cr6.eq) goto loc_82458BB8;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r28,r7,15480
	r28.s64 = ctx.r7.s64 + 15480;
	// addi r27,r8,15468
	r27.s64 = ctx.r8.s64 + 15468;
	// addi r26,r9,15456
	r26.s64 = ctx.r9.s64 + 15456;
	// addi r25,r10,15444
	r25.s64 = ctx.r10.s64 + 15444;
	// addi r24,r11,14172
	r24.s64 = ctx.r11.s64 + 14172;
loc_82458AD0:
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82404168
	ctx.lr = 0x82458AE8;
	sub_82404168(ctx, base);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82404168
	ctx.lr = 0x82458B00;
	sub_82404168(ctx, base);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82404168
	ctx.lr = 0x82458B18;
	sub_82404168(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82455688
	ctx.lr = 0x82458B20;
	sub_82455688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82458c38
	if (ctx.cr0.lt) goto loc_82458C38;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x82458B38;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82458c38
	if (ctx.cr0.lt) goto loc_82458C38;
	// cmplw cr6,r29,r20
	ctx.cr6.compare<uint32_t>(r29.u32, r20.u32, ctx.xer);
	// bgt cr6,0x82458c40
	if (ctx.cr6.gt) goto loc_82458C40;
	// beq cr6,0x82458b78
	if (ctx.cr6.eq) goto loc_82458B78;
	// lis r11,29584
	ctx.r11.s64 = 1938817024;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82458c64
	if (ctx.cr6.eq) goto loc_82458C64;
	// lis r11,29600
	ctx.r11.s64 = 1939865600;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82458c6c
	if (ctx.cr6.eq) goto loc_82458C6C;
	// cmplw cr6,r29,r19
	ctx.cr6.compare<uint32_t>(r29.u32, r19.u32, ctx.xer);
	// beq cr6,0x82458b78
	if (ctx.cr6.eq) goto loc_82458B78;
	// lis r11,29632
	ctx.r11.s64 = 1941962752;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82458c74
	if (!ctx.cr6.eq) goto loc_82458C74;
loc_82458B78:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
loc_82458B7C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x82458B84;
	sub_824555B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82458c38
	if (ctx.cr6.lt) goto loc_82458C38;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x82458BA0;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82458c38
	if (ctx.cr0.lt) goto loc_82458C38;
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1816);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82458ad0
	if (ctx.cr6.lt) goto loc_82458AD0;
loc_82458BB8:
	// cmplw cr6,r29,r19
	ctx.cr6.compare<uint32_t>(r29.u32, r19.u32, ctx.xer);
	// beq cr6,0x82458bc8
	if (ctx.cr6.eq) goto loc_82458BC8;
	// cmplw cr6,r29,r20
	ctx.cr6.compare<uint32_t>(r29.u32, r20.u32, ctx.xer);
	// bne cr6,0x82458c34
	if (!ctx.cr6.eq) goto loc_82458C34;
loc_82458BC8:
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82458c34
	if (ctx.cr6.eq) goto loc_82458C34;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r29,r11,15420
	r29.s64 = ctx.r11.s64 + 15420;
loc_82458BDC:
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82404168
	ctx.lr = 0x82458BF4;
	sub_82404168(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82455688
	ctx.lr = 0x82458BFC;
	sub_82455688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82458c38
	if (ctx.cr0.lt) goto loc_82458C38;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x82458C1C;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82458c38
	if (ctx.cr0.lt) goto loc_82458C38;
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1816);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82458bdc
	if (ctx.cr6.lt) goto loc_82458BDC;
loc_82458C34:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82458C38:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x826a1ce4
	return;
loc_82458C40:
	// lis r11,29776
	ctx.r11.s64 = 1951399936;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82458b78
	if (ctx.cr6.eq) goto loc_82458B78;
	// lis r11,29792
	ctx.r11.s64 = 1952448512;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82458c6c
	if (ctx.cr6.eq) goto loc_82458C6C;
	// lis r11,29808
	ctx.r11.s64 = 1953497088;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82458c74
	if (!ctx.cr6.eq) goto loc_82458C74;
loc_82458C64:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// b 0x82458b7c
	goto loc_82458B7C;
loc_82458C6C:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// b 0x82458b7c
	goto loc_82458B7C;
loc_82458C74:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82458c38
	goto loc_82458C38;
}

DEFINE_REX_FUNC(sub_82468DD8) {
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
	// lwz r3,436(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 436);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82468e7c
	if (ctx.cr6.eq) goto loc_82468E7C;
	// lwz r9,288(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 288);
	// lwz r8,276(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 276);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82468e7c
	if (!ctx.cr6.lt) goto loc_82468E7C;
	// lwz r11,212(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 212);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82468e7c
	if (!ctx.cr6.eq) goto loc_82468E7C;
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 260);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82468e50
	if (ctx.cr6.eq) goto loc_82468E50;
	// lwz r10,60(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82468e50
	if (ctx.cr6.eq) goto loc_82468E50;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r10,14
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 14, ctx.xer);
	// bne cr6,0x82468e50
	if (!ctx.cr6.eq) goto loc_82468E50;
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// lwz r4,64(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// lwz r5,68(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
loc_82468E50:
	// lwz r30,0(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,272(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 272);
	// subf r7,r9,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r9.u64;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82468E70;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,276(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 276);
	// stw r11,288(r31)
	REX_STORE_U32(r31.u32 + 288, ctx.r11.u32);
	// b 0x82468e80
	goto loc_82468E80;
loc_82468E7C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82468E80:
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

DEFINE_REX_FUNC(sub_8246D648) {
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
	ctx.lr = 0x8246D650;
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// stw r7,420(r1)
	REX_STORE_U32(ctx.r1.u32 + 420, ctx.r7.u32);
	// mr r22,r6
	r22.u64 = ctx.r6.u64;
	// mr r20,r7
	r20.u64 = ctx.r7.u64;
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// mr r23,r9
	r23.u64 = ctx.r9.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8246d678
	if (!ctx.cr6.eq) goto loc_8246D678;
	// lwz r24,260(r3)
	r24.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
loc_8246D678:
	// lwz r30,16(r24)
	r30.u64 = REX_LOAD_U32(r24.u32 + 16);
	// lwz r3,20(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 20);
	// lwz r11,136(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 136);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8246d6a4
	if (ctx.cr6.eq) goto loc_8246D6A4;
loc_8246D69C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8246dccc
	goto loc_8246DCCC;
loc_8246D6A4:
	// lwz r6,260(r25)
	ctx.r6.u64 = REX_LOAD_U32(r25.u32 + 260);
	// li r28,0
	r28.s64 = 0;
	// lwz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r10,12(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 12);
	// clrlwi r11,r11,12
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8246d69c
	if (!ctx.cr6.eq) goto loc_8246D69C;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r31,0
	r31.s64 = 0;
	// lis r21,8
	r21.s64 = 524288;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8246d798
	if (!ctx.cr6.gt) goto loc_8246D798;
	// lwz r7,16(r25)
	ctx.r7.u64 = REX_LOAD_U32(r25.u32 + 16);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r8,108(r25)
	ctx.r8.u64 = REX_LOAD_U32(r25.u32 + 108);
loc_8246D6E0:
	// lwzx r11,r10,r22
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + r22.u32);
	// rlwinm. r9,r8,0,18,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r7
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// beq 0x8246d718
	if (ctx.cr0.eq) goto loc_8246D718;
	// lwz r29,60(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// rlwinm. r29,r29,0,22,22
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x8246d718
	if (ctx.cr0.eq) goto loc_8246D718;
	// cmplw cr6,r4,r21
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, r21.u32, ctx.xer);
	// bne cr6,0x8246d718
	if (!ctx.cr6.eq) goto loc_8246D718;
	// li r28,1
	r28.s64 = 1;
loc_8246D718:
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// rlwinm. r29,r11,0,11,15
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F0000;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x8246d73c
	if (ctx.cr0.eq) goto loc_8246D73C;
	// andc r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r5.u64;
	// rlwinm. r11,r11,0,11,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F0000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8246d73c
	if (ctx.cr0.eq) goto loc_8246D73C;
	// cmplw cr6,r4,r21
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, r21.u32, ctx.xer);
	// bne cr6,0x8246d69c
	if (!ctx.cr6.eq) goto loc_8246D69C;
	// li r28,1
	r28.s64 = 1;
loc_8246D73C:
	// lwzx r11,r30,r10
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + ctx.r10.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// rlwinm. r11,r11,0,16,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFE00;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8246d69c
	if (!ctx.cr0.eq) goto loc_8246D69C;
	// rlwinm. r11,r8,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8246d780
	if (ctx.cr0.eq) goto loc_8246D780;
	// lwz r11,4(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm. r11,r11,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8246d780
	if (ctx.cr0.eq) goto loc_8246D780;
	// lwz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// lis r9,4112
	ctx.r9.s64 = 269484032;
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8246d69c
	if (!ctx.cr6.eq) goto loc_8246D69C;
	// li r28,1
	r28.s64 = 1;
loc_8246D780:
	// lwz r11,260(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 260);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8246d6e0
	if (ctx.cr6.lt) goto loc_8246D6E0;
loc_8246D798:
	// lwz r27,12(r24)
	r27.u64 = REX_LOAD_U32(r24.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8246d8c8
	if (ctx.cr6.eq) goto loc_8246D8C8;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// not r5,r20
	ctx.r5.u64 = ~r20.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// subf r6,r11,r22
	ctx.r6.u64 = r22.u64 - ctx.r11.u64;
loc_8246D7B8:
	// lwz r9,16(r24)
	ctx.r9.u64 = REX_LOAD_U32(r24.u32 + 16);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r8,20(r25)
	ctx.r8.u64 = REX_LOAD_U32(r25.u32 + 20);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r31,r1,112
	r31.s64 = ctx.r1.s64 + 112;
	// addi r30,r1,128
	r30.s64 = ctx.r1.s64 + 128;
	// lwzx r11,r10,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addi r29,r1,144
	r29.s64 = ctx.r1.s64 + 144;
	// addi r27,r1,160
	r27.s64 = ctx.r1.s64 + 160;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r6,r7
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// addi r26,r1,176
	r26.s64 = ctx.r1.s64 + 176;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r21,r1,192
	r21.s64 = ctx.r1.s64 + 192;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// lwzx r11,r11,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwzx r9,r9,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lwz r20,8(r11)
	r20.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r19,12(r11)
	r19.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r18,16(r11)
	r18.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r17,20(r11)
	r17.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r16,24(r11)
	r16.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r8,60(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// lwz r15,72(r11)
	r15.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r14,104(r11)
	r14.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// stw r20,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, r20.u32);
	// lwz r20,420(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// stwx r19,r10,r3
	REX_STORE_U32(ctx.r10.u32 + ctx.r3.u32, r19.u32);
	// stwx r18,r10,r31
	REX_STORE_U32(ctx.r10.u32 + r31.u32, r18.u32);
	// stwx r17,r10,r30
	REX_STORE_U32(ctx.r10.u32 + r30.u32, r17.u32);
	// stwx r16,r10,r29
	REX_STORE_U32(ctx.r10.u32 + r29.u32, r16.u32);
	// stwx r8,r10,r27
	REX_STORE_U32(ctx.r10.u32 + r27.u32, ctx.r8.u32);
	// stwx r15,r10,r26
	REX_STORE_U32(ctx.r10.u32 + r26.u32, r15.u32);
	// stwx r14,r10,r21
	REX_STORE_U32(ctx.r10.u32 + r21.u32, r14.u32);
	// bne cr6,0x8246d8a0
	if (!ctx.cr6.eq) goto loc_8246D8A0;
	// lwz r7,4(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stw r7,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// lwz r7,8(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// stw r7,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// lwz r7,12(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// stw r7,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
	// lwz r7,16(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// stw r7,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r7.u32);
	// lwz r7,20(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// stw r7,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r7.u32);
	// lwz r7,24(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
	// stw r7,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r7.u32);
	// lwz r7,72(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 72);
	// stw r7,72(r11)
	REX_STORE_U32(ctx.r11.u32 + 72, ctx.r7.u32);
	// lwz r7,104(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 104);
	// stw r7,104(r11)
	REX_STORE_U32(ctx.r11.u32 + 104, ctx.r7.u32);
	// lwz r9,60(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 60);
	// xor r7,r9,r20
	ctx.r7.u64 = ctx.r9.u64 ^ r20.u64;
	// and r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 & ctx.r5.u64;
	// or r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 | ctx.r9.u64;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// b 0x8246d8ac
	goto loc_8246D8AC;
loc_8246D8A0:
	// and r9,r5,r8
	ctx.r9.u64 = ctx.r5.u64 & ctx.r8.u64;
	// xor r8,r8,r20
	ctx.r8.u64 = ctx.r8.u64 ^ r20.u64;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
loc_8246D8AC:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// stw r9,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r9.u32);
	// lwz r27,12(r24)
	r27.u64 = REX_LOAD_U32(r24.u32 + 12);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r4,r27
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, r27.u32, ctx.xer);
	// blt cr6,0x8246d7b8
	if (ctx.cr6.lt) goto loc_8246D7B8;
	// lis r21,8
	r21.s64 = 524288;
loc_8246D8C8:
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8246d900
	if (ctx.cr6.eq) goto loc_8246D900;
	// lwz r29,16(r24)
	r29.u64 = REX_LOAD_U32(r24.u32 + 16);
	// li r31,0
	r31.s64 = 0;
loc_8246D8DC:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwzx r4,r29,r31
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + r31.u32);
	// bl 0x8246bbf0
	ctx.lr = 0x8246D8E8;
	sub_8246BBF0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8246db60
	if (ctx.cr6.eq) goto loc_8246DB60;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(r30.u32, r27.u32, ctx.xer);
	// blt cr6,0x8246d8dc
	if (ctx.cr6.lt) goto loc_8246D8DC;
loc_8246D900:
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r26,0
	r26.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8246d9e0
	if (ctx.cr6.eq) goto loc_8246D9E0;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r5,16(r24)
	ctx.r5.u64 = REX_LOAD_U32(r24.u32 + 16);
	// lwz r6,20(r25)
	ctx.r6.u64 = REX_LOAD_U32(r25.u32 + 20);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r30,136(r25)
	r30.u64 = REX_LOAD_U32(r25.u32 + 136);
	// subf r4,r11,r22
	ctx.r4.u64 = r22.u64 - ctx.r11.u64;
loc_8246D934:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwzx r9,r5,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r7,r4
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r4.u32);
	// lwzx r9,r11,r6
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,84(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 84);
	// lwzx r8,r8,r6
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x8246d964
	if (!ctx.cr6.lt) goto loc_8246D964;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_8246D964:
	// lwz r11,88(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 88);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r26.u32, ctx.xer);
	// ble cr6,0x8246d974
	if (!ctx.cr6.gt) goto loc_8246D974;
	// mr r26,r11
	r26.u64 = ctx.r11.u64;
loc_8246D974:
	// lwz r11,4(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8246d9c0
	if (!ctx.cr6.eq) goto loc_8246D9C0;
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r7,8(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x8246d9c0
	if (!ctx.cr6.eq) goto loc_8246D9C0;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lwz r7,12(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x8246d9c0
	if (!ctx.cr6.eq) goto loc_8246D9C0;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lwz r7,16(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x8246d9c0
	if (!ctx.cr6.eq) goto loc_8246D9C0;
	// lwz r11,80(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 80);
	// b 0x8246d9c4
	goto loc_8246D9C4;
loc_8246D9C0:
	// lwz r11,80(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 80);
loc_8246D9C4:
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bge cr6,0x8246d9d0
	if (!ctx.cr6.lt) goto loc_8246D9D0;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
loc_8246D9D0:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(r29.u32, r27.u32, ctx.xer);
	// blt cr6,0x8246d934
	if (ctx.cr6.lt) goto loc_8246D934;
loc_8246D9E0:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// bne cr6,0x8246d9fc
	if (!ctx.cr6.eq) goto loc_8246D9FC;
	// cmplw cr6,r31,r26
	ctx.cr6.compare<uint32_t>(r31.u32, r26.u32, ctx.xer);
	// bge cr6,0x8246d9fc
	if (!ctx.cr6.lt) goto loc_8246D9FC;
	// lwz r11,108(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 108);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8246db60
	if (ctx.cr0.eq) goto loc_8246DB60;
loc_8246D9FC:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne cr6,0x8246dcb4
	if (!ctx.cr6.eq) goto loc_8246DCB4;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r26
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r26.u32, ctx.xer);
	// bgt cr6,0x8246db4c
	if (ctx.cr6.gt) goto loc_8246DB4C;
	// lwz r11,24(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 24);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r10,r11
	r29.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8246DA1C:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8246db3c
	if (ctx.cr6.eq) goto loc_8246DB3C;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi r5,r31,12
	ctx.r5.u64 = r31.u32 & 0xFFFFF;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// li r30,0
	r30.s64 = 0;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x8246db3c
	if (!ctx.cr6.lt) goto loc_8246DB3C;
loc_8246DA4C:
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8246dae0
	if (ctx.cr6.eq) goto loc_8246DAE0;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_8246DA60:
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8246da9c
	if (ctx.cr6.eq) goto loc_8246DA9C;
	// lwz r9,16(r24)
	ctx.r9.u64 = REX_LOAD_U32(r24.u32 + 16);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r8,0(r6)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
loc_8246DA78:
	// lwzx r23,r9,r11
	r23.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmplw cr6,r23,r8
	ctx.cr6.compare<uint32_t>(r23.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8246da98
	if (ctx.cr6.eq) goto loc_8246DA98;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r7,r27
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, r27.u32, ctx.xer);
	// blt cr6,0x8246da78
	if (ctx.cr6.lt) goto loc_8246DA78;
	// b 0x8246da9c
	goto loc_8246DA9C;
loc_8246DA98:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
loc_8246DA9C:
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// bdnz 0x8246da60
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8246DA60;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8246dae0
	if (ctx.cr6.eq) goto loc_8246DAE0;
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x8246db60
	if (!ctx.cr6.eq) goto loc_8246DB60;
	// rlwinm r11,r31,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFF00000;
	// lis r9,28752
	ctx.r9.s64 = 1884291072;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8246db60
	if (ctx.cr6.eq) goto loc_8246DB60;
	// lis r9,28768
	ctx.r9.s64 = 1885339648;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8246db60
	if (ctx.cr6.eq) goto loc_8246DB60;
	// lis r9,28784
	ctx.r9.s64 = 1886388224;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8246db60
	if (ctx.cr6.eq) goto loc_8246DB60;
	// li r30,1
	r30.s64 = 1;
loc_8246DAE0:
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x8246da4c
	if (ctx.cr6.lt) goto loc_8246DA4C;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x8246db3c
	if (ctx.cr6.eq) goto loc_8246DB3C;
	// rlwinm r11,r31,0,0,3
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xF0000000;
	// lis r10,24576
	ctx.r10.s64 = 1610612736;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8246db30
	if (ctx.cr6.eq) goto loc_8246DB30;
	// rlwinm r11,r31,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFF00000;
	// lis r10,4304
	ctx.r10.s64 = 282066944;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8246db30
	if (ctx.cr6.eq) goto loc_8246DB30;
	// lis r10,4320
	ctx.r10.s64 = 283115520;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8246db30
	if (ctx.cr6.eq) goto loc_8246DB30;
	// lis r10,4352
	ctx.r10.s64 = 285212672;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8246db3c
	if (!ctx.cr6.eq) goto loc_8246DB3C;
loc_8246DB30:
	// lwz r11,108(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 108);
	// rlwinm. r11,r11,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8246db60
	if (ctx.cr0.eq) goto loc_8246DB60;
loc_8246DB3C:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplw cr6,r28,r26
	ctx.cr6.compare<uint32_t>(r28.u32, r26.u32, ctx.xer);
	// ble cr6,0x8246da1c
	if (!ctx.cr6.gt) goto loc_8246DA1C;
loc_8246DB4C:
	// lwz r11,352(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 352);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8246dc08
	if (ctx.cr6.eq) goto loc_8246DC08;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,352(r25)
	REX_STORE_U32(r25.u32 + 352, ctx.r11.u32);
loc_8246DB60:
	// lwz r11,12(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8246d69c
	if (!ctx.cr6.gt) goto loc_8246D69C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8246DB74:
	// lwz r9,16(r24)
	ctx.r9.u64 = REX_LOAD_U32(r24.u32 + 16);
	// addi r29,r1,176
	r29.s64 = ctx.r1.s64 + 176;
	// lwz r7,20(r25)
	ctx.r7.u64 = REX_LOAD_U32(r25.u32 + 20);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r4,136(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 136);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwzx r9,r11,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// addi r31,r1,144
	r31.s64 = ctx.r1.s64 + 144;
	// addi r30,r1,160
	r30.s64 = ctx.r1.s64 + 160;
	// lwzx r8,r11,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r11,r6
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// addi r28,r1,192
	r28.s64 = ctx.r1.s64 + 192;
	// lwzx r5,r11,r5
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// lwzx r3,r11,r3
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwzx r31,r11,r31
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// lwzx r30,r11,r30
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// lwzx r9,r9,r7
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// lwzx r7,r11,r29
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// lwzx r29,r11,r28
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + r28.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r4,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r4.u32);
	// stw r8,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r8.u32);
	// stw r6,12(r9)
	REX_STORE_U32(ctx.r9.u32 + 12, ctx.r6.u32);
	// stw r5,16(r9)
	REX_STORE_U32(ctx.r9.u32 + 16, ctx.r5.u32);
	// stw r3,20(r9)
	REX_STORE_U32(ctx.r9.u32 + 20, ctx.r3.u32);
	// stw r31,24(r9)
	REX_STORE_U32(ctx.r9.u32 + 24, r31.u32);
	// stw r30,60(r9)
	REX_STORE_U32(ctx.r9.u32 + 60, r30.u32);
	// stw r7,72(r9)
	REX_STORE_U32(ctx.r9.u32 + 72, ctx.r7.u32);
	// stw r29,104(r9)
	REX_STORE_U32(ctx.r9.u32 + 104, r29.u32);
	// lwz r9,12(r24)
	ctx.r9.u64 = REX_LOAD_U32(r24.u32 + 12);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8246db74
	if (ctx.cr6.lt) goto loc_8246DB74;
	// b 0x8246d69c
	goto loc_8246D69C;
loc_8246DC08:
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8246dca4
	if (ctx.cr6.eq) goto loc_8246DCA4;
	// li r31,0
	r31.s64 = 0;
loc_8246DC18:
	// lwzx r11,r31,r22
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + r22.u32);
	// lwz r9,20(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 20);
	// lwz r10,16(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 16);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r31,r10
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + ctx.r10.u32);
	// lwzx r4,r8,r9
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,56(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 56);
	// lwzx r3,r8,r9
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x8246dc4c
	if (!ctx.cr6.eq) goto loc_8246DC4C;
	// stw r11,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// b 0x8246dc50
	goto loc_8246DC50;
loc_8246DC4C:
	// stw r10,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r10.u32);
loc_8246DC50:
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r20,r21
	ctx.cr6.compare<uint32_t>(r20.u32, r21.u32, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bne cr6,0x8246dc74
	if (!ctx.cr6.eq) goto loc_8246DC74;
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8246dc8c
	if (ctx.cr0.eq) goto loc_8246DC8C;
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwimi r11,r10,3,28,29
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xC) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFF3);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_8246DC74:
	// lis r11,16
	ctx.r11.s64 = 1048576;
	// cmplw cr6,r20,r11
	ctx.cr6.compare<uint32_t>(r20.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8246dc8c
	if (!ctx.cr6.eq) goto loc_8246DC8C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_8246DC8C:
	// bl 0x824781d0
	ctx.lr = 0x8246DC90;
	sub_824781D0(ctx, base);
	// lwz r11,12(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 12);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8246dc18
	if (ctx.cr6.lt) goto loc_8246DC18;
loc_8246DCA4:
	// lwz r11,260(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 260);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x8246dcc8
	goto loc_8246DCC8;
loc_8246DCB4:
	// lwz r11,260(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 260);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r9,r10,28,0,11
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFF00000) | (ctx.r9.u64 & 0xFFFFFFFF000FFFFF);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_8246DCC8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8246DCCC:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_824A9C98) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x824A9CA0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82469dc0
	ctx.lr = 0x824A9CAC;
	sub_82469DC0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824a9d4c
	if (ctx.cr0.lt) goto loc_824A9D4C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8245fcb8
	ctx.lr = 0x824A9CBC;
	sub_8245FCB8(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// lwz r28,12(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x824a9d10
	if (ctx.cr6.eq) goto loc_824A9D10;
	// li r29,0
	r29.s64 = 0;
loc_824A9CD0:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwzx r11,r11,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// stw r30,256(r31)
	REX_STORE_U32(r31.u32 + 256, r30.u32);
	// stw r11,260(r31)
	REX_STORE_U32(r31.u32 + 260, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824a9d00
	if (ctx.cr0.eq) goto loc_824A9D00;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824a8ad8
	ctx.lr = 0x824A9CF8;
	sub_824A8AD8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824a9d4c
	if (ctx.cr0.lt) goto loc_824A9D4C;
loc_824A9D00:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(r30.u32, r28.u32, ctx.xer);
	// blt cr6,0x824a9cd0
	if (ctx.cr6.lt) goto loc_824A9CD0;
loc_824A9D10:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82482568
	ctx.lr = 0x824A9D18;
	sub_82482568(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824a9d4c
	if (ctx.cr0.lt) goto loc_824A9D4C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824856b0
	ctx.lr = 0x824A9D28;
	sub_824856B0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824a9d4c
	if (ctx.cr0.lt) goto loc_824A9D4C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8247d160
	ctx.lr = 0x824A9D38;
	sub_8247D160(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824a9d4c
	if (ctx.cr0.lt) goto loc_824A9D4C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8245fcb8
	ctx.lr = 0x824A9D48;
	sub_8245FCB8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_824A9D4C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_824ACD88) {
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
	ctx.lr = 0x824ACD90;
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,260(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// clrlwi r16,r11,12
	r16.u64 = ctx.r11.u32 & 0xFFFFF;
	// beq cr6,0x824ad490
	if (ctx.cr6.eq) goto loc_824AD490;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824ad490
	if (ctx.cr6.eq) goto loc_824AD490;
	// lwz r10,4(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 4);
	// rlwinm r9,r11,0,0,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// li r21,0
	r21.s64 = 0;
	// lhz r11,202(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 202);
	// lis r8,20480
	ctx.r8.s64 = 1342177280;
	// divwu r19,r10,r16
	r19.u64 = uint32_t(r16.u32 ? ctx.r10.u32 / r16.u32 : 0);
	// twllei r16,0
	if (r16.s32 == 0 || r16.u32 < 0u) ppc_trap(ctx, base, 0);
	// mr r27,r21
	r27.u64 = r21.u64;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x824ad474
	if (ctx.cr6.eq) goto loc_824AD474;
	// lwz r31,12(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 12);
	// cmplw cr6,r31,r16
	ctx.cr6.compare<uint32_t>(r31.u32, r16.u32, ctx.xer);
	// bne cr6,0x824ad474
	if (!ctx.cr6.eq) goto loc_824AD474;
	// mr r15,r21
	r15.u64 = r21.u64;
	// cmplwi cr6,r11,260
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 260, ctx.xer);
	// beq cr6,0x824ace4c
	if (ctx.cr6.eq) goto loc_824ACE4C;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x824ac008
	ctx.lr = 0x824ACDFC;
	sub_824AC008(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x824ace4c
	if (ctx.cr0.eq) goto loc_824ACE4C;
	// mr r10,r21
	ctx.r10.u64 = r21.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x824ace4c
	if (ctx.cr6.eq) goto loc_824ACE4C;
	// lwz r9,20(r18)
	ctx.r9.u64 = REX_LOAD_U32(r18.u32 + 20);
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
loc_824ACE18:
	// lwz r8,16(r28)
	ctx.r8.u64 = REX_LOAD_U32(r28.u32 + 16);
	// lwzx r8,r8,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwz r8,16(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// cmplwi cr6,r8,3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 3, ctx.xer);
	// bne cr6,0x824ace3c
	if (!ctx.cr6.eq) goto loc_824ACE3C;
	// li r27,1
	r27.s64 = 1;
	// li r15,1
	r15.s64 = 1;
loc_824ACE3C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, ctx.xer);
	// blt cr6,0x824ace18
	if (ctx.cr6.lt) goto loc_824ACE18;
loc_824ACE4C:
	// mr r30,r21
	r30.u64 = r21.u64;
	// li r24,-1
	r24.s64 = -1;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(r19.u32, 0, ctx.xer);
	// beq cr6,0x824acf58
	if (ctx.cr6.eq) goto loc_824ACF58;
	// mr r29,r21
	r29.u64 = r21.u64;
	// addi r31,r1,80
	r31.s64 = ctx.r1.s64 + 80;
loc_824ACE64:
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// stw r24,0(r31)
	REX_STORE_U32(r31.u32 + 0, r24.u32);
	// stw r24,4(r31)
	REX_STORE_U32(r31.u32 + 4, r24.u32);
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// stw r24,8(r31)
	REX_STORE_U32(r31.u32 + 8, r24.u32);
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(r16.u32, 0, ctx.xer);
	// stw r24,12(r31)
	REX_STORE_U32(r31.u32 + 12, r24.u32);
	// std r24,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, r24.u64);
	// std r24,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, r24.u64);
	// beq cr6,0x824acf28
	if (ctx.cr6.eq) goto loc_824ACF28;
	// lwz r8,260(r18)
	ctx.r8.u64 = REX_LOAD_U32(r18.u32 + 260);
	// rlwinm r4,r30,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,20(r18)
	ctx.r7.u64 = REX_LOAD_U32(r18.u32 + 20);
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
	// lwz r6,16(r18)
	ctx.r6.u64 = REX_LOAD_U32(r18.u32 + 16);
	// mtctr r16
	ctx.ctr.u64 = r16.u64;
loc_824ACEA4:
	// add r10,r29,r5
	ctx.r10.u64 = r29.u64 + ctx.r5.u64;
	// lwz r9,8(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r3,16(r8)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r3,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r7
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// lwzx r10,r10,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// lwz r9,16(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// lwz r3,4(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r3,r6
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r6.u32);
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm. r3,r3,0,23,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x824acefc
	if (ctx.cr0.eq) goto loc_824ACEFC;
	// add r10,r4,r9
	ctx.r10.u64 = ctx.r4.u64 + ctx.r9.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r10,r3
	REX_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r9.u32);
	// b 0x824acf10
	goto loc_824ACF10;
loc_824ACEFC:
	// add r3,r4,r9
	ctx.r3.u64 = ctx.r4.u64 + ctx.r9.u64;
	// lwz r10,16(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// addi r26,r1,80
	r26.s64 = ctx.r1.s64 + 80;
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r3,r26
	REX_STORE_U32(ctx.r3.u32 + r26.u32, ctx.r10.u32);
loc_824ACF10:
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stwx r21,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, r21.u32);
	// bdnz 0x824acea4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824ACEA4;
loc_824ACF28:
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824abf68
	ctx.lr = 0x824ACF38;
	sub_824ABF68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x824acf44
	if (!ctx.cr0.eq) goto loc_824ACF44;
	// li r27,1
	r27.s64 = 1;
loc_824ACF44:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// add r29,r29,r16
	r29.u64 = r29.u64 + r16.u64;
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// cmplw cr6,r30,r19
	ctx.cr6.compare<uint32_t>(r30.u32, r19.u32, ctx.xer);
	// blt cr6,0x824ace64
	if (ctx.cr6.lt) goto loc_824ACE64;
loc_824ACF58:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq cr6,0x824ad450
	if (ctx.cr6.eq) goto loc_824AD450;
	// mr r17,r21
	r17.u64 = r21.u64;
	// mr r20,r21
	r20.u64 = r21.u64;
	// cmplwi cr6,r16,4
	ctx.cr6.compare<uint32_t>(r16.u32, 4, ctx.xer);
	// bne cr6,0x824ad234
	if (!ctx.cr6.eq) goto loc_824AD234;
	// li r29,1
	r29.s64 = 1;
	// mr r26,r21
	r26.u64 = r21.u64;
	// addi r31,r1,144
	r31.s64 = ctx.r1.s64 + 144;
	// li r30,-1
	r30.s64 = -1;
loc_824ACF80:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x824ad018
	if (ctx.cr6.eq) goto loc_824AD018;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// mr r29,r21
	r29.u64 = r21.u64;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(r19.u32, 0, ctx.xer);
	// std r21,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, r21.u64);
	// std r21,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, r21.u64);
	// stw r24,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r24.u32);
	// stw r24,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, r24.u32);
	// stw r24,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, r24.u32);
	// stw r24,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, r24.u32);
	// stw r30,-16(r31)
	REX_STORE_U32(r31.u32 + -16, r30.u32);
	// stw r21,0(r31)
	REX_STORE_U32(r31.u32 + 0, r21.u32);
	// beq cr6,0x824acfec
	if (ctx.cr6.eq) goto loc_824ACFEC;
	// addi r27,r1,80
	r27.s64 = ctx.r1.s64 + 80;
	// mr r28,r19
	r28.u64 = r19.u64;
loc_824ACFC4:
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824abf68
	ctx.lr = 0x824ACFD4;
	sub_824ABF68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x824acfe0
	if (!ctx.cr0.eq) goto loc_824ACFE0;
	// li r29,1
	r29.s64 = 1;
loc_824ACFE0:
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// addi r27,r27,16
	r27.s64 = r27.s64 + 16;
	// bne 0x824acfc4
	if (!ctx.cr0.eq) goto loc_824ACFC4;
loc_824ACFEC:
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(r15.s32, 0, ctx.xer);
	// beq cr6,0x824ad000
	if (ctx.cr6.eq) goto loc_824AD000;
	// cmplwi cr6,r26,3
	ctx.cr6.compare<uint32_t>(r26.u32, 3, ctx.xer);
	// beq cr6,0x824ad000
	if (ctx.cr6.eq) goto loc_824AD000;
	// li r29,1
	r29.s64 = 1;
loc_824AD000:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x824ad0b8
	if (ctx.cr6.eq) goto loc_824AD0B8;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplwi cr6,r26,4
	ctx.cr6.compare<uint32_t>(r26.u32, 4, ctx.xer);
	// blt cr6,0x824acf80
	if (ctx.cr6.lt) goto loc_824ACF80;
loc_824AD018:
	// li r25,1
	r25.s64 = 1;
	// mr r22,r21
	r22.u64 = r21.u64;
	// addi r28,r1,144
	r28.s64 = ctx.r1.s64 + 144;
loc_824AD024:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// beq cr6,0x824ad1b8
	if (ctx.cr6.eq) goto loc_824AD1B8;
	// mr r23,r21
	r23.u64 = r21.u64;
	// addi r31,r1,144
	r31.s64 = ctx.r1.s64 + 144;
loc_824AD034:
	// cmplw cr6,r23,r22
	ctx.cr6.compare<uint32_t>(r23.u32, r22.u32, ctx.xer);
	// beq cr6,0x824ad190
	if (ctx.cr6.eq) goto loc_824AD190;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// mr r25,r21
	r25.u64 = r21.u64;
	// mr r26,r21
	r26.u64 = r21.u64;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(r19.u32, 0, ctx.xer);
	// std r21,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, r21.u64);
	// std r21,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, r21.u64);
	// stw r24,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r24.u32);
	// stw r24,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, r24.u32);
	// stw r24,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, r24.u32);
	// stw r24,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, r24.u32);
	// stw r30,-16(r28)
	REX_STORE_U32(r28.u32 + -16, r30.u32);
	// stw r30,-16(r31)
	REX_STORE_U32(r31.u32 + -16, r30.u32);
	// stw r21,0(r28)
	REX_STORE_U32(r28.u32 + 0, r21.u32);
	// stw r21,0(r31)
	REX_STORE_U32(r31.u32 + 0, r21.u32);
	// beq cr6,0x824ad104
	if (ctx.cr6.eq) goto loc_824AD104;
	// addi r29,r1,80
	r29.s64 = ctx.r1.s64 + 80;
	// mr r27,r19
	r27.u64 = r19.u64;
loc_824AD084:
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824abf68
	ctx.lr = 0x824AD094;
	sub_824ABF68(ctx, base);
	// mr r14,r3
	r14.u64 = ctx.r3.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824abf68
	ctx.lr = 0x824AD0A8;
	sub_824ABF68(ctx, base);
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(r14.s32, 0, ctx.xer);
	// bne cr6,0x824ad0ec
	if (!ctx.cr6.eq) goto loc_824AD0EC;
	// li r26,1
	r26.s64 = 1;
	// b 0x824ad0f4
	goto loc_824AD0F4;
loc_824AD0B8:
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x82467e50
	ctx.lr = 0x824AD0CC;
	sub_82467E50(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824ad494
	if (ctx.cr0.lt) goto loc_824AD494;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x82467e50
	ctx.lr = 0x824AD0E8;
	sub_82467E50(ctx, base);
	// b 0x824ad45c
	goto loc_824AD45C;
loc_824AD0EC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x824ad0f8
	if (!ctx.cr6.eq) goto loc_824AD0F8;
loc_824AD0F4:
	// li r25,1
	r25.s64 = 1;
loc_824AD0F8:
	// addic. r27,r27,-1
	ctx.xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// addi r29,r29,16
	r29.s64 = r29.s64 + 16;
	// bne 0x824ad084
	if (!ctx.cr0.eq) goto loc_824AD084;
loc_824AD104:
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(r15.s32, 0, ctx.xer);
	// beq cr6,0x824ad110
	if (ctx.cr6.eq) goto loc_824AD110;
	// li r25,1
	r25.s64 = 1;
loc_824AD110:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// beq cr6,0x824ad1a4
	if (ctx.cr6.eq) goto loc_824AD1A4;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// bne cr6,0x824ad190
	if (!ctx.cr6.eq) goto loc_824AD190;
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(r15.s32, 0, ctx.xer);
	// beq cr6,0x824ad134
	if (ctx.cr6.eq) goto loc_824AD134;
	// lwz r11,140(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824ad190
	if (ctx.cr6.eq) goto loc_824AD190;
loc_824AD134:
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// li r20,1
	r20.s64 = 1;
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r5,8(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r7,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// stw r6,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// stw r5,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r5.u32);
	// stw r11,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// stw r24,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, r24.u32);
	// stw r24,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, r24.u32);
	// stw r24,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, r24.u32);
	// stw r24,12(r9)
	REX_STORE_U32(ctx.r9.u32 + 12, r24.u32);
	// stw r24,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, r24.u32);
	// stw r24,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, r24.u32);
	// stw r24,8(r8)
	REX_STORE_U32(ctx.r8.u32 + 8, r24.u32);
	// stw r24,12(r8)
	REX_STORE_U32(ctx.r8.u32 + 12, r24.u32);
	// stw r21,32(r28)
	REX_STORE_U32(r28.u32 + 32, r21.u32);
	// stw r21,48(r31)
	REX_STORE_U32(r31.u32 + 48, r21.u32);
loc_824AD190:
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplwi cr6,r23,4
	ctx.cr6.compare<uint32_t>(r23.u32, 4, ctx.xer);
	// blt cr6,0x824ad034
	if (ctx.cr6.lt) goto loc_824AD034;
	// b 0x824ad1a8
	goto loc_824AD1A8;
loc_824AD1A4:
	// li r17,1
	r17.s64 = 1;
loc_824AD1A8:
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmplwi cr6,r22,4
	ctx.cr6.compare<uint32_t>(r22.u32, 4, ctx.xer);
	// blt cr6,0x824ad024
	if (ctx.cr6.lt) goto loc_824AD024;
loc_824AD1B8:
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(r17.s32, 0, ctx.xer);
	// beq cr6,0x824ad1e4
	if (ctx.cr6.eq) goto loc_824AD1E4;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x82467e50
	ctx.lr = 0x824AD1D4;
	sub_82467E50(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824ad494
	if (ctx.cr0.lt) goto loc_824AD494;
	// li r6,4
	ctx.r6.s64 = 4;
	// b 0x824ad3bc
	goto loc_824AD3BC;
loc_824AD1E4:
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// beq cr6,0x824ad3dc
	if (ctx.cr6.eq) goto loc_824AD3DC;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// li r17,1
	r17.s64 = 1;
	// bl 0x82467e50
	ctx.lr = 0x824AD204;
	sub_82467E50(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824ad494
	if (ctx.cr0.lt) goto loc_824AD494;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x82467e50
	ctx.lr = 0x824AD220;
	sub_82467E50(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824ad494
	if (ctx.cr0.lt) goto loc_824AD494;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// b 0x824ad3c0
	goto loc_824AD3C0;
loc_824AD234:
	// cmplwi cr6,r16,3
	ctx.cr6.compare<uint32_t>(r16.u32, 3, ctx.xer);
	// bne cr6,0x824ad3dc
	if (!ctx.cr6.eq) goto loc_824AD3DC;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r30,-1
	r30.s64 = -1;
	// mr r10,r21
	ctx.r10.u64 = r21.u64;
	// mr r25,r30
	r25.u64 = r30.u64;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_824AD254:
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x824ad264
	if (!ctx.cr6.eq) goto loc_824AD264;
	// mr r25,r10
	r25.u64 = ctx.r10.u64;
loc_824AD264:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x824ad254
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824AD254;
	// mr r22,r21
	r22.u64 = r21.u64;
	// addi r26,r1,144
	r26.s64 = ctx.r1.s64 + 144;
loc_824AD278:
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(r17.s32, 0, ctx.xer);
	// bne cr6,0x824ad39c
	if (!ctx.cr6.eq) goto loc_824AD39C;
	// mr r23,r21
	r23.u64 = r21.u64;
	// addi r27,r1,144
	r27.s64 = ctx.r1.s64 + 144;
loc_824AD288:
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(r17.s32, 0, ctx.xer);
	// bne cr6,0x824ad384
	if (!ctx.cr6.eq) goto loc_824AD384;
	// cmplw cr6,r23,r22
	ctx.cr6.compare<uint32_t>(r23.u32, r22.u32, ctx.xer);
	// beq cr6,0x824ad374
	if (ctx.cr6.eq) goto loc_824AD374;
	// cmplw cr6,r23,r25
	ctx.cr6.compare<uint32_t>(r23.u32, r25.u32, ctx.xer);
	// beq cr6,0x824ad374
	if (ctx.cr6.eq) goto loc_824AD374;
	// cmplw cr6,r22,r25
	ctx.cr6.compare<uint32_t>(r22.u32, r25.u32, ctx.xer);
	// beq cr6,0x824ad374
	if (ctx.cr6.eq) goto loc_824AD374;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// rlwinm r9,r25,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// mr r29,r21
	r29.u64 = r21.u64;
	// std r24,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, r24.u64);
	// mr r31,r21
	r31.u64 = r21.u64;
	// std r24,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, r24.u64);
	// stw r21,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r21.u32);
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(r19.u32, 0, ctx.xer);
	// stw r21,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, r21.u32);
	// stw r21,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, r21.u32);
	// stw r21,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, r21.u32);
	// stw r21,-16(r26)
	REX_STORE_U32(r26.u32 + -16, r21.u32);
	// stw r21,-16(r27)
	REX_STORE_U32(r27.u32 + -16, r21.u32);
	// stw r30,0(r26)
	REX_STORE_U32(r26.u32 + 0, r30.u32);
	// stw r30,0(r27)
	REX_STORE_U32(r27.u32 + 0, r30.u32);
	// stwx r30,r9,r8
	REX_STORE_U32(ctx.r9.u32 + ctx.r8.u32, r30.u32);
	// beq cr6,0x824ad32c
	if (ctx.cr6.eq) goto loc_824AD32C;
	// addi r28,r1,80
	r28.s64 = ctx.r1.s64 + 80;
loc_824AD2F8:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne cr6,0x824ad32c
	if (!ctx.cr6.eq) goto loc_824AD32C;
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824abf68
	ctx.lr = 0x824AD310;
	sub_824ABF68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x824ad31c
	if (!ctx.cr0.eq) goto loc_824AD31C;
	// li r29,1
	r29.s64 = 1;
loc_824AD31C:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r28,r28,16
	r28.s64 = r28.s64 + 16;
	// cmplw cr6,r31,r19
	ctx.cr6.compare<uint32_t>(r31.u32, r19.u32, ctx.xer);
	// blt cr6,0x824ad2f8
	if (ctx.cr6.lt) goto loc_824AD2F8;
loc_824AD32C:
	// lwz r11,140(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824ad368
	if (!ctx.cr6.eq) goto loc_824AD368;
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824ad35c
	if (ctx.cr6.eq) goto loc_824AD35C;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824ad35c
	if (ctx.cr6.eq) goto loc_824AD35C;
	// lwz r11,136(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824ad368
	if (!ctx.cr6.eq) goto loc_824AD368;
loc_824AD35C:
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(r15.s32, 0, ctx.xer);
	// beq cr6,0x824ad368
	if (ctx.cr6.eq) goto loc_824AD368;
	// li r29,1
	r29.s64 = 1;
loc_824AD368:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne cr6,0x824ad374
	if (!ctx.cr6.eq) goto loc_824AD374;
	// li r17,1
	r17.s64 = 1;
loc_824AD374:
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// cmplwi cr6,r23,4
	ctx.cr6.compare<uint32_t>(r23.u32, 4, ctx.xer);
	// blt cr6,0x824ad288
	if (ctx.cr6.lt) goto loc_824AD288;
loc_824AD384:
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// cmplwi cr6,r22,4
	ctx.cr6.compare<uint32_t>(r22.u32, 4, ctx.xer);
	// blt cr6,0x824ad278
	if (ctx.cr6.lt) goto loc_824AD278;
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(r17.s32, 0, ctx.xer);
	// beq cr6,0x824ad3dc
	if (ctx.cr6.eq) goto loc_824AD3DC;
loc_824AD39C:
	// li r6,3
	ctx.r6.s64 = 3;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x82467e50
	ctx.lr = 0x824AD3B0;
	sub_82467E50(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824ad494
	if (ctx.cr0.lt) goto loc_824AD494;
	// li r6,3
	ctx.r6.s64 = 3;
loc_824AD3BC:
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
loc_824AD3C0:
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x82467e50
	ctx.lr = 0x824AD3CC;
	sub_82467E50(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824ad494
	if (ctx.cr0.lt) goto loc_824AD494;
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(r17.s32, 0, ctx.xer);
	// bne cr6,0x824ad464
	if (!ctx.cr6.eq) goto loc_824AD464;
loc_824AD3DC:
	// mr r30,r21
	r30.u64 = r21.u64;
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(r16.u32, 0, ctx.xer);
	// beq cr6,0x824ad464
	if (ctx.cr6.eq) goto loc_824AD464;
	// mr r31,r21
	r31.u64 = r21.u64;
loc_824AD3EC:
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lwz r10,260(r18)
	ctx.r10.u64 = REX_LOAD_U32(r18.u32 + 260);
	// lwz r9,20(r18)
	ctx.r9.u64 = REX_LOAD_U32(r18.u32 + 20);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// mr r6,r16
	ctx.r6.u64 = r16.u64;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// std r24,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, r24.u64);
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// std r24,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, r24.u64);
	// lwz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r21,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, r21.u32);
	// bl 0x82467e50
	ctx.lr = 0x824AD434;
	sub_82467E50(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824ad494
	if (ctx.cr0.lt) goto loc_824AD494;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r30,r16
	ctx.cr6.compare<uint32_t>(r30.u32, r16.u32, ctx.xer);
	// blt cr6,0x824ad3ec
	if (ctx.cr6.lt) goto loc_824AD3EC;
	// b 0x824ad464
	goto loc_824AD464;
loc_824AD450:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x82478998
	ctx.lr = 0x824AD45C;
	sub_82478998(ctx, base);
loc_824AD45C:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824ad494
	if (ctx.cr0.lt) goto loc_824AD494;
loc_824AD464:
	// lwz r11,260(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 260);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// stw r21,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r21.u32);
	// b 0x824ad494
	goto loc_824AD494;
loc_824AD474:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x82478998
	ctx.lr = 0x824AD480;
	sub_82478998(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824ad494
	if (ctx.cr0.lt) goto loc_824AD494;
	// lwz r11,260(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 260);
	// stw r21,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r21.u32);
loc_824AD490:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824AD494:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_824D5280) {
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
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x824d5010
	ctx.lr = 0x824D529C;
	sub_824D5010(ctx, base);
	// li r11,16
	ctx.r11.s64 = 16;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_824D52A4:
	// lvx128 v63,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v63,v63,3
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x0));
	// stvx128 v63,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// bdnz 0x824d52a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824D52A4;
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

DEFINE_REX_FUNC(sub_824D7B08) {
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
	ctx.lr = 0x824D7B10;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r11,21268
	ctx.r4.s64 = ctx.r11.s64 + 21268;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x824eac90
	ctx.lr = 0x824D7B2C;
	sub_824EAC90(ctx, base);
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// mr r24,r31
	r24.u64 = r31.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x824d7be8
	if (ctx.cr0.eq) goto loc_824D7BE8;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r31,r9,17936
	r31.s64 = ctx.r9.s64 + 17936;
	// addi r29,r8,29180
	r29.s64 = ctx.r8.s64 + 29180;
	// addi r28,r7,29172
	r28.s64 = ctx.r7.s64 + 29172;
	// addi r27,r6,29204
	r27.s64 = ctx.r6.s64 + 29204;
	// addi r26,r10,29188
	r26.s64 = ctx.r10.s64 + 29188;
	// addi r25,r11,29196
	r25.s64 = ctx.r11.s64 + 29196;
loc_824D7B6C:
	// lbz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U8(r24.u32 + 0);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// cmpwi cr6,r5,34
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 34, ctx.xer);
	// beq cr6,0x824d7bd0
	if (ctx.cr6.eq) goto loc_824D7BD0;
	// cmpwi cr6,r5,38
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 38, ctx.xer);
	// beq cr6,0x824d7bc8
	if (ctx.cr6.eq) goto loc_824D7BC8;
	// cmpwi cr6,r5,39
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 39, ctx.xer);
	// beq cr6,0x824d7bc0
	if (ctx.cr6.eq) goto loc_824D7BC0;
	// cmpwi cr6,r5,60
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 60, ctx.xer);
	// beq cr6,0x824d7bb0
	if (ctx.cr6.eq) goto loc_824D7BB0;
	// cmpwi cr6,r5,62
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 62, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// beq cr6,0x824d7ba8
	if (ctx.cr6.eq) goto loc_824D7BA8;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// b 0x824d7bd8
	goto loc_824D7BD8;
loc_824D7BA8:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// b 0x824d7bb8
	goto loc_824D7BB8;
loc_824D7BB0:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
loc_824D7BB4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_824D7BB8:
	// bl 0x824eac90
	ctx.lr = 0x824D7BBC;
	sub_824EAC90(ctx, base);
	// b 0x824d7bdc
	goto loc_824D7BDC;
loc_824D7BC0:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// b 0x824d7bb4
	goto loc_824D7BB4;
loc_824D7BC8:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// b 0x824d7bb4
	goto loc_824D7BB4;
loc_824D7BD0:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_824D7BD8:
	// bl 0x824eac90
	ctx.lr = 0x824D7BDC;
	sub_824EAC90(ctx, base);
loc_824D7BDC:
	// lbzu r11,1(r24)
	ea = 1 + r24.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	r24.u32 = ea;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x824d7b6c
	if (!ctx.cr0.eq) goto loc_824D7B6C;
loc_824D7BE8:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,28528
	ctx.r4.s64 = ctx.r11.s64 + 28528;
	// bl 0x824eac90
	ctx.lr = 0x824D7BF8;
	sub_824EAC90(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_824DB538) {
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
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x824db558
	if (ctx.cr6.eq) goto loc_824DB558;
	// lwz r31,48(r5)
	r31.u64 = REX_LOAD_U32(ctx.r5.u32 + 48);
	// b 0x824db55c
	goto loc_824DB55C;
loc_824DB558:
	// li r31,0
	r31.s64 = 0;
loc_824DB55C:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x824db56c
	if (ctx.cr6.eq) goto loc_824DB56C;
	// lwz r11,52(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 52);
	// b 0x824db570
	goto loc_824DB570;
loc_824DB56C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_824DB570:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x824db580
	if (ctx.cr6.eq) goto loc_824DB580;
	// lwz r10,44(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 44);
	// b 0x824db584
	goto loc_824DB584;
loc_824DB580:
	// li r10,0
	ctx.r10.s64 = 0;
loc_824DB584:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x824db594
	if (ctx.cr6.eq) goto loc_824DB594;
	// lwz r9,40(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 40);
	// b 0x824db598
	goto loc_824DB598;
loc_824DB594:
	// li r9,0
	ctx.r9.s64 = 0;
loc_824DB598:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x824db5a8
	if (ctx.cr6.eq) goto loc_824DB5A8;
	// lwz r8,36(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 36);
	// b 0x824db5ac
	goto loc_824DB5AC;
loc_824DB5A8:
	// li r8,0
	ctx.r8.s64 = 0;
loc_824DB5AC:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x824db5bc
	if (ctx.cr6.eq) goto loc_824DB5BC;
	// lwz r7,32(r5)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + 32);
	// b 0x824db5c0
	goto loc_824DB5C0;
loc_824DB5BC:
	// li r7,0
	ctx.r7.s64 = 0;
loc_824DB5C0:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x824db5d0
	if (ctx.cr6.eq) goto loc_824DB5D0;
	// lwz r6,16(r5)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + 16);
	// b 0x824db5d4
	goto loc_824DB5D4;
loc_824DB5D0:
	// li r6,0
	ctx.r6.s64 = 0;
loc_824DB5D4:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x824db5e4
	if (ctx.cr6.eq) goto loc_824DB5E4;
	// lwz r5,0(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// b 0x824db5e8
	goto loc_824DB5E8;
loc_824DB5E4:
	// li r5,0
	ctx.r5.s64 = 0;
loc_824DB5E8:
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x824db310
	ctx.lr = 0x824DB5F4;
	sub_824DB310(ctx, base);
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

DEFINE_REX_FUNC(sub_824DE2C8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lhz r11,4(r5)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r5.u32 + 4);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lhz r11,6(r5)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r5.u32 + 6);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lhz r11,8(r5)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r5.u32 + 8);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lwz r11,16(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// bne cr6,0x824de300
	if (!ctx.cr6.eq) goto loc_824DE300;
	// li r11,0
	ctx.r11.s64 = 0;
loc_824DE300:
	// stw r11,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// lhz r11,6(r6)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r6.u32 + 6);
	// stw r11,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// lhz r11,4(r6)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r6.u32 + 4);
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// lhz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r6.u32 + 0);
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lhz r11,2(r6)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r6.u32 + 2);
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// lhz r11,8(r6)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r6.u32 + 8);
	// stw r11,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// lhz r11,10(r6)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r6.u32 + 10);
	// stw r11,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824E1808) {
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
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r6,36
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 36, ctx.xer);
	// bge cr6,0x824e1838
	if (!ctx.cr6.lt) goto loc_824E1838;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_824E1838:
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824e189c
	if (ctx.cr6.eq) goto loc_824E189C;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x824e189c
	if (ctx.cr6.lt) goto loc_824E189C;
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// blt cr6,0x824e1888
	if (ctx.cr6.lt) goto loc_824E1888;
	// beq cr6,0x824e1870
	if (ctx.cr6.eq) goto loc_824E1870;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x824e189c
	goto loc_824E189C;
loc_824E1870:
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x824e13e0
	ctx.lr = 0x824E1884;
	sub_824E13E0(ctx, base);
	// b 0x824e189c
	goto loc_824E189C;
loc_824E1888:
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x824e1160
	ctx.lr = 0x824E189C;
	sub_824E1160(ctx, base);
loc_824E189C:
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

DEFINE_REX_FUNC(sub_824E5120) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	PPCContext env{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,164(r31)
	REX_STORE_U32(r31.u32 + 164, ctx.r3.u32);
	// stw r4,172(r31)
	REX_STORE_U32(r31.u32 + 172, ctx.r4.u32);
	// stw r5,180(r31)
	REX_STORE_U32(r31.u32 + 180, ctx.r5.u32);
	// stw r6,188(r31)
	REX_STORE_U32(r31.u32 + 188, ctx.r6.u32);
	// stw r7,196(r31)
	REX_STORE_U32(r31.u32 + 196, ctx.r7.u32);
	// stw r8,204(r31)
	REX_STORE_U32(r31.u32 + 204, ctx.r8.u32);
	// stw r9,212(r31)
	REX_STORE_U32(r31.u32 + 212, ctx.r9.u32);
	// lwz r11,196(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 196);
	// stw r11,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r11.u32);
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 204);
	// stw r11,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r11.u32);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r11,r11,16080
	ctx.r11.s64 = ctx.r11.s64 + 16080;
	// stw r11,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r11.u32);
	// addi r11,r31,80
	ctx.r11.s64 = r31.s64 + 80;
	// stw r11,196(r31)
	REX_STORE_U32(r31.u32 + 196, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r11.u32);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// lwz r3,180(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 180);
	// bl 0x824e3dd0
	ctx.lr = 0x824E5188;
	sub_824E3DD0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_824E5190:
	// lwz r5,88(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 88);
	// lwz r4,196(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 196);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x824e3e10
	ctx.lr = 0x824E51A0;
	sub_824E3E10(ctx, base);
	// stw r3,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r3.u32);
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x824e521c
	if (!ctx.cr6.eq) goto loc_824E521C;
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 100);
	// addi r3,r11,1136
	ctx.r3.s64 = ctx.r11.s64 + 1136;
	// bl 0x826a4760
	ctx.lr = 0x824E51BC;
	env = ctx;
	temp.s64 = ppc_setjmp(ctx.r3.u32);
	if (temp.s64 != 0) ctx = env;
	ctx.r3 = temp;
	// stw r3,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r3.u32);
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// stw r11,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r11.u32);
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824e51e4
	if (ctx.cr6.eq) goto loc_824E51E4;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x824e4a80
	ctx.lr = 0x824E51DC;
	sub_824E4A80(ctx, base);
	// stw r3,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r3.u32);
	// b 0x824e521c
	goto loc_824E521C;
loc_824E51E4:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,104(r31)
	REX_STORE_U8(r31.u32 + 104, ctx.r11.u8);
	// lwz r5,88(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 88);
	// lwz r4,196(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 196);
	// lwz r3,100(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 100);
	// bl 0x824e4bf0
	ctx.lr = 0x824E51FC;
	sub_824E4BF0(ctx, base);
	// lwz r8,212(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 212);
	// lwz r7,188(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 188);
	// lwz r6,96(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 96);
	// lwz r5,172(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 172);
	// lwz r4,164(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 164);
	// lwz r3,100(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 100);
	// bl 0x824e4eb8
	ctx.lr = 0x824E5218;
	sub_824E4EB8(ctx, base);
	// b 0x824e5228
	goto loc_824E5228;
loc_824E521C:
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824e5190
	if (ctx.cr6.eq) goto loc_824E5190;
loc_824E5228:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x824e5248
	goto loc_824E5248;
loc_824E5248:
	// lwz r4,92(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 92);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x824e4b60
	ctx.lr = 0x824E5254;
	sub_824E4B60(ctx, base);
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824EE070) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x824EE078;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824ee110
	if (ctx.cr6.eq) goto loc_824EE110;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r30,r11,22852
	r30.s64 = ctx.r11.s64 + 22852;
	// addi r29,r10,-26736
	r29.s64 = ctx.r10.s64 + -26736;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x824ee0c0
	if (!ctx.cr6.eq) goto loc_824EE0C0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r11,-26524
	ctx.r5.s64 = ctx.r11.s64 + -26524;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r7,264
	ctx.r7.s64 = 264;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824EE0C0;
	sub_824EA978(ctx, base);
loc_824EE0C0:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824ee0e8
	if (!ctx.cr6.eq) goto loc_824EE0E8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r11,-26508
	ctx.r5.s64 = ctx.r11.s64 + -26508;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r7,265
	ctx.r7.s64 = 265;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824EE0E8;
	sub_824EA978(ctx, base);
loc_824EE0E8:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r9,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
loc_824EE110:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_824F02C0) {
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
	// lwz r11,68(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 68);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824f030c
	if (ctx.cr6.lt) goto loc_824F030C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r6,r11,23200
	ctx.r6.s64 = ctx.r11.s64 + 23200;
	// addi r5,r10,23128
	ctx.r5.s64 = ctx.r10.s64 + 23128;
	// addi r4,r9,22852
	ctx.r4.s64 = ctx.r9.s64 + 22852;
	// li r7,309
	ctx.r7.s64 = 309;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824F030C;
	sub_824EA978(ctx, base);
loc_824F030C:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
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

DEFINE_REX_FUNC(sub_824F21B8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x824F21C0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824f2390
	if (ctx.cr6.eq) goto loc_824F2390;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824f1a90
	ctx.lr = 0x824F21D8;
	sub_824F1A90(ctx, base);
	// lwz r3,72(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 72);
	// bl 0x824ee250
	ctx.lr = 0x824F21E0;
	sub_824EE250(ctx, base);
	// lwz r3,108(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 108);
	// bl 0x825af558
	ctx.lr = 0x824F21E8;
	sub_825AF558(ctx, base);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r31,r9,22852
	r31.s64 = ctx.r9.s64 + 22852;
	// addi r30,r10,-24032
	r30.s64 = ctx.r10.s64 + -24032;
	// addi r29,r11,-24720
	r29.s64 = ctx.r11.s64 + -24720;
	// beq 0x824f2220
	if (ctx.cr0.eq) goto loc_824F2220;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r7,546
	ctx.r7.s64 = 546;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824F2220;
	sub_824EA978(ctx, base);
loc_824F2220:
	// lwz r3,104(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 104);
	// bl 0x825a3ef0
	ctx.lr = 0x824F2228;
	sub_825A3EF0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x824f2248
	if (ctx.cr0.eq) goto loc_824F2248;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r7,549
	ctx.r7.s64 = 549;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824F2248;
	sub_824EA978(ctx, base);
loc_824F2248:
	// lwz r3,100(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 100);
	// bl 0x825a2488
	ctx.lr = 0x824F2250;
	sub_825A2488(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x824f2270
	if (ctx.cr0.eq) goto loc_824F2270;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r7,552
	ctx.r7.s64 = 552;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824F2270;
	sub_824EA978(ctx, base);
loc_824F2270:
	// lwz r3,96(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 96);
	// bl 0x824f3148
	ctx.lr = 0x824F2278;
	sub_824F3148(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x824f2298
	if (ctx.cr0.eq) goto loc_824F2298;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r7,555
	ctx.r7.s64 = 555;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824F2298;
	sub_824EA978(ctx, base);
loc_824F2298:
	// lwz r3,88(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 88);
	// bl 0x825af558
	ctx.lr = 0x824F22A0;
	sub_825AF558(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x824f22c0
	if (ctx.cr0.eq) goto loc_824F22C0;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r7,558
	ctx.r7.s64 = 558;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824F22C0;
	sub_824EA978(ctx, base);
loc_824F22C0:
	// lwz r3,84(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 84);
	// bl 0x824f28f8
	ctx.lr = 0x824F22C8;
	sub_824F28F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x824f22e8
	if (ctx.cr0.eq) goto loc_824F22E8;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r7,561
	ctx.r7.s64 = 561;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824F22E8;
	sub_824EA978(ctx, base);
loc_824F22E8:
	// lwz r3,80(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 80);
	// bl 0x825a4fb0
	ctx.lr = 0x824F22F0;
	sub_825A4FB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x824f2310
	if (ctx.cr0.eq) goto loc_824F2310;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r7,564
	ctx.r7.s64 = 564;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824F2310;
	sub_824EA978(ctx, base);
loc_824F2310:
	// lwz r3,200(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 200);
	// bl 0x825a5818
	ctx.lr = 0x824F2318;
	sub_825A5818(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x824f2338
	if (ctx.cr0.eq) goto loc_824F2338;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r7,567
	ctx.r7.s64 = 567;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824F2338;
	sub_824EA978(ctx, base);
loc_824F2338:
	// lwz r3,92(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 92);
	// bl 0x825a1020
	ctx.lr = 0x824F2340;
	sub_825A1020(ctx, base);
	// lwz r3,112(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 112);
	// bl 0x825a2928
	ctx.lr = 0x824F2348;
	sub_825A2928(ctx, base);
	// lwz r3,116(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 116);
	// bl 0x825a2b78
	ctx.lr = 0x824F2350;
	sub_825A2B78(ctx, base);
	// lwz r3,120(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 120);
	// bl 0x825a2db8
	ctx.lr = 0x824F2358;
	sub_825A2DB8(ctx, base);
	// lwz r11,24(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 24);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,16(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824F236C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x824f238c
	if (ctx.cr0.eq) goto loc_824F238C;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r7,580
	ctx.r7.s64 = 580;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824F238C;
	sub_824EA978(ctx, base);
loc_824F238C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_824F2390:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_825031D8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x825031E0;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825022d0
	ctx.lr = 0x825031F4;
	sub_825022D0(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82503260
	if (!ctx.cr0.eq) goto loc_82503260;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82503260
	if (ctx.cr0.eq) goto loc_82503260;
loc_8250320C:
	// lwz r11,44(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 44);
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82503224
	if (ctx.cr0.eq) goto loc_82503224;
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x82503228
	if (ctx.cr0.eq) goto loc_82503228;
loc_82503224:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82503228:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// rlwinm r5,r11,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82502650
	ctx.lr = 0x82503244;
	sub_82502650(ctx, base);
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82503260
	if (!ctx.cr0.eq) goto loc_82503260;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8250320c
	if (!ctx.cr6.eq) goto loc_8250320C;
loc_82503260:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// li r30,0
	r30.s64 = 0;
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
	// lwz r31,20(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82503358
	if (!ctx.cr0.eq) goto loc_82503358;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq 0x82503358
	if (ctx.cr0.eq) goto loc_82503358;
loc_8250328C:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,16000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16000, ctx.xer);
	// bne cr6,0x825032c0
	if (!ctx.cr6.eq) goto loc_825032C0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f7708
	ctx.lr = 0x825032A4;
	sub_824F7708(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825032c0
	if (ctx.cr0.eq) goto loc_825032C0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825c2288
	ctx.lr = 0x825032C0;
	sub_825C2288(ctx, base);
loc_825032C0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82503308
	if (ctx.cr6.eq) goto loc_82503308;
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
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
	// bne cr6,0x825032f8
	if (!ctx.cr6.eq) goto loc_825032F8;
loc_825032E8:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r30,r31
	r30.u64 = r31.u64;
	// lwz r31,40(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// b 0x82503348
	goto loc_82503348;
loc_825032F8:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82503358
	if (!ctx.cr0.eq) goto loc_82503358;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// b 0x82503350
	goto loc_82503350;
loc_82503308:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 & ctx.r11.u64;
	// lwz r9,20(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// addic r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// subfe r8,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ctx.r9.u64;
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x825032e8
	if (ctx.cr6.eq) goto loc_825032E8;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// lwz r31,20(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
loc_82503348:
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82503358
	if (!ctx.cr0.eq) goto loc_82503358;
loc_82503350:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8250328c
	if (!ctx.cr6.eq) goto loc_8250328C;
loc_82503358:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82516B38) {
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
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm. r10,r11,0,13,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x70000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// beq 0x82516b78
	if (ctx.cr0.eq) goto loc_82516B78;
	// lwz r10,8(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm r10,r10,31,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0xF;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// andc r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ~ctx.r9.u64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
loc_82516B78:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825164c0
	ctx.lr = 0x82516B84;
	sub_825164C0(ctx, base);
	// lwz r11,688(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 688);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
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

DEFINE_REX_FUNC(sub_8251E5F0) {
	REX_FUNC_PROLOGUE();
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// clrlwi r10,r4,27
	ctx.r10.u64 = ctx.r4.u32 & 0x1F;
	// rlwinm r11,r4,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x7FFFFFF;
	// slw r10,r3,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r10.u8 & 0x3F));
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
loc_8251E614:
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// andc. r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 & ~ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8251e638
	if (!ctx.cr0.eq) goto loc_8251E638;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8251e614
	if (ctx.cr6.lt) goto loc_8251E614;
	// blr 
	return;
loc_8251E638:
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// rlwinm r9,r11,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// andc r11,r10,r7
	ctx.r11.u64 = ctx.r10.u64 & ~ctx.r7.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subfic r11,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	ctx.r11.u64 = static_cast<uint64_t>(31) - ctx.r11.u64;
	// rlwinm r10,r11,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// add r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 + ctx.r11.u64;
	// srw r11,r8,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82520388) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82520390;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// add r29,r4,r5
	r29.u64 = ctx.r4.u64 + ctx.r5.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r29
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, r29.u32, ctx.xer);
	// bge cr6,0x82520404
	if (!ctx.cr6.lt) goto loc_82520404;
loc_825203A8:
	// rlwinm r11,r31,26,6,31
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 26) & 0x3FFFFFF;
	// clrldi r10,r31,58
	ctx.r10.u64 = r31.u64 & 0x3F;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r9,2
	ctx.r9.s64 = 2;
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// sld r11,r9,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r10.u8 & 0x7F));
	// ldx r9,r8,r30
	ctx.r9.u64 = REX_LOAD_U64(ctx.r8.u32 + r30.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r8,-1
	ctx.r8.s64 = -1;
	// and r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	// sld r9,r8,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r10.u8 & 0x7F));
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// srd r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r10.u8 & 0x7F));
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// subfic r4,r11,1
	ctx.xer.ca = ctx.r11.u32 <= 1;
	ctx.r4.u64 = static_cast<uint64_t>(1) - ctx.r11.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x825203f8
	if (ctx.cr6.eq) goto loc_825203F8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwimi r4,r31,4,0,27
	ctx.r4.u64 = (__builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 4) & 0xFFFFFFF0) | (ctx.r4.u64 & 0xFFFFFFFF0000000F);
	// bl 0x8251f058
	ctx.lr = 0x825203F8;
	sub_8251F058(ctx, base);
loc_825203F8:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(r31.u32, r29.u32, ctx.xer);
	// blt cr6,0x825203a8
	if (ctx.cr6.lt) goto loc_825203A8;
loc_82520404:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82525F50) {
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
	ctx.lr = 0x82525F58;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r18,44(r4)
	r18.u64 = REX_LOAD_U32(ctx.r4.u32 + 44);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r21,48(r4)
	r21.u64 = REX_LOAD_U32(ctx.r4.u32 + 48);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// mr r15,r5
	r15.u64 = ctx.r5.u64;
	// lwz r24,28(r4)
	r24.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// lwz r10,12(r18)
	ctx.r10.u64 = REX_LOAD_U32(r18.u32 + 12);
	// li r22,1
	r22.s64 = 1;
	// lwz r16,12(r21)
	r16.u64 = REX_LOAD_U32(r21.u32 + 12);
	// rlwinm. r11,r11,25,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lwz r10,8(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// beq 0x82525fac
	if (ctx.cr0.eq) goto loc_82525FAC;
	// rlwinm r11,r10,18,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x7;
	// slw r11,r22,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (r22.u32 << (ctx.r11.u8 & 0x3F));
	// addi r27,r11,-1
	r27.s64 = ctx.r11.s64 + -1;
	// b 0x82525fb0
	goto loc_82525FB0;
loc_82525FAC:
	// rlwinm r27,r10,31,28,31
	r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0xF;
loc_82525FB0:
	// li r25,0
	r25.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// stw r25,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r25.u32);
	// beq cr6,0x82525fd4
	if (ctx.cr6.eq) goto loc_82525FD4;
	// addi r11,r27,-1
	ctx.r11.s64 = r27.s64 + -1;
	// andc r11,r27,r11
	ctx.r11.u64 = r27.u64 & ~ctx.r11.u64;
	// subf. r11,r11,r27
	ctx.r11.u64 = r27.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
	// beq 0x82525fd8
	if (ctx.cr0.eq) goto loc_82525FD8;
loc_82525FD4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82525FD8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82526028
	if (!ctx.cr0.eq) goto loc_82526028;
	// rlwinm. r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82526028
	if (!ctx.cr0.eq) goto loc_82526028;
	// lis r11,-28311
	ctx.r11.s64 = -1855389696;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,5192
	ctx.r11.u64 = ctx.r11.u64 | 5192;
	// ori r10,r10,36262
	ctx.r10.u64 = ctx.r10.u64 | 36262;
	// clrldi r9,r27,32
	ctx.r9.u64 = r27.u64 & 0xFFFFFFFF;
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
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// clrlwi r6,r11,29
	ctx.r6.u64 = ctx.r11.u32 & 0x7;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825bb9c8
	ctx.lr = 0x82526020;
	sub_825BB9C8(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
loc_82526028:
	// li r19,0
	r19.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x82526304
	if (ctx.cr6.eq) goto loc_82526304;
	// addi r11,r28,-36
	ctx.r11.s64 = r28.s64 + -36;
	// clrlwi r20,r30,24
	r20.u64 = r30.u32 & 0xFF;
	// ori r17,r11,1
	r17.u64 = ctx.r11.u64 | 1;
loc_82526040:
	// addi r11,r27,-1
	ctx.r11.s64 = r27.s64 + -1;
	// li r8,1
	ctx.r8.s64 = 1;
	// andc r11,r27,r11
	ctx.r11.u64 = r27.u64 & ~ctx.r11.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// mr r6,r15
	ctx.r6.u64 = r15.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// subf r27,r11,r27
	r27.u64 = r27.u64 - ctx.r11.u64;
	// subfic r23,r10,31
	ctx.xer.ca = ctx.r10.u32 <= 31;
	r23.u64 = static_cast<uint64_t>(31) - ctx.r10.u64;
	// bl 0x825bb860
	ctx.lr = 0x82526070;
	sub_825BB860(ctx, base);
	// lwz r11,0(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 0);
	// rlwinm r25,r23,1,0,30
	r25.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r10,r11,27,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// srw r10,r10,r25
	ctx.r10.u64 = r25.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (r25.u8 & 0x3F));
	// clrlwi r30,r10,30
	r30.u64 = ctx.r10.u32 & 0x3;
	// clrlwi r14,r11,27
	r14.u64 = ctx.r11.u32 & 0x1F;
	// bl 0x8250ab60
	ctx.lr = 0x82526098;
	sub_8250AB60(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r3,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// rlwimi r10,r22,26,4,6
	ctx.r10.u64 = (__builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 26) & 0xE000000) | (ctx.r10.u64 & 0xFFFFFFFFF1FFFFFF);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x8250a620
	ctx.lr = 0x825260B4;
	sub_8250A620(ctx, base);
	// li r11,224
	ctx.r11.s64 = 224;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// rlwimi r11,r30,2,27,29
	ctx.r11.u64 = (__builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0x1C) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFE3);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// or r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 | r30.u64;
	// lwz r30,88(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm r10,r10,0,27,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFC1F;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// bl 0x82524780
	ctx.lr = 0x825260EC;
	sub_82524780(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82523e00
	ctx.lr = 0x8252610C;
	sub_82523E00(ctx, base);
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 0);
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// rlwinm r10,r11,27,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// srw r10,r10,r25
	ctx.r10.u64 = r25.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (r25.u8 & 0x3F));
	// clrlwi r25,r10,30
	r25.u64 = ctx.r10.u32 & 0x3;
	// beq cr6,0x82526160
	if (ctx.cr6.eq) goto loc_82526160;
	// li r5,6
	ctx.r5.s64 = 6;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82503400
	ctx.lr = 0x82526134;
	sub_82503400(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82526140;
	sub_8250AD28(ctx, base);
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 0);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// clrlwi r6,r11,27
	ctx.r6.u64 = ctx.r11.u32 & 0x1F;
	// bl 0x8250acc8
	ctx.lr = 0x82526158;
	sub_8250ACC8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8252626c
	goto loc_8252626C;
loc_82526160:
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// clrlwi r14,r11,27
	r14.u64 = ctx.r11.u32 & 0x1F;
	// bl 0x8250ab60
	ctx.lr = 0x8252616C;
	sub_8250AB60(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// stw r3,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// rlwimi r10,r22,26,4,6
	ctx.r10.u64 = (__builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 26) & 0xE000000) | (ctx.r10.u64 & 0xFFFFFFFFF1FFFFFF);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x8250a620
	ctx.lr = 0x82526188;
	sub_8250A620(ctx, base);
	// li r11,224
	ctx.r11.s64 = 224;
	// lwz r14,88(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// clrlwi r10,r25,27
	ctx.r10.u64 = r25.u32 & 0x1F;
	// rlwimi r11,r25,2,27,29
	ctx.r11.u64 = (__builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0x1C) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFE3);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r6,r14
	ctx.r6.u64 = r14.u64;
	// lwz r10,0(r14)
	ctx.r10.u64 = REX_LOAD_U32(r14.u32 + 0);
	// rlwinm r10,r10,0,27,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFC1F;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,0(r14)
	REX_STORE_U32(r14.u32 + 0, ctx.r11.u32);
	// bl 0x82524780
	ctx.lr = 0x825261C4;
	sub_82524780(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82523e00
	ctx.lr = 0x825261E4;
	sub_82523E00(ctx, base);
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825bb9c8
	ctx.lr = 0x825261F8;
	sub_825BB9C8(ctx, base);
	// mr r14,r3
	r14.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ab60
	ctx.lr = 0x82526208;
	sub_8250AB60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82526214;
	sub_8250AD28(ctx, base);
	// stw r3,44(r14)
	REX_STORE_U32(r14.u32 + 44, ctx.r3.u32);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ab60
	ctx.lr = 0x82526224;
	sub_8250AB60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82526230;
	sub_8250AD28(ctx, base);
	// stw r3,48(r14)
	REX_STORE_U32(r14.u32 + 48, ctx.r3.u32);
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ab60
	ctx.lr = 0x82526240;
	sub_8250AB60(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwimi r11,r22,26,4,6
	ctx.r11.u64 = (__builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 26) & 0xE000000) | (ctx.r11.u64 & 0xFFFFFFFFF1FFFFFF);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8250a620
	ctx.lr = 0x82526258;
	sub_8250A620(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r11,57
	ctx.r11.s64 = 57;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// rlwimi r10,r11,7,19,26
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x1FE0) | (ctx.r10.u64 & 0xFFFFFFFFFFFFE01F);
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
loc_8252626C:
	// rlwinm r11,r26,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r9,0(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// addi r8,r11,-36
	ctx.r8.s64 = ctx.r11.s64 + -36;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,0(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 0);
	// rlwinm r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r8,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stw r17,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r17.u32);
	// stw r10,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// bl 0x8250ad28
	ctx.lr = 0x825262A0;
	sub_8250AD28(ctx, base);
	// stw r3,44(r26)
	REX_STORE_U32(r26.u32 + 44, ctx.r3.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825262bc
	if (ctx.cr0.eq) goto loc_825262BC;
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 8);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,8(r26)
	REX_STORE_U32(r26.u32 + 8, ctx.r11.u32);
loc_825262BC:
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8254fb38
	ctx.lr = 0x825262C8;
	sub_8254FB38(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8254fbd8
	ctx.lr = 0x825262D8;
	sub_8254FBD8(ctx, base);
	// lwz r25,80(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r8,r23
	ctx.r8.u64 = r23.u64;
	// mr r7,r19
	ctx.r7.u64 = r19.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82523e00
	ctx.lr = 0x825262F8;
	sub_82523E00(ctx, base);
	// addi r19,r19,1
	r19.s64 = r19.s64 + 1;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// bne cr6,0x82526040
	if (!ctx.cr6.eq) goto loc_82526040;
loc_82526304:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x82526340
	if (ctx.cr6.eq) goto loc_82526340;
	// rlwinm r11,r25,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r9,0(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 0);
	// addi r10,r28,-36
	ctx.r10.s64 = r28.s64 + -36;
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
	// lwz r9,0(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 0);
	// rlwinm r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r7,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r10,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r10.u32);
loc_82526340:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_825533D8) {
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
	ctx.lr = 0x825533E0;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r20,r6
	r20.u64 = ctx.r6.u64;
	// lwz r4,112(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// bl 0x8257e9f8
	ctx.lr = 0x82553400;
	sub_8257E9F8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82553410;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r25,r3
	r25.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r25.s32, 0, ctx.xer);
	// mr r26,r25
	r26.u64 = r25.u64;
	// beq 0x82553590
	if (ctx.cr0.eq) goto loc_82553590;
	// addi r23,r31,4
	r23.s64 = r31.s64 + 4;
	// li r24,3
	r24.s64 = 3;
	// li r21,24
	r21.s64 = 24;
loc_82553428:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,8(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 8);
	// bl 0x8257e9f8
	ctx.lr = 0x82553434;
	sub_8257E9F8(ctx, base);
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8255357c
	if (ctx.cr6.eq) goto loc_8255357C;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8255357c
	if (ctx.cr6.eq) goto loc_8255357C;
	// lwzu r28,4(r23)
	ea = 4 + r23.u32;
	r28.u64 = REX_LOAD_U32(ea);
	r23.u32 = ea;
	// lwz r11,12(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 12);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// clrlwi r9,r10,27
	ctx.r9.u64 = ctx.r10.u32 & 0x1F;
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// rlwinm r30,r10,27,30,31
	r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x3;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,16000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16000, ctx.xer);
	// beq cr6,0x825534b0
	if (ctx.cr6.eq) goto loc_825534B0;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825c61b8
	ctx.lr = 0x82553494;
	sub_825C61B8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,16000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16000, ctx.xer);
	// bne cr6,0x825535a0
	if (!ctx.cr6.eq) goto loc_825535A0;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// clrlwi r30,r11,30
	r30.u64 = ctx.r11.u32 & 0x3;
loc_825534B0:
	// li r5,17
	ctx.r5.s64 = 17;
	// li r4,48
	ctx.r4.s64 = 48;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824ff930
	ctx.lr = 0x825534C0;
	sub_824FF930(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82444d50
	ctx.lr = 0x825534CC;
	sub_82444D50(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x825b8570
	ctx.lr = 0x825534E4;
	sub_825B8570(ctx, base);
	// stw r24,4(r31)
	REX_STORE_U32(r31.u32 + 4, r24.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r11,0,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r10,148(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 148);
	// lwz r10,40(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// not r10,r10
	ctx.r10.u64 = ~ctx.r10.u64;
	// rlwinm. r10,r10,18,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82553510
	if (!ctx.cr0.eq) goto loc_82553510;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82553524
	goto loc_82553524;
loc_82553510:
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r11,30,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0xFF;
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
loc_82553524:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82553558
	if (ctx.cr6.lt) goto loc_82553558;
	// beq cr6,0x82553548
	if (ctx.cr6.eq) goto loc_82553548;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x825535a8
	if (!ctx.cr6.lt) goto loc_825535A8;
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// li r11,2
	ctx.r11.s64 = 2;
	// stfiwx f0,r31,r21
	REX_STORE_U32(r31.u32 + r21.u32, ctx.f0.u32);
	// b 0x82553564
	goto loc_82553564;
loc_82553548:
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stw r24,16(r31)
	REX_STORE_U32(r31.u32 + 16, r24.u32);
	// stfiwx f0,r31,r21
	REX_STORE_U32(r31.u32 + r21.u32, ctx.f0.u32);
	// b 0x82553568
	goto loc_82553568;
loc_82553558:
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfd f0,24(r31)
	REX_STORE_U64(r31.u32 + 24, ctx.f0.u64);
	// li r11,5
	ctx.r11.s64 = 5;
loc_82553564:
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
loc_82553568:
	// stw r31,12(r27)
	REX_STORE_U32(r27.u32 + 12, r31.u32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x8250b470
	ctx.lr = 0x8255357C;
	sub_8250B470(ctx, base);
loc_8255357C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,12(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 12);
	// bl 0x8257ea20
	ctx.lr = 0x82553588;
	sub_8257EA20(ctx, base);
	// mr. r26,r3
	r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// bne 0x82553428
	if (!ctx.cr0.eq) goto loc_82553428;
loc_82553590:
	// stw r25,0(r20)
	REX_STORE_U32(r20.u32 + 0, r25.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82553598:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826a1ce8
	return;
loc_825535A0:
	// li r3,3544
	ctx.r3.s64 = 3544;
	// b 0x82553598
	goto loc_82553598;
loc_825535A8:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824e4368
	ctx.lr = 0x825535B4;
	sub_824E4368(ctx, base);
}

DEFINE_REX_FUNC(sub_82570A50) {
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
	ctx.lr = 0x82570A58;
	// stfd f29,-112(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -112, f29.u64);
	// stfd f30,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, f30.u64);
	// stfd f31,-96(r1)
	REX_STORE_U64(ctx.r1.u32 + -96, f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r24,0
	r24.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r24,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, r24.u8);
	// bne 0x8257118c
	if (!ctx.cr0.eq) goto loc_8257118C;
	// mr r23,r11
	r23.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8257118c
	if (ctx.cr0.eq) goto loc_8257118C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r22,-1
	r22.s64 = -65536;
	// lfd f29,-3744(r11)
	f29.u64 = REX_LOAD_U64(ctx.r11.u32 + -3744);
loc_82570A98:
	// lwz r11,28(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 28);
loc_82570A9C:
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r25,r10,r11
	r25.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x82571170
	if (ctx.cr6.eq) goto loc_82571170;
	// lwz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 8);
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmpwi cr6,r4,97
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 97, ctx.xer);
	// bgt cr6,0x82570cac
	if (ctx.cr6.gt) goto loc_82570CAC;
	// beq cr6,0x82571040
	if (ctx.cr6.eq) goto loc_82571040;
	// cmpwi cr6,r4,47
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 47, ctx.xer);
	// blt cr6,0x82571164
	if (ctx.cr6.lt) goto loc_82571164;
	// cmpwi cr6,r4,48
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 48, ctx.xer);
	// ble cr6,0x82570c74
	if (!ctx.cr6.gt) goto loc_82570C74;
	// cmpwi cr6,r4,51
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 51, ctx.xer);
	// ble cr6,0x82571164
	if (!ctx.cr6.gt) goto loc_82571164;
	// cmpwi cr6,r4,54
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 54, ctx.xer);
	// ble cr6,0x82570c34
	if (!ctx.cr6.gt) goto loc_82570C34;
	// cmpwi cr6,r4,72
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 72, ctx.xer);
	// beq cr6,0x82570bfc
	if (ctx.cr6.eq) goto loc_82570BFC;
	// cmpwi cr6,r4,96
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 96, ctx.xer);
	// bne cr6,0x82571164
	if (!ctx.cr6.eq) goto loc_82571164;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f71b8
	ctx.lr = 0x82570B08;
	sub_824F71B8(ctx, base);
	// addi r11,r25,-20
	ctx.r11.s64 = r25.s64 + -20;
	// add r30,r3,r11
	r30.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r5,16(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 16);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82570ba8
	if (ctx.cr6.eq) goto loc_82570BA8;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825533d8
	ctx.lr = 0x82570B2C;
	sub_825533D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82570bc8
	if (!ctx.cr0.eq) goto loc_82570BC8;
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r29,0(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,112(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 112);
	// bl 0x8257e9f8
	ctx.lr = 0x82570B48;
	sub_8257E9F8(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// addi r8,r10,17312
	ctx.r8.s64 = ctx.r10.s64 + 17312;
	// addi r7,r1,81
	ctx.r7.s64 = ctx.r1.s64 + 81;
	// stw r11,112(r29)
	REX_STORE_U32(r29.u32 + 112, ctx.r11.u32);
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// stb r24,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, r24.u8);
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8244aa60
	ctx.lr = 0x82570B7C;
	sub_8244AA60(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r9,104(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lbz r10,81(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stb r11,15(r30)
	REX_STORE_U8(r30.u32 + 15, ctx.r11.u8);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// rlwimi r11,r9,16,15,15
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0x10000) | (ctx.r11.u64 & 0xFFFFFFFFFFFEFFFF);
	// stw r11,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r11.u32);
	// bne 0x825711d4
	if (!ctx.cr0.eq) goto loc_825711D4;
	// stw r28,112(r29)
	REX_STORE_U32(r29.u32 + 112, r28.u32);
	// stw r24,16(r30)
	REX_STORE_U32(r30.u32 + 16, r24.u32);
loc_82570BA8:
	// lbz r11,15(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 15);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// beq cr6,0x82571164
	if (ctx.cr6.eq) goto loc_82571164;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r22.u32, ctx.xer);
	// bne cr6,0x82571164
	if (!ctx.cr6.eq) goto loc_82571164;
	// li r3,3639
	ctx.r3.s64 = 3639;
loc_82570BC8:
	// lfd f1,624(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(r31.u32 + 624);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lfd f3,640(r31)
	ctx.f3.u64 = REX_LOAD_U64(r31.u32 + 640);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// lfd f2,632(r31)
	ctx.f2.u64 = REX_LOAD_U64(r31.u32 + 632);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfd f1,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// stfd f3,56(r1)
	REX_STORE_U64(ctx.r1.u32 + 56, ctx.f3.u64);
	// ld r8,56(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 56);
	// stfd f2,48(r1)
	REX_STORE_U64(ctx.r1.u32 + 48, ctx.f2.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// bl 0x824e4368
	ctx.lr = 0x82570BFC;
	sub_824E4368(ctx, base);
loc_82570BFC:
	// lwz r11,44(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 44);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r11,29,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0xC;
	// clrlwi r4,r11,27
	ctx.r4.u64 = ctx.r11.u32 & 0x1F;
	// lhz r11,14(r10)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + 14);
	// srw r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r9.u8 & 0x3F));
	// clrlwi r3,r11,28
	ctx.r3.u64 = ctx.r11.u32 & 0xF;
	// bl 0x8252dca8
	ctx.lr = 0x82570C20;
	sub_8252DCA8(ctx, base);
	// clrlwi r11,r3,30
	ctx.r11.u64 = ctx.r3.u32 & 0x3;
loc_82570C24:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82571164
	if (!ctx.cr6.eq) goto loc_82571164;
	// li r3,4003
	ctx.r3.s64 = 4003;
	// b 0x82570bc8
	goto loc_82570BC8;
loc_82570C34:
	// lwz r11,44(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 44);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r11,29,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0xC;
	// clrlwi r4,r11,27
	ctx.r4.u64 = ctx.r11.u32 & 0x1F;
	// lhz r11,14(r10)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + 14);
	// srw r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r9.u8 & 0x3F));
	// clrlwi r3,r11,28
	ctx.r3.u64 = ctx.r11.u32 & 0xF;
	// bl 0x8252dca8
	ctx.lr = 0x82570C58;
	sub_8252DCA8(ctx, base);
	// clrlwi r11,r3,30
	ctx.r11.u64 = ctx.r3.u32 & 0x3;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x82570c24
	if (!ctx.cr6.eq) goto loc_82570C24;
	// li r4,4001
	ctx.r4.s64 = 4001;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e4270
	ctx.lr = 0x82570C70;
	sub_824E4270(ctx, base);
	// b 0x82571164
	goto loc_82571164;
loc_82570C74:
	// lwz r11,44(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 44);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r11,29,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0xC;
	// clrlwi r4,r11,27
	ctx.r4.u64 = ctx.r11.u32 & 0x1F;
	// lhz r11,14(r10)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + 14);
	// srw r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r9.u8 & 0x3F));
	// clrlwi r3,r11,28
	ctx.r3.u64 = ctx.r11.u32 & 0xF;
	// bl 0x8252dca8
	ctx.lr = 0x82570C98;
	sub_8252DCA8(ctx, base);
	// clrlwi r11,r3,30
	ctx.r11.u64 = ctx.r3.u32 & 0x3;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82571164
	if (!ctx.cr6.eq) goto loc_82571164;
loc_82570CA4:
	// li r3,4002
	ctx.r3.s64 = 4002;
	// b 0x82570bc8
	goto loc_82570BC8;
loc_82570CAC:
	// cmpwi cr6,r4,99
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 99, ctx.xer);
	// blt cr6,0x82571164
	if (ctx.cr6.lt) goto loc_82571164;
	// cmpwi cr6,r4,100
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 100, ctx.xer);
	// ble cr6,0x82571040
	if (!ctx.cr6.gt) goto loc_82571040;
	// cmpwi cr6,r4,102
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 102, ctx.xer);
	// ble cr6,0x82571020
	if (!ctx.cr6.gt) goto loc_82571020;
	// cmpwi cr6,r4,107
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 107, ctx.xer);
	// beq cr6,0x82570e34
	if (ctx.cr6.eq) goto loc_82570E34;
	// cmpwi cr6,r4,118
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 118, ctx.xer);
	// bne cr6,0x82571164
	if (!ctx.cr6.eq) goto loc_82571164;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
	// lwz r10,48(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 48);
	// lwz r11,16(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r30,44(r10)
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + 44);
	// beq cr6,0x82571164
	if (ctx.cr6.eq) goto loc_82571164;
loc_82570CF8:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82570d10
	if (ctx.cr6.eq) goto loc_82570D10;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82570cf8
	if (!ctx.cr6.eq) goto loc_82570CF8;
loc_82570D10:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82571164
	if (ctx.cr6.eq) goto loc_82571164;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r29,r11,18,18,31
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x3FFF;
	// clrlwi r11,r11,18
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFF;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,108
	ctx.r7.s64 = ctx.r1.s64 + 108;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mullw r29,r29,r11
	r29.s64 = int64_t(r29.s32) * int64_t(ctx.r11.s32);
	// bl 0x825ba3a0
	ctx.lr = 0x82570D4C;
	sub_825BA3A0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,116
	ctx.r7.s64 = ctx.r1.s64 + 116;
	// addi r6,r1,120
	ctx.r6.s64 = ctx.r1.s64 + 120;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825ba3a0
	ctx.lr = 0x82570D70;
	sub_825BA3A0(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,125
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 125, ctx.xer);
	// beq cr6,0x82570db0
	if (ctx.cr6.eq) goto loc_82570DB0;
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r9,r9,0,18,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r9,16000
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16000, ctx.xer);
	// bne cr6,0x82571164
	if (!ctx.cr6.eq) goto loc_82571164;
	// cmplwi cr6,r11,125
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 125, ctx.xer);
	// beq cr6,0x82570db0
	if (ctx.cr6.eq) goto loc_82570DB0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_82570DB0:
	// lwz r5,108(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r4,112(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825b8570
	ctx.lr = 0x82570DBC;
	sub_825B8570(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,16000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16000, ctx.xer);
	// bne cr6,0x82570dfc
	if (!ctx.cr6.eq) goto loc_82570DFC;
	// lwz r5,116(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,120(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// bl 0x825b8570
	ctx.lr = 0x82570DE0;
	sub_825B8570(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// bl 0x826a18c8
	ctx.lr = 0x82570DE8;
	sub_826A18C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82570dfc
	if (ctx.cr0.eq) goto loc_82570DFC;
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f31.f64, f30.f64);
	// bgt cr6,0x82570dfc
	if (ctx.cr6.gt) goto loc_82570DFC;
	// fmr f31,f30
	f31.f64 = f30.f64;
loc_82570DFC:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x826a18c8
	ctx.lr = 0x82570E04;
	sub_826A18C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82570e2c
	if (ctx.cr0.eq) goto loc_82570E2C;
	// fcmpu cr6,f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f31.f64, f29.f64);
	// blt cr6,0x82570e2c
	if (ctx.cr6.lt) goto loc_82570E2C;
	// clrldi r11,r29,32
	ctx.r11.u64 = r29.u64 & 0xFFFFFFFF;
	// std r11,136(r1)
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.r11.u64);
	// lfd f0,136(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(f31.f64, ctx.f0.f64);
	// blt cr6,0x82571164
	if (ctx.cr6.lt) goto loc_82571164;
loc_82570E2C:
	// li r3,3504
	ctx.r3.s64 = 3504;
	// b 0x82570bc8
	goto loc_82570BC8;
loc_82570E34:
	// lwz r30,44(r25)
	r30.u64 = REX_LOAD_U32(r25.u32 + 44);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm r9,r10,29,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0xC;
	// clrlwi r4,r10,27
	ctx.r4.u64 = ctx.r10.u32 & 0x1F;
	// lhz r11,14(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 14);
	// srw r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r9.u8 & 0x3F));
	// clrlwi r3,r11,28
	ctx.r3.u64 = ctx.r11.u32 & 0xF;
	// bl 0x8252dca8
	ctx.lr = 0x82570E58;
	sub_8252DCA8(ctx, base);
	// lwz r29,48(r25)
	r29.u64 = REX_LOAD_U32(r25.u32 + 48);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,124
	ctx.r6.s64 = ctx.r1.s64 + 124;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825c61b8
	ctx.lr = 0x82570E78;
	sub_825C61B8(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r10,124(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// mr r26,r24
	r26.u64 = r24.u64;
	// clrlwi r4,r10,30
	ctx.r4.u64 = ctx.r10.u32 & 0x3;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,16000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16000, ctx.xer);
	// bne cr6,0x82570f40
	if (!ctx.cr6.eq) goto loc_82570F40;
	// lwz r5,128(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825b8570
	ctx.lr = 0x82570EA0;
	sub_825B8570(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// fcmpu cr6,f1,f29
	ctx.cr6.compare(ctx.f1.f64, f29.f64);
	// blt cr6,0x82570f40
	if (ctx.cr6.lt) goto loc_82570F40;
	// fctidz f0,f1
	ctx.f0.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.f0.u64);
	// lwz r27,148(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// std r27,152(r1)
	REX_STORE_U64(ctx.r1.u32 + 152, r27.u64);
	// lfd f0,152(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 152);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bne cr6,0x82570f40
	if (!ctx.cr6.eq) goto loc_82570F40;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250a620
	ctx.lr = 0x82570EDC;
	sub_8250A620(ctx, base);
	// clrlwi. r11,r27,31
	ctx.r11.u64 = r27.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82570ef4
	if (ctx.cr0.eq) goto loc_82570EF4;
	// clrlwi r11,r28,30
	ctx.r11.u64 = r28.u32 & 0x3;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82570ef4
	if (!ctx.cr6.eq) goto loc_82570EF4;
	// li r26,4
	r26.s64 = 4;
loc_82570EF4:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm r9,r10,29,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0xC;
	// clrlwi r4,r10,27
	ctx.r4.u64 = ctx.r10.u32 & 0x1F;
	// lhz r11,14(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 14);
	// srw r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r9.u8 & 0x3F));
	// clrlwi r3,r11,28
	ctx.r3.u64 = ctx.r11.u32 & 0xF;
	// bl 0x8252dca8
	ctx.lr = 0x82570F14;
	sub_8252DCA8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825c1a60
	ctx.lr = 0x82570F28;
	sub_825C1A60(ctx, base);
	// stw r3,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ac70
	ctx.lr = 0x82570F3C;
	sub_8250AC70(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_82570F40:
	// clrlwi r11,r28,30
	ctx.r11.u64 = r28.u32 & 0x3;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82570ca4
	if (ctx.cr6.eq) goto loc_82570CA4;
	// lwz r11,652(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 652);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82570f80
	if (!ctx.cr6.eq) goto loc_82570F80;
	// li r5,38
	ctx.r5.s64 = 38;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f7678
	ctx.lr = 0x82570F68;
	sub_824F7678(ctx, base);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// ori r10,r3,1
	ctx.r10.u64 = ctx.r3.u64 | 1;
	// stw r3,652(r31)
	REX_STORE_U32(r31.u32 + 652, ctx.r3.u32);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_82570F80:
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825541d8
	ctx.lr = 0x82570F94;
	sub_825541D8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825548b0
	ctx.lr = 0x82570FB0;
	sub_825548B0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82554b20
	ctx.lr = 0x82570FC8;
	sub_82554B20(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r5,652(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 652);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8255e698
	ctx.lr = 0x82570FDC;
	sub_8255E698(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,652(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 652);
	// bl 0x8255e698
	ctx.lr = 0x82570FEC;
	sub_8255E698(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,652(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 652);
	// bl 0x8255e698
	ctx.lr = 0x82570FFC;
	sub_8255E698(ctx, base);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// lwz r8,652(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 652);
	// li r6,228
	ctx.r6.s64 = 228;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825c41d0
	ctx.lr = 0x8257101C;
	sub_825C41D0(ctx, base);
	// b 0x82571164
	goto loc_82571164;
loc_82571020:
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 48);
	// rlwinm r10,r10,0,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r10,r22
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r22.u32, ctx.xer);
	// beq cr6,0x82571164
	if (ctx.cr6.eq) goto loc_82571164;
	// rlwinm. r11,r11,5,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82571164
	if (ctx.cr0.eq) goto loc_82571164;
	// li r3,3552
	ctx.r3.s64 = 3552;
	// b 0x82570bc8
	goto loc_82570BC8;
loc_82571040:
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f71b8
	ctx.lr = 0x82571050;
	sub_824F71B8(ctx, base);
	// addi r11,r25,-24
	ctx.r11.s64 = r25.s64 + -24;
	// add r29,r3,r11
	r29.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r5,20(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 20);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82571148
	if (ctx.cr6.eq) goto loc_82571148;
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82571134
	if (ctx.cr6.eq) goto loc_82571134;
	// addi r6,r1,132
	ctx.r6.s64 = ctx.r1.s64 + 132;
	// bl 0x825533d8
	ctx.lr = 0x82571080;
	sub_825533D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82570bc8
	if (!ctx.cr0.eq) goto loc_82570BC8;
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r30,0(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,112(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 112);
	// bl 0x8257e9f8
	ctx.lr = 0x8257109C;
	sub_8257E9F8(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// addi r6,r10,17312
	ctx.r6.s64 = ctx.r10.s64 + 17312;
	// addi r5,r1,82
	ctx.r5.s64 = ctx.r1.s64 + 82;
	// stw r11,112(r30)
	REX_STORE_U32(r30.u32 + 112, ctx.r11.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stb r24,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, r24.u8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8244af60
	ctx.lr = 0x825710C8;
	sub_8244AF60(ctx, base);
	// lbz r11,82(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x825711e0
	if (!ctx.cr0.eq) goto loc_825711E0;
	// stw r28,112(r30)
	REX_STORE_U32(r30.u32 + 112, r28.u32);
	// lwz r8,4(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 4);
	// rlwinm. r11,r8,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82571144
	if (ctx.cr0.eq) goto loc_82571144;
	// lwz r9,0(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 0);
loc_825710E8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82571128
	if (ctx.cr6.eq) goto loc_82571128;
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm. r11,r10,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82571108
	if (ctx.cr0.eq) goto loc_82571108;
	// rlwinm. r11,r10,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x8257110c
	if (ctx.cr0.eq) goto loc_8257110C;
loc_82571108:
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
loc_8257110C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82571120
	if (ctx.cr0.eq) goto loc_82571120;
	// rlwinm r11,r10,0,7,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1FFE000;
	// cmplwi cr6,r11,8192
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8192, ctx.xer);
	// beq cr6,0x82571144
	if (ctx.cr6.eq) goto loc_82571144;
loc_82571120:
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x825710e8
	goto loc_825710E8;
loc_82571128:
	// rlwinm r11,r8,0,3,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// stw r11,4(r29)
	REX_STORE_U32(r29.u32 + 4, ctx.r11.u32);
	// b 0x82571144
	goto loc_82571144;
loc_82571134:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x825535b8
	ctx.lr = 0x8257113C;
	sub_825535B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82570bc8
	if (!ctx.cr0.eq) goto loc_82570BC8;
loc_82571144:
	// stw r24,20(r29)
	REX_STORE_U32(r29.u32 + 20, r24.u32);
loc_82571148:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825b8ed8
	ctx.lr = 0x8257115C;
	sub_825B8ED8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82570bc8
	if (!ctx.cr0.eq) goto loc_82570BC8;
loc_82571164:
	// rlwinm r11,r25,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// b 0x82570a9c
	goto loc_82570A9C;
loc_82571170:
	// rlwinm r11,r23,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8257118c
	if (!ctx.cr0.eq) goto loc_8257118C;
	// mr r23,r11
	r23.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82570a98
	if (!ctx.cr6.eq) goto loc_82570A98;
loc_8257118C:
	// lwz r11,652(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 652);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825712a8
	if (ctx.cr6.eq) goto loc_825712A8;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// ori r10,r11,4096
	ctx.r10.u64 = ctx.r11.u64 | 4096;
	// rlwinm r29,r11,20,31,31
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x1;
	// stw r10,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r10.u32);
loc_825711A8:
	// lwz r3,652(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 652);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82571274
	if (!ctx.cr0.eq) goto loc_82571274;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82571274
	if (ctx.cr0.eq) goto loc_82571274;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825711ec
	if (ctx.cr0.eq) goto loc_825711EC;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// b 0x825711f8
	goto loc_825711F8;
loc_825711D4:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e4368
	ctx.lr = 0x825711E0;
	sub_824E4368(ctx, base);
loc_825711E0:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e4368
	ctx.lr = 0x825711EC;
	sub_824E4368(ctx, base);
loc_825711EC:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
loc_825711F8:
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r10,r4
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// stw r11,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// bne 0x82571248
	if (!ctx.cr0.eq) goto loc_82571248;
	// rlwinm r11,r4,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x824e4308
	ctx.lr = 0x82571248;
	sub_824E4308(ctx, base);
loc_82571248:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm r11,r11,0,6,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFBFFFFFF;
	// rlwinm r10,r11,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// cmplwi cr6,r10,14720
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14720, ctx.xer);
	// beq cr6,0x825711a8
	if (ctx.cr6.eq) goto loc_825711A8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82564d58
	ctx.lr = 0x82571270;
	sub_82564D58(ctx, base);
	// b 0x825711a8
	goto loc_825711A8;
loc_82571274:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f7a78
	ctx.lr = 0x82571280;
	sub_824F7A78(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82571298
	if (ctx.cr0.eq) goto loc_82571298;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8257dfd8
	ctx.lr = 0x82571294;
	sub_8257DFD8(ctx, base);
	// stb r24,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, r24.u8);
loc_82571298:
	// stw r24,652(r31)
	REX_STORE_U32(r31.u32 + 652, r24.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8256c548
	ctx.lr = 0x825712A8;
	sub_8256C548(ctx, base);
loc_825712A8:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
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

DEFINE_REX_FUNC(sub_825B35A8) {
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
	// lwz r3,2736(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 2736);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x825d79a0
	ctx.lr = 0x825B35CC;
	sub_825D79A0(ctx, base);
	// lwz r11,1488(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1488);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825B35F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
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

DEFINE_REX_FUNC(sub_825B3CB8) {
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
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lbz r10,1380(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1380);
	// lwz r4,1536(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1536);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x825b3ce0
	if (ctx.cr0.eq) goto loc_825B3CE0;
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x825b3ce4
	goto loc_825B3CE4;
loc_825B3CE0:
	// lwz r3,8(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
loc_825B3CE4:
	// bl 0x824f0d40
	ctx.lr = 0x825B3CE8;
	sub_824F0D40(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x825b3d14
	if (ctx.cr6.eq) goto loc_825B3D14;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r6,r11,-4368
	ctx.r6.s64 = ctx.r11.s64 + -4368;
	// addi r5,r10,-7244
	ctx.r5.s64 = ctx.r10.s64 + -7244;
	// addi r4,r9,22852
	ctx.r4.s64 = ctx.r9.s64 + 22852;
	// li r7,561
	ctx.r7.s64 = 561;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825B3D14;
	sub_824EA978(ctx, base);
loc_825B3D14:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825B57A8) {
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
	ctx.lr = 0x825B57B0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// addi r27,r11,22852
	r27.s64 = ctx.r11.s64 + 22852;
	// addi r26,r10,-13688
	r26.s64 = ctx.r10.s64 + -13688;
	// bne cr6,0x825b57f8
	if (!ctx.cr6.eq) goto loc_825B57F8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addi r5,r11,-2948
	ctx.r5.s64 = ctx.r11.s64 + -2948;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r7,163
	ctx.r7.s64 = 163;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825B57F8;
	sub_824EA978(ctx, base);
loc_825B57F8:
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x825b5820
	if (ctx.cr6.lt) goto loc_825B5820;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addi r5,r11,23360
	ctx.r5.s64 = ctx.r11.s64 + 23360;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r7,164
	ctx.r7.s64 = 164;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825B5820;
	sub_824EA978(ctx, base);
loc_825B5820:
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// mulli r30,r30,12
	r30.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(12));
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x825b5854
	if (ctx.cr6.lt) goto loc_825B5854;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addi r5,r11,23288
	ctx.r5.s64 = ctx.r11.s64 + 23288;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r7,165
	ctx.r7.s64 = 165;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825B5854;
	sub_824EA978(ctx, base);
loc_825B5854:
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mullw r11,r8,r29
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(r29.s32);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_825B8348) {
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
	// clrlwi. r11,r5,31
	ctx.r11.u64 = ctx.r5.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825b8374
	if (ctx.cr0.eq) goto loc_825B8374;
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// bl 0x825b78d0
	ctx.lr = 0x825B8374;
	sub_825B78D0(ctx, base);
loc_825B8374:
	// rlwinm. r11,r31,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825b8388
	if (ctx.cr0.eq) goto loc_825B8388;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f2,-3744(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = REX_LOAD_U64(ctx.r11.u32 + -3744);
	// bl 0x826a1860
	ctx.lr = 0x825B8388;
	sub_826A1860(ctx, base);
loc_825B8388:
	// rlwinm. r11,r31,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825b83ac
	if (ctx.cr0.eq) goto loc_825B83AC;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(r30.s32, 2, ctx.xer);
	// bne cr6,0x825b83a8
	if (!ctx.cr6.eq) goto loc_825B83A8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfd f0,-1624(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + -1624);
	// fsub f1,f0,f1
	ctx.f1.f64 = ctx.f0.f64 - ctx.f1.f64;
	// b 0x825b83ac
	goto loc_825B83AC;
loc_825B83A8:
	// bl 0x826a1898
	ctx.lr = 0x825B83AC;
	sub_826A1898(ctx, base);
loc_825B83AC:
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

DEFINE_REX_FUNC(sub_825BB398) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x825BB3A0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// addi r11,r11,-83
	ctx.r11.s64 = ctx.r11.s64 + -83;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bgt cr6,0x825bb644
	if (ctx.cr6.gt) goto loc_825BB644;
	// lis r12,-32251
	ctx.r12.s64 = -2113601536;
	// addi r12,r12,-1824
	ctx.r12.s64 = ctx.r12.s64 + -1824;
	// lbzx r0,r12,r11
	ctx.r0.u64 = REX_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32164
	ctx.r12.s64 = -2107899904;
	// nop 
	// addi r12,r12,-19476
	ctx.r12.s64 = ctx.r12.s64 + -19476;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_825BB3EC;
	case 1:
		goto loc_825BB550;
	case 2:
		goto loc_825BB590;
	case 3:
		goto loc_825BB4A4;
	case 4:
		goto loc_825BB4A4;
	case 5:
		goto loc_825BB4DC;
	case 6:
		goto loc_825BB3F8;
	case 7:
		goto loc_825BB3F8;
	case 8:
		goto loc_825BB500;
	case 9:
		goto loc_825BB4EC;
	case 10:
		goto loc_825BB4EC;
	case 11:
		goto loc_825BB514;
	case 12:
		goto loc_825BB630;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_825BB3EC:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824e4368
	ctx.lr = 0x825BB3F8;
	sub_824E4368(ctx, base);
loc_825BB3F8:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm r11,r11,0,18,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFBFFF;
	// ori r11,r11,45056
	ctx.r11.u64 = ctx.r11.u64 | 45056;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwimi r10,r11,24,21,21
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x400) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFBFF);
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,11392
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11392, ctx.xer);
	// bne cr6,0x825bb434
	if (!ctx.cr6.eq) goto loc_825BB434;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_825BB42C:
	// ori r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 8192;
	// b 0x825bb494
	goto loc_825BB494;
loc_825BB434:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm. r11,r11,0,10,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x380000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825bb48c
	if (ctx.cr0.eq) goto loc_825BB48C;
	// lwz r11,44(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 44);
	// lwz r30,12(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824f6e38
	ctx.lr = 0x825BB450;
	sub_824F6E38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825bb48c
	if (!ctx.cr0.eq) goto loc_825BB48C;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
loc_825BB45C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825bb478
	if (ctx.cr6.eq) goto loc_825BB478;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r10,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825bb478
	if (!ctx.cr0.eq) goto loc_825BB478;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x825bb45c
	goto loc_825BB45C;
loc_825BB478:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwimi r10,r11,17,22,29
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x3FC) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFC03);
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// b 0x825bb498
	goto loc_825BB498;
loc_825BB48C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_825BB490:
	// ori r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 16384;
loc_825BB494:
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_825BB498:
	// li r3,1
	ctx.r3.s64 = 1;
loc_825BB49C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_825BB4A4:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm r11,r11,0,19,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFF9FFF;
	// ori r11,r11,36864
	ctx.r11.u64 = ctx.r11.u64 | 36864;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwimi r10,r11,24,21,21
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x400) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFBFF);
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,11008
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11008, ctx.xer);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bne cr6,0x825bb490
	if (!ctx.cr6.eq) goto loc_825BB490;
	// b 0x825bb42c
	goto loc_825BB42C;
loc_825BB4DC:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r10,5
	ctx.r10.s64 = 5;
	// rlwimi r11,r10,13,16,19
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0xF000) | (ctx.r11.u64 & 0xFFFFFFFFFFFF0FFF);
	// b 0x825bb638
	goto loc_825BB638;
loc_825BB4EC:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm r11,r11,0,23,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// rlwinm r11,r11,0,20,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFCFFF;
	// ori r11,r11,50176
	ctx.r11.u64 = ctx.r11.u64 | 50176;
	// b 0x825bb638
	goto loc_825BB638;
loc_825BB500:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm r11,r11,0,22,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFBFF;
	// rlwinm r11,r11,0,20,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFCFFF;
	// ori r11,r11,49664
	ctx.r11.u64 = ctx.r11.u64 | 49664;
	// b 0x825bb638
	goto loc_825BB638;
loc_825BB514:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r11,r11,0,20,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFCFFF;
	// li r4,94
	ctx.r4.s64 = 94;
	// ori r11,r11,50688
	ctx.r11.u64 = ctx.r11.u64 | 50688;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// bl 0x824f71b8
	ctx.lr = 0x825BB538;
	sub_824F71B8(ctx, base);
	// addi r11,r30,-12
	ctx.r11.s64 = r30.s64 + -12;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwzx r11,r3,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// rlwimi r11,r10,0,0,28
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8) | (ctx.r11.u64 & 0xFFFFFFFF00000007);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// b 0x825bb63c
	goto loc_825BB63C;
loc_825BB550:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r10,7
	ctx.r10.s64 = 7;
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwimi r11,r10,12,16,19
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xF000) | (ctx.r11.u64 & 0xFFFFFFFFFFFF0FFF);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,84
	ctx.r4.s64 = 84;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824f71b8
	ctx.lr = 0x825BB574;
	sub_824F71B8(ctx, base);
	// addi r11,r30,-20
	ctx.r11.s64 = r30.s64 + -20;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwzx r11,r3,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwimi r10,r11,16,11,15
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x1F0000) | (ctx.r10.u64 & 0xFFFFFFFFFFE0FFFF);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// b 0x825bb49c
	goto loc_825BB49C;
loc_825BB590:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,85
	ctx.r4.s64 = 85;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824f71b8
	ctx.lr = 0x825BB5A4;
	sub_824F71B8(ctx, base);
	// addi r11,r30,-20
	ctx.r11.s64 = r30.s64 + -20;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r9,1
	ctx.r9.s64 = 1;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// rlwimi r10,r9,15,16,19
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 15) & 0xF000) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0FFF);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// li r4,84
	ctx.r4.s64 = 84;
	// lwz r29,0(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r9,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// lwz r28,28(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// bl 0x824f71b8
	ctx.lr = 0x825BB5E0;
	sub_824F71B8(ctx, base);
	// addi r11,r29,-20
	ctx.r11.s64 = r29.s64 + -20;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwzx r11,r3,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// rlwimi r10,r11,16,11,15
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x1F0000) | (ctx.r10.u64 & 0xFFFFFFFFFFE0FFFF);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x824f7ba8
	ctx.lr = 0x825BB5FC;
	sub_824F7BA8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwimi r11,r3,0,19,31
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x1FFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFFE000);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwimi r9,r11,4,10,10
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x200000) | (ctx.r9.u64 & 0xFFFFFFFFFFDFFFFF);
	// stw r9,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwimi r10,r11,24,21,21
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x400) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFBFF);
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// b 0x825bb63c
	goto loc_825BB63C;
loc_825BB630:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// ori r11,r11,61440
	ctx.r11.u64 = ctx.r11.u64 | 61440;
loc_825BB638:
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
loc_825BB63C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x825bb49c
	goto loc_825BB49C;
loc_825BB644:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r4,3500
	ctx.r4.s64 = 3500;
	// addi r5,r11,-1568
	ctx.r5.s64 = ctx.r11.s64 + -1568;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824e4368
	ctx.lr = 0x825BB658;
	sub_824E4368(ctx, base);
}

DEFINE_REX_FUNC(sub_825CE260) {
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
	// bge cr6,0x825ce30c
	if (!ctx.cr6.lt) goto loc_825CE30C;
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
loc_825CE2C4:
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
	// bdnz 0x825ce2c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825CE2C4;
loc_825CE30C:
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825ce328
	if (ctx.cr6.eq) goto loc_825CE328;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x825c73b8
	ctx.lr = 0x825CE328;
	sub_825C73B8(ctx, base);
loc_825CE328:
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825ce344
	if (ctx.cr6.eq) goto loc_825CE344;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x825c7788
	ctx.lr = 0x825CE344;
	sub_825C7788(ctx, base);
loc_825CE344:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825D1A40) {
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
	// bl 0x825d0ea0
	ctx.lr = 0x825D1A60;
	sub_825D0EA0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825d1a70
	if (ctx.cr0.eq) goto loc_825D1A70;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x825D1A70;
	sub_8269CE98(ctx, base);
loc_825D1A70:
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

DEFINE_REX_FUNC(sub_825D3008) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x825D3010;
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
	// bne cr6,0x825d304c
	if (!ctx.cr6.eq) goto loc_825D304C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r6,r11,5624
	ctx.r6.s64 = ctx.r11.s64 + 5624;
	// addi r5,r10,23184
	ctx.r5.s64 = ctx.r10.s64 + 23184;
	// addi r4,r9,22852
	ctx.r4.s64 = ctx.r9.s64 + 22852;
	// li r7,1828
	ctx.r7.s64 = 1828;
	// bl 0x824ea978
	ctx.lr = 0x825D304C;
	sub_824EA978(ctx, base);
loc_825D304C:
	// li r4,582
	ctx.r4.s64 = 582;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f02c0
	ctx.lr = 0x825D3058;
	sub_824F02C0(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x825d30bc
	if (!ctx.cr6.eq) goto loc_825D30BC;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x825d307c
	if (ctx.cr6.eq) goto loc_825D307C;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,23
	ctx.r4.s64 = 23;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824f0950
	ctx.lr = 0x825D307C;
	sub_824F0950(ctx, base);
loc_825D307C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x825d30b4
	if (ctx.cr6.eq) goto loc_825D30B4;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x825d30b4
	if (ctx.cr6.eq) goto loc_825D30B4;
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r11,r11,-28232
	ctx.r11.s64 = ctx.r11.s64 + -28232;
	// addi r4,r10,5608
	ctx.r4.s64 = ctx.r10.s64 + 5608;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,38
	ctx.r6.s64 = 38;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,152(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 152);
	// bctrl 
	ctx.lr = 0x825D30B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825D30B4:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825d3114
	goto loc_825D3114;
loc_825D30BC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x825d30d8
	if (ctx.cr6.eq) goto loc_825D30D8;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,23
	ctx.r4.s64 = 23;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824f0950
	ctx.lr = 0x825D30D8;
	sub_824F0950(ctx, base);
loc_825D30D8:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x825d3110
	if (ctx.cr6.eq) goto loc_825D3110;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x825d3110
	if (ctx.cr6.eq) goto loc_825D3110;
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r11,r11,-28232
	ctx.r11.s64 = ctx.r11.s64 + -28232;
	// addi r4,r10,5608
	ctx.r4.s64 = ctx.r10.s64 + 5608;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,38
	ctx.r6.s64 = 38;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,152(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 152);
	// bctrl 
	ctx.lr = 0x825D3110;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825D3110:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825D3114:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_825D5A08) {
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
	ctx.lr = 0x825D5A10;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x825d5a50
	if (!ctx.cr6.eq) goto loc_825D5A50;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r6,r11,5624
	ctx.r6.s64 = ctx.r11.s64 + 5624;
	// addi r5,r10,23184
	ctx.r5.s64 = ctx.r10.s64 + 23184;
	// addi r4,r9,22852
	ctx.r4.s64 = ctx.r9.s64 + 22852;
	// li r7,4133
	ctx.r7.s64 = 4133;
	// bl 0x824ea978
	ctx.lr = 0x825D5A50;
	sub_824EA978(ctx, base);
loc_825D5A50:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,48
	ctx.r4.s64 = 48;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f05f0
	ctx.lr = 0x825D5A60;
	sub_824F05F0(ctx, base);
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// stfs f1,0(r28)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r28.u32 + 0, temp.u32);
	// beq cr6,0x825d5ab8
	if (ctx.cr6.eq) goto loc_825D5AB8;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x825d5ab8
	if (ctx.cr6.eq) goto loc_825D5AB8;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x825d1a98
	ctx.lr = 0x825D5A90;
	sub_825D1A98(ctx, base);
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
	// addi r11,r11,-28232
	ctx.r11.s64 = ctx.r11.s64 + -28232;
	// addi r4,r10,5952
	ctx.r4.s64 = ctx.r10.s64 + 5952;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// li r6,54
	ctx.r6.s64 = 54;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r5,216(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 216);
	// bctrl 
	ctx.lr = 0x825D5AB8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825D5AB8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_825DC028) {
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
	ctx.lr = 0x825DC030;
	// stfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -104, f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,1508(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 1508);
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// stw r5,1508(r10)
	REX_STORE_U32(ctx.r10.u32 + 1508, ctx.r5.u32);
	// lwz r3,172(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 172);
	// bl 0x825e7538
	ctx.lr = 0x825DC058;
	sub_825E7538(ctx, base);
	// lwz r30,12(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r11,1488(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 1488);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,28(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825DC078;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r6,r11,15992
	ctx.r6.s64 = ctx.r11.s64 + 15992;
	// bl 0x825d4140
	ctx.lr = 0x825DC094;
	sub_825D4140(ctx, base);
	// lwz r30,12(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r3,1488(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 1488);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825DC0AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r6,r11,15992
	ctx.r6.s64 = ctx.r11.s64 + 15992;
	// bl 0x825d23d8
	ctx.lr = 0x825DC0C8;
	sub_825D23D8(ctx, base);
	// lwz r30,12(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r3,1488(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 1488);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825DC0E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r6,r11,15992
	ctx.r6.s64 = ctx.r11.s64 + 15992;
	// bl 0x825d24f0
	ctx.lr = 0x825DC0FC;
	sub_825D24F0(ctx, base);
	// lwz r30,12(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r3,1488(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 1488);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825DC114;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r6,r11,15992
	ctx.r6.s64 = ctx.r11.s64 + 15992;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// bl 0x825d2600
	ctx.lr = 0x825DC130;
	sub_825D2600(ctx, base);
	// lwz r3,168(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 168);
	// bl 0x825fd0a0
	ctx.lr = 0x825DC138;
	sub_825FD0A0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// addi r24,r11,22852
	r24.s64 = ctx.r11.s64 + 22852;
	// addi r23,r10,9792
	r23.s64 = ctx.r10.s64 + 9792;
	// beq cr6,0x825dc16c
	if (ctx.cr6.eq) goto loc_825DC16C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// addi r5,r11,10276
	ctx.r5.s64 = ctx.r11.s64 + 10276;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// li r7,1505
	ctx.r7.s64 = 1505;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825DC16C;
	sub_824EA978(ctx, base);
loc_825DC16C:
	// lwz r9,168(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 168);
	// li r29,0
	r29.s64 = 0;
	// li r22,1
	r22.s64 = 1;
	// lwz r27,92(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
	// lwz r9,60(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 60);
	// lwz r6,4(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
loc_825DC190:
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// ble cr6,0x825dc1a0
	if (!ctx.cr6.gt) goto loc_825DC1A0;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// b 0x825dc1ac
	goto loc_825DC1AC;
loc_825DC1A0:
	// lwz r10,8(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// lwzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
loc_825DC1AC:
	// clrlwi. r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x825dc1c4
	if (ctx.cr0.eq) goto loc_825DC1C4;
	// mr r27,r10
	r27.u64 = ctx.r10.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x825dc190
	goto loc_825DC190;
loc_825DC1C4:
	// lwz r30,12(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r3,1488(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 1488);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825DC1DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r6,r11,15992
	ctx.r6.s64 = ctx.r11.s64 + 15992;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// bl 0x825d2718
	ctx.lr = 0x825DC1F8;
	sub_825D2718(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r25,r11,10600
	r25.s64 = ctx.r11.s64 + 10600;
	// bne 0x825dc284
	if (!ctx.cr0.eq) goto loc_825DC284;
	// li r3,105
	ctx.r3.s64 = 105;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x825f9ad0
	ctx.lr = 0x825DC214;
	sub_825F9AD0(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x825f9f38
	ctx.lr = 0x825DC224;
	sub_825F9F38(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r10,23
	ctx.r10.s64 = 23;
	// stw r29,60(r30)
	REX_STORE_U32(r30.u32 + 60, r29.u32);
	// addi r9,r11,9752
	ctx.r9.s64 = ctx.r11.s64 + 9752;
	// stw r10,84(r30)
	REX_STORE_U32(r30.u32 + 84, ctx.r10.u32);
	// lwz r10,9752(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 9752);
	// lwz r11,-4(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + -4);
	// stw r10,132(r30)
	REX_STORE_U32(r30.u32 + 132, ctx.r10.u32);
	// stw r11,128(r30)
	REX_STORE_U32(r30.u32 + 128, ctx.r11.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x825b32d0
	ctx.lr = 0x825DC250;
	sub_825B32D0(ctx, base);
	// stw r3,172(r30)
	REX_STORE_U32(r30.u32 + 172, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d82d0
	ctx.lr = 0x825DC260;
	sub_825D82D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825fcb18
	ctx.lr = 0x825DC26C;
	sub_825FCB18(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825f9b60
	ctx.lr = 0x825DC274;
	sub_825F9B60(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825dc7dc
	if (!ctx.cr0.eq) goto loc_825DC7DC;
	// li r7,1527
	ctx.r7.s64 = 1527;
	// b 0x825dc4e0
	goto loc_825DC4E0;
loc_825DC284:
	// lwz r30,12(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r3,1488(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 1488);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825DC29C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r6,r11,15992
	ctx.r6.s64 = ctx.r11.s64 + 15992;
	// bl 0x825d2830
	ctx.lr = 0x825DC2B8;
	sub_825D2830(ctx, base);
	// lwz r30,12(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// lwz r3,1488(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 1488);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825DC2D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r6,r11,15992
	ctx.r6.s64 = ctx.r11.s64 + 15992;
	// bl 0x825d2948
	ctx.lr = 0x825DC2F0;
	sub_825D2948(ctx, base);
	// lwz r28,12(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,1488(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 1488);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825DC30C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r6,r11,15992
	ctx.r6.s64 = ctx.r11.s64 + 15992;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// bl 0x825d2a60
	ctx.lr = 0x825DC328;
	sub_825D2A60(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r21,1
	ctx.cr6.compare<int32_t>(r21.s32, 1, ctx.xer);
	// bne cr6,0x825dc4f8
	if (!ctx.cr6.eq) goto loc_825DC4F8;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lwz r7,12(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// addi r6,r11,15992
	ctx.r6.s64 = ctx.r11.s64 + 15992;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825d5ac8
	ctx.lr = 0x825DC350;
	sub_825D5AC8(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// addi r30,r11,10436
	r30.s64 = ctx.r11.s64 + 10436;
	// beq cr6,0x825dc378
	if (ctx.cr6.eq) goto loc_825DC378;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// li r7,1554
	ctx.r7.s64 = 1554;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825DC378;
	sub_824EA978(ctx, base);
loc_825DC378:
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lwz r7,12(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// addi r6,r11,15992
	ctx.r6.s64 = ctx.r11.s64 + 15992;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825d5b68
	ctx.lr = 0x825DC394;
	sub_825D5B68(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x825dc3b4
	if (ctx.cr6.eq) goto loc_825DC3B4;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// li r7,1558
	ctx.r7.s64 = 1558;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825DC3B4;
	sub_824EA978(ctx, base);
loc_825DC3B4:
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,92(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// li r3,18
	ctx.r3.s64 = 18;
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lfs f0,3704(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f31,f0,f13
	f31.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// bl 0x825f9ad0
	ctx.lr = 0x825DC3D8;
	sub_825F9AD0(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x825f9f38
	ctx.lr = 0x825DC3E8;
	sub_825F9F38(ctx, base);
	// lfs f4,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f4.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// li r5,1
	ctx.r5.s64 = 1;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// bl 0x825faab8
	ctx.lr = 0x825DC408;
	sub_825FAAB8(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r10,23
	ctx.r10.s64 = 23;
	// stw r29,64(r30)
	REX_STORE_U32(r30.u32 + 64, r29.u32);
	// stb r22,154(r30)
	REX_STORE_U8(r30.u32 + 154, r22.u8);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r10,88(r30)
	REX_STORE_U32(r30.u32 + 88, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,9752(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 9752);
	// stw r11,136(r30)
	REX_STORE_U32(r30.u32 + 136, ctx.r11.u32);
	// bl 0x825d82d0
	ctx.lr = 0x825DC430;
	sub_825D82D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825fcb18
	ctx.lr = 0x825DC43C;
	sub_825FCB18(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825f9b60
	ctx.lr = 0x825DC444;
	sub_825F9B60(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825dc464
	if (!ctx.cr0.eq) goto loc_825DC464;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// li r7,1570
	ctx.r7.s64 = 1570;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825DC464;
	sub_824EA978(ctx, base);
loc_825DC464:
	// li r3,19
	ctx.r3.s64 = 19;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x825f9ad0
	ctx.lr = 0x825DC470;
	sub_825F9AD0(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x825f9f38
	ctx.lr = 0x825DC480;
	sub_825F9F38(ctx, base);
	// stb r22,164(r30)
	REX_STORE_U8(r30.u32 + 164, r22.u8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x825f9f38
	ctx.lr = 0x825DC494;
	sub_825F9F38(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f31.f64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x825faab8
	ctx.lr = 0x825DC4B4;
	sub_825FAAB8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d82d0
	ctx.lr = 0x825DC4C0;
	sub_825D82D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825fcb18
	ctx.lr = 0x825DC4CC;
	sub_825FCB18(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825f9b60
	ctx.lr = 0x825DC4D4;
	sub_825F9B60(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825dc7dc
	if (!ctx.cr0.eq) goto loc_825DC7DC;
	// li r7,1579
	ctx.r7.s64 = 1579;
loc_825DC4E0:
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825DC4F4;
	sub_824EA978(ctx, base);
	// b 0x825dc7dc
	goto loc_825DC7DC;
loc_825DC4F8:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(r30.s32, 1, ctx.xer);
	// beq cr6,0x825dc508
	if (ctx.cr6.eq) goto loc_825DC508;
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(r28.s32, 1, ctx.xer);
	// bne cr6,0x825dc7d8
	if (!ctx.cr6.eq) goto loc_825DC7D8;
loc_825DC508:
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lwz r7,12(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// addi r6,r11,15992
	ctx.r6.s64 = ctx.r11.s64 + 15992;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825d5c08
	ctx.lr = 0x825DC524;
	sub_825D5C08(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x825dc548
	if (ctx.cr6.eq) goto loc_825DC548;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// addi r5,r11,10436
	ctx.r5.s64 = ctx.r11.s64 + 10436;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// li r7,1588
	ctx.r7.s64 = 1588;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825DC548;
	sub_824EA978(ctx, base);
loc_825DC548:
	// li r3,19
	ctx.r3.s64 = 19;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x825f9ad0
	ctx.lr = 0x825DC554;
	sub_825F9AD0(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x825f9f38
	ctx.lr = 0x825DC564;
	sub_825F9F38(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r10,23
	ctx.r10.s64 = 23;
	// stw r29,60(r30)
	REX_STORE_U32(r30.u32 + 60, r29.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,84(r30)
	REX_STORE_U32(r30.u32 + 84, ctx.r10.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,9752(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 9752);
	// stw r11,132(r30)
	REX_STORE_U32(r30.u32 + 132, ctx.r11.u32);
	// lfs f4,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f4.f64 = double(temp.f32);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// bl 0x825faab8
	ctx.lr = 0x825DC59C;
	sub_825FAAB8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d82d0
	ctx.lr = 0x825DC5A8;
	sub_825D82D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825fcb18
	ctx.lr = 0x825DC5B4;
	sub_825FCB18(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825f9b60
	ctx.lr = 0x825DC5BC;
	sub_825F9B60(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825dc5dc
	if (!ctx.cr0.eq) goto loc_825DC5DC;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// li r7,1596
	ctx.r7.s64 = 1596;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825DC5DC;
	sub_824EA978(ctx, base);
loc_825DC5DC:
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(r28.s32, 1, ctx.xer);
	// bne cr6,0x825dc660
	if (!ctx.cr6.eq) goto loc_825DC660;
	// li r3,19
	ctx.r3.s64 = 19;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x825f9ad0
	ctx.lr = 0x825DC5F0;
	sub_825F9AD0(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x825f9f38
	ctx.lr = 0x825DC600;
	sub_825F9F38(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x825f9f38
	ctx.lr = 0x825DC610;
	sub_825F9F38(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x825f9f38
	ctx.lr = 0x825DC620;
	sub_825F9F38(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d82d0
	ctx.lr = 0x825DC62C;
	sub_825D82D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825fcb18
	ctx.lr = 0x825DC638;
	sub_825FCB18(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825f9b60
	ctx.lr = 0x825DC640;
	sub_825F9B60(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825dc660
	if (!ctx.cr0.eq) goto loc_825DC660;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// li r7,1605
	ctx.r7.s64 = 1605;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825DC660;
	sub_824EA978(ctx, base);
loc_825DC660:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfd f1,10664(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + 10664);
	// bl 0x826a16a0
	ctx.lr = 0x825DC66C;
	sub_826A16A0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// lfd f1,8312(r11)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + 8312);
	// bl 0x826a16a0
	ctx.lr = 0x825DC67C;
	sub_826A16A0(ctx, base);
	// fdiv f0,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = f31.f64 / ctx.f1.f64;
	// li r3,19
	ctx.r3.s64 = 19;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// frsp f31,f0
	f31.f64 = double(float(ctx.f0.f64));
	// bl 0x825f9ad0
	ctx.lr = 0x825DC690;
	sub_825F9AD0(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x825f9f38
	ctx.lr = 0x825DC6A0;
	sub_825F9F38(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x825f9f38
	ctx.lr = 0x825DC6B0;
	sub_825F9F38(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f31.f64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x825faab8
	ctx.lr = 0x825DC6D0;
	sub_825FAAB8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d82d0
	ctx.lr = 0x825DC6DC;
	sub_825D82D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825fcb18
	ctx.lr = 0x825DC6E8;
	sub_825FCB18(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825f9b60
	ctx.lr = 0x825DC6F0;
	sub_825F9B60(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825dc710
	if (!ctx.cr0.eq) goto loc_825DC710;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// li r7,1634
	ctx.r7.s64 = 1634;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825DC710;
	sub_824EA978(ctx, base);
loc_825DC710:
	// li r3,55
	ctx.r3.s64 = 55;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x825f9ad0
	ctx.lr = 0x825DC71C;
	sub_825F9AD0(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x825f9f38
	ctx.lr = 0x825DC72C;
	sub_825F9F38(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x825f9f38
	ctx.lr = 0x825DC73C;
	sub_825F9F38(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d82d0
	ctx.lr = 0x825DC748;
	sub_825D82D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825fcb18
	ctx.lr = 0x825DC754;
	sub_825FCB18(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825f9b60
	ctx.lr = 0x825DC75C;
	sub_825F9B60(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825dc77c
	if (!ctx.cr0.eq) goto loc_825DC77C;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// li r7,1642
	ctx.r7.s64 = 1642;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825DC77C;
	sub_824EA978(ctx, base);
loc_825DC77C:
	// li r3,64
	ctx.r3.s64 = 64;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x825f9ad0
	ctx.lr = 0x825DC788;
	sub_825F9AD0(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x825f9f38
	ctx.lr = 0x825DC798;
	sub_825F9F38(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x825f9f38
	ctx.lr = 0x825DC7A8;
	sub_825F9F38(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d82d0
	ctx.lr = 0x825DC7B4;
	sub_825D82D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825fcb18
	ctx.lr = 0x825DC7C0;
	sub_825FCB18(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825f9b60
	ctx.lr = 0x825DC7C8;
	sub_825F9B60(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825dc7dc
	if (!ctx.cr0.eq) goto loc_825DC7DC;
	// li r7,1649
	ctx.r7.s64 = 1649;
	// b 0x825dc4e0
	goto loc_825DC4E0;
loc_825DC7D8:
	// lwz r30,92(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
loc_825DC7DC:
	// lwz r28,12(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r3,1488(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 1488);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825DC7F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r6,r11,15992
	ctx.r6.s64 = ctx.r11.s64 + 15992;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// bl 0x825d1dd8
	ctx.lr = 0x825DC810;
	sub_825D1DD8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x825dc908
	if (!ctx.cr6.eq) goto loc_825DC908;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r10,108(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 108);
	// lwz r22,1452(r11)
	r22.u64 = REX_LOAD_U32(ctx.r11.u32 + 1452);
	// lwz r27,28(r10)
	r27.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// lwz r28,32(r10)
	r28.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// bl 0x825b33a0
	ctx.lr = 0x825DC838;
	sub_825B33A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r22,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r22.u32);
	// beq 0x825dc854
	if (ctx.cr0.eq) goto loc_825DC854;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x825fb4d8
	ctx.lr = 0x825DC850;
	sub_825FB4D8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_825DC854:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825f9f38
	ctx.lr = 0x825DC864;
	sub_825F9F38(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825f9f38
	ctx.lr = 0x825DC874;
	sub_825F9F38(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825f9f38
	ctx.lr = 0x825DC884;
	sub_825F9F38(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,108(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 108);
	// bl 0x825f8468
	ctx.lr = 0x825DC894;
	sub_825F8468(ctx, base);
	// lwz r3,108(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 108);
	// bl 0x825fa3f0
	ctx.lr = 0x825DC89C;
	sub_825FA3F0(ctx, base);
	// lwz r3,108(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 108);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,96(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825DC8B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d82d0
	ctx.lr = 0x825DC8BC;
	sub_825D82D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,168(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 168);
	// bl 0x825fcb18
	ctx.lr = 0x825DC8C8;
	sub_825FCB18(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825f9b60
	ctx.lr = 0x825DC8D0;
	sub_825F9B60(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825dc8f0
	if (!ctx.cr0.eq) goto loc_825DC8F0;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// li r7,1672
	ctx.r7.s64 = 1672;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825DC8F0;
	sub_824EA978(ctx, base);
loc_825DC8F0:
	// stw r29,108(r31)
	REX_STORE_U32(r31.u32 + 108, r29.u32);
	// lwz r3,96(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 96);
	// lwz r4,4(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x825f7718
	ctx.lr = 0x825DC900;
	sub_825F7718(ctx, base);
	// stw r29,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// b 0x825dcb04
	goto loc_825DCB04;
loc_825DC908:
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lwz r7,12(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// addi r6,r11,15992
	ctx.r6.s64 = ctx.r11.s64 + 15992;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825d5020
	ctx.lr = 0x825DC924;
	sub_825D5020(ctx, base);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r7,12(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r6,r11,15992
	ctx.r6.s64 = ctx.r11.s64 + 15992;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825d50c0
	ctx.lr = 0x825DC940;
	sub_825D50C0(ctx, base);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r7,12(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r6,r11,15992
	ctx.r6.s64 = ctx.r11.s64 + 15992;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825d5160
	ctx.lr = 0x825DC95C;
	sub_825D5160(ctx, base);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r7,12(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r6,r11,15992
	ctx.r6.s64 = ctx.r11.s64 + 15992;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825d58b0
	ctx.lr = 0x825DC978;
	sub_825D58B0(ctx, base);
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// li r3,18
	ctx.r3.s64 = 18;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r30,32(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x825fbfb8
	ctx.lr = 0x825DC98C;
	sub_825FBFB8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x825f9f38
	ctx.lr = 0x825DC99C;
	sub_825F9F38(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x825f9f38
	ctx.lr = 0x825DC9AC;
	sub_825F9F38(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// lfs f4,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f4.f64 = double(temp.f32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lfs f3,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,92(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x825faab8
	ctx.lr = 0x825DC9CC;
	sub_825FAAB8(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825DC9EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stb r22,154(r29)
	REX_STORE_U8(r29.u32 + 154, r22.u8);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d82d0
	ctx.lr = 0x825DC9FC;
	sub_825D82D0(ctx, base);
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r3,948(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 948);
	// bl 0x825fcc08
	ctx.lr = 0x825DCA10;
	sub_825FCC08(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825f9b60
	ctx.lr = 0x825DCA18;
	sub_825F9B60(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825dca3c
	if (!ctx.cr0.eq) goto loc_825DCA3C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// addi r5,r11,10260
	ctx.r5.s64 = ctx.r11.s64 + 10260;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// li r7,1706
	ctx.r7.s64 = 1706;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825DCA3C;
	sub_824EA978(ctx, base);
loc_825DCA3C:
	// li r3,20
	ctx.r3.s64 = 20;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x825fc028
	ctx.lr = 0x825DCA48;
	sub_825FC028(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x825f9f38
	ctx.lr = 0x825DCA58;
	sub_825F9F38(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x825f9f38
	ctx.lr = 0x825DCA68;
	sub_825F9F38(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x825f9f38
	ctx.lr = 0x825DCA78;
	sub_825F9F38(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// lfs f4,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f4.f64 = double(temp.f32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lfs f3,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,92(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x825faab8
	ctx.lr = 0x825DCA98;
	sub_825FAAB8(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825DCAB8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d82d0
	ctx.lr = 0x825DCAC4;
	sub_825D82D0(ctx, base);
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r3,948(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 948);
	// bl 0x825fcc08
	ctx.lr = 0x825DCAD8;
	sub_825FCC08(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825f9b60
	ctx.lr = 0x825DCAE0;
	sub_825F9B60(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825dcb04
	if (!ctx.cr0.eq) goto loc_825DCB04;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// addi r5,r11,10640
	ctx.r5.s64 = ctx.r11.s64 + 10640;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// li r7,1720
	ctx.r7.s64 = 1720;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825DCB04;
	sub_824EA978(ctx, base);
loc_825DCB04:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x826a1cec
	return;
}

DEFINE_REX_FUNC(sub_8261CA88) {
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
	ctx.lr = 0x8261CA90;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261CAB4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,52(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lis r11,4919
	ctx.r11.s64 = 322371584;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// ori r26,r11,61441
	r26.u64 = ctx.r11.u64 | 61441;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// bne cr6,0x8261cae8
	if (!ctx.cr6.eq) goto loc_8261CAE8;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8261cce8
	if (ctx.cr6.eq) goto loc_8261CCE8;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8261b138
	ctx.lr = 0x8261CADC;
	sub_8261B138(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r11.u32);
	// b 0x8261cce8
	goto loc_8261CCE8;
loc_8261CAE8:
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,20576
	ctx.r3.s64 = ctx.r11.s64 + 20576;
	// ori r5,r5,4
	ctx.r5.u64 = ctx.r5.u64 | 4;
	// li r4,60
	ctx.r4.s64 = 60;
	// bl 0x8260b5b8
	ctx.lr = 0x8261CB04;
	sub_8260B5B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8261cb1c
	if (ctx.cr0.eq) goto loc_8261CB1C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8261b368
	ctx.lr = 0x8261CB14;
	sub_8261B368(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x8261cb20
	goto loc_8261CB20;
loc_8261CB1C:
	// li r29,0
	r29.s64 = 0;
loc_8261CB20:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x8261cb34
	if (!ctx.cr6.eq) goto loc_8261CB34;
	// lis r30,-32761
	r30.s64 = -2147024896;
	// ori r30,r30,14
	r30.u64 = r30.u64 | 14;
	// b 0x8261cd08
	goto loc_8261CD08;
loc_8261CB34:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8261b440
	ctx.lr = 0x8261CB40;
	sub_8261B440(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge 0x8261cb5c
	if (!ctx.cr0.lt) goto loc_8261CB5C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8261b3c0
	ctx.lr = 0x8261CB50;
	sub_8261B3C0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8264c3d0
	ctx.lr = 0x8261CB58;
	sub_8264C3D0(ctx, base);
	// b 0x8261cd08
	goto loc_8261CD08;
loc_8261CB5C:
	// lwz r3,52(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 52);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8261cb70
	if (ctx.cr6.eq) goto loc_8261CB70;
	// lwz r28,8(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x8261cb74
	goto loc_8261CB74;
loc_8261CB70:
	// lwz r28,120(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 120);
loc_8261CB74:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8261cb84
	if (ctx.cr6.eq) goto loc_8261CB84;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8261b138
	ctx.lr = 0x8261CB84;
	sub_8261B138(ctx, base);
loc_8261CB84:
	// stw r29,52(r31)
	REX_STORE_U32(r31.u32 + 52, r29.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8261cce0
	if (ctx.cr6.eq) goto loc_8261CCE0;
	// lwz r11,128(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8261cbc0
	if (ctx.cr6.eq) goto loc_8261CBC0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,68(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 68);
	// lwz r11,100(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261CBB8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x8261cce0
	goto loc_8261CCE0;
loc_8261CBC0:
	// lwz r27,32(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 32);
	// b 0x8261ccd8
	goto loc_8261CCD8;
loc_8261CBC8:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x8261cd08
	if (ctx.cr6.lt) goto loc_8261CD08;
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8261cbe8
	if (ctx.cr6.eq) goto loc_8261CBE8;
	// lwz r27,4(r27)
	r27.u64 = REX_LOAD_U32(r27.u32 + 4);
	// lwz r29,0(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8261cbec
	goto loc_8261CBEC;
loc_8261CBE8:
	// li r29,0
	r29.s64 = 0;
loc_8261CBEC:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// lwz r10,52(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 52);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r11,120(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// lwz r28,4(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// beq cr6,0x8261cc0c
	if (ctx.cr6.eq) goto loc_8261CC0C;
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x8261cc10
	goto loc_8261CC10;
loc_8261CC0C:
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
loc_8261CC10:
	// lwz r7,128(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 128);
	// lwz r30,4(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8261cc54
	if (!ctx.cr6.eq) goto loc_8261CC54;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8261cc30
	if (ctx.cr6.eq) goto loc_8261CC30;
	// lwz r7,12(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// b 0x8261cc54
	goto loc_8261CC54;
loc_8261CC30:
	// lwz r7,132(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 132);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8261cc54
	if (!ctx.cr6.eq) goto loc_8261CC54;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261CC50;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
loc_8261CC54:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r6,0(r29)
	ctx.r6.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8261bf30
	ctx.lr = 0x8261CC74;
	sub_8261BF30(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x8261ccd8
	if (ctx.cr0.lt) goto loc_8261CCD8;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8260b9b0
	ctx.lr = 0x8261CC8C;
	sub_8260B9B0(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r3,8(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 8);
	// bl 0x8260e8f8
	ctx.lr = 0x8261CCA4;
	sub_8260E8F8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x8261ccd8
	if (ctx.cr0.lt) goto loc_8261CCD8;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8261ccd8
	if (ctx.cr6.eq) goto loc_8261CCD8;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261CCD4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_8261CCD8:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// bne cr6,0x8261cbc8
	if (!ctx.cr6.eq) goto loc_8261CBC8;
loc_8261CCE0:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x8261cd08
	if (ctx.cr6.lt) goto loc_8261CD08;
loc_8261CCE8:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,176(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 176);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261CD04;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_8261CD08:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261CD20;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x8261cd38
	if (ctx.cr6.eq) goto loc_8261CD38;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8261b3c0
	ctx.lr = 0x8261CD30;
	sub_8261B3C0(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8264c3d0
	ctx.lr = 0x8261CD38;
	sub_8264C3D0(ctx, base);
loc_8261CD38:
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// bl 0x8260b9b8
	ctx.lr = 0x8261CD40;
	sub_8260B9B8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_82635B88) {
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
	// lwz r11,60(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x82635bac
	if (!ctx.cr6.gt) goto loc_82635BAC;
	// bl 0x826e3fc0
	ctx.lr = 0x82635BAC;
	sub_826E3FC0(ctx, base);
loc_82635BAC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82637758
	ctx.lr = 0x82635BB4;
	sub_82637758(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82637b80
	ctx.lr = 0x82635BBC;
	sub_82637B80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82635bcc
	if (ctx.cr6.lt) goto loc_82635BCC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82648340
	ctx.lr = 0x82635BCC;
	sub_82648340(ctx, base);
loc_82635BCC:
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

DEFINE_REX_FUNC(sub_826373C0) {
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
	ctx.lr = 0x826373C8;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,152(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 152);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lwz r30,148(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 148);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lfs f0,3720(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 3720);
	ctx.f0.f64 = double(temp.f32);
	// add r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r31,r11,r7
	r31.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rlwinm r8,r11,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r11,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r3,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r8,r30
	ctx.r4.u64 = ctx.r8.u64 + r30.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(r29.s32, 4, ctx.xer);
	// add r24,r7,r30
	r24.u64 = ctx.r7.u64 + r30.u64;
	// add r27,r6,r30
	r27.u64 = ctx.r6.u64 + r30.u64;
	// add r26,r5,r30
	r26.u64 = ctx.r5.u64 + r30.u64;
	// add r8,r9,r30
	ctx.r8.u64 = ctx.r9.u64 + r30.u64;
	// add r31,r11,r30
	r31.u64 = ctx.r11.u64 + r30.u64;
	// blt cr6,0x826374ac
	if (ctx.cr6.lt) goto loc_826374AC;
	// addi r7,r29,-3
	ctx.r7.s64 = r29.s64 + -3;
	// addi r9,r8,-4
	ctx.r9.s64 = ctx.r8.s64 + -4;
	// addi r11,r4,4
	ctx.r11.s64 = ctx.r4.s64 + 4;
	// subf r6,r4,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r4.u64;
loc_8263744C:
	// lfs f13,4(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lfs f12,-4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// lfs f10,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// lfs f8,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f11,f0
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f7,-4(r11)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// lfsx f6,r6,r11
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	ctx.f6.f64 = double(temp.f32);
	// fadds f5,f6,f10
	ctx.f5.f64 = double(float(ctx.f6.f64 + ctx.f10.f64));
	// fmuls f4,f5,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f4,0(r11)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f3,12(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// fadds f2,f9,f3
	ctx.f2.f64 = double(float(ctx.f9.f64 + ctx.f3.f64));
	// fmuls f1,f2,f0
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// stfs f1,4(r11)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfsu f13,16(r9)
	ea = 16 + ctx.r9.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r9.u32 = ea;
	// fadds f13,f8,f13
	ctx.f13.f64 = double(float(ctx.f8.f64 + ctx.f13.f64));
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// blt cr6,0x8263744c
	if (ctx.cr6.lt) goto loc_8263744C;
loc_826374AC:
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r29.s32, ctx.xer);
	// bge cr6,0x826374e4
	if (!ctx.cr6.lt) goto loc_826374E4;
	// subf r9,r10,r29
	ctx.r9.u64 = r29.u64 - ctx.r10.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r4,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r4.u64;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_826374C8:
	// lfsx f13,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,0(r11)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x826374c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826374C8;
loc_826374E4:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8264be60
	ctx.lr = 0x826374F8;
	sub_8264BE60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82637628
	if (ctx.cr6.lt) goto loc_82637628;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r28,24
	ctx.r3.s64 = r28.s64 + 24;
	// bl 0x826fae60
	ctx.lr = 0x82637514;
	sub_826FAE60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82637628
	if (ctx.cr6.lt) goto loc_82637628;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r28,44
	ctx.r3.s64 = r28.s64 + 44;
	// bl 0x826fae60
	ctx.lr = 0x82637530;
	sub_826FAE60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82637628
	if (ctx.cr6.lt) goto loc_82637628;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r28,64
	ctx.r3.s64 = r28.s64 + 64;
	// bl 0x826fae60
	ctx.lr = 0x8263754C;
	sub_826FAE60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82637628
	if (ctx.cr6.lt) goto loc_82637628;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r28,84
	ctx.r3.s64 = r28.s64 + 84;
	// bl 0x826fae60
	ctx.lr = 0x82637568;
	sub_826FAE60(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82637624
	if (ctx.cr6.lt) goto loc_82637624;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r25,0
	r25.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8263760c
	if (!ctx.cr6.gt) goto loc_8263760C;
	// subf r27,r31,r27
	r27.u64 = r27.u64 - r31.u64;
	// subf r26,r31,r26
	r26.u64 = r26.u64 - r31.u64;
	// subf r30,r31,r30
	r30.u64 = r30.u64 - r31.u64;
	// subf r29,r31,r24
	r29.u64 = r24.u64 - r31.u64;
loc_82637594:
	// lfsx f0,r31,r26
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + r26.u32);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lfsx f13,r31,r27
	temp.u32 = REX_LOAD_U32(r31.u32 + r27.u32);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f11,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfsx f10,r31,r30
	temp.u32 = REX_LOAD_U32(r31.u32 + r30.u32);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f12,f11
	ctx.f9.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// fadds f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// stfsx f8,r31,r30
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(r31.u32 + r30.u32, temp.u32);
	// lfs f7,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfsx f6,r31,r26
	temp.u32 = REX_LOAD_U32(r31.u32 + r26.u32);
	ctx.f6.f64 = double(temp.f32);
	// lfsx f5,r31,r29
	temp.u32 = REX_LOAD_U32(r31.u32 + r29.u32);
	ctx.f5.f64 = double(temp.f32);
	// lfsx f4,r31,r27
	temp.u32 = REX_LOAD_U32(r31.u32 + r27.u32);
	ctx.f4.f64 = double(temp.f32);
	// fadds f3,f5,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 + ctx.f4.f64));
	// fsubs f2,f3,f7
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f7.f64));
	// fadds f2,f2,f6
	ctx.f2.f64 = double(float(ctx.f2.f64 + ctx.f6.f64));
	// stfsx f2,r31,r29
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(r31.u32 + r29.u32, temp.u32);
	// lfsx f1,r31,r30
	temp.u32 = REX_LOAD_U32(r31.u32 + r30.u32);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x826e34b8
	ctx.lr = 0x826375E0;
	sub_826E34B8(ctx, base);
	// lfsx f0,r31,r30
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + r30.u32);
	ctx.f0.f64 = double(temp.f32);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfsx f13,r31,r30
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + r30.u32, temp.u32);
	// lfsx f12,r31,r29
	temp.u32 = REX_LOAD_U32(r31.u32 + r29.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f1
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// stfsx f11,r31,r29
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + r29.u32, temp.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82637594
	if (ctx.cr6.lt) goto loc_82637594;
loc_8263760C:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// beq cr6,0x82637628
	if (ctx.cr6.eq) goto loc_82637628;
	// stw r11,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf0
	return;
loc_82637624:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
loc_82637628:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_82646728) {
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
	ctx.lr = 0x82646730;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82646930
	if (ctx.cr6.eq) goto loc_82646930;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82646930
	if (ctx.cr6.eq) goto loc_82646930;
	// rlwinm r30,r4,31,1,31
	r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 31) & 0x7FFFFFFF;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82646928
	if (ctx.cr6.eq) goto loc_82646928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// clrlwi r26,r7,16
	r26.u64 = ctx.r7.u32 & 0xFFFF;
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// li r27,1
	r27.s64 = 1;
	// li r28,128
	r28.s64 = 128;
	// addi r29,r10,-26936
	r29.s64 = ctx.r10.s64 + -26936;
loc_82646768:
	// cmplw cr6,r30,r26
	ctx.cr6.compare<uint32_t>(r30.u32, r26.u32, ctx.xer);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// blt cr6,0x82646778
	if (ctx.cr6.lt) goto loc_82646778;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
loc_82646778:
	// stb r27,0(r5)
	REX_STORE_U8(ctx.r5.u32 + 0, r27.u8);
	// addic. r7,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r7.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// sthu r28,1(r5)
	ea = 1 + ctx.r5.u32;
	REX_STORE_U16(ea, r28.u16);
	ctx.r5.u32 = ea;
	// subf r30,r10,r30
	r30.u64 = r30.u64 - ctx.r10.u64;
	// lbz r10,1(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lbz r9,2(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// rotlwi r8,r9,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// addi r10,r5,2
	ctx.r10.s64 = ctx.r5.s64 + 2;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// beq 0x826467c8
	if (ctx.cr0.eq) goto loc_826467C8;
	// lbz r6,2(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// lbz r8,1(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rotlwi r6,r6,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 8);
	// add r31,r6,r8
	r31.u64 = ctx.r6.u64 + ctx.r8.u64;
	// b 0x826467cc
	goto loc_826467CC;
loc_826467C8:
	// li r31,0
	r31.s64 = 0;
loc_826467CC:
	// sth r31,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, r31.u16);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// addi r5,r10,2
	ctx.r5.s64 = ctx.r10.s64 + 2;
	// beq cr6,0x82646920
	if (ctx.cr6.eq) goto loc_82646920;
loc_826467E0:
	// lbz r6,2(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// rlwinm r3,r31,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r8,1(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rotlwi r6,r6,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 8);
	// subf r10,r9,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r9.u64;
	// add r9,r6,r8
	ctx.r9.u64 = ctx.r6.u64 + ctx.r8.u64;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// subf r3,r10,r9
	ctx.r3.u64 = ctx.r9.u64 - ctx.r10.u64;
	// divw r3,r3,r4
	ctx.r3.u64 = uint32_t((ctx.r4.s32 && !(ctx.r3.s32 == INT32_MIN && ctx.r4.s32 == -1)) ? ctx.r3.s32 / ctx.r4.s32 : 0);
	// cmpwi cr6,r3,7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 7, ctx.xer);
	// ble cr6,0x82646818
	if (!ctx.cr6.gt) goto loc_82646818;
	// li r3,7
	ctx.r3.s64 = 7;
	// b 0x82646824
	goto loc_82646824;
loc_82646818:
	// cmpwi cr6,r3,-8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -8, ctx.xer);
	// bge cr6,0x82646824
	if (!ctx.cr6.lt) goto loc_82646824;
	// li r3,-8
	ctx.r3.s64 = -8;
loc_82646824:
	// mullw r9,r3,r4
	ctx.r9.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r4.s32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpwi cr6,r10,32767
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32767, ctx.xer);
	// ble cr6,0x8264683c
	if (!ctx.cr6.gt) goto loc_8264683C;
	// li r10,32767
	ctx.r10.s64 = 32767;
	// b 0x82646848
	goto loc_82646848;
loc_8264683C:
	// cmpwi cr6,r10,-32768
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -32768, ctx.xer);
	// bge cr6,0x82646848
	if (!ctx.cr6.lt) goto loc_82646848;
	// li r10,-32768
	ctx.r10.s64 = -32768;
loc_82646848:
	// rlwinm r9,r3,2,26,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x3C;
	// lwzx r8,r9,r29
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + r29.u32);
	// mullw r6,r8,r4
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r4.s32);
	// srawi r8,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r6.s32 >> 8;
	// cmpwi cr6,r8,16
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 16, ctx.xer);
	// bge cr6,0x82646864
	if (!ctx.cr6.lt) goto loc_82646864;
	// li r8,16
	ctx.r8.s64 = 16;
loc_82646864:
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82646908
	if (ctx.cr6.eq) goto loc_82646908;
	// lbz r6,1(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rlwinm r4,r10,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// subf r9,r9,r4
	ctx.r9.u64 = ctx.r4.u64 - ctx.r9.u64;
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// divw r10,r10,r8
	ctx.r10.u64 = uint32_t((ctx.r8.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r8.s32 == -1)) ? ctx.r10.s32 / ctx.r8.s32 : 0);
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// ble cr6,0x826468ac
	if (!ctx.cr6.gt) goto loc_826468AC;
	// li r10,7
	ctx.r10.s64 = 7;
	// b 0x826468b8
	goto loc_826468B8;
loc_826468AC:
	// cmpwi cr6,r10,-8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -8, ctx.xer);
	// bge cr6,0x826468b8
	if (!ctx.cr6.lt) goto loc_826468B8;
	// li r10,-8
	ctx.r10.s64 = -8;
loc_826468B8:
	// mullw r6,r8,r10
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// add r6,r6,r9
	ctx.r6.u64 = ctx.r6.u64 + ctx.r9.u64;
	// cmpwi cr6,r6,32767
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 32767, ctx.xer);
	// ble cr6,0x826468d0
	if (!ctx.cr6.gt) goto loc_826468D0;
	// li r6,32767
	ctx.r6.s64 = 32767;
	// b 0x826468dc
	goto loc_826468DC;
loc_826468D0:
	// cmpwi cr6,r6,-32768
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -32768, ctx.xer);
	// bge cr6,0x826468dc
	if (!ctx.cr6.lt) goto loc_826468DC;
	// li r6,-32768
	ctx.r6.s64 = -32768;
loc_826468DC:
	// rlwinm r9,r10,2,26,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3C;
	// lwzx r4,r9,r29
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + r29.u32);
	// mullw r9,r4,r8
	ctx.r9.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r8.s32);
	// srawi r8,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 8;
	// cmpwi cr6,r8,16
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 16, ctx.xer);
	// bge cr6,0x826468f8
	if (!ctx.cr6.lt) goto loc_826468F8;
	// li r8,16
	ctx.r8.s64 = 16;
loc_826468F8:
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// b 0x8264690c
	goto loc_8264690C;
loc_82646908:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8264690C:
	// rlwimi r10,r3,4,0,27
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0) | (ctx.r10.u64 & 0xFFFFFFFF0000000F);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// stb r10,0(r5)
	REX_STORE_U8(ctx.r5.u32 + 0, ctx.r10.u8);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// bne cr6,0x826467e0
	if (!ctx.cr6.eq) goto loc_826467E0;
loc_82646920:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x82646768
	if (!ctx.cr6.eq) goto loc_82646768;
loc_82646928:
	// subf r3,r25,r5
	ctx.r3.u64 = ctx.r5.u64 - r25.u64;
	// b 0x826a1cfc
	return;
loc_82646930:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_826506D8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r8,r3,308
	ctx.r8.s64 = ctx.r3.s64 + 308;
	// addi r9,r4,308
	ctx.r9.s64 = ctx.r4.s64 + 308;
	// addi r10,r3,192
	ctx.r10.s64 = ctx.r3.s64 + 192;
	// addi r11,r4,192
	ctx.r11.s64 = ctx.r4.s64 + 192;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_826506F4:
	// ld r6,-88(r11)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r11.u32 + -88);
	// ld r7,-24(r11)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r11.u32 + -24);
	// ld r5,-24(r10)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r10.u32 + -24);
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// ld r31,8(r10)
	r31.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// std r7,-24(r10)
	REX_STORE_U64(ctx.r10.u32 + -24, ctx.r7.u64);
	// ld r6,-56(r11)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r11.u32 + -56);
	// ldu r7,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r7.u64 = REX_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// add r7,r7,r31
	ctx.r7.u64 = ctx.r7.u64 + r31.u64;
	// stdu r7,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r7.u64);
	ctx.r10.u32 = ea;
	// lwz r5,-12(r8)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + -12);
	// lwz r6,-44(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + -44);
	// lwz r7,-12(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + -12);
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lwz r6,4(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// stw r7,-12(r8)
	REX_STORE_U32(ctx.r8.u32 + -12, ctx.r7.u32);
	// lwz r5,-28(r9)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + -28);
	// lwzu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r7.u64 = REX_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// add r7,r5,r7
	ctx.r7.u64 = ctx.r5.u64 + ctx.r7.u64;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// stwu r7,4(r8)
	ea = 4 + ctx.r8.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x826506f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826506F4;
	// ld r9,232(r4)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r4.u32 + 232);
	// ld r11,248(r4)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r4.u32 + 248);
	// ld r10,248(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 248);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// ld r8,256(r3)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r3.u32 + 256);
	// lwz r9,336(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 336);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,340(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 340);
	// std r11,248(r3)
	REX_STORE_U64(ctx.r3.u32 + 248, ctx.r11.u64);
	// ld r7,240(r4)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r4.u32 + 240);
	// ld r11,256(r4)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r4.u32 + 256);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// std r11,256(r3)
	REX_STORE_U64(ctx.r3.u32 + 256, ctx.r11.u64);
	// lwz r11,336(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 336);
	// lwz r8,328(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 328);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,336(r3)
	REX_STORE_U32(ctx.r3.u32 + 336, ctx.r11.u32);
	// lwz r11,340(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 340);
	// lwz r9,332(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 332);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,340(r3)
	REX_STORE_U32(ctx.r3.u32 + 340, ctx.r11.u32);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826585D0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x826585D8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,740(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 740);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826585fc
	if (!ctx.cr0.eq) goto loc_826585FC;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,1314
	ctx.r3.u64 = ctx.r3.u64 | 1314;
	// b 0x826586c0
	goto loc_826586C0;
loc_826585FC:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x826586b8
	if (ctx.cr6.lt) goto loc_826586B8;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bgt cr6,0x826586b8
	if (ctx.cr6.gt) goto loc_826586B8;
	// addi r30,r31,240
	r30.s64 = r31.s64 + 240;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8265c608
	ctx.lr = 0x82658620;
	sub_8265C608(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x826586c0
	if (ctx.cr0.lt) goto loc_826586C0;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x826586c0
	if (ctx.cr6.eq) goto loc_826586C0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 0);
	// bl 0x8265c708
	ctx.lr = 0x8265863C;
	sub_8265C708(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// addi r28,r31,380
	r28.s64 = r31.s64 + 380;
loc_82658648:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82658664
	if (ctx.cr6.eq) goto loc_82658664;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8265c4d8
	ctx.lr = 0x82658664;
	sub_8265C4D8(ctx, base);
loc_82658664:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(r30.u32, 4, ctx.xer);
	// blt cr6,0x82658648
	if (ctx.cr6.lt) goto loc_82658648;
	// lwz r11,400(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 400);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82658698
	if (ctx.cr6.eq) goto loc_82658698;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r5,0(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82656c50
	ctx.lr = 0x82658690;
	sub_82656C50(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x826586c0
	if (ctx.cr0.lt) goto loc_826586C0;
loc_82658698:
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826586B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826586c0
	goto loc_826586C0;
loc_826586B8:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,1609
	ctx.r3.u64 = ctx.r3.u64 | 1609;
loc_826586C0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8265D738) {
	REX_FUNC_PROLOGUE();
	// b 0x82667a00
	sub_82667A00(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8265D770) {
	REX_FUNC_PROLOGUE();
	// b 0x82663ee0
	sub_82663EE0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8265D8C8) {
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
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8265d904
	if (ctx.cr6.eq) goto loc_8265D904;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265D900;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
loc_8265D904:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8265d924
	if (ctx.cr6.eq) goto loc_8265D924;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265D920;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
loc_8265D924:
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

DEFINE_REX_FUNC(sub_8265F3F8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,396(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 396);
	// rlwinm r3,r11,28,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8265F6E0) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// b 0x823eea60
	sub_823EEA60(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8265FC88) {
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
	// lwz r8,396(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 396);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// rlwinm. r8,r8,0,0,0
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8265fcc4
	if (ctx.cr0.eq) goto loc_8265FCC4;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x8265fd28
	goto loc_8265FD28;
loc_8265FCC4:
	// lwz r3,12(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r8,76(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// ld r4,44(r11)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r11.u32 + 44);
	// ld r5,52(r11)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r11.u32 + 52);
	// rldicr r8,r8,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,60(r11)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r11.u32 + 60);
	// lwz r30,0(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// ld r7,68(r11)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r11.u32 + 68);
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// lwz r11,52(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265FCF4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8265fd24
	if (ctx.cr0.eq) goto loc_8265FD24;
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x8265fd18
	if (ctx.cr6.eq) goto loc_8265FD18;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8265fd28
	if (!ctx.cr6.gt) goto loc_8265FD28;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r3,r11,32775
	ctx.r3.u64 = ctx.r11.u64 | 2147942400;
	// b 0x8265fd28
	goto loc_8265FD28;
loc_8265FD18:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,997
	ctx.r3.u64 = ctx.r3.u64 | 997;
	// b 0x8265fd28
	goto loc_8265FD28;
loc_8265FD24:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8265FD28:
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

DEFINE_REX_FUNC(sub_82663E78) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82663E80;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,132
	r29.s64 = ctx.r3.s64 + 132;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x827938a4
	ctx.lr = 0x82663E9C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82661398
	ctx.lr = 0x82663EA8;
	sub_82661398(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82663eb8
	if (ctx.cr0.eq) goto loc_82663EB8;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82663ec4
	if (!ctx.cr6.eq) goto loc_82663EC4;
loc_82663EB8:
	// lis r31,-32646
	r31.s64 = -2139488256;
	// ori r31,r31,4105
	r31.u64 = r31.u64 | 4105;
	// b 0x82663ecc
	goto loc_82663ECC;
loc_82663EC4:
	// stw r30,76(r3)
	REX_STORE_U32(ctx.r3.u32 + 76, r30.u32);
	// li r31,0
	r31.s64 = 0;
loc_82663ECC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827938b4
	ctx.lr = 0x82663ED4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82667850) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82667858;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,4096
	ctx.r11.s64 = 268435456;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8266787c
	if (!ctx.cr6.gt) goto loc_8266787C;
	// lis r31,-32646
	r31.s64 = -2139488256;
	// ori r31,r31,4102
	r31.u64 = r31.u64 | 4102;
	// b 0x826679f4
	goto loc_826679F4;
loc_8266787C:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x826678a0
	if (ctx.cr6.eq) goto loc_826678A0;
	// li r3,258
	ctx.r3.s64 = 258;
	// bl 0x82663958
	ctx.lr = 0x8266788C;
	sub_82663958(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x826678a0
	if (!ctx.cr0.eq) goto loc_826678A0;
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,14
	r31.u64 = r31.u64 | 14;
	// b 0x826679f4
	goto loc_826679F4;
loc_826678A0:
	// addi r29,r31,132
	r29.s64 = r31.s64 + 132;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827938a4
	ctx.lr = 0x826678AC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,172(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 172);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8266790c
	if (ctx.cr6.lt) goto loc_8266790C;
	// beq cr6,0x826678c8
	if (ctx.cr6.eq) goto loc_826678C8;
loc_826678BC:
	// lis r31,-32646
	r31.s64 = -2139488256;
	// ori r31,r31,4105
	r31.u64 = r31.u64 | 4105;
	// b 0x826679b4
	goto loc_826679B4;
loc_826678C8:
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8264c7f0
	ctx.lr = 0x826678D4;
	sub_8264C7F0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// lwz r6,96(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 24);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,3
	ctx.r7.s64 = 3;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// bl 0x82673220
	ctx.lr = 0x82667900;
	sub_82673220(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x826679b4
	if (!ctx.cr0.eq) goto loc_826679B4;
	// b 0x826679b0
	goto loc_826679B0;
loc_8266790C:
	// lwz r11,428(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 428);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826678bc
	if (ctx.cr0.eq) goto loc_826678BC;
	// lwz r4,208(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 208);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82667980
	if (ctx.cr6.eq) goto loc_82667980;
loc_82667924:
	// mfmsr r10
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r10.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r11,0,r4
	ea = ctx.r4.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r4
	ea = ctx.r4.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x82667924
	if (!ctx.cr0.eq) goto loc_82667924;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82667950
	if (!ctx.cr6.eq) goto loc_82667950;
	// lwz r3,4(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// bl 0x8265d850
	ctx.lr = 0x82667950;
	sub_8265D850(ctx, base);
loc_82667950:
	// lwz r4,204(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 204);
loc_82667954:
	// mfmsr r10
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r10.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r11,0,r4
	ea = ctx.r4.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r4
	ea = ctx.r4.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x82667954
	if (!ctx.cr0.eq) goto loc_82667954;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82667980
	if (!ctx.cr6.eq) goto loc_82667980;
	// lwz r3,4(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// bl 0x8265d850
	ctx.lr = 0x82667980;
	sub_8265D850(ctx, base);
loc_82667980:
	// stw r30,208(r31)
	REX_STORE_U32(r31.u32 + 208, r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x826679a8
	if (ctx.cr6.eq) goto loc_826679A8;
loc_8266798C:
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
	// bne 0x8266798c
	if (!ctx.cr0.eq) goto loc_8266798C;
loc_826679A8:
	// stw r30,204(r31)
	REX_STORE_U32(r31.u32 + 204, r30.u32);
	// li r30,0
	r30.s64 = 0;
loc_826679B0:
	// li r31,0
	r31.s64 = 0;
loc_826679B4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827938b4
	ctx.lr = 0x826679BC;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x826679f4
	if (ctx.cr6.eq) goto loc_826679F4;
loc_826679C4:
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
	// bne 0x826679c4
	if (!ctx.cr0.eq) goto loc_826679C4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826679f4
	if (!ctx.cr6.eq) goto loc_826679F4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 4);
	// bl 0x8265d850
	ctx.lr = 0x826679F4;
	sub_8265D850(ctx, base);
loc_826679F4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82673DD0) {
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
	ctx.lr = 0x82673DD8;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r21,r5
	r21.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r22,r7
	r22.u64 = ctx.r7.u64;
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// mr r23,r9
	r23.u64 = ctx.r9.u64;
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82674008
	if (ctx.cr6.eq) goto loc_82674008;
loc_82673E04:
	// cmplwi cr6,r23,9
	ctx.cr6.compare<uint32_t>(r23.u32, 9, ctx.xer);
	// blt cr6,0x826740a0
	if (ctx.cr6.lt) goto loc_826740A0;
	// lwz r7,5(r24)
	ctx.r7.u64 = REX_LOAD_U32(r24.u32 + 5);
	// addi r11,r23,-9
	ctx.r11.s64 = r23.s64 + -9;
	// lbz r28,0(r24)
	r28.u64 = REX_LOAD_U8(r24.u32 + 0);
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// lwz r27,1(r24)
	r27.u64 = REX_LOAD_U32(r24.u32 + 1);
	// addi r6,r24,9
	ctx.r6.s64 = r24.s64 + 9;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// stw r7,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// blt cr6,0x826740a0
	if (ctx.cr6.lt) goto loc_826740A0;
	// lwz r9,0(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r8,r1,100
	ctx.r8.s64 = ctx.r1.s64 + 100;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// stw r5,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// addi r8,r1,108
	ctx.r8.s64 = ctx.r1.s64 + 108;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r31,52(r9)
	r31.u64 = REX_LOAD_U32(ctx.r9.u32 + 52);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// add r24,r7,r6
	r24.u64 = ctx.r7.u64 + ctx.r6.u64;
	// subf r23,r7,r11
	r23.u64 = ctx.r11.u64 - ctx.r7.u64;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
	// bctrl 
	ctx.lr = 0x82673E70;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x826741c0
	if (!ctx.cr0.eq) goto loc_826741C0;
	// addi r6,r1,116
	ctx.r6.s64 = ctx.r1.s64 + 116;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82672888
	ctx.lr = 0x82673E8C;
	sub_82672888(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x82673fac
	if (!ctx.cr0.eq) goto loc_82673FAC;
	// lwz r5,100(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82673ec0
	if (ctx.cr6.eq) goto loc_82673EC0;
	// lwz r4,104(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r3,112(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82663958
	ctx.lr = 0x82673EAC;
	sub_82663958(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x82673ec4
	if (!ctx.cr0.eq) goto loc_82673EC4;
loc_82673EB4:
	// lis r30,-32761
	r30.s64 = -2147024896;
	// ori r30,r30,14
	r30.u64 = r30.u64 | 14;
	// b 0x826741c0
	goto loc_826741C0;
loc_82673EC0:
	// li r30,0
	r30.s64 = 0;
loc_82673EC4:
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r10,108(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// li r7,2
	ctx.r7.s64 = 2;
	// lwz r4,20(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 20);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82676750
	ctx.lr = 0x82673EF4;
	sub_82676750(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82673f30
	if (ctx.cr6.eq) goto loc_82673F30;
loc_82673F00:
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
	// bne 0x82673f00
	if (!ctx.cr0.eq) goto loc_82673F00;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82673f30
	if (!ctx.cr6.eq) goto loc_82673F30;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 4);
	// bl 0x8265d850
	ctx.lr = 0x82673F30;
	sub_8265D850(ctx, base);
loc_82673F30:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82673eb4
	if (ctx.cr6.eq) goto loc_82673EB4;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r11,r11,29
	ctx.r11.s64 = ctx.r11.s64 + 29;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stwx r21,r11,r31
	REX_STORE_U32(ctx.r11.u32 + r31.u32, r21.u32);
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// oris r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 1073741824;
	// stw r11,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r11.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82673F74;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x826740ac
	if (!ctx.cr0.eq) goto loc_826740AC;
	// addi r10,r29,52
	ctx.r10.s64 = r29.s64 + 52;
	// addi r11,r31,4
	ctx.r11.s64 = r31.s64 + 4;
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// lwz r10,56(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 56);
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// lwz r10,56(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 56);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r11,56(r29)
	REX_STORE_U32(r29.u32 + 56, ctx.r11.u32);
	// lwz r11,72(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 72);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,72(r29)
	REX_STORE_U32(r29.u32 + 72, ctx.r11.u32);
	// b 0x82673ffc
	goto loc_82673FFC;
loc_82673FAC:
	// lbz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 60);
	// clrlwi r10,r28,24
	ctx.r10.u64 = r28.u32 & 0xFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8267418c
	if (!ctx.cr6.eq) goto loc_8267418C;
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// lwz r7,100(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r6,104(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r5,96(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r4,108(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// bl 0x82673098
	ctx.lr = 0x82673FD8;
	sub_82673098(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8267418c
	if (ctx.cr0.eq) goto loc_8267418C;
loc_82673FE0:
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
	// bne 0x82673fe0
	if (!ctx.cr0.eq) goto loc_82673FE0;
loc_82673FFC:
	// li r31,0
	r31.s64 = 0;
	// addic. r25,r25,-1
	ctx.xer.ca = r25.u32 > 0;
	r25.s64 = r25.s64 + -1;
	ctx.cr0.compare<int32_t>(r25.s32, 0, ctx.xer);
	// bne 0x82673e04
	if (!ctx.cr0.eq) goto loc_82673E04;
loc_82674008:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x82674184
	if (ctx.cr6.eq) goto loc_82674184;
	// lis r11,4626
	ctx.r11.s64 = 303169536;
	// lis r10,13364
	ctx.r10.s64 = 875823104;
	// ori r5,r11,4626
	ctx.r5.u64 = ctx.r11.u64 | 4626;
	// ori r30,r10,13364
	r30.u64 = ctx.r10.u64 | 13364;
loc_82674020:
	// cmplwi cr6,r23,13
	ctx.cr6.compare<uint32_t>(r23.u32, 13, ctx.xer);
	// blt cr6,0x826740a0
	if (ctx.cr6.lt) goto loc_826740A0;
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r22,r22,-1
	r22.s64 = r22.s64 + -1;
	// addi r24,r24,13
	r24.s64 = r24.s64 + 13;
	// addi r23,r23,-13
	r23.s64 = r23.s64 + -13;
	// lwz r4,5(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 5);
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lwz r7,1(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 1);
	// lwz r6,9(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 9);
	// bl 0x82672760
	ctx.lr = 0x82674050;
	sub_82672760(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x826740bc
	if (!ctx.cr0.eq) goto loc_826740BC;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82672a28
	ctx.lr = 0x82674060;
	sub_82672A28(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x826740bc
	if (!ctx.cr0.eq) goto loc_826740BC;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82672a80
	ctx.lr = 0x82674070;
	sub_82672A80(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x826740bc
	if (!ctx.cr0.eq) goto loc_826740BC;
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x826740a0
	if (!ctx.cr6.lt) goto loc_826740A0;
	// subf r11,r4,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r4.u64;
	// cmplwi cr6,r11,1000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1000, ctx.xer);
	// bgt cr6,0x826740a0
	if (ctx.cr6.gt) goto loc_826740A0;
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// beq cr6,0x826740a0
	if (ctx.cr6.eq) goto loc_826740A0;
	// cmpw cr6,r6,r30
	ctx.cr6.compare<int32_t>(ctx.r6.s32, r30.s32, ctx.xer);
	// bne cr6,0x8267417c
	if (!ctx.cr6.eq) goto loc_8267417C;
loc_826740A0:
	// lis r30,-32646
	r30.s64 = -2139488256;
	// ori r30,r30,4106
	r30.u64 = r30.u64 | 4106;
	// b 0x826741c0
	goto loc_826741C0;
loc_826740AC:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82672c40
	ctx.lr = 0x826740B8;
	sub_82672C40(ctx, base);
	// b 0x826741c0
	goto loc_826741C0;
loc_826740BC:
	// lbz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 60);
	// clrlwi r10,r8,24
	ctx.r10.u64 = ctx.r8.u32 & 0xFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8267418c
	if (!ctx.cr6.eq) goto loc_8267418C;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x8267418c
	if (!ctx.cr6.eq) goto loc_8267418C;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// addi r9,r31,116
	ctx.r9.s64 = r31.s64 + 116;
	// lwz r10,44(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 44);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r11,r11,29
	ctx.r11.s64 = ctx.r11.s64 + 29;
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// ble cr6,0x82674154
	if (!ctx.cr6.gt) goto loc_82674154;
loc_82674100:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r21
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r21.u32, ctx.xer);
	// beq cr6,0x82674120
	if (ctx.cr6.eq) goto loc_82674120;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82674100
	if (ctx.cr6.lt) goto loc_82674100;
	// b 0x82674154
	goto loc_82674154;
loc_82674120:
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// beq cr6,0x82674150
	if (ctx.cr6.eq) goto loc_82674150;
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// beq cr6,0x8267418c
	if (ctx.cr6.eq) goto loc_8267418C;
	// cmpw cr6,r10,r30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r30.s32, ctx.xer);
	// beq cr6,0x82674150
	if (ctx.cr6.eq) goto loc_82674150;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x82674154
	if (ctx.cr6.lt) goto loc_82674154;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bge cr6,0x82674154
	if (!ctx.cr6.lt) goto loc_82674154;
loc_82674150:
	// stwx r6,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r6.u32);
loc_82674154:
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x8267418c
	if (!ctx.cr6.lt) goto loc_8267418C;
loc_8267415C:
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
	// bne 0x8267415c
	if (!ctx.cr0.eq) goto loc_8267415C;
	// li r31,0
	r31.s64 = 0;
loc_8267417C:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// bne cr6,0x82674020
	if (!ctx.cr6.eq) goto loc_82674020;
loc_82674184:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x826741bc
	if (ctx.cr6.eq) goto loc_826741BC;
loc_8267418C:
	// lis r30,-32646
	r30.s64 = -2139488256;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// ori r30,r30,4106
	r30.u64 = r30.u64 | 4106;
	// beq cr6,0x826741c0
	if (ctx.cr6.eq) goto loc_826741C0;
loc_8267419C:
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
	// bne 0x8267419c
	if (!ctx.cr0.eq) goto loc_8267419C;
	// b 0x826741c0
	goto loc_826741C0;
loc_826741BC:
	// li r30,0
	r30.s64 = 0;
loc_826741C0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1cec
	return;
}

DEFINE_REX_FUNC(sub_8268AA88) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8268AA90;
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
	// bl 0x823ef5f0
	ctx.lr = 0x8268AAB4;
	sub_823EF5F0(ctx, base);
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
	// bl 0x8268a690
	ctx.lr = 0x8268AACC;
	sub_8268A690(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge 0x8268aafc
	if (!ctx.cr0.lt) goto loc_8268AAFC;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8268ab1c
	if (ctx.cr6.eq) goto loc_8268AB1C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268AAF0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// b 0x8268ab1c
	goto loc_8268AB1C;
loc_8268AAFC:
	// lis r9,-32119
	ctx.r9.s64 = -2104950784;
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// lis r10,-32151
	ctx.r10.s64 = -2107047936;
	// addi r8,r9,-6012
	ctx.r8.s64 = ctx.r9.s64 + -6012;
	// addi r11,r11,-22184
	ctx.r11.s64 = ctx.r11.s64 + -22184;
	// addi r10,r10,-22024
	ctx.r10.s64 = ctx.r10.s64 + -22024;
	// stw r11,-6012(r9)
	REX_STORE_U32(ctx.r9.u32 + -6012, ctx.r11.u32);
	// stw r10,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
loc_8268AB1C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8268EE20) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,259
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 259, ctx.xer);
	// bne cr6,0x8268ee3c
	if (!ctx.cr6.eq) goto loc_8268EE3C;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8268EE3C:
	// stw r10,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// addi r11,r8,8
	ctx.r11.s64 = ctx.r8.s64 + 8;
	// lwz r9,8(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8268ee78
	if (!ctx.cr6.eq) goto loc_8268EE78;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8268ee78
	if (ctx.cr6.eq) goto loc_8268EE78;
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x8268ee6c
	if (!ctx.cr6.eq) goto loc_8268EE6C;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_8268EE6C:
	// lwz r7,4(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// stw r10,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
loc_8268EE78:
	// stw r10,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8268ee90
	if (ctx.cr6.eq) goto loc_8268EE90;
	// stw r4,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
	// b 0x8268ee94
	goto loc_8268EE94;
loc_8268EE90:
	// stw r4,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r4.u32);
loc_8268EE94:
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r4,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82694360) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r8,-32248
	ctx.r8.s64 = -2113404928;
	// li r10,63
	ctx.r10.s64 = 63;
	// addi r9,r8,-3344
	ctx.r9.s64 = ctx.r8.s64 + -3344;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f0,-3344(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -3344);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// fsubs f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
loc_82694388:
	// lfs f13,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f1,f13
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f13.f64));
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x826943a4
	if (!ctx.cr6.lt) goto loc_826943A4;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_826943A4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x82694388
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82694388;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82695D70) {
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
	// bl 0x826a1ca4
	ctx.lr = 0x82695D78;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x826a2ca8
	ctx.lr = 0x82695D80;
	// stwu r1,-2064(r1)
	ea = -2064 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lfs f31,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	f31.f64 = double(temp.f32);
	// mr r25,r10
	r25.u64 = ctx.r10.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f0,-2408(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -2408);
	ctx.f0.f64 = double(temp.f32);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// fmuls f13,f31,f0
	ctx.f13.f64 = double(float(f31.f64 * ctx.f0.f64));
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lfs f28,3704(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3704);
	f28.f64 = double(temp.f32);
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// lfs f0,19288(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 19288);
	ctx.f0.f64 = double(temp.f32);
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// fdivs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 / f31.f64));
	// fsubs f12,f13,f28
	ctx.f12.f64 = double(float(ctx.f13.f64 - f28.f64));
	// fsel f13,f13,f13,f12
	ctx.f13.f64 = ctx.f13.f64 >= 0.0 ? ctx.f13.f64 : ctx.f12.f64;
	// fctiwz f13,f13
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bge cr6,0x82695de4
	if (!ctx.cr6.lt) goto loc_82695DE4;
	// li r11,5
	ctx.r11.s64 = 5;
loc_82695DE4:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f13,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// lfs f12,16236(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16236);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,-2452(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -2452);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82695e1c
	if (!ctx.cr6.gt) goto loc_82695E1C;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82695E1C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,0
	ctx.r4.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r4,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lfs f29,3720(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3720);
	f29.f64 = double(temp.f32);
	// fadds f13,f0,f29
	ctx.f13.f64 = double(float(ctx.f0.f64 + f29.f64));
	// fctiwz f13,f13
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// addi r29,r11,1
	r29.s64 = ctx.r11.s64 + 1;
	// ble cr6,0x82695e68
	if (!ctx.cr6.gt) goto loc_82695E68;
loc_82695E48:
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r11,r27
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r27.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82695e68
	if (ctx.cr6.gt) goto loc_82695E68;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// stw r4,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// cmpw cr6,r4,r9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82695e48
	if (ctx.cr6.lt) goto loc_82695E48;
loc_82695E68:
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82695fa4
	if (!ctx.cr6.gt) goto loc_82695FA4;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826956a8
	ctx.lr = 0x82695E84;
	sub_826956A8(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826956a8
	ctx.lr = 0x82695E98;
	sub_826956A8(ctx, base);
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82695eb0
	if (ctx.cr6.gt) goto loc_82695EB0;
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82695EB0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,3716
	ctx.r11.s64 = ctx.r11.s64 + 3716;
	// lfs f30,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	f30.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bne cr6,0x82695ecc
	if (!ctx.cr6.eq) goto loc_82695ECC;
	// fmr f1,f28
	ctx.f1.f64 = f28.f64;
	// b 0x82695ed0
	goto loc_82695ED0;
loc_82695ECC:
	// fdivs f1,f28,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(f28.f64 / ctx.f0.f64));
loc_82695ED0:
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82695bb8
	ctx.lr = 0x82695EE0;
	sub_82695BB8(ctx, base);
	// addi r6,r1,928
	ctx.r6.s64 = ctx.r1.s64 + 928;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82695bb8
	ctx.lr = 0x82695EF0;
	sub_82695BB8(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble cr6,0x82695f54
	if (!ctx.cr6.gt) goto loc_82695F54;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
	// subf r10,r31,r27
	ctx.r10.u64 = r27.u64 - r31.u64;
loc_82695F04:
	// lfsx f13,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r1,928
	ctx.r9.s64 = ctx.r1.s64 + 928;
	// fadds f12,f13,f29
	ctx.f12.f64 = double(float(ctx.f13.f64 + f29.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f0,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f12
	ctx.f13.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f13,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f13.u64);
	// lwz r8,116(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r8,r9
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82695f4c
	if (!ctx.cr6.lt) goto loc_82695F4C;
	// fdivs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
loc_82695F4C:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82695f04
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82695F04;
loc_82695F54:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// addi r9,r1,108
	ctx.r9.s64 = ctx.r1.s64 + 108;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r7,r1,528
	ctx.r7.s64 = ctx.r1.s64 + 528;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lfs f1,-2412(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -2412);
	ctx.f1.f64 = double(temp.f32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82696b50
	ctx.lr = 0x82695F7C;
	sub_82696B50(ctx, base);
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// addi r8,r1,100
	ctx.r8.s64 = ctx.r1.s64 + 100;
	// lwz r6,108(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,528
	ctx.r4.s64 = ctx.r1.s64 + 528;
	// bl 0x82698ae8
	ctx.lr = 0x82695F9C;
	sub_82698AE8(ctx, base);
	// lfs f0,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82695fbc
	goto loc_82695FBC;
loc_82695FA4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f31,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r11,r11,3716
	ctx.r11.s64 = ctx.r11.s64 + 3716;
	// lfs f30,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	f30.f64 = double(temp.f32);
	// stfs f30,104(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmr f0,f30
	ctx.f0.f64 = f30.f64;
loc_82695FBC:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lfs f12,0(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r24.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// lfs f13,-2416(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -2416);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f31,f12,f29,f13
	f31.f64 = double(float(-std::fma(ctx.f12.f64, f29.f64, -ctx.f13.f64)));
	// bgt cr6,0x82695fdc
	if (ctx.cr6.gt) goto loc_82695FDC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3784(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3784);
	ctx.f0.f64 = double(temp.f32);
loc_82695FDC:
	// fcmpu cr6,f0,f28
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f28.f64);
	// blt cr6,0x82695fec
	if (ctx.cr6.lt) goto loc_82695FEC;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lfs f0,-2424(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -2424);
	ctx.f0.f64 = double(temp.f32);
loc_82695FEC:
	// fsubs f1,f28,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(f28.f64 - ctx.f0.f64));
	// bl 0x826a1830
	ctx.lr = 0x82695FF4;
	sub_826A1830(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lfs f0,-2428(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -2428);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bge cr6,0x82696014
	if (!ctx.cr6.lt) goto loc_82696014;
	// fmr f0,f30
	ctx.f0.f64 = f30.f64;
	// b 0x82696038
	goto loc_82696038;
loc_82696014:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,32332(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32332);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8269602c
	if (!ctx.cr6.gt) goto loc_8269602C;
	// fmr f0,f28
	ctx.f0.f64 = f28.f64;
	// b 0x82696038
	goto loc_82696038;
loc_8269602C:
	// fsubs f0,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - f31.f64));
	// fsubs f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 - f31.f64));
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
loc_82696038:
	// lfs f13,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,0(r24)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r24.u32 + 0, temp.u32);
	// stfs f13,0(r26)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r26.u32 + 0, temp.u32);
	// stfs f0,0(r23)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r23.u32 + 0, temp.u32);
	// addi r1,r1,2064
	ctx.r1.s64 = ctx.r1.s64 + 2064;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x826a2cf4
	ctx.lr = 0x82696054;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(__savevmx_126) {
	REX_FUNC_PROLOGUE();
	PPCVRegister v126{};
	PPCVRegister v127{};
	uint32_t ea{};
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

DEFINE_REX_FUNC(__restvmx_25) {
	REX_FUNC_PROLOGUE();
	PPCVRegister v25{};
	PPCVRegister v26{};
	PPCVRegister v27{};
	PPCVRegister v28{};
	PPCVRegister v29{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	uint32_t ea{};
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

DEFINE_REX_FUNC(__restvmx_89) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(sub_826B0230) {
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
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// bne cr6,0x826b0268
	if (!ctx.cr6.eq) goto loc_826B0268;
	// bl 0x826a3408
	ctx.lr = 0x826B0248;
	sub_826A3408(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x826a33d0
	ctx.lr = 0x826B0254;
	sub_826A33D0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,9
	ctx.r10.s64 = 9;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x826b02d4
	goto loc_826B02D4;
loc_826B0268:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826b0280
	if (ctx.cr6.lt) goto loc_826B0280;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r11,31232(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 31232);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x826b02a4
	if (ctx.cr6.lt) goto loc_826B02A4;
loc_826B0280:
	// bl 0x826a3408
	ctx.lr = 0x826B0284;
	sub_826A3408(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x826a33d0
	ctx.lr = 0x826B0290;
	sub_826A33D0(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8269cb20
	ctx.lr = 0x826B029C;
	sub_8269CB20(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x826b02d4
	goto loc_826B02D4;
loc_826B02A4:
	// srawi r11,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 5;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,31264
	ctx.r10.s64 = ctx.r10.s64 + 31264;
	// clrlwi r11,r3,27
	ctx.r11.u64 = ctx.r3.u32 & 0x1F;
	// mulli r11,r11,72
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(72));
	// lwzx r10,r9,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x826b0280
	if (ctx.cr0.eq) goto loc_826B0280;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_826B02D4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826B5EB0) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x826b5eec
	if (!ctx.cr6.eq) goto loc_826B5EEC;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// stw r10,112(r3)
	REX_STORE_U32(ctx.r3.u32 + 112, ctx.r10.u32);
	// lwz r9,100(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x826B5EDC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_826B5EEC:
	// li r9,5
	ctx.r9.s64 = 5;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r3,140
	ctx.r10.s64 = ctx.r3.s64 + 140;
	// stw r11,112(r3)
	REX_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
	// addi r11,r4,-4
	ctx.r11.s64 = ctx.r4.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_826B5F04:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x826b5f04
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826B5F04;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r7,r4,20
	ctx.r7.s64 = ctx.r4.s64 + 20;
	// addi r10,r3,160
	ctx.r10.s64 = ctx.r3.s64 + 160;
	// addi r11,r7,-4
	ctx.r11.s64 = ctx.r7.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_826B5F24:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x826b5f24
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826B5F24;
	// li r8,5
	ctx.r8.s64 = 5;
	// addi r11,r4,40
	ctx.r11.s64 = ctx.r4.s64 + 40;
	// addi r9,r3,180
	ctx.r9.s64 = ctx.r3.s64 + 180;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_826B5F44:
	// lwzu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x826b5f44
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826B5F44;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r10,r3,200
	ctx.r10.s64 = ctx.r3.s64 + 200;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_826B5F60:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x826b5f60
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826B5F60;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r10,r3,220
	ctx.r10.s64 = ctx.r3.s64 + 220;
	// addi r11,r7,-4
	ctx.r11.s64 = ctx.r7.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_826B5F7C:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x826b5f7c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826B5F7C;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r4,56
	ctx.r11.s64 = ctx.r4.s64 + 56;
	// addi r10,r3,240
	ctx.r10.s64 = ctx.r3.s64 + 240;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_826B5F98:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x826b5f98
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826B5F98;
	// bl 0x826b5bf8
	ctx.lr = 0x826B5FA8;
	sub_826B5BF8(ctx, base);
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

DEFINE_REX_FUNC(sub_826BD1B0) {
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
	ctx.lr = 0x826BD1B8;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stw r30,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r30,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, r30.u8);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,572(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 572);
	// mr r26,r30
	r26.u64 = r30.u64;
	// bl 0x826c6d18
	ctx.lr = 0x826BD1F4;
	sub_826C6D18(ctx, base);
	// lis r11,-32688
	ctx.r11.s64 = -2142240768;
	// ori r29,r11,22
	r29.u64 = ctx.r11.u64 | 22;
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r29.u32, ctx.xer);
	// beq cr6,0x826bd244
	if (ctx.cr6.eq) goto loc_826BD244;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826bd358
	if (ctx.cr6.lt) goto loc_826BD358;
loc_826BD20C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826bd358
	if (ctx.cr6.lt) goto loc_826BD358;
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x826c7890
	ctx.lr = 0x826BD220;
	sub_826C7890(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826bd358
	if (ctx.cr6.lt) goto loc_826BD358;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,572(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 572);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x826c6d80
	ctx.lr = 0x826BD23C;
	sub_826C6D80(ctx, base);
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r29.u32, ctx.xer);
	// bne cr6,0x826bd20c
	if (!ctx.cr6.eq) goto loc_826BD20C;
loc_826BD244:
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,572(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 572);
	// bl 0x826c6de8
	ctx.lr = 0x826BD250;
	sub_826C6DE8(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,568(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 568);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x826c6d18
	ctx.lr = 0x826BD264;
	sub_826C6D18(ctx, base);
	// li r27,1
	r27.s64 = 1;
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r29.u32, ctx.xer);
	// beq cr6,0x826bd308
	if (ctx.cr6.eq) goto loc_826BD308;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826bd358
	if (ctx.cr6.lt) goto loc_826BD358;
loc_826BD278:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826bd358
	if (ctx.cr6.lt) goto loc_826BD358;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x826bd298
	if (!ctx.cr6.eq) goto loc_826BD298;
	// stw r27,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r27.u32);
	// b 0x826bd2a4
	goto loc_826BD2A4;
loc_826BD298:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x826bd2a8
	if (!ctx.cr6.eq) goto loc_826BD2A8;
	// stw r30,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r30.u32);
loc_826BD2A4:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_826BD2A8:
	// stw r30,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, r30.u32);
	// clrlwi r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stb r30,20(r10)
	REX_STORE_U8(ctx.r10.u32 + 20, r30.u8);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r30,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, r30.u32);
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r30,12(r8)
	REX_STORE_U32(ctx.r8.u32 + 12, r30.u32);
	// lwz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r30,24(r7)
	REX_STORE_U32(ctx.r7.u32 + 24, r30.u32);
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r30,28(r6)
	REX_STORE_U32(ctx.r6.u32 + 28, r30.u32);
	// lbz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x826bd2ec
	if (!ctx.cr6.eq) goto loc_826BD2EC;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r26,80(r11)
	r26.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
loc_826BD2EC:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,568(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 568);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x826c6d80
	ctx.lr = 0x826BD300;
	sub_826C6D80(ctx, base);
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r29.u32, ctx.xer);
	// bne cr6,0x826bd278
	if (!ctx.cr6.eq) goto loc_826BD278;
loc_826BD308:
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,568(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 568);
	// bl 0x826c6de8
	ctx.lr = 0x826BD314;
	sub_826C6DE8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// clrldi r4,r26,32
	ctx.r4.u64 = r26.u64 & 0xFFFFFFFF;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826BD334;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826bd358
	if (ctx.cr6.lt) goto loc_826BD358;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r26,596(r31)
	REX_STORE_U32(r31.u32 + 596, r26.u32);
	// stb r28,592(r31)
	REX_STORE_U8(r31.u32 + 592, r28.u8);
	// stw r30,536(r31)
	REX_STORE_U32(r31.u32 + 536, r30.u32);
	// stw r11,532(r31)
	REX_STORE_U32(r31.u32 + 532, ctx.r11.u32);
	// stw r27,556(r31)
	REX_STORE_U32(r31.u32 + 556, r27.u32);
	// stw r30,588(r31)
	REX_STORE_U32(r31.u32 + 588, r30.u32);
loc_826BD358:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_826CCD10) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x826CCD18;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826ccf74
	if (ctx.cr6.eq) goto loc_826CCF74;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x826ccf74
	if (ctx.cr6.eq) goto loc_826CCF74;
	// lhz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,352
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 352, ctx.xer);
	// beq cr6,0x826ccd54
	if (ctx.cr6.eq) goto loc_826CCD54;
	// cmplwi cr6,r11,353
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 353, ctx.xer);
	// beq cr6,0x826ccd54
	if (ctx.cr6.eq) goto loc_826CCD54;
	// cmplwi cr6,r11,357
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 357, ctx.xer);
	// li r28,0
	r28.s64 = 0;
	// bne cr6,0x826ccd58
	if (!ctx.cr6.eq) goto loc_826CCD58;
loc_826CCD54:
	// li r28,1
	r28.s64 = 1;
loc_826CCD58:
	// cmplwi cr6,r11,354
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 354, ctx.xer);
	// beq cr6,0x826ccd6c
	if (ctx.cr6.eq) goto loc_826CCD6C;
	// cmplwi cr6,r11,358
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 358, ctx.xer);
	// li r30,0
	r30.s64 = 0;
	// bne cr6,0x826ccd70
	if (!ctx.cr6.eq) goto loc_826CCD70;
loc_826CCD6C:
	// li r30,1
	r30.s64 = 1;
loc_826CCD70:
	// cmplwi cr6,r11,355
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 355, ctx.xer);
	// beq cr6,0x826ccd84
	if (ctx.cr6.eq) goto loc_826CCD84;
	// cmplwi cr6,r11,359
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 359, ctx.xer);
	// li r31,0
	r31.s64 = 0;
	// bne cr6,0x826ccd88
	if (!ctx.cr6.eq) goto loc_826CCD88;
loc_826CCD84:
	// li r31,1
	r31.s64 = 1;
loc_826CCD88:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne cr6,0x826ccdac
	if (!ctx.cr6.eq) goto loc_826CCDAC;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne cr6,0x826ccdac
	if (!ctx.cr6.eq) goto loc_826CCDAC;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne cr6,0x826ccdb4
	if (!ctx.cr6.eq) goto loc_826CCDB4;
loc_826CCDA0:
	// lis r3,-32764
	ctx.r3.s64 = -2147221504;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_826CCDAC:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq cr6,0x826ccdc4
	if (ctx.cr6.eq) goto loc_826CCDC4;
loc_826CCDB4:
	// lwz r11,4(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x826ccda0
	if (!ctx.cr6.eq) goto loc_826CCDA0;
loc_826CCDC4:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x826ccdfc
	if (ctx.cr6.eq) goto loc_826CCDFC;
	// lwz r11,4(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// cmplwi cr6,r11,48000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48000, ctx.xer);
	// bgt cr6,0x826ccda0
	if (ctx.cr6.gt) goto loc_826CCDA0;
	// lhz r7,2(r8)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r8.u32 + 2);
	// cmplwi cr6,r7,2
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 2, ctx.xer);
	// bgt cr6,0x826ccda0
	if (ctx.cr6.gt) goto loc_826CCDA0;
	// lhz r11,14(r8)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r8.u32 + 14);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// beq cr6,0x826cce08
	if (ctx.cr6.eq) goto loc_826CCE08;
	// lis r3,-32764
	ctx.r3.s64 = -2147221504;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_826CCDFC:
	// lhz r7,2(r8)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r8.u32 + 2);
	// cmplwi cr6,r7,32
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 32, ctx.xer);
	// bgt cr6,0x826ccda0
	if (ctx.cr6.gt) goto loc_826CCDA0;
loc_826CCE08:
	// lwz r6,4(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x826ccda0
	if (ctx.cr6.eq) goto loc_826CCDA0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x826ccda0
	if (ctx.cr6.eq) goto loc_826CCDA0;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8261dc48
	ctx.lr = 0x826CCE24;
	sub_8261DC48(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826ccf7c
	if (ctx.cr6.lt) goto loc_826CCF7C;
	// lhz r11,14(r8)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r8.u32 + 14);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// beq cr6,0x826cce50
	if (ctx.cr6.eq) goto loc_826CCE50;
	// cmplwi cr6,r11,20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 20, ctx.xer);
	// beq cr6,0x826cce50
	if (ctx.cr6.eq) goto loc_826CCE50;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// beq cr6,0x826cce50
	if (ctx.cr6.eq) goto loc_826CCE50;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bne cr6,0x826ccda0
	if (!ctx.cr6.eq) goto loc_826CCDA0;
loc_826CCE50:
	// lwz r11,8(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826ccf74
	if (!ctx.cr6.eq) goto loc_826CCF74;
	// lhz r11,12(r8)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r8.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826ccf74
	if (ctx.cr6.eq) goto loc_826CCF74;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r10,16(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x826cce98
	if (ctx.cr6.eq) goto loc_826CCE98;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne cr6,0x826ccda0
	if (!ctx.cr6.eq) goto loc_826CCDA0;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x826cce98
	if (ctx.cr6.eq) goto loc_826CCE98;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne cr6,0x826ccda0
	if (!ctx.cr6.eq) goto loc_826CCDA0;
loc_826CCE98:
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x826cceac
	if (ctx.cr6.eq) goto loc_826CCEAC;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne cr6,0x826ccda0
	if (!ctx.cr6.eq) goto loc_826CCDA0;
loc_826CCEAC:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq cr6,0x826ccec4
	if (ctx.cr6.eq) goto loc_826CCEC4;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x826ccec4
	if (ctx.cr6.eq) goto loc_826CCEC4;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x826ccda0
	if (!ctx.cr6.eq) goto loc_826CCDA0;
loc_826CCEC4:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x826ccee8
	if (ctx.cr6.eq) goto loc_826CCEE8;
	// lhz r11,24(r5)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r5.u32 + 24);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x826ccda0
	if (ctx.cr6.lt) goto loc_826CCDA0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bgt cr6,0x826ccda0
	if (ctx.cr6.gt) goto loc_826CCDA0;
	// lhz r29,0(r5)
	r29.u64 = REX_LOAD_U16(ctx.r5.u32 + 0);
loc_826CCEE8:
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq cr6,0x826ccf18
	if (ctx.cr6.eq) goto loc_826CCF18;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x826ccda0
	if (!ctx.cr6.eq) goto loc_826CCDA0;
	// rlwinm r9,r29,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x8;
	// clrlwi r10,r29,16
	ctx.r10.u64 = r29.u32 & 0xFFFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x826ccda0
	if (!ctx.cr6.eq) goto loc_826CCDA0;
	// rlwinm r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826ccda0
	if (!ctx.cr6.eq) goto loc_826CCDA0;
loc_826CCF18:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x826ccf40
	if (ctx.cr6.eq) goto loc_826CCF40;
	// rlwinm r10,r29,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826ccda0
	if (!ctx.cr6.eq) goto loc_826CCDA0;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x826ccda0
	if (ctx.cr6.lt) goto loc_826CCDA0;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x826ccda0
	if (ctx.cr6.gt) goto loc_826CCDA0;
loc_826CCF40:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x826ccf7c
	if (ctx.cr6.eq) goto loc_826CCF7C;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x826ccda0
	if (ctx.cr6.gt) goto loc_826CCDA0;
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x826ccf7c
	if (!ctx.cr6.lt) goto loc_826CCF7C;
	// lis r3,-32764
	ctx.r3.s64 = -2147221504;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_826CCF74:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_826CCF7C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_826DF9B0) {
	REX_FUNC_PROLOGUE();
	// lwz r9,44(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// stw r8,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r8.u32);
	// stw r8,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r8.u32);
	// lwz r10,16(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// ld r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826df9fc
	if (!ctx.cr6.eq) goto loc_826DF9FC;
	// stw r4,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
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
loc_826DF9FC:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// ld r6,8(r10)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// cmpld cr6,r7,r6
	ctx.cr6.compare<uint64_t>(ctx.r7.u64, ctx.r6.u64, ctx.xer);
	// bge cr6,0x826dfa48
	if (!ctx.cr6.lt) goto loc_826DFA48;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826dfa28
	if (!ctx.cr6.eq) goto loc_826DFA28;
	// stw r11,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// stw r8,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r8.u32);
	// stw r4,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// stw r4,20(r9)
	REX_STORE_U32(ctx.r9.u32 + 20, ctx.r4.u32);
loc_826DFA28:
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826df9fc
	if (!ctx.cr6.eq) goto loc_826DF9FC;
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
loc_826DFA48:
	// stw r11,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826dfa64
	if (ctx.cr6.eq) goto loc_826DFA64;
	// stw r4,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
loc_826DFA64:
	// stw r4,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,24(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,24(r9)
	REX_STORE_U32(ctx.r9.u32 + 24, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826E35C0) {
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
	ctx.lr = 0x826E35C8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,348(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 348);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826e369c
	if (ctx.cr6.eq) goto loc_826E369C;
	// lwz r11,244(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 244);
	// li r27,0
	r27.s64 = 0;
	// mr r26,r27
	r26.u64 = r27.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826e3688
	if (!ctx.cr6.gt) goto loc_826E3688;
	// mr r29,r27
	r29.u64 = r27.u64;
loc_826E35F4:
	// lwz r11,348(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 348);
	// lwzx r10,r29,r11
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826e3674
	if (ctx.cr6.eq) goto loc_826E3674;
	// lwz r11,244(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 244);
	// mr r28,r27
	r28.u64 = r27.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826e3654
	if (!ctx.cr6.gt) goto loc_826E3654;
	// mr r31,r27
	r31.u64 = r27.u64;
loc_826E3618:
	// lwz r11,348(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 348);
	// lwzx r11,r29,r11
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// lwzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826e3640
	if (ctx.cr6.eq) goto loc_826E3640;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x82634e78
	ctx.lr = 0x826E3634;
	sub_82634E78(ctx, base);
	// lwz r11,348(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 348);
	// lwzx r10,r29,r11
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// stwx r27,r10,r31
	REX_STORE_U32(ctx.r10.u32 + r31.u32, r27.u32);
loc_826E3640:
	// lwz r11,244(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 244);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x826e3618
	if (ctx.cr6.lt) goto loc_826E3618;
loc_826E3654:
	// lwz r11,348(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 348);
	// lwzx r10,r29,r11
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826e3674
	if (ctx.cr6.eq) goto loc_826E3674;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x82634e78
	ctx.lr = 0x826E366C;
	sub_82634E78(ctx, base);
	// lwz r11,348(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 348);
	// stwx r27,r29,r11
	REX_STORE_U32(r29.u32 + ctx.r11.u32, r27.u32);
loc_826E3674:
	// lwz r11,244(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 244);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x826e35f4
	if (ctx.cr6.lt) goto loc_826E35F4;
loc_826E3688:
	// lwz r3,348(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 348);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826e369c
	if (ctx.cr6.eq) goto loc_826E369C;
	// bl 0x82634e78
	ctx.lr = 0x826E3698;
	sub_82634E78(ctx, base);
	// stw r27,348(r30)
	REX_STORE_U32(r30.u32 + 348, r27.u32);
loc_826E369C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_826EF528) {
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
	ctx.lr = 0x826EF530;
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
	// beq cr6,0x826ef560
	if (ctx.cr6.eq) goto loc_826EF560;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x826ef6dc
	if (ctx.cr6.eq) goto loc_826EF6DC;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf8
	return;
loc_826EF560:
	// lhz r11,150(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 150);
	// lhz r10,34(r27)
	ctx.r10.u64 = REX_LOAD_U16(r27.u32 + 34);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x826ef6cc
	if (!ctx.cr6.lt) goto loc_826EF6CC;
	// addi r25,r31,224
	r25.s64 = r31.s64 + 224;
loc_826EF578:
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
	// bl 0x826f1f78
	ctx.lr = 0x826EF5A0;
	sub_826F1F78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826ef81c
	if (ctx.cr6.lt) goto loc_826EF81C;
	// lwz r11,40(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826ef6a0
	if (ctx.cr6.eq) goto loc_826EF6A0;
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
loc_826EF5CC:
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
	// bgt cr6,0x826ef5f8
	if (ctx.cr6.gt) goto loc_826EF5F8;
	// mr r29,r10
	r29.u64 = ctx.r10.u64;
loc_826EF5F8:
	// lwz r11,268(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 268);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x826ef68c
	if (!ctx.cr6.lt) goto loc_826EF68C;
	// lwz r10,4(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x826ef618
	if (ctx.cr6.lt) goto loc_826EF618;
	// mr r30,r10
	r30.u64 = ctx.r10.u64;
loc_826EF618:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x826e58b8
	ctx.lr = 0x826EF628;
	sub_826E58B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826ef81c
	if (ctx.cr6.lt) goto loc_826EF81C;
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
	// beq cr6,0x826ef664
	if (ctx.cr6.eq) goto loc_826EF664;
	// lbz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U8(r26.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,0(r26)
	REX_STORE_U8(r26.u32 + 0, ctx.r11.u8);
	// b 0x826ef674
	goto loc_826EF674;
loc_826EF664:
	// lwz r11,36(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 36);
	// subf r11,r29,r11
	ctx.r11.u64 = ctx.r11.u64 - r29.u64;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + r30.u64;
	// stw r10,36(r28)
	REX_STORE_U32(r28.u32 + 36, ctx.r10.u32);
loc_826EF674:
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
	// b 0x826ef5cc
	goto loc_826EF5CC;
loc_826EF68C:
	// lwz r11,304(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 304);
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x826ef6a4
	if (!ctx.cr6.lt) goto loc_826EF6A4;
	// stbx r24,r8,r26
	REX_STORE_U8(ctx.r8.u32 + r26.u32, r24.u8);
	// b 0x826ef6a4
	goto loc_826EF6A4;
loc_826EF6A0:
	// stw r24,36(r28)
	REX_STORE_U32(r28.u32 + 36, r24.u32);
loc_826EF6A4:
	// lwz r11,400(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 400);
	// sth r11,152(r31)
	REX_STORE_U16(r31.u32 + 152, ctx.r11.u16);
	// lhz r11,150(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 150);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// sth r8,150(r31)
	REX_STORE_U16(r31.u32 + 150, ctx.r8.u16);
	// clrlwi r5,r8,16
	ctx.r5.u64 = ctx.r8.u32 & 0xFFFF;
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// lhz r6,34(r27)
	ctx.r6.u64 = REX_LOAD_U16(r27.u32 + 34);
	// cmpw cr6,r4,r6
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x826ef578
	if (ctx.cr6.lt) goto loc_826EF578;
loc_826EF6CC:
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
	// sth r24,150(r31)
	REX_STORE_U16(r31.u32 + 150, r24.u16);
	// sth r24,152(r31)
	REX_STORE_U16(r31.u32 + 152, r24.u16);
loc_826EF6DC:
	// lhz r11,150(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 150);
	// lhz r10,34(r27)
	ctx.r10.u64 = REX_LOAD_U16(r27.u32 + 34);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x826ef81c
	if (!ctx.cr6.lt) goto loc_826EF81C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r26,r11,-24976
	r26.s64 = ctx.r11.s64 + -24976;
loc_826EF6F8:
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
	// beq cr6,0x826ef7f8
	if (ctx.cr6.eq) goto loc_826EF7F8;
	// lwz r29,12(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r30,20(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lbz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826ef7f8
	if (ctx.cr6.eq) goto loc_826EF7F8;
	// lhz r11,152(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 152);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826ef768
	if (!ctx.cr6.eq) goto loc_826EF768;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,7
	ctx.r4.s64 = 7;
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// bl 0x826e58b8
	ctx.lr = 0x826EF748;
	sub_826E58B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826ef81c
	if (ctx.cr6.lt) goto loc_826EF81C;
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
loc_826EF768:
	// lhz r11,152(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 152);
	// lbz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U8(r29.u32 + 0);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x826ef7f8
	if (!ctx.cr6.lt) goto loc_826EF7F8;
	// addi r28,r31,224
	r28.s64 = r31.s64 + 224;
loc_826EF780:
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
	// bl 0x82641440
	ctx.lr = 0x826EF798;
	sub_82641440(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826ef81c
	if (ctx.cr6.lt) goto loc_826EF81C;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82638ef0
	ctx.lr = 0x826EF7AC;
	sub_82638EF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826ef81c
	if (ctx.cr6.lt) goto loc_826EF81C;
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
	// lhz r11,152(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 152);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// clrlwi r4,r7,16
	ctx.r4.u64 = ctx.r7.u32 & 0xFFFF;
	// sth r7,152(r31)
	REX_STORE_U16(r31.u32 + 152, ctx.r7.u16);
	// lbz r5,0(r29)
	ctx.r5.u64 = REX_LOAD_U8(r29.u32 + 0);
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x826ef780
	if (ctx.cr6.lt) goto loc_826EF780;
loc_826EF7F8:
	// sth r24,152(r31)
	REX_STORE_U16(r31.u32 + 152, r24.u16);
	// lhz r11,150(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 150);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// sth r10,150(r31)
	REX_STORE_U16(r31.u32 + 150, ctx.r10.u16);
	// clrlwi r7,r10,16
	ctx.r7.u64 = ctx.r10.u32 & 0xFFFF;
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// lhz r8,34(r27)
	ctx.r8.u64 = REX_LOAD_U16(r27.u32 + 34);
	// cmpw cr6,r6,r8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x826ef6f8
	if (ctx.cr6.lt) goto loc_826EF6F8;
loc_826EF81C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_8270CBF8) {
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
	ctx.lr = 0x8270CC00;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,284(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 284);
	// li r27,0
	r27.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r26,1
	r26.s64 = 1;
	// stw r27,3988(r3)
	REX_STORE_U32(ctx.r3.u32 + 3988, r27.u32);
	// li r25,2
	r25.s64 = 2;
	// stw r27,20956(r3)
	REX_STORE_U32(ctx.r3.u32 + 20956, r27.u32);
	// mr r30,r27
	r30.u64 = r27.u64;
	// stw r27,20952(r3)
	REX_STORE_U32(ctx.r3.u32 + 20952, r27.u32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8270cfa0
	if (!ctx.cr6.eq) goto loc_8270CFA0;
	// lwz r11,20908(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20908);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8270cfa0
	if (!ctx.cr6.eq) goto loc_8270CFA0;
	// lwz r11,3948(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 3948);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8270cf60
	if (ctx.cr6.eq) goto loc_8270CF60;
	// stw r26,3984(r3)
	REX_STORE_U32(ctx.r3.u32 + 3984, r26.u32);
loc_8270CC4C:
	// lwz r11,3988(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 3988);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8270d634
	if (ctx.cr6.eq) goto loc_8270D634;
	// lwz r11,20908(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 20908);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8270d4d4
	if (ctx.cr6.eq) goto loc_8270D4D4;
	// lwz r3,84(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 84);
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
	// bge 0x8270cc8c
	if (!ctx.cr0.lt) goto loc_8270CC8C;
	// bl 0x82725e38
	ctx.lr = 0x8270CC8C;
	sub_82725E38(ctx, base);
loc_8270CC8C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8270d1e0
	if (ctx.cr6.eq) goto loc_8270D1E0;
	// lwz r31,84(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 84);
	// li r30,6
	r30.s64 = 6;
	// stw r26,20952(r28)
	REX_STORE_U32(r28.u32 + 20952, r26.u32);
	// mr r29,r27
	r29.u64 = r27.u64;
	// stw r26,20956(r28)
	REX_STORE_U32(r28.u32 + 20956, r26.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bge cr6,0x8270cd10
	if (!ctx.cr6.lt) goto loc_8270CD10;
loc_8270CCB8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270cd10
	if (ctx.cr6.eq) goto loc_8270CD10;
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
	// bge 0x8270cd00
	if (!ctx.cr0.lt) goto loc_8270CD00;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270CD00;
	sub_82725E38(ctx, base);
loc_8270CD00:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8270ccb8
	if (ctx.cr6.gt) goto loc_8270CCB8;
loc_8270CD10:
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
	// bge 0x8270cd48
	if (!ctx.cr0.lt) goto loc_8270CD48;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270CD48;
	sub_82725E38(ctx, base);
loc_8270CD48:
	// lwz r31,84(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 84);
	// li r30,6
	r30.s64 = 6;
	// stw r29,20960(r28)
	REX_STORE_U32(r28.u32 + 20960, r29.u32);
	// mr r29,r27
	r29.u64 = r27.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bge cr6,0x8270cdc0
	if (!ctx.cr6.lt) goto loc_8270CDC0;
loc_8270CD68:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270cdc0
	if (ctx.cr6.eq) goto loc_8270CDC0;
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
	// bge 0x8270cdb0
	if (!ctx.cr0.lt) goto loc_8270CDB0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270CDB0;
	sub_82725E38(ctx, base);
loc_8270CDB0:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8270cd68
	if (ctx.cr6.gt) goto loc_8270CD68;
loc_8270CDC0:
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
	// bge 0x8270cdf8
	if (!ctx.cr0.lt) goto loc_8270CDF8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270CDF8;
	sub_82725E38(ctx, base);
loc_8270CDF8:
	// lwz r31,84(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 84);
	// li r30,6
	r30.s64 = 6;
	// stw r29,20964(r28)
	REX_STORE_U32(r28.u32 + 20964, r29.u32);
	// mr r29,r27
	r29.u64 = r27.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bge cr6,0x8270ce70
	if (!ctx.cr6.lt) goto loc_8270CE70;
loc_8270CE18:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270ce70
	if (ctx.cr6.eq) goto loc_8270CE70;
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
	// bge 0x8270ce60
	if (!ctx.cr0.lt) goto loc_8270CE60;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270CE60;
	sub_82725E38(ctx, base);
loc_8270CE60:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8270ce18
	if (ctx.cr6.gt) goto loc_8270CE18;
loc_8270CE70:
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
	// bge 0x8270cea8
	if (!ctx.cr0.lt) goto loc_8270CEA8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270CEA8;
	sub_82725E38(ctx, base);
loc_8270CEA8:
	// stw r30,20968(r28)
	REX_STORE_U32(r28.u32 + 20968, r30.u32);
	// mr r29,r27
	r29.u64 = r27.u64;
	// lwz r31,84(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 84);
	// li r30,6
	r30.s64 = 6;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bge cr6,0x8270cf20
	if (!ctx.cr6.lt) goto loc_8270CF20;
loc_8270CEC8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270cf20
	if (ctx.cr6.eq) goto loc_8270CF20;
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
	// bge 0x8270cf10
	if (!ctx.cr0.lt) goto loc_8270CF10;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270CF10;
	sub_82725E38(ctx, base);
loc_8270CF10:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8270cec8
	if (ctx.cr6.gt) goto loc_8270CEC8;
loc_8270CF20:
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
	// bge 0x8270d370
	if (!ctx.cr0.lt) goto loc_8270D370;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270CF58;
	sub_82725E38(ctx, base);
	// stw r30,20972(r28)
	REX_STORE_U32(r28.u32 + 20972, r30.u32);
	// b 0x8270d634
	goto loc_8270D634;
loc_8270CF60:
	// lwz r3,84(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 84);
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
	// bge 0x8270cf88
	if (!ctx.cr0.lt) goto loc_8270CF88;
	// bl 0x82725e38
	ctx.lr = 0x8270CF88;
	sub_82725E38(ctx, base);
loc_8270CF88:
	// subfic r11,r31,0
	ctx.xer.ca = r31.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - r31.u64;
	// subfe r10,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r10,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r9,r11,3
	ctx.r9.s64 = ctx.r11.s64 + 3;
	// stw r9,3984(r28)
	REX_STORE_U32(r28.u32 + 3984, ctx.r9.u32);
	// b 0x8270cc4c
	goto loc_8270CC4C;
loc_8270CFA0:
	// lwz r11,3948(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 3948);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8270cff0
	if (ctx.cr6.eq) goto loc_8270CFF0;
	// stw r26,3984(r28)
	REX_STORE_U32(r28.u32 + 3984, r26.u32);
	// lwz r3,84(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 84);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ld r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// rldicr r9,r10,1,62
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// rldicl r31,r10,1,63
	r31.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r9,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r9.u64);
	// bge 0x8270cfd8
	if (!ctx.cr0.lt) goto loc_8270CFD8;
	// bl 0x82725e38
	ctx.lr = 0x8270CFD8;
	sub_82725E38(ctx, base);
loc_8270CFD8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8270d1ac
	if (ctx.cr6.eq) goto loc_8270D1AC;
	// stw r26,3988(r28)
	REX_STORE_U32(r28.u32 + 3988, r26.u32);
	// b 0x8270d1ac
	goto loc_8270D1AC;
loc_8270CFE8:
	// mr r30,r26
	r30.u64 = r26.u64;
	// stw r26,3988(r28)
	REX_STORE_U32(r28.u32 + 3988, r26.u32);
loc_8270CFF0:
	// lwz r3,84(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 84);
	// lwz r11,248(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 248);
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
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
	// ble cr6,0x8270d0e4
	if (!ctx.cr6.gt) goto loc_8270D0E4;
	// bge 0x8270d024
	if (!ctx.cr0.lt) goto loc_8270D024;
	// bl 0x82725e38
	ctx.lr = 0x8270D024;
	sub_82725E38(ctx, base);
loc_8270D024:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8270d1a4
	if (!ctx.cr6.eq) goto loc_8270D1A4;
	// lwz r3,84(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 84);
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
	// bge 0x8270d054
	if (!ctx.cr0.lt) goto loc_8270D054;
	// bl 0x82725e38
	ctx.lr = 0x8270D054;
	sub_82725E38(ctx, base);
loc_8270D054:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8270d1d0
	if (!ctx.cr6.eq) goto loc_8270D1D0;
	// lwz r3,84(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 84);
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
	// bge 0x8270d084
	if (!ctx.cr0.lt) goto loc_8270D084;
	// bl 0x82725e38
	ctx.lr = 0x8270D084;
	sub_82725E38(ctx, base);
loc_8270D084:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8270d1d8
	if (!ctx.cr6.eq) goto loc_8270D1D8;
	// lwz r11,284(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 284);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8270d0a4
	if (!ctx.cr6.eq) goto loc_8270D0A4;
	// lwz r11,20908(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 20908);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8270d0dc
	if (ctx.cr6.eq) goto loc_8270D0DC;
loc_8270D0A4:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne cr6,0x8270d0dc
	if (!ctx.cr6.eq) goto loc_8270D0DC;
	// lwz r3,84(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 84);
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
	// bge 0x8270d0d4
	if (!ctx.cr0.lt) goto loc_8270D0D4;
	// bl 0x82725e38
	ctx.lr = 0x8270D0D4;
	sub_82725E38(ctx, base);
loc_8270D0D4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8270cfe8
	if (!ctx.cr6.eq) goto loc_8270CFE8;
loc_8270D0DC:
	// stw r27,3984(r28)
	REX_STORE_U32(r28.u32 + 3984, r27.u32);
	// b 0x8270d1ac
	goto loc_8270D1AC;
loc_8270D0E4:
	// bge 0x8270d0ec
	if (!ctx.cr0.lt) goto loc_8270D0EC;
	// bl 0x82725e38
	ctx.lr = 0x8270D0EC;
	sub_82725E38(ctx, base);
loc_8270D0EC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8270d1d0
	if (!ctx.cr6.eq) goto loc_8270D1D0;
	// lwz r3,84(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 84);
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
	// bge 0x8270d11c
	if (!ctx.cr0.lt) goto loc_8270D11C;
	// bl 0x82725e38
	ctx.lr = 0x8270D11C;
	sub_82725E38(ctx, base);
loc_8270D11C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8270d0dc
	if (!ctx.cr6.eq) goto loc_8270D0DC;
	// lwz r3,84(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 84);
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
	// bge 0x8270d14c
	if (!ctx.cr0.lt) goto loc_8270D14C;
	// bl 0x82725e38
	ctx.lr = 0x8270D14C;
	sub_82725E38(ctx, base);
loc_8270D14C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8270d1d8
	if (!ctx.cr6.eq) goto loc_8270D1D8;
	// lwz r11,284(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 284);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8270d16c
	if (!ctx.cr6.eq) goto loc_8270D16C;
	// lwz r11,20908(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 20908);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8270d1a4
	if (ctx.cr6.eq) goto loc_8270D1A4;
loc_8270D16C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne cr6,0x8270d1a4
	if (!ctx.cr6.eq) goto loc_8270D1A4;
	// lwz r3,84(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 84);
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
	// bge 0x8270d19c
	if (!ctx.cr0.lt) goto loc_8270D19C;
	// bl 0x82725e38
	ctx.lr = 0x8270D19C;
	sub_82725E38(ctx, base);
loc_8270D19C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8270cfe8
	if (!ctx.cr6.eq) goto loc_8270CFE8;
loc_8270D1A4:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,3984(r28)
	REX_STORE_U32(r28.u32 + 3984, ctx.r11.u32);
loc_8270D1AC:
	// lwz r11,3932(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 3932);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8270cc4c
	if (!ctx.cr6.eq) goto loc_8270CC4C;
	// lwz r11,3988(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 3988);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8270cc4c
	if (ctx.cr6.eq) goto loc_8270CC4C;
loc_8270D1C4:
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
loc_8270D1D0:
	// stw r26,3984(r28)
	REX_STORE_U32(r28.u32 + 3984, r26.u32);
	// b 0x8270d1ac
	goto loc_8270D1AC;
loc_8270D1D8:
	// stw r25,3984(r28)
	REX_STORE_U32(r28.u32 + 3984, r25.u32);
	// b 0x8270d1ac
	goto loc_8270D1AC;
loc_8270D1E0:
	// lwz r3,84(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 84);
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
	// bge 0x8270d208
	if (!ctx.cr0.lt) goto loc_8270D208;
	// bl 0x82725e38
	ctx.lr = 0x8270D208;
	sub_82725E38(ctx, base);
loc_8270D208:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// lwz r31,84(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 84);
	// li r30,6
	r30.s64 = 6;
	// mr r29,r27
	r29.u64 = r27.u64;
	// beq cr6,0x8270d378
	if (ctx.cr6.eq) goto loc_8270D378;
	// stw r26,20956(r28)
	REX_STORE_U32(r28.u32 + 20956, r26.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bge cr6,0x8270d288
	if (!ctx.cr6.lt) goto loc_8270D288;
loc_8270D230:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270d288
	if (ctx.cr6.eq) goto loc_8270D288;
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
	// bge 0x8270d278
	if (!ctx.cr0.lt) goto loc_8270D278;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270D278;
	sub_82725E38(ctx, base);
loc_8270D278:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8270d230
	if (ctx.cr6.gt) goto loc_8270D230;
loc_8270D288:
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
	// bge 0x8270d2c0
	if (!ctx.cr0.lt) goto loc_8270D2C0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270D2C0;
	sub_82725E38(ctx, base);
loc_8270D2C0:
	// stw r30,20968(r28)
	REX_STORE_U32(r28.u32 + 20968, r30.u32);
	// li r30,6
	r30.s64 = 6;
	// lwz r31,84(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 84);
	// mr r29,r27
	r29.u64 = r27.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bge cr6,0x8270d338
	if (!ctx.cr6.lt) goto loc_8270D338;
loc_8270D2E0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270d338
	if (ctx.cr6.eq) goto loc_8270D338;
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
	// bge 0x8270d328
	if (!ctx.cr0.lt) goto loc_8270D328;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270D328;
	sub_82725E38(ctx, base);
loc_8270D328:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8270d2e0
	if (ctx.cr6.gt) goto loc_8270D2E0;
loc_8270D338:
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
	// bge 0x8270d370
	if (!ctx.cr0.lt) goto loc_8270D370;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270D370;
	sub_82725E38(ctx, base);
loc_8270D370:
	// stw r30,20972(r28)
	REX_STORE_U32(r28.u32 + 20972, r30.u32);
	// b 0x8270d634
	goto loc_8270D634;
loc_8270D378:
	// stw r26,20952(r28)
	REX_STORE_U32(r28.u32 + 20952, r26.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bge cr6,0x8270d3e4
	if (!ctx.cr6.lt) goto loc_8270D3E4;
loc_8270D38C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270d3e4
	if (ctx.cr6.eq) goto loc_8270D3E4;
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
	// bge 0x8270d3d4
	if (!ctx.cr0.lt) goto loc_8270D3D4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270D3D4;
	sub_82725E38(ctx, base);
loc_8270D3D4:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8270d38c
	if (ctx.cr6.gt) goto loc_8270D38C;
loc_8270D3E4:
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
	// bge 0x8270d41c
	if (!ctx.cr0.lt) goto loc_8270D41C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270D41C;
	sub_82725E38(ctx, base);
loc_8270D41C:
	// stw r30,20960(r28)
	REX_STORE_U32(r28.u32 + 20960, r30.u32);
	// li r30,6
	r30.s64 = 6;
	// lwz r31,84(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 84);
	// mr r29,r27
	r29.u64 = r27.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bge cr6,0x8270d494
	if (!ctx.cr6.lt) goto loc_8270D494;
loc_8270D43C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270d494
	if (ctx.cr6.eq) goto loc_8270D494;
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
	// bge 0x8270d484
	if (!ctx.cr0.lt) goto loc_8270D484;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270D484;
	sub_82725E38(ctx, base);
loc_8270D484:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8270d43c
	if (ctx.cr6.gt) goto loc_8270D43C;
loc_8270D494:
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
	// bge 0x8270d4cc
	if (!ctx.cr0.lt) goto loc_8270D4CC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270D4CC;
	sub_82725E38(ctx, base);
loc_8270D4CC:
	// stw r30,20964(r28)
	REX_STORE_U32(r28.u32 + 20964, r30.u32);
	// b 0x8270d634
	goto loc_8270D634;
loc_8270D4D4:
	// lwz r31,84(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 84);
	// li r30,6
	r30.s64 = 6;
	// mr r29,r27
	r29.u64 = r27.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bge cr6,0x8270d548
	if (!ctx.cr6.lt) goto loc_8270D548;
loc_8270D4F0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270d548
	if (ctx.cr6.eq) goto loc_8270D548;
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
	// bge 0x8270d538
	if (!ctx.cr0.lt) goto loc_8270D538;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270D538;
	sub_82725E38(ctx, base);
loc_8270D538:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8270d4f0
	if (ctx.cr6.gt) goto loc_8270D4F0;
loc_8270D548:
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
	// bge 0x8270d580
	if (!ctx.cr0.lt) goto loc_8270D580;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270D580;
	sub_82725E38(ctx, base);
loc_8270D580:
	// stw r30,3996(r28)
	REX_STORE_U32(r28.u32 + 3996, r30.u32);
	// li r30,6
	r30.s64 = 6;
	// lwz r31,84(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 84);
	// mr r29,r27
	r29.u64 = r27.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bge cr6,0x8270d5f8
	if (!ctx.cr6.lt) goto loc_8270D5F8;
loc_8270D5A0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270d5f8
	if (ctx.cr6.eq) goto loc_8270D5F8;
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
	// bge 0x8270d5e8
	if (!ctx.cr0.lt) goto loc_8270D5E8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270D5E8;
	sub_82725E38(ctx, base);
loc_8270D5E8:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8270d5a0
	if (ctx.cr6.gt) goto loc_8270D5A0;
loc_8270D5F8:
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
	// bge 0x8270d630
	if (!ctx.cr0.lt) goto loc_8270D630;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270D630;
	sub_82725E38(ctx, base);
loc_8270D630:
	// stw r30,4000(r28)
	REX_STORE_U32(r28.u32 + 4000, r30.u32);
loc_8270D634:
	// lwz r11,3984(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 3984);
	// lwz r31,268(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 268);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8270d6c0
	if (!ctx.cr6.eq) goto loc_8270D6C0;
	// lwz r11,22512(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 22512);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8270d66c
	if (ctx.cr6.eq) goto loc_8270D66C;
	// bl 0x82718bb8
	ctx.lr = 0x8270D65C;
	sub_82718BB8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8270d678
	if (ctx.cr6.eq) goto loc_8270D678;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
loc_8270D66C:
	// bl 0x82706ca8
	ctx.lr = 0x8270D670;
	sub_82706CA8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8270da70
	if (!ctx.cr6.eq) goto loc_8270DA70;
loc_8270D678:
	// lwz r11,348(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 348);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8270d6fc
	if (ctx.cr6.eq) goto loc_8270D6FC;
	// lwz r11,144(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 144);
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8270d6fc
	if (!ctx.cr6.gt) goto loc_8270D6FC;
	// addi r11,r31,-24
	ctx.r11.s64 = r31.s64 + -24;
loc_8270D698:
	// lwz r9,24(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// rlwimi r8,r9,9,23,23
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 9) & 0x100) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFEFF);
	// rlwinm r7,r8,0,23,20
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFF9FF;
	// stwu r7,24(r11)
	ea = 24 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r11.u32 = ea;
	// lwz r6,144(r28)
	ctx.r6.u64 = REX_LOAD_U32(r28.u32 + 144);
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x8270d698
	if (ctx.cr6.lt) goto loc_8270D698;
	// b 0x8270d6fc
	goto loc_8270D6FC;
loc_8270D6C0:
	// lwz r11,3948(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 3948);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8270d6fc
	if (!ctx.cr6.eq) goto loc_8270D6FC;
	// lwz r11,144(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 144);
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8270d6fc
	if (!ctx.cr6.gt) goto loc_8270D6FC;
	// addi r11,r31,-24
	ctx.r11.s64 = r31.s64 + -24;
loc_8270D6E0:
	// lwz r9,24(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r8,r9,0,24,20
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFF8FF;
	// stwu r8,24(r11)
	ea = 24 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// lwz r7,144(r28)
	ctx.r7.u64 = REX_LOAD_U32(r28.u32 + 144);
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8270d6e0
	if (ctx.cr6.lt) goto loc_8270D6E0;
loc_8270D6FC:
	// lwz r11,14820(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 14820);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8270d77c
	if (ctx.cr6.eq) goto loc_8270D77C;
	// lwz r11,284(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 284);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8270d77c
	if (!ctx.cr6.eq) goto loc_8270D77C;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82706ca8
	ctx.lr = 0x8270D720;
	sub_82706CA8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8270da70
	if (!ctx.cr6.eq) goto loc_8270DA70;
	// lwz r11,14836(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 14836);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8270d77c
	if (ctx.cr6.eq) goto loc_8270D77C;
	// lwz r10,144(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 144);
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// lwz r11,268(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 268);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8270d77c
	if (!ctx.cr6.gt) goto loc_8270D77C;
loc_8270D748:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r8,r10,0,0,0
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8270d760
	if (ctx.cr6.eq) goto loc_8270D760;
	// rlwimi r10,r26,5,24,26
	ctx.r10.u64 = (__builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 5) & 0xE0) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF1F);
	// b 0x8270d764
	goto loc_8270D764;
loc_8270D760:
	// rlwinm r10,r10,0,27,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFF1F;
loc_8270D764:
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// lwz r10,144(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 144);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8270d748
	if (ctx.cr6.lt) goto loc_8270D748;
loc_8270D77C:
	// lwz r11,22512(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 22512);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8270d7a4
	if (ctx.cr6.eq) goto loc_8270D7A4;
	// bl 0x82718bb8
	ctx.lr = 0x8270D794;
	sub_82718BB8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8270d7b0
	if (ctx.cr6.eq) goto loc_8270D7B0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
loc_8270D7A4:
	// bl 0x82706ca8
	ctx.lr = 0x8270D7A8;
	sub_82706CA8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8270da70
	if (!ctx.cr6.eq) goto loc_8270DA70;
loc_8270D7B0:
	// lwz r31,84(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 84);
	// mr r30,r25
	r30.u64 = r25.u64;
	// stw r26,448(r28)
	REX_STORE_U32(r28.u32 + 448, r26.u32);
	// mr r29,r27
	r29.u64 = r27.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x8270d828
	if (!ctx.cr6.lt) goto loc_8270D828;
loc_8270D7D0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270d828
	if (ctx.cr6.eq) goto loc_8270D828;
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
	// bge 0x8270d818
	if (!ctx.cr0.lt) goto loc_8270D818;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270D818;
	sub_82725E38(ctx, base);
loc_8270D818:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8270d7d0
	if (ctx.cr6.gt) goto loc_8270D7D0;
loc_8270D828:
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
	// bge 0x8270d860
	if (!ctx.cr0.lt) goto loc_8270D860;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270D860;
	sub_82725E38(ctx, base);
loc_8270D860:
	// addi r11,r30,605
	ctx.r11.s64 = r30.s64 + 605;
	// lwz r31,84(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 84);
	// mr r30,r25
	r30.u64 = r25.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r29,r27
	r29.u64 = r27.u64;
	// lwzx r9,r10,r28
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + r28.u32);
	// stw r9,2400(r28)
	REX_STORE_U32(r28.u32 + 2400, ctx.r9.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x8270d8e4
	if (!ctx.cr6.lt) goto loc_8270D8E4;
loc_8270D88C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270d8e4
	if (ctx.cr6.eq) goto loc_8270D8E4;
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
	// bge 0x8270d8d4
	if (!ctx.cr0.lt) goto loc_8270D8D4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270D8D4;
	sub_82725E38(ctx, base);
loc_8270D8D4:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8270d88c
	if (ctx.cr6.gt) goto loc_8270D88C;
loc_8270D8E4:
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
	// bge 0x8270d91c
	if (!ctx.cr0.lt) goto loc_8270D91C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270D91C;
	sub_82725E38(ctx, base);
loc_8270D91C:
	// addi r11,r30,601
	ctx.r11.s64 = r30.s64 + 601;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r28
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + r28.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r9,2164(r28)
	REX_STORE_U32(r28.u32 + 2164, ctx.r9.u32);
	// beq cr6,0x8270d1c4
	if (ctx.cr6.eq) goto loc_8270D1C4;
	// lwz r11,4008(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4008);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8270d94c
	if (ctx.cr6.eq) goto loc_8270D94C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x827078c8
	ctx.lr = 0x8270D94C;
	sub_827078C8(ctx, base);
loc_8270D94C:
	// lwz r11,436(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 436);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8270da68
	if (ctx.cr6.eq) goto loc_8270DA68;
	// lwz r3,84(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 84);
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
	// bge 0x8270d980
	if (!ctx.cr0.lt) goto loc_8270D980;
	// bl 0x82725e38
	ctx.lr = 0x8270D980;
	sub_82725E38(ctx, base);
loc_8270D980:
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(r31.u32, 1, ctx.xer);
	// bne cr6,0x8270da58
	if (!ctx.cr6.eq) goto loc_8270DA58;
	// lwz r31,84(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 84);
	// mr r30,r25
	r30.u64 = r25.u64;
	// stw r27,328(r28)
	REX_STORE_U32(r28.u32 + 328, r27.u32);
	// mr r29,r27
	r29.u64 = r27.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x8270da00
	if (!ctx.cr6.lt) goto loc_8270DA00;
loc_8270D9A8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270da00
	if (ctx.cr6.eq) goto loc_8270DA00;
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
	// bge 0x8270d9f0
	if (!ctx.cr0.lt) goto loc_8270D9F0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270D9F0;
	sub_82725E38(ctx, base);
loc_8270D9F0:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8270d9a8
	if (ctx.cr6.gt) goto loc_8270D9A8;
loc_8270DA00:
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
	// bge 0x8270da38
	if (!ctx.cr0.lt) goto loc_8270DA38;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270DA38;
	sub_82725E38(ctx, base);
loc_8270DA38:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,26632
	ctx.r9.s64 = ctx.r11.s64 + 26632;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwzx r8,r10,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stw r8,336(r28)
	REX_STORE_U32(r28.u32 + 336, ctx.r8.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
loc_8270DA58:
	// stw r26,328(r28)
	REX_STORE_U32(r28.u32 + 328, r26.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
loc_8270DA68:
	// stw r27,328(r28)
	REX_STORE_U32(r28.u32 + 328, r27.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8270DA70:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_82773278) {
	REX_FUNC_PROLOGUE();
	// stw r3,20(r1)
	REX_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// stw r4,28(r1)
	REX_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// stw r5,36(r1)
	REX_STORE_U32(ctx.r1.u32 + 36, ctx.r5.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// stw r9,-88(r1)
	REX_STORE_U32(ctx.r1.u32 + -88, ctx.r9.u32);
	// lwz r8,20(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r7,48(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 48);
	// lwz r6,4(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// stw r6,-52(r1)
	REX_STORE_U32(ctx.r1.u32 + -52, ctx.r6.u32);
	// lwz r5,-88(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -88);
	// rlwinm r4,r5,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// divw r10,r4,r11
	ctx.r10.u64 = uint32_t((ctx.r11.s32 && !(ctx.r4.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r4.s32 / ctx.r11.s32 : 0);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// rotlwi r9,r4,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r4.u32, 1);
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// andc r7,r11,r8
	ctx.r7.u64 = ctx.r11.u64 & ~ctx.r8.u64;
	// twlgei r7,-1
	if (ctx.r7.s32 == -1 || ctx.r7.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// stw r10,-96(r1)
	REX_STORE_U32(ctx.r1.u32 + -96, ctx.r10.u32);
	// lwz r6,-88(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -88);
	// addi r5,r6,-1
	ctx.r5.s64 = ctx.r6.s64 + -1;
	// lwz r4,20(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r3,36(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 36);
	// mullw r11,r5,r3
	ctx.r11.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r3.s32);
	// lwz r10,-88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -88);
	// divw r9,r11,r10
	ctx.r9.u64 = uint32_t((ctx.r10.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r11.s32 / ctx.r10.s32 : 0);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// rotlwi r8,r11,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// addi r7,r8,-1
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// andc r6,r10,r7
	ctx.r6.u64 = ctx.r10.u64 & ~ctx.r7.u64;
	// twlgei r6,-1
	if (ctx.r6.s32 == -1 || ctx.r6.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// stw r9,-24(r1)
	REX_STORE_U32(ctx.r1.u32 + -24, ctx.r9.u32);
	// lwz r5,20(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r4,20(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r3,48(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 48);
	// lhz r11,14(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 14);
	// lwz r10,32(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 32);
	// mullw r9,r10,r11
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// addi r8,r9,31
	ctx.r8.s64 = ctx.r9.s64 + 31;
	// rlwinm r7,r8,0,0,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFE0;
	// li r6,8
	ctx.r6.s64 = 8;
	// divw r5,r7,r6
	ctx.r5.u64 = uint32_t((ctx.r6.s32 && !(ctx.r7.s32 == INT32_MIN && ctx.r6.s32 == -1)) ? ctx.r7.s32 / ctx.r6.s32 : 0);
	// stw r5,-76(r1)
	REX_STORE_U32(ctx.r1.u32 + -76, ctx.r5.u32);
	// lwz r4,20(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r3,48(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 48);
	// lhz r11,14(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 14);
	// lwz r10,-52(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -52);
	// mullw r9,r10,r11
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// addi r8,r9,31
	ctx.r8.s64 = ctx.r9.s64 + 31;
	// rlwinm r7,r8,0,0,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFE0;
	// li r6,8
	ctx.r6.s64 = 8;
	// divw r5,r7,r6
	ctx.r5.u64 = uint32_t((ctx.r6.s32 && !(ctx.r7.s32 == INT32_MIN && ctx.r6.s32 == -1)) ? ctx.r7.s32 / ctx.r6.s32 : 0);
	// stw r5,-40(r1)
	REX_STORE_U32(ctx.r1.u32 + -40, ctx.r5.u32);
	// lwz r4,20(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r3,32(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 32);
	// li r11,2
	ctx.r11.s64 = 2;
	// divw r10,r3,r11
	ctx.r10.u64 = uint32_t((ctx.r11.s32 && !(ctx.r3.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r3.s32 / ctx.r11.s32 : 0);
	// stw r10,-28(r1)
	REX_STORE_U32(ctx.r1.u32 + -28, ctx.r10.u32);
	// lwz r9,20(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r8,24(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
	// li r7,2
	ctx.r7.s64 = 2;
	// divw r6,r8,r7
	ctx.r6.u64 = uint32_t((ctx.r7.s32 && !(ctx.r8.s32 == INT32_MIN && ctx.r7.s32 == -1)) ? ctx.r8.s32 / ctx.r7.s32 : 0);
	// stw r6,-56(r1)
	REX_STORE_U32(ctx.r1.u32 + -56, ctx.r6.u32);
	// lwz r5,20(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r4,28(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 28);
	// li r3,2
	ctx.r3.s64 = 2;
	// divw r11,r4,r3
	ctx.r11.u64 = uint32_t((ctx.r3.s32 && !(ctx.r4.s32 == INT32_MIN && ctx.r3.s32 == -1)) ? ctx.r4.s32 / ctx.r3.s32 : 0);
	// stw r11,-68(r1)
	REX_STORE_U32(ctx.r1.u32 + -68, ctx.r11.u32);
	// lwz r10,20(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r9,36(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 36);
	// li r8,2
	ctx.r8.s64 = 2;
	// divw r7,r9,r8
	ctx.r7.u64 = uint32_t((ctx.r8.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r8.s32 == -1)) ? ctx.r9.s32 / ctx.r8.s32 : 0);
	// stw r7,-44(r1)
	REX_STORE_U32(ctx.r1.u32 + -44, ctx.r7.u32);
	// lwz r6,20(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r5,64(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 64);
	// stw r5,-100(r1)
	REX_STORE_U32(ctx.r1.u32 + -100, ctx.r5.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r4,-112(r1)
	REX_STORE_U32(ctx.r1.u32 + -112, ctx.r4.u32);
	// lwz r3,-68(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -68);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// lwz r10,-44(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -44);
	// mullw r9,r11,r10
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// lwz r8,-68(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -68);
	// divw r7,r9,r8
	ctx.r7.u64 = uint32_t((ctx.r8.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r8.s32 == -1)) ? ctx.r9.s32 / ctx.r8.s32 : 0);
	// twllei r8,0
	if (ctx.r8.s32 == 0 || ctx.r8.u32 < 0u) ppc_trap(ctx, base, 0);
	// rotlwi r6,r9,1
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// addi r5,r6,-1
	ctx.r5.s64 = ctx.r6.s64 + -1;
	// andc r4,r8,r5
	ctx.r4.u64 = ctx.r8.u64 & ~ctx.r5.u64;
	// twlgei r4,-1
	if (ctx.r4.s32 == -1 || ctx.r4.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// stw r7,-64(r1)
	REX_STORE_U32(ctx.r1.u32 + -64, ctx.r7.u32);
	// lwz r3,36(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 36);
	// li r11,2
	ctx.r11.s64 = 2;
	// divw r10,r3,r11
	ctx.r10.u64 = uint32_t((ctx.r11.s32 && !(ctx.r3.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r3.s32 / ctx.r11.s32 : 0);
	// stw r10,-84(r1)
	REX_STORE_U32(ctx.r1.u32 + -84, ctx.r10.u32);
	// lwz r9,-24(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -24);
	// lwz r8,36(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 36);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x82773414
	if (!ctx.cr6.gt) goto loc_82773414;
	// lwz r7,36(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 36);
	// stw r7,-24(r1)
	REX_STORE_U32(ctx.r1.u32 + -24, ctx.r7.u32);
loc_82773414:
	// lwz r6,-64(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -64);
	// lwz r5,-84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -84);
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// ble cr6,0x8277342c
	if (!ctx.cr6.gt) goto loc_8277342C;
	// lwz r4,-84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -84);
	// stw r4,-64(r1)
	REX_STORE_U32(ctx.r1.u32 + -64, ctx.r4.u32);
loc_8277342C:
	// lwz r3,-96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -96);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt cr6,0x8277343c
	if (ctx.cr6.gt) goto loc_8277343C;
	// b 0x82774130
	goto loc_82774130;
loc_8277343C:
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r10,72(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82773478
	if (ctx.cr6.eq) goto loc_82773478;
	// lwz r9,20(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r8,76(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 76);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82773478
	if (!ctx.cr6.eq) goto loc_82773478;
	// lwz r7,20(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r6,80(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 80);
	// stw r6,-72(r1)
	REX_STORE_U32(ctx.r1.u32 + -72, ctx.r6.u32);
	// lwz r5,20(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r4,92(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 92);
	// stw r4,-36(r1)
	REX_STORE_U32(ctx.r1.u32 + -36, ctx.r4.u32);
	// b 0x827734a4
	goto loc_827734A4;
loc_82773478:
	// lwz r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r10,28(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// lwz r9,32(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mullw r8,r10,r9
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// lwz r7,56(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// add r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stw r6,-72(r1)
	REX_STORE_U32(ctx.r1.u32 + -72, ctx.r6.u32);
	// lwz r5,20(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r4,32(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 32);
	// stw r4,-36(r1)
	REX_STORE_U32(ctx.r1.u32 + -36, ctx.r4.u32);
loc_827734A4:
	// lwz r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r11,64(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// stw r11,-100(r1)
	REX_STORE_U32(ctx.r1.u32 + -100, ctx.r11.u32);
	// lwz r10,20(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r9,40(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x827734d8
	if (ctx.cr6.eq) goto loc_827734D8;
	// lwz r8,-96(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -96);
	// addi r7,r8,-256
	ctx.r7.s64 = ctx.r8.s64 + -256;
	// li r6,2
	ctx.r6.s64 = 2;
	// divw r5,r7,r6
	ctx.r5.u64 = uint32_t((ctx.r6.s32 && !(ctx.r7.s32 == INT32_MIN && ctx.r6.s32 == -1)) ? ctx.r7.s32 / ctx.r6.s32 : 0);
	// stw r5,-16(r1)
	REX_STORE_U32(ctx.r1.u32 + -16, ctx.r5.u32);
	// b 0x827734e0
	goto loc_827734E0;
loc_827734D8:
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r4,-16(r1)
	REX_STORE_U32(ctx.r1.u32 + -16, ctx.r4.u32);
loc_827734E0:
	// lwz r3,-16(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// stw r3,-92(r1)
	REX_STORE_U32(ctx.r1.u32 + -92, ctx.r3.u32);
	// lwz r11,28(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// lwz r10,-96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -96);
	// mullw r9,r11,r10
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// lwz r8,-92(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -92);
	// add r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r7,-92(r1)
	REX_STORE_U32(ctx.r1.u32 + -92, ctx.r7.u32);
	// lwz r6,-92(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -92);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bge cr6,0x827735f0
	if (!ctx.cr6.lt) goto loc_827735F0;
	// lwz r5,-96(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -96);
	// lwz r4,-92(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -92);
	// subf r3,r4,r5
	ctx.r3.u64 = ctx.r5.u64 - ctx.r4.u64;
	// lwz r11,-96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -96);
	// divw r10,r3,r11
	ctx.r10.u64 = uint32_t((ctx.r11.s32 && !(ctx.r3.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r3.s32 / ctx.r11.s32 : 0);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// rotlwi r9,r3,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// andc r7,r11,r8
	ctx.r7.u64 = ctx.r11.u64 & ~ctx.r8.u64;
	// twlgei r7,-1
	if (ctx.r7.s32 == -1 || ctx.r7.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// stw r10,-112(r1)
	REX_STORE_U32(ctx.r1.u32 + -112, ctx.r10.u32);
	// lwz r6,28(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// stw r6,-104(r1)
	REX_STORE_U32(ctx.r1.u32 + -104, ctx.r6.u32);
	// b 0x82773550
	goto loc_82773550;
loc_82773544:
	// lwz r5,-104(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -104);
	// addi r4,r5,1
	ctx.r4.s64 = ctx.r5.s64 + 1;
	// stw r4,-104(r1)
	REX_STORE_U32(ctx.r1.u32 + -104, ctx.r4.u32);
loc_82773550:
	// lwz r3,28(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// lwz r11,-112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -112);
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r9,-104(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -104);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x827735d8
	if (!ctx.cr6.lt) goto loc_827735D8;
	// lwz r8,20(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r7,64(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 64);
	// stw r7,-20(r1)
	REX_STORE_U32(ctx.r1.u32 + -20, ctx.r7.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r6,-32(r1)
	REX_STORE_U32(ctx.r1.u32 + -32, ctx.r6.u32);
	// b 0x8277358c
	goto loc_8277358C;
loc_82773580:
	// lwz r5,-32(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// addi r4,r5,1
	ctx.r4.s64 = ctx.r5.s64 + 1;
	// stw r4,-32(r1)
	REX_STORE_U32(ctx.r1.u32 + -32, ctx.r4.u32);
loc_8277358C:
	// lwz r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r11,-32(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// lwz r10,32(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x827735c4
	if (!ctx.cr6.lt) goto loc_827735C4;
	// lwz r9,-72(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -72);
	// lwz r8,-32(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// lwz r7,-20(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -20);
	// lbz r6,0(r7)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// stbx r6,r9,r8
	REX_STORE_U8(ctx.r9.u32 + ctx.r8.u32, ctx.r6.u8);
	// lwz r5,-20(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -20);
	// addi r4,r5,1
	ctx.r4.s64 = ctx.r5.s64 + 1;
	// stw r4,-20(r1)
	REX_STORE_U32(ctx.r1.u32 + -20, ctx.r4.u32);
	// b 0x82773580
	goto loc_82773580;
loc_827735C4:
	// lwz r3,-72(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -72);
	// lwz r11,-36(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -36);
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r10,-72(r1)
	REX_STORE_U32(ctx.r1.u32 + -72, ctx.r10.u32);
	// b 0x82773544
	goto loc_82773544;
loc_827735D8:
	// lwz r9,-96(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -96);
	// lwz r8,-112(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -112);
	// mullw r7,r9,r8
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// lwz r6,-92(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -92);
	// add r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 + ctx.r7.u64;
	// stw r5,-92(r1)
	REX_STORE_U32(ctx.r1.u32 + -92, ctx.r5.u32);
loc_827735F0:
	// lwz r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// lwz r3,-112(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -112);
	// add r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 + ctx.r3.u64;
	// stw r11,-104(r1)
	REX_STORE_U32(ctx.r1.u32 + -104, ctx.r11.u32);
	// b 0x82773610
	goto loc_82773610;
loc_82773604:
	// lwz r10,-104(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -104);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r9,-104(r1)
	REX_STORE_U32(ctx.r1.u32 + -104, ctx.r9.u32);
loc_82773610:
	// lwz r8,-104(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -104);
	// lwz r7,-24(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -24);
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x82773704
	if (!ctx.cr6.lt) goto loc_82773704;
	// lwz r6,-92(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -92);
	// clrlwi r5,r6,24
	ctx.r5.u64 = ctx.r6.u32 & 0xFF;
	// stw r5,-80(r1)
	REX_STORE_U32(ctx.r1.u32 + -80, ctx.r5.u32);
	// lwz r4,20(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r3,-92(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -92);
	// srawi r11,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 8;
	// lwz r10,32(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 32);
	// mullw r9,r10,r11
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// stw r9,-108(r1)
	REX_STORE_U32(ctx.r1.u32 + -108, ctx.r9.u32);
	// lwz r8,-80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -80);
	// subfic r7,r8,256
	ctx.xer.ca = ctx.r8.u32 <= 256;
	ctx.r7.u64 = static_cast<uint64_t>(256) - ctx.r8.u64;
	// stw r7,-60(r1)
	REX_STORE_U32(ctx.r1.u32 + -60, ctx.r7.u32);
	// lwz r6,20(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r5,64(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 64);
	// lwz r4,-108(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -108);
	// add r3,r5,r4
	ctx.r3.u64 = ctx.r5.u64 + ctx.r4.u64;
	// stw r3,-48(r1)
	REX_STORE_U32(ctx.r1.u32 + -48, ctx.r3.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-32(r1)
	REX_STORE_U32(ctx.r1.u32 + -32, ctx.r11.u32);
	// b 0x8277367c
	goto loc_8277367C;
loc_82773670:
	// lwz r10,-32(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r9,-32(r1)
	REX_STORE_U32(ctx.r1.u32 + -32, ctx.r9.u32);
loc_8277367C:
	// lwz r8,20(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r7,-32(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// lwz r6,32(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 32);
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x827736e0
	if (!ctx.cr6.lt) goto loc_827736E0;
	// lwz r5,-48(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -48);
	// lbz r4,0(r5)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r5.u32 + 0);
	// lwz r3,-60(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -60);
	// mullw r11,r3,r4
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r4.s32);
	// lwz r10,20(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r9,-48(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -48);
	// lwz r8,32(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// lbzx r7,r9,r8
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// lwz r6,-80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -80);
	// mullw r5,r6,r7
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// add r4,r11,r5
	ctx.r4.u64 = ctx.r11.u64 + ctx.r5.u64;
	// srawi r3,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 8;
	// lwz r11,-72(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -72);
	// lwz r10,-32(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// stbx r9,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u8);
	// lwz r8,-48(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -48);
	// addi r7,r8,1
	ctx.r7.s64 = ctx.r8.s64 + 1;
	// stw r7,-48(r1)
	REX_STORE_U32(ctx.r1.u32 + -48, ctx.r7.u32);
	// b 0x82773670
	goto loc_82773670;
loc_827736E0:
	// lwz r6,-72(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -72);
	// lwz r5,-36(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -36);
	// add r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 + ctx.r5.u64;
	// stw r4,-72(r1)
	REX_STORE_U32(ctx.r1.u32 + -72, ctx.r4.u32);
	// lwz r3,-92(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -92);
	// lwz r11,-96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -96);
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r10,-92(r1)
	REX_STORE_U32(ctx.r1.u32 + -92, ctx.r10.u32);
	// b 0x82773604
	goto loc_82773604;
loc_82773704:
	// lwz r9,-24(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -24);
	// lwz r8,36(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 36);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x8277389c
	if (!ctx.cr6.lt) goto loc_8277389C;
	// lwz r7,-24(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -24);
	// stw r7,-104(r1)
	REX_STORE_U32(ctx.r1.u32 + -104, ctx.r7.u32);
	// b 0x8277372c
	goto loc_8277372C;
loc_82773720:
	// lwz r6,-104(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -104);
	// addi r5,r6,1
	ctx.r5.s64 = ctx.r6.s64 + 1;
	// stw r5,-104(r1)
	REX_STORE_U32(ctx.r1.u32 + -104, ctx.r5.u32);
loc_8277372C:
	// lwz r4,-104(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -104);
	// lwz r3,36(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 36);
	// cmpw cr6,r4,r3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x8277389c
	if (!ctx.cr6.lt) goto loc_8277389C;
	// lwz r11,-92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -92);
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// stw r10,-80(r1)
	REX_STORE_U32(ctx.r1.u32 + -80, ctx.r10.u32);
	// lwz r9,20(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r8,-92(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -92);
	// srawi r7,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 8;
	// lwz r6,32(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 32);
	// mullw r5,r6,r7
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// stw r5,-108(r1)
	REX_STORE_U32(ctx.r1.u32 + -108, ctx.r5.u32);
	// lwz r4,-80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -80);
	// subfic r3,r4,256
	ctx.xer.ca = ctx.r4.u32 <= 256;
	ctx.r3.u64 = static_cast<uint64_t>(256) - ctx.r4.u64;
	// stw r3,-60(r1)
	REX_STORE_U32(ctx.r1.u32 + -60, ctx.r3.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r10,64(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// lwz r9,-108(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -108);
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r8,-48(r1)
	REX_STORE_U32(ctx.r1.u32 + -48, ctx.r8.u32);
	// lwz r7,-92(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -92);
	// srawi r6,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 8;
	// lwz r5,-88(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -88);
	// addi r4,r5,-1
	ctx.r4.s64 = ctx.r5.s64 + -1;
	// cmpw cr6,r6,r4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r4.s32, ctx.xer);
	// bge cr6,0x82773828
	if (!ctx.cr6.lt) goto loc_82773828;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r3,-32(r1)
	REX_STORE_U32(ctx.r1.u32 + -32, ctx.r3.u32);
	// b 0x827737b0
	goto loc_827737B0;
loc_827737A4:
	// lwz r11,-32(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,-32(r1)
	REX_STORE_U32(ctx.r1.u32 + -32, ctx.r10.u32);
loc_827737B0:
	// lwz r9,20(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r8,-32(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// lwz r7,32(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 32);
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x82773814
	if (!ctx.cr6.lt) goto loc_82773814;
	// lwz r6,-48(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -48);
	// lbz r5,0(r6)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r6.u32 + 0);
	// lwz r4,-60(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -60);
	// mullw r3,r4,r5
	ctx.r3.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r5.s32);
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r10,-48(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -48);
	// lwz r9,32(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// lbzx r8,r10,r9
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// lwz r7,-80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -80);
	// mullw r6,r7,r8
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// add r5,r3,r6
	ctx.r5.u64 = ctx.r3.u64 + ctx.r6.u64;
	// srawi r4,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 8;
	// lwz r3,-72(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -72);
	// lwz r11,-32(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// stbx r10,r3,r11
	REX_STORE_U8(ctx.r3.u32 + ctx.r11.u32, ctx.r10.u8);
	// lwz r9,-48(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -48);
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// stw r8,-48(r1)
	REX_STORE_U32(ctx.r1.u32 + -48, ctx.r8.u32);
	// b 0x827737a4
	goto loc_827737A4;
loc_82773814:
	// lwz r7,-72(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -72);
	// lwz r6,-36(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -36);
	// add r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 + ctx.r6.u64;
	// stw r5,-72(r1)
	REX_STORE_U32(ctx.r1.u32 + -72, ctx.r5.u32);
	// b 0x82773888
	goto loc_82773888;
loc_82773828:
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r4,-32(r1)
	REX_STORE_U32(ctx.r1.u32 + -32, ctx.r4.u32);
	// b 0x82773840
	goto loc_82773840;
loc_82773834:
	// lwz r3,-32(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// stw r11,-32(r1)
	REX_STORE_U32(ctx.r1.u32 + -32, ctx.r11.u32);
loc_82773840:
	// lwz r10,20(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r9,-32(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// lwz r8,32(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x82773878
	if (!ctx.cr6.lt) goto loc_82773878;
	// lwz r7,-72(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -72);
	// lwz r6,-32(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// lwz r5,-48(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -48);
	// lbz r4,0(r5)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r5.u32 + 0);
	// stbx r4,r7,r6
	REX_STORE_U8(ctx.r7.u32 + ctx.r6.u32, ctx.r4.u8);
	// lwz r3,-48(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -48);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// stw r11,-48(r1)
	REX_STORE_U32(ctx.r1.u32 + -48, ctx.r11.u32);
	// b 0x82773834
	goto loc_82773834;
loc_82773878:
	// lwz r10,-72(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -72);
	// lwz r9,-36(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -36);
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r8,-72(r1)
	REX_STORE_U32(ctx.r1.u32 + -72, ctx.r8.u32);
loc_82773888:
	// lwz r7,-92(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -92);
	// lwz r6,-96(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -96);
	// add r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 + ctx.r6.u64;
	// stw r5,-92(r1)
	REX_STORE_U32(ctx.r1.u32 + -92, ctx.r5.u32);
	// b 0x82773720
	goto loc_82773720;
loc_8277389C:
	// lwz r4,20(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r3,72(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 72);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x827738d8
	if (ctx.cr6.eq) goto loc_827738D8;
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r10,76(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x827738d8
	if (!ctx.cr6.eq) goto loc_827738D8;
	// lwz r9,20(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r8,84(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 84);
	// stw r8,-72(r1)
	REX_STORE_U32(ctx.r1.u32 + -72, ctx.r8.u32);
	// lwz r7,20(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r6,96(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 96);
	// stw r6,-36(r1)
	REX_STORE_U32(ctx.r1.u32 + -36, ctx.r6.u32);
	// b 0x82773928
	goto loc_82773928;
loc_827738D8:
	// lwz r5,20(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r4,20(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r11,36(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 36);
	// lwz r10,32(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mullw r9,r11,r10
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// lwz r8,56(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 56);
	// add r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwz r6,20(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r5,28(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// lwz r4,44(r6)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r6.u32 + 44);
	// mullw r3,r5,r4
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r4.s32);
	// li r11,2
	ctx.r11.s64 = 2;
	// divw r10,r3,r11
	ctx.r10.u64 = uint32_t((ctx.r11.s32 && !(ctx.r3.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r3.s32 / ctx.r11.s32 : 0);
	// lwz r9,-28(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -28);
	// mullw r8,r10,r9
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stw r7,-72(r1)
	REX_STORE_U32(ctx.r1.u32 + -72, ctx.r7.u32);
	// lwz r6,-28(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -28);
	// stw r6,-36(r1)
	REX_STORE_U32(ctx.r1.u32 + -36, ctx.r6.u32);
loc_82773928:
	// lwz r5,20(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r4,20(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r3,32(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 32);
	// lwz r11,-88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -88);
	// mullw r10,r3,r11
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r11.s32);
	// lwz r9,64(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 64);
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r8,-100(r1)
	REX_STORE_U32(ctx.r1.u32 + -100, ctx.r8.u32);
	// lwz r7,20(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r6,40(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 40);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x8277397c
	if (ctx.cr6.eq) goto loc_8277397C;
	// lwz r5,20(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r4,-96(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -96);
	// lwz r3,44(r5)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + 44);
	// mullw r11,r4,r3
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r3.s32);
	// addi r10,r11,-256
	ctx.r10.s64 = ctx.r11.s64 + -256;
	// li r9,2
	ctx.r9.s64 = 2;
	// divw r8,r10,r9
	ctx.r8.u64 = uint32_t((ctx.r9.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r10.s32 / ctx.r9.s32 : 0);
	// stw r8,-12(r1)
	REX_STORE_U32(ctx.r1.u32 + -12, ctx.r8.u32);
	// b 0x82773984
	goto loc_82773984;
loc_8277397C:
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r7,-12(r1)
	REX_STORE_U32(ctx.r1.u32 + -12, ctx.r7.u32);
loc_82773984:
	// lwz r6,-12(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// stw r6,-92(r1)
	REX_STORE_U32(ctx.r1.u32 + -92, ctx.r6.u32);
	// lwz r5,28(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// lwz r4,-96(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -96);
	// mullw r3,r5,r4
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r4.s32);
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r10,44(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mullw r9,r3,r10
	ctx.r9.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r10.s32);
	// li r8,2
	ctx.r8.s64 = 2;
	// divw r7,r9,r8
	ctx.r7.u64 = uint32_t((ctx.r8.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r8.s32 == -1)) ? ctx.r9.s32 / ctx.r8.s32 : 0);
	// lwz r6,-92(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -92);
	// add r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 + ctx.r7.u64;
	// stw r5,-92(r1)
	REX_STORE_U32(ctx.r1.u32 + -92, ctx.r5.u32);
	// lwz r4,-92(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -92);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge cr6,0x82773ac8
	if (!ctx.cr6.lt) goto loc_82773AC8;
	// lwz r3,-96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -96);
	// lwz r11,-92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -92);
	// subf r10,r11,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r11.u64;
	// lwz r9,-96(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -96);
	// divw r8,r10,r9
	ctx.r8.u64 = uint32_t((ctx.r9.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r10.s32 / ctx.r9.s32 : 0);
	// twllei r9,0
	if (ctx.r9.s32 == 0 || ctx.r9.u32 < 0u) ppc_trap(ctx, base, 0);
	// rotlwi r7,r10,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// addi r6,r7,-1
	ctx.r6.s64 = ctx.r7.s64 + -1;
	// andc r5,r9,r6
	ctx.r5.u64 = ctx.r9.u64 & ~ctx.r6.u64;
	// twlgei r5,-1
	if (ctx.r5.s32 == -1 || ctx.r5.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// stw r8,-112(r1)
	REX_STORE_U32(ctx.r1.u32 + -112, ctx.r8.u32);
	// lwz r4,20(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r3,28(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// lwz r11,44(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 44);
	// mullw r10,r3,r11
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r11.s32);
	// li r9,2
	ctx.r9.s64 = 2;
	// divw r8,r10,r9
	ctx.r8.u64 = uint32_t((ctx.r9.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r10.s32 / ctx.r9.s32 : 0);
	// stw r8,-104(r1)
	REX_STORE_U32(ctx.r1.u32 + -104, ctx.r8.u32);
	// b 0x82773a1c
	goto loc_82773A1C;
loc_82773A10:
	// lwz r7,-104(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -104);
	// addi r6,r7,1
	ctx.r6.s64 = ctx.r7.s64 + 1;
	// stw r6,-104(r1)
	REX_STORE_U32(ctx.r1.u32 + -104, ctx.r6.u32);
loc_82773A1C:
	// lwz r5,20(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// lwz r3,44(r5)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + 44);
	// mullw r11,r4,r3
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r3.s32);
	// li r10,2
	ctx.r10.s64 = 2;
	// divw r9,r11,r10
	ctx.r9.u64 = uint32_t((ctx.r10.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r11.s32 / ctx.r10.s32 : 0);
	// lwz r8,-112(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -112);
	// add r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r6,-104(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -104);
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x82773ab0
	if (!ctx.cr6.lt) goto loc_82773AB0;
	// lwz r5,-100(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -100);
	// stw r5,-48(r1)
	REX_STORE_U32(ctx.r1.u32 + -48, ctx.r5.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r4,-32(r1)
	REX_STORE_U32(ctx.r1.u32 + -32, ctx.r4.u32);
	// b 0x82773a68
	goto loc_82773A68;
loc_82773A5C:
	// lwz r3,-32(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// stw r11,-32(r1)
	REX_STORE_U32(ctx.r1.u32 + -32, ctx.r11.u32);
loc_82773A68:
	// lwz r10,-32(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// lwz r9,-28(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -28);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82773a9c
	if (!ctx.cr6.lt) goto loc_82773A9C;
	// lwz r8,-72(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -72);
	// lwz r7,-32(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// lwz r6,-48(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -48);
	// lbz r5,0(r6)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r6.u32 + 0);
	// stbx r5,r8,r7
	REX_STORE_U8(ctx.r8.u32 + ctx.r7.u32, ctx.r5.u8);
	// lwz r4,-48(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -48);
	// addi r3,r4,1
	ctx.r3.s64 = ctx.r4.s64 + 1;
	// stw r3,-48(r1)
	REX_STORE_U32(ctx.r1.u32 + -48, ctx.r3.u32);
	// b 0x82773a5c
	goto loc_82773A5C;
loc_82773A9C:
	// lwz r11,-72(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -72);
	// lwz r10,-36(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -36);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,-72(r1)
	REX_STORE_U32(ctx.r1.u32 + -72, ctx.r9.u32);
	// b 0x82773a10
	goto loc_82773A10;
loc_82773AB0:
	// lwz r8,-96(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -96);
	// lwz r7,-112(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -112);
	// mullw r6,r8,r7
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// lwz r5,-92(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -92);
	// add r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 + ctx.r6.u64;
	// stw r4,-92(r1)
	REX_STORE_U32(ctx.r1.u32 + -92, ctx.r4.u32);
loc_82773AC8:
	// lwz r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r11,28(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// lwz r10,44(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// mullw r9,r11,r10
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// li r8,2
	ctx.r8.s64 = 2;
	// divw r7,r9,r8
	ctx.r7.u64 = uint32_t((ctx.r8.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r8.s32 == -1)) ? ctx.r9.s32 / ctx.r8.s32 : 0);
	// lwz r6,-112(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -112);
	// add r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 + ctx.r6.u64;
	// stw r5,-104(r1)
	REX_STORE_U32(ctx.r1.u32 + -104, ctx.r5.u32);
	// b 0x82773afc
	goto loc_82773AFC;
loc_82773AF0:
	// lwz r4,-104(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -104);
	// addi r3,r4,1
	ctx.r3.s64 = ctx.r4.s64 + 1;
	// stw r3,-104(r1)
	REX_STORE_U32(ctx.r1.u32 + -104, ctx.r3.u32);
loc_82773AFC:
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r10,-64(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -64);
	// lwz r9,44(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mullw r8,r10,r9
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// lwz r7,-104(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -104);
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x82773bec
	if (!ctx.cr6.lt) goto loc_82773BEC;
	// lwz r6,-92(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -92);
	// clrlwi r5,r6,24
	ctx.r5.u64 = ctx.r6.u32 & 0xFF;
	// stw r5,-80(r1)
	REX_STORE_U32(ctx.r1.u32 + -80, ctx.r5.u32);
	// lwz r4,-92(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -92);
	// srawi r3,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 8;
	// lwz r11,-28(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -28);
	// mullw r10,r11,r3
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r3.s32);
	// stw r10,-108(r1)
	REX_STORE_U32(ctx.r1.u32 + -108, ctx.r10.u32);
	// lwz r9,-80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -80);
	// subfic r8,r9,256
	ctx.xer.ca = ctx.r9.u32 <= 256;
	ctx.r8.u64 = static_cast<uint64_t>(256) - ctx.r9.u64;
	// stw r8,-60(r1)
	REX_STORE_U32(ctx.r1.u32 + -60, ctx.r8.u32);
	// lwz r7,-100(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -100);
	// lwz r6,-108(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -108);
	// add r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 + ctx.r6.u64;
	// stw r5,-48(r1)
	REX_STORE_U32(ctx.r1.u32 + -48, ctx.r5.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r4,-32(r1)
	REX_STORE_U32(ctx.r1.u32 + -32, ctx.r4.u32);
	// b 0x82773b6c
	goto loc_82773B6C;
loc_82773B60:
	// lwz r3,-32(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// stw r11,-32(r1)
	REX_STORE_U32(ctx.r1.u32 + -32, ctx.r11.u32);
loc_82773B6C:
	// lwz r10,-32(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// lwz r9,-28(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -28);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82773bc8
	if (!ctx.cr6.lt) goto loc_82773BC8;
	// lwz r8,-48(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -48);
	// lbz r7,0(r8)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// lwz r6,-60(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -60);
	// mullw r5,r6,r7
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// lwz r4,-48(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -48);
	// lwz r3,-28(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -28);
	// lbzx r11,r4,r3
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r3.u32);
	// lwz r10,-80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -80);
	// mullw r9,r10,r11
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// add r8,r5,r9
	ctx.r8.u64 = ctx.r5.u64 + ctx.r9.u64;
	// srawi r7,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 8;
	// lwz r6,-72(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -72);
	// lwz r5,-32(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// clrlwi r4,r7,24
	ctx.r4.u64 = ctx.r7.u32 & 0xFF;
	// stbx r4,r6,r5
	REX_STORE_U8(ctx.r6.u32 + ctx.r5.u32, ctx.r4.u8);
	// lwz r3,-48(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -48);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// stw r11,-48(r1)
	REX_STORE_U32(ctx.r1.u32 + -48, ctx.r11.u32);
	// b 0x82773b60
	goto loc_82773B60;
loc_82773BC8:
	// lwz r10,-72(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -72);
	// lwz r9,-36(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -36);
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r8,-72(r1)
	REX_STORE_U32(ctx.r1.u32 + -72, ctx.r8.u32);
	// lwz r7,-92(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -92);
	// lwz r6,-96(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -96);
	// add r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 + ctx.r6.u64;
	// stw r5,-92(r1)
	REX_STORE_U32(ctx.r1.u32 + -92, ctx.r5.u32);
	// b 0x82773af0
	goto loc_82773AF0;
loc_82773BEC:
	// lwz r4,20(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r3,-64(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -64);
	// lwz r11,44(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 44);
	// mullw r10,r3,r11
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r11.s32);
	// lwz r9,20(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r8,-84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -84);
	// lwz r7,44(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 44);
	// mullw r6,r8,r7
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x82773cd0
	if (!ctx.cr6.lt) goto loc_82773CD0;
	// lwz r5,-64(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -64);
	// stw r5,-104(r1)
	REX_STORE_U32(ctx.r1.u32 + -104, ctx.r5.u32);
	// b 0x82773c2c
	goto loc_82773C2C;
loc_82773C20:
	// lwz r4,-104(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -104);
	// addi r3,r4,1
	ctx.r3.s64 = ctx.r4.s64 + 1;
	// stw r3,-104(r1)
	REX_STORE_U32(ctx.r1.u32 + -104, ctx.r3.u32);
loc_82773C2C:
	// lwz r11,-104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -104);
	// lwz r10,-84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -84);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82773cd0
	if (!ctx.cr6.lt) goto loc_82773CD0;
	// lwz r9,-92(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -92);
	// srawi r8,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 8;
	// lwz r7,-28(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -28);
	// mullw r6,r7,r8
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// stw r6,-108(r1)
	REX_STORE_U32(ctx.r1.u32 + -108, ctx.r6.u32);
	// lwz r5,-100(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -100);
	// lwz r4,-108(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -108);
	// add r3,r5,r4
	ctx.r3.u64 = ctx.r5.u64 + ctx.r4.u64;
	// stw r3,-48(r1)
	REX_STORE_U32(ctx.r1.u32 + -48, ctx.r3.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-32(r1)
	REX_STORE_U32(ctx.r1.u32 + -32, ctx.r11.u32);
	// b 0x82773c78
	goto loc_82773C78;
loc_82773C6C:
	// lwz r10,-32(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r9,-32(r1)
	REX_STORE_U32(ctx.r1.u32 + -32, ctx.r9.u32);
loc_82773C78:
	// lwz r8,-32(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// lwz r7,-28(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -28);
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x82773cac
	if (!ctx.cr6.lt) goto loc_82773CAC;
	// lwz r6,-72(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -72);
	// lwz r5,-32(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// lwz r4,-48(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -48);
	// lbz r3,0(r4)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// stbx r3,r6,r5
	REX_STORE_U8(ctx.r6.u32 + ctx.r5.u32, ctx.r3.u8);
	// lwz r11,-48(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -48);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,-48(r1)
	REX_STORE_U32(ctx.r1.u32 + -48, ctx.r10.u32);
	// b 0x82773c6c
	goto loc_82773C6C;
loc_82773CAC:
	// lwz r9,-72(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -72);
	// lwz r8,-36(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -36);
	// add r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r7,-72(r1)
	REX_STORE_U32(ctx.r1.u32 + -72, ctx.r7.u32);
	// lwz r6,-92(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -92);
	// lwz r5,-96(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -96);
	// add r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 + ctx.r5.u64;
	// stw r4,-92(r1)
	REX_STORE_U32(ctx.r1.u32 + -92, ctx.r4.u32);
	// b 0x82773c20
	goto loc_82773C20;
loc_82773CD0:
	// lwz r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r11,72(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 72);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82773d0c
	if (ctx.cr6.eq) goto loc_82773D0C;
	// lwz r10,20(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r9,76(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 76);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82773d0c
	if (!ctx.cr6.eq) goto loc_82773D0C;
	// lwz r8,20(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r7,88(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 88);
	// stw r7,-72(r1)
	REX_STORE_U32(ctx.r1.u32 + -72, ctx.r7.u32);
	// lwz r6,20(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r5,100(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 100);
	// stw r5,-36(r1)
	REX_STORE_U32(ctx.r1.u32 + -36, ctx.r5.u32);
	// b 0x82773d78
	goto loc_82773D78;
loc_82773D0C:
	// lwz r4,20(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r10,36(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r9,32(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mullw r8,r10,r9
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// lwz r7,56(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 56);
	// add r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lwz r5,20(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r4,-44(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -44);
	// lwz r3,44(r5)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + 44);
	// mullw r11,r4,r3
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r3.s32);
	// lwz r10,-28(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -28);
	// mullw r9,r11,r10
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// add r8,r6,r9
	ctx.r8.u64 = ctx.r6.u64 + ctx.r9.u64;
	// lwz r7,20(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r6,28(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// lwz r5,44(r7)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 44);
	// mullw r4,r6,r5
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r5.s32);
	// li r3,2
	ctx.r3.s64 = 2;
	// divw r11,r4,r3
	ctx.r11.u64 = uint32_t((ctx.r3.s32 && !(ctx.r4.s32 == INT32_MIN && ctx.r3.s32 == -1)) ? ctx.r4.s32 / ctx.r3.s32 : 0);
	// lwz r10,-28(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -28);
	// mullw r9,r11,r10
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r8,-72(r1)
	REX_STORE_U32(ctx.r1.u32 + -72, ctx.r8.u32);
	// lwz r7,-28(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -28);
	// stw r7,-36(r1)
	REX_STORE_U32(ctx.r1.u32 + -36, ctx.r7.u32);
loc_82773D78:
	// lwz r6,20(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r5,20(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r4,32(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 32);
	// lwz r3,-88(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -88);
	// mullw r11,r4,r3
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r3.s32);
	// lwz r10,64(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 64);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r8,20(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r7,-28(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -28);
	// lwz r6,44(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 44);
	// mullw r5,r7,r6
	ctx.r5.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r6.s32);
	// lwz r4,-68(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -68);
	// mullw r3,r5,r4
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r4.s32);
	// add r11,r9,r3
	ctx.r11.u64 = ctx.r9.u64 + ctx.r3.u64;
	// stw r11,-100(r1)
	REX_STORE_U32(ctx.r1.u32 + -100, ctx.r11.u32);
	// lwz r10,20(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r9,40(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82773de8
	if (ctx.cr6.eq) goto loc_82773DE8;
	// lwz r8,20(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r7,-96(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -96);
	// lwz r6,44(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 44);
	// mullw r5,r7,r6
	ctx.r5.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r6.s32);
	// addi r4,r5,-256
	ctx.r4.s64 = ctx.r5.s64 + -256;
	// li r3,2
	ctx.r3.s64 = 2;
	// divw r11,r4,r3
	ctx.r11.u64 = uint32_t((ctx.r3.s32 && !(ctx.r4.s32 == INT32_MIN && ctx.r3.s32 == -1)) ? ctx.r4.s32 / ctx.r3.s32 : 0);
	// stw r11,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// b 0x82773df0
	goto loc_82773DF0;
loc_82773DE8:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r10.u32);
loc_82773DF0:
	// lwz r9,-8(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// stw r9,-92(r1)
	REX_STORE_U32(ctx.r1.u32 + -92, ctx.r9.u32);
	// lwz r8,28(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// lwz r7,-96(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -96);
	// mullw r6,r8,r7
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// li r5,2
	ctx.r5.s64 = 2;
	// divw r4,r6,r5
	ctx.r4.u64 = uint32_t((ctx.r5.s32 && !(ctx.r6.s32 == INT32_MIN && ctx.r5.s32 == -1)) ? ctx.r6.s32 / ctx.r5.s32 : 0);
	// lwz r3,-92(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -92);
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// stw r11,-92(r1)
	REX_STORE_U32(ctx.r1.u32 + -92, ctx.r11.u32);
	// lwz r10,-92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -92);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x82773f28
	if (!ctx.cr6.lt) goto loc_82773F28;
	// lwz r9,-96(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -96);
	// lwz r8,-92(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -92);
	// subf r7,r8,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r8.u64;
	// lwz r6,-96(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -96);
	// divw r5,r7,r6
	ctx.r5.u64 = uint32_t((ctx.r6.s32 && !(ctx.r7.s32 == INT32_MIN && ctx.r6.s32 == -1)) ? ctx.r7.s32 / ctx.r6.s32 : 0);
	// twllei r6,0
	if (ctx.r6.s32 == 0 || ctx.r6.u32 < 0u) ppc_trap(ctx, base, 0);
	// rotlwi r4,r7,1
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// addi r3,r4,-1
	ctx.r3.s64 = ctx.r4.s64 + -1;
	// andc r11,r6,r3
	ctx.r11.u64 = ctx.r6.u64 & ~ctx.r3.u64;
	// twlgei r11,-1
	if (ctx.r11.s32 == -1 || ctx.r11.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// stw r5,-112(r1)
	REX_STORE_U32(ctx.r1.u32 + -112, ctx.r5.u32);
	// lwz r10,20(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r9,28(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// lwz r8,44(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 44);
	// mullw r7,r9,r8
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// li r6,2
	ctx.r6.s64 = 2;
	// divw r5,r7,r6
	ctx.r5.u64 = uint32_t((ctx.r6.s32 && !(ctx.r7.s32 == INT32_MIN && ctx.r6.s32 == -1)) ? ctx.r7.s32 / ctx.r6.s32 : 0);
	// stw r5,-104(r1)
	REX_STORE_U32(ctx.r1.u32 + -104, ctx.r5.u32);
	// b 0x82773e7c
	goto loc_82773E7C;
loc_82773E70:
	// lwz r4,-104(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -104);
	// addi r3,r4,1
	ctx.r3.s64 = ctx.r4.s64 + 1;
	// stw r3,-104(r1)
	REX_STORE_U32(ctx.r1.u32 + -104, ctx.r3.u32);
loc_82773E7C:
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r10,28(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// lwz r9,44(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mullw r8,r10,r9
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// li r7,2
	ctx.r7.s64 = 2;
	// divw r6,r8,r7
	ctx.r6.u64 = uint32_t((ctx.r7.s32 && !(ctx.r8.s32 == INT32_MIN && ctx.r7.s32 == -1)) ? ctx.r8.s32 / ctx.r7.s32 : 0);
	// lwz r5,-112(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -112);
	// add r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 + ctx.r5.u64;
	// lwz r3,-104(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -104);
	// cmpw cr6,r3,r4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r4.s32, ctx.xer);
	// bge cr6,0x82773f10
	if (!ctx.cr6.lt) goto loc_82773F10;
	// lwz r11,-100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -100);
	// stw r11,-48(r1)
	REX_STORE_U32(ctx.r1.u32 + -48, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,-32(r1)
	REX_STORE_U32(ctx.r1.u32 + -32, ctx.r10.u32);
	// b 0x82773ec8
	goto loc_82773EC8;
loc_82773EBC:
	// lwz r9,-32(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// stw r8,-32(r1)
	REX_STORE_U32(ctx.r1.u32 + -32, ctx.r8.u32);
loc_82773EC8:
	// lwz r7,-32(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// lwz r6,-28(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -28);
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x82773efc
	if (!ctx.cr6.lt) goto loc_82773EFC;
	// lwz r5,-72(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -72);
	// lwz r4,-32(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// lwz r3,-48(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -48);
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// stbx r11,r5,r4
	REX_STORE_U8(ctx.r5.u32 + ctx.r4.u32, ctx.r11.u8);
	// lwz r10,-48(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -48);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r9,-48(r1)
	REX_STORE_U32(ctx.r1.u32 + -48, ctx.r9.u32);
	// b 0x82773ebc
	goto loc_82773EBC;
loc_82773EFC:
	// lwz r8,-72(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -72);
	// lwz r7,-36(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -36);
	// add r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stw r6,-72(r1)
	REX_STORE_U32(ctx.r1.u32 + -72, ctx.r6.u32);
	// b 0x82773e70
	goto loc_82773E70;
loc_82773F10:
	// lwz r5,-96(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -96);
	// lwz r4,-112(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -112);
	// mullw r3,r5,r4
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r4.s32);
	// lwz r11,-92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -92);
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r10,-92(r1)
	REX_STORE_U32(ctx.r1.u32 + -92, ctx.r10.u32);
loc_82773F28:
	// lwz r9,20(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r8,28(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// lwz r7,44(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 44);
	// mullw r6,r8,r7
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// li r5,2
	ctx.r5.s64 = 2;
	// divw r4,r6,r5
	ctx.r4.u64 = uint32_t((ctx.r5.s32 && !(ctx.r6.s32 == INT32_MIN && ctx.r5.s32 == -1)) ? ctx.r6.s32 / ctx.r5.s32 : 0);
	// lwz r3,-112(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -112);
	// add r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 + ctx.r3.u64;
	// stw r11,-104(r1)
	REX_STORE_U32(ctx.r1.u32 + -104, ctx.r11.u32);
	// b 0x82773f5c
	goto loc_82773F5C;
loc_82773F50:
	// lwz r10,-104(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -104);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r9,-104(r1)
	REX_STORE_U32(ctx.r1.u32 + -104, ctx.r9.u32);
loc_82773F5C:
	// lwz r8,20(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r7,-64(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -64);
	// lwz r6,44(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 44);
	// mullw r5,r7,r6
	ctx.r5.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r6.s32);
	// lwz r4,-104(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -104);
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x8277404c
	if (!ctx.cr6.lt) goto loc_8277404C;
	// lwz r3,-92(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -92);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// stw r11,-80(r1)
	REX_STORE_U32(ctx.r1.u32 + -80, ctx.r11.u32);
	// lwz r10,-92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -92);
	// srawi r9,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 8;
	// lwz r8,-28(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -28);
	// mullw r7,r8,r9
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// stw r7,-108(r1)
	REX_STORE_U32(ctx.r1.u32 + -108, ctx.r7.u32);
	// lwz r6,-80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -80);
	// subfic r5,r6,256
	ctx.xer.ca = ctx.r6.u32 <= 256;
	ctx.r5.u64 = static_cast<uint64_t>(256) - ctx.r6.u64;
	// stw r5,-60(r1)
	REX_STORE_U32(ctx.r1.u32 + -60, ctx.r5.u32);
	// lwz r4,-100(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -100);
	// lwz r3,-108(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -108);
	// add r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 + ctx.r3.u64;
	// stw r11,-48(r1)
	REX_STORE_U32(ctx.r1.u32 + -48, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,-32(r1)
	REX_STORE_U32(ctx.r1.u32 + -32, ctx.r10.u32);
	// b 0x82773fcc
	goto loc_82773FCC;
loc_82773FC0:
	// lwz r9,-32(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// stw r8,-32(r1)
	REX_STORE_U32(ctx.r1.u32 + -32, ctx.r8.u32);
loc_82773FCC:
	// lwz r7,-32(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// lwz r6,-28(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -28);
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x82774028
	if (!ctx.cr6.lt) goto loc_82774028;
	// lwz r5,-48(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -48);
	// lbz r4,0(r5)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r5.u32 + 0);
	// lwz r3,-60(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -60);
	// mullw r11,r3,r4
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r4.s32);
	// lwz r10,-48(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -48);
	// lwz r9,-28(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -28);
	// lbzx r8,r10,r9
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// lwz r7,-80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -80);
	// mullw r6,r7,r8
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// add r5,r11,r6
	ctx.r5.u64 = ctx.r11.u64 + ctx.r6.u64;
	// srawi r4,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 8;
	// lwz r3,-72(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -72);
	// lwz r11,-32(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// stbx r10,r3,r11
	REX_STORE_U8(ctx.r3.u32 + ctx.r11.u32, ctx.r10.u8);
	// lwz r9,-48(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -48);
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// stw r8,-48(r1)
	REX_STORE_U32(ctx.r1.u32 + -48, ctx.r8.u32);
	// b 0x82773fc0
	goto loc_82773FC0;
loc_82774028:
	// lwz r7,-72(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -72);
	// lwz r6,-36(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -36);
	// add r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 + ctx.r6.u64;
	// stw r5,-72(r1)
	REX_STORE_U32(ctx.r1.u32 + -72, ctx.r5.u32);
	// lwz r4,-92(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -92);
	// lwz r3,-96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -96);
	// add r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 + ctx.r3.u64;
	// stw r11,-92(r1)
	REX_STORE_U32(ctx.r1.u32 + -92, ctx.r11.u32);
	// b 0x82773f50
	goto loc_82773F50;
loc_8277404C:
	// lwz r10,20(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r9,-64(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -64);
	// lwz r8,44(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 44);
	// mullw r7,r9,r8
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// lwz r6,20(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r5,-84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -84);
	// lwz r4,44(r6)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r6.u32 + 44);
	// mullw r3,r5,r4
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r4.s32);
	// cmpw cr6,r7,r3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x82774130
	if (!ctx.cr6.lt) goto loc_82774130;
	// lwz r11,-64(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -64);
	// stw r11,-104(r1)
	REX_STORE_U32(ctx.r1.u32 + -104, ctx.r11.u32);
	// b 0x8277408c
	goto loc_8277408C;
loc_82774080:
	// lwz r10,-104(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -104);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r9,-104(r1)
	REX_STORE_U32(ctx.r1.u32 + -104, ctx.r9.u32);
loc_8277408C:
	// lwz r8,-104(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -104);
	// lwz r7,-84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -84);
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x82774130
	if (!ctx.cr6.lt) goto loc_82774130;
	// lwz r6,-92(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -92);
	// srawi r5,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 8;
	// lwz r4,-28(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -28);
	// mullw r3,r4,r5
	ctx.r3.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r5.s32);
	// stw r3,-108(r1)
	REX_STORE_U32(ctx.r1.u32 + -108, ctx.r3.u32);
	// lwz r11,-100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -100);
	// lwz r10,-108(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -108);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,-48(r1)
	REX_STORE_U32(ctx.r1.u32 + -48, ctx.r9.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r8,-32(r1)
	REX_STORE_U32(ctx.r1.u32 + -32, ctx.r8.u32);
	// b 0x827740d8
	goto loc_827740D8;
loc_827740CC:
	// lwz r7,-32(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// addi r6,r7,1
	ctx.r6.s64 = ctx.r7.s64 + 1;
	// stw r6,-32(r1)
	REX_STORE_U32(ctx.r1.u32 + -32, ctx.r6.u32);
loc_827740D8:
	// lwz r5,-32(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// lwz r4,-28(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -28);
	// cmpw cr6,r5,r4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, ctx.xer);
	// bge cr6,0x8277410c
	if (!ctx.cr6.lt) goto loc_8277410C;
	// lwz r3,-72(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -72);
	// lwz r11,-32(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// lwz r10,-48(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -48);
	// lbz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// stbx r9,r3,r11
	REX_STORE_U8(ctx.r3.u32 + ctx.r11.u32, ctx.r9.u8);
	// lwz r8,-48(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -48);
	// addi r7,r8,1
	ctx.r7.s64 = ctx.r8.s64 + 1;
	// stw r7,-48(r1)
	REX_STORE_U32(ctx.r1.u32 + -48, ctx.r7.u32);
	// b 0x827740cc
	goto loc_827740CC;
loc_8277410C:
	// lwz r6,-72(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -72);
	// lwz r5,-36(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -36);
	// add r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 + ctx.r5.u64;
	// stw r4,-72(r1)
	REX_STORE_U32(ctx.r1.u32 + -72, ctx.r4.u32);
	// lwz r3,-92(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -92);
	// lwz r11,-96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -96);
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r10,-92(r1)
	REX_STORE_U32(ctx.r1.u32 + -92, ctx.r10.u32);
	// b 0x82774080
	goto loc_82774080;
loc_82774130:
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_827CB340) {
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
	ctx.lr = 0x827CB348;
	// stwu r1,-1808(r1)
	ea = -1808 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lwz r10,224(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 224);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r6,1368(r4)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 1368);
	// addi r11,r1,303
	ctx.r11.s64 = ctx.r1.s64 + 303;
	// lhz r7,76(r4)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r4.u32 + 76);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// addi r9,r1,876
	ctx.r9.s64 = ctx.r1.s64 + 876;
	// rlwinm r3,r11,0,0,24
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// lwz r5,3748(r26)
	ctx.r5.u64 = REX_LOAD_U32(r26.u32 + 3748);
	// rlwinm r11,r9,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF0;
	// lhz r9,74(r4)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r4.u32 + 74);
	// lwz r4,3752(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 3752);
	// rlwinm r27,r7,31,1,31
	r27.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r8,3744(r26)
	ctx.r8.u64 = REX_LOAD_U32(r26.u32 + 3744);
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r29,220(r26)
	r29.u64 = REX_LOAD_U32(r26.u32 + 220);
	// li r16,0
	r16.s64 = 0;
	// lwz r28,1376(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 1376);
	// mullw r7,r9,r6
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r6.s32);
	// lwz r23,1312(r31)
	r23.u64 = REX_LOAD_U32(r31.u32 + 1312);
	// stw r11,44(r30)
	REX_STORE_U32(r30.u32 + 44, ctx.r11.u32);
	// stw r3,40(r30)
	REX_STORE_U32(r30.u32 + 40, ctx.r3.u32);
	// stw r16,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r16.u32);
	// stw r16,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r16.u32);
	// stw r23,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, r23.u32);
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// mullw r9,r27,r6
	ctx.r9.s64 = int64_t(r27.s32) * int64_t(ctx.r6.s32);
	// add r7,r5,r10
	ctx.r7.u64 = ctx.r5.u64 + ctx.r10.u64;
	// add r14,r8,r29
	r14.u64 = ctx.r8.u64 + r29.u64;
	// lhz r6,50(r31)
	ctx.r6.u64 = REX_LOAD_U16(r31.u32 + 50);
	// add r19,r7,r9
	r19.u64 = ctx.r7.u64 + ctx.r9.u64;
	// lhz r5,52(r31)
	ctx.r5.u64 = REX_LOAD_U16(r31.u32 + 52);
	// addi r7,r28,-1
	ctx.r7.s64 = r28.s64 + -1;
	// lwz r11,1368(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1368);
	// rlwinm r22,r6,31,1,31
	r22.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r27,r5,31,1,31
	r27.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r3,22488(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 22488);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r7,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r7.u32);
	// mullw r11,r27,r22
	ctx.r11.s64 = int64_t(r27.s32) * int64_t(r22.s32);
	// stw r22,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, r22.u32);
	// stw r27,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, r27.u32);
	// stw r14,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, r14.u32);
	// stw r19,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r19.u32);
	// rlwinm r6,r11,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r18,r16
	r18.u64 = r16.u64;
	// add r5,r11,r6
	ctx.r5.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r6,r4,r10
	ctx.r6.u64 = ctx.r4.u64 + ctx.r10.u64;
	// rlwinm r4,r5,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r6,r9
	ctx.r11.u64 = ctx.r6.u64 + ctx.r9.u64;
	// mullw r10,r8,r4
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r4.s32);
	// stw r11,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// rlwinm r11,r10,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0xFFFFFF80;
	// mr r21,r16
	r21.u64 = r16.u64;
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// stw r9,28(r30)
	REX_STORE_U32(r30.u32 + 28, ctx.r9.u32);
	// mr r25,r16
	r25.u64 = r16.u64;
	// lwz r11,22504(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 22504);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// lwz r8,1368(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 1368);
	// mullw r7,r8,r4
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r4.s32);
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,32(r30)
	REX_STORE_U32(r30.u32 + 32, ctx.r11.u32);
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// stw r6,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r6.u32);
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r24,r5,16
	r24.u64 = ctx.r5.u32 & 0xFFFF;
	// stw r16,0(r30)
	REX_STORE_U32(r30.u32 + 0, r16.u32);
	// rlwinm r15,r5,16,20,31
	r15.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFFF;
	// stw r24,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r24.u32);
	// rlwinm r17,r5,4,29,31
	r17.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0x7;
	// stw r16,4(r30)
	REX_STORE_U32(r30.u32 + 4, r16.u32);
	// sth r16,16(r30)
	REX_STORE_U16(r30.u32 + 16, r16.u16);
	// beq cr6,0x827cbb88
	if (ctx.cr6.eq) goto loc_827CBB88;
	// li r20,16384
	r20.s64 = 16384;
	// b 0x827cb494
	goto loc_827CB494;
loc_827CB488:
	// lwz r18,172(r1)
	r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// lwz r21,156(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r25,168(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
loc_827CB494:
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// mr r27,r22
	r27.u64 = r22.u64;
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r25,8(r30)
	REX_STORE_U32(r30.u32 + 8, r25.u32);
	// stw r16,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, r16.u32);
	// cmplw cr6,r10,r15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r15.u32, ctx.xer);
	// sth r16,18(r30)
	REX_STORE_U16(r30.u32 + 18, r16.u16);
	// stw r11,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r11.u32);
	// bne cr6,0x827cb6cc
	if (!ctx.cr6.eq) goto loc_827CB6CC;
	// mr r27,r24
	r27.u64 = r24.u64;
	// mr r26,r16
	r26.u64 = r16.u64;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x827cb6cc
	if (ctx.cr6.eq) goto loc_827CB6CC;
loc_827CB4C8:
	// cmplw cr6,r26,r24
	ctx.cr6.compare<uint32_t>(r26.u32, r24.u32, ctx.xer);
	// bne cr6,0x827cbb90
	if (!ctx.cr6.eq) goto loc_827CBB90;
	// srawi r28,r17,2
	ctx.xer.ca = (r17.s32 < 0) & ((r17.u32 & 0x3) != 0);
	r28.s64 = r17.s32 >> 2;
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 28);
	// addi r10,r17,140
	ctx.r10.s64 = r17.s64 + 140;
	// ld r9,0(r23)
	ctx.r9.u64 = REX_LOAD_U64(r23.u32 + 0);
	// addi r8,r28,2
	ctx.r8.s64 = r28.s64 + 2;
	// lwz r29,40(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 40);
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r11,-128
	ctx.r3.s64 = ctx.r11.s64 + -128;
	// rldicl r5,r9,8,56
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFF;
	// li r4,-128
	ctx.r4.s64 = -128;
	// lwzx r11,r7,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + r31.u32);
	// lwzx r10,r6,r30
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + r30.u32);
	// stw r3,28(r30)
	REX_STORE_U32(r30.u32 + 28, ctx.r3.u32);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// dcbt r4,r3
	// dcbzl r0,r29
	ea = (r29.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// srawi r11,r17,2
	ctx.xer.ca = (r17.s32 < 0) & ((r17.u32 & 0x3) != 0);
	ctx.r11.s64 = r17.s32 >> 2;
	// lwz r10,392(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 392);
	// rlwinm r8,r5,6,20,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 6) & 0xFC0;
	// addi r6,r11,45
	ctx.r6.s64 = ctx.r11.s64 + 45;
	// lwz r4,40(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 40);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r8,r10
	ctx.r5.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r9,29984(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 29984);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lhzx r8,r6,r31
	ctx.r8.u64 = REX_LOAD_U16(ctx.r6.u32 + r31.u32);
	// lwz r6,29980(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 29980);
	// bl 0x8277dbd0
	ctx.lr = 0x827CB548;
	sub_8277DBD0(ctx, base);
	// lbz r5,33(r31)
	ctx.r5.u64 = REX_LOAD_U8(r31.u32 + 33);
	// clrlwi r4,r5,31
	ctx.r4.u64 = ctx.r5.u32 & 0x1;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x827cb68c
	if (ctx.cr6.eq) goto loc_827CB68C;
	// clrlwi r10,r17,31
	ctx.r10.u64 = r17.u32 & 0x1;
	// lhz r8,54(r31)
	ctx.r8.u64 = REX_LOAD_U16(r31.u32 + 54);
	// rlwinm r11,r24,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r17,146
	ctx.r7.s64 = r17.s64 + 146;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r6,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// li r11,8
	ctx.r11.s64 = 8;
	// sraw r3,r4,r28
	temp.u32 = r28.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r4.s32 < 0) & (((ctx.r4.s32 >> temp.u32) << temp.u32) != ctx.r4.s32);
	ctx.r3.s64 = ctx.r4.s32 >> temp.u32;
	// lwzx r10,r5,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + r31.u32);
	// rlwinm r9,r3,1,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFF0;
	// clrlwi r7,r28,16
	ctx.r7.u64 = r28.u32 & 0xFFFF;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// srw r8,r8,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r7.u8 & 0x3F));
	// addi r11,r29,-2
	ctx.r11.s64 = r29.s64 + -2;
	// addi r9,r10,-2
	ctx.r9.s64 = ctx.r10.s64 + -2;
loc_827CB59C:
	// lhzu r7,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r7.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// sthu r7,2(r9)
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r7.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x827cb59c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827CB59C;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// li r9,8
	ctx.r9.s64 = 8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r8,r29,14
	ctx.r8.s64 = r29.s64 + 14;
	// addi r7,r10,-2
	ctx.r7.s64 = ctx.r10.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_827CB5C0:
	// lhzu r9,2(r8)
	ea = 2 + ctx.r8.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r8.u32 = ea;
	// sthu r9,2(r7)
	ea = 2 + ctx.r7.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r7.u32 = ea;
	// bdnz 0x827cb5c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827CB5C0;
	// li r7,8
	ctx.r7.s64 = 8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r9,r29,30
	ctx.r9.s64 = r29.s64 + 30;
	// addi r8,r10,-2
	ctx.r8.s64 = ctx.r10.s64 + -2;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_827CB5E0:
	// lhzu r7,2(r9)
	ea = 2 + ctx.r9.u32;
	ctx.r7.u64 = REX_LOAD_U16(ea);
	ctx.r9.u32 = ea;
	// sthu r7,2(r8)
	ea = 2 + ctx.r8.u32;
	REX_STORE_U16(ea, ctx.r7.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x827cb5e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827CB5E0;
	// li r7,8
	ctx.r7.s64 = 8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r9,r29,46
	ctx.r9.s64 = r29.s64 + 46;
	// addi r8,r10,-2
	ctx.r8.s64 = ctx.r10.s64 + -2;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_827CB600:
	// lhzu r7,2(r9)
	ea = 2 + ctx.r9.u32;
	ctx.r7.u64 = REX_LOAD_U16(ea);
	ctx.r9.u32 = ea;
	// sthu r7,2(r8)
	ea = 2 + ctx.r8.u32;
	REX_STORE_U16(ea, ctx.r7.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x827cb600
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827CB600;
	// li r7,8
	ctx.r7.s64 = 8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r9,r29,62
	ctx.r9.s64 = r29.s64 + 62;
	// addi r8,r10,-2
	ctx.r8.s64 = ctx.r10.s64 + -2;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_827CB620:
	// lhzu r7,2(r9)
	ea = 2 + ctx.r9.u32;
	ctx.r7.u64 = REX_LOAD_U16(ea);
	ctx.r9.u32 = ea;
	// sthu r7,2(r8)
	ea = 2 + ctx.r8.u32;
	REX_STORE_U16(ea, ctx.r7.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x827cb620
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827CB620;
	// li r7,8
	ctx.r7.s64 = 8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r9,r29,78
	ctx.r9.s64 = r29.s64 + 78;
	// addi r8,r10,-2
	ctx.r8.s64 = ctx.r10.s64 + -2;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_827CB640:
	// lhzu r7,2(r9)
	ea = 2 + ctx.r9.u32;
	ctx.r7.u64 = REX_LOAD_U16(ea);
	ctx.r9.u32 = ea;
	// sthu r7,2(r8)
	ea = 2 + ctx.r8.u32;
	REX_STORE_U16(ea, ctx.r7.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x827cb640
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827CB640;
	// li r7,8
	ctx.r7.s64 = 8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r9,r29,94
	ctx.r9.s64 = r29.s64 + 94;
	// addi r8,r10,-2
	ctx.r8.s64 = ctx.r10.s64 + -2;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_827CB660:
	// lhzu r7,2(r9)
	ea = 2 + ctx.r9.u32;
	ctx.r7.u64 = REX_LOAD_U16(ea);
	ctx.r9.u32 = ea;
	// sthu r7,2(r8)
	ea = 2 + ctx.r8.u32;
	REX_STORE_U16(ea, ctx.r7.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x827cb660
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827CB660;
	// li r9,8
	ctx.r9.s64 = 8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r29,110
	ctx.r11.s64 = r29.s64 + 110;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_827CB680:
	// lhzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x827cb680
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827CB680;
loc_827CB68C:
	// lwz r11,136(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r10,148(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r9,112(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// stw r8,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r8.u32);
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r7,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r7.u32);
	// rlwinm r15,r6,16,20,31
	r15.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xFFF;
	// clrlwi r24,r6,16
	r24.u64 = ctx.r6.u32 & 0xFFFF;
	// rlwinm r17,r6,4,29,31
	r17.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0x7;
	// stw r24,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r24.u32);
	// cmplw cr6,r9,r15
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r15.u32, ctx.xer);
	// beq cr6,0x827cb4c8
	if (ctx.cr6.eq) goto loc_827CB4C8;
	// addi r11,r26,1
	ctx.r11.s64 = r26.s64 + 1;
	// stw r11,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
loc_827CB6CC:
	// lhz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 16);
	// rlwinm r10,r22,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r21,r22
	ctx.r8.u64 = r21.u64 + r22.u64;
	// lwz r7,140(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// add r9,r10,r18
	ctx.r9.u64 = ctx.r10.u64 + r18.u64;
	// lwz r5,116(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// addi r6,r11,2
	ctx.r6.s64 = ctx.r11.s64 + 2;
	// stw r8,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r8.u32);
	// stw r9,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r9.u32);
	// rlwinm r10,r22,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 3) & 0xFFFFFFF8;
	// sth r6,16(r30)
	REX_STORE_U16(r30.u32 + 16, ctx.r6.u16);
	// lhz r21,74(r31)
	r21.u64 = REX_LOAD_U16(r31.u32 + 74);
	// add r23,r10,r7
	r23.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lbz r3,33(r31)
	ctx.r3.u64 = REX_LOAD_U8(r31.u32 + 33);
	// lhz r18,76(r31)
	r18.u64 = REX_LOAD_U16(r31.u32 + 76);
	// rotlwi r11,r18,3
	ctx.r11.u64 = __builtin_rotateleft32(r18.u32, 3);
	// rotlwi r10,r21,4
	ctx.r10.u64 = __builtin_rotateleft32(r21.u32, 4);
	// stw r8,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r8.u32);
	// clrlwi r8,r3,31
	ctx.r8.u64 = ctx.r3.u32 & 0x1;
	// stw r23,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, r23.u32);
	// add r7,r10,r25
	ctx.r7.u64 = ctx.r10.u64 + r25.u64;
	// stw r9,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r9.u32);
	// add r6,r11,r5
	ctx.r6.u64 = ctx.r11.u64 + ctx.r5.u64;
	// stw r23,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, r23.u32);
	// stw r7,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r7.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r6,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r6.u32);
	// beq cr6,0x827cb9d8
	if (ctx.cr6.eq) goto loc_827CB9D8;
	// lhz r29,50(r31)
	r29.u64 = REX_LOAD_U16(r31.u32 + 50);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// rotlwi r7,r29,1
	ctx.r7.u64 = __builtin_rotateleft32(r29.u32, 1);
	// lwz r6,1304(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 1304);
	// neg r5,r11
	ctx.r5.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// lwz r8,348(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 348);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,352(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 352);
	// subf r3,r7,r9
	ctx.r3.u64 = ctx.r9.u64 - ctx.r7.u64;
	// srawi r11,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 31;
	// srawi r23,r29,1
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x1) != 0);
	r23.s64 = r29.s32 >> 1;
	// srawi r7,r3,2
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r3.s32 >> 2;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// lwzx r4,r4,r6
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r6.u32);
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r28,r9,r8
	r28.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r22,r11,r10
	r22.u64 = ctx.r11.u64 + ctx.r10.u64;
	// or r19,r4,r5
	r19.u64 = ctx.r4.u64 | ctx.r5.u64;
	// rotlwi r26,r29,2
	r26.u64 = __builtin_rotateleft32(r29.u32, 2);
	// rotlwi r25,r29,3
	r25.u64 = __builtin_rotateleft32(r29.u32, 3);
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// bne cr6,0x827cb7a8
	if (!ctx.cr6.eq) goto loc_827CB7A8;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
loc_827CB7A8:
	// lwz r10,120(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// addi r27,r11,-1
	r27.s64 = ctx.r11.s64 + -1;
	// lwz r11,1328(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1328);
	// li r8,16384
	ctx.r8.s64 = 16384;
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r14,r27,r7
	r14.u64 = ctx.r7.u64 - r27.u64;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + r28.u64;
	// rlwinm r20,r27,4,0,27
	r20.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r7,r14
	ctx.r7.u64 = r14.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r5,r10,2
	ctx.r5.s64 = ctx.r10.s64 + 2;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// add r3,r20,r11
	ctx.r3.u64 = r20.u64 + ctx.r11.u64;
	// addi r24,r9,-1
	r24.s64 = ctx.r9.s64 + -1;
	// bl 0x82745428
	ctx.lr = 0x827CB7E8;
	sub_82745428(ctx, base);
	// add r6,r27,r29
	ctx.r6.u64 = r27.u64 + r29.u64;
	// li r8,16384
	ctx.r8.s64 = 16384;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r7,r14
	ctx.r7.u64 = r14.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r5,r11,2
	ctx.r5.s64 = ctx.r11.s64 + 2;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r11,1336(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1336);
	// add r3,r11,r20
	ctx.r3.u64 = ctx.r11.u64 + r20.u64;
	// bl 0x82745428
	ctx.lr = 0x827CB814;
	sub_82745428(ctx, base);
	// rlwinm r11,r24,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r5,120(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// li r8,16384
	ctx.r8.s64 = 16384;
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + r22.u64;
	// subf r20,r24,r5
	r20.u64 = ctx.r5.u64 - r24.u64;
	// addi r27,r11,2
	r27.s64 = ctx.r11.s64 + 2;
	// rlwinm r24,r24,4,0,27
	r24.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r7,r20
	ctx.r7.u64 = r20.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r11,1340(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1340);
	// add r3,r11,r24
	ctx.r3.u64 = ctx.r11.u64 + r24.u64;
	// bl 0x82745428
	ctx.lr = 0x827CB84C;
	sub_82745428(ctx, base);
	// lwz r11,1348(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1348);
	// li r8,16384
	ctx.r8.s64 = 16384;
	// mr r7,r20
	ctx.r7.u64 = r20.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// add r3,r11,r24
	ctx.r3.u64 = ctx.r11.u64 + r24.u64;
	// bl 0x82745428
	ctx.lr = 0x827CB86C;
	sub_82745428(ctx, base);
	// rlwinm r24,r29,2,0,29
	r24.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addic r4,r19,-1
	ctx.xer.ca = r19.u32 > 0;
	ctx.r4.s64 = r19.s64 + -1;
	// lwz r14,144(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// subf r11,r24,r28
	ctx.r11.u64 = r28.u64 - r24.u64;
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// subfe r8,r3,r3
	temp.u8 = (~ctx.r3.u32 + ctx.r3.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r3.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r3,1332(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1332);
	// addi r7,r11,2
	ctx.r7.s64 = ctx.r11.s64 + 2;
	// stw r16,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r16.u32);
	// addi r27,r28,2
	r27.s64 = r28.s64 + 2;
	// and r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 & ctx.r7.u64;
	// li r20,16384
	r20.s64 = 16384;
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r20,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r20.u32);
	// mr r7,r21
	ctx.r7.u64 = r21.u64;
	// mr r6,r14
	ctx.r6.u64 = r14.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// lwz r4,1328(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 1328);
	// bl 0x82745a30
	ctx.lr = 0x827CB8BC;
	sub_82745A30(ctx, base);
	// add r9,r24,r28
	ctx.r9.u64 = r24.u64 + r28.u64;
	// lwz r4,1336(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 1336);
	// rlwinm r11,r21,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// stw r16,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r16.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r20,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r20.u32);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r7,r21
	ctx.r7.u64 = r21.u64;
	// add r6,r11,r14
	ctx.r6.u64 = ctx.r11.u64 + r14.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// lwz r3,1328(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1328);
	// bl 0x82745a30
	ctx.lr = 0x827CB8F4;
	sub_82745A30(ctx, base);
	// rlwinm r6,r23,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,1340(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 1340);
	// addic r5,r19,-1
	ctx.xer.ca = r19.u32 > 0;
	ctx.r5.s64 = r19.s64 + -1;
	// lwz r19,128(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// subf r11,r6,r22
	ctx.r11.u64 = r22.u64 - ctx.r6.u64;
	// lwz r3,1344(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1344);
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r23,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r23.u32);
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// stw r16,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r16.u32);
	// addi r29,r22,2
	r29.s64 = r22.s64 + 2;
	// stw r20,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r20.u32);
	// and r28,r9,r8
	r28.u64 = ctx.r9.u64 & ctx.r8.u64;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// li r10,2
	ctx.r10.s64 = 2;
	// mr r7,r18
	ctx.r7.u64 = r18.u64;
	// mr r6,r19
	ctx.r6.u64 = r19.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// bl 0x82745a30
	ctx.lr = 0x827CB944;
	sub_82745A30(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// lwz r4,1348(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 1348);
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// lwz r3,1352(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1352);
	// mr r7,r18
	ctx.r7.u64 = r18.u64;
	// lwz r6,124(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// stw r16,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r16.u32);
	// stw r20,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r20.u32);
	// stw r23,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r23.u32);
	// bl 0x82745a30
	ctx.lr = 0x827CB974;
	sub_82745A30(ctx, base);
	// lwz r7,1332(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 1332);
	// lwz r6,1344(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 1344);
	// lwz r3,1352(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1352);
	// rotlwi r11,r7,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r5,1336(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1336);
	// rotlwi r10,r6,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// lwz r4,1340(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 1340);
	// lwz r9,1348(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 1348);
	// lwz r8,1328(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 1328);
	// stw r7,1336(r31)
	REX_STORE_U32(r31.u32 + 1336, ctx.r7.u32);
	// rotlwi r7,r3,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// lwz r24,132(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r22,160(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r23,164(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// stw r6,1340(r31)
	REX_STORE_U32(r31.u32 + 1340, ctx.r6.u32);
	// stw r3,1348(r31)
	REX_STORE_U32(r31.u32 + 1348, ctx.r3.u32);
	// stw r5,1332(r31)
	REX_STORE_U32(r31.u32 + 1332, ctx.r5.u32);
	// stw r9,1352(r31)
	REX_STORE_U32(r31.u32 + 1352, ctx.r9.u32);
	// stw r4,1344(r31)
	REX_STORE_U32(r31.u32 + 1344, ctx.r4.u32);
	// stw r8,588(r31)
	REX_STORE_U32(r31.u32 + 588, ctx.r8.u32);
	// stw r8,584(r31)
	REX_STORE_U32(r31.u32 + 584, ctx.r8.u32);
	// stw r7,604(r31)
	REX_STORE_U32(r31.u32 + 604, ctx.r7.u32);
	// stw r10,600(r31)
	REX_STORE_U32(r31.u32 + 600, ctx.r10.u32);
	// stw r11,596(r31)
	REX_STORE_U32(r31.u32 + 596, ctx.r11.u32);
	// stw r11,592(r31)
	REX_STORE_U32(r31.u32 + 592, ctx.r11.u32);
loc_827CB9D8:
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r11,152(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lwz r8,1304(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 1304);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// lhz r7,74(r31)
	ctx.r7.u64 = REX_LOAD_U16(r31.u32 + 74);
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lhz r27,76(r31)
	r27.u64 = REX_LOAD_U16(r31.u32 + 76);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// lwz r4,124(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lbz r3,33(r31)
	ctx.r3.u64 = REX_LOAD_U8(r31.u32 + 33);
	// rotlwi r11,r27,3
	ctx.r11.u64 = __builtin_rotateleft32(r27.u32, 3);
	// rlwinm r10,r5,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// add r19,r11,r19
	r19.u64 = ctx.r11.u64 + r19.u64;
	// lwzx r9,r6,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// rotlwi r10,r7,4
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 4);
	// stw r19,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r19.u32);
	// or r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 | ctx.r9.u64;
	// add r14,r10,r14
	r14.u64 = ctx.r10.u64 + r14.u64;
	// add r21,r11,r4
	r21.u64 = ctx.r11.u64 + ctx.r4.u64;
	// and r5,r6,r3
	ctx.r5.u64 = ctx.r6.u64 & ctx.r3.u64;
	// stw r14,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, r14.u32);
	// stw r21,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r21.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x827cbb6c
	if (ctx.cr6.eq) goto loc_827CBB6C;
	// lwz r8,0(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// lhz r18,50(r31)
	r18.u64 = REX_LOAD_U16(r31.u32 + 50);
	// addi r29,r31,1340
	r29.s64 = r31.s64 + 1340;
	// lwz r10,348(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 348);
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rotlwi r6,r18,2
	ctx.r6.u64 = __builtin_rotateleft32(r18.u32, 2);
	// lwz r25,352(r31)
	r25.u64 = REX_LOAD_U32(r31.u32 + 352);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r4,1328(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 1328);
	// srawi r26,r18,1
	ctx.xer.ca = (r18.s32 < 0) & ((r18.u32 & 0x1) != 0);
	r26.s64 = r18.s32 >> 1;
	// lwz r3,1332(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1332);
	// srawi r5,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 2;
	// stw r18,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r18.u32);
	// subf r8,r6,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r6.u64;
	// stw r16,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r16.u32);
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r20,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r20.u32);
	// rotlwi r5,r18,3
	ctx.r5.u64 = __builtin_rotateleft32(r18.u32, 3);
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// mr r6,r14
	ctx.r6.u64 = r14.u64;
	// addi r28,r31,1348
	r28.s64 = r31.s64 + 1348;
	// rotlwi r29,r18,2
	r29.u64 = __builtin_rotateleft32(r18.u32, 2);
	// add r25,r11,r25
	r25.u64 = ctx.r11.u64 + r25.u64;
	// bl 0x82745a30
	ctx.lr = 0x827CBAA8;
	sub_82745A30(ctx, base);
	// rlwinm r3,r26,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,1340(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 1340);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// subf r11,r3,r25
	ctx.r11.u64 = r25.u64 - ctx.r3.u64;
	// stw r16,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r16.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r20,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r20.u32);
	// addi r25,r11,2
	r25.s64 = ctx.r11.s64 + 2;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r19
	ctx.r6.u64 = r19.u64;
	// lwz r3,1344(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1344);
	// bl 0x82745a30
	ctx.lr = 0x827CBAE4;
	sub_82745A30(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r4,1348(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 1348);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,1352(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1352);
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// stw r16,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r16.u32);
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// stw r20,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r20.u32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x82745a30
	ctx.lr = 0x827CBB14;
	sub_82745A30(ctx, base);
	// lwz r11,1332(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1332);
	// lwz r10,1352(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1352);
	// lwz r7,1344(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 1344);
	// rotlwi r6,r11,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r9,1336(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 1336);
	// rotlwi r5,r10,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r8,1348(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 1348);
	// lwz r4,1340(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 1340);
	// lwz r3,1328(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1328);
	// stw r11,1336(r31)
	REX_STORE_U32(r31.u32 + 1336, ctx.r11.u32);
	// rotlwi r11,r7,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r10,1348(r31)
	REX_STORE_U32(r31.u32 + 1348, ctx.r10.u32);
	// stw r7,1340(r31)
	REX_STORE_U32(r31.u32 + 1340, ctx.r7.u32);
	// stw r9,1332(r31)
	REX_STORE_U32(r31.u32 + 1332, ctx.r9.u32);
	// stw r4,1344(r31)
	REX_STORE_U32(r31.u32 + 1344, ctx.r4.u32);
	// stw r8,1352(r31)
	REX_STORE_U32(r31.u32 + 1352, ctx.r8.u32);
	// stw r3,588(r31)
	REX_STORE_U32(r31.u32 + 588, ctx.r3.u32);
	// stw r3,584(r31)
	REX_STORE_U32(r31.u32 + 584, ctx.r3.u32);
	// stw r11,600(r31)
	REX_STORE_U32(r31.u32 + 600, ctx.r11.u32);
	// stw r6,596(r31)
	REX_STORE_U32(r31.u32 + 596, ctx.r6.u32);
	// stw r6,592(r31)
	REX_STORE_U32(r31.u32 + 592, ctx.r6.u32);
	// stw r5,604(r31)
	REX_STORE_U32(r31.u32 + 604, ctx.r5.u32);
loc_827CBB6C:
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r10,152(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x827cb488
	if (ctx.cr6.lt) goto loc_827CB488;
	// li r3,0
	ctx.r3.s64 = 0;
loc_827CBB88:
	// addi r1,r1,1808
	ctx.r1.s64 = ctx.r1.s64 + 1808;
	// b 0x826a1cd0
	return;
loc_827CBB90:
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// lhz r11,18(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 18);
	// addi r23,r23,8
	r23.s64 = r23.s64 + 8;
	// addi r7,r10,2
	ctx.r7.s64 = ctx.r10.s64 + 2;
	// lwz r9,4(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r8,8(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r6,r11,2
	ctx.r6.s64 = ctx.r11.s64 + 2;
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 12);
	// addi r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 1;
	// addi r4,r8,16
	ctx.r4.s64 = ctx.r8.s64 + 16;
	// stw r7,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r7.u32);
	// addi r3,r10,8
	ctx.r3.s64 = ctx.r10.s64 + 8;
	// stw r5,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r5.u32);
	// stw r4,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r4.u32);
	// cmplw cr6,r26,r22
	ctx.cr6.compare<uint32_t>(r26.u32, r22.u32, ctx.xer);
	// stw r3,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r3.u32);
	// sth r6,18(r30)
	REX_STORE_U16(r30.u32 + 18, ctx.r6.u16);
	// blt cr6,0x827cb4c8
	if (ctx.cr6.lt) goto loc_827CB4C8;
	// b 0x827cb6cc
	goto loc_827CB6CC;
}

