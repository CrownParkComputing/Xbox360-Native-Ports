#include "hydrothunder_funcs.2.h"

DEFINE_REX_FUNC(sub_82120078) {
	REX_FUNC_PROLOGUE();
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
	// b 0x8269cbf8
	sub_8269CBF8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82126A38) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82126A40;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r11,r11,-24248
	ctx.r11.s64 = ctx.r11.s64 + -24248;
	// addi r10,r10,-24400
	ctx.r10.s64 = ctx.r10.s64 + -24400;
	// addi r9,r9,-24256
	ctx.r9.s64 = ctx.r9.s64 + -24256;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bl 0x82120ac0
	ctx.lr = 0x82126A7C;
	sub_82120AC0(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// li r3,64
	ctx.r3.s64 = 64;
	// stw r30,36(r31)
	REX_STORE_U32(r31.u32 + 36, r30.u32);
	// stw r30,40(r31)
	REX_STORE_U32(r31.u32 + 40, r30.u32);
	// stw r30,44(r31)
	REX_STORE_U32(r31.u32 + 44, r30.u32);
	// stw r30,60(r31)
	REX_STORE_U32(r31.u32 + 60, r30.u32);
	// bl 0x822f6280
	ctx.lr = 0x82126A98;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82126bac
	if (ctx.cr0.eq) goto loc_82126BAC;
	// stw r3,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r3.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// lwz r10,56(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 56);
	// addi r29,r31,84
	r29.s64 = r31.s64 + 84;
	// stw r10,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// lwz r10,56(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 56);
	// stw r10,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r10.u32);
	// lwz r10,56(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 56);
	// stb r11,60(r10)
	REX_STORE_U8(ctx.r10.u32 + 60, ctx.r11.u8);
	// lbz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r9,56(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 56);
	// stb r11,61(r9)
	REX_STORE_U8(ctx.r9.u32 + 61, ctx.r11.u8);
	// stw r30,68(r31)
	REX_STORE_U32(r31.u32 + 68, r30.u32);
	// stw r30,72(r31)
	REX_STORE_U32(r31.u32 + 72, r30.u32);
	// stw r30,76(r31)
	REX_STORE_U32(r31.u32 + 76, r30.u32);
	// stb r10,84(r31)
	REX_STORE_U8(r31.u32 + 84, ctx.r10.u8);
	// stw r30,92(r31)
	REX_STORE_U32(r31.u32 + 92, r30.u32);
	// bl 0x822f6280
	ctx.lr = 0x82126AF0;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82126b94
	if (ctx.cr0.eq) goto loc_82126B94;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r3,4(r29)
	REX_STORE_U32(r29.u32 + 4, ctx.r3.u32);
	// stw r3,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// stw r11,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// stw r30,16(r29)
	REX_STORE_U32(r29.u32 + 16, r30.u32);
	// stw r30,20(r29)
	REX_STORE_U32(r29.u32 + 20, r30.u32);
	// stw r30,24(r29)
	REX_STORE_U32(r29.u32 + 24, r30.u32);
	// stfs f0,40(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 40, temp.u32);
	// bl 0x82162298
	ctx.lr = 0x82126B30;
	sub_82162298(ctx, base);
	// stb r30,128(r31)
	REX_STORE_U8(r31.u32 + 128, r30.u8);
	// stb r30,129(r31)
	REX_STORE_U8(r31.u32 + 129, r30.u8);
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r30,136(r31)
	REX_STORE_U32(r31.u32 + 136, r30.u32);
	// std r30,144(r31)
	REX_STORE_U64(r31.u32 + 144, r30.u64);
	// stw r30,156(r31)
	REX_STORE_U32(r31.u32 + 156, r30.u32);
	// bl 0x822f6280
	ctx.lr = 0x82126B4C;
	sub_822F6280(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82126b7c
	if (ctx.cr0.eq) goto loc_82126B7C;
	// stw r11,152(r31)
	REX_STORE_U32(r31.u32 + 152, ctx.r11.u32);
	// addi r3,r31,164
	ctx.r3.s64 = r31.s64 + 164;
	// stw r11,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r11,152(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 152);
	// stw r11,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// bl 0x8212a018
	ctx.lr = 0x82126B6C;
	sub_8212A018(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r30,180(r31)
	REX_STORE_U8(r31.u32 + 180, r30.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d0c
	return;
loc_82126B7C:
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
	ctx.lr = 0x82126B94;
	sub_82120018(ctx, base);
loc_82126B94:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,18624
	ctx.r11.s64 = ctx.r11.s64 + 18624;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x82120018
	ctx.lr = 0x82126BAC;
	sub_82120018(ctx, base);
loc_82126BAC:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r30,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r30.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// addi r11,r11,18624
	ctx.r11.s64 = ctx.r11.s64 + 18624;
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// bl 0x82120018
	ctx.lr = 0x82126BC4;
	sub_82120018(ctx, base);
}

DEFINE_REX_FUNC(sub_82133790) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,120(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821337C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,124(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 124);
	// frsp f31,f0
	f31.f64 = double(float(ctx.f0.f64));
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821337EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fdivs f1,f31,f0
	ctx.f1.f64 = double(float(f31.f64 / ctx.f0.f64));
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

DEFINE_REX_FUNC(sub_82137538) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82137540;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
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
	ctx.lr = 0x82137560;
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
	ctx.lr = 0x82137588;
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
	ctx.lr = 0x821375A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82176568
	ctx.lr = 0x821375B0;
	sub_82176568(ctx, base);
	// lwz r3,6092(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6092);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// li r9,12
	ctx.r9.s64 = 12;
	// addi r8,r11,-12328
	ctx.r8.s64 = ctx.r11.s64 + -12328;
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r7,12
	ctx.r7.s64 = 12;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,252(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 252);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821375EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8213C418) {
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
	// li r30,0
	r30.s64 = 0;
	// li r3,44
	ctx.r3.s64 = 44;
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
	// bl 0x822f6280
	ctx.lr = 0x8213C440;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8213c490
	if (ctx.cr0.eq) goto loc_8213C490;
	// stw r3,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r10,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r10,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stb r11,40(r10)
	REX_STORE_U8(ctx.r10.u32 + 40, ctx.r11.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stb r11,41(r10)
	REX_STORE_U8(ctx.r10.u32 + 41, ctx.r11.u8);
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
loc_8213C490:
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
	ctx.lr = 0x8213C4A8;
	sub_82120018(ctx, base);
}

DEFINE_REX_FUNC(sub_82141AB8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82141AC0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82141ae4
	if (!ctx.cr6.eq) goto loc_82141AE4;
loc_82141ADC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82141ba0
	goto loc_82141BA0;
loc_82141AE4:
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82141AF8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82141adc
	if (ctx.cr0.eq) goto loc_82141ADC;
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82141B14;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x82141adc
	if (!ctx.cr6.lt) goto loc_82141ADC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821447d0
	ctx.lr = 0x82141B24;
	sub_821447D0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-16776
	ctx.r4.s64 = ctx.r11.s64 + -16776;
	// bl 0x8215f338
	ctx.lr = 0x82141B34;
	sub_8215F338(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x82141B38;
	sub_8215F990(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// and r29,r3,r11
	r29.u64 = ctx.r3.u64 & ctx.r11.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82144958
	ctx.lr = 0x82141B48;
	sub_82144958(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r10,44(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 44);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r30,0(r10)
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,24(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82141B70;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r3,44(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 44);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82141B8C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82144110
	ctx.lr = 0x82141B98;
	sub_82144110(ctx, base);
	// cntlzw r11,r30
	ctx.r11.u64 = r30.u32 == 0 ? 32 : __builtin_clz(r30.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_82141BA0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_821495C8) {
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
	ctx.lr = 0x821495D0;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r7,88(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 88);
	// lfs f0,16(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lfs f12,32(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lfs f11,36(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f11,124(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// beq cr6,0x82149648
	if (ctx.cr6.eq) goto loc_82149648;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lfs f1,24(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8214a2f0
	ctx.lr = 0x82149614;
	sub_8214A2F0(ctx, base);
	// lbz r11,24(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 24);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821497b8
	if (!ctx.cr0.eq) goto loc_821497B8;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r4,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-13316
	ctx.r11.s64 = ctx.r11.s64 + -13316;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,252(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 252);
loc_82149638:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82185ca0
	ctx.lr = 0x82149644;
	sub_82185CA0(ctx, base);
	// b 0x821497b8
	goto loc_821497B8;
loc_82149648:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r31,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, r31.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,72(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 72);
	// addi r11,r11,-13308
	ctx.r11.s64 = ctx.r11.s64 + -13308;
	// stw r10,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r10.u32);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// stw r11,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,0(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x82185ca0
	ctx.lr = 0x82149674;
	sub_82185CA0(ctx, base);
	// lwz r5,168(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x82149698
	if (!ctx.cr6.eq) goto loc_82149698;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lfs f1,1040(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1040);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8214a2f0
	ctx.lr = 0x82149694;
	sub_8214A2F0(ctx, base);
	// b 0x821497b8
	goto loc_821497B8;
loc_82149698:
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bne cr6,0x82149754
	if (!ctx.cr6.eq) goto loc_82149754;
	// lwz r30,172(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// addi r4,r31,48
	ctx.r4.s64 = r31.s64 + 48;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r5,r30,144
	ctx.r5.s64 = r30.s64 + 144;
	// bl 0x823fbd18
	ctx.lr = 0x821496B4;
	sub_823FBD18(ctx, base);
	// ld r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// ld r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r3.u32 + 8);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lfs f0,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,240(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 240);
	ctx.f13.f64 = double(temp.f32);
	// std r10,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lfs f12,128(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f12.f64 = double(temp.f32);
	// fabs f12,f12
	ctx.f12.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fadds f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bgt cr6,0x82149710
	if (ctx.cr6.gt) goto loc_82149710;
	// lfs f13,132(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// lfs f12,244(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 244);
	ctx.f12.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bgt cr6,0x82149710
	if (ctx.cr6.gt) goto loc_82149710;
	// lfs f0,40(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f13,216(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 216);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82149714
	if (!ctx.cr6.lt) goto loc_82149714;
loc_82149710:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82149714:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82149750
	if (ctx.cr0.eq) goto loc_82149750;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,24(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8214a2f0
	ctx.lr = 0x82149728;
	sub_8214A2F0(ctx, base);
	// lbz r11,24(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 24);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821497b8
	if (!ctx.cr0.eq) goto loc_821497B8;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r11,r11,-13316
	ctx.r11.s64 = ctx.r11.s64 + -13316;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r11,252(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 252);
	// b 0x82149638
	goto loc_82149638;
loc_82149750:
	// lwz r5,168(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
loc_82149754:
	// addi r4,r1,172
	ctx.r4.s64 = ctx.r1.s64 + 172;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8214a3a0
	ctx.lr = 0x82149760;
	sub_8214A3A0(ctx, base);
	// lbz r11,24(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 24);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821497b8
	if (!ctx.cr0.eq) goto loc_821497B8;
	// lwz r11,168(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821497b8
	if (!ctx.cr6.gt) goto loc_821497B8;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r29,r1,168
	r29.s64 = ctx.r1.s64 + 168;
	// addi r28,r11,-13316
	r28.s64 = ctx.r11.s64 + -13316;
loc_82149788:
	// stw r31,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r28,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r28.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwzu r11,4(r29)
	ea = 4 + r29.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	r29.u32 = ea;
	// lwz r11,252(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 252);
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82185ca0
	ctx.lr = 0x821497A8;
	sub_82185CA0(ctx, base);
	// lwz r11,168(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82149788
	if (ctx.cr6.lt) goto loc_82149788;
loc_821497B8:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82158E50) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82158E58;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r6,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r6.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r4,0(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x82158698
	ctx.lr = 0x82158E7C;
	sub_82158698(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82158e94
	if (ctx.cr0.eq) goto loc_82158E94;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
loc_82158E94:
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// lwz r5,0(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r4,0(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 0);
	// bl 0x82158698
	ctx.lr = 0x82158EA4;
	sub_82158698(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82158ebc
	if (ctx.cr0.eq) goto loc_82158EBC;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
loc_82158EBC:
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// lwz r5,0(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82158698
	ctx.lr = 0x82158ECC;
	sub_82158698(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82158ee4
	if (ctx.cr0.eq) goto loc_82158EE4;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
loc_82158EE4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8215CD00) {
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
	ctx.lr = 0x8215CD08;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r26,0
	r26.s64 = 0;
	// b 0x8215cdc8
	goto loc_8215CDC8;
loc_8215CD20:
	// lwz r10,32(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 32);
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215cd3c
	if (ctx.cr6.eq) goto loc_8215CD3C;
	// lwz r11,48(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 48);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8215cd40
	goto loc_8215CD40;
loc_8215CD3C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8215CD40:
	// extsw r30,r11
	r30.s64 = ctx.r11.s32;
	// cmpdi cr6,r30,0
	ctx.cr6.compare<int64_t>(r30.s64, 0, ctx.xer);
	// ble cr6,0x8215cd9c
	if (!ctx.cr6.gt) goto loc_8215CD9C;
	// cmpd cr6,r29,r30
	ctx.cr6.compare<int64_t>(r29.s64, r30.s64, ctx.xer);
	// bge cr6,0x8215cd58
	if (!ctx.cr6.lt) goto loc_8215CD58;
	// mr r30,r29
	r30.u64 = r29.u64;
loc_8215CD58:
	// rotlwi r31,r30,0
	r31.u64 = __builtin_rotateleft32(r30.u32, 0);
	// lwz r4,0(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8215CD6C;
	sub_826A1E70(ctx, base);
	// lwz r11,48(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 48);
	// add r28,r31,r28
	r28.u64 = r31.u64 + r28.u64;
	// add r26,r30,r26
	r26.u64 = r30.u64 + r26.u64;
	// subf r29,r30,r29
	r29.u64 = r29.u64 - r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subf r10,r31,r10
	ctx.r10.u64 = ctx.r10.u64 - r31.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,32(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 32);
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x8215cdc8
	goto loc_8215CDC8;
loc_8215CD9C:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8215CDB0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8215cdd0
	if (ctx.cr6.eq) goto loc_8215CDD0;
	// stb r3,0(r28)
	REX_STORE_U8(r28.u32 + 0, ctx.r3.u8);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
loc_8215CDC8:
	// cmpdi cr6,r29,0
	ctx.cr6.compare<int64_t>(r29.s64, 0, ctx.xer);
	// bgt cr6,0x8215cd20
	if (ctx.cr6.gt) goto loc_8215CD20;
loc_8215CDD0:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82163268) {
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
	ctx.lr = 0x82163270;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// mr r23,r7
	r23.u64 = ctx.r7.u64;
	// bl 0x821633c8
	ctx.lr = 0x8216328C;
	sub_821633C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821633b4
	if (!ctx.cr0.eq) goto loc_821633B4;
	// lwz r4,108(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 108);
	// li r20,0
	r20.s64 = 0;
	// lis r22,-32106
	r22.s64 = -2104098816;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821632c0
	if (ctx.cr6.eq) goto loc_821632C0;
	// lwz r3,6072(r22)
	ctx.r3.u64 = REX_LOAD_U32(r22.u32 + 6072);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821632BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r20,108(r31)
	REX_STORE_U32(r31.u32 + 108, r20.u32);
loc_821632C0:
	// lis r28,-32106
	r28.s64 = -2104098816;
	// lis r27,-32106
	r27.s64 = -2104098816;
	// lwz r3,6192(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 6192);
	// lwz r30,6220(r27)
	r30.u64 = REX_LOAD_U32(r27.u32 + 6220);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r29,0(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821632E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,24(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 24);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821632FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821633c8
	ctx.lr = 0x82163314;
	sub_821633C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821633b4
	if (!ctx.cr0.eq) goto loc_821633B4;
	// lis r21,-32106
	r21.s64 = -2104098816;
loc_82163320:
	// lwz r4,108(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 108);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82163344
	if (ctx.cr6.eq) goto loc_82163344;
	// lwz r3,6072(r22)
	ctx.r3.u64 = REX_LOAD_U32(r22.u32 + 6072);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82163340;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r20,108(r31)
	REX_STORE_U32(r31.u32 + 108, r20.u32);
loc_82163344:
	// lwz r3,-28(r21)
	ctx.r3.u64 = REX_LOAD_U32(r21.u32 + -28);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82163358;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821633c0
	if (ctx.cr0.eq) goto loc_821633C0;
	// lwz r3,6192(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 6192);
	// lwz r30,6220(r27)
	r30.u64 = REX_LOAD_U32(r27.u32 + 6220);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r29,0(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216337C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,24(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 24);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82163394;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821633c8
	ctx.lr = 0x821633AC;
	sub_821633C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82163320
	if (ctx.cr0.eq) goto loc_82163320;
loc_821633B4:
	// li r3,1
	ctx.r3.s64 = 1;
loc_821633B8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1ce8
	return;
loc_821633C0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821633b8
	goto loc_821633B8;
}

DEFINE_REX_FUNC(sub_8216FCC8) {
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
	ctx.lr = 0x8216FCD0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,384(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 384);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8216fd18
	if (!ctx.cr6.gt) goto loc_8216FD18;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
loc_8216FCF8:
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r8,r28
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, r28.u32, ctx.xer);
	// beq cr6,0x8216fd3c
	if (ctx.cr6.eq) goto loc_8216FD3C;
	// lwz r8,384(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 384);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,24
	ctx.r9.s64 = ctx.r9.s64 + 24;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8216fcf8
	if (ctx.cr6.lt) goto loc_8216FCF8;
loc_8216FD18:
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bne cr6,0x8216fd90
	if (!ctx.cr6.eq) goto loc_8216FD90;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r11,25812
	ctx.r4.s64 = ctx.r11.s64 + 25812;
	// addi r3,r10,25932
	ctx.r3.s64 = ctx.r10.s64 + 25932;
	// li r5,86
	ctx.r5.s64 = 86;
	// bl 0x821231d0
	ctx.lr = 0x8216FD38;
	sub_821231D0(ctx, base);
	// b 0x8216fe6c
	goto loc_8216FE6C;
loc_8216FD3C:
	// mulli r11,r10,24
	ctx.r11.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(24));
	// mr r30,r29
	r30.u64 = r29.u64;
	// add r31,r11,r31
	r31.u64 = ctx.r11.u64 + r31.u64;
	// cmpwi cr6,r29,16
	ctx.cr6.compare<int32_t>(r29.s32, 16, ctx.xer);
	// ble cr6,0x8216fd6c
	if (!ctx.cr6.gt) goto loc_8216FD6C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r11,25812
	ctx.r4.s64 = ctx.r11.s64 + 25812;
	// addi r3,r10,25864
	ctx.r3.s64 = ctx.r10.s64 + 25864;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x821231d0
	ctx.lr = 0x8216FD68;
	sub_821231D0(ctx, base);
	// cmpwi cr6,r29,16
	ctx.cr6.compare<int32_t>(r29.s32, 16, ctx.xer);
loc_8216FD6C:
	// blt cr6,0x8216fd74
	if (ctx.cr6.lt) goto loc_8216FD74;
	// li r30,16
	r30.s64 = 16;
loc_8216FD74:
	// stw r28,0(r31)
	REX_STORE_U32(r31.u32 + 0, r28.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// bl 0x826a1e70
	ctx.lr = 0x8216FD8C;
	sub_826A1E70(ctx, base);
	// b 0x8216fe6c
	goto loc_8216FE6C;
loc_8216FD90:
	// mulli r10,r11,24
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(24));
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r30,r10,r31
	r30.u64 = ctx.r10.u64 + r31.u64;
	// stw r11,384(r31)
	REX_STORE_U32(r31.u32 + 384, ctx.r11.u32);
	// cmpwi cr6,r29,16
	ctx.cr6.compare<int32_t>(r29.s32, 16, ctx.xer);
	// ble cr6,0x8216fdc4
	if (!ctx.cr6.gt) goto loc_8216FDC4;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r11,25812
	ctx.r4.s64 = ctx.r11.s64 + 25812;
	// addi r3,r10,25864
	ctx.r3.s64 = ctx.r10.s64 + 25864;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x821231d0
	ctx.lr = 0x8216FDC0;
	sub_821231D0(ctx, base);
	// cmpwi cr6,r29,16
	ctx.cr6.compare<int32_t>(r29.s32, 16, ctx.xer);
loc_8216FDC4:
	// blt cr6,0x8216fdcc
	if (ctx.cr6.lt) goto loc_8216FDCC;
	// li r29,16
	r29.s64 = 16;
loc_8216FDCC:
	// stw r28,0(r30)
	REX_STORE_U32(r30.u32 + 0, r28.u32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// stw r29,4(r30)
	REX_STORE_U32(r30.u32 + 4, r29.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// bl 0x826a1e70
	ctx.lr = 0x8216FDE4;
	sub_826A1E70(ctx, base);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// li r5,24
	ctx.r5.s64 = 24;
	// lwz r4,384(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 384);
	// addi r6,r11,-1008
	ctx.r6.s64 = ctx.r11.s64 + -1008;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826a0028
	ctx.lr = 0x8216FDFC;
	sub_826A0028(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r29,0
	r29.s64 = 0;
	// stw r11,388(r31)
	REX_STORE_U32(r31.u32 + 388, ctx.r11.u32);
	// lwz r11,384(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 384);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8216fe6c
	if (!ctx.cr6.gt) goto loc_8216FE6C;
	// addi r30,r31,4
	r30.s64 = r31.s64 + 4;
loc_8216FE18:
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r5,388(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 388);
	// addi r3,r30,-4
	ctx.r3.s64 = r30.s64 + -4;
	// bl 0x82162a30
	ctx.lr = 0x8216FE28;
	sub_82162A30(ctx, base);
	// stw r3,388(r31)
	REX_STORE_U32(r31.u32 + 388, ctx.r3.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82162a30
	ctx.lr = 0x8216FE3C;
	sub_82162A30(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// stw r11,388(r31)
	REX_STORE_U32(r31.u32 + 388, ctx.r11.u32);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x82162a30
	ctx.lr = 0x8216FE54;
	sub_82162A30(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// stw r3,388(r31)
	REX_STORE_U32(r31.u32 + 388, ctx.r3.u32);
	// addi r30,r30,24
	r30.s64 = r30.s64 + 24;
	// lwz r11,384(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 384);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8216fe18
	if (ctx.cr6.lt) goto loc_8216FE18;
loc_8216FE6C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8217AC08) {
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
	// lwz r31,24(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x8217ac48
	goto loc_8217AC48;
loc_8217AC28:
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// lwz r31,40(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 40);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8217AC48;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8217AC48:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8217ac28
	if (!ctx.cr6.eq) goto loc_8217AC28;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,24(r30)
	REX_STORE_U32(r30.u32 + 24, ctx.r11.u32);
	// stw r11,28(r30)
	REX_STORE_U32(r30.u32 + 28, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_8217D470) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8217D478;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8217d558
	if (ctx.cr6.eq) goto loc_8217D558;
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8217d558
	if (ctx.cr0.eq) goto loc_8217D558;
	// clrlwi. r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// beq 0x8217d51c
	if (ctx.cr0.eq) goto loc_8217D51C;
	// subf r29,r4,r3
	r29.u64 = ctx.r3.u64 - ctx.r4.u64;
loc_8217D4A8:
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8217d508
	if (ctx.cr0.eq) goto loc_8217D508;
	// lbzx r11,r29,r31
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + r31.u32);
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(r28.s32, 1, ctx.xer);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bne cr6,0x8217d4cc
	if (!ctx.cr6.eq) goto loc_8217D4CC;
	// cmpwi cr6,r3,128
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 128, ctx.xer);
	// bge cr6,0x8217d4d0
	if (!ctx.cr6.lt) goto loc_8217D4D0;
loc_8217D4CC:
	// bl 0x826a14c8
	ctx.lr = 0x8217D4D0;
	sub_826A14C8(ctx, base);
loc_8217D4D0:
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(r28.s32, 1, ctx.xer);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bne cr6,0x8217d4ec
	if (!ctx.cr6.eq) goto loc_8217D4EC;
	// cmpwi cr6,r3,128
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 128, ctx.xer);
	// bge cr6,0x8217d4f0
	if (!ctx.cr6.lt) goto loc_8217D4F0;
loc_8217D4EC:
	// bl 0x826a14c8
	ctx.lr = 0x8217D4F0;
	sub_826A14C8(ctx, base);
loc_8217D4F0:
	// cmpw cr6,r30,r3
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x8217d508
	if (!ctx.cr6.eq) goto loc_8217D508;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// lbzx r11,r29,r31
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + r31.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8217d4a8
	if (!ctx.cr0.eq) goto loc_8217D4A8;
loc_8217D508:
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8217d558
	if (!ctx.cr0.eq) goto loc_8217D558;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8217d55c
	goto loc_8217D55C;
loc_8217D51C:
	// lbz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 0);
	// extsb. r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8217d548
	if (ctx.cr0.eq) goto loc_8217D548;
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8217d548
	if (!ctx.cr6.eq) goto loc_8217D548;
	// lbzu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x8217d51c
	if (!ctx.cr0.eq) goto loc_8217D51C;
loc_8217D548:
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8217d55c
	if (ctx.cr0.eq) goto loc_8217D55C;
loc_8217D558:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8217D55C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82187540) {
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
	// lbz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r3,r3,40
	ctx.r3.s64 = ctx.r3.s64 + 40;
	// addi r4,r4,40
	ctx.r4.s64 = ctx.r4.s64 + 40;
	// stb r11,0(r31)
	REX_STORE_U8(r31.u32 + 0, ctx.r11.u8);
	// lbz r11,1(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 1);
	// stb r11,1(r31)
	REX_STORE_U8(r31.u32 + 1, ctx.r11.u8);
	// lbz r11,2(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 2);
	// stb r11,2(r31)
	REX_STORE_U8(r31.u32 + 2, ctx.r11.u8);
	// lbz r11,3(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 3);
	// stb r11,3(r31)
	REX_STORE_U8(r31.u32 + 3, ctx.r11.u8);
	// lbz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 4);
	// stb r11,4(r31)
	REX_STORE_U8(r31.u32 + 4, ctx.r11.u8);
	// lbz r11,5(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 5);
	// stb r11,5(r31)
	REX_STORE_U8(r31.u32 + 5, ctx.r11.u8);
	// lbz r11,6(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 6);
	// stb r11,6(r31)
	REX_STORE_U8(r31.u32 + 6, ctx.r11.u8);
	// lbz r11,7(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 7);
	// stb r11,7(r31)
	REX_STORE_U8(r31.u32 + 7, ctx.r11.u8);
	// lbz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 8);
	// stb r11,8(r31)
	REX_STORE_U8(r31.u32 + 8, ctx.r11.u8);
	// lbz r11,9(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 9);
	// stb r11,9(r31)
	REX_STORE_U8(r31.u32 + 9, ctx.r11.u8);
	// lbz r11,10(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 10);
	// stb r11,10(r31)
	REX_STORE_U8(r31.u32 + 10, ctx.r11.u8);
	// lbz r11,11(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 11);
	// stb r11,11(r31)
	REX_STORE_U8(r31.u32 + 11, ctx.r11.u8);
	// lbz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 12);
	// stb r11,12(r31)
	REX_STORE_U8(r31.u32 + 12, ctx.r11.u8);
	// lbz r11,13(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 13);
	// stb r11,13(r31)
	REX_STORE_U8(r31.u32 + 13, ctx.r11.u8);
	// lbz r11,14(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 14);
	// stb r11,14(r31)
	REX_STORE_U8(r31.u32 + 14, ctx.r11.u8);
	// lbz r11,15(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 15);
	// stb r11,15(r31)
	REX_STORE_U8(r31.u32 + 15, ctx.r11.u8);
	// lbz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 16);
	// stb r11,16(r31)
	REX_STORE_U8(r31.u32 + 16, ctx.r11.u8);
	// lbz r11,17(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 17);
	// stb r11,17(r31)
	REX_STORE_U8(r31.u32 + 17, ctx.r11.u8);
	// lbz r11,18(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 18);
	// stb r11,18(r31)
	REX_STORE_U8(r31.u32 + 18, ctx.r11.u8);
	// lbz r11,19(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 19);
	// stb r11,19(r31)
	REX_STORE_U8(r31.u32 + 19, ctx.r11.u8);
	// lbz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 20);
	// stb r11,20(r31)
	REX_STORE_U8(r31.u32 + 20, ctx.r11.u8);
	// lfs f0,24(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 24, temp.u32);
	// lbz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 28);
	// stb r11,28(r31)
	REX_STORE_U8(r31.u32 + 28, ctx.r11.u8);
	// lfs f0,32(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 32, temp.u32);
	// lfs f0,36(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 36, temp.u32);
	// bl 0x82120d70
	ctx.lr = 0x82187630;
	sub_82120D70(ctx, base);
	// lbz r11,68(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 68);
	// addi r3,r31,72
	ctx.r3.s64 = r31.s64 + 72;
	// addi r4,r30,72
	ctx.r4.s64 = r30.s64 + 72;
	// stb r11,68(r31)
	REX_STORE_U8(r31.u32 + 68, ctx.r11.u8);
	// bl 0x82120d70
	ctx.lr = 0x82187644;
	sub_82120D70(ctx, base);
	// lbz r11,100(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 100);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,100(r31)
	REX_STORE_U8(r31.u32 + 100, ctx.r11.u8);
	// lbz r11,101(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 101);
	// stb r11,101(r31)
	REX_STORE_U8(r31.u32 + 101, ctx.r11.u8);
	// lbz r11,102(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 102);
	// stb r11,102(r31)
	REX_STORE_U8(r31.u32 + 102, ctx.r11.u8);
	// lbz r11,103(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 103);
	// stb r11,103(r31)
	REX_STORE_U8(r31.u32 + 103, ctx.r11.u8);
	// lbz r11,104(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 104);
	// stb r11,104(r31)
	REX_STORE_U8(r31.u32 + 104, ctx.r11.u8);
	// lfs f0,108(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,108(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 108, temp.u32);
	// lfs f0,112(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 112, temp.u32);
	// lbz r11,116(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 116);
	// stb r11,116(r31)
	REX_STORE_U8(r31.u32 + 116, ctx.r11.u8);
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

DEFINE_REX_FUNC(sub_82190A38) {
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
	// bl 0x826a1c8c
	ctx.lr = 0x82190A40;
	// addi r12,r1,-128
	ctx.r12.s64 = ctx.r1.s64 + -128;
	// bl 0x826a2c80
	ctx.lr = 0x82190A48;
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,92(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 92);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// li r23,0
	r23.s64 = 0;
	// mr r24,r11
	r24.u64 = ctx.r11.u64;
	// addi r25,r11,8
	r25.s64 = ctx.r11.s64 + 8;
	// addi r22,r11,12
	r22.s64 = ctx.r11.s64 + 12;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82190df0
	if (!ctx.cr6.gt) goto loc_82190DF0;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r30,r11,16592
	r30.s64 = ctx.r11.s64 + 16592;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r18,r3,80
	r18.s64 = ctx.r3.s64 + 80;
	// lfs f29,15048(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15048);
	f29.f64 = double(temp.f32);
	// addi r17,r3,84
	r17.s64 = ctx.r3.s64 + 84;
	// lfs f18,292(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 292);
	f18.f64 = double(temp.f32);
	// addi r26,r3,100
	r26.s64 = ctx.r3.s64 + 100;
	// lfs f25,288(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 288);
	f25.f64 = double(temp.f32);
	// addi r19,r4,96
	r19.s64 = ctx.r4.s64 + 96;
	// lfs f27,180(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 180);
	f27.f64 = double(temp.f32);
	// addi r21,r11,-27152
	r21.s64 = ctx.r11.s64 + -27152;
	// lfs f26,160(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 160);
	f26.f64 = double(temp.f32);
	// addi r20,r10,-27136
	r20.s64 = ctx.r10.s64 + -27136;
	// lfs f31,12(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 12);
	f31.f64 = double(temp.f32);
	// lfs f21,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	f21.f64 = double(temp.f32);
	// lfs f19,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	f19.f64 = double(temp.f32);
loc_82190AC0:
	// lfs f0,0(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r24.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r18)
	temp.u32 = REX_LOAD_U32(r18.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f23,f0,f13
	f23.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,4(r24)
	temp.u32 = REX_LOAD_U32(r24.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r17)
	temp.u32 = REX_LOAD_U32(r17.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f22,f0,f13
	f22.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,0(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmuls f13,f23,f23
	ctx.f13.f64 = double(float(f23.f64 * f23.f64));
	// fmadds f20,f22,f22,f13
	f20.f64 = double(float(std::fma(f22.f64, f22.f64, ctx.f13.f64)));
	// fcmpu cr6,f20,f0
	ctx.cr6.compare(f20.f64, ctx.f0.f64);
	// bge cr6,0x82190dd0
	if (!ctx.cr6.lt) goto loc_82190DD0;
	// lfs f0,104(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// addi r29,r31,104
	r29.s64 = r31.s64 + 104;
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fcmpu cr6,f20,f0
	ctx.cr6.compare(f20.f64, ctx.f0.f64);
	// ble cr6,0x82190dd0
	if (!ctx.cr6.gt) goto loc_82190DD0;
	// lfs f0,128(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// fsqrts f24,f20
	f24.f64 = double(float(sqrt(f20.f64)));
	// lfs f13,132(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// addi r10,r10,16592
	ctx.r10.s64 = ctx.r10.s64 + 16592;
	// addi r11,r11,256
	ctx.r11.s64 = ctx.r11.s64 + 256;
	// addi r10,r10,256
	ctx.r10.s64 = ctx.r10.s64 + 256;
	// addi r28,r31,128
	r28.s64 = r31.s64 + 128;
	// fmuls f0,f0,f23
	ctx.f0.f64 = double(float(ctx.f0.f64 * f23.f64));
	// fdivs f28,f31,f24
	f28.f64 = double(float(f31.f64 / f24.f64));
	// fmadds f0,f13,f22,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, f22.f64, ctx.f0.f64)));
	// fmuls f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 * f28.f64));
	// fsubs f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 - f31.f64));
	// fcmpu cr6,f13,f29
	ctx.cr6.compare(ctx.f13.f64, f29.f64);
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
	// lfsx f13,r11,r9
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsel f0,f13,f31,f0
	ctx.f0.f64 = ctx.f13.f64 >= 0.0 ? f31.f64 : ctx.f0.f64;
	// fsubs f13,f21,f0
	ctx.f13.f64 = double(float(f21.f64 - ctx.f0.f64));
	// fcmpu cr6,f13,f29
	ctx.cr6.compare(ctx.f13.f64, f29.f64);
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
	// lfsx f13,r10,r11
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsel f30,f13,f21,f0
	f30.f64 = ctx.f13.f64 >= 0.0 ? f21.f64 : ctx.f0.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x82186c18
	ctx.lr = 0x82190B84;
	sub_82186C18(ctx, base);
	// lfs f0,136(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r31,136
	ctx.r9.s64 = r31.s64 + 136;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x82190dd0
	if (!ctx.cr6.lt) goto loc_82190DD0;
	// lfs f13,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lfs f12,0(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f24,f13
	ctx.f11.f64 = double(float(f24.f64 - ctx.f13.f64));
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// stfs f31,96(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fdivs f12,f1,f0
	ctx.f12.f64 = double(float(ctx.f1.f64 / ctx.f0.f64));
	// lvx128 v62,r0,r20
	ea = (r20.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// fmr f8,f31
	ctx.f8.f64 = f31.f64;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r11,r31,116
	ctx.r11.s64 = r31.s64 + 116;
	// addi r10,r31,108
	ctx.r10.s64 = r31.s64 + 108;
	// fdivs f0,f11,f13
	ctx.f0.f64 = double(float(ctx.f11.f64 / ctx.f13.f64));
	// fmsubs f0,f0,f27,f25
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f27.f64, -f25.f64)));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lvx128 v63,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v61,v63,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v61.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vspltw128 v63,v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xAA));
	// vmsum4fp128 v60,v61,v62
	simde_mm_store_ps(ctx.v60.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v62.f32), 0xFF));
	// vmulfp128 v63,v61,v63
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v63.f32)));
	// stvewx128 v60,r0,r7
	ea = (ctx.r7.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// lvx128 v61,r0,r21
	ea = (r21.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum4fp128 v63,v63,v61
	simde_mm_store_ps(ctx.v63.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v61.f32), 0xFF));
	// stvewx128 v63,r0,r6
	ea = (ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,116(r31)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(r31.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,108(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// fadds f11,f11,f31
	ctx.f11.f64 = double(float(ctx.f11.f64 + f31.f64));
	// fmuls f11,f11,f19
	ctx.f11.f64 = double(float(ctx.f11.f64 * f19.f64));
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// fmuls f0,f11,f13
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// ble cr6,0x82190ccc
	if (!ctx.cr6.gt) goto loc_82190CCC;
	// lfs f13,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r30,256
	ctx.r8.s64 = r30.s64 + 256;
	// fsubs f11,f31,f13
	ctx.f11.f64 = double(float(f31.f64 - ctx.f13.f64));
	// stfs f31,112(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// fdivs f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f11.f64));
	// fmadds f13,f13,f25,f25
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, f25.f64, f25.f64)));
	// fabs f11,f13
	ctx.f11.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f29
	ctx.cr6.compare(ctx.f13.f64, f29.f64);
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
	// fmuls f13,f11,f18
	ctx.f13.f64 = double(float(ctx.f11.f64 * f18.f64));
	// rlwinm r3,r4,27,29,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x4;
	// rlwinm r4,r4,30,29,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x4;
	// or r4,r3,r4
	ctx.r4.u64 = ctx.r3.u64 | ctx.r4.u64;
	// lfsx f10,r8,r4
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r4.u32);
	ctx.f10.f64 = double(temp.f32);
	// fctidz f13,f13
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f13.f64));
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fnmsubs f13,f13,f27,f11
	ctx.f13.f64 = double(float(-std::fma(ctx.f13.f64, f27.f64, -ctx.f11.f64)));
	// fsubs f13,f13,f25
	ctx.f13.f64 = double(float(ctx.f13.f64 - f25.f64));
	// fneg f11,f13
	ctx.f11.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fsel f13,f10,f13,f11
	ctx.f13.f64 = ctx.f10.f64 >= 0.0 ? ctx.f13.f64 : ctx.f11.f64;
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmuls f11,f13,f13
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// stfs f11,120(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f13,124(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lvx128 v63,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v60,v63,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v60.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vspltw128 v63,v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xAA));
	// vmsum4fp128 v62,v60,v62
	simde_mm_store_ps(ctx.v62.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_load_ps(ctx.v62.f32), 0xFF));
	// vmulfp128 v63,v60,v63
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_load_ps(ctx.v63.f32)));
	// stvewx128 v62,r0,r6
	ea = (ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// vmsum4fp128 v63,v63,v61
	simde_mm_store_ps(ctx.v63.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v61.f32), 0xFF));
	// stvewx128 v63,r0,r5
	ea = (ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f13,84(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 + f31.f64));
	// fmuls f8,f13,f19
	ctx.f8.f64 = double(float(ctx.f13.f64 * f19.f64));
loc_82190CCC:
	// fmuls f10,f8,f0
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f11,0(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fnmsubs f5,f30,f30,f31
	ctx.f5.f64 = double(float(-std::fma(f30.f64, f30.f64, -f31.f64)));
	// lfs f9,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f0,f28,f23
	ctx.f0.f64 = double(float(f28.f64 * f23.f64));
	// fmuls f13,f28,f22
	ctx.f13.f64 = double(float(f28.f64 * f22.f64));
	// fmr f7,f29
	ctx.f7.f64 = f29.f64;
	// fmr f6,f29
	ctx.f6.f64 = f29.f64;
	// fadds f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// stfs f11,0(r25)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r25.u32 + 0, temp.u32);
	// fsqrts f5,f5
	ctx.f5.f64 = double(float(sqrt(ctx.f5.f64)));
	// lfs f11,0(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f4,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f4,f11,f4
	ctx.f4.f64 = double(float(ctx.f11.f64 - ctx.f4.f64));
	// fcmpu cr6,f12,f3
	ctx.cr6.compare(ctx.f12.f64, ctx.f3.f64);
	// fdivs f11,f21,f5
	ctx.f11.f64 = double(float(f21.f64 / ctx.f5.f64));
	// fdivs f12,f0,f4
	ctx.f12.f64 = double(float(ctx.f0.f64 / ctx.f4.f64));
	// fdivs f5,f13,f4
	ctx.f5.f64 = double(float(ctx.f13.f64 / ctx.f4.f64));
	// fmuls f12,f12,f27
	ctx.f12.f64 = double(float(ctx.f12.f64 * f27.f64));
	// fmuls f5,f5,f27
	ctx.f5.f64 = double(float(ctx.f5.f64 * f27.f64));
	// fmuls f12,f12,f9
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// fmuls f9,f5,f9
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f9.f64));
	// fmuls f12,f12,f26
	ctx.f12.f64 = double(float(ctx.f12.f64 * f26.f64));
	// fmuls f9,f9,f26
	ctx.f9.f64 = double(float(ctx.f9.f64 * f26.f64));
	// fmuls f12,f12,f2
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f2.f64));
	// fmuls f9,f9,f2
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f2.f64));
	// ble cr6,0x82190da8
	if (!ctx.cr6.gt) goto loc_82190DA8;
	// fmuls f7,f0,f30
	ctx.f7.f64 = double(float(ctx.f0.f64 * f30.f64));
	// lfs f6,0(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 * f30.f64));
	// lfs f5,132(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 132);
	ctx.f5.f64 = double(temp.f32);
	// fdivs f4,f31,f20
	ctx.f4.f64 = double(float(f31.f64 / f20.f64));
	// lfs f0,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f3,f31,f0
	ctx.f3.f64 = double(float(f31.f64 / ctx.f0.f64));
	// lfs f0,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f2,f31,f0
	ctx.f2.f64 = double(float(f31.f64 - ctx.f0.f64));
	// lfs f0,92(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// fmsubs f7,f6,f24,f7
	ctx.f7.f64 = double(float(std::fma(ctx.f6.f64, f24.f64, -ctx.f7.f64)));
	// fmsubs f13,f5,f24,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f5.f64, f24.f64, -ctx.f13.f64)));
	// fmuls f7,f7,f4
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f4.f64));
	// fmuls f13,f13,f4
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f4.f64));
	// fmuls f7,f7,f11
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// fmuls f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// fmuls f11,f7,f3
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f3.f64));
	// fmuls f13,f13,f3
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f3.f64));
	// fdivs f11,f11,f2
	ctx.f11.f64 = double(float(ctx.f11.f64 / ctx.f2.f64));
	// fdivs f13,f13,f2
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f2.f64));
	// fmuls f11,f11,f25
	ctx.f11.f64 = double(float(ctx.f11.f64 * f25.f64));
	// fmuls f13,f13,f25
	ctx.f13.f64 = double(float(ctx.f13.f64 * f25.f64));
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f7,f11,f26
	ctx.f7.f64 = double(float(ctx.f11.f64 * f26.f64));
	// fmuls f6,f0,f26
	ctx.f6.f64 = double(float(ctx.f0.f64 * f26.f64));
loc_82190DA8:
	// fmuls f0,f12,f8
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f8.f64));
	// lfs f13,0(r22)
	temp.u32 = REX_LOAD_U32(r22.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f9,f8
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f8.f64));
	// lfs f11,4(r22)
	temp.u32 = REX_LOAD_U32(r22.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f0,f7,f10,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f7.f64, ctx.f10.f64, ctx.f0.f64)));
	// fmadds f12,f6,f10,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f6.f64, ctx.f10.f64, ctx.f12.f64)));
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,0(r22)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r22.u32 + 0, temp.u32);
	// fadds f0,f12,f11
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// stfs f0,4(r22)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r22.u32 + 4, temp.u32);
loc_82190DD0:
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 0);
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// lwz r10,0(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 0);
	// add r24,r11,r24
	r24.u64 = ctx.r11.u64 + r24.u64;
	// add r25,r11,r25
	r25.u64 = ctx.r11.u64 + r25.u64;
	// add r22,r11,r22
	r22.u64 = ctx.r11.u64 + r22.u64;
	// cmpw cr6,r23,r10
	ctx.cr6.compare<int32_t>(r23.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82190ac0
	if (ctx.cr6.lt) goto loc_82190AC0;
loc_82190DF0:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// addi r12,r1,-128
	ctx.r12.s64 = ctx.r1.s64 + -128;
	// bl 0x826a2ccc
	ctx.lr = 0x82190DFC;
	// b 0x826a1cdc
	return;
}

DEFINE_REX_FUNC(sub_821BA5E0) {
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
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821BA604;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821ba850
	ctx.lr = 0x821BA60C;
	sub_821BA850(ctx, base);
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

DEFINE_REX_FUNC(sub_821BBD58) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-15016
	ctx.r3.s64 = ctx.r11.s64 + -15016;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821BC0E0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x821BC0E8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,23076
	ctx.r4.s64 = ctx.r11.s64 + 23076;
	// bl 0x821bc330
	ctx.lr = 0x821BC104;
	sub_821BC330(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// clrlwi r29,r3,24
	r29.u64 = ctx.r3.u32 & 0xFF;
	// addi r4,r11,23080
	ctx.r4.s64 = ctx.r11.s64 + 23080;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821bc330
	ctx.lr = 0x821BC118;
	sub_821BC330(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r10,3
	ctx.r10.s64 = 3;
	// subf r11,r11,r29
	ctx.r11.u64 = r29.u64 - ctx.r11.u64;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stb r11,4(r31)
	REX_STORE_U8(r31.u32 + 4, ctx.r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_821BE8A8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-14928
	ctx.r3.s64 = ctx.r11.s64 + -14928;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821BEE18) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-14912
	ctx.r3.s64 = ctx.r11.s64 + -14912;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821BF318) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x821BF320;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,128(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 128);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bf35c
	if (ctx.cr6.eq) goto loc_821BF35C;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r4,r4,112
	ctx.r4.s64 = ctx.r4.s64 + 112;
	// addi r3,r11,1592
	ctx.r3.s64 = ctx.r11.s64 + 1592;
	// bl 0x8215f5f8
	ctx.lr = 0x821BF348;
	sub_8215F5F8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x821BF350;
	sub_8215F0F0(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// stb r30,8(r29)
	REX_STORE_U8(r29.u32 + 8, r30.u8);
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
loc_821BF35C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_821C08C8) {
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
	ctx.lr = 0x821C08DC;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821c08ec
	if (ctx.cr0.eq) goto loc_821C08EC;
	// bl 0x821c0900
	ctx.lr = 0x821C08E8;
	sub_821C0900(ctx, base);
	// b 0x821c08f0
	goto loc_821C08F0;
loc_821C08EC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821C08F0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821C30D0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,168(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 168);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
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

DEFINE_REX_FUNC(sub_821C3C58) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r4,104(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// addi r11,r11,-17592
	ctx.r11.s64 = ctx.r11.s64 + -17592;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq cr6,0x821c3ca4
	if (ctx.cr6.eq) goto loc_821C3CA4;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6040(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6040);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821C3CA4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821C3CA4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8219be30
	ctx.lr = 0x821C3CAC;
	sub_8219BE30(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821c3cbc
	if (ctx.cr0.eq) goto loc_821C3CBC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x821C3CBC;
	sub_8269CE98(ctx, base);
loc_821C3CBC:
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

DEFINE_REX_FUNC(sub_821C7D88) {
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
	// lbz r11,736(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 736);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821c7dc0
	if (ctx.cr0.eq) goto loc_821C7DC0;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,124(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 124);
	// stb r11,736(r31)
	REX_STORE_U8(r31.u32 + 736, ctx.r11.u8);
	// bl 0x82191520
	ctx.lr = 0x821C7DB8;
	sub_82191520(ctx, base);
	// addi r3,r31,464
	ctx.r3.s64 = r31.s64 + 464;
	// bl 0x821e44f0
	ctx.lr = 0x821C7DC0;
	sub_821E44F0(ctx, base);
loc_821C7DC0:
	// addi r3,r31,148
	ctx.r3.s64 = r31.s64 + 148;
	// bl 0x821e3038
	ctx.lr = 0x821C7DC8;
	sub_821E3038(ctx, base);
	// addi r3,r31,464
	ctx.r3.s64 = r31.s64 + 464;
	// bl 0x821e43f8
	ctx.lr = 0x821C7DD0;
	sub_821E43F8(ctx, base);
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

DEFINE_REX_FUNC(sub_821C9F28) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-14772
	ctx.r3.s64 = ctx.r11.s64 + -14772;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821CA378) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,124(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 124);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821ca408
	if (!ctx.cr0.eq) goto loc_821CA408;
	// lbz r11,125(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 125);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821ca408
	if (!ctx.cr0.eq) goto loc_821CA408;
	// lwz r11,120(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// extsb r10,r4
	ctx.r10.s64 = ctx.r4.s8;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x821ca408
	if (!ctx.cr6.eq) goto loc_821CA408;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-22996
	ctx.r4.s64 = ctx.r11.s64 + -22996;
	// bl 0x82120600
	ctx.lr = 0x821CA3C4;
	sub_82120600(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,116(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 116);
	// bl 0x821dd040
	ctx.lr = 0x821CA3D0;
	sub_821DD040(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stw r10,256(r1)
	REX_STORE_U32(ctx.r1.u32 + 256, ctx.r10.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821CA3F8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x821CA408;
	sub_82120AC0(ctx, base);
loc_821CA408:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821CFF10) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x821CFF18;
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bne cr6,0x821d00d4
	if (!ctx.cr6.eq) goto loc_821D00D4;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// cmplwi cr6,r5,6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 6, ctx.xer);
	// addi r29,r11,29744
	r29.s64 = ctx.r11.s64 + 29744;
	// bge cr6,0x821cff54
	if (!ctx.cr6.lt) goto loc_821CFF54;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r11,30080
	ctx.r3.s64 = ctx.r11.s64 + 30080;
	// li r5,173
	ctx.r5.s64 = 173;
	// bl 0x821231d0
	ctx.lr = 0x821CFF54;
	sub_821231D0(ctx, base);
loc_821CFF54:
	// lhz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 0);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// beq cr6,0x821cff74
	if (ctx.cr6.eq) goto loc_821CFF74;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r11,30128
	ctx.r3.s64 = ctx.r11.s64 + 30128;
	// li r5,177
	ctx.r5.s64 = 177;
	// bl 0x821231d0
	ctx.lr = 0x821CFF74;
	sub_821231D0(ctx, base);
loc_821CFF74:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r30,2(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 2);
	// lwz r3,6156(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6156);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821CFF90;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// subf r11,r30,r3
	ctx.r11.u64 = ctx.r3.u64 - r30.u64;
	// lwz r10,84(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 84);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// addi r9,r9,16592
	ctx.r9.s64 = ctx.r9.s64 + 16592;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lwz r11,104(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 104);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,284(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 284);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// beq cr6,0x821d00cc
	if (ctx.cr6.eq) goto loc_821D00CC;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r10,256(r1)
	REX_STORE_U32(ctx.r1.u32 + 256, ctx.r10.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// li r4,6
	ctx.r4.s64 = 6;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8216b6a8
	ctx.lr = 0x821CFFF0;
	sub_8216B6A8(ctx, base);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r31,68
	ctx.r5.s64 = r31.s64 + 68;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8216b6a8
	ctx.lr = 0x821D0004;
	sub_8216B6A8(ctx, base);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r31,72
	ctx.r5.s64 = r31.s64 + 72;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8216b6a8
	ctx.lr = 0x821D0018;
	sub_8216B6A8(ctx, base);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r31,76
	ctx.r5.s64 = r31.s64 + 76;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8216b6a8
	ctx.lr = 0x821D002C;
	sub_8216B6A8(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8216b6a8
	ctx.lr = 0x821D0040;
	sub_8216B6A8(ctx, base);
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821d006c
	if (ctx.cr6.eq) goto loc_821D006C;
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,6
	ctx.r4.s64 = 6;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x8216b6a8
	ctx.lr = 0x821D006C;
	sub_8216B6A8(ctx, base);
loc_821D006C:
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8216b6a8
	ctx.lr = 0x821D0080;
	sub_8216B6A8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,19784
	ctx.r4.s64 = ctx.r11.s64 + 19784;
	// bl 0x82120600
	ctx.lr = 0x821D0090;
	sub_82120600(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x821dd040
	ctx.lr = 0x821D009C;
	sub_821DD040(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821D00BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x821D00CC;
	sub_82120AC0(ctx, base);
loc_821D00CC:
	// li r3,6
	ctx.r3.s64 = 6;
	// b 0x821d00d8
	goto loc_821D00D8;
loc_821D00D4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821D00D8:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_821DBE18) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x821DBE20;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
loc_821DBE2C:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r31,r30,84
	r31.s64 = r30.s64 + 84;
	// li r9,0
	ctx.r9.s64 = 0;
loc_821DBE38:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 4);
	// subf r10,r10,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r10.u64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x821dbea8
	if (!ctx.cr6.lt) goto loc_821DBEA8;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwzx r8,r9,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplw cr6,r8,r29
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, r29.u32, ctx.xer);
	// beq cr6,0x821dbe6c
	if (ctx.cr6.eq) goto loc_821DBE6C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// b 0x821dbe38
	goto loc_821DBE38;
loc_821DBE6C:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// subf r11,r4,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r4.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8269cc20
	ctx.lr = 0x821DBE8C;
	sub_8269CC20(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// mr r30,r29
	r30.u64 = r29.u64;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// b 0x821dbe2c
	goto loc_821DBE2C;
loc_821DBEA8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_821DFB10) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x821DFB18;
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82178a50
	ctx.lr = 0x821DFB2C;
	sub_82178A50(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8213bc98
	ctx.lr = 0x821DFB38;
	sub_8213BC98(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r29,0(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82120ac0
	ctx.lr = 0x821DFB50;
	sub_82120AC0(ctx, base);
	// lis r30,-32106
	r30.s64 = -2104098816;
	// lwz r3,6152(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6152);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821DFB68;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821dfbb4
	if (ctx.cr0.eq) goto loc_821DFBB4;
	// lwz r3,6152(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6152);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,120(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821DFB84;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821dfbb4
	if (!ctx.cr0.eq) goto loc_821DFBB4;
	// li r3,152
	ctx.r3.s64 = 152;
	// bl 0x822f6280
	ctx.lr = 0x821DFB94;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821dfbfc
	if (ctx.cr0.eq) goto loc_821DFBFC;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// addi r5,r31,112
	ctx.r5.s64 = r31.s64 + 112;
	// bne cr6,0x821dfbac
	if (!ctx.cr6.eq) goto loc_821DFBAC;
	// li r5,0
	ctx.r5.s64 = 0;
loc_821DFBAC:
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x821dfbd8
	goto loc_821DFBD8;
loc_821DFBB4:
	// li r3,152
	ctx.r3.s64 = 152;
	// bl 0x822f6280
	ctx.lr = 0x821DFBBC;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821dfbfc
	if (ctx.cr0.eq) goto loc_821DFBFC;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// addi r5,r31,112
	ctx.r5.s64 = r31.s64 + 112;
	// bne cr6,0x821dfbd4
	if (!ctx.cr6.eq) goto loc_821DFBD4;
	// li r5,0
	ctx.r5.s64 = 0;
loc_821DFBD4:
	// li r7,1
	ctx.r7.s64 = 1;
loc_821DFBD8:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lfs f2,228(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 228);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// bl 0x8217f8a0
	ctx.lr = 0x821DFBF4;
	sub_8217F8A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821dfc00
	goto loc_821DFC00;
loc_821DFBFC:
	// li r4,0
	ctx.r4.s64 = 0;
loc_821DFC00:
	// stw r4,132(r31)
	REX_STORE_U32(r31.u32 + 132, ctx.r4.u32);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x821d3988
	ctx.lr = 0x821DFC0C;
	sub_821D3988(ctx, base);
	// lwz r11,132(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 132);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,32
	ctx.r4.s64 = r31.s64 + 32;
	// addi r3,r11,76
	ctx.r3.s64 = ctx.r11.s64 + 76;
	// bl 0x82120b20
	ctx.lr = 0x821DFC24;
	sub_82120B20(ctx, base);
	// lbz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 136);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821dfc48
	if (ctx.cr0.eq) goto loc_821DFC48;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r11,256(r1)
	REX_STORE_U32(ctx.r1.u32 + 256, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821dff30
	ctx.lr = 0x821DFC48;
	sub_821DFF30(ctx, base);
loc_821DFC48:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_821E89C0) {
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
	// lis r30,-32106
	r30.s64 = -2104098816;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r11,6096(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 6096);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r4,16(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
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
	ctx.lr = 0x821E8A0C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,6096(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 6096);
	// lwz r6,68(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 68);
	// lwz r5,72(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 72);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r4,20(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821E8A40;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r10,64(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 64);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,6092(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6092);
	// lwz r9,60(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 60);
	// lwz r8,56(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 56);
	// lwz r7,52(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 52);
	// lwz r6,44(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 44);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,244(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 244);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821E8A74;
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

DEFINE_REX_FUNC(sub_821EDF98) {
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
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r30,0
	r30.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,16060
	ctx.r11.s64 = ctx.r11.s64 + 16060;
	// stw r30,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r30.u32);
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,12(r31)
	REX_STORE_U32(r31.u32 + 12, r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82120ac0
	ctx.lr = 0x821EDFE0;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stw r30,44(r31)
	REX_STORE_U32(r31.u32 + 44, r30.u32);
	// addi r9,r11,16592
	ctx.r9.s64 = ctx.r11.s64 + 16592;
	// stw r30,48(r31)
	REX_STORE_U32(r31.u32 + 48, r30.u32);
	// addi r11,r31,64
	ctx.r11.s64 = r31.s64 + 64;
	// stw r30,52(r31)
	REX_STORE_U32(r31.u32 + 52, r30.u32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// stw r30,56(r31)
	REX_STORE_U32(r31.u32 + 56, r30.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r30,60(r31)
	REX_STORE_U32(r31.u32 + 60, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,172(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 172);
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
	// ld r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// lfs f13,596(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 596);
	ctx.f13.f64 = double(temp.f32);
	// ld r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// std r11,64(r31)
	REX_STORE_U64(r31.u32 + 64, ctx.r11.u64);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// std r10,72(r31)
	REX_STORE_U64(r31.u32 + 72, ctx.r10.u64);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// ld r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// ld r10,8(r8)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r8.u32 + 8);
	// std r10,88(r31)
	REX_STORE_U64(r31.u32 + 88, ctx.r10.u64);
	// std r9,80(r31)
	REX_STORE_U64(r31.u32 + 80, ctx.r9.u64);
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

DEFINE_REX_FUNC(sub_821F63D8) {
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
	// addi r11,r11,23688
	ctx.r11.s64 = ctx.r11.s64 + 23688;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x821f6404
	if (ctx.cr0.eq) goto loc_821F6404;
	// bl 0x8269ce98
	ctx.lr = 0x821F6404;
	sub_8269CE98(ctx, base);
loc_821F6404:
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

DEFINE_REX_FUNC(sub_821F8A70) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r3,6048(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 6048);
	// addi r5,r11,-23868
	ctx.r5.s64 = ctx.r11.s64 + -23868;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_821F9F28) {
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
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1ca0
	ctx.lr = 0x821F9F30;
	// stfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -104, f30.u64);
	// stfd f31,-96(r1)
	REX_STORE_U64(ctx.r1.u32 + -96, f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// addi r28,r11,24652
	r28.s64 = ctx.r11.s64 + 24652;
	// addi r31,r3,8
	r31.s64 = ctx.r3.s64 + 8;
	// addi r11,r10,1640
	ctx.r11.s64 = ctx.r10.s64 + 1640;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mulli r10,r6,28
	ctx.r10.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(28));
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8215f670
	ctx.lr = 0x821F9F80;
	sub_8215F670(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8215f5f8
	ctx.lr = 0x821F9F88;
	sub_8215F5F8(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x821F9F8C;
	sub_8215F990(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215f670
	ctx.lr = 0x821F9F9C;
	sub_8215F670(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8215f5f8
	ctx.lr = 0x821F9FA4;
	sub_8215F5F8(ctx, base);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x821F9FAC;
	sub_8215F0F0(ctx, base);
	// li r28,1
	r28.s64 = 1;
	// addi r11,r29,1
	ctx.r11.s64 = r29.s64 + 1;
	// stw r28,0(r22)
	REX_STORE_U32(r22.u32 + 0, r28.u32);
	// cmpwi cr6,r27,2
	ctx.cr6.compare<int32_t>(r27.s32, 2, ctx.xer);
	// stw r11,8(r22)
	REX_STORE_U32(r22.u32 + 8, ctx.r11.u32);
	// bne cr6,0x821fa010
	if (!ctx.cr6.eq) goto loc_821FA010;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r22,r11,24676
	r22.s64 = ctx.r11.s64 + 24676;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x8215f670
	ctx.lr = 0x821F9FD8;
	sub_8215F670(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8215f5f8
	ctx.lr = 0x821F9FE0;
	sub_8215F5F8(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x821F9FE4;
	sub_8215F990(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215f670
	ctx.lr = 0x821F9FF4;
	sub_8215F670(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8215f5f8
	ctx.lr = 0x821F9FFC;
	sub_8215F5F8(ctx, base);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x821FA004;
	sub_8215F0F0(ctx, base);
	// addi r11,r29,1
	ctx.r11.s64 = r29.s64 + 1;
	// stw r28,0(r22)
	REX_STORE_U32(r22.u32 + 0, r28.u32);
	// stw r11,8(r22)
	REX_STORE_U32(r22.u32 + 8, ctx.r11.u32);
loc_821FA010:
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(r27.s32, 1, ctx.xer);
	// bne cr6,0x821fa064
	if (!ctx.cr6.eq) goto loc_821FA064;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r22,r11,24700
	r22.s64 = ctx.r11.s64 + 24700;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x8215f670
	ctx.lr = 0x821FA02C;
	sub_8215F670(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8215f5f8
	ctx.lr = 0x821FA034;
	sub_8215F5F8(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x821FA038;
	sub_8215F990(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215f670
	ctx.lr = 0x821FA048;
	sub_8215F670(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8215f5f8
	ctx.lr = 0x821FA050;
	sub_8215F5F8(ctx, base);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x821FA058;
	sub_8215F0F0(ctx, base);
	// addi r11,r29,1
	ctx.r11.s64 = r29.s64 + 1;
	// stw r28,0(r22)
	REX_STORE_U32(r22.u32 + 0, r28.u32);
	// stw r11,8(r22)
	REX_STORE_U32(r22.u32 + 8, ctx.r11.u32);
loc_821FA064:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// bne cr6,0x821fa0b8
	if (!ctx.cr6.eq) goto loc_821FA0B8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r22,r11,24724
	r22.s64 = ctx.r11.s64 + 24724;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x8215f670
	ctx.lr = 0x821FA080;
	sub_8215F670(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8215f5f8
	ctx.lr = 0x821FA088;
	sub_8215F5F8(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x821FA08C;
	sub_8215F990(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215f670
	ctx.lr = 0x821FA09C;
	sub_8215F670(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8215f5f8
	ctx.lr = 0x821FA0A4;
	sub_8215F5F8(ctx, base);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x821FA0AC;
	sub_8215F0F0(ctx, base);
	// addi r11,r29,1
	ctx.r11.s64 = r29.s64 + 1;
	// stw r28,0(r22)
	REX_STORE_U32(r22.u32 + 0, r28.u32);
	// stw r11,8(r22)
	REX_STORE_U32(r22.u32 + 8, ctx.r11.u32);
loc_821FA0B8:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821FA0E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821fa15c
	if (ctx.cr0.eq) goto loc_821FA15C;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r27.s32, ctx.xer);
	// bge cr6,0x821fa0fc
	if (!ctx.cr6.lt) goto loc_821FA0FC;
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
loc_821FA0FC:
	// lfs f13,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lfs f12,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f31,f13
	ctx.f11.f64 = double(float(f31.f64 - ctx.f13.f64));
	// fsubs f10,f30,f12
	ctx.f10.f64 = double(float(f30.f64 - ctx.f12.f64));
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lfs f0,15048(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r11,256
	ctx.r10.s64 = ctx.r11.s64 + 256;
	// addi r11,r11,256
	ctx.r11.s64 = ctx.r11.s64 + 256;
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
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
	// rlwinm r7,r9,27,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x4;
	// rlwinm r6,r8,27,29,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x4;
	// rlwinm r9,r9,30,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x4;
	// rlwinm r8,r8,30,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x4;
	// or r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 | ctx.r9.u64;
	// or r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 | ctx.r8.u64;
	// lfsx f0,r10,r9
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f11,r11,r8
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsel f31,f0,f13,f31
	f31.f64 = ctx.f0.f64 >= 0.0 ? ctx.f13.f64 : f31.f64;
	// fsel f30,f11,f12,f30
	f30.f64 = ctx.f11.f64 >= 0.0 ? ctx.f12.f64 : f30.f64;
loc_821FA15C:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,17424
	ctx.r4.s64 = ctx.r11.s64 + 17424;
	// bl 0x8215f670
	ctx.lr = 0x821FA16C;
	sub_8215F670(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x8215f5f8
	ctx.lr = 0x821FA174;
	sub_8215F5F8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,24536
	ctx.r4.s64 = ctx.r11.s64 + 24536;
	// bl 0x8215f670
	ctx.lr = 0x821FA180;
	sub_8215F670(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8215f5f8
	ctx.lr = 0x821FA188;
	sub_8215F5F8(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// bl 0x8215f5f8
	ctx.lr = 0x821FA190;
	sub_8215F5F8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r11,24544
	ctx.r4.s64 = ctx.r11.s64 + 24544;
	// bl 0x8215f670
	ctx.lr = 0x821FA1A0;
	sub_8215F670(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x821FA1A8;
	sub_8215F0F0(ctx, base);
	// stw r27,8(r31)
	REX_STORE_U32(r31.u32 + 8, r27.u32);
	// stw r28,0(r31)
	REX_STORE_U32(r31.u32 + 0, r28.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,24552
	ctx.r4.s64 = ctx.r11.s64 + 24552;
	// bl 0x8215f670
	ctx.lr = 0x821FA1C0;
	sub_8215F670(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x821FA1C8;
	sub_8215F0F0(ctx, base);
	// li r31,2
	r31.s64 = 2;
	// stfs f31,8(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r29.u32 + 8, temp.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r31,0(r29)
	REX_STORE_U32(r29.u32 + 0, r31.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,24564
	ctx.r4.s64 = ctx.r11.s64 + 24564;
	// bl 0x8215f670
	ctx.lr = 0x821FA1E4;
	sub_8215F670(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x821FA1EC;
	sub_8215F0F0(ctx, base);
	// stfs f30,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r30.u32 + 8, temp.u32);
	// stw r31,0(r30)
	REX_STORE_U32(r30.u32 + 0, r31.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-104(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_8220FB50) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-14132
	ctx.r3.s64 = ctx.r11.s64 + -14132;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82210240) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-14116
	ctx.r3.s64 = ctx.r11.s64 + -14116;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82210BC0) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stb r10,120(r4)
	REX_STORE_U8(ctx.r4.u32 + 120, ctx.r10.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82211EB8) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,116(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 116);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r30,r11,16592
	r30.s64 = ctx.r11.s64 + 16592;
	// lfs f12,20(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,16592(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16592);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f31,f12,f0,f13
	f31.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f13.f64)));
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x822122d0
	ctx.lr = 0x82211EFC;
	sub_822122D0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f30,60(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 60);
	f30.f64 = double(temp.f32);
	// lfs f13,876(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 876);
	ctx.f13.f64 = double(temp.f32);
	// fadds f31,f31,f30
	f31.f64 = double(float(f31.f64 + f30.f64));
	// lfs f0,15048(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// lwz r11,816(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 816);
	// lwz r4,104(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// ble cr6,0x82211f28
	if (!ctx.cr6.gt) goto loc_82211F28;
	// lwz r11,820(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 820);
	// lwz r4,104(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
loc_82211F28:
	// addi r5,r31,348
	ctx.r5.s64 = r31.s64 + 348;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82212050
	ctx.lr = 0x82211F38;
	sub_82212050(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82212468
	ctx.lr = 0x82211F44;
	sub_82212468(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82212148
	ctx.lr = 0x82211F50;
	sub_82212148(ctx, base);
	// lwz r11,812(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 812);
	// addi r5,r31,168
	ctx.r5.s64 = r31.s64 + 168;
	// fadds f1,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(f31.f64 + f30.f64));
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,104(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// bl 0x82212050
	ctx.lr = 0x82211F68;
	sub_82212050(ctx, base);
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

DEFINE_REX_FUNC(sub_8221B9A0) {
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
	ctx.lr = 0x8221B9A8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,816
	r28.s64 = ctx.r3.s64 + 816;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82160218
	ctx.lr = 0x8221B9BC;
	sub_82160218(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r26,r30,800
	r26.s64 = r30.s64 + 800;
	// addi r4,r11,16420
	ctx.r4.s64 = ctx.r11.s64 + 16420;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8215f670
	ctx.lr = 0x8221B9D0;
	sub_8215F670(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r31,0
	r31.s64 = 0;
	// addi r27,r11,-26808
	r27.s64 = ctx.r11.s64 + -26808;
loc_8221B9E0:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8221ba04
	if (!ctx.cr6.eq) goto loc_8221BA04;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// b 0x8221ba08
	goto loc_8221BA08;
loc_8221BA04:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8221BA08:
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8221ba58
	if (!ctx.cr6.lt) goto loc_8221BA58;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x8221BA1C;
	sub_8215F1B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822194c0
	ctx.lr = 0x8221BA28;
	sub_822194C0(ctx, base);
	// lwz r11,820(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 820);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r11,-16
	ctx.r3.s64 = ctx.r11.s64 + -16;
	// bl 0x8215f670
	ctx.lr = 0x8221BA38;
	sub_8215F670(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x8221BA40;
	sub_8215F0F0(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r11.u32);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// stb r10,8(r25)
	REX_STORE_U8(r25.u32 + 8, ctx.r10.u8);
	// b 0x8221b9e0
	goto loc_8221B9E0;
loc_8221BA58:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r4,r11,-26728
	ctx.r4.s64 = ctx.r11.s64 + -26728;
	// bl 0x8215f670
	ctx.lr = 0x8221BA68;
	sub_8215F670(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r31,0
	r31.s64 = 0;
loc_8221BA70:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8221ba94
	if (!ctx.cr6.eq) goto loc_8221BA94;
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
	// b 0x8221ba98
	goto loc_8221BA98;
loc_8221BA94:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8221BA98:
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8221bac0
	if (!ctx.cr6.lt) goto loc_8221BAC0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x8221BAAC;
	sub_8215F1B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822194c0
	ctx.lr = 0x8221BAB8;
	sub_822194C0(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// b 0x8221ba70
	goto loc_8221BA70;
loc_8221BAC0:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r10,4(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 4);
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r6,r11,-28376
	ctx.r6.s64 = ctx.r11.s64 + -28376;
	// subf r11,r3,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r3.u64;
	// srawi r4,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 4;
	// bl 0x826a0028
	ctx.lr = 0x8221BAE0;
	sub_826A0028(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_82227920) {
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
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lwz r30,680(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 680);
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r4,r11,-24116
	ctx.r4.s64 = ctx.r11.s64 + -24116;
	// addi r3,r10,1624
	ctx.r3.s64 = ctx.r10.s64 + 1624;
	// bl 0x8215f338
	ctx.lr = 0x82227950;
	sub_8215F338(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x82227958;
	sub_8215F1B0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8215f2d0
	ctx.lr = 0x82227960;
	sub_8215F2D0(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x82227964;
	sub_8215FA30(ctx, base);
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

DEFINE_REX_FUNC(sub_82228F10) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82228F18;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82178268
	ctx.lr = 0x82228F28;
	sub_82178268(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r3,100
	ctx.r3.s64 = 100;
	// addi r11,r11,-23524
	ctx.r11.s64 = ctx.r11.s64 + -23524;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x82228F3C;
	sub_822F6280(ctx, base);
	// li r28,0
	r28.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82228f60
	if (ctx.cr0.eq) goto loc_82228F60;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,150
	ctx.r5.s64 = 150;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x821dc550
	ctx.lr = 0x82228F58;
	sub_821DC550(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82228f64
	goto loc_82228F64;
loc_82228F60:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
loc_82228F64:
	// stw r4,112(r30)
	REX_STORE_U32(r30.u32 + 112, ctx.r4.u32);
	// addi r3,r30,96
	ctx.r3.s64 = r30.s64 + 96;
	// bl 0x821d3988
	ctx.lr = 0x82228F70;
	sub_821D3988(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x82228F78;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x82228fec
	if (ctx.cr0.eq) goto loc_82228FEC;
	// stw r28,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r28.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-22996
	ctx.r4.s64 = ctx.r11.s64 + -22996;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821dbb48
	ctx.lr = 0x82228F9C;
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
	ctx.lr = 0x82228FB0;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82228fdc
	if (ctx.cr0.eq) goto loc_82228FDC;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r30,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r11,r11,-15424
	ctx.r11.s64 = ctx.r11.s64 + -15424;
	// addi r10,r10,-28392
	ctx.r10.s64 = ctx.r10.s64 + -28392;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82228fe0
	goto loc_82228FE0;
loc_82228FDC:
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
loc_82228FE0:
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// stw r11,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r11.u32);
	// b 0x82228ff0
	goto loc_82228FF0;
loc_82228FEC:
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
loc_82228FF0:
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
	ctx.lr = 0x82229008;
	sub_82264568(ctx, base);
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x822f6280
	ctx.lr = 0x82229010;
	sub_822F6280(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r29,r11,-23824
	r29.s64 = ctx.r11.s64 + -23824;
	// beq 0x82229048
	if (ctx.cr0.eq) goto loc_82229048;
	// stw r28,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r28.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-26044
	ctx.r4.s64 = ctx.r11.s64 + -26044;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821dbb48
	ctx.lr = 0x8222903C;
	sub_821DBB48(ctx, base);
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
	// b 0x8222904c
	goto loc_8222904C;
loc_82229048:
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
loc_8222904C:
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
	ctx.lr = 0x82229064;
	sub_82264568(ctx, base);
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x822f6280
	ctx.lr = 0x8222906C;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8222909c
	if (ctx.cr0.eq) goto loc_8222909C;
	// stw r28,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r28.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-23836
	ctx.r4.s64 = ctx.r11.s64 + -23836;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821dbb48
	ctx.lr = 0x82229090;
	sub_821DBB48(ctx, base);
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
	// b 0x822290a0
	goto loc_822290A0;
loc_8222909C:
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
loc_822290A0:
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
	ctx.lr = 0x822290B8;
	sub_82264568(ctx, base);
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x822f6280
	ctx.lr = 0x822290C0;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x822290f0
	if (ctx.cr0.eq) goto loc_822290F0;
	// stw r28,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r28.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-23820
	ctx.r4.s64 = ctx.r11.s64 + -23820;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821dbb48
	ctx.lr = 0x822290E4;
	sub_821DBB48(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
	// b 0x822290f4
	goto loc_822290F4;
loc_822290F0:
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
loc_822290F4:
	// lwz r10,112(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 112);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r10,16
	ctx.r3.s64 = ctx.r10.s64 + 16;
	// stw r10,80(r11)
	REX_STORE_U32(ctx.r11.u32 + 80, ctx.r10.u32);
	// bl 0x82264568
	ctx.lr = 0x8222910C;
	sub_82264568(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_822349F8) {
	REX_FUNC_PROLOGUE();
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
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x826a2c84
	ctx.lr = 0x82234A10;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82236af0
	ctx.lr = 0x82234A20;
	sub_82236AF0(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwz r10,212(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 212);
	// not r10,r10
	ctx.r10.u64 = ~ctx.r10.u64;
	// rlwinm. r10,r10,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82234c14
	if (ctx.cr0.eq) goto loc_82234C14;
	// lwz r9,588(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 588);
	// lfs f0,24(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,72(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,16(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,64(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f10.f64 = double(temp.f32);
	// addi r8,r10,16592
	ctx.r8.s64 = ctx.r10.s64 + 16592;
	// fsubs f10,f11,f10
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f12,336(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 336);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,72(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 72);
	ctx.f9.f64 = double(temp.f32);
	// addi r10,r30,16
	ctx.r10.s64 = r30.s64 + 16;
	// fsubs f9,f0,f9
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f9.f64));
	// lfs f0,64(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// lfs f8,336(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 336);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// lfs f7,340(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 340);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,340(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 340);
	ctx.f6.f64 = double(temp.f32);
	// lfs f3,20(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 20);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,68(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f4,f13,f12
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// lfs f0,344(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 344);
	ctx.f0.f64 = double(temp.f32);
	// lfs f5,344(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 344);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f2,f3,f2
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f2.f64));
	// lfs f1,68(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 68);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f29,f7,f10
	f29.f64 = double(float(ctx.f7.f64 * ctx.f10.f64));
	// fsubs f3,f3,f1
	ctx.f3.f64 = double(float(ctx.f3.f64 - ctx.f1.f64));
	// lfs f1,324(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 324);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f31,f9,f8
	f31.f64 = double(float(ctx.f9.f64 * ctx.f8.f64));
	// lfs f30,324(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 324);
	f30.f64 = double(temp.f32);
	// fmuls f27,f6,f11
	f27.f64 = double(float(ctx.f6.f64 * ctx.f11.f64));
	// lfs f28,328(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 328);
	f28.f64 = double(temp.f32);
	// lfs f26,328(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 328);
	f26.f64 = double(temp.f32);
	// lfs f25,320(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 320);
	f25.f64 = double(temp.f32);
	// lfs f24,320(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 320);
	f24.f64 = double(temp.f32);
	// lfs f23,36(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 36);
	f23.f64 = double(temp.f32);
	// fmsubs f10,f0,f10,f4
	ctx.f10.f64 = double(float(std::fma(ctx.f0.f64, ctx.f10.f64, -ctx.f4.f64)));
	// lfs f4,40(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f21,f2,f0
	f21.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// lfs f22,32(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 32);
	f22.f64 = double(temp.f32);
	// fmsubs f12,f2,f12,f29
	ctx.f12.f64 = double(float(std::fma(ctx.f2.f64, ctx.f12.f64, -f29.f64)));
	// lfs f20,788(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 788);
	f20.f64 = double(temp.f32);
	// fmuls f19,f3,f5
	f19.f64 = double(float(ctx.f3.f64 * ctx.f5.f64));
	// lfs f0,960(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 960);
	ctx.f0.f64 = double(temp.f32);
	// fmsubs f11,f5,f11,f31
	ctx.f11.f64 = double(float(std::fma(ctx.f5.f64, ctx.f11.f64, -f31.f64)));
	// fmsubs f8,f3,f8,f27
	ctx.f8.f64 = double(float(std::fma(ctx.f3.f64, ctx.f8.f64, -f27.f64)));
	// fmuls f0,f20,f0
	ctx.f0.f64 = double(float(f20.f64 * ctx.f0.f64));
	// fadds f10,f10,f1
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f1.f64));
	// fmsubs f13,f13,f7,f21
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f7.f64, -f21.f64)));
	// fadds f12,f12,f28
	ctx.f12.f64 = double(float(ctx.f12.f64 + f28.f64));
	// fmsubs f9,f9,f6,f19
	ctx.f9.f64 = double(float(std::fma(ctx.f9.f64, ctx.f6.f64, -f19.f64)));
	// fadds f11,f11,f30
	ctx.f11.f64 = double(float(ctx.f11.f64 + f30.f64));
	// fadds f8,f8,f26
	ctx.f8.f64 = double(float(ctx.f8.f64 + f26.f64));
	// fadds f13,f13,f25
	ctx.f13.f64 = double(float(ctx.f13.f64 + f25.f64));
	// fadds f9,f9,f24
	ctx.f9.f64 = double(float(ctx.f9.f64 + f24.f64));
	// fsubs f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// fsubs f12,f8,f12
	ctx.f12.f64 = double(float(ctx.f8.f64 - ctx.f12.f64));
	// fsubs f13,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// fmuls f11,f23,f11
	ctx.f11.f64 = double(float(f23.f64 * ctx.f11.f64));
	// fmadds f12,f4,f12,f11
	ctx.f12.f64 = double(float(std::fma(ctx.f4.f64, ctx.f12.f64, ctx.f11.f64)));
	// fmadds f13,f22,f13,f12
	ctx.f13.f64 = double(float(std::fma(f22.f64, ctx.f13.f64, ctx.f12.f64)));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82234bd8
	if (!ctx.cr6.lt) goto loc_82234BD8;
	// lwz r11,536(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 536);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r11,536(r31)
	REX_STORE_U32(r31.u32 + 536, ctx.r11.u32);
	// beq cr6,0x82234b4c
	if (ctx.cr6.eq) goto loc_82234B4C;
	// stw r11,212(r9)
	REX_STORE_U32(ctx.r9.u32 + 212, ctx.r11.u32);
loc_82234B4C:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lfs f12,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r8,r31,1016
	ctx.r8.s64 = r31.s64 + 1016;
	// lfs f11,64(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f10,68(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,72(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 72);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f10,340(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 340);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,336(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 336);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,344(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 344);
	ctx.f9.f64 = double(temp.f32);
	// lfs f6,328(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 328);
	ctx.f6.f64 = double(temp.f32);
	// lfs f8,320(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 320);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,324(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 324);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f5,f10,f0
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f4,f13,f9
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// fmuls f3,f12,f11
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fmsubs f13,f13,f11,f5
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f11.f64, -ctx.f5.f64)));
	// fmsubs f12,f12,f10,f4
	ctx.f12.f64 = double(float(std::fma(ctx.f12.f64, ctx.f10.f64, -ctx.f4.f64)));
	// fmsubs f0,f9,f0,f3
	ctx.f0.f64 = double(float(std::fma(ctx.f9.f64, ctx.f0.f64, -ctx.f3.f64)));
	// fadds f13,f13,f6
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f6.f64));
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fadds f13,f12,f8
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f8.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f0,f0,f7
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f7.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r11,8(r9)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// ld r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// std r11,1024(r31)
	REX_STORE_U64(r31.u32 + 1024, ctx.r11.u64);
	// std r9,1016(r31)
	REX_STORE_U64(r31.u32 + 1016, ctx.r9.u64);
	// b 0x82234c00
	goto loc_82234C00;
loc_82234BD8:
	// lwz r11,720(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 720);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82234c14
	if (ctx.cr0.eq) goto loc_82234C14;
	// lwz r11,536(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 536);
	// lwz r10,588(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 588);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,536(r31)
	REX_STORE_U32(r31.u32 + 536, ctx.r11.u32);
	// beq cr6,0x82234c00
	if (ctx.cr6.eq) goto loc_82234C00;
	// stw r11,212(r10)
	REX_STORE_U32(ctx.r10.u32 + 212, ctx.r11.u32);
loc_82234C00:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,704(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 704);
	// stw r10,1000(r31)
	REX_STORE_U32(r31.u32 + 1000, ctx.r10.u32);
	// stw r11,1032(r31)
	REX_STORE_U32(r31.u32 + 1032, ctx.r11.u32);
loc_82234C14:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x826a2cd0
	ctx.lr = 0x82234C20;
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

DEFINE_REX_FUNC(sub_8224B6D0) {
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
	ctx.lr = 0x8224B6D8;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r28,r11,26288
	r28.s64 = ctx.r11.s64 + 26288;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r31,r30,432
	r31.s64 = r30.s64 + 432;
	// bl 0x8215f338
	ctx.lr = 0x8224B6FC;
	sub_8215F338(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,-17344
	ctx.r4.s64 = ctx.r11.s64 + -17344;
	// bl 0x8215f338
	ctx.lr = 0x8224B708;
	sub_8215F338(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8215fba8
	ctx.lr = 0x8224B710;
	sub_8215FBA8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-23520
	ctx.r4.s64 = ctx.r11.s64 + -23520;
	// bl 0x82125d00
	ctx.lr = 0x8224B720;
	sub_82125D00(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r27,0
	r27.s64 = 0;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r26,r11,22752
	r26.s64 = ctx.r11.s64 + 22752;
	// bne 0x8224b750
	if (!ctx.cr0.eq) goto loc_8224B750;
	// li r3,272
	ctx.r3.s64 = 272;
	// bl 0x822f6280
	ctx.lr = 0x8224B73C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8224b870
	if (ctx.cr0.eq) goto loc_8224B870;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x822478f8
	ctx.lr = 0x8224B74C;
	sub_822478F8(ctx, base);
	// b 0x8224b874
	goto loc_8224B874;
loc_8224B750:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-20596
	ctx.r4.s64 = ctx.r11.s64 + -20596;
	// bl 0x82125d00
	ctx.lr = 0x8224B760;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8224b784
	if (!ctx.cr0.eq) goto loc_8224B784;
	// li r3,256
	ctx.r3.s64 = 256;
	// bl 0x822f6280
	ctx.lr = 0x8224B770;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8224b870
	if (ctx.cr0.eq) goto loc_8224B870;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82286578
	ctx.lr = 0x8224B780;
	sub_82286578(ctx, base);
	// b 0x8224b874
	goto loc_8224B874;
loc_8224B784:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82125d00
	ctx.lr = 0x8224B790;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8224b83c
	if (!ctx.cr0.eq) goto loc_8224B83C;
	// li r3,176
	ctx.r3.s64 = 176;
	// bl 0x822f6280
	ctx.lr = 0x8224B7A0;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8224b8e4
	if (ctx.cr0.eq) goto loc_8224B8E4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82250a20
	ctx.lr = 0x8224B7B4;
	sub_82250A20(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r11,r11,-12504
	ctx.r11.s64 = ctx.r11.s64 + -12504;
	// addi r10,r10,-11740
	ctx.r10.s64 = ctx.r10.s64 + -11740;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// li r29,8
	r29.s64 = 8;
	// addi r11,r31,144
	ctx.r11.s64 = r31.s64 + 144;
	// stw r10,144(r31)
	REX_STORE_U32(r31.u32 + 144, ctx.r10.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r29,148(r31)
	REX_STORE_U32(r31.u32 + 148, r29.u32);
	// li r3,32
	ctx.r3.s64 = 32;
	// stw r27,152(r31)
	REX_STORE_U32(r31.u32 + 152, r27.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r27,156(r31)
	REX_STORE_U32(r31.u32 + 156, r27.u32);
	// stw r27,160(r31)
	REX_STORE_U32(r31.u32 + 160, r27.u32);
	// bl 0x8269d1d0
	ctx.lr = 0x8224B7F4;
	sub_8269D1D0(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8269d1b8
	ctx.lr = 0x8224B800;
	sub_8269D1B8(ctx, base);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r24,152(r31)
	REX_STORE_U32(r31.u32 + 152, r24.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r10,r10,-11720
	ctx.r10.s64 = ctx.r10.s64 + -11720;
	// stw r29,160(r31)
	REX_STORE_U32(r31.u32 + 160, r29.u32);
	// stw r10,144(r31)
	REX_STORE_U32(r31.u32 + 144, ctx.r10.u32);
	// lwz r3,6036(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6036);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224B82C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,164(r31)
	REX_STORE_U32(r31.u32 + 164, ctx.r3.u32);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// stw r27,168(r31)
	REX_STORE_U32(r31.u32 + 168, r27.u32);
	// b 0x8224b8e8
	goto loc_8224B8E8;
loc_8224B83C:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-20588
	ctx.r4.s64 = ctx.r11.s64 + -20588;
	// bl 0x82125d00
	ctx.lr = 0x8224B84C;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8224b87c
	if (!ctx.cr0.eq) goto loc_8224B87C;
	// li r3,192
	ctx.r3.s64 = 192;
	// bl 0x822f6280
	ctx.lr = 0x8224B85C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8224b870
	if (ctx.cr0.eq) goto loc_8224B870;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82274708
	ctx.lr = 0x8224B86C;
	sub_82274708(ctx, base);
	// b 0x8224b874
	goto loc_8224B874;
loc_8224B870:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_8224B874:
	// stw r3,460(r30)
	REX_STORE_U32(r30.u32 + 460, ctx.r3.u32);
	// b 0x8224b9b0
	goto loc_8224B9B0;
loc_8224B87C:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,25132
	ctx.r4.s64 = ctx.r11.s64 + 25132;
	// bl 0x82125d00
	ctx.lr = 0x8224B88C;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8224b8f0
	if (!ctx.cr0.eq) goto loc_8224B8F0;
	// stb r27,741(r30)
	REX_STORE_U8(r30.u32 + 741, r27.u8);
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x822f6280
	ctx.lr = 0x8224B8A0;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8224b8e4
	if (ctx.cr0.eq) goto loc_8224B8E4;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r11,r11,-14152
	ctx.r11.s64 = ctx.r11.s64 + -14152;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x82120ac0
	ctx.lr = 0x8224B8C4;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r30,32(r31)
	REX_STORE_U32(r31.u32 + 32, r30.u32);
	// addi r9,r11,-12800
	ctx.r9.s64 = ctx.r11.s64 + -12800;
	// stw r10,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r10.u32);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// stw r9,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// b 0x8224b8e8
	goto loc_8224B8E8;
loc_8224B8E4:
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_8224B8E8:
	// stw r11,460(r30)
	REX_STORE_U32(r30.u32 + 460, ctx.r11.u32);
	// b 0x8224b9b0
	goto loc_8224B9B0;
loc_8224B8F0:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-20780
	ctx.r4.s64 = ctx.r11.s64 + -20780;
	// bl 0x82125d00
	ctx.lr = 0x8224B900;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8224b9b0
	if (!ctx.cr0.eq) goto loc_8224B9B0;
	// stb r27,741(r30)
	REX_STORE_U8(r30.u32 + 741, r27.u8);
	// li r3,160
	ctx.r3.s64 = 160;
	// bl 0x822f6280
	ctx.lr = 0x8224B914;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8224b9a8
	if (ctx.cr0.eq) goto loc_8224B9A8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82250a20
	ctx.lr = 0x8224B928;
	sub_82250A20(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r11,r11,2336
	ctx.r11.s64 = ctx.r11.s64 + 2336;
	// addi r10,r10,-11740
	ctx.r10.s64 = ctx.r10.s64 + -11740;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// li r29,8
	r29.s64 = 8;
	// addi r11,r31,116
	ctx.r11.s64 = r31.s64 + 116;
	// stw r10,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r10.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r29,120(r31)
	REX_STORE_U32(r31.u32 + 120, r29.u32);
	// li r3,32
	ctx.r3.s64 = 32;
	// stw r27,124(r31)
	REX_STORE_U32(r31.u32 + 124, r27.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r27,128(r31)
	REX_STORE_U32(r31.u32 + 128, r27.u32);
	// stw r27,132(r31)
	REX_STORE_U32(r31.u32 + 132, r27.u32);
	// bl 0x8269d1d0
	ctx.lr = 0x8224B968;
	sub_8269D1D0(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8269d1b8
	ctx.lr = 0x8224B974;
	sub_8269D1B8(ctx, base);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r24,124(r31)
	REX_STORE_U32(r31.u32 + 124, r24.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r10,r10,-11720
	ctx.r10.s64 = ctx.r10.s64 + -11720;
	// stw r29,132(r31)
	REX_STORE_U32(r31.u32 + 132, r29.u32);
	// stw r10,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r10.u32);
	// lwz r3,6036(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6036);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224B9A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,136(r31)
	REX_STORE_U32(r31.u32 + 136, ctx.r3.u32);
	// b 0x8224b9ac
	goto loc_8224B9AC;
loc_8224B9A8:
	// mr r31,r27
	r31.u64 = r27.u64;
loc_8224B9AC:
	// stw r31,460(r30)
	REX_STORE_U32(r30.u32 + 460, r31.u32);
loc_8224B9B0:
	// lwz r11,460(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 460);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8224b9d4
	if (!ctx.cr6.eq) goto loc_8224B9D4;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r4,r11,-13532
	ctx.r4.s64 = ctx.r11.s64 + -13532;
	// addi r3,r10,-13484
	ctx.r3.s64 = ctx.r10.s64 + -13484;
	// li r5,312
	ctx.r5.s64 = 312;
	// bl 0x821231d0
	ctx.lr = 0x8224B9D4;
	sub_821231D0(ctx, base);
loc_8224B9D4:
	// lwz r11,460(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 460);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8215f338
	ctx.lr = 0x8224B9E8;
	sub_8215F338(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,460(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 460);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224B9FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8224ef18
	ctx.lr = 0x8224BA04;
	sub_8224EF18(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8224f948
	ctx.lr = 0x8224BA0C;
	sub_8224F948(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,22744
	ctx.r3.s64 = ctx.r11.s64 + 22744;
	// bl 0x82151690
	ctx.lr = 0x8224BA18;
	sub_82151690(ctx, base);
	// lwz r11,460(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 460);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224BA34;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8224ba4c
	if (!ctx.cr0.eq) goto loc_8224BA4C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,12644
	ctx.r3.s64 = ctx.r11.s64 + 12644;
	// bl 0x82151690
	ctx.lr = 0x8224BA48;
	sub_82151690(ctx, base);
	// or r29,r3,r29
	r29.u64 = ctx.r3.u64 | r29.u64;
loc_8224BA4C:
	// lwz r3,460(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 460);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224BA60;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8224ba74
	if (ctx.cr0.eq) goto loc_8224BA74;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82151690
	ctx.lr = 0x8224BA70;
	sub_82151690(ctx, base);
	// or r29,r3,r29
	r29.u64 = ctx.r3.u64 | r29.u64;
loc_8224BA74:
	// lwz r3,460(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 460);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224BA88;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8224baa0
	if (ctx.cr0.eq) goto loc_8224BAA0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,22756
	ctx.r3.s64 = ctx.r11.s64 + 22756;
	// bl 0x82151690
	ctx.lr = 0x8224BA9C;
	sub_82151690(ctx, base);
	// or r29,r3,r29
	r29.u64 = ctx.r3.u64 | r29.u64;
loc_8224BAA0:
	// lwz r31,136(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 136);
	// lis r28,-32106
	r28.s64 = -2104098816;
	// lbz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 52);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8224bac0
	if (ctx.cr0.eq) goto loc_8224BAC0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,6188(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 6188);
	// bl 0x821518c0
	ctx.lr = 0x8224BAC0;
	sub_821518C0(ctx, base);
loc_8224BAC0:
	// lbz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 52);
	// stw r29,16(r31)
	REX_STORE_U32(r31.u32 + 16, r29.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8224badc
	if (ctx.cr0.eq) goto loc_8224BADC;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,6188(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 6188);
	// bl 0x82151768
	ctx.lr = 0x8224BADC;
	sub_82151768(ctx, base);
loc_8224BADC:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r4,r11,-25780
	ctx.r4.s64 = ctx.r11.s64 + -25780;
	// bl 0x8215f338
	ctx.lr = 0x8224BAEC;
	sub_8215F338(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8224bb00
	if (!ctx.cr6.eq) goto loc_8224BB00;
	// lbz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 8);
	// b 0x8224bb04
	goto loc_8224BB04;
loc_8224BB00:
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_8224BB04:
	// stb r11,740(r30)
	REX_STORE_U8(r30.u32 + 740, ctx.r11.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_82266BA0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x82266BC8;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82120ac0
	ctx.lr = 0x82266BD8;
	sub_82120AC0(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82266160
	ctx.lr = 0x82266BE8;
	sub_82266160(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82266c24
	if (ctx.cr0.eq) goto loc_82266C24;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r30,r11,22932
	r30.s64 = ctx.r11.s64 + 22932;
loc_82266BF8:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82125d00
	ctx.lr = 0x82266C04;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82266c30
	if (ctx.cr0.eq) goto loc_82266C30;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82266160
	ctx.lr = 0x82266C1C;
	sub_82266160(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82266bf8
	if (!ctx.cr0.eq) goto loc_82266BF8;
loc_82266C24:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r31,r11,30216
	r31.s64 = ctx.r11.s64 + 30216;
	// b 0x82266c5c
	goto loc_82266C5C;
loc_82266C30:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,24
	ctx.r4.s64 = r31.s64 + 24;
	// lwz r3,6040(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6040);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82266C54;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r31,r11,-26856
	r31.s64 = ctx.r11.s64 + -26856;
loc_82266C5C:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82120ac0
	ctx.lr = 0x82266C6C;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x82266C7C;
	sub_82120AC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

DEFINE_REX_FUNC(sub_8226CA20) {
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
	// li r31,0
	r31.s64 = 0;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// std r31,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, r31.u64);
	// bl 0x8226c728
	ctx.lr = 0x8226CA4C;
	sub_8226C728(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8226ca74
	if (ctx.cr0.eq) goto loc_8226CA74;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-7936
	ctx.r4.s64 = ctx.r11.s64 + -7936;
	// bl 0x8215f670
	ctx.lr = 0x8226CA64;
	sub_8215F670(ctx, base);
	// bl 0x8215f270
	ctx.lr = 0x8226CA68;
	sub_8215F270(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8215efb0
	ctx.lr = 0x8226CA70;
	sub_8215EFB0(ctx, base);
	// li r31,1
	r31.s64 = 1;
loc_8226CA74:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8215f0f0
	ctx.lr = 0x8226CA7C;
	sub_8215F0F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

DEFINE_REX_FUNC(sub_822703C8) {
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
	// li r31,0
	r31.s64 = 0;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r31,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// std r31,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, r31.u64);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-16692
	ctx.r4.s64 = ctx.r11.s64 + -16692;
	// bl 0x8215f670
	ctx.lr = 0x822703FC;
	sub_8215F670(ctx, base);
	// bl 0x8215f270
	ctx.lr = 0x82270400;
	sub_8215F270(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,6256(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6256);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82270420;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8227045c
	if (ctx.cr0.eq) goto loc_8227045C;
	// lis r4,0
	ctx.r4.s64 = 0;
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r4,r4,32779
	ctx.r4.u64 = ctx.r4.u64 | 32779;
	// bl 0x8226ff98
	ctx.lr = 0x8227043C;
	sub_8226FF98(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,6152(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6152);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82270458;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_8227045C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8215f0f0
	ctx.lr = 0x82270464;
	sub_8215F0F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

DEFINE_REX_FUNC(sub_82274850) {
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
	ctx.lr = 0x82274858;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x826a2ca8
	ctx.lr = 0x82274860;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	f28.f64 = ctx.f1.f64;
	// bl 0x82250b90
	ctx.lr = 0x82274870;
	sub_82250B90(ctx, base);
	// lwz r3,32(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 32);
	// bl 0x82151d50
	ctx.lr = 0x82274878;
	sub_82151D50(ctx, base);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lbz r9,112(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 112);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// addi r24,r11,16592
	r24.s64 = ctx.r11.s64 + 16592;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lwz r11,476(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 476);
	// li r28,0
	r28.s64 = 0;
	// addi r25,r3,64
	r25.s64 = ctx.r3.s64 + 64;
	// lfs f30,15048(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 15048);
	f30.f64 = double(temp.f32);
	// addi r23,r3,32
	r23.s64 = ctx.r3.s64 + 32;
	// lfs f0,148(r24)
	temp.u32 = REX_LOAD_U32(r24.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// fmr f31,f30
	f31.f64 = f30.f64;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lfs f13,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f29,f13,f0
	f29.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// beq 0x82274b5c
	if (ctx.cr0.eq) goto loc_82274B5C;
	// lwz r11,172(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82274968
	if (ctx.cr6.eq) goto loc_82274968;
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r30,r31,160
	r30.s64 = r31.s64 + 160;
	// addi r29,r11,-3432
	r29.s64 = ctx.r11.s64 + -3432;
	// addi r27,r10,-12464
	r27.s64 = ctx.r10.s64 + -12464;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822748f8
	if (!ctx.cr6.eq) goto loc_822748F8;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r5,69
	ctx.r5.s64 = 69;
	// bl 0x821231d0
	ctx.lr = 0x822748F8;
	sub_821231D0(ctx, base);
loc_822748F8:
	// lwz r3,12(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 12);
	// bl 0x82151d50
	ctx.lr = 0x82274900;
	sub_82151D50(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82274920
	if (!ctx.cr6.eq) goto loc_82274920;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r5,69
	ctx.r5.s64 = 69;
	// bl 0x821231d0
	ctx.lr = 0x82274920;
	sub_821231D0(ctx, base);
loc_82274920:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,468(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 468);
	// addi r9,r11,320
	ctx.r9.s64 = ctx.r11.s64 + 320;
	// ld r9,320(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 320);
	// ld r11,328(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 328);
	// std r9,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r11,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// lfs f13,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f0,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f0,f0,f12
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f0.f64, ctx.f12.f64)));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f0.f64)));
	// fsqrts f31,f0
	f31.f64 = double(float(sqrt(ctx.f0.f64)));
	// bl 0x82274b90
	ctx.lr = 0x82274968;
	sub_82274B90(ctx, base);
loc_82274968:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82274cc0
	ctx.lr = 0x82274974;
	sub_82274CC0(ctx, base);
	// stfs f30,92(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 92, temp.u32);
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// addi r27,r31,116
	r27.s64 = r31.s64 + 116;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82274994;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x82274b48
	if (ctx.cr0.eq) goto loc_82274B48;
	// lis r30,-32106
	r30.s64 = -2104098816;
	// lbz r11,27(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 27);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822749b8
	if (ctx.cr0.eq) goto loc_822749B8;
	// lwz r3,200(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 200);
	// bl 0x82130e88
	ctx.lr = 0x822749B4;
	sub_82130E88(ctx, base);
	// lbz r11,27(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 27);
loc_822749B8:
	// lwz r10,176(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 176);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82274b48
	if (ctx.cr6.eq) goto loc_82274B48;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82274b48
	if (ctx.cr6.eq) goto loc_82274B48;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822749dc
	if (ctx.cr0.eq) goto loc_822749DC;
	// lwz r3,200(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 200);
	// bl 0x82130e88
	ctx.lr = 0x822749DC;
	sub_82130E88(ctx, base);
loc_822749DC:
	// lfs f13,4(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r25.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,68(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,8(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,72(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f11,0(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,64(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 64);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f11,12(r24)
	temp.u32 = REX_LOAD_U32(r24.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,164(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 164);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,168(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 168);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,160(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 160);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f0,f0
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f7,f13,f13,f7
	ctx.f7.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f7.f64)));
	// fmadds f7,f12,f12,f7
	ctx.f7.f64 = double(float(std::fma(ctx.f12.f64, ctx.f12.f64, ctx.f7.f64)));
	// fsqrts f7,f7
	ctx.f7.f64 = double(float(sqrt(ctx.f7.f64)));
	// fdivs f7,f11,f7
	ctx.f7.f64 = double(float(ctx.f11.f64 / ctx.f7.f64));
	// fmuls f0,f7,f0
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f13,f7,f13
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fmuls f12,f7,f12
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// fmuls f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmadds f0,f9,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f9.f64, ctx.f13.f64, ctx.f0.f64)));
	// fmadds f0,f8,f12,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f8.f64, ctx.f12.f64, ctx.f0.f64)));
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// ble cr6,0x82274a4c
	if (!ctx.cr6.gt) goto loc_82274A4C;
	// stfs f29,92(r31)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r31.u32 + 92, temp.u32);
	// b 0x82274ab0
	goto loc_82274AB0;
loc_82274A4C:
	// lfs f13,1380(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r24.u32 + 1380);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82274aac
	if (!ctx.cr6.lt) goto loc_82274AAC;
	// fsubs f10,f31,f29
	ctx.f10.f64 = double(float(f31.f64 - f29.f64));
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// fabs f9,f0
	ctx.f9.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// addi r10,r24,256
	ctx.r10.s64 = r24.s64 + 256;
	// lfs f13,1384(r24)
	temp.u32 = REX_LOAD_U32(r24.u32 + 1384);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,1388(r24)
	temp.u32 = REX_LOAD_U32(r24.u32 + 1388);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,-19252(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -19252);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * f31.f64));
	// fcmpu cr6,f10,f30
	ctx.cr6.compare(ctx.f10.f64, f30.f64);
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
	// fsubs f13,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// rlwinm r11,r11,30,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x4;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// lfsx f10,r10,r11
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f10.f64 = double(temp.f32);
	// fsel f10,f10,f31,f29
	ctx.f10.f64 = ctx.f10.f64 >= 0.0 ? f31.f64 : f29.f64;
	// fnmsubs f13,f13,f12,f11
	ctx.f13.f64 = double(float(-std::fma(ctx.f13.f64, ctx.f12.f64, -ctx.f11.f64)));
	// fsubs f12,f10,f0
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// fmadds f0,f13,f12,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f12.f64, ctx.f0.f64)));
	// stfs f0,92(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 92, temp.u32);
	// b 0x82274ab0
	goto loc_82274AB0;
loc_82274AAC:
	// stfs f31,92(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 92, temp.u32);
loc_82274AB0:
	// lfs f0,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r24,256
	ctx.r11.s64 = r24.s64 + 256;
	// fsubs f13,f11,f0
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// addi r30,r31,144
	r30.s64 = r31.s64 + 144;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fcmpu cr6,f13,f30
	ctx.cr6.compare(ctx.f13.f64, f30.f64);
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
	// fsel f1,f13,f11,f0
	ctx.f1.f64 = ctx.f13.f64 >= 0.0 ? ctx.f11.f64 : ctx.f0.f64;
	// bl 0x82250fa8
	ctx.lr = 0x82274AF4;
	sub_82250FA8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82251288
	ctx.lr = 0x82274B04;
	sub_82251288(ctx, base);
	// addi r5,r31,104
	ctx.r5.s64 = r31.s64 + 104;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82251758
	ctx.lr = 0x82274B14;
	sub_82251758(ctx, base);
	// addi r11,r31,48
	ctx.r11.s64 = r31.s64 + 48;
	// addi r9,r31,40
	ctx.r9.s64 = r31.s64 + 40;
	// lfs f2,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 104);
	ctx.f2.f64 = double(temp.f32);
	// addi r10,r31,44
	ctx.r10.s64 = r31.s64 + 44;
	// lfs f1,96(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// fmr f3,f28
	ctx.f3.f64 = f28.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82251950
	ctx.lr = 0x82274B48;
	sub_82251950(ctx, base);
loc_82274B48:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r6,48(r31)
	ctx.r6.u64 = REX_LOAD_U8(r31.u32 + 48);
	// lfs f2,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 40);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,44(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 44);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82251ac0
	ctx.lr = 0x82274B5C;
	sub_82251AC0(ctx, base);
loc_82274B5C:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x826a2cf4
	ctx.lr = 0x82274B68;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_8228FCC0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8228FCC8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lbz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 12);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r11,r11,4388
	ctx.r11.s64 = ctx.r11.s64 + 4388;
	// lis r30,-32126
	r30.s64 = -2105409536;
	// lis r31,-32106
	r31.s64 = -2104098816;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8228fd28
	if (ctx.cr0.eq) goto loc_8228FD28;
	// lwz r3,8(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x8228f6a0
	ctx.lr = 0x8228FCF8;
	sub_8228F6A0(ctx, base);
	// lwz r3,8(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 8);
	// bl 0x8228f6a0
	ctx.lr = 0x8228FD00;
	sub_8228F6A0(ctx, base);
	// lwz r10,8(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8228fd28
	if (ctx.cr6.eq) goto loc_8228FD28;
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// lwz r9,-19400(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + -19400);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r3,-4(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// stw r11,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r11.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8228FD28;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8228FD28:
	// lbz r11,28(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 28);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8228fd88
	if (ctx.cr0.eq) goto loc_8228FD88;
	// lwz r11,24(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 24);
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8228fd60
	if (ctx.cr6.eq) goto loc_8228FD60;
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// lwz r9,-19400(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + -19400);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r3,-4(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// stw r11,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r11.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8228FD60;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8228FD60:
	// lwz r10,24(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 24);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8228fd88
	if (ctx.cr6.eq) goto loc_8228FD88;
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// lwz r9,-19400(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + -19400);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r3,-4(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// stw r11,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r11.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8228FD88;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8228FD88:
	// lbz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 20);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8228fde8
	if (ctx.cr0.eq) goto loc_8228FDE8;
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8228fdc0
	if (ctx.cr6.eq) goto loc_8228FDC0;
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// lwz r9,-19400(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + -19400);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r3,-4(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// stw r11,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r11.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8228FDC0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8228FDC0:
	// lwz r10,16(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8228fde8
	if (ctx.cr6.eq) goto loc_8228FDE8;
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// lwz r9,-19400(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + -19400);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r3,-4(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// stw r11,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r11.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8228FDE8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8228FDE8:
	// lwz r3,40(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 40);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228FE00;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,40(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 40);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8228fe28
	if (ctx.cr6.eq) goto loc_8228FE28;
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// lwz r9,-19400(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + -19400);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r3,-4(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// stw r11,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r11.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8228FE28;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8228FE28:
	// lwz r3,44(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 44);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228FE40;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,44(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 44);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8228fe68
	if (ctx.cr6.eq) goto loc_8228FE68;
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// lwz r9,-19400(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + -19400);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r3,-4(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// stw r11,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r11.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8228FE68;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8228FE68:
	// lwz r3,48(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 48);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228FE80;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,48(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 48);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8228fea8
	if (ctx.cr6.eq) goto loc_8228FEA8;
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// lwz r9,-19400(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + -19400);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r3,-4(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// stw r11,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r11.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8228FEA8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8228FEA8:
	// lwz r3,52(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 52);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228FEC0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,52(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 52);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8228fee8
	if (ctx.cr6.eq) goto loc_8228FEE8;
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// lwz r9,-19400(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + -19400);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r3,-4(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// stw r11,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r11.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8228FEE8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8228FEE8:
	// lwz r3,56(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 56);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228FF00;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,56(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 56);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8228ff28
	if (ctx.cr6.eq) goto loc_8228FF28;
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// lwz r9,-19400(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + -19400);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r3,-4(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// stw r11,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r11.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8228FF28;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8228FF28:
	// lwz r3,60(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 60);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228FF40;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,60(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 60);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8228ff68
	if (ctx.cr6.eq) goto loc_8228FF68;
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// lwz r9,-19400(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + -19400);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r3,-4(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// stw r11,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r11.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8228FF68;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8228FF68:
	// lwz r3,64(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 64);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228FF80;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,64(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 64);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8228ffa8
	if (ctx.cr6.eq) goto loc_8228FFA8;
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// lwz r9,-19400(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + -19400);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r3,-4(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// stw r11,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r11.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8228FFA8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8228FFA8:
	// lwz r3,72(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 72);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228FFC0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,72(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 72);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8228ffe8
	if (ctx.cr6.eq) goto loc_8228FFE8;
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// lwz r9,-19400(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + -19400);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r3,-4(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// stw r11,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r11.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8228FFE8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8228FFE8:
	// lwz r3,76(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 76);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82290000;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,76(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 76);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82290028
	if (ctx.cr6.eq) goto loc_82290028;
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// lwz r9,-19400(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + -19400);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r3,-4(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// stw r11,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r11.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82290028;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82290028:
	// lwz r3,68(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 68);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82290040;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,68(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 68);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82290068
	if (ctx.cr6.eq) goto loc_82290068;
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// lwz r9,-19400(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + -19400);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r3,-4(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// stw r11,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r11.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82290068;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82290068:
	// lwz r3,84(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 84);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82290080;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,84(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 84);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822900a8
	if (ctx.cr6.eq) goto loc_822900A8;
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// lwz r9,-19400(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + -19400);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r3,-4(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// stw r11,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r11.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822900A8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822900A8:
	// lwz r3,80(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 80);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822900C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,80(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822900e8
	if (ctx.cr6.eq) goto loc_822900E8;
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// lwz r9,-19400(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + -19400);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r3,-4(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// stw r11,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r11.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822900E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822900E8:
	// lwz r10,32(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82290110
	if (ctx.cr6.eq) goto loc_82290110;
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// lwz r9,-19400(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + -19400);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r3,-4(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// stw r11,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r11.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82290110;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82290110:
	// lwz r3,36(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 36);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82290128;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,36(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 36);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82290150
	if (ctx.cr6.eq) goto loc_82290150;
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// lwz r9,-19400(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + -19400);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r3,-4(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// stw r11,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r11.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82290150;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82290150:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r11,r11,4368
	ctx.r11.s64 = ctx.r11.s64 + 4368;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_822BB220) {
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
	// bl 0x826a1cb4
	ctx.lr = 0x822BB228;
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,44(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 44);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r27,r10
	r27.u64 = ctx.r10.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822bb324
	if (ctx.cr6.eq) goto loc_822BB324;
	// lwz r11,60(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 60);
	// li r28,0
	r28.s64 = 0;
	// rlwinm. r11,r11,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,20(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822bb324
	if (!ctx.cr6.gt) goto loc_822BB324;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f31,15048(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	f31.f64 = double(temp.f32);
	// beq 0x822bb2c8
	if (ctx.cr0.eq) goto loc_822BB2C8;
loc_822BB268:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822bb2b4
	if (!ctx.cr6.gt) goto loc_822BB2B4;
	// li r31,0
	r31.s64 = 0;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
loc_822BB27C:
	// lwz r10,76(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 76);
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// lwzx r10,r10,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	// mulli r10,r10,192
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(192));
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f0,132(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// beq cr6,0x822bb2a8
	if (ctx.cr6.eq) goto loc_822BB2A8;
	// lwz r4,108(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 108);
	// lwz r3,104(r5)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + 104);
	// bl 0x822b8680
	ctx.lr = 0x822BB2A8;
	sub_822B8680(ctx, base);
loc_822BB2A8:
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bne 0x822bb27c
	if (!ctx.cr0.eq) goto loc_822BB27C;
loc_822BB2B4:
	// lwz r11,20(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 20);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822bb268
	if (ctx.cr6.lt) goto loc_822BB268;
	// b 0x822bb324
	goto loc_822BB324;
loc_822BB2C8:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822bb314
	if (!ctx.cr6.gt) goto loc_822BB314;
	// li r31,0
	r31.s64 = 0;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
loc_822BB2DC:
	// lwz r11,76(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 76);
	// lwz r10,16(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 16);
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// mulli r11,r11,192
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(192));
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f0,132(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// beq cr6,0x822bb308
	if (ctx.cr6.eq) goto loc_822BB308;
	// lwz r4,108(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 108);
	// lwz r3,104(r5)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + 104);
	// bl 0x822b8680
	ctx.lr = 0x822BB308;
	sub_822B8680(ctx, base);
loc_822BB308:
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bne 0x822bb2dc
	if (!ctx.cr0.eq) goto loc_822BB2DC;
loc_822BB314:
	// lwz r11,20(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 20);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822bb2c8
	if (ctx.cr6.lt) goto loc_822BB2C8;
loc_822BB324:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_822C1418) {
	REX_FUNC_PROLOGUE();
	// li r3,480
	ctx.r3.s64 = 480;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C15F0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x822C15F8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r31,0(r4)
	r31.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822C1618;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822C1630;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822C1650;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lis r6,22852
	ctx.r6.s64 = 1497628672;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// ori r6,r6,16978
	ctx.r6.u64 = ctx.r6.u64 | 16978;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822C1678;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_822C2690) {
	REX_FUNC_PROLOGUE();
	// lwz r11,12028(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12028);
	// rlwinm r3,r11,2,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C28B0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lhz r11,10606(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 10606);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// addi r10,r10,16592
	ctx.r10.s64 = ctx.r10.s64 + 16592;
	// std r11,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,548(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 548);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C2BA8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwimi r11,r4,26,3,5
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 26) & 0x1C000000) | (ctx.r11.u64 & 0xFFFFFFFFE3FFFFFF);
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

DEFINE_REX_FUNC(sub_822C30D8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,12076(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 12076);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C3368) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10540(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10540);
	// rlwinm r3,r11,24,28,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xF;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C3448) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// li r11,1087
	ctx.r11.s64 = 1087;
	// bne cr6,0x822c3458
	if (!ctx.cr6.eq) goto loc_822C3458;
	// li r11,1024
	ctx.r11.s64 = 1024;
loc_822C3458:
	// stw r11,10572(r3)
	REX_STORE_U32(ctx.r3.u32 + 10572, ctx.r11.u32);
	// cntlzw r11,r4
	ctx.r11.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// lwz r10,10564(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 10564);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// rlwimi r10,r11,16,15,15
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x10000) | (ctx.r10.u64 & 0xFFFFFFFFFFFEFFFF);
	// stw r10,10564(r3)
	REX_STORE_U32(ctx.r3.u32 + 10564, ctx.r10.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C5250) {
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
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822c5308
	if (ctx.cr6.eq) goto loc_822C5308;
	// mftb r11
	ctx.r11.u64 = REX_QUERY_TIMEBASE();
	// lwz r10,256(r13)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r13.u32 + 256);
	// lwz r8,16(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r9,20(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r7,4(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// lwz r10,88(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 88);
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// subf r6,r8,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r8.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// bne cr6,0x822c52ac
	if (!ctx.cr6.eq) goto loc_822C52AC;
	// ld r9,21816(r10)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r10.u32 + 21816);
	// clrldi r8,r11,32
	ctx.r8.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// std r9,21816(r10)
	REX_STORE_U64(ctx.r10.u32 + 21816, ctx.r9.u64);
	// b 0x822c52bc
	goto loc_822C52BC;
loc_822C52AC:
	// ld r8,21808(r10)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r10.u32 + 21808);
	// clrldi r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// std r9,21808(r10)
	REX_STORE_U64(ctx.r10.u32 + 21808, ctx.r9.u64);
loc_822C52BC:
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,13644(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 13644);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822c5308
	if (ctx.cr6.eq) goto loc_822C5308;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lfs f13,21804(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 21804);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lwz r4,4(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// addi r11,r10,16592
	ctx.r11.s64 = ctx.r10.s64 + 16592;
	// frsp f12,f0
	ctx.f12.f64 = double(float(ctx.f0.f64));
	// lfs f0,44(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bctrl 
	ctx.lr = 0x822C5308;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822C5308:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822CCBB0) {
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
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c8c
	ctx.lr = 0x822CCBB8;
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r17,r5
	r17.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r19,r7
	r19.u64 = ctx.r7.u64;
	// lwz r11,19892(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 19892);
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm. r11,r11,28,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822cd394
	if (ctx.cr0.eq) goto loc_822CD394;
	// lwz r11,112(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 112);
	// li r22,0
	r22.s64 = 0;
	// li r18,1
	r18.s64 = 1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822ccc28
	if (ctx.cr0.eq) goto loc_822CCC28;
	// lwz r10,108(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 108);
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addic. r10,r10,-8
	ctx.xer.ca = ctx.r10.u32 > 7;
	ctx.r10.s64 = ctx.r10.s64 + -8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822ccc28
	if (ctx.cr0.eq) goto loc_822CCC28;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r10,r10,20,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0xF;
	// slw r10,r18,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r18.u32 << (ctx.r10.u8 & 0x3F));
	// andi. r10,r10,24702
	ctx.r10.u64 = ctx.r10.u64 & 24702;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// mr r10,r18
	ctx.r10.u64 = r18.u64;
	// bne 0x822ccc2c
	if (!ctx.cr0.eq) goto loc_822CCC2C;
loc_822CCC28:
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
loc_822CCC2C:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r25,r31,108
	r25.s64 = r31.s64 + 108;
	// bne 0x822ccc54
	if (!ctx.cr0.eq) goto loc_822CCC54;
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 100);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// clrlwi r11,r11,20
	ctx.r11.u64 = ctx.r11.u32 & 0xFFF;
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x822ccd14
	goto loc_822CCD14;
loc_822CCC54:
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r11,-8
	ctx.r10.s64 = ctx.r11.s64 + -8;
	// lwz r11,-8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -8);
	// rlwinm r11,r11,0,17,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7000;
	// cmplwi cr6,r11,24576
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24576, ctx.xer);
	// bge cr6,0x822ccc80
	if (!ctx.cr6.lt) goto loc_822CCC80;
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822ccd20
	if (ctx.cr6.eq) goto loc_822CCD20;
loc_822CCC80:
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x822cd394
	if (ctx.cr6.lt) goto loc_822CD394;
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,120(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 120);
	// rlwinm r9,r11,20,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xF;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// bne cr6,0x822cccbc
	if (!ctx.cr6.eq) goto loc_822CCCBC;
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// addi r7,r7,8168
	ctx.r7.s64 = ctx.r7.s64 + 8168;
	// lbzx r9,r9,r7
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r7.u32);
	// b 0x822ccccc
	goto loc_822CCCCC;
loc_822CCCBC:
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// clrlwi r7,r9,24
	ctx.r7.u64 = ctx.r9.u32 & 0xFF;
	// addi r8,r8,8168
	ctx.r8.s64 = ctx.r8.s64 + 8168;
	// lbzx r8,r7,r8
	ctx.r8.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r8.u32);
loc_822CCCCC:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// rlwimi r11,r9,12,16,19
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xF000) | (ctx.r11.u64 & 0xFFFFFFFFFFFF0FFF);
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// ld r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// lwz r10,100(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 100);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwimi r10,r9,0,0,19
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFF000) | (ctx.r10.u64 & 0xFFFFFFFF00000FFF);
	// rlwimi r11,r8,12,16,19
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 12) & 0xF000) | (ctx.r11.u64 & 0xFFFFFFFFFFFF0FFF);
	// rlwinm r10,r10,0,20,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFF8FFF;
	// rlwinm r11,r11,0,21,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFF7FF;
	// rlwinm r10,r10,0,16,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFF000FFFF;
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// clrlwi r10,r10,4
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFFFFF;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_822CCD14:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x822cef20
	ctx.lr = 0x822CCD20;
	sub_822CEF20(ctx, base);
loc_822CCD20:
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// stw r22,120(r31)
	REX_STORE_U32(r31.u32 + 120, r22.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x822cd394
	if (ctx.cr6.lt) goto loc_822CD394;
	// lwz r10,4(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 4);
	// clrlwi. r21,r30,24
	r21.u64 = r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(r21.s32, 0, ctx.xer);
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,112(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 112);
	// add r23,r10,r11
	r23.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r27,r9,-1
	r27.s64 = ctx.r9.s64 + -1;
	// lwz r10,-8(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + -8);
	// rlwinm r11,r10,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFF000;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// addi r11,r11,4096
	ctx.r11.s64 = ctx.r11.s64 + 4096;
	// rlwinm r20,r10,20,29,31
	r20.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0x7;
	// rlwimi r11,r10,0,20,16
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFF8FFF) | (ctx.r11.u64 & 0x7000);
	// stw r11,-8(r23)
	REX_STORE_U32(r23.u32 + -8, ctx.r11.u32);
	// beq 0x822ccd84
	if (ctx.cr0.eq) goto loc_822CCD84;
	// rlwinm r10,r20,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 1) & 0xFFFFFFFE;
	// slw r10,r18,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r18.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r10,r10,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// or r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 | ctx.r11.u64;
	// rlwimi r10,r11,0,16,3
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFF000FFFF) | (ctx.r10.u64 & 0xFFF0000);
	// stw r10,-8(r23)
	REX_STORE_U32(r23.u32 + -8, ctx.r10.u32);
loc_822CCD84:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,19892(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 19892);
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822cd350
	if (ctx.cr0.eq) goto loc_822CD350;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// mr r24,r22
	r24.u64 = r22.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// std r22,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, r22.u64);
	// std r22,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, r22.u64);
	// std r22,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, r22.u64);
	// std r22,8(r9)
	REX_STORE_U64(ctx.r9.u32 + 8, r22.u64);
	// std r22,16(r11)
	REX_STORE_U64(ctx.r11.u32 + 16, r22.u64);
	// std r22,16(r9)
	REX_STORE_U64(ctx.r9.u32 + 16, r22.u64);
	// std r22,24(r11)
	REX_STORE_U64(ctx.r11.u32 + 24, r22.u64);
	// std r22,24(r9)
	REX_STORE_U64(ctx.r9.u32 + 24, r22.u64);
	// beq cr6,0x822cce44
	if (ctx.cr6.eq) goto loc_822CCE44;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x822ccdf0
	if (ctx.cr6.eq) goto loc_822CCDF0;
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 0);
	// clrlwi. r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822ccdf0
	if (!ctx.cr0.eq) goto loc_822CCDF0;
	// lwz r11,4(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 4);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822cce44
	if (!ctx.cr0.eq) goto loc_822CCE44;
loc_822CCDF0:
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r11,r31,128
	ctx.r11.s64 = r31.s64 + 128;
	// addi r10,r31,12
	ctx.r10.s64 = r31.s64 + 12;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822CCE04:
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x822cce04
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822CCE04;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r11,r31,192
	ctx.r11.s64 = r31.s64 + 192;
	// addi r10,r31,44
	ctx.r10.s64 = r31.s64 + 44;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822CCE2C:
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x822cce2c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822CCE2C;
	// stw r22,4(r31)
	REX_STORE_U32(r31.u32 + 4, r22.u32);
loc_822CCE44:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x822cd19c
	if (ctx.cr6.eq) goto loc_822CD19C;
	// lwz r29,0(r19)
	r29.u64 = REX_LOAD_U32(r19.u32 + 0);
	// rlwinm. r11,r29,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// clrlwi r28,r29,27
	r28.u64 = r29.u32 & 0x1F;
	// beq 0x822cce80
	if (ctx.cr0.eq) goto loc_822CCE80;
	// mr r30,r22
	r30.u64 = r22.u64;
loc_822CCE60:
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822cc928
	ctx.lr = 0x822CCE70;
	sub_822CC928(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplwi cr6,r30,64
	ctx.cr6.compare<uint32_t>(r30.u32, 64, ctx.xer);
	// blt cr6,0x822cce60
	if (ctx.cr6.lt) goto loc_822CCE60;
	// b 0x822cce90
	goto loc_822CCE90;
loc_822CCE80:
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// rlwinm r4,r29,20,26,31
	ctx.r4.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 20) & 0x3F;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822cc928
	ctx.lr = 0x822CCE90;
	sub_822CC928(ctx, base);
loc_822CCE90:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x822ccea4
	if (!ctx.cr6.eq) goto loc_822CCEA4;
	// lwz r11,4(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 4);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822cceec
	if (!ctx.cr0.eq) goto loc_822CCEEC;
loc_822CCEA4:
	// rlwinm. r11,r29,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822cced8
	if (ctx.cr0.eq) goto loc_822CCED8;
	// mr r30,r22
	r30.u64 = r22.u64;
	// clrlwi r29,r17,24
	r29.u64 = r17.u32 & 0xFF;
loc_822CCEB4:
	// mr r6,r19
	ctx.r6.u64 = r19.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822cc9f0
	ctx.lr = 0x822CCEC8;
	sub_822CC9F0(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplwi cr6,r30,64
	ctx.cr6.compare<uint32_t>(r30.u32, 64, ctx.xer);
	// blt cr6,0x822cceb4
	if (ctx.cr6.lt) goto loc_822CCEB4;
	// b 0x822cceec
	goto loc_822CCEEC;
loc_822CCED8:
	// mr r6,r19
	ctx.r6.u64 = r19.u64;
	// clrlwi r5,r17,24
	ctx.r5.u64 = r17.u32 & 0xFF;
	// rlwinm r4,r29,27,26,31
	ctx.r4.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 27) & 0x3F;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822cc9f0
	ctx.lr = 0x822CCEEC;
	sub_822CC9F0(ctx, base);
loc_822CCEEC:
	// lbz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 124);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822ccfd0
	if (ctx.cr0.eq) goto loc_822CCFD0;
	// cmplwi cr6,r28,24
	ctx.cr6.compare<uint32_t>(r28.u32, 24, ctx.xer);
	// blt cr6,0x822ccf10
	if (ctx.cr6.lt) goto loc_822CCF10;
	// cmplwi cr6,r28,26
	ctx.cr6.compare<uint32_t>(r28.u32, 26, ctx.xer);
	// bgt cr6,0x822ccf10
	if (ctx.cr6.gt) goto loc_822CCF10;
	// mr r24,r18
	r24.u64 = r18.u64;
	// b 0x822ccfd0
	goto loc_822CCFD0;
loc_822CCF10:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x822ccfd0
	if (!ctx.cr6.eq) goto loc_822CCFD0;
	// clrlwi. r11,r17,24
	ctx.r11.u64 = r17.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822ccfd0
	if (ctx.cr0.eq) goto loc_822CCFD0;
	// clrlwi. r11,r26,24
	ctx.r11.u64 = r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822ccfd0
	if (!ctx.cr0.eq) goto loc_822CCFD0;
	// lwz r11,4(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 4);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822ccf58
	if (!ctx.cr0.eq) goto loc_822CCF58;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// stw r27,8(r31)
	REX_STORE_U32(r31.u32 + 8, r27.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r20,12(r31)
	REX_STORE_U32(r31.u32 + 12, r20.u32);
	// li r5,32
	ctx.r5.s64 = 32;
	// stw r18,4(r31)
	REX_STORE_U32(r31.u32 + 4, r18.u32);
	// bl 0x826a1e70
	ctx.lr = 0x822CCF50;
	sub_826A1E70(ctx, base);
	// addi r3,r31,48
	ctx.r3.s64 = r31.s64 + 48;
	// b 0x822ccfc4
	goto loc_822CCFC4;
loc_822CCF58:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822ccfd0
	if (ctx.cr6.eq) goto loc_822CCFD0;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// addi r9,r3,-4
	ctx.r9.s64 = ctx.r3.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822CCF78:
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwzu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x822ccf78
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822CCF78;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r1,124
	ctx.r11.s64 = ctx.r1.s64 + 124;
	// addi r30,r31,48
	r30.s64 = r31.s64 + 48;
	// addi r9,r30,-4
	ctx.r9.s64 = r30.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822CCFA0:
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwzu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x822ccfa0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822CCFA0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r5,32
	ctx.r5.s64 = 32;
	// bl 0x826a1e70
	ctx.lr = 0x822CCFC0;
	sub_826A1E70(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_822CCFC4:
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x826a1e70
	ctx.lr = 0x822CCFD0;
	sub_826A1E70(ctx, base);
loc_822CCFD0:
	// addi r30,r31,192
	r30.s64 = r31.s64 + 192;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x826a1e70
	ctx.lr = 0x822CCFE4;
	sub_826A1E70(ctx, base);
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r1,156
	ctx.r11.s64 = ctx.r1.s64 + 156;
	// addi r29,r31,224
	r29.s64 = r31.s64 + 224;
	// addi r9,r29,-4
	ctx.r9.s64 = r29.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822CCFF8:
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwzu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x822ccff8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822CCFF8;
	// li r10,8
	ctx.r10.s64 = 8;
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822CD018:
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r9,r11,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// and r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ctx.r8.u64;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// bdnz 0x822cd018
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822CD018;
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
loc_822CD044:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822cd060
	if (!ctx.cr6.eq) goto loc_822CD060;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// blt cr6,0x822cd044
	if (ctx.cr6.lt) goto loc_822CD044;
loc_822CD060:
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// bge cr6,0x822cd09c
	if (!ctx.cr6.lt) goto loc_822CD09C;
loc_822CD06C:
	// rlwinm r10,r11,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// clrlwi r8,r11,27
	ctx.r8.u64 = ctx.r11.u32 & 0x1F;
	// slw r8,r18,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (r18.u32 << (ctx.r8.u8 & 0x3F));
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// and. r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822cd094
	if (!ctx.cr0.eq) goto loc_822CD094;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// blt cr6,0x822cd06c
	if (ctx.cr6.lt) goto loc_822CD06C;
loc_822CD094:
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// blt cr6,0x822cd1a8
	if (ctx.cr6.lt) goto loc_822CD1A8;
loc_822CD09C:
	// clrlwi. r11,r17,24
	ctx.r11.u64 = r17.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// li r5,32
	ctx.r5.s64 = 32;
	// beq 0x822cd0dc
	if (ctx.cr0.eq) goto loc_822CD0DC;
	// addi r4,r31,160
	ctx.r4.s64 = r31.s64 + 160;
	// bl 0x826a1e70
	ctx.lr = 0x822CD0B4;
	sub_826A1E70(ctx, base);
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r1,156
	ctx.r11.s64 = ctx.r1.s64 + 156;
	// addi r9,r29,-4
	ctx.r9.s64 = r29.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822CD0C4:
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwzu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x822cd0c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822CD0C4;
	// b 0x822cd108
	goto loc_822CD108;
loc_822CD0DC:
	// addi r4,r31,128
	ctx.r4.s64 = r31.s64 + 128;
	// bl 0x826a1e70
	ctx.lr = 0x822CD0E4;
	sub_826A1E70(ctx, base);
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r1,156
	ctx.r11.s64 = ctx.r1.s64 + 156;
	// addi r9,r30,-4
	ctx.r9.s64 = r30.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822CD0F4:
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwzu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x822cd0f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822CD0F4;
loc_822CD108:
	// li r10,8
	ctx.r10.s64 = 8;
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822CD114:
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r9,r11,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// and r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ctx.r8.u64;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// bdnz 0x822cd114
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822CD114;
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
loc_822CD140:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822cd15c
	if (!ctx.cr6.eq) goto loc_822CD15C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// blt cr6,0x822cd140
	if (ctx.cr6.lt) goto loc_822CD140;
loc_822CD15C:
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// bge cr6,0x822cd1ac
	if (!ctx.cr6.lt) goto loc_822CD1AC;
loc_822CD168:
	// rlwinm r10,r11,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// clrlwi r8,r11,27
	ctx.r8.u64 = ctx.r11.u32 & 0x1F;
	// slw r8,r18,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (r18.u32 << (ctx.r8.u8 & 0x3F));
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// and. r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822cd190
	if (!ctx.cr0.eq) goto loc_822CD190;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// blt cr6,0x822cd168
	if (ctx.cr6.lt) goto loc_822CD168;
loc_822CD190:
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// bge cr6,0x822cd1ac
	if (!ctx.cr6.lt) goto loc_822CD1AC;
	// b 0x822cd1a8
	goto loc_822CD1A8;
loc_822CD19C:
	// lbz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 124);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822cd1ac
	if (ctx.cr0.eq) goto loc_822CD1AC;
loc_822CD1A8:
	// mr r24,r18
	r24.u64 = r18.u64;
loc_822CD1AC:
	// clrlwi. r11,r24,24
	ctx.r11.u64 = r24.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822cd270
	if (ctx.cr0.eq) goto loc_822CD270;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r5,32
	ctx.r5.s64 = 32;
	// beq cr6,0x822cd218
	if (ctx.cr6.eq) goto loc_822CD218;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r4,r31,16
	ctx.r4.s64 = r31.s64 + 16;
	// lwz r8,12(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// slw r9,r9,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r8.u8 & 0x3F));
	// lwzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r9,r9,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// rlwimi r9,r8,0,16,3
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFF000FFFF) | (ctx.r9.u64 & 0xFFF0000);
	// stwx r9,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// stw r22,4(r31)
	REX_STORE_U32(r31.u32 + 4, r22.u32);
	// bl 0x826a1e70
	ctx.lr = 0x822CD204;
	sub_826A1E70(ctx, base);
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// addi r4,r31,48
	ctx.r4.s64 = r31.s64 + 48;
	// li r5,32
	ctx.r5.s64 = 32;
	// bl 0x826a1e70
	ctx.lr = 0x822CD214;
	sub_826A1E70(ctx, base);
	// b 0x822cd24c
	goto loc_822CD24C;
loc_822CD218:
	// rlwinm r11,r20,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,-8(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + -8);
	// li r4,0
	ctx.r4.s64 = 0;
	// slw r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// rlwinm r11,r11,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwimi r11,r10,0,16,3
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFF000FFFF) | (ctx.r11.u64 & 0xFFF0000);
	// stw r11,-8(r23)
	REX_STORE_U32(r23.u32 + -8, ctx.r11.u32);
	// bl 0x826a2e60
	ctx.lr = 0x822CD23C;
	sub_826A2E60(ctx, base);
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826a2e60
	ctx.lr = 0x822CD24C;
	sub_826A2E60(ctx, base);
loc_822CD24C:
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// stb r22,124(r31)
	REX_STORE_U8(r31.u32 + 124, r22.u8);
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826a2e60
	ctx.lr = 0x822CD260;
	sub_826A2E60(ctx, base);
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826a2e60
	ctx.lr = 0x822CD270;
	sub_826A2E60(ctx, base);
loc_822CD270:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x822cd350
	if (ctx.cr6.eq) goto loc_822CD350;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822cd350
	if (!ctx.cr6.eq) goto loc_822CD350;
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 0);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// blt cr6,0x822cd29c
	if (ctx.cr6.lt) goto loc_822CD29C;
	// cmplwi cr6,r11,26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 26, ctx.xer);
	// ble cr6,0x822cd2a0
	if (!ctx.cr6.gt) goto loc_822CD2A0;
loc_822CD29C:
	// stb r18,124(r31)
	REX_STORE_U8(r31.u32 + 124, r18.u8);
loc_822CD2A0:
	// li r10,8
	ctx.r10.s64 = 8;
	// clrlwi. r11,r17,24
	ctx.r11.u64 = r17.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// beq 0x822cd304
	if (ctx.cr0.eq) goto loc_822CD304;
	// addi r11,r31,128
	ctx.r11.s64 = r31.s64 + 128;
	// subf r9,r11,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r11.u64;
loc_822CD2BC:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r8,r9,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x822cd2bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822CD2BC;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r31,192
	ctx.r11.s64 = r31.s64 + 192;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// subf r9,r11,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r11.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822CD2E8:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r8,r9,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x822cd2e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822CD2E8;
	// b 0x822cd350
	goto loc_822CD350;
loc_822CD304:
	// addi r11,r31,160
	ctx.r11.s64 = r31.s64 + 160;
	// subf r9,r11,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r11.u64;
loc_822CD30C:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r8,r9,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x822cd30c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822CD30C;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r31,224
	ctx.r11.s64 = r31.s64 + 224;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// subf r9,r11,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r11.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822CD338:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r8,r9,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x822cd338
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822CD338;
loc_822CD350:
	// clrlwi. r11,r17,24
	ctx.r11.u64 = r17.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822cd394
	if (ctx.cr0.eq) goto loc_822CD394;
	// cmplwi cr6,r20,4
	ctx.cr6.compare<uint32_t>(r20.u32, 4, ctx.xer);
	// bge cr6,0x822cd37c
	if (!ctx.cr6.lt) goto loc_822CD37C;
	// slw r11,r18,r20
	ctx.r11.u64 = r20.u8 & 0x20 ? 0 : (r18.u32 << (r20.u8 & 0x3F));
	// lwz r10,-8(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + -8);
	// rlwinm r11,r11,28,0,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xF0000000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwimi r11,r10,0,4,31
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF) | (ctx.r11.u64 & 0xFFFFFFFFF0000000);
	// stw r11,-8(r23)
	REX_STORE_U32(r23.u32 + -8, ctx.r11.u32);
	// b 0x822cd394
	goto loc_822CD394;
loc_822CD37C:
	// addi r11,r20,-4
	ctx.r11.s64 = r20.s64 + -4;
	// lwz r10,-4(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + -4);
	// slw r11,r18,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (r18.u32 << (ctx.r11.u8 & 0x3F));
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwimi r11,r10,0,0,29
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC) | (ctx.r11.u64 & 0xFFFFFFFF00000003);
	// stw r11,-4(r23)
	REX_STORE_U32(r23.u32 + -4, ctx.r11.u32);
loc_822CD394:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x826a1cdc
	return;
}

DEFINE_REX_FUNC(sub_82302780) {
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
	ctx.lr = 0x82302788;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8230281c
	if (!ctx.cr6.eq) goto loc_8230281C;
	// lwz r29,124(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 124);
	// addi r27,r3,124
	r27.s64 = ctx.r3.s64 + 124;
	// b 0x82302810
	goto loc_82302810;
loc_823027B0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// addi r11,r29,-4
	ctx.r11.s64 = r29.s64 + -4;
	// bne cr6,0x823027c0
	if (!ctx.cr6.eq) goto loc_823027C0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823027C0:
	// lwz r31,32(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// addi r30,r11,32
	r30.s64 = ctx.r11.s64 + 32;
	// b 0x82302804
	goto loc_82302804;
loc_823027CC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// addi r6,r31,-4
	ctx.r6.s64 = r31.s64 + -4;
	// bne cr6,0x823027dc
	if (!ctx.cr6.eq) goto loc_823027DC;
	// li r6,0
	ctx.r6.s64 = 0;
loc_823027DC:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,220(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 220);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823027F8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823028dc
	if (!ctx.cr0.eq) goto loc_823028DC;
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_82302804:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// bne cr6,0x823027cc
	if (!ctx.cr6.eq) goto loc_823027CC;
	// lwz r29,0(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 0);
loc_82302810:
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(r29.u32, r27.u32, ctx.xer);
	// bne cr6,0x823027b0
	if (!ctx.cr6.eq) goto loc_823027B0;
	// b 0x823028d8
	goto loc_823028D8;
loc_8230281C:
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82302884
	if (ctx.cr6.eq) goto loc_82302884;
	// lwz r30,4(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_8230282C:
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne cr6,0x82302840
	if (!ctx.cr6.eq) goto loc_82302840;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82302840:
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82302884
	if (ctx.cr6.eq) goto loc_82302884;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// addi r6,r30,-4
	ctx.r6.s64 = r30.s64 + -4;
	// bne cr6,0x82302858
	if (!ctx.cr6.eq) goto loc_82302858;
	// li r6,0
	ctx.r6.s64 = 0;
loc_82302858:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,220(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 220);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82302874;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823028dc
	if (!ctx.cr0.eq) goto loc_823028DC;
	// lwz r30,0(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 0);
	// b 0x8230282c
	goto loc_8230282C;
loc_82302884:
	// addi r29,r31,52
	r29.s64 = r31.s64 + 52;
	// lwz r31,52(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 52);
	// b 0x823028d0
	goto loc_823028D0;
loc_82302890:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// addi r30,r31,-8
	r30.s64 = r31.s64 + -8;
	// bne cr6,0x823028a0
	if (!ctx.cr6.eq) goto loc_823028A0;
	// li r30,0
	r30.s64 = 0;
loc_823028A0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r27,0(r28)
	r27.u64 = REX_LOAD_U32(r28.u32 + 0);
	// bl 0x822f70d8
	ctx.lr = 0x823028AC;
	sub_822F70D8(ctx, base);
	// lwz r11,224(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 224);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823028CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_823028D0:
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(r31.u32, r29.u32, ctx.xer);
	// bne cr6,0x82302890
	if (!ctx.cr6.eq) goto loc_82302890;
loc_823028D8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823028DC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_8230EE20) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8230ee60
	if (ctx.cr6.eq) goto loc_8230EE60;
	// bl 0x8230eda8
	ctx.lr = 0x8230EE44;
	sub_8230EDA8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8230ee84
	if (ctx.cr0.eq) goto loc_8230EE84;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823ef5f0
	ctx.lr = 0x8230EE5C;
	sub_823EF5F0(ctx, base);
	// b 0x8230ee84
	goto loc_8230EE84;
loc_8230EE60:
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,5120
	ctx.r5.s64 = ctx.r10.s64 + 5120;
	// li r6,97
	ctx.r6.s64 = 97;
	// lwz r11,1012(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1012);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x8230EE80;
	sub_82330E40(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_8230EE84:
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

DEFINE_REX_FUNC(sub_82311B28) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82311B30;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,52(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82311d0c
	if (ctx.cr6.eq) goto loc_82311D0C;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r11,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// bl 0x8233f250
	ctx.lr = 0x82311B5C;
	sub_8233F250(ctx, base);
	// cmpwi cr6,r3,36
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 36, ctx.xer);
	// beq cr6,0x82311b6c
	if (ctx.cr6.eq) goto loc_82311B6C;
	// cmpwi cr6,r3,11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 11, ctx.xer);
	// bne cr6,0x82311b70
	if (!ctx.cr6.eq) goto loc_82311B70;
loc_82311B6C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82311B70:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82311d14
	if (!ctx.cr6.eq) goto loc_82311D14;
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82311d0c
	if (ctx.cr0.eq) goto loc_82311D0C;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,40(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 40);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x8233f720
	ctx.lr = 0x82311B94;
	sub_8233F720(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82311d14
	if (!ctx.cr0.eq) goto loc_82311D14;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,52(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 52);
	// bl 0x8234aac0
	ctx.lr = 0x82311BA8;
	sub_8234AAC0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82311d14
	if (!ctx.cr0.eq) goto loc_82311D14;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x8234d528
	ctx.lr = 0x82311BBC;
	sub_8234D528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82311d14
	if (!ctx.cr0.eq) goto loc_82311D14;
	// lis r31,-32126
	r31.s64 = -2105409536;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,-10820(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + -10820);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,20(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x8232f230
	ctx.lr = 0x82311BEC;
	sub_8232F230(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82311d14
	if (!ctx.cr0.eq) goto loc_82311D14;
	// addi r6,r1,124
	ctx.r6.s64 = ctx.r1.s64 + 124;
	// lwz r3,52(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 52);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8233ec48
	ctx.lr = 0x82311C08;
	sub_8233EC48(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82311d14
	if (!ctx.cr0.eq) goto loc_82311D14;
	// lwz r11,-10820(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + -10820);
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,20(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x8232fbb0
	ctx.lr = 0x82311C24;
	sub_8232FBB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82311d14
	if (!ctx.cr0.eq) goto loc_82311D14;
	// ld r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// ld r10,120(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// bge cr6,0x82311c88
	if (!ctx.cr6.lt) goto loc_82311C88;
	// lwa r11,88(r1)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(ctx.r1.u32 + 88));
	// lfs f13,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// std r11,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r11.u64);
	// lfd f12,120(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// std r9,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r9.u64);
	// lfd f0,120(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// lfs f0,3720(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 3720);
	ctx.f0.f64 = double(temp.f32);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fdivs f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 / ctx.f13.f64));
	// fmadds f0,f13,f12,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f12.f64, ctx.f0.f64)));
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.f0.u64);
	// ld r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// b 0x82311d08
	goto loc_82311D08;
loc_82311C88:
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,52(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 52);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// bl 0x8233ee38
	ctx.lr = 0x82311C98;
	sub_8233EE38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82311d14
	if (!ctx.cr0.eq) goto loc_82311D14;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// bgt cr6,0x82311cb8
	if (ctx.cr6.gt) goto loc_82311CB8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82311CB8:
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lwa r10,88(r1)
	ctx.r10.s64 = int32_t(REX_LOAD_U32(ctx.r1.u32 + 88));
	// std r11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfd f12,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lfs f13,92(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// ld r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// std r11,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r11.u64);
	// lfd f0,120(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f11,f0
	ctx.f11.f64 = double(float(ctx.f0.f64));
	// lfs f0,3720(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3720);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fdivs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
	// fmadds f0,f13,f11,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f11.f64, ctx.f0.f64)));
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.f0.u64);
	// ld r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
loc_82311D08:
	// add r31,r11,r10
	r31.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82311D0C:
	// std r31,0(r29)
	REX_STORE_U64(r29.u32 + 0, r31.u64);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82311D14:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8231EA90) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8231eaa0
	if (!ctx.cr6.eq) goto loc_8231EAA0;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_8231EAA0:
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8231FCA0) {
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
	ctx.lr = 0x8231FCA8;
	// addi r31,r1,-240
	r31.s64 = ctx.r1.s64 + -240;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32126
	r30.s64 = -2105409536;
	// li r15,0
	r15.s64 = 0;
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// mr r17,r15
	r17.u64 = r15.u64;
	// mr r19,r15
	r19.u64 = r15.u64;
	// lwz r11,-10820(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + -10820);
	// addi r11,r11,76
	ctx.r11.s64 = ctx.r11.s64 + 76;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8231fcdc
	goto loc_8231FCDC;
loc_8231FCD4:
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r19,r19,1
	r19.s64 = r19.s64 + 1;
loc_8231FCDC:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8231fcd4
	if (!ctx.cr6.eq) goto loc_8231FCD4;
	// rlwinm r29,r19,2,0,29
	r29.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 2) & 0xFFFFFFFC;
	// neg r11,r29
	ctx.r11.s64 = static_cast<int64_t>(-r29.u64);
	// rlwinm r12,r11,0,0,27
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// bl 0x826a2d14
	ctx.lr = 0x8231FCF4;
	sub_826A2D14(ctx, base);
	// lwz r11,0(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// neg r10,r29
	ctx.r10.s64 = static_cast<int64_t>(-r29.u64);
	// stwux r11,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r1.u32 = ea;
	// rlwinm r12,r10,0,0,27
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// addi r14,r1,80
	r14.s64 = ctx.r1.s64 + 80;
	// bl 0x826a2d14
	ctx.lr = 0x8231FD0C;
	sub_826A2D14(ctx, base);
	// lwz r11,0(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// stwux r11,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r1.u32 = ea;
	// addi r16,r1,80
	r16.s64 = ctx.r1.s64 + 80;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x823ef5f0
	ctx.lr = 0x8231FD28;
	sub_823EF5F0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x823ef5f0
	ctx.lr = 0x8231FD38;
	sub_823EF5F0(ctx, base);
	// lwz r11,0(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// stwu r11,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r1.u32 = ea;
	// addi r18,r1,80
	r18.s64 = ctx.r1.s64 + 80;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x823ef5f0
	ctx.lr = 0x8231FD54;
	sub_823EF5F0(ctx, base);
	// lwz r11,0(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// stwu r11,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r1.u32 = ea;
	// addi r21,r1,80
	r21.s64 = ctx.r1.s64 + 80;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x823ef5f0
	ctx.lr = 0x8231FD70;
	sub_823EF5F0(ctx, base);
	// lwz r9,16(r20)
	ctx.r9.u64 = REX_LOAD_U32(r20.u32 + 16);
	// mr r11,r15
	ctx.r11.u64 = r15.u64;
	// mr r10,r15
	ctx.r10.u64 = r15.u64;
	// lwz r9,20(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// lwz r9,12(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// stw r9,0(r18)
	REX_STORE_U32(r18.u32 + 0, ctx.r9.u32);
	// lwz r9,12(r20)
	ctx.r9.u64 = REX_LOAD_U32(r20.u32 + 12);
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8231fd9c
	if (ctx.cr0.eq) goto loc_8231FD9C;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8231fda0
	goto loc_8231FDA0;
loc_8231FD9C:
	// li r10,1
	ctx.r10.s64 = 1;
loc_8231FDA0:
	// rlwimi r11,r10,16,0,15
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000) | (ctx.r11.u64 & 0xFFFFFFFF0000FFFF);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r11,0(r21)
	REX_STORE_U32(r21.u32 + 0, ctx.r11.u32);
	// lis r29,-32129
	r29.s64 = -2105606144;
	// lwz r11,-10820(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + -10820);
	// addi r10,r9,7236
	ctx.r10.s64 = ctx.r9.s64 + 7236;
	// stw r29,80(r31)
	REX_STORE_U32(r31.u32 + 80, r29.u32);
	// stw r10,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r10.u32);
	// lwz r11,164(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 164);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8231ff40
	if (ctx.cr0.eq) goto loc_8231FF40;
	// lwz r10,0(r18)
	ctx.r10.u64 = REX_LOAD_U32(r18.u32 + 0);
	// mr r23,r15
	r23.u64 = r15.u64;
	// lwz r11,20(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8231fe00
	if (!ctx.cr6.gt) goto loc_8231FE00;
	// lwz r10,40(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8231FDE8:
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8231fdf8
	if (!ctx.cr6.eq) goto loc_8231FDF8;
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
loc_8231FDF8:
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// bdnz 0x8231fde8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8231FDE8;
loc_8231FE00:
	// rlwinm r5,r23,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r28,r15
	r28.u64 = r15.u64;
	// neg r11,r5
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r5.u64);
	// rlwinm r12,r11,0,0,27
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// bl 0x826a2d14
	ctx.lr = 0x8231FE14;
	sub_826A2D14(ctx, base);
	// lwz r11,0(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// stwux r11,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r1.u32 = ea;
	// addi r25,r1,80
	r25.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x823ef5f0
	ctx.lr = 0x8231FE2C;
	sub_823EF5F0(ctx, base);
	// mr r22,r15
	r22.u64 = r15.u64;
	// lwz r26,0(r18)
	r26.u64 = REX_LOAD_U32(r18.u32 + 0);
	// lwz r11,20(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8231fec0
	if (!ctx.cr6.gt) goto loc_8231FEC0;
	// mr r24,r15
	r24.u64 = r15.u64;
loc_8231FE44:
	// lwz r11,40(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 40);
	// add r27,r24,r11
	r27.u64 = r24.u64 + ctx.r11.u64;
	// lwzx r11,r24,r11
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8231fea8
	if (!ctx.cr6.eq) goto loc_8231FEA8;
	// mr r30,r15
	r30.u64 = r15.u64;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// ble cr6,0x8231fea8
	if (!ctx.cr6.gt) goto loc_8231FEA8;
	// mr r29,r25
	r29.u64 = r25.u64;
loc_8231FE68:
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8231fe98
	if (ctx.cr6.eq) goto loc_8231FE98;
	// lwz r4,20(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 20);
	// bl 0x823315e8
	ctx.lr = 0x8231FE7C;
	sub_823315E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8231fea8
	if (ctx.cr0.eq) goto loc_8231FEA8;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r30,r23
	ctx.cr6.compare<int32_t>(r30.s32, r23.s32, ctx.xer);
	// blt cr6,0x8231fe68
	if (ctx.cr6.lt) goto loc_8231FE68;
	// b 0x8231fea8
	goto loc_8231FEA8;
loc_8231FE98:
	// lwz r11,20(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 20);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// stwx r11,r10,r25
	REX_STORE_U32(ctx.r10.u32 + r25.u32, ctx.r11.u32);
loc_8231FEA8:
	// lwz r11,20(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 20);
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// addi r24,r24,24
	r24.s64 = r24.s64 + 24;
	// cmpw cr6,r22,r11
	ctx.cr6.compare<int32_t>(r22.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8231fe44
	if (ctx.cr6.lt) goto loc_8231FE44;
	// lwz r29,80(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 80);
loc_8231FEC0:
	// lwz r11,4(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 4);
	// rlwinm r30,r28,2,0,29
	r30.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r5,84(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 84);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,999
	ctx.r6.s64 = 999;
	// addi r4,r30,4
	ctx.r4.s64 = r30.s64 + 4;
	// lwz r11,168(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 168);
	// stw r28,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, r28.u32);
	// lwz r11,1012(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 1012);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330a38
	ctx.lr = 0x8231FEF0;
	sub_82330A38(ctx, base);
	// lwz r11,4(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 4);
	// lwz r11,168(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 168);
	// stw r3,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// lwz r11,4(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 4);
	// lwz r11,168(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 168);
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8231ff18
	if (!ctx.cr6.eq) goto loc_8231FF18;
loc_8231FF10:
	// li r3,44
	ctx.r3.s64 = 44;
	// b 0x8232030c
	goto loc_8232030C;
loc_8231FF18:
	// lwz r11,4(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 4);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r11,168(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 168);
	// lwz r3,60(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// bl 0x823ef2f8
	ctx.lr = 0x8231FF30;
	sub_823EF2F8(ctx, base);
	// lwz r11,4(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 4);
	// lwz r11,168(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 168);
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// stwx r15,r11,r30
	REX_STORE_U32(ctx.r11.u32 + r30.u32, r15.u32);
loc_8231FF40:
	// lwz r6,0(r18)
	ctx.r6.u64 = REX_LOAD_U32(r18.u32 + 0);
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// lwz r11,20(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8231fffc
	if (!ctx.cr6.gt) goto loc_8231FFFC;
	// mr r5,r15
	ctx.r5.u64 = r15.u64;
loc_8231FF58:
	// lwz r11,40(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 40);
	// add r10,r5,r11
	ctx.r10.u64 = ctx.r5.u64 + ctx.r11.u64;
	// lwzx r11,r5,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8231ffe8
	if (!ctx.cr6.eq) goto loc_8231FFE8;
	// mr r11,r15
	ctx.r11.u64 = r15.u64;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// ble cr6,0x8231ffe8
	if (!ctx.cr6.gt) goto loc_8231FFE8;
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mr r10,r14
	ctx.r10.u64 = r14.u64;
loc_8231FF80:
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8231ffa8
	if (ctx.cr6.eq) goto loc_8231FFA8;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8231ffd4
	if (ctx.cr6.eq) goto loc_8231FFD4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r19.s32, ctx.xer);
	// blt cr6,0x8231ff80
	if (ctx.cr6.lt) goto loc_8231FF80;
	// b 0x8231ffe8
	goto loc_8231FFE8;
loc_8231FFA8:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 0);
	// lwzx r9,r11,r16
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + r16.u32);
	// srawi r8,r9,16
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 16;
	// srawi r3,r10,16
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFF) != 0);
	ctx.r3.s64 = ctx.r10.s32 >> 16;
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r9,r7,r8
	ctx.r9.u64 = ctx.r7.u64 + ctx.r8.u64;
	// rlwimi r10,r9,16,0,15
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000) | (ctx.r10.u64 & 0xFFFFFFFF0000FFFF);
	// b 0x8231ffe4
	goto loc_8231FFE4;
loc_8231FFD4:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r17,r17,1
	r17.s64 = r17.s64 + 1;
	// stwx r9,r11,r14
	REX_STORE_U32(ctx.r11.u32 + r14.u32, ctx.r9.u32);
	// lwz r10,0(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 0);
loc_8231FFE4:
	// stwx r10,r11,r16
	REX_STORE_U32(ctx.r11.u32 + r16.u32, ctx.r10.u32);
loc_8231FFE8:
	// lwz r11,20(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 20);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r5,r5,24
	ctx.r5.s64 = ctx.r5.s64 + 24;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8231ff58
	if (ctx.cr6.lt) goto loc_8231FF58;
loc_8231FFFC:
	// rlwinm r28,r17,2,0,29
	r28.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 2) & 0xFFFFFFFC;
	// neg r11,r28
	ctx.r11.s64 = static_cast<int64_t>(-r28.u64);
	// rlwinm r12,r11,0,0,27
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// bl 0x826a2d14
	ctx.lr = 0x8232000C;
	sub_826A2D14(ctx, base);
	// lwz r11,0(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// stwux r11,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r1.u32 = ea;
	// addi r25,r1,80
	r25.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x823ef5f0
	ctx.lr = 0x82320028;
	sub_823EF5F0(ctx, base);
	// mr r27,r15
	r27.u64 = r15.u64;
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(r17.s32, 0, ctx.xer);
	// ble cr6,0x82320128
	if (!ctx.cr6.gt) goto loc_82320128;
	// mr r30,r25
	r30.u64 = r25.u64;
	// subf r26,r25,r16
	r26.u64 = r16.u64 - r25.u64;
loc_8232003C:
	// lwzx r11,r26,r30
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + r30.u32);
	// srawi r9,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 16;
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r11,r9,16
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFF;
	// add r29,r11,r10
	r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r29,1
	ctx.r11.s64 = r29.s64 + 1;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// neg r11,r5
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r5.u64);
	// rlwinm r12,r11,0,0,27
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// bl 0x826a2d14
	ctx.lr = 0x82320064;
	sub_826A2D14(ctx, base);
	// lwz r11,0(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// li r4,-1
	ctx.r4.s64 = -1;
	// stwux r11,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r1.u32 = ea;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r3,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// bl 0x823ef5f0
	ctx.lr = 0x8232007C;
	sub_823EF5F0(ctx, base);
	// lwz r10,0(r18)
	ctx.r10.u64 = REX_LOAD_U32(r18.u32 + 0);
	// lwz r6,0(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm r3,r27,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r15
	ctx.r5.u64 = r15.u64;
	// lwz r11,20(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82320118
	if (!ctx.cr6.gt) goto loc_82320118;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
loc_8232009C:
	// lwz r11,40(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82320104
	if (!ctx.cr6.eq) goto loc_82320104;
	// lwzx r9,r3,r14
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + r14.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82320104
	if (!ctx.cr6.eq) goto loc_82320104;
	// mr r9,r15
	ctx.r9.u64 = r15.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x82320104
	if (!ctx.cr6.gt) goto loc_82320104;
	// lwz r7,12(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_823200D4:
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// beq cr6,0x82320104
	if (ctx.cr6.eq) goto loc_82320104;
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// beq cr6,0x823200fc
	if (ctx.cr6.eq) goto loc_823200FC;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r9,r29
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r29.s32, ctx.xer);
	// blt cr6,0x823200d4
	if (ctx.cr6.lt) goto loc_823200D4;
	// b 0x82320104
	goto loc_82320104;
loc_823200FC:
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r7,r11,r6
	REX_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r7.u32);
loc_82320104:
	// lwz r11,20(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r4,r4,24
	ctx.r4.s64 = ctx.r4.s64 + 24;
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8232009c
	if (ctx.cr6.lt) goto loc_8232009C;
loc_82320118:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r27,r17
	ctx.cr6.compare<int32_t>(r27.s32, r17.s32, ctx.xer);
	// blt cr6,0x8232003c
	if (ctx.cr6.lt) goto loc_8232003C;
loc_82320128:
	// addi r29,r28,4
	r29.s64 = r28.s64 + 4;
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(r17.s32, 0, ctx.xer);
	// add r11,r28,r29
	ctx.r11.u64 = r28.u64 + r29.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// add r27,r11,r28
	r27.u64 = ctx.r11.u64 + r28.u64;
	// ble cr6,0x82320178
	if (!ctx.cr6.gt) goto loc_82320178;
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// mtctr r17
	ctx.ctr.u64 = r17.u64;
loc_82320148:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// mr r11,r15
	ctx.r11.u64 = r15.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// b 0x8232015c
	goto loc_8232015C;
loc_82320158:
	// lwzu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r8.u64 = REX_LOAD_U32(ea);
	ctx.r9.u32 = ea;
loc_8232015C:
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x82320158
	if (!ctx.cr6.eq) goto loc_82320158;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// add r27,r11,r27
	r27.u64 = ctx.r11.u64 + r27.u64;
	// bdnz 0x82320148
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82320148;
loc_82320178:
	// lwz r11,4(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 4);
	// lwz r30,80(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 80);
	// lwz r11,168(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 168);
	// lwz r4,32(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x823201a8
	if (ctx.cr6.eq) goto loc_823201A8;
	// lwz r11,1012(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 1012);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1116
	ctx.r6.s64 = 1116;
	// lwz r5,84(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 84);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x823201A8;
	sub_82330D00(ctx, base);
loc_823201A8:
	// lwz r11,1012(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 1012);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,84(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 84);
	// li r6,1119
	ctx.r6.s64 = 1119;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330a38
	ctx.lr = 0x823201C8;
	sub_82330A38(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x8231ff10
	if (ctx.cr0.eq) goto loc_8231FF10;
	// lwz r11,4(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 4);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// lwz r11,168(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 168);
	// stw r30,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, r30.u32);
	// lwz r11,4(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 4);
	// lwz r11,168(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 168);
	// lwz r3,32(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x823ef2f8
	ctx.lr = 0x823201F4;
	sub_823EF2F8(ctx, base);
	// lwz r11,4(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 4);
	// lwz r11,168(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 168);
	// add r30,r30,r28
	r30.u64 = r30.u64 + r28.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// stw r30,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, r30.u32);
	// lwz r11,4(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 4);
	// lwz r11,168(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 168);
	// lwz r3,40(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// bl 0x823ef2f8
	ctx.lr = 0x8232021C;
	sub_823EF2F8(ctx, base);
	// lwz r9,4(r20)
	ctx.r9.u64 = REX_LOAD_U32(r20.u32 + 4);
	// add r11,r30,r28
	ctx.r11.u64 = r30.u64 + r28.u64;
	// mr r10,r15
	ctx.r10.u64 = r15.u64;
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(r17.s32, 0, ctx.xer);
	// lwz r9,168(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 168);
	// stw r11,36(r9)
	REX_STORE_U32(ctx.r9.u32 + 36, ctx.r11.u32);
	// ble cr6,0x82320268
	if (!ctx.cr6.gt) goto loc_82320268;
	// mr r9,r15
	ctx.r9.u64 = r15.u64;
	// mtctr r17
	ctx.ctr.u64 = r17.u64;
	// mr r10,r17
	ctx.r10.u64 = r17.u64;
loc_82320244:
	// lwz r8,4(r20)
	ctx.r8.u64 = REX_LOAD_U32(r20.u32 + 4);
	// lwz r8,168(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 168);
	// lwz r7,32(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 32);
	// lwz r8,36(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 36);
	// lwzx r7,r7,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// lwz r7,28(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 28);
	// stwx r7,r8,r9
	REX_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r7.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x82320244
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82320244;
loc_82320268:
	// lwz r9,4(r20)
	ctx.r9.u64 = REX_LOAD_U32(r20.u32 + 4);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + r29.u64;
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(r17.s32, 0, ctx.xer);
	// add r11,r10,r28
	ctx.r11.u64 = ctx.r10.u64 + r28.u64;
	// lwz r9,168(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 168);
	// lwz r9,36(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 36);
	// stwx r15,r9,r8
	REX_STORE_U32(ctx.r9.u32 + ctx.r8.u32, r15.u32);
	// lwz r9,4(r20)
	ctx.r9.u64 = REX_LOAD_U32(r20.u32 + 4);
	// lwz r9,168(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 168);
	// stw r10,44(r9)
	REX_STORE_U32(ctx.r9.u32 + 44, ctx.r10.u32);
	// ble cr6,0x823202f0
	if (!ctx.cr6.gt) goto loc_823202F0;
	// mr r7,r15
	ctx.r7.u64 = r15.u64;
	// mtctr r17
	ctx.ctr.u64 = r17.u64;
loc_823202A0:
	// lwz r8,4(r20)
	ctx.r8.u64 = REX_LOAD_U32(r20.u32 + 4);
	// mr r10,r15
	ctx.r10.u64 = r15.u64;
	// lwzx r9,r7,r25
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + r25.u32);
	// lwz r8,168(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 168);
	// lwz r8,44(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 44);
	// stwx r11,r8,r7
	REX_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r11.u32);
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// b 0x823202d4
	goto loc_823202D4;
loc_823202C0:
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
loc_823202D4:
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// bne cr6,0x823202c0
	if (!ctx.cr6.eq) goto loc_823202C0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x823202a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823202A0;
loc_823202F0:
	// lwz r11,4(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,168(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 168);
	// stw r17,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, r17.u32);
	// lwz r11,4(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 4);
	// lwz r11,168(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 168);
	// stw r27,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, r27.u32);
loc_8232030C:
	// addi r1,r31,240
	ctx.r1.s64 = r31.s64 + 240;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_82355880) {
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
	// lwz r11,412(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 412);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823558b4
	if (!ctx.cr6.eq) goto loc_823558B4;
	// lwz r11,396(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 396);
	// lwz r11,21972(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 21972);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823558d4
	if (ctx.cr6.eq) goto loc_823558D4;
loc_823558B4:
	// lwz r10,392(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 392);
	// addi r7,r31,432
	ctx.r7.s64 = r31.s64 + 432;
	// addi r6,r31,428
	ctx.r6.s64 = r31.s64 + 428;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// rlwinm r4,r10,30,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	// bctrl 
	ctx.lr = 0x823558CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82355904
	if (!ctx.cr6.eq) goto loc_82355904;
loc_823558D4:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823558EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,20
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 20, ctx.xer);
	// bne cr6,0x82355904
	if (!ctx.cr6.eq) goto loc_82355904;
	// lwz r11,392(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 392);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,392(r31)
	REX_STORE_U32(r31.u32 + 392, ctx.r10.u32);
loc_82355904:
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

DEFINE_REX_FUNC(sub_82358960) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r6,416
	ctx.r6.s64 = 416;
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82331a00
	ctx.lr = 0x82358990;
	sub_82331A00(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823410f8
	ctx.lr = 0x8235899C;
	sub_823410F8(ctx, base);
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

DEFINE_REX_FUNC(sub_8235B978) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8235B980;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stb r4,560(r3)
	REX_STORE_U8(ctx.r3.u32 + 560, ctx.r4.u8);
	// li r31,0
	r31.s64 = 0;
	// addi r30,r3,28
	r30.s64 = ctx.r3.s64 + 28;
loc_8235B994:
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt cr6,0x8235b9b8
	if (ctx.cr6.lt) goto loc_8235B9B8;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(r31.s32, 4, ctx.xer);
	// bge cr6,0x8235b9b8
	if (!ctx.cr6.lt) goto loc_8235B9B8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,124
	ctx.r5.s64 = 124;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8235B9B8;
	sub_826A1E70(ctx, base);
loc_8235B9B8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8235b050
	ctx.lr = 0x8235B9C4;
	sub_8235B050(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,132
	r30.s64 = r30.s64 + 132;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(r31.s32, 4, ctx.xer);
	// blt cr6,0x8235b994
	if (ctx.cr6.lt) goto loc_8235B994;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8235E9A8) {
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
	ctx.lr = 0x8235E9B0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8235e9c8
	if (ctx.cr6.eq) goto loc_8235E9C8;
	// bl 0x823b27b0
	ctx.lr = 0x8235E9C8;
	sub_823B27B0(ctx, base);
loc_8235E9C8:
	// lwz r31,12(r25)
	r31.u64 = REX_LOAD_U32(r25.u32 + 12);
	// addi r29,r25,12
	r29.s64 = r25.s64 + 12;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r27,0
	r27.s64 = 0;
	// lis r28,-32129
	r28.s64 = -2105606144;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(r31.u32, r29.u32, ctx.xer);
	// addi r26,r11,10708
	r26.s64 = ctx.r11.s64 + 10708;
	// beq cr6,0x8235ea60
	if (ctx.cr6.eq) goto loc_8235EA60;
loc_8235E9E8:
	// lwz r30,0(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r30.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r31,4(r31)
	REX_STORE_U32(r31.u32 + 4, r31.u32);
	// stw r31,0(r31)
	REX_STORE_U32(r31.u32 + 0, r31.u32);
	// stw r27,8(r31)
	REX_STORE_U32(r31.u32 + 8, r27.u32);
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x823b27b0
	ctx.lr = 0x8235EA14;
	sub_823B27B0(ctx, base);
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8235ea38
	if (ctx.cr6.eq) goto loc_8235EA38;
	// lwz r11,1012(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 1012);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,482
	ctx.r6.s64 = 482;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x8235EA38;
	sub_82330D00(ctx, base);
loc_8235EA38:
	// lwz r11,1012(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 1012);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,485
	ctx.r6.s64 = 485;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x8235EA54;
	sub_82330D00(ctx, base);
	// mr r31,r30
	r31.u64 = r30.u64;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(r30.u32, r29.u32, ctx.xer);
	// bne cr6,0x8235e9e8
	if (!ctx.cr6.eq) goto loc_8235E9E8;
loc_8235EA60:
	// lwz r10,24(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 24);
	// addi r29,r25,24
	r29.s64 = r25.s64 + 24;
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r29.u32, ctx.xer);
	// beq cr6,0x8235eb24
	if (ctx.cr6.eq) goto loc_8235EB24;
loc_8235EA70:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r31,r10,-4
	r31.s64 = ctx.r10.s64 + -4;
	// bne cr6,0x8235ea80
	if (!ctx.cr6.eq) goto loc_8235EA80;
	// mr r31,r27
	r31.u64 = r27.u64;
loc_8235EA80:
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r31,4
	ctx.r11.s64 = r31.s64 + 4;
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r30,0(r10)
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r8,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lwz r6,8(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r6,4(r7)
	REX_STORE_U32(ctx.r7.u32 + 4, ctx.r6.u32);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// stw r27,12(r31)
	REX_STORE_U32(r31.u32 + 12, r27.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r4,4(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x8235EAC0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235eb5c
	if (!ctx.cr6.eq) goto loc_8235EB5C;
	// lwz r11,1012(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 1012);
	// lwz r10,92(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, ctx.xer);
	// bne cr6,0x8235eae0
	if (!ctx.cr6.eq) goto loc_8235EAE0;
	// stw r27,92(r11)
	REX_STORE_U32(ctx.r11.u32 + 92, r27.u32);
	// lwz r11,1012(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 1012);
loc_8235EAE0:
	// lwz r10,88(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, ctx.xer);
	// bne cr6,0x8235eaf4
	if (!ctx.cr6.eq) goto loc_8235EAF4;
	// stw r27,88(r11)
	REX_STORE_U32(ctx.r11.u32 + 88, r27.u32);
	// lwz r11,1012(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 1012);
loc_8235EAF4:
	// lwz r10,96(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, ctx.xer);
	// bne cr6,0x8235eb08
	if (!ctx.cr6.eq) goto loc_8235EB08;
	// stw r27,96(r11)
	REX_STORE_U32(ctx.r11.u32 + 96, r27.u32);
	// lwz r11,1012(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 1012);
loc_8235EB08:
	// lwz r10,100(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 100);
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, ctx.xer);
	// bne cr6,0x8235eb18
	if (!ctx.cr6.eq) goto loc_8235EB18;
	// stw r27,100(r11)
	REX_STORE_U32(ctx.r11.u32 + 100, r27.u32);
loc_8235EB18:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(r30.u32, r29.u32, ctx.xer);
	// bne cr6,0x8235ea70
	if (!ctx.cr6.eq) goto loc_8235EA70;
loc_8235EB24:
	// lwz r3,36(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8235eb38
	if (ctx.cr6.eq) goto loc_8235EB38;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8233e770
	ctx.lr = 0x8235EB38;
	sub_8233E770(ctx, base);
loc_8235EB38:
	// bl 0x823b2610
	ctx.lr = 0x8235EB3C;
	sub_823B2610(ctx, base);
	// lwz r11,1012(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 1012);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,174
	ctx.r6.s64 = 174;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x8235EB58;
	sub_82330D00(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8235EB5C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_8236C2D0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r4,7
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 7, ctx.xer);
	// bgt cr6,0x8236c370
	if (ctx.cr6.gt) goto loc_8236C370;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8236c308
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8236C308;
	// bdzf 4*cr6+eq,0x8236c314
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8236C314;
	// bdzf 4*cr6+eq,0x8236c320
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8236C320;
	// bdzf 4*cr6+eq,0x8236c32c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8236C32C;
	// bdzf 4*cr6+eq,0x8236c338
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8236C338;
	// bdzf 4*cr6+eq,0x8236c344
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8236C344;
	// bne cr6,0x8236c36c
	if (!ctx.cr6.eq) goto loc_8236C36C;
	// stfs f1,316(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 316, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8236C308:
	// stfs f1,324(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 324, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8236C314:
	// stfs f1,332(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 332, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8236C320:
	// stfs f1,340(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 340, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8236C32C:
	// stfs f1,348(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 348, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8236C338:
	// stfs f1,356(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 356, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8236C344:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f1,364(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 364, temp.u32);
	// lfs f0,3716(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x8236c360
	if (ctx.cr6.gt) goto loc_8236C360;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8236C360:
	// stb r11,368(r3)
	REX_STORE_U8(ctx.r3.u32 + 368, ctx.r11.u8);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8236C36C:
	// stfs f1,376(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 376, temp.u32);
loc_8236C370:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823722F0) {
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
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// li r5,152
	ctx.r5.s64 = 152;
	// addi r31,r11,10152
	r31.s64 = ctx.r11.s64 + 10152;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823ef5f0
	ctx.lr = 0x82372318;
	sub_823EF5F0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r10,17284
	ctx.r4.s64 = ctx.r10.s64 + 17284;
	// bl 0x82331480
	ctx.lr = 0x82372328;
	sub_82331480(ctx, base);
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lis r10,-32201
	ctx.r10.s64 = -2110324736;
	// addi r9,r11,10056
	ctx.r9.s64 = ctx.r11.s64 + 10056;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// addi r10,r10,8920
	ctx.r10.s64 = ctx.r10.s64 + 8920;
	// stw r9,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r9.u32);
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// lis r4,-32201
	ctx.r4.s64 = -2110324736;
	// stw r10,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r10.u32);
	// lis r5,-32201
	ctx.r5.s64 = -2110324736;
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
	// addi r9,r4,8608
	ctx.r9.s64 = ctx.r4.s64 + 8608;
	// addi r11,r5,8664
	ctx.r11.s64 = ctx.r5.s64 + 8664;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r9,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r9.u32);
	// lis r6,-32201
	ctx.r6.s64 = -2110324736;
	// stw r11,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r11.u32);
	// lis r7,-32201
	ctx.r7.s64 = -2110324736;
	// stw r10,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r10.u32);
	// lis r8,-32202
	ctx.r8.s64 = -2110390272;
	// addi r9,r6,8688
	ctx.r9.s64 = ctx.r6.s64 + 8688;
	// addi r11,r7,13728
	ctx.r11.s64 = ctx.r7.s64 + 13728;
	// addi r10,r8,16224
	ctx.r10.s64 = ctx.r8.s64 + 16224;
	// stw r9,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r9.u32);
	// stw r11,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r11.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r10,144(r31)
	REX_STORE_U32(r31.u32 + 144, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,468
	ctx.r10.s64 = 468;
	// stw r9,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r11.u32);
	// stw r10,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r10.u32);
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

DEFINE_REX_FUNC(sub_82377BD0) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x82377be0
	if (!ctx.cr6.eq) goto loc_82377BE0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82377BE0:
	// b 0x823c1f10
	sub_823C1F10(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82379EB0) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x82379ec0
	if (!ctx.cr6.eq) goto loc_82379EC0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82379EC0:
	// b 0x823794b8
	sub_823794B8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8237A240) {
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
	ctx.lr = 0x8237A248;
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,444(r1)
	REX_STORE_U32(ctx.r1.u32 + 444, ctx.r4.u32);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,256(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 256);
	// stw r5,452(r1)
	REX_STORE_U32(ctx.r1.u32 + 452, ctx.r5.u32);
	// bl 0x82340ff0
	ctx.lr = 0x8237A264;
	sub_82340FF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8237bbe0
	if (!ctx.cr6.eq) goto loc_8237BBE0;
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// li r10,4
	ctx.r10.s64 = 4;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// stw r10,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r8,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// stw r9,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stw r10,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// stw r9,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r10,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// addi r7,r7,18476
	ctx.r7.s64 = ctx.r7.s64 + 18476;
	// stw r9,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// addi r6,r6,18468
	ctx.r6.s64 = ctx.r6.s64 + 18468;
	// stw r8,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// addi r5,r5,18460
	ctx.r5.s64 = ctx.r5.s64 + 18460;
	// stw r7,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r7.u32);
	// addi r4,r4,18452
	ctx.r4.s64 = ctx.r4.s64 + 18452;
	// stw r6,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r6.u32);
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// stw r5,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r5.u32);
	// lis r29,-32256
	r29.s64 = -2113929216;
	// stw r4,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r4.u32);
	// lis r28,-32256
	r28.s64 = -2113929216;
	// lis r27,-32256
	r27.s64 = -2113929216;
	// lis r26,-32256
	r26.s64 = -2113929216;
	// lis r25,-32256
	r25.s64 = -2113929216;
	// lis r24,-32256
	r24.s64 = -2113929216;
	// lis r23,-32256
	r23.s64 = -2113929216;
	// lis r22,-32256
	r22.s64 = -2113929216;
	// addi r3,r3,18420
	ctx.r3.s64 = ctx.r3.s64 + 18420;
	// addi r11,r29,18412
	ctx.r11.s64 = r29.s64 + 18412;
	// addi r10,r28,18404
	ctx.r10.s64 = r28.s64 + 18404;
	// stw r3,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r3.u32);
	// addi r9,r27,18396
	ctx.r9.s64 = r27.s64 + 18396;
	// stw r11,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// addi r8,r26,18388
	ctx.r8.s64 = r26.s64 + 18388;
	// stw r10,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r10.u32);
	// lis r30,-32256
	r30.s64 = -2113929216;
	// stw r9,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r9.u32);
	// lis r21,-32256
	r21.s64 = -2113929216;
	// stw r8,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r8.u32);
	// lis r20,-32256
	r20.s64 = -2113929216;
	// lwz r3,88(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lis r19,-32256
	r19.s64 = -2113929216;
	// lis r18,-32243
	r18.s64 = -2113077248;
	// lis r17,-32256
	r17.s64 = -2113929216;
	// lis r16,-32256
	r16.s64 = -2113929216;
	// addi r7,r25,18380
	ctx.r7.s64 = r25.s64 + 18380;
	// addi r6,r24,18372
	ctx.r6.s64 = r24.s64 + 18372;
	// addi r5,r23,18364
	ctx.r5.s64 = r23.s64 + 18364;
	// stw r7,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r7.u32);
	// addi r4,r22,18356
	ctx.r4.s64 = r22.s64 + 18356;
	// stw r6,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r6.u32);
	// lis r15,-32256
	r15.s64 = -2113929216;
	// stw r5,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, ctx.r5.u32);
	// lis r14,-32256
	r14.s64 = -2113929216;
	// stw r4,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r4.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r30,r30,18348
	r30.s64 = r30.s64 + 18348;
	// addi r21,r21,18340
	r21.s64 = r21.s64 + 18340;
	// addi r20,r20,18332
	r20.s64 = r20.s64 + 18332;
	// addi r19,r19,18324
	r19.s64 = r19.s64 + 18324;
	// addi r18,r18,-17568
	r18.s64 = r18.s64 + -17568;
	// addi r17,r17,18200
	r17.s64 = r17.s64 + 18200;
	// addi r16,r16,18316
	r16.s64 = r16.s64 + 18316;
	// lwz r7,132(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// addi r6,r10,18276
	ctx.r6.s64 = ctx.r10.s64 + 18276;
	// addi r4,r3,18500
	ctx.r4.s64 = ctx.r3.s64 + 18500;
	// lwz r5,124(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// addi r10,r7,18492
	ctx.r10.s64 = ctx.r7.s64 + 18492;
	// lwz r3,108(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r7,128(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// addi r8,r8,18292
	ctx.r8.s64 = ctx.r8.s64 + 18292;
	// lwz r27,112(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// addi r5,r5,18508
	ctx.r5.s64 = ctx.r5.s64 + 18508;
	// lwz r26,116(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// addi r3,r3,18436
	ctx.r3.s64 = ctx.r3.s64 + 18436;
	// lwz r29,120(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// addi r7,r7,18428
	ctx.r7.s64 = ctx.r7.s64 + 18428;
	// addi r24,r27,18444
	r24.s64 = r27.s64 + 18444;
	// lwz r28,104(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// addi r22,r11,18268
	r22.s64 = ctx.r11.s64 + 18268;
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// addi r27,r26,18240
	r27.s64 = r26.s64 + 18240;
	// stw r4,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r4.u32);
	// addi r15,r15,18308
	r15.s64 = r15.s64 + 18308;
	// stw r10,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// addi r14,r14,18300
	r14.s64 = r14.s64 + 18300;
	// stw r5,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r5.u32);
	// addi r25,r29,18484
	r25.s64 = r29.s64 + 18484;
	// stw r3,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// addi r23,r9,18284
	r23.s64 = ctx.r9.s64 + 18284;
	// stw r7,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r7.u32);
	// li r26,2
	r26.s64 = 2;
	// stw r8,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// stw r6,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r6.u32);
loc_8237A42C:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// bl 0x82340e38
	ctx.lr = 0x8237A43C;
	sub_82340E38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8237bbe0
	if (!ctx.cr6.eq) goto loc_8237BBE0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82340718
	ctx.lr = 0x8237A45C;
	sub_82340718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8237bbe0
	if (!ctx.cr6.eq) goto loc_8237BBE0;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r8,r10,24,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r7,r9,8,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// or r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stw r6,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// bl 0x82331620
	ctx.lr = 0x8237A498;
	sub_82331620(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8237bb8c
	if (ctx.cr6.eq) goto loc_8237BB8C;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,116(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82331620
	ctx.lr = 0x8237A4B0;
	sub_82331620(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8237bb8c
	if (ctx.cr6.eq) goto loc_8237BB8C;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82331620
	ctx.lr = 0x8237A4C8;
	sub_82331620(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8237bb8c
	if (ctx.cr6.eq) goto loc_8237BB8C;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,112(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82331620
	ctx.lr = 0x8237A4E0;
	sub_82331620(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r5,4
	ctx.r5.s64 = 4;
	// bne cr6,0x8237a548
	if (!ctx.cr6.eq) goto loc_8237A548;
	// addi r29,r31,264
	r29.s64 = r31.s64 + 264;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82340718
	ctx.lr = 0x8237A504;
	sub_82340718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8237bbe0
	if (!ctx.cr6.eq) goto loc_8237BBE0;
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,151
	ctx.r6.s64 = 151;
	// mulli r4,r10,280
	ctx.r4.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(280));
	// lwz r11,1012(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1012);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x8237A530;
	sub_82330E40(ctx, base);
	// stw r3,272(r31)
	REX_STORE_U32(r31.u32 + 272, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8237bb8c
	if (!ctx.cr6.eq) goto loc_8237BB8C;
loc_8237A53C:
	// li r3,44
	ctx.r3.s64 = 44;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x826a1cd0
	return;
loc_8237A548:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,120(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// bl 0x82331620
	ctx.lr = 0x8237A554;
	sub_82331620(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r5,4
	ctx.r5.s64 = 4;
	// bne cr6,0x8237a604
	if (!ctx.cr6.eq) goto loc_8237A604;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r1,232
	ctx.r4.s64 = ctx.r1.s64 + 232;
	// bl 0x82340718
	ctx.lr = 0x8237A574;
	sub_82340718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8237bbe0
	if (!ctx.cr6.eq) goto loc_8237BBE0;
	// addi r29,r31,276
	r29.s64 = r31.s64 + 276;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82340718
	ctx.lr = 0x8237A598;
	sub_82340718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8237bbe0
	if (!ctx.cr6.eq) goto loc_8237BBE0;
	// lis r28,-32129
	r28.s64 = -2105606144;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mulli r4,r11,296
	ctx.r4.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(296));
	// lwz r11,1012(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 1012);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// li r6,178
	ctx.r6.s64 = 178;
	// bl 0x82330e40
	ctx.lr = 0x8237A5C4;
	sub_82330E40(ctx, base);
	// stw r3,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8237a53c
	if (ctx.cr6.eq) goto loc_8237A53C;
	// lwz r11,1012(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 1012);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,184
	ctx.r6.s64 = 184;
	// mulli r4,r10,296
	ctx.r4.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(296));
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x8237A5F0;
	sub_82330E40(ctx, base);
	// stw r3,284(r31)
	REX_STORE_U32(r31.u32 + 284, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8237a53c
	if (ctx.cr6.eq) goto loc_8237A53C;
	// lwz r28,104(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// b 0x8237bb8c
	goto loc_8237BB8C;
loc_8237A604:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,128(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82331620
	ctx.lr = 0x8237A610;
	sub_82331620(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8237a6c8
	if (!ctx.cr6.eq) goto loc_8237A6C8;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x82340718
	ctx.lr = 0x8237A630;
	sub_82340718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8237bbe0
	if (!ctx.cr6.eq) goto loc_8237BBE0;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8237a240
	ctx.lr = 0x8237A648;
	sub_8237A240(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8237bbe0
	if (!ctx.cr6.eq) goto loc_8237BBE0;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82331620
	ctx.lr = 0x8237A660;
	sub_82331620(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8237a678
	if (!ctx.cr6.eq) goto loc_8237A678;
	// lwz r11,280(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 280);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,280(r31)
	REX_STORE_U32(r31.u32 + 280, ctx.r11.u32);
	// b 0x8237bb8c
	goto loc_8237BB8C;
loc_8237A678:
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,108(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82331620
	ctx.lr = 0x8237A688;
	sub_82331620(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8237a6a0
	if (!ctx.cr6.eq) goto loc_8237A6A0;
	// lwz r11,268(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 268);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,268(r31)
	REX_STORE_U32(r31.u32 + 268, ctx.r11.u32);
	// b 0x8237bb8c
	goto loc_8237BB8C;
loc_8237A6A0:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82331620
	ctx.lr = 0x8237A6B0;
	sub_82331620(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8237bb8c
	if (!ctx.cr6.eq) goto loc_8237BB8C;
	// lwz r11,292(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 292);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,292(r31)
	REX_STORE_U32(r31.u32 + 292, ctx.r11.u32);
	// b 0x8237bb8c
	goto loc_8237BB8C;
loc_8237A6C8:
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82331620
	ctx.lr = 0x8237A6D8;
	sub_82331620(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8237a704
	if (!ctx.cr6.eq) goto loc_8237A704;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// bl 0x82340718
	ctx.lr = 0x8237A6F8;
	sub_82340718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8237bbe0
	if (!ctx.cr6.eq) goto loc_8237BBE0;
	// b 0x8237bb8c
	goto loc_8237BB8C;
loc_8237A704:
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,124(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82331620
	ctx.lr = 0x8237A714;
	sub_82331620(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8237a864
	if (!ctx.cr6.eq) goto loc_8237A864;
	// lwz r11,268(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 268);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r10,272(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 272);
	// li r6,12
	ctx.r6.s64 = 12;
	// mulli r11,r11,280
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(280));
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,256
	ctx.r4.s64 = ctx.r11.s64 + 256;
	// bl 0x82340718
	ctx.lr = 0x8237A744;
	sub_82340718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8237bbe0
	if (!ctx.cr6.eq) goto loc_8237BBE0;
	// lwz r11,268(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 268);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r10,272(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 272);
	// li r7,0
	ctx.r7.s64 = 0;
	// mulli r11,r11,280
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(280));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r6,250
	ctx.r6.s64 = 250;
	// addi r10,r11,256
	ctx.r10.s64 = ctx.r11.s64 + 256;
	// lwz r10,256(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 256);
	// lbz r9,256(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 256);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// rlwinm r4,r10,24,16,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF00;
	// rlwimi r8,r10,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r3,r8,8,0,15
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// or r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 | ctx.r4.u64;
	// or r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r9,256(r11)
	REX_STORE_U32(ctx.r11.u32 + 256, ctx.r9.u32);
	// lwz r10,272(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 272);
	// lwz r8,268(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 268);
	// mulli r11,r8,280
	ctx.r11.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(280));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,260
	ctx.r10.s64 = ctx.r11.s64 + 260;
	// lbz r4,260(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 260);
	// lwz r3,260(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 260);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// rlwimi r10,r3,16,0,15
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000) | (ctx.r10.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r9,r3,24,16,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFF00;
	// rlwinm r8,r10,8,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFF0000;
	// or r3,r8,r9
	ctx.r3.u64 = ctx.r8.u64 | ctx.r9.u64;
	// or r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 | ctx.r4.u64;
	// stw r10,260(r11)
	REX_STORE_U32(ctx.r11.u32 + 260, ctx.r10.u32);
	// lwz r10,272(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 272);
	// lwz r9,268(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 268);
	// mulli r11,r9,280
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(280));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,264
	ctx.r10.s64 = ctx.r11.s64 + 264;
	// lbz r8,264(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 264);
	// lwz r4,264(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 264);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// rlwimi r3,r4,16,0,15
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0xFFFF0000) | (ctx.r3.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r10,r4,24,16,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xFF00;
	// rlwinm r9,r3,8,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFF0000;
	// or r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 | ctx.r10.u64;
	// or r3,r4,r8
	ctx.r3.u64 = ctx.r4.u64 | ctx.r8.u64;
	// stw r3,264(r11)
	REX_STORE_U32(ctx.r11.u32 + 264, ctx.r3.u32);
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lwz r10,268(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 268);
	// mulli r10,r10,280
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(280));
	// lwz r11,1012(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1012);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,272(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 272);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r8,256(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 256);
	// mulli r4,r8,68
	ctx.r4.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(68));
	// bl 0x82330e40
	ctx.lr = 0x8237A828;
	sub_82330E40(ctx, base);
	// lwz r7,268(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 268);
	// lwz r10,272(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 272);
	// mulli r11,r7,280
	ctx.r11.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(280));
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r3,268(r6)
	REX_STORE_U32(ctx.r6.u32 + 268, ctx.r3.u32);
	// lwz r10,272(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 272);
	// lwz r5,268(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 268);
	// mulli r11,r5,280
	ctx.r11.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(280));
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,268(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 268);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8237a53c
	if (ctx.cr6.eq) goto loc_8237A53C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,292(r31)
	REX_STORE_U32(r31.u32 + 292, ctx.r11.u32);
	// b 0x8237bb8c
	goto loc_8237BB8C;
loc_8237A864:
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,132(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82331620
	ctx.lr = 0x8237A874;
	sub_82331620(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8237aa04
	if (!ctx.cr6.eq) goto loc_8237AA04;
	// lwz r11,268(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 268);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r10,272(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 272);
	// li r6,12
	ctx.r6.s64 = 12;
	// mulli r11,r11,280
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(280));
	// lwz r9,292(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 292);
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r10,r9,68
	ctx.r10.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(68));
	// lwz r11,268(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 268);
	// li r5,1
	ctx.r5.s64 = 1;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82340718
	ctx.lr = 0x8237A8B0;
	sub_82340718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8237bbe0
	if (!ctx.cr6.eq) goto loc_8237BBE0;
	// lwz r11,268(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 268);
	// lwz r10,272(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 272);
	// mulli r11,r11,280
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(280));
	// lwz r9,292(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 292);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r10,r9,68
	ctx.r10.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(68));
	// lwz r11,268(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 268);
	// lhzx r7,r11,r10
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// lbzx r6,r11,r10
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// rotlwi r5,r7,8
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// or r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 | ctx.r6.u64;
	// sthx r4,r11,r10
	REX_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r4.u16);
	// lwz r9,272(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 272);
	// lwz r8,292(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 292);
	// lwz r11,268(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 268);
	// mulli r11,r11,280
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(280));
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mulli r10,r8,68
	ctx.r10.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(68));
	// lwz r11,268(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 268);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r7,2(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// lhz r6,2(r11)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// rotlwi r5,r6,8
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r6.u32, 8);
	// or r4,r5,r7
	ctx.r4.u64 = ctx.r5.u64 | ctx.r7.u64;
	// sth r4,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r4.u16);
	// lwz r9,272(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 272);
	// lwz r10,292(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 292);
	// lwz r8,268(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 268);
	// mulli r11,r8,280
	ctx.r11.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(280));
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mulli r10,r10,68
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(68));
	// lwz r11,268(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 268);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lhz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// rotlwi r4,r5,8
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 8);
	// or r3,r4,r6
	ctx.r3.u64 = ctx.r4.u64 | ctx.r6.u64;
	// sth r3,4(r11)
	REX_STORE_U16(ctx.r11.u32 + 4, ctx.r3.u16);
	// lwz r10,272(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 272);
	// lwz r9,292(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 292);
	// lwz r8,268(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 268);
	// mulli r11,r8,280
	ctx.r11.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(280));
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r10,r9,68
	ctx.r10.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(68));
	// lwz r11,268(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 268);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r6,6(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// addi r10,r11,6
	ctx.r10.s64 = ctx.r11.s64 + 6;
	// lhz r5,6(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// rotlwi r4,r5,8
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 8);
	// or r3,r4,r6
	ctx.r3.u64 = ctx.r4.u64 | ctx.r6.u64;
	// sth r3,6(r11)
	REX_STORE_U16(ctx.r11.u32 + 6, ctx.r3.u16);
	// lwz r9,272(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 272);
	// lwz r8,292(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 292);
	// lwz r7,268(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 268);
	// mulli r11,r7,280
	ctx.r11.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(280));
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mulli r10,r8,68
	ctx.r10.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(68));
	// lwz r11,268(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 268);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r5,8(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// lhz r4,8(r11)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + 8);
	// rotlwi r3,r4,8
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r4.u32, 8);
	// or r10,r3,r5
	ctx.r10.u64 = ctx.r3.u64 | ctx.r5.u64;
	// sth r10,8(r11)
	REX_STORE_U16(ctx.r11.u32 + 8, ctx.r10.u16);
	// lwz r9,272(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 272);
	// lwz r7,292(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 292);
	// lwz r8,268(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 268);
	// mulli r11,r8,280
	ctx.r11.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(280));
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mulli r10,r7,68
	ctx.r10.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(68));
	// lwz r11,268(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 268);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r4,10(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 10);
	// addi r10,r11,10
	ctx.r10.s64 = ctx.r11.s64 + 10;
	// lhz r5,10(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 10);
	// rotlwi r3,r5,8
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r5.u32, 8);
	// or r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 | ctx.r4.u64;
	// sth r10,10(r11)
	REX_STORE_U16(ctx.r11.u32 + 10, ctx.r10.u16);
	// b 0x8237bb8c
	goto loc_8237BB8C;
loc_8237AA04:
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82331620
	ctx.lr = 0x8237AA14;
	sub_82331620(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8237afa4
	if (!ctx.cr6.eq) goto loc_8237AFA4;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r29,36
	r29.s64 = 36;
	// cmplwi cr6,r11,36
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 36, ctx.xer);
	// bge cr6,0x8237aa30
	if (!ctx.cr6.lt) goto loc_8237AA30;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
loc_8237AA30:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r3,444(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 444);
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x82331620
	ctx.lr = 0x8237AA40;
	sub_82331620(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8237acc4
	if (!ctx.cr6.eq) goto loc_8237ACC4;
	// lwz r11,280(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 280);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r10,284(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 284);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mulli r11,r11,296
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(296));
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,260
	ctx.r4.s64 = ctx.r11.s64 + 260;
	// bl 0x82340718
	ctx.lr = 0x8237AA70;
	sub_82340718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8237bbe0
	if (!ctx.cr6.eq) goto loc_8237BBE0;
	// lwz r11,280(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 280);
	// lwz r10,284(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 284);
	// mulli r11,r11,296
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(296));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,260
	ctx.r10.s64 = ctx.r11.s64 + 260;
	// lwz r10,260(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 260);
	// lbz r9,260(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 260);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// rlwinm r7,r10,24,16,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF00;
	// rlwimi r8,r10,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r6,r8,8,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// or r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 | ctx.r7.u64;
	// or r4,r5,r9
	ctx.r4.u64 = ctx.r5.u64 | ctx.r9.u64;
	// stw r4,260(r11)
	REX_STORE_U32(ctx.r11.u32 + 260, ctx.r4.u32);
	// lwz r10,284(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 284);
	// lwz r3,280(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 280);
	// mulli r11,r3,296
	ctx.r11.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(296));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,264
	ctx.r10.s64 = ctx.r11.s64 + 264;
	// lbz r10,264(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 264);
	// lhz r9,264(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 264);
	// rotlwi r8,r9,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// or r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 | ctx.r10.u64;
	// sth r7,264(r11)
	REX_STORE_U16(ctx.r11.u32 + 264, ctx.r7.u16);
	// lwz r5,280(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 280);
	// mulli r11,r5,296
	ctx.r11.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(296));
	// lwz r10,284(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 284);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r4,266(r11)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + 266);
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// addi r10,r11,266
	ctx.r10.s64 = ctx.r11.s64 + 266;
	// rlwinm r10,r3,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r9,r4,24,8,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xFFFFFF;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// or r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 | ctx.r9.u64;
	// sth r7,266(r11)
	REX_STORE_U16(ctx.r11.u32 + 266, ctx.r7.u16);
	// lwz r10,284(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 284);
	// lwz r6,280(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 280);
	// mulli r11,r6,296
	ctx.r11.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(296));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,268
	ctx.r10.s64 = ctx.r11.s64 + 268;
	// lbz r5,268(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 268);
	// lwz r4,268(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 268);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// rlwimi r3,r4,16,0,15
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0xFFFF0000) | (ctx.r3.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r10,r4,24,16,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xFF00;
	// rlwinm r8,r3,8,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFF0000;
	// or r9,r10,r5
	ctx.r9.u64 = ctx.r10.u64 | ctx.r5.u64;
	// or r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stw r7,268(r11)
	REX_STORE_U32(ctx.r11.u32 + 268, ctx.r7.u32);
	// lwz r6,280(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 280);
	// mulli r11,r6,296
	ctx.r11.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(296));
	// lwz r10,284(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 284);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r5,272(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 272);
	// addi r10,r11,272
	ctx.r10.s64 = ctx.r11.s64 + 272;
	// lwz r4,272(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 272);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// rlwimi r3,r4,16,0,15
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0xFFFF0000) | (ctx.r3.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r10,r4,24,16,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xFF00;
	// rlwinm r9,r3,8,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFF0000;
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// or r7,r8,r5
	ctx.r7.u64 = ctx.r8.u64 | ctx.r5.u64;
	// stw r7,272(r11)
	REX_STORE_U32(ctx.r11.u32 + 272, ctx.r7.u32);
	// lwz r10,284(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 284);
	// lwz r6,280(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 280);
	// mulli r11,r6,296
	ctx.r11.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(296));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r5,276(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 276);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8237bb8c
	if (ctx.cr6.eq) goto loc_8237BB8C;
	// lwz r10,280(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 280);
	// lbz r9,280(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 280);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// rlwinm r7,r10,24,16,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF00;
	// rlwimi r8,r10,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r6,r8,8,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// or r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 | ctx.r7.u64;
	// or r4,r5,r9
	ctx.r4.u64 = ctx.r5.u64 | ctx.r9.u64;
	// stw r4,280(r11)
	REX_STORE_U32(ctx.r11.u32 + 280, ctx.r4.u32);
	// lwz r10,284(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 284);
	// lwz r3,280(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 280);
	// mulli r11,r3,296
	ctx.r11.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(296));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,284
	ctx.r10.s64 = ctx.r11.s64 + 284;
	// lbz r9,284(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 284);
	// lwz r10,284(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 284);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// rlwimi r8,r10,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r7,r10,24,16,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF00;
	// rlwinm r6,r8,8,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// or r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 | ctx.r7.u64;
	// or r4,r5,r9
	ctx.r4.u64 = ctx.r5.u64 | ctx.r9.u64;
	// stw r4,284(r11)
	REX_STORE_U32(ctx.r11.u32 + 284, ctx.r4.u32);
	// lwz r10,284(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 284);
	// lwz r3,280(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 280);
	// mulli r11,r3,296
	ctx.r11.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(296));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,288
	ctx.r10.s64 = ctx.r11.s64 + 288;
	// lwz r10,288(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 288);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// rlwimi r8,r10,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// lbz r9,288(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 288);
	// rlwinm r7,r10,24,16,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF00;
	// rlwinm r6,r8,8,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// or r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 | ctx.r7.u64;
	// or r4,r5,r9
	ctx.r4.u64 = ctx.r5.u64 | ctx.r9.u64;
	// stw r4,288(r11)
	REX_STORE_U32(ctx.r11.u32 + 288, ctx.r4.u32);
	// lwz r10,284(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 284);
	// lwz r3,280(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 280);
	// mulli r11,r3,296
	ctx.r11.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(296));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r9,292(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 292);
	// addi r10,r11,292
	ctx.r10.s64 = ctx.r11.s64 + 292;
	// lwz r8,292(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 292);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// rlwimi r7,r8,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r6,r8,24,16,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF00;
	// rlwinm r5,r7,8,0,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// or r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 | ctx.r6.u64;
	// or r3,r4,r9
	ctx.r3.u64 = ctx.r4.u64 | ctx.r9.u64;
	// stw r3,292(r11)
	REX_STORE_U32(ctx.r11.u32 + 292, ctx.r3.u32);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r11,280(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 280);
	// mulli r11,r11,296
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(296));
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r26,288(r10)
	REX_STORE_U32(ctx.r10.u32 + 288, r26.u32);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r8,280(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 280);
	// mulli r11,r8,296
	ctx.r11.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(296));
	// lwz r9,284(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 284);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r5,288(r7)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 288);
	// stw r5,280(r6)
	REX_STORE_U32(ctx.r6.u32 + 280, ctx.r5.u32);
	// lwz r11,284(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 284);
	// lwz r9,32(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r4,280(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 280);
	// mulli r10,r4,296
	ctx.r10.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(296));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r10,292(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r11,288(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 288);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,284(r3)
	REX_STORE_U32(ctx.r3.u32 + 284, ctx.r11.u32);
	// b 0x8237bb8c
	goto loc_8237BB8C;
loc_8237ACC4:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r3,444(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 444);
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x82331620
	ctx.lr = 0x8237ACD4;
	sub_82331620(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8237bb8c
	if (!ctx.cr6.eq) goto loc_8237BB8C;
	// lwz r11,268(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 268);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r10,272(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 272);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mulli r11,r11,280
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(280));
	// lwz r9,292(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 292);
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r10,r9,68
	ctx.r10.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(68));
	// lwz r11,268(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 268);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// bl 0x82340718
	ctx.lr = 0x8237AD14;
	sub_82340718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8237bbe0
	if (!ctx.cr6.eq) goto loc_8237BBE0;
	// lwz r11,268(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 268);
	// lwz r10,272(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 272);
	// mulli r11,r11,280
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(280));
	// lwz r9,292(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 292);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r10,r9,68
	ctx.r10.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(68));
	// lwz r11,268(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 268);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// lwz r7,12(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lbz r6,12(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 12);
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// rlwinm r4,r7,24,16,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFF00;
	// rlwimi r5,r7,16,0,15
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF0000) | (ctx.r5.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r3,r5,8,0,15
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFF0000;
	// or r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 | ctx.r4.u64;
	// or r9,r10,r6
	ctx.r9.u64 = ctx.r10.u64 | ctx.r6.u64;
	// stw r9,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// lwz r10,272(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 272);
	// lwz r6,292(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 292);
	// lwz r8,268(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 268);
	// mulli r11,r8,280
	ctx.r11.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(280));
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r10,r6,68
	ctx.r10.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(68));
	// lwz r11,268(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 268);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r4,16(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 16);
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// lhz r5,16(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 16);
	// rotlwi r3,r5,8
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r5.u32, 8);
	// or r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 | ctx.r4.u64;
	// sth r10,16(r11)
	REX_STORE_U16(ctx.r11.u32 + 16, ctx.r10.u16);
	// lwz r9,272(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 272);
	// lwz r7,292(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 292);
	// mulli r10,r7,68
	ctx.r10.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(68));
	// lwz r8,268(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 268);
	// mulli r11,r8,280
	ctx.r11.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(280));
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r11,268(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 268);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r5,18(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 18);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// rlwinm r3,r4,8,0,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r9,r5,24,8,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFFFFFF;
	// extsh r8,r3
	ctx.r8.s64 = ctx.r3.s16;
	// addi r10,r11,18
	ctx.r10.s64 = ctx.r11.s64 + 18;
	// or r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 | ctx.r9.u64;
	// sth r7,18(r11)
	REX_STORE_U16(ctx.r11.u32 + 18, ctx.r7.u16);
	// lwz r9,272(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 272);
	// lwz r6,292(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 292);
	// lwz r5,268(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 268);
	// mulli r11,r5,280
	ctx.r11.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(280));
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mulli r10,r6,68
	ctx.r10.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(68));
	// lwz r11,268(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 268);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r3,20(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 20);
	// addi r10,r11,20
	ctx.r10.s64 = ctx.r11.s64 + 20;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// rlwimi r9,r10,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r8,r10,24,16,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF00;
	// rlwinm r6,r9,8,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r7,r8,r3
	ctx.r7.u64 = ctx.r8.u64 | ctx.r3.u64;
	// or r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 | ctx.r7.u64;
	// stw r5,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r5.u32);
	// lwz r9,272(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 272);
	// lwz r4,292(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 292);
	// lwz r3,268(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 268);
	// mulli r11,r3,280
	ctx.r11.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(280));
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mulli r10,r4,68
	ctx.r10.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(68));
	// lwz r11,268(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 268);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r9,24(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// addi r10,r11,24
	ctx.r10.s64 = ctx.r11.s64 + 24;
	// lbz r8,24(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 24);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// rlwinm r6,r9,24,16,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF00;
	// rlwimi r7,r9,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r5,r7,8,0,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// or r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 | ctx.r6.u64;
	// or r3,r4,r8
	ctx.r3.u64 = ctx.r4.u64 | ctx.r8.u64;
	// stw r3,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r3.u32);
	// lwz r10,292(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 292);
	// lwz r9,268(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 268);
	// mulli r11,r9,280
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(280));
	// lwz r9,272(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 272);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mulli r10,r10,68
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(68));
	// lwz r9,268(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 268);
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r7,28(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 28);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8237bb8c
	if (ctx.cr6.eq) goto loc_8237BB8C;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r11,32
	ctx.r10.s64 = ctx.r11.s64 + 32;
	// lwz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// lbz r9,32(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 32);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// rlwinm r7,r10,24,16,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF00;
	// rlwimi r8,r10,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r6,r8,8,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// or r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 | ctx.r7.u64;
	// or r4,r5,r9
	ctx.r4.u64 = ctx.r5.u64 | ctx.r9.u64;
	// stw r4,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r4.u32);
	// lwz r10,292(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 292);
	// mulli r10,r10,68
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(68));
	// lwz r3,268(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 268);
	// lwz r9,272(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 272);
	// mulli r11,r3,280
	ctx.r11.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(280));
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r11,268(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 268);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,36
	ctx.r10.s64 = ctx.r11.s64 + 36;
	// lbz r6,36(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 36);
	// lwz r8,36(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// rlwimi r7,r8,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r5,r8,24,16,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF00;
	// rlwinm r4,r7,8,0,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// or r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 | ctx.r5.u64;
	// or r10,r3,r6
	ctx.r10.u64 = ctx.r3.u64 | ctx.r6.u64;
	// stw r10,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// lwz r8,292(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 292);
	// lwz r9,268(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 268);
	// mulli r11,r9,280
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(280));
	// lwz r10,272(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 272);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,268(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 268);
	// mulli r10,r8,68
	ctx.r10.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(68));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,40
	ctx.r10.s64 = ctx.r11.s64 + 40;
	// lbz r5,40(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 40);
	// lwz r6,40(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// rlwimi r4,r6,16,0,15
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xFFFF0000) | (ctx.r4.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r3,r6,24,16,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0xFF00;
	// rlwinm r10,r4,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFF0000;
	// or r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 | ctx.r3.u64;
	// or r8,r9,r5
	ctx.r8.u64 = ctx.r9.u64 | ctx.r5.u64;
	// stw r8,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r8.u32);
	// lwz r10,272(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 272);
	// lwz r5,292(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 292);
	// lwz r7,268(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 268);
	// mulli r11,r7,280
	ctx.r11.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(280));
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r10,r5,68
	ctx.r10.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(68));
	// lwz r11,268(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 268);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r4,44(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// rlwimi r3,r4,16,0,15
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0xFFFF0000) | (ctx.r3.u64 & 0xFFFFFFFF0000FFFF);
	// lbz r9,44(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 44);
	// rlwinm r8,r4,24,16,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xFF00;
	// rlwinm r7,r3,8,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFF0000;
	// addi r10,r11,44
	ctx.r10.s64 = ctx.r11.s64 + 44;
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// or r5,r6,r9
	ctx.r5.u64 = ctx.r6.u64 | ctx.r9.u64;
	// stw r5,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r5.u32);
	// b 0x8237bb8c
	goto loc_8237BB8C;
loc_8237AFA4:
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82331620
	ctx.lr = 0x8237AFB4;
	sub_82331620(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8237b100
	if (!ctx.cr6.eq) goto loc_8237B100;
	// lwz r11,268(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 268);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r10,272(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 272);
	// li r6,12
	ctx.r6.s64 = 12;
	// mulli r11,r11,280
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(280));
	// lwz r9,292(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 292);
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r10,r9,68
	ctx.r10.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(68));
	// lwz r11,268(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 268);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,48
	ctx.r4.s64 = ctx.r11.s64 + 48;
	// bl 0x82340718
	ctx.lr = 0x8237AFF4;
	sub_82340718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8237bbe0
	if (!ctx.cr6.eq) goto loc_8237BBE0;
	// lwz r11,268(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 268);
	// lwz r10,272(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 272);
	// mulli r11,r11,280
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(280));
	// lwz r9,292(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 292);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r10,r9,68
	ctx.r10.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(68));
	// lwz r11,268(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 268);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,48
	ctx.r10.s64 = ctx.r11.s64 + 48;
	// lhz r7,48(r11)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 48);
	// lbz r6,48(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 48);
	// rotlwi r5,r7,8
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// or r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 | ctx.r6.u64;
	// sth r4,48(r11)
	REX_STORE_U16(ctx.r11.u32 + 48, ctx.r4.u16);
	// lwz r9,272(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 272);
	// lwz r10,292(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 292);
	// lwz r8,268(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 268);
	// mulli r11,r8,280
	ctx.r11.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(280));
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mulli r10,r10,68
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(68));
	// lwz r11,268(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 268);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,50
	ctx.r10.s64 = ctx.r11.s64 + 50;
	// lhz r5,50(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 50);
	// rotlwi r4,r5,8
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 8);
	// lbz r6,50(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 50);
	// or r3,r4,r6
	ctx.r3.u64 = ctx.r4.u64 | ctx.r6.u64;
	// sth r3,50(r11)
	REX_STORE_U16(ctx.r11.u32 + 50, ctx.r3.u16);
	// lwz r7,292(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 292);
	// lwz r10,272(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 272);
	// lwz r9,268(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 268);
	// mulli r11,r9,280
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(280));
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r10,r7,68
	ctx.r10.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(68));
	// lwz r11,268(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 268);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r6,52(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 52);
	// addi r10,r11,52
	ctx.r10.s64 = ctx.r11.s64 + 52;
	// lwz r5,52(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// rlwimi r4,r5,16,0,15
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFFFF0000) | (ctx.r4.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r3,r5,24,16,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFF00;
	// rlwinm r10,r4,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFF0000;
	// or r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 | ctx.r3.u64;
	// or r8,r9,r6
	ctx.r8.u64 = ctx.r9.u64 | ctx.r6.u64;
	// stw r8,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r8.u32);
	// lwz r10,272(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 272);
	// lwz r7,292(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 292);
	// lwz r6,268(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 268);
	// mulli r11,r6,280
	ctx.r11.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(280));
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r10,r7,68
	ctx.r10.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(68));
	// lwz r11,268(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 268);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r4,56(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 56);
	// addi r10,r11,56
	ctx.r10.s64 = ctx.r11.s64 + 56;
	// lwz r3,56(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// rlwimi r10,r3,16,0,15
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000) | (ctx.r10.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r9,r3,24,16,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFF00;
	// rlwinm r8,r10,8,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFF0000;
	// or r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 | ctx.r9.u64;
	// or r6,r7,r4
	ctx.r6.u64 = ctx.r7.u64 | ctx.r4.u64;
	// stw r6,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r6.u32);
	// b 0x8237bb8c
	goto loc_8237BB8C;
loc_8237B100:
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82331620
	ctx.lr = 0x8237B110;
	sub_82331620(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8237b59c
	if (!ctx.cr6.eq) goto loc_8237B59C;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82340718
	ctx.lr = 0x8237B130;
	sub_82340718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8237bbe0
	if (!ctx.cr6.eq) goto loc_8237BBE0;
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// rlwimi r9,r11,16,16,31
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r8,r11,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwimi r7,r10,16,16,31
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r6,r10,16,0,15
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000) | (ctx.r6.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r5,r9,24,16,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFF;
	// rlwinm r4,r8,8,0,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// rlwinm r3,r7,24,16,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFFFF;
	// rlwinm r11,r6,8,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFF0000;
	// or r9,r5,r4
	ctx.r9.u64 = ctx.r5.u64 | ctx.r4.u64;
	// or r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 | ctx.r11.u64;
	// stw r9,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// cmplwi cr6,r9,8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 8, ctx.xer);
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// ble cr6,0x8237b19c
	if (!ctx.cr6.gt) goto loc_8237B19C;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// addi r4,r9,-8
	ctx.r4.s64 = ctx.r9.s64 + -8;
	// bl 0x82340e38
	ctx.lr = 0x8237B198;
	sub_82340E38(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
loc_8237B19C:
	// lwz r10,268(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 268);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r9,272(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 272);
	// mulli r10,r10,280
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(280));
	// lwz r8,292(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 292);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lis r10,-32129
	ctx.r10.s64 = -2105606144;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r6,256(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 256);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r10,1012(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 1012);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// lwz r3,4(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// bge cr6,0x8237b3fc
	if (!ctx.cr6.lt) goto loc_8237B3FC;
	// li r6,380
	ctx.r6.s64 = 380;
	// bl 0x82330e40
	ctx.lr = 0x8237B1E4;
	sub_82330E40(ctx, base);
	// lwz r9,268(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 268);
	// lwz r10,272(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 272);
	// mulli r11,r9,280
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(280));
	// lwz r8,292(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 292);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r10,r8,68
	ctx.r10.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(68));
	// lwz r11,268(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 268);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r3,64(r6)
	REX_STORE_U32(ctx.r6.u32 + 64, ctx.r3.u32);
	// lwz r10,272(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 272);
	// lwz r5,292(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 292);
	// lwz r4,268(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 268);
	// mulli r11,r4,280
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(280));
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r10,r5,68
	ctx.r10.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(68));
	// lwz r11,268(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 268);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8237a53c
	if (ctx.cr6.eq) goto loc_8237A53C;
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r10,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
	// lwz r9,292(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 292);
	// lwz r8,268(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 268);
	// mulli r11,r8,280
	ctx.r11.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(280));
	// lwz r10,272(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 272);
	// mulli r8,r9,68
	ctx.r8.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(68));
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,268(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 268);
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r4,64(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 64);
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82340718
	ctx.lr = 0x8237B280;
	sub_82340718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8237bbe0
	if (!ctx.cr6.eq) goto loc_8237BBE0;
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8237bb8c
	if (ctx.cr6.eq) goto loc_8237BB8C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8237B29C:
	// lwz r10,268(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 268);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r8,272(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 272);
	// mulli r10,r10,280
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(280));
	// lwz r7,292(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 292);
	// add r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 + ctx.r8.u64;
	// mulli r8,r7,68
	ctx.r8.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(68));
	// lwz r10,268(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 268);
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r10,64(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 64);
	// lhzx r4,r10,r11
	ctx.r4.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// lbzx r3,r10,r11
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// rotlwi r8,r4,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r4.u32, 8);
	// or r7,r8,r3
	ctx.r7.u64 = ctx.r8.u64 | ctx.r3.u64;
	// sthx r7,r10,r11
	REX_STORE_U16(ctx.r10.u32 + ctx.r11.u32, ctx.r7.u16);
	// lwz r5,268(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 268);
	// mulli r10,r5,280
	ctx.r10.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(280));
	// lwz r8,272(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 272);
	// lwz r4,292(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 292);
	// add r3,r10,r8
	ctx.r3.u64 = ctx.r10.u64 + ctx.r8.u64;
	// mulli r8,r4,68
	ctx.r8.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(68));
	// lwz r10,268(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 268);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r10,64(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 64);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r8,r10,2
	ctx.r8.s64 = ctx.r10.s64 + 2;
	// lhz r8,2(r10)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// lbz r6,2(r10)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// rotlwi r7,r8,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// or r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 | ctx.r6.u64;
	// sth r5,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r5.u16);
	// lwz r3,292(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 292);
	// lwz r8,272(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 272);
	// lwz r10,268(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 268);
	// mulli r10,r10,280
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(280));
	// add r7,r10,r8
	ctx.r7.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r10,268(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 268);
	// mulli r8,r3,68
	ctx.r8.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(68));
	// add r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r10,64(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 64);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r4,4(r10)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r10.u32 + 4);
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// lbz r5,4(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// rotlwi r3,r4,8
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r4.u32, 8);
	// or r8,r3,r5
	ctx.r8.u64 = ctx.r3.u64 | ctx.r5.u64;
	// sth r8,4(r10)
	REX_STORE_U16(ctx.r10.u32 + 4, ctx.r8.u16);
	// lwz r6,268(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 268);
	// mulli r10,r6,280
	ctx.r10.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(280));
	// lwz r8,272(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 272);
	// add r4,r10,r8
	ctx.r4.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r5,292(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 292);
	// lwz r10,268(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 268);
	// mulli r8,r5,68
	ctx.r8.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(68));
	// add r3,r10,r8
	ctx.r3.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r10,64(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r7,6(r10)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + 6);
	// rotlwi r5,r7,8
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// lbz r6,6(r10)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 6);
	// addi r8,r10,6
	ctx.r8.s64 = ctx.r10.s64 + 6;
	// or r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 | ctx.r6.u64;
	// sth r4,6(r10)
	REX_STORE_U16(ctx.r10.u32 + 6, ctx.r4.u16);
	// lwz r8,272(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 272);
	// lwz r7,292(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 292);
	// lwz r6,268(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 268);
	// mulli r10,r6,280
	ctx.r10.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(280));
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// mulli r8,r7,68
	ctx.r8.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(68));
	// lwz r10,268(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 268);
	// add r4,r10,r8
	ctx.r4.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r10,64(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 64);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r8,r10,8
	ctx.r8.s64 = ctx.r10.s64 + 8;
	// lbz r8,8(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 8);
	// lwz r3,8(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// rlwinm r6,r3,24,16,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFF00;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// rlwimi r7,r3,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// or r5,r6,r8
	ctx.r5.u64 = ctx.r6.u64 | ctx.r8.u64;
	// rlwinm r4,r7,8,0,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// or r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 | ctx.r5.u64;
	// stw r3,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r3.u32);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8237b29c
	if (ctx.cr6.lt) goto loc_8237B29C;
	// b 0x8237bb8c
	goto loc_8237BB8C;
loc_8237B3FC:
	// li r6,411
	ctx.r6.s64 = 411;
	// bl 0x82330e40
	ctx.lr = 0x8237B404;
	sub_82330E40(ctx, base);
	// lwz r9,268(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 268);
	// lwz r10,272(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 272);
	// mulli r11,r9,280
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(280));
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r3,276(r8)
	REX_STORE_U32(ctx.r8.u32 + 276, ctx.r3.u32);
	// lwz r10,272(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 272);
	// lwz r7,268(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 268);
	// mulli r11,r7,280
	ctx.r11.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(280));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r6,276(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 276);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8237a53c
	if (ctx.cr6.eq) goto loc_8237A53C;
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r10,272(r11)
	REX_STORE_U32(ctx.r11.u32 + 272, ctx.r10.u32);
	// lwz r9,268(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 268);
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r8,272(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 272);
	// mulli r9,r9,280
	ctx.r9.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(280));
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,276(r8)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + 276);
	// bl 0x82340718
	ctx.lr = 0x8237B470;
	sub_82340718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8237bbe0
	if (!ctx.cr6.eq) goto loc_8237BBE0;
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8237bb8c
	if (ctx.cr6.eq) goto loc_8237BB8C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8237B48C:
	// lwz r10,268(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 268);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r8,272(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 272);
	// mulli r10,r10,280
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(280));
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r10,276(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 276);
	// lhzx r7,r10,r11
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// lbzx r6,r10,r11
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// rotlwi r5,r7,8
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// or r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 | ctx.r6.u64;
	// sthx r4,r10,r11
	REX_STORE_U16(ctx.r10.u32 + ctx.r11.u32, ctx.r4.u16);
	// lwz r10,268(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 268);
	// lwz r8,272(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 272);
	// mulli r10,r10,280
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(280));
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r10,276(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 276);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r8,r10,2
	ctx.r8.s64 = ctx.r10.s64 + 2;
	// lbz r6,2(r10)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// lhz r7,2(r10)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// rotlwi r5,r7,8
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// or r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 | ctx.r6.u64;
	// sth r4,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r4.u16);
	// lwz r8,272(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 272);
	// lwz r10,268(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 268);
	// mulli r10,r10,280
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(280));
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r10,276(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 276);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r7,4(r10)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + 4);
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// lbz r6,4(r10)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// rotlwi r5,r7,8
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// or r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 | ctx.r6.u64;
	// sth r4,4(r10)
	REX_STORE_U16(ctx.r10.u32 + 4, ctx.r4.u16);
	// lwz r10,268(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 268);
	// mulli r10,r10,280
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(280));
	// lwz r8,272(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 272);
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r10,276(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 276);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r6,6(r10)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 6);
	// addi r8,r10,6
	ctx.r8.s64 = ctx.r10.s64 + 6;
	// lhz r7,6(r10)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + 6);
	// rotlwi r5,r7,8
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// or r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 | ctx.r6.u64;
	// sth r4,6(r10)
	REX_STORE_U16(ctx.r10.u32 + 6, ctx.r4.u16);
	// lwz r10,268(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 268);
	// mulli r10,r10,280
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(280));
	// lwz r8,272(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 272);
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r10,276(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 276);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r6,8(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// addi r8,r10,8
	ctx.r8.s64 = ctx.r10.s64 + 8;
	// lbz r7,8(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 8);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// rlwinm r4,r6,24,16,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0xFF00;
	// rlwimi r5,r6,16,0,15
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xFFFF0000) | (ctx.r5.u64 & 0xFFFFFFFF0000FFFF);
	// or r3,r4,r7
	ctx.r3.u64 = ctx.r4.u64 | ctx.r7.u64;
	// rlwinm r8,r5,8,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFF0000;
	// or r7,r8,r3
	ctx.r7.u64 = ctx.r8.u64 | ctx.r3.u64;
	// stw r7,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// lwz r6,100(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x8237b48c
	if (ctx.cr6.lt) goto loc_8237B48C;
	// b 0x8237bb8c
	goto loc_8237BB8C;
loc_8237B59C:
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82331620
	ctx.lr = 0x8237B5AC;
	sub_82331620(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8237b780
	if (!ctx.cr6.eq) goto loc_8237B780;
	// lwz r29,84(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r29,40
	ctx.cr6.compare<uint32_t>(r29.u32, 40, ctx.xer);
	// ble cr6,0x8237b5c4
	if (!ctx.cr6.gt) goto loc_8237B5C4;
	// li r29,40
	r29.s64 = 40;
loc_8237B5C4:
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x823ef5f0
	ctx.lr = 0x8237B5D4;
	sub_823EF5F0(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// bl 0x82340718
	ctx.lr = 0x8237B5EC;
	sub_82340718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8237bbe0
	if (!ctx.cr6.eq) goto loc_8237BBE0;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,40
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 40, ctx.xer);
	// ble cr6,0x8237b618
	if (!ctx.cr6.gt) goto loc_8237B618;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// addi r4,r11,-40
	ctx.r4.s64 = ctx.r11.s64 + -40;
	// bl 0x82340e38
	ctx.lr = 0x8237B610;
	sub_82340E38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8237bbe0
	if (!ctx.cr6.eq) goto loc_8237BBE0;
loc_8237B618:
	// lwz r11,196(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// lhz r10,206(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 206);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// lhz r7,204(r1)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r1.u32 + 204);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lhz r8,194(r1)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r1.u32 + 194);
	// rlwimi r6,r11,16,16,31
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFF0000);
	// lhz r9,192(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 192);
	// rlwimi r5,r11,16,0,15
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (ctx.r5.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r4,r10,8,16,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF00;
	// rlwinm r3,r10,24,8,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r11,r7,8,16,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFF00;
	// rlwinm r10,r7,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r5,r5,8,0,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFF0000;
	// rlwinm r6,r6,24,16,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0xFFFF;
	// or r7,r4,r3
	ctx.r7.u64 = ctx.r4.u64 | ctx.r3.u64;
	// rlwinm r4,r8,8,16,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFF00;
	// rlwinm r3,r8,24,8,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFFFF;
	// or r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 | ctx.r5.u64;
	// or r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwinm r8,r9,8,16,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFF00;
	// stw r6,196(r1)
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r6.u32);
	// rlwinm r9,r9,24,8,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFFFF;
	// sth r5,204(r1)
	REX_STORE_U16(ctx.r1.u32 + 204, ctx.r5.u16);
	// clrlwi r11,r7,16
	ctx.r11.u64 = ctx.r7.u32 & 0xFFFF;
	// or r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 | ctx.r3.u64;
	// or r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 | ctx.r9.u64;
	// sth r4,194(r1)
	REX_STORE_U16(ctx.r1.u32 + 194, ctx.r4.u16);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bgt cr6,0x8237b6e8
	if (ctx.cr6.gt) goto loc_8237B6E8;
	// beq cr6,0x8237b6d0
	if (ctx.cr6.eq) goto loc_8237B6D0;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8237b6ac
	if (ctx.cr6.eq) goto loc_8237B6AC;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x8237b734
	if (!ctx.cr6.eq) goto loc_8237B734;
	// li r9,1
	ctx.r9.s64 = 1;
	// b 0x8237b720
	goto loc_8237B720;
loc_8237B6AC:
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r11,26214
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 26214, ctx.xer);
	// bne cr6,0x8237b6c0
	if (!ctx.cr6.eq) goto loc_8237B6C0;
	// li r9,8
	ctx.r9.s64 = 8;
	// b 0x8237b720
	goto loc_8237B720;
loc_8237B6C0:
	// cmplwi cr6,r11,30583
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 30583, ctx.xer);
	// bne cr6,0x8237b734
	if (!ctx.cr6.eq) goto loc_8237B734;
	// li r9,6
	ctx.r9.s64 = 6;
	// b 0x8237b720
	goto loc_8237B720;
loc_8237B6D0:
	// lwz r11,280(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 280);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// mulli r11,r11,296
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(296));
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r26,256(r10)
	REX_STORE_U32(ctx.r10.u32 + 256, r26.u32);
	// b 0x8237b734
	goto loc_8237B734;
loc_8237B6E8:
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// beq cr6,0x8237b71c
	if (ctx.cr6.eq) goto loc_8237B71C;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bne cr6,0x8237b734
	if (!ctx.cr6.eq) goto loc_8237B734;
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8237b70c
	if (!ctx.cr6.eq) goto loc_8237B70C;
	// li r9,4
	ctx.r9.s64 = 4;
	// b 0x8237b720
	goto loc_8237B720;
loc_8237B70C:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x8237b734
	if (!ctx.cr6.eq) goto loc_8237B734;
	// li r9,5
	ctx.r9.s64 = 5;
	// b 0x8237b720
	goto loc_8237B720;
loc_8237B71C:
	// li r9,3
	ctx.r9.s64 = 3;
loc_8237B720:
	// lwz r11,280(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 280);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// mulli r11,r11,296
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(296));
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,256(r8)
	REX_STORE_U32(ctx.r8.u32 + 256, ctx.r9.u32);
loc_8237B734:
	// lwz r11,280(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 280);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// mulli r11,r11,296
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(296));
	// lhz r7,194(r1)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r1.u32 + 194);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r7,260(r8)
	REX_STORE_U32(ctx.r8.u32 + 260, ctx.r7.u32);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r6,280(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 280);
	// mulli r11,r6,296
	ctx.r11.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(296));
	// lwz r5,196(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r5,264(r4)
	REX_STORE_U32(ctx.r4.u32 + 264, ctx.r5.u32);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lhz r9,204(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 204);
	// lwz r8,280(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 280);
	// mulli r11,r8,296
	ctx.r11.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(296));
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,276(r7)
	REX_STORE_U32(ctx.r7.u32 + 276, ctx.r9.u32);
	// b 0x8237bb8c
	goto loc_8237BB8C;
loc_8237B780:
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82331620
	ctx.lr = 0x8237B790;
	sub_82331620(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8237b914
	if (!ctx.cr6.eq) goto loc_8237B914;
	// lwz r11,280(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 280);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// mulli r11,r11,296
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(296));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r9,260(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 260);
	// lwz r10,256(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 256);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8237b8ec
	if (ctx.cr6.eq) goto loc_8237B8EC;
	// cmplwi cr6,r10,11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 11, ctx.xer);
	// bgt cr6,0x8237b8ec
	if (ctx.cr6.gt) goto loc_8237B8EC;
	// lis r12,-32200
	ctx.r12.s64 = -2110259200;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-18472
	ctx.r12.s64 = ctx.r12.s64 + -18472;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_8237B840;
	case 1:
		goto loc_8237B808;
	case 2:
		goto loc_8237B810;
	case 3:
		goto loc_8237B818;
	case 4:
		goto loc_8237B820;
	case 5:
		goto loc_8237B820;
	case 6:
		goto loc_8237B840;
	case 7:
		goto loc_8237B840;
	case 8:
		goto loc_8237B840;
	case 9:
		goto loc_8237B840;
	case 10:
		goto loc_8237B840;
	case 11:
		goto loc_8237B840;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_8237B808:
	// li r10,8
	ctx.r10.s64 = 8;
	// b 0x8237b824
	goto loc_8237B824;
loc_8237B810:
	// li r10,16
	ctx.r10.s64 = 16;
	// b 0x8237b824
	goto loc_8237B824;
loc_8237B818:
	// li r10,24
	ctx.r10.s64 = 24;
	// b 0x8237b824
	goto loc_8237B824;
loc_8237B820:
	// li r10,32
	ctx.r10.s64 = 32;
loc_8237B824:
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// extsw r7,r10
	ctx.r7.s64 = ctx.r10.s32;
	// rldicr r6,r8,3,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u64, 3) & 0xFFFFFFFFFFFFFFFF;
	// tdllei r7,0
	if (ctx.r7.s64 == 0ll || ctx.r7.u64 < 0ull) ppc_trap(ctx, base, 0);
	// divdu r5,r6,r7
	ctx.r5.u64 = ctx.r7.u64 ? ctx.r6.u64 / ctx.r7.u64 : 0;
	// stw r5,272(r11)
	REX_STORE_U32(ctx.r11.u32 + 272, ctx.r5.u32);
	// b 0x8237b8dc
	goto loc_8237B8DC;
loc_8237B840:
	// lis r12,-32200
	ctx.r12.s64 = -2110259200;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-18344
	ctx.r12.s64 = ctx.r12.s64 + -18344;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_8237B8D4;
	case 1:
		goto loc_8237B8EC;
	case 2:
		goto loc_8237B8EC;
	case 3:
		goto loc_8237B8EC;
	case 4:
		goto loc_8237B8EC;
	case 5:
		goto loc_8237B8EC;
	case 6:
		goto loc_8237B888;
	case 7:
		goto loc_8237B89C;
	case 8:
		goto loc_8237B8B4;
	case 9:
		goto loc_8237B8C8;
	case 10:
		goto loc_8237B8C8;
	case 11:
		goto loc_8237B8C8;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_8237B888:
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mulli r8,r10,14
	ctx.r8.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(14));
	// rlwinm r7,r8,29,3,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFF;
	// stw r7,272(r11)
	REX_STORE_U32(ctx.r11.u32 + 272, ctx.r7.u32);
	// b 0x8237b8dc
	goto loc_8237B8DC;
loc_8237B89C:
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r8,36
	ctx.r8.s64 = 36;
	// rlwinm r7,r10,6,0,25
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// divwu r6,r7,r8
	ctx.r6.u64 = uint32_t(ctx.r8.u32 ? ctx.r7.u32 / ctx.r8.u32 : 0);
	// stw r6,272(r11)
	REX_STORE_U32(ctx.r11.u32 + 272, ctx.r6.u32);
	// b 0x8237b8dc
	goto loc_8237B8DC;
loc_8237B8B4:
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mulli r8,r10,28
	ctx.r8.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(28));
	// rlwinm r7,r8,28,4,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0xFFFFFFF;
	// stw r7,272(r11)
	REX_STORE_U32(ctx.r11.u32 + 272, ctx.r7.u32);
	// b 0x8237b8dc
	goto loc_8237B8DC;
loc_8237B8C8:
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r10,272(r11)
	REX_STORE_U32(ctx.r11.u32 + 272, ctx.r10.u32);
	// b 0x8237b8ec
	goto loc_8237B8EC;
loc_8237B8D4:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,272(r11)
	REX_STORE_U32(ctx.r11.u32 + 272, ctx.r10.u32);
loc_8237B8DC:
	// lwz r10,272(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 272);
	// twllei r9,0
	if (ctx.r9.s32 == 0 || ctx.r9.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r9,r10,r9
	ctx.r9.u64 = uint32_t(ctx.r9.u32 ? ctx.r10.u32 / ctx.r9.u32 : 0);
	// stw r9,272(r11)
	REX_STORE_U32(ctx.r11.u32 + 272, ctx.r9.u32);
loc_8237B8EC:
	// lwz r11,280(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 280);
	// lwz r10,284(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 284);
	// mulli r11,r11,296
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(296));
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r11,256
	ctx.r4.s64 = ctx.r11.s64 + 256;
	// bl 0x82340ff0
	ctx.lr = 0x8237B908;
	sub_82340FF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8237bbe0
	if (!ctx.cr6.eq) goto loc_8237BBE0;
	// b 0x8237bb8c
	goto loc_8237BB8C;
loc_8237B914:
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82331620
	ctx.lr = 0x8237B924;
	sub_82331620(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8237b9fc
	if (!ctx.cr6.eq) goto loc_8237B9FC;
	// lwz r10,264(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 264);
	// lwz r11,268(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 268);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8237b984
	if (!ctx.cr6.lt) goto loc_8237B984;
	// lwz r10,272(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 272);
	// mulli r11,r11,280
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(280));
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x823ef5f0
	ctx.lr = 0x8237B954;
	sub_823EF5F0(ctx, base);
	// lwz r11,268(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 268);
	// lwz r10,272(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 272);
	// li r7,0
	ctx.r7.s64 = 0;
	// mulli r11,r11,280
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(280));
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r5,1
	ctx.r5.s64 = 1;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82340718
	ctx.lr = 0x8237B978;
	sub_82340718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8237bbe0
	if (!ctx.cr6.eq) goto loc_8237BBE0;
	// b 0x8237bb8c
	goto loc_8237BB8C;
loc_8237B984:
	// lwz r10,276(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 276);
	// lwz r11,280(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 280);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8237bb8c
	if (!ctx.cr6.lt) goto loc_8237BB8C;
	// lwz r10,284(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 284);
	// mulli r11,r11,296
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(296));
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x823ef5f0
	ctx.lr = 0x8237B9AC;
	sub_823EF5F0(ctx, base);
	// lwz r11,280(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 280);
	// lwz r10,284(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 284);
	// li r7,0
	ctx.r7.s64 = 0;
	// mulli r11,r11,296
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(296));
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r5,1
	ctx.r5.s64 = 1;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82340718
	ctx.lr = 0x8237B9D0;
	sub_82340718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8237bbe0
	if (!ctx.cr6.eq) goto loc_8237BBE0;
	// lwz r11,280(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 280);
	// li r5,256
	ctx.r5.s64 = 256;
	// lwz r9,284(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 284);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// mulli r11,r11,296
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(296));
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x823314a0
	ctx.lr = 0x8237B9F8;
	sub_823314A0(ctx, base);
	// b 0x8237bb8c
	goto loc_8237BB8C;
loc_8237B9FC:
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82331620
	ctx.lr = 0x8237BA0C;
	sub_82331620(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8237bb8c
	if (ctx.cr6.eq) goto loc_8237BB8C;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82331620
	ctx.lr = 0x8237BA24;
	sub_82331620(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8237bb8c
	if (ctx.cr6.eq) goto loc_8237BB8C;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,144(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82331620
	ctx.lr = 0x8237BA3C;
	sub_82331620(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8237bb8c
	if (ctx.cr6.eq) goto loc_8237BB8C;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,184(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82331620
	ctx.lr = 0x8237BA54;
	sub_82331620(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8237bb8c
	if (ctx.cr6.eq) goto loc_8237BB8C;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,172(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82331620
	ctx.lr = 0x8237BA6C;
	sub_82331620(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8237bb8c
	if (ctx.cr6.eq) goto loc_8237BB8C;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,136(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82331620
	ctx.lr = 0x8237BA84;
	sub_82331620(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8237bb8c
	if (ctx.cr6.eq) goto loc_8237BB8C;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,168(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82331620
	ctx.lr = 0x8237BA9C;
	sub_82331620(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8237bb8c
	if (ctx.cr6.eq) goto loc_8237BB8C;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,152(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82331620
	ctx.lr = 0x8237BAB4;
	sub_82331620(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8237bb8c
	if (ctx.cr6.eq) goto loc_8237BB8C;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,180(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82331620
	ctx.lr = 0x8237BACC;
	sub_82331620(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8237bb8c
	if (ctx.cr6.eq) goto loc_8237BB8C;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,160(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82331620
	ctx.lr = 0x8237BAE4;
	sub_82331620(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8237bb8c
	if (ctx.cr6.eq) goto loc_8237BB8C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82331620
	ctx.lr = 0x8237BAFC;
	sub_82331620(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8237bb8c
	if (ctx.cr6.eq) goto loc_8237BB8C;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,164(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82331620
	ctx.lr = 0x8237BB14;
	sub_82331620(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8237bb8c
	if (ctx.cr6.eq) goto loc_8237BB8C;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,176(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82331620
	ctx.lr = 0x8237BB2C;
	sub_82331620(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8237bb8c
	if (ctx.cr6.eq) goto loc_8237BB8C;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,140(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82331620
	ctx.lr = 0x8237BB44;
	sub_82331620(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8237bb8c
	if (ctx.cr6.eq) goto loc_8237BB8C;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,148(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82331620
	ctx.lr = 0x8237BB5C;
	sub_82331620(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8237bb8c
	if (ctx.cr6.eq) goto loc_8237BB8C;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,156(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82331620
	ctx.lr = 0x8237BB74;
	sub_82331620(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8237bb8c
	if (ctx.cr6.eq) goto loc_8237BB8C;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340e38
	ctx.lr = 0x8237BB8C;
	sub_82340E38(ctx, base);
loc_8237BB8C:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,92(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// add r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 + r28.u64;
	// clrlwi r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r28,r10,8
	r28.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r28,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r28.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// beq cr6,0x8237bbc8
	if (ctx.cr6.eq) goto loc_8237BBC8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r28,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r28.u32);
loc_8237BBC8:
	// lwz r10,452(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 452);
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8237bbdc
	if (!ctx.cr6.lt) goto loc_8237BBDC;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x8237a42c
	if (!ctx.cr6.eq) goto loc_8237A42C;
loc_8237BBDC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8237BBE0:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_8243C570) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8243C578;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mullw r29,r4,r5
	r29.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r5.s32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x824bf4d0
	ctx.lr = 0x8243C588;
	sub_824BF4D0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x8243c598
	if (!ctx.cr0.eq) goto loc_8243C598;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8243c5d4
	goto loc_8243C5D4;
loc_8243C598:
	// cmplwi cr6,r29,32768
	ctx.cr6.compare<uint32_t>(r29.u32, 32768, ctx.xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// ble cr6,0x8243c5c8
	if (!ctx.cr6.gt) goto loc_8243C5C8;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r31,r11,32768
	r31.u64 = ctx.r11.u64 | 32768;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x826a2e60
	ctx.lr = 0x8243C5B8;
	sub_826A2E60(ctx, base);
	// subf r5,r31,r29
	ctx.r5.u64 = r29.u64 - r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r30,r31
	ctx.r3.u64 = r30.u64 + r31.u64;
	// b 0x8243c5cc
	goto loc_8243C5CC;
loc_8243C5C8:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
loc_8243C5CC:
	// bl 0x826a2e60
	ctx.lr = 0x8243C5D0;
	sub_826A2E60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_8243C5D4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8243F790) {
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
	ctx.lr = 0x8243F798;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r31,1564(r3)
	r31.u64 = REX_LOAD_U8(ctx.r3.u32 + 1564);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,8
	ctx.cr6.compare<uint32_t>(r31.u32, 8, ctx.xer);
	// bge cr6,0x8243f824
	if (!ctx.cr6.lt) goto loc_8243F824;
	// subfic r30,r31,8
	ctx.xer.ca = r31.u32 <= 8;
	r30.u64 = static_cast<uint64_t>(8) - r31.u64;
	// add r11,r31,r4
	ctx.r11.u64 = r31.u64 + ctx.r4.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,32
	ctx.r4.s64 = ctx.r11.s64 + 32;
	// bl 0x82442258
	ctx.lr = 0x8243F7C4;
	sub_82442258(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r29,r27,32
	r29.s64 = r27.s64 + 32;
	// stb r11,1564(r28)
	REX_STORE_U8(r28.u32 + 1564, ctx.r11.u8);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8243c4f8
	ctx.lr = 0x8243F7E0;
	sub_8243C4F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8243f824
	if (ctx.cr0.eq) goto loc_8243F824;
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(r31.u32, 4, ctx.xer);
	// bge cr6,0x8243f814
	if (!ctx.cr6.lt) goto loc_8243F814;
	// addi r5,r30,-4
	ctx.r5.s64 = r30.s64 + -4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8243c4f8
	ctx.lr = 0x8243F800;
	sub_8243C4F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8243f814
	if (ctx.cr0.eq) goto loc_8243F814;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-15420
	ctx.r4.s64 = ctx.r11.s64 + -15420;
	// b 0x8243f81c
	goto loc_8243F81C;
loc_8243F814:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-15460
	ctx.r4.s64 = ctx.r11.s64 + -15460;
loc_8243F81C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8243c410
	ctx.lr = 0x8243F824;
	sub_8243C410(ctx, base);
loc_8243F824:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r31,r28,1548
	r31.s64 = r28.s64 + 1548;
	// addi r30,r11,-15592
	r30.s64 = ctx.r11.s64 + -15592;
loc_8243F830:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82442258
	ctx.lr = 0x8243F840;
	sub_82442258(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824c3f38
	ctx.lr = 0x8243F84C;
	sub_824C3F38(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8243c5e8
	ctx.lr = 0x8243F858;
	sub_8243C5E8(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824c33c8
	ctx.lr = 0x8243F868;
	sub_824C33C8(ctx, base);
	// addi r10,r30,-48
	ctx.r10.s64 = r30.s64 + -48;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// addi r9,r31,4
	ctx.r9.s64 = r31.s64 + 4;
loc_8243F874:
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8243f894
	if (!ctx.cr0.eq) goto loc_8243F894;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8243f874
	if (!ctx.cr6.eq) goto loc_8243F874;
loc_8243F894:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8243f8b0
	if (!ctx.cr0.eq) goto loc_8243F8B0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824c40a0
	ctx.lr = 0x8243F8AC;
	sub_824C40A0(ctx, base);
	// b 0x8243f830
	goto loc_8243F830;
loc_8243F8B0:
	// addi r10,r30,-24
	ctx.r10.s64 = r30.s64 + -24;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// addi r8,r31,4
	ctx.r8.s64 = r31.s64 + 4;
loc_8243F8BC:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8243f8dc
	if (!ctx.cr0.eq) goto loc_8243F8DC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8243f8bc
	if (!ctx.cr6.eq) goto loc_8243F8BC;
loc_8243F8DC:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8243f8f8
	if (!ctx.cr0.eq) goto loc_8243F8F8;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824c4368
	ctx.lr = 0x8243F8F4;
	sub_824C4368(ctx, base);
	// b 0x8243f830
	goto loc_8243F830;
loc_8243F8F8:
	// addi r10,r30,-32
	ctx.r10.s64 = r30.s64 + -32;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// addi r8,r31,4
	ctx.r8.s64 = r31.s64 + 4;
loc_8243F904:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8243f924
	if (!ctx.cr0.eq) goto loc_8243F924;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8243f904
	if (!ctx.cr6.eq) goto loc_8243F904;
loc_8243F924:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8243f940
	if (!ctx.cr0.eq) goto loc_8243F940;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824c4520
	ctx.lr = 0x8243F93C;
	sub_824C4520(ctx, base);
	// b 0x8243f830
	goto loc_8243F830;
loc_8243F940:
	// addi r10,r30,-40
	ctx.r10.s64 = r30.s64 + -40;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// addi r8,r31,4
	ctx.r8.s64 = r31.s64 + 4;
loc_8243F94C:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8243f96c
	if (!ctx.cr0.eq) goto loc_8243F96C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8243f94c
	if (!ctx.cr6.eq) goto loc_8243F94C;
loc_8243F96C:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8243fa54
	if (ctx.cr0.eq) goto loc_8243FA54;
	// addi r10,r30,-16
	ctx.r10.s64 = r30.s64 + -16;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// addi r8,r31,4
	ctx.r8.s64 = r31.s64 + 4;
loc_8243F980:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8243f9a0
	if (!ctx.cr0.eq) goto loc_8243F9A0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8243f980
	if (!ctx.cr6.eq) goto loc_8243F980;
loc_8243F9A0:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8243f9bc
	if (!ctx.cr0.eq) goto loc_8243F9BC;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824c45a0
	ctx.lr = 0x8243F9B8;
	sub_824C45A0(ctx, base);
	// b 0x8243f830
	goto loc_8243F830;
loc_8243F9BC:
	// addi r10,r30,-8
	ctx.r10.s64 = r30.s64 + -8;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// addi r8,r31,4
	ctx.r8.s64 = r31.s64 + 4;
loc_8243F9C8:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8243f9e8
	if (!ctx.cr0.eq) goto loc_8243F9E8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8243f9c8
	if (!ctx.cr6.eq) goto loc_8243F9C8;
loc_8243F9E8:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8243fa04
	if (!ctx.cr0.eq) goto loc_8243FA04;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824c4740
	ctx.lr = 0x8243FA00;
	sub_824C4740(ctx, base);
	// b 0x8243f830
	goto loc_8243F830;
loc_8243FA04:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// addi r8,r31,4
	ctx.r8.s64 = r31.s64 + 4;
loc_8243FA10:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8243fa30
	if (!ctx.cr0.eq) goto loc_8243FA30;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8243fa10
	if (!ctx.cr6.eq) goto loc_8243FA10;
loc_8243FA30:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bne 0x8243fa4c
	if (!ctx.cr0.eq) goto loc_8243FA4C;
	// bl 0x824c48b0
	ctx.lr = 0x8243FA48;
	sub_824C48B0(ctx, base);
	// b 0x8243f830
	goto loc_8243F830;
loc_8243FA4C:
	// bl 0x824c4ae8
	ctx.lr = 0x8243FA50;
	sub_824C4AE8(ctx, base);
	// b 0x8243f830
	goto loc_8243F830;
loc_8243FA54:
	// lwz r11,1368(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 1368);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8243fa6c
	if (!ctx.cr0.eq) goto loc_8243FA6C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-15488
	ctx.r4.s64 = ctx.r11.s64 + -15488;
	// b 0x8243fa88
	goto loc_8243FA88;
loc_8243FA6C:
	// lbz r10,1558(r28)
	ctx.r10.u64 = REX_LOAD_U8(r28.u32 + 1558);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x8243fa90
	if (!ctx.cr6.eq) goto loc_8243FA90;
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8243fa90
	if (!ctx.cr0.eq) goto loc_8243FA90;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-15516
	ctx.r4.s64 = ctx.r11.s64 + -15516;
loc_8243FA88:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8243c410
	ctx.lr = 0x8243FA90;
	sub_8243C410(ctx, base);
loc_8243FA90:
	// lwz r11,1368(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 1368);
	// stw r29,1532(r28)
	REX_STORE_U32(r28.u32 + 1532, r29.u32);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,1368(r28)
	REX_STORE_U32(r28.u32 + 1368, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8244F608) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,6076
	ctx.r5.s64 = ctx.r11.s64 + 6076;
	// li r31,0
	r31.s64 = 0;
	// bl 0x8244f500
	ctx.lr = 0x8244F62C;
	sub_8244F500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8244f64c
	if (ctx.cr0.eq) goto loc_8244F64C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// bl 0x8244a980
	ctx.lr = 0x8244F640;
	sub_8244A980(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8244f64c
	if (ctx.cr0.lt) goto loc_8244F64C;
	// lwz r31,80(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8244F64C:
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

DEFINE_REX_FUNC(sub_824547B0) {
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
	// lwz r11,348(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 348);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824547e0
	if (ctx.cr6.eq) goto loc_824547E0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x824548a8
	goto loc_824548A8;
loc_824547E0:
	// lis r4,512
	ctx.r4.s64 = 33554432;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ori r4,r4,31
	ctx.r4.u64 = ctx.r4.u64 | 31;
	// bl 0x824715b8
	ctx.lr = 0x824547F0;
	sub_824715B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824548a8
	if (ctx.cr0.lt) goto loc_824548A8;
	// lwz r11,60(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 60);
	// lis r10,32
	ctx.r10.s64 = 2097152;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82454860
	if (!ctx.cr6.eq) goto loc_82454860;
	// lis r4,-28672
	ctx.r4.s64 = -1879048192;
loc_8245480C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82454810:
	// bl 0x8246e840
	ctx.lr = 0x82454814;
	sub_8246E840(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824548a8
	if (ctx.cr0.lt) goto loc_824548A8;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r10,16389
	ctx.r10.s64 = 16389;
	// lwz r4,12(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 12);
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r5,15
	ctx.r5.s64 = 983040;
	// rlwimi r4,r10,29,0,20
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0xFFFFF800) | (ctx.r4.u64 & 0xFFFFFFFF000007FF);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,312(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 312);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82454844;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824548a8
	if (ctx.cr0.lt) goto loc_824548A8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82468dd8
	ctx.lr = 0x82454854;
	sub_82468DD8(ctx, base);
	// srawi r11,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 31;
	// and r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 & ctx.r3.u64;
	// b 0x824548a8
	goto loc_824548A8;
loc_82454860:
	// lis r10,64
	ctx.r10.s64 = 4194304;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82454874
	if (!ctx.cr6.eq) goto loc_82454874;
	// lis r4,-24576
	ctx.r4.s64 = -1610612736;
	// b 0x8245480c
	goto loc_8245480C;
loc_82454874:
	// lis r10,128
	ctx.r10.s64 = 8388608;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8245488c
	if (!ctx.cr6.eq) goto loc_8245488C;
	// lis r4,-26624
	ctx.r4.s64 = -1744830464;
	// b 0x82454810
	goto loc_82454810;
loc_8245488C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,4814
	ctx.r5.s64 = 4814;
	// addi r6,r11,13064
	ctx.r6.s64 = ctx.r11.s64 + 13064;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82489c30
	ctx.lr = 0x824548A0;
	sub_82489C30(ctx, base);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_824548A8:
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

DEFINE_REX_FUNC(sub_82458930) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,15304
	ctx.r4.s64 = ctx.r10.s64 + 15304;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x824555b8
	ctx.lr = 0x82458954;
	sub_824555B8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8245A1E0) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,16168
	ctx.r4.s64 = ctx.r11.s64 + 16168;
	// bl 0x824555b8
	ctx.lr = 0x8245A1F8;
	sub_824555B8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8245A820) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,16828
	ctx.r4.s64 = ctx.r11.s64 + 16828;
	// bl 0x824555b8
	ctx.lr = 0x8245A838;
	sub_824555B8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8245E3A8) {
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
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// addi r5,r11,17508
	ctx.r5.s64 = ctx.r11.s64 + 17508;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r10,20568
	ctx.r4.s64 = ctx.r10.s64 + 20568;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8245dfc0
	ctx.lr = 0x8245E3D8;
	sub_8245DFC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824746e8
	ctx.lr = 0x8245E3E0;
	sub_824746E8(ctx, base);
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

DEFINE_REX_FUNC(sub_8245EB08) {
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
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,18772
	ctx.r5.s64 = ctx.r11.s64 + 18772;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8245dfc0
	ctx.lr = 0x8245EB34;
	sub_8245DFC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82474780
	ctx.lr = 0x8245EB3C;
	sub_82474780(ctx, base);
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

DEFINE_REX_FUNC(sub_82460DA0) {
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
	// bl 0x826a1c88
	ctx.lr = 0x82460DA8;
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,260(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// li r9,2
	ctx.r9.s64 = 2;
	// li r24,0
	r24.s64 = 0;
	// stw r9,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// lis r10,12288
	ctx.r10.s64 = 805306368;
	// li r8,3
	ctx.r8.s64 = 3;
	// stw r24,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r24.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r24,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r24.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// mr r18,r4
	r18.u64 = ctx.r4.u64;
	// stw r7,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// rlwinm r9,r11,0,0,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// stw r8,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// mr r17,r5
	r17.u64 = ctx.r5.u64;
	// mr r16,r6
	r16.u64 = ctx.r6.u64;
	// clrlwi r21,r11,12
	r21.u64 = ctx.r11.u32 & 0xFFFFF;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82460e04
	if (ctx.cr6.eq) goto loc_82460E04;
loc_82460DFC:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82461284
	goto loc_82461284;
loc_82460E04:
	// mr r26,r24
	r26.u64 = r24.u64;
	// mr r28,r24
	r28.u64 = r24.u64;
	// mr r29,r24
	r29.u64 = r24.u64;
	// mr r27,r24
	r27.u64 = r24.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x82461064
	if (ctx.cr6.eq) goto loc_82461064;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r7,20(r23)
	ctx.r7.u64 = REX_LOAD_U32(r23.u32 + 20);
	// rlwinm r31,r21,2,0,29
	r31.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,16(r23)
	ctx.r6.u64 = REX_LOAD_U32(r23.u32 + 16);
	// rlwinm r30,r21,1,0,30
	r30.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r21
	ctx.ctr.u64 = r21.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// lfd f0,-3744(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + -3744);
loc_82460E44:
	// lwz r11,260(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 260);
	// add r10,r30,r3
	ctx.r10.u64 = r30.u64 + ctx.r3.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwzx r8,r11,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r8,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// lwzx r8,r5,r7
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r25,4(r8)
	r25.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r25,r25,2,0,29
	r25.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r22,r5,r6
	r22.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r6.u32);
	// lwzx r5,r25,r6
	ctx.r5.u64 = REX_LOAD_U32(r25.u32 + ctx.r6.u32);
	// lwz r25,4(r22)
	r25.u64 = REX_LOAD_U32(r22.u32 + 4);
	// rlwinm. r25,r25,0,23,23
	r25.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(r25.s32, 0, ctx.xer);
	// beq 0x82460ec8
	if (ctx.cr0.eq) goto loc_82460EC8;
	// lfd f13,32(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82460ec8
	if (!ctx.cr6.eq) goto loc_82460EC8;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82460ec8
	if (!ctx.cr6.eq) goto loc_82460EC8;
	// lwz r11,260(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 260);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwzx r11,r11,r4
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82460ec8
	if (!ctx.cr6.eq) goto loc_82460EC8;
	// li r26,1
	r26.s64 = 1;
	// b 0x82460ecc
	goto loc_82460ECC;
loc_82460EC8:
	// li r29,1
	r29.s64 = 1;
loc_82460ECC:
	// lwz r11,4(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// rlwinm. r11,r11,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82460f10
	if (ctx.cr0.eq) goto loc_82460F10;
	// lfd f13,32(r8)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r8.u32 + 32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82460f10
	if (!ctx.cr6.eq) goto loc_82460F10;
	// lwz r11,8(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82460f10
	if (!ctx.cr6.eq) goto loc_82460F10;
	// lwz r11,260(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 260);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwzx r10,r11,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwzx r11,r11,r4
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82460f10
	if (!ctx.cr6.eq) goto loc_82460F10;
	// li r28,1
	r28.s64 = 1;
	// b 0x82460f14
	goto loc_82460F14;
loc_82460F10:
	// li r27,1
	r27.s64 = 1;
loc_82460F14:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x82460e44
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82460E44;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// beq cr6,0x82460f70
	if (ctx.cr6.eq) goto loc_82460F70;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne cr6,0x82460f70
	if (!ctx.cr6.eq) goto loc_82460F70;
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x82477ac8
	ctx.lr = 0x82460F3C;
	sub_82477AC8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82460f4c
	if (ctx.cr0.eq) goto loc_82460F4C;
	// bl 0x824773d0
	ctx.lr = 0x82460F48;
	sub_824773D0(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
loc_82460F4C:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// bne cr6,0x82460f60
	if (!ctx.cr6.eq) goto loc_82460F60;
loc_82460F54:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82461284
	goto loc_82461284;
loc_82460F60:
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// li r11,1803
	ctx.r11.s64 = 1803;
	// rlwimi r4,r11,20,0,11
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xFFF00000) | (ctx.r4.u64 & 0xFFFFFFFF000FFFFF);
	// b 0x82460fb4
	goto loc_82460FB4;
loc_82460F70:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x82461064
	if (ctx.cr6.eq) goto loc_82461064;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// bne cr6,0x82461064
	if (!ctx.cr6.eq) goto loc_82461064;
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(r18.u32, 0, ctx.xer);
	// bne cr6,0x82460dfc
	if (!ctx.cr6.eq) goto loc_82460DFC;
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x82477ac8
	ctx.lr = 0x82460F90;
	sub_82477AC8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82460fa0
	if (ctx.cr0.eq) goto loc_82460FA0;
	// bl 0x824773d0
	ctx.lr = 0x82460F9C;
	sub_824773D0(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
loc_82460FA0:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x82460f54
	if (ctx.cr6.eq) goto loc_82460F54;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// li r11,451
	ctx.r11.s64 = 451;
	// rlwimi r4,r11,22,0,11
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0xFFF00000) | (ctx.r4.u64 & 0xFFFFFFFF000FFFFF);
loc_82460FB4:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82477b60
	ctx.lr = 0x82460FC8;
	sub_82477B60(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt 0x82461268
	if (ctx.cr0.lt) goto loc_82461268;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r4,260(r23)
	ctx.r4.u64 = REX_LOAD_U32(r23.u32 + 260);
	// bl 0x82477420
	ctx.lr = 0x82460FDC;
	sub_82477420(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt 0x82461268
	if (ctx.cr0.lt) goto loc_82461268;
	// lwz r11,260(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 260);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r3,16(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 16);
	// lwz r4,16(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x826a1e70
	ctx.lr = 0x82460FF8;
	sub_826A1E70(ctx, base);
	// lwz r11,260(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 260);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r3,8(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 8);
	// lwz r4,8(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x826a1e70
	ctx.lr = 0x8246100C;
	sub_826A1E70(ctx, base);
	// lwz r11,8(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 8);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// add r3,r31,r11
	ctx.r3.u64 = r31.u64 + ctx.r11.u64;
	// beq cr6,0x82461030
	if (ctx.cr6.eq) goto loc_82461030;
	// lwz r10,260(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 260);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + r31.u64;
	// b 0x82461040
	goto loc_82461040;
loc_82461030:
	// lwz r9,260(r23)
	ctx.r9.u64 = REX_LOAD_U32(r23.u32 + 260);
	// rlwinm r10,r21,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,8(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82461040:
	// bl 0x826a1e70
	ctx.lr = 0x82461044;
	sub_826A1E70(ctx, base);
loc_82461044:
	// lwz r11,256(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 256);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r10,24(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82477e80
	ctx.lr = 0x8246105C;
	sub_82477E80(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x82461268
	goto loc_82461268;
loc_82461064:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lwz r4,260(r23)
	ctx.r4.u64 = REX_LOAD_U32(r23.u32 + 260);
	// cntlzw r11,r18
	ctx.r11.u64 = r18.u32 == 0 ? 32 : __builtin_clz(r18.u32);
	// addi r5,r10,20312
	ctx.r5.s64 = ctx.r10.s64 + 20312;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r10,r21
	ctx.r10.u64 = r21.u64;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,288
	ctx.r6.s64 = ctx.r1.s64 + 288;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x8245f158
	ctx.lr = 0x82461098;
	sub_8245F158(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne 0x82461280
	if (!ctx.cr0.eq) goto loc_82461280;
	// mr r19,r24
	r19.u64 = r24.u64;
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// mr r20,r24
	r20.u64 = r24.u64;
loc_824610AC:
	// mr r22,r24
	r22.u64 = r24.u64;
loc_824610B0:
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x82461244
	if (ctx.cr6.eq) goto loc_82461244;
	// lwz r30,20(r23)
	r30.u64 = REX_LOAD_U32(r23.u32 + 20);
	// rlwinm r25,r20,2,0,29
	r25.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r26,16(r23)
	r26.u64 = REX_LOAD_U32(r23.u32 + 16);
loc_824610C8:
	// subf r11,r25,r5
	ctx.r11.u64 = ctx.r5.u64 - r25.u64;
	// subf r10,r22,r5
	ctx.r10.u64 = ctx.r5.u64 - r22.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// add r7,r25,r5
	ctx.r7.u64 = r25.u64 + ctx.r5.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwzx r6,r11,r9
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r22,r5
	ctx.r9.u64 = r22.u64 + ctx.r5.u64;
	// lwzx r7,r10,r8
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r7,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r4
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// lwzx r4,r10,r30
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + r30.u32);
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r3,r30
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + r30.u32);
	// lwzx r11,r8,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwzx r8,r10,r30
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + r30.u32);
	// rlwinm r31,r11,2,0,29
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r29,4(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r28,r10,2,0,29
	r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r29,r29,2,0,29
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,56(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 56);
	// lwzx r31,r31,r30
	r31.u64 = REX_LOAD_U32(r31.u32 + r30.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// lwzx r28,r28,r26
	r28.u64 = REX_LOAD_U32(r28.u32 + r26.u32);
	// lwzx r27,r29,r26
	r27.u64 = REX_LOAD_U32(r29.u32 + r26.u32);
	// beq cr6,0x82461168
	if (ctx.cr6.eq) goto loc_82461168;
	// lwz r29,56(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r29,r9
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82461168
	if (ctx.cr6.eq) goto loc_82461168;
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x8246118c
	if (ctx.cr6.eq) goto loc_8246118C;
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r29.u32, ctx.xer);
	// bne cr6,0x8246118c
	if (!ctx.cr6.eq) goto loc_8246118C;
loc_82461168:
	// lwz r10,60(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 60);
	// lwz r8,60(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 60);
	// xoris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 ^ 524288;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8246118c
	if (!ctx.cr6.eq) goto loc_8246118C;
	// cmplw cr6,r6,r7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x8246118c
	if (!ctx.cr6.eq) goto loc_8246118C;
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x8246120c
	goto loc_8246120C;
loc_8246118C:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82461208
	if (!ctx.cr6.eq) goto loc_82461208;
	// lwz r10,56(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 56);
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x824611bc
	if (ctx.cr6.eq) goto loc_824611BC;
	// lwz r11,56(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x824611bc
	if (ctx.cr6.eq) goto loc_824611BC;
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x824611d0
	if (ctx.cr6.eq) goto loc_824611D0;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x824611d0
	if (!ctx.cr6.eq) goto loc_824611D0;
loc_824611BC:
	// lwz r11,60(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 60);
	// lwz r10,60(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// xoris r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 ^ 524288;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824611fc
	if (ctx.cr6.eq) goto loc_824611FC;
loc_824611D0:
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// rlwinm. r11,r11,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82461208
	if (ctx.cr0.eq) goto loc_82461208;
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// rlwinm. r11,r11,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82461208
	if (ctx.cr0.eq) goto loc_82461208;
	// lfd f0,32(r4)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r4.u32 + 32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfd f13,32(r3)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r3.u32 + 32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82461208
	if (!ctx.cr6.eq) goto loc_82461208;
loc_824611FC:
	// li r10,1
	ctx.r10.s64 = 1;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82461210
	goto loc_82461210;
loc_82461208:
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
loc_8246120C:
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
loc_82461210:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82461220
	if (!ctx.cr6.eq) goto loc_82461220;
	// mr r19,r11
	r19.u64 = ctx.r11.u64;
	// b 0x82461230
	goto loc_82461230;
loc_82461220:
	// subf r11,r19,r11
	ctx.r11.u64 = ctx.r11.u64 - r19.u64;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 & ctx.r10.u64;
loc_82461230:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8246124c
	if (ctx.cr6.eq) goto loc_8246124C;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// cmplw cr6,r5,r21
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, r21.u32, ctx.xer);
	// blt cr6,0x824610c8
	if (ctx.cr6.lt) goto loc_824610C8;
loc_82461244:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8246128c
	if (!ctx.cr6.eq) goto loc_8246128C;
loc_8246124C:
	// addi r22,r22,4
	r22.s64 = r22.s64 + 4;
	// cmplwi cr6,r22,8
	ctx.cr6.compare<uint32_t>(r22.u32, 8, ctx.xer);
	// blt cr6,0x824610b0
	if (ctx.cr6.lt) goto loc_824610B0;
	// addi r20,r20,1
	r20.s64 = r20.s64 + 1;
	// cmplwi cr6,r20,2
	ctx.cr6.compare<uint32_t>(r20.u32, 2, ctx.xer);
	// blt cr6,0x824610ac
	if (ctx.cr6.lt) goto loc_824610AC;
loc_82461264:
	// li r29,1
	r29.s64 = 1;
loc_82461268:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x82461280
	if (ctx.cr6.eq) goto loc_82461280;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82130e88
	ctx.lr = 0x82461278;
	sub_82130E88(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82477b20
	ctx.lr = 0x82461280;
	sub_82477B20(ctx, base);
loc_82461280:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_82461284:
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x826a1cd8
	return;
loc_8246128C:
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x82477ac8
	ctx.lr = 0x82461294;
	sub_82477AC8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824612a4
	if (ctx.cr0.eq) goto loc_824612A4;
	// bl 0x824773d0
	ctx.lr = 0x824612A0;
	sub_824773D0(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
loc_824612A4:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// bne cr6,0x824612b8
	if (!ctx.cr6.eq) goto loc_824612B8;
	// lis r29,-32761
	r29.s64 = -2147024896;
	// ori r29,r29,14
	r29.u64 = r29.u64 | 14;
	// b 0x82461280
	goto loc_82461280;
loc_824612B8:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// beq cr6,0x824613f0
	if (ctx.cr6.eq) goto loc_824613F0;
	// cmplwi cr6,r20,1
	ctx.cr6.compare<uint32_t>(r20.u32, 1, ctx.xer);
	// beq cr6,0x824613f8
	if (ctx.cr6.eq) goto loc_824613F8;
loc_824612C8:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// bne cr6,0x824612f8
	if (!ctx.cr6.eq) goto loc_824612F8;
loc_824612D0:
	// li r11,451
	ctx.r11.s64 = 451;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwimi r4,r11,22,0,11
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0xFFF00000) | (ctx.r4.u64 & 0xFFFFFFFF000FFFFF);
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// rlwinm r5,r21,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82477b60
	ctx.lr = 0x824612F0;
	sub_82477B60(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt 0x82461268
	if (ctx.cr0.lt) goto loc_82461268;
loc_824612F8:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r4,260(r23)
	ctx.r4.u64 = REX_LOAD_U32(r23.u32 + 260);
	// bl 0x82477420
	ctx.lr = 0x82461304;
	sub_82477420(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt 0x82461268
	if (ctx.cr0.lt) goto loc_82461268;
	// lwz r11,260(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 260);
	// rlwinm r31,r21,2,0,29
	r31.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,16(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 16);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r4,16(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x826a1e70
	ctx.lr = 0x82461324;
	sub_826A1E70(ctx, base);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lwz r3,8(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 8);
	// rlwinm r30,r20,4,0,27
	r30.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// add r4,r30,r11
	ctx.r4.u64 = r30.u64 + ctx.r11.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8246133C;
	sub_826A1E70(ctx, base);
	// lwz r11,8(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 8);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// subf r4,r30,r10
	ctx.r4.u64 = ctx.r10.u64 - r30.u64;
	// add r3,r31,r11
	ctx.r3.u64 = r31.u64 + ctx.r11.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82461354;
	sub_826A1E70(ctx, base);
	// lwz r11,8(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 8);
	// lwz r10,16(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 16);
	// lwz r9,20(r23)
	ctx.r9.u64 = REX_LOAD_U32(r23.u32 + 20);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r8,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwzx r8,r7,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x824613a4
	if (!ctx.cr6.eq) goto loc_824613A4;
	// lwz r7,12(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82461264
	if (ctx.cr6.eq) goto loc_82461264;
loc_824613A4:
	// lwz r11,4(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x824613c0
	if (!ctx.cr6.eq) goto loc_824613C0;
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r10,12(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82461264
	if (ctx.cr6.eq) goto loc_82461264;
loc_824613C0:
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(r18.u32, 0, ctx.xer);
	// beq cr6,0x82461044
	if (ctx.cr6.eq) goto loc_82461044;
	// lwz r31,96(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// stw r24,0(r18)
	REX_STORE_U32(r18.u32 + 0, r24.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x824613e8
	if (ctx.cr6.eq) goto loc_824613E8;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// rlwinm r5,r31,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a22f8
	ctx.lr = 0x824613E8;
	sub_826A22F8(ctx, base);
loc_824613E8:
	// stw r31,0(r16)
	REX_STORE_U32(r16.u32 + 0, r31.u32);
	// b 0x82461280
	goto loc_82461280;
loc_824613F0:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// bne cr6,0x82461428
	if (!ctx.cr6.eq) goto loc_82461428;
loc_824613F8:
	// li r11,1803
	ctx.r11.s64 = 1803;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwimi r4,r11,20,0,11
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xFFF00000) | (ctx.r4.u64 & 0xFFFFFFFF000FFFFF);
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// rlwinm r5,r21,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82477b60
	ctx.lr = 0x82461418;
	sub_82477B60(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt 0x82461268
	if (ctx.cr0.lt) goto loc_82461268;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// bne cr6,0x824612c8
	if (!ctx.cr6.eq) goto loc_824612C8;
loc_82461428:
	// cmplwi cr6,r20,1
	ctx.cr6.compare<uint32_t>(r20.u32, 1, ctx.xer);
	// beq cr6,0x824612d0
	if (ctx.cr6.eq) goto loc_824612D0;
	// b 0x824612f8
	goto loc_824612F8;
}

DEFINE_REX_FUNC(sub_824985F0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x824985F8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,16(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// and. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8249862c
	if (ctx.cr0.eq) goto loc_8249862C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,3048
	ctx.r5.s64 = 3048;
	// addi r6,r11,-11512
	ctx.r6.s64 = ctx.r11.s64 + -11512;
	// addi r4,r3,40
	ctx.r4.s64 = ctx.r3.s64 + 40;
	// bl 0x82494d48
	ctx.lr = 0x8249862C;
	sub_82494D48(ctx, base);
loc_8249862C:
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8249867c
	if (ctx.cr6.eq) goto loc_8249867C;
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8249867c
	if (ctx.cr6.eq) goto loc_8249867C;
	// ld r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 16);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r9,23844
	ctx.r4.s64 = ctx.r9.s64 + 23844;
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// addi r9,r31,40
	ctx.r9.s64 = r31.s64 + 40;
	// std r10,40(r31)
	REX_STORE_U64(r31.u32 + 40, ctx.r10.u64);
	// ld r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 24);
	// std r10,48(r31)
	REX_STORE_U64(r31.u32 + 48, ctx.r10.u64);
	// ld r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 32);
	// std r10,56(r31)
	REX_STORE_U64(r31.u32 + 56, ctx.r10.u64);
	// ld r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 40);
	// std r11,64(r31)
	REX_STORE_U64(r31.u32 + 64, ctx.r11.u64);
	// bl 0x82497800
	ctx.lr = 0x8249867C;
	sub_82497800(ctx, base);
loc_8249867C:
	// lwz r10,16(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 16);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwinm. r10,r11,0,12,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,16(r30)
	REX_STORE_U32(r30.u32 + 16, ctx.r11.u32);
	// beq 0x824986b8
	if (ctx.cr0.eq) goto loc_824986B8;
	// andis. r11,r11,22
	ctx.r11.u64 = ctx.r11.u64 & 1441792;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x824986b8
	if (ctx.cr0.eq) goto loc_824986B8;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,3048
	ctx.r5.s64 = 3048;
	// addi r6,r11,-11592
	ctx.r6.s64 = ctx.r11.s64 + -11592;
	// addi r4,r31,40
	ctx.r4.s64 = r31.s64 + 40;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82494d48
	ctx.lr = 0x824986B8;
	sub_82494D48(ctx, base);
loc_824986B8:
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 16);
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm. r9,r10,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x824986cc
	if (ctx.cr0.eq) goto loc_824986CC;
	// li r11,1
	ctx.r11.s64 = 1;
loc_824986CC:
	// rlwinm. r9,r10,0,18,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x824986d8
	if (ctx.cr0.eq) goto loc_824986D8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_824986D8:
	// rlwinm. r9,r10,0,17,17
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x824986e4
	if (ctx.cr0.eq) goto loc_824986E4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_824986E4:
	// rlwinm. r9,r10,0,16,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x824986f0
	if (ctx.cr0.eq) goto loc_824986F0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_824986F0:
	// rlwinm. r10,r10,0,15,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824986fc
	if (ctx.cr0.eq) goto loc_824986FC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_824986FC:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x8249871c
	if (!ctx.cr6.gt) goto loc_8249871C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,3083
	ctx.r5.s64 = 3083;
	// addi r6,r11,-11620
	ctx.r6.s64 = ctx.r11.s64 + -11620;
	// addi r4,r31,40
	ctx.r4.s64 = r31.s64 + 40;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82494d48
	ctx.lr = 0x8249871C;
	sub_82494D48(ctx, base);
loc_8249871C:
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82498750
	if (!ctx.cr6.eq) goto loc_82498750;
	// lwz r3,20(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82498750
	if (ctx.cr6.eq) goto loc_82498750;
	// bl 0x82444890
	ctx.lr = 0x82498738;
	sub_82444890(ctx, base);
	// stw r3,20(r30)
	REX_STORE_U32(r30.u32 + 20, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82498750
	if (!ctx.cr0.eq) goto loc_82498750;
loc_82498744:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x824987d8
	goto loc_824987D8;
loc_82498750:
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82498774
	if (!ctx.cr6.eq) goto loc_82498774;
	// lwz r3,28(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 28);
	// bl 0x82444890
	ctx.lr = 0x82498764;
	sub_82444890(ctx, base);
	// stw r3,28(r30)
	REX_STORE_U32(r30.u32 + 28, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x824987d4
	if (!ctx.cr0.eq) goto loc_824987D4;
	// b 0x82498744
	goto loc_82498744;
loc_82498774:
	// lwz r11,28(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824987d4
	if (ctx.cr6.eq) goto loc_824987D4;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82498794;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x82498744
	if (ctx.cr0.eq) goto loc_82498744;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82444750
	ctx.lr = 0x824987A4;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824987c4
	if (ctx.cr0.eq) goto loc_824987C4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r4,28(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 28);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r6,r11,-12712
	ctx.r6.s64 = ctx.r11.s64 + -12712;
	// bl 0x82444918
	ctx.lr = 0x824987C0;
	sub_82444918(ctx, base);
	// b 0x824987c8
	goto loc_824987C8;
loc_824987C4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824987C8:
	// stw r3,28(r30)
	REX_STORE_U32(r30.u32 + 28, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82498744
	if (ctx.cr6.eq) goto loc_82498744;
loc_824987D4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824987D8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_824ABAC8) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x826a1ca8
	ctx.lr = 0x824ABAD0;
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -80, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,76(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r24,0
	r24.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824abca8
	if (!ctx.cr6.gt) goto loc_824ABCA8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r25,0
	r25.s64 = 0;
	// lfd f31,-3744(r11)
	f31.u64 = REX_LOAD_U64(ctx.r11.u32 + -3744);
loc_824ABAF8:
	// lwz r11,564(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 564);
	// lwzx r10,r25,r11
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824abc94
	if (ctx.cr6.eq) goto loc_824ABC94;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r8,29200
	ctx.r8.s64 = 1913651200;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r9,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x824abc94
	if (ctx.cr6.eq) goto loc_824ABC94;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824abc94
	if (ctx.cr6.eq) goto loc_824ABC94;
	// lis r8,4352
	ctx.r8.s64 = 285212672;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// clrlwi r26,r9,12
	r26.u64 = ctx.r9.u32 & 0xFFFFF;
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20);
	// subf r11,r11,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r11.u64;
	// lwz r8,16(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 16);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 & r26.u64;
	// rlwinm r29,r11,2,0,29
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + r29.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r11,r11,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824abc94
	if (ctx.cr0.eq) goto loc_824ABC94;
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x82477ac8
	ctx.lr = 0x824ABB7C;
	sub_82477AC8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824abb90
	if (ctx.cr0.eq) goto loc_824ABB90;
	// bl 0x824773d0
	ctx.lr = 0x824ABB88;
	sub_824773D0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// b 0x824abb94
	goto loc_824ABB94;
loc_824ABB90:
	// li r28,0
	r28.s64 = 0;
loc_824ABB94:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x824abcb8
	if (ctx.cr6.eq) goto loc_824ABCB8;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwimi r4,r11,28,0,11
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFF00000) | (ctx.r4.u64 & 0xFFFFFFFF000FFFFF);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82477b60
	ctx.lr = 0x824ABBBC;
	sub_82477B60(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// blt 0x824abcc4
	if (ctx.cr0.lt) goto loc_824ABCC4;
	// lwz r11,564(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 564);
	// lwzx r4,r25,r11
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + ctx.r11.u32);
	// bl 0x82477420
	ctx.lr = 0x824ABBD4;
	sub_82477420(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824abcd8
	if (ctx.cr0.lt) goto loc_824ABCD8;
	// li r27,0
	r27.s64 = 0;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x824abc5c
	if (ctx.cr6.eq) goto loc_824ABC5C;
	// li r30,0
	r30.s64 = 0;
loc_824ABBEC:
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// lwz r4,136(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 136);
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82478758
	ctx.lr = 0x824ABC04;
	sub_82478758(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// cmplw cr6,r27,r26
	ctx.cr6.compare<uint32_t>(r27.u32, r26.u32, ctx.xer);
	// lwzx r11,r9,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stw r10,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
	// lwz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 16);
	// stwx r3,r11,r30
	REX_STORE_U32(ctx.r11.u32 + r30.u32, ctx.r3.u32);
	// lwz r11,564(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 564);
	// lwzx r11,r25,r11
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + ctx.r11.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwzx r11,r11,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// lwz r10,8(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 8);
	// stwx r11,r10,r30
	REX_STORE_U32(ctx.r10.u32 + r30.u32, ctx.r11.u32);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// lwz r11,564(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 564);
	// lwzx r11,r25,r11
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + ctx.r11.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r3,r11,r29
	REX_STORE_U32(ctx.r11.u32 + r29.u32, ctx.r3.u32);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// blt cr6,0x824abbec
	if (ctx.cr6.lt) goto loc_824ABBEC;
loc_824ABC5C:
	// lwz r11,548(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 548);
	// cmplwi cr6,r11,512
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 512, ctx.xer);
	// bge cr6,0x824abcf4
	if (!ctx.cr6.lt) goto loc_824ABCF4;
	// lwz r10,560(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 560);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stwx r28,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, r28.u32);
	// lwz r11,548(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 548);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,548(r31)
	REX_STORE_U32(r31.u32 + 548, ctx.r11.u32);
	// bl 0x824785e8
	ctx.lr = 0x824ABC8C;
	sub_824785E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824abcd8
	if (ctx.cr0.lt) goto loc_824ABCD8;
loc_824ABC94:
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// addi r25,r25,4
	r25.s64 = r25.s64 + 4;
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(r24.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824abaf8
	if (ctx.cr6.lt) goto loc_824ABAF8;
loc_824ABCA8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824ABCAC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x826a1cf8
	return;
loc_824ABCB8:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x824abcac
	goto loc_824ABCAC;
loc_824ABCC4:
	// bl 0x82130e88
	ctx.lr = 0x824ABCC8;
	sub_82130E88(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82477b20
	ctx.lr = 0x824ABCD0;
	sub_82477B20(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x824abcac
	goto loc_824ABCAC;
loc_824ABCD8:
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_824ABCDC:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82130e88
	ctx.lr = 0x824ABCE4;
	sub_82130E88(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82477b20
	ctx.lr = 0x824ABCEC;
	sub_82477B20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x824abcac
	goto loc_824ABCAC;
loc_824ABCF4:
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,14
	r31.u64 = r31.u64 | 14;
	// b 0x824abcdc
	goto loc_824ABCDC;
}

DEFINE_REX_FUNC(sub_824BCD68) {
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
	ctx.lr = 0x824BCD70;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,92(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r25,0
	r25.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824bce10
	if (ctx.cr6.eq) goto loc_824BCE10;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r30,r25
	r30.u64 = r25.u64;
	// stw r25,256(r3)
	REX_STORE_U32(ctx.r3.u32 + 256, r25.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824bce10
	if (!ctx.cr6.gt) goto loc_824BCE10;
loc_824BCD9C:
	// lwz r11,256(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 256);
	// lis r10,8320
	ctx.r10.s64 = 545259520;
	// lwz r9,24(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// stw r11,260(r31)
	REX_STORE_U32(r31.u32 + 260, ctx.r11.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x824bcde4
	if (!ctx.cr6.eq) goto loc_824BCDE4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82460058
	ctx.lr = 0x824BCDCC;
	sub_82460058(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824bd0e8
	if (ctx.cr0.lt) goto loc_824BD0E8;
	// addi r11,r3,0
	ctx.r11.s64 = ctx.r3.s64 + 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// or r30,r11,r30
	r30.u64 = ctx.r11.u64 | r30.u64;
loc_824BCDE4:
	// lwz r11,256(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 256);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,256(r31)
	REX_STORE_U32(r31.u32 + 256, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x824bcd9c
	if (ctx.cr6.lt) goto loc_824BCD9C;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x824bce10
	if (ctx.cr6.eq) goto loc_824BCE10;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8245fcb8
	ctx.lr = 0x824BCE10;
	sub_8245FCB8(ctx, base);
loc_824BCE10:
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 204);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824bcf58
	if (!ctx.cr0.eq) goto loc_824BCF58;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r30,r25
	r30.u64 = r25.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824bce6c
	if (!ctx.cr6.gt) goto loc_824BCE6C;
	// mr r29,r25
	r29.u64 = r25.u64;
loc_824BCE30:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,256(r31)
	REX_STORE_U32(r31.u32 + 256, r30.u32);
	// lwzx r11,r29,r11
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// stw r11,260(r31)
	REX_STORE_U32(r31.u32 + 260, ctx.r11.u32);
	// bl 0x824bc458
	ctx.lr = 0x824BCE48;
	sub_824BC458(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x824bce58
	if (!ctx.cr0.eq) goto loc_824BCE58;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8245fcb8
	ctx.lr = 0x824BCE58;
	sub_8245FCB8(ctx, base);
loc_824BCE58:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824bce30
	if (ctx.cr6.lt) goto loc_824BCE30;
loc_824BCE6C:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r30,r25
	r30.u64 = r25.u64;
	// lis r28,20480
	r28.s64 = 1342177280;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824bcec8
	if (!ctx.cr6.gt) goto loc_824BCEC8;
	// mr r29,r25
	r29.u64 = r25.u64;
loc_824BCE84:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// stw r30,256(r31)
	REX_STORE_U32(r31.u32 + 256, r30.u32);
	// lwzx r11,r29,r11
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// stw r11,260(r31)
	REX_STORE_U32(r31.u32 + 260, ctx.r11.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r28.u32, ctx.xer);
	// bne cr6,0x824bceb4
	if (!ctx.cr6.eq) goto loc_824BCEB4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824bb290
	ctx.lr = 0x824BCEAC;
	sub_824BB290(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824bd0e8
	if (ctx.cr0.lt) goto loc_824BD0E8;
loc_824BCEB4:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824bce84
	if (ctx.cr6.lt) goto loc_824BCE84;
loc_824BCEC8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8245fcb8
	ctx.lr = 0x824BCED0;
	sub_8245FCB8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r30,r25
	r30.u64 = r25.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824bcf58
	if (!ctx.cr6.gt) goto loc_824BCF58;
	// mr r29,r25
	r29.u64 = r25.u64;
loc_824BCEE4:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lis r10,4144
	ctx.r10.s64 = 271581184;
	// stw r30,256(r31)
	REX_STORE_U32(r31.u32 + 256, r30.u32);
	// lwzx r11,r29,r11
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// stw r11,260(r31)
	REX_STORE_U32(r31.u32 + 260, ctx.r11.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824bcf34
	if (ctx.cr6.eq) goto loc_824BCF34;
	// lis r10,4176
	ctx.r10.s64 = 273678336;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824bcf34
	if (ctx.cr6.eq) goto loc_824BCF34;
	// lis r10,4192
	ctx.r10.s64 = 274726912;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824bcf34
	if (ctx.cr6.eq) goto loc_824BCF34;
	// lis r10,4208
	ctx.r10.s64 = 275775488;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824bcf34
	if (ctx.cr6.eq) goto loc_824BCF34;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r28.u32, ctx.xer);
	// bne cr6,0x824bcf44
	if (!ctx.cr6.eq) goto loc_824BCF44;
loc_824BCF34:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824618b8
	ctx.lr = 0x824BCF3C;
	sub_824618B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824bd0e8
	if (ctx.cr0.lt) goto loc_824BD0E8;
loc_824BCF44:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824bcee4
	if (ctx.cr6.lt) goto loc_824BCEE4;
loc_824BCF58:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824bd0b0
	if (ctx.cr6.eq) goto loc_824BD0B0;
	// mr r26,r25
	r26.u64 = r25.u64;
loc_824BCF68:
	// cmplwi cr6,r26,16
	ctx.cr6.compare<uint32_t>(r26.u32, 16, ctx.xer);
	// bge cr6,0x824bd000
	if (!ctx.cr6.lt) goto loc_824BD000;
	// lwz r28,12(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r27,1
	r27.s64 = 1;
	// mr r30,r25
	r30.u64 = r25.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x824bcfdc
	if (ctx.cr6.eq) goto loc_824BCFDC;
	// mr r29,r25
	r29.u64 = r25.u64;
loc_824BCF88:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzx r11,r29,r11
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// stw r11,260(r31)
	REX_STORE_U32(r31.u32 + 260, ctx.r11.u32);
	// bl 0x82460690
	ctx.lr = 0x824BCF9C;
	sub_82460690(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824bd0e8
	if (ctx.cr0.lt) goto loc_824BD0E8;
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r3.u64;
	// lwz r4,260(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 260);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r27,r11,r27
	r27.u64 = ctx.r11.u64 & r27.u64;
	// bl 0x82478998
	ctx.lr = 0x824BCFBC;
	sub_82478998(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824bd0e8
	if (ctx.cr0.lt) goto loc_824BD0E8;
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 260);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(r30.u32, r28.u32, ctx.xer);
	// stw r25,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r25.u32);
	// blt cr6,0x824bcf88
	if (ctx.cr6.lt) goto loc_824BCF88;
loc_824BCFDC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8247d160
	ctx.lr = 0x824BCFE4;
	sub_8247D160(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824bd0e8
	if (ctx.cr0.lt) goto loc_824BD0E8;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq cr6,0x824bcf68
	if (ctx.cr6.eq) goto loc_824BCF68;
	// cmplwi cr6,r26,16
	ctx.cr6.compare<uint32_t>(r26.u32, 16, ctx.xer);
	// blt cr6,0x824bd0b0
	if (ctx.cr6.lt) goto loc_824BD0B0;
loc_824BD000:
	// lwz r28,12(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r26,1
	r26.s64 = 1;
	// mr r30,r25
	r30.u64 = r25.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x824bd08c
	if (ctx.cr6.eq) goto loc_824BD08C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r29,r25
	r29.u64 = r25.u64;
	// addi r27,r11,30324
	r27.s64 = ctx.r11.s64 + 30324;
loc_824BD020:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzx r11,r29,r11
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// stw r11,260(r31)
	REX_STORE_U32(r31.u32 + 260, ctx.r11.u32);
	// bl 0x82460690
	ctx.lr = 0x824BD034;
	sub_82460690(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824bd0e8
	if (ctx.cr0.lt) goto loc_824BD0E8;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x824bd060
	if (!ctx.cr6.eq) goto loc_824BD060;
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 260);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// li r5,4553
	ctx.r5.s64 = 4553;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,60(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// bl 0x82489c30
	ctx.lr = 0x824BD05C;
	sub_82489C30(ctx, base);
	// mr r26,r25
	r26.u64 = r25.u64;
loc_824BD060:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,260(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 260);
	// bl 0x82478998
	ctx.lr = 0x824BD06C;
	sub_82478998(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824bd0e8
	if (ctx.cr0.lt) goto loc_824BD0E8;
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 260);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(r30.u32, r28.u32, ctx.xer);
	// stw r25,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r25.u32);
	// blt cr6,0x824bd020
	if (ctx.cr6.lt) goto loc_824BD020;
loc_824BD08C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8247d160
	ctx.lr = 0x824BD094;
	sub_8247D160(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824bd0e8
	if (ctx.cr0.lt) goto loc_824BD0E8;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// bne cr6,0x824bd0b0
	if (!ctx.cr6.eq) goto loc_824BD0B0;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x824bd0e8
	goto loc_824BD0E8;
loc_824BD0B0:
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824bd0e4
	if (ctx.cr6.eq) goto loc_824BD0E4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8246c6f8
	ctx.lr = 0x824BD0C4;
	sub_8246C6F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824bd0e8
	if (ctx.cr0.lt) goto loc_824BD0E8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8245fcb8
	ctx.lr = 0x824BD0D4;
	sub_8245FCB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824856b0
	ctx.lr = 0x824BD0DC;
	sub_824856B0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824bd0e8
	if (ctx.cr0.lt) goto loc_824BD0E8;
loc_824BD0E4:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
loc_824BD0E8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_824CDC10) {
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
	ctx.lr = 0x824CDC18;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,8(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// li r25,0
	r25.s64 = 0;
	// li r9,573
	ctx.r9.s64 = 573;
	// lwz r31,0(r4)
	r31.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// li r26,-1
	r26.s64 = -1;
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// lwz r28,12(r10)
	r28.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r25,5192(r3)
	REX_STORE_U32(ctx.r3.u32 + 5192, r25.u32);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// stw r9,5196(r3)
	REX_STORE_U32(ctx.r3.u32 + 5196, ctx.r9.u32);
	// ble cr6,0x824cdc9c
	if (!ctx.cr6.gt) goto loc_824CDC9C;
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// mtctr r28
	ctx.ctr.u64 = r28.u64;
loc_824CDC58:
	// lhz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r9.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x824cdc8c
	if (ctx.cr0.eq) goto loc_824CDC8C;
	// lwz r10,5192(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 5192);
	// add r8,r11,r3
	ctx.r8.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r26,r11
	r26.u64 = ctx.r11.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r6,r10,725
	ctx.r6.s64 = ctx.r10.s64 + 725;
	// stw r10,5192(r3)
	REX_STORE_U32(ctx.r3.u32 + 5192, ctx.r10.u32);
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r10,r3
	REX_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r11.u32);
	// stb r25,5200(r8)
	REX_STORE_U8(ctx.r8.u32 + 5200, r25.u8);
	// b 0x824cdc90
	goto loc_824CDC90;
loc_824CDC8C:
	// sth r25,2(r9)
	REX_STORE_U16(ctx.r9.u32 + 2, r25.u16);
loc_824CDC90:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x824cdc58
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824CDC58;
loc_824CDC9C:
	// lwz r11,5192(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 5192);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bge cr6,0x824cdd20
	if (!ctx.cr6.lt) goto loc_824CDD20;
	// addi r8,r3,5200
	ctx.r8.s64 = ctx.r3.s64 + 5200;
loc_824CDCAC:
	// cmpwi cr6,r26,2
	ctx.cr6.compare<int32_t>(r26.s32, 2, ctx.xer);
	// bge cr6,0x824cdcc0
	if (!ctx.cr6.lt) goto loc_824CDCC0;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// b 0x824cdcc4
	goto loc_824CDCC4;
loc_824CDCC0:
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
loc_824CDCC4:
	// lwz r10,5192(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 5192);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// addi r5,r10,725
	ctx.r5.s64 = ctx.r10.s64 + 725;
	// stw r10,5192(r3)
	REX_STORE_U32(ctx.r3.u32 + 5192, ctx.r10.u32);
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r10,r3
	REX_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r11.u32);
	// sthx r6,r9,r31
	REX_STORE_U16(ctx.r9.u32 + r31.u32, ctx.r6.u16);
	// stbx r25,r8,r11
	REX_STORE_U8(ctx.r8.u32 + ctx.r11.u32, r25.u8);
	// lwz r11,5792(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 5792);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,5792(r3)
	REX_STORE_U32(ctx.r3.u32 + 5792, ctx.r11.u32);
	// beq cr6,0x824cdd14
	if (ctx.cr6.eq) goto loc_824CDD14;
	// add r11,r9,r7
	ctx.r11.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwz r10,5796(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 5796);
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// stw r11,5796(r3)
	REX_STORE_U32(ctx.r3.u32 + 5796, ctx.r11.u32);
loc_824CDD14:
	// lwz r11,5192(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 5192);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x824cdcac
	if (ctx.cr6.lt) goto loc_824CDCAC;
loc_824CDD20:
	// stw r26,4(r27)
	REX_STORE_U32(r27.u32 + 4, r26.u32);
	// lwz r11,5192(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 5192);
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addze r30,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	r30.s64 = temp.s64;
	// b 0x824cdd44
	goto loc_824CDD44;
loc_824CDD34:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x824ccb88
	ctx.lr = 0x824CDD40;
	sub_824CCB88(ctx, base);
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
loc_824CDD44:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(r30.s32, 1, ctx.xer);
	// bge cr6,0x824cdd34
	if (!ctx.cr6.lt) goto loc_824CDD34;
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r3,5200
	r30.s64 = ctx.r3.s64 + 5200;
	// add r29,r11,r31
	r29.u64 = ctx.r11.u64 + r31.u64;
loc_824CDD58:
	// lwz r11,5192(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 5192);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r24,2904(r3)
	r24.u64 = REX_LOAD_U32(ctx.r3.u32 + 2904);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r10,r11,725
	ctx.r10.s64 = ctx.r11.s64 + 725;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// stw r11,5192(r3)
	REX_STORE_U32(ctx.r3.u32 + 5192, ctx.r11.u32);
	// stw r10,2904(r3)
	REX_STORE_U32(ctx.r3.u32 + 2904, ctx.r10.u32);
	// bl 0x824ccb88
	ctx.lr = 0x824CDD84;
	sub_824CCB88(ctx, base);
	// rlwinm r11,r24,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,2904(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 2904);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + r31.u64;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + r31.u64;
	// lwz r11,5196(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 5196);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r8,r11,725
	ctx.r8.s64 = ctx.r11.s64 + 725;
	// stw r11,5196(r3)
	REX_STORE_U32(ctx.r3.u32 + 5196, ctx.r11.u32);
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r24,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, r24.u32);
	// lwz r11,5196(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 5196);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r8,r11,725
	ctx.r8.s64 = ctx.r11.s64 + 725;
	// stw r11,5196(r3)
	REX_STORE_U32(ctx.r3.u32 + 5196, ctx.r11.u32);
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r7,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r7.u32);
	// lhz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + 0);
	// lhz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// sth r11,0(r29)
	REX_STORE_U16(r29.u32 + 0, ctx.r11.u16);
	// lbzx r11,r30,r7
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + ctx.r7.u32);
	// lbzx r8,r30,r24
	ctx.r8.u64 = REX_LOAD_U8(r30.u32 + r24.u32);
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824cddf4
	if (ctx.cr6.lt) goto loc_824CDDF4;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_824CDDF4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r8,r28,16
	ctx.r8.u64 = r28.u32 & 0xFFFF;
	// stbx r11,r30,r28
	REX_STORE_U8(r30.u32 + r28.u32, ctx.r11.u8);
	// li r5,1
	ctx.r5.s64 = 1;
	// sth r8,2(r9)
	REX_STORE_U16(ctx.r9.u32 + 2, ctx.r8.u16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// sth r8,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r8.u16);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// stw r28,2904(r3)
	REX_STORE_U32(ctx.r3.u32 + 2904, r28.u32);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// bl 0x824ccb88
	ctx.lr = 0x824CDE20;
	sub_824CCB88(ctx, base);
	// lwz r11,5192(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 5192);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bge cr6,0x824cdd58
	if (!ctx.cr6.lt) goto loc_824CDD58;
	// lwz r11,5196(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 5196);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r10,2904(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 2904);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r9,r11,725
	ctx.r9.s64 = ctx.r11.s64 + 725;
	// stw r11,5196(r3)
	REX_STORE_U32(ctx.r3.u32 + 5196, ctx.r11.u32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r9,r3
	REX_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r10.u32);
	// bl 0x824ccc78
	ctx.lr = 0x824CDE50;
	sub_824CCC78(ctx, base);
	// li r8,15
	ctx.r8.s64 = 15;
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r10,r3,2866
	ctx.r10.s64 = ctx.r3.s64 + 2866;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_824CDE64:
	// lhzu r8,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r11,r11,1,16,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFE;
	// sthu r11,2(r9)
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r11.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x824cde64
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824CDE64;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// blt cr6,0x824cded8
	if (ctx.cr6.lt) goto loc_824CDED8;
	// addi r7,r26,1
	ctx.r7.s64 = r26.s64 + 1;
loc_824CDE88:
	// lhz r11,2(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 2);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824cdecc
	if (ctx.cr0.eq) goto loc_824CDECC;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// lhzx r11,r10,r9
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// sthx r6,r10,r9
	REX_STORE_U16(ctx.r10.u32 + ctx.r9.u32, ctx.r6.u16);
loc_824CDEB0:
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// bdnz 0x824cdeb0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824CDEB0;
	// rlwinm r11,r8,31,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0xFFFF;
	// sth r11,0(r31)
	REX_STORE_U16(r31.u32 + 0, ctx.r11.u16);
loc_824CDECC:
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bne 0x824cde88
	if (!ctx.cr0.eq) goto loc_824CDE88;
loc_824CDED8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_824DD558) {
	REX_FUNC_PROLOGUE();
	// b 0x824dcf18
	sub_824DCF18(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824DD568) {
	REX_FUNC_PROLOGUE();
	// b 0x824dd138
	sub_824DD138(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824DD590) {
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
	// lwz r10,144(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 144);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x824dd60c
	if (ctx.cr6.lt) goto loc_824DD60C;
	// lwz r10,148(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 148);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x824dd614
	if (ctx.cr6.eq) goto loc_824DD614;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x824dd614
	if (!ctx.cr6.eq) goto loc_824DD614;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r10,r10,21276
	ctx.r10.s64 = ctx.r10.s64 + 21276;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r9,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x824dd478
	ctx.lr = 0x824DD5F8;
	sub_824DD478(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x824dd608
	if (ctx.cr6.lt) goto loc_824DD608;
	// lwz r30,96(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
loc_824DD608:
	// stw r11,144(r31)
	REX_STORE_U32(r31.u32 + 144, ctx.r11.u32);
loc_824DD60C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x824dd618
	goto loc_824DD618;
loc_824DD614:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824DD618:
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

DEFINE_REX_FUNC(sub_824E0EA8) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824e0f28
	if (ctx.cr6.eq) goto loc_824E0F28;
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// blt cr6,0x824e0f28
	if (ctx.cr6.lt) goto loc_824E0F28;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x824e0f28
	if (ctx.cr6.eq) goto loc_824E0F28;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x824e0f28
	if (ctx.cr6.eq) goto loc_824E0F28;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lis r31,-2
	r31.s64 = -131072;
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bne cr6,0x824e0f04
	if (!ctx.cr6.eq) goto loc_824E0F04;
	// lwz r11,204(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 204);
	// lwz r31,196(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// bl 0x824e0890
	ctx.lr = 0x824E0F00;
	sub_824E0890(ctx, base);
	// b 0x824e0f30
	goto loc_824E0F30;
loc_824E0F04:
	// lis r31,-1
	r31.s64 = -65536;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bne cr6,0x824e0f28
	if (!ctx.cr6.eq) goto loc_824E0F28;
	// lwz r11,204(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 204);
	// lwz r31,196(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// bl 0x824e0538
	ctx.lr = 0x824E0F24;
	sub_824E0538(ctx, base);
	// b 0x824e0f30
	goto loc_824E0F30;
loc_824E0F28:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_824E0F30:
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

DEFINE_REX_FUNC(sub_824E4EB8) {
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
	ctx.lr = 0x824E4EC0;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,40(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r6,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r6.u32);
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// oris r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 65536;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// stw r11,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// mr r30,r8
	r30.u64 = ctx.r8.u64;
	// bl 0x8259bde0
	ctx.lr = 0x824E4EE8;
	sub_8259BDE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8257e300
	ctx.lr = 0x824E4EF0;
	sub_8257E300(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
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
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824e4f24
	if (!ctx.cr0.eq) goto loc_824E4F24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824e4f24
	if (ctx.cr6.eq) goto loc_824E4F24;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8257c7d0
	ctx.lr = 0x824E4F24;
	sub_8257C7D0(ctx, base);
loc_824E4F24:
	// addi r3,r31,972
	ctx.r3.s64 = r31.s64 + 972;
	// bl 0x824e4528
	ctx.lr = 0x824E4F2C;
	sub_824E4528(ctx, base);
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r1,72
	ctx.r11.s64 = ctx.r1.s64 + 72;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_824E4F3C:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x824e4f3c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824E4F3C;
	// stw r9,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x824e4f70
	if (ctx.cr6.eq) goto loc_824E4F70;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r9,8(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwz r8,20(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 20);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stw r8,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
loc_824E4F70:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lis r4,-1
	ctx.r4.s64 = -65536;
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x824e4f88
	if (ctx.cr6.eq) goto loc_824E4F88;
	// lis r4,-2
	ctx.r4.s64 = -131072;
loc_824E4F88:
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e46f0
	ctx.lr = 0x824E4FA0;
	sub_824E46F0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x824e4fb0
	if (ctx.cr6.eq) goto loc_824E4FB0;
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// stw r11,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r11.u32);
loc_824E4FB0:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_824EC260) {
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
	// lbz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x824ec2ac
	if (!ctx.cr0.eq) goto loc_824EC2AC;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824ec298
	if (ctx.cr0.eq) goto loc_824EC298;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,19072
	ctx.r4.s64 = ctx.r11.s64 + 19072;
	// b 0x824ec2a0
	goto loc_824EC2A0;
loc_824EC298:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,-19772
	ctx.r4.s64 = ctx.r11.s64 + -19772;
loc_824EC2A0:
	// bl 0x824eac90
	ctx.lr = 0x824EC2A4;
	sub_824EAC90(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,4(r31)
	REX_STORE_U8(r31.u32 + 4, ctx.r11.u8);
loc_824EC2AC:
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

DEFINE_REX_FUNC(sub_824EEE40) {
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
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x825a2698
	ctx.lr = 0x824EEE6C;
	sub_825A2698(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x824eee98
	if (!ctx.cr0.eq) goto loc_824EEE98;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r6,r11,-26736
	ctx.r6.s64 = ctx.r11.s64 + -26736;
	// addi r5,r10,-26300
	ctx.r5.s64 = ctx.r10.s64 + -26300;
	// addi r4,r9,22852
	ctx.r4.s64 = ctx.r9.s64 + 22852;
	// li r7,1609
	ctx.r7.s64 = 1609;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824EEE98;
	sub_824EA978(ctx, base);
loc_824EEE98:
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

DEFINE_REX_FUNC(sub_824EFC70) {
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
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x825a2698
	ctx.lr = 0x824EFC9C;
	sub_825A2698(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x824efcc8
	if (!ctx.cr0.eq) goto loc_824EFCC8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r6,r11,-26736
	ctx.r6.s64 = ctx.r11.s64 + -26736;
	// addi r5,r10,-26300
	ctx.r5.s64 = ctx.r10.s64 + -26300;
	// addi r4,r9,22852
	ctx.r4.s64 = ctx.r9.s64 + 22852;
	// li r7,3676
	ctx.r7.s64 = 3676;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824EFCC8;
	sub_824EA978(ctx, base);
loc_824EFCC8:
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

DEFINE_REX_FUNC(sub_824F16A8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r30{};
	PPCRegister r31{};
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// mulli r9,r4,36
	ctx.r9.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(36));
	// add r11,r9,r3
	ctx.r11.u64 = ctx.r9.u64 + ctx.r3.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// rlwinm r4,r5,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r3,3
	ctx.r3.s64 = 3;
	// slw r31,r8,r5
	r31.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r5.u8 & 0x3F));
	// lwz r30,16(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// slw r3,r3,r4
	ctx.r3.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r4.u8 & 0x3F));
	// not r3,r3
	ctx.r3.u64 = ~ctx.r3.u64;
	// rlwinm r31,r31,20,8,11
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 20) & 0xF00000;
	// slw r4,r8,r4
	ctx.r4.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r4.u8 & 0x3F));
	// rlwinm r8,r5,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// or r31,r31,r30
	r31.u64 = r31.u64 | r30.u64;
	// rlwinm r3,r3,12,0,19
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 12) & 0xFFFFF000;
	// addi r5,r5,3
	ctx.r5.s64 = ctx.r5.s64 + 3;
	// and r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 & r31.u64;
	// rlwinm r4,r4,12,0,19
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 12) & 0xFFFFF000;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwinm r5,r5,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// or r4,r3,r4
	ctx.r4.u64 = ctx.r3.u64 | ctx.r4.u64;
	// add r5,r5,r9
	ctx.r5.u64 = ctx.r5.u64 + ctx.r9.u64;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwimi r4,r31,0,20,11
	ctx.r4.u64 = (__builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFF00FFF) | (ctx.r4.u64 & 0xFF000);
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// stw r4,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r4.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stwx r7,r5,r10
	REX_STORE_U32(ctx.r5.u32 + ctx.r10.u32, ctx.r7.u32);
	// stw r6,20(r8)
	REX_STORE_U32(ctx.r8.u32 + 20, ctx.r6.u32);
	// ld r30,-16(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824F7678) {
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
	// lwz r9,1112(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 1112);
	// addi r11,r3,972
	ctx.r11.s64 = ctx.r3.s64 + 972;
	// lwz r10,1116(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 1116);
	// subf r9,r10,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r10.u64;
	// addi r9,r9,4096
	ctx.r9.s64 = ctx.r9.s64 + 4096;
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x824f76b4
	if (ctx.cr6.lt) goto loc_824F76B4;
	// add r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 + ctx.r4.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// stw r9,144(r11)
	REX_STORE_U32(ctx.r11.u32 + 144, ctx.r9.u32);
	// b 0x824f76f4
	goto loc_824F76F4;
loc_824F76B4:
	// rlwinm r10,r4,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r11
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x824f76ec
	if (ctx.cr6.eq) goto loc_824F76EC;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stwx r9,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// bl 0x826a2e60
	ctx.lr = 0x824F76E4;
	sub_826A2E60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x824f76f4
	goto loc_824F76F4;
loc_824F76EC:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x824f7378
	ctx.lr = 0x824F76F4;
	sub_824F7378(ctx, base);
loc_824F76F4:
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

DEFINE_REX_FUNC(sub_824FE970) {
	REX_FUNC_PROLOGUE();
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,68(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 68);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// lwz r7,28(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// blt cr6,0x824fe9a8
	if (ctx.cr6.lt) goto loc_824FE9A8;
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// lwz r9,72(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 72);
	// li r11,0
	ctx.r11.s64 = 0;
	// clrldi r10,r3,32
	ctx.r10.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// rldimi r11,r7,2,30
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r7.u64, 2) & 0x3FFFFFFFC) | (ctx.r11.u64 & 0xFFFFFFFC00000003);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpld cr6,r11,r9
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r9.u64, ctx.xer);
	// ble cr6,0x824fe9b4
	if (!ctx.cr6.gt) goto loc_824FE9B4;
loc_824FE9A8:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// blr 
	return;
loc_824FE9B4:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x824fea60
	if (ctx.cr6.eq) goto loc_824FEA60;
loc_824FE9C8:
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r10,r9,20
	ctx.r10.u64 = ctx.r9.u32 & 0xFFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x824fe9a8
	if (!ctx.cr6.gt) goto loc_824FE9A8;
	// lwz r11,84(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 84);
	// rlwinm r5,r9,1,19,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1FFE;
	// cmpld cr6,r5,r11
	ctx.cr6.compare<uint64_t>(ctx.r5.u64, ctx.r11.u64, ctx.xer);
	// bge cr6,0x824fe9a8
	if (!ctx.cr6.lt) goto loc_824FE9A8;
	// addi r11,r10,11
	ctx.r11.s64 = ctx.r10.s64 + 11;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r11,r4
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// rlwinm r11,r11,2,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x824fe9a8
	if (ctx.cr6.eq) goto loc_824FE9A8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x824fe9a8
	if (ctx.cr6.eq) goto loc_824FE9A8;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// mulli r5,r10,12
	ctx.r5.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(12));
	// lwzx r11,r5,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// clrlwi. r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824fe9a8
	if (!ctx.cr0.eq) goto loc_824FE9A8;
	// rlwinm r11,r9,12,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0x3;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x824fea38
	if (!ctx.cr6.eq) goto loc_824FEA38;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x824fe9a8
	if (!ctx.cr6.eq) goto loc_824FE9A8;
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x824fea4c
	goto loc_824FEA4C;
loc_824FEA38:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824fea4c
	if (ctx.cr6.eq) goto loc_824FEA4C;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x824fe9a8
	if (ctx.cr6.eq) goto loc_824FE9A8;
	// li r6,0
	ctx.r6.s64 = 0;
loc_824FEA4C:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x824fe9c8
	if (ctx.cr6.lt) goto loc_824FE9C8;
loc_824FEA60:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825051B0) {
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
	ctx.lr = 0x825051B8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,0(r4)
	r28.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// li r26,0
	r26.s64 = 0;
loc_825051CC:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82505290
	if (ctx.cr6.eq) goto loc_82505290;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// rlwinm. r10,r11,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82505288
	if (ctx.cr0.eq) goto loc_82505288;
	// rlwinm. r10,r11,2,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82505288
	if (ctx.cr0.eq) goto loc_82505288;
	// lwz r29,12(r28)
	r29.u64 = REX_LOAD_U32(r28.u32 + 12);
	// lwz r10,8(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 8);
	// rlwinm. r10,r10,9,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82505288
	if (ctx.cr0.eq) goto loc_82505288;
	// rlwinm r4,r11,17,22,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x3FC;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// addi r5,r4,3
	ctx.r5.s64 = ctx.r4.s64 + 3;
	// rlwinm r31,r11,19,20,31
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0xFFF;
	// bl 0x82504128
	ctx.lr = 0x8250520C;
	sub_82504128(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82505288
	if (ctx.cr0.eq) goto loc_82505288;
	// li r10,1
	ctx.r10.s64 = 1;
loc_82505218:
	// and. r11,r10,r3
	ctx.r11.u64 = ctx.r10.u64 & ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8250527c
	if (ctx.cr0.eq) goto loc_8250527C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lwz r9,8(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwimi r11,r31,0,0,27
	ctx.r11.u64 = (__builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFF0) | (ctx.r11.u64 & 0xFFFFFFFF0000000F);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// rlwinm r8,r8,30,2,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFC;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// andc r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r7.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subf r11,r11,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r11.u64;
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// beq cr6,0x8250527c
	if (ctx.cr6.eq) goto loc_8250527C;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r27.u32, ctx.xer);
	// beq cr6,0x8250527c
	if (ctx.cr6.eq) goto loc_8250527C;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82505278
	if (ctx.cr0.eq) goto loc_82505278;
	// ori r26,r26,1
	r26.u64 = r26.u64 | 1;
	// b 0x8250527c
	goto loc_8250527C;
loc_82505278:
	// ori r26,r26,2
	r26.u64 = r26.u64 | 2;
loc_8250527C:
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x82505218
	if (ctx.cr6.lt) goto loc_82505218;
loc_82505288:
	// lwz r28,4(r28)
	r28.u64 = REX_LOAD_U32(r28.u32 + 4);
	// b 0x825051cc
	goto loc_825051CC;
loc_82505290:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_825121E0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,40(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// rlwinm r11,r11,0,8,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF00;
	// rlwinm. r11,r11,0,23,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFF8001FF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r11,r9,31
	ctx.r11.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825122d4
	if (!ctx.cr0.eq) goto loc_825122D4;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x825122d4
	if (ctx.cr0.eq) goto loc_825122D4;
loc_82512204:
	// lwz r11,20(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82512234
	if (ctx.cr0.eq) goto loc_82512234;
	// lwz r11,28(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 28);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82512228
	if (ctx.cr0.eq) goto loc_82512228;
	// lwz r11,36(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 36);
	// addi r10,r9,32
	ctx.r10.s64 = ctx.r9.s64 + 32;
	// b 0x8251223c
	goto loc_8251223C;
loc_82512228:
	// lwz r11,28(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 28);
	// addi r10,r9,24
	ctx.r10.s64 = ctx.r9.s64 + 24;
	// b 0x8251223c
	goto loc_8251223C;
loc_82512234:
	// lwz r11,20(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// addi r10,r9,16
	ctx.r10.s64 = ctx.r9.s64 + 16;
loc_8251223C:
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
	// b 0x825122b4
	goto loc_825122B4;
loc_82512250:
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r7,r11,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r8,r8,0,5,2
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFE7FFFFFF;
	// stw r8,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// lwz r11,40(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 40);
	// clrlwi. r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82512274
	if (!ctx.cr0.eq) goto loc_82512274;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82512250
	if (!ctx.cr6.eq) goto loc_82512250;
loc_82512274:
	// addi r7,r9,32
	ctx.r7.s64 = ctx.r9.s64 + 32;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x825122bc
	if (ctx.cr6.eq) goto loc_825122BC;
	// addi r8,r9,24
	ctx.r8.s64 = ctx.r9.s64 + 24;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x825122a4
	if (ctx.cr6.eq) goto loc_825122A4;
	// lwz r11,28(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 28);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825122a4
	if (!ctx.cr0.eq) goto loc_825122A4;
	// lwz r11,4(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x825122ac
	goto loc_825122AC;
loc_825122A4:
	// lwz r11,4(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_825122AC:
	// clrlwi. r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x825122bc
	if (!ctx.cr0.eq) goto loc_825122BC;
loc_825122B4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82512250
	if (!ctx.cr6.eq) goto loc_82512250;
loc_825122BC:
	// rlwinm r11,r9,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r11,r9,31
	ctx.r11.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825122d4
	if (!ctx.cr0.eq) goto loc_825122D4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82512204
	if (!ctx.cr6.eq) goto loc_82512204;
loc_825122D4:
	// b 0x825117d8
	sub_825117D8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8251FB88) {
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
	ctx.lr = 0x8251FB90;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r21,-1
	r21.s64 = -1;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r23,r21
	r23.u64 = r21.u64;
	// mr r20,r21
	r20.u64 = r21.u64;
	// li r25,0
	r25.s64 = 0;
	// subfic r24,r5,256
	ctx.xer.ca = ctx.r5.u32 <= 256;
	r24.u64 = static_cast<uint64_t>(256) - ctx.r5.u64;
loc_8251FBB8:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x8251eeb8
	ctx.lr = 0x8251FBC4;
	sub_8251EEB8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8251fd50
	if (ctx.cr6.eq) goto loc_8251FD50;
	// rlwinm r4,r3,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r22,8
	ctx.r3.s64 = r22.s64 + 8;
	// bl 0x8251e368
	ctx.lr = 0x8251FBDC;
	sub_8251E368(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8251fbf0
	if (ctx.cr6.eq) goto loc_8251FBF0;
	// rlwinm r28,r3,30,2,31
	r28.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 30) & 0x3FFFFFFF;
	// cmpwi cr6,r28,-1
	ctx.cr6.compare<int32_t>(r28.s32, -1, ctx.xer);
	// bne cr6,0x8251fbf4
	if (!ctx.cr6.eq) goto loc_8251FBF4;
loc_8251FBF0:
	// add r28,r24,r27
	r28.u64 = r24.u64 + r27.u64;
loc_8251FBF4:
	// add r11,r31,r27
	ctx.r11.u64 = r31.u64 + r27.u64;
	// rlwinm r26,r28,0,0,29
	r26.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r10,r11,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r26.u32, ctx.xer);
	// bne cr6,0x8251fc10
	if (!ctx.cr6.eq) goto loc_8251FC10;
	// subf r29,r11,r28
	r29.u64 = r28.u64 - ctx.r11.u64;
	// b 0x8251fc28
	goto loc_8251FC28;
loc_8251FC10:
	// subf r29,r26,r28
	r29.u64 = r28.u64 - r26.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8251fc28
	if (ctx.cr6.eq) goto loc_8251FC28;
	// subf r11,r11,r29
	ctx.r11.u64 = r29.u64 - ctx.r11.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r29,r11,4
	r29.s64 = ctx.r11.s64 + 4;
loc_8251FC28:
	// cmplw cr6,r28,r24
	ctx.cr6.compare<uint32_t>(r28.u32, r24.u32, ctx.xer);
	// blt cr6,0x8251fc38
	if (ctx.cr6.lt) goto loc_8251FC38;
	// mr r7,r21
	ctx.r7.u64 = r21.u64;
	// b 0x8251fc6c
	goto loc_8251FC6C;
loc_8251FC38:
	// subf r10,r27,r28
	ctx.r10.u64 = r28.u64 - r27.u64;
	// rlwinm r11,r31,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r9,r10,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8251fc54
	if (!ctx.cr6.eq) goto loc_8251FC54;
	// subf r7,r31,r10
	ctx.r7.u64 = ctx.r10.u64 - r31.u64;
	// b 0x8251fc6c
	goto loc_8251FC6C;
loc_8251FC54:
	// subf r7,r9,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r9.u64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8251fc6c
	if (ctx.cr6.eq) goto loc_8251FC6C;
	// subf r11,r31,r11
	ctx.r11.u64 = ctx.r11.u64 - r31.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
loc_8251FC6C:
	// addi r11,r31,3
	ctx.r11.s64 = r31.s64 + 3;
	// rlwinm r9,r31,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// li r10,0
	ctx.r10.s64 = 0;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r9.u32, ctx.xer);
	// rlwinm r8,r11,0,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// beq cr6,0x8251fc94
	if (ctx.cr6.eq) goto loc_8251FC94;
	// subf r10,r31,r9
	ctx.r10.u64 = ctx.r9.u64 - r31.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
loc_8251FC94:
	// cmplw cr6,r8,r26
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, r26.u32, ctx.xer);
	// bne cr6,0x8251fca8
	if (!ctx.cr6.eq) goto loc_8251FCA8;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// add r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 + r28.u64;
	// b 0x8251fcc4
	goto loc_8251FCC4;
loc_8251FCA8:
	// subf r10,r26,r10
	ctx.r10.u64 = ctx.r10.u64 - r26.u64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + r28.u64;
	// beq cr6,0x8251fcc4
	if (ctx.cr6.eq) goto loc_8251FCC4;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
loc_8251FCC4:
	// cmplw cr6,r7,r29
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, r29.u32, ctx.xer);
	// bge cr6,0x8251fcd4
	if (!ctx.cr6.lt) goto loc_8251FCD4;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// subf r31,r27,r28
	r31.u64 = r28.u64 - r27.u64;
loc_8251FCD4:
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r29.u32, ctx.xer);
	// bge cr6,0x8251fce8
	if (!ctx.cr6.lt) goto loc_8251FCE8;
	// addi r11,r31,3
	ctx.r11.s64 = r31.s64 + 3;
	// mr r29,r10
	r29.u64 = ctx.r10.u64;
	// rlwinm r31,r11,0,0,29
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
loc_8251FCE8:
	// li r30,0
	r30.s64 = 0;
	// cmplw cr6,r28,r24
	ctx.cr6.compare<uint32_t>(r28.u32, r24.u32, ctx.xer);
	// bge cr6,0x8251fd20
	if (!ctx.cr6.lt) goto loc_8251FD20;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x8251e728
	ctx.lr = 0x8251FD08;
	sub_8251E728(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8251fd20
	if (ctx.cr6.eq) goto loc_8251FD20;
	// rlwinm r11,r3,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 28) & 0xFFFFFFF;
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// rlwinm r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// subf r30,r11,r10
	r30.u64 = ctx.r10.u64 - ctx.r11.u64;
loc_8251FD20:
	// add r11,r30,r29
	ctx.r11.u64 = r30.u64 + r29.u64;
	// cmpwi cr6,r23,-1
	ctx.cr6.compare<int32_t>(r23.s32, -1, ctx.xer);
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + r25.u64;
	// beq cr6,0x8251fd38
	if (ctx.cr6.eq) goto loc_8251FD38;
	// cmplw cr6,r11,r20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r20.u32, ctx.xer);
	// bge cr6,0x8251fd40
	if (!ctx.cr6.lt) goto loc_8251FD40;
loc_8251FD38:
	// mr r23,r31
	r23.u64 = r31.u64;
	// mr r20,r11
	r20.u64 = ctx.r11.u64;
loc_8251FD40:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// subf r25,r26,r28
	r25.u64 = r28.u64 - r26.u64;
	// cmplw cr6,r28,r24
	ctx.cr6.compare<uint32_t>(r28.u32, r24.u32, ctx.xer);
	// ble cr6,0x8251fbb8
	if (!ctx.cr6.gt) goto loc_8251FBB8;
loc_8251FD50:
	// cmpwi cr6,r23,-1
	ctx.cr6.compare<int32_t>(r23.s32, -1, ctx.xer);
	// bne cr6,0x8251fd64
	if (!ctx.cr6.eq) goto loc_8251FD64;
	// li r4,3566
	ctx.r4.s64 = 3566;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x824e4368
	ctx.lr = 0x8251FD64;
	sub_824E4368(ctx, base);
loc_8251FD64:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x8251ed40
	ctx.lr = 0x8251FD74;
	sub_8251ED40(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1ce4
	return;
}

DEFINE_REX_FUNC(sub_825348D8) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c88
	ctx.lr = 0x825348E0;
	// stfd f31,-144(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -144, f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// mr r20,r5
	r20.u64 = ctx.r5.u64;
	// mr r18,r6
	r18.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// rlwinm. r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82534f40
	if (!ctx.cr0.gt) goto loc_82534F40;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bgt cr6,0x82534f40
	if (ctx.cr6.gt) goto loc_82534F40;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r21,1
	r21.s64 = 1;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// mr r17,r21
	r17.u64 = r21.u64;
	// lfs f31,3716(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3716);
	f31.f64 = double(temp.f32);
	// bne cr6,0x82534950
	if (!ctx.cr6.eq) goto loc_82534950;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lfd f1,-3744(r11)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + -3744);
	// bl 0x824f8b38
	ctx.lr = 0x82534938;
	sub_824F8B38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82534948
	if (ctx.cr0.eq) goto loc_82534948;
	// li r17,0
	r17.s64 = 0;
	// b 0x82534950
	goto loc_82534950;
loc_82534948:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,3704(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	f31.f64 = double(temp.f32);
loc_82534950:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// rlwinm r11,r11,12,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x1;
	// subfic r10,r11,12
	ctx.xer.ca = ctx.r11.u32 <= 12;
	ctx.r10.u64 = static_cast<uint64_t>(12) - ctx.r11.u64;
	// addi r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 + 11;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r10,r23
	r29.u64 = REX_LOAD_U32(ctx.r10.u32 + r23.u32);
	// lwzx r27,r11,r23
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + r23.u32);
	// lwz r28,12(r29)
	r28.u64 = REX_LOAD_U32(r29.u32 + 12);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825be308
	ctx.lr = 0x82534984;
	sub_825BE308(ctx, base);
	// mr. r19,r3
	r19.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r19.s32, 0, ctx.xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// beq 0x82534a00
	if (ctx.cr0.eq) goto loc_82534A00;
	// lwz r6,0(r27)
	ctx.r6.u64 = REX_LOAD_U32(r27.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm. r11,r6,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82534a00
	if (ctx.cr0.eq) goto loc_82534A00;
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rotlwi r8,r6,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r9,r10,27,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0xFF;
	// rlwinm r8,r8,7,29,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0x7;
loc_825349B4:
	// srw r10,r9,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r11.u8 & 0x3F));
	// clrlwi r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	// slw r5,r21,r10
	ctx.r5.u64 = ctx.r10.u8 & 0x20 ? 0 : (r21.u32 << (ctx.r10.u8 & 0x3F));
	// and. r5,r5,r19
	ctx.r5.u64 = ctx.r5.u64 & r19.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x825349f0
	if (ctx.cr0.eq) goto loc_825349F0;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lfdx f0,r10,r5
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + ctx.r5.u32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(f31.f64, ctx.f0.f64);
	// bne cr6,0x825349f0
	if (!ctx.cr6.eq) goto loc_825349F0;
	// rlwinm r10,r6,27,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0xFF;
	// srw r10,r10,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// clrlwi r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	// slw r10,r21,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r21.u32 << (ctx.r10.u8 & 0x3F));
	// or r4,r10,r4
	ctx.r4.u64 = ctx.r10.u64 | ctx.r4.u64;
loc_825349F0:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x825349b4
	if (ctx.cr6.lt) goto loc_825349B4;
loc_82534A00:
	// lwz r5,0(r27)
	ctx.r5.u64 = REX_LOAD_U32(r27.u32 + 0);
	// li r22,3
	r22.s64 = 3;
	// lwz r11,12(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 12);
	// lwz r10,12(r20)
	ctx.r10.u64 = REX_LOAD_U32(r20.u32 + 12);
	// rlwinm r30,r5,7,29,31
	r30.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 7) & 0x7;
	// rlwinm r6,r5,27,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0xFF;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82534ac8
	if (!ctx.cr6.eq) goto loc_82534AC8;
	// lwz r8,0(r20)
	ctx.r8.u64 = REX_LOAD_U32(r20.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm. r7,r8,7,29,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x82534a5c
	if (ctx.cr0.eq) goto loc_82534A5C;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82534A38:
	// rlwinm r3,r8,27,24,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0xFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// srw r3,r3,r9
	ctx.r3.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r3.u32 >> (ctx.r9.u8 & 0x3F));
	// clrlwi r3,r3,30
	ctx.r3.u64 = ctx.r3.u32 & 0x3;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// slw r3,r21,r3
	ctx.r3.u64 = ctx.r3.u8 & 0x20 ? 0 : (r21.u32 << (ctx.r3.u8 & 0x3F));
	// or r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 | ctx.r11.u64;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82534a38
	if (ctx.cr6.lt) goto loc_82534A38;
loc_82534A5C:
	// lis r10,-28311
	ctx.r10.s64 = -1855389696;
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r10,r10,5192
	ctx.r10.u64 = ctx.r10.u64 | 5192;
	// ori r9,r9,36262
	ctx.r9.u64 = ctx.r9.u64 | 36262;
	// andc r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r4.u64;
	// rldimi r10,r9,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// clrldi r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// srd r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r9.u8 & 0x7F));
	// srd r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r9.u8 & 0x7F));
	// srd r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r9.u8 & 0x7F));
	// clrlwi r31,r10,29
	r31.u64 = ctx.r10.u32 & 0x7;
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
loc_82534A8C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82534af8
	if (ctx.cr6.eq) goto loc_82534AF8;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// slw r8,r22,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (r22.u32 << (ctx.r10.u8 & 0x3F));
	// andc r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 & ~ctx.r9.u64;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// andc r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 & ~ctx.r8.u64;
	// subfic r9,r9,31
	ctx.xer.ca = ctx.r9.u32 <= 31;
	ctx.r9.u64 = static_cast<uint64_t>(31) - ctx.r9.u64;
	// andc r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 & ~ctx.r7.u64;
	// slw r9,r9,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// or r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 | ctx.r9.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// subf r11,r7,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r7.u64;
	// b 0x82534a8c
	goto loc_82534A8C;
loc_82534AC8:
	// lwz r11,0(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 0);
	// rlwinm. r31,r11,7,29,31
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x82534af8
	if (ctx.cr0.eq) goto loc_82534AF8;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
loc_82534ADC:
	// clrlwi r10,r6,30
	ctx.r10.u64 = ctx.r6.u32 & 0x3;
	// slw r9,r22,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (r22.u32 << (ctx.r11.u8 & 0x3F));
	// slw r10,r10,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// andc r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 & ~ctx.r9.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// or r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 | ctx.r10.u64;
	// bdnz 0x82534adc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82534ADC;
loc_82534AF8:
	// rlwimi r5,r6,5,19,26
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0x1FE0) | (ctx.r5.u64 & 0xFFFFFFFFFFFFE01F);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r5,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r5.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// add r28,r31,r30
	r28.u64 = r31.u64 + r30.u64;
	// li r26,0
	r26.s64 = 0;
	// bl 0x825c36d0
	ctx.lr = 0x82534B20;
	sub_825C36D0(ctx, base);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// bne cr6,0x82534bec
	if (!ctx.cr6.eq) goto loc_82534BEC;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82531af0
	ctx.lr = 0x82534B34;
	sub_82531AF0(ctx, base);
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r4,r30,1
	ctx.r4.s64 = r30.s64 + 1;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// stfdx f31,r11,r10
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r11.u32 + ctx.r10.u32, f31.u64);
	// slw r11,r21,r4
	ctx.r11.u64 = ctx.r4.u8 & 0x20 ? 0 : (r21.u32 << (ctx.r4.u8 & 0x3F));
	// addi r19,r11,-1
	r19.s64 = ctx.r11.s64 + -1;
	// lfd f0,120(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// lfd f13,112(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// frsp f4,f0
	ctx.f4.f64 = double(float(ctx.f0.f64));
	// frsp f3,f13
	ctx.f3.f64 = double(float(ctx.f13.f64));
	// lfd f0,104(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// lfd f13,96(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// frsp f2,f0
	ctx.f2.f64 = double(float(ctx.f0.f64));
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// bl 0x825c1a18
	ctx.lr = 0x82534B74;
	sub_825C1A18(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// li r9,228
	ctx.r9.s64 = 228;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82534ba4
	if (ctx.cr6.eq) goto loc_82534BA4;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
loc_82534B8C:
	// slw r10,r22,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (r22.u32 << (ctx.r11.u8 & 0x3F));
	// slw r8,r30,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (r30.u32 << (ctx.r11.u8 & 0x3F));
	// andc r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// or r9,r10,r8
	ctx.r9.u64 = ctx.r10.u64 | ctx.r8.u64;
	// bdnz 0x82534b8c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82534B8C;
loc_82534BA4:
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82534bbc
	goto loc_82534BBC;
loc_82534BB4:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
loc_82534BBC:
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r29.u32, ctx.xer);
	// bne cr6,0x82534bb4
	if (!ctx.cr6.eq) goto loc_82534BB4;
	// lwz r10,8(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 8);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4);
	// stw r11,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r11.u32);
	// stw r29,4(r26)
	REX_STORE_U32(r26.u32 + 4, r29.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwimi r11,r9,5,19,26
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0x1FE0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFE01F);
	// stw r26,12(r29)
	REX_STORE_U32(r29.u32 + 12, r26.u32);
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// b 0x82534c24
	goto loc_82534C24;
loc_82534BEC:
	// lwz r9,0(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// rlwinm r10,r9,27,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0xFF;
	// beq cr6,0x82534c1c
	if (ctx.cr6.eq) goto loc_82534C1C;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
loc_82534C04:
	// slw r8,r22,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (r22.u32 << (ctx.r11.u8 & 0x3F));
	// slw r7,r3,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r11.u8 & 0x3F));
	// andc r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 & ~ctx.r8.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// bdnz 0x82534c04
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82534C04;
loc_82534C1C:
	// rlwimi r9,r10,5,19,26
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0x1FE0) | (ctx.r9.u64 & 0xFFFFFFFFFFFFE01F);
	// stw r9,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r9.u32);
loc_82534C24:
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x825bba68
	ctx.lr = 0x82534C30;
	sub_825BBA68(ctx, base);
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// slw r11,r21,r28
	ctx.r11.u64 = r28.u8 & 0x20 ? 0 : (r21.u32 << (r28.u8 & 0x3F));
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwimi r10,r28,14,15,17
	ctx.r10.u64 = (__builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 14) & 0x1C000) | (ctx.r10.u64 & 0xFFFFFFFFFFFE3FFF);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwimi r10,r11,1,27,30
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1E) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFE1);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// rlwinm r11,r10,0,6,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFBFFFFFF;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// rlwinm r11,r11,0,2,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 12);
	// sth r11,14(r31)
	REX_STORE_U16(r31.u32 + 14, ctx.r11.u16);
	// lwz r5,12(r27)
	ctx.r5.u64 = REX_LOAD_U32(r27.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x82534C6C;
	sub_82503DA0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// rlwinm r16,r28,25,4,6
	r16.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 25) & 0xE000000;
	// rlwinm r11,r11,0,7,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFF1FFFFFF;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// or r11,r11,r16
	ctx.r11.u64 = ctx.r11.u64 | r16.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// rlwinm r30,r11,12,31,31
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x1;
	// bl 0x8250ad28
	ctx.lr = 0x82534C98;
	sub_8250AD28(ctx, base);
	// addi r11,r30,11
	ctx.r11.s64 = r30.s64 + 11;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r11,r31
	REX_STORE_U32(ctx.r11.u32 + r31.u32, ctx.r3.u32);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r5,12(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x82534CB4;
	sub_82503DA0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// rlwinm r11,r11,0,7,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFF1FFFFFF;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// or r11,r11,r16
	ctx.r11.u64 = ctx.r11.u64 | r16.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// rlwinm r11,r11,12,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x1;
	// subfic r30,r11,1
	ctx.xer.ca = ctx.r11.u32 <= 1;
	r30.u64 = static_cast<uint64_t>(1) - ctx.r11.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82534CE0;
	sub_8250AD28(ctx, base);
	// addi r11,r30,11
	ctx.r11.s64 = r30.s64 + 11;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r11,r31
	REX_STORE_U32(ctx.r11.u32 + r31.u32, ctx.r3.u32);
	// lwz r30,0(r23)
	r30.u64 = REX_LOAD_U32(r23.u32 + 0);
loc_82534CF0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82534d18
	if (ctx.cr6.eq) goto loc_82534D18;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82534d10
	if (!ctx.cr0.eq) goto loc_82534D10;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82534D10;
	sub_8250AD28(ctx, base);
loc_82534D10:
	// lwz r30,4(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 4);
	// b 0x82534cf0
	goto loc_82534CF0;
loc_82534D18:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x82534d34
	if (ctx.cr6.eq) goto loc_82534D34;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82528fd8
	ctx.lr = 0x82534D28;
	sub_82528FD8(ctx, base);
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 8);
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// stw r11,8(r26)
	REX_STORE_U32(r26.u32 + 8, ctx.r11.u32);
loc_82534D34:
	// rlwinm r11,r18,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r10,r31,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
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
	// li r26,0
	r26.s64 = 0;
	// li r25,0
	r25.s64 = 0;
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
	// lwz r11,0(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 0);
	// rlwinm. r30,r11,7,29,31
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x82534e5c
	if (ctx.cr0.eq) goto loc_82534E5C;
	// li r29,0
	r29.s64 = 0;
loc_82534D84:
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// rlwinm. r9,r10,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82534e44
	if (ctx.cr0.eq) goto loc_82534E44;
	// rlwinm r8,r10,27,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0xFF;
	// clrlwi r7,r17,24
	ctx.r7.u64 = r17.u32 & 0xFF;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82534DA0:
	// srw r9,r8,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r9,r9,30
	ctx.r9.u64 = ctx.r9.u32 & 0x3;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82534dd0
	if (ctx.cr6.eq) goto loc_82534DD0;
	// lwz r6,0(r27)
	ctx.r6.u64 = REX_LOAD_U32(r27.u32 + 0);
	// rlwinm r5,r11,27,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0xFF;
	// rlwinm r6,r6,27,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0xFF;
	// srw r5,r5,r29
	ctx.r5.u64 = r29.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (r29.u8 & 0x3F));
	// srw r6,r6,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r10.u8 & 0x3F));
	// xor r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 ^ ctx.r5.u64;
	// clrlwi. r6,r6,30
	ctx.r6.u64 = ctx.r6.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x82534df0
	if (!ctx.cr0.eq) goto loc_82534DF0;
loc_82534DD0:
	// slw r6,r21,r9
	ctx.r6.u64 = ctx.r9.u8 & 0x20 ? 0 : (r21.u32 << (ctx.r9.u8 & 0x3F));
	// and. r6,r6,r19
	ctx.r6.u64 = ctx.r6.u64 & r19.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x82534df0
	if (ctx.cr0.eq) goto loc_82534DF0;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lfdx f0,r9,r6
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r9.u32 + ctx.r6.u32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(f31.f64, ctx.f0.f64);
	// beq cr6,0x82534e0c
	if (ctx.cr6.eq) goto loc_82534E0C;
loc_82534DF0:
	// lwz r9,0(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 0);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rlwinm r9,r9,7,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0x7;
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82534da0
	if (ctx.cr6.lt) goto loc_82534DA0;
	// b 0x82534e44
	goto loc_82534E44;
loc_82534E0C:
	// rlwinm r11,r11,27,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0xFF;
	// lwz r3,12(r20)
	ctx.r3.u64 = REX_LOAD_U32(r20.u32 + 12);
	// srw r11,r11,r29
	ctx.r11.u64 = r29.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (r29.u8 & 0x3F));
	// clrlwi r4,r11,30
	ctx.r4.u64 = ctx.r11.u32 & 0x3;
	// bl 0x8254fb38
	ctx.lr = 0x82534E20;
	sub_8254FB38(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r5,15
	ctx.r5.s64 = 15;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8254fb50
	ctx.lr = 0x82534E34;
	sub_8254FB50(ctx, base);
	// slw r11,r22,r29
	ctx.r11.u64 = r29.u8 & 0x20 ? 0 : (r22.u32 << (r29.u8 & 0x3F));
	// slw r10,r30,r29
	ctx.r10.u64 = r29.u8 & 0x20 ? 0 : (r30.u32 << (r29.u8 & 0x3F));
	// andc r11,r26,r11
	ctx.r11.u64 = r26.u64 & ~ctx.r11.u64;
	// or r26,r11,r10
	r26.u64 = ctx.r11.u64 | ctx.r10.u64;
loc_82534E44:
	// lwz r11,0(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 0);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r29,r29,2
	r29.s64 = r29.s64 + 2;
	// rlwinm r30,r11,7,29,31
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	// cmplw cr6,r25,r30
	ctx.cr6.compare<uint32_t>(r25.u32, r30.u32, ctx.xer);
	// blt cr6,0x82534d84
	if (ctx.cr6.lt) goto loc_82534D84;
loc_82534E5C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8250ab60
	ctx.lr = 0x82534E68;
	sub_8250AB60(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwimi r11,r30,25,4,6
	ctx.r11.u64 = (__builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 25) & 0xE000000) | (ctx.r11.u64 & 0xFFFFFFFFF1FFFFFF);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8250a620
	ctx.lr = 0x82534E80;
	sub_8250A620(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// rlwimi r11,r26,5,19,26
	ctx.r11.u64 = (__builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 5) & 0x1FE0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFE01F);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// bl 0x825335b8
	ctx.lr = 0x82534E98;
	sub_825335B8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x825335b8
	ctx.lr = 0x82534EA4;
	sub_825335B8(ctx, base);
	// lwz r11,40(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 40);
	// rlwinm. r11,r11,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82534ec0
	if (ctx.cr0.eq) goto loc_82534EC0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x825336b8
	ctx.lr = 0x82534EC0;
	sub_825336B8(ctx, base);
loc_82534EC0:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82534f30
	if (ctx.cr0.eq) goto loc_82534F30;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// rlwinm r11,r11,0,16,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFF8FFFF;
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// lwz r3,660(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 660);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82534f0c
	if (!ctx.cr0.eq) goto loc_82534F0C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82534f0c
	if (ctx.cr0.eq) goto loc_82534F0C;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82534f18
	if (!ctx.cr6.gt) goto loc_82534F18;
loc_82534F0C:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8251fe00
	ctx.lr = 0x82534F14;
	sub_8251FE00(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82534F18:
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
	// stwx r31,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, r31.u32);
loc_82534F30:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f31,-144(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -144);
	// b 0x826a1cd8
	return;
loc_82534F40:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x824e4368
	ctx.lr = 0x82534F4C;
	sub_824E4368(ctx, base);
}

DEFINE_REX_FUNC(sub_82581BE8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82581BF0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,29
	ctx.r6.s64 = 29;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r4,564(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 564);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x825bb860
	ctx.lr = 0x82581C18;
	sub_825BB860(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82581c3c
	if (ctx.cr6.eq) goto loc_82581C3C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,12(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x82581C38;
	sub_82503DA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82581C3C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82581C44;
	sub_8250AD28(ctx, base);
	// stw r3,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r3.u32);
	// lwz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// beq cr6,0x82581c68
	if (ctx.cr6.eq) goto loc_82581C68;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,12(r28)
	ctx.r5.u64 = REX_LOAD_U32(r28.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x82581C64;
	sub_82503DA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82581C68:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82581C70;
	sub_8250AD28(ctx, base);
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// lwz r11,564(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 564);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// rlwinm r10,r31,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r8,r11,-36
	ctx.r8.s64 = ctx.r11.s64 + -36;
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r7,r9,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r6,r10,-36
	ctx.r6.s64 = ctx.r10.s64 + -36;
	// ori r8,r8,1
	ctx.r8.u64 = ctx.r8.u64 | 1;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// stw r6,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
	// stw r8,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82584600) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_82584608:
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82584644
	if (!ctx.cr6.eq) goto loc_82584644;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82584630
	if (ctx.cr0.eq) goto loc_82584630;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82584638
	goto loc_82584638;
loc_82584630:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_82584638:
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
loc_82584644:
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82584658
	if (ctx.cr6.lt) goto loc_82584658;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82584658:
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// subf. r4,r11,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// bne 0x82584608
	if (!ctx.cr0.eq) goto loc_82584608;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825862F8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82586300;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r5,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.r5.u64);
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r4,564(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 564);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x825bb860
	ctx.lr = 0x82586328;
	sub_825BB860(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8258634c
	if (ctx.cr6.eq) goto loc_8258634C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,12(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x82586348;
	sub_82503DA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_8258634C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82586354;
	sub_8250AD28(ctx, base);
	// stw r3,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r3.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82584ed0
	ctx.lr = 0x82586364;
	sub_82584ED0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82586370;
	sub_8250AD28(ctx, base);
	// lwz r10,44(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 44);
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r10,r10,7,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x7;
	// rlwimi r9,r10,14,15,17
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0x1C000) | (ctx.r9.u64 & 0xFFFFFFFFFFFE3FFF);
	// addi r8,r11,-36
	ctx.r8.s64 = ctx.r11.s64 + -36;
	// stw r9,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lwz r10,564(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 564);
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// lwz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r6,r10,-36
	ctx.r6.s64 = ctx.r10.s64 + -36;
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// lwz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r7,r7,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// ori r6,r6,1
	ctx.r6.u64 = ctx.r6.u64 | 1;
	// stw r8,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r8.u32);
	// stw r6,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8258C948) {
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
	ctx.lr = 0x8258C950;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,564(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 564);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8258c990
	if (!ctx.cr0.eq) goto loc_8258C990;
	// lwz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r30,r10,-40
	ctx.xer.ca = ctx.r10.u32 > 39;
	r30.s64 = ctx.r10.s64 + -40;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x8258c990
	if (ctx.cr0.eq) goto loc_8258C990;
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm r10,r10,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,10624
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 10624, ctx.xer);
	// beq cr6,0x8258ca44
	if (ctx.cr6.eq) goto loc_8258CA44;
loc_8258C990:
	// lwz r10,40(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 40);
	// rlwinm. r10,r10,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8258c9c4
	if (!ctx.cr0.eq) goto loc_8258C9C4;
	// lwz r10,44(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 44);
	// rlwinm. r10,r10,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8258c9e4
	if (ctx.cr0.eq) goto loc_8258C9E4;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// addic r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8258c9e4
	if (!ctx.cr6.eq) goto loc_8258C9E4;
loc_8258C9C4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82580bd0
	ctx.lr = 0x8258C9CC;
	sub_82580BD0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r3,564(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 564);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825c69a0
	ctx.lr = 0x8258C9E0;
	sub_825C69A0(ctx, base);
	// stw r30,564(r31)
	REX_STORE_U32(r31.u32 + 564, r30.u32);
loc_8258C9E4:
	// lwz r4,564(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 564);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r4,32
	ctx.r5.s64 = ctx.r4.s64 + 32;
	// li r6,83
	ctx.r6.s64 = 83;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825bb860
	ctx.lr = 0x8258CA00;
	sub_825BB860(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8258ca30
	if (ctx.cr6.eq) goto loc_8258CA30;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,56(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// lwz r5,16(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x8258c420
	ctx.lr = 0x8258CA30;
	sub_8258C420(ctx, base);
loc_8258CA30:
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lwz r4,4(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 4);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8258c870
	ctx.lr = 0x8258CA44;
	sub_8258C870(ctx, base);
loc_8258CA44:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82580568
	ctx.lr = 0x8258CA54;
	sub_82580568(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_825A1C38) {
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
	ctx.lr = 0x825A1C40;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r28,r11,22852
	r28.s64 = ctx.r11.s64 + 22852;
	// addi r27,r10,-12104
	r27.s64 = ctx.r10.s64 + -12104;
	// bne cr6,0x825a1c80
	if (!ctx.cr6.eq) goto loc_825A1C80;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r5,r11,-11972
	ctx.r5.s64 = ctx.r11.s64 + -11972;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,1450
	ctx.r7.s64 = 1450;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A1C80;
	sub_824EA978(ctx, base);
loc_825A1C80:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x825a1ca4
	if (!ctx.cr6.eq) goto loc_825A1CA4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r5,r11,-11984
	ctx.r5.s64 = ctx.r11.s64 + -11984;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,1451
	ctx.r7.s64 = 1451;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A1CA4;
	sub_824EA978(ctx, base);
loc_825A1CA4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x825a1cc8
	if (!ctx.cr6.eq) goto loc_825A1CC8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r5,r11,-12000
	ctx.r5.s64 = ctx.r11.s64 + -12000;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,1452
	ctx.r7.s64 = 1452;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A1CC8;
	sub_824EA978(ctx, base);
loc_825A1CC8:
	// addic. r29,r30,236
	ctx.xer.ca = r30.u32 > 4294967059;
	r29.s64 = r30.s64 + 236;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne 0x825a1cec
	if (!ctx.cr0.eq) goto loc_825A1CEC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r5,r11,-13040
	ctx.r5.s64 = ctx.r11.s64 + -13040;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,1455
	ctx.r7.s64 = 1455;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A1CEC;
	sub_824EA978(ctx, base);
loc_825A1CEC:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r3,4(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825A1D00;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-16373
	ctx.r11.s64 = -1073020928;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// ori r11,r11,9472
	ctx.r11.u64 = ctx.r11.u64 | 9472;
	// li r10,16
	ctx.r10.s64 = 16;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r11,5
	ctx.r11.s64 = 5;
	// lwz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r9,r31,4
	ctx.r9.s64 = r31.s64 + 4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r11,32(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 32);
	// lwz r7,16(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 16);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
loc_825A1D44:
	// lwzu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r7.u64 = REX_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// lwz r6,32(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 32);
	// lwz r7,16(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 16);
	// lwz r6,4(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// or r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 | ctx.r7.u64;
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x825a1d44
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825A1D44;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lis r9,-16383
	ctx.r9.s64 = -1073676288;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// ori r9,r9,9984
	ctx.r9.u64 = ctx.r9.u64 | 9984;
	// lwz r7,32(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// lwz r10,16(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// lwz r10,4(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// subf r11,r8,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r8.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// srawi r30,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	r30.s64 = ctx.r11.s32 >> 2;
	// cmplwi cr6,r30,16
	ctx.cr6.compare<uint32_t>(r30.u32, 16, ctx.xer);
	// ble cr6,0x825a1dc4
	if (!ctx.cr6.gt) goto loc_825A1DC4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r5,r11,-11956
	ctx.r5.s64 = ctx.r11.s64 + -11956;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,1504
	ctx.r7.s64 = 1504;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A1DC4;
	sub_824EA978(ctx, base);
loc_825A1DC4:
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 20);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,4(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825A1DDC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825a4f80
	ctx.lr = 0x825A1DE8;
	sub_825A4F80(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_825ABC98) {
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
	// li r11,113
	ctx.r11.s64 = 113;
	// lwz r9,28(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lhz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 0);
	// li r8,1
	ctx.r8.s64 = 1;
	// sth r11,2(r5)
	REX_STORE_U16(ctx.r5.u32 + 2, ctx.r11.u16);
	// addi r11,r5,4
	ctx.r11.s64 = ctx.r5.s64 + 4;
	// lwz r7,0(r5)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r7,r7,0,16,2
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFE000FFFF;
	// stw r7,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r7.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r7,23360(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 23360);
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// sth r7,6(r5)
	REX_STORE_U16(ctx.r5.u32 + 6, ctx.r7.u16);
	// li r7,17
	ctx.r7.s64 = 17;
	// lwz r6,4(r5)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// rlwimi r6,r8,18,8,15
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 18) & 0xFF0000) | (ctx.r6.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r6,4(r5)
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r6.u32);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// lwz r9,23364(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 23364);
	// addi r31,r11,4
	r31.s64 = ctx.r11.s64 + 4;
	// sth r9,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r9.u16);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r9,r7,18,8,15
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 18) & 0xFF0000) | (ctx.r9.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// beq cr6,0x825abd48
	if (ctx.cr6.eq) goto loc_825ABD48;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// beq cr6,0x825abda4
	if (ctx.cr6.eq) goto loc_825ABDA4;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// beq cr6,0x825abd9c
	if (ctx.cr6.eq) goto loc_825ABD9C;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// beq cr6,0x825abd94
	if (ctx.cr6.eq) goto loc_825ABD94;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r6,r11,-8552
	ctx.r6.s64 = ctx.r11.s64 + -8552;
	// addi r5,r10,-31184
	ctx.r5.s64 = ctx.r10.s64 + -31184;
	// addi r4,r9,22852
	ctx.r4.s64 = ctx.r9.s64 + 22852;
	// li r7,8374
	ctx.r7.s64 = 8374;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825ABD48;
	sub_824EA978(ctx, base);
loc_825ABD48:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825ABD4C:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// clrlwi r9,r11,29
	ctx.r9.u64 = ctx.r11.u32 & 0x7;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// rlwinm r10,r10,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwimi r8,r11,4,25,27
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x70) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFF8F);
	// rlwinm r10,r10,0,28,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// rlwinm r9,r8,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r10,0,24,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFF8FF;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// rlwimi r10,r11,12,17,19
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x7000) | (ctx.r10.u64 & 0xFFFFFFFFFFFF8FFF);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
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
loc_825ABD94:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x825abd4c
	goto loc_825ABD4C;
loc_825ABD9C:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x825abd4c
	goto loc_825ABD4C;
loc_825ABDA4:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x825abd4c
	goto loc_825ABD4C;
}

DEFINE_REX_FUNC(sub_825B3638) {
	REX_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lbz r11,1380(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 1380);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825b3650
	if (ctx.cr0.eq) goto loc_825B3650;
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x824f0f18
	sub_824F0F18(ctx, base);
	return;
loc_825B3650:
	// lwz r3,8(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x824f0f18
	sub_824F0F18(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_825B3A18) {
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
	// lbz r11,1368(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 1368);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x825b3a40
	if (!ctx.cr0.eq) goto loc_825B3A40;
	// lwz r3,1372(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 1372);
	// bl 0x824eac18
	ctx.lr = 0x825B3A40;
	sub_824EAC18(ctx, base);
loc_825B3A40:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,1368(r31)
	REX_STORE_U8(r31.u32 + 1368, ctx.r11.u8);
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

DEFINE_REX_FUNC(sub_825B3FD0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// std r5,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x825b3f48
	ctx.lr = 0x825B4010;
	sub_825B3F48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825b3a18
	ctx.lr = 0x825B4018;
	sub_825B3A18(ctx, base);
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

DEFINE_REX_FUNC(sub_825B5AD8) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c8c
	ctx.lr = 0x825B5AE0;
	// stfd f31,-136(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -136, f31.u64);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r9,r10,-31152
	ctx.r9.s64 = ctx.r10.s64 + -31152;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r25,8(r9)
	r25.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// addi r18,r11,22852
	r18.s64 = ctx.r11.s64 + 22852;
	// addi r17,r10,-3048
	r17.s64 = ctx.r10.s64 + -3048;
	// bne cr6,0x825b5b30
	if (!ctx.cr6.eq) goto loc_825B5B30;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// addi r5,r11,-9704
	ctx.r5.s64 = ctx.r11.s64 + -9704;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// li r7,655
	ctx.r7.s64 = 655;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825B5B30;
	sub_824EA978(ctx, base);
loc_825B5B30:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x825b5b54
	if (!ctx.cr6.eq) goto loc_825B5B54;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// addi r5,r11,-26828
	ctx.r5.s64 = ctx.r11.s64 + -26828;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// li r7,656
	ctx.r7.s64 = 656;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825B5B54;
	sub_824EA978(ctx, base);
loc_825B5B54:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r29,67
	r29.s64 = 67;
	// addi r26,r11,-3632
	r26.s64 = ctx.r11.s64 + -3632;
	// addi r27,r26,-4
	r27.s64 = r26.s64 + -4;
loc_825B5B64:
	// lwzu r28,4(r27)
	ea = 4 + r27.u32;
	r28.u64 = REX_LOAD_U32(ea);
	r27.u32 = ea;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r31,r11,r25
	r31.u64 = ctx.r11.u64 + r25.u64;
	// lwzx r4,r11,r25
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + r25.u32);
	// bl 0x825b6b00
	ctx.lr = 0x825B5B7C;
	sub_825B6B00(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// andc r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x825b6b00
	ctx.lr = 0x825B5BA8;
	sub_825B6B00(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r28,r3,r11
	r28.u64 = ctx.r3.u64 + ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824f02c0
	ctx.lr = 0x825B5BC4;
	sub_824F02C0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// slw r11,r3,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r9,0(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 0);
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
	// bne 0x825b5b64
	if (!ctx.cr0.eq) goto loc_825B5B64;
	// li r20,0
	r20.s64 = 0;
	// mr r28,r20
	r28.u64 = r20.u64;
loc_825B5BF0:
	// addi r11,r26,268
	ctx.r11.s64 = r26.s64 + 268;
	// mr r29,r20
	r29.u64 = r20.u64;
	// addi r27,r11,4
	r27.s64 = ctx.r11.s64 + 4;
	// lwzx r11,r28,r27
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + r27.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x825b5ca4
	if (!ctx.cr6.gt) goto loc_825B5CA4;
loc_825B5C08:
	// addi r11,r26,268
	ctx.r11.s64 = r26.s64 + 268;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwzx r4,r28,r11
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + ctx.r11.u32);
	// bl 0x825b57a8
	ctx.lr = 0x825B5C20;
	sub_825B57A8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r31,r11,r25
	r31.u64 = ctx.r11.u64 + r25.u64;
	// lwzx r4,r11,r25
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + r25.u32);
	// bl 0x825b6b00
	ctx.lr = 0x825B5C38;
	sub_825B6B00(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// andc r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x825b6b00
	ctx.lr = 0x825B5C64;
	sub_825B6B00(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r9,96(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 8);
	// slw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// and r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 & ctx.r8.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwzx r11,r28,r27
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + r27.u32);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x825b5c08
	if (ctx.cr6.lt) goto loc_825B5C08;
loc_825B5CA4:
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// cmplwi cr6,r28,48
	ctx.cr6.compare<uint32_t>(r28.u32, 48, ctx.xer);
	// blt cr6,0x825b5bf0
	if (ctx.cr6.lt) goto loc_825B5BF0;
	// lwz r11,24(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 24);
	// mr r31,r20
	r31.u64 = r20.u64;
	// addi r27,r1,80
	r27.s64 = ctx.r1.s64 + 80;
	// addi r19,r11,8
	r19.s64 = ctx.r11.s64 + 8;
	// addi r11,r19,4
	ctx.r11.s64 = r19.s64 + 4;
	// addi r10,r19,12
	ctx.r10.s64 = r19.s64 + 12;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r11,r19,20
	ctx.r11.s64 = r19.s64 + 20;
	// addi r9,r19,16
	ctx.r9.s64 = r19.s64 + 16;
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r9,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// addi r26,r11,-2488
	r26.s64 = ctx.r11.s64 + -2488;
loc_825B5CE8:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,33
	ctx.r4.s64 = 33;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824f05f0
	ctx.lr = 0x825B5CF8;
	sub_824F05F0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,34
	ctx.r4.s64 = 34;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824f05f0
	ctx.lr = 0x825B5D0C;
	sub_824F05F0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825b5d64
	if (ctx.cr0.eq) goto loc_825B5D64;
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825d7808
	ctx.lr = 0x825B5D24;
	sub_825D7808(ctx, base);
	// lwz r29,0(r27)
	r29.u64 = REX_LOAD_U32(r27.u32 + 0);
	// rlwinm. r11,r28,0,0,20
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFF800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r20,0(r29)
	REX_STORE_U32(r29.u32 + 0, r20.u32);
	// beq 0x825b5d4c
	if (ctx.cr0.eq) goto loc_825B5D4C;
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// li r7,718
	ctx.r7.s64 = 718;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825B5D4C;
	sub_824EA978(ctx, base);
loc_825B5D4C:
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm r11,r11,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// or r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 | r28.u64;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
loc_825B5D64:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(r31.u32, 4, ctx.xer);
	// blt cr6,0x825b5ce8
	if (ctx.cr6.lt) goto loc_825B5CE8;
	// li r4,46
	ctx.r4.s64 = 46;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824f02c0
	ctx.lr = 0x825B5D80;
	sub_824F02C0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825b5a18
	ctx.lr = 0x825B5D8C;
	sub_825B5A18(ctx, base);
	// rlwinm. r11,r31,0,0,20
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFF800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// beq 0x825b5db0
	if (ctx.cr0.eq) goto loc_825B5DB0;
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// li r7,739
	ctx.r7.s64 = 739;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825B5DB0;
	sub_824EA978(ctx, base);
loc_825B5DB0:
	// lwz r11,8(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 8);
	// li r4,652
	ctx.r4.s64 = 652;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwimi r11,r29,16,15,15
	ctx.r11.u64 = (__builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 16) & 0x10000) | (ctx.r11.u64 & 0xFFFFFFFFFFFEFFFF);
	// rlwimi r11,r31,0,20,31
	ctx.r11.u64 = (__builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF000);
	// stw r11,8(r19)
	REX_STORE_U32(r19.u32 + 8, ctx.r11.u32);
	// bl 0x824f02c0
	ctx.lr = 0x825B5DCC;
	sub_824F02C0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r4,957
	ctx.r4.s64 = 957;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824f02c0
	ctx.lr = 0x825B5DDC;
	sub_824F02C0(ctx, base);
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// bne cr6,0x825b5dfc
	if (!ctx.cr6.eq) goto loc_825B5DFC;
	// clrlwi. r11,r31,28
	ctx.r11.u64 = r31.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825b5e20
	if (ctx.cr0.eq) goto loc_825B5E20;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,755
	ctx.r7.s64 = 755;
	// addi r5,r11,-2508
	ctx.r5.s64 = ctx.r11.s64 + -2508;
	// b 0x825b5e10
	goto loc_825B5E10;
loc_825B5DFC:
	// clrlwi. r11,r31,27
	ctx.r11.u64 = r31.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825b5e20
	if (ctx.cr0.eq) goto loc_825B5E20;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,759
	ctx.r7.s64 = 759;
	// addi r5,r11,-2528
	ctx.r5.s64 = ctx.r11.s64 + -2528;
loc_825B5E10:
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825B5E20;
	sub_824EA978(ctx, base);
loc_825B5E20:
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 0);
	// li r4,654
	ctx.r4.s64 = 654;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwimi r11,r31,0,18,31
	ctx.r11.u64 = (__builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x3FFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFFC000);
	// rlwinm r11,r11,0,16,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFCFFFF;
	// stw r11,0(r19)
	REX_STORE_U32(r19.u32 + 0, ctx.r11.u32);
	// lwz r11,28(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 28);
	// addi r31,r11,8
	r31.s64 = ctx.r11.s64 + 8;
	// bl 0x824f02c0
	ctx.lr = 0x825B5E44;
	sub_824F02C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x825b5e54
	if (!ctx.cr0.eq) goto loc_825B5E54;
	// sth r20,8(r31)
	REX_STORE_U16(r31.u32 + 8, r20.u16);
	// b 0x825b5e90
	goto loc_825B5E90;
loc_825B5E54:
	// li r4,654
	ctx.r4.s64 = 654;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824f02c0
	ctx.lr = 0x825B5E60;
	sub_824F02C0(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x825b5e84
	if (ctx.cr6.eq) goto loc_825B5E84;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// addi r5,r11,-2576
	ctx.r5.s64 = ctx.r11.s64 + -2576;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// li r7,786
	ctx.r7.s64 = 786;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825B5E84;
	sub_824EA978(ctx, base);
loc_825B5E84:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
loc_825B5E90:
	// li r4,572
	ctx.r4.s64 = 572;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824f02c0
	ctx.lr = 0x825B5E9C;
	sub_824F02C0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r10,r3,-1
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// stw r20,12(r31)
	REX_STORE_U32(r31.u32 + 12, r20.u32);
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// stw r20,16(r31)
	REX_STORE_U32(r31.u32 + 16, r20.u32);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r27,r20
	r27.u64 = r20.u64;
	// sth r20,8(r31)
	REX_STORE_U16(r31.u32 + 8, r20.u16);
	// rlwinm r25,r10,27,31,31
	r25.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mr r28,r20
	r28.u64 = r20.u64;
	// li r22,1
	r22.s64 = 1;
	// addi r26,r11,-2648
	r26.s64 = ctx.r11.s64 + -2648;
loc_825B5ED4:
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lwz r3,52(r21)
	ctx.r3.u64 = REX_LOAD_U32(r21.u32 + 52);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x824f06a0
	ctx.lr = 0x825B5EE4;
	sub_824F06A0(ctx, base);
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825b5ff4
	if (ctx.cr6.eq) goto loc_825B5FF4;
	// lwz r11,264(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825b5f18
	if (ctx.cr6.eq) goto loc_825B5F18;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x825b5fd8
	if (ctx.cr6.eq) goto loc_825B5FD8;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// slw r10,r22,r27
	ctx.r10.u64 = r27.u8 & 0x20 ? 0 : (r22.u32 << (r27.u8 & 0x3F));
	// andc r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r10.u64;
	// sth r11,10(r31)
	REX_STORE_U16(r31.u32 + 10, ctx.r11.u16);
	// b 0x825b5fd8
	goto loc_825B5FD8;
loc_825B5F18:
	// lwz r11,268(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825b5fd8
	if (ctx.cr6.eq) goto loc_825B5FD8;
	// mr r29,r20
	r29.u64 = r20.u64;
loc_825B5F28:
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,148
	ctx.r10.s64 = ctx.r1.s64 + 148;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwzx r5,r11,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x824f05f0
	ctx.lr = 0x825B5F40;
	sub_824F05F0(ctx, base);
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(r29.u32, 1, ctx.xer);
	// blt cr6,0x825b5f8c
	if (ctx.cr6.lt) goto loc_825B5F8C;
	// beq cr6,0x825b5f84
	if (ctx.cr6.eq) goto loc_825B5F84;
	// cmplwi cr6,r29,3
	ctx.cr6.compare<uint32_t>(r29.u32, 3, ctx.xer);
	// blt cr6,0x825b5f7c
	if (ctx.cr6.lt) goto loc_825B5F7C;
	// beq cr6,0x825b5f74
	if (ctx.cr6.eq) goto loc_825B5F74;
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// li r7,877
	ctx.r7.s64 = 877;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825B5F70;
	sub_824EA978(ctx, base);
	// b 0x825b5fcc
	goto loc_825B5FCC;
loc_825B5F74:
	// rlwinm r11,r3,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8;
	// b 0x825b5f90
	goto loc_825B5F90;
loc_825B5F7C:
	// rlwinm r11,r3,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x4;
	// b 0x825b5f90
	goto loc_825B5F90;
loc_825B5F84:
	// rlwinm r11,r3,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x2;
	// b 0x825b5f90
	goto loc_825B5F90;
loc_825B5F8C:
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
loc_825B5F90:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825b5fcc
	if (ctx.cr6.eq) goto loc_825B5FCC;
	// cmplwi cr6,r28,32
	ctx.cr6.compare<uint32_t>(r28.u32, 32, ctx.xer);
	// add r11,r28,r29
	ctx.r11.u64 = r28.u64 + r29.u64;
	// bge cr6,0x825b5fb8
	if (!ctx.cr6.lt) goto loc_825B5FB8;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// slw r11,r22,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (r22.u32 << (ctx.r11.u8 & 0x3F));
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// b 0x825b5fcc
	goto loc_825B5FCC;
loc_825B5FB8:
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// slw r11,r22,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (r22.u32 << (ctx.r11.u8 & 0x3F));
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
loc_825B5FCC:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(r29.s32, 4, ctx.xer);
	// blt cr6,0x825b5f28
	if (ctx.cr6.lt) goto loc_825B5F28;
loc_825B5FD8:
	// lwz r11,260(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825b5ff4
	if (!ctx.cr6.eq) goto loc_825B5FF4;
	// lhz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 8);
	// slw r10,r22,r27
	ctx.r10.u64 = r27.u8 & 0x20 ? 0 : (r22.u32 << (r27.u8 & 0x3F));
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// sth r11,8(r31)
	REX_STORE_U16(r31.u32 + 8, ctx.r11.u16);
loc_825B5FF4:
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// cmplwi cr6,r28,64
	ctx.cr6.compare<uint32_t>(r28.u32, 64, ctx.xer);
	// blt cr6,0x825b5ed4
	if (ctx.cr6.lt) goto loc_825B5ED4;
	// li r4,95
	ctx.r4.s64 = 95;
	// lwz r31,32(r21)
	r31.u64 = REX_LOAD_U32(r21.u32 + 32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824f02c0
	ctx.lr = 0x825B6014;
	sub_824F02C0(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// rlwimi r10,r11,16,15,15
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x10000) | (ctx.r10.u64 & 0xFFFFFFFFFFFEFFFF);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// stw r10,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r10.u32);
	// bl 0x825b5888
	ctx.lr = 0x825B6038;
	sub_825B5888(ctx, base);
	// li r4,571
	ctx.r4.s64 = 571;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r29,r22
	r29.u64 = r22.u64;
	// bl 0x824f02c0
	ctx.lr = 0x825B6048;
	sub_824F02C0(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bne cr6,0x825b606c
	if (!ctx.cr6.eq) goto loc_825B606C;
	// li r4,570
	ctx.r4.s64 = 570;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824f02c0
	ctx.lr = 0x825B605C;
	sub_824F02C0(ctx, base);
	// addi r11,r3,-2
	ctx.r11.s64 = ctx.r3.s64 + -2;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r29,r11,r29
	r29.u64 = ctx.r11.u64 & r29.u64;
loc_825B606C:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// li r4,154
	ctx.r4.s64 = 154;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwimi r11,r29,3,27,28
	ctx.r11.u64 = (__builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 3) & 0x18) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFE7);
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
	// bl 0x824f02c0
	ctx.lr = 0x825B6084;
	sub_824F02C0(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// li r4,28
	ctx.r4.s64 = 28;
	// rlwimi r11,r3,0,26,31
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x3F) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFC0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
	// bl 0x824f02c0
	ctx.lr = 0x825B609C;
	sub_824F02C0(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// li r4,27
	ctx.r4.s64 = 27;
	// rlwimi r11,r3,0,29,31
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x7) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFF8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// bl 0x824f02c0
	ctx.lr = 0x825B60B4;
	sub_824F02C0(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// li r4,29
	ctx.r4.s64 = 29;
	// rlwimi r11,r3,3,28,28
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0x8) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFF7);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// bl 0x824f02c0
	ctx.lr = 0x825B60CC;
	sub_824F02C0(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// li r4,671
	ctx.r4.s64 = 671;
	// clrlwi r11,r11,8
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFFFF;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r11,r11,0,28,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// bl 0x824f02c0
	ctx.lr = 0x825B60E8;
	sub_824F02C0(ctx, base);
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r4,128
	ctx.r4.s64 = 128;
	// rlwimi r3,r11,0,0,28
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8) | (ctx.r3.u64 & 0xFFFFFFFF00000007);
	// rlwinm r11,r10,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r3,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// lwz r11,36(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 36);
	// addi r31,r11,8
	r31.s64 = ctx.r11.s64 + 8;
	// bl 0x825a57a8
	ctx.lr = 0x825B6114;
	sub_825A57A8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,12
	ctx.r4.s64 = 12;
	// lfs f31,3720(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3720);
	f31.f64 = double(temp.f32);
	// fmuls f1,f1,f31
	ctx.f1.f64 = double(float(ctx.f1.f64 * f31.f64));
	// bl 0x825d7000
	ctx.lr = 0x825B612C;
	sub_825D7000(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// li r4,129
	ctx.r4.s64 = 129;
	// sth r11,0(r31)
	REX_STORE_U16(r31.u32 + 0, ctx.r11.u16);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// sth r11,2(r31)
	REX_STORE_U16(r31.u32 + 2, ctx.r11.u16);
	// bl 0x825a57a8
	ctx.lr = 0x825B6144;
	sub_825A57A8(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,12
	ctx.r4.s64 = 12;
	// fmuls f1,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 * f31.f64));
	// bl 0x825d7000
	ctx.lr = 0x825B6154;
	sub_825D7000(ctx, base);
	// sth r3,6(r31)
	REX_STORE_U16(r31.u32 + 6, ctx.r3.u16);
	// li r4,130
	ctx.r4.s64 = 130;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825a57a8
	ctx.lr = 0x825B6164;
	sub_825A57A8(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,12
	ctx.r4.s64 = 12;
	// fmuls f1,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 * f31.f64));
	// bl 0x825d7000
	ctx.lr = 0x825B6174;
	sub_825D7000(ctx, base);
	// sth r3,4(r31)
	REX_STORE_U16(r31.u32 + 4, ctx.r3.u16);
	// li r4,573
	ctx.r4.s64 = 573;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825a57a8
	ctx.lr = 0x825B6184;
	sub_825A57A8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,971
	ctx.r4.s64 = 971;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f0,5436(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 5436);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm r11,r11,31,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0xFFFF;
	// sth r11,10(r31)
	REX_STORE_U16(r31.u32 + 10, ctx.r11.u16);
	// bl 0x824f02c0
	ctx.lr = 0x825B61B0;
	sub_824F02C0(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x825b64a0
	if (!ctx.cr6.eq) goto loc_825B64A0;
	// li r4,974
	ctx.r4.s64 = 974;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824f02c0
	ctx.lr = 0x825B61C4;
	sub_824F02C0(ctx, base);
	// li r27,2
	r27.s64 = 2;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// stw r3,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// beq cr6,0x825b61dc
	if (ctx.cr6.eq) goto loc_825B61DC;
	// stw r22,12(r31)
	REX_STORE_U32(r31.u32 + 12, r22.u32);
	// b 0x825b61e0
	goto loc_825B61E0;
loc_825B61DC:
	// stw r27,12(r31)
	REX_STORE_U32(r31.u32 + 12, r27.u32);
loc_825B61E0:
	// li r4,973
	ctx.r4.s64 = 973;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825a57a8
	ctx.lr = 0x825B61EC;
	sub_825A57A8(ctx, base);
	// stfs f1,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 20, temp.u32);
	// li r4,972
	ctx.r4.s64 = 972;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825a57a8
	ctx.lr = 0x825B61FC;
	sub_825A57A8(ctx, base);
	// li r11,14
	ctx.r11.s64 = 14;
	// stfs f1,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 24, temp.u32);
	// li r4,567
	ctx.r4.s64 = 567;
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824f02c0
	ctx.lr = 0x825B6214;
	sub_824F02C0(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// li r4,568
	ctx.r4.s64 = 568;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824f02c0
	ctx.lr = 0x825B6224;
	sub_824F02C0(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// li r4,569
	ctx.r4.s64 = 569;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824f02c0
	ctx.lr = 0x825B6234;
	sub_824F02C0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r23,4
	r23.s64 = 4;
	// addi r28,r3,1
	r28.s64 = ctx.r3.s64 + 1;
	// cmplwi cr6,r25,1
	ctx.cr6.compare<uint32_t>(r25.u32, 1, ctx.xer);
	// addi r26,r11,-31184
	r26.s64 = ctx.r11.s64 + -31184;
	// blt cr6,0x825b6280
	if (ctx.cr6.lt) goto loc_825B6280;
	// beq cr6,0x825b6284
	if (ctx.cr6.eq) goto loc_825B6284;
	// cmplwi cr6,r25,3
	ctx.cr6.compare<uint32_t>(r25.u32, 3, ctx.xer);
	// blt cr6,0x825b62cc
	if (ctx.cr6.lt) goto loc_825B62CC;
	// beq cr6,0x825b62cc
	if (ctx.cr6.eq) goto loc_825B62CC;
	// cmplwi cr6,r25,5
	ctx.cr6.compare<uint32_t>(r25.u32, 5, ctx.xer);
	// blt cr6,0x825b62c4
	if (ctx.cr6.lt) goto loc_825B62C4;
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// li r7,1138
	ctx.r7.s64 = 1138;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825B6280;
	sub_824EA978(ctx, base);
loc_825B6280:
	// mr r27,r22
	r27.u64 = r22.u64;
loc_825B6284:
	// cmplwi cr6,r24,1
	ctx.cr6.compare<uint32_t>(r24.u32, 1, ctx.xer);
	// blt cr6,0x825b62e8
	if (ctx.cr6.lt) goto loc_825B62E8;
	// beq cr6,0x825b62d4
	if (ctx.cr6.eq) goto loc_825B62D4;
	// cmplwi cr6,r24,3
	ctx.cr6.compare<uint32_t>(r24.u32, 3, ctx.xer);
	// blt cr6,0x825b62bc
	if (ctx.cr6.lt) goto loc_825B62BC;
	// beq cr6,0x825b62bc
	if (ctx.cr6.eq) goto loc_825B62BC;
	// cmplwi cr6,r24,5
	ctx.cr6.compare<uint32_t>(r24.u32, 5, ctx.xer);
	// blt cr6,0x825b62bc
	if (ctx.cr6.lt) goto loc_825B62BC;
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// li r7,1168
	ctx.r7.s64 = 1168;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825B62BC;
	sub_824EA978(ctx, base);
loc_825B62BC:
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// b 0x825b62ec
	goto loc_825B62EC;
loc_825B62C4:
	// mr r27,r23
	r27.u64 = r23.u64;
	// b 0x825b6284
	goto loc_825B6284;
loc_825B62CC:
	// li r27,3
	r27.s64 = 3;
	// b 0x825b6284
	goto loc_825B6284;
loc_825B62D4:
	// addi r11,r25,-4
	ctx.r11.s64 = r25.s64 + -4;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// b 0x825b62ec
	goto loc_825B62EC;
loc_825B62E8:
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
loc_825B62EC:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 12);
	// rlwimi r11,r24,16,13,15
	ctx.r11.u64 = (__builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 16) & 0x70000) | (ctx.r11.u64 & 0xFFFFFFFFFFF8FFFF);
	// stw r27,36(r31)
	REX_STORE_U32(r31.u32 + 36, r27.u32);
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// stw r10,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r10.u32);
	// rlwimi r11,r25,0,28,31
	ctx.r11.u64 = (__builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0xF) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFF0);
	// rlwinm r11,r11,0,18,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFF3FFF;
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
	// bne cr6,0x825b63ac
	if (!ctx.cr6.eq) goto loc_825B63AC;
	// clrlwi r9,r29,28
	ctx.r9.u64 = r29.u32 & 0xF;
	// lwz r8,44(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 44);
	// rlwinm r7,r29,16,12,15
	ctx.r7.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 16) & 0xF0000;
	// lwz r6,48(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 48);
	// rlwinm r5,r29,24,4,7
	ctx.r5.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 24) & 0xF000000;
	// stw r22,36(r31)
	REX_STORE_U32(r31.u32 + 36, r22.u32);
	// or r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 | ctx.r9.u64;
	// stw r22,40(r31)
	REX_STORE_U32(r31.u32 + 40, r22.u32);
	// lis r12,3855
	ctx.r12.s64 = 252641280;
	// or r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 | ctx.r5.u64;
	// rlwimi r9,r28,4,24,27
	ctx.r9.u64 = (__builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 4) & 0xF0) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFF0F);
	// ori r12,r12,3855
	ctx.r12.u64 = ctx.r12.u64 | 3855;
	// rlwinm r9,r9,8,16,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFF00;
	// and r7,r7,r12
	ctx.r7.u64 = ctx.r7.u64 & ctx.r12.u64;
	// lis r5,24647
	ctx.r5.s64 = 1615265792;
	// li r4,7
	ctx.r4.s64 = 7;
	// or r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 | ctx.r9.u64;
	// mullw r3,r27,r28
	ctx.r3.s64 = int64_t(r27.s32) * int64_t(r28.s32);
	// rlwinm r7,r28,21,8,10
	ctx.r7.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 21) & 0xE00000;
	// ori r5,r5,9991
	ctx.r5.u64 = ctx.r5.u64 | 9991;
	// rlwinm r11,r11,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// rlwimi r8,r4,0,28,31
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xF) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFF0);
	// rlwimi r6,r22,0,28,31
	ctx.r6.u64 = (__builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 0) & 0xF) | (ctx.r6.u64 & 0xFFFFFFFFFFFFFFF0);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// stw r8,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r8.u32);
	// mullw r10,r10,r28
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r28.s32);
	// stw r6,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r6.u32);
	// stb r4,46(r31)
	REX_STORE_U8(r31.u32 + 46, ctx.r4.u8);
	// stb r20,45(r31)
	REX_STORE_U8(r31.u32 + 45, r20.u8);
	// stb r4,50(r31)
	REX_STORE_U8(r31.u32 + 50, ctx.r4.u8);
	// stb r10,49(r31)
	REX_STORE_U8(r31.u32 + 49, ctx.r10.u8);
	// rlwinm r11,r11,0,16,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFF8FFFF;
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// rlwimi r5,r29,24,4,7
	ctx.r5.u64 = (__builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 24) & 0xF000000) | (ctx.r5.u64 & 0xFFFFFFFFF0FFFFFF);
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
	// stw r9,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r9.u32);
	// stw r5,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r5.u32);
	// b 0x825b64a0
	goto loc_825B64A0;
loc_825B63AC:
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// bne cr6,0x825b6414
	if (!ctx.cr6.eq) goto loc_825B6414;
	// lwz r9,44(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 44);
	// li r8,13
	ctx.r8.s64 = 13;
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lis r7,24897
	ctx.r7.s64 = 1631649792;
	// rlwimi r9,r22,0,28,31
	ctx.r9.u64 = (__builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 0) & 0xF) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFF0);
	// stw r23,36(r31)
	REX_STORE_U32(r31.u32 + 36, r23.u32);
	// lis r6,24902
	ctx.r6.s64 = 1631977472;
	// stw r23,40(r31)
	REX_STORE_U32(r31.u32 + 40, r23.u32);
	// stw r9,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r9.u32);
	// ori r5,r10,15
	ctx.r5.u64 = ctx.r10.u64 | 15;
	// rlwimi r11,r8,0,28,31
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xF) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFF0);
	// stb r20,45(r31)
	REX_STORE_U8(r31.u32 + 45, r20.u8);
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r5,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r5.u32);
	// ori r9,r7,8455
	ctx.r9.u64 = ctx.r7.u64 | 8455;
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
	// ori r8,r6,9734
	ctx.r8.u64 = ctx.r6.u64 | 9734;
	// stb r10,46(r31)
	REX_STORE_U8(r31.u32 + 46, ctx.r10.u8);
	// stw r9,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r9.u32);
	// stb r10,50(r31)
	REX_STORE_U8(r31.u32 + 50, ctx.r10.u8);
	// stb r10,49(r31)
	REX_STORE_U8(r31.u32 + 49, ctx.r10.u8);
	// stw r8,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r8.u32);
	// b 0x825b64a0
	goto loc_825B64A0;
loc_825B6414:
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// clrlwi r9,r29,28
	ctx.r9.u64 = r29.u32 & 0xF;
	// lwz r6,48(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 48);
	// li r7,7
	ctx.r7.s64 = 7;
	// rlwinm r11,r11,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// lwz r8,44(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 44);
	// mullw r5,r27,r28
	ctx.r5.s64 = int64_t(r27.s32) * int64_t(r28.s32);
	// stw r20,56(r31)
	REX_STORE_U32(r31.u32 + 56, r20.u32);
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// rlwimi r8,r7,0,28,31
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xF) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFF0);
	// rlwimi r11,r29,8,20,23
	ctx.r11.u64 = (__builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 8) & 0xF00) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF0FF);
	// mullw r10,r10,r28
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r28.s32);
	// stw r8,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r8.u32);
	// stw r11,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r11.u32);
	// lwz r9,52(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 52);
	// stb r5,46(r31)
	REX_STORE_U8(r31.u32 + 46, ctx.r5.u8);
	// stb r10,45(r31)
	REX_STORE_U8(r31.u32 + 45, ctx.r10.u8);
	// rlwinm r11,r6,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFF0;
	// rlwimi r9,r29,16,12,15
	ctx.r9.u64 = (__builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 16) & 0xF0000) | (ctx.r9.u64 & 0xFFFFFFFFFFF0FFFF);
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// stw r9,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r9.u32);
	// rlwimi r11,r29,24,4,7
	ctx.r11.u64 = (__builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 24) & 0xF000000) | (ctx.r11.u64 & 0xFFFFFFFFF0FFFFFF);
	// stb r20,50(r31)
	REX_STORE_U8(r31.u32 + 50, r20.u8);
	// stb r20,49(r31)
	REX_STORE_U8(r31.u32 + 49, r20.u8);
	// rlwinm r11,r11,0,28,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF0F;
	// stw r11,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// rlwimi r11,r28,12,16,19
	ctx.r11.u64 = (__builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 12) & 0xF000) | (ctx.r11.u64 & 0xFFFFFFFFFFFF0FFF);
	// stw r11,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// rlwimi r11,r28,21,8,10
	ctx.r11.u64 = (__builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 21) & 0xE00000) | (ctx.r11.u64 & 0xFFFFFFFFFF1FFFFF);
	// clrlwi r11,r11,4
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFFFFF;
	// rlwinm r11,r11,0,12,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF;
	// stw r11,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r11.u32);
loc_825B64A0:
	// lwz r11,40(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 40);
	// li r4,624
	ctx.r4.s64 = 624;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r31,r11,8
	r31.s64 = ctx.r11.s64 + 8;
	// bl 0x825a57a8
	ctx.lr = 0x825B64B4;
	sub_825A57A8(ctx, base);
	// stfs f1,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// li r4,625
	ctx.r4.s64 = 625;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825a57a8
	ctx.lr = 0x825B64C4;
	sub_825A57A8(ctx, base);
	// stfs f1,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// li r4,626
	ctx.r4.s64 = 626;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825a57a8
	ctx.lr = 0x825B64D4;
	sub_825A57A8(ctx, base);
	// stfs f1,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// li r4,627
	ctx.r4.s64 = 627;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825a57a8
	ctx.lr = 0x825B64E4;
	sub_825A57A8(ctx, base);
	// stfs f1,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,34
	ctx.r4.s64 = 34;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824f05f0
	ctx.lr = 0x825B64F8;
	sub_824F05F0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825b6510
	if (ctx.cr0.eq) goto loc_825B6510;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825d7388
	ctx.lr = 0x825B6510;
	sub_825D7388(ctx, base);
loc_825B6510:
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r6,104(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// lwz r5,100(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// subfe r8,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x825d71a8
	ctx.lr = 0x825B6534;
	sub_825D71A8(ctx, base);
	// cmplwi cr6,r3,8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 8, ctx.xer);
	// bgt cr6,0x825b65a8
	if (ctx.cr6.gt) goto loc_825B65A8;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x825b6568
	if (ctx.cr6.eq) goto loc_825B6568;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// addi r5,r11,-2684
	ctx.r5.s64 = ctx.r11.s64 + -2684;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// li r7,1366
	ctx.r7.s64 = 1366;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825B6568;
	sub_824EA978(ctx, base);
loc_825B6568:
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x825b6594
	if (ctx.cr6.eq) goto loc_825B6594;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// addi r5,r11,-2716
	ctx.r5.s64 = ctx.r11.s64 + -2716;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// li r7,1367
	ctx.r7.s64 = 1367;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825B6594;
	sub_824EA978(ctx, base);
loc_825B6594:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,124(r31)
	REX_STORE_U32(r31.u32 + 124, ctx.r11.u32);
	// stw r10,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r10.u32);
	// b 0x825b65b0
	goto loc_825B65B0;
loc_825B65A8:
	// stw r20,124(r31)
	REX_STORE_U32(r31.u32 + 124, r20.u32);
	// stw r20,120(r31)
	REX_STORE_U32(r31.u32 + 120, r20.u32);
loc_825B65B0:
	// li r4,53
	ctx.r4.s64 = 53;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825a57a8
	ctx.lr = 0x825B65BC;
	sub_825A57A8(ctx, base);
	// bl 0x825f4f08
	ctx.lr = 0x825B65C0;
	sub_825F4F08(ctx, base);
	// stw r3,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r3.u32);
	// li r4,672
	ctx.r4.s64 = 672;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824f02c0
	ctx.lr = 0x825B65D0;
	sub_824F02C0(ctx, base);
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// li r4,673
	ctx.r4.s64 = 673;
	// rlwimi r11,r3,0,29,31
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x7) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFF8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r11.u32);
	// bl 0x824f02c0
	ctx.lr = 0x825B65E8;
	sub_824F02C0(ctx, base);
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// li r4,618
	ctx.r4.s64 = 618;
	// rlwimi r11,r3,4,25,27
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0x70) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF8F);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r11.u32);
	// bl 0x824f02c0
	ctx.lr = 0x825B6600;
	sub_824F02C0(ctx, base);
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// li r4,55
	ctx.r4.s64 = 55;
	// rlwimi r11,r3,8,23,23
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0x100) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFEFF);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r11.u32);
	// bl 0x824f02c0
	ctx.lr = 0x825B6618;
	sub_824F02C0(ctx, base);
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// li r4,674
	ctx.r4.s64 = 674;
	// rlwimi r11,r3,9,22,22
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 9) & 0x200) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFDFF);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r11.u32);
	// bl 0x824f02c0
	ctx.lr = 0x825B6630;
	sub_824F02C0(ctx, base);
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// li r4,675
	ctx.r4.s64 = 675;
	// rlwimi r11,r3,20,10,11
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 20) & 0x300000) | (ctx.r11.u64 & 0xFFFFFFFFFFCFFFFF);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r11.u32);
	// bl 0x824f02c0
	ctx.lr = 0x825B6648;
	sub_824F02C0(ctx, base);
	// stw r3,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r3.u32);
	// li r4,680
	ctx.r4.s64 = 680;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824f02c0
	ctx.lr = 0x825B6658;
	sub_824F02C0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// clrlwi. r11,r3,27
	ctx.r11.u64 = ctx.r3.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825b6680
	if (ctx.cr0.eq) goto loc_825B6680;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// addi r5,r11,-2740
	ctx.r5.s64 = ctx.r11.s64 + -2740;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// li r7,1417
	ctx.r7.s64 = 1417;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825B6680;
	sub_824EA978(ctx, base);
loc_825B6680:
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// li r4,681
	ctx.r4.s64 = 681;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwimi r11,r29,0,18,31
	ctx.r11.u64 = (__builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x3FFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFFC000);
	// stw r11,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r11.u32);
	// bl 0x824f02c0
	ctx.lr = 0x825B6698;
	sub_824F02C0(ctx, base);
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// li r4,676
	ctx.r4.s64 = 676;
	// rlwimi r11,r3,16,2,15
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0x3FFF0000) | (ctx.r11.u64 & 0xFFFFFFFFC000FFFF);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r11.u32);
	// bl 0x824f02c0
	ctx.lr = 0x825B66B0;
	sub_824F02C0(ctx, base);
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// li r4,622
	ctx.r4.s64 = 622;
	// rlwimi r11,r3,0,29,31
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x7) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFF8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r11.u32);
	// bl 0x824f02c0
	ctx.lr = 0x825B66C8;
	sub_824F02C0(ctx, base);
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// li r4,621
	ctx.r4.s64 = 621;
	// rlwimi r11,r3,3,28,28
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0x8) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFF7);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r11.u32);
	// bl 0x824f02c0
	ctx.lr = 0x825B66E0;
	sub_824F02C0(ctx, base);
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// li r4,670
	ctx.r4.s64 = 670;
	// rlwimi r11,r3,4,25,27
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0x70) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF8F);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r11.u32);
	// bl 0x824f02c0
	ctx.lr = 0x825B66F8;
	sub_824F02C0(ctx, base);
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// li r4,677
	ctx.r4.s64 = 677;
	// rlwimi r11,r3,7,19,24
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 7) & 0x1F80) | (ctx.r11.u64 & 0xFFFFFFFFFFFFE07F);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r11.u32);
	// bl 0x824f02c0
	ctx.lr = 0x825B6710;
	sub_824F02C0(ctx, base);
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// li r4,678
	ctx.r4.s64 = 678;
	// rlwimi r11,r3,13,16,18
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 13) & 0xE000) | (ctx.r11.u64 & 0xFFFFFFFFFFFF1FFF);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r11.u32);
	// bl 0x824f02c0
	ctx.lr = 0x825B6728;
	sub_824F02C0(ctx, base);
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// li r4,679
	ctx.r4.s64 = 679;
	// rlwimi r11,r3,16,10,15
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0x3F0000) | (ctx.r11.u64 & 0xFFFFFFFFFFC0FFFF);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r11.u32);
	// bl 0x824f02c0
	ctx.lr = 0x825B6740;
	sub_824F02C0(ctx, base);
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// li r4,682
	ctx.r4.s64 = 682;
	// rlwimi r11,r3,24,7,7
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0x1000000) | (ctx.r11.u64 & 0xFFFFFFFFFEFFFFFF);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r11.u32);
	// bl 0x824f02c0
	ctx.lr = 0x825B6758;
	sub_824F02C0(ctx, base);
	// lwz r11,128(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 128);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r4,684
	ctx.r4.s64 = 684;
	// rlwimi r10,r11,0,0,28
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8) | (ctx.r10.u64 & 0xFFFFFFFF00000007);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,128(r31)
	REX_STORE_U32(r31.u32 + 128, ctx.r10.u32);
	// bl 0x824f02c0
	ctx.lr = 0x825B6774;
	sub_824F02C0(ctx, base);
	// lwz r11,128(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 128);
	// li r4,683
	ctx.r4.s64 = 683;
	// rlwimi r11,r3,4,25,27
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0x70) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF8F);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,128(r31)
	REX_STORE_U32(r31.u32 + 128, ctx.r11.u32);
	// bl 0x824f02c0
	ctx.lr = 0x825B678C;
	sub_824F02C0(ctx, base);
	// lwz r11,128(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 128);
	// li r4,685
	ctx.r4.s64 = 685;
	// rlwimi r11,r3,8,21,23
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,128(r31)
	REX_STORE_U32(r31.u32 + 128, ctx.r11.u32);
	// bl 0x824f02c0
	ctx.lr = 0x825B67A4;
	sub_824F02C0(ctx, base);
	// lwz r11,128(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 128);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r20,132(r31)
	REX_STORE_U32(r31.u32 + 132, r20.u32);
	// rlwimi r11,r3,12,17,19
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 12) & 0x7000) | (ctx.r11.u64 & 0xFFFFFFFFFFFF8FFF);
	// stw r10,136(r31)
	REX_STORE_U32(r31.u32 + 136, ctx.r10.u32);
	// stw r11,128(r31)
	REX_STORE_U32(r31.u32 + 128, ctx.r11.u32);
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 0);
	// rlwinm r11,r11,0,16,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFCFFFF;
	// stw r11,0(r19)
	REX_STORE_U32(r19.u32 + 0, ctx.r11.u32);
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// rlwinm r11,r11,0,28,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// stw r11,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r11.u32);
	// stw r22,64(r21)
	REX_STORE_U32(r21.u32 + 64, r22.u32);
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// lfd f31,-136(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x826a1cdc
	return;
}

DEFINE_REX_FUNC(sub_8260ADC0) {
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
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8260adf8
	if (ctx.cr6.eq) goto loc_8260ADF8;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8260ADF0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_8260ADF8:
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

DEFINE_REX_FUNC(sub_8260C100) {
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
loc_8260C114:
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
	// bne 0x8260c114
	if (!ctx.cr0.eq) goto loc_8260C114;
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8260c170
	if (!ctx.cr6.eq) goto loc_8260C170;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8260c15c
	if (ctx.cr6.eq) goto loc_8260C15C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8260C158;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8260c160
	goto loc_8260C160;
loc_8260C15C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8260C160:
	// bl 0x8264c3d0
	ctx.lr = 0x8260C164;
	sub_8264C3D0(ctx, base);
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// addi r3,r11,20576
	ctx.r3.s64 = ctx.r11.s64 + 20576;
	// bl 0x8260b538
	ctx.lr = 0x8260C170;
	sub_8260B538(ctx, base);
loc_8260C170:
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

DEFINE_REX_FUNC(sub_8260EE10) {
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
	// lwz r11,52(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
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
	ctx.lr = 0x8260EE44;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,144(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 144);
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8260EE64;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8260EE7C;
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

DEFINE_REX_FUNC(sub_82611A80) {
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
	ctx.lr = 0x82611A88;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	r26.s64 = 0;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r26,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, r26.u32);
	// li r25,1
	r25.s64 = 1;
	// lwz r10,656(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 656);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82611b30
	if (ctx.cr6.eq) goto loc_82611B30;
	// lwz r30,648(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 648);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82611ac8
	if (ctx.cr6.eq) goto loc_82611AC8;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82611b30
	if (ctx.cr6.eq) goto loc_82611B30;
	// lwz r30,4(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 4);
	// b 0x82611ad8
	goto loc_82611AD8;
loc_82611AC8:
	// stw r25,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, r25.u32);
	// stw r26,452(r31)
	REX_STORE_U32(r31.u32 + 452, r26.u32);
	// stw r26,456(r31)
	REX_STORE_U32(r31.u32 + 456, r26.u32);
	// stw r26,464(r31)
	REX_STORE_U32(r31.u32 + 464, r26.u32);
loc_82611AD8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82611b30
	if (ctx.cr6.eq) goto loc_82611B30;
	// addi r28,r31,624
	r28.s64 = r31.s64 + 624;
	// addi r27,r31,140
	r27.s64 = r31.s64 + 140;
loc_82611AE8:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82611b04
	if (ctx.cr6.eq) goto loc_82611B04;
	// lwz r30,4(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r29,0(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82611b08
	goto loc_82611B08;
loc_82611B04:
	// mr r29,r26
	r29.u64 = r26.u64;
loc_82611B08:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82625870
	ctx.lr = 0x82611B10;
	sub_82625870(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,24(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 24);
	// bl 0x8260ef20
	ctx.lr = 0x82611B20;
	sub_8260EF20(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8264c3d0
	ctx.lr = 0x82611B28;
	sub_8264C3D0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x82611ae8
	if (!ctx.cr6.eq) goto loc_82611AE8;
loc_82611B30:
	// lwz r11,696(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 696);
	// stw r25,612(r31)
	REX_STORE_U32(r31.u32 + 612, r25.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82611b78
	if (ctx.cr6.eq) goto loc_82611B78;
	// addi r29,r31,664
	r29.s64 = r31.s64 + 664;
loc_82611B44:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8260c0a0
	ctx.lr = 0x82611B4C;
	sub_8260C0A0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x82611b6c
	if (ctx.cr0.eq) goto loc_82611B6C;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,24(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 24);
	// addi r3,r31,140
	ctx.r3.s64 = r31.s64 + 140;
	// bl 0x8260ef20
	ctx.lr = 0x82611B64;
	sub_8260EF20(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8264c3d0
	ctx.lr = 0x82611B6C;
	sub_8264C3D0(ctx, base);
loc_82611B6C:
	// lwz r11,696(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 696);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82611b44
	if (!ctx.cr6.eq) goto loc_82611B44;
loc_82611B78:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_82616608) {
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
	ctx.lr = 0x82616610;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,84(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// addi r29,r3,84
	r29.s64 = ctx.r3.s64 + 84;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// li r30,0
	r30.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261663C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r31,324(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 324);
	// b 0x82616678
	goto loc_82616678;
loc_82616644:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x82616680
	if (ctx.cr6.lt) goto loc_82616680;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82616664
	if (ctx.cr6.eq) goto loc_82616664;
	// lwz r31,4(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82616668
	goto loc_82616668;
loc_82616664:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82616668:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x826281e0
	ctx.lr = 0x82616674;
	sub_826281E0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_82616678:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82616644
	if (!ctx.cr6.eq) goto loc_82616644;
loc_82616680:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82616694;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8261AA80) {
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
	ctx.lr = 0x8261AA88;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// lhz r24,14(r11)
	r24.u64 = REX_LOAD_U16(ctx.r11.u32 + 14);
	// mr r25,r24
	r25.u64 = r24.u64;
	// bl 0x8262acf8
	ctx.lr = 0x8261AAB0;
	sub_8262ACF8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8261ab44
	if (ctx.cr0.lt) goto loc_8261AB44;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r27,0
	r27.s64 = 0;
	// mr r29,r27
	r29.u64 = r27.u64;
	// mr r26,r27
	r26.u64 = r27.u64;
	// lhz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,65534
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65534, ctx.xer);
	// bne cr6,0x8261aadc
	if (!ctx.cr6.eq) goto loc_8261AADC;
	// lwz r29,20(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lhz r25,18(r3)
	r25.u64 = REX_LOAD_U16(ctx.r3.u32 + 18);
loc_8261AADC:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,65534
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65534, ctx.xer);
	// bne cr6,0x8261aaf0
	if (!ctx.cr6.eq) goto loc_8261AAF0;
	// lwz r26,20(r11)
	r26.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
loc_8261AAF0:
	// lwz r30,4(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lhz r23,2(r11)
	r23.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r22,2(r3)
	r22.u64 = REX_LOAD_U16(ctx.r3.u32 + 2);
	// bl 0x82615020
	ctx.lr = 0x8261AB00;
	sub_82615020(ctx, base);
	// clrlwi r4,r3,16
	ctx.r4.u64 = ctx.r3.u32 & 0xFFFF;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// rlwinm r7,r24,29,3,31
	ctx.r7.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 29) & 0x1FFFFFFF;
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// bl 0x8261a4a8
	ctx.lr = 0x8261AB28;
	sub_8261A4A8(ctx, base);
	// stw r27,240(r31)
	REX_STORE_U32(r31.u32 + 240, r27.u32);
	// stw r27,244(r31)
	REX_STORE_U32(r31.u32 + 244, r27.u32);
	// li r11,1000
	ctx.r11.s64 = 1000;
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// divwu r11,r10,r11
	ctx.r11.u64 = uint32_t(ctx.r11.u32 ? ctx.r10.u32 / ctx.r11.u32 : 0);
	// stw r11,204(r31)
	REX_STORE_U32(r31.u32 + 204, ctx.r11.u32);
loc_8261AB44:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_82625828) {
	REX_FUNC_PROLOGUE();
	// li r11,13
	ctx.r11.s64 = 13;
	// divw r11,r4,r11
	ctx.r11.u64 = uint32_t((ctx.r11.s32 && !(ctx.r4.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r4.s32 / ctx.r11.s32 : 0);
	// mulli r11,r11,13
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(13));
	// subf r11,r11,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r11.u64;
	// mulli r11,r11,40
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(40));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
loc_82625844:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8262585c
	if (ctx.cr6.eq) goto loc_8262585C;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,0(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x82625860
	goto loc_82625860;
loc_8262585C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82625860:
	// lwz r10,48(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x82625844
	if (!ctx.cr6.eq) goto loc_82625844;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82626820) {
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
	// lwz r11,556(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 556);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// b 0x82626854
	goto loc_82626854;
loc_82626844:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r30.u32, ctx.xer);
	// beq cr6,0x8262685c
	if (ctx.cr6.eq) goto loc_8262685C;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_82626854:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82626844
	if (!ctx.cr6.eq) goto loc_82626844;
loc_8262685C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82626870
	if (ctx.cr6.eq) goto loc_82626870;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r31,352
	ctx.r3.s64 = r31.s64 + 352;
	// bl 0x826288a0
	ctx.lr = 0x82626870;
	sub_826288A0(ctx, base);
loc_82626870:
	// lwz r11,336(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 336);
	// b 0x82626888
	goto loc_82626888;
loc_82626878:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r30.u32, ctx.xer);
	// beq cr6,0x82626890
	if (ctx.cr6.eq) goto loc_82626890;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_82626888:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82626878
	if (!ctx.cr6.eq) goto loc_82626878;
loc_82626890:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826268a4
	if (ctx.cr6.eq) goto loc_826268A4;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r31,132
	ctx.r3.s64 = r31.s64 + 132;
	// bl 0x826288a0
	ctx.lr = 0x826268A4;
	sub_826288A0(ctx, base);
loc_826268A4:
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

DEFINE_REX_FUNC(sub_82628B08) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82628B10;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x82628b44
	goto loc_82628B44;
loc_82628B24:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt cr6,0x82628b7c
	if (ctx.cr6.lt) goto loc_82628B7C;
	// lwz r30,80(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r29,8
	ctx.r3.s64 = r29.s64 + 8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82628a20
	ctx.lr = 0x82628B3C;
	sub_82628A20(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82628b4c
	if (ctx.cr0.eq) goto loc_82628B4C;
loc_82628B44:
	// li r31,0
	r31.s64 = 0;
	// b 0x82628b68
	goto loc_82628B68;
loc_82628B4C:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,14
	r31.u64 = r31.u64 | 14;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x82628b68
	if (ctx.cr6.eq) goto loc_82628B68;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8264c3d0
	ctx.lr = 0x82628B68;
	sub_8264C3D0(ctx, base);
loc_82628B68:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82611700
	ctx.lr = 0x82628B74;
	sub_82611700(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82628b24
	if (!ctx.cr0.eq) goto loc_82628B24;
loc_82628B7C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8262D058) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x826a1cb8
	ctx.lr = 0x8262D060;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x826a2c90
	ctx.lr = 0x8262D068;
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r30,0(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r31,4(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r29,20(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r28,32(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lfs f13,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,28(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,32(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,40(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,36(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,44(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f3.f64 = double(temp.f32);
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
	// stfs f10,104(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f9,108(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f8,120(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f7,124(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f11,116(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f6,128(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f5,132(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f4,144(r1)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f3,148(r1)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// bne cr6,0x8262d150
	if (!ctx.cr6.eq) goto loc_8262D150;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
	// li r5,96
	ctx.r5.s64 = 96;
	// fmr f13,f9
	ctx.f13.f64 = ctx.f9.f64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// fmr f10,f8
	ctx.f10.f64 = ctx.f8.f64;
	// fmr f9,f7
	ctx.f9.f64 = ctx.f7.f64;
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f13,164(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// fmr f12,f6
	ctx.f12.f64 = ctx.f6.f64;
	// stfs f6,168(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// fmr f11,f5
	ctx.f11.f64 = ctx.f5.f64;
	// stfs f5,172(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// fmr f8,f4
	ctx.f8.f64 = ctx.f4.f64;
	// stfs f10,176(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// fmr f7,f3
	ctx.f7.f64 = ctx.f3.f64;
	// stfs f9,180(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f4,184(r1)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f3,188(r1)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// bl 0x826a2e60
	ctx.lr = 0x8262D14C;
	sub_826A2E60(ctx, base);
	// b 0x8262d260
	goto loc_8262D260;
loc_8262D150:
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
	// fadds f29,f3,f29
	f29.f64 = double(float(ctx.f3.f64 + f29.f64));
	// lfs f27,32(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32);
	f27.f64 = double(temp.f32);
	// fadds f28,f1,f28
	f28.f64 = double(float(ctx.f1.f64 + f28.f64));
	// lfs f26,40(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 40);
	f26.f64 = double(temp.f32);
	// fadds f27,f0,f27
	f27.f64 = double(float(ctx.f0.f64 + f27.f64));
	// lfs f25,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	f25.f64 = double(temp.f32);
	// fadds f26,f13,f26
	f26.f64 = double(float(ctx.f13.f64 + f26.f64));
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
loc_8262D260:
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
	// addi r9,r1,240
	ctx.r9.s64 = ctx.r1.s64 + 240;
	// addi r8,r1,224
	ctx.r8.s64 = ctx.r1.s64 + 224;
	// addi r7,r1,224
	ctx.r7.s64 = ctx.r1.s64 + 224;
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// lvrx128 v63,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// lvlx128 v62,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lvrx128 v61,r10,r8
	temp.u32 = ctx.r10.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// lvlx128 v60,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v59,r10,r6
	temp.u32 = ctx.r10.u32 + ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// lvlx128 v58,r0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// lvrx128 v57,r10,r4
	temp.u32 = ctx.r10.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// lvlx128 v53,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lvrx128 v52,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lvlx128 v51,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lvrx128 v50,r10,r8
	temp.u32 = ctx.r10.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// rlwinm r11,r31,0,28,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xC;
	// lvlx128 v49,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v48,r10,r6
	temp.u32 = ctx.r10.u32 + ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v56,v62,v63
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// lvlx128 v47,r0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v55,v60,v61
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// lvrx128 v46,r10,r4
	temp.u32 = ctx.r10.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// li r9,4
	ctx.r9.s64 = 4;
	// lvlx128 v45,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v54,v58,v59
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8)));
	// vor128 v53,v53,v57
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8)));
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// vor128 v60,v51,v52
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8)));
	// vor128 v61,v49,v50
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8)));
	// vor128 v62,v47,v48
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8)));
	// vor128 v63,v45,v46
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)ctx.v46.u8)));
	// beq cr6,0x8262d3a8
	if (ctx.cr6.eq) goto loc_8262D3A8;
	// cmplwi cr6,r29,7
	ctx.cr6.compare<uint32_t>(r29.u32, 7, ctx.xer);
	// ble cr6,0x8262d3a8
	if (!ctx.cr6.gt) goto loc_8262D3A8;
	// addi r11,r31,16
	ctx.r11.s64 = r31.s64 + 16;
loc_8262D320:
	// lvlx128 v44,r0,r30
	temp.u32 = r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// vspltw128 v58,v44,1
	simde_mm_store_si128((simde__m128i*)ctx.v58.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v44.u32), 0xAA));
	// vspltw128 v59,v44,0
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v44.u32), 0xFF));
	// vor128 v43,v58,v58
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_load_si128((simde__m128i*)ctx.v58.u8));
	// vmulfp128 v58,v58,v62
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v58.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v58.f32), simde_mm_load_ps(ctx.v62.f32)));
	// vmulfp128 v57,v59,v63
	simde_mm_store_ps(ctx.v57.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vmulfp128 v59,v59,v61
	simde_mm_store_ps(ctx.v59.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_load_ps(ctx.v61.f32)));
	// vaddfp128 v63,v63,v53
	simde_mm_store_ps(ctx.v63.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v53.f32)));
	// vmulfp128 v52,v43,v60
	simde_mm_store_ps(ctx.v52.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v43.f32), simde_mm_load_ps(ctx.v60.f32)));
	// vaddfp128 v62,v62,v54
	simde_mm_store_ps(ctx.v62.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v54.f32)));
	// vaddfp128 v61,v61,v55
	simde_mm_store_ps(ctx.v61.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v55.f32)));
	// vaddfp128 v60,v60,v56
	simde_mm_store_ps(ctx.v60.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_load_ps(ctx.v56.f32)));
	// beq cr6,0x8262d370
	if (ctx.cr6.eq) goto loc_8262D370;
	// lvlx128 v42,r0,r31
	temp.u32 = r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v41,r10,r31
	temp.u32 = ctx.r10.u32 + r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v40,v42,v41
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)ctx.v41.u8)));
	// lvlx128 v39,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vaddfp128 v59,v59,v39
	simde_mm_store_ps(ctx.v59.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_load_ps(ctx.v39.f32)));
	// vaddfp128 v57,v57,v40
	simde_mm_store_ps(ctx.v57.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v57.f32), simde_mm_load_ps(ctx.v40.f32)));
loc_8262D370:
	// vaddfp128 v38,v59,v52
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v38.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_load_ps(ctx.v52.f32)));
	// addi r29,r29,-2
	r29.s64 = r29.s64 + -2;
	// vaddfp128 v37,v57,v58
	simde_mm_store_ps(ctx.v37.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v57.f32), simde_mm_load_ps(ctx.v58.f32)));
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// vpermwi128 v36,v38,17
	simde_mm_store_si128((simde__m128i*)ctx.v36.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v38.u32), 0xEE));
	// stvlx128 v37,r0,r31
	ea = r31.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v37.u8[15 - i]);
	// stvrx128 v37,r31,r10
	ea = r31.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v37.u8[i]);
	// addi r31,r31,24
	r31.s64 = r31.s64 + 24;
	// rlwinm r8,r31,0,28,29
	ctx.r8.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xC;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stvewx128 v36,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v36.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v36,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v36.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// bne cr6,0x8262d320
	if (!ctx.cr6.eq) goto loc_8262D320;
loc_8262D3A8:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8262d43c
	if (ctx.cr6.eq) goto loc_8262D43C;
	// addi r11,r29,-1
	ctx.r11.s64 = r29.s64 + -1;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8262D3C0:
	// lvlx128 v35,r0,r30
	temp.u32 = r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// vspltw128 v58,v35,1
	simde_mm_store_si128((simde__m128i*)ctx.v58.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v35.u32), 0xAA));
	// vspltw128 v59,v35,0
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v35.u32), 0xFF));
	// vor128 v34,v58,v58
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_load_si128((simde__m128i*)ctx.v58.u8));
	// vmulfp128 v58,v58,v62
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v58.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v58.f32), simde_mm_load_ps(ctx.v62.f32)));
	// vmulfp128 v57,v59,v63
	simde_mm_store_ps(ctx.v57.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vmulfp128 v59,v59,v61
	simde_mm_store_ps(ctx.v59.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_load_ps(ctx.v61.f32)));
	// vaddfp128 v63,v63,v53
	simde_mm_store_ps(ctx.v63.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v53.f32)));
	// vmulfp128 v52,v34,v60
	simde_mm_store_ps(ctx.v52.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v34.f32), simde_mm_load_ps(ctx.v60.f32)));
	// vaddfp128 v62,v62,v54
	simde_mm_store_ps(ctx.v62.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v54.f32)));
	// vaddfp128 v61,v61,v55
	simde_mm_store_ps(ctx.v61.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v55.f32)));
	// vaddfp128 v60,v60,v56
	simde_mm_store_ps(ctx.v60.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_load_ps(ctx.v56.f32)));
	// beq cr6,0x8262d410
	if (ctx.cr6.eq) goto loc_8262D410;
	// lvlx128 v33,r0,r31
	temp.u32 = r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v32,r10,r31
	temp.u32 = ctx.r10.u32 + r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v51,v33,v32
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v33.u8), simde_mm_load_si128((simde__m128i*)ctx.v32.u8)));
	// lvlx128 v50,r31,r10
	temp.u32 = r31.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vaddfp128 v59,v59,v50
	simde_mm_store_ps(ctx.v59.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_load_ps(ctx.v50.f32)));
	// vaddfp128 v57,v57,v51
	simde_mm_store_ps(ctx.v57.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v57.f32), simde_mm_load_ps(ctx.v51.f32)));
loc_8262D410:
	// vaddfp128 v49,v59,v52
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v49.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_load_ps(ctx.v52.f32)));
	// addi r11,r31,16
	ctx.r11.s64 = r31.s64 + 16;
	// vaddfp128 v48,v57,v58
	simde_mm_store_ps(ctx.v48.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v57.f32), simde_mm_load_ps(ctx.v58.f32)));
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// vpermwi128 v47,v49,17
	simde_mm_store_si128((simde__m128i*)ctx.v47.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v49.u32), 0xEE));
	// stvlx128 v48,r0,r31
	ea = r31.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v48.u8[15 - i]);
	// stvrx128 v48,r31,r10
	ea = r31.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v48.u8[i]);
	// addi r31,r31,24
	r31.s64 = r31.s64 + 24;
	// stvewx128 v47,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v47.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v47,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v47.u32[3 - ((ea & 0xF) >> 2)]);
	// bdnz 0x8262d3c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8262D3C0;
loc_8262D43C:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x826a2cdc
	ctx.lr = 0x8262D448;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82659320) {
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
	// lwz r10,740(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 740);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm. r11,r10,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826594b8
	if (ctx.cr0.eq) goto loc_826594B8;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r10,r10,0,26,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// stw r10,740(r3)
	REX_STORE_U32(ctx.r3.u32 + 740, ctx.r10.u32);
	// beq cr6,0x826594a4
	if (ctx.cr6.eq) goto loc_826594A4;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x82659460
	if (ctx.cr6.eq) goto loc_82659460;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// addi r11,r3,528
	ctx.r11.s64 = ctx.r3.s64 + 528;
	// beq cr6,0x82659414
	if (ctx.cr6.eq) goto loc_82659414;
	// lwz r9,528(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 528);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x826594b8
	if (!ctx.cr6.eq) goto loc_826594B8;
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,740(r3)
	REX_STORE_U32(ctx.r3.u32 + 740, ctx.r10.u32);
	// addi r30,r3,200
	r30.s64 = ctx.r3.s64 + 200;
	// std r11,200(r3)
	REX_STORE_U64(ctx.r3.u32 + 200, ctx.r11.u64);
	// std r11,208(r3)
	REX_STORE_U64(ctx.r3.u32 + 208, ctx.r11.u64);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// std r11,216(r3)
	REX_STORE_U64(ctx.r3.u32 + 216, ctx.r11.u64);
	// stw r11,224(r3)
	REX_STORE_U32(ctx.r3.u32 + 224, ctx.r11.u32);
	// lwz r3,32(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// bl 0x8264dc88
	ctx.lr = 0x826593A4;
	sub_8264DC88(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82659404
	if (ctx.cr0.eq) goto loc_82659404;
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x82659404
	if (ctx.cr6.eq) goto loc_82659404;
loc_826593B4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823ede70
	ctx.lr = 0x826593BC;
	sub_823EDE70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x826593cc
	if (ctx.cr0.lt) goto loc_826593CC;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_826593CC:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x826593ec
	if (ctx.cr6.eq) goto loc_826593EC;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8265a150
	ctx.lr = 0x826593EC;
	sub_8265A150(ctx, base);
loc_826593EC:
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
loc_82659404:
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// addi r11,r11,22024
	ctx.r11.s64 = ctx.r11.s64 + 22024;
loc_8265940C:
	// stw r11,196(r31)
	REX_STORE_U32(r31.u32 + 196, ctx.r11.u32);
	// b 0x826593ec
	goto loc_826593EC;
loc_82659414:
	// lwz r10,528(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 528);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x826594b8
	if (!ctx.cr6.eq) goto loc_826594B8;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r30,r31,200
	r30.s64 = r31.s64 + 200;
	// std r11,200(r31)
	REX_STORE_U64(r31.u32 + 200, ctx.r11.u64);
	// std r11,208(r31)
	REX_STORE_U64(r31.u32 + 208, ctx.r11.u64);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// std r11,216(r31)
	REX_STORE_U64(r31.u32 + 216, ctx.r11.u64);
	// stw r11,224(r31)
	REX_STORE_U32(r31.u32 + 224, ctx.r11.u32);
	// lwz r3,32(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 32);
	// bl 0x8264e168
	ctx.lr = 0x82659444;
	sub_8264E168(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82659454
	if (ctx.cr0.eq) goto loc_82659454;
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// bne cr6,0x826593b4
	if (!ctx.cr6.eq) goto loc_826593B4;
loc_82659454:
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// addi r11,r11,-26576
	ctx.r11.s64 = ctx.r11.s64 + -26576;
	// b 0x8265940c
	goto loc_8265940C;
loc_82659460:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r30,r31,200
	r30.s64 = r31.s64 + 200;
	// std r11,200(r31)
	REX_STORE_U64(r31.u32 + 200, ctx.r11.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// std r11,208(r31)
	REX_STORE_U64(r31.u32 + 208, ctx.r11.u64);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// std r11,216(r31)
	REX_STORE_U64(r31.u32 + 216, ctx.r11.u64);
	// stw r11,224(r31)
	REX_STORE_U32(r31.u32 + 224, ctx.r11.u32);
	// lwz r3,32(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 32);
	// bl 0x8264e0c8
	ctx.lr = 0x82659488;
	sub_8264E0C8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82659498
	if (ctx.cr0.eq) goto loc_82659498;
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// bne cr6,0x826593b4
	if (!ctx.cr6.eq) goto loc_826593B4;
loc_82659498:
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// addi r11,r11,-23160
	ctx.r11.s64 = ctx.r11.s64 + -23160;
	// b 0x8265940c
	goto loc_8265940C;
loc_826594A4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82659168
	ctx.lr = 0x826594AC;
	sub_82659168(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826593cc
	if (!ctx.cr0.eq) goto loc_826593CC;
	// b 0x826593ec
	goto loc_826593EC;
loc_826594B8:
	// lwz r11,740(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 740);
	// rlwinm. r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x826594f8
	if (ctx.cr0.eq) goto loc_826594F8;
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// rlwinm r11,r11,0,24,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// stw r11,740(r31)
	REX_STORE_U32(r31.u32 + 740, ctx.r11.u32);
	// bne cr6,0x826594e4
	if (!ctx.cr6.eq) goto loc_826594E4;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,1232
	ctx.r3.u64 = ctx.r3.u64 | 1232;
	// b 0x826593cc
	goto loc_826593CC;
loc_826594E4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8265a750
	ctx.lr = 0x826594EC;
	sub_8265A750(ctx, base);
loc_826594EC:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x826593cc
	if (ctx.cr0.lt) goto loc_826593CC;
	// b 0x826593ec
	goto loc_826593EC;
loc_826594F8:
	// rlwinm. r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x826593ec
	if (ctx.cr0.eq) goto loc_826593EC;
	// rlwinm r11,r11,0,23,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,740(r31)
	REX_STORE_U32(r31.u32 + 740, ctx.r11.u32);
	// bl 0x826558c0
	ctx.lr = 0x82659510;
	sub_826558C0(ctx, base);
	// b 0x826594ec
	goto loc_826594EC;
}

DEFINE_REX_FUNC(sub_82662B78) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82662bc4
	if (ctx.cr6.eq) goto loc_82662BC4;
loc_82662B9C:
	// mfmsr r10
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r10.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r11,0,r6
	ea = ctx.r6.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r6
	ea = ctx.r6.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x82662b9c
	if (!ctx.cr0.eq) goto loc_82662B9C;
	// lwz r11,160(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 160);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,160(r6)
	REX_STORE_U32(ctx.r6.u32 + 160, ctx.r11.u32);
loc_82662BC4:
	// lbz r11,60(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 60);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82662c88
	if (!ctx.cr6.eq) goto loc_82662C88;
	// lwz r11,56(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82662c88
	if (!ctx.cr6.eq) goto loc_82662C88;
	// addi r4,r30,61
	ctx.r4.s64 = r30.s64 + 61;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,38
	ctx.r5.s64 = 38;
	// bl 0x826a1e70
	ctx.lr = 0x82662BEC;
	sub_826A1E70(ctx, base);
	// lwz r11,180(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 180);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,-8
	ctx.r4.s64 = r31.s64 + -8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lhz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// sth r11,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// bl 0x82670c20
	ctx.lr = 0x82662C10;
	sub_82670C20(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82662c24
	if (!ctx.cr0.eq) goto loc_82662C24;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82662c8c
	goto loc_82662C8C;
loc_82662C24:
	// lwz r11,292(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 292);
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// stw r11,292(r3)
	REX_STORE_U32(ctx.r3.u32 + 292, ctx.r11.u32);
loc_82662C30:
	// mfmsr r9
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r9.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r10,0,r3
	ea = ctx.r3.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r3
	ea = ctx.r3.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x82662c30
	if (!ctx.cr0.eq) goto loc_82662C30;
	// lwz r9,220(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 220);
	// addi r11,r31,232
	ctx.r11.s64 = r31.s64 + 232;
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,220(r31)
	REX_STORE_U32(r31.u32 + 220, ctx.r9.u32);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,236(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 236);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,236(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 236);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r10,236(r31)
	REX_STORE_U32(r31.u32 + 236, ctx.r10.u32);
	// lwz r11,420(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 420);
	// oris r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 8388608;
	// stw r11,420(r31)
	REX_STORE_U32(r31.u32 + 420, ctx.r11.u32);
	// stw r3,56(r30)
	REX_STORE_U32(r30.u32 + 56, ctx.r3.u32);
loc_82662C88:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82662C8C:
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

DEFINE_REX_FUNC(sub_8266CF30) {
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
	ctx.lr = 0x8266CF38;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// lbz r10,68(r5)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r5.u32 + 68);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// addi r11,r5,68
	ctx.r11.s64 = ctx.r5.s64 + 68;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r10,7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 7, ctx.xer);
	// beq cr6,0x8266d1f0
	if (ctx.cr6.eq) goto loc_8266D1F0;
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// beq cr6,0x8266d1ac
	if (ctx.cr6.eq) goto loc_8266D1AC;
	// cmplwi cr6,r10,10
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 10, ctx.xer);
	// beq cr6,0x8266d16c
	if (ctx.cr6.eq) goto loc_8266D16C;
	// cmplwi cr6,r10,13
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 13, ctx.xer);
	// beq cr6,0x8266d048
	if (ctx.cr6.eq) goto loc_8266D048;
	// cmplwi cr6,r10,14
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14, ctx.xer);
	// beq cr6,0x8266d028
	if (ctx.cr6.eq) goto loc_8266D028;
	// cmplwi cr6,r10,15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 15, ctx.xer);
	// beq cr6,0x8266cfec
	if (ctx.cr6.eq) goto loc_8266CFEC;
	// cmplwi cr6,r10,19
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 19, ctx.xer);
	// beq cr6,0x8266cf94
	if (ctx.cr6.eq) goto loc_8266CF94;
	// b 0x8266d248
	goto loc_8266D248;
loc_8266CF94:
	// lwz r9,1(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 1);
	// addi r10,r3,240
	ctx.r10.s64 = ctx.r3.s64 + 240;
	// lhz r8,13(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 13);
	// lwz r11,240(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 240);
	// b 0x8266cfbc
	goto loc_8266CFBC;
loc_8266CFA8:
	// lwz r5,56(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
	// cmplw cr6,r5,r9
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8266cfd0
	if (ctx.cr6.eq) goto loc_8266CFD0;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_8266CFBC:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8266cfcc
	if (ctx.cr6.eq) goto loc_8266CFCC;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8266cfa8
	if (!ctx.cr0.eq) goto loc_8266CFA8;
loc_8266CFCC:
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
loc_8266CFD0:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8266d248
	if (ctx.cr6.eq) goto loc_8266D248;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// bl 0x8266a4a0
	ctx.lr = 0x8266CFE8;
	sub_8266A4A0(ctx, base);
	// b 0x8266d040
	goto loc_8266D040;
loc_8266CFEC:
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bne cr6,0x8266d248
	if (!ctx.cr6.eq) goto loc_8266D248;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// blt cr6,0x8266d248
	if (ctx.cr6.lt) goto loc_8266D248;
	// lwz r11,124(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 124);
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8266d248
	if (ctx.cr0.eq) goto loc_8266D248;
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8266d248
	if (ctx.cr0.eq) goto loc_8266D248;
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r10,60(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 60);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8266d248
	if (!ctx.cr6.eq) goto loc_8266D248;
	// bl 0x82666318
	ctx.lr = 0x8266D024;
	sub_82666318(ctx, base);
	// b 0x8266d040
	goto loc_8266D040;
loc_8266D028:
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bne cr6,0x8266d248
	if (!ctx.cr6.eq) goto loc_8266D248;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,24(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 24);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8266bfc8
	ctx.lr = 0x8266D040;
	sub_8266BFC8(ctx, base);
loc_8266D040:
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// b 0x8266d248
	goto loc_8266D248;
loc_8266D048:
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bne cr6,0x8266d248
	if (!ctx.cr6.eq) goto loc_8266D248;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// blt cr6,0x8266d15c
	if (ctx.cr6.lt) goto loc_8266D15C;
	// lwz r6,292(r28)
	ctx.r6.u64 = REX_LOAD_U32(r28.u32 + 292);
	// rlwinm. r11,r6,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8266d15c
	if (!ctx.cr0.eq) goto loc_8266D15C;
	// rlwinm. r11,r6,0,8,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8266d15c
	if (!ctx.cr0.eq) goto loc_8266D15C;
	// rlwinm. r11,r6,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8266d15c
	if (ctx.cr0.eq) goto loc_8266D15C;
	// lwz r11,240(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 240);
	// addi r9,r3,240
	ctx.r9.s64 = ctx.r3.s64 + 240;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8266d154
	if (ctx.cr6.eq) goto loc_8266D154;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8266d154
	if (ctx.cr0.eq) goto loc_8266D154;
loc_8266D090:
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// addi r11,r8,-4
	ctx.r11.s64 = ctx.r8.s64 + -4;
	// subf r8,r10,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r10.u64;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r28.u32, ctx.xer);
	// subfic r8,r8,0
	ctx.xer.ca = ctx.r8.u32 <= 0;
	ctx.r8.u64 = static_cast<uint64_t>(0) - ctx.r8.u64;
	// subfe r8,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 & ctx.r10.u64;
	// beq cr6,0x8266d100
	if (ctx.cr6.eq) goto loc_8266D100;
	// lwz r10,292(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 292);
	// rlwinm. r5,r10,0,6,6
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne 0x8266d100
	if (!ctx.cr0.eq) goto loc_8266D100;
	// rlwinm. r10,r10,0,8,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8266d100
	if (!ctx.cr0.eq) goto loc_8266D100;
	// lwz r5,60(r28)
	ctx.r5.u64 = REX_LOAD_U32(r28.u32 + 60);
	// li r4,1
	ctx.r4.s64 = 1;
	// rlwinm r10,r5,29,27,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 29) & 0x1F;
	// clrlwi r5,r5,29
	ctx.r5.u64 = ctx.r5.u32 & 0x7;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// slw r5,r4,r5
	ctx.r5.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r5.u8 & 0x3F));
	// lbz r10,136(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 136);
	// and. r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8266d0fc
	if (!ctx.cr0.eq) goto loc_8266D0FC;
	// lwz r11,152(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 152);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8266d100
	if (ctx.cr6.eq) goto loc_8266D100;
	// rlwinm. r11,r6,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8266d100
	if (ctx.cr0.eq) goto loc_8266D100;
loc_8266D0FC:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
loc_8266D100:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8266d090
	if (!ctx.cr6.eq) goto loc_8266D090;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8266d154
	if (ctx.cr6.eq) goto loc_8266D154;
	// ori r11,r6,4096
	ctx.r11.u64 = ctx.r6.u64 | 4096;
	// stw r11,292(r28)
	REX_STORE_U32(r28.u32 + 292, ctx.r11.u32);
loc_8266D118:
	// mfmsr r9
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r9.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r10,0,r28
	ea = r28.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r28
	ea = r28.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x8266d118
	if (!ctx.cr0.eq) goto loc_8266D118;
	// lwz r11,292(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 292);
	// li r5,30000
	ctx.r5.s64 = 30000;
	// li r4,-1
	ctx.r4.s64 = -1;
	// oris r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 2097152;
	// addi r3,r28,96
	ctx.r3.s64 = r28.s64 + 96;
	// stw r11,292(r28)
	REX_STORE_U32(r28.u32 + 292, ctx.r11.u32);
	// bl 0x82671018
	ctx.lr = 0x8266D150;
	sub_82671018(ctx, base);
	// b 0x8266d248
	goto loc_8266D248;
loc_8266D154:
	// rlwinm r11,r6,0,19,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFFDFFF;
	// b 0x8266d164
	goto loc_8266D164;
loc_8266D15C:
	// lwz r11,292(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 292);
	// rlwinm r11,r11,0,19,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFDFFF;
loc_8266D164:
	// stw r11,292(r28)
	REX_STORE_U32(r28.u32 + 292, ctx.r11.u32);
	// b 0x8266d248
	goto loc_8266D248;
loc_8266D16C:
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bne cr6,0x8266d248
	if (!ctx.cr6.eq) goto loc_8266D248;
	// lwz r11,28(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 28);
	// lwz r29,20(r5)
	r29.u64 = REX_LOAD_U32(ctx.r5.u32 + 20);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,28(r5)
	REX_STORE_U32(ctx.r5.u32 + 28, ctx.r11.u32);
	// bne 0x8266d194
	if (!ctx.cr0.eq) goto loc_8266D194;
	// li r30,1
	r30.s64 = 1;
	// stw r7,20(r5)
	REX_STORE_U32(ctx.r5.u32 + 20, ctx.r7.u32);
	// b 0x8266d198
	goto loc_8266D198;
loc_8266D194:
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
loc_8266D198:
	// addi r31,r3,8
	r31.s64 = ctx.r3.s64 + 8;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82674f48
	ctx.lr = 0x8266D1A8;
	sub_82674F48(ctx, base);
	// b 0x8266d230
	goto loc_8266D230;
loc_8266D1AC:
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bne cr6,0x8266d248
	if (!ctx.cr6.eq) goto loc_8266D248;
	// lwz r11,28(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 28);
	// lwz r29,20(r5)
	r29.u64 = REX_LOAD_U32(ctx.r5.u32 + 20);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,28(r5)
	REX_STORE_U32(ctx.r5.u32 + 28, ctx.r11.u32);
	// bne 0x8266d1d4
	if (!ctx.cr0.eq) goto loc_8266D1D4;
	// li r30,1
	r30.s64 = 1;
	// stw r7,20(r5)
	REX_STORE_U32(ctx.r5.u32 + 20, ctx.r7.u32);
	// b 0x8266d1d8
	goto loc_8266D1D8;
loc_8266D1D4:
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
loc_8266D1D8:
	// addi r31,r3,8
	r31.s64 = ctx.r3.s64 + 8;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82674c80
	ctx.lr = 0x8266D1EC;
	sub_82674C80(ctx, base);
	// b 0x8266d230
	goto loc_8266D230;
loc_8266D1F0:
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bne cr6,0x8266d248
	if (!ctx.cr6.eq) goto loc_8266D248;
	// lwz r11,28(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 28);
	// lwz r29,20(r5)
	r29.u64 = REX_LOAD_U32(ctx.r5.u32 + 20);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,28(r5)
	REX_STORE_U32(ctx.r5.u32 + 28, ctx.r11.u32);
	// bne 0x8266d218
	if (!ctx.cr0.eq) goto loc_8266D218;
	// li r30,1
	r30.s64 = 1;
	// stw r7,20(r5)
	REX_STORE_U32(ctx.r5.u32 + 20, ctx.r7.u32);
	// b 0x8266d21c
	goto loc_8266D21C;
loc_8266D218:
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
loc_8266D21C:
	// addi r31,r3,8
	r31.s64 = ctx.r3.s64 + 8;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82674aa8
	ctx.lr = 0x8266D230;
	sub_82674AA8(ctx, base);
loc_8266D230:
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x8266d248
	if (ctx.cr6.eq) goto loc_8266D248;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82672c40
	ctx.lr = 0x8266D248;
	sub_82672C40(ctx, base);
loc_8266D248:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8267E448) {
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
	ctx.lr = 0x8267E450;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,4096
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4096, ctx.xer);
	// bgt cr6,0x8267e6dc
	if (ctx.cr6.gt) goto loc_8267E6DC;
	// beq cr6,0x8267e6c8
	if (ctx.cr6.eq) goto loc_8267E6C8;
	// addi r11,r5,-1
	ctx.r11.s64 = ctx.r5.s64 + -1;
	// cmplwi cr6,r11,27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 27, ctx.xer);
	// bgt cr6,0x8267e714
	if (ctx.cr6.gt) goto loc_8267E714;
	// lis r12,-32248
	ctx.r12.s64 = -2113404928;
	// addi r12,r12,-10464
	ctx.r12.s64 = ctx.r12.s64 + -10464;
	// lbzx r0,r12,r11
	ctx.r0.u64 = REX_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32152
	ctx.r12.s64 = -2107113472;
	// nop 
	// addi r12,r12,-7012
	ctx.r12.s64 = ctx.r12.s64 + -7012;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8267E49C;
	case 1:
		goto loc_8267E4B0;
	case 2:
		goto loc_8267E714;
	case 3:
		goto loc_8267E4C4;
	case 4:
		goto loc_8267E528;
	case 5:
		goto loc_8267E53C;
	case 6:
		goto loc_8267E714;
	case 7:
		goto loc_8267E714;
	case 8:
		goto loc_8267E550;
	case 9:
		goto loc_8267E714;
	case 10:
		goto loc_8267E714;
	case 11:
		goto loc_8267E714;
	case 12:
		goto loc_8267E714;
	case 13:
		goto loc_8267E55C;
	case 14:
		goto loc_8267E714;
	case 15:
		goto loc_8267E714;
	case 16:
		goto loc_8267E714;
	case 17:
		goto loc_8267E568;
	case 18:
		goto loc_8267E5C0;
	case 19:
		goto loc_8267E618;
	case 20:
		goto loc_8267E714;
	case 21:
		goto loc_8267E624;
	case 22:
		goto loc_8267E630;
	case 23:
		goto loc_8267E63C;
	case 24:
		goto loc_8267E648;
	case 25:
		goto loc_8267E654;
	case 26:
		goto loc_8267E6B0;
	case 27:
		goto loc_8267E6BC;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_8267E49C:
	// addi r3,r31,688
	ctx.r3.s64 = r31.s64 + 688;
	// lwz r4,0(r6)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// bl 0x82683d40
	ctx.lr = 0x8267E4AC;
	sub_82683D40(ctx, base);
	// b 0x8267e774
	goto loc_8267E774;
loc_8267E4B0:
	// addi r3,r31,688
	ctx.r3.s64 = r31.s64 + 688;
	// lwz r4,0(r6)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// bl 0x82683d58
	ctx.lr = 0x8267E4C0;
	sub_82683D58(ctx, base);
	// b 0x8267e774
	goto loc_8267E774;
loc_8267E4C4:
	// lwz r27,0(r6)
	r27.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x8267e4dc
	if (!ctx.cr6.eq) goto loc_8267E4DC;
	// stw r27,68(r31)
	REX_STORE_U32(r31.u32 + 68, r27.u32);
	// b 0x8267e774
	goto loc_8267E774;
loc_8267E4DC:
	// addi r28,r31,476
	r28.s64 = r31.s64 + 476;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r31,536
	ctx.r5.s64 = r31.s64 + 536;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826825c0
	ctx.lr = 0x8267E4F8;
	sub_826825C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8267e520
	if (!ctx.cr0.eq) goto loc_8267E520;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82682570
	ctx.lr = 0x8267E50C;
	sub_82682570(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8267e520
	if (!ctx.cr0.eq) goto loc_8267E520;
loc_8267E514:
	// lis r30,-32646
	r30.s64 = -2139488256;
	// ori r30,r30,4111
	r30.u64 = r30.u64 | 4111;
	// b 0x8267e774
	goto loc_8267E774;
loc_8267E520:
	// stw r27,140(r3)
	REX_STORE_U32(ctx.r3.u32 + 140, r27.u32);
	// b 0x8267e774
	goto loc_8267E774;
loc_8267E528:
	// addi r3,r31,688
	ctx.r3.s64 = r31.s64 + 688;
	// lwz r4,0(r6)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// bl 0x82683ed8
	ctx.lr = 0x8267E538;
	sub_82683ED8(ctx, base);
	// b 0x8267e774
	goto loc_8267E774;
loc_8267E53C:
	// addi r3,r31,688
	ctx.r3.s64 = r31.s64 + 688;
	// lwz r4,0(r6)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// bl 0x82683f28
	ctx.lr = 0x8267E54C;
	sub_82683F28(ctx, base);
	// b 0x8267e774
	goto loc_8267E774;
loc_8267E550:
	// lwz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// stw r11,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r11.u32);
	// b 0x8267e770
	goto loc_8267E770;
loc_8267E55C:
	// lwz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// stw r11,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r11.u32);
	// b 0x8267e770
	goto loc_8267E770;
loc_8267E568:
	// lwz r27,0(r6)
	r27.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x8267e580
	if (!ctx.cr6.eq) goto loc_8267E580;
	// stw r27,72(r31)
	REX_STORE_U32(r31.u32 + 72, r27.u32);
	// b 0x8267e774
	goto loc_8267E774;
loc_8267E580:
	// addi r28,r31,476
	r28.s64 = r31.s64 + 476;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r31,536
	ctx.r5.s64 = r31.s64 + 536;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826825c0
	ctx.lr = 0x8267E59C;
	sub_826825C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8267e5b8
	if (!ctx.cr0.eq) goto loc_8267E5B8;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82682570
	ctx.lr = 0x8267E5B0;
	sub_82682570(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8267e514
	if (ctx.cr0.eq) goto loc_8267E514;
loc_8267E5B8:
	// stw r27,144(r3)
	REX_STORE_U32(ctx.r3.u32 + 144, r27.u32);
	// b 0x8267e774
	goto loc_8267E774;
loc_8267E5C0:
	// lwz r27,0(r6)
	r27.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x8267e5d8
	if (!ctx.cr6.eq) goto loc_8267E5D8;
	// stw r27,76(r31)
	REX_STORE_U32(r31.u32 + 76, r27.u32);
	// b 0x8267e774
	goto loc_8267E774;
loc_8267E5D8:
	// addi r28,r31,476
	r28.s64 = r31.s64 + 476;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r31,536
	ctx.r5.s64 = r31.s64 + 536;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826825c0
	ctx.lr = 0x8267E5F4;
	sub_826825C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8267e610
	if (!ctx.cr0.eq) goto loc_8267E610;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82682570
	ctx.lr = 0x8267E608;
	sub_82682570(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8267e514
	if (ctx.cr0.eq) goto loc_8267E514;
loc_8267E610:
	// stw r27,148(r3)
	REX_STORE_U32(ctx.r3.u32 + 148, r27.u32);
	// b 0x8267e774
	goto loc_8267E774;
loc_8267E618:
	// lwz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// stw r11,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r11.u32);
	// b 0x8267e770
	goto loc_8267E770;
loc_8267E624:
	// lwz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// stw r11,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r11.u32);
	// b 0x8267e770
	goto loc_8267E770;
loc_8267E630:
	// lwz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// stw r11,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r11.u32);
	// b 0x8267e770
	goto loc_8267E770;
loc_8267E63C:
	// lwz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// stw r11,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r11.u32);
	// b 0x8267e770
	goto loc_8267E770;
loc_8267E648:
	// lwz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// stw r11,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r11.u32);
	// b 0x8267e770
	goto loc_8267E770;
loc_8267E654:
	// addi r28,r31,40
	r28.s64 = r31.s64 + 40;
	// lwz r29,0(r6)
	r29.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x827938a4
	ctx.lr = 0x8267E668;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,1188(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1188);
	// addic r10,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	ctx.r10.s64 = r29.s64 + -1;
	// rlwinm r9,r11,13,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x1;
	// subfe r10,r10,r29
	temp.u8 = (~ctx.r10.u32 + r29.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + r29.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + r29.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8267e690
	if (ctx.cr6.eq) goto loc_8267E690;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x8267e69c
	if (ctx.cr6.eq) goto loc_8267E69C;
	// oris r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 524288;
	// stw r11,1188(r31)
	REX_STORE_U32(r31.u32 + 1188, ctx.r11.u32);
loc_8267E690:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x827938b4
	ctx.lr = 0x8267E698;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// b 0x8267e774
	goto loc_8267E774;
loc_8267E69C:
	// rlwinm r11,r11,0,13,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFF7FFFF;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,1188(r31)
	REX_STORE_U32(r31.u32 + 1188, ctx.r11.u32);
	// bl 0x8267cae0
	ctx.lr = 0x8267E6AC;
	sub_8267CAE0(ctx, base);
	// b 0x8267e774
	goto loc_8267E774;
loc_8267E6B0:
	// lwz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// stw r11,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r11.u32);
	// b 0x8267e770
	goto loc_8267E770;
loc_8267E6BC:
	// lwz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// stw r11,132(r31)
	REX_STORE_U32(r31.u32 + 132, ctx.r11.u32);
	// b 0x8267e770
	goto loc_8267E770;
loc_8267E6C8:
	// addi r3,r31,688
	ctx.r3.s64 = r31.s64 + 688;
	// lwz r4,0(r6)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// bl 0x82683d70
	ctx.lr = 0x8267E6D8;
	sub_82683D70(ctx, base);
	// b 0x8267e774
	goto loc_8267E774;
loc_8267E6DC:
	// cmpwi cr6,r5,4099
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4099, ctx.xer);
	// beq cr6,0x8267e768
	if (ctx.cr6.eq) goto loc_8267E768;
	// cmpwi cr6,r5,4100
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4100, ctx.xer);
	// beq cr6,0x8267e75c
	if (ctx.cr6.eq) goto loc_8267E75C;
	// cmpwi cr6,r5,4101
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4101, ctx.xer);
	// beq cr6,0x8267e750
	if (ctx.cr6.eq) goto loc_8267E750;
	// cmpwi cr6,r5,4102
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4102, ctx.xer);
	// beq cr6,0x8267e744
	if (ctx.cr6.eq) goto loc_8267E744;
	// cmpwi cr6,r5,4103
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4103, ctx.xer);
	// beq cr6,0x8267e738
	if (ctx.cr6.eq) goto loc_8267E738;
	// cmpwi cr6,r5,4105
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4105, ctx.xer);
	// beq cr6,0x8267e72c
	if (ctx.cr6.eq) goto loc_8267E72C;
	// cmpwi cr6,r5,4106
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4106, ctx.xer);
	// beq cr6,0x8267e720
	if (ctx.cr6.eq) goto loc_8267E720;
loc_8267E714:
	// lis r30,-32646
	r30.s64 = -2139488256;
	// ori r30,r30,4105
	r30.u64 = r30.u64 | 4105;
	// b 0x8267e774
	goto loc_8267E774;
loc_8267E720:
	// lwz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// stw r11,140(r31)
	REX_STORE_U32(r31.u32 + 140, ctx.r11.u32);
	// b 0x8267e770
	goto loc_8267E770;
loc_8267E72C:
	// lwz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// stw r11,136(r31)
	REX_STORE_U32(r31.u32 + 136, ctx.r11.u32);
	// b 0x8267e770
	goto loc_8267E770;
loc_8267E738:
	// lwz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// stw r11,712(r31)
	REX_STORE_U32(r31.u32 + 712, ctx.r11.u32);
	// b 0x8267e770
	goto loc_8267E770;
loc_8267E744:
	// lwz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// sth r11,128(r31)
	REX_STORE_U16(r31.u32 + 128, ctx.r11.u16);
	// b 0x8267e770
	goto loc_8267E770;
loc_8267E750:
	// lwz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// sth r11,126(r31)
	REX_STORE_U16(r31.u32 + 126, ctx.r11.u16);
	// b 0x8267e770
	goto loc_8267E770;
loc_8267E75C:
	// lwz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// sth r11,124(r31)
	REX_STORE_U16(r31.u32 + 124, ctx.r11.u16);
	// b 0x8267e770
	goto loc_8267E770;
loc_8267E768:
	// lwz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// stw r11,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r11.u32);
loc_8267E770:
	// li r30,0
	r30.s64 = 0;
loc_8267E774:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82693E78) {
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
	ctx.lr = 0x82693E80;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r10
	r23.u64 = ctx.r10.u64;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// lfs f5,-3348(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -3348);
	ctx.f5.f64 = double(temp.f32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82693ee8
	if (!ctx.cr6.gt) goto loc_82693EE8;
	// addi r9,r1,76
	ctx.r9.s64 = ctx.r1.s64 + 76;
	// lis r3,32639
	ctx.r3.s64 = 2139029504;
	// clrlwi. r10,r11,2
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r3,r3,65518
	ctx.r3.u64 = ctx.r3.u64 | 65518;
	// beq 0x82693ecc
	if (ctx.cr0.eq) goto loc_82693ECC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82693EC4:
	// stwu r3,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x82693ec4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82693EC4;
loc_82693ECC:
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// rlwinm. r10,r4,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// beq 0x82693ee8
	if (ctx.cr0.eq) goto loc_82693EE8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82693EE0:
	// stwu r4,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x82693ee0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82693EE0;
loc_82693EE8:
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82693f94
	if (!ctx.cr6.gt) goto loc_82693F94;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f12,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r26.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lfs f11,4(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// addi r4,r7,-4
	ctx.r4.s64 = ctx.r7.s64 + -4;
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_82693F0C:
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfsu f0,8(r4)
	ea = 8 + ctx.r4.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r4.u32 = ea;
	// fsubs f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// lfs f10,-4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + -4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f0,f0,f0,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f0.f64, ctx.f13.f64)));
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bge cr6,0x82693f88
	if (!ctx.cr6.lt) goto loc_82693F88;
	// addic. r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x82693f74
	if (!ctx.cr0.gt) goto loc_82693F74;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
loc_82693F40:
	// addi r30,r1,80
	r30.s64 = ctx.r1.s64 + 80;
	// lfsx f13,r9,r30
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + r30.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82693f74
	if (ctx.cr6.gt) goto loc_82693F74;
	// addi r30,r1,88
	r30.s64 = ctx.r1.s64 + 88;
	// addi r29,r1,84
	r29.s64 = ctx.r1.s64 + 84;
	// addi r28,r1,92
	r28.s64 = ctx.r1.s64 + 92;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwzx r30,r9,r30
	r30.u64 = REX_LOAD_U32(ctx.r9.u32 + r30.u32);
	// stfsx f13,r9,r29
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r9.u32 + r29.u32, temp.u32);
	// stwx r30,r9,r28
	REX_STORE_U32(ctx.r9.u32 + r28.u32, r30.u32);
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// bgt 0x82693f40
	if (ctx.cr0.gt) goto loc_82693F40;
loc_82693F74:
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r30,r1,88
	r30.s64 = ctx.r1.s64 + 88;
	// stfsx f0,r10,r9
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, temp.u32);
	// stwx r31,r10,r30
	REX_STORE_U32(ctx.r10.u32 + r30.u32, r31.u32);
loc_82693F88:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r6
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x82693f0c
	if (ctx.cr6.lt) goto loc_82693F0C;
loc_82693F94:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826940cc
	if (!ctx.cr6.gt) goto loc_826940CC;
	// mr r25,r11
	r25.u64 = ctx.r11.u64;
	// lwz r27,284(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r28,r1,88
	r28.s64 = ctx.r1.s64 + 88;
	// lfs f6,3704(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	ctx.f6.f64 = double(temp.f32);
loc_82693FB0:
	// lwz r30,0(r28)
	r30.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lfs f10,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r26.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// subfc r11,r6,r30
	ctx.xer.ca = r30.u32 >= ctx.r6.u32;
	ctx.r11.u64 = r30.u64 - ctx.r6.u64;
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add r31,r11,r8
	r31.u64 = ctx.r11.u64 + ctx.r8.u64;
	// and r11,r9,r30
	ctx.r11.u64 = ctx.r9.u64 & r30.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lfs f0,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f8,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f12,f10,f8
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f8.f64));
	// fsubs f11,f9,f7
	ctx.f11.f64 = double(float(ctx.f9.f64 - ctx.f7.f64));
	// fmuls f4,f0,f12
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fmsubs f11,f13,f11,f4
	ctx.f11.f64 = double(float(std::fma(ctx.f13.f64, ctx.f11.f64, -ctx.f4.f64)));
	// stfs f11,100(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmadds f0,f13,f12,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f12.f64, ctx.f0.f64)));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// ble cr6,0x82694034
	if (!ctx.cr6.gt) goto loc_82694034;
	// lwz r11,292(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
loc_82694018:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r9,r30
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r30.s32, ctx.xer);
	// beq cr6,0x826940e4
	if (ctx.cr6.eq) goto loc_826940E4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r27
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r27.s32, ctx.xer);
	// blt cr6,0x82694018
	if (ctx.cr6.lt) goto loc_82694018;
loc_82694034:
	// mr r29,r23
	r29.u64 = r23.u64;
loc_82694038:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82693e08
	ctx.lr = 0x82694044;
	sub_82693E08(ctx, base);
	// subfc r11,r5,r3
	ctx.xer.ca = ctx.r3.u32 >= ctx.r5.u32;
	ctx.r11.u64 = ctx.r3.u64 - ctx.r5.u64;
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f12,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// and r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 & ctx.r3.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// fmadds f13,f12,f12,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f12.f64, ctx.f12.f64, ctx.f13.f64)));
	// lfs f11,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f4,f0,f11
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// lfs f3,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f11,f12,f11
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fdivs f13,f6,f13
	ctx.f13.f64 = double(float(ctx.f6.f64 / ctx.f13.f64));
	// fmsubs f12,f12,f3,f4
	ctx.f12.f64 = double(float(std::fma(ctx.f12.f64, ctx.f3.f64, -ctx.f4.f64)));
	// fmadds f0,f0,f3,f11
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f3.f64, ctx.f11.f64)));
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fadds f0,f12,f8
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f8.f64));
	// fadds f13,f13,f7
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f7.f64));
	// fsubs f12,f10,f0
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// fsubs f11,f9,f13
	ctx.f11.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// fmuls f12,f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f12,f11,f11,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f11.f64, ctx.f11.f64, ctx.f12.f64)));
	// fcmpu cr6,f12,f5
	ctx.cr6.compare(ctx.f12.f64, ctx.f5.f64);
	// bge cr6,0x826940c0
	if (!ctx.cr6.lt) goto loc_826940C0;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmr f5,f12
	ctx.f5.f64 = ctx.f12.f64;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stw r30,0(r24)
	REX_STORE_U32(r24.u32 + 0, r30.u32);
	// stw r3,4(r24)
	REX_STORE_U32(r24.u32 + 4, ctx.r3.u32);
loc_826940C0:
	// addic. r25,r25,-1
	ctx.xer.ca = r25.u32 > 0;
	r25.s64 = r25.s64 + -1;
	ctx.cr0.compare<int32_t>(r25.s32, 0, ctx.xer);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// bne 0x82693fb0
	if (!ctx.cr0.eq) goto loc_82693FB0;
loc_826940CC:
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,0(r26)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r26.u32 + 0, temp.u32);
	// stfs f13,4(r26)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r26.u32 + 4, temp.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cf4
	return;
loc_826940E4:
	// lwz r29,276(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// b 0x82694038
	goto loc_82694038;
}

DEFINE_REX_FUNC(sub_826A3638) {
	REX_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82793e04
	__imp__KeBugCheck(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_826A38C8) {
	REX_FUNC_PROLOGUE();
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826a36f0
	sub_826A36F0(ctx, base);
	return;
}

DEFINE_REX_FUNC(__savevmx_15) {
	REX_FUNC_PROLOGUE();
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
	// li r11,-272
	ctx.r11.s64 = -272;
	// stvx v15,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v15.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-256
	ctx.r11.s64 = -256;
	// stvx v16,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v16.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-240
	ctx.r11.s64 = -240;
	// stvx v17,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v17.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
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

DEFINE_REX_FUNC(__restvmx_90) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(sub_826AFF38) {
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
	ctx.lr = 0x826AFF40;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// ld r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// li r6,22
	ctx.r6.s64 = 22;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// bl 0x826b2c18
	ctx.lr = 0x826AFF68;
	sub_826B2C18(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x826aff88
	if (!ctx.cr6.eq) goto loc_826AFF88;
loc_826AFF70:
	// bl 0x826a33d0
	ctx.lr = 0x826AFF74;
	sub_826A33D0(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8269cb20
	ctx.lr = 0x826AFF80;
	sub_8269CB20(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x826b0060
	goto loc_826B0060;
loc_826AFF88:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x826aff70
	if (ctx.cr6.eq) goto loc_826AFF70;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(r31.s32, -1, ctx.xer);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r11,r11,-45
	ctx.r11.s64 = ctx.r11.s64 + -45;
	// addi r30,r10,-1
	r30.s64 = ctx.r10.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// add r28,r11,r29
	r28.u64 = ctx.r11.u64 + r29.u64;
	// beq cr6,0x826affbc
	if (ctx.cr6.eq) goto loc_826AFFBC;
	// subf r4,r11,r31
	ctx.r4.u64 = r31.u64 - ctx.r11.u64;
loc_826AFFBC:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826b29d8
	ctx.lr = 0x826AFFCC;
	sub_826B29D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826affe0
	if (ctx.cr0.eq) goto loc_826AFFE0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r29)
	REX_STORE_U8(r29.u32 + 0, ctx.r11.u8);
	// b 0x826b0060
	goto loc_826B0060;
loc_826AFFE0:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfc r10,r11,r30
	ctx.xer.ca = r30.u32 >= ctx.r11.u32;
	ctx.r10.u64 = r30.u64 - ctx.r11.u64;
	// eqv r9,r11,r30
	ctx.r9.u64 = ~(ctx.r11.u64 ^ r30.u64);
	// cmpwi cr6,r11,-4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -4, ctx.xer);
	// rlwinm r10,r9,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// blt cr6,0x826b0044
	if (ctx.cr6.lt) goto loc_826B0044;
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r27.s32, ctx.xer);
	// bge cr6,0x826b0044
	if (!ctx.cr6.lt) goto loc_826B0044;
	// extsb. r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826b0028
	if (ctx.cr0.eq) goto loc_826B0028;
loc_826B0014:
	// lbz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 0);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x826b0014
	if (!ctx.cr0.eq) goto loc_826B0014;
	// stb r11,-2(r28)
	REX_STORE_U8(r28.u32 + -2, ctx.r11.u8);
loc_826B0028:
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826afcb0
	ctx.lr = 0x826B0040;
	sub_826AFCB0(ctx, base);
	// b 0x826b0060
	goto loc_826B0060;
loc_826B0044:
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826af568
	ctx.lr = 0x826B0060;
	sub_826AF568(ctx, base);
loc_826B0060:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_826B8BA8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x826B8BB0;
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
	// lwz r10,60(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826B8BCC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826b8c80
	if (ctx.cr6.lt) goto loc_826B8C80;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// stw r11,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r11.u32);
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 12);
	// stw r10,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r10.u32);
	// lwz r9,20(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 20);
	// stw r9,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r9.u32);
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826b8c00
	if (ctx.cr6.eq) goto loc_826B8C00;
	// stw r11,660(r31)
	REX_STORE_U32(r31.u32 + 660, ctx.r11.u32);
loc_826B8C00:
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// lis r3,1
	ctx.r3.s64 = 65536;
	// ori r4,r4,32791
	ctx.r4.u64 = ctx.r4.u64 | 32791;
	// bl 0x823f02b8
	ctx.lr = 0x826B8C10;
	sub_823F02B8(ctx, base);
	// stw r3,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x826b8c28
	if (!ctx.cr6.eq) goto loc_826B8C28;
	// lis r29,-32761
	r29.s64 = -2147024896;
	// ori r29,r29,14
	r29.u64 = r29.u64 | 14;
	// b 0x826b8c80
	goto loc_826B8C80;
loc_826B8C28:
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x826b8c4c
	if (ctx.cr6.eq) goto loc_826B8C4C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,68(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826B8C48;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_826B8C4C:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt cr6,0x826b8c80
	if (ctx.cr6.lt) goto loc_826B8C80;
	// lwz r4,4(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x826b8c78
	if (ctx.cr6.eq) goto loc_826B8C78;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826B8C74;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_826B8C78:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bge cr6,0x826b8c94
	if (!ctx.cr6.lt) goto loc_826B8C94;
loc_826B8C80:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,60(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826B8C94;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826B8C94:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_826C13D8) {
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
	ctx.lr = 0x826C13E0;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826c1570
	if (ctx.cr6.eq) goto loc_826C1570;
	// lwz r11,584(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 584);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826c1570
	if (ctx.cr6.eq) goto loc_826C1570;
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x826c1410
	if (ctx.cr6.eq) goto loc_826C1410;
	// stw r30,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, r30.u32);
loc_826C1410:
	// lwz r11,392(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 392);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x826c1438
	if (ctx.cr6.eq) goto loc_826C1438;
loc_826C141C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826bfa00
	ctx.lr = 0x826C1424;
	sub_826BFA00(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x826c1574
	if (!ctx.cr6.eq) goto loc_826C1574;
	// lwz r11,392(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 392);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x826c141c
	if (!ctx.cr6.eq) goto loc_826C141C;
loc_826C1438:
	// lwz r11,588(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 588);
	// addi r27,r31,588
	r27.s64 = r31.s64 + 588;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x826c1554
	if (ctx.cr6.gt) goto loc_826C1554;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826c1554
	if (ctx.cr6.eq) goto loc_826C1554;
	// bdz 0x826c1460
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_826C1460;
	// bdz 0x826c1510
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_826C1510;
	// b 0x826c1554
	goto loc_826C1554;
loc_826C1460:
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// stw r30,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// std r30,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, r30.u64);
	// mr r28,r30
	r28.u64 = r30.u64;
	// std r30,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, r30.u64);
	// mr r29,r30
	r29.u64 = r30.u64;
	// bl 0x826c0d60
	ctx.lr = 0x826C1490;
	sub_826C0D60(ctx, base);
	// lis r10,-32764
	ctx.r10.s64 = -2147221504;
	// ori r9,r10,5
	ctx.r9.u64 = ctx.r10.u64 | 5;
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x826c14a8
	if (!ctx.cr6.eq) goto loc_826C14A8;
	// li r28,1
	r28.s64 = 1;
	// b 0x826c14cc
	goto loc_826C14CC;
loc_826C14A8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x826c14c0
	if (!ctx.cr6.lt) goto loc_826C14C0;
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,392(r31)
	REX_STORE_U32(r31.u32 + 392, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d04
	return;
loc_826C14C0:
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x826c14cc
	if (!ctx.cr6.eq) goto loc_826C14CC;
	// li r29,1
	r29.s64 = 1;
loc_826C14CC:
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// lwz r3,584(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 584);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// ld r9,120(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lwz r8,116(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r5,96(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r4,100(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// bl 0x826cd240
	ctx.lr = 0x826C14F4;
	sub_826CD240(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x826c1540
	if (!ctx.cr6.lt) goto loc_826C1540;
	// li r11,7
	ctx.r11.s64 = 7;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,392(r31)
	REX_STORE_U32(r31.u32 + 392, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d04
	return;
loc_826C1510:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,584(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 584);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x826d18f8
	ctx.lr = 0x826C1524;
	sub_826D18F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x826c1540
	if (!ctx.cr6.lt) goto loc_826C1540;
	// li r11,7
	ctx.r11.s64 = 7;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,392(r31)
	REX_STORE_U32(r31.u32 + 392, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d04
	return;
loc_826C1540:
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// bne cr6,0x826c1554
	if (!ctx.cr6.eq) goto loc_826C1554;
	// li r3,6
	ctx.r3.s64 = 6;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d04
	return;
loc_826C1554:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// li r10,6
	ctx.r10.s64 = 6;
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 & ctx.r10.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d04
	return;
loc_826C1570:
	// li r3,2
	ctx.r3.s64 = 2;
loc_826C1574:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_826CFE68) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,280(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 280);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x826cfe90
	if (ctx.cr6.eq) goto loc_826CFE90;
	// lwz r10,40(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x826cfe90
	if (!ctx.cr6.eq) goto loc_826CFE90;
	// lis r10,-32147
	ctx.r10.s64 = -2106785792;
	// addi r9,r10,-2792
	ctx.r9.s64 = ctx.r10.s64 + -2792;
	// b 0x826cfe98
	goto loc_826CFE98;
loc_826CFE90:
	// lis r10,-32147
	ctx.r10.s64 = -2106785792;
	// addi r9,r10,-7224
	ctx.r9.s64 = ctx.r10.s64 + -7224;
loc_826CFE98:
	// stw r9,504(r3)
	REX_STORE_U32(ctx.r3.u32 + 504, ctx.r9.u32);
	// lhz r10,34(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 34);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826cff5c
	if (ctx.cr6.eq) goto loc_826CFF5C;
	// li r7,0
	ctx.r7.s64 = 0;
loc_826CFEAC:
	// lwz r9,320(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 320);
	// mulli r10,r7,1776
	ctx.r10.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(1776));
	// lwz r8,280(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 280);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x826cff28
	if (!ctx.cr6.eq) goto loc_826CFF28;
	// lwz r10,448(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 448);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x826cfee0
	if (ctx.cr6.eq) goto loc_826CFEE0;
	// lwz r10,456(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 456);
	// lwz r8,256(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 256);
	// slw r10,r8,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r10.u8 & 0x3F));
	// b 0x826cfee4
	goto loc_826CFEE4;
loc_826CFEE0:
	// lwz r10,256(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 256);
loc_826CFEE4:
	// mullw r10,r7,r10
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// lwz r8,436(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 436);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r8,52(r9)
	REX_STORE_U32(ctx.r9.u32 + 52, ctx.r8.u32);
	// lwz r6,448(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 448);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lwz r10,256(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 256);
	// beq cr6,0x826cff10
	if (ctx.cr6.eq) goto loc_826CFF10;
	// lwz r8,456(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 456);
	// slw r10,r10,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r8.u8 & 0x3F));
loc_826CFF10:
	// mullw r10,r7,r10
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// lwz r8,436(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 436);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r8,148(r9)
	REX_STORE_U32(ctx.r9.u32 + 148, ctx.r8.u32);
	// b 0x826cff48
	goto loc_826CFF48;
loc_826CFF28:
	// lwz r8,320(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 320);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r6,4(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// stw r6,52(r9)
	REX_STORE_U32(ctx.r9.u32 + 52, ctx.r6.u32);
	// lwz r8,320(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 320);
	// add r5,r8,r10
	ctx.r5.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r4,4(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// stw r4,148(r9)
	REX_STORE_U32(ctx.r9.u32 + 148, ctx.r4.u32);
loc_826CFF48:
	// addi r10,r7,1
	ctx.r10.s64 = ctx.r7.s64 + 1;
	// lhz r9,34(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 34);
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// cmpw cr6,r7,r9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x826cfeac
	if (ctx.cr6.lt) goto loc_826CFEAC;
loc_826CFF5C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826D9480) {
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
	ctx.lr = 0x826D9488;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r31,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// stb r31,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, r31.u8);
	// bne cr6,0x826d94bc
	if (!ctx.cr6.eq) goto loc_826D94BC;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d00
	return;
loc_826D94BC:
	// lwz r27,28(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,148(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 148);
	// bl 0x826c6d18
	ctx.lr = 0x826D94D4;
	sub_826C6D18(ctx, base);
	// lis r11,-32688
	ctx.r11.s64 = -2142240768;
	// ori r28,r11,22
	r28.u64 = ctx.r11.u64 | 22;
	// cmplw cr6,r3,r28
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r28.u32, ctx.xer);
	// bne cr6,0x826d94fc
	if (!ctx.cr6.eq) goto loc_826D94FC;
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,148(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 148);
	// bl 0x826c6de8
	ctx.lr = 0x826D94F0;
	sub_826C6DE8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d00
	return;
loc_826D94FC:
	// li r30,1
	r30.s64 = 1;
loc_826D9500:
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,80(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826d9590
	if (ctx.cr6.eq) goto loc_826D9590;
	// rlwinm r11,r29,27,29,31
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 27) & 0x7;
	// clrlwi r9,r29,24
	ctx.r9.u64 = r29.u32 & 0xFF;
	// addi r8,r11,21
	ctx.r8.s64 = ctx.r11.s64 + 21;
	// slw r7,r30,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (r30.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// and r4,r5,r7
	ctx.r4.u64 = ctx.r5.u64 & ctx.r7.u64;
	// cmplw cr6,r4,r7
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x826d9590
	if (!ctx.cr6.eq) goto loc_826D9590;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// beq cr6,0x826d954c
	if (ctx.cr6.eq) goto loc_826D954C;
	// cmpwi cr6,r26,3
	ctx.cr6.compare<int32_t>(r26.s32, 3, ctx.xer);
	// beq cr6,0x826d954c
	if (ctx.cr6.eq) goto loc_826D954C;
	// stw r30,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, r30.u32);
	// b 0x826d9550
	goto loc_826D9550;
loc_826D954C:
	// stw r31,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, r31.u32);
loc_826D9550:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
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
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,40(r5)
	REX_STORE_U32(ctx.r5.u32 + 40, r31.u32);
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r30,76(r4)
	REX_STORE_U32(ctx.r4.u32 + 76, r30.u32);
loc_826D9590:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,148(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 148);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x826c6d80
	ctx.lr = 0x826D95A4;
	sub_826C6D80(ctx, base);
	// cmplw cr6,r3,r28
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r28.u32, ctx.xer);
	// bne cr6,0x826d9500
	if (!ctx.cr6.eq) goto loc_826D9500;
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,148(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 148);
	// bl 0x826c6de8
	ctx.lr = 0x826D95B8;
	sub_826C6DE8(ctx, base);
	// cmplw cr6,r3,r28
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r28.u32, ctx.xer);
	// bne cr6,0x826d95c4
	if (!ctx.cr6.eq) goto loc_826D95C4;
	// li r3,0
	ctx.r3.s64 = 0;
loc_826D95C4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_826DF760) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r3,80
	ctx.r3.s64 = 5242880;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// lwz r10,32(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,44(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 44);
	// stw r10,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// lwz r9,32(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 32);
	// stw r9,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r9.u32);
	// stw r11,32(r4)
	REX_STORE_U32(ctx.r4.u32 + 32, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826DFEF8) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x826dff60
	if (ctx.cr6.eq) goto loc_826DFF60;
loc_826DFF18:
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// ld r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// cmpld cr6,r11,r4
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r4.u64, ctx.xer);
	// bgt cr6,0x826dff40
	if (ctx.cr6.gt) goto loc_826DFF40;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpld cr6,r4,r10
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, ctx.r10.u64, ctx.xer);
	// blt cr6,0x826dff54
	if (ctx.cr6.lt) goto loc_826DFF54;
	// cmpld cr6,r11,r4
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r4.u64, ctx.xer);
	// blt cr6,0x826dff60
	if (ctx.cr6.lt) goto loc_826DFF60;
loc_826DFF40:
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x826dff18
	if (!ctx.cr6.eq) goto loc_826DFF18;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_826DFF54:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// stw r9,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
loc_826DFF60:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826E2138) {
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
	ctx.lr = 0x826E2140;
	// stfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -88, f30.u64);
	// stfd f31,-80(r1)
	REX_STORE_U64(ctx.r1.u32 + -80, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r24,r5,16
	r24.u64 = ctx.r5.u32 & 0xFFFF;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// ble cr6,0x826e223c
	if (!ctx.cr6.gt) goto loc_826E223C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lhz r11,34(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 34);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r25,0
	r25.s64 = 0;
	// li r28,1
	r28.s64 = 1;
	// lfs f31,3720(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3720);
	f31.f64 = double(temp.f32);
	// lfs f30,3716(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3716);
	f30.f64 = double(temp.f32);
loc_826E2180:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826e222c
	if (!ctx.cr6.gt) goto loc_826E222C;
	// rlwinm r27,r25,2,0,29
	r27.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// li r30,0
	r30.s64 = 0;
loc_826E2190:
	// lwz r11,320(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 320);
	// mulli r10,r30,1776
	ctx.r10.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(1776));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,60(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// lhz r11,110(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 110);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lfsx f0,r10,r27
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + r27.u32);
	ctx.f0.f64 = double(temp.f32);
	// slw r11,r28,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (r28.u32 << (ctx.r11.u8 & 0x3F));
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bge cr6,0x826e21dc
	if (!ctx.cr6.lt) goto loc_826E21DC;
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - f31.f64));
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// not r11,r10
	ctx.r11.u64 = ~ctx.r10.u64;
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x826e21fc
	if (!ctx.cr6.lt) goto loc_826E21FC;
	// b 0x826e21f8
	goto loc_826E21F8;
loc_826E21DC:
	// fadds f0,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + f31.f64));
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x826e21fc
	if (!ctx.cr6.gt) goto loc_826E21FC;
loc_826E21F8:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_826E21FC:
	// lwz r11,520(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 520);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826E2214;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r10,r30,1
	ctx.r10.s64 = r30.s64 + 1;
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 34);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// extsh r30,r10
	r30.s64 = ctx.r10.s16;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x826e2190
	if (ctx.cr6.lt) goto loc_826E2190;
loc_826E222C:
	// addi r10,r25,1
	ctx.r10.s64 = r25.s64 + 1;
	// extsh r25,r10
	r25.s64 = ctx.r10.s16;
	// cmpw cr6,r25,r24
	ctx.cr6.compare<int32_t>(r25.s32, r24.s32, ctx.xer);
	// blt cr6,0x826e2180
	if (ctx.cr6.lt) goto loc_826E2180;
loc_826E223C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_826EFA88) {
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
	ctx.lr = 0x826EFA90;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,0(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r26,0
	r26.s64 = 0;
	// lhz r11,150(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 150);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// lhz r9,580(r29)
	ctx.r9.u64 = REX_LOAD_U16(r29.u32 + 580);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x826efb88
	if (!ctx.cr6.lt) goto loc_826EFB88;
loc_826EFABC:
	// lhz r11,150(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 150);
	// mr r27,r26
	r27.u64 = r26.u64;
	// lwz r9,584(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 584);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// lwz r10,320(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 320);
	// lwz r28,0(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r7,r9
	ctx.r6.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r9.u32);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// mulli r11,r5,1776
	ctx.r11.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(1776));
	// add r30,r11,r10
	r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r4,40(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 40);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x826efb2c
	if (ctx.cr6.eq) goto loc_826EFB2C;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,36(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 36);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ef0d0
	ctx.lr = 0x826EFB08;
	sub_826EF0D0(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826efb84
	if (ctx.cr6.lt) goto loc_826EFB84;
	// lhz r11,490(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 490);
	// lhz r10,730(r28)
	ctx.r10.u64 = REX_LOAD_U16(r28.u32 + 730);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x826efb28
	if (!ctx.cr6.gt) goto loc_826EFB28;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_826EFB28:
	// sth r11,730(r28)
	REX_STORE_U16(r28.u32 + 730, ctx.r11.u16);
loc_826EFB2C:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// blt cr6,0x826efb84
	if (ctx.cr6.lt) goto loc_826EFB84;
	// lwz r11,60(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 60);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x826efb54
	if (!ctx.cr6.eq) goto loc_826EFB54;
	// lwz r10,264(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 264);
	// addi r11,r31,224
	ctx.r11.s64 = r31.s64 + 224;
	// clrlwi r9,r10,29
	ctx.r9.u64 = ctx.r10.u32 & 0x7;
	// subf r8,r9,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r9.u64;
	// stw r8,264(r31)
	REX_STORE_U32(r31.u32 + 264, ctx.r8.u32);
loc_826EFB54:
	// sth r26,202(r29)
	REX_STORE_U16(r29.u32 + 202, r26.u16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ce390
	ctx.lr = 0x826EFB60;
	sub_826CE390(ctx, base);
	// lhz r11,150(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 150);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// clrlwi r7,r10,16
	ctx.r7.u64 = ctx.r10.u32 & 0xFFFF;
	// sth r10,150(r31)
	REX_STORE_U16(r31.u32 + 150, ctx.r10.u16);
	// lhz r8,580(r29)
	ctx.r8.u64 = REX_LOAD_U16(r29.u32 + 580);
	// extsh r5,r8
	ctx.r5.s64 = ctx.r8.s16;
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x826efabc
	if (ctx.cr6.lt) goto loc_826EFABC;
loc_826EFB84:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_826EFB88:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_826F5068) {
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
	ctx.lr = 0x826F5070;
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
	// beq cr6,0x826f50d0
	if (ctx.cr6.eq) goto loc_826F50D0;
	// lwz r11,60(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x826f50c8
	if (ctx.cr6.eq) goto loc_826F50C8;
	// lwz r11,80(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// cmpwi cr6,r11,32000
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32000, ctx.xer);
	// blt cr6,0x826f50c8
	if (ctx.cr6.lt) goto loc_826F50C8;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r9,r10,44100
	ctx.r9.u64 = ctx.r10.u64 | 44100;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x826f50d0
	if (ctx.cr6.lt) goto loc_826F50D0;
loc_826F50C8:
	// li r14,0
	r14.s64 = 0;
	// b 0x826f50d4
	goto loc_826F50D4;
loc_826F50D0:
	// mr r14,r17
	r14.u64 = r17.u64;
loc_826F50D4:
	// lwz r11,400(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 400);
	// li r27,0
	r27.s64 = 0;
	// li r28,0
	r28.s64 = 0;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(r14.s32, 0, ctx.xer);
	// bne cr6,0x826f5120
	if (!ctx.cr6.eq) goto loc_826F5120;
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
	// twllei r7,0
	if (ctx.r7.s32 == 0 || ctx.r7.u32 < 0u) ppc_trap(ctx, base, 0);
	// mullw r9,r4,r9
	ctx.r9.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// rotlwi r10,r9,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// divw r22,r9,r7
	r22.u64 = uint32_t((ctx.r7.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r7.s32 == -1)) ? ctx.r9.s32 / ctx.r7.s32 : 0);
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// andc r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 & ~ctx.r8.u64;
	// twlgei r7,-1
	if (ctx.r7.s32 == -1 || ctx.r7.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// b 0x826f5124
	goto loc_826F5124;
loc_826F5120:
	// lwz r22,80(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_826F5124:
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
loc_826F5138:
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 0);
	// cmpw cr6,r11,r19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r19.s32, ctx.xer);
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// bgt cr6,0x826f514c
	if (ctx.cr6.gt) goto loc_826F514C;
	// mr r29,r19
	r29.u64 = r19.u64;
loc_826F514C:
	// cmpw cr6,r29,r20
	ctx.cr6.compare<int32_t>(r29.s32, r20.s32, ctx.xer);
	// bge cr6,0x826f531c
	if (!ctx.cr6.lt) goto loc_826F531C;
	// lbz r10,0(r18)
	ctx.r10.u64 = REX_LOAD_U8(r18.u32 + 0);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x826f5310
	if (!ctx.cr6.eq) goto loc_826F5310;
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
	// bgt cr6,0x826f5190
	if (ctx.cr6.gt) goto loc_826F5190;
loc_826F5180:
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x826f5180
	if (!ctx.cr6.gt) goto loc_826F5180;
loc_826F5190:
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(r14.s32, 0, ctx.xer);
	// beq cr6,0x826f51b0
	if (ctx.cr6.eq) goto loc_826F51B0;
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
	// b 0x826f5304
	goto loc_826F5304;
loc_826F51B0:
	// lwz r11,4(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 4);
	// mr r30,r20
	r30.u64 = r20.u64;
	// cmpw cr6,r20,r11
	ctx.cr6.compare<int32_t>(r20.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x826f51c4
	if (ctx.cr6.lt) goto loc_826F51C4;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
loc_826F51C4:
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
	// blt cr6,0x826f51e0
	if (ctx.cr6.lt) goto loc_826F51E0;
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
loc_826F51E0:
	// slw r11,r30,r26
	ctx.r11.u64 = r26.u8 & 0x20 ? 0 : (r30.u32 << (r26.u8 & 0x3F));
	// srawi r11,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 6;
	// cmpw cr6,r11,r22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r22.s32, ctx.xer);
	// blt cr6,0x826f51f4
	if (ctx.cr6.lt) goto loc_826F51F4;
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
loc_826F51F4:
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
	// bgt cr6,0x826f5220
	if (ctx.cr6.gt) goto loc_826F5220;
loc_826F5210:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x826f5210
	if (!ctx.cr6.gt) goto loc_826F5210;
loc_826F5220:
	// cmpw cr6,r27,r28
	ctx.cr6.compare<int32_t>(r27.s32, r28.s32, ctx.xer);
	// bne cr6,0x826f5244
	if (!ctx.cr6.eq) goto loc_826F5244;
	// lwzx r3,r7,r24
	ctx.r3.u64 = REX_LOAD_U32(ctx.r7.u32 + r24.u32);
	// bl 0x826f4fc8
	ctx.lr = 0x826F5230;
	sub_826F4FC8(ctx, base);
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
	// b 0x826f5304
	goto loc_826F5304;
loc_826F5244:
	// cmpwi cr6,r26,6
	ctx.cr6.compare<int32_t>(r26.s32, 6, ctx.xer);
	// ble cr6,0x826f5264
	if (!ctx.cr6.gt) goto loc_826F5264;
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
	// b 0x826f526c
	goto loc_826F526C;
loc_826F5264:
	// subfic r11,r26,6
	ctx.xer.ca = r26.u32 <= 6;
	ctx.r11.u64 = static_cast<uint64_t>(6) - r26.u64;
	// slw r31,r8,r11
	r31.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r11.u8 & 0x3F));
loc_826F526C:
	// lwzx r3,r7,r24
	ctx.r3.u64 = REX_LOAD_U32(ctx.r7.u32 + r24.u32);
	// bl 0x826f4fc8
	ctx.lr = 0x826F5274;
	sub_826F4FC8(ctx, base);
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// fmr f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f1.f64;
	// lwzx r3,r11,r24
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + r24.u32);
	// bl 0x826f4fc8
	ctx.lr = 0x826F5284;
	sub_826F4FC8(ctx, base);
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
loc_826F5304:
	// clrlwi r11,r25,24
	ctx.r11.u64 = r25.u32 & 0xFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r25,r11,24
	r25.u64 = ctx.r11.u32 & 0xFF;
loc_826F5310:
	// addi r18,r18,1
	r18.s64 = r18.s64 + 1;
	// addi r21,r21,4
	r21.s64 = r21.s64 + 4;
	// b 0x826f5138
	goto loc_826F5138;
loc_826F531C:
	// clrlwi r28,r25,24
	r28.u64 = r25.u32 & 0xFF;
	// addic. r11,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	ctx.r11.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x826f538c
	if (!ctx.cr0.gt) goto loc_826F538C;
	// rlwinm r30,r28,2,0,29
	r30.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// li r31,0
	r31.s64 = 0;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
loc_826F5334:
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(r14.s32, 0, ctx.xer);
	// beq cr6,0x826f5360
	if (ctx.cr6.eq) goto loc_826F5360;
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
	// bl 0x826f4fc8
	ctx.lr = 0x826F5358;
	sub_826F4FC8(ctx, base);
	// stfsx f1,r31,r16
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + r16.u32, temp.u32);
	// b 0x826f5380
	goto loc_826F5380;
loc_826F5360:
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
loc_826F5380:
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bne 0x826f5334
	if (!ctx.cr0.eq) goto loc_826F5334;
loc_826F538C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x826f53a8
	if (ctx.cr6.eq) goto loc_826F53A8;
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
loc_826F53A8:
	// stb r25,0(r15)
	REX_STORE_U8(r15.u32 + 0, r25.u8);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_82720480) {
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
	// bl 0x826a1c90
	ctx.lr = 0x82720488;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r25,324(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// mr r19,r5
	r19.u64 = ctx.r5.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// mr r31,r8
	r31.u64 = ctx.r8.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82720684
	if (!ctx.cr6.gt) goto loc_82720684;
	// addi r8,r10,-2
	ctx.r8.s64 = ctx.r10.s64 + -2;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// subf r23,r3,r6
	r23.u64 = ctx.r6.u64 - ctx.r3.u64;
	// lwz r3,308(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// rlwinm r22,r8,2,0,29
	r22.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r27,r11,r25
	r27.u64 = ctx.r11.u64 + r25.u64;
	// addi r26,r10,-1
	r26.s64 = ctx.r10.s64 + -1;
	// addi r29,r25,4
	r29.s64 = r25.s64 + 4;
	// mr r21,r9
	r21.u64 = ctx.r9.u64;
	// li r20,255
	r20.s64 = 255;
	// li r24,0
	r24.s64 = 0;
loc_827204D4:
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// cmpwi cr6,r26,1
	ctx.cr6.compare<int32_t>(r26.s32, 1, ctx.xer);
	// ble cr6,0x82720528
	if (!ctx.cr6.gt) goto loc_82720528;
	// addi r9,r26,-2
	ctx.r9.s64 = r26.s64 + -2;
	// rlwinm r8,r3,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r6,r9,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r9,r29,-8
	ctx.r9.s64 = r29.s64 + -8;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_827204FC:
	// lbzx r6,r8,r11
	ctx.r6.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// lbz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbzx r18,r11,r3
	r18.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r5,r5,r6
	ctx.r5.u64 = ctx.r5.u64 + ctx.r6.u64;
	// rotlwi r6,r18,4
	ctx.r6.u64 = __builtin_rotateleft32(r18.u32, 4);
	// mulli r5,r5,-406
	ctx.r5.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(-406));
	// srawi r5,r5,4
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xF) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 4;
	// add r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 + ctx.r6.u64;
	// stwu r6,8(r9)
	ea = 8 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x827204fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827204FC;
loc_82720528:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// lbzx r8,r11,r3
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// mulli r6,r9,-406
	ctx.r6.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(-406));
	// srawi r9,r6,3
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r6.s32 >> 3;
	// rotlwi r11,r8,4
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 4);
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r5,-4(r27)
	REX_STORE_U32(r27.u32 + -4, ctx.r5.u32);
	// lbz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 0);
	// lwz r9,0(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mulli r8,r9,-217
	ctx.r8.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(-217));
	// rotlwi r11,r11,5
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 5);
	// srawi r9,r8,10
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3FF) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 10;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r6,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r6.u32);
	// ble cr6,0x827205a8
	if (!ctx.cr6.gt) goto loc_827205A8;
	// addi r11,r10,-3
	ctx.r11.s64 = ctx.r10.s64 + -3;
	// rlwinm r5,r3,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r11,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82720580:
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lbzux r9,r7,r5
	ea = ctx.r7.u32 + ctx.r5.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r7.u32 = ea;
	// add r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 + ctx.r6.u64;
	// rotlwi r8,r9,5
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 5);
	// mulli r9,r6,-217
	ctx.r9.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(-217));
	// srawi r9,r9,11
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 11;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stwu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82720580
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82720580;
loc_827205A8:
	// cmpwi cr6,r26,1
	ctx.cr6.compare<int32_t>(r26.s32, 1, ctx.xer);
	// ble cr6,0x827205ec
	if (!ctx.cr6.gt) goto loc_827205EC;
	// addi r9,r26,-2
	ctx.r9.s64 = r26.s64 + -2;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_827205C4:
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,-4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// mulli r7,r9,226
	ctx.r7.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(226));
	// srawi r9,r7,9
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1FF) != 0);
	ctx.r9.s64 = ctx.r7.s32 >> 9;
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x827205c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827205C4;
loc_827205EC:
	// lwzx r11,r22,r25
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + r25.u32);
	// add r8,r23,r28
	ctx.r8.u64 = r23.u64 + r28.u64;
	// lwz r9,-4(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + -4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mulli r7,r11,226
	ctx.r7.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(226));
	// srawi r11,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 8;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r6,-4(r27)
	REX_STORE_U32(r27.u32 + -4, ctx.r6.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 0);
	// ble cr6,0x82720678
	if (!ctx.cr6.gt) goto loc_82720678;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// rlwinm r7,r3,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r6,r11,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r11,r29,-8
	ctx.r11.s64 = r29.s64 + -8;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_8272062C:
	// lwz r5,8(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 + ctx.r9.u64;
	// mulli r5,r9,227
	ctx.r5.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(227));
	// srawi r9,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r5.s32 >> 8;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// addi r9,r9,20
	ctx.r9.s64 = ctx.r9.s64 + 20;
	// mulli r6,r9,26
	ctx.r6.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(26));
	// srawi r9,r6,10
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3FF) != 0);
	ctx.r9.s64 = ctx.r6.s32 >> 10;
	// cmplwi cr6,r9,255
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 255, ctx.xer);
	// ble cr6,0x82720664
	if (!ctx.cr6.gt) goto loc_82720664;
	// rlwinm r9,r9,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// and r9,r9,r20
	ctx.r9.u64 = ctx.r9.u64 & r20.u64;
loc_82720664:
	// stb r9,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r9.u8);
	// stbx r24,r8,r3
	REX_STORE_U8(ctx.r8.u32 + ctx.r3.u32, r24.u8);
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lwzu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// bdnz 0x8272062c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8272062C;
loc_82720678:
	// addic. r21,r21,-1
	ctx.xer.ca = r21.u32 > 0;
	r21.s64 = r21.s64 + -1;
	ctx.cr0.compare<int32_t>(r21.s32, 0, ctx.xer);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// bne 0x827204d4
	if (!ctx.cr0.eq) goto loc_827204D4;
loc_82720684:
	// lwz r26,292(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r7,316(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// lwz r27,300(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// ble cr6,0x827206f0
	if (!ctx.cr6.gt) goto loc_827206F0;
	// mr r29,r26
	r29.u64 = r26.u64;
	// subf r28,r30,r4
	r28.u64 = ctx.r4.u64 - r30.u64;
loc_827206A0:
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// add r4,r30,r28
	ctx.r4.u64 = r30.u64 + r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8271fd78
	ctx.lr = 0x827206B4;
	sub_8271FD78(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// bne 0x827206a0
	if (!ctx.cr0.eq) goto loc_827206A0;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// ble cr6,0x827206f0
	if (!ctx.cr6.gt) goto loc_827206F0;
	// mr r30,r26
	r30.u64 = r26.u64;
	// subf r29,r31,r19
	r29.u64 = r19.u64 - r31.u64;
loc_827206D0:
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// add r4,r29,r31
	ctx.r4.u64 = r29.u64 + r31.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8271fd78
	ctx.lr = 0x827206E4;
	sub_8271FD78(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// bne 0x827206d0
	if (!ctx.cr0.eq) goto loc_827206D0;
loc_827206F0:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1ce0
	return;
}

DEFINE_REX_FUNC(sub_827318E0) {
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
loc_827318F0:
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
	// bdnz 0x827318f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827318F0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_827339F8) {
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
	// bl 0x826a1c80
	ctx.lr = 0x82733A00;
	// lhz r11,50(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 50);
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// stw r7,52(r1)
	REX_STORE_U32(ctx.r1.u32 + 52, ctx.r7.u32);
	// li r29,0
	r29.s64 = 0;
	// rlwinm r28,r11,31,1,31
	r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r3,1316(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 1316);
	// rlwinm r9,r11,1,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFC;
	// lwz r31,1312(r4)
	r31.u64 = REX_LOAD_U32(ctx.r4.u32 + 1312);
	// mullw r10,r28,r6
	ctx.r10.s64 = int64_t(r28.s32) * int64_t(ctx.r6.s32);
	// stw r4,28(r1)
	REX_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// stw r28,-176(r1)
	REX_STORE_U32(ctx.r1.u32 + -176, r28.u32);
	// rlwinm r5,r10,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r8,r9,r6
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r6.s32);
	// add r7,r10,r5
	ctx.r7.u64 = ctx.r10.u64 + ctx.r5.u64;
	// rlwinm r30,r10,3,0,28
	r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r5,r7,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// add r18,r5,r3
	r18.u64 = ctx.r5.u64 + ctx.r3.u64;
	// add r16,r30,r31
	r16.u64 = r30.u64 + r31.u64;
	// add r5,r8,r11
	ctx.r5.u64 = ctx.r8.u64 + ctx.r11.u64;
	// beq cr6,0x82733a64
	if (ctx.cr6.eq) goto loc_82733A64;
	// addi r7,r6,-1
	ctx.r7.s64 = ctx.r6.s64 + -1;
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r9,r7,r9
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// add r29,r9,r11
	r29.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_82733A64:
	// stw r10,-232(r1)
	REX_STORE_U32(ctx.r1.u32 + -232, ctx.r10.u32);
	// cmplw cr6,r6,r27
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, r27.u32, ctx.xer);
	// stw r6,-208(r1)
	REX_STORE_U32(ctx.r1.u32 + -208, ctx.r6.u32);
	// bge cr6,0x8273406c
	if (!ctx.cr6.lt) goto loc_8273406C;
	// rlwinm r11,r6,9,0,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 9) & 0xFFFFFE00;
	// addi r10,r6,1
	ctx.r10.s64 = ctx.r6.s64 + 1;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r11,256
	ctx.r6.s64 = ctx.r11.s64 + 256;
	// rlwinm r3,r29,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,-200(r1)
	REX_STORE_U32(ctx.r1.u32 + -200, ctx.r9.u32);
	// rlwinm r29,r10,8,0,23
	r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// stw r6,-204(r1)
	REX_STORE_U32(ctx.r1.u32 + -204, ctx.r6.u32);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// rlwinm r14,r8,2,0,29
	r14.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r29,-196(r1)
	REX_STORE_U32(ctx.r1.u32 + -196, r29.u32);
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r28,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,-30856
	ctx.r11.s64 = ctx.r11.s64 + -30856;
	// b 0x82733ac0
	goto loc_82733AC0;
loc_82733AB0:
	// lwz r14,-220(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -220);
	// lwz r8,-216(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -216);
	// lwz r29,-196(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -196);
	// lwz r6,-204(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -204);
loc_82733AC0:
	// lwz r5,-208(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -208);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82733ae4
	if (ctx.cr6.eq) goto loc_82733AE4;
	// lwz r7,1304(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 1304);
	// lwz r10,-200(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -200);
	// lwzx r10,r7,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq cr6,0x82733ae8
	if (ctx.cr6.eq) goto loc_82733AE8;
loc_82733AE4:
	// li r10,1
	ctx.r10.s64 = 1;
loc_82733AE8:
	// stw r10,-240(r1)
	REX_STORE_U32(ctx.r1.u32 + -240, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r31,348(r4)
	r31.u64 = REX_LOAD_U32(ctx.r4.u32 + 348);
	// addi r7,r6,-128
	ctx.r7.s64 = ctx.r6.s64 + -128;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// dcbt r7,r31
	// dcbt r6,r31
	// addi r7,r6,128
	ctx.r7.s64 = ctx.r6.s64 + 128;
	// dcbt r7,r31
	// addi r7,r6,256
	ctx.r7.s64 = ctx.r6.s64 + 256;
	// dcbt r7,r31
	// addi r7,r29,-128
	ctx.r7.s64 = r29.s64 + -128;
	// lwz r31,352(r4)
	r31.u64 = REX_LOAD_U32(ctx.r4.u32 + 352);
	// dcbt r7,r31
	// dcbt r29,r31
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82734018
	if (ctx.cr6.eq) goto loc_82734018;
	// rlwinm r31,r10,1,0,30
	r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r5,-232(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -232);
	// and r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 & r28.u64;
	// stw r8,-224(r1)
	REX_STORE_U32(ctx.r1.u32 + -224, ctx.r8.u32);
	// stw r31,-188(r1)
	REX_STORE_U32(ctx.r1.u32 + -188, r31.u32);
	// add r31,r9,r14
	r31.u64 = ctx.r9.u64 + r14.u64;
	// stw r10,-192(r1)
	REX_STORE_U32(ctx.r1.u32 + -192, ctx.r10.u32);
	// add r10,r9,r8
	ctx.r10.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r28
	ctx.ctr.u64 = r28.u64;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// stw r3,-236(r1)
	REX_STORE_U32(ctx.r1.u32 + -236, ctx.r3.u32);
	// stw r5,-228(r1)
	REX_STORE_U32(ctx.r1.u32 + -228, ctx.r5.u32);
	// li r15,0
	r15.s64 = 0;
	// stw r31,-220(r1)
	REX_STORE_U32(ctx.r1.u32 + -220, r31.u32);
	// stw r10,-216(r1)
	REX_STORE_U32(ctx.r1.u32 + -216, ctx.r10.u32);
	// stw r9,-212(r1)
	REX_STORE_U32(ctx.r1.u32 + -212, ctx.r9.u32);
	// b 0x82733b7c
	goto loc_82733B7C;
loc_82733B78:
	// lwz r3,-236(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -236);
loc_82733B7C:
	// lis r12,-1
	ctx.r12.s64 = -65536;
	// ld r10,0(r16)
	ctx.r10.u64 = REX_LOAD_U64(r16.u32 + 0);
	// addi r9,r11,-192
	ctx.r9.s64 = ctx.r11.s64 + -192;
	// lwz r27,-192(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -192);
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// lwz r22,-188(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -188);
	// addi r8,r11,-192
	ctx.r8.s64 = ctx.r11.s64 + -192;
	// rldicr r12,r12,32,31
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 32) & 0xFFFFFFFF00000000;
	// addi r24,r11,-192
	r24.s64 = ctx.r11.s64 + -192;
	// oris r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 2139029504;
	// cntlzw r20,r7
	r20.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// srawi r17,r15,31
	ctx.xer.ca = (r15.s32 < 0) & ((r15.u32 & 0x7FFFFFFF) != 0);
	r17.s64 = r15.s32 >> 31;
	// and r23,r10,r12
	r23.u64 = ctx.r10.u64 & ctx.r12.u64;
	// addi r10,r11,-192
	ctx.r10.s64 = ctx.r11.s64 + -192;
	// clrldi r26,r23,56
	r26.u64 = r23.u64 & 0xFF;
	// rldicl r25,r23,56,56
	r25.u64 = __builtin_rotateleft64(r23.u64, 56) & 0xFF;
	// rldicl r30,r23,48,56
	r30.u64 = __builtin_rotateleft64(r23.u64, 48) & 0xFF;
	// rldicl r31,r23,40,56
	r31.u64 = __builtin_rotateleft64(r23.u64, 40) & 0xFF;
	// lis r12,-1
	ctx.r12.s64 = -65536;
	// lbzx r9,r26,r9
	ctx.r9.u64 = REX_LOAD_U8(r26.u32 + ctx.r9.u32);
	// rldicl r5,r23,32,56
	ctx.r5.u64 = __builtin_rotateleft64(r23.u64, 32) & 0xFF;
	// lbzx r8,r25,r8
	ctx.r8.u64 = REX_LOAD_U8(r25.u32 + ctx.r8.u32);
	// addi r21,r11,-192
	r21.s64 = ctx.r11.s64 + -192;
	// rldicr r9,r9,8,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbzx r10,r30,r10
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + ctx.r10.u32);
	// lbzx r19,r31,r24
	r19.u64 = REX_LOAD_U8(r31.u32 + r24.u32);
	// rlwinm r24,r20,27,31,31
	r24.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 27) & 0x1;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// rldicr r8,r9,8,55
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// lbzx r9,r5,r21
	ctx.r9.u64 = REX_LOAD_U8(ctx.r5.u32 + r21.u32);
	// rldicr r12,r12,32,31
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 32) & 0xFFFFFFFF00000000;
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// oris r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 2139029504;
	// rldicr r10,r10,8,55
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// or r20,r10,r19
	r20.u64 = ctx.r10.u64 | r19.u64;
	// rlwinm r19,r17,3,28,28
	r19.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 3) & 0x8;
	// rldicr r20,r20,8,55
	r20.u64 = __builtin_rotateleft64(r20.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// subf r19,r19,r16
	r19.u64 = r16.u64 - r19.u64;
	// or r9,r20,r9
	ctx.r9.u64 = r20.u64 | ctx.r9.u64;
	// rldicl r8,r23,24,56
	ctx.r8.u64 = __builtin_rotateleft64(r23.u64, 24) & 0xFF;
	// rlwinm r27,r27,3,0,28
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r21,r11,-192
	r21.s64 = ctx.r11.s64 + -192;
	// ld r20,0(r19)
	r20.u64 = REX_LOAD_U64(r19.u32 + 0);
	// addi r10,r11,-112
	ctx.r10.s64 = ctx.r11.s64 + -112;
	// add r22,r22,r24
	r22.u64 = r22.u64 + r24.u64;
	// and r19,r20,r12
	r19.u64 = r20.u64 & ctx.r12.u64;
	// lis r12,-1
	ctx.r12.s64 = -65536;
	// subf r27,r27,r16
	r27.u64 = r16.u64 - r27.u64;
	// lbzx r21,r8,r21
	r21.u64 = REX_LOAD_U8(ctx.r8.u32 + r21.u32);
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// rlwinm r22,r22,3,0,28
	r22.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 3) & 0xFFFFFFF8;
	// rldicr r12,r12,32,31
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 32) & 0xFFFFFFFF00000000;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// rldicr r9,r9,8,55
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// ld r27,0(r27)
	r27.u64 = REX_LOAD_U64(r27.u32 + 0);
	// rldicl r23,r23,16,48
	r23.u64 = __builtin_rotateleft64(r23.u64, 16) & 0xFFFF;
	// oris r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 2139029504;
	// or r9,r9,r21
	ctx.r9.u64 = ctx.r9.u64 | r21.u64;
	// ldx r10,r22,r10
	ctx.r10.u64 = REX_LOAD_U64(r22.u32 + ctx.r10.u32);
	// rlwinm r23,r23,0,25,25
	r23.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x40;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// and r17,r9,r10
	r17.u64 = ctx.r9.u64 & ctx.r10.u64;
	// and r27,r27,r12
	r27.u64 = r27.u64 & ctx.r12.u64;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// bne cr6,0x82733f88
	if (!ctx.cr6.eq) goto loc_82733F88;
	// lwz r9,348(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 348);
	// li r20,255
	r20.s64 = 255;
	// li r21,255
	r21.s64 = 255;
	// add r10,r14,r9
	ctx.r10.u64 = r14.u64 + ctx.r9.u64;
	// li r22,255
	r22.s64 = 255;
	// li r23,255
	r23.s64 = 255;
	// lwzx r6,r14,r9
	ctx.r6.u64 = REX_LOAD_U32(r14.u32 + ctx.r9.u32);
	// li r29,255
	r29.s64 = 255;
	// li r28,255
	r28.s64 = 255;
	// cmpwi cr6,r6,16384
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 16384, ctx.xer);
	// beq cr6,0x82733d2c
	if (ctx.cr6.eq) goto loc_82733D2C;
	// lwzx r4,r3,r9
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	// lwz r3,-240(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -240);
	// subf r4,r6,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r6.u64;
	// or r3,r4,r3
	ctx.r3.u64 = ctx.r4.u64 | ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82733cec
	if (!ctx.cr6.eq) goto loc_82733CEC;
	// rldicl r4,r27,40,24
	ctx.r4.u64 = __builtin_rotateleft64(r27.u64, 40) & 0xFFFFFFFFFF;
	// addi r3,r11,160
	ctx.r3.s64 = ctx.r11.s64 + 160;
	// addi r20,r11,80
	r20.s64 = ctx.r11.s64 + 80;
	// clrlwi r4,r4,24
	ctx.r4.u64 = ctx.r4.u32 & 0xFF;
	// lbzx r20,r8,r20
	r20.u64 = REX_LOAD_U8(ctx.r8.u32 + r20.u32);
	// lbzx r3,r4,r3
	ctx.r3.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r3.u32);
	// or r20,r3,r20
	r20.u64 = ctx.r3.u64 | r20.u64;
loc_82733CEC:
	// lwz r4,-4(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// subf r3,r6,r4
	ctx.r3.u64 = ctx.r4.u64 - ctx.r6.u64;
	// or r4,r3,r24
	ctx.r4.u64 = ctx.r3.u64 | r24.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lwz r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// bne cr6,0x82733d2c
	if (!ctx.cr6.eq) goto loc_82733D2C;
	// rldicl r3,r19,32,32
	ctx.r3.u64 = __builtin_rotateleft64(r19.u64, 32) & 0xFFFFFFFF;
	// std r10,-184(r1)
	REX_STORE_U64(ctx.r1.u32 + -184, ctx.r10.u64);
	// addi r10,r11,-80
	ctx.r10.s64 = ctx.r11.s64 + -80;
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// clrlwi r20,r20,24
	r20.u64 = r20.u32 & 0xFF;
	// lbzx r10,r8,r10
	ctx.r10.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// lbzx r3,r3,r11
	ctx.r3.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// or r3,r3,r10
	ctx.r3.u64 = ctx.r3.u64 | ctx.r10.u64;
	// ld r10,-184(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + -184);
	// and r20,r3,r20
	r20.u64 = ctx.r3.u64 & r20.u64;
loc_82733D2C:
	// lwz r3,4(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r3,16384
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 16384, ctx.xer);
	// beq cr6,0x82733da8
	if (ctx.cr6.eq) goto loc_82733DA8;
	// lwz r10,-236(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -236);
	// lwz r4,-240(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -240);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// subf r10,r3,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r3.u64;
	// or r4,r10,r4
	ctx.r4.u64 = ctx.r10.u64 | ctx.r4.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x82733d74
	if (!ctx.cr6.eq) goto loc_82733D74;
	// rldicl r10,r27,48,16
	ctx.r10.u64 = __builtin_rotateleft64(r27.u64, 48) & 0xFFFFFFFFFFFF;
	// addi r4,r11,160
	ctx.r4.s64 = ctx.r11.s64 + 160;
	// addi r21,r11,80
	r21.s64 = ctx.r11.s64 + 80;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// lbzx r21,r5,r21
	r21.u64 = REX_LOAD_U8(ctx.r5.u32 + r21.u32);
	// lbzx r4,r10,r4
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// or r21,r4,r21
	r21.u64 = ctx.r4.u64 | r21.u64;
loc_82733D74:
	// cmpw cr6,r6,r3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x82733da4
	if (!ctx.cr6.eq) goto loc_82733DA4;
	// addi r10,r11,-80
	ctx.r10.s64 = ctx.r11.s64 + -80;
	// lbzx r4,r8,r11
	ctx.r4.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// std r11,-168(r1)
	REX_STORE_U64(ctx.r1.u32 + -168, ctx.r11.u64);
	// clrlwi r21,r21,24
	r21.u64 = r21.u32 & 0xFF;
	// rotlwi r11,r4,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// lbzx r10,r5,r10
	ctx.r10.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r10.u32);
	// stw r4,-184(r1)
	REX_STORE_U32(ctx.r1.u32 + -184, ctx.r4.u32);
	// or r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 | ctx.r10.u64;
	// ld r11,-168(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// and r21,r10,r21
	r21.u64 = ctx.r10.u64 & r21.u64;
loc_82733DA4:
	// lwz r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
loc_82733DA8:
	// lwz r10,-224(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -224);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,16384
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 16384, ctx.xer);
	// beq cr6,0x82733e0c
	if (ctx.cr6.eq) goto loc_82733E0C;
	// cmpw cr6,r6,r9
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82733dd8
	if (!ctx.cr6.eq) goto loc_82733DD8;
	// addi r6,r11,160
	ctx.r6.s64 = ctx.r11.s64 + 160;
	// addi r22,r11,80
	r22.s64 = ctx.r11.s64 + 80;
	// lbzx r8,r8,r6
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r6.u32);
	// lbzx r6,r31,r22
	ctx.r6.u64 = REX_LOAD_U8(r31.u32 + r22.u32);
	// or r22,r8,r6
	r22.u64 = ctx.r8.u64 | ctx.r6.u64;
loc_82733DD8:
	// lwz r8,-4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// subf r6,r9,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r9.u64;
	// or r8,r6,r24
	ctx.r8.u64 = ctx.r6.u64 | r24.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82733e0c
	if (!ctx.cr6.eq) goto loc_82733E0C;
	// rldicl r8,r19,48,16
	ctx.r8.u64 = __builtin_rotateleft64(r19.u64, 48) & 0xFFFFFFFFFFFF;
	// addi r6,r11,-80
	ctx.r6.s64 = ctx.r11.s64 + -80;
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// clrlwi r22,r22,24
	r22.u64 = r22.u32 & 0xFF;
	// lbzx r6,r31,r6
	ctx.r6.u64 = REX_LOAD_U8(r31.u32 + ctx.r6.u32);
	// lbzx r8,r8,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// or r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 | ctx.r6.u64;
	// and r22,r6,r22
	r22.u64 = ctx.r6.u64 & r22.u64;
loc_82733E0C:
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r10,16384
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16384, ctx.xer);
	// beq cr6,0x82733e54
	if (ctx.cr6.eq) goto loc_82733E54;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82733e34
	if (!ctx.cr6.eq) goto loc_82733E34;
	// addi r8,r11,160
	ctx.r8.s64 = ctx.r11.s64 + 160;
	// addi r6,r11,80
	ctx.r6.s64 = ctx.r11.s64 + 80;
	// lbzx r5,r5,r8
	ctx.r5.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r8.u32);
	// lbzx r3,r30,r6
	ctx.r3.u64 = REX_LOAD_U8(r30.u32 + ctx.r6.u32);
	// or r23,r5,r3
	r23.u64 = ctx.r5.u64 | ctx.r3.u64;
loc_82733E34:
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82733e54
	if (!ctx.cr6.eq) goto loc_82733E54;
	// addi r10,r11,-80
	ctx.r10.s64 = ctx.r11.s64 + -80;
	// lbzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + ctx.r11.u32);
	// clrlwi r8,r23,24
	ctx.r8.u64 = r23.u32 & 0xFF;
	// lbzx r6,r30,r10
	ctx.r6.u64 = REX_LOAD_U8(r30.u32 + ctx.r10.u32);
	// or r5,r9,r6
	ctx.r5.u64 = ctx.r9.u64 | ctx.r6.u64;
	// and r23,r5,r8
	r23.u64 = ctx.r5.u64 & ctx.r8.u64;
loc_82733E54:
	// lwz r9,-228(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -228);
	// lwz r10,352(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 352);
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmpwi cr6,r9,16384
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 16384, ctx.xer);
	// beq cr6,0x82733f18
	if (ctx.cr6.eq) goto loc_82733F18;
	// lwz r5,-232(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -232);
	// lwz r6,-192(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -192);
	// lwz r3,-240(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -240);
	// subf r6,r6,r5
	ctx.r6.u64 = ctx.r5.u64 - ctx.r6.u64;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r5,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	// subf r6,r9,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r9.u64;
	// or r5,r6,r3
	ctx.r5.u64 = ctx.r6.u64 | ctx.r3.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x82733ec8
	if (!ctx.cr6.eq) goto loc_82733EC8;
	// rldicl r10,r27,56,8
	ctx.r10.u64 = __builtin_rotateleft64(r27.u64, 56) & 0xFFFFFFFFFFFFFF;
	// addi r6,r11,160
	ctx.r6.s64 = ctx.r11.s64 + 160;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// addi r5,r11,80
	ctx.r5.s64 = ctx.r11.s64 + 80;
	// addi r3,r11,160
	ctx.r3.s64 = ctx.r11.s64 + 160;
	// addi r31,r11,80
	r31.s64 = ctx.r11.s64 + 80;
	// clrlwi r30,r27,24
	r30.u64 = r27.u32 & 0xFF;
	// lbzx r10,r10,r6
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r6.u32);
	// lbzx r5,r25,r5
	ctx.r5.u64 = REX_LOAD_U8(r25.u32 + ctx.r5.u32);
	// lbzx r31,r26,r31
	r31.u64 = REX_LOAD_U8(r26.u32 + r31.u32);
	// or r29,r10,r5
	r29.u64 = ctx.r10.u64 | ctx.r5.u64;
	// lbzx r6,r30,r3
	ctx.r6.u64 = REX_LOAD_U8(r30.u32 + ctx.r3.u32);
	// or r28,r6,r31
	r28.u64 = ctx.r6.u64 | r31.u64;
loc_82733EC8:
	// lwz r10,-4(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + -4);
	// subf r9,r9,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r9.u64;
	// or r8,r9,r24
	ctx.r8.u64 = ctx.r9.u64 | r24.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82733f18
	if (!ctx.cr6.eq) goto loc_82733F18;
	// rldicl r10,r19,56,8
	ctx.r10.u64 = __builtin_rotateleft64(r19.u64, 56) & 0xFFFFFFFFFFFFFF;
	// addi r9,r11,-80
	ctx.r9.s64 = ctx.r11.s64 + -80;
	// clrlwi r6,r10,24
	ctx.r6.u64 = ctx.r10.u32 & 0xFF;
	// addi r8,r11,-80
	ctx.r8.s64 = ctx.r11.s64 + -80;
	// clrlwi r5,r19,24
	ctx.r5.u64 = r19.u32 & 0xFF;
	// clrlwi r3,r29,24
	ctx.r3.u64 = r29.u32 & 0xFF;
	// lbzx r10,r25,r9
	ctx.r10.u64 = REX_LOAD_U8(r25.u32 + ctx.r9.u32);
	// clrlwi r9,r28,24
	ctx.r9.u64 = r28.u32 & 0xFF;
	// lbzx r6,r6,r11
	ctx.r6.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// lbzx r8,r26,r8
	ctx.r8.u64 = REX_LOAD_U8(r26.u32 + ctx.r8.u32);
	// lbzx r5,r5,r11
	ctx.r5.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r11.u32);
	// or r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 | ctx.r10.u64;
	// or r8,r5,r8
	ctx.r8.u64 = ctx.r5.u64 | ctx.r8.u64;
	// and r29,r10,r3
	r29.u64 = ctx.r10.u64 & ctx.r3.u64;
	// and r28,r8,r9
	r28.u64 = ctx.r8.u64 & ctx.r9.u64;
loc_82733F18:
	// rldicl r10,r17,56,8
	ctx.r10.u64 = __builtin_rotateleft64(r17.u64, 56) & 0xFFFFFFFFFFFFFF;
	// lwz r6,-204(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -204);
	// clrlwi r9,r17,24
	ctx.r9.u64 = r17.u32 & 0xFF;
	// lwz r3,-236(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -236);
	// rldicl r8,r10,56,8
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 56) & 0xFFFFFFFFFFFFFF;
	// clrlwi r5,r10,24
	ctx.r5.u64 = ctx.r10.u32 & 0xFF;
	// rldicl r10,r8,56,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u64, 56) & 0xFFFFFFFFFFFFFF;
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// rldicl r31,r10,56,8
	r31.u64 = __builtin_rotateleft64(ctx.r10.u64, 56) & 0xFFFFFFFFFFFFFF;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// rldicl r30,r31,56,8
	r30.u64 = __builtin_rotateleft64(r31.u64, 56) & 0xFFFFFFFFFFFFFF;
	// clrlwi r31,r31,24
	r31.u64 = r31.u32 & 0xFF;
	// clrlwi r30,r30,24
	r30.u64 = r30.u32 & 0xFF;
	// and r31,r31,r29
	r31.u64 = r31.u64 & r29.u64;
	// lwz r29,-196(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -196);
	// and r30,r30,r28
	r30.u64 = r30.u64 & r28.u64;
	// lwz r28,-176(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -176);
	// and r9,r9,r20
	ctx.r9.u64 = ctx.r9.u64 & r20.u64;
	// stb r31,4(r18)
	REX_STORE_U8(r18.u32 + 4, r31.u8);
	// and r5,r5,r21
	ctx.r5.u64 = ctx.r5.u64 & r21.u64;
	// stb r30,5(r18)
	REX_STORE_U8(r18.u32 + 5, r30.u8);
	// and r8,r8,r22
	ctx.r8.u64 = ctx.r8.u64 & r22.u64;
	// stb r9,0(r18)
	REX_STORE_U8(r18.u32 + 0, ctx.r9.u8);
	// and r10,r10,r23
	ctx.r10.u64 = ctx.r10.u64 & r23.u64;
	// stb r5,1(r18)
	REX_STORE_U8(r18.u32 + 1, ctx.r5.u8);
	// stb r8,2(r18)
	REX_STORE_U8(r18.u32 + 2, ctx.r8.u8);
	// stb r10,3(r18)
	REX_STORE_U8(r18.u32 + 3, ctx.r10.u8);
	// b 0x82733fc0
	goto loc_82733FC0;
loc_82733F88:
	// rldicl r10,r17,56,8
	ctx.r10.u64 = __builtin_rotateleft64(r17.u64, 56) & 0xFFFFFFFFFFFFFF;
	// stb r17,0(r18)
	REX_STORE_U8(r18.u32 + 0, r17.u8);
	// rldicl r8,r10,56,8
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 56) & 0xFFFFFFFFFFFFFF;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// rldicl r10,r8,56,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u64, 56) & 0xFFFFFFFFFFFFFF;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// stb r5,1(r18)
	REX_STORE_U8(r18.u32 + 1, ctx.r5.u8);
	// rldicl r8,r10,56,8
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 56) & 0xFFFFFFFFFFFFFF;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// stb r9,2(r18)
	REX_STORE_U8(r18.u32 + 2, ctx.r9.u8);
	// rldicl r10,r8,56,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u64, 56) & 0xFFFFFFFFFFFFFF;
	// stb r8,4(r18)
	REX_STORE_U8(r18.u32 + 4, ctx.r8.u8);
	// stb r5,3(r18)
	REX_STORE_U8(r18.u32 + 3, ctx.r5.u8);
	// stb r10,5(r18)
	REX_STORE_U8(r18.u32 + 5, ctx.r10.u8);
loc_82733FC0:
	// lwz r10,-232(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -232);
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
	// lwz r8,-228(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -228);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// lwz r5,-224(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -224);
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// stw r9,-236(r1)
	REX_STORE_U32(ctx.r1.u32 + -236, ctx.r9.u32);
	// addi r10,r8,4
	ctx.r10.s64 = ctx.r8.s64 + 4;
	// addi r9,r5,8
	ctx.r9.s64 = ctx.r5.s64 + 8;
	// stw r3,-232(r1)
	REX_STORE_U32(ctx.r1.u32 + -232, ctx.r3.u32);
	// addi r15,r15,-1
	r15.s64 = r15.s64 + -1;
	// stw r10,-228(r1)
	REX_STORE_U32(ctx.r1.u32 + -228, ctx.r10.u32);
	// addi r14,r14,8
	r14.s64 = r14.s64 + 8;
	// stw r9,-224(r1)
	REX_STORE_U32(ctx.r1.u32 + -224, ctx.r9.u32);
	// addi r18,r18,6
	r18.s64 = r18.s64 + 6;
	// addi r16,r16,8
	r16.s64 = r16.s64 + 8;
	// bdnz 0x82733b78
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82733B78;
	// lwz r14,-220(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -220);
	// lwz r8,-216(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -216);
	// lwz r3,-212(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -212);
	// lwz r27,52(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 52);
	// lwz r5,-208(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -208);
loc_82734018:
	// rlwinm r9,r28,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 3) & 0xFFFFFFF8;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// add r10,r9,r14
	ctx.r10.u64 = ctx.r9.u64 + r14.u64;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r10,-220(r1)
	REX_STORE_U32(ctx.r1.u32 + -220, ctx.r10.u32);
	// stw r8,-216(r1)
	REX_STORE_U32(ctx.r1.u32 + -216, ctx.r8.u32);
	// beq cr6,0x82734040
	if (ctx.cr6.eq) goto loc_82734040;
	// add r10,r9,r3
	ctx.r10.u64 = ctx.r9.u64 + ctx.r3.u64;
	// stw r10,-212(r1)
	REX_STORE_U32(ctx.r1.u32 + -212, ctx.r10.u32);
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
loc_82734040:
	// lwz r8,-200(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -200);
	// addi r10,r5,1
	ctx.r10.s64 = ctx.r5.s64 + 1;
	// addi r7,r6,512
	ctx.r7.s64 = ctx.r6.s64 + 512;
	// addi r6,r8,4
	ctx.r6.s64 = ctx.r8.s64 + 4;
	// stw r10,-208(r1)
	REX_STORE_U32(ctx.r1.u32 + -208, ctx.r10.u32);
	// addi r5,r29,256
	ctx.r5.s64 = r29.s64 + 256;
	// stw r7,-204(r1)
	REX_STORE_U32(ctx.r1.u32 + -204, ctx.r7.u32);
	// stw r6,-200(r1)
	REX_STORE_U32(ctx.r1.u32 + -200, ctx.r6.u32);
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r27.u32, ctx.xer);
	// stw r5,-196(r1)
	REX_STORE_U32(ctx.r1.u32 + -196, ctx.r5.u32);
	// blt cr6,0x82733ab0
	if (ctx.cr6.lt) goto loc_82733AB0;
loc_8273406C:
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_8275B948) {
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
	ctx.lr = 0x8275B950;
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r8,3740(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 3740);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,224(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 224);
	// lwz r15,128(r3)
	r15.u64 = REX_LOAD_U32(ctx.r3.u32 + 128);
	// lwz r14,132(r3)
	r14.u64 = REX_LOAD_U32(ctx.r3.u32 + 132);
	// lwz r9,220(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 220);
	// lwz r7,8(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r6,22368(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 22368);
	// add r16,r7,r11
	r16.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lwz r8,4(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// add r17,r9,r10
	r17.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r27,156(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 156);
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// lwz r26,160(r3)
	r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 160);
	// add r25,r8,r11
	r25.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stw r15,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, r15.u32);
	// stw r14,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r14.u32);
	// stw r16,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, r16.u32);
	// bne cr6,0x8275b9d8
	if (!ctx.cr6.eq) goto loc_8275B9D8;
	// lwz r29,22384(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 22384);
	// lwz r30,22388(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 22388);
	// lwz r28,22392(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 22392);
	// rlwinm r11,r29,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r30,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r22,22372(r3)
	r22.u64 = REX_LOAD_U32(ctx.r3.u32 + 22372);
	// rlwinm r9,r28,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r21,22376(r3)
	r21.u64 = REX_LOAD_U32(ctx.r3.u32 + 22376);
	// lwz r20,22380(r3)
	r20.u64 = REX_LOAD_U32(ctx.r3.u32 + 22380);
	// stw r11,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// stw r10,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// stw r9,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r9.u32);
	// b 0x8275ba18
	goto loc_8275BA18;
loc_8275B9D8:
	// lwz r9,15652(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 15652);
	// lwz r10,15660(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 15660);
	// lwz r11,15684(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15684);
	// srawi r8,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// lwz r7,15676(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 15676);
	// add r22,r10,r4
	r22.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lwz r9,15608(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 15608);
	// addze r30,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	r30.s64 = temp.s64;
	// lwz r10,15612(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 15612);
	// lwz r29,15652(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 15652);
	// add r21,r9,r22
	r21.u64 = ctx.r9.u64 + r22.u64;
	// stw r11,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// add r20,r10,r22
	r20.u64 = ctx.r10.u64 + r22.u64;
	// stw r7,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r7.u32);
	// mr r28,r30
	r28.u64 = r30.u64;
	// stw r11,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
loc_8275BA18:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826fb050
	ctx.lr = 0x8275BA20;
	sub_826FB050(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8275ba30
	if (ctx.cr6.eq) goto loc_8275BA30;
	// lwz r27,15340(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 15340);
	// lwz r26,15344(r31)
	r26.u64 = REX_LOAD_U32(r31.u32 + 15344);
loc_8275BA30:
	// lwz r11,15928(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15928);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8275bab8
	if (ctx.cr6.eq) goto loc_8275BAB8;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// lwz r7,96(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 96);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bctrl 
	ctx.lr = 0x8275BA5C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,15928(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15928);
	// rlwinm r29,r27,31,1,31
	r29.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r7,108(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 108);
	// rlwinm r27,r26,31,1,31
	r27.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 31) & 0x7FFFFFFF;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bctrl 
	ctx.lr = 0x8275BA88;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,15928(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 15928);
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// lwz r7,108(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 108);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8275BAAC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x826a1cd0
	return;
loc_8275BAB8:
	// li r19,0
	r19.s64 = 0;
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(r14.u32, 0, ctx.xer);
	// beq cr6,0x8275bcac
	if (ctx.cr6.eq) goto loc_8275BCAC;
loc_8275BAC4:
	// mr r28,r17
	r28.u64 = r17.u64;
	// li r18,0
	r18.s64 = 0;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x8275bc70
	if (ctx.cr6.eq) goto loc_8275BC70;
	// mr r30,r25
	r30.u64 = r25.u64;
	// subf r27,r25,r16
	r27.u64 = r16.u64 - r25.u64;
	// subf r26,r25,r20
	r26.u64 = r20.u64 - r25.u64;
	// subf r24,r25,r21
	r24.u64 = r21.u64 - r25.u64;
	// subf r23,r17,r22
	r23.u64 = r22.u64 - r17.u64;
loc_8275BAE8:
	// addi r29,r15,-1
	r29.s64 = r15.s64 + -1;
	// cmplw cr6,r18,r29
	ctx.cr6.compare<uint32_t>(r18.u32, r29.u32, ctx.xer);
	// beq cr6,0x8275bb50
	if (ctx.cr6.eq) goto loc_8275BB50;
	// addi r11,r14,-1
	ctx.r11.s64 = r14.s64 + -1;
	// cmplw cr6,r19,r11
	ctx.cr6.compare<uint32_t>(r19.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8275bb50
	if (ctx.cr6.eq) goto loc_8275BB50;
	// lwz r11,15656(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15656);
	// add r9,r27,r30
	ctx.r9.u64 = r27.u64 + r30.u64;
	// lwz r10,15916(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 15916);
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// lwz r29,15652(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 15652);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// lwz r14,108(r31)
	r14.u64 = REX_LOAD_U32(r31.u32 + 108);
	// add r6,r26,r30
	ctx.r6.u64 = r26.u64 + r30.u64;
	// add r5,r24,r30
	ctx.r5.u64 = r24.u64 + r30.u64;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// add r4,r23,r28
	ctx.r4.u64 = r23.u64 + r28.u64;
	// stw r10,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,148(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r10,96(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 96);
	// stw r29,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// stw r14,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r14.u32);
	// bctrl 
	ctx.lr = 0x8275BB4C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8275bc58
	goto loc_8275BC58;
loc_8275BB50:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826fb050
	ctx.lr = 0x8275BB58;
	sub_826FB050(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8275bba0
	if (ctx.cr6.eq) goto loc_8275BBA0;
	// cmplw cr6,r18,r29
	ctx.cr6.compare<uint32_t>(r18.u32, r29.u32, ctx.xer);
	// beq cr6,0x8275bb70
	if (ctx.cr6.eq) goto loc_8275BB70;
	// li r29,16
	r29.s64 = 16;
	// b 0x8275bb80
	goto loc_8275BB80;
loc_8275BB70:
	// lwz r11,15340(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15340);
	// lwz r10,15348(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 15348);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addi r29,r11,16
	r29.s64 = ctx.r11.s64 + 16;
loc_8275BB80:
	// addi r11,r14,-1
	ctx.r11.s64 = r14.s64 + -1;
	// cmplw cr6,r19,r11
	ctx.cr6.compare<uint32_t>(r19.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8275bb94
	if (ctx.cr6.eq) goto loc_8275BB94;
	// li r11,16
	ctx.r11.s64 = 16;
	// b 0x8275bbfc
	goto loc_8275BBFC;
loc_8275BB94:
	// lwz r11,15352(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15352);
	// lwz r10,15344(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 15344);
	// b 0x8275bbdc
	goto loc_8275BBDC;
loc_8275BBA0:
	// cmplw cr6,r18,r29
	ctx.cr6.compare<uint32_t>(r18.u32, r29.u32, ctx.xer);
	// beq cr6,0x8275bbb0
	if (ctx.cr6.eq) goto loc_8275BBB0;
	// li r29,16
	r29.s64 = 16;
	// b 0x8275bbc0
	goto loc_8275BBC0;
loc_8275BBB0:
	// lwz r11,156(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 156);
	// lwz r10,180(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 180);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addi r29,r11,16
	r29.s64 = ctx.r11.s64 + 16;
loc_8275BBC0:
	// addi r11,r14,-1
	ctx.r11.s64 = r14.s64 + -1;
	// cmplw cr6,r19,r11
	ctx.cr6.compare<uint32_t>(r19.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8275bbd4
	if (ctx.cr6.eq) goto loc_8275BBD4;
	// li r11,16
	ctx.r11.s64 = 16;
	// b 0x8275bbfc
	goto loc_8275BBFC;
loc_8275BBD4:
	// lwz r11,188(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 188);
	// lwz r10,160(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 160);
loc_8275BBDC:
	// srawi r9,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 31;
	// xor r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 ^ ctx.r9.u64;
	// subf r7,r9,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r9.u64;
	// subfic r11,r7,16
	ctx.xer.ca = ctx.r7.u32 <= 16;
	ctx.r11.u64 = static_cast<uint64_t>(16) - ctx.r7.u64;
	// srawi r6,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r10.s32 >> 31;
	// xor r5,r10,r6
	ctx.r5.u64 = ctx.r10.u64 ^ ctx.r6.u64;
	// subf r10,r6,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r6.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_8275BBFC:
	// lwz r16,15656(r31)
	r16.u64 = REX_LOAD_U32(r31.u32 + 15656);
	// add r9,r27,r30
	ctx.r9.u64 = r27.u64 + r30.u64;
	// lwz r10,15920(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 15920);
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// lwz r15,15652(r31)
	r15.u64 = REX_LOAD_U32(r31.u32 + 15652);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// lwz r14,108(r31)
	r14.u64 = REX_LOAD_U32(r31.u32 + 108);
	// add r6,r26,r30
	ctx.r6.u64 = r26.u64 + r30.u64;
	// add r5,r24,r30
	ctx.r5.u64 = r24.u64 + r30.u64;
	// stw r11,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r16,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r16.u32);
	// add r4,r23,r28
	ctx.r4.u64 = r23.u64 + r28.u64;
	// stw r10,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r16,148(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// mtctr r16
	ctx.ctr.u64 = r16.u64;
	// lwz r10,96(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 96);
	// stw r29,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r29.u32);
	// stw r15,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r15.u32);
	// stw r14,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r14.u32);
	// bctrl 
	ctx.lr = 0x8275BC50;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r16,144(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r15,152(r1)
	r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
loc_8275BC58:
	// addi r18,r18,1
	r18.s64 = r18.s64 + 1;
	// lwz r14,128(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// addi r28,r28,16
	r28.s64 = r28.s64 + 16;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// cmplw cr6,r18,r15
	ctx.cr6.compare<uint32_t>(r18.u32, r15.u32, ctx.xer);
	// blt cr6,0x8275bae8
	if (ctx.cr6.lt) goto loc_8275BAE8;
loc_8275BC70:
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// addi r19,r19,1
	r19.s64 = r19.s64 + 1;
	// lwz r10,100(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 100);
	// lwz r9,132(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// add r16,r11,r16
	r16.u64 = ctx.r11.u64 + r16.u64;
	// lwz r8,136(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// add r25,r11,r25
	r25.u64 = ctx.r11.u64 + r25.u64;
	// lwz r7,140(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// add r22,r9,r22
	r22.u64 = ctx.r9.u64 + r22.u64;
	// add r17,r17,r10
	r17.u64 = r17.u64 + ctx.r10.u64;
	// stw r16,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, r16.u32);
	// add r21,r8,r21
	r21.u64 = ctx.r8.u64 + r21.u64;
	// add r20,r7,r20
	r20.u64 = ctx.r7.u64 + r20.u64;
	// cmplw cr6,r19,r14
	ctx.cr6.compare<uint32_t>(r19.u32, r14.u32, ctx.xer);
	// blt cr6,0x8275bac4
	if (ctx.cr6.lt) goto loc_8275BAC4;
loc_8275BCAC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_8276EE28) {
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
	ctx.lr = 0x8276EE30;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r5,10
	ctx.r11.s64 = ctx.r5.s64 + 10;
	// mr r18,r4
	r18.u64 = ctx.r4.u64;
	// srawi r29,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	r29.s64 = ctx.r11.s32 >> 3;
	// mr r20,r5
	r20.u64 = ctx.r5.u64;
	// addi r31,r3,-5
	r31.s64 = ctx.r3.s64 + -5;
	// li r19,8
	r19.s64 = 8;
	// rlwinm r28,r29,1,0,30
	r28.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// li r27,-1
	r27.s64 = -1;
loc_8276EE54:
	// lbz r24,3(r31)
	r24.u64 = REX_LOAD_U8(r31.u32 + 3);
	// lbz r6,4(r31)
	ctx.r6.u64 = REX_LOAD_U8(r31.u32 + 4);
	// lbz r4,2(r31)
	ctx.r4.u64 = REX_LOAD_U8(r31.u32 + 2);
	// subf r11,r6,r24
	ctx.r11.u64 = r24.u64 - ctx.r6.u64;
	// lbz r22,1(r31)
	r22.u64 = REX_LOAD_U8(r31.u32 + 1);
	// subf r10,r24,r4
	ctx.r10.u64 = ctx.r4.u64 - r24.u64;
	// lbz r25,5(r31)
	r25.u64 = REX_LOAD_U8(r31.u32 + 5);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// lbz r26,6(r31)
	r26.u64 = REX_LOAD_U8(r31.u32 + 6);
	// add r9,r10,r29
	ctx.r9.u64 = ctx.r10.u64 + r29.u64;
	// lbz r30,7(r31)
	r30.u64 = REX_LOAD_U8(r31.u32 + 7);
	// subfc r11,r11,r28
	ctx.xer.ca = r28.u32 >= ctx.r11.u32;
	ctx.r11.u64 = r28.u64 - ctx.r11.u64;
	// lbz r23,8(r31)
	r23.u64 = REX_LOAD_U8(r31.u32 + 8);
	// subf r10,r4,r22
	ctx.r10.u64 = r22.u64 - ctx.r4.u64;
	// subfze r8,r27
	temp.u8 = ~r27.u32 + ctx.xer.ca < ~r27.u32;
	ctx.r8.u64 = ~r27.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfc r11,r9,r28
	ctx.xer.ca = r28.u32 >= ctx.r9.u32;
	ctx.r11.u64 = r28.u64 - ctx.r9.u64;
	// add r7,r10,r29
	ctx.r7.u64 = ctx.r10.u64 + r29.u64;
	// subf r21,r25,r6
	r21.u64 = ctx.r6.u64 - r25.u64;
	// subfze r10,r27
	temp.u8 = ~r27.u32 + ctx.xer.ca < ~r27.u32;
	ctx.r10.u64 = ~r27.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfc r11,r7,r28
	ctx.xer.ca = r28.u32 >= ctx.r7.u32;
	ctx.r11.u64 = r28.u64 - ctx.r7.u64;
	// add r5,r21,r29
	ctx.r5.u64 = r21.u64 + r29.u64;
	// subfze r9,r27
	temp.u8 = ~r27.u32 + ctx.xer.ca < ~r27.u32;
	ctx.r9.u64 = ~r27.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// subfc r11,r5,r28
	ctx.xer.ca = r28.u32 >= ctx.r5.u32;
	ctx.r11.u64 = r28.u64 - ctx.r5.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subfze r11,r27
	temp.u8 = ~r27.u32 + ctx.xer.ca < ~r27.u32;
	ctx.r11.u64 = ~r27.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276ef30
	if (ctx.cr0.eq) goto loc_8276EF30;
	// lbz r10,9(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 9);
	// subf r8,r23,r30
	ctx.r8.u64 = r30.u64 - r23.u64;
	// lbz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U8(r31.u32 + 0);
	// subf r9,r10,r23
	ctx.r9.u64 = r23.u64 - ctx.r10.u64;
	// subf r10,r22,r7
	ctx.r10.u64 = ctx.r7.u64 - r22.u64;
	// add r5,r9,r29
	ctx.r5.u64 = ctx.r9.u64 + r29.u64;
	// add r3,r10,r29
	ctx.r3.u64 = ctx.r10.u64 + r29.u64;
	// subfc r10,r5,r28
	ctx.xer.ca = r28.u32 >= ctx.r5.u32;
	ctx.r10.u64 = r28.u64 - ctx.r5.u64;
	// add r7,r8,r29
	ctx.r7.u64 = ctx.r8.u64 + r29.u64;
	// subfze r9,r27
	temp.u8 = ~r27.u32 + ctx.xer.ca < ~r27.u32;
	ctx.r9.u64 = ~r27.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfc r10,r3,r28
	ctx.xer.ca = r28.u32 >= ctx.r3.u32;
	ctx.r10.u64 = r28.u64 - ctx.r3.u64;
	// subf r8,r30,r26
	ctx.r8.u64 = r26.u64 - r30.u64;
	// subfze r5,r27
	temp.u8 = ~r27.u32 + ctx.xer.ca < ~r27.u32;
	ctx.r5.u64 = ~r27.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfc r10,r7,r28
	ctx.xer.ca = r28.u32 >= ctx.r7.u32;
	ctx.r10.u64 = r28.u64 - ctx.r7.u64;
	// add r3,r8,r29
	ctx.r3.u64 = ctx.r8.u64 + r29.u64;
	// subf r8,r26,r25
	ctx.r8.u64 = r25.u64 - r26.u64;
	// subfze r7,r27
	temp.u8 = ~r27.u32 + ctx.xer.ca < ~r27.u32;
	ctx.r7.u64 = ~r27.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// subfc r10,r3,r28
	ctx.xer.ca = r28.u32 >= ctx.r3.u32;
	ctx.r10.u64 = r28.u64 - ctx.r3.u64;
	// add r5,r8,r29
	ctx.r5.u64 = ctx.r8.u64 + r29.u64;
	// subfze r8,r27
	temp.u8 = ~r27.u32 + ctx.xer.ca < ~r27.u32;
	ctx.r8.u64 = ~r27.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// subfc r10,r5,r28
	ctx.xer.ca = r28.u32 >= ctx.r5.u32;
	ctx.r10.u64 = r28.u64 - ctx.r5.u64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// subfze r10,r27
	temp.u8 = ~r27.u32 + ctx.xer.ca < ~r27.u32;
	ctx.r10.u64 = ~r27.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8276EF30:
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// blt cr6,0x8276efd8
	if (ctx.cr6.lt) goto loc_8276EFD8;
	// rlwinm r11,r20,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x8276e940
	ctx.lr = 0x8276EF5C;
	sub_8276E940(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8276efd8
	if (ctx.cr6.eq) goto loc_8276EFD8;
	// add r10,r24,r4
	ctx.r10.u64 = r24.u64 + ctx.r4.u64;
	// add r9,r30,r26
	ctx.r9.u64 = r30.u64 + r26.u64;
	// add r11,r30,r4
	ctx.r11.u64 = r30.u64 + ctx.r4.u64;
	// rlwinm r7,r6,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r3,r10,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r25,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r26,r9,1,0,30
	r26.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 + ctx.r3.u64;
	// add r6,r25,r5
	ctx.r6.u64 = r25.u64 + ctx.r5.u64;
	// add r9,r9,r26
	ctx.r9.u64 = ctx.r9.u64 + r26.u64;
	// add r10,r7,r8
	ctx.r10.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r7,r3,r11
	ctx.r7.u64 = ctx.r3.u64 + ctx.r11.u64;
	// add r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 + ctx.r8.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r11,r8,r30
	ctx.r11.u64 = ctx.r8.u64 + r30.u64;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// addi r6,r9,4
	ctx.r6.s64 = ctx.r9.s64 + 4;
	// srawi r4,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r4.s64 = ctx.r7.s32 >> 3;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// addi r5,r10,4
	ctx.r5.s64 = ctx.r10.s64 + 4;
	// stb r4,3(r31)
	REX_STORE_U8(r31.u32 + 3, ctx.r4.u8);
	// srawi r11,r6,3
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 3;
	// srawi r10,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 3;
	// srawi r9,r3,3
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 3;
	// stb r11,6(r31)
	REX_STORE_U8(r31.u32 + 6, ctx.r11.u8);
	// b 0x8276f0bc
	goto loc_8276F0BC;
loc_8276EFD8:
	// subf r10,r26,r24
	ctx.r10.u64 = r24.u64 - r26.u64;
	// rlwinm r11,r21,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// add r9,r21,r11
	ctx.r9.u64 = r21.u64 + ctx.r11.u64;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r7,r9,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r9.u64;
	// srawi r5,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 3;
	// srawi r3,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 31;
	// xor r11,r5,r3
	ctx.r11.u64 = ctx.r5.u64 ^ ctx.r3.u64;
	// subf r3,r3,r11
	ctx.r3.u64 = ctx.r11.u64 - ctx.r3.u64;
	// cmpw cr6,r3,r20
	ctx.cr6.compare<int32_t>(ctx.r3.s32, r20.s32, ctx.xer);
	// bge cr6,0x8276f0c4
	if (!ctx.cr6.lt) goto loc_8276F0C4;
	// subf r8,r6,r22
	ctx.r8.u64 = r22.u64 - ctx.r6.u64;
	// subf r10,r4,r24
	ctx.r10.u64 = r24.u64 - ctx.r4.u64;
	// subf r11,r26,r30
	ctx.r11.u64 = r30.u64 - r26.u64;
	// subf r9,r23,r25
	ctx.r9.u64 = r25.u64 - r23.u64;
	// addi r4,r8,2
	ctx.r4.s64 = ctx.r8.s64 + 2;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r9,2
	r30.s64 = ctx.r9.s64 + 2;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r9,r4,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r11,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 3;
	// srawi r10,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 3;
	// srawi r7,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 31;
	// srawi r4,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 31;
	// xor r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r7.u64;
	// xor r9,r11,r4
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r4.u64;
	// subf r11,r7,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r7.u64;
	// subf r10,r4,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r4.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8276f06c
	if (!ctx.cr6.lt) goto loc_8276F06C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8276F06C:
	// subf. r11,r11,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x8276f0c4
	if (!ctx.cr0.gt) goto loc_8276F0C4;
	// xor r10,r5,r21
	ctx.r10.u64 = ctx.r5.u64 ^ r21.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x8276f0c4
	if (!ctx.cr6.lt) goto loc_8276F0C4;
	// srawi r10,r21,31
	ctx.xer.ca = (r21.s32 < 0) & ((r21.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = r21.s32 >> 31;
	// srawi r8,r21,31
	ctx.xer.ca = (r21.s32 < 0) & ((r21.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = r21.s32 >> 31;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// xor r7,r21,r8
	ctx.r7.u64 = r21.u64 ^ ctx.r8.u64;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// subf r4,r8,r7
	ctx.r4.u64 = ctx.r7.u64 - ctx.r8.u64;
	// srawi r9,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 1;
	// srawi r11,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 3;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x8276f0ac
	if (!ctx.cr6.gt) goto loc_8276F0AC;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8276F0AC:
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// subf r10,r11,r6
	ctx.r10.u64 = ctx.r6.u64 - ctx.r11.u64;
	// add r9,r11,r25
	ctx.r9.u64 = ctx.r11.u64 + r25.u64;
loc_8276F0BC:
	// stb r9,5(r31)
	REX_STORE_U8(r31.u32 + 5, ctx.r9.u8);
	// stb r10,4(r31)
	REX_STORE_U8(r31.u32 + 4, ctx.r10.u8);
loc_8276F0C4:
	// addic. r19,r19,-1
	ctx.xer.ca = r19.u32 > 0;
	r19.s64 = r19.s64 + -1;
	ctx.cr0.compare<int32_t>(r19.s32, 0, ctx.xer);
	// add r31,r31,r18
	r31.u64 = r31.u64 + r18.u64;
	// bne 0x8276ee54
	if (!ctx.cr0.eq) goto loc_8276EE54;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1ce0
	return;
}

DEFINE_REX_FUNC(sub_82788020) {
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
	ctx.lr = 0x82788028;
	// lwz r11,14624(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 14624);
	// subf r27,r7,r8
	r27.u64 = ctx.r8.u64 - ctx.r7.u64;
	// lwz r10,14480(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 14480);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82788068
	if (ctx.cr6.eq) goto loc_82788068;
	// rotlwi r8,r11,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r31,14628(r9)
	r31.u64 = REX_LOAD_U32(ctx.r9.u32 + 14628);
	// srawi r11,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 2;
	// lwz r30,14632(r9)
	r30.u64 = REX_LOAD_U32(ctx.r9.u32 + 14632);
	// mullw r29,r8,r7
	r29.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// mullw r28,r31,r7
	r28.s64 = int64_t(r31.s32) * int64_t(ctx.r7.s32);
	// subf r26,r10,r8
	r26.u64 = ctx.r8.u64 - ctx.r10.u64;
	// subf r25,r11,r31
	r25.u64 = r31.u64 - ctx.r11.u64;
	// subf r24,r11,r30
	r24.u64 = r30.u64 - ctx.r11.u64;
	// b 0x82788084
	goto loc_82788084;
loc_82788068:
	// lwz r11,14588(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 14588);
	// mullw r29,r11,r7
	r29.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// subf r26,r10,r11
	r26.u64 = ctx.r11.u64 - ctx.r10.u64;
	// srawi r28,r29,2
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x3) != 0);
	r28.s64 = r29.s32 >> 2;
	// srawi r8,r26,2
	ctx.xer.ca = (r26.s32 < 0) & ((r26.u32 & 0x3) != 0);
	ctx.r8.s64 = r26.s32 >> 2;
	// addze r25,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	r25.s64 = temp.s64;
	// mr r24,r25
	r24.u64 = r25.u64;
loc_82788084:
	// lwz r10,14604(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 14604);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// lwz r8,14588(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 14588);
	// lwz r11,14608(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 14608);
	// srawi r31,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	r31.s64 = ctx.r10.s32 >> 2;
	// lwz r23,14492(r9)
	r23.u64 = REX_LOAD_U32(ctx.r9.u32 + 14492);
	// mullw r11,r11,r8
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// lwz r30,14500(r9)
	r30.u64 = REX_LOAD_U32(ctx.r9.u32 + 14500);
	// addze r31,r31
	temp.s64 = r31.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < r31.u32;
	r31.s64 = temp.s64;
	// srawi r8,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 2;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addze r11,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r11.s64 = temp.s64;
	// mullw r8,r23,r7
	ctx.r8.s64 = int64_t(r23.s32) * int64_t(ctx.r7.s32);
	// add r11,r31,r11
	ctx.r11.u64 = r31.u64 + ctx.r11.u64;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + r29.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// add r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 + r30.u64;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r4,r8,r3
	ctx.r4.u64 = ctx.r8.u64 + ctx.r3.u64;
	// ble cr6,0x82788160
	if (!ctx.cr6.gt) goto loc_82788160;
	// addi r6,r5,-1
	ctx.r6.s64 = ctx.r5.s64 + -1;
	// lwz r7,14480(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 14480);
	// mtctr r27
	ctx.ctr.u64 = r27.u64;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
loc_827880EC:
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x82788148
	if (!ctx.cr6.gt) goto loc_82788148;
	// addi r11,r4,-5
	ctx.r11.s64 = ctx.r4.s64 + -5;
loc_827880FC:
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// stb r7,5(r11)
	REX_STORE_U8(ctx.r11.u32 + 5, ctx.r7.u8);
	// lbz r3,1(r10)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// stb r3,7(r11)
	REX_STORE_U8(ctx.r11.u32 + 7, ctx.r3.u8);
	// lbz r7,2(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// stb r7,9(r11)
	REX_STORE_U8(ctx.r11.u32 + 9, ctx.r7.u8);
	// lbz r3,3(r10)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stb r3,11(r11)
	REX_STORE_U8(ctx.r11.u32 + 11, ctx.r3.u8);
	// lbzu r7,1(r6)
	ea = 1 + ctx.r6.u32;
	ctx.r7.u64 = REX_LOAD_U8(ea);
	ctx.r6.u32 = ea;
	// stb r7,10(r11)
	REX_STORE_U8(ctx.r11.u32 + 10, ctx.r7.u8);
	// stb r7,6(r11)
	REX_STORE_U8(ctx.r11.u32 + 6, ctx.r7.u8);
	// lbzu r7,1(r5)
	ea = 1 + ctx.r5.u32;
	ctx.r7.u64 = REX_LOAD_U8(ea);
	ctx.r5.u32 = ea;
	// stb r7,12(r11)
	REX_STORE_U8(ctx.r11.u32 + 12, ctx.r7.u8);
	// stbu r7,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r7.u8);
	ctx.r11.u32 = ea;
	// lwz r7,14480(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 14480);
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x827880fc
	if (ctx.cr6.lt) goto loc_827880FC;
loc_82788148:
	// lwz r11,14492(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 14492);
	// add r10,r26,r10
	ctx.r10.u64 = r26.u64 + ctx.r10.u64;
	// add r6,r25,r6
	ctx.r6.u64 = r25.u64 + ctx.r6.u64;
	// add r5,r24,r5
	ctx.r5.u64 = r24.u64 + ctx.r5.u64;
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
	// bdnz 0x827880ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827880EC;
loc_82788160:
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_8278B940) {
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
	ctx.lr = 0x8278B948;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x8278b988
	if (!ctx.cr6.gt) goto loc_8278B988;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
loc_8278B968:
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8278B978;
	sub_826A1E70(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// add r31,r31,r27
	r31.u64 = r31.u64 + r27.u64;
	// add r30,r30,r28
	r30.u64 = r30.u64 + r28.u64;
	// bne 0x8278b968
	if (!ctx.cr0.eq) goto loc_8278B968;
loc_8278B988:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8278CC60) {
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
	// bl 0x826a1c84
	ctx.lr = 0x8278CC68;
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
	// ble cr6,0x8278cd44
	if (!ctx.cr6.gt) goto loc_8278CD44;
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
loc_8278CCDC:
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
	// bdnz 0x8278ccdc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8278CCDC;
loc_8278CD44:
	// cmpw cr6,r11,r16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r16.s32, ctx.xer);
	// bge cr6,0x8278cd90
	if (!ctx.cr6.lt) goto loc_8278CD90;
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
loc_8278CD6C:
	// lbzx r27,r5,r3
	r27.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r3.u32);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// lbzu r6,1(r7)
	ea = 1 + ctx.r7.u32;
	ctx.r6.u64 = REX_LOAD_U8(ea);
	ctx.r7.u32 = ea;
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
	// bdnz 0x8278cd6c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8278CD6C;
loc_8278CD90:
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
	// bge cr6,0x8278cfcc
	if (!ctx.cr6.lt) goto loc_8278CFCC;
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
loc_8278CDCC:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r21,1
	r21.s64 = 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(r18.s32, 0, ctx.xer);
	// ble cr6,0x8278cf04
	if (!ctx.cr6.gt) goto loc_8278CF04;
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
loc_8278CE18:
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
	// bdnz 0x8278ce18
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8278CE18;
	// lwz r9,308(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
loc_8278CF04:
	// cmpw cr6,r11,r16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r16.s32, ctx.xer);
	// bge cr6,0x8278cf8c
	if (!ctx.cr6.lt) goto loc_8278CF8C;
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
loc_8278CF40:
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
	// bdnz 0x8278cf40
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8278CF40;
loc_8278CF8C:
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
	// bne 0x8278cdcc
	if (!ctx.cr0.eq) goto loc_8278CDCC;
loc_8278CFCC:
	// mr r5,r16
	ctx.r5.u64 = r16.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8278CFDC;
	sub_826A1E70(ctx, base);
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
	// b 0x826a1cd4
	return;
}

DEFINE_REX_FUNC(sub_827B7190) {
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
	ctx.lr = 0x827B7198;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// vspltish v13,4
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x4)));
	// li r11,1120
	ctx.r11.s64 = 1120;
	// vspltish v1,3
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_set1_epi16(short(0x3)));
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// vspltish v12,7
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x7)));
	// addi r28,r1,144
	r28.s64 = ctx.r1.s64 + 144;
	// addi r27,r1,128
	r27.s64 = ctx.r1.s64 + 128;
	// lwz r31,1164(r6)
	r31.u64 = REX_LOAD_U32(ctx.r6.u32 + 1164);
	// vrlh v11,v13,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i sh = simde_mm_and_si128(
			simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_set1_epi16(0xF));
		simde__m128i rsh = simde_mm_sub_epi16(simde_mm_set1_epi16(16), sh);
		simde__m128i result = simde_mm_or_si128(
			rex::ppc::simde_mm_sllv_epi16(a, sh),
			rex::ppc::simde_mm_srlv_epi16(a, rsh));
		simde_mm_store_si128((simde__m128i*)ctx.v11.u8, result);
	}
	// subf r10,r4,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r4.u64;
	// lvx128 v0,r6,r11
	ea = (ctx.r6.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// vaddshs v2,v1,v0
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// stvx128 v13,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubshs v10,v11,v0
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r6,r11,3
	ctx.r6.s64 = ctx.r11.s64 + 3;
	// stvx128 v12,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r10,-1
	ctx.r3.s64 = ctx.r10.s64 + -1;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// stvx128 v10,r0,r27
	ea = (r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x827af878
	ctx.lr = 0x827B71FC;
	sub_827AF878(ctx, base);
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// vspltish v8,-1
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_set1_epi16(short(0xFFFF)));
	// clrlwi r11,r29,31
	ctx.r11.u64 = r29.u32 & 0x1;
	// vspltish v9,8
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_set1_epi16(short(0x8)));
	// li r7,1
	ctx.r7.s64 = 1;
	// vspltisb v7,0
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_set1_epi8(char(0x0)));
	// addi r6,r11,3
	ctx.r6.s64 = ctx.r11.s64 + 3;
	// vspltish v6,1
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_set1_epi16(short(0x1)));
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// vspltish v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0x2)));
	// vslh v2,v8,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v12,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltish v5,5
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_set1_epi16(short(0x5)));
	// slw r9,r7,r6
	ctx.r9.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r6.u8 & 0x3F));
	// vspltish v8,0
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_set1_epi16(short(0x0)));
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne cr6,0x827b72e4
	if (!ctx.cr6.eq) goto loc_827B72E4;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x827b73dc
	if (!ctx.cr6.gt) goto loc_827B73DC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,4
	ctx.r8.s64 = 4;
loc_827B7258:
	// lvx128 v13,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
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
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
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
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// bdnz 0x827b7258
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827B7258;
	// b 0x827b73dc
	goto loc_827B73DC;
loc_827B72E4:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x827b73dc
	if (!ctx.cr6.gt) goto loc_827B73DC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r10,r31,32
	ctx.r10.s64 = r31.s64 + 32;
	// li r9,-32
	ctx.r9.s64 = -32;
	// li r8,-16
	ctx.r8.s64 = -16;
loc_827B72FC:
	// lvx128 v13,r10,r8
	ea = (ctx.r10.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
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
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
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
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// bdnz 0x827b72fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827B72FC;
loc_827B73DC:
	// vand v0,v8,v2
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// vcmpgtuh. v13,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	ctx.cr6.setFromMask(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), 0xFFFF);
	// mfocrf r11,2
	ctx.r11.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_827D1CD0) {
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
	// stvx128 v127,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v126,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v126.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v125,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v125.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v124,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v124.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v123,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v123.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v122,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v122.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v121,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v121.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v120,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v120.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v119,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v119.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v118,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v118.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v117,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v117.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v116,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v116.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v115,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v115.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v114,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v114.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v113,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v113.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v112,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v112.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v111,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v111.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v110,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v110.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v109,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v109.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v108,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v108.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v107,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v107.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v106,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v106.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v105,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v105.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v104,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v104.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v103,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v103.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v102,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v102.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v101,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v101.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v100,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v100.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v99,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v99.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v98,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v98.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v97,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v97.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v96,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v96.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v95,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v95.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v94,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v94.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v93,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v93.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v92,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v92.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v91,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v91.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v90,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v90.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v89,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v89.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v88,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v88.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v87,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v87.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v86,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v86.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v85,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v85.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v84,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v84.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v83,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v83.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v82,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v82.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v81,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v81.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v80,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v80.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v79,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v79.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v78,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v78.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v77,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v77.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v76,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v76.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v75,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v75.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v74,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v74.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v73,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v73.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v72,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v72.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v71,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v71.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v70,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v70.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v69,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v69.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v68,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v68.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v67,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v67.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v66,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v66.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v65,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v65.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v64,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v64.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v63,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v62,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v61,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v60,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v59,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v58,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v57,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v56,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v55,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v54,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v53,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v52,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v51,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v50,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v49,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v48,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v47,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v46,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v45,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v44,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v43,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v42,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v41,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v40,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v39,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v38,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v37,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v36,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v35,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v35.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v34,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v34.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v33,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v33.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v32,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v32.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v64,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v64.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v65,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v65.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v66,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v66.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v67,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v67.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v68,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v68.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v69,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v69.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v70,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v70.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v71,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v71.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v72,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v72.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

