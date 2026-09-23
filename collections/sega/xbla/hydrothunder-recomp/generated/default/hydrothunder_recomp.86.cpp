#include "hydrothunder_funcs.86.h"

DEFINE_REX_FUNC(sub_821255B8) {
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
	// ld r12,-4096(r1)
	ctx.r12.u64 = REX_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-4208(r1)
	ea = -4208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,4240
	ctx.r10.s64 = ctx.r1.s64 + 4240;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,4096
	ctx.r4.s64 = 4096;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8269d1a8
	ctx.lr = 0x82125608;
	sub_8269D1A8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,4191(r1)
	REX_STORE_U8(ctx.r1.u32 + 4191, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,32(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82125628;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8212563C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,4208
	ctx.r1.s64 = ctx.r1.s64 + 4208;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8212ADD8) {
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
	ctx.lr = 0x8212ADE0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r26,0
	r26.s64 = 0;
	// li r3,72
	ctx.r3.s64 = 72;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stw r26,8(r31)
	REX_STORE_U32(r31.u32 + 8, r26.u32);
	// bl 0x822f6280
	ctx.lr = 0x8212ADFC;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8212aed8
	if (ctx.cr0.eq) goto loc_8212AED8;
	// stw r3,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(r31.u32, r28.u32, ctx.xer);
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
	// stb r11,64(r10)
	REX_STORE_U8(ctx.r10.u32 + 64, ctx.r11.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stb r11,65(r10)
	REX_STORE_U8(ctx.r10.u32 + 65, ctx.r11.u8);
	// beq cr6,0x8212aecc
	if (ctx.cr6.eq) goto loc_8212AECC;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r29,4(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r30,r29
	r30.u64 = r29.u64;
	// lbz r11,65(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 65);
	// b 0x8212ae88
	goto loc_8212AE88;
loc_8212AE4C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,8(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 8);
	// bl 0x8212aef0
	ctx.lr = 0x8212AE58;
	sub_8212AEF0(ctx, base);
	// addi r27,r29,16
	r27.s64 = r29.s64 + 16;
	// addi r3,r27,32
	ctx.r3.s64 = r27.s64 + 32;
	// lwz r30,0(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x8215f0f0
	ctx.lr = 0x8212AE68;
	sub_8215F0F0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82120ac0
	ctx.lr = 0x8212AE78;
	sub_82120AC0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8212AE80;
	sub_8269CE98(ctx, base);
	// lbz r11,65(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 65);
	// mr r29,r30
	r29.u64 = r30.u64;
loc_8212AE88:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8212ae4c
	if (ctx.cr0.eq) goto loc_8212AE4C;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
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
	// stw r26,8(r31)
	REX_STORE_U32(r31.u32 + 8, r26.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r10,4(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 4);
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// stw r11,4(r28)
	REX_STORE_U32(r28.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r10,8(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 8);
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// stw r11,8(r28)
	REX_STORE_U32(r28.u32 + 8, ctx.r11.u32);
loc_8212AECC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
loc_8212AED8:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,18624
	ctx.r11.s64 = ctx.r11.s64 + 18624;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82120018
	ctx.lr = 0x8212AEF0;
	sub_82120018(ctx, base);
}

DEFINE_REX_FUNC(sub_82133840) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,212
	ctx.r3.s64 = ctx.r3.s64 + 212;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82133CF8) {
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
	// lwz r31,4(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,10888(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 10888);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82133d1c
	if (ctx.cr6.eq) goto loc_82133D1C;
	// bl 0x823eea88
	ctx.lr = 0x82133D1C;
	sub_823EEA88(ctx, base);
loc_82133D1C:
	// bl 0x823eea88
	ctx.lr = 0x82133D20;
	sub_823EEA88(ctx, base);
	// stw r3,10888(r31)
	REX_STORE_U32(r31.u32 + 10888, ctx.r3.u32);
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

DEFINE_REX_FUNC(sub_82135130) {
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
	// bl 0x826a1cb0
	ctx.lr = 0x82135138;
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// cmpwi cr6,r4,15
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 15, ctx.xer);
	// ble cr6,0x82135178
	if (!ctx.cr6.gt) goto loc_82135178;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r11,-20392
	ctx.r4.s64 = ctx.r11.s64 + -20392;
	// addi r3,r10,-19904
	ctx.r3.s64 = ctx.r10.s64 + -19904;
	// li r5,695
	ctx.r5.s64 = 695;
	// bl 0x821231d0
	ctx.lr = 0x82135178;
	sub_821231D0(ctx, base);
loc_82135178:
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lwz r8,196(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 196);
	// lwz r7,200(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 200);
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r30,248(r31)
	REX_STORE_U32(r31.u32 + 248, r30.u32);
	// stb r9,244(r31)
	REX_STORE_U8(r31.u32 + 244, ctx.r9.u8);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r9,r11,16592
	ctx.r9.s64 = ctx.r11.s64 + 16592;
	// lfs f0,15048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,204(r31)
	REX_STORE_U32(r31.u32 + 204, ctx.r8.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stw r7,208(r31)
	REX_STORE_U32(r31.u32 + 208, ctx.r7.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// ld r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// std r11,196(r31)
	REX_STORE_U64(r31.u32 + 196, ctx.r11.u64);
	// ble cr6,0x82135298
	if (!ctx.cr6.gt) goto loc_82135298;
	// addi r11,r1,136
	ctx.r11.s64 = ctx.r1.s64 + 136;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r10,r11,-20
	ctx.r10.s64 = ctx.r11.s64 + -20;
	// addi r11,r29,12
	ctx.r11.s64 = r29.s64 + 12;
	// subf r8,r29,r8
	ctx.r8.u64 = ctx.r8.u64 - r29.u64;
loc_821351D4:
	// lfs f13,-12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -12);
	ctx.f13.f64 = double(temp.f32);
	// addi r7,r9,256
	ctx.r7.s64 = ctx.r9.s64 + 256;
	// lfs f12,-4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// fctiw f11,f13
	ctx.f11.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvtsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// fadds f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// lfs f10,-8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fctiw f8,f10
	ctx.f8.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvtsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// lfs f12,196(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 196);
	ctx.f12.f64 = double(temp.f32);
	// fadds f10,f10,f9
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// stfd f8,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f8.u64);
	// addi r6,r9,256
	ctx.r6.s64 = ctx.r9.s64 + 256;
	// stfd f11,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f11.u64);
	// lfs f11,200(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 200);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f9,f12,f13
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fctiw f8,f13
	ctx.f8.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvtsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f8,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f8.u64);
	// fctiw f10,f10
	ctx.f10.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvtsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f10,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f10.u64);
	// fcmpu cr6,f9,f0
	ctx.cr6.compare(ctx.f9.f64, ctx.f0.f64);
	// mfcr r5
	ctx.r5.u64 = ctx.cr0.lt ? 0x80000000 : 0;
	ctx.r5.u64 |= ctx.cr0.gt ? 0x40000000 : 0;
	ctx.r5.u64 |= ctx.cr0.eq ? 0x20000000 : 0;
	ctx.r5.u64 |= ctx.cr0.so ? 0x10000000 : 0;
	ctx.r5.u64 |= ctx.cr1.lt ? 0x8000000 : 0;
	ctx.r5.u64 |= ctx.cr1.gt ? 0x4000000 : 0;
	ctx.r5.u64 |= ctx.cr1.eq ? 0x2000000 : 0;
	ctx.r5.u64 |= ctx.cr1.so ? 0x1000000 : 0;
	ctx.r5.u64 |= ctx.cr2.lt ? 0x800000 : 0;
	ctx.r5.u64 |= ctx.cr2.gt ? 0x400000 : 0;
	ctx.r5.u64 |= ctx.cr2.eq ? 0x200000 : 0;
	ctx.r5.u64 |= ctx.cr2.so ? 0x100000 : 0;
	ctx.r5.u64 |= ctx.cr3.lt ? 0x80000 : 0;
	ctx.r5.u64 |= ctx.cr3.gt ? 0x40000 : 0;
	ctx.r5.u64 |= ctx.cr3.eq ? 0x20000 : 0;
	ctx.r5.u64 |= ctx.cr3.so ? 0x10000 : 0;
	ctx.r5.u64 |= ctx.cr4.lt ? 0x8000 : 0;
	ctx.r5.u64 |= ctx.cr4.gt ? 0x4000 : 0;
	ctx.r5.u64 |= ctx.cr4.eq ? 0x2000 : 0;
	ctx.r5.u64 |= ctx.cr4.so ? 0x1000 : 0;
	ctx.r5.u64 |= ctx.cr5.lt ? 0x800 : 0;
	ctx.r5.u64 |= ctx.cr5.gt ? 0x400 : 0;
	ctx.r5.u64 |= ctx.cr5.eq ? 0x200 : 0;
	ctx.r5.u64 |= ctx.cr5.so ? 0x100 : 0;
	ctx.r5.u64 |= ctx.cr6.lt ? 0x80 : 0;
	ctx.r5.u64 |= ctx.cr6.gt ? 0x40 : 0;
	ctx.r5.u64 |= ctx.cr6.eq ? 0x20 : 0;
	ctx.r5.u64 |= ctx.cr6.so ? 0x10 : 0;
	ctx.r5.u64 |= ctx.cr7.lt ? 0x8 : 0;
	ctx.r5.u64 |= ctx.cr7.gt ? 0x4 : 0;
	ctx.r5.u64 |= ctx.cr7.eq ? 0x2 : 0;
	ctx.r5.u64 |= ctx.cr7.so ? 0x1 : 0;
	// rlwinm r4,r5,27,29,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x4;
	// lwz r3,100(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm r5,r5,30,29,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x4;
	// lwz r29,116(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r26,108(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// or r5,r4,r5
	ctx.r5.u64 = ctx.r4.u64 | ctx.r5.u64;
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r3,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r3.u32);
	// stwx r29,r8,r11
	REX_STORE_U32(ctx.r8.u32 + ctx.r11.u32, r29.u32);
	// stw r26,20(r10)
	REX_STORE_U32(ctx.r10.u32 + 20, r26.u32);
	// lfsx f10,r7,r5
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r5.u32);
	ctx.f10.f64 = double(temp.f32);
	// stwu r4,16(r10)
	ea = 16 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r10.u32 = ea;
	// fsel f13,f10,f12,f13
	ctx.f13.f64 = ctx.f10.f64 >= 0.0 ? ctx.f12.f64 : ctx.f13.f64;
	// stfs f13,196(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 196, temp.u32);
	// lfs f12,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,-8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// fsubs f12,f11,f13
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
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
	// rlwinm r5,r7,27,29,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x4;
	// rlwinm r7,r7,30,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x4;
	// or r7,r5,r7
	ctx.r7.u64 = ctx.r5.u64 | ctx.r7.u64;
	// lfsx f12,r6,r7
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	ctx.f12.f64 = double(temp.f32);
	// fsel f13,f12,f11,f13
	ctx.f13.f64 = ctx.f12.f64 >= 0.0 ? ctx.f11.f64 : ctx.f13.f64;
	// stfs f13,200(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 200, temp.u32);
	// bdnz 0x821351d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821351D4;
loc_82135298:
	// lbz r11,1(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 1);
	// lfs f0,56(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// lbz r10,2(r28)
	ctx.r10.u64 = REX_LOAD_U8(r28.u32 + 2);
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// lbz r9,3(r28)
	ctx.r9.u64 = REX_LOAD_U8(r28.u32 + 3);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lbz r7,0(r28)
	ctx.r7.u64 = REX_LOAD_U8(r28.u32 + 0);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// lfd f10,104(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// std r7,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// lfd f11,80(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f11,92(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fmuls f12,f10,f0
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x822c8268
	ctx.lr = 0x82135330;
	sub_822C8268(ctx, base);
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8214E558) {
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
	// addi r11,r11,-11728
	ctx.r11.s64 = ctx.r11.s64 + -11728;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82195c58
	ctx.lr = 0x8214E584;
	sub_82195C58(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8214e594
	if (ctx.cr0.eq) goto loc_8214E594;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8214E594;
	sub_8269CE98(ctx, base);
loc_8214E594:
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

DEFINE_REX_FUNC(sub_82150FC0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82150FC8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821510a8
	if (ctx.cr6.eq) goto loc_821510A8;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6180(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6180);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82150FF8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821510a8
	if (ctx.cr0.eq) goto loc_821510A8;
	// lwz r31,28(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 28);
	// addi r11,r29,24
	ctx.r11.s64 = r29.s64 + 24;
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8215105c
	if (ctx.cr6.eq) goto loc_8215105C;
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,112(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 112);
	// lwz r9,116(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 116);
	// cmplw cr6,r31,r8
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8215102c
	if (!ctx.cr6.eq) goto loc_8215102C;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8215102C:
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8215103c
	if (ctx.cr6.eq) goto loc_8215103C;
	// stw r9,116(r10)
	REX_STORE_U32(ctx.r10.u32 + 116, ctx.r9.u32);
loc_8215103C:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82151048
	if (ctx.cr6.eq) goto loc_82151048;
	// stw r10,112(r9)
	REX_STORE_U32(ctx.r9.u32 + 112, ctx.r10.u32);
loc_82151048:
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
loc_8215105C:
	// stw r3,124(r31)
	REX_STORE_U32(r31.u32 + 124, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821787e8
	ctx.lr = 0x82151068;
	sub_821787E8(ctx, base);
	// lwz r10,40(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 40);
	// addi r11,r29,36
	ctx.r11.s64 = r29.s64 + 36;
	// stw r30,112(r31)
	REX_STORE_U32(r31.u32 + 112, r30.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8215108c
	if (ctx.cr6.eq) goto loc_8215108C;
	// stw r10,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r31,112(r10)
	REX_STORE_U32(ctx.r10.u32 + 112, r31.u32);
	// b 0x82151094
	goto loc_82151094;
loc_8215108C:
	// stw r30,116(r31)
	REX_STORE_U32(r31.u32 + 116, r30.u32);
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r31.u32);
loc_82151094:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r31,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r31.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// b 0x821510ac
	goto loc_821510AC;
loc_821510A8:
	// li r31,0
	r31.s64 = 0;
loc_821510AC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8215110c
	if (ctx.cr6.eq) goto loc_8215110C;
	// lwz r11,132(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 132);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,132(r31)
	REX_STORE_U32(r31.u32 + 132, ctx.r11.u32);
	// lwz r10,20(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 20);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x821510d4
	if (!ctx.cr6.gt) goto loc_821510D4;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,132(r31)
	REX_STORE_U32(r31.u32 + 132, ctx.r11.u32);
loc_821510D4:
	// lwz r11,132(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 132);
	// clrlwi. r9,r28,24
	ctx.r9.u64 = r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r8,16(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 16);
	// lwz r10,128(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 128);
	// slw r11,r11,r8
	ctx.r11.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r8.u8 & 0x3F));
	// add r30,r11,r10
	r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// beq 0x82151104
	if (ctx.cr0.eq) goto loc_82151104;
	// lwz r3,124(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 124);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82151104;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82151104:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x82151110
	goto loc_82151110;
loc_8215110C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82151110:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8215B0E0) {
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
	// lwz r30,16(r4)
	r30.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// bge cr6,0x8215b114
	if (!ctx.cr6.lt) goto loc_8215B114;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x8215b158
	goto loc_8215B158;
loc_8215B114:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r9,1
	ctx.r9.s64 = 1;
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,1(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r6,2(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r11,3(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// stb r8,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
	// stb r7,1(r10)
	REX_STORE_U8(ctx.r10.u32 + 1, ctx.r7.u8);
	// stb r6,2(r10)
	REX_STORE_U8(ctx.r10.u32 + 2, ctx.r6.u8);
	// stb r11,3(r10)
	REX_STORE_U8(ctx.r10.u32 + 3, ctx.r11.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
loc_8215B158:
	// clrlwi. r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8215b168
	if (!ctx.cr0.eq) goto loc_8215B168;
loc_8215B160:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8215b1ac
	goto loc_8215B1AC;
loc_8215B168:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x8215b160
	if (ctx.cr6.gt) goto loc_8215B160;
	// lwz r11,20(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8215b184
	if (ctx.cr6.lt) goto loc_8215B184;
	// lwz r4,0(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
loc_8215B184:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x826a1e70
	ctx.lr = 0x8215B190;
	sub_826A1E70(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// subf r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - r30.u64;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
loc_8215B1AC:
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

DEFINE_REX_FUNC(sub_8215FBA8) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// bne cr6,0x8215fbe0
	if (!ctx.cr6.eq) goto loc_8215FBE0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r4,8(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82120b20
	ctx.lr = 0x8215FBD8;
	sub_82120B20(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8215fbe4
	goto loc_8215FBE4;
loc_8215FBE0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8215FBE4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82162350) {
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
	ctx.lr = 0x82162358;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82162644
	if (ctx.cr6.eq) goto loc_82162644;
	// lis r9,16383
	ctx.r9.s64 = 1073676288;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// ori r8,r9,65535
	ctx.r8.u64 = ctx.r9.u64 | 65535;
	// subf r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	// srawi r9,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
	// subf r7,r9,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r9.u64;
	// cmplw cr6,r7,r5
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x821623a4
	if (!ctx.cr6.lt) goto loc_821623A4;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,-26548
	ctx.r3.s64 = ctx.r11.s64 + -26548;
	// bl 0x822f6020
	ctx.lr = 0x821623A4;
	sub_822F6020(ctx, base);
loc_821623A4:
	// lwz r7,8(r28)
	ctx.r7.u64 = REX_LOAD_U32(r28.u32 + 8);
	// add r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 + r29.u64;
	// subf r10,r10,r7
	ctx.r10.u64 = ctx.r7.u64 - ctx.r10.u64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82162524
	if (!ctx.cr6.lt) goto loc_82162524;
	// rlwinm r11,r10,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// li r26,0
	r26.s64 = 0;
	// subf r7,r11,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r11.u64;
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x821623d4
	if (ctx.cr6.lt) goto loc_821623D4;
	// add r26,r11,r10
	r26.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_821623D4:
	// cmplw cr6,r26,r9
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x821623e0
	if (!ctx.cr6.lt) goto loc_821623E0;
	// mr r26,r9
	r26.u64 = ctx.r9.u64;
loc_821623E0:
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x82162404
	if (ctx.cr6.eq) goto loc_82162404;
	// cmplw cr6,r26,r8
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x82162508
	if (ctx.cr6.gt) goto loc_82162508;
	// rlwinm r3,r26,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822f6280
	ctx.lr = 0x821623FC;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x82162508
	if (ctx.cr0.eq) goto loc_82162508;
loc_82162404:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// subf r11,r11,r31
	ctx.r11.u64 = r31.u64 - ctx.r11.u64;
	// srawi r9,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 2;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// beq cr6,0x8216243c
	if (ctx.cr6.eq) goto loc_8216243C;
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
loc_82162424:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82162434
	if (ctx.cr6.eq) goto loc_82162434;
	// lwz r10,0(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 0);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82162434:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82162424
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82162424;
loc_8216243C:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// b 0x82162460
	goto loc_82162460;
loc_82162448:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82162458
	if (ctx.cr6.eq) goto loc_82162458;
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
loc_82162458:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
loc_82162460:
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bne cr6,0x82162448
	if (!ctx.cr6.eq) goto loc_82162448;
	// add r11,r9,r29
	ctx.r11.u64 = ctx.r9.u64 + r29.u64;
	// lwz r9,4(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 4);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r9.u32, ctx.xer);
	// add r11,r10,r30
	ctx.r11.u64 = ctx.r10.u64 + r30.u64;
	// beq cr6,0x821624ac
	if (ctx.cr6.eq) goto loc_821624AC;
	// subf r10,r10,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r10.u64;
	// subf r10,r30,r10
	ctx.r10.u64 = ctx.r10.u64 - r30.u64;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
loc_8216248C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216249c
	if (ctx.cr6.eq) goto loc_8216249C;
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
loc_8216249C:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8216248c
	if (!ctx.cr6.eq) goto loc_8216248C;
loc_821624AC:
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// subf r10,r3,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r3.u64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// add r31,r10,r29
	r31.u64 = ctx.r10.u64 + r29.u64;
	// beq cr6,0x821624e8
	if (ctx.cr6.eq) goto loc_821624E8;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821624e4
	if (ctx.cr6.eq) goto loc_821624E4;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_821624D8:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821624d8
	if (!ctx.cr6.eq) goto loc_821624D8;
loc_821624E4:
	// bl 0x8269ce98
	ctx.lr = 0x821624E8;
	sub_8269CE98(ctx, base);
loc_821624E8:
	// rlwinm r10,r26,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r30,0(r28)
	REX_STORE_U32(r28.u32 + 0, r30.u32);
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// stw r10,8(r28)
	REX_STORE_U32(r28.u32 + 8, ctx.r10.u32);
	// stw r11,4(r28)
	REX_STORE_U32(r28.u32 + 4, ctx.r11.u32);
	// b 0x82162644
	goto loc_82162644;
loc_82162508:
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
	ctx.lr = 0x82162524;
	sub_82120018(ctx, base);
loc_82162524:
	// subf r10,r31,r11
	ctx.r10.u64 = ctx.r11.u64 - r31.u64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r29.u32, ctx.xer);
	// bge cr6,0x821625c8
	if (!ctx.cr6.lt) goto loc_821625C8;
	// rlwinm r9,r29,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,0(r27)
	ctx.r7.u64 = REX_LOAD_U32(r27.u32 + 0);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// add r10,r9,r31
	ctx.r10.u64 = ctx.r9.u64 + r31.u64;
	// beq cr6,0x8216256c
	if (ctx.cr6.eq) goto loc_8216256C;
	// subf r8,r9,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r9.u64;
loc_8216254C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8216255c
	if (ctx.cr6.eq) goto loc_8216255C;
	// lwz r6,0(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// stw r6,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
loc_8216255C:
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8216254c
	if (!ctx.cr6.eq) goto loc_8216254C;
loc_8216256C:
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// subf r10,r31,r11
	ctx.r10.u64 = ctx.r11.u64 - r31.u64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// subf. r10,r10,r29
	ctx.r10.u64 = r29.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82162598
	if (ctx.cr0.eq) goto loc_82162598;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82162584:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82162590
	if (ctx.cr6.eq) goto loc_82162590;
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
loc_82162590:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82162584
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82162584;
loc_82162598:
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// subf r9,r9,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r9.u64;
	// stw r11,4(r28)
	REX_STORE_U32(r28.u32 + 4, ctx.r11.u32);
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82162644
	if (ctx.cr6.eq) goto loc_82162644;
loc_821625B4:
	// stw r7,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x821625b4
	if (!ctx.cr6.eq) goto loc_821625B4;
	// b 0x82162644
	goto loc_82162644;
loc_821625C8:
	// rlwinm r7,r29,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,0(r27)
	ctx.r6.u64 = REX_LOAD_U32(r27.u32 + 0);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// subf r10,r7,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r7.u64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82162604
	if (ctx.cr6.eq) goto loc_82162604;
loc_821625E4:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821625f4
	if (ctx.cr6.eq) goto loc_821625F4;
	// lwz r5,0(r8)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// stw r5,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r5.u32);
loc_821625F4:
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821625e4
	if (!ctx.cr6.eq) goto loc_821625E4;
loc_82162604:
	// stw r9,4(r28)
	REX_STORE_U32(r28.u32 + 4, ctx.r9.u32);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82162624
	if (ctx.cr6.eq) goto loc_82162624;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
loc_82162614:
	// lwzu r9,-4(r10)
	ea = -4 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, ctx.xer);
	// stwx r9,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// bne cr6,0x82162614
	if (!ctx.cr6.eq) goto loc_82162614;
loc_82162624:
	// add r10,r7,r31
	ctx.r10.u64 = ctx.r7.u64 + r31.u64;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82162644
	if (ctx.cr6.eq) goto loc_82162644;
loc_82162634:
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82162634
	if (!ctx.cr6.eq) goto loc_82162634;
loc_82162644:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8217D180) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8217D188;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-26856
	ctx.r4.s64 = ctx.r11.s64 + -26856;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8217a390
	ctx.lr = 0x8217D1A8;
	sub_8217A390(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8217d264
	if (ctx.cr6.eq) goto loc_8217D264;
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8217d264
	if (ctx.cr0.eq) goto loc_8217D264;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r3,127
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 127, ctx.xer);
	// bge cr6,0x8217d1d0
	if (!ctx.cr6.lt) goto loc_8217D1D0;
	// bl 0x826a0800
	ctx.lr = 0x8217D1CC;
	sub_826A0800(ctx, base);
	// b 0x8217d1d4
	goto loc_8217D1D4;
loc_8217D1D0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8217D1D4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8217d1e8
	if (!ctx.cr6.eq) goto loc_8217D1E8;
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// cmplwi cr6,r11,95
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 95, ctx.xer);
	// bne cr6,0x8217d264
	if (!ctx.cr6.eq) goto loc_8217D264;
loc_8217D1E8:
	// mr r30,r31
	r30.u64 = r31.u64;
loc_8217D1EC:
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8217d248
	if (ctx.cr0.eq) goto loc_8217D248;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r3,127
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 127, ctx.xer);
	// bge cr6,0x8217d20c
	if (!ctx.cr6.lt) goto loc_8217D20C;
	// bl 0x826a0880
	ctx.lr = 0x8217D208;
	sub_826A0880(ctx, base);
	// b 0x8217d210
	goto loc_8217D210;
loc_8217D20C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8217D210:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8217d240
	if (!ctx.cr6.eq) goto loc_8217D240;
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,95
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 95, ctx.xer);
	// beq cr6,0x8217d240
	if (ctx.cr6.eq) goto loc_8217D240;
	// cmpwi cr6,r11,45
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 45, ctx.xer);
	// beq cr6,0x8217d240
	if (ctx.cr6.eq) goto loc_8217D240;
	// cmpwi cr6,r11,46
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 46, ctx.xer);
	// beq cr6,0x8217d240
	if (ctx.cr6.eq) goto loc_8217D240;
	// cmpwi cr6,r11,58
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 58, ctx.xer);
	// bne cr6,0x8217d248
	if (!ctx.cr6.eq) goto loc_8217D248;
loc_8217D240:
	// addic. r31,r31,1
	ctx.xer.ca = r31.u32 > 4294967294;
	r31.s64 = r31.s64 + 1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x8217d1ec
	if (!ctx.cr0.eq) goto loc_8217D1EC;
loc_8217D248:
	// subf. r5,r30,r31
	ctx.r5.u64 = r31.u64 - r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble 0x8217d25c
	if (!ctx.cr0.gt) goto loc_8217D25C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8217a390
	ctx.lr = 0x8217D25C;
	sub_8217A390(ctx, base);
loc_8217D25C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x8217d268
	goto loc_8217D268;
loc_8217D264:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8217D268:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82186C80) {
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
	ctx.lr = 0x82186C88;
	// stwu r1,-2240(r1)
	ea = -2240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,32752
	ctx.r11.s64 = ctx.r11.s64 + 32752;
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
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// bl 0x82187540
	ctx.lr = 0x82186CB4;
	sub_82187540(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r30,132(r31)
	REX_STORE_U32(r31.u32 + 132, r30.u32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r30,136(r31)
	REX_STORE_U32(r31.u32 + 136, r30.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r30,140(r31)
	REX_STORE_U32(r31.u32 + 140, r30.u32);
	// addi r4,r10,-23836
	ctx.r4.s64 = ctx.r10.s64 + -23836;
	// stw r30,144(r31)
	REX_STORE_U32(r31.u32 + 144, r30.u32);
	// stw r30,148(r31)
	REX_STORE_U32(r31.u32 + 148, r30.u32);
	// stw r30,152(r31)
	REX_STORE_U32(r31.u32 + 152, r30.u32);
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
	// stw r30,192(r31)
	REX_STORE_U32(r31.u32 + 192, r30.u32);
	// stw r30,196(r31)
	REX_STORE_U32(r31.u32 + 196, r30.u32);
	// stw r30,200(r31)
	REX_STORE_U32(r31.u32 + 200, r30.u32);
	// stw r30,204(r31)
	REX_STORE_U32(r31.u32 + 204, r30.u32);
	// stw r30,208(r31)
	REX_STORE_U32(r31.u32 + 208, r30.u32);
	// stw r30,212(r31)
	REX_STORE_U32(r31.u32 + 212, r30.u32);
	// stw r30,216(r31)
	REX_STORE_U32(r31.u32 + 216, r30.u32);
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
	// stw r11,248(r31)
	REX_STORE_U32(r31.u32 + 248, ctx.r11.u32);
	// stw r11,252(r31)
	REX_STORE_U32(r31.u32 + 252, ctx.r11.u32);
	// stw r11,256(r31)
	REX_STORE_U32(r31.u32 + 256, ctx.r11.u32);
	// stw r11,260(r31)
	REX_STORE_U32(r31.u32 + 260, ctx.r11.u32);
	// stw r11,264(r31)
	REX_STORE_U32(r31.u32 + 264, ctx.r11.u32);
	// bl 0x82120600
	ctx.lr = 0x82186D4C;
	sub_82120600(ctx, base);
	// lis r29,-32106
	r29.s64 = -2104098816;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwz r3,6040(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6040);
	// bl 0x82154b70
	ctx.lr = 0x82186D5C;
	sub_82154B70(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82120ac0
	ctx.lr = 0x82186D70;
	sub_82120AC0(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x82186f90
	if (ctx.cr6.eq) goto loc_82186F90;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120830
	ctx.lr = 0x82186D80;
	sub_82120830(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-26856
	r28.s64 = ctx.r11.s64 + -26856;
	// lbz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 40);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82186dcc
	if (ctx.cr0.eq) goto loc_82186DCC;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r4,r11,32180
	ctx.r4.s64 = ctx.r11.s64 + 32180;
	// bl 0x82120600
	ctx.lr = 0x82186DA4;
	sub_82120600(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821208c0
	ctx.lr = 0x82186DB0;
	sub_821208C0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82120c08
	ctx.lr = 0x82186DBC;
	sub_82120C08(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82120ac0
	ctx.lr = 0x82186DCC;
	sub_82120AC0(ctx, base);
loc_82186DCC:
	// lbz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82186e10
	if (ctx.cr0.eq) goto loc_82186E10;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// addi r4,r11,32192
	ctx.r4.s64 = ctx.r11.s64 + 32192;
	// bl 0x82120600
	ctx.lr = 0x82186DE8;
	sub_82120600(ctx, base);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821208c0
	ctx.lr = 0x82186DF4;
	sub_821208C0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82120c08
	ctx.lr = 0x82186E00;
	sub_82120C08(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82120ac0
	ctx.lr = 0x82186E10;
	sub_82120AC0(ctx, base);
loc_82186E10:
	// lbz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 116);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82186e84
	if (ctx.cr0.eq) goto loc_82186E84;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r11,6176(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 6176);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82186e84
	if (ctx.cr6.eq) goto loc_82186E84;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6092(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6092);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,92(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82186E44;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82186e84
	if (ctx.cr0.eq) goto loc_82186E84;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r4,r11,32216
	ctx.r4.s64 = ctx.r11.s64 + 32216;
	// bl 0x82120600
	ctx.lr = 0x82186E5C;
	sub_82120600(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821208c0
	ctx.lr = 0x82186E68;
	sub_821208C0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82120c08
	ctx.lr = 0x82186E74;
	sub_82120C08(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82120ac0
	ctx.lr = 0x82186E84;
	sub_82120AC0(ctx, base);
loc_82186E84:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82153030
	ctx.lr = 0x82186E8C;
	sub_82153030(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821a4270
	ctx.lr = 0x82186E9C;
	sub_821A4270(ctx, base);
	// stw r3,132(r31)
	REX_STORE_U32(r31.u32 + 132, ctx.r3.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82153080
	ctx.lr = 0x82186EA8;
	sub_82153080(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821a4270
	ctx.lr = 0x82186EB8;
	sub_821A4270(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// bne 0x82186ec8
	if (!ctx.cr0.eq) goto loc_82186EC8;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_82186EC8:
	// li r28,2
	r28.s64 = 2;
	// stw r11,136(r31)
	REX_STORE_U32(r31.u32 + 136, ctx.r11.u32);
	// stw r30,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r30.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r30,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, r30.u32);
	// sth r30,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, r30.u16);
	// sth r30,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, r30.u16);
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// stw r30,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// stb r30,92(r1)
	REX_STORE_U8(ctx.r1.u32 + 92, r30.u8);
	// bl 0x82154800
	ctx.lr = 0x82186EFC;
	sub_82154800(ctx, base);
	// li r11,12
	ctx.r11.s64 = 12;
	// li r10,3
	ctx.r10.s64 = 3;
	// sth r30,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, r30.u16);
	// sth r11,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r10,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stb r30,92(r1)
	REX_STORE_U8(ctx.r1.u32 + 92, r30.u8);
	// bl 0x82154800
	ctx.lr = 0x82186F24;
	sub_82154800(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821a48f8
	ctx.lr = 0x82186F2C;
	sub_821A48F8(ctx, base);
	// stw r3,140(r31)
	REX_STORE_U32(r31.u32 + 140, ctx.r3.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82154908
	ctx.lr = 0x82186F38;
	sub_82154908(ctx, base);
	// lwz r3,6040(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6040);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82186F50;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// lwz r5,136(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 136);
	// lwz r4,132(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 132);
	// bl 0x8216fc68
	ctx.lr = 0x82186F60;
	sub_8216FC68(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// lwz r3,6060(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6060);
	// bl 0x8212e940
	ctx.lr = 0x82186F70;
	sub_8212E940(ctx, base);
	// stw r3,152(r31)
	REX_STORE_U32(r31.u32 + 152, ctx.r3.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r6,100(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r5,0(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82120cc8
	ctx.lr = 0x82186F88;
	sub_82120CC8(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x8269ce98
	ctx.lr = 0x82186F90;
	sub_8269CE98(ctx, base);
loc_82186F90:
	// bl 0x82188160
	ctx.lr = 0x82186F94;
	sub_82188160(ctx, base);
	// stw r3,156(r31)
	REX_STORE_U32(r31.u32 + 156, ctx.r3.u32);
	// addi r30,r31,52
	r30.s64 = r31.s64 + 52;
	// lwz r3,6040(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6040);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x821883a0
	ctx.lr = 0x82186FA8;
	sub_821883A0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82186fc0
	if (ctx.cr0.eq) goto loc_82186FC0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,6040(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6040);
	// bl 0x82154c08
	ctx.lr = 0x82186FBC;
	sub_82154C08(ctx, base);
	// stw r3,144(r31)
	REX_STORE_U32(r31.u32 + 144, ctx.r3.u32);
loc_82186FC0:
	// lbz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8218702c
	if (!ctx.cr0.eq) goto loc_8218702C;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// lwz r28,6040(r29)
	r28.u64 = REX_LOAD_U32(r29.u32 + 6040);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// lwz r4,-15312(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + -15312);
	// bl 0x82120600
	ctx.lr = 0x82186FE0;
	sub_82120600(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// addi r30,r31,84
	r30.s64 = r31.s64 + 84;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82187000;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82120ac0
	ctx.lr = 0x82187014;
	sub_82120AC0(ctx, base);
	// clrlwi. r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8218702c
	if (ctx.cr0.eq) goto loc_8218702C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,6040(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6040);
	// bl 0x82170b20
	ctx.lr = 0x82187028;
	sub_82170B20(ctx, base);
	// stw r3,148(r31)
	REX_STORE_U32(r31.u32 + 148, ctx.r3.u32);
loc_8218702C:
	// lwz r11,132(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821874e4
	if (ctx.cr6.eq) goto loc_821874E4;
	// lwz r10,136(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 136);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821874e4
	if (ctx.cr6.eq) goto loc_821874E4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r4,r9,32236
	ctx.r4.s64 = ctx.r9.s64 + 32236;
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
	ctx.lr = 0x82187068;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r3,160(r31)
	REX_STORE_U32(r31.u32 + 160, ctx.r3.u32);
	// addi r4,r10,32244
	ctx.r4.s64 = ctx.r10.s64 + 32244;
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
	ctx.lr = 0x82187094;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r3,164(r31)
	REX_STORE_U32(r31.u32 + 164, ctx.r3.u32);
	// addi r4,r10,32260
	ctx.r4.s64 = ctx.r10.s64 + 32260;
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
	ctx.lr = 0x821870C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r3,168(r31)
	REX_STORE_U32(r31.u32 + 168, ctx.r3.u32);
	// addi r4,r10,32276
	ctx.r4.s64 = ctx.r10.s64 + 32276;
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
	ctx.lr = 0x821870EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r3,172(r31)
	REX_STORE_U32(r31.u32 + 172, ctx.r3.u32);
	// addi r4,r10,32296
	ctx.r4.s64 = ctx.r10.s64 + 32296;
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
	ctx.lr = 0x82187118;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r3,176(r31)
	REX_STORE_U32(r31.u32 + 176, ctx.r3.u32);
	// addi r4,r10,32316
	ctx.r4.s64 = ctx.r10.s64 + 32316;
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
	ctx.lr = 0x82187144;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r3,180(r31)
	REX_STORE_U32(r31.u32 + 180, ctx.r3.u32);
	// addi r4,r10,32332
	ctx.r4.s64 = ctx.r10.s64 + 32332;
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
	ctx.lr = 0x82187170;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r3,184(r31)
	REX_STORE_U32(r31.u32 + 184, ctx.r3.u32);
	// addi r4,r10,32348
	ctx.r4.s64 = ctx.r10.s64 + 32348;
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
	ctx.lr = 0x8218719C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r3,188(r31)
	REX_STORE_U32(r31.u32 + 188, ctx.r3.u32);
	// addi r4,r10,32368
	ctx.r4.s64 = ctx.r10.s64 + 32368;
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
	ctx.lr = 0x821871C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r3,192(r31)
	REX_STORE_U32(r31.u32 + 192, ctx.r3.u32);
	// addi r4,r10,32388
	ctx.r4.s64 = ctx.r10.s64 + 32388;
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
	ctx.lr = 0x821871F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r3,196(r31)
	REX_STORE_U32(r31.u32 + 196, ctx.r3.u32);
	// addi r4,r10,32408
	ctx.r4.s64 = ctx.r10.s64 + 32408;
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
	ctx.lr = 0x82187220;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r3,200(r31)
	REX_STORE_U32(r31.u32 + 200, ctx.r3.u32);
	// addi r4,r10,32428
	ctx.r4.s64 = ctx.r10.s64 + 32428;
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
	ctx.lr = 0x8218724C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r3,204(r31)
	REX_STORE_U32(r31.u32 + 204, ctx.r3.u32);
	// addi r4,r10,32444
	ctx.r4.s64 = ctx.r10.s64 + 32444;
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
	ctx.lr = 0x82187278;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r3,208(r31)
	REX_STORE_U32(r31.u32 + 208, ctx.r3.u32);
	// addi r4,r10,32464
	ctx.r4.s64 = ctx.r10.s64 + 32464;
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
	ctx.lr = 0x821872A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r3,212(r31)
	REX_STORE_U32(r31.u32 + 212, ctx.r3.u32);
	// addi r4,r10,32480
	ctx.r4.s64 = ctx.r10.s64 + 32480;
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
	ctx.lr = 0x821872D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r3,216(r31)
	REX_STORE_U32(r31.u32 + 216, ctx.r3.u32);
	// addi r4,r10,32500
	ctx.r4.s64 = ctx.r10.s64 + 32500;
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
	ctx.lr = 0x821872FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r3,220(r31)
	REX_STORE_U32(r31.u32 + 220, ctx.r3.u32);
	// addi r4,r10,32528
	ctx.r4.s64 = ctx.r10.s64 + 32528;
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
	ctx.lr = 0x82187328;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r3,224(r31)
	REX_STORE_U32(r31.u32 + 224, ctx.r3.u32);
	// addi r4,r10,32548
	ctx.r4.s64 = ctx.r10.s64 + 32548;
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
	ctx.lr = 0x82187354;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r3,228(r31)
	REX_STORE_U32(r31.u32 + 228, ctx.r3.u32);
	// addi r4,r10,32572
	ctx.r4.s64 = ctx.r10.s64 + 32572;
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
	ctx.lr = 0x82187380;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r3,232(r31)
	REX_STORE_U32(r31.u32 + 232, ctx.r3.u32);
	// addi r4,r10,32596
	ctx.r4.s64 = ctx.r10.s64 + 32596;
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
	ctx.lr = 0x821873AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,236(r31)
	REX_STORE_U32(r31.u32 + 236, ctx.r3.u32);
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,32624
	ctx.r4.s64 = ctx.r11.s64 + 32624;
	// lwz r11,8(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821873D8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r3,240(r31)
	REX_STORE_U32(r31.u32 + 240, ctx.r3.u32);
	// addi r4,r10,32652
	ctx.r4.s64 = ctx.r10.s64 + 32652;
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
	ctx.lr = 0x82187404;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r3,244(r31)
	REX_STORE_U32(r31.u32 + 244, ctx.r3.u32);
	// addi r4,r10,32672
	ctx.r4.s64 = ctx.r10.s64 + 32672;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82187430;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,248(r31)
	REX_STORE_U32(r31.u32 + 248, ctx.r3.u32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// addi r4,r10,32688
	ctx.r4.s64 = ctx.r10.s64 + 32688;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8218745C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,252(r31)
	REX_STORE_U32(r31.u32 + 252, ctx.r3.u32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// addi r4,r10,32704
	ctx.r4.s64 = ctx.r10.s64 + 32704;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82187488;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,256(r31)
	REX_STORE_U32(r31.u32 + 256, ctx.r3.u32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// addi r4,r10,32716
	ctx.r4.s64 = ctx.r10.s64 + 32716;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821874B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,260(r31)
	REX_STORE_U32(r31.u32 + 260, ctx.r3.u32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// addi r4,r10,32736
	ctx.r4.s64 = ctx.r10.s64 + 32736;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821874E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,264(r31)
	REX_STORE_U32(r31.u32 + 264, ctx.r3.u32);
loc_821874E4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,2240
	ctx.r1.s64 = ctx.r1.s64 + 2240;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_821BE7B8) {
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
	ctx.lr = 0x821BE7C0;
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r30,r4,116
	r30.s64 = ctx.r4.s64 + 116;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lfs f13,15048(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15048);
	ctx.f13.f64 = double(temp.f32);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// addi r10,r30,-4
	ctx.r10.s64 = r30.s64 + -4;
	// fmr f10,f13
	ctx.f10.f64 = ctx.f13.f64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821BE7EC:
	// lfsu f0,4(r10)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// fadds f10,f0,f10
	ctx.f10.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// bdnz 0x821be7ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BE7EC;
	// fcmpu cr6,f10,f13
	ctx.cr6.compare(ctx.f10.f64, ctx.f13.f64);
	// ble cr6,0x821be830
	if (!ctx.cr6.gt) goto loc_821BE830;
	// addi r3,r31,148
	ctx.r3.s64 = r31.s64 + 148;
	// bl 0x821a33a0
	ctx.lr = 0x821BE808;
	sub_821A33A0(ctx, base);
	// fmuls f0,f1,f10
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f10.f64));
	// li r11,0
	ctx.r11.s64 = 0;
loc_821BE810:
	// lfs f13,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x821be844
	if (!ctx.cr6.gt) goto loc_821BE844;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// blt cr6,0x821be810
	if (ctx.cr6.lt) goto loc_821BE810;
loc_821BE830:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
loc_821BE838:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x826a1d08
	return;
loc_821BE844:
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// bl 0x826a06d8
	ctx.lr = 0x821BE854;
	sub_826A06D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120600
	ctx.lr = 0x821BE860;
	sub_82120600(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,112(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 112);
	// bl 0x821dd040
	ctx.lr = 0x821BE86C;
	sub_821DD040(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x821BE880;
	sub_82120AC0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x821be830
	if (ctx.cr6.eq) goto loc_821BE830;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821BE8A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x821be838
	goto loc_821BE838;
}

DEFINE_REX_FUNC(sub_821C5210) {
	REX_FUNC_PROLOGUE();
	// lwz r11,328(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 328);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c5224
	if (ctx.cr6.eq) goto loc_821C5224;
	// addi r4,r11,96
	ctx.r4.s64 = ctx.r11.s64 + 96;
	// b 0x821c522c
	goto loc_821C522C;
loc_821C5224:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r4,r11,1072
	ctx.r4.s64 = ctx.r11.s64 + 1072;
loc_821C522C:
	// lwz r11,120(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// lwz r3,124(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 124);
	// addi r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 16;
	// b 0x82191578
	sub_82191578(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821C57C0) {
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
	// li r3,400
	ctx.r3.s64 = 400;
	// bl 0x822f6280
	ctx.lr = 0x821C57D4;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821c57e4
	if (ctx.cr0.eq) goto loc_821C57E4;
	// bl 0x821c57f8
	ctx.lr = 0x821C57E0;
	sub_821C57F8(ctx, base);
	// b 0x821c57e8
	goto loc_821C57E8;
loc_821C57E4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821C57E8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821C8060) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
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
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addi r4,r11,32
	ctx.r4.s64 = ctx.r11.s64 + 32;
	// bl 0x821a1f88
	ctx.lr = 0x821C8088;
	sub_821A1F88(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,72
	ctx.r10.s64 = ctx.r1.s64 + 72;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_821C809C:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x821c809c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821C809C;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bl 0x821884b0
	ctx.lr = 0x821C80B8;
	sub_821884B0(ctx, base);
	// lwz r11,228(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 228);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c80cc
	if (ctx.cr6.eq) goto loc_821C80CC;
	// addi r4,r11,96
	ctx.r4.s64 = ctx.r11.s64 + 96;
	// b 0x821c80d4
	goto loc_821C80D4;
loc_821C80CC:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r4,r11,1072
	ctx.r4.s64 = ctx.r11.s64 + 1072;
loc_821C80D4:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x82191578
	ctx.lr = 0x821C80E0;
	sub_82191578(ctx, base);
	// addi r3,r31,352
	ctx.r3.s64 = r31.s64 + 352;
	// bl 0x821e4620
	ctx.lr = 0x821C80E8;
	sub_821E4620(ctx, base);
	// lwz r3,28(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// addi r6,r11,112
	ctx.r6.s64 = ctx.r11.s64 + 112;
	// addi r5,r11,96
	ctx.r5.s64 = ctx.r11.s64 + 96;
	// addi r4,r11,32
	ctx.r4.s64 = ctx.r11.s64 + 32;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821C810C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

DEFINE_REX_FUNC(sub_821CE128) {
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
	ctx.lr = 0x821CE130;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	r26.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r26,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// mr r28,r26
	r28.u64 = r26.u64;
	// bl 0x82178268
	ctx.lr = 0x821CE14C;
	sub_82178268(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r29,r31,116
	r29.s64 = r31.s64 + 116;
	// addi r11,r11,-14112
	ctx.r11.s64 = ctx.r11.s64 + -14112;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82120ac0
	ctx.lr = 0x821CE16C;
	sub_82120AC0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r26,148(r31)
	REX_STORE_U32(r31.u32 + 148, r26.u32);
	// li r3,100
	ctx.r3.s64 = 100;
	// stb r11,144(r31)
	REX_STORE_U8(r31.u32 + 144, ctx.r11.u8);
	// addi r27,r31,144
	r27.s64 = r31.s64 + 144;
	// bl 0x822f6280
	ctx.lr = 0x821CE184;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x821ce1c4
	if (ctx.cr0.eq) goto loc_821CE1C4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-15936
	ctx.r4.s64 = ctx.r11.s64 + -15936;
	// bl 0x82120600
	ctx.lr = 0x821CE19C;
	sub_82120600(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r28,1
	r28.s64 = 1;
	// bl 0x821bf110
	ctx.lr = 0x821CE1B0;
	sub_821BF110(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// addi r10,r10,-14480
	ctx.r10.s64 = ctx.r10.s64 + -14480;
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// b 0x821ce1c8
	goto loc_821CE1C8;
loc_821CE1C4:
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
loc_821CE1C8:
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r29,r31,80
	r29.s64 = r31.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82145710
	ctx.lr = 0x821CE1DC;
	sub_82145710(ctx, base);
	// lwz r30,80(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,36(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 36);
	// bl 0x8269ce98
	ctx.lr = 0x821CE1E8;
	sub_8269CE98(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822f6280
	ctx.lr = 0x821CE1F0;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821ce21c
	if (ctx.cr0.eq) goto loc_821CE21C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// addi r11,r11,-29688
	ctx.r11.s64 = ctx.r11.s64 + -29688;
	// addi r10,r10,-6840
	ctx.r10.s64 = ctx.r10.s64 + -6840;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x821ce220
	goto loc_821CE220;
loc_821CE21C:
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
loc_821CE220:
	// clrlwi. r10,r28,31
	ctx.r10.u64 = r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,36(r30)
	REX_STORE_U32(r30.u32 + 36, ctx.r11.u32);
	// stb r26,33(r30)
	REX_STORE_U8(r30.u32 + 33, r26.u8);
	// beq 0x821ce244
	if (ctx.cr0.eq) goto loc_821CE244;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rlwinm r28,r28,0,0,30
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFE;
	// bl 0x82120ac0
	ctx.lr = 0x821CE244;
	sub_82120AC0(ctx, base);
loc_821CE244:
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x822f6280
	ctx.lr = 0x821CE24C;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x821ce27c
	if (ctx.cr0.eq) goto loc_821CE27C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-14132
	ctx.r4.s64 = ctx.r11.s64 + -14132;
	// bl 0x82120600
	ctx.lr = 0x821CE264;
	sub_82120600(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// ori r28,r28,2
	r28.u64 = r28.u64 | 2;
	// bl 0x82191600
	ctx.lr = 0x821CE278;
	sub_82191600(ctx, base);
	// b 0x821ce280
	goto loc_821CE280;
loc_821CE27C:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
loc_821CE280:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82145710
	ctx.lr = 0x821CE290;
	sub_82145710(ctx, base);
	// rlwinm. r11,r28,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821ce2a8
	if (ctx.cr0.eq) goto loc_821CE2A8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82120ac0
	ctx.lr = 0x821CE2A8;
	sub_82120AC0(ctx, base);
loc_821CE2A8:
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x822f6280
	ctx.lr = 0x821CE2B0;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821ce2d0
	if (ctx.cr0.eq) goto loc_821CE2D0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,100
	ctx.r5.s64 = 100;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821dc550
	ctx.lr = 0x821CE2C8;
	sub_821DC550(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821ce2d4
	goto loc_821CE2D4;
loc_821CE2D0:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
loc_821CE2D4:
	// stw r4,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r4.u32);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x821d3988
	ctx.lr = 0x821CE2E0;
	sub_821D3988(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x821CE2E8;
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
	// beq 0x821ce35c
	if (ctx.cr0.eq) goto loc_821CE35C;
	// stw r26,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, r26.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,-20928
	ctx.r4.s64 = ctx.r11.s64 + -20928;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821dbb48
	ctx.lr = 0x821CE31C;
	sub_821DBB48(ctx, base);
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822f6280
	ctx.lr = 0x821CE328;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821ce34c
	if (ctx.cr0.eq) goto loc_821CE34C;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// stw r28,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-7024
	ctx.r10.s64 = ctx.r10.s64 + -7024;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x821ce350
	goto loc_821CE350;
loc_821CE34C:
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
loc_821CE350:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r11,104(r30)
	REX_STORE_U32(r30.u32 + 104, ctx.r11.u32);
	// b 0x821ce360
	goto loc_821CE360;
loc_821CE35C:
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
loc_821CE360:
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
	ctx.lr = 0x821CE378;
	sub_82264568(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x821CE380;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x821ce3e4
	if (ctx.cr0.eq) goto loc_821CE3E4;
	// stw r26,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, r26.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,-17844
	ctx.r4.s64 = ctx.r11.s64 + -17844;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821dbb48
	ctx.lr = 0x821CE3A4;
	sub_821DBB48(ctx, base);
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822f6280
	ctx.lr = 0x821CE3B0;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821ce3d4
	if (ctx.cr0.eq) goto loc_821CE3D4;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// stw r28,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-6912
	ctx.r10.s64 = ctx.r10.s64 + -6912;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x821ce3d8
	goto loc_821CE3D8;
loc_821CE3D4:
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
loc_821CE3D8:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r11,104(r30)
	REX_STORE_U32(r30.u32 + 104, ctx.r11.u32);
	// b 0x821ce3e8
	goto loc_821CE3E8;
loc_821CE3E4:
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
loc_821CE3E8:
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
	ctx.lr = 0x821CE400;
	sub_82264568(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_821E0360) {
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
	// lwz r3,36(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x8269ce98
	ctx.lr = 0x821E0384;
	sub_8269CE98(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822f6280
	ctx.lr = 0x821E038C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821e03b8
	if (ctx.cr0.eq) goto loc_821E03B8;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r30,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// lis r10,-32226
	ctx.r10.s64 = -2111963136;
	// addi r11,r11,-29688
	ctx.r11.s64 = ctx.r11.s64 + -29688;
	// addi r10,r10,824
	ctx.r10.s64 = ctx.r10.s64 + 824;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x821e03bc
	goto loc_821E03BC;
loc_821E03B8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821E03BC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
	// stb r10,33(r31)
	REX_STORE_U8(r31.u32 + 33, ctx.r10.u8);
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

DEFINE_REX_FUNC(sub_821E3CF0) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x826a1cb0
	ctx.lr = 0x821E3CF8;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x826a2ca4
	ctx.lr = 0x821E3D00;
	// stwu r1,-528(r1)
	ea = -528 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// beq cr6,0x821e3d1c
	if (ctx.cr6.eq) goto loc_821E3D1C;
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// bne cr6,0x821e3d30
	if (!ctx.cr6.eq) goto loc_821E3D30;
loc_821E3D1C:
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,192(r31)
	REX_STORE_U32(r31.u32 + 192, ctx.r11.u32);
	// beq cr6,0x821e43e8
	if (ctx.cr6.eq) goto loc_821E43E8;
loc_821E3D30:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821e43e8
	if (ctx.cr6.eq) goto loc_821E43E8;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// addi r30,r9,16592
	r30.s64 = ctx.r9.s64 + 16592;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfs f30,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 12);
	f30.f64 = double(temp.f32);
	// beq cr6,0x821e3d58
	if (ctx.cr6.eq) goto loc_821E3D58;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// b 0x821e3d68
	goto loc_821E3D68;
loc_821E3D58:
	// stfs f30,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// stfs f30,116(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f30,120(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
loc_821E3D68:
	// ld r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// std r9,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, ctx.r9.u64);
	// lfs f31,15048(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 15048);
	f31.f64 = double(temp.f32);
	// std r11,8(r8)
	REX_STORE_U64(ctx.r8.u32 + 8, ctx.r11.u64);
	// bne cr6,0x821e3ddc
	if (!ctx.cr6.eq) goto loc_821E3DDC;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x822c1a70
	ctx.lr = 0x821E3D98;
	sub_822C1A70(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821e3e90
	if (ctx.cr0.eq) goto loc_821E3E90;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f0,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r29,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r29.u32);
	// addi r9,r11,14568
	ctx.r9.s64 = ctx.r11.s64 + 14568;
	// stfs f30,16(r3)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f30,20(r3)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stfs f30,24(r3)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f31,28(r3)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// b 0x821e3e94
	goto loc_821E3E94;
loc_821E3DDC:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x821e3e9c
	if (!ctx.cr6.eq) goto loc_821E3E9C;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x822c1a70
	ctx.lr = 0x821E3DEC;
	sub_822C1A70(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821e3e90
	if (ctx.cr0.eq) goto loc_821E3E90;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f12,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,52(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lfs f10,56(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 56);
	ctx.f10.f64 = double(temp.f32);
	// addi r9,r11,14456
	ctx.r9.s64 = ctx.r11.s64 + 14456;
	// stw r29,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r29.u32);
	// stfs f30,16(r3)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f30,20(r3)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// stfs f30,24(r3)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stfs f31,28(r3)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lfs f0,104(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// stw r29,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r29.u32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// lfs f8,20(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// lfs f9,16(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// lfs f13,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f7,24(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f31,92(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fmuls f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f13,f13,f7
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f7.f64));
	// fmuls f11,f11,f8
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f8.f64));
	// fmuls f12,f12,f9
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fsubs f13,f11,f0
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// ld r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// ld r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// std r9,32(r3)
	REX_STORE_U64(ctx.r3.u32 + 32, ctx.r9.u64);
	// std r10,40(r3)
	REX_STORE_U64(ctx.r3.u32 + 40, ctx.r10.u64);
	// b 0x821e3e94
	goto loc_821E3E94;
loc_821E3E90:
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
loc_821E3E94:
	// stw r11,252(r31)
	REX_STORE_U32(r31.u32 + 252, ctx.r11.u32);
	// b 0x821e4170
	goto loc_821E4170;
loc_821E3E9C:
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x821e3f3c
	if (!ctx.cr6.eq) goto loc_821E3F3C;
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x822c1a70
	ctx.lr = 0x821E3EAC;
	sub_822C1A70(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821e3f0c
	if (ctx.cr0.eq) goto loc_821E3F0C;
	// lfs f0,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f13,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f12,32(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,104(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f11,f12,f11
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// lfs f0,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f31,92(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x822a4bf8
	ctx.lr = 0x821E3EF4;
	sub_822A4BF8(ctx, base);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r29,64(r3)
	REX_STORE_U32(ctx.r3.u32 + 64, r29.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,6120
	ctx.r10.s64 = ctx.r10.s64 + 6120;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x821e3f10
	goto loc_821E3F10;
loc_821E3F0C:
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
loc_821E3F10:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stfs f30,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f30,84(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stw r11,252(r31)
	REX_STORE_U32(r31.u32 + 252, ctx.r11.u32);
	// stfs f30,88(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// ld r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// ld r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// std r11,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, ctx.r11.u64);
	// std r10,8(r9)
	REX_STORE_U64(ctx.r9.u32 + 8, ctx.r10.u64);
	// b 0x821e4170
	goto loc_821E4170;
loc_821E3F3C:
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// bne cr6,0x821e3fc8
	if (!ctx.cr6.eq) goto loc_821E3FC8;
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x822c1a70
	ctx.lr = 0x821E3F4C;
	sub_822C1A70(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821e3f98
	if (ctx.cr0.eq) goto loc_821E3F98;
	// lfs f0,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f13,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f12,32(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,104(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f11,f12,f11
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// lfs f0,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f31,92(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x822a4bf8
	ctx.lr = 0x821E3F94;
	sub_822A4BF8(ctx, base);
	// b 0x821e3f9c
	goto loc_821E3F9C;
loc_821E3F98:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_821E3F9C:
	// stfs f30,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stfs f30,88(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stfs f30,84(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stw r3,252(r31)
	REX_STORE_U32(r31.u32 + 252, ctx.r3.u32);
	// ld r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// std r9,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r11,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// b 0x821e4170
	goto loc_821E4170;
loc_821E3FC8:
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// bne cr6,0x821e406c
	if (!ctx.cr6.eq) goto loc_821E406C;
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x822c1a70
	ctx.lr = 0x821E3FD8;
	sub_822C1A70(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821e403c
	if (ctx.cr0.eq) goto loc_821E403C;
	// lfs f0,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f13,104(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f12,32(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f11,f12,f11
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// lfs f0,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f31,92(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x822a4bf8
	ctx.lr = 0x821E4020;
	sub_822A4BF8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r9,r11,6208
	ctx.r9.s64 = ctx.r11.s64 + 6208;
	// stw r10,64(r3)
	REX_STORE_U32(ctx.r3.u32 + 64, ctx.r10.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// b 0x821e4040
	goto loc_821E4040;
loc_821E403C:
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
loc_821E4040:
	// stfs f30,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stfs f30,88(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stw r11,252(r31)
	REX_STORE_U32(r31.u32 + 252, ctx.r11.u32);
	// stfs f30,84(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// ld r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// ld r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// std r10,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, ctx.r10.u64);
	// std r11,8(r9)
	REX_STORE_U64(ctx.r9.u32 + 8, ctx.r11.u64);
	// b 0x821e4170
	goto loc_821E4170;
loc_821E406C:
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// bne cr6,0x821e409c
	if (!ctx.cr6.eq) goto loc_821E409C;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x822c1a70
	ctx.lr = 0x821E407C;
	sub_822C1A70(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821e4090
	if (ctx.cr0.eq) goto loc_821E4090;
	// addi r4,r31,160
	ctx.r4.s64 = r31.s64 + 160;
	// bl 0x822a50b0
	ctx.lr = 0x821E408C;
	sub_822A50B0(ctx, base);
	// b 0x821e4094
	goto loc_821E4094;
loc_821E4090:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_821E4094:
	// stw r3,252(r31)
	REX_STORE_U32(r31.u32 + 252, ctx.r3.u32);
	// b 0x821e4170
	goto loc_821E4170;
loc_821E409C:
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// bne cr6,0x821e4158
	if (!ctx.cr6.eq) goto loc_821E4158;
	// lfs f0,240(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 240);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// beq cr6,0x821e40c8
	if (ctx.cr6.eq) goto loc_821E40C8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r4,r11,14084
	ctx.r4.s64 = ctx.r11.s64 + 14084;
	// addi r3,r10,14224
	ctx.r3.s64 = ctx.r10.s64 + 14224;
	// li r5,231
	ctx.r5.s64 = 231;
	// bl 0x821231d0
	ctx.lr = 0x821E40C8;
	sub_821231D0(ctx, base);
loc_821E40C8:
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x822c1a70
	ctx.lr = 0x821E40D0;
	sub_822C1A70(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x821e4110
	if (ctx.cr0.eq) goto loc_821E4110;
	// addi r4,r31,160
	ctx.r4.s64 = r31.s64 + 160;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822b0370
	ctx.lr = 0x821E40E4;
	sub_822B0370(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r29,64(r30)
	REX_STORE_U32(r30.u32 + 64, r29.u32);
	// stb r10,72(r30)
	REX_STORE_U8(r30.u32 + 72, ctx.r10.u8);
	// li r10,21
	ctx.r10.s64 = 21;
	// addi r11,r11,5672
	ctx.r11.s64 = ctx.r11.s64 + 5672;
	// stw r29,68(r30)
	REX_STORE_U32(r30.u32 + 68, r29.u32);
	// stb r29,73(r30)
	REX_STORE_U8(r30.u32 + 73, r29.u8);
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// stw r10,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// b 0x821e4114
	goto loc_821E4114;
loc_821E4110:
	// mr r30,r29
	r30.u64 = r29.u64;
loc_821E4114:
	// stfs f30,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 192);
	// stfs f30,84(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stfs f30,88(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stfs f31,92(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r4,176(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 176);
	// bl 0x8229e970
	ctx.lr = 0x821E4138;
	sub_8229E970(ctx, base);
	// lwz r11,192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 192);
	// lwz r11,180(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 180);
	// stw r11,68(r30)
	REX_STORE_U32(r30.u32 + 68, ctx.r11.u32);
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// stw r30,252(r31)
	REX_STORE_U32(r31.u32 + 252, r30.u32);
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// b 0x821e4170
	goto loc_821E4170;
loc_821E4158:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r4,r11,14084
	ctx.r4.s64 = ctx.r11.s64 + 14084;
	// addi r3,r10,14316
	ctx.r3.s64 = ctx.r10.s64 + 14316;
	// li r5,242
	ctx.r5.s64 = 242;
	// bl 0x821231d0
	ctx.lr = 0x821E4170;
	sub_821231D0(ctx, base);
loc_821E4170:
	// lfs f0,100(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,228(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 228);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f29,f0,f13
	f29.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,104(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,232(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 232);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f28,f0,f13
	f28.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,96(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,224(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 224);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f27,f0,f13
	f27.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fmuls f0,f29,f29
	ctx.f0.f64 = double(float(f29.f64 * f29.f64));
	// fmadds f0,f28,f28,f0
	ctx.f0.f64 = double(float(std::fma(f28.f64, f28.f64, ctx.f0.f64)));
	// fmadds f0,f27,f27,f0
	ctx.f0.f64 = double(float(std::fma(f27.f64, f27.f64, ctx.f0.f64)));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// ble cr6,0x821e4234
	if (!ctx.cr6.gt) goto loc_821E4234;
	// lwz r11,252(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 252);
	// li r3,96
	ctx.r3.s64 = 96;
	// stw r11,256(r31)
	REX_STORE_U32(r31.u32 + 256, ctx.r11.u32);
	// bl 0x822c1a70
	ctx.lr = 0x821E41B8;
	sub_822C1A70(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821e41c8
	if (ctx.cr0.eq) goto loc_821E41C8;
	// bl 0x822a5488
	ctx.lr = 0x821E41C4;
	sub_822A5488(ctx, base);
	// b 0x821e41cc
	goto loc_821E41CC;
loc_821E41C8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_821E41CC:
	// stfs f28,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stfs f29,84(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// stfs f27,80(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stw r3,252(r31)
	REX_STORE_U32(r31.u32 + 252, ctx.r3.u32);
	// stfs f31,92(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stfs f30,128(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lwz r5,256(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 256);
	// stfs f31,132(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f31,136(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f31,140(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f31,144(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f30,148(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f31,152(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f31,156(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f31,160(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f31,164(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f30,168(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f31,172(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// ld r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// std r9,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r11,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// bl 0x822a56b0
	ctx.lr = 0x821E4234;
	sub_822A56B0(ctx, base);
loc_821E4234:
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,104(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// lfs f12,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// bne cr6,0x821e425c
	if (!ctx.cr6.eq) goto loc_821E425C;
	// fcmpu cr6,f12,f30
	ctx.cr6.compare(ctx.f12.f64, f30.f64);
	// bne cr6,0x821e425c
	if (!ctx.cr6.eq) goto loc_821E425C;
	// fcmpu cr6,f13,f30
	ctx.cr6.compare(ctx.f13.f64, f30.f64);
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// beq cr6,0x821e4260
	if (ctx.cr6.eq) goto loc_821E4260;
loc_821E425C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_821E4260:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821e4290
	if (ctx.cr0.eq) goto loc_821E4290;
	// stfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lwz r3,252(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 252);
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f31,124(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821E4290;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821E4290:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x821e4a80
	ctx.lr = 0x821E429C;
	sub_821E4A80(ctx, base);
	// addi r7,r1,192
	ctx.r7.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lwz r6,252(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 252);
	// lwz r5,244(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 244);
	// lfs f1,240(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 240);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821e4d38
	ctx.lr = 0x821E42B4;
	sub_821E4D38(ctx, base);
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bl 0x821c3ec8
	ctx.lr = 0x821E42C4;
	sub_821C3EC8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ld r6,0(r3)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// addi r9,r1,240
	ctx.r9.s64 = ctx.r1.s64 + 240;
	// addi r8,r1,256
	ctx.r8.s64 = ctx.r1.s64 + 256;
	// ld r5,8(r11)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// addi r7,r1,272
	ctx.r7.s64 = ctx.r1.s64 + 272;
	// ld r4,16(r11)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r11.u32 + 16);
	// li r3,768
	ctx.r3.s64 = 768;
	// ld r30,24(r11)
	r30.u64 = REX_LOAD_U64(ctx.r11.u32 + 24);
	// ld r28,32(r11)
	r28.u64 = REX_LOAD_U64(ctx.r11.u32 + 32);
	// ld r27,40(r11)
	r27.u64 = REX_LOAD_U64(ctx.r11.u32 + 40);
	// ld r26,48(r11)
	r26.u64 = REX_LOAD_U64(ctx.r11.u32 + 48);
	// ld r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 56);
	// std r6,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r6.u64);
	// std r5,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r5.u64);
	// std r4,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, ctx.r4.u64);
	// std r30,8(r9)
	REX_STORE_U64(ctx.r9.u32 + 8, r30.u64);
	// std r28,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, r28.u64);
	// std r27,8(r8)
	REX_STORE_U64(ctx.r8.u32 + 8, r27.u64);
	// std r26,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, r26.u64);
	// std r11,8(r7)
	REX_STORE_U64(ctx.r7.u32 + 8, ctx.r11.u64);
	// bl 0x822c1a70
	ctx.lr = 0x821E4324;
	sub_822C1A70(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821e4344
	if (ctx.cr0.eq) goto loc_821E4344;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// lhz r7,214(r31)
	ctx.r7.u64 = REX_LOAD_U16(r31.u32 + 214);
	// lhz r6,212(r31)
	ctx.r6.u64 = REX_LOAD_U16(r31.u32 + 212);
	// lwz r5,132(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 132);
	// bl 0x821ecdc8
	ctx.lr = 0x821E4340;
	sub_821ECDC8(ctx, base);
	// b 0x821e4348
	goto loc_821E4348;
loc_821E4344:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_821E4348:
	// lwz r10,208(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 208);
	// addi r11,r31,68
	ctx.r11.s64 = r31.s64 + 68;
	// stw r3,260(r31)
	REX_STORE_U32(r31.u32 + 260, ctx.r3.u32);
	// stw r10,212(r3)
	REX_STORE_U32(ctx.r3.u32 + 212, ctx.r10.u32);
	// lwz r9,216(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 216);
	// lwz r10,260(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 260);
	// stw r9,720(r10)
	REX_STORE_U32(ctx.r10.u32 + 720, ctx.r9.u32);
	// lwz r9,248(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 248);
	// lwz r10,260(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 260);
	// stw r9,708(r10)
	REX_STORE_U32(ctx.r10.u32 + 708, ctx.r9.u32);
	// lwz r10,88(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 88);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x821e4380
	if (ctx.cr6.lt) goto loc_821E4380;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_821E4380:
	// lis r30,-32106
	r30.s64 = -2104098816;
	// lwz r29,260(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 260);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r3,6164(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6164);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821E43A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stb r3,712(r29)
	REX_STORE_U8(r29.u32 + 712, ctx.r3.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,6164(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 6164);
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821E43BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stfs f31,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,260(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 260);
	// lfs f0,0(r11)
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
	// bl 0x822c07b8
	ctx.lr = 0x821E43E8;
	sub_822C07B8(ctx, base);
loc_821E43E8:
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x826a2cf0
	ctx.lr = 0x821E43F4;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82226228) {
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
	// li r3,696
	ctx.r3.s64 = 696;
	// bl 0x822f6280
	ctx.lr = 0x8222623C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8222624c
	if (ctx.cr0.eq) goto loc_8222624C;
	// bl 0x822262a8
	ctx.lr = 0x82226248;
	sub_822262A8(ctx, base);
	// b 0x82226250
	goto loc_82226250;
loc_8222624C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82226250:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822274F8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82227500;
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	r29.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r29,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// std r29,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, r29.u64);
	// bl 0x82227340
	ctx.lr = 0x8222751C;
	sub_82227340(ctx, base);
	// stw r29,240(r1)
	REX_STORE_U32(ctx.r1.u32 + 240, r29.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,16176
	ctx.r4.s64 = ctx.r11.s64 + 16176;
	// bl 0x8215f670
	ctx.lr = 0x82227530;
	sub_8215F670(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r31,r11,-26856
	r31.s64 = ctx.r11.s64 + -26856;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8222755c
	if (!ctx.cr6.eq) goto loc_8222755C;
	// lwz r5,8(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,20(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82227560
	if (ctx.cr6.lt) goto loc_82227560;
	// lwz r5,0(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// b 0x82227560
	goto loc_82227560;
loc_8222755C:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
loc_82227560:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_82227564:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82227564
	if (!ctx.cr6.eq) goto loc_82227564;
	// subf r11,r5,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r5.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// bl 0x8216b6a8
	ctx.lr = 0x82227590;
	sub_8216B6A8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,16192
	ctx.r4.s64 = ctx.r11.s64 + 16192;
	// bl 0x8215f670
	ctx.lr = 0x822275A0;
	sub_8215F670(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x822275c4
	if (!ctx.cr6.eq) goto loc_822275C4;
	// lwz r5,8(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,20(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x822275c8
	if (ctx.cr6.lt) goto loc_822275C8;
	// lwz r5,0(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// b 0x822275c8
	goto loc_822275C8;
loc_822275C4:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
loc_822275C8:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_822275CC:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822275cc
	if (!ctx.cr6.eq) goto loc_822275CC;
	// subf r11,r5,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r5.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// bl 0x8216b6a8
	ctx.lr = 0x822275F8;
	sub_8216B6A8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82271e38
	ctx.lr = 0x82227600;
	sub_82271E38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82227620
	if (ctx.cr0.eq) goto loc_82227620;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82272050
	ctx.lr = 0x82227610;
	sub_82272050(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82227620
	if (ctx.cr0.eq) goto loc_82227620;
	// stb r29,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, r29.u8);
	// b 0x82227628
	goto loc_82227628;
loc_82227620:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
loc_82227628:
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8216b6a8
	ctx.lr = 0x8222763C;
	sub_8216B6A8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r11,-24240
	ctx.r3.s64 = ctx.r11.s64 + -24240;
	// bl 0x8216bc98
	ctx.lr = 0x8222764C;
	sub_8216BC98(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82227680
	ctx.lr = 0x82227658;
	sub_82227680(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82227780
	ctx.lr = 0x82227664;
	sub_82227780(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8215f0f0
	ctx.lr = 0x8222766C;
	sub_8215F0F0(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8222E268) {
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
	ctx.lr = 0x8222E270;
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// addi r24,r11,18464
	r24.s64 = ctx.r11.s64 + 18464;
	// addi r23,r10,1624
	r23.s64 = ctx.r10.s64 + 1624;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x8215f670
	ctx.lr = 0x8222E298;
	sub_8215F670(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,-17264
	ctx.r4.s64 = ctx.r11.s64 + -17264;
	// bl 0x8215f670
	ctx.lr = 0x8222E2A4;
	sub_8215F670(ctx, base);
	// lwz r11,128(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 128);
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x8216b740
	ctx.lr = 0x8222E2BC;
	sub_8216B740(ctx, base);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8216b740
	ctx.lr = 0x8222E2C8;
	sub_8216B740(ctx, base);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821bf1e8
	ctx.lr = 0x8222E2D4;
	sub_821BF1E8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// addi r28,r11,16176
	r28.s64 = ctx.r11.s64 + 16176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8215f670
	ctx.lr = 0x8222E2EC;
	sub_8215F670(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x8222E2F0;
	sub_8215FA30(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x82125d00
	ctx.lr = 0x8222E2F8;
	sub_82125D00(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r30,r11,16192
	r30.s64 = ctx.r11.s64 + 16192;
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// subfe r27,r11,r10
	temp.u8 = (~ctx.r11.u32 + ctx.r10.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	r27.u64 = ~ctx.r11.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x8215f670
	ctx.lr = 0x8222E318;
	sub_8215F670(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x8222E31C;
	sub_8215FA30(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// bl 0x82125d00
	ctx.lr = 0x8222E324;
	sub_82125D00(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// subfe r26,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	r26.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x8215f670
	ctx.lr = 0x8222E33C;
	sub_8215F670(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x8215fbf8
	ctx.lr = 0x8222E344;
	sub_8215FBF8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215f670
	ctx.lr = 0x8222E350;
	sub_8215F670(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// bl 0x8215fbf8
	ctx.lr = 0x8222E358;
	sub_8215FBF8(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x8215f670
	ctx.lr = 0x8222E364;
	sub_8215F670(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,-30428
	ctx.r4.s64 = ctx.r11.s64 + -30428;
	// bl 0x8215f670
	ctx.lr = 0x8222E370;
	sub_8215F670(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x8222E378;
	sub_8215F0F0(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// clrlwi. r10,r27,24
	ctx.r10.u64 = r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r25,8(r24)
	REX_STORE_U8(r24.u32 + 8, r25.u8);
	// stw r11,0(r24)
	REX_STORE_U32(r24.u32 + 0, ctx.r11.u32);
	// beq 0x8222e4d8
	if (ctx.cr0.eq) goto loc_8222E4D8;
	// lwz r11,124(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 124);
	// lwz r3,200(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 200);
	// bl 0x821e9ec0
	ctx.lr = 0x8222E398;
	sub_821E9EC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r27,r11,-21164
	r27.s64 = ctx.r11.s64 + -21164;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8215f338
	ctx.lr = 0x8222E3A8;
	sub_8215F338(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8222e3bc
	if (!ctx.cr6.eq) goto loc_8222E3BC;
	// lbz r26,8(r3)
	r26.u64 = REX_LOAD_U8(ctx.r3.u32 + 8);
	// b 0x8222e3c0
	goto loc_8222E3C0;
loc_8222E3BC:
	// li r26,0
	r26.s64 = 0;
loc_8222E3C0:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120600
	ctx.lr = 0x8222E3CC;
	sub_82120600(ctx, base);
	// lwz r11,124(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 124);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r11,80
	ctx.r3.s64 = ctx.r11.s64 + 80;
	// bl 0x8219b8b0
	ctx.lr = 0x8222E3DC;
	sub_8219B8B0(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r30,0(r24)
	r30.u64 = REX_LOAD_U32(r24.u32 + 0);
	// bl 0x8215f670
	ctx.lr = 0x8222E3F0;
	sub_8215F670(ctx, base);
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 24);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222E408;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x8222E418;
	sub_82120AC0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82120600
	ctx.lr = 0x8222E424;
	sub_82120600(ctx, base);
	// lwz r11,124(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 124);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r11,80
	ctx.r3.s64 = ctx.r11.s64 + 80;
	// bl 0x8219b8b0
	ctx.lr = 0x8222E434;
	sub_8219B8B0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r31,0(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x8215f670
	ctx.lr = 0x8222E448;
	sub_8215F670(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222E460;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82120ac0
	ctx.lr = 0x8222E470;
	sub_82120AC0(ctx, base);
	// lwz r11,124(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 124);
	// lwz r3,200(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 200);
	// bl 0x821e9ec0
	ctx.lr = 0x8222E47C;
	sub_821E9EC0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8215f338
	ctx.lr = 0x8222E484;
	sub_8215F338(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8222e498
	if (!ctx.cr6.eq) goto loc_8222E498;
	// lbz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 8);
	// b 0x8222e49c
	goto loc_8222E49C;
loc_8222E498:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8222E49C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8222e538
	if (ctx.cr0.eq) goto loc_8222E538;
	// clrlwi. r11,r26,24
	ctx.r11.u64 = r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8222e538
	if (!ctx.cr0.eq) goto loc_8222E538;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r4,r10,-21156
	ctx.r4.s64 = ctx.r10.s64 + -21156;
	// lwz r31,6248(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 6248);
	// addi r3,r31,32
	ctx.r3.s64 = r31.s64 + 32;
	// bl 0x821ea0e0
	ctx.lr = 0x8222E4C4;
	sub_821EA0E0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8222e538
	if (ctx.cr0.eq) goto loc_8222E538;
	// lwz r3,36(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 36);
	// bl 0x822fbe20
	ctx.lr = 0x8222E4D4;
	sub_822FBE20(ctx, base);
	// b 0x8222e538
	goto loc_8222E538;
loc_8222E4D8:
	// clrlwi. r11,r26,24
	ctx.r11.u64 = r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8222e538
	if (ctx.cr0.eq) goto loc_8222E538;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82120600
	ctx.lr = 0x8222E4EC;
	sub_82120600(ctx, base);
	// lwz r11,124(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 124);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r11,80
	ctx.r3.s64 = ctx.r11.s64 + 80;
	// bl 0x8219b8b0
	ctx.lr = 0x8222E4FC;
	sub_8219B8B0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r31,0(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 0);
	// bl 0x8215f670
	ctx.lr = 0x8222E510;
	sub_8215F670(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222E528;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82120ac0
	ctx.lr = 0x8222E538;
	sub_82120AC0(ctx, base);
loc_8222E538:
	// lwz r11,124(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 124);
	// stb r25,697(r11)
	REX_STORE_U8(ctx.r11.u32 + 697, r25.u8);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x826a1cec
	return;
}

DEFINE_REX_FUNC(sub_82244080) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82244088;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r6,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r6.u32);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r5,0(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r4,0(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x82243368
	ctx.lr = 0x822440AC;
	sub_82243368(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822440bc
	if (ctx.cr0.eq) goto loc_822440BC;
	// stw r5,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r5.u32);
	// stw r4,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r4.u32);
loc_822440BC:
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// lwz r5,0(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r4,0(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 0);
	// bl 0x82243368
	ctx.lr = 0x822440CC;
	sub_82243368(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822440dc
	if (ctx.cr0.eq) goto loc_822440DC;
	// stw r5,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r5.u32);
	// stw r4,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r4.u32);
loc_822440DC:
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// lwz r5,0(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82243368
	ctx.lr = 0x822440EC;
	sub_82243368(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822440fc
	if (ctx.cr0.eq) goto loc_822440FC;
	// stw r5,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r5.u32);
	// stw r4,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r4.u32);
loc_822440FC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_822465A0) {
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
	// addi r3,r3,120
	ctx.r3.s64 = ctx.r3.s64 + 120;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82120ac0
	ctx.lr = 0x822465CC;
	sub_82120AC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82178388
	ctx.lr = 0x822465D4;
	sub_82178388(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822465e4
	if (ctx.cr0.eq) goto loc_822465E4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x822465E4;
	sub_8269CE98(ctx, base);
loc_822465E4:
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

DEFINE_REX_FUNC(sub_8224A6B8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-13284
	ctx.r3.s64 = ctx.r11.s64 + -13284;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8224AFF8) {
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
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-12880
	ctx.r10.s64 = ctx.r10.s64 + -12880;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,32
	ctx.r3.s64 = 32;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// addi r10,r31,4
	ctx.r10.s64 = r31.s64 + 4;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// bl 0x8269d1d0
	ctx.lr = 0x8224B03C;
	sub_8269D1D0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8269d1b8
	ctx.lr = 0x8224B048;
	sub_8269D1B8(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_8224F860) {
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
	ctx.lr = 0x8224F868;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,928(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 928);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,204(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 204);
	// lwz r30,16(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x821e9ec0
	ctx.lr = 0x8224F880;
	sub_821E9EC0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,948
	ctx.r3.s64 = r31.s64 + 948;
	// bl 0x8227eb80
	ctx.lr = 0x8224F890;
	sub_8227EB80(ctx, base);
	// lwz r11,932(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 932);
	// lwz r3,204(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 204);
	// lwz r30,16(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x821e9ec0
	ctx.lr = 0x8224F8A0;
	sub_821E9EC0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,964
	ctx.r3.s64 = r31.s64 + 964;
	// bl 0x8227eb80
	ctx.lr = 0x8224F8B0;
	sub_8227EB80(ctx, base);
	// lwz r11,936(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 936);
	// lwz r3,204(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 204);
	// lwz r30,16(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x821e9ec0
	ctx.lr = 0x8224F8C0;
	sub_821E9EC0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,980
	ctx.r3.s64 = r31.s64 + 980;
	// bl 0x8227eb80
	ctx.lr = 0x8224F8D0;
	sub_8227EB80(ctx, base);
	// lwz r3,204(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 204);
	// bl 0x821e9ec0
	ctx.lr = 0x8224F8D8;
	sub_821E9EC0(ctx, base);
	// lwz r30,488(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 488);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r31,0
	r31.s64 = 0;
	// lwz r11,160(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 160);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8224f93c
	if (!ctx.cr6.gt) goto loc_8224F93C;
	// addi r29,r30,156
	r29.s64 = r30.s64 + 156;
loc_8224F8F4:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8228ca78
	ctx.lr = 0x8224F900;
	sub_8228CA78(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r27,96(r11)
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// bl 0x8228ca78
	ctx.lr = 0x8224F918;
	sub_8228CA78(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r11,112
	ctx.r3.s64 = ctx.r11.s64 + 112;
	// bl 0x8227eb80
	ctx.lr = 0x8224F92C;
	sub_8227EB80(ctx, base);
	// lwz r11,160(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 160);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8224f8f4
	if (ctx.cr6.lt) goto loc_8224F8F4;
loc_8224F93C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_822533A8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x822533B0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lwz r30,104(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-11580
	ctx.r11.s64 = ctx.r11.s64 + -11580;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq cr6,0x822533ec
	if (ctx.cr6.eq) goto loc_822533EC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82163998
	ctx.lr = 0x822533DC;
	sub_82163998(ctx, base);
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// bl 0x82163cb0
	ctx.lr = 0x822533E4;
	sub_82163CB0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8269ce98
	ctx.lr = 0x822533EC;
	sub_8269CE98(ctx, base);
loc_822533EC:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x82120ac0
	ctx.lr = 0x822533FC;
	sub_82120AC0(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x822078a0
	ctx.lr = 0x82253404;
	sub_822078A0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// bl 0x82120ac0
	ctx.lr = 0x82253414;
	sub_82120AC0(ctx, base);
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// bl 0x8215f0f0
	ctx.lr = 0x8225341C;
	sub_8215F0F0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// clrlwi. r10,r29,31
	ctx.r10.u64 = r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,30860
	ctx.r11.s64 = ctx.r11.s64 + 30860;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// beq 0x82253438
	if (ctx.cr0.eq) goto loc_82253438;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x82253438;
	sub_8269CE98(ctx, base);
loc_82253438:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82255748) {
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
	ctx.lr = 0x82255750;
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,108(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 108);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82255d34
	if (ctx.cr6.eq) goto loc_82255D34;
	// lwz r3,116(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82255788
	if (ctx.cr6.eq) goto loc_82255788;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82255788;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82255788:
	// lwz r11,108(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82255b64
	if (!ctx.cr6.eq) goto loc_82255B64;
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x822557b8
	if (!ctx.cr6.eq) goto loc_822557B8;
	// lwz r11,8(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// b 0x822557bc
	goto loc_822557BC;
loc_822557B8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822557BC:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82255ae4
	if (!ctx.cr6.gt) goto loc_82255AE4;
	// li r23,0
	r23.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,32
	ctx.r3.s64 = 32;
	// stw r23,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r23.u32);
	// bl 0x8269d1d0
	ctx.lr = 0x822557D8;
	sub_8269D1D0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8269d1b8
	ctx.lr = 0x822557E4;
	sub_8269D1B8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r31,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// addi r4,r11,-11016
	ctx.r4.s64 = ctx.r11.s64 + -11016;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// bl 0x82120600
	ctx.lr = 0x82255800;
	sub_82120600(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,6256(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6256);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82255820;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82120ac0
	ctx.lr = 0x82255830;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// li r28,0
	r28.s64 = 0;
	// addi r25,r11,-17164
	r25.s64 = ctx.r11.s64 + -17164;
	// addi r26,r10,-16680
	r26.s64 = ctx.r10.s64 + -16680;
	// addi r27,r9,-17264
	r27.s64 = ctx.r9.s64 + -17264;
loc_8225584C:
	// lwz r10,0(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 0);
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// bne cr6,0x82255870
	if (!ctx.cr6.eq) goto loc_82255870;
	// lwz r11,8(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 8);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// b 0x82255874
	goto loc_82255874;
loc_82255870:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82255874:
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82255938
	if (!ctx.cr6.lt) goto loc_82255938;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x82255888;
	sub_8215F1B0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8215f338
	ctx.lr = 0x82255890;
	sub_8215F338(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
loc_82255898:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x822558bc
	if (!ctx.cr6.eq) goto loc_822558BC;
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
	// b 0x822558c0
	goto loc_822558C0;
loc_822558BC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822558C0:
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82255930
	if (!ctx.cr6.lt) goto loc_82255930;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x822558D4;
	sub_8215F1B0(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8215f338
	ctx.lr = 0x822558E0;
	sub_8215F338(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x822558E4;
	sub_8215F990(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82255908
	if (!ctx.cr6.eq) goto loc_82255908;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215f338
	ctx.lr = 0x822558FC;
	sub_8215F338(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x82255900;
	sub_8215F990(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82255910
	if (ctx.cr0.eq) goto loc_82255910;
loc_82255908:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// b 0x82255898
	goto loc_82255898;
loc_82255910:
	// addi r4,r23,1
	ctx.r4.s64 = r23.s64 + 1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8212fcf0
	ctx.lr = 0x8225591C;
	sub_8212FCF0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r23,92(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// addi r4,r23,-1
	ctx.r4.s64 = r23.s64 + -1;
	// bl 0x8228ca78
	ctx.lr = 0x8225592C;
	sub_8228CA78(ctx, base);
	// stw r28,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r28.u32);
loc_82255930:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// b 0x8225584c
	goto loc_8225584C;
loc_82255938:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// beq cr6,0x82255980
	if (ctx.cr6.eq) goto loc_82255980;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-11344
	ctx.r3.s64 = ctx.r11.s64 + -11344;
	// bl 0x821a33a0
	ctx.lr = 0x8225594C;
	sub_821A33A0(ctx, base);
	// extsw r11,r23
	ctx.r11.s64 = r23.s32;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
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
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8228ca78
	ctx.lr = 0x82255978;
	sub_8228CA78(ctx, base);
	// lwz r4,0(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x822559d4
	goto loc_822559D4;
loc_82255980:
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// bne cr6,0x822559a0
	if (!ctx.cr6.eq) goto loc_822559A0;
	// lwz r11,8(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r31,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	r31.s64 = ctx.r11.s32 >> 4;
	// b 0x822559a4
	goto loc_822559A4;
loc_822559A0:
	// li r31,0
	r31.s64 = 0;
loc_822559A4:
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-11344
	ctx.r3.s64 = ctx.r11.s64 + -11344;
	// bl 0x821a33a0
	ctx.lr = 0x822559B0;
	sub_821A33A0(ctx, base);
	// extsw r11,r31
	ctx.r11.s64 = r31.s32;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
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
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_822559D4:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x822559DC;
	sub_8215F1B0(ctx, base);
	// bl 0x82270f10
	ctx.lr = 0x822559E0;
	sub_82270F10(ctx, base);
	// stw r3,116(r22)
	REX_STORE_U32(r22.u32 + 116, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82255a04
	if (!ctx.cr0.eq) goto loc_82255A04;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r4,r11,-11100
	ctx.r4.s64 = ctx.r11.s64 + -11100;
	// addi r3,r10,-11000
	ctx.r3.s64 = ctx.r10.s64 + -11000;
	// li r5,1013
	ctx.r5.s64 = 1013;
	// bl 0x821231d0
	ctx.lr = 0x82255A04;
	sub_821231D0(ctx, base);
loc_82255A04:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// addi r30,r11,30636
	r30.s64 = ctx.r11.s64 + 30636;
	// addi r29,r10,1624
	r29.s64 = ctx.r10.s64 + 1624;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8215f670
	ctx.lr = 0x82255A20;
	sub_8215F670(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r4,r11,-25320
	ctx.r4.s64 = ctx.r11.s64 + -25320;
	// bl 0x8215f670
	ctx.lr = 0x82255A30;
	sub_8215F670(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,-25312
	ctx.r4.s64 = ctx.r11.s64 + -25312;
	// bl 0x8215fbf8
	ctx.lr = 0x82255A3C;
	sub_8215FBF8(ctx, base);
	// lwz r3,116(r22)
	ctx.r3.u64 = REX_LOAD_U32(r22.u32 + 116);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82255A50;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,-16108
	ctx.r4.s64 = ctx.r11.s64 + -16108;
	// bl 0x8215f670
	ctx.lr = 0x82255A64;
	sub_8215F670(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x82255A6C;
	sub_8215F0F0(ctx, base);
	// li r31,1
	r31.s64 = 1;
	// stw r27,8(r26)
	REX_STORE_U32(r26.u32 + 8, r27.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r31,0(r26)
	REX_STORE_U32(r26.u32 + 0, r31.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,16584
	ctx.r4.s64 = ctx.r11.s64 + 16584;
	// bl 0x8215f338
	ctx.lr = 0x82255A88;
	sub_8215F338(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,-28324
	ctx.r4.s64 = ctx.r11.s64 + -28324;
	// bl 0x8215f338
	ctx.lr = 0x82255A94;
	sub_8215F338(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x82255A98;
	sub_8215F990(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r4,r11,29808
	ctx.r4.s64 = ctx.r11.s64 + 29808;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8215f670
	ctx.lr = 0x82255AAC;
	sub_8215F670(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,-16776
	ctx.r4.s64 = ctx.r11.s64 + -16776;
	// bl 0x8215f670
	ctx.lr = 0x82255AB8;
	sub_8215F670(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x82255AC0;
	sub_8215F0F0(ctx, base);
	// stw r29,8(r28)
	REX_STORE_U32(r28.u32 + 8, r29.u32);
	// stw r31,0(r28)
	REX_STORE_U32(r28.u32 + 0, r31.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r5,15
	ctx.r5.s64 = 15;
	// addi r3,r22,68
	ctx.r3.s64 = r22.s64 + 68;
	// bl 0x82120c08
	ctx.lr = 0x82255AD8;
	sub_82120C08(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8269d1b8
	ctx.lr = 0x82255AE0;
	sub_8269D1B8(ctx, base);
	// b 0x82255d34
	goto loc_82255D34;
loc_82255AE4:
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r11,108(r22)
	REX_STORE_U32(r22.u32 + 108, ctx.r11.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r31,r10,-25248
	r31.s64 = ctx.r10.s64 + -25248;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82120600
	ctx.lr = 0x82255B00;
	sub_82120600(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82120600
	ctx.lr = 0x82255B0C;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r4,r11,17480
	ctx.r4.s64 = ctx.r11.s64 + 17480;
	// bl 0x82120600
	ctx.lr = 0x82255B1C;
	sub_82120600(ctx, base);
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lbz r3,112(r22)
	ctx.r3.u64 = REX_LOAD_U8(r22.u32 + 112);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// bl 0x822707c0
	ctx.lr = 0x82255B30;
	sub_822707C0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82120ac0
	ctx.lr = 0x82255B40;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82120ac0
	ctx.lr = 0x82255B50;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82120ac0
	ctx.lr = 0x82255B60;
	sub_82120AC0(ctx, base);
	// b 0x82255d34
	goto loc_82255D34;
loc_82255B64:
	// lwz r10,0(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 0);
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// bne cr6,0x82255b88
	if (!ctx.cr6.eq) goto loc_82255B88;
	// lwz r11,8(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 8);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// b 0x82255b8c
	goto loc_82255B8C;
loc_82255B88:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82255B8C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82255cb8
	if (!ctx.cr6.gt) goto loc_82255CB8;
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// bne cr6,0x82255bbc
	if (!ctx.cr6.eq) goto loc_82255BBC;
	// lwz r11,8(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// rlwinm. r10,r10,0,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x82255bbc
	if (!ctx.cr0.gt) goto loc_82255BBC;
	// rotlwi r3,r9,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// b 0x82255bc4
	goto loc_82255BC4;
loc_82255BBC:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r3,r11,1008
	ctx.r3.s64 = ctx.r11.s64 + 1008;
loc_82255BC4:
	// bl 0x82270f10
	ctx.lr = 0x82255BC8;
	sub_82270F10(ctx, base);
	// stw r3,116(r22)
	REX_STORE_U32(r22.u32 + 116, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82255bec
	if (!ctx.cr0.eq) goto loc_82255BEC;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r4,r11,-11100
	ctx.r4.s64 = ctx.r11.s64 + -11100;
	// addi r3,r10,-11000
	ctx.r3.s64 = ctx.r10.s64 + -11000;
	// li r5,1045
	ctx.r5.s64 = 1045;
	// bl 0x821231d0
	ctx.lr = 0x82255BEC;
	sub_821231D0(ctx, base);
loc_82255BEC:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// addi r30,r11,30636
	r30.s64 = ctx.r11.s64 + 30636;
	// addi r29,r10,1624
	r29.s64 = ctx.r10.s64 + 1624;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8215f670
	ctx.lr = 0x82255C08;
	sub_8215F670(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r4,r11,-25320
	ctx.r4.s64 = ctx.r11.s64 + -25320;
	// bl 0x8215f670
	ctx.lr = 0x82255C18;
	sub_8215F670(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,-25312
	ctx.r4.s64 = ctx.r11.s64 + -25312;
	// bl 0x8215fbf8
	ctx.lr = 0x82255C24;
	sub_8215FBF8(ctx, base);
	// lwz r3,116(r22)
	ctx.r3.u64 = REX_LOAD_U32(r22.u32 + 116);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82255C38;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,-16108
	ctx.r4.s64 = ctx.r11.s64 + -16108;
	// bl 0x8215f670
	ctx.lr = 0x82255C4C;
	sub_8215F670(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x82255C54;
	sub_8215F0F0(ctx, base);
	// li r31,1
	r31.s64 = 1;
	// stw r27,8(r26)
	REX_STORE_U32(r26.u32 + 8, r27.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r31,0(r26)
	REX_STORE_U32(r26.u32 + 0, r31.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,16584
	ctx.r4.s64 = ctx.r11.s64 + 16584;
	// bl 0x8215f338
	ctx.lr = 0x82255C70;
	sub_8215F338(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,-28324
	ctx.r4.s64 = ctx.r11.s64 + -28324;
	// bl 0x8215f338
	ctx.lr = 0x82255C7C;
	sub_8215F338(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x82255C80;
	sub_8215F990(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r4,r11,29808
	ctx.r4.s64 = ctx.r11.s64 + 29808;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8215f670
	ctx.lr = 0x82255C94;
	sub_8215F670(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,-16776
	ctx.r4.s64 = ctx.r11.s64 + -16776;
	// bl 0x8215f670
	ctx.lr = 0x82255CA0;
	sub_8215F670(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x82255CA8;
	sub_8215F0F0(ctx, base);
	// stw r29,8(r28)
	REX_STORE_U32(r28.u32 + 8, r29.u32);
	// stw r31,0(r28)
	REX_STORE_U32(r28.u32 + 0, r31.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// b 0x82255d28
	goto loc_82255D28;
loc_82255CB8:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// addi r4,r11,16492
	ctx.r4.s64 = ctx.r11.s64 + 16492;
	// addi r3,r10,1624
	ctx.r3.s64 = ctx.r10.s64 + 1624;
	// bl 0x8215f338
	ctx.lr = 0x82255CCC;
	sub_8215F338(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,16504
	ctx.r4.s64 = ctx.r11.s64 + 16504;
	// bl 0x8215f338
	ctx.lr = 0x82255CD8;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x82255CDC;
	sub_8215FA30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r11,17388
	ctx.r4.s64 = ctx.r11.s64 + 17388;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82120600
	ctx.lr = 0x82255CF0;
	sub_82120600(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lbz r3,112(r22)
	ctx.r3.u64 = REX_LOAD_U8(r22.u32 + 112);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// bl 0x82270008
	ctx.lr = 0x82255D04;
	sub_82270008(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82120ac0
	ctx.lr = 0x82255D18;
	sub_82120AC0(ctx, base);
	// clrlwi. r11,r31,24
	ctx.r11.u64 = r31.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82255d34
	if (ctx.cr0.eq) goto loc_82255D34;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,30636
	ctx.r4.s64 = ctx.r11.s64 + 30636;
loc_82255D28:
	// li r5,15
	ctx.r5.s64 = 15;
	// addi r3,r22,68
	ctx.r3.s64 = r22.s64 + 68;
	// bl 0x82120c08
	ctx.lr = 0x82255D34;
	sub_82120C08(ctx, base);
loc_82255D34:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_8227E758) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8227E760;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x8227e784
	if (ctx.cr6.lt) goto loc_8227E784;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8227e79c
	if (ctx.cr6.lt) goto loc_8227E79C;
loc_8227E784:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
	// addi r3,r10,40
	ctx.r3.s64 = ctx.r10.s64 + 40;
	// li r5,42
	ctx.r5.s64 = 42;
	// bl 0x821231d0
	ctx.lr = 0x8227E79C;
	sub_821231D0(ctx, base);
loc_8227E79C:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt cr6,0x8227e7b0
	if (ctx.cr6.lt) goto loc_8227E7B0;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8227e7c8
	if (ctx.cr6.lt) goto loc_8227E7C8;
loc_8227E7B0:
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
	ctx.lr = 0x8227E7C8;
	sub_821231D0(ctx, base);
loc_8227E7C8:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// rlwinm r10,r31,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r29.u32);
	// stw r31,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82284958) {
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
	ctx.lr = 0x82284960;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r27,0
	r27.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r27
	r29.u64 = r27.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822849b4
	if (!ctx.cr6.gt) goto loc_822849B4;
	// mr r30,r27
	r30.u64 = r27.u64;
	// lis r28,-32106
	r28.s64 = -2104098816;
loc_82284984:
	// lwz r3,6180(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 6180);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwzx r4,r11,r30
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// lwz r11,44(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822849A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,80
	r30.s64 = r30.s64 + 80;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82284984
	if (ctx.cr6.lt) goto loc_82284984;
loc_822849B4:
	// lbz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822849c8
	if (ctx.cr0.eq) goto loc_822849C8;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x8269d1b8
	ctx.lr = 0x822849C8;
	sub_8269D1B8(ctx, base);
loc_822849C8:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r27,0(r31)
	REX_STORE_U32(r31.u32 + 0, r27.u32);
	// stw r27,4(r31)
	REX_STORE_U32(r31.u32 + 4, r27.u32);
	// stw r27,8(r31)
	REX_STORE_U32(r31.u32 + 8, r27.u32);
	// stb r11,12(r31)
	REX_STORE_U8(r31.u32 + 12, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82287388) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82287390;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r9,r1,116
	ctx.r9.s64 = ctx.r1.s64 + 116;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,220
	ctx.r5.s64 = ctx.r1.s64 + 220;
	// lfs f0,15048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// stw r6,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// addi r30,r1,221
	r30.s64 = ctx.r1.s64 + 221;
	// stw r5,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r10,r1,216
	ctx.r10.s64 = ctx.r1.s64 + 216;
	// addi r9,r1,208
	ctx.r9.s64 = ctx.r1.s64 + 208;
	// stfs f0,208(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// stfs f0,212(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// stfs f0,216(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// stw r11,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// std r11,136(r1)
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.r11.u64);
	// stb r11,220(r1)
	REX_STORE_U8(ctx.r1.u32 + 220, ctx.r11.u8);
	// stb r11,221(r1)
	REX_STORE_U8(ctx.r1.u32 + 221, ctx.r11.u8);
	// stw r11,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r11.u32);
	// bl 0x8227e178
	ctx.lr = 0x82287408;
	sub_8227E178(ctx, base);
	// lis r30,-32106
	r30.s64 = -2104098816;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,6156(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6156);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82287424;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,5
	ctx.r11.s64 = 5;
	// addi r10,r1,204
	ctx.r10.s64 = ctx.r1.s64 + 204;
	// addi r9,r31,56
	ctx.r9.s64 = r31.s64 + 56;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82287434:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x82287434
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82287434;
	// lbz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 112);
	// lwz r3,6156(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6156);
	// stb r11,153(r31)
	REX_STORE_U8(r31.u32 + 153, ctx.r11.u8);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228745C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,148(r31)
	REX_STORE_U32(r31.u32 + 148, ctx.r3.u32);
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// lwz r8,116(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822875c8
	ctx.lr = 0x8228747C;
	sub_822875C8(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8215f0f0
	ctx.lr = 0x82287484;
	sub_8215F0F0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8228C528) {
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
	ctx.lr = 0x8228C530;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x8228c718
	ctx.lr = 0x8228C544;
	sub_8228C718(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8228c63c
	if (!ctx.cr0.eq) goto loc_8228C63C;
	// li r3,88
	ctx.r3.s64 = 88;
	// bl 0x822f6280
	ctx.lr = 0x8228C554;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8228c5a0
	if (ctx.cr0.eq) goto loc_8228C5A0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82120d70
	ctx.lr = 0x8228C568;
	sub_82120D70(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,28
	ctx.r3.s64 = r31.s64 + 28;
	// bl 0x82120d70
	ctx.lr = 0x8228C574;
	sub_82120D70(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r27,r31
	r27.u64 = r31.u64;
	// stw r11,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r11.u32);
	// stw r11,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r11.u32);
	// stw r11,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r11.u32);
	// stw r11,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r11.u32);
	// stw r11,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r11.u32);
	// stw r11,76(r31)
	REX_STORE_U32(r31.u32 + 76, ctx.r11.u32);
	// stw r11,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r11.u32);
	// stw r11,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r11.u32);
	// b 0x8228c5a4
	goto loc_8228C5A4;
loc_8228C5A0:
	// li r27,0
	r27.s64 = 0;
loc_8228C5A4:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// bne cr6,0x8228c5c4
	if (!ctx.cr6.eq) goto loc_8228C5C4;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r4,r11,3600
	ctx.r4.s64 = ctx.r11.s64 + 3600;
	// addi r3,r10,3736
	ctx.r3.s64 = ctx.r10.s64 + 3736;
	// li r5,155
	ctx.r5.s64 = 155;
	// bl 0x821231d0
	ctx.lr = 0x8228C5C4;
	sub_821231D0(ctx, base);
loc_8228C5C4:
	// addi r31,r28,4
	r31.s64 = r28.s64 + 4;
	// lwz r28,8(r28)
	r28.u64 = REX_LOAD_U32(r28.u32 + 8);
	// addi r29,r28,1
	r29.s64 = r28.s64 + 1;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8228c628
	if (!ctx.cr6.gt) goto loc_8228C628;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(r30.s32, r29.s32, ctx.xer);
	// bgt cr6,0x8228c5f4
	if (ctx.cr6.gt) goto loc_8228C5F4;
	// mr r30,r29
	r30.u64 = r29.u64;
loc_8228C5F4:
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8228c628
	if (!ctx.cr6.gt) goto loc_8228C628;
	// li r4,16
	ctx.r4.s64 = 16;
	// rlwinm r3,r30,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8269d1d0
	ctx.lr = 0x8228C608;
	sub_8269D1D0(ctx, base);
	// rlwinm r5,r28,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8228C618;
	sub_826A1E70(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8269d1b8
	ctx.lr = 0x8228C620;
	sub_8269D1B8(ctx, base);
	// stw r26,0(r31)
	REX_STORE_U32(r31.u32 + 0, r26.u32);
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
loc_8228C628:
	// stw r29,4(r31)
	REX_STORE_U32(r31.u32 + 4, r29.u32);
	// addi r4,r29,-1
	ctx.r4.s64 = r29.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8228ca78
	ctx.lr = 0x8228C638;
	sub_8228CA78(ctx, base);
	// stw r27,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r27.u32);
loc_8228C63C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82293BE8) {
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
	// lfs f13,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82293c58
	if (ctx.cr6.gt) goto loc_82293C58;
	// lfs f0,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bgt cr6,0x82293c58
	if (ctx.cr6.gt) goto loc_82293C58;
	// lfs f0,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,8(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bgt cr6,0x82293c58
	if (ctx.cr6.gt) goto loc_82293C58;
	// lfs f0,16(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,16(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x82293c58
	if (ctx.cr6.lt) goto loc_82293C58;
	// lfs f0,20(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,20(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x82293c58
	if (ctx.cr6.lt) goto loc_82293C58;
	// lfs f0,24(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f12,24(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x82293c5c
	if (!ctx.cr6.lt) goto loc_82293C5C;
loc_82293C58:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82293C5C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82293c6c
	if (ctx.cr0.eq) goto loc_82293C6C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82293d48
	goto loc_82293D48;
loc_82293C6C:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f12,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r9,r11,16592
	ctx.r9.s64 = ctx.r11.s64 + 16592;
	// addi r11,r5,16
	ctx.r11.s64 = ctx.r5.s64 + 16;
	// lfs f0,568(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 568);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f13,0(r5)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// fsubs f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// stfs f13,4(r5)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// fsubs f13,f11,f0
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// stfs f13,8(r5)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// lfs f11,24(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,16(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,20(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fadds f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fadds f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// lfs f13,15048(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f0,16(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 16, temp.u32);
	// stfs f10,20(r5)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r5.u32 + 20, temp.u32);
	// stfs f11,24(r5)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r5.u32 + 24, temp.u32);
	// lfs f0,0(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82293ce4
	if (!ctx.cr6.gt) goto loc_82293CE4;
	// lfs f12,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// b 0x82293cf0
	goto loc_82293CF0;
loc_82293CE4:
	// lfs f12,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
loc_82293CF0:
	// lfs f0,4(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82293d0c
	if (!ctx.cr6.gt) goto loc_82293D0C;
	// lfs f12,20(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f0,20(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 20, temp.u32);
	// b 0x82293d18
	goto loc_82293D18;
loc_82293D0C:
	// lfs f12,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f0,4(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 4, temp.u32);
loc_82293D18:
	// lfs f0,8(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82293d34
	if (!ctx.cr6.gt) goto loc_82293D34;
	// lfs f13,24(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,24(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 24, temp.u32);
	// b 0x82293d40
	goto loc_82293D40;
loc_82293D34:
	// lfs f13,8(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,8(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 8, temp.u32);
loc_82293D40:
	// bl 0x82293b58
	ctx.lr = 0x82293D44;
	sub_82293B58(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82293D48:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822A4B30) {
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82294688
	ctx.lr = 0x822A4B48;
	sub_82294688(ctx, base);
	// lfs f1,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822A5478) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r11,6428
	ctx.r3.s64 = ctx.r11.s64 + 6428;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822A5BB8) {
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
	ctx.lr = 0x822A5BC0;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lfs f12,15048(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15048);
	ctx.f12.f64 = double(temp.f32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f0,308(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 308);
	ctx.f0.f64 = double(temp.f32);
	// addi r30,r3,48
	r30.s64 = ctx.r3.s64 + 48;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r28,0
	r28.s64 = 0;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f12,92(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// ld r10,8(r8)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r8.u32 + 8);
	// lfs f13,100(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// ld r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// std r11,32(r3)
	REX_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// std r10,40(r3)
	REX_STORE_U64(ctx.r3.u32 + 40, ctx.r10.u64);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f12,108(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// ld r10,8(r7)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r7.u32 + 8);
	// ld r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r7.u32 + 0);
	// std r11,48(r3)
	REX_STORE_U64(ctx.r3.u32 + 48, ctx.r11.u64);
	// std r10,56(r3)
	REX_STORE_U64(ctx.r3.u32 + 56, ctx.r10.u64);
	// ble cr6,0x822a5cc4
	if (!ctx.cr6.gt) goto loc_822A5CC4;
	// li r29,0
	r29.s64 = 0;
loc_822A5C40:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + r29.u64;
	// lwz r3,64(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 64);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822A5C64;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822A5C74:
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lfs f13,-16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -16);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f0,r9,r10
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x822a5c8c
	if (!ctx.cr6.gt) goto loc_822A5C8C;
	// stfs f0,-16(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + -16, temp.u32);
loc_822A5C8C:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f0,r9,r10
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x822a5ca4
	if (!ctx.cr6.lt) goto loc_822A5CA4;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
loc_822A5CA4:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x822a5c74
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822A5C74;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,80
	r29.s64 = r29.s64 + 80;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822a5c40
	if (ctx.cr6.lt) goto loc_822A5C40;
loc_822A5CC4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_822B0720) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r10,r3,112
	ctx.r10.s64 = ctx.r3.s64 + 112;
	// li r9,3
	ctx.r9.s64 = 3;
loc_822B072C:
	// lfs f13,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f13,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,96(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 96);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f0,f13,f12,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f12.f64, ctx.f0.f64)));
	// fmadds f0,f11,f10,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f11.f64, ctx.f10.f64, ctx.f0.f64)));
	// fcmpu cr6,f0,f9
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// ble cr6,0x822b0774
	if (!ctx.cr6.gt) goto loc_822B0774;
	// stfs f0,96(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// ld r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// std r8,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r8.u64);
	// addi r8,r3,16
	ctx.r8.s64 = ctx.r3.s64 + 16;
	// ld r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// std r8,24(r3)
	REX_STORE_U64(ctx.r3.u32 + 24, ctx.r8.u64);
loc_822B0774:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bne 0x822b072c
	if (!ctx.cr0.eq) goto loc_822B072C;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822B7A80) {
	REX_FUNC_PROLOGUE();
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	// stfd f29,-24(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -24, f29.u64);
	// stfd f30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, f30.u64);
	// stfd f31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, f31.u64);
	// lfs f0,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f13,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lfs f11,8(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fsubs f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// lfs f10,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f6,f9,f10
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// lfs f9,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f4,f9,f0
	ctx.f4.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// lfs f9,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f3,f9,f10
	ctx.f3.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// lfs f9,8(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f5,f8,f13
	ctx.f5.f64 = double(float(ctx.f8.f64 - ctx.f13.f64));
	// fsubs f1,f9,f13
	ctx.f1.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// lfs f9,4(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f31,f9,f0
	f31.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// lfs f9,0(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f2,f8,f10
	ctx.f2.f64 = double(float(ctx.f8.f64 - ctx.f10.f64));
	// lfs f8,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f10,f9,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// fmuls f30,f11,f12
	f30.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// lfs f29,8(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	f29.f64 = double(temp.f32);
	// fsubs f9,f8,f0
	ctx.f9.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// lfs f7,924(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 924);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f8,f29,f13
	ctx.f8.f64 = double(float(f29.f64 - ctx.f13.f64));
	// fmuls f0,f4,f6
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f6.f64));
	// fmuls f29,f3,f5
	f29.f64 = double(float(ctx.f3.f64 * ctx.f5.f64));
	// fmsubs f13,f4,f5,f30
	ctx.f13.f64 = double(float(std::fma(ctx.f4.f64, ctx.f5.f64, -f30.f64)));
	// fmsubs f12,f3,f12,f0
	ctx.f12.f64 = double(float(std::fma(ctx.f3.f64, ctx.f12.f64, -ctx.f0.f64)));
	// fmsubs f11,f11,f6,f29
	ctx.f11.f64 = double(float(std::fma(ctx.f11.f64, ctx.f6.f64, -f29.f64)));
	// fmuls f0,f2,f13
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// fmadds f0,f1,f12,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f1.f64, ctx.f12.f64, ctx.f0.f64)));
	// fmadds f0,f31,f11,f0
	ctx.f0.f64 = double(float(std::fma(f31.f64, ctx.f11.f64, ctx.f0.f64)));
	// fmuls f6,f0,f0
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fcmpu cr6,f6,f7
	ctx.cr6.compare(ctx.f6.f64, ctx.f7.f64);
	// bge cr6,0x822b7b3c
	if (!ctx.cr6.lt) goto loc_822B7B3C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x822b7b64
	goto loc_822B7B64;
loc_822B7B3C:
	// fmuls f10,f10,f13
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f13,15048(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f12,f8,f12,f10
	ctx.f12.f64 = double(float(std::fma(ctx.f8.f64, ctx.f12.f64, ctx.f10.f64)));
	// fmadds f12,f9,f11,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f9.f64, ctx.f11.f64, ctx.f12.f64)));
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x822b7b64
	if (ctx.cr6.lt) goto loc_822B7B64;
	// li r3,0
	ctx.r3.s64 = 0;
loc_822B7B64:
	// lfd f29,-24(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// lfd f30,-16(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// lfd f31,-8(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822BE1C8) {
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
	// addi r11,r11,5212
	ctx.r11.s64 = ctx.r11.s64 + 5212;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x822be1f4
	if (ctx.cr0.eq) goto loc_822BE1F4;
	// bl 0x8269ce98
	ctx.lr = 0x822BE1F4;
	sub_8269CE98(ctx, base);
loc_822BE1F4:
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

DEFINE_REX_FUNC(sub_822C08B8) {
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
	ctx.lr = 0x822C08C0;
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, f30.u64);
	// stfd f31,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f0,464(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 464);
	ctx.f0.f64 = double(temp.f32);
	// fmr f30,f1
	f30.f64 = ctx.f1.f64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r29,r11,16592
	r29.s64 = ctx.r11.s64 + 16592;
	// fmr f2,f1
	ctx.f2.f64 = ctx.f1.f64;
	// lfs f31,12(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 12);
	f31.f64 = double(temp.f32);
	// fsubs f1,f31,f0
	ctx.f1.f64 = double(float(f31.f64 - ctx.f0.f64));
	// bl 0x8269f778
	ctx.lr = 0x822C08F0;
	sub_8269F778(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lfs f13,320(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 320);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,324(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 324);
	ctx.f12.f64 = double(temp.f32);
	// addi r31,r30,320
	r31.s64 = r30.s64 + 320;
	// lfs f11,328(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 328);
	ctx.f11.f64 = double(temp.f32);
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f13,320(r30)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r30.u32 + 320, temp.u32);
	// fmuls f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f13,324(r30)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r30.u32 + 324, temp.u32);
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f0,328(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 328, temp.u32);
	// lfs f0,468(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 468);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f1,f31,f0
	ctx.f1.f64 = double(float(f31.f64 - ctx.f0.f64));
	// bl 0x8269f778
	ctx.lr = 0x822C092C;
	sub_8269F778(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lfs f13,336(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 336);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r30,336
	ctx.r11.s64 = r30.s64 + 336;
	// lfs f12,340(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 340);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,344(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 344);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,336(r30)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r30.u32 + 336, temp.u32);
	// fmuls f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f13,340(r30)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r30.u32 + 340, temp.u32);
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f0,344(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 344, temp.u32);
	// lbz r10,472(r30)
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + 472);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x822c0b60
	if (ctx.cr0.eq) goto loc_822C0B60;
	// lfs f0,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f13,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,484(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 484);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f0.f64)));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f12.f64, ctx.f0.f64)));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x822c0a0c
	if (!ctx.cr6.lt) goto loc_822C0A0C;
	// lfs f0,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f13,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,480(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 480);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f0.f64)));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f12.f64, ctx.f0.f64)));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x822c0a0c
	if (!ctx.cr6.lt) goto loc_822C0A0C;
	// lfs f0,476(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 476);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,476(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 476);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,476(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 476);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f0,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,476(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 476);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// stfs f12,0(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// lfs f12,476(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 476);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// lfs f0,476(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 476);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
loc_822C0A0C:
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// fmuls f11,f0,f0
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f9,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f13,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f13
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f8,464(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 464);
	ctx.f8.f64 = double(temp.f32);
	// lfs f0,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,15048(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f11,f9,f9,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f9.f64, ctx.f9.f64, ctx.f11.f64)));
	// fadds f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// fsqrts f11,f11
	ctx.f11.f64 = double(float(sqrt(ctx.f11.f64)));
	// fcmpu cr6,f11,f8
	ctx.cr6.compare(ctx.f11.f64, ctx.f8.f64);
	// bge cr6,0x822c0abc
	if (!ctx.cr6.lt) goto loc_822C0ABC;
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// ble cr6,0x822c0aac
	if (!ctx.cr6.gt) goto loc_822C0AAC;
	// lfs f11,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmr f6,f13
	ctx.f6.f64 = ctx.f13.f64;
	// fmuls f11,f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// lfs f7,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fmr f8,f9
	ctx.f8.f64 = ctx.f9.f64;
	// fmr f5,f9
	ctx.f5.f64 = ctx.f9.f64;
	// fmr f4,f7
	ctx.f4.f64 = ctx.f7.f64;
	// fmadds f11,f9,f9,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f9.f64, ctx.f9.f64, ctx.f11.f64)));
	// fadds f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// fsqrts f12,f12
	ctx.f12.f64 = double(float(sqrt(ctx.f12.f64)));
	// fdivs f12,f31,f12
	ctx.f12.f64 = double(float(f31.f64 / ctx.f12.f64));
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fmuls f11,f9,f12
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fmuls f12,f7,f12
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fsubs f13,f6,f13
	ctx.f13.f64 = double(float(ctx.f6.f64 - ctx.f13.f64));
	// stfs f13,0(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// fsubs f13,f9,f11
	ctx.f13.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// fsubs f13,f7,f12
	ctx.f13.f64 = double(float(ctx.f7.f64 - ctx.f12.f64));
	// stfs f13,8(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// b 0x822c0abc
	goto loc_822C0ABC;
loc_822C0AAC:
	// stfs f10,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// stfs f10,4(r31)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// stfs f10,8(r31)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// stfs f10,12(r31)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
loc_822C0ABC:
	// lfs f13,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f13,f13
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f9,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f13,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f13
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f8,468(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 468);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f11,f9,f9,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f9.f64, ctx.f9.f64, ctx.f11.f64)));
	// fadds f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// fsqrts f11,f11
	ctx.f11.f64 = double(float(sqrt(ctx.f11.f64)));
	// fcmpu cr6,f11,f8
	ctx.cr6.compare(ctx.f11.f64, ctx.f8.f64);
	// bge cr6,0x822c0b60
	if (!ctx.cr6.lt) goto loc_822C0B60;
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// ble cr6,0x822c0b50
	if (!ctx.cr6.gt) goto loc_822C0B50;
	// lfs f11,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmr f7,f13
	ctx.f7.f64 = ctx.f13.f64;
	// fmuls f11,f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// lfs f8,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fmr f10,f9
	ctx.f10.f64 = ctx.f9.f64;
	// fmr f6,f9
	ctx.f6.f64 = ctx.f9.f64;
	// fmr f5,f8
	ctx.f5.f64 = ctx.f8.f64;
	// fmadds f11,f9,f9,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f9.f64, ctx.f9.f64, ctx.f11.f64)));
	// fadds f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// fsqrts f12,f12
	ctx.f12.f64 = double(float(sqrt(ctx.f12.f64)));
	// fdivs f12,f31,f12
	ctx.f12.f64 = double(float(f31.f64 / ctx.f12.f64));
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fmuls f11,f9,f12
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fmuls f12,f8,f12
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fsubs f13,f7,f13
	ctx.f13.f64 = double(float(ctx.f7.f64 - ctx.f13.f64));
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fsubs f13,f9,f11
	ctx.f13.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fsubs f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// b 0x822c0b60
	goto loc_822C0B60;
loc_822C0B50:
	// stfs f10,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f10,4(r11)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f10,8(r11)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f10,12(r11)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
loc_822C0B60:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_822D4468) {
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
	// bl 0x826a1c8c
	ctx.lr = 0x822D4470;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r18,r4
	r18.u64 = ctx.r4.u64;
	// ld r4,0(r3)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// ld r27,32(r3)
	r27.u64 = REX_LOAD_U64(ctx.r3.u32 + 32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// ld r28,24(r3)
	r28.u64 = REX_LOAD_U64(ctx.r3.u32 + 24);
	// mr r17,r5
	r17.u64 = ctx.r5.u64;
	// ld r30,16(r3)
	r30.u64 = REX_LOAD_U64(ctx.r3.u32 + 16);
	// mr r21,r6
	r21.u64 = ctx.r6.u64;
	// ld r29,8(r3)
	r29.u64 = REX_LOAD_U64(ctx.r3.u32 + 8);
	// mr r19,r7
	r19.u64 = ctx.r7.u64;
	// li r26,0
	r26.s64 = 0;
	// cmpldi cr6,r4,0
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, 0, ctx.xer);
	// beq cr6,0x822d44b8
	if (ctx.cr6.eq) goto loc_822D44B8;
	// addi r6,r3,1920
	ctx.r6.s64 = ctx.r3.s64 + 1920;
	// li r5,16384
	ctx.r5.s64 = 16384;
	// bl 0x822db9c8
	ctx.lr = 0x822D44B4;
	sub_822DB9C8(ctx, base);
	// std r26,0(r31)
	REX_STORE_U64(r31.u32 + 0, r26.u64);
loc_822D44B8:
	// cmpldi cr6,r29,0
	ctx.cr6.compare<uint64_t>(r29.u64, 0, ctx.xer);
	// beq cr6,0x822d44d8
	if (ctx.cr6.eq) goto loc_822D44D8;
	// addi r6,r31,6016
	ctx.r6.s64 = r31.s64 + 6016;
	// li r5,17408
	ctx.r5.s64 = 17408;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822db9c8
	ctx.lr = 0x822D44D4;
	sub_822DB9C8(ctx, base);
	// std r26,8(r31)
	REX_STORE_U64(r31.u32 + 8, r26.u64);
loc_822D44D8:
	// cmpldi cr6,r30,0
	ctx.cr6.compare<uint64_t>(r30.u64, 0, ctx.xer);
	// beq cr6,0x822d45b8
	if (ctx.cr6.eq) goto loc_822D45B8;
	// rlwinm r11,r30,0,11,14
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x1E0000;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x822d44fc
	if (ctx.cr6.eq) goto loc_822D44FC;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822dc7e8
	ctx.lr = 0x822D44F8;
	sub_822DC7E8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_822D44FC:
	// ld r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 40);
	// and r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 & r30.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x822d4520
	if (ctx.cr6.eq) goto loc_822D4520;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r5,10560(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 10560);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822db298
	ctx.lr = 0x822D451C;
	sub_822DB298(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_822D4520:
	// clrldi r11,r30,52
	ctx.r11.u64 = r30.u64 & 0xFFF;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x822d4540
	if (ctx.cr6.eq) goto loc_822D4540;
	// addi r6,r31,10548
	ctx.r6.s64 = r31.s64 + 10548;
	// li r5,8704
	ctx.r5.s64 = 8704;
	// rldicr r4,r30,52,11
	ctx.r4.u64 = __builtin_rotateleft64(r30.u64, 52) & 0xFFF0000000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822db630
	ctx.lr = 0x822D4540;
	sub_822DB630(ctx, base);
loc_822D4540:
	// rlwinm r11,r30,0,15,19
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x1F000;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x822d4560
	if (ctx.cr6.eq) goto loc_822D4560;
	// addi r6,r31,10528
	ctx.r6.s64 = r31.s64 + 10528;
	// li r5,8576
	ctx.r5.s64 = 8576;
	// rldicr r4,r30,47,4
	ctx.r4.u64 = __builtin_rotateleft64(r30.u64, 47) & 0xF800000000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822db630
	ctx.lr = 0x822D4560;
	sub_822DB630(ctx, base);
loc_822D4560:
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
	// beq cr6,0x822d458c
	if (ctx.cr6.eq) goto loc_822D458C;
	// addi r6,r31,10368
	ctx.r6.s64 = r31.s64 + 10368;
	// li r5,8192
	ctx.r5.s64 = 8192;
	// rldicr r4,r30,6,15
	ctx.r4.u64 = __builtin_rotateleft64(r30.u64, 6) & 0xFFFF000000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822db630
	ctx.lr = 0x822D458C;
	sub_822DB630(ctx, base);
loc_822D458C:
	// lis r12,-32
	ctx.r12.s64 = -2097152;
	// clrldi r12,r12,22
	ctx.r12.u64 = ctx.r12.u64 & 0x3FFFFFFFFFF;
	// and r11,r30,r12
	ctx.r11.u64 = r30.u64 & ctx.r12.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x822d45b4
	if (ctx.cr6.eq) goto loc_822D45B4;
	// addi r6,r31,10444
	ctx.r6.s64 = r31.s64 + 10444;
	// li r5,8448
	ctx.r5.s64 = 8448;
	// rldicr r4,r30,22,20
	ctx.r4.u64 = __builtin_rotateleft64(r30.u64, 22) & 0xFFFFF80000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822db630
	ctx.lr = 0x822D45B4;
	sub_822DB630(ctx, base);
loc_822D45B4:
	// std r26,16(r31)
	REX_STORE_U64(r31.u32 + 16, r26.u64);
loc_822D45B8:
	// cmpldi cr6,r28,0
	ctx.cr6.compare<uint64_t>(r28.u64, 0, ctx.xer);
	// beq cr6,0x822d4608
	if (ctx.cr6.eq) goto loc_822D4608;
	// clrldi r11,r28,32
	ctx.r11.u64 = r28.u64 & 0xFFFFFFFF;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x822d45d8
	if (ctx.cr6.eq) goto loc_822D45D8;
	// rldicr r4,r28,32,31
	ctx.r4.u64 = __builtin_rotateleft64(r28.u64, 32) & 0xFFFFFFFF00000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822db870
	ctx.lr = 0x822D45D8;
	sub_822DB870(ctx, base);
loc_822D45D8:
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
	// beq cr6,0x822d4604
	if (ctx.cr6.eq) goto loc_822D4604;
	// addi r6,r31,10596
	ctx.r6.s64 = r31.s64 + 10596;
	// li r5,8832
	ctx.r5.s64 = 8832;
	// rldicr r4,r28,9,20
	ctx.r4.u64 = __builtin_rotateleft64(r28.u64, 9) & 0xFFFFF80000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822db630
	ctx.lr = 0x822D4604;
	sub_822DB630(ctx, base);
loc_822D4604:
	// std r26,24(r31)
	REX_STORE_U64(r31.u32 + 24, r26.u64);
loc_822D4608:
	// cmpldi cr6,r27,0
	ctx.cr6.compare<uint64_t>(r27.u64, 0, ctx.xer);
	// beq cr6,0x822d46a4
	if (ctx.cr6.eq) goto loc_822D46A4;
	// clrldi r11,r27,26
	ctx.r11.u64 = r27.u64 & 0x3FFFFFFFFF;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x822d4630
	if (ctx.cr6.eq) goto loc_822D4630;
	// addi r6,r31,10680
	ctx.r6.s64 = r31.s64 + 10680;
	// li r5,8960
	ctx.r5.s64 = 8960;
	// rldicr r4,r27,26,37
	ctx.r4.u64 = __builtin_rotateleft64(r27.u64, 26) & 0xFFFFFFFFFC000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822db630
	ctx.lr = 0x822D4630;
	sub_822DB630(ctx, base);
loc_822D4630:
	// li r12,255
	ctx.r12.s64 = 255;
	// rldicr r12,r12,38,25
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 38) & 0xFFFFFFC000000000;
	// and r11,r27,r12
	ctx.r11.u64 = r27.u64 & ctx.r12.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x822d4658
	if (ctx.cr6.eq) goto loc_822D4658;
	// addi r6,r31,10832
	ctx.r6.s64 = r31.s64 + 10832;
	// li r5,9088
	ctx.r5.s64 = 9088;
	// rldicr r4,r27,18,7
	ctx.r4.u64 = __builtin_rotateleft64(r27.u64, 18) & 0xFF00000000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822db630
	ctx.lr = 0x822D4658;
	sub_822DB630(ctx, base);
loc_822D4658:
	// li r12,63
	ctx.r12.s64 = 63;
	// rldicr r12,r12,49,14
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 49) & 0xFFFE000000000000;
	// and r11,r27,r12
	ctx.r11.u64 = r27.u64 & ctx.r12.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x822d4678
	if (ctx.cr6.eq) goto loc_822D4678;
	// rldicr r4,r27,9,5
	ctx.r4.u64 = __builtin_rotateleft64(r27.u64, 9) & 0xFC00000000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822db6f0
	ctx.lr = 0x822D4678;
	sub_822DB6F0(ctx, base);
loc_822D4678:
	// li r12,1
	ctx.r12.s64 = 1;
	// rldicr r12,r12,56,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 56) & 0xFFFFFFFFFFFFFFFF;
	// and r11,r27,r12
	ctx.r11.u64 = r27.u64 & ctx.r12.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x822d46a0
	if (ctx.cr6.eq) goto loc_822D46A0;
	// addi r6,r31,10112
	ctx.r6.s64 = r31.s64 + 10112;
	// li r5,18688
	ctx.r5.s64 = 18688;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822db630
	ctx.lr = 0x822D46A0;
	sub_822DB630(ctx, base);
loc_822D46A0:
	// std r26,32(r31)
	REX_STORE_U64(r31.u32 + 32, r26.u64);
loc_822D46A4:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r24,12612(r31)
	r24.u64 = REX_LOAD_U32(r31.u32 + 12612);
	// addi r23,r31,12298
	r23.s64 = r31.s64 + 12298;
	// clrlwi r22,r18,26
	r22.u64 = r18.u32 & 0x3F;
	// addi r20,r11,-27368
	r20.s64 = ctx.r11.s64 + -27368;
loc_822D46B8:
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x822d46d0
	if (!ctx.cr6.gt) goto loc_822D46D0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d5b28
	ctx.lr = 0x822D46D0;
	sub_822D5B28(ctx, base);
loc_822D46D0:
	// li r11,8450
	ctx.r11.s64 = 8450;
	// mr r27,r19
	r27.u64 = r19.u64;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// cmplwi cr6,r19,65535
	ctx.cr6.compare<uint32_t>(r19.u32, 65535, ctx.xer);
	// stwu r17,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r17.u32);
	ctx.r3.u32 = ea;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// ble cr6,0x822d470c
	if (!ctx.cr6.gt) goto loc_822D470C;
	// rlwinm r11,r18,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// lwzx r11,r11,r20
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r20.u32);
	// divwu r10,r10,r11
	ctx.r10.u64 = uint32_t(ctx.r11.u32 ? ctx.r10.u32 / ctx.r11.u32 : 0);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// mullw r27,r10,r11
	r27.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
loc_822D470C:
	// lwz r10,24(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 24);
	// rlwinm r11,r21,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r8,12363(r31)
	ctx.r8.u64 = REX_LOAD_U8(r31.u32 + 12363);
	// rlwinm r7,r27,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 16) & 0xFFFF0000;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r6,0(r24)
	ctx.r6.u64 = REX_LOAD_U32(r24.u32 + 0);
	// addic r5,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r5.s64 = ctx.r8.s64 + -1;
	// rlwinm r9,r11,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// subfe r5,r5,r8
	temp.u8 = (~ctx.r5.u32 + ctx.r8.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r5.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lbzx r4,r23,r8
	ctx.r4.u64 = REX_LOAD_U8(r23.u32 + ctx.r8.u32);
	// addi r8,r9,512
	ctx.r8.s64 = ctx.r9.s64 + 512;
	// clrlwi r9,r11,3
	ctx.r9.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// rlwimi r4,r5,8,23,23
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0x100) | (ctx.r4.u64 & 0xFFFFFFFFFFFFFEFF);
	// rlwinm r11,r6,1,0,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xC0000000;
	// rlwinm r8,r8,0,19,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1000;
	// clrlwi r5,r27,8
	ctx.r5.u64 = r27.u32 & 0xFFFFFF;
	// rlwinm r6,r6,0,0,0
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x80000000;
	// andi. r26,r4,319
	r26.u64 = ctx.r4.u64 & 319;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// or r30,r7,r22
	r30.u64 = ctx.r7.u64 | r22.u64;
	// add r28,r8,r9
	r28.u64 = ctx.r8.u64 + ctx.r9.u64;
	// or r29,r5,r11
	r29.u64 = ctx.r5.u64 | ctx.r11.u64;
	// cmplwi r6,0
	ctx.cr0.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq 0x822d4790
	if (ctx.cr0.eq) goto loc_822D4790;
	// rlwinm r9,r21,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r27,1,8,30
	ctx.r8.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFE;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// or r29,r8,r11
	r29.u64 = ctx.r8.u64 | ctx.r11.u64;
	// rlwinm r9,r10,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r11,r9,512
	ctx.r11.s64 = ctx.r9.s64 + 512;
	// ori r30,r30,2048
	r30.u64 = r30.u64 | 2048;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// add r28,r11,r10
	r28.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_822D4790:
	// lbz r11,10940(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 10940);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822d47c0
	if (!ctx.cr0.eq) goto loc_822D47C0;
	// lis r11,-16381
	ctx.r11.s64 = -1073545216;
	// ori r11,r11,8705
	ctx.r11.u64 = ctx.r11.u64 | 8705;
	// stwu r11,4(r25)
	ea = 4 + r25.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	r25.u32 = ea;
	// stwu r26,4(r25)
	ea = 4 + r25.u32;
	REX_STORE_U32(ea, r26.u32);
	r25.u32 = ea;
	// stwu r30,4(r25)
	ea = 4 + r25.u32;
	REX_STORE_U32(ea, r30.u32);
	r25.u32 = ea;
	// stwu r28,4(r25)
	ea = 4 + r25.u32;
	REX_STORE_U32(ea, r28.u32);
	r25.u32 = ea;
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// stwu r29,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r29.u32);
	ctx.r11.u32 = ea;
	// b 0x822d4884
	goto loc_822D4884;
loc_822D47C0:
	// lwz r11,13436(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 13436);
	// addi r3,r31,13424
	ctx.r3.s64 = r31.s64 + 13424;
	// lwz r10,13440(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 13440);
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x822d47e0
	if (!ctx.cr6.gt) goto loc_822D47E0;
	// bl 0x822d4978
	ctx.lr = 0x822D47DC;
	sub_822D4978(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_822D47E0:
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// stw r25,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r25.u32);
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// ori r9,r9,24576
	ctx.r9.u64 = ctx.r9.u64 | 24576;
	// stw r8,13436(r31)
	REX_STORE_U32(r31.u32 + 13436, ctx.r8.u32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// lis r5,-16383
	ctx.r5.s64 = -1073676288;
	// lis r9,-16381
	ctx.r9.s64 = -1073545216;
	// lis r7,-16384
	ctx.r7.s64 = -1073741824;
	// ori r9,r9,8705
	ctx.r9.u64 = ctx.r9.u64 | 8705;
	// ori r7,r7,24576
	ctx.r7.u64 = ctx.r7.u64 | 24576;
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// ori r8,r5,23041
	ctx.r8.u64 = ctx.r5.u64 | 23041;
	// lis r6,-32768
	ctx.r6.s64 = -2147483648;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r4,26
	ctx.r4.s64 = 26;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// rlwinm r11,r11,0,3,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1FFFFFFE;
	// stwu r9,4(r5)
	ea = 4 + ctx.r5.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r5.u32 = ea;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwu r26,4(r5)
	ea = 4 + ctx.r5.u32;
	REX_STORE_U32(ea, r26.u32);
	ctx.r5.u32 = ea;
	// ori r10,r9,17921
	ctx.r10.u64 = ctx.r9.u64 | 17921;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// li r9,25
	ctx.r9.s64 = 25;
	// stwu r30,4(r5)
	ea = 4 + ctx.r5.u32;
	REX_STORE_U32(ea, r30.u32);
	ctx.r5.u32 = ea;
	// stwu r28,4(r5)
	ea = 4 + ctx.r5.u32;
	REX_STORE_U32(ea, r28.u32);
	ctx.r5.u32 = ea;
	// stwu r29,4(r5)
	ea = 4 + ctx.r5.u32;
	REX_STORE_U32(ea, r29.u32);
	ctx.r5.u32 = ea;
	// stwu r7,4(r5)
	ea = 4 + ctx.r5.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r5.u32 = ea;
	// stwu r6,4(r5)
	ea = 4 + ctx.r5.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r5.u32 = ea;
	// stwu r8,4(r5)
	ea = 4 + ctx.r5.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r5.u32 = ea;
	// stwu r4,4(r5)
	ea = 4 + ctx.r5.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r5.u32 = ea;
	// stwu r11,4(r5)
	ea = 4 + ctx.r5.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r5.u32 = ea;
	// stwu r10,4(r5)
	ea = 4 + ctx.r5.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r5.u32 = ea;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
loc_822D4884:
	// subf. r10,r27,r19
	ctx.r10.u64 = r19.u64 - r27.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// beq 0x822d48ac
	if (ctx.cr0.eq) goto loc_822D48AC;
	// addi r9,r20,4
	ctx.r9.s64 = r20.s64 + 4;
	// rlwinm r11,r18,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// subf r9,r11,r27
	ctx.r9.u64 = r27.u64 - ctx.r11.u64;
	// add r19,r11,r10
	r19.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r21,r9,r21
	r21.u64 = ctx.r9.u64 + r21.u64;
	// b 0x822d46b8
	goto loc_822D46B8;
loc_822D48AC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1cdc
	return;
}

DEFINE_REX_FUNC(sub_822F3E30) {
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
	ctx.lr = 0x822F3E38;
	// std r7,48(r1)
	REX_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	REX_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	REX_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	REX_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
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
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bl 0x822f3938
	ctx.lr = 0x822F3E60;
	sub_822F3938(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,19228
	ctx.r4.s64 = ctx.r11.s64 + 19228;
	// bl 0x822f3d00
	ctx.lr = 0x822F3E70;
	sub_822F3D00(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,19284
	ctx.r4.s64 = ctx.r11.s64 + 19284;
	// bl 0x822f3c00
	ctx.lr = 0x822F3E80;
	sub_822F3C00(ctx, base);
	// clrlwi. r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq 0x822f3ea0
	if (ctx.cr0.eq) goto loc_822F3EA0;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,19288
	ctx.r4.s64 = ctx.r11.s64 + 19288;
	// bl 0x822f3c00
	ctx.lr = 0x822F3E9C;
	sub_822F3C00(ctx, base);
	// b 0x822f3ec4
	goto loc_822F3EC4;
loc_822F3EA0:
	// srawi r11,r30,1
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x1) != 0);
	ctx.r11.s64 = r30.s32 >> 1;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r9,r30,1
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x1) != 0);
	ctx.r9.s64 = r30.s32 >> 1;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r4,r10,19296
	ctx.r4.s64 = ctx.r10.s64 + 19296;
	// addze r5,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r5.s64 = temp.s64;
	// subf r6,r11,r30
	ctx.r6.u64 = r30.u64 - ctx.r11.u64;
	// bl 0x822f3c00
	ctx.lr = 0x822F3EC4;
	sub_822F3C00(ctx, base);
loc_822F3EC4:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,19304
	ctx.r4.s64 = ctx.r11.s64 + 19304;
	// bl 0x822f3c00
	ctx.lr = 0x822F3ED4;
	sub_822F3C00(ctx, base);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r5,112(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x822f3b00
	ctx.lr = 0x822F3EF0;
	sub_822F3B00(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,19212
	ctx.r4.s64 = ctx.r11.s64 + 19212;
	// bl 0x822f3d00
	ctx.lr = 0x822F3F00;
	sub_822F3D00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822f3938
	ctx.lr = 0x822F3F08;
	sub_822F3938(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_822F79D0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x822f7a04
	if (ctx.cr6.lt) goto loc_822F7A04;
	// lwz r11,168(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 168);
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x822f7a04
	if (!ctx.cr6.lt) goto loc_822F7A04;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// slw r10,r10,r4
	ctx.r10.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r4.u8 & 0x3F));
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
loc_822F7A04:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822FA528) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,156(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 156);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,152(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 152);
	f31.f64 = double(temp.f32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f30,3716(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	f30.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// beq cr6,0x822fa59c
	if (ctx.cr6.eq) goto loc_822FA59C;
	// bl 0x826a1b88
	ctx.lr = 0x822FA560;
	sub_826A1B88(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,156(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 156);
	ctx.f12.f64 = double(temp.f32);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// frsp f11,f0
	ctx.f11.f64 = double(float(ctx.f0.f64));
	// lfs f0,3704(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3704);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,3816(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3816);
	ctx.f13.f64 = double(temp.f32);
	// fadds f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fmsubs f2,f11,f13,f0
	ctx.f2.f64 = double(float(std::fma(ctx.f11.f64, ctx.f13.f64, -ctx.f0.f64)));
	// bl 0x8269f778
	ctx.lr = 0x822FA594;
	sub_8269F778(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmuls f31,f0,f31
	f31.f64 = double(float(ctx.f0.f64 * f31.f64));
loc_822FA59C:
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f31.f64, f30.f64);
	// bgt cr6,0x822fa5a8
	if (ctx.cr6.gt) goto loc_822FA5A8;
	// fmr f31,f30
	f31.f64 = f30.f64;
loc_822FA5A8:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

DEFINE_REX_FUNC(sub_822FDD20) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x822FDD28;
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// bl 0x823306a0
	ctx.lr = 0x822FDD44;
	sub_823306A0(ctx, base);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r3,88(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x822fbbf8
	ctx.lr = 0x822FDD50;
	sub_822FBBF8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822fdde0
	if (!ctx.cr0.eq) goto loc_822FDDE0;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(r29.s32, 2, ctx.xer);
	// bne cr6,0x822fddb8
	if (!ctx.cr6.eq) goto loc_822FDDB8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82330688
	ctx.lr = 0x822FDD6C;
	sub_82330688(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82330658
	ctx.lr = 0x822FDD7C;
	sub_82330658(ctx, base);
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// lwz r4,96(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// li r6,256
	ctx.r6.s64 = 256;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// bl 0x82330670
	ctx.lr = 0x822FDD98;
	sub_82330670(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,116(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822fdde0
	if (ctx.cr6.eq) goto loc_822FDDE0;
	// lwz r6,92(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x822fdddc
	goto loc_822FDDDC;
loc_822FDDB8:
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(r29.s32, 3, ctx.xer);
	// bne cr6,0x822fdde0
	if (!ctx.cr6.eq) goto loc_822FDDE0;
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,116(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822fdde0
	if (ctx.cr6.eq) goto loc_822FDDE0;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,11
	ctx.r4.s64 = 11;
loc_822FDDDC:
	// bl 0x822f7c10
	ctx.lr = 0x822FDDE0;
	sub_822F7C10(ctx, base);
loc_822FDDE0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82301648) {
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
	// beq cr6,0x82301684
	if (ctx.cr6.eq) goto loc_82301684;
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x8232f388
	ctx.lr = 0x82301670;
	sub_8232F388(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r10,1184(r11)
	REX_STORE_U32(ctx.r11.u32 + 1184, ctx.r10.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// stw r10,1188(r11)
	REX_STORE_U32(ctx.r11.u32 + 1188, ctx.r10.u32);
loc_82301684:
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

DEFINE_REX_FUNC(sub_82303448) {
	REX_FUNC_PROLOGUE();
	// lwz r11,148(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 148);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8230345c
	if (!ctx.cr6.eq) goto loc_8230345C;
	// li r3,31
	ctx.r3.s64 = 31;
	// blr 
	return;
loc_8230345C:
	// lwz r3,20(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// b 0x8232f688
	sub_8232F688(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82304328) {
	REX_FUNC_PROLOGUE();
	// lwz r11,148(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 148);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8230433c
	if (!ctx.cr6.eq) goto loc_8230433C;
	// li r3,31
	ctx.r3.s64 = 31;
	// blr 
	return;
loc_8230433C:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823043a8
	if (ctx.cr6.eq) goto loc_823043A8;
	// lwz r10,124(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 124);
	// addi r11,r3,124
	ctx.r11.s64 = ctx.r3.s64 + 124;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x823043a8
	if (ctx.cr6.eq) goto loc_823043A8;
loc_82304358:
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82304358
	if (!ctx.cr6.eq) goto loc_82304358;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x823043a8
	if (ctx.cr6.eq) goto loc_823043A8;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x823043a0
	goto loc_823043A0;
loc_82304380:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r9,r10,-4
	ctx.r9.s64 = ctx.r10.s64 + -4;
	// bne cr6,0x82304390
	if (!ctx.cr6.eq) goto loc_82304390;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82304390:
	// lwz r9,120(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 120);
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x823043b0
	if (ctx.cr6.eq) goto loc_823043B0;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
loc_823043A0:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82304380
	if (!ctx.cr6.eq) goto loc_82304380;
loc_823043A8:
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_823043B0:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r11,r10,-4
	ctx.r11.s64 = ctx.r10.s64 + -4;
	// bne cr6,0x823043c0
	if (!ctx.cr6.eq) goto loc_823043C0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823043C0:
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8230C038) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8230C040;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,17(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 17);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8230c064
	if (ctx.cr0.eq) goto loc_8230C064;
	// clrlwi. r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8230c064
	if (!ctx.cr0.eq) goto loc_8230C064;
	// li r3,33
	ctx.r3.s64 = 33;
	// b 0x8230c1ac
	goto loc_8230C1AC;
loc_8230C064:
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8230c15c
	if (ctx.cr6.eq) goto loc_8230C15C;
	// clrlwi. r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8230c13c
	if (!ctx.cr0.eq) goto loc_8230C13C;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x8233f898
	ctx.lr = 0x8230C090;
	sub_8233F898(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8230c1ac
	if (!ctx.cr0.eq) goto loc_8230C1AC;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230c0ac
	if (ctx.cr6.eq) goto loc_8230C0AC;
loc_8230C0A4:
	// li r3,56
	ctx.r3.s64 = 56;
	// b 0x8230c1ac
	goto loc_8230C1AC;
loc_8230C0AC:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8230C0C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8230c13c
	if (ctx.cr0.eq) goto loc_8230C13C;
	// lwz r11,140(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 140);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230c0e0
	if (ctx.cr6.eq) goto loc_8230C0E0;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// b 0x8230c0f8
	goto loc_8230C0F8;
loc_8230C0E0:
	// lwz r11,136(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 136);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230c0f8
	if (ctx.cr6.eq) goto loc_8230C0F8;
	// lwz r9,156(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 156);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r9,r11
	r30.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
loc_8230C0F8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8230c13c
	if (ctx.cr6.eq) goto loc_8230C13C;
	// lwz r11,288(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 288);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm. r11,r11,19,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8230c128
	if (ctx.cr0.eq) goto loc_8230C128;
	// lwz r11,64(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 64);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8230c128
	if (!ctx.cr0.eq) goto loc_8230C128;
	// lwz r11,64(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 64);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8230c0a4
	if (ctx.cr0.eq) goto loc_8230C0A4;
loc_8230C128:
	// lwz r11,68(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 68);
	// lwz r11,256(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 256);
	// lwz r11,392(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 392);
	// rlwinm. r11,r11,28,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8230c0a4
	if (!ctx.cr0.eq) goto loc_8230C0A4;
loc_8230C13C:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r29,24(r31)
	REX_STORE_U32(r31.u32 + 24, r29.u32);
	// bne 0x8230c15c
	if (!ctx.cr0.eq) goto loc_8230C15C;
	// bl 0x8232fc60
	ctx.lr = 0x8230C154;
	sub_8232FC60(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8230c1ac
	if (!ctx.cr0.eq) goto loc_8230C1AC;
loc_8230C15C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r31,4
	ctx.r11.s64 = r31.s64 + 4;
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lis r8,-32129
	ctx.r8.s64 = -2105606144;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r6,5068
	ctx.r5.s64 = ctx.r6.s64 + 5068;
	// li r6,143
	ctx.r6.s64 = 143;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// stw r29,12(r31)
	REX_STORE_U32(r31.u32 + 12, r29.u32);
	// lwz r11,1012(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 1012);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x8230C1A8;
	sub_82330D00(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8230C1AC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82314B20) {
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
	// beq cr6,0x82314b68
	if (ctx.cr6.eq) goto loc_82314B68;
	// lbz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82314b90
	if (!ctx.cr0.eq) goto loc_82314B90;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,92(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82314B58;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82314b94
	if (!ctx.cr0.eq) goto loc_82314B94;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82314b8c
	goto loc_82314B8C;
loc_82314B68:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,92(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82314B80;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82314b94
	if (!ctx.cr0.eq) goto loc_82314B94;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82314B8C:
	// stb r11,4(r31)
	REX_STORE_U8(r31.u32 + 4, ctx.r11.u8);
loc_82314B90:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82314B94:
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

DEFINE_REX_FUNC(sub_82317728) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82317DA8) {
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
	ctx.lr = 0x82317DB0;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82340718
	ctx.lr = 0x82317DD8;
	sub_82340718(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82317f10
	if (!ctx.cr0.eq) goto loc_82317F10;
	// lis r30,-32129
	r30.s64 = -2105606144;
	// lhz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r31,r11,6576
	r31.s64 = ctx.r11.s64 + 6576;
	// li r6,127
	ctx.r6.s64 = 127;
	// lwz r11,1012(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 1012);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// rotlwi r4,r10,3
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x82317E0C;
	sub_82330E40(ctx, base);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// bne 0x82317e1c
	if (!ctx.cr0.eq) goto loc_82317E1C;
loc_82317E14:
	// li r3,44
	ctx.r3.s64 = 44;
	// b 0x82317f10
	goto loc_82317F10;
loc_82317E1C:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82340718
	ctx.lr = 0x82317E34;
	sub_82340718(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82317f10
	if (!ctx.cr0.eq) goto loc_82317F10;
	// lwz r11,1012(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 1012);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lhz r4,82(r1)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// li r6,136
	ctx.r6.s64 = 136;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x82317E58;
	sub_82330E40(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x82317e14
	if (ctx.cr0.eq) goto loc_82317E14;
	// lhz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// li r30,0
	r30.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82317ea8
	if (ctx.cr0.eq) goto loc_82317EA8;
	// addi r31,r27,4
	r31.s64 = r27.s64 + 4;
loc_82317E74:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82340718
	ctx.lr = 0x82317E8C;
	sub_82340718(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82317f10
	if (!ctx.cr0.eq) goto loc_82317F10;
	// lhz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82317e74
	if (ctx.cr6.lt) goto loc_82317E74;
loc_82317EA8:
	// li r7,0
	ctx.r7.s64 = 0;
	// lhz r6,82(r1)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82340718
	ctx.lr = 0x82317EC0;
	sub_82340718(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82317f10
	if (!ctx.cr0.eq) goto loc_82317F10;
	// lhz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82317f04
	if (!ctx.cr0.gt) goto loc_82317F04;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
loc_82317EDC:
	// stw r28,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r28.u32);
loc_82317EE0:
	// lbz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 0);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82317ee0
	if (!ctx.cr0.eq) goto loc_82317EE0;
	// lhz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82317edc
	if (ctx.cr6.lt) goto loc_82317EDC;
loc_82317F04:
	// stw r27,0(r26)
	REX_STORE_U32(r26.u32 + 0, r27.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r11.u32);
loc_82317F10:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_82324440) {
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
	ctx.lr = 0x82324448;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r11,172(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82324468
	if (ctx.cr6.eq) goto loc_82324468;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8232446c
	goto loc_8232446C;
loc_82324468:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8232446C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82324494
	if (ctx.cr6.eq) goto loc_82324494;
	// lwz r11,172(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82324488
	if (ctx.cr6.eq) goto loc_82324488;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8232448c
	goto loc_8232448C;
loc_82324488:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8232448C:
	// lwz r11,312(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 312);
	// b 0x82324498
	goto loc_82324498;
loc_82324494:
	// lwz r11,312(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 312);
loc_82324498:
	// lwz r10,64(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 64);
	// rlwinm. r10,r10,0,5,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82324510
	if (ctx.cr0.eq) goto loc_82324510;
	// addi r9,r11,24
	ctx.r9.s64 = ctx.r11.s64 + 24;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r8,24(r27)
	ctx.r8.u64 = REX_LOAD_U32(r27.u32 + 24);
	// b 0x82324508
	goto loc_82324508;
loc_823244B4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r7,r11,-4
	ctx.r7.s64 = ctx.r11.s64 + -4;
	// bne cr6,0x823244c4
	if (!ctx.cr6.eq) goto loc_823244C4;
	// li r7,0
	ctx.r7.s64 = 0;
loc_823244C4:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// addi r10,r8,-4
	ctx.r10.s64 = ctx.r8.s64 + -4;
	// bne cr6,0x823244d4
	if (!ctx.cr6.eq) goto loc_823244D4;
	// li r10,0
	ctx.r10.s64 = 0;
loc_823244D4:
	// lwz r7,20(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 20);
	// lwz r7,40(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 40);
	// rlwinm r7,r7,0,26,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x30;
	// cmplwi cr6,r7,16
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 16, ctx.xer);
	// bne cr6,0x82324500
	if (!ctx.cr6.eq) goto loc_82324500;
	// lwz r7,4(r27)
	ctx.r7.u64 = REX_LOAD_U32(r27.u32 + 4);
	// lfs f0,216(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 216);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 48, temp.u32);
	// lwz r10,96(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 96);
	// oris r10,r10,1024
	ctx.r10.u64 = ctx.r10.u64 | 67108864;
	// stw r10,96(r7)
	REX_STORE_U32(ctx.r7.u32 + 96, ctx.r10.u32);
loc_82324500:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,0(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
loc_82324508:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x823244b4
	if (!ctx.cr6.eq) goto loc_823244B4;
loc_82324510:
	// lwz r29,12(r27)
	r29.u64 = REX_LOAD_U32(r27.u32 + 12);
	// addi r28,r27,12
	r28.s64 = r27.s64 + 12;
	// b 0x82324578
	goto loc_82324578;
loc_8232451C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// addi r11,r29,-4
	ctx.r11.s64 = r29.s64 + -4;
	// bne cr6,0x8232452c
	if (!ctx.cr6.eq) goto loc_8232452C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8232452C:
	// lwz r31,52(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// addi r30,r11,52
	r30.s64 = ctx.r11.s64 + 52;
	// b 0x8232456c
	goto loc_8232456C;
loc_82324538:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// addi r3,r31,-4
	ctx.r3.s64 = r31.s64 + -4;
	// bne cr6,0x82324548
	if (!ctx.cr6.eq) goto loc_82324548;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82324548:
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// lfs f2,216(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 216);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,212(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 212);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82312540
	ctx.lr = 0x82324558;
	sub_82312540(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82324568
	if (ctx.cr0.eq) goto loc_82324568;
	// cmpwi cr6,r3,36
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 36, ctx.xer);
	// bne cr6,0x82324584
	if (!ctx.cr6.eq) goto loc_82324584;
loc_82324568:
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_8232456C:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// bne cr6,0x82324538
	if (!ctx.cr6.eq) goto loc_82324538;
	// lwz r29,0(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 0);
loc_82324578:
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(r29.u32, r28.u32, ctx.xer);
	// bne cr6,0x8232451c
	if (!ctx.cr6.eq) goto loc_8232451C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82324584:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8232D738) {
	REX_FUNC_PROLOGUE();
	// lbz r3,49(r3)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r3.u32 + 49);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8232DAC0) {
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
	ctx.lr = 0x8232DAC8;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// rlwinm r30,r11,2,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r26,0
	r26.s64 = 0;
	// lwzx r11,r30,r3
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232daf4
	if (ctx.cr6.eq) goto loc_8232DAF4;
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// b 0x8232daf8
	goto loc_8232DAF8;
loc_8232DAF4:
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
loc_8232DAF8:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8232dd58
	if (!ctx.cr6.eq) goto loc_8232DD58;
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232DB14;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// beq 0x8232db38
	if (ctx.cr0.eq) goto loc_8232DB38;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232DB30;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// std r3,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// b 0x8232db50
	goto loc_8232DB50;
loc_8232DB38:
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232DB48;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8232dd60
	if (!ctx.cr0.eq) goto loc_8232DD60;
loc_8232DB50:
	// lwzx r3,r30,r31
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8232db68
	if (ctx.cr6.eq) goto loc_8232DB68;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x82315f88
	ctx.lr = 0x8232DB64;
	sub_82315F88(ctx, base);
	// b 0x8232db70
	goto loc_8232DB70;
loc_8232DB68:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// std r26,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, r26.u64);
loc_8232DB70:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8232dd60
	if (!ctx.cr6.eq) goto loc_8232DD60;
	// lwzx r3,r30,r31
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8232db94
	if (ctx.cr6.eq) goto loc_8232DB94;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// ld r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82315f40
	ctx.lr = 0x8232DB90;
	sub_82315F40(ctx, base);
	// b 0x8232db9c
	goto loc_8232DB9C;
loc_8232DB94:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// std r26,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, r26.u64);
loc_8232DB9C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8232dd60
	if (!ctx.cr6.eq) goto loc_8232DD60;
	// clrldi r11,r29,32
	ctx.r11.u64 = r29.u64 & 0xFFFFFFFF;
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,4104(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4104);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232DBD8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// ld r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpld cr6,r3,r11
	ctx.cr6.compare<uint64_t>(ctx.r3.u64, ctx.r11.u64, ctx.xer);
	// blt cr6,0x8232dbec
	if (ctx.cr6.lt) goto loc_8232DBEC;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_8232DBEC:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// ld r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// subf r27,r10,r3
	r27.u64 = ctx.r3.u64 - ctx.r10.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,20(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232DC0C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8232dcc8
	if (ctx.cr0.eq) goto loc_8232DCC8;
	// mr r28,r26
	r28.u64 = r26.u64;
	// ble cr6,0x8232dd5c
	if (!ctx.cr6.gt) goto loc_8232DD5C;
loc_8232DC24:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// add. r11,r28,r11
	ctx.r11.u64 = r28.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// bge 0x8232dc48
	if (!ctx.cr0.lt) goto loc_8232DC48;
	// subfic r10,r10,1
	ctx.xer.ca = ctx.r10.u32 <= 1;
	ctx.r10.u64 = static_cast<uint64_t>(1) - ctx.r10.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r29,r10,r11
	r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8232dc50
	goto loc_8232DC50;
loc_8232DC48:
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r29,r10,r11
	r29.u64 = ctx.r11.u64 - ctx.r10.u64;
loc_8232DC50:
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232DC64;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,24(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232DC80;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232dca8
	if (ctx.cr6.eq) goto loc_8232DCA8;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82316098
	ctx.lr = 0x8232DCA4;
	sub_82316098(ctx, base);
	// b 0x8232dcac
	goto loc_8232DCAC;
loc_8232DCA8:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
loc_8232DCAC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8232dd60
	if (!ctx.cr6.eq) goto loc_8232DD60;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8232dc24
	if (ctx.cr6.lt) goto loc_8232DC24;
	// b 0x8232dd5c
	goto loc_8232DD5C;
loc_8232DCC8:
	// mr r29,r26
	r29.u64 = r26.u64;
	// ble cr6,0x8232dd5c
	if (!ctx.cr6.gt) goto loc_8232DD5C;
loc_8232DCD0:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// add. r11,r29,r11
	ctx.r11.u64 = r29.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// bge 0x8232dcf4
	if (!ctx.cr0.lt) goto loc_8232DCF4;
	// subfic r10,r10,1
	ctx.xer.ca = ctx.r10.u32 <= 1;
	ctx.r10.u64 = static_cast<uint64_t>(1) - ctx.r10.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8232dcfc
	goto loc_8232DCFC;
loc_8232DCF4:
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r30,r10,r11
	r30.u64 = ctx.r11.u64 - ctx.r10.u64;
loc_8232DCFC:
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232DD10;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// ld r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// clrldi r10,r3,32
	ctx.r10.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// add r6,r10,r5
	ctx.r6.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lwzx r3,r11,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8232dd38
	if (ctx.cr6.eq) goto loc_8232DD38;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82316098
	ctx.lr = 0x8232DD34;
	sub_82316098(ctx, base);
	// b 0x8232dd3c
	goto loc_8232DD3C;
loc_8232DD38:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
loc_8232DD3C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8232dd60
	if (!ctx.cr6.eq) goto loc_8232DD60;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8232dcd0
	if (ctx.cr6.lt) goto loc_8232DCD0;
	// b 0x8232dd5c
	goto loc_8232DD5C;
loc_8232DD58:
	// stw r29,24(r31)
	REX_STORE_U32(r31.u32 + 24, r29.u32);
loc_8232DD5C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8232DD60:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8234AB98) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lwz r6,68(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 68);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8234abb0
	if (!ctx.cr6.eq) goto loc_8234ABB0;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_8234ABB0:
	// lwz r5,28(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,24(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// addi r10,r3,24
	ctx.r10.s64 = ctx.r3.s64 + 24;
	// li r8,-1
	ctx.r8.s64 = -1;
	// addi r9,r3,40
	ctx.r9.s64 = ctx.r3.s64 + 40;
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// addic. r31,r6,736
	ctx.xer.ca = ctx.r6.u32 > 4294966559;
	r31.s64 = ctx.r6.s64 + 736;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// stw r4,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r4.u32);
	// lwz r5,24(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r4,28(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// stw r4,4(r5)
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r4.u32);
	// stw r10,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// stw r10,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// stw r8,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r8.u32);
	// stw r7,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r7.u32);
	// lwz r10,44(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r5,40(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// stw r5,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
	// lwz r4,40(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r10,44(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// stw r10,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// stw r9,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r9.u32);
	// stw r9,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r9.u32);
	// stw r8,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r8.u32);
	// stw r7,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r7.u32);
	// lwz r9,12(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r8,8(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// stw r8,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lwz r5,8(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r4,12(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// stw r4,4(r5)
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r4.u32);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r7,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// beq 0x8234ac44
	if (ctx.cr0.eq) goto loc_8234AC44;
	// addi r7,r6,744
	ctx.r7.s64 = ctx.r6.s64 + 744;
loc_8234AC44:
	// lwz r10,0(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r7,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r11,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8234F118) {
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
	ctx.lr = 0x8234F120;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,76(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// li r28,0
	r28.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addic. r11,r4,44
	ctx.xer.ca = ctx.r4.u32 > 4294967251;
	ctx.r11.s64 = ctx.r4.s64 + 44;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r29,r4,20
	r29.s64 = ctx.r4.s64 + 20;
	// stw r10,16(r4)
	REX_STORE_U32(ctx.r4.u32 + 16, ctx.r10.u32);
	// addi r27,r4,24
	r27.s64 = ctx.r4.s64 + 24;
	// lwz r9,284(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 284);
	// stw r9,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// stw r28,20(r4)
	REX_STORE_U32(ctx.r4.u32 + 20, r28.u32);
	// stw r28,24(r4)
	REX_STORE_U32(ctx.r4.u32 + 24, r28.u32);
	// beq 0x8234f16c
	if (ctx.cr0.eq) goto loc_8234F16C;
	// lwz r10,76(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8234f16c
	if (ctx.cr6.eq) goto loc_8234F16C;
	// lwz r10,32(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8234F16C:
	// addic. r4,r30,4
	ctx.xer.ca = r30.u32 > 4294967291;
	ctx.r4.s64 = r30.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x8234f198
	if (ctx.cr0.eq) goto loc_8234F198;
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234f198
	if (ctx.cr6.eq) goto loc_8234F198;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,92(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8234F198;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8234F198:
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// addi r9,r30,12
	ctx.r9.s64 = r30.s64 + 12;
	// addi r10,r30,8
	ctx.r10.s64 = r30.s64 + 8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234f1e8
	if (ctx.cr6.eq) goto loc_8234F1E8;
	// lwz r8,24(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8234f1e8
	if (ctx.cr6.eq) goto loc_8234F1E8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8234f1c8
	if (ctx.cr6.eq) goto loc_8234F1C8;
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_8234F1C8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8234f1e8
	if (ctx.cr6.eq) goto loc_8234F1E8;
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// lwz r10,60(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// stw r10,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_8234F1E8:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8234f218
	if (ctx.cr6.eq) goto loc_8234F218;
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234f214
	if (ctx.cr6.eq) goto loc_8234F214;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234f214
	if (ctx.cr6.eq) goto loc_8234F214;
	// lwz r11,168(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 168);
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// b 0x8234f218
	goto loc_8234F218;
loc_8234F214:
	// stw r28,0(r29)
	REX_STORE_U32(r29.u32 + 0, r28.u32);
loc_8234F218:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8234f248
	if (!ctx.cr6.eq) goto loc_8234F248;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8234f248
	if (ctx.cr6.eq) goto loc_8234F248;
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8234f240
	if (!ctx.cr6.eq) goto loc_8234F240;
	// stw r28,0(r27)
	REX_STORE_U32(r27.u32 + 0, r28.u32);
	// b 0x8234f248
	goto loc_8234F248;
loc_8234F240:
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
loc_8234F248:
	// addic. r10,r30,28
	ctx.xer.ca = r30.u32 > 4294967267;
	ctx.r10.s64 = r30.s64 + 28;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8234f264
	if (ctx.cr0.eq) goto loc_8234F264;
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234f264
	if (ctx.cr6.eq) goto loc_8234F264;
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_8234F264:
	// addic. r11,r30,32
	ctx.xer.ca = r30.u32 > 4294967263;
	ctx.r11.s64 = r30.s64 + 32;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8234f278
	if (ctx.cr0.eq) goto loc_8234F278;
	// lwz r10,84(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 84);
	// rlwinm r9,r10,31,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	// stb r9,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
loc_8234F278:
	// addi r4,r30,33
	ctx.r4.s64 = r30.s64 + 33;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8234bb28
	ctx.lr = 0x8234F284;
	sub_8234BB28(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82358020) {
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
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,21920(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 21920);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82358050
	if (!ctx.cr6.eq) goto loc_82358050;
	// li r3,36
	ctx.r3.s64 = 36;
	// b 0x8235816c
	goto loc_8235816C;
loc_82358050:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82358164
	if (ctx.cr6.eq) goto loc_82358164;
	// lwz r10,36(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 36);
	// addi r5,r30,36
	ctx.r5.s64 = r30.s64 + 36;
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x823580e8
	if (ctx.cr6.eq) goto loc_823580E8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f0,3704(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	ctx.f0.f64 = double(temp.f32);
loc_82358078:
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,40
	ctx.r9.s64 = ctx.r11.s64 + 40;
	// cmplw cr6,r8,r5
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, ctx.xer);
	// lwz r4,44(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r3,40(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// stw r3,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r3.u32);
	// lwz r4,40(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r3,44(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// stw r3,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r3.u32);
	// stw r9,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r9.u32);
	// stw r9,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r9.u32);
	// stw r6,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r6.u32);
	// stw r7,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r7.u32);
	// stfs f0,128(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 128, temp.u32);
	// stfs f0,132(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 132, temp.u32);
	// stw r7,100(r11)
	REX_STORE_U32(ctx.r11.u32 + 100, ctx.r7.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r4,0(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r3,4(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r3,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r3.u32);
	// stw r10,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// stw r10,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r10.u32);
	// stw r7,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// bne cr6,0x82358078
	if (!ctx.cr6.eq) goto loc_82358078;
loc_823580E8:
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 24);
	// addi r31,r30,24
	r31.s64 = r30.s64 + 24;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// beq cr6,0x82358120
	if (ctx.cr6.eq) goto loc_82358120;
loc_823580F8:
	// lwz r3,8(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,21920(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 21920);
	// lwz r9,124(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 124);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82358114;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bne cr6,0x823580f8
	if (!ctx.cr6.eq) goto loc_823580F8;
loc_82358120:
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// addi r11,r11,1160
	ctx.r11.s64 = ctx.r11.s64 + 1160;
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82358164
	if (ctx.cr6.eq) goto loc_82358164;
loc_82358134:
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r11,100(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82358150
	if (!ctx.cr6.eq) goto loc_82358150;
	// li r5,1
	ctx.r5.s64 = 1;
	// lfs f1,176(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 176);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8234bbc8
	ctx.lr = 0x82358150;
	sub_8234BBC8(ctx, base);
loc_82358150:
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,1160
	ctx.r11.s64 = ctx.r11.s64 + 1160;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82358134
	if (!ctx.cr6.eq) goto loc_82358134;
loc_82358164:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82357e70
	ctx.lr = 0x8235816C;
	sub_82357E70(ctx, base);
loc_8235816C:
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

DEFINE_REX_FUNC(sub_82362510) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x82362520
	if (!ctx.cr6.eq) goto loc_82362520;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82362520:
	// b 0x82361668
	sub_82361668(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823629D0) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,24(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,3716(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82362a00
	if (ctx.cr6.lt) goto loc_82362A00;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,10600(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 10600);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82362a04
	if (!ctx.cr6.gt) goto loc_82362A04;
loc_82362A00:
	// stfs f13,24(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r4.u32 + 24, temp.u32);
loc_82362A04:
	// lwz r11,1768(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1768);
	// lfs f0,24(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lwz r4,1768(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 1768);
	// lwz r10,1904(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 1904);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// lfs f13,24(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// stfs f13,1404(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 1404, temp.u32);
	// lfs f9,24(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// fctiwz f7,f8
	ctx.f7.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f7,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f7.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82362a54
	if (!ctx.cr6.eq) goto loc_82362A54;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82362A54:
	// stw r11,1440(r3)
	REX_STORE_U32(ctx.r3.u32 + 1440, ctx.r11.u32);
	// bl 0x823622c8
	ctx.lr = 0x82362A5C;
	sub_823622C8(ctx, base);
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

DEFINE_REX_FUNC(sub_8236A5E8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// lwz r11,1188(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1188);
	// blt cr6,0x8236a61c
	if (ctx.cr6.lt) goto loc_8236A61C;
	// beq cr6,0x8236a610
	if (ctx.cr6.eq) goto loc_8236A610;
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// bge cr6,0x8236a658
	if (!ctx.cr6.lt) goto loc_8236A658;
	// stfs f1,332(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 332, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8236A610:
	// stfs f1,328(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 328, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8236A61C:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,3720(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3720);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,3820(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3820);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fcmpu cr6,f1,f11
	ctx.cr6.compare(ctx.f1.f64, ctx.f11.f64);
	// blt cr6,0x8236a654
	if (ctx.cr6.lt) goto loc_8236A654;
	// fsubs f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
loc_8236A654:
	// stfs f1,324(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 324, temp.u32);
loc_8236A658:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8236E270) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x8236e280
	if (!ctx.cr6.eq) goto loc_8236E280;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8236E280:
	// b 0x8236d678
	sub_8236D678(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8236F840) {
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
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r31,r3,-28
	r31.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x8236f868
	if (!ctx.cr6.eq) goto loc_8236F868;
	// mr r31,r30
	r31.u64 = r30.u64;
loc_8236F868:
	// lwz r4,352(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 352);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8236f89c
	if (ctx.cr6.eq) goto loc_8236F89C;
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,16924
	ctx.r5.s64 = ctx.r10.s64 + 16924;
	// li r6,151
	ctx.r6.s64 = 151;
	// lwz r11,1012(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1012);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x8236F894;
	sub_82330D00(ctx, base);
	// stw r30,348(r31)
	REX_STORE_U32(r31.u32 + 348, r30.u32);
	// stw r30,352(r31)
	REX_STORE_U32(r31.u32 + 352, r30.u32);
loc_8236F89C:
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

DEFINE_REX_FUNC(sub_82373900) {
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
	// addi r31,r11,10416
	r31.s64 = ctx.r11.s64 + 10416;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823ef5f0
	ctx.lr = 0x82373928;
	sub_823EF5F0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r10,17444
	ctx.r4.s64 = ctx.r10.s64 + 17444;
	// bl 0x82331480
	ctx.lr = 0x82373938;
	sub_82331480(ctx, base);
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lis r10,-32201
	ctx.r10.s64 = -2110324736;
	// addi r9,r11,10320
	ctx.r9.s64 = ctx.r11.s64 + 10320;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r5,-32201
	ctx.r5.s64 = -2110324736;
	// stw r9,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r9.u32);
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// addi r10,r10,14544
	ctx.r10.s64 = ctx.r10.s64 + 14544;
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
	// addi r9,r5,14568
	ctx.r9.s64 = ctx.r5.s64 + 14568;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r10,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r10.u32);
	// lis r6,-32201
	ctx.r6.s64 = -2110324736;
	// stw r9,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r9.u32);
	// lis r7,-32201
	ctx.r7.s64 = -2110324736;
	// stw r11,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r11.u32);
	// lis r8,-32202
	ctx.r8.s64 = -2110390272;
	// addi r10,r6,13656
	ctx.r10.s64 = ctx.r6.s64 + 13656;
	// addi r9,r7,13728
	ctx.r9.s64 = ctx.r7.s64 + 13728;
	// addi r11,r8,16224
	ctx.r11.s64 = ctx.r8.s64 + 16224;
	// stw r10,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r10.u32);
	// stw r9,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r9.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,144(r31)
	REX_STORE_U32(r31.u32 + 144, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,680
	ctx.r11.s64 = 680;
	// stw r10,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r9,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r9.u32);
	// stw r11,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_82378A00) {
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
	ctx.lr = 0x82378A08;
	// stwu r1,-784(r1)
	ea = -784 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	r28.s64 = 0;
	// stw r4,812(r1)
	REX_STORE_U32(ctx.r1.u32 + 812, ctx.r4.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// stb r28,112(r1)
	REX_STORE_U8(ctx.r1.u32 + 112, r28.u8);
	// li r5,511
	ctx.r5.s64 = 511;
	// stb r28,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, r28.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,113
	ctx.r3.s64 = ctx.r1.s64 + 113;
	// mr r22,r6
	r22.u64 = ctx.r6.u64;
	// mr r27,r28
	r27.u64 = r28.u64;
	// bl 0x826a2e60
	ctx.lr = 0x82378A3C;
	sub_826A2E60(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340ff0
	ctx.lr = 0x82378A48;
	sub_82340FF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82378e70
	if (!ctx.cr6.eq) goto loc_82378E70;
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// addi r6,r11,-8
	ctx.r6.s64 = ctx.r11.s64 + -8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r6,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r9,r9,18216
	ctx.r9.s64 = ctx.r9.s64 + 18216;
	// addi r8,r8,-17568
	ctx.r8.s64 = ctx.r8.s64 + -17568;
	// li r23,4
	r23.s64 = 4;
	// stw r9,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// li r26,1
	r26.s64 = 1;
	// stw r8,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// lis r24,-32129
	r24.s64 = -2105606144;
	// addi r25,r11,18172
	r25.s64 = ctx.r11.s64 + 18172;
	// addi r20,r10,18208
	r20.s64 = ctx.r10.s64 + 18208;
	// addi r21,r7,18200
	r21.s64 = ctx.r7.s64 + 18200;
loc_82378A98:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// addi r4,r6,8
	ctx.r4.s64 = ctx.r6.s64 + 8;
	// bl 0x82340e38
	ctx.lr = 0x82378AA8;
	sub_82340E38(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82378e38
	if (!ctx.cr6.eq) goto loc_82378E38;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x82340718
	ctx.lr = 0x82378ACC;
	sub_82340718(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82378e38
	if (!ctx.cr6.eq) goto loc_82378E38;
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
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
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// or r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stw r6,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// bl 0x82331620
	ctx.lr = 0x82378B0C;
	sub_82331620(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82378dc4
	if (!ctx.cr6.eq) goto loc_82378DC4;
	// lwz r6,92(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r6,32
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 32, ctx.xer);
	// blt cr6,0x82378e6c
	if (ctx.cr6.lt) goto loc_82378E6C;
	// cmpwi cr6,r6,512
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 512, ctx.xer);
	// bgt cr6,0x82378e6c
	if (ctx.cr6.gt) goto loc_82378E6C;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x82340718
	ctx.lr = 0x82378B3C;
	sub_82340718(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82378e38
	if (!ctx.cr6.eq) goto loc_82378E38;
	// lhz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 112);
	// lbz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 112);
	// rlwimi r10,r11,8,8,23
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFF00) | (ctx.r10.u64 & 0xFFFFFFFFFF0000FF);
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// sth r11,112(r1)
	REX_STORE_U16(ctx.r1.u32 + 112, ctx.r11.u16);
	// cmplwi cr6,r11,357
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 357, ctx.xer);
	// beq cr6,0x82378b6c
	if (ctx.cr6.eq) goto loc_82378B6C;
	// cmplwi cr6,r11,358
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 358, ctx.xer);
	// bne cr6,0x82378e6c
	if (!ctx.cr6.eq) goto loc_82378E6C;
loc_82378B6C:
	// cmplwi cr6,r11,358
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 358, ctx.xer);
	// bne cr6,0x82378cc0
	if (!ctx.cr6.eq) goto loc_82378CC0;
	// lwz r11,152(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// lbz r6,152(r1)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r1.u32 + 152);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lhz r8,130(r1)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r1.u32 + 130);
	// rlwinm r7,r11,24,16,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF00;
	// stb r28,3(r30)
	REX_STORE_U8(r30.u32 + 3, r28.u8);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r4,r8,24,8,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r5,r9,8,0,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// stb r4,1(r30)
	REX_STORE_U8(r30.u32 + 1, ctx.r4.u8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// or r3,r5,r7
	ctx.r3.u64 = ctx.r5.u64 | ctx.r7.u64;
	// or r10,r3,r6
	ctx.r10.u64 = ctx.r3.u64 | ctx.r6.u64;
	// stw r10,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// beq cr6,0x82378bdc
	if (ctx.cr6.eq) goto loc_82378BDC;
	// lwz r11,156(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// lbz r6,156(r1)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r1.u32 + 156);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// rlwinm r7,r11,24,16,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF00;
	// rlwimi r8,r11,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r5,r8,8,0,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// or r4,r5,r7
	ctx.r4.u64 = ctx.r5.u64 | ctx.r7.u64;
	// or r11,r4,r6
	ctx.r11.u64 = ctx.r4.u64 | ctx.r6.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// b 0x82378be0
	goto loc_82378BE0;
loc_82378BDC:
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
loc_82378BE0:
	// lwz r9,136(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r10,140(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// lhz r8,162(r1)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r1.u32 + 162);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// stw r7,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r7.u32);
	// rlwimi r4,r9,16,0,15
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000) | (ctx.r4.u64 & 0xFFFFFFFF0000FFFF);
	// lbz r16,136(r1)
	r16.u64 = REX_LOAD_U8(ctx.r1.u32 + 136);
	// rlwimi r5,r10,16,0,15
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000) | (ctx.r5.u64 & 0xFFFFFFFF0000FFFF);
	// lwz r3,132(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// rlwimi r6,r11,16,0,15
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (ctx.r6.u64 & 0xFFFFFFFF0000FFFF);
	// lbz r27,132(r1)
	r27.u64 = REX_LOAD_U8(ctx.r1.u32 + 132);
	// mr r19,r8
	r19.u64 = ctx.r8.u64;
	// lbz r18,116(r1)
	r18.u64 = REX_LOAD_U8(ctx.r1.u32 + 116);
	// rlwinm r7,r4,8,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFF0000;
	// lbz r17,140(r1)
	r17.u64 = REX_LOAD_U8(ctx.r1.u32 + 140);
	// rlwinm r4,r9,24,16,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF00;
	// lhz r15,114(r1)
	r15.u64 = REX_LOAD_U16(ctx.r1.u32 + 114);
	// rlwinm r11,r11,24,16,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF00;
	// rlwinm r14,r6,8,0,15
	r14.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFF0000;
	// lwz r6,148(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// rlwinm r5,r5,8,0,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFF0000;
	// rlwinm r10,r10,24,16,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF00;
	// rlwimi r19,r8,16,0,15
	r19.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000) | (r19.u64 & 0xFFFFFFFF0000FFFF);
	// or r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 | ctx.r4.u64;
	// or r9,r14,r11
	ctx.r9.u64 = r14.u64 | ctx.r11.u64;
	// or r5,r5,r10
	ctx.r5.u64 = ctx.r5.u64 | ctx.r10.u64;
	// rlwinm r19,r19,8,0,15
	r19.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 8) & 0xFFFF0000;
	// rlwinm r8,r8,24,8,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFF00;
	// or r11,r7,r16
	ctx.r11.u64 = ctx.r7.u64 | r16.u64;
	// rlwimi r27,r3,24,16,23
	r27.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFF00) | (r27.u64 & 0xFFFFFFFFFFFF00FF);
	// or r7,r9,r18
	ctx.r7.u64 = ctx.r9.u64 | r18.u64;
	// stw r11,28(r30)
	REX_STORE_U32(r30.u32 + 28, ctx.r11.u32);
	// or r5,r5,r17
	ctx.r5.u64 = ctx.r5.u64 | r17.u64;
	// stw r11,32(r30)
	REX_STORE_U32(r30.u32 + 32, ctx.r11.u32);
	// or r4,r19,r8
	ctx.r4.u64 = r19.u64 | ctx.r8.u64;
	// stw r7,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r7.u32);
	// rlwinm r10,r15,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 24) & 0xFFFFFF;
	// stw r5,24(r30)
	REX_STORE_U32(r30.u32 + 24, ctx.r5.u32);
	// stw r4,36(r30)
	REX_STORE_U32(r30.u32 + 36, ctx.r4.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// sth r27,42(r30)
	REX_STORE_U16(r30.u32 + 42, r27.u16);
	// stb r10,40(r30)
	REX_STORE_U8(r30.u32 + 40, ctx.r10.u8);
	// beq cr6,0x82378cb4
	if (ctx.cr6.eq) goto loc_82378CB4;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lbz r8,148(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 148);
	// rlwinm r9,r6,24,16,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0xFF00;
	// rlwimi r11,r6,16,0,15
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xFFFF0000) | (ctx.r11.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r7,r11,8,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFF0000;
	// or r6,r7,r9
	ctx.r6.u64 = ctx.r7.u64 | ctx.r9.u64;
	// or r11,r6,r8
	ctx.r11.u64 = ctx.r6.u64 | ctx.r8.u64;
loc_82378CB4:
	// stw r11,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r11.u32);
	// mr r27,r26
	r27.u64 = r26.u64;
	// b 0x823790f4
	goto loc_823790F4;
loc_82378CC0:
	// lhz r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 120);
	// lbz r10,120(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 120);
	// lhz r9,114(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 114);
	// lbz r8,114(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 114);
	// rlwimi r10,r11,8,8,23
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFF00) | (ctx.r10.u64 & 0xFFFFFFFFFF0000FF);
	// lhz r7,116(r1)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r1.u32 + 116);
	// lbz r6,116(r1)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r1.u32 + 116);
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// lhz r5,118(r1)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r1.u32 + 118);
	// rlwimi r8,r9,8,8,23
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF00) | (ctx.r8.u64 & 0xFFFFFFFFFF0000FF);
	// lbz r4,118(r1)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r1.u32 + 118);
	// rlwimi r6,r7,8,8,23
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF00) | (ctx.r6.u64 & 0xFFFFFFFFFF0000FF);
	// sth r11,120(r1)
	REX_STORE_U16(ctx.r1.u32 + 120, ctx.r11.u16);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// rlwimi r4,r5,8,8,23
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFF00) | (ctx.r4.u64 & 0xFFFFFFFFFF0000FF);
	// sth r8,114(r1)
	REX_STORE_U16(ctx.r1.u32 + 114, ctx.r8.u16);
	// sth r6,116(r1)
	REX_STORE_U16(ctx.r1.u32 + 116, ctx.r6.u16);
	// sth r4,118(r1)
	REX_STORE_U16(ctx.r1.u32 + 118, ctx.r4.u16);
	// bgt cr6,0x82378e6c
	if (ctx.cr6.gt) goto loc_82378E6C;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823790f4
	if (!ctx.cr6.gt) goto loc_823790F4;
	// addi r11,r1,122
	ctx.r11.s64 = ctx.r1.s64 + 122;
loc_82378D1C:
	// lwz r9,2(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 2);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r8,6(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 6);
	// lwz r7,10(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 10);
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// lwz r5,14(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 14);
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// lbz r19,2(r11)
	r19.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// mr r18,r5
	r18.u64 = ctx.r5.u64;
	// lbz r17,6(r11)
	r17.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// rlwimi r6,r9,16,0,15
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000) | (ctx.r6.u64 & 0xFFFFFFFF0000FFFF);
	// lbz r16,10(r11)
	r16.u64 = REX_LOAD_U8(ctx.r11.u32 + 10);
	// rlwimi r4,r8,16,0,15
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000) | (ctx.r4.u64 & 0xFFFFFFFF0000FFFF);
	// lbz r15,14(r11)
	r15.u64 = REX_LOAD_U8(ctx.r11.u32 + 14);
	// rlwimi r3,r7,16,0,15
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF0000) | (ctx.r3.u64 & 0xFFFFFFFF0000FFFF);
	// rlwimi r18,r5,16,0,15
	r18.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFFFF0000) | (r18.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r6,r6,8,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFF0000;
	// rlwinm r9,r9,24,16,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF00;
	// rlwinm r4,r4,8,0,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFF0000;
	// rlwinm r8,r8,24,16,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF00;
	// rlwinm r7,r7,24,16,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFF00;
	// rlwinm r3,r3,8,0,15
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFF0000;
	// rlwinm r18,r18,8,0,15
	r18.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 8) & 0xFFFF0000;
	// rlwinm r5,r5,24,16,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFF00;
	// or r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 | ctx.r9.u64;
	// or r4,r4,r8
	ctx.r4.u64 = ctx.r4.u64 | ctx.r8.u64;
	// or r7,r3,r7
	ctx.r7.u64 = ctx.r3.u64 | ctx.r7.u64;
	// or r5,r18,r5
	ctx.r5.u64 = r18.u64 | ctx.r5.u64;
	// or r8,r4,r17
	ctx.r8.u64 = ctx.r4.u64 | r17.u64;
	// or r9,r9,r19
	ctx.r9.u64 = ctx.r9.u64 | r19.u64;
	// or r7,r7,r16
	ctx.r7.u64 = ctx.r7.u64 | r16.u64;
	// stw r8,6(r11)
	REX_STORE_U32(ctx.r11.u32 + 6, ctx.r8.u32);
	// or r6,r5,r15
	ctx.r6.u64 = ctx.r5.u64 | r15.u64;
	// stw r9,2(r11)
	REX_STORE_U32(ctx.r11.u32 + 2, ctx.r9.u32);
	// stw r7,10(r11)
	REX_STORE_U32(ctx.r11.u32 + 10, ctx.r7.u32);
	// stw r6,14(r11)
	REX_STORE_U32(ctx.r11.u32 + 14, ctx.r6.u32);
	// sthu r28,20(r11)
	ea = 20 + ctx.r11.u32;
	REX_STORE_U16(ea, r28.u16);
	ctx.r11.u32 = ea;
	// lhz r4,120(r1)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r1.u32 + 120);
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x82378d1c
	if (ctx.cr6.lt) goto loc_82378D1C;
	// b 0x823790f4
	goto loc_823790F4;
loc_82378DC4:
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,100(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82331620
	ctx.lr = 0x82378DD4;
	sub_82331620(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82378e80
	if (!ctx.cr6.eq) goto loc_82378E80;
	// lwz r11,188(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 188);
	// addi r4,r31,188
	ctx.r4.s64 = r31.s64 + 188;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82378e0c
	if (!ctx.cr6.eq) goto loc_82378E0C;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// stw r10,268(r11)
	REX_STORE_U32(ctx.r11.u32 + 268, ctx.r10.u32);
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340ff0
	ctx.lr = 0x82378E00;
	sub_82340FF0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82378e38
	if (!ctx.cr6.eq) goto loc_82378E38;
loc_82378E0C:
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// lwz r11,392(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 392);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82378e78
	if (ctx.cr6.eq) goto loc_82378E78;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,92(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x82340e38
	ctx.lr = 0x82378E2C;
	sub_82340E38(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823790f4
	if (ctx.cr6.eq) goto loc_823790F4;
loc_82378E38:
	// clrlwi r11,r27,24
	ctx.r11.u64 = r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82378e6c
	if (ctx.cr6.eq) goto loc_82378E6C;
	// lbz r11,1(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 1);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82378e6c
	if (ctx.cr6.eq) goto loc_82378E6C;
	// lwz r11,284(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 284);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82378e6c
	if (ctx.cr6.eq) goto loc_82378E6C;
	// lwz r11,188(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 188);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82379158
	if (!ctx.cr6.eq) goto loc_82379158;
	// stw r28,188(r31)
	REX_STORE_U32(r31.u32 + 188, r28.u32);
loc_82378E6C:
	// li r3,25
	ctx.r3.s64 = 25;
loc_82378E70:
	// addi r1,r1,784
	ctx.r1.s64 = ctx.r1.s64 + 784;
	// b 0x826a1cd0
	return;
loc_82378E78:
	// stb r26,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, r26.u8);
	// b 0x823790f4
	goto loc_823790F4;
loc_82378E80:
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,104(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82331620
	ctx.lr = 0x82378E90;
	sub_82331620(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82378edc
	if (!ctx.cr6.eq) goto loc_82378EDC;
	// lwz r6,92(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r6,44
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 44, ctx.xer);
	// blt cr6,0x82378e6c
	if (ctx.cr6.lt) goto loc_82378E6C;
	// cmpwi cr6,r6,512
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 512, ctx.xer);
	// bgt cr6,0x82378e6c
	if (ctx.cr6.gt) goto loc_82378E6C;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82340718
	ctx.lr = 0x82378EC0;
	sub_82340718(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82378e38
	if (!ctx.cr6.eq) goto loc_82378E38;
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 28);
	// mr r27,r26
	r27.u64 = r26.u64;
	// stw r11,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r11.u32);
	// b 0x823790f4
	goto loc_823790F4;
loc_82378EDC:
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82331620
	ctx.lr = 0x82378EEC;
	sub_82331620(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823790e4
	if (!ctx.cr6.eq) goto loc_823790E4;
	// clrlwi r11,r27,24
	ctx.r11.u64 = r27.u32 & 0xFF;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,1012(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 1012);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// beq cr6,0x82378f78
	if (ctx.cr6.eq) goto loc_82378F78;
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// li r6,471
	ctx.r6.s64 = 471;
	// addi r4,r10,12
	ctx.r4.s64 = ctx.r10.s64 + 12;
	// bl 0x82330e40
	ctx.lr = 0x82378F20;
	sub_82330E40(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,284(r31)
	REX_STORE_U32(r31.u32 + 284, ctx.r3.u32);
	// beq cr6,0x8237914c
	if (ctx.cr6.eq) goto loc_8237914C;
	// stw r26,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r26.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r10,284(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 284);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r9,r11,3
	ctx.r9.s64 = ctx.r11.s64 + 3;
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r8,284(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 284);
	// stw r28,8(r8)
	REX_STORE_U32(ctx.r8.u32 + 8, r28.u32);
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// lwz r5,92(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,284(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 284);
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// bl 0x82340718
	ctx.lr = 0x82378F68;
	sub_82340718(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82378e38
	if (!ctx.cr6.eq) goto loc_82378E38;
	// b 0x823790f4
	goto loc_823790F4;
loc_82378F78:
	// li r6,489
	ctx.r6.s64 = 489;
	// lwz r4,92(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x82330e40
	ctx.lr = 0x82378F84;
	sub_82330E40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,284(r31)
	REX_STORE_U32(r31.u32 + 284, ctx.r3.u32);
	// beq cr6,0x8237914c
	if (ctx.cr6.eq) goto loc_8237914C;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,92(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x82340718
	ctx.lr = 0x82378FA8;
	sub_82340718(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82378e38
	if (!ctx.cr6.eq) goto loc_82378E38;
	// lwz r11,284(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 284);
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// rlwinm r5,r10,24,16,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF00;
	// rlwimi r6,r10,16,0,15
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000) | (ctx.r6.u64 & 0xFFFFFFFF0000FFFF);
	// or r4,r5,r7
	ctx.r4.u64 = ctx.r5.u64 | ctx.r7.u64;
	// rlwinm r3,r6,8,0,15
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFF0000;
	// or r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 | ctx.r4.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r7,284(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 284);
	// lwz r6,0(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82379088
	if (!ctx.cr6.gt) goto loc_82379088;
loc_82378FF4:
	// lwz r10,284(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 284);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwzx r7,r11,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lbzx r6,r11,r10
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// rlwinm r4,r7,24,16,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFF00;
	// rlwimi r5,r7,16,0,15
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF0000) | (ctx.r5.u64 & 0xFFFFFFFF0000FFFF);
	// or r3,r4,r6
	ctx.r3.u64 = ctx.r4.u64 | ctx.r6.u64;
	// rlwinm r7,r5,8,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFF0000;
	// or r6,r7,r3
	ctx.r6.u64 = ctx.r7.u64 | ctx.r3.u64;
	// stwx r6,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r6.u32);
	// lwz r5,284(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 284);
	// lwzx r11,r11,r5
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82379074
	if (!ctx.cr6.gt) goto loc_82379074;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_82379040:
	// lwz r11,284(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 284);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// rlwinm r4,r7,24,16,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFF00;
	// rlwimi r5,r7,16,0,15
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF0000) | (ctx.r5.u64 & 0xFFFFFFFF0000FFFF);
	// or r3,r4,r6
	ctx.r3.u64 = ctx.r4.u64 | ctx.r6.u64;
	// rlwinm r7,r5,8,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFF0000;
	// or r6,r7,r3
	ctx.r6.u64 = ctx.r7.u64 | ctx.r3.u64;
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// bdnz 0x82379040
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82379040;
loc_82379074:
	// lwz r11,284(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 284);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82378ff4
	if (ctx.cr6.lt) goto loc_82378FF4;
loc_82379088:
	// lwz r11,284(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 284);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x823790c0
	if (!ctx.cr6.eq) goto loc_823790C0;
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r9,124(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// rlwinm r8,r11,11,0,20
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0xFFFFF800;
	// lhz r7,120(r1)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r1.u32 + 120);
	// twllei r9,0
	if (ctx.r9.s32 == 0 || ctx.r9.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r6,r8,r9
	ctx.r6.u64 = uint32_t(ctx.r9.u32 ? ctx.r8.u32 / ctx.r9.u32 : 0);
	// twllei r7,0
	if (ctx.r7.s32 == 0 || ctx.r7.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r5,r6,r7
	ctx.r5.u64 = uint32_t(ctx.r7.u32 ? ctx.r6.u32 / ctx.r7.u32 : 0);
	// stw r5,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r5.u32);
	// b 0x823790f4
	goto loc_823790F4;
loc_823790C0:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r6,r8,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r8.u64;
	// stw r6,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r6.u32);
	// b 0x823790f4
	goto loc_823790F4;
loc_823790E4:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// lwz r4,92(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x82340e38
	ctx.lr = 0x823790F4;
	sub_82340E38(ctx, base);
loc_823790F4:
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r9,96(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// add r10,r11,r23
	ctx.r10.u64 = ctx.r11.u64 + r23.u64;
	// clrlwi r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r23,r10,8
	r23.s64 = ctx.r10.s64 + 8;
	// addi r6,r11,8
	ctx.r6.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r6,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// beq cr6,0x82379128
	if (ctx.cr6.eq) goto loc_82379128;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// stw r6,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
loc_82379128:
	// lwz r11,812(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 812);
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(r23.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82378e38
	if (!ctx.cr6.lt) goto loc_82378E38;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x82378e38
	if (ctx.cr6.eq) goto loc_82378E38;
	// lbz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82378a98
	if (ctx.cr6.eq) goto loc_82378A98;
	// b 0x82378e38
	goto loc_82378E38;
loc_8237914C:
	// li r3,44
	ctx.r3.s64 = 44;
	// addi r1,r1,784
	ctx.r1.s64 = ctx.r1.s64 + 784;
	// b 0x826a1cd0
	return;
loc_82379158:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,784
	ctx.r1.s64 = ctx.r1.s64 + 784;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_823C84A0) {
	REX_FUNC_PROLOGUE();
	// lwz r8,1048(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 1048);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x823c84d8
	if (!ctx.cr6.gt) goto loc_823C84D8;
	// lwz r7,1052(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 1052);
	// addi r9,r7,16
	ctx.r9.s64 = ctx.r7.s64 + 16;
loc_823C84BC:
	// lbz r3,0(r9)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823c84e0
	if (ctx.cr6.eq) goto loc_823C84E0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,592
	ctx.r9.s64 = ctx.r9.s64 + 592;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x823c84bc
	if (ctx.cr6.lt) goto loc_823C84BC;
loc_823C84D8:
	// li r3,33
	ctx.r3.s64 = 33;
	// blr 
	return;
loc_823C84E0:
	// mulli r11,r11,592
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(592));
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,64
	ctx.r8.s64 = 64;
	// lis r7,64
	ctx.r7.s64 = 4194304;
	// li r5,128
	ctx.r5.s64 = 128;
	// stb r9,16(r11)
	REX_STORE_U8(ctx.r11.u32 + 16, ctx.r9.u8);
	// li r3,1024
	ctx.r3.s64 = 1024;
	// lwz r9,0(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r4,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// lis r4,128
	ctx.r4.s64 = 8388608;
	// stw r11,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// stb r10,459(r11)
	REX_STORE_U8(ctx.r11.u32 + 459, ctx.r10.u8);
	// stw r10,500(r11)
	REX_STORE_U32(ctx.r11.u32 + 500, ctx.r10.u32);
	// stw r10,504(r11)
	REX_STORE_U32(ctx.r11.u32 + 504, ctx.r10.u32);
	// stw r8,512(r11)
	REX_STORE_U32(ctx.r11.u32 + 512, ctx.r8.u32);
	// stw r7,508(r11)
	REX_STORE_U32(ctx.r11.u32 + 508, ctx.r7.u32);
	// stw r10,516(r11)
	REX_STORE_U32(ctx.r11.u32 + 516, ctx.r10.u32);
	// stb r10,520(r11)
	REX_STORE_U8(ctx.r11.u32 + 520, ctx.r10.u8);
	// stw r10,524(r11)
	REX_STORE_U32(ctx.r11.u32 + 524, ctx.r10.u32);
	// stw r10,528(r11)
	REX_STORE_U32(ctx.r11.u32 + 528, ctx.r10.u32);
	// stw r5,536(r11)
	REX_STORE_U32(ctx.r11.u32 + 536, ctx.r5.u32);
	// stw r4,532(r11)
	REX_STORE_U32(ctx.r11.u32 + 532, ctx.r4.u32);
	// stw r10,540(r11)
	REX_STORE_U32(ctx.r11.u32 + 540, ctx.r10.u32);
	// stb r10,544(r11)
	REX_STORE_U8(ctx.r11.u32 + 544, ctx.r10.u8);
	// stw r10,548(r11)
	REX_STORE_U32(ctx.r11.u32 + 548, ctx.r10.u32);
	// stw r10,552(r11)
	REX_STORE_U32(ctx.r11.u32 + 552, ctx.r10.u32);
	// stw r10,556(r11)
	REX_STORE_U32(ctx.r11.u32 + 556, ctx.r10.u32);
	// stw r10,560(r11)
	REX_STORE_U32(ctx.r11.u32 + 560, ctx.r10.u32);
	// stw r10,564(r11)
	REX_STORE_U32(ctx.r11.u32 + 564, ctx.r10.u32);
	// stb r10,568(r11)
	REX_STORE_U8(ctx.r11.u32 + 568, ctx.r10.u8);
	// stw r3,572(r11)
	REX_STORE_U32(ctx.r11.u32 + 572, ctx.r3.u32);
	// beq cr6,0x823c857c
	if (ctx.cr6.eq) goto loc_823C857C;
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
loc_823C857C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823CA788) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x823CA790;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,244(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// li r31,0
	r31.s64 = 0;
	// lwz r30,236(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// lwz r29,228(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// stw r31,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// bl 0x823ca560
	ctx.lr = 0x823CA7B8;
	sub_823CA560(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_823CC560) {
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
	ctx.lr = 0x823CC568;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r4,60(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r22,r7
	r22.u64 = ctx.r7.u64;
	// bl 0x823dcc18
	ctx.lr = 0x823CC594;
	sub_823DCC18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823cc5a8
	if (!ctx.cr6.eq) goto loc_823CC5A8;
loc_823CC59C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cec
	return;
loc_823CC5A8:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r23,0
	r23.s64 = 0;
	// clrlwi r21,r11,31
	r21.u64 = ctx.r11.u32 & 0x1;
	// rlwinm r11,r11,0,24,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFE;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// beq cr6,0x823cc60c
	if (ctx.cr6.eq) goto loc_823CC60C;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r4,60(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x823dd258
	ctx.lr = 0x823CC5D8;
	sub_823DD258(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823cc59c
	if (ctx.cr6.eq) goto loc_823CC59C;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mulli r24,r26,292
	r24.s64 = static_cast<int64_t>(r26.u64 * static_cast<uint64_t>(292));
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r9,r24,r11
	ctx.r9.u64 = r24.u64 + ctx.r11.u64;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// stw r8,1464(r9)
	REX_STORE_U32(ctx.r9.u32 + 1464, ctx.r8.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// add r7,r24,r11
	ctx.r7.u64 = r24.u64 + ctx.r11.u64;
	// lwz r6,1464(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 1464);
	// subf r27,r6,r27
	r27.u64 = r27.u64 - ctx.r6.u64;
	// b 0x823cc618
	goto loc_823CC618;
loc_823CC60C:
	// mulli r24,r26,292
	r24.s64 = static_cast<int64_t>(r26.u64 * static_cast<uint64_t>(292));
	// add r11,r24,r11
	ctx.r11.u64 = r24.u64 + ctx.r11.u64;
	// stw r23,1464(r11)
	REX_STORE_U32(ctx.r11.u32 + 1464, r23.u32);
loc_823CC618:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823cc66c
	if (ctx.cr6.eq) goto loc_823CC66C;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r10,3624(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 3624);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x823cc654
	if (!ctx.cr6.eq) goto loc_823CC654;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r5,52(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823CC654;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823CC654:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cec
	return;
loc_823CC66C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823cc6f4
	if (!ctx.cr6.eq) goto loc_823CC6F4;
	// addi r10,r26,16
	ctx.r10.s64 = r26.s64 + 16;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r24
	r30.u64 = ctx.r11.u64 + r24.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwzx r29,r9,r11
	r29.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stw r23,1176(r30)
	REX_STORE_U32(r30.u32 + 1176, r23.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r4,60(r8)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + 60);
	// bl 0x823dce68
	ctx.lr = 0x823CC6A4;
	sub_823DCE68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823cc59c
	if (ctx.cr6.eq) goto loc_823CC59C;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// stw r11,1180(r30)
	REX_STORE_U32(r30.u32 + 1180, ctx.r11.u32);
	// beq cr6,0x823cc88c
	if (ctx.cr6.eq) goto loc_823CC88C;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
	// lwz r9,1136(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 1136);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// ble cr6,0x823cc88c
	if (!ctx.cr6.gt) goto loc_823CC88C;
	// addi r10,r29,-4
	ctx.r10.s64 = r29.s64 + -4;
loc_823CC6D4:
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r7,1136(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 1136);
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x823cc6d4
	if (ctx.cr6.lt) goto loc_823CC6D4;
	// b 0x823cc88c
	goto loc_823CC88C;
loc_823CC6F4:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x823cc798
	if (!ctx.cr6.eq) goto loc_823CC798;
	// addi r10,r26,24
	ctx.r10.s64 = r26.s64 + 24;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r11,r24
	r29.u64 = ctx.r11.u64 + r24.u64;
	// mr r30,r23
	r30.u64 = r23.u64;
	// lwzx r10,r8,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// stw r9,1176(r29)
	REX_STORE_U32(r29.u32 + 1176, ctx.r9.u32);
	// stw r10,1180(r29)
	REX_STORE_U32(r29.u32 + 1180, ctx.r10.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r7,1136(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 1136);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// ble cr6,0x823cc76c
	if (!ctx.cr6.gt) goto loc_823CC76C;
	// addi r28,r10,-4
	r28.s64 = ctx.r10.s64 + -4;
loc_823CC734:
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// lwz r4,60(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x823dce68
	ctx.lr = 0x823CC748;
	sub_823DCE68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823cc59c
	if (ctx.cr6.eq) goto loc_823CC59C;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// stwu r11,4(r28)
	ea = 4 + r28.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	r28.u32 = ea;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r10,1136(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 1136);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823cc734
	if (ctx.cr6.lt) goto loc_823CC734;
loc_823CC76C:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// beq cr6,0x823cc88c
	if (ctx.cr6.eq) goto loc_823CC88C;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r10,r26,16
	ctx.r10.s64 = r26.s64 + 16;
	// lwz r4,1180(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 1180);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,1136(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 1136);
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// bl 0x823ef2f8
	ctx.lr = 0x823CC794;
	sub_823EF2F8(ctx, base);
	// b 0x823cc88c
	goto loc_823CC88C;
loc_823CC798:
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x823cc804
	if (!ctx.cr6.lt) goto loc_823CC804;
loc_823CC7A0:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r10,3624(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 3624);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x823cc7e0
	if (!ctx.cr6.eq) goto loc_823CC7E0;
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
	ctx.lr = 0x823CC7C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cec
	return;
loc_823CC7E0:
	// lwz r10,6144(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 6144);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,6144(r11)
	REX_STORE_U32(ctx.r11.u32 + 6144, ctx.r10.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cec
	return;
loc_823CC804:
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bgt cr6,0x823cc84c
	if (ctx.cr6.gt) goto loc_823CC84C;
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
	// rlwinm r7,r11,31,29,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x823cbf88
	ctx.lr = 0x823CC828;
	sub_823CBF88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823cc59c
	if (ctx.cr6.eq) goto loc_823CC59C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x823cc88c
	if (!ctx.cr6.eq) goto loc_823CC88C;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cec
	return;
loc_823CC84C:
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// blt cr6,0x823cc7a0
	if (ctx.cr6.lt) goto loc_823CC7A0;
	// rlwinm r11,r11,31,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1F;
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x823cc1a0
	ctx.lr = 0x823CC874;
	sub_823CC1A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823cc59c
	if (ctx.cr6.eq) goto loc_823CC59C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x823cc8fc
	if (ctx.cr6.eq) goto loc_823CC8FC;
loc_823CC88C:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// beq cr6,0x823cc8fc
	if (ctx.cr6.eq) goto loc_823CC8FC;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// beq cr6,0x823cc8fc
	if (ctx.cr6.eq) goto loc_823CC8FC;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// add r9,r24,r11
	ctx.r9.u64 = r24.u64 + ctx.r11.u64;
	// lwz r8,1464(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 1464);
	// stw r8,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// lwz r7,1136(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 1136);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// ble cr6,0x823cc8fc
	if (!ctx.cr6.gt) goto loc_823CC8FC;
	// addi r9,r26,16
	ctx.r9.s64 = r26.s64 + 16;
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
loc_823CC8C8:
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwzx r9,r8,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r6,0(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// slw r5,r6,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r7.u8 & 0x3F));
	// stw r5,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r5.u32);
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r3,1136(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 1136);
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x823cc8c8
	if (ctx.cr6.lt) goto loc_823CC8C8;
loc_823CC8FC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cec
	return;
}

DEFINE_REX_FUNC(sub_823DE7C8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x823DE7D0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,2
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 2, ctx.xer);
	// bne cr6,0x823de830
	if (!ctx.cr6.eq) goto loc_823DE830;
	// cmplwi cr6,r7,2
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 2, ctx.xer);
	// bne cr6,0x823de8c8
	if (!ctx.cr6.eq) goto loc_823DE8C8;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,0(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// addi r31,r3,2
	r31.s64 = ctx.r3.s64 + 2;
	// bl 0x823ef2f8
	ctx.lr = 0x823DE800;
	sub_823EF2F8(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x823deb04
	if (ctx.cr6.eq) goto loc_823DEB04;
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r31,-4
	ctx.r10.s64 = r31.s64 + -4;
loc_823DE814:
	// lwz r9,4(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwzx r8,r9,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// sthu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x823de814
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823DE814;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
loc_823DE830:
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// bne cr6,0x823de870
	if (!ctx.cr6.eq) goto loc_823DE870;
	// cmplwi cr6,r7,2
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 2, ctx.xer);
	// bne cr6,0x823de8c8
	if (!ctx.cr6.eq) goto loc_823DE8C8;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x823deb04
	if (ctx.cr6.eq) goto loc_823DEB04;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
	// addi r11,r3,-2
	ctx.r11.s64 = ctx.r3.s64 + -2;
loc_823DE854:
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwzx r8,r10,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// sthu r8,2(r11)
	ea = 2 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x823de854
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823DE854;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
loc_823DE870:
	// cmplwi cr6,r7,2
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 2, ctx.xer);
	// bne cr6,0x823de8c8
	if (!ctx.cr6.eq) goto loc_823DE8C8;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x823deb04
	if (ctx.cr6.eq) goto loc_823DEB04;
loc_823DE884:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823de8b4
	if (ctx.cr6.eq) goto loc_823DE8B4;
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// addi r10,r30,-4
	ctx.r10.s64 = r30.s64 + -4;
loc_823DE898:
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// lwzx r9,r9,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// srawi r6,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 8;
	// stb r9,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// stbu r6,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r6.u8);
	ctx.r11.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x823de898
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823DE898;
loc_823DE8B4:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmplw cr6,r7,r29
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, r29.u32, ctx.xer);
	// blt cr6,0x823de884
	if (ctx.cr6.lt) goto loc_823DE884;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
loc_823DE8C8:
	// cmplwi cr6,r7,3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 3, ctx.xer);
	// bne cr6,0x823de9d8
	if (!ctx.cr6.eq) goto loc_823DE9D8;
	// cmplwi cr6,r5,2
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 2, ctx.xer);
	// bne cr6,0x823de934
	if (!ctx.cr6.eq) goto loc_823DE934;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x823deb04
	if (ctx.cr6.eq) goto loc_823DEB04;
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
	// li r10,0
	ctx.r10.s64 = 0;
loc_823DE8E8:
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwzx r8,r10,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// srawi r9,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 8;
	// srawi r5,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 8;
	// stb r8,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// stbu r5,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r5.u8);
	ctx.r11.u32 = ea;
	// lwz r3,4(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwzx r9,r3,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// srawi r9,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 8;
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// srawi r6,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 8;
	// stbu r6,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r6.u8);
	ctx.r11.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x823de8e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823DE8E8;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
loc_823DE934:
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// bne cr6,0x823de97c
	if (!ctx.cr6.eq) goto loc_823DE97C;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x823deb04
	if (ctx.cr6.eq) goto loc_823DEB04;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
loc_823DE94C:
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwzx r8,r10,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// srawi r9,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 8;
	// srawi r5,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 8;
	// stb r8,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// stbu r5,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r5.u8);
	ctx.r11.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x823de94c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823DE94C;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
loc_823DE97C:
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x823deb04
	if (ctx.cr6.eq) goto loc_823DEB04;
loc_823DE988:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823de9c4
	if (ctx.cr6.eq) goto loc_823DE9C4;
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// addi r9,r30,-4
	ctx.r9.s64 = r30.s64 + -4;
loc_823DE99C:
	// lwzu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// lwzx r6,r10,r8
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// srawi r10,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 8;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// stb r6,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r6.u8);
	// srawi r10,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 8;
	// stbu r3,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r3.u8);
	ctx.r11.u32 = ea;
	// stbu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r10.u8);
	ctx.r11.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x823de99c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823DE99C;
loc_823DE9C4:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmplw cr6,r7,r29
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, r29.u32, ctx.xer);
	// blt cr6,0x823de988
	if (ctx.cr6.lt) goto loc_823DE988;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
loc_823DE9D8:
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// bne cr6,0x823deaa8
	if (!ctx.cr6.eq) goto loc_823DEAA8;
	// cmplwi cr6,r5,2
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 2, ctx.xer);
	// bne cr6,0x823dea24
	if (!ctx.cr6.eq) goto loc_823DEA24;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x823deb04
	if (ctx.cr6.eq) goto loc_823DEB04;
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
	// li r10,0
	ctx.r10.s64 = 0;
loc_823DE9F8:
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwzx r8,r10,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stb r8,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// lwz r6,4(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwzx r5,r6,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stbu r5,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r5.u8);
	ctx.r11.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x823de9f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823DE9F8;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
loc_823DEA24:
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// bne cr6,0x823dea60
	if (!ctx.cr6.eq) goto loc_823DEA60;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x823deb04
	if (ctx.cr6.eq) goto loc_823DEB04;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
loc_823DEA40:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stbx r8,r9,r3
	REX_STORE_U8(ctx.r9.u32 + ctx.r3.u32, ctx.r8.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x823dea40
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823DEA40;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
loc_823DEA60:
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x823deb04
	if (ctx.cr6.eq) goto loc_823DEB04;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
loc_823DEA70:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823dea94
	if (ctx.cr6.eq) goto loc_823DEA94;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// addi r11,r30,-4
	ctx.r11.s64 = r30.s64 + -4;
loc_823DEA84:
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stbu r10,1(r8)
	ea = 1 + ctx.r8.u32;
	REX_STORE_U8(ea, ctx.r10.u8);
	ctx.r8.u32 = ea;
	// bdnz 0x823dea84
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823DEA84;
loc_823DEA94:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmplw cr6,r7,r29
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, r29.u32, ctx.xer);
	// blt cr6,0x823dea70
	if (ctx.cr6.lt) goto loc_823DEA70;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
loc_823DEAA8:
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x823deb04
	if (ctx.cr6.eq) goto loc_823DEB04;
loc_823DEAB4:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823deaf8
	if (ctx.cr6.eq) goto loc_823DEAF8;
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// addi r9,r30,-4
	ctx.r9.s64 = r30.s64 + -4;
loc_823DEAC8:
	// lwzu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// lwzx r6,r10,r8
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// srawi r10,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 8;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// stb r6,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r6.u8);
	// srawi r10,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 8;
	// stbu r3,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r3.u8);
	ctx.r11.u32 = ea;
	// srawi r4,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r10.s32 >> 8;
	// stbu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r10.u8);
	ctx.r11.u32 = ea;
	// stbu r4,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r4.u8);
	ctx.r11.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x823deac8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823DEAC8;
loc_823DEAF8:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmplw cr6,r7,r29
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, r29.u32, ctx.xer);
	// blt cr6,0x823deab4
	if (ctx.cr6.lt) goto loc_823DEAB4;
loc_823DEB04:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_823EEB10) {
	REX_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x823f05b8
	sub_823F05B8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823EECA0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82793934
	ctx.lr = 0x823EECB8;
	__imp__RtlInitAnsiString(ctx, base);
	// li r11,-3
	ctx.r11.s64 = -3;
	// li r10,64
	ctx.r10.s64 = 64;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r9,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82793af4
	ctx.lr = 0x823EECDC;
	__imp__NtQueryFullAttributesFile(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823eecec
	if (ctx.cr0.lt) goto loc_823EECEC;
	// lwz r3,160(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// b 0x823eecf4
	goto loc_823EECF4;
loc_823EECEC:
	// bl 0x823f0020
	ctx.lr = 0x823EECF0;
	sub_823F0020(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
loc_823EECF4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823EFFA0) {
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
	// stw r3,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// rlwinm. r11,r5,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r4,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// beq 0x823effe4
	if (ctx.cr0.eq) goto loc_823EFFE4;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823effe4
	if (ctx.cr6.eq) goto loc_823EFFE4;
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,13
	ctx.r3.u64 = ctx.r3.u64 | 13;
loc_823EFFCC:
	// bl 0x823f0020
	ctx.lr = 0x823EFFD0;
	sub_823F0020(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_823EFFD4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_823EFFE4:
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x82793b64
	ctx.lr = 0x823EFFF4;
	__imp__NtFreeVirtualMemory(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823effcc
	if (ctx.cr0.lt) goto loc_823EFFCC;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823effd4
	goto loc_823EFFD4;
}

DEFINE_REX_FUNC(sub_823F3FA0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-320
	ctx.r31.s64 = ctx.r12.s64 + -320;
	// std r28,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r28.u64);
	// std r22,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r22.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-32(r1)
	REX_STORE_U32(ctx.r1.u32 + -32, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,124(r31)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 124);
	// lwz r22,104(r31)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r31.u32 + 104);
	// b 0x823f3fe4
	goto loc_823F3FE4;
loc_823F3FE4:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x823f3ff4
	if (ctx.cr6.eq) goto loc_823F3FF4;
	// lwz r3,1408(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 1408);
	// bl 0x827938b4
	ctx.lr = 0x823F3FF4;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_823F3FF4:
	// lwz r1,0(r1)
	ctx.r1.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// ld r28,-16(r1)
	ctx.r28.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r22,-24(r1)
	ctx.r22.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// lwz r12,-32(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823F6228) {
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
	// li r30,0
	r30.s64 = 0;
	// lwz r6,32(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// lwz r5,28(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// stb r30,2418(r3)
	REX_STORE_U8(ctx.r3.u32 + 2418, r30.u8);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x823f9770
	ctx.lr = 0x823F6260;
	sub_823F9770(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x823f60f0
	ctx.lr = 0x823F6270;
	sub_823F60F0(ctx, base);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,44(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823f629c
	if (!ctx.cr6.eq) goto loc_823F629C;
	// li r5,8192
	ctx.r5.s64 = 8192;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826a2e60
	ctx.lr = 0x823F6290;
	sub_826A2E60(ctx, base);
	// stw r30,28(r31)
	REX_STORE_U32(r31.u32 + 28, r30.u32);
	// stw r30,32(r31)
	REX_STORE_U32(r31.u32 + 32, r30.u32);
	// b 0x823f6334
	goto loc_823F6334;
loc_823F629C:
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// add r4,r11,r3
	ctx.r4.u64 = ctx.r11.u64 + ctx.r3.u64;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x8269cc20
	ctx.lr = 0x823F62B4;
	sub_8269CC20(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,44(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 44);
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subfic r5,r11,8191
	ctx.xer.ca = ctx.r11.u32 <= 8191;
	ctx.r5.u64 = static_cast<uint64_t>(8191) - ctx.r11.u64;
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// bl 0x826a2e60
	ctx.lr = 0x823F62DC;
	sub_826A2E60(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,40(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// add r4,r3,r11
	ctx.r4.u64 = ctx.r3.u64 + ctx.r11.u64;
	// subf r5,r11,r10
	ctx.r5.u64 = ctx.r10.u64 - ctx.r11.u64;
	// bl 0x8269cc20
	ctx.lr = 0x823F62F4;
	sub_8269CC20(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,36(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 36);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r10,r3
	ctx.r4.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8269cc20
	ctx.lr = 0x823F6314;
	sub_8269CC20(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// subf r10,r8,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r8.u64;
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
	// stw r10,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r10.u32);
loc_823F6334:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f7ca8
	ctx.lr = 0x823F633C;
	sub_823F7CA8(ctx, base);
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

DEFINE_REX_FUNC(sub_823FE270) {
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
	ctx.lr = 0x823FE278;
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
	// mr r24,r10
	r24.u64 = ctx.r10.u64;
	// bl 0x82767ab8
	ctx.lr = 0x823FE2A4;
	sub_82767AB8(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x823fe2c4
	if (!ctx.cr6.eq) goto loc_823FE2C4;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x824084e0
	ctx.lr = 0x823FE2B4;
	sub_824084E0(ctx, base);
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2156
	ctx.r3.u64 = ctx.r3.u64 | 2156;
loc_823FE2BC:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x826a1cf8
	return;
loc_823FE2C4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x823fe2e4
	if (!ctx.cr6.eq) goto loc_823FE2E4;
	// lis r31,-30602
	r31.s64 = -2005532672;
	// ori r31,r31,2156
	r31.u64 = r31.u64 | 2156;
loc_823FE2D4:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x824084e0
	ctx.lr = 0x823FE2DC;
	sub_824084E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x823fe2bc
	goto loc_823FE2BC;
loc_823FE2E4:
	// li r9,1
	ctx.r9.s64 = 1;
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(r30.u32, r31.u32, ctx.xer);
	// bne cr6,0x823fe2f8
	if (!ctx.cr6.eq) goto loc_823FE2F8;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// ori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 | 1;
loc_823FE2F8:
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x824084e8
	ctx.lr = 0x823FE314;
	sub_824084E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x823fe324
	if (!ctx.cr0.lt) goto loc_823FE324;
loc_823FE31C:
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x823fe2d4
	goto loc_823FE2D4;
loc_823FE324:
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x824d2558
	ctx.lr = 0x823FE334;
	sub_824D2558(ctx, base);
	// addi r11,r1,200
	ctx.r11.s64 = ctx.r1.s64 + 200;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// lwz r9,172(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// lwz r8,168(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r7,164(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r6,160(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// stw r24,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r24.u32);
	// stw r25,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r25.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwz r31,268(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// lwz r30,264(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 264);
	// lwz r29,260(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// stw r31,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r31.u32);
	// rlwinm r11,r11,21,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1;
	// stw r30,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r30.u32);
	// stw r29,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r29.u32);
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x823fd560
	ctx.lr = 0x823FE390;
	sub_823FD560(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823fe31c
	if (ctx.cr0.lt) goto loc_823FE31C;
	// li r31,0
	r31.s64 = 0;
	// b 0x823fe2d4
	goto loc_823FE2D4;
}

DEFINE_REX_FUNC(sub_82404F20) {
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
	ctx.lr = 0x82404F28;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,4(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// xor r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r8.u64;
	// rlwinm. r11,r11,0,26,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824050a0
	if (!ctx.cr0.eq) goto loc_824050A0;
	// lwz r11,24(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x824050a0
	if (!ctx.cr6.eq) goto loc_824050A0;
	// lwz r11,104(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 104);
	// lwz r8,104(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 104);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x824050a0
	if (!ctx.cr6.eq) goto loc_824050A0;
	// lwz r11,108(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 108);
	// lwz r8,108(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 108);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x824050a0
	if (!ctx.cr6.eq) goto loc_824050A0;
	// lwz r11,112(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 112);
	// lwz r8,112(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 112);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x824050a0
	if (!ctx.cr6.eq) goto loc_824050A0;
	// lwz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r8,16(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x824050a0
	if (!ctx.cr6.eq) goto loc_824050A0;
	// lwz r11,12(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82404fac
	if (!ctx.cr6.eq) goto loc_82404FAC;
	// bl 0x824048b8
	ctx.lr = 0x82404FA8;
	sub_824048B8(ctx, base);
	// b 0x824050a8
	goto loc_824050A8;
loc_82404FAC:
	// lwz r11,28(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82404ff4
	if (ctx.cr6.eq) goto loc_82404FF4;
	// lwz r11,56(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 56);
	// lwz r10,56(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 56);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82404ff4
	if (ctx.cr6.eq) goto loc_82404FF4;
	// addi r7,r11,1024
	ctx.r7.s64 = ctx.r11.s64 + 1024;
loc_82404FCC:
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r6,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82404fec
	if (!ctx.cr0.eq) goto loc_82404FEC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x82404fcc
	if (!ctx.cr6.eq) goto loc_82404FCC;
loc_82404FEC:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x824050a0
	if (!ctx.cr0.eq) goto loc_824050A0;
loc_82404FF4:
	// li r26,0
	r26.s64 = 0;
	// stw r26,16(r9)
	REX_STORE_U32(ctx.r9.u32 + 16, r26.u32);
	// mr r27,r26
	r27.u64 = r26.u64;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// stw r26,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, r26.u32);
	// lwz r10,4(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 4);
	// lwz r11,112(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82405098
	if (!ctx.cr6.gt) goto loc_82405098;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r9,108(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 108);
loc_82405020:
	// lwz r6,4(r28)
	ctx.r6.u64 = REX_LOAD_U32(r28.u32 + 4);
	// mr r31,r26
	r31.u64 = r26.u64;
	// lwz r8,100(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 100);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lwz r7,32(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mullw r8,r8,r27
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(r27.s32);
	// lwz r4,100(r6)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r6.u32 + 100);
	// lwz r5,32(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 32);
	// mullw r6,r4,r27
	ctx.r6.s64 = int64_t(ctx.r4.s32) * int64_t(r27.s32);
	// add r30,r6,r5
	r30.u64 = ctx.r6.u64 + ctx.r5.u64;
	// add r29,r8,r7
	r29.u64 = ctx.r8.u64 + ctx.r7.u64;
	// beq cr6,0x82405088
	if (ctx.cr6.eq) goto loc_82405088;
loc_82405050:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r5,116(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 116);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82405060;
	sub_826A1E70(ctx, base);
	// lwz r10,4(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 4);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// lwz r7,96(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 96);
	// lwz r8,96(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// lwz r9,108(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 108);
	// add r30,r7,r30
	r30.u64 = ctx.r7.u64 + r30.u64;
	// add r29,r8,r29
	r29.u64 = ctx.r8.u64 + r29.u64;
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82405050
	if (ctx.cr6.lt) goto loc_82405050;
loc_82405088:
	// lwz r8,112(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 112);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// cmplw cr6,r27,r8
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82405020
	if (ctx.cr6.lt) goto loc_82405020;
loc_82405098:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x824050a8
	goto loc_824050A8;
loc_824050A0:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_824050A8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8240FC98) {
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
	// bl 0x826a1ca8
	ctx.lr = 0x8240FCA0;
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
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8240fcd8
	if (ctx.cr6.eq) goto loc_8240FCD8;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x82408848
	ctx.lr = 0x8240FCD4;
	sub_82408848(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
loc_8240FCD8:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8240fcf4
	if (ctx.cr6.eq) goto loc_8240FCF4;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824094e0
	ctx.lr = 0x8240FCF0;
	sub_824094E0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
loc_8240FCF4:
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
	// mulli r9,r9,6
	ctx.r9.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(6));
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
	// fmr f29,f31
	f29.f64 = f31.f64;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r27,r10,r6
	r27.u64 = ctx.r10.u64 + ctx.r6.u64;
	// add r24,r9,r5
	r24.u64 = ctx.r9.u64 + ctx.r5.u64;
	// bne 0x8240fd60
	if (!ctx.cr0.eq) goto loc_8240FD60;
	// li r29,0
	r29.s64 = 0;
	// li r30,1
	r30.s64 = 1;
	// b 0x8240fd68
	goto loc_8240FD68;
loc_8240FD60:
	// addi r29,r11,-1
	r29.s64 = ctx.r11.s64 + -1;
	// li r30,-1
	r30.s64 = -1;
loc_8240FD68:
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8240fd80
	if (ctx.cr6.eq) goto loc_8240FD80;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82409a88
	ctx.lr = 0x8240FD80;
	sub_82409A88(ctx, base);
loc_8240FD80:
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82410048
	if (!ctx.cr6.gt) goto loc_82410048;
	// add r11,r30,r29
	ctx.r11.u64 = r30.u64 + r29.u64;
	// subf r9,r30,r29
	ctx.r9.u64 = r29.u64 - r30.u64;
	// rlwinm r8,r11,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// rlwinm r10,r29,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r29,r28,8
	r29.s64 = r28.s64 + 8;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfd f10,20216(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = REX_LOAD_U64(ctx.r11.u32 + 20216);
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// lis r28,-32255
	r28.s64 = -2113863680;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lfs f11,15196(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 15196);
	ctx.f11.f64 = double(temp.f32);
	// mulli r25,r30,6
	r25.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(6));
	// lfs f12,20208(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 20208);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,17280(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 17280);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,20264(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 20264);
	ctx.f0.f64 = double(temp.f32);
	// lfs f6,20260(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 20260);
	ctx.f6.f64 = double(temp.f32);
	// rlwinm r30,r30,4,0,27
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// ori r3,r11,65535
	ctx.r3.u64 = ctx.r11.u64 | 65535;
loc_8240FDE8:
	// add r11,r29,r10
	ctx.r11.u64 = r29.u64 + ctx.r10.u64;
	// lfsx f9,r29,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + ctx.r10.u32);
	ctx.f9.f64 = double(temp.f32);
	// fadds f9,f9,f29
	ctx.f9.f64 = double(float(ctx.f9.f64 + f29.f64));
	// rlwinm r7,r26,2,28,29
	ctx.r7.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xC;
	// lwz r6,92(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// lfs f8,-8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,-4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f7.f64 = double(temp.f32);
	// fadds f8,f8,f31
	ctx.f8.f64 = double(float(ctx.f8.f64 + f31.f64));
	// fadds f7,f7,f30
	ctx.f7.f64 = double(float(ctx.f7.f64 + f30.f64));
	// lfsx f5,r7,r24
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + r24.u32);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f9,f9,f6
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f6.f64));
	// fmuls f8,f8,f6
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f6.f64));
	// fmuls f7,f7,f6
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f6.f64));
	// fadds f4,f9,f5
	ctx.f4.f64 = double(float(ctx.f9.f64 + ctx.f5.f64));
	// fadds f3,f8,f5
	ctx.f3.f64 = double(float(ctx.f8.f64 + ctx.f5.f64));
	// fadds f5,f7,f5
	ctx.f5.f64 = double(float(ctx.f7.f64 + ctx.f5.f64));
	// fctiwz f4,f4
	ctx.f4.s64 = std::isnan(ctx.f4.f64) ? int64_t(0x80000000U) : (ctx.f4.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f4.f64));
	// stfd f4,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f4.u64);
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// fctiwz f4,f3
	ctx.f4.s64 = std::isnan(ctx.f3.f64) ? int64_t(0x80000000U) : (ctx.f3.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f3.f64));
	// stfd f4,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f4.u64);
	// fctiwz f5,f5
	ctx.f5.s64 = std::isnan(ctx.f5.f64) ? int64_t(0x80000000U) : (ctx.f5.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f5.f64));
	// stfd f5,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f5.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r5,92(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// beq cr6,0x8240ff98
	if (ctx.cr6.eq) goto loc_8240FF98;
	// extsw r28,r6
	r28.s64 = ctx.r6.s32;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// extsw r7,r4
	ctx.r7.s64 = ctx.r4.s32;
	// std r28,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, r28.u64);
	// extsw r28,r5
	r28.s64 = ctx.r5.s32;
	// std r7,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r7.u64);
	// lfd f5,96(r1)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// std r28,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, r28.u64);
	// lfd f2,112(r1)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f5,f5
	ctx.f5.f64 = double(ctx.f5.s64);
	// lfd f4,104(r1)
	ctx.f4.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// frsp f5,f5
	ctx.f5.f64 = double(float(ctx.f5.f64));
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// fcfid f2,f2
	ctx.f2.f64 = double(ctx.f2.s64);
	// fcfid f4,f4
	ctx.f4.f64 = double(ctx.f4.s64);
	// addi r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 16;
	// lfs f3,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f8,f8,f5
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f5.f64));
	// frsp f5,f2
	ctx.f5.f64 = double(float(ctx.f2.f64));
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fsubs f7,f7,f5
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f5.f64));
	// frsp f5,f4
	ctx.f5.f64 = double(float(ctx.f4.f64));
	// fmadds f4,f8,f13,f3
	ctx.f4.f64 = double(float(std::fma(ctx.f8.f64, ctx.f13.f64, ctx.f3.f64)));
	// stfs f4,16(r11)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// fmuls f7,f7,f0
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// fsubs f9,f9,f5
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f5.f64));
	// fmul f4,f7,f10
	ctx.f4.f64 = ctx.f7.f64 * ctx.f10.f64;
	// addi r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 16;
	// fmul f5,f8,f10
	ctx.f5.f64 = ctx.f8.f64 * ctx.f10.f64;
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// frsp f30,f4
	f30.f64 = double(float(ctx.f4.f64));
	// lfs f4,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f4,f8,f12,f4
	ctx.f4.f64 = double(float(std::fma(ctx.f8.f64, ctx.f12.f64, ctx.f4.f64)));
	// stfs f4,16(r11)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lfs f4,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f8,f8,f11,f4
	ctx.f8.f64 = double(float(std::fma(ctx.f8.f64, ctx.f11.f64, ctx.f4.f64)));
	// stfs f8,16(r11)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// addi r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 16;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lfs f8,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f8,f7,f13,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f7.f64, ctx.f13.f64, ctx.f8.f64)));
	// stfs f8,20(r11)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// addi r7,r11,20
	ctx.r7.s64 = ctx.r11.s64 + 20;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f8,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f8,f7,f12,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f7.f64, ctx.f12.f64, ctx.f8.f64)));
	// stfs f8,20(r11)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// addi r7,r11,20
	ctx.r7.s64 = ctx.r11.s64 + 20;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lfs f8,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f8,f7,f11,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f7.f64, ctx.f11.f64, ctx.f8.f64)));
	// stfs f8,20(r11)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// addi r7,r11,20
	ctx.r7.s64 = ctx.r11.s64 + 20;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lfs f8,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f8,f9,f13,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f9.f64, ctx.f13.f64, ctx.f8.f64)));
	// stfs f8,24(r11)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// addi r7,r11,24
	ctx.r7.s64 = ctx.r11.s64 + 24;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f8,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// frsp f31,f5
	f31.f64 = double(float(ctx.f5.f64));
	// fmadds f8,f9,f12,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f9.f64, ctx.f12.f64, ctx.f8.f64)));
	// stfs f8,24(r11)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// fmul f5,f9,f10
	ctx.f5.f64 = ctx.f9.f64 * ctx.f10.f64;
	// addi r7,r11,24
	ctx.r7.s64 = ctx.r11.s64 + 24;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lfs f8,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f9,f9,f11,f8
	ctx.f9.f64 = double(float(std::fma(ctx.f9.f64, ctx.f11.f64, ctx.f8.f64)));
	// stfs f9,24(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// addi r7,r11,24
	ctx.r7.s64 = ctx.r11.s64 + 24;
	// frsp f29,f5
	f29.f64 = double(float(ctx.f5.f64));
loc_8240FF98:
	// cmpw cr6,r4,r3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r3.s32, ctx.xer);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// blt cr6,0x8240ffa8
	if (ctx.cr6.lt) goto loc_8240FFA8;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8240FFA8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8240ffc0
	if (!ctx.cr6.gt) goto loc_8240FFC0;
	// cmpw cr6,r4,r3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x8240ffc4
	if (ctx.cr6.lt) goto loc_8240FFC4;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8240ffc4
	goto loc_8240FFC4;
loc_8240FFC0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8240FFC4:
	// cmpw cr6,r5,r3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r3.s32, ctx.xer);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// blt cr6,0x8240ffd4
	if (ctx.cr6.lt) goto loc_8240FFD4;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8240FFD4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8240ffec
	if (!ctx.cr6.gt) goto loc_8240FFEC;
	// cmpw cr6,r5,r3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x8240fff0
	if (ctx.cr6.lt) goto loc_8240FFF0;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x8240fff0
	goto loc_8240FFF0;
loc_8240FFEC:
	// li r5,0
	ctx.r5.s64 = 0;
loc_8240FFF0:
	// cmpw cr6,r6,r3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r3.s32, ctx.xer);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// blt cr6,0x82410000
	if (ctx.cr6.lt) goto loc_82410000;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82410000:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82410018
	if (!ctx.cr6.gt) goto loc_82410018;
	// cmpw cr6,r6,r3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x8241001c
	if (ctx.cr6.lt) goto loc_8241001C;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// b 0x8241001c
	goto loc_8241001C;
loc_82410018:
	// li r6,0
	ctx.r6.s64 = 0;
loc_8241001C:
	// sth r5,2(r27)
	REX_STORE_U16(r27.u32 + 2, ctx.r5.u16);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// sth r6,0(r27)
	REX_STORE_U16(r27.u32 + 0, ctx.r6.u16);
	// add r10,r30,r10
	ctx.r10.u64 = r30.u64 + ctx.r10.u64;
	// sth r4,4(r27)
	REX_STORE_U16(r27.u32 + 4, ctx.r4.u16);
	// add r27,r25,r27
	r27.u64 = r25.u64 + r27.u64;
	// add r9,r30,r9
	ctx.r9.u64 = r30.u64 + ctx.r9.u64;
	// add r8,r30,r8
	ctx.r8.u64 = r30.u64 + ctx.r8.u64;
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8240fde8
	if (ctx.cr6.lt) goto loc_8240FDE8;
loc_82410048:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f30,-88(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_82431890) {
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
	// bl 0x826a1c88
	ctx.lr = 0x82431898;
	// stfd f29,-160(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -160, f29.u64);
	// stfd f30,-152(r1)
	REX_STORE_U64(ctx.r1.u32 + -152, f30.u64);
	// stfd f31,-144(r1)
	REX_STORE_U64(ctx.r1.u32 + -144, f31.u64);
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r21,r4
	r21.u64 = ctx.r4.u64;
	// mr r16,r5
	r16.u64 = ctx.r5.u64;
	// mr r20,r6
	r20.u64 = ctx.r6.u64;
	// mr r19,r7
	r19.u64 = ctx.r7.u64;
	// mr r29,r8
	r29.u64 = ctx.r8.u64;
	// mr r31,r9
	r31.u64 = ctx.r9.u64;
	// mr r24,r10
	r24.u64 = ctx.r10.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82431abc
	if (ctx.cr6.eq) goto loc_82431ABC;
	// li r17,0
	r17.s64 = 0;
	// li r26,1
	r26.s64 = 1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x824318ec
	if (ctx.cr6.eq) goto loc_824318EC;
	// divwu r25,r8,r6
	r25.u64 = uint32_t(ctx.r6.u32 ? ctx.r8.u32 / ctx.r6.u32 : 0);
	// twllei r6,0
	if (ctx.r6.s32 == 0 || ctx.r6.u32 < 0u) ppc_trap(ctx, base, 0);
	// b 0x824318f0
	goto loc_824318F0;
loc_824318EC:
	// mr r25,r26
	r25.u64 = r26.u64;
loc_824318F0:
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// lwz r4,0(r24)
	ctx.r4.u64 = REX_LOAD_U32(r24.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82422288
	ctx.lr = 0x82431900;
	sub_82422288(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lfd f29,-3744(r11)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r11.u32 + -3744);
	// blt 0x824319e4
	if (ctx.cr0.lt) goto loc_824319E4;
	// lfd f0,192(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 192);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, f29.f64);
	// bge cr6,0x82431928
	if (!ctx.cr6.lt) goto loc_82431928;
	// lfd f13,184(r30)
	ctx.f13.u64 = REX_LOAD_U64(r30.u32 + 184);
	// fsub f30,f0,f13
	f30.f64 = ctx.f0.f64 - ctx.f13.f64;
	// b 0x82431940
	goto loc_82431940;
loc_82431928:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f29.f64);
	// ble cr6,0x8243193c
	if (!ctx.cr6.gt) goto loc_8243193C;
	// lfd f13,184(r30)
	ctx.f13.u64 = REX_LOAD_U64(r30.u32 + 184);
	// fadd f30,f13,f0
	f30.f64 = ctx.f13.f64 + ctx.f0.f64;
	// b 0x82431940
	goto loc_82431940;
loc_8243193C:
	// fmr f30,f29
	ctx.fpscr.disableFlushMode();
	f30.f64 = f29.f64;
loc_82431940:
	// lfd f0,200(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 200);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, f29.f64);
	// bge cr6,0x82431958
	if (!ctx.cr6.lt) goto loc_82431958;
	// lfd f13,184(r30)
	ctx.f13.u64 = REX_LOAD_U64(r30.u32 + 184);
	// fsub f31,f0,f13
	f31.f64 = ctx.f0.f64 - ctx.f13.f64;
	// b 0x82431970
	goto loc_82431970;
loc_82431958:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f29.f64);
	// ble cr6,0x8243196c
	if (!ctx.cr6.gt) goto loc_8243196C;
	// lfd f13,184(r30)
	ctx.f13.u64 = REX_LOAD_U64(r30.u32 + 184);
	// fadd f31,f13,f0
	f31.f64 = ctx.f13.f64 + ctx.f0.f64;
	// b 0x82431970
	goto loc_82431970;
loc_8243196C:
	// fmr f31,f29
	ctx.fpscr.disableFlushMode();
	f31.f64 = f29.f64;
loc_82431970:
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// bl 0x826a18c8
	ctx.lr = 0x82431978;
	sub_826A18C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82431998
	if (ctx.cr0.eq) goto loc_82431998;
	// fcmpu cr6,f30,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f30.f64, f29.f64);
	// blt cr6,0x82431998
	if (ctx.cr6.lt) goto loc_82431998;
	// fctidz f0,f30
	ctx.f0.s64 = std::isnan(f30.f64) ? int64_t(0x8000000000000000ULL) : (f30.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&f30.f64));
	// stfd f0,192(r1)
	REX_STORE_U64(ctx.r1.u32 + 192, ctx.f0.u64);
	// lwz r17,196(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// b 0x8243199c
	goto loc_8243199C;
loc_82431998:
	// li r17,0
	r17.s64 = 0;
loc_8243199C:
	// fcmpu cr6,f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f31.f64, f29.f64);
	// blt cr6,0x82431aa0
	if (ctx.cr6.lt) goto loc_82431AA0;
	// mullw r11,r17,r20
	ctx.r11.s64 = int64_t(r17.s32) * int64_t(r20.s32);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// bge cr6,0x82431aa0
	if (!ctx.cr6.lt) goto loc_82431AA0;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x826a18c8
	ctx.lr = 0x824319B8;
	sub_826A18C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x824319d0
	if (ctx.cr0.eq) goto loc_824319D0;
	// fctidz f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(f31.f64) ? int64_t(0x8000000000000000ULL) : (f31.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&f31.f64));
	// stfd f0,192(r1)
	REX_STORE_U64(ctx.r1.u32 + 192, ctx.f0.u64);
	// lwz r11,196(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// b 0x824319d4
	goto loc_824319D4;
loc_824319D0:
	// addi r11,r25,-1
	ctx.r11.s64 = r25.s64 + -1;
loc_824319D4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(r25.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x824319e4
	if (!ctx.cr6.gt) goto loc_824319E4;
	// mr r25,r11
	r25.u64 = ctx.r11.u64;
loc_824319E4:
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(r16.u32, 0, ctx.xer);
	// beq cr6,0x82432d6c
	if (ctx.cr6.eq) goto loc_82432D6C;
	// lwz r27,564(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 564);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// bne cr6,0x82431a14
	if (!ctx.cr6.eq) goto loc_82431A14;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82427e48
	ctx.lr = 0x82431A0C;
	sub_82427E48(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82432d70
	if (ctx.cr0.lt) goto loc_82432D70;
loc_82431A14:
	// li r18,-1
	r18.s64 = -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82431a64
	if (ctx.cr6.eq) goto loc_82431A64;
	// lwz r8,8(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r9,r19,-4
	ctx.r9.s64 = r19.s64 + -4;
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
	// lwz r6,16(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
loc_82431A38:
	// lwzu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r7.u64 = REX_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// lwz r5,20(r8)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + 20);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r5,r7
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// lwz r7,4(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r7,r6
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// lwz r7,4(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// or r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 | ctx.r10.u64;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
	// bdnz 0x82431a38
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82431A38;
loc_82431A64:
	// not r9,r10
	ctx.r9.u64 = ~ctx.r10.u64;
	// rlwinm. r10,r10,0,11,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r28,r9,25,31,31
	r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 25) & 0x1;
	// rlwinm r31,r11,0,30,30
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// rlwinm r3,r11,0,25,25
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// rlwinm r4,r11,0,21,21
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	// beq 0x82431acc
	if (ctx.cr0.eq) goto loc_82431ACC;
	// lwz r11,108(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 108);
	// cmplw cr6,r17,r11
	ctx.cr6.compare<uint32_t>(r17.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82431a98
	if (ctx.cr6.lt) goto loc_82431A98;
	// lwz r11,112(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 112);
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(r25.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82431ae8
	if (!ctx.cr6.gt) goto loc_82431AE8;
loc_82431A98:
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82431ae4
	goto loc_82431AE4;
loc_82431AA0:
	// lwz r11,88(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82431abc
	if (ctx.cr6.eq) goto loc_82431ABC;
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(r16.u32, 0, ctx.xer);
	// stw r26,92(r30)
	REX_STORE_U32(r30.u32 + 92, r26.u32);
	// beq cr6,0x82432d6c
	if (ctx.cr6.eq) goto loc_82432D6C;
	// b 0x82431bd8
	goto loc_82431BD8;
loc_82431ABC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,3030
	ctx.r5.s64 = 3030;
	// addi r6,r11,-22584
	ctx.r6.s64 = ctx.r11.s64 + -22584;
	// b 0x82431cd0
	goto loc_82431CD0;
loc_82431ACC:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x82431ae8
	if (!ctx.cr6.eq) goto loc_82431AE8;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwz r11,112(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// rlwinm. r11,r11,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82431ae8
	if (!ctx.cr0.eq) goto loc_82431AE8;
loc_82431AE4:
	// stw r26,96(r30)
	REX_STORE_U32(r30.u32 + 96, r26.u32);
loc_82431AE8:
	// addi r11,r17,1
	ctx.r11.s64 = r17.s64 + 1;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r25.u32, ctx.xer);
	// bne cr6,0x82431b04
	if (!ctx.cr6.eq) goto loc_82431B04;
	// mullw r11,r17,r20
	ctx.r11.s64 = int64_t(r17.s32) * int64_t(r20.s32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r19
	ctx.r4.u64 = ctx.r11.u64 + r19.u64;
	// b 0x82431bdc
	goto loc_82431BDC;
loc_82431B04:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r7,r20
	ctx.r7.u64 = r20.u64;
	// cmplw cr6,r20,r29
	ctx.cr6.compare<uint32_t>(r20.u32, r29.u32, ctx.xer);
	// bge cr6,0x82431bbc
	if (!ctx.cr6.lt) goto loc_82431BBC;
	// rlwinm r11,r20,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r9,r19
	ctx.r9.u64 = r19.u64;
	// add r8,r11,r19
	ctx.r8.u64 = ctx.r11.u64 + r19.u64;
loc_82431B24:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x82431b34
	if (!ctx.cr6.eq) goto loc_82431B34;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82431bc4
	if (ctx.cr6.eq) goto loc_82431BC4;
loc_82431B34:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r23,0(r8)
	r23.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r23,r23,2,0,29
	r23.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r22,20(r11)
	r22.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwzx r11,r10,r22
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + r22.u32);
	// lwzx r10,r23,r22
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + r22.u32);
	// lwz r23,4(r11)
	r23.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r22,4(r10)
	r22.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r23,r22
	ctx.cr6.compare<uint32_t>(r23.u32, r22.u32, ctx.xer);
	// bne cr6,0x82431ba0
	if (!ctx.cr6.eq) goto loc_82431BA0;
	// lwz r23,8(r11)
	r23.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r22,8(r10)
	r22.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r23,r22
	ctx.cr6.compare<uint32_t>(r23.u32, r22.u32, ctx.xer);
	// bne cr6,0x82431ba0
	if (!ctx.cr6.eq) goto loc_82431BA0;
	// lwz r23,12(r11)
	r23.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r22,12(r10)
	r22.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// subf r23,r23,r22
	r23.u64 = r22.u64 - r23.u64;
	// lwz r10,16(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// addic r23,r23,-1
	ctx.xer.ca = r23.u32 > 0;
	r23.s64 = r23.s64 + -1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// subfe r11,r23,r23
	temp.u8 = (~r23.u32 + r23.u32 < ~r23.u32) | (~r23.u32 + r23.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~r23.u64 + r23.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 & ctx.r5.u64;
	// beq cr6,0x82431ba8
	if (ctx.cr6.eq) goto loc_82431BA8;
	// b 0x82431ba4
	goto loc_82431BA4;
loc_82431BA0:
	// li r5,0
	ctx.r5.s64 = 0;
loc_82431BA4:
	// li r6,0
	ctx.r6.s64 = 0;
loc_82431BA8:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplw cr6,r7,r29
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, r29.u32, ctx.xer);
	// blt cr6,0x82431b24
	if (ctx.cr6.lt) goto loc_82431B24;
loc_82431BBC:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x82431bc8
	if (!ctx.cr6.eq) goto loc_82431BC8;
loc_82431BC4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82431BC8:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82431bec
	if (ctx.cr6.eq) goto loc_82431BEC;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82431bec
	if (ctx.cr6.eq) goto loc_82431BEC;
loc_82431BD8:
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
loc_82431BDC:
	// rlwinm r5,r20,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82431BE8;
	sub_826A1E70(ctx, base);
	// b 0x82432d6c
	goto loc_82432D6C;
loc_82431BEC:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82431c98
	if (ctx.cr6.eq) goto loc_82431C98;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x82431c90
	if (!ctx.cr6.eq) goto loc_82431C90;
	// rlwinm r11,r20,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwz r8,0(r19)
	ctx.r8.u64 = REX_LOAD_U32(r19.u32 + 0);
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// add r11,r11,r19
	ctx.r11.u64 = ctx.r11.u64 + r19.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r20,1
	ctx.cr6.compare<uint32_t>(r20.u32, 1, ctx.xer);
	// lwz r7,20(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r7
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// lwzx r7,r6,r7
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// lwz r8,12(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r7,12(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 12);
	// subf r7,r8,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r8.u64;
	// ble cr6,0x82431c90
	if (!ctx.cr6.gt) goto loc_82431C90;
	// lwz r8,20(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// addi r10,r19,4
	ctx.r10.s64 = r19.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82431C48:
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r23,0(r10)
	r23.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r23,r23,2,0,29
	r23.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r6,r8
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// lwzx r23,r23,r8
	r23.u64 = REX_LOAD_U32(r23.u32 + ctx.r8.u32);
	// lwz r6,12(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 12);
	// lwz r23,12(r23)
	r23.u64 = REX_LOAD_U32(r23.u32 + 12);
	// subf r6,r23,r6
	ctx.r6.u64 = ctx.r6.u64 - r23.u64;
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x82431c8c
	if (!ctx.cr6.eq) goto loc_82431C8C;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r9,r20
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r20.u32, ctx.xer);
	// blt cr6,0x82431c48
	if (ctx.cr6.lt) goto loc_82431C48;
	// b 0x82431c90
	goto loc_82431C90;
loc_82431C8C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82431C90:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x82431c9c
	if (!ctx.cr6.eq) goto loc_82431C9C;
loc_82431C98:
	// li r31,0
	r31.s64 = 0;
loc_82431C9C:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq cr6,0x82431ce0
	if (ctx.cr6.eq) goto loc_82431CE0;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne cr6,0x82431ce0
	if (!ctx.cr6.eq) goto loc_82431CE0;
	// lwz r11,88(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82431cc4
	if (ctx.cr6.eq) goto loc_82431CC4;
	// lwz r11,68(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824321c8
	if (!ctx.cr6.eq) goto loc_824321C8;
loc_82431CC4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,3042
	ctx.r5.s64 = 3042;
	// addi r6,r11,-22656
	ctx.r6.s64 = ctx.r11.s64 + -22656;
loc_82431CD0:
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82423e58
	ctx.lr = 0x82431CDC;
	sub_82423E58(ctx, base);
	// b 0x824321c8
	goto loc_824321C8;
loc_82431CE0:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x824321a0
	if (ctx.cr6.eq) goto loc_824321A0;
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// cmplw cr6,r29,r20
	ctx.cr6.compare<uint32_t>(r29.u32, r20.u32, ctx.xer);
	// ble cr6,0x82431d24
	if (!ctx.cr6.gt) goto loc_82431D24;
	// rlwinm r11,r20,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwz r9,0(r19)
	ctx.r9.u64 = REX_LOAD_U32(r19.u32 + 0);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r19
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r19.u32);
	// lwz r10,20(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r10,12(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
loc_82431D24:
	// lwz r10,0(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 0);
	// lis r9,8256
	ctx.r9.s64 = 541065216;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ori r27,r9,1
	r27.u64 = ctx.r9.u64 | 1;
	// stw r10,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// bne cr6,0x82431d4c
	if (!ctx.cr6.eq) goto loc_82431D4C;
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwz r10,108(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 108);
	// rlwinm. r10,r10,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82431ea0
	if (!ctx.cr0.eq) goto loc_82431EA0;
loc_82431D4C:
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lwz r3,8(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// std r11,192(r1)
	REX_STORE_U64(ctx.r1.u32 + 192, ctx.r11.u64);
	// li r5,0
	ctx.r5.s64 = 0;
	// lfd f0,192(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 192);
	// fcfid f1,f0
	ctx.f1.f64 = double(ctx.f0.s64);
	// lwz r4,120(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// bl 0x82478758
	ctx.lr = 0x82431D70;
	sub_82478758(ctx, base);
	// stw r3,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r3.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82432cf8
	if (ctx.cr6.eq) goto loc_82432CF8;
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// lwz r9,8(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 8);
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
	// lwz r8,160(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r18,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r18.u32);
	// stw r18,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, r18.u32);
	// stw r18,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, r18.u32);
	// stw r18,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, r18.u32);
	// stw r18,16(r10)
	REX_STORE_U32(ctx.r10.u32 + 16, r18.u32);
	// lwz r11,20(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// lwzx r11,r8,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82431e6c
	if (!ctx.cr0.eq) goto loc_82431E6C;
	// lis r5,4128
	ctx.r5.s64 = 270532608;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82423f70
	ctx.lr = 0x82431DDC;
	sub_82423F70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82432d70
	if (ctx.cr0.lt) goto loc_82432D70;
	// lis r5,4160
	ctx.r5.s64 = 272629760;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,208
	ctx.r7.s64 = ctx.r1.s64 + 208;
	// addi r6,r1,212
	ctx.r6.s64 = ctx.r1.s64 + 212;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82423f70
	ctx.lr = 0x82431E08;
	sub_82423F70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82432d70
	if (ctx.cr0.lt) goto loc_82432D70;
	// lis r5,4112
	ctx.r5.s64 = 269484032;
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,212
	ctx.r7.s64 = ctx.r1.s64 + 212;
	// addi r6,r1,216
	ctx.r6.s64 = ctx.r1.s64 + 216;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82423f70
	ctx.lr = 0x82431E34;
	sub_82423F70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82432d70
	if (ctx.cr0.lt) goto loc_82432D70;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r8,r1,208
	ctx.r8.s64 = ctx.r1.s64 + 208;
	// addi r7,r1,216
	ctx.r7.s64 = ctx.r1.s64 + 216;
	// addi r6,r1,220
	ctx.r6.s64 = ctx.r1.s64 + 220;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82423f70
	ctx.lr = 0x82431E5C;
	sub_82423F70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82432d70
	if (ctx.cr0.lt) goto loc_82432D70;
	// lwz r11,220(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// stw r11,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
loc_82431E6C:
	// lis r5,8272
	ctx.r5.s64 = 542113792;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// addi r6,r1,224
	ctx.r6.s64 = ctx.r1.s64 + 224;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82423f70
	ctx.lr = 0x82431E90;
	sub_82423F70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82432d70
	if (ctx.cr0.lt) goto loc_82432D70;
	// lwz r11,224(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// stw r11,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
loc_82431EA0:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwz r10,0(r19)
	ctx.r10.u64 = REX_LOAD_U32(r19.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,20(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// stw r10,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// beq cr6,0x82431ff8
	if (ctx.cr6.eq) goto loc_82431FF8;
	// lwz r9,20(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,136(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// addi r7,r1,240
	ctx.r7.s64 = ctx.r1.s64 + 240;
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stw r8,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r18,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, r18.u32);
	// stw r18,4(r7)
	REX_STORE_U32(ctx.r7.u32 + 4, r18.u32);
	// stw r18,8(r7)
	REX_STORE_U32(ctx.r7.u32 + 8, r18.u32);
	// stw r18,12(r7)
	REX_STORE_U32(ctx.r7.u32 + 12, r18.u32);
	// stw r18,16(r7)
	REX_STORE_U32(ctx.r7.u32 + 16, r18.u32);
	// lwz r11,164(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwz r10,20(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82431fc8
	if (!ctx.cr0.eq) goto loc_82431FC8;
	// lis r5,4128
	ctx.r5.s64 = 270532608;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,164
	ctx.r7.s64 = ctx.r1.s64 + 164;
	// addi r6,r1,240
	ctx.r6.s64 = ctx.r1.s64 + 240;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82423f70
	ctx.lr = 0x82431F38;
	sub_82423F70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82432d70
	if (ctx.cr0.lt) goto loc_82432D70;
	// lis r5,4160
	ctx.r5.s64 = 272629760;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,240
	ctx.r7.s64 = ctx.r1.s64 + 240;
	// addi r6,r1,244
	ctx.r6.s64 = ctx.r1.s64 + 244;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82423f70
	ctx.lr = 0x82431F64;
	sub_82423F70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82432d70
	if (ctx.cr0.lt) goto loc_82432D70;
	// lis r5,4112
	ctx.r5.s64 = 269484032;
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,244
	ctx.r7.s64 = ctx.r1.s64 + 244;
	// addi r6,r1,248
	ctx.r6.s64 = ctx.r1.s64 + 248;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82423f70
	ctx.lr = 0x82431F90;
	sub_82423F70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82432d70
	if (ctx.cr0.lt) goto loc_82432D70;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r8,r1,240
	ctx.r8.s64 = ctx.r1.s64 + 240;
	// addi r7,r1,248
	ctx.r7.s64 = ctx.r1.s64 + 248;
	// addi r6,r1,252
	ctx.r6.s64 = ctx.r1.s64 + 252;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82423f70
	ctx.lr = 0x82431FB8;
	sub_82423F70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82432d70
	if (ctx.cr0.lt) goto loc_82432D70;
	// lwz r11,252(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// stw r11,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
loc_82431FC8:
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// addi r7,r1,164
	ctx.r7.s64 = ctx.r1.s64 + 164;
	// addi r6,r1,256
	ctx.r6.s64 = ctx.r1.s64 + 256;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82423f70
	ctx.lr = 0x82431FE8;
	sub_82423F70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82432d70
	if (ctx.cr0.lt) goto loc_82432D70;
	// lwz r11,256(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// stw r11,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
loc_82431FF8:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82432058
	if (ctx.cr6.eq) goto loc_82432058;
	// stw r18,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, r18.u32);
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// addi r6,r1,168
	ctx.r6.s64 = ctx.r1.s64 + 168;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82423f70
	ctx.lr = 0x82432030;
	sub_82423F70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82432d70
	if (ctx.cr0.lt) goto loc_82432D70;
	// lwz r11,168(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// lwz r11,20(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r10,140(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 140);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_82432058:
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// beq cr6,0x82432d6c
	if (ctx.cr6.eq) goto loc_82432D6C;
	// mr r29,r19
	r29.u64 = r19.u64;
	// subf r27,r19,r16
	r27.u64 = r16.u64 - r19.u64;
loc_8243206C:
	// lwz r3,8(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// lwz r4,136(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// bl 0x82478758
	ctx.lr = 0x82432084;
	sub_82478758(ctx, base);
	// stwx r3,r27,r29
	REX_STORE_U32(r27.u32 + r29.u32, ctx.r3.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82432cf8
	if (ctx.cr6.eq) goto loc_82432CF8;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwzx r31,r10,r11
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r4,r9,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824780d8
	ctx.lr = 0x824320B4;
	sub_824780D8(ctx, base);
	// li r11,31
	ctx.r11.s64 = 31;
	// stw r18,52(r31)
	REX_STORE_U32(r31.u32 + 52, r18.u32);
	// cmplw cr6,r17,r25
	ctx.cr6.compare<uint32_t>(r17.u32, r25.u32, ctx.xer);
	// lwz r10,160(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lfd f0,168(r30)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(r30.u32 + 168);
	// stfd f0,32(r31)
	REX_STORE_U64(r31.u32 + 32, ctx.f0.u64);
	// lfd f0,176(r30)
	ctx.f0.u64 = REX_LOAD_U64(r30.u32 + 176);
	// stfd f0,40(r31)
	REX_STORE_U64(r31.u32 + 40, ctx.f0.u64);
	// bge cr6,0x8243215c
	if (!ctx.cr6.lt) goto loc_8243215C;
	// mullw r11,r17,r20
	ctx.r11.s64 = int64_t(r17.s32) * int64_t(r20.s32);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// subf r8,r17,r25
	ctx.r8.u64 = r25.u64 - r17.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r20,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r19
	ctx.r10.u64 = ctx.r11.u64 + r19.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_824320FC:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwzx r11,r8,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// and r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 & ctx.r8.u64;
	// stw r8,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r8,r8,0,23,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82432154
	if (ctx.cr0.eq) goto loc_82432154;
	// lfd f0,32(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 32);
	// lfd f13,32(r31)
	ctx.f13.u64 = REX_LOAD_U64(r31.u32 + 32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82432140
	if (!ctx.cr6.gt) goto loc_82432140;
	// stfd f0,32(r31)
	REX_STORE_U64(r31.u32 + 32, ctx.f0.u64);
loc_82432140:
	// lfd f0,40(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 40);
	// lfd f13,40(r31)
	ctx.f13.u64 = REX_LOAD_U64(r31.u32 + 40);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82432154
	if (!ctx.cr6.lt) goto loc_82432154;
	// stfd f0,40(r31)
	REX_STORE_U64(r31.u32 + 40, ctx.f0.u64);
loc_82432154:
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// bdnz 0x824320fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824320FC;
loc_8243215C:
	// lfd f0,32(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(r31.u32 + 32);
	// lfd f13,40(r31)
	ctx.f13.u64 = REX_LOAD_U64(r31.u32 + 40);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82432178
	if (ctx.cr6.gt) goto loc_82432178;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_82432178:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x8243218c
	if (!ctx.cr6.eq) goto loc_8243218C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_8243218C:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplw cr6,r28,r20
	ctx.cr6.compare<uint32_t>(r28.u32, r20.u32, ctx.xer);
	// blt cr6,0x8243206c
	if (ctx.cr6.lt) goto loc_8243206C;
	// b 0x82432d6c
	goto loc_82432D6C;
loc_824321A0:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne cr6,0x824321d4
	if (!ctx.cr6.eq) goto loc_824321D4;
	// lwz r11,88(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x824321c4
	if (!ctx.cr6.eq) goto loc_824321C4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,3512
	ctx.r5.s64 = 3512;
	// addi r6,r11,-22712
	ctx.r6.s64 = ctx.r11.s64 + -22712;
	// b 0x82431cd0
	goto loc_82431CD0;
loc_824321C4:
	// stw r26,96(r30)
	REX_STORE_U32(r30.u32 + 96, r26.u32);
loc_824321C8:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82432d70
	goto loc_82432D70;
loc_824321D4:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwz r10,0(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,20(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwzx r10,r9,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82432274
	if (ctx.cr0.eq) goto loc_82432274;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82423b58
	ctx.lr = 0x82432200;
	sub_82423B58(ctx, base);
	// mr. r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82432cf8
	if (ctx.cr0.eq) goto loc_82432CF8;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// beq cr6,0x82432248
	if (ctx.cr6.eq) goto loc_82432248;
	// addi r11,r8,-4
	ctx.r11.s64 = ctx.r8.s64 + -4;
	// mtctr r20
	ctx.ctr.u64 = r20.u64;
loc_82432218:
	// lwz r10,0(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 0);
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82432218
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82432218;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// beq cr6,0x82432248
	if (ctx.cr6.eq) goto loc_82432248;
	// addi r11,r16,-4
	ctx.r11.s64 = r16.s64 + -4;
	// mr r10,r18
	ctx.r10.u64 = r18.u64;
	// cmplwi r20,0
	ctx.cr0.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// beq 0x82432248
	if (ctx.cr0.eq) goto loc_82432248;
	// mtctr r20
	ctx.ctr.u64 = r20.u64;
loc_82432240:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82432240
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82432240;
loc_82432248:
	// rlwinm r11,r20,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r9,r20
	ctx.r9.u64 = r20.u64;
	// add r7,r11,r19
	ctx.r7.u64 = ctx.r11.u64 + r19.u64;
	// mr r6,r19
	ctx.r6.u64 = r19.u64;
	// mr r5,r16
	ctx.r5.u64 = r16.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824269e8
	ctx.lr = 0x82432268;
	sub_824269E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82432d70
	if (ctx.cr0.lt) goto loc_82432D70;
	// b 0x82432d6c
	goto loc_82432D6C;
loc_82432274:
	// subf r22,r17,r25
	r22.u64 = r25.u64 - r17.u64;
	// cmplwi cr6,r22,4
	ctx.cr6.compare<uint32_t>(r22.u32, 4, ctx.xer);
	// bgt cr6,0x824327c0
	if (ctx.cr6.gt) goto loc_824327C0;
	// cmplwi cr6,r20,1
	ctx.cr6.compare<uint32_t>(r20.u32, 1, ctx.xer);
	// bne cr6,0x82432290
	if (!ctx.cr6.eq) goto loc_82432290;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x824322a0
	if (ctx.cr6.eq) goto loc_824322A0;
loc_82432290:
	// cmplwi cr6,r20,4
	ctx.cr6.compare<uint32_t>(r20.u32, 4, ctx.xer);
	// bgt cr6,0x824327c0
	if (ctx.cr6.gt) goto loc_824327C0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x824327c0
	if (ctx.cr6.eq) goto loc_824327C0;
loc_824322A0:
	// lwz r10,88(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 88);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x824322c4
	if (ctx.cr6.eq) goto loc_824322C4;
	// cmplwi cr6,r20,1
	ctx.cr6.compare<uint32_t>(r20.u32, 1, ctx.xer);
	// bgt cr6,0x824322c0
	if (ctx.cr6.gt) goto loc_824322C0;
	// lwz r11,112(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// rlwinm. r11,r11,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824322c4
	if (!ctx.cr0.eq) goto loc_824322C4;
loc_824322C0:
	// stw r26,96(r30)
	REX_STORE_U32(r30.u32 + 96, r26.u32);
loc_824322C4:
	// mulli r11,r22,7
	ctx.r11.s64 = static_cast<int64_t>(r22.u64 * static_cast<uint64_t>(7));
	// addi r31,r11,4
	r31.s64 = ctx.r11.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82423b58
	ctx.lr = 0x824322D8;
	sub_82423B58(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82432cf8
	if (ctx.cr0.eq) goto loc_82432CF8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82432304
	if (ctx.cr6.eq) goto loc_82432304;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// mr r9,r18
	ctx.r9.u64 = r18.u64;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq 0x82432304
	if (ctx.cr0.eq) goto loc_82432304;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
loc_824322FC:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x824322fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824322FC;
loc_82432304:
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r9,r1,268
	ctx.r9.s64 = ctx.r1.s64 + 268;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82432310:
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82432310
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82432310;
	// li r9,7
	ctx.r9.s64 = 7;
	// rlwinm r8,r22,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,284
	ctx.r10.s64 = ctx.r1.s64 + 284;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8243232C:
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// bdnz 0x8243232c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8243232C;
	// lwz r10,0(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 0);
	// lis r9,8256
	ctx.r9.s64 = 541065216;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// ori r27,r9,1
	r27.u64 = ctx.r9.u64 | 1;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// lwz r9,20(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwzx r9,r9,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lwz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm. r9,r9,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82432440
	if (!ctx.cr0.eq) goto loc_82432440;
	// lwz r9,112(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// rlwinm. r9,r9,0,10,10
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8243237c
	if (ctx.cr0.eq) goto loc_8243237C;
	// lwz r11,108(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82432440
	if (!ctx.cr0.eq) goto loc_82432440;
loc_8243237C:
	// lwz r29,272(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// lis r5,4128
	ctx.r5.s64 = 270532608;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82423f70
	ctx.lr = 0x824323A4;
	sub_82423F70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82432d70
	if (ctx.cr0.lt) goto loc_82432D70;
	// lwz r28,276(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// lis r5,4160
	ctx.r5.s64 = 272629760;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82423f70
	ctx.lr = 0x824323D4;
	sub_82423F70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82432d70
	if (ctx.cr0.lt) goto loc_82432D70;
	// lwz r31,280(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// lis r5,4112
	ctx.r5.s64 = 269484032;
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82423f70
	ctx.lr = 0x82432404;
	sub_82423F70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82432d70
	if (ctx.cr0.lt) goto loc_82432D70;
	// lwz r28,284(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// li r9,6
	ctx.r9.s64 = 6;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82423f70
	ctx.lr = 0x82432430;
	sub_82423F70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82432d70
	if (ctx.cr0.lt) goto loc_82432D70;
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// stw r10,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
loc_82432440:
	// lwz r3,8(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwz r25,308(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// lwz r11,112(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 112);
	// rlwinm. r11,r11,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8243261c
	if (ctx.cr0.eq) goto loc_8243261C;
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(r17.u32, 0, ctx.xer);
	// beq cr6,0x824324c0
	if (ctx.cr6.eq) goto loc_824324C0;
	// clrldi r11,r17,32
	ctx.r11.u64 = r17.u64 & 0xFFFFFFFF;
	// lwz r4,120(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// li r6,0
	ctx.r6.s64 = 0;
	// std r11,192(r1)
	REX_STORE_U64(ctx.r1.u32 + 192, ctx.r11.u64);
	// li r5,0
	ctx.r5.s64 = 0;
	// lfd f0,192(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 192);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fneg f1,f0
	ctx.f1.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// bl 0x82478758
	ctx.lr = 0x82432480;
	sub_82478758(ctx, base);
	// stw r3,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r3.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82432cf8
	if (ctx.cr6.eq) goto loc_82432CF8;
	// stw r18,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, r18.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// addi r6,r1,172
	ctx.r6.s64 = ctx.r1.s64 + 172;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82423f70
	ctx.lr = 0x824324B0;
	sub_82423F70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82432d70
	if (ctx.cr0.lt) goto loc_82432D70;
	// lwz r11,172(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// stw r11,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
loc_824324C0:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82432520
	if (ctx.cr6.eq) goto loc_82432520;
	// stw r18,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, r18.u32);
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82423f70
	ctx.lr = 0x824324F8;
	sub_82423F70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82432d70
	if (ctx.cr0.lt) goto loc_82432D70;
	// lwz r11,176(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// lwz r11,20(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r10,140(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 140);
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_82432520:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,72(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 72);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// lfd f31,3728(r11)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r11.u32 + 3728);
	// bne cr6,0x824325ac
	if (!ctx.cr6.eq) goto loc_824325AC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r3,8(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 8);
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r4,r11,25272
	ctx.r4.s64 = ctx.r11.s64 + 25272;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1873
	ctx.r5.s64 = 1873;
	// bl 0x824786b8
	ctx.lr = 0x82432550;
	sub_824786B8(ctx, base);
	// stw r3,72(r30)
	REX_STORE_U32(r30.u32 + 72, ctx.r3.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82432cf8
	if (ctx.cr6.eq) goto loc_82432CF8;
	// li r29,0
	r29.s64 = 0;
loc_82432560:
	// li r31,0
	r31.s64 = 0;
loc_82432564:
	// cmplw cr6,r29,r31
	ctx.cr6.compare<uint32_t>(r29.u32, r31.u32, ctx.xer);
	// bne cr6,0x82432574
	if (!ctx.cr6.eq) goto loc_82432574;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// b 0x82432578
	goto loc_82432578;
loc_82432574:
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
loc_82432578:
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// lwz r4,72(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 72);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r3,8(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 8);
	// bl 0x82478758
	ctx.lr = 0x8243258C;
	sub_82478758(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82432cf8
	if (ctx.cr6.eq) goto loc_82432CF8;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(r31.u32, 4, ctx.xer);
	// blt cr6,0x82432564
	if (ctx.cr6.lt) goto loc_82432564;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmplwi cr6,r29,4
	ctx.cr6.compare<uint32_t>(r29.u32, 4, ctx.xer);
	// blt cr6,0x82432560
	if (ctx.cr6.lt) goto loc_82432560;
loc_824325AC:
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x82432710
	if (ctx.cr6.eq) goto loc_82432710;
	// addi r29,r25,-4
	r29.s64 = r25.s64 + -4;
loc_824325BC:
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// lwz r4,72(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 72);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,8(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 8);
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// bl 0x82478758
	ctx.lr = 0x824325D4;
	sub_82478758(ctx, base);
	// stw r3,4(r29)
	REX_STORE_U32(r29.u32 + 4, ctx.r3.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82432cf8
	if (ctx.cr6.eq) goto loc_82432CF8;
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// lwzu r11,4(r29)
	ea = 4 + r29.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	r29.u32 = ea;
	// li r9,279
	ctx.r9.s64 = 279;
	// lwz r8,160(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// cmplw cr6,r31,r22
	ctx.cr6.compare<uint32_t>(r31.u32, r22.u32, ctx.xer);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,20(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stfd f29,32(r11)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r11.u32 + 32, f29.u64);
	// stw r8,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// stfd f31,40(r11)
	REX_STORE_U64(ctx.r11.u32 + 40, f31.u64);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// blt cr6,0x824325bc
	if (ctx.cr6.lt) goto loc_824325BC;
	// b 0x82432710
	goto loc_82432710;
loc_8243261C:
	// lwz r27,292(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// li r29,0
	r29.s64 = 0;
	// lwz r26,288(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x8243268c
	if (ctx.cr6.eq) goto loc_8243268C;
	// mr r31,r27
	r31.u64 = r27.u64;
	// subf r28,r27,r26
	r28.u64 = r26.u64 - r27.u64;
	// b 0x82432640
	goto loc_82432640;
loc_8243263C:
	// lwz r10,160(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
loc_82432640:
	// stwx r10,r28,r31
	REX_STORE_U32(r28.u32 + r31.u32, ctx.r10.u32);
	// add r11,r29,r17
	ctx.r11.u64 = r29.u64 + r17.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// li r5,0
	ctx.r5.s64 = 0;
	// std r11,192(r1)
	REX_STORE_U64(ctx.r1.u32 + 192, ctx.r11.u64);
	// lfd f0,192(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 192);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lwz r3,8(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 8);
	// fneg f1,f0
	ctx.f1.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lwz r4,120(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// bl 0x82478758
	ctx.lr = 0x82432670;
	sub_82478758(ctx, base);
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82432cf8
	if (ctx.cr6.eq) goto loc_82432CF8;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r29,r22
	ctx.cr6.compare<uint32_t>(r29.u32, r22.u32, ctx.xer);
	// blt cr6,0x8243263c
	if (ctx.cr6.lt) goto loc_8243263C;
loc_8243268C:
	// lwz r29,296(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// clrlwi r31,r22,12
	r31.u64 = r22.u32 & 0xFFFFF;
	// li r9,2
	ctx.r9.s64 = 2;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// oris r5,r31,8256
	ctx.r5.u64 = r31.u64 | 541065216;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82423f70
	ctx.lr = 0x824326B4;
	sub_82423F70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82432d70
	if (ctx.cr0.lt) goto loc_82432D70;
	// lwz r28,304(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 304);
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
	// lwz r27,300(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82427618
	ctx.lr = 0x824326E0;
	sub_82427618(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82432d70
	if (ctx.cr0.lt) goto loc_82432D70;
	// li r9,23
	ctx.r9.s64 = 23;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// oris r5,r31,8240
	ctx.r5.u64 = r31.u64 | 540016640;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82423f70
	ctx.lr = 0x82432708;
	sub_82423F70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82432d70
	if (ctx.cr0.lt) goto loc_82432D70;
loc_82432710:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// beq cr6,0x82432734
	if (ctx.cr6.eq) goto loc_82432734;
	// addi r11,r16,-4
	ctx.r11.s64 = r16.s64 + -4;
	// mr r10,r18
	ctx.r10.u64 = r18.u64;
	// cmplwi r20,0
	ctx.cr0.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// beq 0x82432734
	if (ctx.cr0.eq) goto loc_82432734;
	// mtctr r20
	ctx.ctr.u64 = r20.u64;
loc_8243272C:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8243272c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8243272C;
loc_82432734:
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// beq cr6,0x82432d6c
	if (ctx.cr6.eq) goto loc_82432D6C;
	// clrlwi r11,r22,12
	ctx.r11.u64 = r22.u32 & 0xFFFFF;
	// lwz r31,312(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 312);
	// mr r28,r16
	r28.u64 = r16.u64;
	// oris r27,r11,20480
	r27.u64 = ctx.r11.u64 | 1342177280;
loc_82432750:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x82432784
	if (ctx.cr6.eq) goto loc_82432784;
	// mullw r11,r17,r20
	ctx.r11.s64 = int64_t(r17.s32) * int64_t(r20.s32);
	// mtctr r22
	ctx.ctr.u64 = r22.u64;
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + r29.u64;
	// rlwinm r11,r20,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r31,-4
	ctx.r9.s64 = r31.s64 + -4;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// add r10,r10,r19
	ctx.r10.u64 = ctx.r10.u64 + r19.u64;
loc_82432778:
	// lwzux r8,r10,r11
	ea = ctx.r10.u32 + ctx.r11.u32;
	ctx.r8.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x82432778
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82432778;
loc_82432784:
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82423f70
	ctx.lr = 0x824327A4;
	sub_82423F70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82432d70
	if (ctx.cr0.lt) goto loc_82432D70;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmplw cr6,r29,r20
	ctx.cr6.compare<uint32_t>(r29.u32, r20.u32, ctx.xer);
	// blt cr6,0x82432750
	if (ctx.cr6.lt) goto loc_82432750;
	// b 0x82432d6c
	goto loc_82432D6C;
loc_824327C0:
	// lwz r11,88(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824327d0
	if (ctx.cr6.eq) goto loc_824327D0;
	// stw r26,96(r30)
	REX_STORE_U32(r30.u32 + 96, r26.u32);
loc_824327D0:
	// mulli r11,r22,3
	ctx.r11.s64 = static_cast<int64_t>(r22.u64 * static_cast<uint64_t>(3));
	// add r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 + r20.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r31,r11,1,0,30
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82423b58
	ctx.lr = 0x824327EC;
	sub_82423B58(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82432cf8
	if (ctx.cr0.eq) goto loc_82432CF8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82432818
	if (ctx.cr6.eq) goto loc_82432818;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// mr r9,r18
	ctx.r9.u64 = r18.u64;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq 0x82432818
	if (ctx.cr0.eq) goto loc_82432818;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
loc_82432810:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82432810
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82432810;
loc_82432818:
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r9,r1,268
	ctx.r9.s64 = ctx.r1.s64 + 268;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82432824:
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82432824
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82432824;
	// li r9,6
	ctx.r9.s64 = 6;
	// rlwinm r8,r22,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,284
	ctx.r10.s64 = ctx.r1.s64 + 284;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82432840:
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// bdnz 0x82432840
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82432840;
	// li r9,2
	ctx.r9.s64 = 2;
	// rlwinm r23,r20,2,0,29
	r23.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,308
	ctx.r10.s64 = ctx.r1.s64 + 308;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8243285C:
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// add r11,r23,r11
	ctx.r11.u64 = r23.u64 + ctx.r11.u64;
	// bdnz 0x8243285c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8243285C;
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// lis r10,8256
	ctx.r10.s64 = 541065216;
	// lwz r9,8(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 8);
	// ori r27,r10,1
	r27.u64 = ctx.r10.u64 | 1;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// lwz r10,20(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// lwzx r10,r8,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82432958
	if (!ctx.cr0.eq) goto loc_82432958;
	// lwz r29,272(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// lis r5,4128
	ctx.r5.s64 = 270532608;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82423f70
	ctx.lr = 0x824328BC;
	sub_82423F70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82432d70
	if (ctx.cr0.lt) goto loc_82432D70;
	// lwz r28,276(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// lis r5,4160
	ctx.r5.s64 = 272629760;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82423f70
	ctx.lr = 0x824328EC;
	sub_82423F70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82432d70
	if (ctx.cr0.lt) goto loc_82432D70;
	// lwz r31,280(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// lis r5,4112
	ctx.r5.s64 = 269484032;
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82423f70
	ctx.lr = 0x8243291C;
	sub_82423F70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82432d70
	if (ctx.cr0.lt) goto loc_82432D70;
	// lwz r28,284(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// li r9,6
	ctx.r9.s64 = 6;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82423f70
	ctx.lr = 0x82432948;
	sub_82423F70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82432d70
	if (ctx.cr0.lt) goto loc_82432D70;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// stw r11,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
loc_82432958:
	// lwz r3,8(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwz r24,308(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// lwz r10,112(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 112);
	// rlwinm. r10,r10,0,10,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82432b3c
	if (ctx.cr0.eq) goto loc_82432B3C;
	// cmplwi cr6,r22,4
	ctx.cr6.compare<uint32_t>(r22.u32, 4, ctx.xer);
	// bgt cr6,0x82432b3c
	if (ctx.cr6.gt) goto loc_82432B3C;
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(r17.u32, 0, ctx.xer);
	// beq cr6,0x824329e0
	if (ctx.cr6.eq) goto loc_824329E0;
	// clrldi r11,r17,32
	ctx.r11.u64 = r17.u64 & 0xFFFFFFFF;
	// lwz r4,120(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// li r6,0
	ctx.r6.s64 = 0;
	// std r11,192(r1)
	REX_STORE_U64(ctx.r1.u32 + 192, ctx.r11.u64);
	// lfd f0,192(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 192);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// li r5,0
	ctx.r5.s64 = 0;
	// fneg f1,f0
	ctx.f1.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// bl 0x82478758
	ctx.lr = 0x824329A0;
	sub_82478758(ctx, base);
	// stw r3,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r3.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82432cf8
	if (ctx.cr6.eq) goto loc_82432CF8;
	// stw r18,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, r18.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// addi r6,r1,180
	ctx.r6.s64 = ctx.r1.s64 + 180;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82423f70
	ctx.lr = 0x824329D0;
	sub_82423F70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82432d70
	if (ctx.cr0.lt) goto loc_82432D70;
	// lwz r11,180(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// stw r11,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
loc_824329E0:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82432a40
	if (ctx.cr6.eq) goto loc_82432A40;
	// stw r18,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, r18.u32);
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// addi r6,r1,184
	ctx.r6.s64 = ctx.r1.s64 + 184;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82423f70
	ctx.lr = 0x82432A18;
	sub_82423F70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82432d70
	if (ctx.cr0.lt) goto loc_82432D70;
	// lwz r11,184(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// lwz r11,140(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 140);
	// lwz r10,20(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
loc_82432A40:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,72(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 72);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// lfd f31,3728(r11)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r11.u32 + 3728);
	// bne cr6,0x82432acc
	if (!ctx.cr6.eq) goto loc_82432ACC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r3,8(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 8);
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r4,r11,25272
	ctx.r4.s64 = ctx.r11.s64 + 25272;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1873
	ctx.r5.s64 = 1873;
	// bl 0x824786b8
	ctx.lr = 0x82432A70;
	sub_824786B8(ctx, base);
	// stw r3,72(r30)
	REX_STORE_U32(r30.u32 + 72, ctx.r3.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82432cf8
	if (ctx.cr6.eq) goto loc_82432CF8;
	// li r29,0
	r29.s64 = 0;
loc_82432A80:
	// li r31,0
	r31.s64 = 0;
loc_82432A84:
	// cmplw cr6,r29,r31
	ctx.cr6.compare<uint32_t>(r29.u32, r31.u32, ctx.xer);
	// bne cr6,0x82432a94
	if (!ctx.cr6.eq) goto loc_82432A94;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// b 0x82432a98
	goto loc_82432A98;
loc_82432A94:
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
loc_82432A98:
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// lwz r4,72(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 72);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r3,8(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 8);
	// bl 0x82478758
	ctx.lr = 0x82432AAC;
	sub_82478758(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82432cf8
	if (ctx.cr6.eq) goto loc_82432CF8;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(r31.u32, 4, ctx.xer);
	// blt cr6,0x82432a84
	if (ctx.cr6.lt) goto loc_82432A84;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmplwi cr6,r29,4
	ctx.cr6.compare<uint32_t>(r29.u32, 4, ctx.xer);
	// blt cr6,0x82432a80
	if (ctx.cr6.lt) goto loc_82432A80;
loc_82432ACC:
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x82432c30
	if (ctx.cr6.eq) goto loc_82432C30;
	// addi r29,r24,-4
	r29.s64 = r24.s64 + -4;
loc_82432ADC:
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// lwz r4,72(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 72);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,8(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 8);
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// bl 0x82478758
	ctx.lr = 0x82432AF4;
	sub_82478758(ctx, base);
	// stw r3,4(r29)
	REX_STORE_U32(r29.u32 + 4, ctx.r3.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82432cf8
	if (ctx.cr6.eq) goto loc_82432CF8;
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// lwzu r11,4(r29)
	ea = 4 + r29.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	r29.u32 = ea;
	// li r9,279
	ctx.r9.s64 = 279;
	// lwz r8,160(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// cmplw cr6,r31,r22
	ctx.cr6.compare<uint32_t>(r31.u32, r22.u32, ctx.xer);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,20(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stfd f29,32(r11)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r11.u32 + 32, f29.u64);
	// stw r8,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// stfd f31,40(r11)
	REX_STORE_U64(ctx.r11.u32 + 40, f31.u64);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// blt cr6,0x82432adc
	if (ctx.cr6.lt) goto loc_82432ADC;
	// b 0x82432c30
	goto loc_82432C30;
loc_82432B3C:
	// lwz r27,292(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// li r29,0
	r29.s64 = 0;
	// lwz r26,288(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x82432bac
	if (ctx.cr6.eq) goto loc_82432BAC;
	// mr r31,r27
	r31.u64 = r27.u64;
	// subf r28,r27,r26
	r28.u64 = r26.u64 - r27.u64;
	// b 0x82432b60
	goto loc_82432B60;
loc_82432B5C:
	// lwz r11,160(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
loc_82432B60:
	// add r10,r29,r17
	ctx.r10.u64 = r29.u64 + r17.u64;
	// stwx r11,r28,r31
	REX_STORE_U32(r28.u32 + r31.u32, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// clrldi r11,r10,32
	ctx.r11.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// li r5,0
	ctx.r5.s64 = 0;
	// std r11,192(r1)
	REX_STORE_U64(ctx.r1.u32 + 192, ctx.r11.u64);
	// lwz r3,8(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lfd f0,192(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 192);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lwz r4,120(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// fneg f1,f0
	ctx.f1.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// bl 0x82478758
	ctx.lr = 0x82432B90;
	sub_82478758(ctx, base);
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82432cf8
	if (ctx.cr6.eq) goto loc_82432CF8;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r29,r22
	ctx.cr6.compare<uint32_t>(r29.u32, r22.u32, ctx.xer);
	// blt cr6,0x82432b5c
	if (ctx.cr6.lt) goto loc_82432B5C;
loc_82432BAC:
	// lwz r29,296(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// clrlwi r31,r22,12
	r31.u64 = r22.u32 & 0xFFFFF;
	// li r9,2
	ctx.r9.s64 = 2;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// oris r5,r31,8256
	ctx.r5.u64 = r31.u64 | 541065216;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82423f70
	ctx.lr = 0x82432BD4;
	sub_82423F70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82432d70
	if (ctx.cr0.lt) goto loc_82432D70;
	// lwz r28,304(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 304);
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
	// lwz r27,300(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82427618
	ctx.lr = 0x82432C00;
	sub_82427618(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82432d70
	if (ctx.cr0.lt) goto loc_82432D70;
	// li r9,23
	ctx.r9.s64 = 23;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// oris r5,r31,8240
	ctx.r5.u64 = r31.u64 | 540016640;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82423f70
	ctx.lr = 0x82432C28;
	sub_82423F70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82432d70
	if (ctx.cr0.lt) goto loc_82432D70;
loc_82432C30:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// beq cr6,0x82432c4c
	if (ctx.cr6.eq) goto loc_82432C4C;
	// mtctr r20
	ctx.ctr.u64 = r20.u64;
	// addi r11,r16,-4
	ctx.r11.s64 = r16.s64 + -4;
loc_82432C40:
	// lwz r10,36(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 36);
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82432c40
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82432C40;
loc_82432C4C:
	// li r25,0
	r25.s64 = 0;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x82432d6c
	if (ctx.cr6.eq) goto loc_82432D6C;
	// mullw r11,r17,r20
	ctx.r11.s64 = int64_t(r17.s32) * int64_t(r20.s32);
	// lwz r27,316(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// lwz r28,312(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 312);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r26,r24
	r26.u64 = r24.u64;
	// add r29,r11,r19
	r29.u64 = ctx.r11.u64 + r19.u64;
loc_82432C70:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// beq cr6,0x82432cbc
	if (ctx.cr6.eq) goto loc_82432CBC;
	// mr r11,r16
	ctx.r11.u64 = r16.u64;
	// mtctr r20
	ctx.ctr.u64 = r20.u64;
	// subf r10,r16,r28
	ctx.r10.u64 = r28.u64 - r16.u64;
	// subf r9,r16,r27
	ctx.r9.u64 = r27.u64 - r16.u64;
loc_82432C88:
	// lwz r8,0(r26)
	ctx.r8.u64 = REX_LOAD_U32(r26.u32 + 0);
	// stwx r8,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r8,r9,r11
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82432c88
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82432C88;
	// addi r11,r16,-4
	ctx.r11.s64 = r16.s64 + -4;
	// mr r10,r18
	ctx.r10.u64 = r18.u64;
	// cmplwi r20,0
	ctx.cr0.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// beq 0x82432cbc
	if (ctx.cr0.eq) goto loc_82432CBC;
	// mtctr r20
	ctx.ctr.u64 = r20.u64;
loc_82432CB4:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82432cb4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82432CB4;
loc_82432CBC:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwz r11,108(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// rlwinm. r10,r11,0,8,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82432d04
	if (ctx.cr0.eq) goto loc_82432D04;
	// rlwinm. r11,r11,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82432d04
	if (!ctx.cr0.eq) goto loc_82432D04;
	// mr r9,r20
	ctx.r9.u64 = r20.u64;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r16
	ctx.r5.u64 = r16.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824269e8
	ctx.lr = 0x82432CF4;
	sub_824269E8(ctx, base);
	// b 0x82432d50
	goto loc_82432D50;
loc_82432CF8:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82432d70
	goto loc_82432D70;
loc_82432D04:
	// clrlwi r31,r20,12
	r31.u64 = r20.u32 & 0xFFFFF;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r16
	ctx.r6.u64 = r16.u64;
	// oris r5,r31,8272
	ctx.r5.u64 = r31.u64 | 542113792;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82423f70
	ctx.lr = 0x82432D28;
	sub_82423F70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82432d70
	if (ctx.cr0.lt) goto loc_82432D70;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r7,r16
	ctx.r7.u64 = r16.u64;
	// mr r6,r16
	ctx.r6.u64 = r16.u64;
	// oris r5,r31,8256
	ctx.r5.u64 = r31.u64 | 541065216;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82423f70
	ctx.lr = 0x82432D50;
	sub_82423F70(ctx, base);
loc_82432D50:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82432d70
	if (ctx.cr0.lt) goto loc_82432D70;
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// add r29,r29,r23
	r29.u64 = r29.u64 + r23.u64;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// cmplw cr6,r25,r22
	ctx.cr6.compare<uint32_t>(r25.u32, r22.u32, ctx.xer);
	// blt cr6,0x82432c70
	if (ctx.cr6.lt) goto loc_82432C70;
loc_82432D6C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82432D70:
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// lfd f29,-160(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// lfd f30,-152(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -152);
	// lfd f31,-144(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -144);
	// b 0x826a1cd8
	return;
}

DEFINE_REX_FUNC(sub_824C6FC0) {
	REX_FUNC_PROLOGUE();
	// lis r3,15
	ctx.r3.s64 = 983040;
	// ori r3,r3,16960
	ctx.r3.u64 = ctx.r3.u64 | 16960;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824C71E8) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x826a1ca8
	ctx.lr = 0x824C71F0;
	// lwz r10,36(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// li r27,0
	r27.s64 = 0;
	// lwz r29,428(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 428);
	// lwz r11,220(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 220);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r28,320(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 320);
	// ble cr6,0x824c72d0
	if (!ctx.cr6.gt) goto loc_824C72D0;
	// li r31,0
	r31.s64 = 0;
	// addi r30,r11,12
	r30.s64 = ctx.r11.s64 + 12;
loc_824C7214:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,24(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 24);
	// lwz r6,320(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 320);
	// mullw r5,r11,r10
	ctx.r5.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// lwz r11,60(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 60);
	// lwz r4,56(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 56);
	// lwzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	// lwzx r7,r31,r4
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + ctx.r4.u32);
	// rotlwi r10,r5,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// divw. r11,r5,r6
	ctx.r11.u64 = uint32_t((ctx.r6.s32 && !(ctx.r5.s32 == INT32_MIN && ctx.r6.s32 == -1)) ? ctx.r5.s32 / ctx.r6.s32 : 0);
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// twllei r6,0
	if (ctx.r6.s32 == 0 || ctx.r6.u32 < 0u) ppc_trap(ctx, base, 0);
	// andc r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 & ~ctx.r10.u64;
	// twlgei r6,-1
	if (ctx.r6.s32 == -1 || ctx.r6.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// ble 0x824c72b8
	if (!ctx.cr0.gt) goto loc_824C72B8;
	// addi r10,r28,1
	ctx.r10.s64 = r28.s64 + 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r6,r28,2
	ctx.r6.s64 = r28.s64 + 2;
	// rlwinm r26,r11,2,0,29
	r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mullw r5,r10,r11
	ctx.r5.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// mullw r4,r6,r11
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r11.s32);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// subf r11,r26,r9
	ctx.r11.u64 = ctx.r9.u64 - r26.u64;
	// subf r6,r9,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r9.u64;
loc_824C7278:
	// add r26,r5,r8
	r26.u64 = ctx.r5.u64 + ctx.r8.u64;
	// add r25,r4,r8
	r25.u64 = ctx.r4.u64 + ctx.r8.u64;
	// rlwinm r26,r26,2,0,29
	r26.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r25,r25,2,0,29
	r25.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lwzx r24,r26,r7
	r24.u64 = REX_LOAD_U32(r26.u32 + ctx.r7.u32);
	// stwx r24,r6,r11
	REX_STORE_U32(ctx.r6.u32 + ctx.r11.u32, r24.u32);
	// lwzx r26,r26,r9
	r26.u64 = REX_LOAD_U32(r26.u32 + ctx.r9.u32);
	// stw r26,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r26.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwzx r26,r6,r10
	r26.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// stwx r26,r25,r7
	REX_STORE_U32(r25.u32 + ctx.r7.u32, r26.u32);
	// lwz r26,0(r10)
	r26.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stwx r26,r25,r9
	REX_STORE_U32(r25.u32 + ctx.r9.u32, r26.u32);
	// bdnz 0x824c7278
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824C7278;
loc_824C72B8:
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// addi r30,r30,84
	r30.s64 = r30.s64 + 84;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x824c7214
	if (ctx.cr6.lt) goto loc_824C7214;
loc_824C72D0:
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_824CCC78) {
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
	ctx.lr = 0x824CCC80;
	// lwz r8,8(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// li r11,16
	ctx.r11.s64 = 16;
	// addi r10,r3,2868
	ctx.r10.s64 = ctx.r3.s64 + 2868;
	// lwz r26,0(r4)
	r26.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r24,4(r4)
	r24.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// li r29,0
	r29.s64 = 0;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r4,0(r8)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r27,4(r8)
	r27.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r30,8(r8)
	r30.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r28,16(r8)
	r28.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
loc_824CCCB4:
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x824cccb4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824CCCB4;
	// lwz r11,5196(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 5196);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,725
	ctx.r11.s64 = ctx.r11.s64 + 725;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + r26.u64;
	// sth r10,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// lwz r11,5196(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 5196);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,573
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 573, ctx.xer);
	// bge cr6,0x824cceb4
	if (!ctx.cr6.lt) goto loc_824CCEB4;
	// subfic r10,r11,573
	ctx.xer.ca = ctx.r11.u32 <= 573;
	ctx.r10.u64 = static_cast<uint64_t>(573) - ctx.r11.u64;
	// addi r9,r11,725
	ctx.r9.s64 = ctx.r11.s64 + 725;
	// add r25,r10,r11
	r25.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r9,r3
	r31.u64 = ctx.r9.u64 + ctx.r3.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_824CCD04:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r5,r26
	ctx.r6.u64 = ctx.r5.u64 + r26.u64;
	// lhz r11,2(r6)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r6.u32 + 2);
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + r26.u64;
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r28.s32, ctx.xer);
	// ble cr6,0x824ccd34
	if (!ctx.cr6.gt) goto loc_824CCD34;
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
loc_824CCD34:
	// cmpw cr6,r10,r24
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r24.s32, ctx.xer);
	// sth r11,2(r6)
	REX_STORE_U16(ctx.r6.u32 + 2, ctx.r11.u16);
	// bgt cr6,0x824ccdac
	if (ctx.cr6.gt) goto loc_824CCDAC;
	// addi r8,r11,1434
	ctx.r8.s64 = ctx.r11.s64 + 1434;
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r10,r30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r30.s32, ctx.xer);
	// lhzx r7,r8,r3
	ctx.r7.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r3.u32);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// sthx r7,r8,r3
	REX_STORE_U16(ctx.r8.u32 + ctx.r3.u32, ctx.r7.u16);
	// blt cr6,0x824ccd6c
	if (ctx.cr6.lt) goto loc_824CCD6C;
	// subf r10,r30,r10
	ctx.r10.u64 = ctx.r10.u64 - r30.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r27
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + r27.u32);
loc_824CCD6C:
	// lhz r10,0(r6)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r6.u32 + 0);
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r8,5792(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 5792);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// mullw r10,r7,r10
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r10,5792(r3)
	REX_STORE_U32(ctx.r3.u32 + 5792, ctx.r10.u32);
	// beq cr6,0x824ccdac
	if (ctx.cr6.eq) goto loc_824CCDAC;
	// add r8,r5,r4
	ctx.r8.u64 = ctx.r5.u64 + ctx.r4.u64;
	// lwz r10,5796(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 5796);
	// lhz r8,2(r8)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r8.u32 + 2);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,5796(r3)
	REX_STORE_U32(ctx.r3.u32 + 5796, ctx.r11.u32);
loc_824CCDAC:
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bdnz 0x824ccd04
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824CCD04;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x824cceb4
	if (ctx.cr6.eq) goto loc_824CCEB4;
	// addi r11,r28,1434
	ctx.r11.s64 = r28.s64 + 1434;
	// addi r6,r28,-1
	ctx.r6.s64 = r28.s64 + -1;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r3
	ctx.r7.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r9,r11,65535
	ctx.r9.u64 = ctx.r11.u64 | 65535;
loc_824CCDD4:
	// addi r10,r6,1434
	ctx.r10.s64 = ctx.r6.s64 + 1434;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lhz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// b 0x824ccdf4
	goto loc_824CCDF4;
loc_824CCDEC:
	// lhzu r8,-2(r10)
	ea = -2 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_824CCDF4:
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x824ccdec
	if (ctx.cr0.eq) goto loc_824CCDEC;
	// addi r10,r11,1434
	ctx.r10.s64 = ctx.r11.s64 + 1434;
	// addi r11,r11,1435
	ctx.r11.s64 = ctx.r11.s64 + 1435;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addic. r29,r29,-2
	ctx.xer.ca = r29.u32 > 1;
	r29.s64 = r29.s64 + -2;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// lhzx r5,r10,r3
	ctx.r5.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r3.u32);
	// lhzx r8,r11,r3
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r3.u32);
	// add r5,r5,r9
	ctx.r5.u64 = ctx.r5.u64 + ctx.r9.u64;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// sthx r5,r10,r3
	REX_STORE_U16(ctx.r10.u32 + ctx.r3.u32, ctx.r5.u16);
	// sthx r8,r11,r3
	REX_STORE_U16(ctx.r11.u32 + ctx.r3.u32, ctx.r8.u16);
	// lhz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r7.u32 + 0);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// sth r11,0(r7)
	REX_STORE_U16(ctx.r7.u32 + 0, ctx.r11.u16);
	// bgt 0x824ccdd4
	if (ctx.cr0.gt) goto loc_824CCDD4;
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x824cceb4
	if (ctx.cr6.eq) goto loc_824CCEB4;
loc_824CCE44:
	// lhz r5,0(r7)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r7.u32 + 0);
	// cmpwi r5,0
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x824ccea8
	if (ctx.cr0.eq) goto loc_824CCEA8;
	// addi r11,r25,725
	ctx.r11.s64 = r25.s64 + 725;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r3
	ctx.r6.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_824CCE5C:
	// lwzu r11,-4(r6)
	ea = -4 + ctx.r6.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r6.u32 = ea;
	// addi r25,r25,-1
	r25.s64 = r25.s64 + -1;
	// cmpw cr6,r11,r24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r24.s32, ctx.xer);
	// bgt cr6,0x824ccea0
	if (ctx.cr6.gt) goto loc_824CCEA0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + r26.u64;
	// lhz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x824cce9c
	if (ctx.cr6.eq) goto loc_824CCE9C;
	// lhz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// subf r10,r10,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r10.u64;
	// lwz r8,5792(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 5792);
	// mullw r10,r10,r4
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r10,5792(r3)
	REX_STORE_U32(ctx.r3.u32 + 5792, ctx.r10.u32);
	// sth r9,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r9.u16);
loc_824CCE9C:
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
loc_824CCEA0:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x824cce5c
	if (!ctx.cr6.eq) goto loc_824CCE5C;
loc_824CCEA8:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r7,r7,-2
	ctx.r7.s64 = ctx.r7.s64 + -2;
	// bne 0x824cce44
	if (!ctx.cr0.eq) goto loc_824CCE44;
loc_824CCEB4:
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_824DA8E0) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x824da914
	if (!ctx.cr6.gt) goto loc_824DA914;
	// bl 0x824d7ff8
	ctx.lr = 0x824DA914;
	sub_824D7FF8(ctx, base);
loc_824DA914:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r5,24
	ctx.r5.s64 = 24;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mulli r11,r11,24
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(24));
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x826a1e70
	ctx.lr = 0x824DA930;
	sub_826A1E70(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_824DC230) {
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
	ctx.lr = 0x824DC238;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,144(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 144);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// mr r23,r8
	r23.u64 = ctx.r8.u64;
	// addi r26,r3,144
	r26.s64 = ctx.r3.s64 + 144;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x824dc314
	if (ctx.cr6.lt) goto loc_824DC314;
	// lwz r31,120(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bgt cr6,0x824dc2a4
	if (ctx.cr6.gt) goto loc_824DC2A4;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r27,r4,1
	r27.s64 = ctx.r4.s64 + 1;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x824dc294
	if (!ctx.cr6.gt) goto loc_824DC294;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d7ff8
	ctx.lr = 0x824DC294;
	sub_824D7FF8(ctx, base);
loc_824DC294:
	// stw r27,4(r31)
	REX_STORE_U32(r31.u32 + 4, r27.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x824dc314
	if (ctx.cr6.lt) goto loc_824DC314;
loc_824DC2A4:
	// lwz r10,120(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 120);
	// mulli r11,r30,24
	ctx.r11.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(24));
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// add r31,r11,r10
	r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwx r30,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, r30.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// bgt cr6,0x824dc2f8
	if (ctx.cr6.gt) goto loc_824DC2F8;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r28,r29,1
	r28.s64 = r29.s64 + 1;
	// addi r30,r31,12
	r30.s64 = r31.s64 + 12;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x824dc2e8
	if (!ctx.cr6.gt) goto loc_824DC2E8;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824d83e8
	ctx.lr = 0x824DC2E8;
	sub_824D83E8(ctx, base);
loc_824DC2E8:
	// stw r28,4(r30)
	REX_STORE_U32(r30.u32 + 4, r28.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x824dc314
	if (ctx.cr6.lt) goto loc_824DC314;
loc_824DC2F8:
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mulli r11,r29,28
	ctx.r11.s64 = static_cast<int64_t>(r29.u64 * static_cast<uint64_t>(28));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r29.u32);
	// stw r25,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r25.u32);
	// stw r24,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r24.u32);
	// stw r23,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r23.u32);
loc_824DC314:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_824E18B8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x824E18C0;
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r9
	r29.u64 = ctx.r9.u64;
	// stw r9,212(r31)
	REX_STORE_U32(r31.u32 + 212, ctx.r9.u32);
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
	// stw r10,220(r31)
	REX_STORE_U32(r31.u32 + 220, ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x824e18ec
	if (!ctx.cr6.eq) goto loc_824E18EC;
loc_824E18E0:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x824e19a0
	goto loc_824E19A0;
loc_824E18EC:
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// blt cr6,0x824e18e0
	if (ctx.cr6.lt) goto loc_824E18E0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x824e18e0
	if (ctx.cr6.eq) goto loc_824E18E0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x824e18e0
	if (ctx.cr6.eq) goto loc_824E18E0;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,236(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 236);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// lwz r30,228(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 228);
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// bl 0x824e0ea8
	ctx.lr = 0x824E1928;
	sub_824E0EA8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// stw r30,96(r31)
	REX_STORE_U32(r31.u32 + 96, r30.u32);
	// bge 0x824e1960
	if (!ctx.cr0.lt) goto loc_824E1960;
	// lis r11,-30602
	ctx.r11.s64 = -2005532672;
	// ori r11,r11,2921
	ctx.r11.u64 = ctx.r11.u64 | 2921;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x824e1960
	if (!ctx.cr6.eq) goto loc_824E1960;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mtctr r28
	ctx.ctr.u64 = r28.u64;
	// li r5,48
	ctx.r5.s64 = 48;
	// addi r6,r11,24356
	ctx.r6.s64 = ctx.r11.s64 + 24356;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bctrl 
	ctx.lr = 0x824E1960;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824E1960:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x824e199c
	goto loc_824E199C;
loc_824E199C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_824E19A0:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_824E6318) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x824E6320;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r30,0(r5)
	r30.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// rlwimi r9,r3,12,21,23
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 12) & 0x700) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm. r7,r3,0,11,11
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x100000;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// rlwinm r11,r3,8,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xF;
	// rlwinm r29,r3,0,12,15
	r29.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xF0000;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// rlwinm r3,r9,24,27,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0x1F;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// clrlwi r4,r10,21
	ctx.r4.u64 = ctx.r10.u32 & 0x7FF;
	// li r9,0
	ctx.r9.s64 = 0;
	// beq 0x824e635c
	if (ctx.cr0.eq) goto loc_824E635C;
	// li r9,256
	ctx.r9.s64 = 256;
loc_824E635C:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824e6398
	if (ctx.cr6.eq) goto loc_824E6398;
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824e6384
	if (ctx.cr0.eq) goto loc_824E6384;
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,-19976
	ctx.r10.s64 = ctx.r10.s64 + -19976;
	// b 0x824e638c
	goto loc_824E638C;
loc_824E6384:
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r10,r10,-19992
	ctx.r10.s64 = ctx.r10.s64 + -19992;
loc_824E638C:
	// rlwinm r11,r11,2,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r10,r11,9,0,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0xFFFFFE00;
loc_824E6398:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// or r31,r10,r9
	r31.u64 = ctx.r10.u64 | ctx.r9.u64;
	// bl 0x824e5c68
	ctx.lr = 0x824E63A8;
	sub_824E5C68(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x824e63d0
	if (!ctx.cr6.eq) goto loc_824E63D0;
	// lis r11,15
	ctx.r11.s64 = 983040;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x824e63d0
	if (!ctx.cr6.eq) goto loc_824E63D0;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwimi r3,r10,16,10,15
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x3F0000) | (ctx.r3.u64 & 0xFFFFFFFFFFC0FFFF);
	// clrlwi r10,r3,10
	ctx.r10.u64 = ctx.r3.u32 & 0x3FFFFF;
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// b 0x824e6424
	goto loc_824E6424;
loc_824E63D0:
	// rlwinm. r10,r29,0,15,15
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x824e63e0
	if (ctx.cr0.eq) goto loc_824E63E0;
	// li r11,1
	ctx.r11.s64 = 1;
loc_824E63E0:
	// rlwinm. r10,r29,0,14,14
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824e63ec
	if (ctx.cr0.eq) goto loc_824E63EC;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
loc_824E63EC:
	// rlwinm. r10,r29,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824e63f8
	if (ctx.cr0.eq) goto loc_824E63F8;
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
loc_824E63F8:
	// rlwinm. r10,r29,0,12,12
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824e6404
	if (ctx.cr0.eq) goto loc_824E6404;
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
loc_824E6404:
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r9,64
	ctx.r9.s64 = 4194304;
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// rlwimi r9,r10,16,10,15
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x3F0000) | (ctx.r9.u64 & 0xFFFFFFFFFFC0FFFF);
	// or r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 | r31.u64;
	// or r10,r9,r8
	ctx.r10.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// stwu r11,4(r30)
	ea = 4 + r30.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	r30.u32 = ea;
loc_824E6424:
	// addi r11,r30,4
	ctx.r11.s64 = r30.s64 + 4;
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_824EF1E0) {
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
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x825a2698
	ctx.lr = 0x824EF20C;
	sub_825A2698(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x824ef238
	if (!ctx.cr0.eq) goto loc_824EF238;
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
	// li r7,2712
	ctx.r7.s64 = 2712;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824EF238;
	sub_824EA978(ctx, base);
loc_824EF238:
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

DEFINE_REX_FUNC(sub_824F03B8) {
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
	// bne cr6,0x824f03f4
	if (!ctx.cr6.eq) goto loc_824F03F4;
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
	// li r7,472
	ctx.r7.s64 = 472;
	// bl 0x824ea978
	ctx.lr = 0x824F03F4;
	sub_824EA978(ctx, base);
loc_824F03F4:
	// lwz r3,40(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 40);
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

DEFINE_REX_FUNC(sub_824F1758) {
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
	ctx.lr = 0x824F1760;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// li r30,0
	r30.s64 = 0;
	// li r23,0
	r23.s64 = 0;
	// li r29,0
	r29.s64 = 0;
	// li r27,0
	r27.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r28,r11,22852
	r28.s64 = ctx.r11.s64 + 22852;
	// addi r26,r10,-24960
	r26.s64 = ctx.r10.s64 + -24960;
	// bne cr6,0x824f17b0
	if (!ctx.cr6.eq) goto loc_824F17B0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addi r5,r11,-24968
	ctx.r5.s64 = ctx.r11.s64 + -24968;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,401
	ctx.r7.s64 = 401;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824F17B0;
	sub_824EA978(ctx, base);
loc_824F17B0:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// bne cr6,0x824f17d4
	if (!ctx.cr6.eq) goto loc_824F17D4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addi r5,r11,-24840
	ctx.r5.s64 = ctx.r11.s64 + -24840;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,402
	ctx.r7.s64 = 402;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824F17D4;
	sub_824EA978(ctx, base);
loc_824F17D4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x824f194c
	if (ctx.cr6.eq) goto loc_824F194C;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x824f194c
	if (ctx.cr6.eq) goto loc_824F194C;
	// li r11,32
	ctx.r11.s64 = 32;
	// addi r25,r31,16
	r25.s64 = r31.s64 + 16;
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_824F17F4:
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r11,r11,0,8,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF00000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824f1804
	if (ctx.cr0.eq) goto loc_824F1804;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
loc_824F1804:
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// bdnz 0x824f17f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824F17F4;
	// li r11,128
	ctx.r11.s64 = 128;
	// addi r24,r31,1168
	r24.s64 = r31.s64 + 1168;
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_824F181C:
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r11,r11,0,8,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824f182c
	if (ctx.cr0.eq) goto loc_824F182C;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
loc_824F182C:
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// bdnz 0x824f181c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824F181C;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x824f1844
	if (!ctx.cr6.eq) goto loc_824F1844;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x824f188c
	if (ctx.cr6.eq) goto loc_824F188C;
loc_824F1844:
	// mulli r11,r29,3
	ctx.r11.s64 = static_cast<int64_t>(r29.u64 * static_cast<uint64_t>(3));
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bctrl 
	ctx.lr = 0x824F1864;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x824f1898
	if (!ctx.cr0.eq) goto loc_824F1898;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addi r5,r11,-24848
	ctx.r5.s64 = ctx.r11.s64 + -24848;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,443
	ctx.r7.s64 = 443;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824F1888;
	sub_824EA978(ctx, base);
	// li r23,16
	r23.s64 = 16;
loc_824F188C:
	// stw r30,0(r22)
	REX_STORE_U32(r22.u32 + 0, r30.u32);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// b 0x824f1950
	goto loc_824F1950;
loc_824F1898:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r11,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r11.u32);
	// stw r29,8(r30)
	REX_STORE_U32(r30.u32 + 8, r29.u32);
	// stw r27,12(r30)
	REX_STORE_U32(r30.u32 + 12, r27.u32);
	// beq cr6,0x824f18f0
	if (ctx.cr6.eq) goto loc_824F18F0;
	// addi r28,r30,16
	r28.s64 = r30.s64 + 16;
	// mr r31,r25
	r31.u64 = r25.u64;
loc_824F18C0:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm. r11,r11,0,8,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF00000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824f18e4
	if (ctx.cr0.eq) goto loc_824F18E4;
	// li r5,36
	ctx.r5.s64 = 36;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826a1e70
	ctx.lr = 0x824F18DC;
	sub_826A1E70(ctx, base);
	// addi r28,r28,36
	r28.s64 = r28.s64 + 36;
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
loc_824F18E4:
	// addi r31,r31,36
	r31.s64 = r31.s64 + 36;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x824f18c0
	if (!ctx.cr6.eq) goto loc_824F18C0;
loc_824F18F0:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x824f188c
	if (ctx.cr6.eq) goto loc_824F188C;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// mulli r11,r11,36
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(36));
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// beq cr6,0x824f188c
	if (ctx.cr6.eq) goto loc_824F188C;
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
loc_824F1918:
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm. r8,r8,0,8,11
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xF00000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x824f1940
	if (ctx.cr0.eq) goto loc_824F1940;
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r8,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
loc_824F1940:
	// addi r9,r9,36
	ctx.r9.s64 = ctx.r9.s64 + 36;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// b 0x824f1918
	goto loc_824F1918;
loc_824F194C:
	// li r3,25
	ctx.r3.s64 = 25;
loc_824F1950:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_82503B90) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82503B98) {
	REX_FUNC_PROLOGUE();
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82503c2c
	if (ctx.cr6.eq) goto loc_82503C2C;
loc_82503BA4:
	// lwz r8,4(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
loc_82503BA8:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82503c20
	if (ctx.cr6.eq) goto loc_82503C20;
	// lwz r10,16(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82503c18
	if (ctx.cr6.eq) goto loc_82503C18;
	// lwz r11,28(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// lwz r7,28(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 28);
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x82503c18
	if (!ctx.cr6.eq) goto loc_82503C18;
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r7,r11,0,18,24
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r7,14336
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 14336, ctx.xer);
	// beq cr6,0x82503c18
	if (ctx.cr6.eq) goto loc_82503C18;
	// rlwinm. r11,r11,6,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82503c18
	if (ctx.cr0.eq) goto loc_82503C18;
	// lwz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// rlwinm. r7,r11,7,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x82503c18
	if (!ctx.cr0.eq) goto loc_82503C18;
	// lwz r10,20(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r7,16(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r6,20(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// rlwimi r11,r10,27,5,31
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF) | (ctx.r11.u64 & 0xFFFFFFFFF8000000);
	// rlwimi r7,r6,27,5,31
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x7FFFFFF) | (ctx.r7.u64 & 0xFFFFFFFFF8000000);
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// clrlwi r10,r7,1
	ctx.r10.u64 = ctx.r7.u32 & 0x7FFFFFFF;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// rlwinm. r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82503c34
	if (!ctx.cr0.eq) goto loc_82503C34;
loc_82503C18:
	// lwz r8,8(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// b 0x82503ba8
	goto loc_82503BA8;
loc_82503C20:
	// lwz r9,32(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82503ba4
	if (!ctx.cr6.eq) goto loc_82503BA4;
loc_82503C2C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82503C34:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8250AE78) {
	REX_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
loc_8250AE7C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8250aed0
	if (ctx.cr6.eq) goto loc_8250AED0;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm. r11,r10,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8250ae9c
	if (!ctx.cr0.eq) goto loc_8250AE9C;
	// rlwinm. r11,r10,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x8250aea0
	if (ctx.cr0.eq) goto loc_8250AEA0;
loc_8250AE9C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8250AEA0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8250aebc
	if (ctx.cr0.eq) goto loc_8250AEBC;
	// rlwinm r11,r10,19,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0xFFF;
	// addi r10,r4,1
	ctx.r10.s64 = ctx.r4.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8250aec0
	if (ctx.cr6.eq) goto loc_8250AEC0;
loc_8250AEBC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8250AEC0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x8250ae7c
	goto loc_8250AE7C;
loc_8250AED0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8250F3B8) {
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
	// cmplwi cr6,r4,10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 10, ctx.xer);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bgt cr6,0x8250f3e0
	if (ctx.cr6.gt) goto loc_8250F3E0;
	// li r30,10
	r30.s64 = 10;
loc_8250F3E0:
	// mulli r11,r30,36
	ctx.r11.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(36));
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f7d10
	ctx.lr = 0x8250F3F0;
	sub_824F7D10(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r30,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r30.u32);
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// ori r8,r31,1
	ctx.r8.u64 = r31.u64 | 1;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
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

DEFINE_REX_FUNC(sub_825180E0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x825180E8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// add r28,r4,r5
	r28.u64 = ctx.r4.u64 + ctx.r5.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r28
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, r28.u32, ctx.xer);
	// bge cr6,0x8251816c
	if (!ctx.cr6.lt) goto loc_8251816C;
	// rlwinm r31,r4,2,0,29
	r31.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
loc_82518104:
	// rlwinm r11,r31,26,6,31
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 26) & 0x3FFFFFF;
	// addi r10,r31,3
	ctx.r10.s64 = r31.s64 + 3;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrldi r10,r10,58
	ctx.r10.u64 = ctx.r10.u64 & 0x3F;
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// li r9,2
	ctx.r9.s64 = 2;
	// sld r11,r9,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r10.u8 & 0x7F));
	// ldx r10,r8,r29
	ctx.r10.u64 = REX_LOAD_U64(ctx.r8.u32 + r29.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// clrldi r9,r31,58
	ctx.r9.u64 = r31.u64 & 0x3F;
	// li r8,-1
	ctx.r8.s64 = -1;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// sld r10,r8,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r9.u8 & 0x7F));
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// srd r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// subfic r4,r11,15
	ctx.xer.ca = ctx.r11.u32 <= 15;
	ctx.r4.u64 = static_cast<uint64_t>(15) - ctx.r11.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8251815c
	if (ctx.cr6.eq) goto loc_8251815C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// rlwimi r4,r30,4,0,27
	ctx.r4.u64 = (__builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0) | (ctx.r4.u64 & 0xFFFFFFFF0000000F);
	// bl 0x8251ecc8
	ctx.lr = 0x8251815C;
	sub_8251ECC8(ctx, base);
loc_8251815C:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(r30.u32, r28.u32, ctx.xer);
	// blt cr6,0x82518104
	if (ctx.cr6.lt) goto loc_82518104;
loc_8251816C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8251F120) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8251F128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x8251e9d0
	ctx.lr = 0x8251F148;
	sub_8251E9D0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x8251f170
	if (!ctx.cr6.eq) goto loc_8251F170;
	// clrlwi. r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8251f168
	if (ctx.cr0.eq) goto loc_8251F168;
	// li r4,3569
	ctx.r4.s64 = 3569;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x824e4368
	ctx.lr = 0x8251F168;
	sub_824E4368(ctx, base);
loc_8251F168:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8251f1a8
	goto loc_8251F1A8;
loc_8251F170:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// clrlwi r3,r31,28
	ctx.r3.u64 = r31.u32 & 0xF;
	// rlwinm r29,r31,28,4,31
	r29.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x82503970
	ctx.lr = 0x8251F180;
	sub_82503970(ctx, base);
	// rlwinm r11,r31,22,10,31
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 22) & 0x3FFFFF;
	// clrldi r10,r3,32
	ctx.r10.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrldi r9,r29,58
	ctx.r9.u64 = r29.u64 & 0x3F;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// sld r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r9.u8 & 0x7F));
	// ldx r9,r11,r30
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + r30.u32);
	// rlwimi r3,r31,0,0,27
	ctx.r3.u64 = (__builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFF0) | (ctx.r3.u64 & 0xFFFFFFFF0000000F);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stdx r10,r11,r30
	REX_STORE_U64(ctx.r11.u32 + r30.u32, ctx.r10.u64);
loc_8251F1A8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_825248D0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x825248D8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x825bb860
	ctx.lr = 0x825248FC;
	sub_825BB860(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// beq cr6,0x82524920
	if (ctx.cr6.eq) goto loc_82524920;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,12(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x8252491C;
	sub_82503DA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82524920:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82524928;
	sub_8250AD28(ctx, base);
	// stw r3,44(r28)
	REX_STORE_U32(r28.u32 + 44, ctx.r3.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82524968
	if (ctx.cr6.eq) goto loc_82524968;
	// rlwinm r11,r28,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r10,r31,-36
	ctx.r10.s64 = r31.s64 + -36;
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
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r7,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
loc_82524968:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8252DD80) {
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
	// lwz r10,548(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 548);
	// lwz r11,552(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 552);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,548(r3)
	REX_STORE_U32(ctx.r3.u32 + 548, ctx.r10.u32);
	// beq cr6,0x8252ddc8
	if (ctx.cr6.eq) goto loc_8252DDC8;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8252ddc8
	if (ctx.cr6.lt) goto loc_8252DDC8;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8252ddc0
	if (!ctx.cr6.eq) goto loc_8252DDC0;
	// bl 0x824e3fd8
	ctx.lr = 0x8252DDC0;
	sub_824E3FD8(ctx, base);
loc_8252DDC0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8252ddcc
	goto loc_8252DDCC;
loc_8252DDC8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8252DDCC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825304C8) {
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
	ctx.lr = 0x825304D0;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825307ac
	if (ctx.cr6.eq) goto loc_825307AC;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825307bc
	if (ctx.cr6.eq) goto loc_825307BC;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r26,12(r11)
	r26.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r9,r9,0,27,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1E;
	// rlwinm r11,r8,0,27,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1E;
	// lwz r23,12(r10)
	r23.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// subf. r3,r9,r11
	ctx.r3.u64 = ctx.r11.u64 - ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x825307d0
	if (!ctx.cr0.eq) goto loc_825307D0;
	// cmplw cr6,r26,r23
	ctx.cr6.compare<uint32_t>(r26.u32, r23.u32, ctx.xer);
	// beq cr6,0x825307b4
	if (ctx.cr6.eq) goto loc_825307B4;
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 8);
	// lwz r10,8(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 8);
	// rlwinm r9,r11,25,25,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// rlwinm r8,r10,25,25,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// subf. r29,r9,r8
	r29.u64 = ctx.r8.u64 - ctx.r9.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne 0x82530548
	if (!ctx.cr0.eq) goto loc_82530548;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// clrlwi r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	// subf. r29,r8,r9
	r29.u64 = ctx.r9.u64 - ctx.r8.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne 0x82530548
	if (!ctx.cr0.eq) goto loc_82530548;
	// rlwinm r9,r10,9,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0x1;
	// rlwinm r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	// subf r29,r11,r9
	r29.u64 = ctx.r9.u64 - ctx.r11.u64;
loc_82530548:
	// rlwinm r11,r26,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0xFFFFF000;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r22,148(r11)
	r22.u64 = REX_LOAD_U32(ctx.r11.u32 + 148);
	// bne cr6,0x825307a4
	if (!ctx.cr6.eq) goto loc_825307A4;
	// rlwinm. r11,r10,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82530590
	if (ctx.cr0.eq) goto loc_82530590;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x8252fd18
	ctx.lr = 0x82530574;
	sub_8252FD18(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82530590
	if (!ctx.cr0.eq) goto loc_82530590;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8252f5f8
	ctx.lr = 0x82530588;
	sub_8252F5F8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne 0x825307a4
	if (!ctx.cr0.eq) goto loc_825307A4;
loc_82530590:
	// lwz r10,8(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r9,r10,0,18,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// rlwinm r25,r10,13,29,31
	r25.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x7;
	// cmplwi cr6,r9,12800
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 12800, ctx.xer);
	// bne cr6,0x825305b0
	if (!ctx.cr6.eq) goto loc_825305B0;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r25,1
	r25.s64 = 1;
loc_825305B0:
	// mr r24,r11
	r24.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r25.u32, ctx.xer);
	// bge cr6,0x82530718
	if (!ctx.cr6.lt) goto loc_82530718;
	// addi r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 + 11;
	// subf r27,r23,r26
	r27.u64 = r26.u64 - r23.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r28,r11,r23
	r28.u64 = ctx.r11.u64 + r23.u64;
loc_825305CC:
	// lwzx r5,r27,r28
	ctx.r5.u64 = REX_LOAD_U32(r27.u32 + r28.u32);
	// lwz r4,0(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r31,12(r5)
	r31.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// lwz r30,12(r4)
	r30.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// beq cr6,0x825306ec
	if (ctx.cr6.eq) goto loc_825306EC;
	// lwz r6,8(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r10,r6,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 25) & 0x7F;
	// rlwinm r9,r8,25,25,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 25) & 0x7F;
	// subf. r29,r10,r9
	r29.u64 = ctx.r9.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x8253065c
	if (ctx.cr0.eq) goto loc_8253065C;
	// cmplwi cr6,r9,125
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 125, ctx.xer);
	// beq cr6,0x82530610
	if (ctx.cr6.eq) goto loc_82530610;
	// cmplwi cr6,r9,124
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 124, ctx.xer);
	// li r7,0
	ctx.r7.s64 = 0;
	// bne cr6,0x82530614
	if (!ctx.cr6.eq) goto loc_82530614;
loc_82530610:
	// li r7,1
	ctx.r7.s64 = 1;
loc_82530614:
	// cmplwi cr6,r10,125
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 125, ctx.xer);
	// beq cr6,0x82530628
	if (ctx.cr6.eq) goto loc_82530628;
	// cmplwi cr6,r10,124
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 124, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8253062c
	if (!ctx.cr6.eq) goto loc_8253062C;
loc_82530628:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8253062C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82530710
	if (!ctx.cr6.eq) goto loc_82530710;
	// addi r10,r10,-125
	ctx.r10.s64 = ctx.r10.s64 + -125;
	// addi r11,r9,-125
	ctx.r11.s64 = ctx.r9.s64 + -125;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82530710
	if (!ctx.cr6.eq) goto loc_82530710;
loc_8253065C:
	// cmplwi cr6,r9,125
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 125, ctx.xer);
	// beq cr6,0x825306ec
	if (ctx.cr6.eq) goto loc_825306EC;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r11,r11,0,27,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1E;
	// rlwinm r10,r10,0,27,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1E;
	// subf. r29,r11,r10
	r29.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne 0x825307a4
	if (!ctx.cr0.eq) goto loc_825307A4;
	// cmplwi cr6,r9,124
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 124, ctx.xer);
	// bne cr6,0x8253069c
	if (!ctx.cr6.eq) goto loc_8253069C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8252f5f8
	ctx.lr = 0x82530690;
	sub_8252F5F8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne 0x825307a4
	if (!ctx.cr0.eq) goto loc_825307A4;
	// b 0x825306d0
	goto loc_825306D0;
loc_8253069C:
	// rlwinm r10,r6,9,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 9) & 0x1;
	// rlwinm r9,r8,9,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 9) & 0x1;
	// rlwinm r11,r8,9,23,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 9) & 0x1FF;
	// subf. r29,r10,r9
	r29.u64 = ctx.r9.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne 0x825307a4
	if (!ctx.cr0.eq) goto loc_825307A4;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825306d0
	if (ctx.cr0.eq) goto loc_825306D0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x8252fd18
	ctx.lr = 0x825306C8;
	sub_8252FD18(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82530700
	if (ctx.cr0.eq) goto loc_82530700;
loc_825306D0:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r9,8(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm r10,r11,18,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r11,r9,18,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0x7;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x82530700
	if (ctx.cr6.gt) goto loc_82530700;
loc_825306EC:
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmplw cr6,r24,r25
	ctx.cr6.compare<uint32_t>(r24.u32, r25.u32, ctx.xer);
	// blt cr6,0x825305cc
	if (ctx.cr6.lt) goto loc_825305CC;
	// b 0x82530710
	goto loc_82530710;
loc_82530700:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8252f5f8
	ctx.lr = 0x8253070C;
	sub_8252F5F8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_82530710:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne cr6,0x825307a4
	if (!ctx.cr6.eq) goto loc_825307A4;
loc_82530718:
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x825bce50
	ctx.lr = 0x82530724;
	sub_825BCE50(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82530740
	if (!ctx.cr0.eq) goto loc_82530740;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8252f5f8
	ctx.lr = 0x82530738;
	sub_8252F5F8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne 0x825307a4
	if (!ctx.cr0.eq) goto loc_825307A4;
loc_82530740:
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
loc_82530744:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82530768
	if (ctx.cr6.eq) goto loc_82530768;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r26.u32, ctx.xer);
	// beq cr6,0x82530760
	if (ctx.cr6.eq) goto loc_82530760;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82530744
	goto loc_82530744;
loc_82530760:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8253076c
	goto loc_8253076C;
loc_82530768:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8253076C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82530794
	if (!ctx.cr0.eq) goto loc_82530794;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x825c4930
	ctx.lr = 0x8253078C;
	sub_825C4930(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825307a4
	if (!ctx.cr0.eq) goto loc_825307A4;
loc_82530794:
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8252f5f8
	ctx.lr = 0x825307A0;
	sub_8252F5F8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_825307A4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x825307d0
	goto loc_825307D0;
loc_825307AC:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x825307bc
	if (!ctx.cr6.eq) goto loc_825307BC;
loc_825307B4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x825307d0
	goto loc_825307D0;
loc_825307BC:
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,12(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r3,12(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// bl 0x8252f5f8
	ctx.lr = 0x825307D0;
	sub_8252F5F8(ctx, base);
loc_825307D0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_82553B38) {
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
	ctx.lr = 0x82553B40;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lwz r4,28(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 28);
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x825bb860
	ctx.lr = 0x82553B70;
	sub_825BB860(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// beq cr6,0x82553b94
	if (ctx.cr6.eq) goto loc_82553B94;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,12(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x82553B90;
	sub_82503DA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82553B94:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82553B9C;
	sub_8250AD28(ctx, base);
	// stw r3,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r3.u32);
	// lwz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// beq cr6,0x82553bc0
	if (ctx.cr6.eq) goto loc_82553BC0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,12(r28)
	ctx.r5.u64 = REX_LOAD_U32(r28.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x82553BBC;
	sub_82503DA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82553BC0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82553BC8;
	sub_8250AD28(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,7,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	// rlwimi r10,r11,14,15,17
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x1C000) | (ctx.r10.u64 & 0xFFFFFFFFFFFE3FFF);
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// bl 0x824ffc30
	ctx.lr = 0x82553BF8;
	sub_824FFC30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82559BB8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82559bcc
	if (!ctx.cr0.eq) goto loc_82559BCC;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82559bd4
	if (!ctx.cr0.eq) goto loc_82559BD4;
loc_82559BCC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82559BD4:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bgt cr6,0x82559bcc
	if (ctx.cr6.gt) goto loc_82559BCC;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82559bfc
	if (!ctx.cr0.eq) goto loc_82559BFC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_82559BFC:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8255D5F0) {
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
	ctx.lr = 0x8255D5F8;
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// li r15,0
	r15.s64 = 0;
	// mr r21,r4
	r21.u64 = ctx.r4.u64;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// bne 0x8255d640
	if (!ctx.cr0.eq) goto loc_8255D640;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8255d640
	if (ctx.cr0.eq) goto loc_8255D640;
loc_8255D620:
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8255d640
	if (!ctx.cr0.eq) goto loc_8255D640;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8255d620
	if (!ctx.cr6.eq) goto loc_8255D620;
loc_8255D640:
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,-25880
	ctx.r5.s64 = ctx.r11.s64 + -25880;
	// mr r20,r15
	r20.u64 = r15.u64;
	// mr r19,r15
	r19.u64 = r15.u64;
	// bl 0x82528f28
	ctx.lr = 0x8255D658;
	sub_82528F28(ctx, base);
	// lwz r11,4(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 4);
	// mr r18,r15
	r18.u64 = r15.u64;
	// stw r15,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r15.u32);
	// li r16,1
	r16.s64 = 1;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// stw r21,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, r21.u32);
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r11,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// lwz r17,80(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8255D684:
	// lwz r11,124(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8255d6a4
	if (ctx.cr6.eq) goto loc_8255D6A4;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,128(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// mr r11,r15
	ctx.r11.u64 = r15.u64;
	// bne cr6,0x8255d6a8
	if (!ctx.cr6.eq) goto loc_8255D6A8;
loc_8255D6A4:
	// mr r11,r16
	ctx.r11.u64 = r16.u64;
loc_8255D6A8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8255d9e8
	if (!ctx.cr0.eq) goto loc_8255D9E8;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x825537d0
	ctx.lr = 0x8255D6B8;
	sub_825537D0(ctx, base);
	// not r11,r17
	ctx.r11.u64 = ~r17.u64;
	// lwz r22,0(r3)
	r22.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r18,r18,1
	r18.s64 = r18.s64 + 1;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r17,4
	ctx.r11.s64 = r17.s64 + 4;
	// bne 0x8255d6d4
	if (!ctx.cr0.eq) goto loc_8255D6D4;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_8255D6D4:
	// rlwinm r10,r18,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r9,r18,27
	ctx.r9.u64 = r18.u32 & 0x1F;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// srw r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r9.u8 & 0x3F));
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8255d684
	if (!ctx.cr0.eq) goto loc_8255D684;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82559bb8
	ctx.lr = 0x8255D6F4;
	sub_82559BB8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8255d850
	if (ctx.cr0.eq) goto loc_8255D850;
	// lwz r11,4(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 4);
	// mr r23,r15
	r23.u64 = r15.u64;
	// mr r25,r16
	r25.u64 = r16.u64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r24,r10,r11
	r24.u64 = ctx.r10.u64 & ctx.r11.u64;
loc_8255D718:
	// lwz r11,4(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 4);
	// mr r26,r15
	r26.u64 = r15.u64;
	// stw r15,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r15.u32);
	// mr r27,r15
	r27.u64 = r15.u64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// stw r21,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r21.u32);
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// b 0x8255d748
	goto loc_8255D748;
loc_8255D744:
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
loc_8255D748:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8255d764
	if (ctx.cr6.eq) goto loc_8255D764;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// mr r11,r15
	ctx.r11.u64 = r15.u64;
	// bne cr6,0x8255d768
	if (!ctx.cr6.eq) goto loc_8255D768;
loc_8255D764:
	// mr r11,r16
	ctx.r11.u64 = r16.u64;
loc_8255D768:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8255d828
	if (!ctx.cr0.eq) goto loc_8255D828;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825537d0
	ctx.lr = 0x8255D778;
	sub_825537D0(ctx, base);
	// not r11,r17
	ctx.r11.u64 = ~r17.u64;
	// lwz r29,0(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// clrlwi. r28,r11,31
	r28.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// addi r11,r17,4
	ctx.r11.s64 = r17.s64 + 4;
	// bne 0x8255d794
	if (!ctx.cr0.eq) goto loc_8255D794;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_8255D794:
	// rlwinm r31,r27,29,3,29
	r31.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r30,r27,27
	r30.u64 = r27.u32 & 0x1F;
	// lwzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	// srw r11,r11,r30
	ctx.r11.u64 = r30.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (r30.u8 & 0x3F));
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8255d744
	if (!ctx.cr0.eq) goto loc_8255D744;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82559bb8
	ctx.lr = 0x8255D7B4;
	sub_82559BB8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8255d744
	if (ctx.cr0.eq) goto loc_8255D744;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// lwz r10,16(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 16);
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
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8255d744
	if (!ctx.cr6.eq) goto loc_8255D744;
	// lwz r10,24(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 24);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8255d744
	if (!ctx.cr6.eq) goto loc_8255D744;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// cmpwi cr6,r25,2
	ctx.cr6.compare<int32_t>(r25.s32, 2, ctx.xer);
	// bne cr6,0x8255d744
	if (!ctx.cr6.eq) goto loc_8255D744;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// addi r11,r17,4
	ctx.r11.s64 = r17.s64 + 4;
	// bne cr6,0x8255d80c
	if (!ctx.cr6.eq) goto loc_8255D80C;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_8255D80C:
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	// slw r9,r16,r30
	ctx.r9.u64 = r30.u8 & 0x20 ? 0 : (r16.u32 << (r30.u8 & 0x3F));
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// cmplwi cr6,r26,4
	ctx.cr6.compare<uint32_t>(r26.u32, 4, ctx.xer);
	// stwx r10,r31,r11
	REX_STORE_U32(r31.u32 + ctx.r11.u32, ctx.r10.u32);
	// lwz r17,80(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bne cr6,0x8255d744
	if (!ctx.cr6.eq) goto loc_8255D744;
loc_8255D828:
	// cmplwi cr6,r26,3
	ctx.cr6.compare<uint32_t>(r26.u32, 3, ctx.xer);
	// blt cr6,0x8255d840
	if (ctx.cr6.lt) goto loc_8255D840;
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// mr r23,r16
	r23.u64 = r16.u64;
	// cmpwi cr6,r25,2
	ctx.cr6.compare<int32_t>(r25.s32, 2, ctx.xer);
	// ble cr6,0x8255d718
	if (!ctx.cr6.gt) goto loc_8255D718;
loc_8255D840:
	// clrlwi. r11,r23,24
	ctx.r11.u64 = r23.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8255d850
	if (ctx.cr0.eq) goto loc_8255D850;
	// addi r20,r20,1
	r20.s64 = r20.s64 + 1;
	// b 0x8255d684
	goto loc_8255D684;
loc_8255D850:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82559c08
	ctx.lr = 0x8255D858;
	sub_82559C08(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8255d684
	if (ctx.cr0.eq) goto loc_8255D684;
	// lwz r11,4(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 4);
	// mr r24,r16
	r24.u64 = r16.u64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r25,r9,r11
	r25.u64 = ctx.r9.u64 & ctx.r11.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r23,r10,r11
	r23.u64 = ctx.r10.u64 & ctx.r11.u64;
loc_8255D884:
	// lwz r11,4(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 4);
	// mr r26,r15
	r26.u64 = r15.u64;
	// stw r15,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r15.u32);
	// mr r27,r15
	r27.u64 = r15.u64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// stw r21,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r21.u32);
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// b 0x8255d8b4
	goto loc_8255D8B4;
loc_8255D8B0:
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
loc_8255D8B4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8255d8d0
	if (ctx.cr6.eq) goto loc_8255D8D0;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// mr r11,r15
	ctx.r11.u64 = r15.u64;
	// bne cr6,0x8255d8d4
	if (!ctx.cr6.eq) goto loc_8255D8D4;
loc_8255D8D0:
	// mr r11,r16
	ctx.r11.u64 = r16.u64;
loc_8255D8D4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8255d9c0
	if (!ctx.cr0.eq) goto loc_8255D9C0;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x825537d0
	ctx.lr = 0x8255D8E4;
	sub_825537D0(ctx, base);
	// not r11,r17
	ctx.r11.u64 = ~r17.u64;
	// lwz r31,0(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// clrlwi. r28,r11,31
	r28.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// addi r11,r17,4
	ctx.r11.s64 = r17.s64 + 4;
	// bne 0x8255d900
	if (!ctx.cr0.eq) goto loc_8255D900;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_8255D900:
	// rlwinm r30,r27,29,3,29
	r30.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r29,r27,27
	r29.u64 = r27.u32 & 0x1F;
	// lwzx r11,r30,r11
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// srw r11,r11,r29
	ctx.r11.u64 = r29.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (r29.u8 & 0x3F));
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8255d8b0
	if (!ctx.cr0.eq) goto loc_8255D8B0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82559c08
	ctx.lr = 0x8255D920;
	sub_82559C08(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8255d8b0
	if (ctx.cr0.eq) goto loc_8255D8B0;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r9,16(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 16);
	// clrlwi r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	// addic r8,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// subfe r8,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r11,r8,r10
	ctx.r11.u64 = ctx.r8.u64 & ctx.r10.u64;
	// subfe r8,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 & ctx.r10.u64;
	// lwz r8,16(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8255d8b0
	if (!ctx.cr6.eq) goto loc_8255D8B0;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r9,24(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 24);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8255d8b0
	if (!ctx.cr6.eq) goto loc_8255D8B0;
	// lwz r11,28(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// lwz r9,28(r23)
	ctx.r9.u64 = REX_LOAD_U32(r23.u32 + 28);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8255d8b0
	if (!ctx.cr6.eq) goto loc_8255D8B0;
	// lwz r11,36(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 36);
	// lwz r10,36(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 36);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8255d8b0
	if (!ctx.cr6.eq) goto loc_8255D8B0;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// cmpwi cr6,r24,2
	ctx.cr6.compare<int32_t>(r24.s32, 2, ctx.xer);
	// bne cr6,0x8255d8b0
	if (!ctx.cr6.eq) goto loc_8255D8B0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// addi r11,r17,4
	ctx.r11.s64 = r17.s64 + 4;
	// bne cr6,0x8255d9a4
	if (!ctx.cr6.eq) goto loc_8255D9A4;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_8255D9A4:
	// lwzx r10,r30,r11
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// slw r9,r16,r29
	ctx.r9.u64 = r29.u8 & 0x20 ? 0 : (r16.u32 << (r29.u8 & 0x3F));
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// cmplwi cr6,r26,4
	ctx.cr6.compare<uint32_t>(r26.u32, 4, ctx.xer);
	// stwx r10,r30,r11
	REX_STORE_U32(r30.u32 + ctx.r11.u32, ctx.r10.u32);
	// lwz r17,80(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bne cr6,0x8255d8b0
	if (!ctx.cr6.eq) goto loc_8255D8B0;
loc_8255D9C0:
	// cmplwi cr6,r26,2
	ctx.cr6.compare<uint32_t>(r26.u32, 2, ctx.xer);
	// blt cr6,0x8255d684
	if (ctx.cr6.lt) goto loc_8255D684;
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// cmpwi cr6,r24,2
	ctx.cr6.compare<int32_t>(r24.s32, 2, ctx.xer);
	// ble cr6,0x8255d884
	if (!ctx.cr6.gt) goto loc_8255D884;
	// addi r20,r20,1
	r20.s64 = r20.s64 + 1;
	// cmplwi cr6,r26,2
	ctx.cr6.compare<uint32_t>(r26.u32, 2, ctx.xer);
	// bne cr6,0x8255d684
	if (!ctx.cr6.eq) goto loc_8255D684;
	// addi r19,r19,1
	r19.s64 = r19.s64 + 1;
	// b 0x8255d684
	goto loc_8255D684;
loc_8255D9E8:
	// addi r11,r20,-1
	ctx.r11.s64 = r20.s64 + -1;
	// mr r30,r20
	r30.u64 = r20.u64;
	// mr r27,r15
	r27.u64 = r15.u64;
	// cmplw cr6,r19,r11
	ctx.cr6.compare<uint32_t>(r19.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8255da04
	if (!ctx.cr6.gt) goto loc_8255DA04;
	// subf r28,r11,r19
	r28.u64 = r19.u64 - ctx.r11.u64;
	// b 0x8255da10
	goto loc_8255DA10;
loc_8255DA04:
	// subf r11,r19,r11
	ctx.r11.u64 = ctx.r11.u64 - r19.u64;
	// mr r28,r15
	r28.u64 = r15.u64;
	// add r30,r11,r20
	r30.u64 = ctx.r11.u64 + r20.u64;
loc_8255DA10:
	// lwz r11,4(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 4);
	// mr r31,r15
	r31.u64 = r15.u64;
	// stw r15,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r15.u32);
	// mr r29,r15
	r29.u64 = r15.u64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// stw r21,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r21.u32);
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// b 0x8255da40
	goto loc_8255DA40;
loc_8255DA3C:
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
loc_8255DA40:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8255da5c
	if (ctx.cr6.eq) goto loc_8255DA5C;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// mr r11,r15
	ctx.r11.u64 = r15.u64;
	// bne cr6,0x8255da60
	if (!ctx.cr6.eq) goto loc_8255DA60;
loc_8255DA5C:
	// mr r11,r16
	ctx.r11.u64 = r16.u64;
loc_8255DA60:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8255db40
	if (!ctx.cr0.eq) goto loc_8255DB40;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x825537d0
	ctx.lr = 0x8255DA70;
	sub_825537D0(ctx, base);
	// not r11,r17
	ctx.r11.u64 = ~r17.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r17,4
	ctx.r11.s64 = r17.s64 + 4;
	// bne 0x8255da8c
	if (!ctx.cr0.eq) goto loc_8255DA8C;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_8255DA8C:
	// rlwinm r9,r29,29,3,29
	ctx.r9.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r8,r29,27
	ctx.r8.u64 = r29.u32 & 0x1F;
	// lwzx r11,r9,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// srw r11,r11,r8
	ctx.r11.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r8.u8 & 0x3F));
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8255da3c
	if (!ctx.cr0.eq) goto loc_8255DA3C;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// mr r11,r15
	ctx.r11.u64 = r15.u64;
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8255dadc
	if (!ctx.cr0.eq) goto loc_8255DADC;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8255dadc
	if (ctx.cr0.eq) goto loc_8255DADC;
loc_8255DABC:
	// rlwinm r9,r10,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,4(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8255dadc
	if (!ctx.cr0.eq) goto loc_8255DADC;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8255dabc
	if (!ctx.cr6.eq) goto loc_8255DABC;
loc_8255DADC:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// ble cr6,0x8255dafc
	if (!ctx.cr6.gt) goto loc_8255DAFC;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// add r30,r11,r30
	r30.u64 = ctx.r11.u64 + r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8255DAF4:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// bdnz 0x8255daf4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8255DAF4;
loc_8255DAFC:
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x8255db0c
	if (!ctx.cr6.eq) goto loc_8255DB0C;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
loc_8255DB0C:
	// clrlwi. r11,r31,24
	ctx.r11.u64 = r31.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8255db38
	if (ctx.cr0.eq) goto loc_8255DB38;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8255db24
	if (ctx.cr6.eq) goto loc_8255DB24;
	// addi r28,r28,-1
	r28.s64 = r28.s64 + -1;
	// b 0x8255db38
	goto loc_8255DB38;
loc_8255DB24:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8255db34
	if (ctx.cr6.eq) goto loc_8255DB34;
	// addi r27,r27,-1
	r27.s64 = r27.s64 + -1;
	// b 0x8255db38
	goto loc_8255DB38;
loc_8255DB34:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
loc_8255DB38:
	// mr r31,r16
	r31.u64 = r16.u64;
	// b 0x8255da3c
	goto loc_8255DA3C;
loc_8255DB40:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x826a1cd4
	return;
}

DEFINE_REX_FUNC(sub_8259DBF0) {
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
	ctx.lr = 0x8259DBF8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r8,104(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// lwz r9,104(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 104);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8259dd28
	if (!ctx.cr6.eq) goto loc_8259DD28;
	// lwz r8,108(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 108);
	// lwz r7,108(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x8259dd28
	if (!ctx.cr6.eq) goto loc_8259DD28;
	// lwz r10,112(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 112);
	// lwz r11,112(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8259dd28
	if (!ctx.cr6.eq) goto loc_8259DD28;
	// lis r11,4095
	ctx.r11.s64 = 268369920;
	// rlwinm r3,r9,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8259dc50
	if (!ctx.cr6.gt) goto loc_8259DC50;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8259DC50:
	// bl 0x822f6280
	ctx.lr = 0x8259DC54;
	sub_822F6280(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8259dd28
	if (ctx.cr6.eq) goto loc_8259DD28;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// li r27,0
	r27.s64 = 0;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8259dc90
	if (ctx.cr6.eq) goto loc_8259DC90;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r10,16(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8259dc90
	if (ctx.cr6.eq) goto loc_8259DC90;
	// stw r27,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, r27.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// stw r27,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, r27.u32);
loc_8259DC90:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r29,r27
	r29.u64 = r27.u64;
	// lwz r10,112(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x8259dd18
	if (!ctx.cr6.gt) goto loc_8259DD18;
	// lwz r10,108(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
loc_8259DCA8:
	// mr r31,r27
	r31.u64 = r27.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8259dd08
	if (ctx.cr6.eq) goto loc_8259DD08;
loc_8259DCB4:
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8259DCD4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8259DCF4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// lwz r10,108(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8259dcb4
	if (ctx.cr6.lt) goto loc_8259DCB4;
loc_8259DD08:
	// lwz r9,112(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmplw cr6,r29,r9
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8259dca8
	if (ctx.cr6.lt) goto loc_8259DCA8;
loc_8259DD18:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8259DD20;
	sub_8269CE98(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8259dd30
	goto loc_8259DD30;
loc_8259DD28:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_8259DD30:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_825A4650) {
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
	ctx.lr = 0x825A4658;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,16(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// bl 0x825a1088
	ctx.lr = 0x825A467C;
	sub_825A1088(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825a4758
	if (ctx.cr0.eq) goto loc_825A4758;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824f02c0
	ctx.lr = 0x825A4690;
	sub_824F02C0(ctx, base);
	// stw r3,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824f02c0
	ctx.lr = 0x825A46A0;
	sub_824F02C0(ctx, base);
	// stw r3,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x825d6920
	ctx.lr = 0x825A46B8;
	sub_825D6920(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825a4758
	if (ctx.cr0.eq) goto loc_825A4758;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x825d69e0
	ctx.lr = 0x825A46C8;
	sub_825D69E0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x824ef4f0
	ctx.lr = 0x825A46D0;
	sub_824EF4F0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r27,r11,22852
	r27.s64 = ctx.r11.s64 + 22852;
	// addi r26,r10,-10504
	r26.s64 = ctx.r10.s64 + -10504;
	// bne 0x825a4704
	if (!ctx.cr0.eq) goto loc_825A4704;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addi r5,r11,-9760
	ctx.r5.s64 = ctx.r11.s64 + -9760;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r7,685
	ctx.r7.s64 = 685;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A4704;
	sub_824EA978(ctx, base);
loc_825A4704:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824ef7f8
	ctx.lr = 0x825A470C;
	sub_824EF7F8(ctx, base);
	// b 0x825a4750
	goto loc_825A4750;
loc_825A4710:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824efba8
	ctx.lr = 0x825A4718;
	sub_824EFBA8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x824f0b18
	ctx.lr = 0x825A4728;
	sub_824F0B18(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825a4744
	if (ctx.cr0.eq) goto loc_825A4744;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x824f0b18
	ctx.lr = 0x825A473C;
	sub_824F0B18(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x825a4764
	if (!ctx.cr0.eq) goto loc_825A4764;
loc_825A4744:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824efaf8
	ctx.lr = 0x825A4750;
	sub_824EFAF8(ctx, base);
loc_825A4750:
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne 0x825a4710
	if (!ctx.cr0.eq) goto loc_825A4710;
loc_825A4758:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825A475C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cfc
	return;
loc_825A4764:
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x825a43c0
	ctx.lr = 0x825A4770;
	sub_825A43C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x825a4790
	if (!ctx.cr0.eq) goto loc_825A4790;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addi r5,r11,-9824
	ctx.r5.s64 = ctx.r11.s64 + -9824;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r7,699
	ctx.r7.s64 = 699;
	// bl 0x824ea978
	ctx.lr = 0x825A4790;
	sub_824EA978(ctx, base);
loc_825A4790:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x824f01a0
	ctx.lr = 0x825A4798;
	sub_824F01A0(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x824f01a0
	ctx.lr = 0x825A47A0;
	sub_824F01A0(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x825b7558
	ctx.lr = 0x825A47B0;
	sub_825B7558(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x825b7660
	ctx.lr = 0x825A47C0;
	sub_825B7660(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824efa48
	ctx.lr = 0x825A47CC;
	sub_824EFA48(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824ef548
	ctx.lr = 0x825A47D8;
	sub_824EF548(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825a475c
	goto loc_825A475C;
}

DEFINE_REX_FUNC(sub_825B0438) {
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
	ctx.lr = 0x825B0440;
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r24,28(r3)
	r24.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// li r11,2080
	ctx.r11.s64 = 2080;
	// li r23,0
	r23.s64 = 0;
	// stw r6,428(r1)
	REX_STORE_U32(ctx.r1.u32 + 428, ctx.r6.u32);
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// stw r23,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, r23.u32);
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// stw r23,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r23.u32);
	// addi r10,r5,-1
	ctx.r10.s64 = ctx.r5.s64 + -1;
	// stw r24,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r24.u32);
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_825B0478:
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x825b0478
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825B0478;
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// mr r26,r10
	r26.u64 = ctx.r10.u64;
	// cmplwi cr6,r11,62
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 62, ctx.xer);
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// beq cr6,0x825b04a0
	if (ctx.cr6.eq) goto loc_825B04A0;
	// cmplwi cr6,r11,42
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 42, ctx.xer);
	// bne cr6,0x825b04a8
	if (!ctx.cr6.eq) goto loc_825B04A8;
loc_825B04A0:
	// rlwinm r10,r10,0,16,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFE000FFFF;
	// stw r10,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
loc_825B04A8:
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r10,-30680
	ctx.r11.s64 = ctx.r10.s64 + -30680;
	// addi r25,r4,4
	r25.s64 = ctx.r4.s64 + 4;
	// addi r10,r11,456
	ctx.r10.s64 = ctx.r11.s64 + 456;
	// stw r11,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// stw r25,412(r1)
	REX_STORE_U32(ctx.r1.u32 + 412, r25.u32);
	// lwzx r11,r9,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwzx r21,r9,r10
	r21.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825b0574
	if (ctx.cr6.eq) goto loc_825B0574;
	// addi r11,r27,3292
	ctx.r11.s64 = r27.s64 + 3292;
	// lwz r30,0(r25)
	r30.u64 = REX_LOAD_U32(r25.u32 + 0);
	// addi r25,r25,4
	r25.s64 = r25.s64 + 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r25,412(r1)
	REX_STORE_U32(ctx.r1.u32 + 412, r25.u32);
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// lwzx r11,r11,r24
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r24.u32);
	// rlwinm. r11,r11,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825b0530
	if (ctx.cr0.eq) goto loc_825B0530;
	// rlwinm r6,r30,16,26,31
	ctx.r6.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 16) & 0x3F;
	// cmplwi cr6,r6,23
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 23, ctx.xer);
	// bne cr6,0x825b050c
	if (!ctx.cr6.eq) goto loc_825B050C;
	// clrlwi r11,r30,16
	ctx.r11.u64 = r30.u32 & 0xFFFF;
	// stw r11,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
loc_825B050C:
	// addi r4,r24,16768
	ctx.r4.s64 = r24.s64 + 16768;
	// clrlwi r5,r30,16
	ctx.r5.u64 = r30.u32 & 0xFFFF;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x825a6160
	ctx.lr = 0x825B051C;
	sub_825A6160(ctx, base);
	// andis. r11,r30,65476
	ctx.r11.u64 = r30.u64 & 4291035136;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// oris r30,r11,4
	r30.u64 = ctx.r11.u64 | 262144;
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r30.u32);
loc_825B0530:
	// rlwinm. r11,r30,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825b0548
	if (ctx.cr0.eq) goto loc_825B0548;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// addi r25,r25,4
	r25.s64 = r25.s64 + 4;
	// stw r25,412(r1)
	REX_STORE_U32(ctx.r1.u32 + 412, r25.u32);
	// b 0x825b054c
	goto loc_825B054C;
loc_825B0548:
	// li r11,85
	ctx.r11.s64 = 85;
loc_825B054C:
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// rlwinm. r11,r30,0,8,8
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825b056c
	if (ctx.cr0.eq) goto loc_825B056C;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// addi r25,r25,4
	r25.s64 = r25.s64 + 4;
	// stw r25,412(r1)
	REX_STORE_U32(ctx.r1.u32 + 412, r25.u32);
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// b 0x825b0578
	goto loc_825B0578;
loc_825B056C:
	// stw r23,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r23.u32);
	// b 0x825b0578
	goto loc_825B0578;
loc_825B0574:
	// lwz r30,100(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
loc_825B0578:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// li r22,1
	r22.s64 = 1;
	// li r17,12816
	r17.s64 = 12816;
	// mr r29,r23
	r29.u64 = r23.u64;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// addi r16,r11,22852
	r16.s64 = ctx.r11.s64 + 22852;
	// addi r14,r10,-31184
	r14.s64 = ctx.r10.s64 + -31184;
	// addi r15,r9,-8552
	r15.s64 = ctx.r9.s64 + -8552;
	// beq cr6,0x825b0698
	if (ctx.cr6.eq) goto loc_825B0698;
	// addi r11,r27,3292
	ctx.r11.s64 = r27.s64 + 3292;
	// addi r30,r1,112
	r30.s64 = ctx.r1.s64 + 112;
	// rlwinm r28,r11,2,0,29
	r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_825B05B0:
	// lwz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 0);
	// li r11,4096
	ctx.r11.s64 = 4096;
	// lwzx r9,r28,r24
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + r24.u32);
	// addi r25,r25,4
	r25.s64 = r25.s64 + 4;
	// slw r11,r11,r29
	ctx.r11.u64 = r29.u8 & 0x20 ? 0 : (ctx.r11.u32 << (r29.u8 & 0x3F));
	// and. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// beq 0x825b0634
	if (ctx.cr0.eq) goto loc_825B0634;
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,16768(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 16768);
	// rlwinm r10,r9,16,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0x3F;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// b 0x825b0600
	goto loc_825B0600;
loc_825B05E4:
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x825b05fc
	if (!ctx.cr6.eq) goto loc_825B05FC;
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x825b0650
	if (ctx.cr6.eq) goto loc_825B0650;
loc_825B05FC:
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
loc_825B0600:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825b05e4
	if (!ctx.cr6.eq) goto loc_825B05E4;
	// mr r6,r15
	ctx.r6.u64 = r15.u64;
	// mr r5,r14
	ctx.r5.u64 = r14.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// li r7,1074
	ctx.r7.s64 = 1074;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825B0620;
	sub_824EA978(ctx, base);
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
loc_825B0624:
	// sth r11,2(r30)
	REX_STORE_U16(r30.u32 + 2, ctx.r11.u16);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwimi r11,r22,18,10,15
	ctx.r11.u64 = (__builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 18) & 0x3F0000) | (ctx.r11.u64 & 0xFFFFFFFFFFC0FFFF);
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
loc_825B0634:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm. r11,r11,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825b0658
	if (ctx.cr0.eq) goto loc_825B0658;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// addi r25,r25,4
	r25.s64 = r25.s64 + 4;
	// stw r11,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r11.u32);
	// b 0x825b065c
	goto loc_825B065C;
loc_825B0650:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x825b0624
	goto loc_825B0624;
loc_825B0658:
	// stw r17,12(r30)
	REX_STORE_U32(r30.u32 + 12, r17.u32);
loc_825B065C:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm. r11,r11,0,8,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825b0678
	if (ctx.cr0.eq) goto loc_825B0678;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// addi r25,r25,4
	r25.s64 = r25.s64 + 4;
	// stw r11,24(r30)
	REX_STORE_U32(r30.u32 + 24, ctx.r11.u32);
	// b 0x825b067c
	goto loc_825B067C;
loc_825B0678:
	// stw r23,24(r30)
	REX_STORE_U32(r30.u32 + 24, r23.u32);
loc_825B067C:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r29,r21
	ctx.cr6.compare<uint32_t>(r29.u32, r21.u32, ctx.xer);
	// blt cr6,0x825b05b0
	if (ctx.cr6.lt) goto loc_825B05B0;
	// lwz r30,100(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r26,96(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// stw r25,412(r1)
	REX_STORE_U32(ctx.r1.u32 + 412, r25.u32);
loc_825B0698:
	// clrlwi r11,r26,16
	ctx.r11.u64 = r26.u32 & 0xFFFF;
	// lwz r29,112(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,71
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 71, ctx.xer);
	// bne cr6,0x825b06c4
	if (!ctx.cr6.eq) goto loc_825B06C4;
	// rlwinm r11,r29,0,10,15
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x3F0000;
	// lis r10,3
	ctx.r10.s64 = 196608;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x825b06c4
	if (!ctx.cr6.eq) goto loc_825B06C4;
	// li r11,9
	ctx.r11.s64 = 9;
	// rlwimi r26,r11,3,16,31
	r26.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFF) | (r26.u64 & 0xFFFFFFFFFFFF0000);
	// stw r26,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r26.u32);
loc_825B06C4:
	// addi r11,r27,3292
	ctx.r11.s64 = r27.s64 + 3292;
	// rlwinm r28,r11,2,0,29
	r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r28,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, r28.u32);
	// lwzx r11,r28,r24
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + r24.u32);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825b0704
	if (ctx.cr0.eq) goto loc_825B0704;
	// stw r23,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r23.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r5,r24,23224
	ctx.r5.s64 = r24.s64 + 23224;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x825ad7e8
	ctx.lr = 0x825B06F8;
	sub_825AD7E8(ctx, base);
	// lwz r23,80(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r23,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r23.u32);
loc_825B0704:
	// lwzx r11,r28,r24
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + r24.u32);
	// li r19,65
	r19.s64 = 65;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825b0c8c
	if (ctx.cr0.eq) goto loc_825B0C8C;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x825b0db4
	if (ctx.cr6.eq) goto loc_825B0DB4;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r30,r1,124
	r30.s64 = ctx.r1.s64 + 124;
	// addi r28,r11,23212
	r28.s64 = ctx.r11.s64 + 23212;
	// subfic r25,r11,-23212
	ctx.xer.ca = ctx.r11.u32 <= 4294944084;
	r25.u64 = static_cast<uint64_t>(-23212) - ctx.r11.u64;
loc_825B072C:
	// lwz r11,-12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + -12);
	// addi r29,r30,-12
	r29.s64 = r30.s64 + -12;
	// rlwinm. r11,r11,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825b0c78
	if (ctx.cr0.eq) goto loc_825B0C78;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// clrlwi r10,r11,29
	ctx.r10.u64 = ctx.r11.u32 & 0x7;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bge cr6,0x825b0770
	if (!ctx.cr6.lt) goto loc_825B0770;
	// rlwinm r10,r11,0,25,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x70;
	// cmplwi cr6,r10,64
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 64, ctx.xer);
	// bge cr6,0x825b0770
	if (!ctx.cr6.lt) goto loc_825B0770;
	// rlwinm r10,r11,0,21,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x700;
	// cmplwi cr6,r10,1024
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1024, ctx.xer);
	// bge cr6,0x825b0770
	if (!ctx.cr6.lt) goto loc_825B0770;
	// rlwinm r11,r11,0,17,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7000;
	// cmplwi cr6,r11,16384
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16384, ctx.xer);
	// blt cr6,0x825b07bc
	if (ctx.cr6.lt) goto loc_825B07BC;
loc_825B0770:
	// addi r5,r30,12
	ctx.r5.s64 = r30.s64 + 12;
	// lwz r6,0(r28)
	ctx.r6.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825ac768
	ctx.lr = 0x825B0788;
	sub_825AC768(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// li r12,-17768
	ctx.r12.s64 = -17768;
	// addi r23,r23,2
	r23.s64 = r23.s64 + 2;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// sth r11,-22(r5)
	REX_STORE_U16(ctx.r5.u32 + -22, ctx.r11.u16);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwimi r11,r22,18,8,15
	ctx.r11.u64 = (__builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 18) & 0xFF0000) | (ctx.r11.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// ori r11,r11,12816
	ctx.r11.u64 = ctx.r11.u64 | 12816;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// lwz r26,96(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
loc_825B07BC:
	// lhz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 0);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x825b0818
	if (!ctx.cr6.eq) goto loc_825B0818;
	// addi r5,r30,12
	ctx.r5.s64 = r30.s64 + 12;
	// lwz r6,0(r28)
	ctx.r6.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825acae0
	ctx.lr = 0x825B07E4;
	sub_825ACAE0(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// li r12,-17768
	ctx.r12.s64 = -17768;
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// sth r11,-22(r5)
	REX_STORE_U16(ctx.r5.u32 + -22, ctx.r11.u16);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwimi r11,r22,18,8,15
	ctx.r11.u64 = (__builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 18) & 0xFF0000) | (ctx.r11.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// ori r11,r11,12816
	ctx.r11.u64 = ctx.r11.u64 | 12816;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// lwz r26,96(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
loc_825B0818:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// rlwinm r11,r11,0,14,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x825b0914
	if (!ctx.cr6.eq) goto loc_825B0914;
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r9,0(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 0);
	// addi r11,r31,4
	ctx.r11.s64 = r31.s64 + 4;
	// lwz r8,0(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 0);
	// sth r10,2(r31)
	REX_STORE_U16(r31.u32 + 2, ctx.r10.u16);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r9,0,16,2
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFE000FFFF;
	// stw r9,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// sth r10,6(r31)
	REX_STORE_U16(r31.u32 + 6, ctx.r10.u16);
	// rlwinm. r10,r8,0,8,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r12,30583
	ctx.r12.s64 = 30583;
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwimi r9,r22,18,8,15
	ctx.r9.u64 = (__builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 18) & 0xFF0000) | (ctx.r9.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r9,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// sth r8,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r8.u16);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r9,r8,0,16,7
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFF00FFFF) | (ctx.r9.u64 & 0xFF0000);
	// rlwimi r9,r8,0,9,9
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x400000) | (ctx.r9.u64 & 0xFFFFFFFFFFBFFFFF);
	// lwz r8,0(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 0);
	// oris r10,r9,64
	ctx.r10.u64 = ctx.r9.u64 | 4194304;
	// and r9,r8,r12
	ctx.r9.u64 = ctx.r8.u64 & ctx.r12.u64;
	// li r12,-30584
	ctx.r12.s64 = -30584;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// and r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 & ctx.r12.u64;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// beq 0x825b08b8
	if (ctx.cr0.eq) goto loc_825B08B8;
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 12);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_825B08B8:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,21845
	ctx.r9.s64 = 21845;
	// sth r10,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// li r12,-17768
	ctx.r12.s64 = -17768;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r10,r19,16,8,15
	ctx.r10.u64 = (__builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 16) & 0xFF0000) | (ctx.r10.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// stb r22,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, r22.u8);
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// rlwimi r10,r9,1,16,31
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r31,r11,4
	r31.s64 = ctx.r11.s64 + 4;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// sth r11,-10(r30)
	REX_STORE_U16(r30.u32 + -10, ctx.r11.u16);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwimi r11,r22,18,8,15
	ctx.r11.u64 = (__builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 18) & 0xFF0000) | (ctx.r11.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// ori r11,r11,12816
	ctx.r11.u64 = ctx.r11.u64 | 12816;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// lwz r26,96(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
loc_825B0914:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lis r10,4
	ctx.r10.s64 = 262144;
	// rlwinm r11,r11,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x825b0a14
	if (!ctx.cr6.eq) goto loc_825B0A14;
	// li r10,73
	ctx.r10.s64 = 73;
	// lwz r9,0(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r8,0(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r11,r31,4
	ctx.r11.s64 = r31.s64 + 4;
	// sth r10,2(r31)
	REX_STORE_U16(r31.u32 + 2, ctx.r10.u16);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// lwz r7,0(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r12,-30584
	ctx.r12.s64 = -30584;
	// andi. r7,r7,30583
	ctx.r7.u64 = ctx.r7.u64 & 30583;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r9,0,16,2
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFE000FFFF;
	// stw r9,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// sth r10,6(r31)
	REX_STORE_U16(r31.u32 + 6, ctx.r10.u16);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// rlwinm r8,r8,0,8,8
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x800000;
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwimi r8,r22,18,8,15
	ctx.r8.u64 = (__builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 18) & 0xFF0000) | (ctx.r8.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r8,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r8.u32);
	// sth r9,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r9.u16);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r10,r9,0,10,15
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x3F0000) | (ctx.r10.u64 & 0xFFFFFFFFFFC0FFFF);
	// rlwimi r10,r9,0,8,8
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x800000) | (ctx.r10.u64 & 0xFFFFFFFFFF7FFFFF);
	// oris r10,r10,64
	ctx.r10.u64 = ctx.r10.u64 | 4194304;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// and r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 & ctx.r12.u64;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// beq 0x825b09b8
	if (ctx.cr0.eq) goto loc_825B09B8;
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 12);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_825B09B8:
	// li r10,2
	ctx.r10.s64 = 2;
	// li r12,-30584
	ctx.r12.s64 = -30584;
	// sth r10,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r10,r19,16,8,15
	ctx.r10.u64 = (__builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 16) & 0xFF0000) | (ctx.r10.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stb r22,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, r22.u8);
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// and r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 & ctx.r12.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r31,r11,4
	r31.s64 = ctx.r11.s64 + 4;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// li r12,-17768
	ctx.r12.s64 = -17768;
	// sth r11,-10(r30)
	REX_STORE_U16(r30.u32 + -10, ctx.r11.u16);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwimi r11,r22,18,8,15
	ctx.r11.u64 = (__builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 18) & 0xFF0000) | (ctx.r11.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// ori r11,r11,12816
	ctx.r11.u64 = ctx.r11.u64 | 12816;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// lwz r26,96(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
loc_825B0A14:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lis r10,8
	ctx.r10.s64 = 524288;
	// rlwinm r11,r11,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x825b0a78
	if (!ctx.cr6.eq) goto loc_825B0A78;
	// addi r6,r30,12
	ctx.r6.s64 = r30.s64 + 12;
	// lwz r7,0(r28)
	ctx.r7.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x825acc28
	ctx.lr = 0x825B0A44;
	sub_825ACC28(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// li r12,-17768
	ctx.r12.s64 = -17768;
	// addi r23,r23,3
	r23.s64 = r23.s64 + 3;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// sth r11,-10(r30)
	REX_STORE_U16(r30.u32 + -10, ctx.r11.u16);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwimi r11,r22,18,8,15
	ctx.r11.u64 = (__builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 18) & 0xFF0000) | (ctx.r11.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// ori r11,r11,12816
	ctx.r11.u64 = ctx.r11.u64 | 12816;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// lwz r26,96(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
loc_825B0A78:
	// lwz r27,0(r30)
	r27.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm. r10,r27,11,29,31
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 11) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825b0b34
	if (ctx.cr0.eq) goto loc_825B0B34;
	// clrlwi r11,r26,16
	ctx.r11.u64 = r26.u32 & 0xFFFF;
	// cmplwi cr6,r11,93
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 93, ctx.xer);
	// beq cr6,0x825b0ab8
	if (ctx.cr6.eq) goto loc_825B0AB8;
	// cmplwi cr6,r11,95
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 95, ctx.xer);
	// beq cr6,0x825b0ab8
	if (ctx.cr6.eq) goto loc_825B0AB8;
	// cmplwi cr6,r11,94
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 94, ctx.xer);
	// beq cr6,0x825b0ab8
	if (ctx.cr6.eq) goto loc_825B0AB8;
	// cmplwi cr6,r11,96
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 96, ctx.xer);
	// beq cr6,0x825b0ab8
	if (ctx.cr6.eq) goto loc_825B0AB8;
	// cmplwi cr6,r11,80
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 80, ctx.xer);
	// beq cr6,0x825b0ab8
	if (ctx.cr6.eq) goto loc_825B0AB8;
	// cmplwi cr6,r11,59
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 59, ctx.xer);
	// bne cr6,0x825b0adc
	if (!ctx.cr6.eq) goto loc_825B0ADC;
loc_825B0AB8:
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bne cr6,0x825b0adc
	if (!ctx.cr6.eq) goto loc_825B0ADC;
	// rlwinm r5,r26,16,28,31
	ctx.r5.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 16) & 0xF;
	// lwz r3,20(r18)
	ctx.r3.u64 = REX_LOAD_U32(r18.u32 + 20);
	// li r4,14
	ctx.r4.s64 = 14;
	// bl 0x824f05f0
	ctx.lr = 0x825B0AD0;
	sub_824F05F0(ctx, base);
	// rlwimi r27,r3,21,8,10
	r27.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 21) & 0xE00000) | (r27.u64 & 0xFFFFFFFFFF1FFFFF);
	// stw r27,0(r30)
	REX_STORE_U32(r30.u32 + 0, r27.u32);
	// lwz r26,96(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
loc_825B0ADC:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm. r11,r11,0,8,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE00000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825b0b34
	if (ctx.cr0.eq) goto loc_825B0B34;
	// addi r5,r30,12
	ctx.r5.s64 = r30.s64 + 12;
	// lwz r6,0(r28)
	ctx.r6.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825acea8
	ctx.lr = 0x825B0B00;
	sub_825ACEA8(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// li r12,-17768
	ctx.r12.s64 = -17768;
	// addi r23,r23,3
	r23.s64 = r23.s64 + 3;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// sth r11,-10(r30)
	REX_STORE_U16(r30.u32 + -10, ctx.r11.u16);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwimi r11,r22,18,8,15
	ctx.r11.u64 = (__builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 18) & 0xFF0000) | (ctx.r11.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// ori r11,r11,12816
	ctx.r11.u64 = ctx.r11.u64 | 12816;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// lwz r26,96(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
loc_825B0B34:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lis r10,16
	ctx.r10.s64 = 1048576;
	// rlwinm r11,r11,0,11,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x825b0c24
	if (!ctx.cr6.eq) goto loc_825B0C24;
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// addi r11,r31,4
	ctx.r11.s64 = r31.s64 + 4;
	// sth r19,2(r31)
	REX_STORE_U16(r31.u32 + 2, r19.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r8,r8,0,16,2
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFE000FFFF;
	// stw r8,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// add r8,r25,r28
	ctx.r8.u64 = r25.u64 + r28.u64;
	// sth r10,6(r31)
	REX_STORE_U16(r31.u32 + 6, ctx.r10.u16);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwimi r10,r22,18,8,15
	ctx.r10.u64 = (__builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 18) & 0xFF0000) | (ctx.r10.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// addi r31,r11,4
	r31.s64 = ctx.r11.s64 + 4;
loc_825B0B7C:
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// lwz r7,0(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// sth r10,2(r31)
	REX_STORE_U16(r31.u32 + 2, ctx.r10.u16);
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwimi r6,r4,0,16,7
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFFF00FFFF) | (ctx.r6.u64 & 0xFF0000);
	// rlwimi r6,r4,0,9,9
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x400000) | (ctx.r6.u64 & 0xFFFFFFFFFFBFFFFF);
	// oris r6,r6,64
	ctx.r6.u64 = ctx.r6.u64 | 4194304;
	// stw r6,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r6.u32);
	// lwzu r6,4(r31)
	ea = 4 + r31.u32;
	ctx.r6.u64 = REX_LOAD_U32(ea);
	r31.u32 = ea;
	// rlwimi r11,r6,0,0,24
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFF80) | (ctx.r11.u64 & 0xFFFFFFFF0000007F);
	// rlwimi r11,r6,0,28,28
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x8) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFF7);
	// rlwimi r5,r11,0,24,20
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFF8FF) | (ctx.r5.u64 & 0x700);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// stw r5,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r5.u32);
	// rlwimi r11,r7,0,17,19
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x7000) | (ctx.r11.u64 & 0xFFFFFFFFFFFF8FFF);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bne cr6,0x825b0bdc
	if (!ctx.cr6.eq) goto loc_825B0BDC;
	// ori r11,r11,34952
	ctx.r11.u64 = ctx.r11.u64 | 34952;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_825B0BDC:
	// rlwinm. r11,r10,0,8,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// beq 0x825b0bf8
	if (ctx.cr0.eq) goto loc_825B0BF8;
	// addi r11,r1,136
	ctx.r11.s64 = ctx.r1.s64 + 136;
	// lwzx r11,r8,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_825B0BF8:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// blt cr6,0x825b0b7c
	if (ctx.cr6.lt) goto loc_825B0B7C;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// sth r11,-10(r30)
	REX_STORE_U16(r30.u32 + -10, ctx.r11.u16);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwimi r11,r22,18,8,15
	ctx.r11.u64 = (__builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 18) & 0xFF0000) | (ctx.r11.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// stw r17,0(r30)
	REX_STORE_U32(r30.u32 + 0, r17.u32);
	// lwz r26,96(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
loc_825B0C24:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// beq cr6,0x825b0c58
	if (ctx.cr6.eq) goto loc_825B0C58;
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r10,128
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 128, ctx.xer);
	// beq cr6,0x825b0c58
	if (ctx.cr6.eq) goto loc_825B0C58;
	// rlwinm r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	// cmplwi cr6,r10,2048
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2048, ctx.xer);
	// beq cr6,0x825b0c58
	if (ctx.cr6.eq) goto loc_825B0C58;
	// rlwinm r11,r11,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	// cmplwi cr6,r11,32768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32768, ctx.xer);
	// bne cr6,0x825b0c78
	if (!ctx.cr6.eq) goto loc_825B0C78;
loc_825B0C58:
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// lwz r6,0(r28)
	ctx.r6.u64 = REX_LOAD_U32(r28.u32 + 0);
	// addi r5,r30,12
	ctx.r5.s64 = r30.s64 + 12;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825ad238
	ctx.lr = 0x825B0C70;
	sub_825AD238(ctx, base);
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_825B0C78:
	// addic. r21,r21,-1
	ctx.xer.ca = r21.u32 > 0;
	r21.s64 = r21.s64 + -1;
	ctx.cr0.compare<int32_t>(r21.s32, 0, ctx.xer);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x825b072c
	if (!ctx.cr0.eq) goto loc_825B072C;
	// b 0x825b0da8
	goto loc_825B0DA8;
loc_825B0C8C:
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825b0db4
	if (ctx.cr0.eq) goto loc_825B0DB4;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x825b0db4
	if (ctx.cr6.eq) goto loc_825B0DB4;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r30,r1,112
	r30.s64 = ctx.r1.s64 + 112;
	// addi r29,r11,23212
	r29.s64 = ctx.r11.s64 + 23212;
	// subfic r24,r11,-23212
	ctx.xer.ca = ctx.r11.u32 <= 4294944084;
	r24.u64 = static_cast<uint64_t>(-23212) - ctx.r11.u64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r20,r11,-7224
	r20.s64 = ctx.r11.s64 + -7224;
loc_825B0CB4:
	// lhz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 0);
	// clrlwi r11,r11,26
	ctx.r11.u64 = ctx.r11.u32 & 0x3F;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x825b0d94
	if (!ctx.cr6.eq) goto loc_825B0D94;
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r11,r31,4
	ctx.r11.s64 = r31.s64 + 4;
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// add r28,r29,r24
	r28.u64 = r29.u64 + r24.u64;
	// sth r19,2(r31)
	REX_STORE_U16(r31.u32 + 2, r19.u16);
	// rlwinm r25,r9,9,31,31
	r25.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 9) & 0x1;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r9,0,16,2
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFE000FFFF;
	// stw r9,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// li r26,2
	r26.s64 = 2;
	// sth r10,6(r31)
	REX_STORE_U16(r31.u32 + 6, ctx.r10.u16);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwimi r10,r22,18,8,15
	ctx.r10.u64 = (__builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 18) & 0xFF0000) | (ctx.r10.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// addi r31,r11,4
	r31.s64 = ctx.r11.s64 + 4;
loc_825B0D00:
	// lwz r27,0(r30)
	r27.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// rlwinm r10,r27,0,10,15
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x3F0000;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x825b0d2c
	if (ctx.cr6.eq) goto loc_825B0D2C;
	// mr r6,r15
	ctx.r6.u64 = r15.u64;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// li r7,9724
	ctx.r7.s64 = 9724;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825B0D2C;
	sub_824EA978(ctx, base);
loc_825B0D2C:
	// sth r27,2(r31)
	REX_STORE_U16(r31.u32 + 2, r27.u16);
	// rlwinm. r10,r27,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwimi r11,r27,0,8,15
	ctx.r11.u64 = (__builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFF0000) | (ctx.r11.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// beq 0x825b0d58
	if (ctx.cr0.eq) goto loc_825B0D58;
	// addi r11,r1,124
	ctx.r11.s64 = ctx.r1.s64 + 124;
	// lwzx r11,r28,r11
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + ctx.r11.u32);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_825B0D58:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x825b0d70
	if (ctx.cr6.eq) goto loc_825B0D70;
	// addi r11,r1,136
	ctx.r11.s64 = ctx.r1.s64 + 136;
	// lwzx r11,r28,r11
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + ctx.r11.u32);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_825B0D70:
	// addic. r26,r26,-1
	ctx.xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// bne 0x825b0d00
	if (!ctx.cr0.eq) goto loc_825B0D00;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// sth r11,2(r30)
	REX_STORE_U16(r30.u32 + 2, ctx.r11.u16);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwimi r11,r22,18,8,15
	ctx.r11.u64 = (__builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 18) & 0xFF0000) | (ctx.r11.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// stw r17,12(r30)
	REX_STORE_U32(r30.u32 + 12, r17.u32);
loc_825B0D94:
	// addic. r21,r21,-1
	ctx.xer.ca = r21.u32 > 0;
	r21.s64 = r21.s64 + -1;
	ctx.cr0.compare<int32_t>(r21.s32, 0, ctx.xer);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x825b0cb4
	if (!ctx.cr0.eq) goto loc_825B0CB4;
	// lwz r26,96(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
loc_825B0DA8:
	// lwz r30,100(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r29,112(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r23,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r23.u32);
loc_825B0DB4:
	// clrlwi r11,r26,16
	ctx.r11.u64 = r26.u32 & 0xFFFF;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r10,96
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 96, ctx.xer);
	// bgt cr6,0x825b1484
	if (ctx.cr6.gt) goto loc_825B1484;
	// lis r12,-32251
	ctx.r12.s64 = -2113601536;
	// rlwinm r0,r10,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r12,r12,-8232
	ctx.r12.s64 = ctx.r12.s64 + -8232;
	// lhzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32165
	ctx.r12.s64 = -2107965440;
	// addi r12,r12,3564
	ctx.r12.s64 = ctx.r12.s64 + 3564;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_825B0FDC;
	case 1:
		goto loc_825B1484;
	case 2:
		goto loc_825B1484;
	case 3:
		goto loc_825B1484;
	case 4:
		goto loc_825B1484;
	case 5:
		goto loc_825B0F50;
	case 6:
		goto loc_825B0F58;
	case 7:
		goto loc_825B1484;
	case 8:
		goto loc_825B1484;
	case 9:
		goto loc_825B0DEC;
	case 10:
		goto loc_825B1484;
	case 11:
		goto loc_825B1484;
	case 12:
		goto loc_825B0FEC;
	case 13:
		goto loc_825B1000;
	case 14:
		goto loc_825B1484;
	case 15:
		goto loc_825B1484;
	case 16:
		goto loc_825B1484;
	case 17:
		goto loc_825B1484;
	case 18:
		goto loc_825B1020;
	case 19:
		goto loc_825B1484;
	case 20:
		goto loc_825B1484;
	case 21:
		goto loc_825B0F8C;
	case 22:
		goto loc_825B1484;
	case 23:
		goto loc_825B1484;
	case 24:
		goto loc_825B1484;
	case 25:
		goto loc_825B1484;
	case 26:
		goto loc_825B1484;
	case 27:
		goto loc_825B1484;
	case 28:
		goto loc_825B1484;
	case 29:
		goto loc_825B1484;
	case 30:
		goto loc_825B1484;
	case 31:
		goto loc_825B1034;
	case 32:
		goto loc_825B1484;
	case 33:
		goto loc_825B1484;
	case 34:
		goto loc_825B1484;
	case 35:
		goto loc_825B1484;
	case 36:
		goto loc_825B0DEC;
	case 37:
		goto loc_825B0DEC;
	case 38:
		goto loc_825B0E24;
	case 39:
		goto loc_825B1248;
	case 40:
		goto loc_825B0E70;
	case 41:
		goto loc_825B0F74;
	case 42:
		goto loc_825B1484;
	case 43:
		goto loc_825B0DEC;
	case 44:
		goto loc_825B1484;
	case 45:
		goto loc_825B1048;
	case 46:
		goto loc_825B1484;
	case 47:
		goto loc_825B1484;
	case 48:
		goto loc_825B1484;
	case 49:
		goto loc_825B1484;
	case 50:
		goto loc_825B1484;
	case 51:
		goto loc_825B0E08;
	case 52:
		goto loc_825B1484;
	case 53:
		goto loc_825B105C;
	case 54:
		goto loc_825B1484;
	case 55:
		goto loc_825B1484;
	case 56:
		goto loc_825B1118;
	case 57:
		goto loc_825B1484;
	case 58:
		goto loc_825B1484;
	case 59:
		goto loc_825B1484;
	case 60:
		goto loc_825B10FC;
	case 61:
		goto loc_825B0E78;
	case 62:
		goto loc_825B114C;
	case 63:
		goto loc_825B1484;
	case 64:
		goto loc_825B1484;
	case 65:
		goto loc_825B0FC4;
	case 66:
		goto loc_825B1484;
	case 67:
		goto loc_825B1484;
	case 68:
		goto loc_825B1168;
	case 69:
		goto loc_825B11A4;
	case 70:
		goto loc_825B105C;
	case 71:
		goto loc_825B11C0;
	case 72:
		goto loc_825B1484;
	case 73:
		goto loc_825B1484;
	case 74:
		goto loc_825B1484;
	case 75:
		goto loc_825B11D8;
	case 76:
		goto loc_825B1484;
	case 77:
		goto loc_825B11EC;
	case 78:
		goto loc_825B1484;
	case 79:
		goto loc_825B1484;
	case 80:
		goto loc_825B1484;
	case 81:
		goto loc_825B1484;
	case 82:
		goto loc_825B1484;
	case 83:
		goto loc_825B1484;
	case 84:
		goto loc_825B1484;
	case 85:
		goto loc_825B1200;
	case 86:
		goto loc_825B1210;
	case 87:
		goto loc_825B1484;
	case 88:
		goto loc_825B1224;
	case 89:
		goto loc_825B1484;
	case 90:
		goto loc_825B1238;
	case 91:
		goto loc_825B1484;
	case 92:
		goto loc_825B0FAC;
	case 93:
		goto loc_825B0FAC;
	case 94:
		goto loc_825B0DEC;
	case 95:
		goto loc_825B0DEC;
	case 96:
		goto loc_825B0DEC;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_825B0DEC:
	// li r7,13303
	ctx.r7.s64 = 13303;
loc_825B0DF0:
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r5,r14
	ctx.r5.u64 = r14.u64;
	// mr r6,r15
	ctx.r6.u64 = r15.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825B0E04;
	sub_824EA978(ctx, base);
	// b 0x825b151c
	goto loc_825B151C;
loc_825B0E08:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x825ab808
	ctx.lr = 0x825B0E18;
	sub_825AB808(ctx, base);
loc_825B0E18:
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_825B0E1C:
	// addi r23,r23,2
	r23.s64 = r23.s64 + 2;
	// b 0x825b151c
	goto loc_825B151C;
loc_825B0E24:
	// li r10,110
	ctx.r10.s64 = 110;
loc_825B0E28:
	// lwz r9,28(r18)
	ctx.r9.u64 = REX_LOAD_U32(r18.u32 + 28);
	// addi r11,r31,8
	ctx.r11.s64 = r31.s64 + 8;
	// sth r10,2(r31)
	REX_STORE_U16(r31.u32 + 2, ctx.r10.u16);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r10,r10,0,16,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFE000FFFF;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r10,23360(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 23360);
	// sth r10,6(r31)
	REX_STORE_U16(r31.u32 + 6, ctx.r10.u16);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwimi r10,r22,18,8,15
	ctx.r10.u64 = (__builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 18) & 0xFF0000) | (ctx.r10.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// lwz r10,23360(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 23360);
	// sth r10,10(r31)
	REX_STORE_U16(r31.u32 + 10, ctx.r10.u16);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwimi r10,r22,18,8,15
	ctx.r10.u64 = (__builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 18) & 0xFF0000) | (ctx.r10.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// addi r31,r11,4
	r31.s64 = ctx.r11.s64 + 4;
	// b 0x825b1518
	goto loc_825B1518;
loc_825B0E70:
	// li r10,111
	ctx.r10.s64 = 111;
	// b 0x825b0e28
	goto loc_825B0E28;
loc_825B0E78:
	// lwz r29,28(r18)
	r29.u64 = REX_LOAD_U32(r18.u32 + 28);
	// li r10,17
	ctx.r10.s64 = 17;
	// sth r19,2(r31)
	REX_STORE_U16(r31.u32 + 2, r19.u16);
	// addi r30,r31,4
	r30.s64 = r31.s64 + 4;
	// rlwinm r11,r26,16,19,31
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 16) & 0x1FFF;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r8,r8,0,16,2
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFE000FFFF;
	// stw r8,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// lwz r8,23364(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 23364);
	// sth r8,6(r31)
	REX_STORE_U16(r31.u32 + 6, ctx.r8.u16);
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwimi r8,r10,18,8,15
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0xFF0000) | (ctx.r8.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r8,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r8.u32);
	// stwu r9,4(r30)
	ea = 4 + r30.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	r30.u32 = ea;
	// beq cr6,0x825b0f14
	if (ctx.cr6.eq) goto loc_825B0F14;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x825b0f08
	if (ctx.cr6.eq) goto loc_825B0F08;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x825b0f00
	if (ctx.cr6.eq) goto loc_825B0F00;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x825b0ef8
	if (ctx.cr6.eq) goto loc_825B0EF8;
	// mr r6,r15
	ctx.r6.u64 = r15.u64;
	// mr r5,r14
	ctx.r5.u64 = r14.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// li r7,8003
	ctx.r7.s64 = 8003;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825B0EEC;
	sub_824EA978(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwimi r11,r22,0,30,31
	ctx.r11.u64 = (__builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 0) & 0x3) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFC);
	// b 0x825b0f0c
	goto loc_825B0F0C;
loc_825B0EF8:
	// li r11,64
	ctx.r11.s64 = 64;
	// b 0x825b0f0c
	goto loc_825B0F0C;
loc_825B0F00:
	// li r11,16
	ctx.r11.s64 = 16;
	// b 0x825b0f0c
	goto loc_825B0F0C;
loc_825B0F08:
	// li r11,4
	ctx.r11.s64 = 4;
loc_825B0F0C:
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// b 0x825b0f18
	goto loc_825B0F18;
loc_825B0F14:
	// stw r22,0(r30)
	REX_STORE_U32(r30.u32 + 0, r22.u32);
loc_825B0F18:
	// lwz r10,23360(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 23360);
	// addi r11,r30,4
	ctx.r11.s64 = r30.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// sth r10,6(r30)
	REX_STORE_U16(r30.u32 + 6, ctx.r10.u16);
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// rlwimi r10,r22,18,8,15
	ctx.r10.u64 = (__builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 18) & 0xFF0000) | (ctx.r10.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r10,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// lwz r10,23360(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 23360);
	// sth r10,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r10,r22,18,8,15
	ctx.r10.u64 = (__builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 18) & 0xFF0000) | (ctx.r10.u64 & 0xFFFFFFFFFF00FFFF);
loc_825B0F44:
	// addi r31,r11,4
	r31.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x825b1518
	goto loc_825B1518;
loc_825B0F50:
	// li r10,112
	ctx.r10.s64 = 112;
	// b 0x825b0e28
	goto loc_825B0E28;
loc_825B0F58:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x825aba08
	ctx.lr = 0x825B0F68;
	sub_825ABA08(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_825B0F6C:
	// addi r23,r23,4
	r23.s64 = r23.s64 + 4;
	// b 0x825b151c
	goto loc_825B151C;
loc_825B0F74:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x825abc98
	ctx.lr = 0x825B0F84;
	sub_825ABC98(ctx, base);
loc_825B0F84:
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x825b1518
	goto loc_825B1518;
loc_825B0F8C:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x825adbb8
	ctx.lr = 0x825B0FA0;
	sub_825ADBB8(ctx, base);
loc_825B0FA0:
	// lwz r23,80(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x825b151c
	goto loc_825B151C;
loc_825B0FAC:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x825af980
	ctx.lr = 0x825B0FC0;
	sub_825AF980(ctx, base);
	// b 0x825b0fa0
	goto loc_825B0FA0;
loc_825B0FC4:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x825ac568
	ctx.lr = 0x825B0FD8;
	sub_825AC568(ctx, base);
	// b 0x825b0fa0
	goto loc_825B0FA0;
loc_825B0FDC:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825a7548
	ctx.lr = 0x825B0FE8;
	sub_825A7548(ctx, base);
	// b 0x825b0f84
	goto loc_825B0F84;
loc_825B0FEC:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x825a76e8
	ctx.lr = 0x825B0FFC;
	sub_825A76E8(ctx, base);
	// b 0x825b0e18
	goto loc_825B0E18;
loc_825B1000:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r6,148(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x825af590
	ctx.lr = 0x825B1014;
	sub_825AF590(ctx, base);
loc_825B1014:
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r23,r23,5
	r23.s64 = r23.s64 + 5;
	// b 0x825b151c
	goto loc_825B151C;
loc_825B1020:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x825a7a98
	ctx.lr = 0x825B1030;
	sub_825A7A98(ctx, base);
	// b 0x825b0e18
	goto loc_825B0E18;
loc_825B1034:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x825a7e68
	ctx.lr = 0x825B1044;
	sub_825A7E68(ctx, base);
	// b 0x825b1014
	goto loc_825B1014;
loc_825B1048:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x825a82c0
	ctx.lr = 0x825B1058;
	sub_825A82C0(ctx, base);
	// b 0x825b1014
	goto loc_825B1014;
loc_825B105C:
	// rlwimi r26,r19,0,16,31
	r26.u64 = (__builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 0) & 0xFFFF) | (r26.u64 & 0xFFFFFFFFFFFF0000);
	// addi r11,r31,4
	ctx.r11.s64 = r31.s64 + 4;
	// stw r26,0(r31)
	REX_STORE_U32(r31.u32 + 0, r26.u32);
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r26,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r26.u32);
	// rlwinm. r9,r30,0,9,9
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x825b108c
	if (ctx.cr0.eq) goto loc_825B108C;
	// lwz r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_825B108C:
	// rlwinm. r10,r30,0,8,8
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825b10a0
	if (ctx.cr0.eq) goto loc_825B10A0;
	// lwz r10,108(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_825B10A0:
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r29.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r7,124(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// rlwinm. r10,r29,10,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825b10bc
	if (ctx.cr0.eq) goto loc_825B10BC;
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_825B10BC:
	// lwz r8,136(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// rlwinm. r9,r29,9,31,31
	ctx.r9.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x825b10d0
	if (ctx.cr0.eq) goto loc_825B10D0;
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_825B10D0:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r29.u32);
	// addi r31,r11,4
	r31.s64 = ctx.r11.s64 + 4;
	// beq cr6,0x825b10e8
	if (ctx.cr6.eq) goto loc_825B10E8;
	// stw r7,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r7.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_825B10E8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x825b1518
	if (ctx.cr6.eq) goto loc_825B1518;
	// stw r8,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// b 0x825b1518
	goto loc_825B1518;
loc_825B10FC:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x825a9148
	ctx.lr = 0x825B110C;
	sub_825A9148(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r23,r23,6
	r23.s64 = r23.s64 + 6;
	// b 0x825b151c
	goto loc_825B151C;
loc_825B1118:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x825a87d8
	ctx.lr = 0x825B1128;
	sub_825A87D8(ctx, base);
	// lwz r11,28(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 28);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x825b1144
	if (ctx.cr6.eq) goto loc_825B1144;
	// addi r23,r23,10
	r23.s64 = r23.s64 + 10;
	// b 0x825b151c
	goto loc_825B151C;
loc_825B1144:
	// addi r23,r23,9
	r23.s64 = r23.s64 + 9;
	// b 0x825b151c
	goto loc_825B151C;
loc_825B114C:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x825a9578
	ctx.lr = 0x825B115C;
	sub_825A9578(ctx, base);
loc_825B115C:
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_825B1160:
	// addi r23,r23,3
	r23.s64 = r23.s64 + 3;
	// b 0x825b151c
	goto loc_825B151C;
loc_825B1168:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825a9870
	ctx.lr = 0x825B1174;
	sub_825A9870(ctx, base);
	// rlwinm r11,r26,16,19,31
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 16) & 0x1FFF;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x825b0f6c
	if (ctx.cr6.lt) goto loc_825B0F6C;
	// beq cr6,0x825b1160
	if (ctx.cr6.eq) goto loc_825B1160;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x825b0f6c
	if (ctx.cr6.lt) goto loc_825B0F6C;
	// beq cr6,0x825b1160
	if (ctx.cr6.eq) goto loc_825B1160;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// blt cr6,0x825b0e1c
	if (ctx.cr6.lt) goto loc_825B0E1C;
	// li r7,13445
	ctx.r7.s64 = 13445;
	// b 0x825b0df0
	goto loc_825B0DF0;
loc_825B11A4:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x825a9cf0
	ctx.lr = 0x825B11B4;
	sub_825A9CF0(ctx, base);
loc_825B11B4:
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r23,r23,8
	r23.s64 = r23.s64 + 8;
	// b 0x825b151c
	goto loc_825B151C;
loc_825B11C0:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// addi r5,r11,23224
	ctx.r5.s64 = ctx.r11.s64 + 23224;
	// bl 0x825ad568
	ctx.lr = 0x825B11D4;
	sub_825AD568(ctx, base);
	// b 0x825b151c
	goto loc_825B151C;
loc_825B11D8:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x825aa248
	ctx.lr = 0x825B11E8;
	sub_825AA248(ctx, base);
	// b 0x825b115c
	goto loc_825B115C;
loc_825B11EC:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x825aa640
	ctx.lr = 0x825B11FC;
	sub_825AA640(ctx, base);
	// b 0x825b115c
	goto loc_825B115C;
loc_825B1200:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825aa870
	ctx.lr = 0x825B120C;
	sub_825AA870(ctx, base);
	// b 0x825b0f84
	goto loc_825B0F84;
loc_825B1210:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x825aaac0
	ctx.lr = 0x825B1220;
	sub_825AAAC0(ctx, base);
	// b 0x825b115c
	goto loc_825B115C;
loc_825B1224:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x825aad98
	ctx.lr = 0x825B1234;
	sub_825AAD98(ctx, base);
	// b 0x825b11b4
	goto loc_825B11B4;
loc_825B1238:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825ab6a0
	ctx.lr = 0x825B1244;
	sub_825AB6A0(ctx, base);
	// b 0x825b0f84
	goto loc_825B0F84;
loc_825B1248:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r23,0
	r23.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x825b130c
	if (!ctx.cr6.eq) goto loc_825B130C;
	// li r4,163
	ctx.r4.s64 = 163;
	// lwz r3,20(r18)
	ctx.r3.u64 = REX_LOAD_U32(r18.u32 + 20);
	// bl 0x824f02c0
	ctx.lr = 0x825B1268;
	sub_824F02C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825b130c
	if (ctx.cr0.eq) goto loc_825B130C;
	// lwz r29,84(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,20896(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 20896);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x825b1310
	if (ctx.cr6.eq) goto loc_825B1310;
	// li r4,165
	ctx.r4.s64 = 165;
	// lwz r3,20(r18)
	ctx.r3.u64 = REX_LOAD_U32(r18.u32 + 20);
	// bl 0x824f02c0
	ctx.lr = 0x825B128C;
	sub_824F02C0(ctx, base);
	// lwz r11,20(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 20);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r4,169
	ctx.r4.s64 = 169;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x824f02c0
	ctx.lr = 0x825B12A0;
	sub_824F02C0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x825b12c8
	if (ctx.cr6.eq) goto loc_825B12C8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r15
	ctx.r6.u64 = r15.u64;
	// addi r5,r11,-6268
	ctx.r5.s64 = ctx.r11.s64 + -6268;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// li r7,13526
	ctx.r7.s64 = 13526;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825B12C8;
	sub_824EA978(ctx, base);
loc_825B12C8:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(r30.u32, 1, ctx.xer);
	// beq cr6,0x825b12d8
	if (ctx.cr6.eq) goto loc_825B12D8;
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(r30.u32, 2, ctx.xer);
	// bne cr6,0x825b12f4
	if (!ctx.cr6.eq) goto loc_825B12F4;
loc_825B12D8:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r15
	ctx.r6.u64 = r15.u64;
	// addi r5,r11,-6352
	ctx.r5.s64 = ctx.r11.s64 + -6352;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// li r7,13527
	ctx.r7.s64 = 13527;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825B12F4;
	sub_824EA978(ctx, base);
loc_825B12F4:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x825b0108
	ctx.lr = 0x825B1300;
	sub_825B0108(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r23,3
	r23.s64 = 3;
	// b 0x825b1310
	goto loc_825B1310;
loc_825B130C:
	// lwz r29,84(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_825B1310:
	// lwz r11,16776(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16776);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825b13e4
	if (ctx.cr6.eq) goto loc_825B13E4;
	// addi r30,r29,16768
	r30.s64 = r29.s64 + 16768;
loc_825B1320:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825b136c
	if (ctx.cr6.eq) goto loc_825B136C;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// lwz r9,12(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r8,8(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// rotlwi r7,r9,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// stw r9,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r9.u32);
	// stw r8,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// stw r7,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r7.u32);
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 8);
	// lwz r3,0(r18)
	ctx.r3.u64 = REX_LOAD_U32(r18.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825B136C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825B136C:
	// lwz r11,164(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// lwz r10,168(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwz r9,160(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// lwz r6,176(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// stw r7,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r7.u32);
	// rlwimi r6,r19,0,3,31
	ctx.r6.u64 = (__builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 0) & 0x1FFFFFFF) | (ctx.r6.u64 & 0xFFFFFFFFE0000000);
	// lwz r7,180(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// addi r11,r31,8
	ctx.r11.s64 = r31.s64 + 8;
	// rlwimi r7,r10,16,10,15
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x3F0000) | (ctx.r7.u64 & 0xFFFFFFFFFFC0FFFF);
	// lwz r10,192(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// andis. r7,r7,65471
	ctx.r7.u64 = ctx.r7.u64 & 4290707456;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// andis. r10,r10,65284
	ctx.r10.u64 = ctx.r10.u64 & 4278452224;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r9,r6,0,3,1
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// stw r9,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// oris r10,r10,4
	ctx.r10.u64 = ctx.r10.u64 | 262144;
	// rlwinm r8,r8,0,9,7
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF;
	// stw r8,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r8.u32);
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// addi r31,r11,4
	r31.s64 = ctx.r11.s64 + 4;
	// lwz r11,16776(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16776);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825b1320
	if (!ctx.cr6.eq) goto loc_825B1320;
loc_825B13E4:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825b151c
	if (ctx.cr6.eq) goto loc_825B151C;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,20384(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20384);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x825b1408
	if (!ctx.cr6.eq) goto loc_825B1408;
	// li r10,62
	ctx.r10.s64 = 62;
	// stw r10,20384(r11)
	REX_STORE_U32(ctx.r11.u32 + 20384, ctx.r10.u32);
loc_825B1408:
	// sth r19,2(r31)
	REX_STORE_U16(r31.u32 + 2, r19.u16);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r11,r31,8
	ctx.r11.s64 = r31.s64 + 8;
	// li r12,-17477
	ctx.r12.s64 = -17477;
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r8,r8,0,16,2
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFE000FFFF;
	// stw r8,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// sth r10,6(r31)
	REX_STORE_U16(r31.u32 + 6, ctx.r10.u16);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwimi r10,r9,17,8,15
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 17) & 0xFF0000) | (ctx.r10.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// sth r22,10(r31)
	REX_STORE_U16(r31.u32 + 10, r22.u16);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwimi r10,r19,16,8,15
	ctx.r10.u64 = (__builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 16) & 0xFF0000) | (ctx.r10.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// stb r22,8(r31)
	REX_STORE_U8(r31.u32 + 8, r22.u8);
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// and r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 & ctx.r12.u64;
	// ori r10,r10,13107
	ctx.r10.u64 = ctx.r10.u64 | 13107;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// sth r22,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, r22.u16);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r10,r19,16,8,15
	ctx.r10.u64 = (__builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 16) & 0xFF0000) | (ctx.r10.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stb r22,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, r22.u8);
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// and r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 & ctx.r12.u64;
	// ori r10,r10,13107
	ctx.r10.u64 = ctx.r10.u64 | 13107;
	// b 0x825b0f44
	goto loc_825B0F44;
loc_825B1484:
	// lwz r10,152(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r31,4
	ctx.r11.s64 = r31.s64 + 4;
	// addi r10,r10,456
	ctx.r10.s64 = ctx.r10.s64 + 456;
	// rlwinm. r8,r30,0,9,9
	ctx.r8.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lwzx r10,r9,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stw r26,0(r31)
	REX_STORE_U32(r31.u32 + 0, r26.u32);
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// addi r31,r11,4
	r31.s64 = ctx.r11.s64 + 4;
	// beq 0x825b14b8
	if (ctx.cr0.eq) goto loc_825B14B8;
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_825B14B8:
	// rlwinm. r11,r30,0,8,8
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825b14cc
	if (ctx.cr0.eq) goto loc_825B14CC;
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_825B14CC:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825b1518
	if (ctx.cr6.eq) goto loc_825B1518;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_825B14DC:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r10,0,9,9
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// beq 0x825b14fc
	if (ctx.cr0.eq) goto loc_825B14FC;
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r9,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_825B14FC:
	// rlwinm. r10,r10,0,8,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825b1510
	if (ctx.cr0.eq) goto loc_825B1510;
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_825B1510:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x825b14dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825B14DC;
loc_825B1518:
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
loc_825B151C:
	// lwz r11,156(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825b1548
	if (ctx.cr0.eq) goto loc_825B1548;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x825ad3a8
	ctx.lr = 0x825B1544;
	sub_825AD3A8(ctx, base);
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
loc_825B1548:
	// lwz r11,428(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 428);
	// lwz r3,412(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 412);
	// stw r23,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r23.u32);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_826263B0) {
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
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
loc_826263C0:
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
	// bne 0x826263c0
	if (!ctx.cr0.eq) goto loc_826263C0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826263f4
	if (!ctx.cr6.eq) goto loc_826263F4;
	// li r11,15
	ctx.r11.s64 = 15;
	// stb r11,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// bl 0x8264c3d0
	ctx.lr = 0x826263F4;
	sub_8264C3D0(ctx, base);
loc_826263F4:
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

DEFINE_REX_FUNC(sub_826277A0) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x82627460
	sub_82627460(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82627C70) {
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
	ctx.lr = 0x82627C78;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,12(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82627C98;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r27,r29,4
	r27.s64 = r29.s64 + 4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// li r28,0
	r28.s64 = 0;
	// bl 0x826277b8
	ctx.lr = 0x82627CAC;
	sub_826277B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82627cc0
	if (ctx.cr0.eq) goto loc_82627CC0;
	// lwz r3,148(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 148);
	// bl 0x82642a60
	ctx.lr = 0x82627CBC;
	sub_82642A60(ctx, base);
	// b 0x82627d28
	goto loc_82627D28;
loc_82627CC0:
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,20576
	ctx.r3.s64 = ctx.r11.s64 + 20576;
	// ori r5,r5,6
	ctx.r5.u64 = ctx.r5.u64 | 6;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x8260b5b8
	ctx.lr = 0x82627CDC;
	sub_8260B5B8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x82627cf0
	if (!ctx.cr0.eq) goto loc_82627CF0;
	// lis r28,-32761
	r28.s64 = -2147024896;
	// ori r28,r28,14
	r28.u64 = r28.u64 | 14;
	// b 0x82627d28
	goto loc_82627D28;
loc_82627CF0:
	// addic r11,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	ctx.r11.s64 = r30.s64 + -1;
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r27,12(r31)
	REX_STORE_U32(r31.u32 + 12, r27.u32);
	// subfe r11,r11,r30
	temp.u8 = (~ctx.r11.u32 + r30.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + r30.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + r30.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lwz r3,20(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 20);
	// bl 0x82628898
	ctx.lr = 0x82627D18;
	sub_82628898(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bge 0x82627d28
	if (!ctx.cr0.lt) goto loc_82627D28;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8264c3d0
	ctx.lr = 0x82627D28;
	sub_8264C3D0(ctx, base);
loc_82627D28:
	// lwz r3,12(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82627D3C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_826306A8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x826306B0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r7,12(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r6,24(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// lwz r31,0(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// std r4,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// stw r7,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// lwz r4,4(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r30,28(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lfs f0,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// rlwinm r5,r5,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// fsubs f12,f13,f9
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// beq cr6,0x8263072c
	if (ctx.cr6.eq) goto loc_8263072C;
	// lfs f13,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f13,0(r8)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// stfs f11,4(r8)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r8.u32 + 4, temp.u32);
loc_8263072C:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// lfs f13,3704(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3704);
	ctx.f13.f64 = double(temp.f32);
	// bge cr6,0x826307b0
	if (!ctx.cr6.lt) goto loc_826307B0;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
loc_82630740:
	// cmplw cr6,r9,r30
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r30.u32, ctx.xer);
	// bge cr6,0x82630828
	if (!ctx.cr6.lt) goto loc_82630828;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r29,r11,-2
	r29.s64 = ctx.r11.s64 + -2;
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// rlwinm r29,r29,2,0,29
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// lfs f11,-4(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + -4);
	ctx.f11.f64 = double(temp.f32);
	// lfsx f10,r29,r8
	temp.u32 = REX_LOAD_U32(r29.u32 + ctx.r8.u32);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f9,f10
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// fsubs f6,f8,f11
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f11.f64));
	// fmadds f5,f7,f0,f10
	ctx.f5.f64 = double(float(std::fma(ctx.f7.f64, ctx.f0.f64, ctx.f10.f64)));
	// stfs f5,0(r10)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// fmadds f4,f6,f0,f11
	ctx.f4.f64 = double(float(std::fma(ctx.f6.f64, ctx.f0.f64, ctx.f11.f64)));
	// stfsu f4,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x826307a8
	if (ctx.cr6.lt) goto loc_826307A8;
loc_82630798:
	// fsubs f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82630798
	if (!ctx.cr6.lt) goto loc_82630798;
loc_826307A8:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x82630740
	if (ctx.cr6.lt) goto loc_82630740;
loc_826307B0:
	// cmplw cr6,r9,r30
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r30.u32, ctx.xer);
	// bge cr6,0x82630828
	if (!ctx.cr6.lt) goto loc_82630828;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
loc_826307C0:
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r11,-2
	ctx.r4.s64 = ctx.r11.s64 + -2;
	// add r7,r7,r31
	ctx.r7.u64 = ctx.r7.u64 + r31.u64;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// lfs f11,-4(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + -4);
	ctx.f11.f64 = double(temp.f32);
	// lfsx f10,r4,r31
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + r31.u32);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f9,f10
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// fsubs f6,f8,f11
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f11.f64));
	// fmadds f5,f7,f0,f10
	ctx.f5.f64 = double(float(std::fma(ctx.f7.f64, ctx.f0.f64, ctx.f10.f64)));
	// stfs f5,0(r10)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// fmadds f4,f6,f0,f11
	ctx.f4.f64 = double(float(std::fma(ctx.f6.f64, ctx.f0.f64, ctx.f11.f64)));
	// stfsu f4,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82630820
	if (ctx.cr6.lt) goto loc_82630820;
loc_82630810:
	// fsubs f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82630810
	if (!ctx.cr6.lt) goto loc_82630810;
loc_82630820:
	// cmplw cr6,r9,r30
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r30.u32, ctx.xer);
	// blt cr6,0x826307c0
	if (ctx.cr6.lt) goto loc_826307C0;
loc_82630828:
	// addi r10,r6,-2
	ctx.r10.s64 = ctx.r6.s64 + -2;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82630838
	if (!ctx.cr6.lt) goto loc_82630838;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82630838:
	// subf r10,r6,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r6.u64;
	// stfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// neg r7,r6
	ctx.r7.s64 = static_cast<int64_t>(-ctx.r6.u64);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r10,-2
	ctx.r11.s64 = ctx.r10.s64 + -2;
	// stw r9,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// stw r10,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r10.u32);
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x82630908
	if (!ctx.cr6.lt) goto loc_82630908;
	// subf r10,r11,r7
	ctx.r10.u64 = ctx.r7.u64 - ctx.r11.u64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x826308cc
	if (ctx.cr6.lt) goto loc_826308CC;
	// add r10,r11,r6
	ctx.r10.u64 = ctx.r11.u64 + ctx.r6.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r10,-3
	ctx.r5.s64 = ctx.r10.s64 + -3;
	// add r10,r9,r8
	ctx.r10.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r6,2
	ctx.r5.s64 = ctx.r6.s64 + 2;
	// addi r4,r6,3
	ctx.r4.s64 = ctx.r6.s64 + 3;
	// addi r3,r7,-3
	ctx.r3.s64 = ctx.r7.s64 + -3;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
loc_82630890:
	// lfs f0,12(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// add r30,r5,r11
	r30.u64 = ctx.r5.u64 + ctx.r11.u64;
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// add r29,r4,r11
	r29.u64 = ctx.r4.u64 + ctx.r11.u64;
	// lfsu f0,16(r9)
	ea = 16 + ctx.r9.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r9.u32 = ea;
	// rlwinm r30,r30,2,0,29
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f0,8(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// rlwinm r29,r29,2,0,29
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r30,r8
	temp.u32 = REX_LOAD_U32(r30.u32 + ctx.r8.u32);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stfs f13,12(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lfsx f12,r29,r8
	temp.u32 = REX_LOAD_U32(r29.u32 + ctx.r8.u32);
	ctx.f12.f64 = double(temp.f32);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// stfsu f12,16(r10)
	ea = 16 + ctx.r10.u32;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// blt cr6,0x82630890
	if (ctx.cr6.lt) goto loc_82630890;
loc_826308CC:
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x82630908
	if (!ctx.cr6.lt) goto loc_82630908;
	// add r5,r11,r6
	ctx.r5.u64 = ctx.r11.u64 + ctx.r6.u64;
	// subf r10,r11,r7
	ctx.r10.u64 = ctx.r7.u64 - ctx.r11.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r5,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// addi r5,r9,-4
	ctx.r5.s64 = ctx.r9.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r9,r7,-4
	ctx.r9.s64 = ctx.r7.s64 + -4;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_826308FC:
	// lfsu f0,4(r9)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r9.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r9.u32 = ea;
	// stfsu f0,4(r5)
	ea = 4 + ctx.r5.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r5.u32 = ea;
	// bdnz 0x826308fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826308FC;
loc_82630908:
	// neg r10,r11
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x82630980
	if (ctx.cr6.lt) goto loc_82630980;
	// subfic r9,r11,-4
	ctx.xer.ca = ctx.r11.u32 <= 4294967292;
	ctx.r9.u64 = static_cast<uint64_t>(-4) - ctx.r11.u64;
	// add r10,r11,r6
	ctx.r10.u64 = ctx.r11.u64 + ctx.r6.u64;
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r5,r10,-3
	ctx.r5.s64 = ctx.r10.s64 + -3;
	// add r10,r7,r8
	ctx.r10.u64 = ctx.r7.u64 + ctx.r8.u64;
	// rlwinm r7,r5,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r6,2
	ctx.r5.s64 = ctx.r6.s64 + 2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r4,r6,3
	ctx.r4.s64 = ctx.r6.s64 + 3;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// add r9,r7,r31
	ctx.r9.u64 = ctx.r7.u64 + r31.u64;
loc_82630948:
	// add r7,r5,r11
	ctx.r7.u64 = ctx.r5.u64 + ctx.r11.u64;
	// lfs f13,12(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// add r3,r4,r11
	ctx.r3.u64 = ctx.r4.u64 + ctx.r11.u64;
	// lfsu f0,16(r9)
	ea = 16 + ctx.r9.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r9.u32 = ea;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f13,4(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f0,8(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lfsx f12,r7,r31
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + r31.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfsx f11,r3,r31
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + r31.u32);
	ctx.f11.f64 = double(temp.f32);
	// stfs f12,12(r10)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// stfsu f11,16(r10)
	ea = 16 + ctx.r10.u32;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82630948
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82630948;
loc_82630980:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x826309a8
	if (!ctx.cr6.lt) goto loc_826309A8;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r6
	ctx.r9.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r3,r10,r8
	ctx.r3.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// neg r8,r11
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// add r4,r9,r31
	ctx.r4.u64 = ctx.r9.u64 + r31.u64;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a22f8
	ctx.lr = 0x826309A8;
	sub_826A22F8(ctx, base);
loc_826309A8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82645778) {
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
	ctx.lr = 0x82645780;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82645e44
	if (ctx.cr6.eq) goto loc_82645E44;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82645e44
	if (ctx.cr6.eq) goto loc_82645E44;
	// rlwinm r11,r4,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// stw r5,-372(r1)
	REX_STORE_U32(ctx.r1.u32 + -372, ctx.r5.u32);
	// stw r11,-396(r1)
	REX_STORE_U32(ctx.r1.u32 + -396, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82645e38
	if (ctx.cr6.eq) goto loc_82645E38;
	// clrlwi r11,r7,16
	ctx.r11.u64 = ctx.r7.u32 & 0xFFFF;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r11,-368(r1)
	REX_STORE_U32(ctx.r1.u32 + -368, ctx.r11.u32);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r11,r11,-26936
	ctx.r11.s64 = ctx.r11.s64 + -26936;
	// addi r10,r10,-26964
	ctx.r10.s64 = ctx.r10.s64 + -26964;
	// addi r9,r9,-26992
	ctx.r9.s64 = ctx.r9.s64 + -26992;
	// stw r11,-392(r1)
	REX_STORE_U32(ctx.r1.u32 + -392, ctx.r11.u32);
	// stw r10,-380(r1)
	REX_STORE_U32(ctx.r1.u32 + -380, ctx.r10.u32);
	// stw r9,-388(r1)
	REX_STORE_U32(ctx.r1.u32 + -388, ctx.r9.u32);
loc_826457D0:
	// lwz r11,-396(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -396);
	// lwz r10,-368(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -368);
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x826457e8
	if (ctx.cr6.lt) goto loc_826457E8;
	// mr r30,r10
	r30.u64 = ctx.r10.u64;
loc_826457E8:
	// li r9,5
	ctx.r9.s64 = 5;
	// stw r30,-400(r1)
	REX_STORE_U32(ctx.r1.u32 + -400, r30.u32);
	// subf r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - r30.u64;
	// li r28,0
	r28.s64 = 0;
	// stw r11,-396(r1)
	REX_STORE_U32(ctx.r1.u32 + -396, ctx.r11.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r31,r28
	r31.u64 = r28.u64;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8264580C:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// bge cr6,0x8264584c
	if (!ctx.cr6.lt) goto loc_8264584C;
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r4,r1,-320
	ctx.r4.s64 = ctx.r1.s64 + -320;
	// lbz r7,1(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// addi r29,r1,-352
	r29.s64 = ctx.r1.s64 + -352;
	// lbzu r6,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r6.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// rotlwi r7,r7,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// add r9,r7,r8
	ctx.r9.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lbz r8,1(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stwx r9,r10,r4
	REX_STORE_U32(ctx.r10.u32 + ctx.r4.u32, ctx.r9.u32);
	// rotlwi r4,r8,8
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// add r8,r4,r6
	ctx.r8.u64 = ctx.r4.u64 + ctx.r6.u64;
	// stwx r8,r10,r29
	REX_STORE_U32(ctx.r10.u32 + r29.u32, ctx.r8.u32);
	// b 0x8264585c
	goto loc_8264585C;
loc_8264584C:
	// addi r9,r1,-320
	ctx.r9.s64 = ctx.r1.s64 + -320;
	// addi r8,r1,-352
	ctx.r8.s64 = ctx.r1.s64 + -352;
	// stwx r28,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, r28.u32);
	// stwx r28,r10,r8
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, r28.u32);
loc_8264585C:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8264580c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8264580C;
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// lwz r16,-304(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -304);
	// lwz r20,-308(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// lwz r22,-312(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -312);
	// lwz r30,-316(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -316);
	// lwz r17,-320(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -320);
	// lwz r15,-336(r1)
	r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -336);
	// lwz r19,-340(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + -340);
	// lwz r21,-344(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// lwz r18,-348(r1)
	r18.u64 = REX_LOAD_U32(ctx.r1.u32 + -348);
	// lwz r14,-352(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// stw r11,-384(r1)
	REX_STORE_U32(ctx.r1.u32 + -384, ctx.r11.u32);
loc_82645898:
	// lwz r11,-388(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -388);
	// addi r24,r1,-256
	r24.s64 = ctx.r1.s64 + -256;
	// lwz r10,-380(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -380);
	// addi r23,r1,-288
	r23.s64 = ctx.r1.s64 + -288;
	// lwzx r26,r28,r11
	r26.u64 = REX_LOAD_U32(r28.u32 + ctx.r11.u32);
	// lwzx r25,r28,r10
	r25.u64 = REX_LOAD_U32(r28.u32 + ctx.r10.u32);
	// mullw r11,r30,r26
	ctx.r11.s64 = int64_t(r30.s32) * int64_t(r26.s32);
	// mullw r10,r17,r25
	ctx.r10.s64 = int64_t(r17.s32) * int64_t(r25.s32);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// srawi r11,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 8;
	// stwx r10,r28,r24
	REX_STORE_U32(r28.u32 + r24.u32, ctx.r10.u32);
	// stwx r10,r28,r23
	REX_STORE_U32(r28.u32 + r23.u32, ctx.r10.u32);
	// cmpw cr6,r11,r22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r22.s32, ctx.xer);
	// subf r8,r22,r11
	ctx.r8.u64 = ctx.r11.u64 - r22.u64;
	// bgt cr6,0x826458dc
	if (ctx.cr6.gt) goto loc_826458DC;
	// subf r8,r11,r22
	ctx.r8.u64 = r22.u64 - ctx.r11.u64;
loc_826458DC:
	// mullw r11,r30,r25
	ctx.r11.s64 = int64_t(r30.s32) * int64_t(r25.s32);
	// mullw r10,r22,r26
	ctx.r10.s64 = int64_t(r22.s32) * int64_t(r26.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r11,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// cmpw cr6,r11,r20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r20.s32, ctx.xer);
	// subf r9,r20,r11
	ctx.r9.u64 = ctx.r11.u64 - r20.u64;
	// bgt cr6,0x826458fc
	if (ctx.cr6.gt) goto loc_826458FC;
	// subf r9,r11,r20
	ctx.r9.u64 = r20.u64 - ctx.r11.u64;
loc_826458FC:
	// mullw r10,r20,r26
	ctx.r10.s64 = int64_t(r20.s32) * int64_t(r26.s32);
	// mullw r11,r22,r25
	ctx.r11.s64 = int64_t(r22.s32) * int64_t(r25.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r10,r9,r8
	ctx.r10.u64 = ctx.r9.u64 + ctx.r8.u64;
	// srawi r11,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// cmpw cr6,r11,r16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r16.s32, ctx.xer);
	// ble cr6,0x82645920
	if (!ctx.cr6.gt) goto loc_82645920;
	// subf r11,r16,r11
	ctx.r11.u64 = ctx.r11.u64 - r16.u64;
	// b 0x82645924
	goto loc_82645924;
loc_82645920:
	// subf r11,r11,r16
	ctx.r11.u64 = r16.u64 - ctx.r11.u64;
loc_82645924:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r6,12
	ctx.r6.s64 = 12;
	// divw r7,r11,r6
	ctx.r7.u64 = uint32_t((ctx.r6.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r6.s32 == -1)) ? ctx.r11.s32 / ctx.r6.s32 : 0);
	// cmpwi cr6,r7,16
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 16, ctx.xer);
	// bge cr6,0x8264593c
	if (!ctx.cr6.lt) goto loc_8264593C;
	// li r7,16
	ctx.r7.s64 = 16;
loc_8264593C:
	// mullw r11,r14,r25
	ctx.r11.s64 = int64_t(r14.s32) * int64_t(r25.s32);
	// mullw r10,r18,r26
	ctx.r10.s64 = int64_t(r18.s32) * int64_t(r26.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// srawi r11,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// cmpw cr6,r11,r21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r21.s32, ctx.xer);
	// subf r8,r21,r11
	ctx.r8.u64 = ctx.r11.u64 - r21.u64;
	// bgt cr6,0x82645960
	if (ctx.cr6.gt) goto loc_82645960;
	// subf r8,r11,r21
	ctx.r8.u64 = r21.u64 - ctx.r11.u64;
loc_82645960:
	// mullw r11,r18,r25
	ctx.r11.s64 = int64_t(r18.s32) * int64_t(r25.s32);
	// mullw r10,r21,r26
	ctx.r10.s64 = int64_t(r21.s32) * int64_t(r26.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r11,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// cmpw cr6,r11,r19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r19.s32, ctx.xer);
	// subf r9,r19,r11
	ctx.r9.u64 = ctx.r11.u64 - r19.u64;
	// bgt cr6,0x82645980
	if (ctx.cr6.gt) goto loc_82645980;
	// subf r9,r11,r19
	ctx.r9.u64 = r19.u64 - ctx.r11.u64;
loc_82645980:
	// mullw r10,r19,r26
	ctx.r10.s64 = int64_t(r19.s32) * int64_t(r26.s32);
	// mullw r11,r21,r25
	ctx.r11.s64 = int64_t(r21.s32) * int64_t(r25.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r10,r9,r8
	ctx.r10.u64 = ctx.r9.u64 + ctx.r8.u64;
	// srawi r11,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// cmpw cr6,r11,r15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r15.s32, ctx.xer);
	// ble cr6,0x826459a4
	if (!ctx.cr6.gt) goto loc_826459A4;
	// subf r11,r15,r11
	ctx.r11.u64 = ctx.r11.u64 - r15.u64;
	// b 0x826459a8
	goto loc_826459A8;
loc_826459A4:
	// subf r11,r11,r15
	ctx.r11.u64 = r15.u64 - ctx.r11.u64;
loc_826459A8:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// divw r11,r11,r6
	ctx.r11.u64 = uint32_t((ctx.r6.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r6.s32 == -1)) ? ctx.r11.s32 / ctx.r6.s32 : 0);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bge cr6,0x826459bc
	if (!ctx.cr6.lt) goto loc_826459BC;
	// li r11,16
	ctx.r11.s64 = 16;
loc_826459BC:
	// addi r10,r1,-224
	ctx.r10.s64 = ctx.r1.s64 + -224;
	// lwz r9,-400(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -400);
	// addi r8,r1,-192
	ctx.r8.s64 = ctx.r1.s64 + -192;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// mr r31,r30
	r31.u64 = r30.u64;
	// mr r27,r18
	r27.u64 = r18.u64;
	// stwx r7,r28,r10
	REX_STORE_U32(r28.u32 + ctx.r10.u32, ctx.r7.u32);
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// stwx r11,r28,r8
	REX_STORE_U32(r28.u32 + ctx.r8.u32, ctx.r11.u32);
	// mr r6,r14
	ctx.r6.u64 = r14.u64;
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// ble cr6,0x82645b6c
	if (!ctx.cr6.gt) goto loc_82645B6C;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r9,-384(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -384);
	// addi r10,r11,-2
	ctx.r10.s64 = ctx.r11.s64 + -2;
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82645A00:
	// mullw r10,r4,r25
	ctx.r10.s64 = int64_t(ctx.r4.s32) * int64_t(r25.s32);
	// lbz r7,2(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r8,1(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// mullw r9,r31,r26
	ctx.r9.s64 = int64_t(r31.s32) * int64_t(r26.s32);
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rotlwi r10,r7,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// srawi r9,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 8;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// subf r10,r9,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r9.u64;
	// divw r10,r10,r3
	ctx.r10.u64 = uint32_t((ctx.r3.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r3.s32 == -1)) ? ctx.r10.s32 / ctx.r3.s32 : 0);
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// ble cr6,0x82645a3c
	if (!ctx.cr6.gt) goto loc_82645A3C;
	// li r10,7
	ctx.r10.s64 = 7;
	// b 0x82645a48
	goto loc_82645A48;
loc_82645A3C:
	// cmpwi cr6,r10,-8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -8, ctx.xer);
	// bge cr6,0x82645a48
	if (!ctx.cr6.lt) goto loc_82645A48;
	// li r10,-8
	ctx.r10.s64 = -8;
loc_82645A48:
	// mullw r7,r10,r3
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r3.s32);
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// cmpwi cr6,r9,32767
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 32767, ctx.xer);
	// ble cr6,0x82645a60
	if (!ctx.cr6.gt) goto loc_82645A60;
	// li r9,32767
	ctx.r9.s64 = 32767;
	// b 0x82645a6c
	goto loc_82645A6C;
loc_82645A60:
	// cmpwi cr6,r9,-32768
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -32768, ctx.xer);
	// bge cr6,0x82645a6c
	if (!ctx.cr6.lt) goto loc_82645A6C;
	// li r9,-32768
	ctx.r9.s64 = -32768;
loc_82645A6C:
	// lwz r7,-392(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -392);
	// rlwinm r4,r10,2,26,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3C;
	// lwzx r10,r4,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r7.u32);
	// mullw r7,r10,r3
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r3.s32);
	// srawi r3,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r3.s64 = ctx.r7.s32 >> 8;
	// cmpwi cr6,r3,16
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 16, ctx.xer);
	// bge cr6,0x82645a8c
	if (!ctx.cr6.lt) goto loc_82645A8C;
	// li r3,16
	ctx.r3.s64 = 16;
loc_82645A8C:
	// subf r4,r8,r9
	ctx.r4.u64 = ctx.r9.u64 - ctx.r8.u64;
	// lbz r14,1(r11)
	r14.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// mullw r8,r6,r25
	ctx.r8.s64 = int64_t(ctx.r6.s32) * int64_t(r25.s32);
	// lbzu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// lwzx r7,r28,r24
	ctx.r7.u64 = REX_LOAD_U32(r28.u32 + r24.u32);
	// mullw r6,r27,r26
	ctx.r6.s64 = int64_t(r27.s32) * int64_t(r26.s32);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// mullw r6,r4,r4
	ctx.r6.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r4.s32);
	// stw r6,-376(r1)
	REX_STORE_U32(ctx.r1.u32 + -376, ctx.r6.u32);
	// rotlwi r6,r10,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// lwz r14,-376(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -376);
	// srawi r10,r14,7
	ctx.xer.ca = (r14.s32 < 0) & ((r14.u32 & 0x7F) != 0);
	ctx.r10.s64 = r14.s32 >> 7;
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// srawi r8,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 8;
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// subf r10,r8,r6
	ctx.r10.u64 = ctx.r6.u64 - ctx.r8.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stwx r7,r28,r24
	REX_STORE_U32(r28.u32 + r24.u32, ctx.r7.u32);
	// divw r10,r10,r29
	ctx.r10.u64 = uint32_t((r29.s32 && !(ctx.r10.s32 == INT32_MIN && r29.s32 == -1)) ? ctx.r10.s32 / r29.s32 : 0);
	// mr r31,r9
	r31.u64 = ctx.r9.u64;
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// ble cr6,0x82645af0
	if (!ctx.cr6.gt) goto loc_82645AF0;
	// li r10,7
	ctx.r10.s64 = 7;
	// b 0x82645afc
	goto loc_82645AFC;
loc_82645AF0:
	// cmpwi cr6,r10,-8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -8, ctx.xer);
	// bge cr6,0x82645afc
	if (!ctx.cr6.lt) goto loc_82645AFC;
	// li r10,-8
	ctx.r10.s64 = -8;
loc_82645AFC:
	// mullw r9,r10,r29
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(r29.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmpwi cr6,r9,32767
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 32767, ctx.xer);
	// ble cr6,0x82645b14
	if (!ctx.cr6.gt) goto loc_82645B14;
	// li r9,32767
	ctx.r9.s64 = 32767;
	// b 0x82645b20
	goto loc_82645B20;
loc_82645B14:
	// cmpwi cr6,r9,-32768
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -32768, ctx.xer);
	// bge cr6,0x82645b20
	if (!ctx.cr6.lt) goto loc_82645B20;
	// li r9,-32768
	ctx.r9.s64 = -32768;
loc_82645B20:
	// rlwinm r8,r10,2,26,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3C;
	// lwz r10,-392(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -392);
	// lwzx r7,r8,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// mullw r10,r7,r29
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(r29.s32);
	// srawi r10,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 8;
	// cmpwi cr6,r10,16
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16, ctx.xer);
	// bge cr6,0x82645b40
	if (!ctx.cr6.lt) goto loc_82645B40;
	// li r10,16
	ctx.r10.s64 = 16;
loc_82645B40:
	// subf r8,r6,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r6.u64;
	// lwzx r7,r28,r23
	ctx.r7.u64 = REX_LOAD_U32(r28.u32 + r23.u32);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mullw r8,r8,r8
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r8.s32);
	// srawi r8,r8,7
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7F) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 7;
	// mr r29,r10
	r29.u64 = ctx.r10.u64;
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// mr r27,r9
	r27.u64 = ctx.r9.u64;
	// stwx r7,r28,r23
	REX_STORE_U32(r28.u32 + r23.u32, ctx.r7.u32);
	// bdnz 0x82645a00
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82645A00;
	// lwz r14,-352(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
loc_82645B6C:
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmplwi cr6,r28,28
	ctx.cr6.compare<uint32_t>(r28.u32, 28, ctx.xer);
	// blt cr6,0x82645898
	if (ctx.cr6.lt) goto loc_82645898;
	// lwz r9,-256(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -256);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r8,-252(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -252);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r7,-288(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -288);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82645b9c
	if (!ctx.cr6.lt) goto loc_82645B9C;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_82645B9C:
	// lwz r8,-284(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -284);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x82645bb0
	if (!ctx.cr6.lt) goto loc_82645BB0;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
loc_82645BB0:
	// lwz r8,-248(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -248);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82645bc4
	if (!ctx.cr6.lt) goto loc_82645BC4;
	// li r10,2
	ctx.r10.s64 = 2;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_82645BC4:
	// lwz r8,-280(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -280);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x82645bd8
	if (!ctx.cr6.lt) goto loc_82645BD8;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
loc_82645BD8:
	// lwz r8,-244(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -244);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82645bec
	if (!ctx.cr6.lt) goto loc_82645BEC;
	// li r10,3
	ctx.r10.s64 = 3;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_82645BEC:
	// lwz r8,-276(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -276);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x82645c00
	if (!ctx.cr6.lt) goto loc_82645C00;
	// li r11,3
	ctx.r11.s64 = 3;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
loc_82645C00:
	// lwz r8,-240(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -240);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82645c14
	if (!ctx.cr6.lt) goto loc_82645C14;
	// li r10,4
	ctx.r10.s64 = 4;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_82645C14:
	// lwz r8,-272(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -272);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x82645c28
	if (!ctx.cr6.lt) goto loc_82645C28;
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
loc_82645C28:
	// lwz r8,-236(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -236);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82645c3c
	if (!ctx.cr6.lt) goto loc_82645C3C;
	// li r10,5
	ctx.r10.s64 = 5;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_82645C3C:
	// lwz r8,-268(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -268);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x82645c50
	if (!ctx.cr6.lt) goto loc_82645C50;
	// li r11,5
	ctx.r11.s64 = 5;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
loc_82645C50:
	// lwz r8,-232(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -232);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82645c60
	if (!ctx.cr6.lt) goto loc_82645C60;
	// li r10,6
	ctx.r10.s64 = 6;
loc_82645C60:
	// lwz r9,-264(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -264);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x82645c70
	if (!ctx.cr6.lt) goto loc_82645C70;
	// li r11,6
	ctx.r11.s64 = 6;
loc_82645C70:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,-400(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -400);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// lwz r11,-388(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -388);
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,-384(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -384);
	// addi r6,r1,-224
	ctx.r6.s64 = ctx.r1.s64 + -224;
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// mr r29,r30
	r29.u64 = r30.u64;
	// lwzx r27,r9,r11
	r27.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// mr r28,r18
	r28.u64 = r18.u64;
	// lwzx r25,r4,r11
	r25.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// lwz r11,-380(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -380);
	// lwzx r6,r4,r6
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r6.u32);
	// lwzx r31,r9,r31
	r31.u64 = REX_LOAD_U32(ctx.r9.u32 + r31.u32);
	// lwzx r24,r4,r11
	r24.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// lwzx r26,r9,r11
	r26.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// addic. r11,r8,-2
	ctx.xer.ca = ctx.r8.u32 > 1;
	ctx.r11.s64 = ctx.r8.s64 + -2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r10,0(r5)
	REX_STORE_U8(ctx.r5.u32 + 0, ctx.r10.u8);
	// mr r8,r17
	ctx.r8.u64 = r17.u64;
	// stbu r7,1(r5)
	ea = 1 + ctx.r5.u32;
	REX_STORE_U8(ea, ctx.r7.u8);
	ctx.r5.u32 = ea;
	// mr r7,r14
	ctx.r7.u64 = r14.u64;
	// sthu r6,1(r5)
	ea = 1 + ctx.r5.u32;
	REX_STORE_U16(ea, ctx.r6.u16);
	ctx.r5.u32 = ea;
	// sthu r31,2(r5)
	ea = 2 + ctx.r5.u32;
	REX_STORE_U16(ea, r31.u16);
	ctx.r5.u32 = ea;
	// sthu r30,2(r5)
	ea = 2 + ctx.r5.u32;
	REX_STORE_U16(ea, r30.u16);
	ctx.r5.u32 = ea;
	// sthu r18,2(r5)
	ea = 2 + ctx.r5.u32;
	REX_STORE_U16(ea, r18.u16);
	ctx.r5.u32 = ea;
	// sthu r17,2(r5)
	ea = 2 + ctx.r5.u32;
	REX_STORE_U16(ea, r17.u16);
	ctx.r5.u32 = ea;
	// sthu r14,2(r5)
	ea = 2 + ctx.r5.u32;
	REX_STORE_U16(ea, r14.u16);
	ctx.r5.u32 = ea;
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// beq 0x82645e2c
	if (ctx.cr0.eq) goto loc_82645E2C;
	// lwz r23,-392(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + -392);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82645CF0:
	// mullw r9,r24,r8
	ctx.r9.s64 = int64_t(r24.s32) * int64_t(ctx.r8.s32);
	// lbz r11,1(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 1);
	// lbz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// mullw r8,r25,r30
	ctx.r8.s64 = int64_t(r25.s32) * int64_t(r30.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// srawi r9,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r3,2
	ctx.r10.s64 = ctx.r3.s64 + 2;
	// subf r8,r9,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r9.u64;
	// divw r29,r8,r6
	r29.u64 = uint32_t((ctx.r6.s32 && !(ctx.r8.s32 == INT32_MIN && ctx.r6.s32 == -1)) ? ctx.r8.s32 / ctx.r6.s32 : 0);
	// cmpwi cr6,r29,7
	ctx.cr6.compare<int32_t>(r29.s32, 7, ctx.xer);
	// ble cr6,0x82645d2c
	if (!ctx.cr6.gt) goto loc_82645D2C;
	// li r29,7
	r29.s64 = 7;
	// b 0x82645d38
	goto loc_82645D38;
loc_82645D2C:
	// cmpwi cr6,r29,-8
	ctx.cr6.compare<int32_t>(r29.s32, -8, ctx.xer);
	// bge cr6,0x82645d38
	if (!ctx.cr6.lt) goto loc_82645D38;
	// li r29,-8
	r29.s64 = -8;
loc_82645D38:
	// mullw r11,r29,r6
	ctx.r11.s64 = int64_t(r29.s32) * int64_t(ctx.r6.s32);
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmpwi cr6,r4,32767
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 32767, ctx.xer);
	// ble cr6,0x82645d50
	if (!ctx.cr6.gt) goto loc_82645D50;
	// li r4,32767
	ctx.r4.s64 = 32767;
	// b 0x82645d5c
	goto loc_82645D5C;
loc_82645D50:
	// cmpwi cr6,r4,-32768
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -32768, ctx.xer);
	// bge cr6,0x82645d5c
	if (!ctx.cr6.lt) goto loc_82645D5C;
	// li r4,-32768
	ctx.r4.s64 = -32768;
loc_82645D5C:
	// rlwinm r11,r29,2,26,29
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0x3C;
	// lwzx r9,r11,r23
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + r23.u32);
	// mullw r8,r9,r6
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r6.s32);
	// srawi r6,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 8;
	// cmpwi cr6,r6,16
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 16, ctx.xer);
	// bge cr6,0x82645d78
	if (!ctx.cr6.lt) goto loc_82645D78;
	// li r6,16
	ctx.r6.s64 = 16;
loc_82645D78:
	// lbz r11,1(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// mullw r8,r26,r7
	ctx.r8.s64 = int64_t(r26.s32) * int64_t(ctx.r7.s32);
	// lbz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// mullw r7,r27,r28
	ctx.r7.s64 = int64_t(r27.s32) * int64_t(r28.s32);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// srawi r9,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 8;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// subf r7,r9,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r9.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// divw r11,r7,r31
	ctx.r11.u64 = uint32_t((r31.s32 && !(ctx.r7.s32 == INT32_MIN && r31.s32 == -1)) ? ctx.r7.s32 / r31.s32 : 0);
	// addi r3,r10,2
	ctx.r3.s64 = ctx.r10.s64 + 2;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// ble cr6,0x82645dbc
	if (!ctx.cr6.gt) goto loc_82645DBC;
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x82645dc8
	goto loc_82645DC8;
loc_82645DBC:
	// cmpwi cr6,r11,-8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -8, ctx.xer);
	// bge cr6,0x82645dc8
	if (!ctx.cr6.lt) goto loc_82645DC8;
	// li r11,-8
	ctx.r11.s64 = -8;
loc_82645DC8:
	// mullw r10,r11,r31
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(r31.s32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmpwi cr6,r10,32767
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32767, ctx.xer);
	// ble cr6,0x82645de0
	if (!ctx.cr6.gt) goto loc_82645DE0;
	// li r10,32767
	ctx.r10.s64 = 32767;
	// b 0x82645dec
	goto loc_82645DEC;
loc_82645DE0:
	// cmpwi cr6,r10,-32768
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -32768, ctx.xer);
	// bge cr6,0x82645dec
	if (!ctx.cr6.lt) goto loc_82645DEC;
	// li r10,-32768
	ctx.r10.s64 = -32768;
loc_82645DEC:
	// rlwinm r7,r11,2,26,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3C;
	// clrlwi r9,r11,28
	ctx.r9.u64 = ctx.r11.u32 & 0xF;
	// lwzx r4,r7,r23
	ctx.r4.u64 = REX_LOAD_U32(ctx.r7.u32 + r23.u32);
	// mullw r11,r4,r31
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(r31.s32);
	// srawi r11,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bge cr6,0x82645e0c
	if (!ctx.cr6.lt) goto loc_82645E0C;
	// li r11,16
	ctx.r11.s64 = 16;
loc_82645E0C:
	// rlwinm r4,r29,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// or r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 | ctx.r9.u64;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// stb r9,0(r5)
	REX_STORE_U8(ctx.r5.u32 + 0, ctx.r9.u8);
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// bdnz 0x82645cf0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82645CF0;
loc_82645E2C:
	// lwz r11,-396(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -396);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826457d0
	if (!ctx.cr6.eq) goto loc_826457D0;
loc_82645E38:
	// lwz r11,-372(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -372);
	// subf r3,r11,r5
	ctx.r3.u64 = ctx.r5.u64 - ctx.r11.u64;
	// b 0x826a1cd0
	return;
loc_82645E44:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_82671270) {
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
	ctx.lr = 0x82671278;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,4(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r30,0(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lwz r11,292(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 292);
	// rlwinm. r11,r11,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82671460
	if (!ctx.cr0.eq) goto loc_82671460;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826712B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r29,r30,4
	r29.s64 = r30.s64 + 4;
loc_826712B8:
	// mfmsr r10
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r10.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r11,0,r29
	ea = r29.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r29
	ea = r29.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x826712b8
	if (!ctx.cr0.eq) goto loc_826712B8;
	// rlwinm. r24,r9,0,23,23
	r24.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(r24.s32, 0, ctx.xer);
	// beq 0x826712f8
	if (ctx.cr0.eq) goto loc_826712F8;
loc_826712DC:
	// mfmsr r10
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r10.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r11,0,r29
	ea = r29.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r29
	ea = r29.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x826712dc
	if (!ctx.cr0.eq) goto loc_826712DC;
loc_826712F8:
	// rlwinm. r25,r9,0,22,22
	r25.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(r25.s32, 0, ctx.xer);
	// beq 0x8267131c
	if (ctx.cr0.eq) goto loc_8267131C;
loc_82671300:
	// mfmsr r10
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r10.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r11,0,r29
	ea = r29.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r29
	ea = r29.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x82671300
	if (!ctx.cr0.eq) goto loc_82671300;
loc_8267131C:
	// rlwinm. r27,r9,0,21,21
	r27.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq 0x82671340
	if (ctx.cr0.eq) goto loc_82671340;
loc_82671324:
	// mfmsr r10
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r10.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r11,0,r29
	ea = r29.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r29
	ea = r29.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x82671324
	if (!ctx.cr0.eq) goto loc_82671324;
loc_82671340:
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// lwz r3,72(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 72);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r6,12(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x82675a90
	ctx.lr = 0x8267135C;
	sub_82675A90(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bge 0x82671468
	if (!ctx.cr0.lt) goto loc_82671468;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x826713a4
	if (ctx.cr6.eq) goto loc_826713A4;
loc_8267136C:
	// mfmsr r10
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r10.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r11,0,r29
	ea = r29.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r29
	ea = r29.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x8267136c
	if (!ctx.cr0.eq) goto loc_8267136C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826713a4
	if (!ctx.cr6.eq) goto loc_826713A4;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826713A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826713A4:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x826713e4
	if (ctx.cr6.eq) goto loc_826713E4;
loc_826713AC:
	// mfmsr r10
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r10.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r11,0,r29
	ea = r29.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r29
	ea = r29.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x826713ac
	if (!ctx.cr0.eq) goto loc_826713AC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826713e4
	if (!ctx.cr6.eq) goto loc_826713E4;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826713E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826713E4:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x82671424
	if (ctx.cr6.eq) goto loc_82671424;
loc_826713EC:
	// mfmsr r10
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r10.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r11,0,r29
	ea = r29.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r29
	ea = r29.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x826713ec
	if (!ctx.cr0.eq) goto loc_826713EC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82671424
	if (!ctx.cr6.eq) goto loc_82671424;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82671424;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82671424:
	// mfmsr r10
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r10.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r11,0,r29
	ea = r29.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r29
	ea = r29.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x82671424
	if (!ctx.cr0.eq) goto loc_82671424;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82671468
	if (!ctx.cr6.eq) goto loc_82671468;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267145C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82671468
	goto loc_82671468;
loc_82671460:
	// lis r31,-32646
	r31.s64 = -2139488256;
	// ori r31,r31,4113
	r31.u64 = r31.u64 | 4113;
loc_82671468:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_82680D90) {
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
	// li r11,6
	ctx.r11.s64 = 6;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// addi r30,r31,6
	r30.s64 = r31.s64 + 6;
	// stb r10,3(r31)
	REX_STORE_U8(r31.u32 + 3, ctx.r10.u8);
	// stb r11,2(r31)
	REX_STORE_U8(r31.u32 + 2, ctx.r11.u8);
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// lwz r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// clrlwi r10,r10,22
	ctx.r10.u64 = ctx.r10.u32 & 0x3FF;
	// rlwinm r9,r10,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// stb r10,5(r31)
	REX_STORE_U8(r31.u32 + 5, ctx.r10.u8);
	// rlwimi r9,r11,2,24,29
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFC) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFF03);
	// stb r9,4(r31)
	REX_STORE_U8(r31.u32 + 4, ctx.r9.u8);
	// lhz r11,4(r5)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r5.u32 + 4);
	// lwz r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82680e08
	if (ctx.cr6.eq) goto loc_82680E08;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r5,37
	ctx.r5.s64 = 37;
	// stb r11,3(r31)
	REX_STORE_U8(r31.u32 + 3, ctx.r11.u8);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x826867c0
	ctx.lr = 0x82680E04;
	sub_826867C0(ctx, base);
	// add r30,r3,r30
	r30.u64 = ctx.r3.u64 + r30.u64;
loc_82680E08:
	// subf r3,r31,r30
	ctx.r3.u64 = r30.u64 - r31.u64;
	// addi r11,r3,-2
	ctx.r11.s64 = ctx.r3.s64 + -2;
	// sth r11,0(r31)
	REX_STORE_U16(r31.u32 + 0, ctx.r11.u16);
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

DEFINE_REX_FUNC(sub_826829E8) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// b 0x82130e88
	sub_82130E88(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82682D50) {
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
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// bl 0x82682c48
	ctx.lr = 0x82682D6C;
	sub_82682C48(ctx, base);
	// std r4,40(r3)
	REX_STORE_U64(ctx.r3.u32 + 40, ctx.r4.u64);
	// stw r5,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r5.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82683F78) {
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
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82683fc8
	if (ctx.cr6.eq) goto loc_82683FC8;
	// lwz r10,36(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// li r9,1000
	ctx.r9.s64 = 1000;
	// lwz r8,8(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// subf r10,r10,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r10.u64;
	// mullw r10,r8,r10
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// divwu r10,r10,r9
	ctx.r10.u64 = uint32_t(ctx.r9.u32 ? ctx.r10.u32 / ctx.r9.u32 : 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82683fc0
	if (!ctx.cr6.gt) goto loc_82683FC0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82683fc4
	goto loc_82683FC4;
loc_82683FC0:
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
loc_82683FC4:
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
loc_82683FC8:
	// lwz r8,32(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 32);
	// rlwinm r9,r4,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,56(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 56);
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r5,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r5.u32);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// stw r9,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r9.u32);
	// stw r10,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r10.u32);
	// clrldi r4,r4,32
	ctx.r4.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// stw r11,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r11.u32);
	// bl 0x82682e00
	ctx.lr = 0x82684000;
	sub_82682E00(ctx, base);
	// lwz r11,200(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 200);
	// rlwinm r3,r11,4,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x1;
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

DEFINE_REX_FUNC(sub_82687980) {
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
	// lhz r11,76(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 76);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lbz r10,79(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 79);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lbz r9,78(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 78);
	// ori r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 4096;
	// ori r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 | 32;
	// andi. r9,r9,223
	ctx.r9.u64 = ctx.r9.u64 & 223;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// sth r11,76(r3)
	REX_STORE_U16(ctx.r3.u32 + 76, ctx.r11.u16);
	// rlwinm. r11,r11,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r10,79(r3)
	REX_STORE_U8(ctx.r3.u32 + 79, ctx.r10.u8);
	// stb r9,78(r3)
	REX_STORE_U8(ctx.r3.u32 + 78, ctx.r9.u8);
	// bne 0x826879e0
	if (!ctx.cr0.eq) goto loc_826879E0;
	// lhz r11,76(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 76);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,32(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// sth r11,76(r4)
	REX_STORE_U16(ctx.r4.u32 + 76, ctx.r11.u16);
	// bl 0x82685250
	ctx.lr = 0x826879E0;
	sub_82685250(ctx, base);
loc_826879E0:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,32(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 32);
	// bl 0x82684bf8
	ctx.lr = 0x826879EC;
	sub_82684BF8(ctx, base);
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

DEFINE_REX_FUNC(sub_8268B298) {
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
	// beq cr6,0x8268b324
	if (ctx.cr6.eq) goto loc_8268B324;
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8268b2f0
	if (!ctx.cr6.eq) goto loc_8268B2F0;
	// lwz r3,60(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8268b2e8
	if (ctx.cr6.eq) goto loc_8268B2E8;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268B2E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,60(r31)
	REX_STORE_U32(r31.u32 + 60, r30.u32);
loc_8268B2E8:
	// lwz r3,76(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 76);
	// bl 0x8268f800
	ctx.lr = 0x8268B2F0;
	sub_8268F800(ctx, base);
loc_8268B2F0:
	// lwz r3,40(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 40);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8268b30c
	if (ctx.cr6.eq) goto loc_8268B30C;
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// bl 0x823f0350
	ctx.lr = 0x8268B308;
	sub_823F0350(ctx, base);
	// stw r30,40(r31)
	REX_STORE_U32(r31.u32 + 40, r30.u32);
loc_8268B30C:
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x8268efa0
	ctx.lr = 0x8268B314;
	sub_8268EFA0(ctx, base);
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ori r4,r4,32785
	ctx.r4.u64 = ctx.r4.u64 | 32785;
	// bl 0x823f0350
	ctx.lr = 0x8268B324;
	sub_823F0350(ctx, base);
loc_8268B324:
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

DEFINE_REX_FUNC(sub_8268FAF0) {
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
	ctx.lr = 0x8268FAF8;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 0);
	// li r25,0
	r25.s64 = 0;
	// lwz r10,76(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// mr r28,r25
	r28.u64 = r25.u64;
	// rlwinm r29,r11,31,21,31
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FF;
	// rlwinm r30,r11,20,12,31
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xFFFFF;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8268fb4c
	if (!ctx.cr6.eq) goto loc_8268FB4C;
	// lwz r11,324(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 324);
	// bl 0x823ef900
	ctx.lr = 0x8268FB30;
	sub_823EF900(ctx, base);
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// stb r30,308(r31)
	REX_STORE_U8(r31.u32 + 308, r30.u8);
	// sth r29,32(r31)
	REX_STORE_U16(r31.u32 + 32, r29.u16);
	// std r11,24(r31)
	REX_STORE_U64(r31.u32 + 24, ctx.r11.u64);
	// li r11,1
	ctx.r11.s64 = 1;
	// std r25,16(r31)
	REX_STORE_U64(r31.u32 + 16, r25.u64);
	// stw r11,76(r31)
	REX_STORE_U32(r31.u32 + 76, ctx.r11.u32);
loc_8268FB4C:
	// lbz r11,308(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 308);
	// clrlwi r27,r30,24
	r27.u64 = r30.u32 & 0xFF;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8268fb68
	if (ctx.cr6.eq) goto loc_8268FB68;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8268f530
	ctx.lr = 0x8268FB64;
	sub_8268F530(ctx, base);
	// stb r30,308(r31)
	REX_STORE_U8(r31.u32 + 308, r30.u8);
loc_8268FB68:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8268f268
	ctx.lr = 0x8268FB78;
	sub_8268F268(ctx, base);
	// lwz r11,304(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 304);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,304(r31)
	REX_STORE_U32(r31.u32 + 304, ctx.r11.u32);
	// blt cr6,0x8268fbb8
	if (ctx.cr6.lt) goto loc_8268FBB8;
	// beq cr6,0x8268fc38
	if (ctx.cr6.eq) goto loc_8268FC38;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// bge cr6,0x8268fc70
	if (!ctx.cr6.lt) goto loc_8268FC70;
	// lwz r11,348(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 348);
	// lwz r10,344(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 344);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8268fc6c
	if (!ctx.cr6.lt) goto loc_8268FC6C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8268f460
	ctx.lr = 0x8268FBB0;
	sub_8268F460(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8268f268
	ctx.lr = 0x8268FBB8;
	sub_8268F268(ctx, base);
loc_8268FBB8:
	// lwz r30,352(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 352);
	// addi r29,r31,352
	r29.s64 = r31.s64 + 352;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8268fc6c
	if (ctx.cr6.eq) goto loc_8268FC6C;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8268fbd8
	if (!ctx.cr6.eq) goto loc_8268FBD8;
	// stw r25,4(r29)
	REX_STORE_U32(r29.u32 + 4, r25.u32);
loc_8268FBD8:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// ld r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// stw r25,4(r30)
	REX_STORE_U32(r30.u32 + 4, r25.u32);
	// std r10,24(r11)
	REX_STORE_U64(ctx.r11.u32 + 24, ctx.r10.u64);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r3,8(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x826a1e70
	ctx.lr = 0x8268FC04;
	sub_826A1E70(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r24,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r24.u32);
	// bl 0x8268f390
	ctx.lr = 0x8268FC18;
	sub_8268F390(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bge 0x8268fc70
	if (!ctx.cr0.lt) goto loc_8268FC70;
	// stw r25,4(r30)
	REX_STORE_U32(r30.u32 + 4, r25.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8268fc58
	if (ctx.cr6.eq) goto loc_8268FC58;
	// stw r30,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r30.u32);
	// b 0x8268fc5c
	goto loc_8268FC5C;
loc_8268FC38:
	// lbz r11,308(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 308);
	// li r28,1
	r28.s64 = 1;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8268fc70
	if (!ctx.cr6.eq) goto loc_8268FC70;
	// lwz r11,312(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 312);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,312(r31)
	REX_STORE_U32(r31.u32 + 312, ctx.r11.u32);
	// b 0x8268fc70
	goto loc_8268FC70;
loc_8268FC58:
	// stw r30,0(r29)
	REX_STORE_U32(r29.u32 + 0, r30.u32);
loc_8268FC5C:
	// stw r30,4(r29)
	REX_STORE_U32(r29.u32 + 4, r30.u32);
	// lwz r11,304(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 304);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,304(r31)
	REX_STORE_U32(r31.u32 + 304, ctx.r11.u32);
loc_8268FC6C:
	// li r28,1
	r28.s64 = 1;
loc_8268FC70:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_8269AD98) {
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,20480
	ctx.r11.s64 = 1342177280;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8269ae28
	if (ctx.cr6.eq) goto loc_8269AE28;
	// lis r11,24576
	ctx.r11.s64 = 1610612736;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8269add4
	if (ctx.cr6.eq) goto loc_8269ADD4;
	// li r3,1167
	ctx.r3.s64 = 1167;
	// b 0x8269ae38
	goto loc_8269AE38;
loc_8269ADD4:
	// li r5,132
	ctx.r5.s64 = 132;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826a2e60
	ctx.lr = 0x8269ADE4;
	sub_826A2E60(ctx, base);
	// li r10,8
	ctx.r10.s64 = 8;
	// lis r11,-32150
	ctx.r11.s64 = -2106982400;
	// sth r31,130(r1)
	REX_STORE_U16(ctx.r1.u32 + 130, r31.u16);
	// sth r10,128(r1)
	REX_STORE_U16(ctx.r1.u32 + 128, ctx.r10.u16);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-24144
	ctx.r11.s64 = ctx.r11.s64 + -24144;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r9.u32);
	// stw r11,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8269a968
	ctx.lr = 0x8269AE18;
	sub_8269A968(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8269ae38
	if (!ctx.cr0.eq) goto loc_8269AE38;
	// lwz r11,148(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// b 0x8269ae2c
	goto loc_8269AE2C;
loc_8269AE28:
	// li r11,320
	ctx.r11.s64 = 320;
loc_8269AE2C:
	// andi. r11,r11,320
	ctx.r11.u64 = ctx.r11.u64 & 320;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
loc_8269AE38:
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

DEFINE_REX_FUNC(sub_8269D6A8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8269D6B0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,-4096
	ctx.r11.s64 = -4096;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8269d74c
	if (ctx.cr6.gt) goto loc_8269D74C;
	// lis r28,-32119
	r28.s64 = -2104950784;
loc_8269D6C8:
	// bl 0x823f5788
	ctx.lr = 0x8269D6CC;
	sub_823F5788(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8269d6e8
	if (!ctx.cr0.eq) goto loc_8269D6E8;
	// bl 0x826a5c60
	ctx.lr = 0x8269D6D8;
	sub_826A5C60(ctx, base);
	// li r3,30
	ctx.r3.s64 = 30;
	// bl 0x826a5c30
	ctx.lr = 0x8269D6E0;
	sub_826A5C30(ctx, base);
	// li r3,255
	ctx.r3.s64 = 255;
	// bl 0x826a3638
	ctx.lr = 0x8269D6E8;
	sub_826A3638(ctx, base);
loc_8269D6E8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// mr r31,r30
	r31.u64 = r30.u64;
	// bne cr6,0x8269d6f8
	if (!ctx.cr6.eq) goto loc_8269D6F8;
	// li r31,1
	r31.s64 = 1;
loc_8269D6F8:
	// bl 0x823f5788
	ctx.lr = 0x8269D6FC;
	sub_823F5788(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x823f3720
	ctx.lr = 0x8269D708;
	sub_823F3720(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne 0x8269d744
	if (!ctx.cr0.eq) goto loc_8269D744;
	// lwz r11,9036(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 9036);
	// li r31,12
	r31.s64 = 12;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8269d734
	if (ctx.cr6.eq) goto loc_8269D734;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a1e20
	ctx.lr = 0x8269D728;
	sub_826A1E20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8269d6c8
	if (!ctx.cr0.eq) goto loc_8269D6C8;
	// b 0x8269d73c
	goto loc_8269D73C;
loc_8269D734:
	// bl 0x826a33d0
	ctx.lr = 0x8269D738;
	sub_826A33D0(ctx, base);
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r31.u32);
loc_8269D73C:
	// bl 0x826a33d0
	ctx.lr = 0x8269D740;
	sub_826A33D0(ctx, base);
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r31.u32);
loc_8269D744:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x8269d768
	goto loc_8269D768;
loc_8269D74C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a1e20
	ctx.lr = 0x8269D754;
	sub_826A1E20(ctx, base);
	// bl 0x826a33d0
	ctx.lr = 0x8269D758;
	sub_826A33D0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,12
	ctx.r10.s64 = 12;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8269D768:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_826A1B88) {
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
	ctx.lr = 0x826A1B98;
	sub_826A3A68(ctx, base);
	// lis r11,3
	ctx.r11.s64 = 196608;
	// lwz r9,20(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// ori r11,r11,17405
	ctx.r11.u64 = ctx.r11.u64 | 17405;
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// addis r11,r11,39
	ctx.r11.s64 = ctx.r11.s64 + 2555904;
	// addi r11,r11,-24893
	ctx.r11.s64 = ctx.r11.s64 + -24893;
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// rlwinm r3,r11,16,17,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x7FFF;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826A2418) {
	REX_FUNC_PROLOGUE();
	// li r5,2624
	ctx.r5.s64 = 2624;
	// b 0x8269cc20
	sub_8269CC20(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_826A2AF0) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x826a2b20
	if (ctx.cr6.eq) goto loc_826A2B20;
	// lbz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826a2b20
	if (ctx.cr0.eq) goto loc_826A2B20;
	// cmpwi cr6,r11,67
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 67, ctx.xer);
	// bne cr6,0x826a2b18
	if (!ctx.cr6.eq) goto loc_826A2B18;
	// lbz r11,1(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 1);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x826a2b20
	if (ctx.cr0.eq) goto loc_826A2B20;
loc_826A2B18:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_826A2B20:
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// addi r3,r11,25952
	ctx.r3.s64 = ctx.r11.s64 + 25952;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826A33D0) {
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
	// bl 0x826a3990
	ctx.lr = 0x826A33E0;
	sub_826A3990(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x826a33f4
	if (!ctx.cr0.eq) goto loc_826A33F4;
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// addi r3,r11,26344
	ctx.r3.s64 = ctx.r11.s64 + 26344;
	// b 0x826a33f8
	goto loc_826A33F8;
loc_826A33F4:
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
loc_826A33F8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(__savevmx_82) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(sub_826AB498) {
	REX_FUNC_PROLOGUE();
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// blt cr6,0x826ab4c4
	if (ctx.cr6.lt) goto loc_826AB4C4;
	// cmpwi cr6,r3,255
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 255, ctx.xer);
	// bgt cr6,0x826ab4c4
	if (ctx.cr6.gt) goto loc_826AB4C4;
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,27400(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 27400);
	// lwz r11,200(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 200);
	// lhzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// and r3,r11,r4
	ctx.r3.u64 = ctx.r11.u64 & ctx.r4.u64;
	// blr 
	return;
loc_826AB4C4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826ADF40) {
	REX_FUNC_PROLOGUE();
	// mffs f0
	ctx.f0.u64 = ctx.fpscr.loadFromHost();
	// li r3,4
	ctx.r3.s64 = 4;
	// stfd f0,-8(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.f0.u64);
	// lwz r5,-4(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -4);
	// and r5,r3,r5
	ctx.r5.u64 = ctx.r3.u64 & ctx.r5.u64;
	// stw r5,-4(r1)
	REX_STORE_U32(ctx.r1.u32 + -4, ctx.r5.u32);
	// lfd f1,-8(r1)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// mtfsf 255,f1
	ctx.fpscr.storeFromGuest(ctx.f1.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826AE8F4) {
	REX_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826AF1D0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// addi r31,r1,-96
	r31.s64 = ctx.r1.s64 + -96;
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x826a3a68
	ctx.lr = 0x826AF1E8;
	sub_826A3A68(ctx, base);
	// lwz r11,108(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826af210
	if (ctx.cr6.eq) goto loc_826AF210;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826AF204;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_826AF210:
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,324
	ctx.r3.u64 = ctx.r3.u64 | 324;
	// bl 0x82793e04
	ctx.lr = 0x826AF21C;
	__imp__KeBugCheck(ctx, base);
}

DEFINE_REX_FUNC(sub_826B08F0) {
	REX_FUNC_PROLOGUE();
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x826b07a0
	sub_826B07A0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_826B0A34) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r28,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r28.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-32(r1)
	REX_STORE_U32(ctx.r1.u32 + -32, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzx r4,r10,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x8269e220
	ctx.lr = 0x826B0A64;
	sub_8269E220(ctx, base);
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// lwz r28,80(r31)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r30,r10,31540
	ctx.r30.s64 = ctx.r10.s64 + 31540;
	// addi r10,r11,31544
	ctx.r10.s64 = ctx.r11.s64 + 31544;
	// lwz r1,0(r1)
	ctx.r1.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r28,-24(r1)
	ctx.r28.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// lwz r12,-32(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826B44B8) {
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
	ctx.lr = 0x826B44C0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// not r10,r3
	ctx.r10.u64 = ~ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r30,r10,20,31,31
	r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0x1;
	// clrlwi r29,r11,31
	r29.u64 = ctx.r11.u32 & 0x1;
	// rlwinm r28,r11,0,29,29
	r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x826b4678
	if (ctx.cr6.eq) goto loc_826B4678;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x826b4678
	if (ctx.cr6.eq) goto loc_826B4678;
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// blt cr6,0x826b4678
	if (ctx.cr6.lt) goto loc_826B4678;
	// cmpwi cr6,r7,-1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -1, ctx.xer);
	// blt cr6,0x826b4678
	if (ctx.cr6.lt) goto loc_826B4678;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x826b465c
	if (ctx.cr6.eq) goto loc_826B465C;
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// addi r31,r11,29816
	r31.s64 = ctx.r11.s64 + 29816;
loc_826B450C:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x826b4654
	if (ctx.cr6.eq) goto loc_826B4654;
	// lbz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// extsb. r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826b452c
	if (!ctx.cr0.eq) goto loc_826B452C;
	// lbz r9,0(r6)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r6.u32 + 0);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x826b4630
	if (ctx.cr0.eq) goto loc_826B4630;
loc_826B452C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826b4644
	if (ctx.cr6.eq) goto loc_826B4644;
	// lbz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r6.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x826b464c
	if (ctx.cr0.eq) goto loc_826B464C;
	// rlwinm r9,r10,2,22,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3FC;
	// rlwinm r27,r11,2,22,29
	r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3FC;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// lwzx r8,r9,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + r31.u32);
	// lwzx r9,r27,r31
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + r31.u32);
	// beq cr6,0x826b45bc
	if (ctx.cr6.eq) goto loc_826B45BC;
	// rlwinm. r27,r8,0,15,15
	r27.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq 0x826b45a0
	if (ctx.cr0.eq) goto loc_826B45A0;
	// rlwinm. r11,r9,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826b458c
	if (ctx.cr0.eq) goto loc_826B458C;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x826b4580
	if (!ctx.cr6.lt) goto loc_826B4580;
	// li r3,7
	ctx.r3.s64 = 7;
	// b 0x826b4614
	goto loc_826B4614;
loc_826B4580:
	// ble cr6,0x826b4614
	if (!ctx.cr6.gt) goto loc_826B4614;
	// li r3,11
	ctx.r3.s64 = 11;
	// b 0x826b4614
	goto loc_826B4614;
loc_826B458C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x826b4598
	if (!ctx.cr6.eq) goto loc_826B4598;
	// li r3,4
	ctx.r3.s64 = 4;
loc_826B4598:
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// b 0x826b461c
	goto loc_826B461C;
loc_826B45A0:
	// rlwinm. r27,r9,0,15,15
	r27.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq 0x826b45bc
	if (ctx.cr0.eq) goto loc_826B45BC;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x826b45b4
	if (!ctx.cr6.eq) goto loc_826B45B4;
	// li r3,8
	ctx.r3.s64 = 8;
loc_826B45B4:
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// b 0x826b45d4
	goto loc_826B45D4;
loc_826B45BC:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x826b45e0
	if (ctx.cr6.eq) goto loc_826B45E0;
	// rlwinm. r27,r8,0,14,14
	r27.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// bne 0x826b461c
	if (!ctx.cr0.eq) goto loc_826B461C;
	// rlwinm. r27,r9,0,14,14
	r27.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq 0x826b45e0
	if (ctx.cr0.eq) goto loc_826B45E0;
loc_826B45D4:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// b 0x826b4624
	goto loc_826B4624;
loc_826B45E0:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x826b4608
	if (ctx.cr6.eq) goto loc_826B4608;
	// rlwinm. r27,r8,0,11,11
	r27.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x100000;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq 0x826b45f8
	if (ctx.cr0.eq) goto loc_826B45F8;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// oris r8,r10,8
	ctx.r8.u64 = ctx.r10.u64 | 524288;
loc_826B45F8:
	// rlwinm. r10,r9,0,11,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x100000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x826b4608
	if (ctx.cr0.eq) goto loc_826B4608;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// oris r9,r11,8
	ctx.r9.u64 = ctx.r11.u64 | 524288;
loc_826B4608:
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x826b4644
	if (ctx.cr6.lt) goto loc_826B4644;
	// bgt cr6,0x826b464c
	if (ctx.cr6.gt) goto loc_826B464C;
loc_826B4614:
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
loc_826B461C:
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
loc_826B4624:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x826b450c
	if (!ctx.cr6.eq) goto loc_826B450C;
	// b 0x826b465c
	goto loc_826B465C;
loc_826B4630:
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,30840
	ctx.r11.s64 = ctx.r11.s64 + 30840;
	// lwzx r3,r10,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x826b4684
	goto loc_826B4684;
loc_826B4644:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826b4684
	goto loc_826B4684;
loc_826B464C:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x826b4684
	goto loc_826B4684;
loc_826B4654:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x826b4664
	if (!ctx.cr6.eq) goto loc_826B4664;
loc_826B465C:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x826b4630
	if (ctx.cr6.eq) goto loc_826B4630;
loc_826B4664:
	// subfic r11,r5,0
	ctx.xer.ca = ctx.r5.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r5.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r3,r11,3
	ctx.r3.s64 = ctx.r11.s64 + 3;
	// b 0x826b4684
	goto loc_826B4684;
loc_826B4678:
	// li r3,87
	ctx.r3.s64 = 87;
	// bl 0x823f0188
	ctx.lr = 0x826B4680;
	sub_823F0188(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_826B4684:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_826C35E8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,216(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 216);
	// stw r4,216(r3)
	REX_STORE_U32(ctx.r3.u32 + 216, ctx.r4.u32);
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,64(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,80(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_826C63E0) {
	REX_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r11,7
	ctx.r11.s64 = 7;
loc_826C63EC:
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x826c6414
	if (ctx.cr6.eq) goto loc_826C6414;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,127
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 127, ctx.xer);
	// blt cr6,0x826c63ec
	if (ctx.cr6.lt) goto loc_826C63EC;
loc_826C6414:
	// cmpwi cr6,r11,127
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 127, ctx.xer);
	// blt cr6,0x826c6428
	if (ctx.cr6.lt) goto loc_826C6428;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,181
	ctx.r3.u64 = ctx.r3.u64 | 181;
	// blr 
	return;
loc_826C6428:
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r8,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u32);
	// lwz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r4,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r4.u32);
	// lwz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r5,8(r6)
	REX_STORE_U32(ctx.r6.u32 + 8, ctx.r5.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826CCB70) {
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
	// beq cr6,0x826ccb94
	if (ctx.cr6.eq) goto loc_826CCB94;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x826ccbd8
	if (ctx.cr6.lt) goto loc_826CCBD8;
loc_826CCB94:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82130e88
	ctx.lr = 0x826CCBA0;
	sub_82130E88(ctx, base);
	// li r3,720
	ctx.r3.s64 = 720;
	// bl 0x826e07e0
	ctx.lr = 0x826CCBA8;
	sub_826E07E0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826ccbd8
	if (ctx.cr6.eq) goto loc_826CCBD8;
	// li r5,720
	ctx.r5.s64 = 720;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826a2e60
	ctx.lr = 0x826CCBC0;
	sub_826A2E60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ccae0
	ctx.lr = 0x826CCBC8;
	sub_826CCAE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bge cr6,0x826ccbdc
	if (!ctx.cr6.lt) goto loc_826CCBDC;
	// bl 0x82634e78
	ctx.lr = 0x826CCBD8;
	sub_82634E78(ctx, base);
loc_826CCBD8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826CCBDC:
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

DEFINE_REX_FUNC(sub_826D21D8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// ori r10,r11,5
	ctx.r10.u64 = ctx.r11.u64 | 5;
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// subf r7,r8,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r8.u64;
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r3,r6,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826D3A88) {
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
	ctx.lr = 0x826D3A90;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,28(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x826d3ad4
	if (ctx.cr6.eq) goto loc_826D3AD4;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x826d3ad4
	if (ctx.cr6.eq) goto loc_826D3AD4;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x826d3ad4
	if (ctx.cr6.eq) goto loc_826D3AD4;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x826d3ad4
	if (ctx.cr6.eq) goto loc_826D3AD4;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x826d3ae4
	if (!ctx.cr6.eq) goto loc_826D3AE4;
loc_826D3AD4:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
loc_826D3AE4:
	// stb r3,0(r27)
	REX_STORE_U8(r27.u32 + 0, ctx.r3.u8);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x826d3b20
	if (ctx.cr6.lt) goto loc_826D3B20;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stb r10,0(r27)
	REX_STORE_U8(r27.u32 + 0, ctx.r10.u8);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r9.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// stw r8,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
loc_826D3B20:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// lwz r4,0(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826D3B44;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d3b90
	if (ctx.cr6.lt) goto loc_826D3B90;
	// ld r10,8(r29)
	ctx.r10.u64 = REX_LOAD_U64(r29.u32 + 8);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,8(r29)
	REX_STORE_U64(r29.u32 + 8, ctx.r11.u64);
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// subf r8,r9,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r9.u64;
	// stw r8,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r8.u32);
	// lwz r7,0(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lbz r6,0(r7)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// stb r6,0(r27)
	REX_STORE_U8(r27.u32 + 0, ctx.r6.u8);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stw r5,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r5.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// stw r4,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r4.u32);
loc_826D3B90:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_826DCAF8) {
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
	// lwz r10,44(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r8,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826dcb44
	if (ctx.cr6.eq) goto loc_826DCB44;
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x826dcb44
	if (ctx.cr6.eq) goto loc_826DCB44;
loc_826DCB2C:
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x826dcb5c
	if (ctx.cr6.eq) goto loc_826DCB5C;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bne cr6,0x826dcb2c
	if (!ctx.cr6.eq) goto loc_826DCB2C;
loc_826DCB44:
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,9
	ctx.r3.u64 = ctx.r3.u64 | 9;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_826DCB5C:
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x826dcb74
	if (!ctx.cr6.eq) goto loc_826DCB74;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// stw r11,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_826DCB74:
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x826dcb98
	if (!ctx.cr6.eq) goto loc_826DCB98;
	// lwz r11,36(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// beq cr6,0x826dcbcc
	if (ctx.cr6.eq) goto loc_826DCBCC;
	// stw r8,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r8.u32);
	// b 0x826dcbcc
	goto loc_826DCBCC;
loc_826DCB98:
	// lwz r9,40(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x826dcbb4
	if (ctx.cr6.eq) goto loc_826DCBB4;
	// lwz r7,36(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r7,36(r9)
	REX_STORE_U32(ctx.r9.u32 + 36, ctx.r7.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_826DCBB4:
	// lwz r9,36(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x826dcbcc
	if (ctx.cr6.eq) goto loc_826DCBCC;
	// lwz r7,40(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r7,40(r9)
	REX_STORE_U32(ctx.r9.u32 + 40, ctx.r7.u32);
loc_826DCBCC:
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// bne 0x826dcbe4
	if (!ctx.cr0.eq) goto loc_826DCBE4;
	// stw r8,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r8,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
loc_826DCBE4:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,72(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 72);
	// li r4,29
	ctx.r4.s64 = 29;
	// bl 0x826c68d8
	ctx.lr = 0x826DCBF4;
	sub_826C68D8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826DFCA0) {
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
	ctx.lr = 0x826DFCA8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,44(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,16(r27)
	ctx.r8.u64 = REX_LOAD_U32(r27.u32 + 16);
	// lwz r11,4(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826dfdd4
	if (ctx.cr6.eq) goto loc_826DFDD4;
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
loc_826DFCCC:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpld cr6,r10,r4
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r4.u64, ctx.xer);
	// blt cr6,0x826dfd1c
	if (ctx.cr6.lt) goto loc_826DFD1C;
	// cmpld cr6,r11,r4
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r4.u64, ctx.xer);
	// bgt cr6,0x826dfcf4
	if (ctx.cr6.gt) goto loc_826DFCF4;
	// cmpld cr6,r10,r4
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r4.u64, ctx.xer);
	// bgt cr6,0x826dfd10
	if (ctx.cr6.gt) goto loc_826DFD10;
loc_826DFCF4:
	// clrlwi r11,r9,16
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFF;
	// lwz r28,4(r28)
	r28.u64 = REX_LOAD_U32(r28.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// bne cr6,0x826dfccc
	if (!ctx.cr6.eq) goto loc_826DFCCC;
	// b 0x826dfd1c
	goto loc_826DFD1C;
loc_826DFD10:
	// clrlwi r11,r9,16
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
loc_826DFD1C:
	// clrlwi r11,r9,16
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826dfdd4
	if (ctx.cr6.eq) goto loc_826DFDD4;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplw cr6,r28,r8
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x826dfdd4
	if (ctx.cr6.eq) goto loc_826DFDD4;
loc_826DFD34:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x826dfdd4
	if (ctx.cr6.eq) goto loc_826DFDD4;
	// lwz r7,0(r28)
	ctx.r7.u64 = REX_LOAD_U32(r28.u32 + 0);
	// ld r11,8(r7)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r7.u32 + 8);
	// lwz r10,4(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// cmpld cr6,r11,r30
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, r30.u64, ctx.xer);
	// bgt cr6,0x826dfdc4
	if (ctx.cr6.gt) goto loc_826DFDC4;
	// clrldi r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmpld cr6,r9,r30
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, r30.u64, ctx.xer);
	// ble cr6,0x826dfdc4
	if (!ctx.cr6.gt) goto loc_826DFDC4;
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r8,28(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 28);
	// rotlwi r6,r30,0
	ctx.r6.u64 = __builtin_rotateleft32(r30.u32, 0);
	// lwz r11,24(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 24);
	// subf r9,r6,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r6.u64;
	// add r31,r9,r10
	r31.u64 = ctx.r9.u64 + ctx.r10.u64;
	// subf r9,r11,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r11.u64;
	// subf r8,r31,r10
	ctx.r8.u64 = ctx.r10.u64 - r31.u64;
	// cmpw cr6,r31,r9
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x826dfd8c
	if (!ctx.cr6.gt) goto loc_826DFD8C;
	// mr r31,r9
	r31.u64 = ctx.r9.u64;
loc_826DFD8C:
	// lwz r9,0(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r10,44(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 44);
	// add r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x826a1e70
	ctx.lr = 0x826DFDA4;
	sub_826A1E70(ctx, base);
	// extsw r11,r31
	ctx.r11.s64 = r31.s32;
	// lwz r10,28(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 28);
	// add r30,r11,r30
	r30.u64 = ctx.r11.u64 + r30.u64;
	// lwz r11,24(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 24);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// stw r11,24(r29)
	REX_STORE_U32(r29.u32 + 24, ctx.r11.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x826dfdd4
	if (ctx.cr6.eq) goto loc_826DFDD4;
loc_826DFDC4:
	// lwz r28,8(r28)
	r28.u64 = REX_LOAD_U32(r28.u32 + 8);
	// lwz r11,16(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 16);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x826dfd34
	if (!ctx.cr6.eq) goto loc_826DFD34;
loc_826DFDD4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_826EA5D0) {
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
	ctx.lr = 0x826EA5D8;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r25,0(r3)
	r25.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r24,0
	r24.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,60(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 60);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bge cr6,0x826ea608
	if (!ctx.cr6.lt) goto loc_826EA608;
loc_826EA5F8:
	// lis r3,-32764
	ctx.r3.s64 = -2147221504;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1cd0
	return;
loc_826EA608:
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
	// li r23,1
	r23.s64 = 1;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x826eb70c
	if (ctx.cr6.eq) goto loc_826EB70C;
	// li r22,2
	r22.s64 = 2;
	// li r21,3
	r21.s64 = 3;
	// li r16,22
	r16.s64 = 22;
	// li r17,33
	r17.s64 = 33;
	// li r14,35
	r14.s64 = 35;
	// li r19,50
	r19.s64 = 50;
	// li r18,49
	r18.s64 = 49;
	// li r15,47
	r15.s64 = 47;
	// li r20,10
	r20.s64 = 10;
loc_826EA63C:
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
	// cmplwi cr6,r11,51
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 51, ctx.xer);
	// bgt cr6,0x826eb700
	if (ctx.cr6.gt) goto loc_826EB700;
	// lis r12,-32145
	ctx.r12.s64 = -2106654720;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-22944
	ctx.r12.s64 = ctx.r12.s64 + -22944;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_826EA730;
	case 1:
		goto loc_826EB330;
	case 2:
		goto loc_826EA8F4;
	case 3:
		goto loc_826EA9A0;
	case 4:
		goto loc_826EB700;
	case 5:
		goto loc_826EB700;
	case 6:
		goto loc_826EB700;
	case 7:
		goto loc_826EB700;
	case 8:
		goto loc_826EB700;
	case 9:
		goto loc_826EB700;
	case 10:
		goto loc_826EB700;
	case 11:
		goto loc_826EB700;
	case 12:
		goto loc_826EB700;
	case 13:
		goto loc_826EB700;
	case 14:
		goto loc_826EB700;
	case 15:
		goto loc_826EB700;
	case 16:
		goto loc_826EB700;
	case 17:
		goto loc_826EA97C;
	case 18:
		goto loc_826EA948;
	case 19:
		goto loc_826EA9C8;
	case 20:
		goto loc_826EA9F4;
	case 21:
		goto loc_826EAA40;
	case 22:
		goto loc_826EAA8C;
	case 23:
		goto loc_826EAB28;
	case 24:
		goto loc_826EAB74;
	case 25:
		goto loc_826EABC4;
	case 26:
		goto loc_826EABFC;
	case 27:
		goto loc_826EAC98;
	case 28:
		goto loc_826EAD5C;
	case 29:
		goto loc_826EAE58;
	case 30:
		goto loc_826EB700;
	case 31:
		goto loc_826EB700;
	case 32:
		goto loc_826EB3C0;
	case 33:
		goto loc_826EAE84;
	case 34:
		goto loc_826EB2BC;
	case 35:
		goto loc_826EB2E0;
	case 36:
		goto loc_826EB700;
	case 37:
		goto loc_826EB49C;
	case 38:
		goto loc_826EB468;
	case 39:
		goto loc_826EB700;
	case 40:
		goto loc_826EB700;
	case 41:
		goto loc_826EB700;
	case 42:
		goto loc_826EB700;
	case 43:
		goto loc_826EB700;
	case 44:
		goto loc_826EB4E0;
	case 45:
		goto loc_826EB700;
	case 46:
		goto loc_826EB530;
	case 47:
		goto loc_826EB588;
	case 48:
		goto loc_826EB700;
	case 49:
		goto loc_826EB450;
	case 50:
		goto loc_826EB698;
	case 51:
		goto loc_826EB6D0;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_826EA730:
	// lwz r10,256(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 256);
	// lhz r5,34(r25)
	ctx.r5.u64 = REX_LOAD_U16(r25.u32 + 34);
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// lwz r3,320(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 320);
	// mullw r6,r10,r5
	ctx.r6.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r5.s32);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x826ea7a8
	if (!ctx.cr6.gt) goto loc_826EA7A8;
	// clrlwi r4,r5,16
	ctx.r4.u64 = ctx.r5.u32 & 0xFFFF;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// addi r11,r3,424
	ctx.r11.s64 = ctx.r3.s64 + 424;
loc_826EA760:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// extsh r29,r8
	r29.s64 = ctx.r8.s16;
	// lwz r9,12(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lhz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + 0);
	// extsh r28,r9
	r28.s64 = ctx.r9.s16;
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(r29.s32, r28.s32, ctx.xer);
	// ble cr6,0x826ea794
	if (!ctx.cr6.gt) goto loc_826EA794;
	// lhz r31,-310(r11)
	r31.u64 = REX_LOAD_U16(ctx.r11.u32 + -310);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// extsh r9,r31
	ctx.r9.s64 = r31.s16;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r31,r9,r10
	r31.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r10.u32);
loc_826EA794:
	// addi r10,r7,1
	ctx.r10.s64 = ctx.r7.s64 + 1;
	// addi r11,r11,1776
	ctx.r11.s64 = ctx.r11.s64 + 1776;
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// cmpw cr6,r7,r4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x826ea760
	if (ctx.cr6.lt) goto loc_826EA760;
loc_826EA7A8:
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// sth r24,580(r25)
	REX_STORE_U16(r25.u32 + 580, r24.u16);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x826ea89c
	if (!ctx.cr6.gt) goto loc_826EA89C;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// addi r11,r3,114
	ctx.r11.s64 = ctx.r3.s64 + 114;
loc_826EA7C4:
	// lwz r10,310(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 310);
	// lwz r5,12(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lhz r4,0(r5)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r5.u32 + 0);
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// subf r6,r3,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r3.u64;
	// cmpw cr6,r7,r3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x826ea880
	if (!ctx.cr6.eq) goto loc_826EA880;
	// lhz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r4,r31
	ctx.r4.s64 = r31.s16;
	// extsh r3,r5
	ctx.r3.s64 = ctx.r5.s16;
	// rlwinm r5,r3,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r3,r5,r10
	ctx.r3.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r10.u32);
	// extsh r5,r3
	ctx.r5.s64 = ctx.r3.s16;
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x826ea880
	if (!ctx.cr6.eq) goto loc_826EA880;
	// lhz r5,580(r25)
	ctx.r5.u64 = REX_LOAD_U16(r25.u32 + 580);
	// lwz r4,584(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 584);
	// extsh r3,r5
	ctx.r3.s64 = ctx.r5.s16;
	// rlwinm r5,r3,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r9,r5,r4
	REX_STORE_U16(ctx.r5.u32 + ctx.r4.u32, ctx.r9.u16);
	// lhz r9,580(r25)
	ctx.r9.u64 = REX_LOAD_U16(r25.u32 + 580);
	// addi r3,r9,1
	ctx.r3.s64 = ctx.r9.s64 + 1;
	// sth r3,580(r25)
	REX_STORE_U16(r25.u32 + 580, ctx.r3.u16);
	// lhz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r9,r5
	ctx.r9.s64 = ctx.r5.s16;
	// addi r4,r9,1
	ctx.r4.s64 = ctx.r9.s64 + 1;
	// rlwinm r3,r4,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r9,r3,r10
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r10.u32);
	// sth r9,12(r11)
	REX_STORE_U16(ctx.r11.u32 + 12, ctx.r9.u16);
	// lhz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// rlwinm r3,r4,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r9,r3,r10
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r10.u32);
	// sth r9,10(r11)
	REX_STORE_U16(ctx.r11.u32 + 10, ctx.r9.u16);
	// lhz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// rlwinm r9,r4,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lhz r9,-2(r3)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + -2);
	// sth r9,8(r11)
	REX_STORE_U16(ctx.r11.u32 + 8, ctx.r9.u16);
	// lhz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// rlwinm r3,r4,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r3,r10
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r10.u32);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// subf r6,r9,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r9.u64;
loc_826EA880:
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// lhz r5,34(r25)
	ctx.r5.u64 = REX_LOAD_U16(r25.u32 + 34);
	// addi r11,r11,1776
	ctx.r11.s64 = ctx.r11.s64 + 1776;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x826ea7c4
	if (ctx.cr6.lt) goto loc_826EA7C4;
loc_826EA89C:
	// lhz r11,580(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 580);
	// lhz r10,34(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 34);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x826ea5f8
	if (ctx.cr6.gt) goto loc_826EA5F8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826ea5f8
	if (!ctx.cr6.gt) goto loc_826EA5F8;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// blt cr6,0x826ea5f8
	if (ctx.cr6.lt) goto loc_826EA5F8;
	// cntlzw r11,r6
	ctx.r11.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r10,216(r30)
	REX_STORE_U32(r30.u32 + 216, ctx.r10.u32);
	// bl 0x826e1ca8
	ctx.lr = 0x826EA8D4;
	sub_826E1CA8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826eb71c
	if (ctx.cr6.lt) goto loc_826EB71C;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82621890
	ctx.lr = 0x826EA8E4;
	sub_82621890(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826eb71c
	if (ctx.cr6.lt) goto loc_826EB71C;
	// stw r22,40(r30)
	REX_STORE_U32(r30.u32 + 40, r22.u32);
	// b 0x826eb700
	goto loc_826EB700;
loc_826EA8F4:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r30,224
	ctx.r3.s64 = r30.s64 + 224;
	// bl 0x826e58b8
	ctx.lr = 0x826EA904;
	sub_826E58B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826eb71c
	if (ctx.cr6.lt) goto loc_826EB71C;
	// lhz r11,580(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 580);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lhz r9,34(r25)
	ctx.r9.u64 = REX_LOAD_U16(r25.u32 + 34);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// stw r10,192(r25)
	REX_STORE_U32(r25.u32 + 192, ctx.r10.u32);
	// bne cr6,0x826ea5f8
	if (!ctx.cr6.eq) goto loc_826EA5F8;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x826ea940
	if (!ctx.cr6.eq) goto loc_826EA940;
	// li r11,18
	ctx.r11.s64 = 18;
	// stw r11,40(r30)
	REX_STORE_U32(r30.u32 + 40, ctx.r11.u32);
	// b 0x826eb700
	goto loc_826EB700;
loc_826EA940:
	// stw r23,40(r30)
	REX_STORE_U32(r30.u32 + 40, r23.u32);
	// b 0x826eb700
	goto loc_826EB700;
loc_826EA948:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r30,224
	ctx.r3.s64 = r30.s64 + 224;
	// bl 0x826e58b8
	ctx.lr = 0x826EA958;
	sub_826E58B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826eb71c
	if (ctx.cr6.lt) goto loc_826EB71C;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,188(r25)
	REX_STORE_U32(r25.u32 + 188, ctx.r11.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x826ea5f8
	if (ctx.cr6.eq) goto loc_826EA5F8;
	// li r11,17
	ctx.r11.s64 = 17;
	// stw r11,40(r30)
	REX_STORE_U32(r30.u32 + 40, ctx.r11.u32);
loc_826EA97C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r30,224
	ctx.r3.s64 = r30.s64 + 224;
	// bl 0x826e58b8
	ctx.lr = 0x826EA98C;
	sub_826E58B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826eb71c
	if (ctx.cr6.lt) goto loc_826EB71C;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,180(r25)
	REX_STORE_U32(r25.u32 + 180, ctx.r11.u32);
	// stw r21,40(r30)
	REX_STORE_U32(r30.u32 + 40, r21.u32);
loc_826EA9A0:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r30,224
	ctx.r3.s64 = r30.s64 + 224;
	// bl 0x826e58b8
	ctx.lr = 0x826EA9B0;
	sub_826E58B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826eb71c
	if (ctx.cr6.lt) goto loc_826EB71C;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,19
	ctx.r10.s64 = 19;
	// stw r11,184(r25)
	REX_STORE_U32(r25.u32 + 184, ctx.r11.u32);
	// stw r10,40(r30)
	REX_STORE_U32(r30.u32 + 40, ctx.r10.u32);
loc_826EA9C8:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r30,224
	ctx.r3.s64 = r30.s64 + 224;
	// bl 0x826e58b8
	ctx.lr = 0x826EA9D8;
	sub_826E58B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826eb71c
	if (ctx.cr6.lt) goto loc_826EB71C;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,20
	ctx.r10.s64 = 20;
	// stw r11,656(r25)
	REX_STORE_U32(r25.u32 + 656, ctx.r11.u32);
	// stw r10,40(r30)
	REX_STORE_U32(r30.u32 + 40, ctx.r10.u32);
	// b 0x826eb700
	goto loc_826EB700;
loc_826EA9F4:
	// lwz r11,180(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 180);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x826eaa38
	if (!ctx.cr6.eq) goto loc_826EAA38;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r30,224
	ctx.r3.s64 = r30.s64 + 224;
	// bl 0x826e58b8
	ctx.lr = 0x826EAA10;
	sub_826E58B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826eb71c
	if (ctx.cr6.lt) goto loc_826EB71C;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x826ea5f8
	if (ctx.cr6.gt) goto loc_826EA5F8;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x826ea5f8
	if (ctx.cr6.lt) goto loc_826EA5F8;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// stw r10,648(r25)
	REX_STORE_U32(r25.u32 + 648, ctx.r10.u32);
loc_826EAA38:
	// li r11,21
	ctx.r11.s64 = 21;
	// stw r11,40(r30)
	REX_STORE_U32(r30.u32 + 40, ctx.r11.u32);
loc_826EAA40:
	// lwz r11,180(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 180);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x826eaa84
	if (!ctx.cr6.eq) goto loc_826EAA84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r30,224
	ctx.r3.s64 = r30.s64 + 224;
	// bl 0x826e58b8
	ctx.lr = 0x826EAA5C;
	sub_826E58B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826eb71c
	if (ctx.cr6.lt) goto loc_826EB71C;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,12
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 12, ctx.xer);
	// bgt cr6,0x826ea5f8
	if (ctx.cr6.gt) goto loc_826EA5F8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x826ea5f8
	if (ctx.cr6.lt) goto loc_826EA5F8;
	// sth r11,582(r25)
	REX_STORE_U16(r25.u32 + 582, ctx.r11.u16);
loc_826EAA84:
	// stw r24,652(r25)
	REX_STORE_U32(r25.u32 + 652, r24.u32);
	// stw r16,40(r30)
	REX_STORE_U32(r30.u32 + 40, r16.u32);
loc_826EAA8C:
	// lwz r11,180(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 180);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x826eab20
	if (!ctx.cr6.eq) goto loc_826EAB20;
	// lwz r11,652(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 652);
	// lwz r10,648(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 648);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x826eab20
	if (!ctx.cr6.lt) goto loc_826EAB20;
loc_826EAAA8:
	// lwz r11,192(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 192);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x826eab04
	if (!ctx.cr6.eq) goto loc_826EAB04;
	// lhz r11,582(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 582);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,224
	ctx.r3.s64 = r30.s64 + 224;
	// extsh r4,r11
	ctx.r4.s64 = ctx.r11.s16;
	// bl 0x826e58b8
	ctx.lr = 0x826EAAC8;
	sub_826E58B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826eb71c
	if (ctx.cr6.lt) goto loc_826EB71C;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addic. r11,r11,1
	ctx.xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r11.s64 = ctx.r11.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x826ea5f8
	if (!ctx.cr0.gt) goto loc_826EA5F8;
	// lhz r10,582(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 582);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// slw r8,r23,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (r23.u32 << (ctx.r9.u8 & 0x3F));
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bgt cr6,0x826ea5f8
	if (ctx.cr6.gt) goto loc_826EA5F8;
	// lwz r10,652(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 652);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// addi r10,r10,158
	ctx.r10.s64 = ctx.r10.s64 + 158;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r8,r25
	REX_STORE_U32(ctx.r8.u32 + r25.u32, ctx.r9.u32);
loc_826EAB04:
	// lwz r11,652(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 652);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,652(r25)
	REX_STORE_U32(r25.u32 + 652, ctx.r11.u32);
	// lwz r9,648(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 648);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x826eaaa8
	if (ctx.cr6.lt) goto loc_826EAAA8;
loc_826EAB20:
	// li r11,23
	ctx.r11.s64 = 23;
	// stw r11,40(r30)
	REX_STORE_U32(r30.u32 + 40, ctx.r11.u32);
loc_826EAB28:
	// lwz r11,656(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 656);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x826eab6c
	if (!ctx.cr6.eq) goto loc_826EAB6C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r30,224
	ctx.r3.s64 = r30.s64 + 224;
	// bl 0x826e58b8
	ctx.lr = 0x826EAB44;
	sub_826E58B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826eb71c
	if (ctx.cr6.lt) goto loc_826EB71C;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x826ea5f8
	if (ctx.cr6.gt) goto loc_826EA5F8;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x826ea5f8
	if (ctx.cr6.lt) goto loc_826EA5F8;
	// stw r11,664(r25)
	REX_STORE_U32(r25.u32 + 664, ctx.r11.u32);
loc_826EAB6C:
	// li r11,24
	ctx.r11.s64 = 24;
	// stw r11,40(r30)
	REX_STORE_U32(r30.u32 + 40, ctx.r11.u32);
loc_826EAB74:
	// lwz r11,656(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 656);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x826eabbc
	if (!ctx.cr6.eq) goto loc_826EABBC;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r30,224
	ctx.r3.s64 = r30.s64 + 224;
	// bl 0x826e58b8
	ctx.lr = 0x826EAB90;
	sub_826E58B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826eb71c
	if (ctx.cr6.lt) goto loc_826EB71C;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bgt cr6,0x826ea5f8
	if (ctx.cr6.gt) goto loc_826EA5F8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x826ea5f8
	if (ctx.cr6.lt) goto loc_826EA5F8;
	// stw r11,672(r25)
	REX_STORE_U32(r25.u32 + 672, ctx.r11.u32);
	// addi r4,r25,664
	ctx.r4.s64 = r25.s64 + 664;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x826f35a8
	ctx.lr = 0x826EABBC;
	sub_826F35A8(ctx, base);
loc_826EABBC:
	// li r11,25
	ctx.r11.s64 = 25;
	// stw r11,40(r30)
	REX_STORE_U32(r30.u32 + 40, ctx.r11.u32);
loc_826EABC4:
	// lwz r11,656(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 656);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x826eabf0
	if (!ctx.cr6.eq) goto loc_826EABF0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r30,224
	ctx.r3.s64 = r30.s64 + 224;
	// bl 0x826e58b8
	ctx.lr = 0x826EABE0;
	sub_826E58B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826eb71c
	if (ctx.cr6.lt) goto loc_826EB71C;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,660(r25)
	REX_STORE_U32(r25.u32 + 660, ctx.r11.u32);
loc_826EABF0:
	// li r11,26
	ctx.r11.s64 = 26;
	// sth r24,146(r30)
	REX_STORE_U16(r30.u32 + 146, r24.u16);
	// stw r11,40(r30)
	REX_STORE_U32(r30.u32 + 40, ctx.r11.u32);
loc_826EABFC:
	// lwz r11,656(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 656);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x826eac8c
	if (!ctx.cr6.eq) goto loc_826EAC8C;
	// lwz r11,660(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 660);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x826eac8c
	if (!ctx.cr6.eq) goto loc_826EAC8C;
	// lwz r10,672(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 672);
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// ble cr6,0x826eac40
	if (!ctx.cr6.gt) goto loc_826EAC40;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_826EAC30:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r8,r10,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bgt cr6,0x826eac30
	if (ctx.cr6.gt) goto loc_826EAC30;
loc_826EAC40:
	// slw r10,r23,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (r23.u32 << (ctx.r11.u8 & 0x3F));
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x826eac54
	if (!ctx.cr6.lt) goto loc_826EAC54;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
loc_826EAC54:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,224
	ctx.r3.s64 = r30.s64 + 224;
	// bl 0x826e58b8
	ctx.lr = 0x826EAC60;
	sub_826E58B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826eb71c
	if (ctx.cr6.lt) goto loc_826EB71C;
	// lwz r10,672(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 672);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x826ea5f8
	if (ctx.cr6.gt) goto loc_826EA5F8;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// stw r10,680(r25)
	REX_STORE_U32(r25.u32 + 680, ctx.r10.u32);
loc_826EAC8C:
	// li r11,27
	ctx.r11.s64 = 27;
	// sth r24,146(r30)
	REX_STORE_U16(r30.u32 + 146, r24.u16);
	// stw r11,40(r30)
	REX_STORE_U32(r30.u32 + 40, ctx.r11.u32);
loc_826EAC98:
	// lwz r11,656(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 656);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x826ead4c
	if (!ctx.cr6.eq) goto loc_826EAD4C;
	// lwz r11,660(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 660);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x826ead4c
	if (!ctx.cr6.eq) goto loc_826EAD4C;
	// lhz r11,34(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 34);
	// lwz r10,664(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 664);
	// lhz r9,146(r30)
	ctx.r9.u64 = REX_LOAD_U16(r30.u32 + 146);
	// mullw r8,r11,r11
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r11.s32);
	// lwz r7,680(r25)
	ctx.r7.u64 = REX_LOAD_U32(r25.u32 + 680);
	// lwz r6,672(r25)
	ctx.r6.u64 = REX_LOAD_U32(r25.u32 + 672);
	// mullw r5,r8,r10
	ctx.r5.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// extsh r4,r9
	ctx.r4.s64 = ctx.r9.s16;
	// subfic r31,r7,32
	ctx.xer.ca = ctx.r7.u32 <= 32;
	r31.u64 = static_cast<uint64_t>(32) - ctx.r7.u64;
	// subfic r29,r6,30
	ctx.xer.ca = ctx.r6.u32 <= 30;
	r29.u64 = static_cast<uint64_t>(30) - ctx.r6.u64;
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x826ead4c
	if (!ctx.cr6.lt) goto loc_826EAD4C;
	// addi r28,r30,224
	r28.s64 = r30.s64 + 224;
loc_826EACE4:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,680(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 680);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826e58b8
	ctx.lr = 0x826EACF4;
	sub_826E58B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826eb71c
	if (ctx.cr6.lt) goto loc_826EB71C;
	// lhz r10,146(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 146);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// slw r9,r11,r31
	ctx.r9.u64 = r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (r31.u8 & 0x3F));
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// sraw r11,r9,r29
	temp.u32 = r29.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r11.s64 = ctx.r9.s32 >> temp.u32;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r5,696(r25)
	ctx.r5.u64 = REX_LOAD_U32(r25.u32 + 696);
	// sthx r11,r7,r5
	REX_STORE_U16(ctx.r7.u32 + ctx.r5.u32, ctx.r11.u16);
	// lhz r11,146(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 146);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// sth r3,146(r30)
	REX_STORE_U16(r30.u32 + 146, ctx.r3.u16);
	// clrlwi r7,r3,16
	ctx.r7.u64 = ctx.r3.u32 & 0xFFFF;
	// lwz r10,664(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 664);
	// lhz r9,34(r25)
	ctx.r9.u64 = REX_LOAD_U16(r25.u32 + 34);
	// mullw r8,r9,r9
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r9.s32);
	// mullw r6,r8,r10
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// extsh r5,r7
	ctx.r5.s64 = ctx.r7.s16;
	// cmpw cr6,r5,r6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x826eace4
	if (ctx.cr6.lt) goto loc_826EACE4;
loc_826EAD4C:
	// li r11,28
	ctx.r11.s64 = 28;
	// sth r24,150(r30)
	REX_STORE_U16(r30.u32 + 150, r24.u16);
	// sth r24,146(r30)
	REX_STORE_U16(r30.u32 + 146, r24.u16);
	// stw r11,40(r30)
	REX_STORE_U32(r30.u32 + 40, ctx.r11.u32);
loc_826EAD5C:
	// lwz r11,656(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 656);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x826eae50
	if (!ctx.cr6.eq) goto loc_826EAE50;
	// lwz r11,660(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 660);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x826eae50
	if (!ctx.cr6.eq) goto loc_826EAE50;
	// lhz r11,150(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 150);
	// lwz r10,680(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 680);
	// lwz r9,672(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 672);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// lhz r7,34(r25)
	ctx.r7.u64 = REX_LOAD_U16(r25.u32 + 34);
	// subfic r31,r10,32
	ctx.xer.ca = ctx.r10.u32 <= 32;
	r31.u64 = static_cast<uint64_t>(32) - ctx.r10.u64;
	// subfic r29,r9,30
	ctx.xer.ca = ctx.r9.u32 <= 30;
	r29.u64 = static_cast<uint64_t>(30) - ctx.r9.u64;
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x826eae50
	if (!ctx.cr6.lt) goto loc_826EAE50;
loc_826EAD98:
	// lhz r11,150(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 150);
	// lhz r10,146(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 146);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x826eae2c
	if (!ctx.cr6.lt) goto loc_826EAE2C;
	// addi r28,r30,224
	r28.s64 = r30.s64 + 224;
loc_826EADB4:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,680(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 680);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826e58b8
	ctx.lr = 0x826EADC4;
	sub_826E58B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826eb71c
	if (ctx.cr6.lt) goto loc_826EB71C;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lhz r10,150(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 150);
	// slw r9,r11,r31
	ctx.r9.u64 = r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (r31.u8 & 0x3F));
	// lhz r8,146(r30)
	ctx.r8.u64 = REX_LOAD_U16(r30.u32 + 146);
	// sraw r11,r9,r29
	temp.u32 = r29.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r11.s64 = ctx.r9.s32 >> temp.u32;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// lwz r5,704(r25)
	ctx.r5.u64 = REX_LOAD_U32(r25.u32 + 704);
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// lhz r4,34(r25)
	ctx.r4.u64 = REX_LOAD_U16(r25.u32 + 34);
	// mullw r11,r4,r7
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r7.s32);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r6,r11,r5
	REX_STORE_U16(ctx.r11.u32 + ctx.r5.u32, ctx.r6.u16);
	// lhz r11,146(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 146);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// clrlwi r7,r9,16
	ctx.r7.u64 = ctx.r9.u32 & 0xFFFF;
	// sth r9,146(r30)
	REX_STORE_U16(r30.u32 + 146, ctx.r9.u16);
	// lhz r5,150(r30)
	ctx.r5.u64 = REX_LOAD_U16(r30.u32 + 150);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// cmpw cr6,r6,r4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x826eadb4
	if (ctx.cr6.lt) goto loc_826EADB4;
loc_826EAE2C:
	// lhz r11,150(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 150);
	// sth r24,146(r30)
	REX_STORE_U16(r30.u32 + 146, r24.u16);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// sth r10,150(r30)
	REX_STORE_U16(r30.u32 + 150, ctx.r10.u16);
	// clrlwi r7,r10,16
	ctx.r7.u64 = ctx.r10.u32 & 0xFFFF;
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// lhz r8,34(r25)
	ctx.r8.u64 = REX_LOAD_U16(r25.u32 + 34);
	// cmpw cr6,r6,r8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x826ead98
	if (ctx.cr6.lt) goto loc_826EAD98;
loc_826EAE50:
	// li r11,29
	ctx.r11.s64 = 29;
	// stw r11,40(r30)
	REX_STORE_U32(r30.u32 + 40, ctx.r11.u32);
loc_826EAE58:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r30,224
	ctx.r3.s64 = r30.s64 + 224;
	// bl 0x826e58b8
	ctx.lr = 0x826EAE68;
	sub_826E58B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826eb71c
	if (ctx.cr6.lt) goto loc_826EB71C;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,716(r25)
	REX_STORE_U32(r25.u32 + 716, ctx.r11.u32);
	// sth r24,150(r30)
	REX_STORE_U16(r30.u32 + 150, r24.u16);
	// stw r17,40(r30)
	REX_STORE_U32(r30.u32 + 40, r17.u32);
	// stw r24,44(r30)
	REX_STORE_U32(r30.u32 + 44, r24.u32);
loc_826EAE84:
	// lhz r11,580(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 580);
	// lhz r10,150(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 150);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x826eb2b4
	if (!ctx.cr6.lt) goto loc_826EB2B4;
loc_826EAE9C:
	// lhz r11,150(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 150);
	// lwz r9,584(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 584);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// lwz r10,320(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 320);
	// lwz r11,44(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 44);
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// lhzx r6,r7,r9
	ctx.r6.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r9.u32);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// mulli r9,r5,1776
	ctx.r9.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(1776));
	// add r31,r9,r10
	r31.u64 = ctx.r9.u64 + ctx.r10.u64;
	// bgt cr6,0x826eb290
	if (ctx.cr6.gt) goto loc_826EB290;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x826eaf1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_826EAF1C;
	// bdzf 4*cr6+eq,0x826eafac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_826EAFAC;
	// bne cr6,0x826eb038
	if (!ctx.cr6.eq) goto loc_826EB038;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r30,224
	ctx.r3.s64 = r30.s64 + 224;
	// bl 0x826e58b8
	ctx.lr = 0x826EAEF0;
	sub_826E58B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826eb71c
	if (ctx.cr6.lt) goto loc_826EB71C;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x826ea5f8
	if (ctx.cr6.gt) goto loc_826EA5F8;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x826ea5f8
	if (ctx.cr6.lt) goto loc_826EA5F8;
	// sth r24,184(r31)
	REX_STORE_U16(r31.u32 + 184, r24.u16);
	// sth r11,182(r31)
	REX_STORE_U16(r31.u32 + 182, ctx.r11.u16);
	// stw r23,44(r30)
	REX_STORE_U32(r30.u32 + 44, r23.u32);
loc_826EAF1C:
	// lhz r11,184(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 184);
	// lhz r10,182(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 182);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x826eafa4
	if (!ctx.cr6.lt) goto loc_826EAFA4;
	// addi r29,r30,224
	r29.s64 = r30.s64 + 224;
loc_826EAF38:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826e58b8
	ctx.lr = 0x826EAF48;
	sub_826E58B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826eb71c
	if (ctx.cr6.lt) goto loc_826EB71C;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// bgt cr6,0x826ea5f8
	if (ctx.cr6.gt) goto loc_826EA5F8;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x826ea5f8
	if (ctx.cr6.lt) goto loc_826EA5F8;
	// lhz r10,184(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 184);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mulli r10,r9,56
	ctx.r10.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(56));
	// add r8,r10,r31
	ctx.r8.u64 = ctx.r10.u64 + r31.u64;
	// stw r11,200(r8)
	REX_STORE_U32(ctx.r8.u32 + 200, ctx.r11.u32);
	// lhz r11,184(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 184);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// clrlwi r4,r6,16
	ctx.r4.u64 = ctx.r6.u32 & 0xFFFF;
	// sth r6,184(r31)
	REX_STORE_U16(r31.u32 + 184, ctx.r6.u16);
	// lhz r3,182(r31)
	ctx.r3.u64 = REX_LOAD_U16(r31.u32 + 182);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x826eaf38
	if (ctx.cr6.lt) goto loc_826EAF38;
loc_826EAFA4:
	// sth r24,184(r31)
	REX_STORE_U16(r31.u32 + 184, r24.u16);
	// stw r22,44(r30)
	REX_STORE_U32(r30.u32 + 44, r22.u32);
loc_826EAFAC:
	// lhz r11,184(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 184);
	// lhz r10,182(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 182);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x826eb02c
	if (!ctx.cr6.lt) goto loc_826EB02C;
	// addi r29,r30,224
	r29.s64 = r30.s64 + 224;
loc_826EAFC8:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826e58b8
	ctx.lr = 0x826EAFD8;
	sub_826E58B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826eb71c
	if (ctx.cr6.lt) goto loc_826EB71C;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r10,12
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 12, ctx.xer);
	// bgt cr6,0x826ea5f8
	if (ctx.cr6.gt) goto loc_826EA5F8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x826ea5f8
	if (ctx.cr6.lt) goto loc_826EA5F8;
	// lhz r11,184(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 184);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// mulli r11,r9,56
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(56));
	// add r8,r11,r31
	ctx.r8.u64 = ctx.r11.u64 + r31.u64;
	// stw r10,220(r8)
	REX_STORE_U32(ctx.r8.u32 + 220, ctx.r10.u32);
	// lhz r11,184(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 184);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// sth r6,184(r31)
	REX_STORE_U16(r31.u32 + 184, ctx.r6.u16);
	// clrlwi r3,r6,16
	ctx.r3.u64 = ctx.r6.u32 & 0xFFFF;
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// lhz r4,182(r31)
	ctx.r4.u64 = REX_LOAD_U16(r31.u32 + 182);
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x826eafc8
	if (ctx.cr6.lt) goto loc_826EAFC8;
loc_826EB02C:
	// sth r24,184(r31)
	REX_STORE_U16(r31.u32 + 184, r24.u16);
	// stw r21,44(r30)
	REX_STORE_U32(r30.u32 + 44, r21.u32);
	// stw r24,48(r30)
	REX_STORE_U32(r30.u32 + 48, r24.u32);
loc_826EB038:
	// lwz r11,716(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 716);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x826eb288
	if (!ctx.cr6.eq) goto loc_826EB288;
	// lhz r11,184(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 184);
	// lhz r10,182(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 182);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x826eb288
	if (!ctx.cr6.lt) goto loc_826EB288;
loc_826EB05C:
	// lwz r11,48(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 48);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x826eb078
	if (ctx.cr6.lt) goto loc_826EB078;
	// beq cr6,0x826eb108
	if (ctx.cr6.eq) goto loc_826EB108;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x826eb1a4
	if (ctx.cr6.lt) goto loc_826EB1A4;
	// b 0x826eb260
	goto loc_826EB260;
loc_826EB078:
	// lhz r10,184(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 184);
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mulli r10,r9,56
	ctx.r10.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(56));
	// add r8,r10,r31
	ctx.r8.u64 = ctx.r10.u64 + r31.u64;
	// lwz r9,200(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 200);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// ble cr6,0x826eb0bc
	if (!ctx.cr6.gt) goto loc_826EB0BC;
	// lhz r10,184(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 184);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// mulli r10,r8,56
	ctx.r10.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(56));
	// add r7,r10,r31
	ctx.r7.u64 = ctx.r10.u64 + r31.u64;
	// lwz r10,200(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 200);
loc_826EB0AC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r8,r10,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bgt cr6,0x826eb0ac
	if (ctx.cr6.gt) goto loc_826EB0AC;
loc_826EB0BC:
	// slw r10,r23,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (r23.u32 << (ctx.r11.u8 & 0x3F));
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x826eb0d0
	if (!ctx.cr6.lt) goto loc_826EB0D0;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
loc_826EB0D0:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,224
	ctx.r3.s64 = r30.s64 + 224;
	// bl 0x826e58b8
	ctx.lr = 0x826EB0DC;
	sub_826E58B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826eb71c
	if (ctx.cr6.lt) goto loc_826EB71C;
	// lhz r11,184(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 184);
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// mulli r10,r9,56
	ctx.r10.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(56));
	// add r7,r10,r31
	ctx.r7.u64 = ctx.r10.u64 + r31.u64;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,212(r7)
	REX_STORE_U32(ctx.r7.u32 + 212, ctx.r6.u32);
	// stw r23,48(r30)
	REX_STORE_U32(r30.u32 + 48, r23.u32);
loc_826EB108:
	// lhz r10,184(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 184);
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mulli r10,r9,56
	ctx.r10.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(56));
	// add r8,r10,r31
	ctx.r8.u64 = ctx.r10.u64 + r31.u64;
	// lwz r10,220(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 220);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// ble cr6,0x826eb154
	if (!ctx.cr6.gt) goto loc_826EB154;
	// lhz r10,184(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 184);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// mulli r10,r8,56
	ctx.r10.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(56));
	// add r7,r10,r31
	ctx.r7.u64 = ctx.r10.u64 + r31.u64;
	// lwz r10,220(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 220);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_826EB144:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r8,r10,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bgt cr6,0x826eb144
	if (ctx.cr6.gt) goto loc_826EB144;
loc_826EB154:
	// slw r10,r23,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (r23.u32 << (ctx.r11.u8 & 0x3F));
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x826eb168
	if (!ctx.cr6.lt) goto loc_826EB168;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
loc_826EB168:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,224
	ctx.r3.s64 = r30.s64 + 224;
	// bl 0x826e58b8
	ctx.lr = 0x826EB174;
	sub_826E58B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826eb71c
	if (ctx.cr6.lt) goto loc_826EB71C;
	// lhz r11,184(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 184);
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// mulli r10,r9,56
	ctx.r10.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(56));
	// add r7,r10,r31
	ctx.r7.u64 = ctx.r10.u64 + r31.u64;
	// addi r6,r11,2
	ctx.r6.s64 = ctx.r11.s64 + 2;
	// stw r6,216(r7)
	REX_STORE_U32(ctx.r7.u32 + 216, ctx.r6.u32);
	// sth r24,146(r30)
	REX_STORE_U16(r30.u32 + 146, r24.u16);
	// stw r22,48(r30)
	REX_STORE_U32(r30.u32 + 48, r22.u32);
loc_826EB1A4:
	// lhz r11,184(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 184);
	// lhz r10,146(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 146);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// mulli r11,r9,56
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(56));
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// lwz r27,216(r11)
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 216);
	// lwz r7,220(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 220);
	// lwz r6,212(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 212);
	// subfic r29,r27,32
	ctx.xer.ca = r27.u32 <= 32;
	r29.u64 = static_cast<uint64_t>(32) - r27.u64;
	// subfic r28,r7,30
	ctx.xer.ca = ctx.r7.u32 <= 30;
	r28.u64 = static_cast<uint64_t>(30) - ctx.r7.u64;
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x826eb25c
	if (!ctx.cr6.lt) goto loc_826EB25C;
	// addi r26,r30,224
	r26.s64 = r30.s64 + 224;
loc_826EB1DC:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826e58b8
	ctx.lr = 0x826EB1EC;
	sub_826E58B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826eb71c
	if (ctx.cr6.lt) goto loc_826EB71C;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lhz r10,146(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 146);
	// slw r9,r11,r29
	ctx.r9.u64 = r29.u8 & 0x20 ? 0 : (ctx.r11.u32 << (r29.u8 & 0x3F));
	// sraw r11,r9,r28
	temp.u32 = r28.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r11.s64 = ctx.r9.s32 >> temp.u32;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhz r5,184(r31)
	ctx.r5.u64 = REX_LOAD_U16(r31.u32 + 184);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// mulli r11,r4,56
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(56));
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + r31.u64;
	// lwz r11,252(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 252);
	// sthx r8,r11,r6
	REX_STORE_U16(ctx.r11.u32 + ctx.r6.u32, ctx.r8.u16);
	// lhz r11,146(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 146);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// sth r9,146(r30)
	REX_STORE_U16(r30.u32 + 146, ctx.r9.u16);
	// clrlwi r5,r9,16
	ctx.r5.u64 = ctx.r9.u32 & 0xFFFF;
	// lhz r7,184(r31)
	ctx.r7.u64 = REX_LOAD_U16(r31.u32 + 184);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// mulli r11,r6,56
	ctx.r11.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(56));
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + r31.u64;
	// extsh r3,r5
	ctx.r3.s64 = ctx.r5.s16;
	// lwz r11,212(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 212);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x826eb1dc
	if (ctx.cr6.lt) goto loc_826EB1DC;
loc_826EB25C:
	// stw r24,48(r30)
	REX_STORE_U32(r30.u32 + 48, r24.u32);
loc_826EB260:
	// stw r24,48(r30)
	REX_STORE_U32(r30.u32 + 48, r24.u32);
	// lhz r11,184(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 184);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// sth r10,184(r31)
	REX_STORE_U16(r31.u32 + 184, ctx.r10.u16);
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// extsh r5,r8
	ctx.r5.s64 = ctx.r8.s16;
	// lhz r7,182(r31)
	ctx.r7.u64 = REX_LOAD_U16(r31.u32 + 182);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// cmpw cr6,r5,r6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x826eb05c
	if (ctx.cr6.lt) goto loc_826EB05C;
loc_826EB288:
	// sth r24,184(r31)
	REX_STORE_U16(r31.u32 + 184, r24.u16);
	// stw r24,44(r30)
	REX_STORE_U32(r30.u32 + 44, r24.u32);
loc_826EB290:
	// lhz r11,150(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 150);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// sth r10,150(r30)
	REX_STORE_U16(r30.u32 + 150, ctx.r10.u16);
	// lhz r7,580(r25)
	ctx.r7.u64 = REX_LOAD_U16(r25.u32 + 580);
	// extsh r5,r7
	ctx.r5.s64 = ctx.r7.s16;
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x826eae9c
	if (ctx.cr6.lt) goto loc_826EAE9C;
loc_826EB2B4:
	// li r11,34
	ctx.r11.s64 = 34;
	// stw r11,40(r30)
	REX_STORE_U32(r30.u32 + 40, ctx.r11.u32);
loc_826EB2BC:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r30,224
	ctx.r3.s64 = r30.s64 + 224;
	// bl 0x826e58b8
	ctx.lr = 0x826EB2CC;
	sub_826E58B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826eb71c
	if (ctx.cr6.lt) goto loc_826EB71C;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// sth r11,728(r25)
	REX_STORE_U16(r25.u32 + 728, ctx.r11.u16);
	// stw r14,40(r30)
	REX_STORE_U32(r30.u32 + 40, r14.u32);
loc_826EB2E0:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r30,224
	ctx.r3.s64 = r30.s64 + 224;
	// bl 0x826e58b8
	ctx.lr = 0x826EB2F0;
	sub_826E58B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826eb71c
	if (ctx.cr6.lt) goto loc_826EB71C;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x826ea5f8
	if (ctx.cr6.lt) goto loc_826EA5F8;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// bgt cr6,0x826ea5f8
	if (ctx.cr6.gt) goto loc_826EA5F8;
	// lwz r10,192(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 192);
	// sth r11,208(r25)
	REX_STORE_U16(r25.u32 + 208, ctx.r11.u16);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x826eb32c
	if (!ctx.cr6.eq) goto loc_826EB32C;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r4,320(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 320);
	// bl 0x826f6cc8
	ctx.lr = 0x826EB32C;
	sub_826F6CC8(ctx, base);
loc_826EB32C:
	// stw r23,40(r30)
	REX_STORE_U32(r30.u32 + 40, r23.u32);
loc_826EB330:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r30,224
	ctx.r3.s64 = r30.s64 + 224;
	// bl 0x826e58b8
	ctx.lr = 0x826EB340;
	sub_826E58B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826eb71c
	if (ctx.cr6.lt) goto loc_826EB71C;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lhz r10,580(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 580);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// stw r11,204(r25)
	REX_STORE_U32(r25.u32 + 204, ctx.r11.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x826eb3a0
	if (!ctx.cr6.gt) goto loc_826EB3A0;
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// rlwinm r10,r24,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 1) & 0xFFFFFFFE;
loc_826EB368:
	// lwz r9,584(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 584);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// lwz r8,320(r25)
	ctx.r8.u64 = REX_LOAD_U32(r25.u32 + 320);
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// lhzx r5,r10,r9
	ctx.r5.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// mulli r9,r4,1776
	ctx.r9.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(1776));
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r23,40(r9)
	REX_STORE_U32(ctx.r9.u32 + 40, r23.u32);
	// lhz r8,580(r25)
	ctx.r8.u64 = REX_LOAD_U16(r25.u32 + 580);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x826eb368
	if (ctx.cr6.lt) goto loc_826EB368;
loc_826EB3A0:
	// lwz r11,204(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 204);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x826eb3b4
	if (!ctx.cr6.eq) goto loc_826EB3B4;
	// stw r19,40(r30)
	REX_STORE_U32(r30.u32 + 40, r19.u32);
	// b 0x826eb700
	goto loc_826EB700;
loc_826EB3B4:
	// li r11,32
	ctx.r11.s64 = 32;
	// stw r11,40(r30)
	REX_STORE_U32(r30.u32 + 40, ctx.r11.u32);
	// b 0x826eb700
	goto loc_826EB700;
loc_826EB3C0:
	// lhz r11,580(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 580);
	// addi r28,r30,224
	r28.s64 = r30.s64 + 224;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// extsh r4,r11
	ctx.r4.s64 = ctx.r11.s16;
	// bl 0x826f1f78
	ctx.lr = 0x826EB3D4;
	sub_826F1F78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826eb71c
	if (ctx.cr6.lt) goto loc_826EB71C;
	// lhz r11,580(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 580);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x826eb448
	if (!ctx.cr6.gt) goto loc_826EB448;
	// mr r31,r24
	r31.u64 = r24.u64;
	// rlwinm r11,r24,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 1) & 0xFFFFFFFE;
loc_826EB3F4:
	// lwz r9,584(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 584);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r10,320(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 320);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lhzx r8,r11,r9
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// mulli r11,r7,1776
	ctx.r11.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(1776));
	// add r29,r11,r10
	r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x826e58b8
	ctx.lr = 0x826EB41C;
	sub_826E58B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826eb71c
	if (ctx.cr6.lt) goto loc_826EB71C;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r31,1
	ctx.r10.s64 = r31.s64 + 1;
	// extsh r31,r10
	r31.s64 = ctx.r10.s16;
	// stw r11,40(r29)
	REX_STORE_U32(r29.u32 + 40, ctx.r11.u32);
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lhz r8,580(r25)
	ctx.r8.u64 = REX_LOAD_U16(r25.u32 + 580);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// cmpw cr6,r31,r7
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x826eb3f4
	if (ctx.cr6.lt) goto loc_826EB3F4;
loc_826EB448:
	// sth r24,760(r25)
	REX_STORE_U16(r25.u32 + 760, r24.u16);
	// stw r18,40(r30)
	REX_STORE_U32(r30.u32 + 40, r18.u32);
loc_826EB450:
	// lwz r11,120(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 120);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x826eb690
	if (!ctx.cr6.eq) goto loc_826EB690;
	// li r11,38
	ctx.r11.s64 = 38;
	// stw r11,40(r30)
	REX_STORE_U32(r30.u32 + 40, ctx.r11.u32);
	// b 0x826eb700
	goto loc_826EB700;
loc_826EB468:
	// lwz r11,120(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 120);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x826eb494
	if (!ctx.cr6.eq) goto loc_826EB494;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r30,224
	ctx.r3.s64 = r30.s64 + 224;
	// bl 0x826e58b8
	ctx.lr = 0x826EB484;
	sub_826E58B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826eb71c
	if (ctx.cr6.lt) goto loc_826EB71C;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,164(r25)
	REX_STORE_U32(r25.u32 + 164, ctx.r11.u32);
loc_826EB494:
	// li r11,37
	ctx.r11.s64 = 37;
	// stw r11,40(r30)
	REX_STORE_U32(r30.u32 + 40, ctx.r11.u32);
loc_826EB49C:
	// lwz r11,120(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 120);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x826eb4d8
	if (!ctx.cr6.eq) goto loc_826EB4D8;
	// lwz r11,164(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 164);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x826eb4d8
	if (!ctx.cr6.eq) goto loc_826EB4D8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r30,224
	ctx.r3.s64 = r30.s64 + 224;
	// bl 0x826e58b8
	ctx.lr = 0x826EB4C4;
	sub_826E58B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826eb71c
	if (ctx.cr6.lt) goto loc_826EB71C;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// sth r10,168(r25)
	REX_STORE_U16(r25.u32 + 168, ctx.r10.u16);
loc_826EB4D8:
	// li r11,44
	ctx.r11.s64 = 44;
	// stw r11,40(r30)
	REX_STORE_U32(r30.u32 + 40, ctx.r11.u32);
loc_826EB4E0:
	// lwz r11,120(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 120);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x826eb528
	if (!ctx.cr6.eq) goto loc_826EB528;
	// lwz r11,164(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 164);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x826eb528
	if (!ctx.cr6.eq) goto loc_826EB528;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r30,224
	ctx.r3.s64 = r30.s64 + 224;
	// bl 0x826e58b8
	ctx.lr = 0x826EB508;
	sub_826E58B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826eb71c
	if (ctx.cr6.lt) goto loc_826EB71C;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bgt cr6,0x826ea5f8
	if (ctx.cr6.gt) goto loc_826EA5F8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x826ea5f8
	if (ctx.cr6.lt) goto loc_826EA5F8;
	// sth r11,170(r25)
	REX_STORE_U16(r25.u32 + 170, ctx.r11.u16);
loc_826EB528:
	// li r11,46
	ctx.r11.s64 = 46;
	// stw r11,40(r30)
	REX_STORE_U32(r30.u32 + 40, ctx.r11.u32);
loc_826EB530:
	// lwz r11,120(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 120);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x826eb57c
	if (!ctx.cr6.eq) goto loc_826EB57C;
	// lwz r11,164(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 164);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x826eb57c
	if (!ctx.cr6.eq) goto loc_826EB57C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r30,224
	ctx.r3.s64 = r30.s64 + 224;
	// bl 0x826e58b8
	ctx.lr = 0x826EB558;
	sub_826E58B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826eb71c
	if (ctx.cr6.lt) goto loc_826EB71C;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x826ea5f8
	if (ctx.cr6.lt) goto loc_826EA5F8;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x826ea5f8
	if (ctx.cr6.gt) goto loc_826EA5F8;
	// sth r11,172(r25)
	REX_STORE_U16(r25.u32 + 172, ctx.r11.u16);
loc_826EB57C:
	// sth r24,150(r30)
	REX_STORE_U16(r30.u32 + 150, r24.u16);
	// sth r24,148(r30)
	REX_STORE_U16(r30.u32 + 148, r24.u16);
	// stw r15,40(r30)
	REX_STORE_U32(r30.u32 + 40, r15.u32);
loc_826EB588:
	// lwz r11,120(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 120);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x826eb690
	if (!ctx.cr6.eq) goto loc_826EB690;
	// lwz r11,164(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 164);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x826eb690
	if (!ctx.cr6.eq) goto loc_826EB690;
	// lhz r11,580(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 580);
	// lhz r10,150(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 150);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x826eb690
	if (!ctx.cr6.lt) goto loc_826EB690;
loc_826EB5B8:
	// lhz r11,150(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 150);
	// lwz r9,584(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 584);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// lhz r7,168(r25)
	ctx.r7.u64 = REX_LOAD_U16(r25.u32 + 168);
	// lhz r5,148(r30)
	ctx.r5.u64 = REX_LOAD_U16(r30.u32 + 148);
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,320(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 320);
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// extsh r4,r7
	ctx.r4.s64 = ctx.r7.s16;
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// lhzx r9,r6,r9
	ctx.r9.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r9.u32);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// mulli r11,r8,1776
	ctx.r11.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(1776));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r29,r11,1456
	r29.s64 = ctx.r11.s64 + 1456;
	// bge cr6,0x826eb668
	if (!ctx.cr6.lt) goto loc_826EB668;
	// addi r28,r30,224
	r28.s64 = r30.s64 + 224;
loc_826EB5FC:
	// lhz r11,172(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 172);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lhz r10,170(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 170);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsh r31,r9
	r31.s64 = ctx.r9.s16;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x826e58b8
	ctx.lr = 0x826EB61C;
	sub_826E58B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826eb71c
	if (ctx.cr6.lt) goto loc_826EB71C;
	// lhz r10,148(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 148);
	// subfic r11,r31,32
	ctx.xer.ca = r31.u32 <= 32;
	ctx.r11.u64 = static_cast<uint64_t>(32) - r31.u64;
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// slw r7,r9,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// sraw r5,r7,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r7.s32 < 0) & (((ctx.r7.s32 >> temp.u32) << temp.u32) != ctx.r7.s32);
	ctx.r5.s64 = ctx.r7.s32 >> temp.u32;
	// stwx r5,r6,r29
	REX_STORE_U32(ctx.r6.u32 + r29.u32, ctx.r5.u32);
	// lhz r4,148(r30)
	ctx.r4.u64 = REX_LOAD_U16(r30.u32 + 148);
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// sth r11,148(r30)
	REX_STORE_U16(r30.u32 + 148, ctx.r11.u16);
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// lhz r9,168(r25)
	ctx.r9.u64 = REX_LOAD_U16(r25.u32 + 168);
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x826eb5fc
	if (ctx.cr6.lt) goto loc_826EB5FC;
loc_826EB668:
	// lhz r11,150(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 150);
	// sth r24,148(r30)
	REX_STORE_U16(r30.u32 + 148, r24.u16);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// sth r10,150(r30)
	REX_STORE_U16(r30.u32 + 150, ctx.r10.u16);
	// clrlwi r7,r10,16
	ctx.r7.u64 = ctx.r10.u32 & 0xFFFF;
	// extsh r5,r7
	ctx.r5.s64 = ctx.r7.s16;
	// lhz r8,580(r25)
	ctx.r8.u64 = REX_LOAD_U16(r25.u32 + 580);
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// cmpw cr6,r5,r6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x826eb5b8
	if (ctx.cr6.lt) goto loc_826EB5B8;
loc_826EB690:
	// stw r19,40(r30)
	REX_STORE_U32(r30.u32 + 40, r19.u32);
	// b 0x826eb700
	goto loc_826EB700;
loc_826EB698:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r30,224
	ctx.r3.s64 = r30.s64 + 224;
	// bl 0x826e58b8
	ctx.lr = 0x826EB6A8;
	sub_826E58B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826eb71c
	if (ctx.cr6.lt) goto loc_826EB71C;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826eb6c4
	if (!ctx.cr6.eq) goto loc_826EB6C4;
	// stb r24,200(r25)
	REX_STORE_U8(r25.u32 + 200, r24.u8);
	// b 0x826eb6fc
	goto loc_826EB6FC;
loc_826EB6C4:
	// li r11,51
	ctx.r11.s64 = 51;
	// stw r11,40(r30)
	REX_STORE_U32(r30.u32 + 40, ctx.r11.u32);
	// b 0x826eb700
	goto loc_826EB700;
loc_826EB6D0:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r30,224
	ctx.r3.s64 = r30.s64 + 224;
	// bl 0x826e58b8
	ctx.lr = 0x826EB6E0;
	sub_826E58B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826eb71c
	if (ctx.cr6.lt) goto loc_826EB71C;
	// lhz r10,110(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 110);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x826ea5f8
	if (!ctx.cr6.lt) goto loc_826EA5F8;
	// stb r11,200(r25)
	REX_STORE_U8(r25.u32 + 200, ctx.r11.u8);
loc_826EB6FC:
	// stw r20,40(r30)
	REX_STORE_U32(r30.u32 + 40, r20.u32);
loc_826EB700:
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x826ea63c
	if (!ctx.cr6.eq) goto loc_826EA63C;
loc_826EB70C:
	// lwz r11,192(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 192);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x826eb71c
	if (!ctx.cr6.eq) goto loc_826EB71C;
	// stw r23,20(r30)
	REX_STORE_U32(r30.u32 + 20, r23.u32);
loc_826EB71C:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_82768658) {
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
	ctx.lr = 0x82768660;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// lwz r30,0(r4)
	r30.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lwz r27,4(r4)
	r27.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// mr r20,r5
	r20.u64 = ctx.r5.u64;
	// lwz r25,28(r4)
	r25.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// mr r19,r6
	r19.u64 = ctx.r6.u64;
	// lwz r24,32(r4)
	r24.u64 = REX_LOAD_U32(ctx.r4.u32 + 32);
	// mr r15,r8
	r15.u64 = ctx.r8.u64;
	// lwz r31,84(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// mr r18,r9
	r18.u64 = ctx.r9.u64;
	// lwz r17,312(r3)
	r17.u64 = REX_LOAD_U32(ctx.r3.u32 + 312);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lwz r16,316(r3)
	r16.u64 = REX_LOAD_U32(ctx.r3.u32 + 316);
	// addi r23,r11,1
	r23.s64 = ctx.r11.s64 + 1;
	// beq cr6,0x82768850
	if (ctx.cr6.eq) goto loc_82768850;
	// lbz r4,8(r30)
	ctx.r4.u64 = REX_LOAD_U8(r30.u32 + 8);
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// subfic r10,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r10.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// lwz r28,0(r30)
	r28.u64 = REX_LOAD_U32(r30.u32 + 0);
	// clrldi r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// srd r8,r11,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r7,r28
	ctx.r6.u64 = REX_LOAD_U16(ctx.r7.u32 + r28.u32);
	// extsh r30,r6
	r30.s64 = ctx.r6.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x82768794
	if (ctx.cr6.lt) goto loc_82768794;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// clrlwi r9,r30,28
	ctx.r9.u64 = r30.u32 & 0xF;
	// sld r8,r11,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// subf r7,r9,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r9.u64;
	// std r8,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r8.u64);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// stw r7,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r7.u32);
	// bge cr6,0x8276878c
	if (!ctx.cr6.lt) goto loc_8276878C;
loc_827686F4:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82768720
	if (ctx.cr6.lt) goto loc_82768720;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725d78
	ctx.lr = 0x82768710;
	sub_82725D78(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x827686f4
	if (ctx.cr6.eq) goto loc_827686F4;
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// b 0x827687d4
	goto loc_827687D4;
loc_82768720:
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
loc_8276878C:
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// b 0x827687d4
	goto loc_827687D4;
loc_82768794:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725f80
	ctx.lr = 0x8276879C;
	sub_82725F80(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r29,r11,32768
	r29.u64 = ctx.r11.u64 | 32768;
loc_827687A4:
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
	// bl 0x82725f80
	ctx.lr = 0x827687BC;
	sub_82725F80(ctx, base);
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
	// blt cr6,0x827687a4
	if (ctx.cr6.lt) goto loc_827687A4;
loc_827687D4:
	// mr r21,r30
	r21.u64 = r30.u64;
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(r30.u32, r27.u32, ctx.xer);
	// bne cr6,0x827687ec
	if (!ctx.cr6.eq) goto loc_827687EC;
loc_827687E0:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1cd4
	return;
loc_827687EC:
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 0);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r29,r10,1,63
	r29.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r8.u64);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// bge 0x82768814
	if (!ctx.cr0.lt) goto loc_82768814;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82768814;
	sub_82725E38(ctx, base);
loc_82768814:
	// lbzx r11,r30,r25
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + r25.u32);
	// neg r9,r29
	ctx.r9.s64 = static_cast<int64_t>(-r29.u64);
	// lbzx r27,r30,r24
	r27.u64 = REX_LOAD_U8(r30.u32 + r24.u32);
	// cmplw cr6,r30,r23
	ctx.cr6.compare<uint32_t>(r30.u32, r23.u32, ctx.xer);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// blt cr6,0x82768834
	if (ctx.cr6.lt) goto loc_82768834;
	// lwz r10,16(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 16);
	// b 0x82768838
	goto loc_82768838;
loc_82768834:
	// lwz r10,12(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 12);
loc_82768838:
	// lbzx r8,r10,r27
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + r27.u32);
	// extsb r10,r8
	ctx.r10.s64 = ctx.r8.s8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// xor r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r9.u64;
	// subf r10,r9,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r9.u64;
	// b 0x82768e74
	goto loc_82768E74;
loc_82768850:
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 0);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r29,r10,1,63
	r29.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r8.u64);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// bge 0x82768878
	if (!ctx.cr0.lt) goto loc_82768878;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82768878;
	sub_82725E38(ctx, base);
loc_82768878:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82768a20
	if (ctx.cr6.eq) goto loc_82768A20;
	// lbz r4,8(r30)
	ctx.r4.u64 = REX_LOAD_U8(r30.u32 + 8);
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// subfic r10,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r10.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// lwz r28,0(r30)
	r28.u64 = REX_LOAD_U32(r30.u32 + 0);
	// clrldi r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// srd r8,r11,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r7,r28
	ctx.r6.u64 = REX_LOAD_U16(ctx.r7.u32 + r28.u32);
	// extsh r30,r6
	r30.s64 = ctx.r6.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x8276896c
	if (ctx.cr6.lt) goto loc_8276896C;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// clrlwi r9,r30,28
	ctx.r9.u64 = r30.u32 & 0xF;
	// subf r8,r9,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r9.u64;
	// sld r7,r11,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// stw r8,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r8.u32);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// std r7,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r7.u64);
	// bge cr6,0x82768964
	if (!ctx.cr6.lt) goto loc_82768964;
loc_827688CC:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x827688f8
	if (ctx.cr6.lt) goto loc_827688F8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725d78
	ctx.lr = 0x827688E8;
	sub_82725D78(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x827688cc
	if (ctx.cr6.eq) goto loc_827688CC;
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// b 0x827689ac
	goto loc_827689AC;
loc_827688F8:
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
loc_82768964:
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// b 0x827689ac
	goto loc_827689AC;
loc_8276896C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725f80
	ctx.lr = 0x82768974;
	sub_82725F80(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r29,r11,32768
	r29.u64 = ctx.r11.u64 | 32768;
loc_8276897C:
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
	// bl 0x82725f80
	ctx.lr = 0x82768994;
	sub_82725F80(ctx, base);
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
	// blt cr6,0x8276897c
	if (ctx.cr6.lt) goto loc_8276897C;
loc_827689AC:
	// mr r21,r30
	r21.u64 = r30.u64;
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(r30.u32, r27.u32, ctx.xer);
	// beq cr6,0x827687e0
	if (ctx.cr6.eq) goto loc_827687E0;
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 0);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lbzx r8,r30,r25
	ctx.r8.u64 = REX_LOAD_U8(r30.u32 + r25.u32);
	// rldicr r7,r10,1,62
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lbzx r28,r30,r24
	r28.u64 = REX_LOAD_U8(r30.u32 + r24.u32);
	// extsb r29,r8
	r29.s64 = ctx.r8.s8;
	// std r7,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r7.u64);
	// rldicl r27,r10,1,63
	r27.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// bge 0x827689ec
	if (!ctx.cr0.lt) goto loc_827689EC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x827689EC;
	sub_82725E38(ctx, base);
loc_827689EC:
	// lwz r10,1932(r22)
	ctx.r10.u64 = REX_LOAD_U32(r22.u32 + 1932);
	// neg r9,r27
	ctx.r9.s64 = static_cast<int64_t>(-r27.u64);
	// cmplw cr6,r30,r23
	ctx.cr6.compare<uint32_t>(r30.u32, r23.u32, ctx.xer);
	// blt cr6,0x82768a04
	if (ctx.cr6.lt) goto loc_82768A04;
	// lwz r11,24(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 24);
	// b 0x82768a08
	goto loc_82768A08;
loc_82768A04:
	// lwz r11,20(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 20);
loc_82768A08:
	// lbzx r11,r11,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + r29.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r27,r11,r28
	r27.u64 = ctx.r11.u64 + r28.u64;
	// xor r11,r29,r9
	ctx.r11.u64 = r29.u64 ^ ctx.r9.u64;
	// subf r10,r9,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r9.u64;
	// b 0x82768e74
	goto loc_82768E74;
loc_82768A20:
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 0);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r30,r10,1,63
	r30.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r8.u64);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// bge 0x82768a48
	if (!ctx.cr0.lt) goto loc_82768A48;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82768A48;
	sub_82725E38(ctx, base);
loc_82768A48:
	// subfic r11,r30,0
	ctx.xer.ca = r30.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - r30.u64;
	// lwz r9,15504(r22)
	ctx.r9.u64 = REX_LOAD_U32(r22.u32 + 15504);
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// and r21,r8,r23
	r21.u64 = ctx.r8.u64 & r23.u64;
	// blt cr6,0x82768d1c
	if (ctx.cr6.lt) goto loc_82768D1C;
	// lwz r11,1968(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 1968);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82768a7c
	if (ctx.cr6.eq) goto loc_82768A7C;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82762ce0
	ctx.lr = 0x82768A74;
	sub_82762CE0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1968(r22)
	REX_STORE_U32(r22.u32 + 1968, ctx.r11.u32);
loc_82768A7C:
	// lwz r29,84(r22)
	r29.u64 = REX_LOAD_U32(r22.u32 + 84);
	// li r28,0
	r28.s64 = 0;
	// lwz r30,1976(r22)
	r30.u64 = REX_LOAD_U32(r22.u32 + 1976);
	// cmplwi cr6,r30,32
	ctx.cr6.compare<uint32_t>(r30.u32, 32, ctx.xer);
	// lwz r10,8(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// ble cr6,0x82768aa0
	if (!ctx.cr6.gt) goto loc_82768AA0;
	// li r27,0
	r27.s64 = 0;
	// b 0x82768b4c
	goto loc_82768B4C;
loc_82768AA0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x82768ab0
	if (!ctx.cr6.eq) goto loc_82768AB0;
	// li r27,0
	r27.s64 = 0;
	// b 0x82768b4c
	goto loc_82768B4C;
loc_82768AB0:
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82768b10
	if (!ctx.cr6.gt) goto loc_82768B10;
loc_82768AB8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82768b10
	if (ctx.cr6.eq) goto loc_82768B10;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r29)
	ctx.r8.u64 = REX_LOAD_U64(r29.u32 + 0);
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
	// stw r3,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r3.u32);
	// add r28,r11,r28
	r28.u64 = ctx.r11.u64 + r28.u64;
	// std r10,0(r29)
	REX_STORE_U64(r29.u32 + 0, ctx.r10.u64);
	// bge 0x82768b00
	if (!ctx.cr0.lt) goto loc_82768B00;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82725e38
	ctx.lr = 0x82768B00;
	sub_82725E38(ctx, base);
loc_82768B00:
	// lwz r10,8(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82768ab8
	if (ctx.cr6.gt) goto loc_82768AB8;
loc_82768B10:
	// subfic r11,r30,64
	ctx.xer.ca = r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - r30.u64;
	// ld r9,0(r29)
	ctx.r9.u64 = REX_LOAD_U64(r29.u32 + 0);
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
	// stw r6,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r28
	r30.u64 = ctx.r11.u64 + r28.u64;
	// std r4,0(r29)
	REX_STORE_U64(r29.u32 + 0, ctx.r4.u64);
	// bge 0x82768b48
	if (!ctx.cr0.lt) goto loc_82768B48;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82725e38
	ctx.lr = 0x82768B48;
	sub_82725E38(ctx, base);
loc_82768B48:
	// mr r27,r30
	r27.u64 = r30.u64;
loc_82768B4C:
	// lwz r3,84(r22)
	ctx.r3.u64 = REX_LOAD_U32(r22.u32 + 84);
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
	// bge 0x82768b74
	if (!ctx.cr0.lt) goto loc_82768B74;
	// bl 0x82725e38
	ctx.lr = 0x82768B74;
	sub_82725E38(ctx, base);
loc_82768B74:
	// lwz r29,84(r22)
	r29.u64 = REX_LOAD_U32(r22.u32 + 84);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// lwz r30,1972(r22)
	r30.u64 = REX_LOAD_U32(r22.u32 + 1972);
	// li r28,0
	r28.s64 = 0;
	// lwz r10,8(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// beq cr6,0x82768c5c
	if (ctx.cr6.eq) goto loc_82768C5C;
	// cmplwi cr6,r30,32
	ctx.cr6.compare<uint32_t>(r30.u32, 32, ctx.xer);
	// ble cr6,0x82768ba4
	if (!ctx.cr6.gt) goto loc_82768BA4;
	// li r11,0
	ctx.r11.s64 = 0;
	// neg r10,r11
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// b 0x82768e74
	goto loc_82768E74;
loc_82768BA4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x82768bb8
	if (!ctx.cr6.eq) goto loc_82768BB8;
	// li r11,0
	ctx.r11.s64 = 0;
	// neg r10,r11
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// b 0x82768e74
	goto loc_82768E74;
loc_82768BB8:
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82768c18
	if (!ctx.cr6.gt) goto loc_82768C18;
loc_82768BC0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82768c18
	if (ctx.cr6.eq) goto loc_82768C18;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r29)
	ctx.r8.u64 = REX_LOAD_U64(r29.u32 + 0);
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
	// stw r3,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r3.u32);
	// add r28,r11,r28
	r28.u64 = ctx.r11.u64 + r28.u64;
	// std r10,0(r29)
	REX_STORE_U64(r29.u32 + 0, ctx.r10.u64);
	// bge 0x82768c08
	if (!ctx.cr0.lt) goto loc_82768C08;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82725e38
	ctx.lr = 0x82768C08;
	sub_82725E38(ctx, base);
loc_82768C08:
	// lwz r10,8(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82768bc0
	if (ctx.cr6.gt) goto loc_82768BC0;
loc_82768C18:
	// subfic r11,r30,64
	ctx.xer.ca = r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - r30.u64;
	// ld r9,0(r29)
	ctx.r9.u64 = REX_LOAD_U64(r29.u32 + 0);
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
	// stw r6,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r28
	r30.u64 = ctx.r11.u64 + r28.u64;
	// std r4,0(r29)
	REX_STORE_U64(r29.u32 + 0, ctx.r4.u64);
	// bge 0x82768c50
	if (!ctx.cr0.lt) goto loc_82768C50;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82725e38
	ctx.lr = 0x82768C50;
	sub_82725E38(ctx, base);
loc_82768C50:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// neg r10,r30
	ctx.r10.s64 = static_cast<int64_t>(-r30.u64);
	// b 0x82768e74
	goto loc_82768E74;
loc_82768C5C:
	// cmplwi cr6,r30,32
	ctx.cr6.compare<uint32_t>(r30.u32, 32, ctx.xer);
	// ble cr6,0x82768c6c
	if (!ctx.cr6.gt) goto loc_82768C6C;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82768e74
	goto loc_82768E74;
loc_82768C6C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x82768c7c
	if (!ctx.cr6.eq) goto loc_82768C7C;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82768e74
	goto loc_82768E74;
loc_82768C7C:
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82768cdc
	if (!ctx.cr6.gt) goto loc_82768CDC;
loc_82768C84:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82768cdc
	if (ctx.cr6.eq) goto loc_82768CDC;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r29)
	ctx.r8.u64 = REX_LOAD_U64(r29.u32 + 0);
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
	// stw r3,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r3.u32);
	// add r28,r11,r28
	r28.u64 = ctx.r11.u64 + r28.u64;
	// std r10,0(r29)
	REX_STORE_U64(r29.u32 + 0, ctx.r10.u64);
	// bge 0x82768ccc
	if (!ctx.cr0.lt) goto loc_82768CCC;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82725e38
	ctx.lr = 0x82768CCC;
	sub_82725E38(ctx, base);
loc_82768CCC:
	// lwz r10,8(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82768c84
	if (ctx.cr6.gt) goto loc_82768C84;
loc_82768CDC:
	// subfic r11,r30,64
	ctx.xer.ca = r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - r30.u64;
	// ld r9,0(r29)
	ctx.r9.u64 = REX_LOAD_U64(r29.u32 + 0);
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
	// stw r6,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r28
	r30.u64 = ctx.r11.u64 + r28.u64;
	// std r4,0(r29)
	REX_STORE_U64(r29.u32 + 0, ctx.r4.u64);
	// bge 0x82768d14
	if (!ctx.cr0.lt) goto loc_82768D14;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82725e38
	ctx.lr = 0x82768D14;
	sub_82725E38(ctx, base);
loc_82768D14:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// b 0x82768e74
	goto loc_82768E74;
loc_82768D1C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r30,6
	r30.s64 = 6;
	// li r29,0
	r29.s64 = 0;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bge cr6,0x82768d8c
	if (!ctx.cr6.lt) goto loc_82768D8C;
loc_82768D34:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82768d8c
	if (ctx.cr6.eq) goto loc_82768D8C;
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
	// bge 0x82768d7c
	if (!ctx.cr0.lt) goto loc_82768D7C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82768D7C;
	sub_82725E38(ctx, base);
loc_82768D7C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82768d34
	if (ctx.cr6.gt) goto loc_82768D34;
loc_82768D8C:
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
	// bge 0x82768dc4
	if (!ctx.cr0.lt) goto loc_82768DC4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82768DC4;
	sub_82725E38(ctx, base);
loc_82768DC4:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r27,r30
	r27.u64 = r30.u64;
	// li r30,8
	r30.s64 = 8;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bge cr6,0x82768e38
	if (!ctx.cr6.lt) goto loc_82768E38;
loc_82768DE0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82768e38
	if (ctx.cr6.eq) goto loc_82768E38;
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
	// bge 0x82768e28
	if (!ctx.cr0.lt) goto loc_82768E28;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82768E28;
	sub_82725E38(ctx, base);
loc_82768E28:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82768de0
	if (ctx.cr6.gt) goto loc_82768DE0;
loc_82768E38:
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
	// bge 0x82768e70
	if (!ctx.cr0.lt) goto loc_82768E70;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82768E70;
	sub_82725E38(ctx, base);
loc_82768E70:
	// extsb r10,r30
	ctx.r10.s64 = r30.s8;
loc_82768E74:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827687e0
	if (!ctx.cr6.eq) goto loc_827687E0;
	// lwz r11,0(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 0);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
	// stw r11,0(r15)
	REX_STORE_U32(r15.u32 + 0, ctx.r11.u32);
	// cmpwi cr6,r11,64
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 64, ctx.xer);
	// bge cr6,0x827687e0
	if (!ctx.cr6.lt) goto loc_827687E0;
	// addi r9,r18,486
	ctx.r9.s64 = r18.s64 + 486;
	// lbzx r11,r11,r19
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + r19.u32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r8,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 3;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// or r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 | ctx.r11.u64;
	// lwzx r6,r9,r22
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + r22.u32);
	// or r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 | ctx.r6.u64;
	// stwx r5,r9,r22
	REX_STORE_U32(ctx.r9.u32 + r22.u32, ctx.r5.u32);
	// blt cr6,0x82768ecc
	if (ctx.cr6.lt) goto loc_82768ECC;
	// clrlwi r9,r11,29
	ctx.r9.u64 = ctx.r11.u32 & 0x7;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82768ee0
	if (!ctx.cr6.eq) goto loc_82768EE0;
	// addi r11,r8,8
	ctx.r11.s64 = ctx.r8.s64 + 8;
loc_82768ECC:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r9,r11,r20
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + r20.u32);
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// sthx r8,r11,r20
	REX_STORE_U16(ctx.r11.u32 + r20.u32, ctx.r8.u16);
	// b 0x82768f10
	goto loc_82768F10;
loc_82768EE0:
	// lwz r9,1760(r22)
	ctx.r9.u64 = REX_LOAD_U32(r22.u32 + 1760);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82768f00
	if (!ctx.cr6.gt) goto loc_82768F00;
	// mullw r10,r10,r17
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r17.s32);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r10,r16
	ctx.r7.u64 = ctx.r10.u64 + r16.u64;
	// stwx r7,r9,r8
	REX_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r7.u32);
	// b 0x82768f10
	goto loc_82768F10;
loc_82768F00:
	// mullw r8,r10,r17
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(r17.s32);
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r6,r16,r8
	ctx.r6.u64 = ctx.r8.u64 - r16.u64;
	// stwx r6,r9,r7
	REX_STORE_U32(ctx.r9.u32 + ctx.r7.u32, ctx.r6.u32);
loc_82768F10:
	// lwz r11,0(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 0);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r15)
	REX_STORE_U32(r15.u32 + 0, ctx.r11.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1cd4
	return;
}

DEFINE_REX_FUNC(sub_827B0E40) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x827B0E48;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// vspltish v0,4
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0x4)));
	// li r9,1120
	ctx.r9.s64 = 1120;
	// addi r29,r1,112
	r29.s64 = ctx.r1.s64 + 112;
	// vspltish v1,1
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_set1_epi16(short(0x1)));
	// subf r10,r4,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r4.u64;
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// vrlh v0,v0,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i sh = simde_mm_and_si128(
			simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_set1_epi16(0xF));
		simde__m128i rsh = simde_mm_sub_epi16(simde_mm_set1_epi16(16), sh);
		simde__m128i result = simde_mm_or_si128(
			rex::ppc::simde_mm_sllv_epi16(a, sh),
			rex::ppc::simde_mm_srlv_epi16(a, rsh));
		simde_mm_store_si128((simde__m128i*)ctx.v0.u8, result);
	}
	// li r8,0
	ctx.r8.s64 = 0;
	// lvx128 v2,r6,r9
	ea = (ctx.r6.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r11,3
	ctx.r6.s64 = ctx.r11.s64 + 3;
	// addi r3,r10,-1
	ctx.r3.s64 = ctx.r10.s64 + -1;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// vsubshs v0,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// stvx128 v0,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x827af878
	ctx.lr = 0x827B0E8C;
	sub_827AF878(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// lvx128 v2,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// vspltish v1,7
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_set1_epi16(short(0x7)));
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827afcd8
	ctx.lr = 0x827B0EA4;
	sub_827AFCD8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_827B2C10) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// li r10,1104
	ctx.r10.s64 = 1104;
	// addi r9,r7,1
	ctx.r9.s64 = ctx.r7.s64 + 1;
	// rlwinm r6,r9,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lvx128 v1,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x827b1ab8
	sub_827B1AB8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_827B31F0) {
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
	// bl 0x826a1c80
	ctx.lr = 0x827B31F8;
	// stwu r1,-944(r1)
	ea = -944 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 1;
	// stw r6,988(r1)
	REX_STORE_U32(ctx.r1.u32 + 988, ctx.r6.u32);
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// stw r5,980(r1)
	REX_STORE_U32(ctx.r1.u32 + 980, ctx.r5.u32);
	// rlwinm r6,r11,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// vspltish v13,1
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x1)));
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r5,240
	ctx.r5.s64 = 240;
	// cmpwi cr6,r6,4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 4, ctx.xer);
	// beq cr6,0x827b3684
	if (ctx.cr6.eq) goto loc_827B3684;
	// cmpwi cr6,r6,8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 8, ctx.xer);
	// beq cr6,0x827b34c8
	if (ctx.cr6.eq) goto loc_827B34C8;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x827b3460
	if (!ctx.cr6.gt) goto loc_827B3460;
	// addi r11,r6,-1
	ctx.r11.s64 = ctx.r6.s64 + -1;
	// rlwinm r16,r4,1,0,30
	r16.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r15,r4,2,0,29
	r15.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// rlwinm r14,r4,3,0,28
	r14.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// li r17,-96
	r17.s64 = -96;
	// li r18,-48
	r18.s64 = -48;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r10,16
	ctx.r10.s64 = 16;
	// li r19,-80
	r19.s64 = -80;
	// li r20,-32
	r20.s64 = -32;
	// li r21,64
	r21.s64 = 64;
	// li r22,112
	r22.s64 = 112;
	// li r23,160
	r23.s64 = 160;
	// li r24,208
	r24.s64 = 208;
	// li r25,256
	r25.s64 = 256;
loc_827B3284:
	// add r8,r15,r9
	ctx.r8.u64 = r15.u64 + ctx.r9.u64;
	// lvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r7,r16,r9
	ctx.r7.u64 = r16.u64 + ctx.r9.u64;
	// lvx128 v61,r16,r9
	ea = (r16.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r31,r8,r4
	r31.u64 = ctx.r8.u64 + ctx.r4.u64;
	// lvx128 v60,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r27,r9,r4
	r27.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lvx128 v59,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r30,r31,r4
	r30.u64 = r31.u64 + ctx.r4.u64;
	// lvsl v7,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r28,r7,r4
	r28.u64 = ctx.r7.u64 + ctx.r4.u64;
	// lvx128 v62,r15,r9
	ea = (r15.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r26,r30,r4
	r26.u64 = r30.u64 + ctx.r4.u64;
	// lvx128 v55,r7,r10
	ea = (ctx.r7.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r29,r14,r9
	r29.u64 = r14.u64 + ctx.r9.u64;
	// lvsl v4,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvx128 v53,r27,r10
	ea = (r27.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v5,v63,v59,v7
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvsl v6,r0,r27
	temp.u32 = r27.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v11,v61,v55,v4
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// lvx128 v58,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v12,v60,v53,v6
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v57,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v56,r31,r4
	ea = (r31.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v25,v0,v5
	simde_mm_store_si128((simde__m128i*)v25.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v54,r30,r4
	ea = (r30.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrglb v18,v0,v5
	simde_mm_store_si128((simde__m128i*)v18.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v52,r28,r10
	ea = (r28.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v51,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v50,r31,r10
	ea = (r31.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v49,r30,r10
	ea = (r30.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v48,r26,r10
	ea = (r26.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v47,r29,r10
	ea = (r29.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v46,r14,r9
	ea = (r14.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v3,r0,r28
	temp.u32 = r28.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v2,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v1,r0,r31
	temp.u32 = r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v10,v57,v52,v3
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// lvsl v7,r0,r30
	temp.u32 = r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v9,v62,v51,v2
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// lvsl v6,r0,r26
	temp.u32 = r26.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v8,v58,v50,v1
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// lvsl v4,r0,r29
	temp.u32 = r29.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v7,v56,v49,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vperm128 v6,v54,v48,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vperm128 v4,v46,v47,v4
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vmrghb v3,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v2,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v1,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v31,v0,v9
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v30,v0,v8
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v19,v3,v25
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)v25.u16)));
	// vmrghb v29,v0,v7
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v27,v2,v3
	simde_mm_store_si128((simde__m128i*)v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vmrghb v28,v0,v6
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v26,v1,v2
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vmrghb v23,v0,v4
	simde_mm_store_si128((simde__m128i*)v23.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v24,v31,v1
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vmrglb v12,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v22,v30,v31
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)v31.u16)));
	// vmrglb v11,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v21,v29,v30
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)v30.u16)));
	// vadduhm v20,v28,v29
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v28.u16), simde_mm_load_si128((simde__m128i*)v29.u16)));
	// vmrglb v10,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v17,v23,v28
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// vmrglb v5,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v9,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v16,v27,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v15,v11,v12
	simde_mm_store_si128((simde__m128i*)v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vmrglb v8,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v7,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v14,v19,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v19.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrglb v6,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v12,v12,v18
	simde_mm_store_si128((simde__m128i*)ctx.v12.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)v18.u16)));
	// vslh v4,v26,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v3,v24,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v2,v22,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v1,v10,v11
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vslh v31,v21,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v30,v20,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v20.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v29,v17,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v28,v9,v10
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// li r9,48
	ctx.r9.s64 = 48;
	// vadduhm v27,v8,v9
	simde_mm_store_si128((simde__m128i*)v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// stvx128 v16,r11,r18
	ea = (ctx.r11.u32 + r18.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v16.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v26,v7,v8
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// li r8,96
	ctx.r8.s64 = 96;
	// vadduhm v25,v6,v7
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// li r7,144
	ctx.r7.s64 = 144;
	// vadduhm v24,v5,v6
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// li r31,192
	r31.s64 = 192;
	// vslh v23,v12,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v3,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v22,v15,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v15.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v14,r11,r17
	ea = (ctx.r11.u32 + r17.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v14.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v21,v1,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v4,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v20,v28,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v2,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v19,v27,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v31,r11,r7
	ea = (ctx.r11.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v18,v26,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v30,r11,r31
	ea = (ctx.r11.u32 + r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v17,v25,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v29,r11,r5
	ea = (ctx.r11.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v16,v24,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v23,r11,r19
	ea = (ctx.r11.u32 + r19.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v23.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v22,r11,r20
	ea = (ctx.r11.u32 + r20.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v22.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// stvx128 v21,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
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
	// stvx128 v16,r11,r25
	ea = (ctx.r11.u32 + r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v16.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,384
	ctx.r11.s64 = ctx.r11.s64 + 384;
	// bdnz 0x827b3284
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827B3284;
	// lwz r29,980(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 980);
	// lwz r28,988(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 988);
loc_827B3460:
	// addi r9,r3,16
	ctx.r9.s64 = ctx.r3.s64 + 16;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r1,48
	ctx.r3.s64 = ctx.r1.s64 + 48;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x827b3744
	if (!ctx.cr6.gt) goto loc_827B3744;
	// addi r8,r6,-1
	ctx.r8.s64 = ctx.r6.s64 + -1;
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r8,r8,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// subf r30,r10,r4
	r30.u64 = ctx.r4.u64 - ctx.r10.u64;
	// addi r7,r8,1
	ctx.r7.s64 = ctx.r8.s64 + 1;
	// subf r8,r10,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r10.u64;
	// addi r9,r3,-48
	ctx.r9.s64 = ctx.r3.s64 + -48;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_827B3494:
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
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r7,r4,r7
	ctx.r7.u64 = ctx.r4.u64 + ctx.r7.u64;
	// add r6,r31,r3
	ctx.r6.u64 = r31.u64 + ctx.r3.u64;
	// rlwinm r4,r7,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r3,r6,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// sth r4,48(r9)
	REX_STORE_U16(ctx.r9.u32 + 48, ctx.r4.u16);
	// sthu r3,96(r9)
	ea = 96 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r3.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x827b3494
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827B3494;
	// b 0x827b3744
	goto loc_827B3744;
loc_827B34C8:
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v45,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lvx128 v44,r3,r4
	ea = (ctx.r3.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,16
	ctx.r10.s64 = 16;
	// lvsl v7,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r31,r3,r4
	r31.u64 = ctx.r3.u64 + ctx.r4.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// add r7,r11,r4
	ctx.r7.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r8,r9,r4
	ctx.r8.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lvx128 v43,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v38,r31,r10
	ea = (r31.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,16
	ctx.r6.s64 = ctx.r1.s64 + 16;
	// lvsl v2,r0,r31
	temp.u32 = r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v6,v45,v43,v7
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v42,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r1,64
	r30.s64 = ctx.r1.s64 + 64;
	// lvx128 v41,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v30,v44,v38,v2
	simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// lvx128 v40,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r27,r1,112
	r27.s64 = ctx.r1.s64 + 112;
	// lvsl v5,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r11,r8,r4
	ctx.r11.u64 = ctx.r8.u64 + ctx.r4.u64;
	// lvx128 v39,r7,r10
	ea = (ctx.r7.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v31,v0,v6
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v4,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r7,r11,r4
	ctx.r7.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vperm128 v3,v42,v41,v5
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// lvx128 v34,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v1,v40,v39,v4
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// lvx128 v33,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v12,v0,v30
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v37,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v36,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r31,r1,160
	r31.s64 = ctx.r1.s64 + 160;
	// lvx128 v35,r7,r10
	ea = (ctx.r7.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v11,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v32,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v10,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v63,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v5,v12,v31
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)v31.u16)));
	// lvx128 v62,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r26,r1,208
	r26.s64 = ctx.r1.s64 + 208;
	// lvsl v7,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lvsl v6,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vadduhm v30,v11,v12
	simde_mm_store_si128((simde__m128i*)v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// lvsl v4,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v3,v62,v37,v7
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvsl v2,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v1,v36,v35,v6
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)ctx.v35.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vperm128 v31,v34,v32,v4
	simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v34.u8), simde_mm_load_si128((simde__m128i*)ctx.v32.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// vperm128 v28,v33,v63,v2
	simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v33.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// vadduhm v29,v10,v11
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vmrghb v7,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v27,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v6,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v26,v30,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v9,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r25,r1,256
	r25.s64 = ctx.r1.s64 + 256;
	// vmrghb v8,v0,v28
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v61,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v60,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r24,r1,304
	r24.s64 = ctx.r1.s64 + 304;
	// vadduhm v25,v6,v7
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// lvsl v5,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vadduhm v24,v9,v10
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// addi r23,r1,352
	r23.s64 = ctx.r1.s64 + 352;
	// vadduhm v4,v8,v9
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// stvx128 v27,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v27.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v3,v7,v8
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// stvx128 v26,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v26.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v2,v29,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vperm128 v1,v61,v60,v5
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vslh v31,v24,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// li r7,4
	ctx.r7.s64 = 4;
	// vslh v30,v4,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v29,v3,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v28,v25,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v27,v0,v1
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r3,8
	ctx.r8.s64 = ctx.r3.s64 + 8;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// stvx128 v2,r0,r27
	ea = (r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stvx128 v31,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v26,v27,v6
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// stvx128 v30,r0,r26
	ea = (r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v29,r0,r25
	ea = (r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// subf r7,r11,r4
	ctx.r7.u64 = ctx.r4.u64 - ctx.r11.u64;
	// stvx128 v28,r0,r24
	ea = (r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// subf r8,r11,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r11.u64;
	// vslh v25,v26,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v25,r0,r23
	ea = (r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_827B364C:
	// lbzx r6,r10,r7
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r7.u32);
	// lbzux r31,r8,r11
	ea = ctx.r8.u32 + ctx.r11.u32;
	r31.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// lbz r3,0(r10)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// add r6,r31,r6
	ctx.r6.u64 = r31.u64 + ctx.r6.u64;
	// add r4,r3,r4
	ctx.r4.u64 = ctx.r3.u64 + ctx.r4.u64;
	// rlwinm r3,r6,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r6,r4,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// sth r3,48(r9)
	REX_STORE_U16(ctx.r9.u32 + 48, ctx.r3.u16);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sthu r6,96(r9)
	ea = 96 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r6.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x827b364c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827B364C;
	// b 0x827b3744
	goto loc_827B3744;
loc_827B3684:
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v58,r3,r4
	ea = (ctx.r3.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r7,r4,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lvx128 v59,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lvsl v7,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// li r10,16
	ctx.r10.s64 = 16;
	// add r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 + ctx.r3.u64;
	// add r9,r3,r4
	ctx.r9.u64 = ctx.r3.u64 + ctx.r4.u64;
	// add r8,r11,r4
	ctx.r8.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lvx128 v56,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,16
	ctx.r6.s64 = ctx.r1.s64 + 16;
	// lvx128 v57,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r1,64
	ctx.r4.s64 = ctx.r1.s64 + 64;
	// lvx128 v55,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r31,r1,112
	r31.s64 = ctx.r1.s64 + 112;
	// lvx128 v54,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r1,160
	r30.s64 = ctx.r1.s64 + 160;
	// lvx128 v53,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v52,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v51,r7,r10
	ea = (ctx.r7.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v50,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v6,v59,v52,v7
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvsl v5,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v4,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v3,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v2,v58,v54,v5
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// lvsl v1,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v31,v57,v55,v4
	simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vperm128 v30,v56,v53,v3
	simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// vperm128 v29,v50,v51,v1
	simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// vmrghb v12,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v11,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v10,v0,v30
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v28,v0,v6
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v27,v0,v29
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v26,v11,v12
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vadduhm v25,v10,v11
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vadduhm v24,v12,v28
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
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
	// stvx128 v22,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v22.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v21,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v21.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v20,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v20.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v19,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v19.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_827B3744:
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// vspltish v0,4
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0x4)));
	// addi r11,r1,16
	ctx.r11.s64 = ctx.r1.s64 + 16;
	// addi r10,r1,64
	ctx.r10.s64 = ctx.r1.s64 + 64;
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// addi r7,r1,32
	ctx.r7.s64 = ctx.r1.s64 + 32;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lvx128 v6,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v4,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r1,304
	ctx.r9.s64 = ctx.r1.s64 + 304;
	// lvx128 v5,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lvx128 v7,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// lvx128 v49,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,256
	ctx.r10.s64 = ctx.r1.s64 + 256;
	// lvx128 v48,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r1,352
	ctx.r8.s64 = ctx.r1.s64 + 352;
	// vslh v12,v4,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r7,r1,320
	ctx.r7.s64 = ctx.r1.s64 + 320;
	// vslh v3,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r31,r1,224
	r31.s64 = ctx.r1.s64 + 224;
	// vslh v2,v6,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r30,r1,272
	r30.s64 = ctx.r1.s64 + 272;
	// vslh v1,v7,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r6,r1,368
	ctx.r6.s64 = ctx.r1.s64 + 368;
	// lvx128 v9,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v11,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v25,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v10,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v27,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v8,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v26,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v47,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v22,v8,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v46,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v24,v12,v4
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// lvx128 v43,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v23,v3,v5
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vsldoi128 v31,v4,v49,2
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8), 14));
	// vaddshs v21,v2,v6
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vsldoi128 v30,v5,v48,2
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8), 14));
	// vaddshs v19,v1,v7
	simde_mm_store_si128((simde__m128i*)v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vsldoi128 v29,v6,v47,2
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8), 14));
	// lvx128 v45,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsldoi128 v28,v7,v46,2
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v46.u8), 14));
	// lvx128 v44,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v42,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r4,1104
	ctx.r4.s64 = 1104;
	// vaddshs v13,v25,v9
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vsldoi128 v17,v9,v43,2
	simde_mm_store_si128((simde__m128i*)v17.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v43.u8), 14));
	// vaddshs v16,v27,v11
	simde_mm_store_si128((simde__m128i*)v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsldoi128 v20,v11,v45,2
	simde_mm_store_si128((simde__m128i*)v20.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v45.u8), 14));
	// vaddshs v14,v26,v10
	simde_mm_store_si128((simde__m128i*)v14.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vsldoi128 v18,v10,v44,2
	simde_mm_store_si128((simde__m128i*)v18.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v44.u8), 14));
	// vaddshs v9,v22,v8
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vsldoi128 v15,v8,v42,2
	simde_mm_store_si128((simde__m128i*)v15.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v42.u8), 14));
	// vaddshs v11,v24,v31
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// lvx128 v12,r28,r4
	ea = (r28.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v10,v23,v30
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v23.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// li r3,288
	ctx.r3.s64 = 288;
	// vaddshs v8,v21,v29
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v21.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
	// li r11,336
	ctx.r11.s64 = 336;
	// vaddshs v7,v19,v28
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v19.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// vaddshs v6,v16,v20
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v16.s16), simde_mm_load_si128((simde__m128i*)v20.s16)));
	// vaddshs v5,v14,v18
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v14.s16), simde_mm_load_si128((simde__m128i*)v18.s16)));
	// vaddshs v4,v13,v17
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)v17.s16)));
	// vaddshs v3,v11,v12
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vaddshs v2,v10,v12
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vaddshs v1,v9,v15
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)v15.s16)));
	// vaddshs v31,v8,v12
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vaddshs v30,v7,v12
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vaddshs v29,v6,v12
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vaddshs v28,v5,v12
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vaddshs v27,v4,v12
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vsrah v26,v3,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v25,v2,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v24,v1,v12
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vsrah v23,v31,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v22,v30,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// li r10,48
	ctx.r10.s64 = 48;
	// vsrah v21,v29,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// li r9,96
	ctx.r9.s64 = 96;
	// vsrah v20,v28,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// li r8,144
	ctx.r8.s64 = 144;
	// vsrah v19,v27,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// li r7,192
	ctx.r7.s64 = 192;
	// vsrah v18,v24,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v26,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v26.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v25,r29,r10
	ea = (r29.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v23,r29,r9
	ea = (r29.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v23.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v22,r29,r8
	ea = (r29.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v22.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v21,r29,r7
	ea = (r29.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v21.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v20,r29,r5
	ea = (r29.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v20.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v19,r29,r3
	ea = (r29.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v19.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v18,r29,r11
	ea = (r29.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v18.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r1,r1,944
	ctx.r1.s64 = ctx.r1.s64 + 944;
	// b 0x826a1cd0
	return;
}

