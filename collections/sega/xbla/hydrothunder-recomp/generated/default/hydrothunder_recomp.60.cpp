#include "hydrothunder_funcs.60.h"

DEFINE_REX_FUNC(sub_82122BA0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82122BA8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r30,r11,-15752
	r30.s64 = ctx.r11.s64 + -15752;
	// lwz r4,-15752(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + -15752);
	// bl 0x82120600
	ctx.lr = 0x82122BC8;
	sub_82120600(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82122BE4;
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
	ctx.lr = 0x82122BF8;
	sub_82120AC0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82122c2c
	if (ctx.cr6.eq) goto loc_82122C2C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82121ec8
	ctx.lr = 0x82122C0C;
	sub_82121EC8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82122c2c
	if (!ctx.cr0.eq) goto loc_82122C2C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r11,-26528
	ctx.r4.s64 = ctx.r11.s64 + -26528;
	// addi r3,r10,-26456
	ctx.r3.s64 = ctx.r10.s64 + -26456;
	// li r5,20
	ctx.r5.s64 = 20;
	// bl 0x821231d0
	ctx.lr = 0x82122C2C;
	sub_821231D0(ctx, base);
loc_82122C2C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8212ACA0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,57(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 57);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x8212acc0
	if (!ctx.cr0.eq) goto loc_8212ACC0;
	// stw r4,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
loc_8212ACC0:
	// lwz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8212ace0
	if (!ctx.cr6.eq) goto loc_8212ACE0;
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// b 0x8212acfc
	goto loc_8212ACFC;
loc_8212ACE0:
	// lwz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8212acf8
	if (!ctx.cr6.eq) goto loc_8212ACF8;
	// stw r11,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// b 0x8212acfc
	goto loc_8212ACFC;
loc_8212ACF8:
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_8212ACFC:
	// stw r4,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// stw r11,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8212DA50) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8212DA58;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x8212da7c
	if (ctx.cr6.lt) goto loc_8212DA7C;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8212da94
	if (ctx.cr6.lt) goto loc_8212DA94;
loc_8212DA7C:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r11,-23320
	ctx.r4.s64 = ctx.r11.s64 + -23320;
	// addi r3,r10,-23176
	ctx.r3.s64 = ctx.r10.s64 + -23176;
	// li r5,99
	ctx.r5.s64 = 99;
	// bl 0x821231d0
	ctx.lr = 0x8212DA94;
	sub_821231D0(ctx, base);
loc_8212DA94:
	// mulli r11,r31,720
	ctx.r11.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(720));
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// li r5,656
	ctx.r5.s64 = 656;
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8212DAAC;
	sub_826A1E70(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82130EA8) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r10,264(r31)
	REX_STORE_U8(r31.u32 + 264, ctx.r10.u8);
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,228(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 228, temp.u32);
	// bl 0x826a2e60
	ctx.lr = 0x82130EE8;
	sub_826A2E60(ctx, base);
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826a2e60
	ctx.lr = 0x82130EF8;
	sub_826A2E60(ctx, base);
	// addi r3,r31,232
	ctx.r3.s64 = r31.s64 + 232;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826a2e60
	ctx.lr = 0x82130F08;
	sub_826A2E60(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r11,r11,-8472
	ctx.r11.s64 = ctx.r11.s64 + -8472;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r11,268(r31)
	REX_STORE_U32(r31.u32 + 268, ctx.r11.u32);
	// addi r11,r9,-20636
	ctx.r11.s64 = ctx.r9.s64 + -20636;
	// addi r10,r10,-20728
	ctx.r10.s64 = ctx.r10.s64 + -20728;
	// li r30,0
	r30.s64 = 0;
	// stw r11,268(r31)
	REX_STORE_U32(r31.u32 + 268, ctx.r11.u32);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// addi r3,r31,2020
	ctx.r3.s64 = r31.s64 + 2020;
	// stw r30,2016(r31)
	REX_STORE_U32(r31.u32 + 2016, r30.u32);
	// bl 0x8212a018
	ctx.lr = 0x82130F3C;
	sub_8212A018(ctx, base);
	// addi r3,r31,272
	ctx.r3.s64 = r31.s64 + 272;
	// li r5,1744
	ctx.r5.s64 = 1744;
	// stw r30,2036(r31)
	REX_STORE_U32(r31.u32 + 2036, r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826a2e60
	ctx.lr = 0x82130F50;
	sub_826A2E60(ctx, base);
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

DEFINE_REX_FUNC(sub_82136518) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x826a1cb4
	ctx.lr = 0x82136520;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x826a2c94
	ctx.lr = 0x82136528;
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f0,108(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lfs f13,100(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// lfs f30,84(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 84);
	f30.f64 = double(temp.f32);
	// addi r9,r11,16592
	ctx.r9.s64 = ctx.r11.s64 + 16592;
	// fadds f26,f0,f13
	f26.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f13,96(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fmr f0,f30
	ctx.f0.f64 = f30.f64;
	// lfs f0,88(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,104(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r3,100
	ctx.r11.s64 = ctx.r3.s64 + 100;
	// lfs f12,112(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
	// fadds f28,f13,f0
	f28.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f10,92(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 92);
	ctx.f10.f64 = double(temp.f32);
	// fmr f27,f0
	f27.f64 = ctx.f0.f64;
	// lfs f31,15048(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	f31.f64 = double(temp.f32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f24,100(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 100);
	f24.f64 = double(temp.f32);
	// addi r11,r3,84
	ctx.r11.s64 = ctx.r3.s64 + 84;
	// lfs f0,12(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fadds f25,f12,f11
	f25.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// fadds f29,f10,f30
	f29.f64 = double(float(ctx.f10.f64 + f30.f64));
	// fcmpu cr6,f30,f31
	ctx.cr6.compare(f30.f64, f31.f64);
	// fmr f23,f11
	f23.f64 = ctx.f11.f64;
	// blt cr6,0x821365b0
	if (ctx.cr6.lt) goto loc_821365B0;
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(f30.f64, ctx.f0.f64);
	// bgt cr6,0x821365b0
	if (ctx.cr6.gt) goto loc_821365B0;
	// fcmpu cr6,f29,f31
	ctx.cr6.compare(f29.f64, f31.f64);
	// blt cr6,0x821365b0
	if (ctx.cr6.lt) goto loc_821365B0;
	// fcmpu cr6,f29,f0
	ctx.cr6.compare(f29.f64, ctx.f0.f64);
	// li r29,1
	r29.s64 = 1;
	// ble cr6,0x821365b4
	if (!ctx.cr6.gt) goto loc_821365B4;
loc_821365B0:
	// li r29,0
	r29.s64 = 0;
loc_821365B4:
	// fcmpu cr6,f27,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f27.f64, f31.f64);
	// blt cr6,0x821365d8
	if (ctx.cr6.lt) goto loc_821365D8;
	// fcmpu cr6,f27,f0
	ctx.cr6.compare(f27.f64, ctx.f0.f64);
	// bgt cr6,0x821365d8
	if (ctx.cr6.gt) goto loc_821365D8;
	// fcmpu cr6,f28,f31
	ctx.cr6.compare(f28.f64, f31.f64);
	// blt cr6,0x821365d8
	if (ctx.cr6.lt) goto loc_821365D8;
	// fcmpu cr6,f28,f0
	ctx.cr6.compare(f28.f64, ctx.f0.f64);
	// li r30,1
	r30.s64 = 1;
	// ble cr6,0x821365dc
	if (!ctx.cr6.gt) goto loc_821365DC;
loc_821365D8:
	// li r30,0
	r30.s64 = 0;
loc_821365DC:
	// lis r28,-32106
	r28.s64 = -2104098816;
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// addi r4,r31,16
	ctx.r4.s64 = r31.s64 + 16;
	// lwz r11,6096(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 6096);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82173278
	ctx.lr = 0x821365F4;
	sub_82173278(ctx, base);
	// lis r27,-32106
	r27.s64 = -2104098816;
	// lwz r11,6096(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 6096);
	// lwz r3,6092(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 6092);
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
	// lwz r4,24(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// bctrl 
	ctx.lr = 0x8213661C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 6092);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,0(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,212(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82136638;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 6092);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,216(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 216);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82136658;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 6092);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,220(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 220);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8213667C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 6092);
	// li r4,0
	ctx.r4.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,228(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 228);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82136698;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 6092);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r5,4(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,212(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821366B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 6092);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,216(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 216);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821366D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 6092);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,220(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 220);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821366F8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 6092);
	// li r4,1
	ctx.r4.s64 = 1;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,228(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 228);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82136714;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 6092);
	// stfs f24,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f24.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f23,84(r1)
	temp.f32 = float(f23.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f31,88(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// li r7,20
	ctx.r7.s64 = 20;
	// stfs f30,92(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stfs f27,96(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// stfs f24,100(r1)
	temp.f32 = float(f24.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// stfs f25,104(r1)
	temp.f32 = float(f25.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f30,112(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f28,116(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f26,120(r1)
	temp.f32 = float(f26.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f25,124(r1)
	temp.f32 = float(f25.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f31,128(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f29,132(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f28,136(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f26,140(r1)
	temp.f32 = float(f26.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f23,144(r1)
	temp.f32 = float(f23.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f31,148(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f29,152(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f27,156(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,248(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 248);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82136788;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x826a2ce0
	ctx.lr = 0x82136794;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8214C0A0) {
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
	// b 0x8214c0d0
	goto loc_8214C0D0;
loc_8214C0C0:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,36(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 36);
	// bl 0x8214c0a0
	ctx.lr = 0x8214C0CC;
	sub_8214C0A0(ctx, base);
	// lwz r31,40(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 40);
loc_8214C0D0:
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8214c0c0
	if (!ctx.cr6.eq) goto loc_8214C0C0;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214C0F4;
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

DEFINE_REX_FUNC(sub_8214FA80) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8214FA88;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,6116(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 6116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214faa4
	if (ctx.cr6.eq) goto loc_8214FAA4;
	// bl 0x8214fb28
	ctx.lr = 0x8214FAA4;
	sub_8214FB28(ctx, base);
loc_8214FAA4:
	// lbz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 36);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8214fb08
	if (ctx.cr0.eq) goto loc_8214FB08;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r11,64(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 64);
	// lwz r29,68(r10)
	r29.u64 = REX_LOAD_U32(ctx.r10.u32 + 68);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8214fb08
	if (!ctx.cr6.gt) goto loc_8214FB08;
	// addi r31,r10,12
	r31.s64 = ctx.r10.s64 + 12;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
loc_8214FAD0:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214fafc
	if (ctx.cr6.eq) goto loc_8214FAFC;
	// addi r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 + 44;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x8214faf0
	if (ctx.cr6.lt) goto loc_8214FAF0;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_8214FAF0:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r4,164(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 164);
	// bl 0x82130e88
	ctx.lr = 0x8214FAFC;
	sub_82130E88(ctx, base);
loc_8214FAFC:
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// add r31,r31,r29
	r31.u64 = r31.u64 + r29.u64;
	// bne 0x8214fad0
	if (!ctx.cr0.eq) goto loc_8214FAD0;
loc_8214FB08:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,6180(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 6180);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,96(r11)
	REX_STORE_U32(ctx.r11.u32 + 96, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82154698) {
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
	ctx.lr = 0x821546A0;
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821546d4
	if (ctx.cr6.eq) goto loc_821546D4;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r11,-10444
	ctx.r4.s64 = ctx.r11.s64 + -10444;
	// addi r3,r10,-9564
	ctx.r3.s64 = ctx.r10.s64 + -9564;
	// li r5,751
	ctx.r5.s64 = 751;
	// bl 0x821231d0
	ctx.lr = 0x821546D4;
	sub_821231D0(ctx, base);
loc_821546D4:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8215470c
	if (!ctx.cr6.gt) goto loc_8215470C;
	// li r31,0
	r31.s64 = 0;
loc_821546E8:
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + r31.u64;
	// bl 0x82153360
	ctx.lr = 0x821546F8;
	sub_82153360(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,1064
	r31.s64 = r31.s64 + 1064;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821546e8
	if (ctx.cr6.lt) goto loc_821546E8;
loc_8215470C:
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
	ctx.lr = 0x82154724;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x821547f0
	if (ctx.cr0.eq) goto loc_821547F0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82154740;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,-9988
	ctx.r4.s64 = ctx.r11.s64 + -9988;
	// bl 0x82125d00
	ctx.lr = 0x8215474C;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821547f0
	if (!ctx.cr0.eq) goto loc_821547F0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82154768;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// li r28,0
	r28.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821547f0
	if (!ctx.cr6.gt) goto loc_821547F0;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r30,0
	r30.s64 = 0;
	// addi r27,r11,-9492
	r27.s64 = ctx.r11.s64 + -9492;
	// addi r26,r10,-9508
	r26.s64 = ctx.r10.s64 + -9508;
loc_8215478C:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r5,12(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821547B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// lfs f1,1044(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1044);
	ctx.f1.f64 = double(temp.f32);
	// stfd f1,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821547DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,1064
	r30.s64 = r30.s64 + 1064;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8215478c
	if (ctx.cr6.lt) goto loc_8215478C;
loc_821547F0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8215D120) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x822f65b8
	sub_822F65B8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8215D5D0) {
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
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,400
	ctx.r10.s64 = ctx.r1.s64 + 400;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8269d1a8
	ctx.lr = 0x8215D61C;
	sub_8269D1A8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,351(r1)
	REX_STORE_U8(ctx.r1.u32 + 351, ctx.r11.u8);
	// addi r31,r31,24
	r31.s64 = r31.s64 + 24;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82121928
	ctx.lr = 0x8215D634;
	sub_82121928(ctx, base);
	// li r5,10
	ctx.r5.s64 = 10;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8212a778
	ctx.lr = 0x8215D644;
	sub_8212A778(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821605E0) {
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
	// lwz r9,24(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// blt cr6,0x82160618
	if (ctx.cr6.lt) goto loc_82160618;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_82160618:
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r5,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r5.u32);
	// bl 0x8215f0f0
	ctx.lr = 0x82160628;
	sub_8215F0F0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82160858
	ctx.lr = 0x82160634;
	sub_82160858(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8216064c
	if (!ctx.cr0.eq) goto loc_8216064C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x82160644;
	sub_8215F0F0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82160680
	goto loc_82160680;
loc_8216064C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82160728
	ctx.lr = 0x82160654;
	sub_82160728(ctx, base);
	// extsb. r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8216067c
	if (ctx.cr0.eq) goto loc_8216067C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x82160664;
	sub_8215F0F0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,18808
	ctx.r4.s64 = ctx.r11.s64 + 18808;
	// bl 0x82160698
	ctx.lr = 0x82160678;
	sub_82160698(ctx, base);
	// b 0x82160680
	goto loc_82160680;
loc_8216067C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82160680:
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

DEFINE_REX_FUNC(sub_82168F20) {
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
	ctx.lr = 0x82168F28;
	// stwu r1,-592(r1)
	ea = -592 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,612(r1)
	REX_STORE_U32(ctx.r1.u32 + 612, ctx.r3.u32);
	// li r27,0
	r27.s64 = 0;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// stw r4,620(r1)
	REX_STORE_U32(ctx.r1.u32 + 620, ctx.r4.u32);
	// stw r27,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r27.u32);
	// std r27,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, r27.u64);
	// bl 0x82160340
	ctx.lr = 0x82168F48;
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
	ctx.lr = 0x82168F60;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r11,-24868
	ctx.r5.s64 = ctx.r11.s64 + -24868;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82121610
	ctx.lr = 0x82168F74;
	sub_82121610(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82160388
	ctx.lr = 0x82168F84;
	sub_82160388(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82120ac0
	ctx.lr = 0x82168F98;
	sub_82120AC0(ctx, base);
	// clrlwi. r11,r31,24
	ctx.r11.u64 = r31.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821692ec
	if (ctx.cr0.eq) goto loc_821692EC;
	// lis r29,-32243
	r29.s64 = -2113077248;
	// lis r28,-32243
	r28.s64 = -2113077248;
	// addi r11,r29,23748
	ctx.r11.s64 = r29.s64 + 23748;
	// lis r30,-32243
	r30.s64 = -2113077248;
	// addi r29,r28,-17672
	r29.s64 = r28.s64 + -17672;
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// stw r29,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// lis r31,-32243
	r31.s64 = -2113077248;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r30,r30,23756
	r30.s64 = r30.s64 + 23756;
	// mr r17,r27
	r17.u64 = r27.u64;
	// addi r26,r10,-26856
	r26.s64 = ctx.r10.s64 + -26856;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r25,r9,23844
	r25.s64 = ctx.r9.s64 + 23844;
	// addi r24,r8,23832
	r24.s64 = ctx.r8.s64 + 23832;
	// addi r23,r7,23824
	r23.s64 = ctx.r7.s64 + 23824;
	// addi r22,r6,20272
	r22.s64 = ctx.r6.s64 + 20272;
	// addi r21,r5,23808
	r21.s64 = ctx.r5.s64 + 23808;
	// addi r20,r4,23796
	r20.s64 = ctx.r4.s64 + 23796;
	// addi r19,r3,23780
	r19.s64 = ctx.r3.s64 + 23780;
	// addi r18,r31,23768
	r18.s64 = r31.s64 + 23768;
	// addi r29,r11,-24460
	r29.s64 = ctx.r11.s64 + -24460;
loc_82169018:
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// stw r17,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r17.u32);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x82169034
	if (!ctx.cr6.eq) goto loc_82169034;
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82169038
	goto loc_82169038;
loc_82169034:
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_82169038:
	// cmpw cr6,r17,r11
	ctx.cr6.compare<int32_t>(r17.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x821692ec
	if (!ctx.cr6.lt) goto loc_821692EC;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8215f530
	ctx.lr = 0x8216904C;
	sub_8215F530(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8215f5f8
	ctx.lr = 0x82169058;
	sub_8215F5F8(ctx, base);
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8215f338
	ctx.lr = 0x82169060;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x82169064;
	sub_8215FA30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x82121610
	ctx.lr = 0x82169074;
	sub_82121610(ctx, base);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,620(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 620);
	// bl 0x82121dd0
	ctx.lr = 0x82169084;
	sub_82121DD0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82120670
	ctx.lr = 0x82169090;
	sub_82120670(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x82120ac0
	ctx.lr = 0x821690A0;
	sub_82120AC0(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x8212a538
	ctx.lr = 0x821690A8;
	sub_8212A538(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// lwz r4,112(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82120600
	ctx.lr = 0x821690B4;
	sub_82120600(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r6,r1,240
	ctx.r6.s64 = ctx.r1.s64 + 240;
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// lwz r3,6072(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6072);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821690D8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82120ac0
	ctx.lr = 0x821690E8;
	sub_82120AC0(ctx, base);
	// lwz r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r28,0(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x821692c4
	goto loc_821692C4;
loc_821690F4:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82121610
	ctx.lr = 0x82169104;
	sub_82121610(ctx, base);
	// addi r31,r28,8
	r31.s64 = r28.s64 + 8;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82121dd0
	ctx.lr = 0x82169118;
	sub_82121DD0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82120670
	ctx.lr = 0x82169124;
	sub_82120670(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82120ac0
	ctx.lr = 0x82169134;
	sub_82120AC0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82123408
	ctx.lr = 0x82169140;
	sub_82123408(ctx, base);
	// lis r31,-32106
	r31.s64 = -2104098816;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// lwz r3,6072(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6072);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216915C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bl 0x822f6338
	ctx.lr = 0x82169168;
	sub_822F6338(ctx, base);
	// lwz r11,6072(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 6072);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// lwz r11,52(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82169190;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82169294
	if (ctx.cr0.eq) goto loc_82169294;
	// stbx r27,r31,r30
	REX_STORE_U8(r31.u32 + r30.u32, r27.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8269f078
	ctx.lr = 0x821691A8;
	sub_8269F078(ctx, base);
	// mr r17,r3
	r17.u64 = ctx.r3.u64;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269f078
	ctx.lr = 0x821691B8;
	sub_8269F078(ctx, base);
	// mr r16,r3
	r16.u64 = ctx.r3.u64;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269f078
	ctx.lr = 0x821691C8;
	sub_8269F078(ctx, base);
	// mr r15,r3
	r15.u64 = ctx.r3.u64;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269f078
	ctx.lr = 0x821691D8;
	sub_8269F078(ctx, base);
	// mr r14,r3
	r14.u64 = ctx.r3.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269f078
	ctx.lr = 0x821691E8;
	sub_8269F078(ctx, base);
	// stb r27,-1(r17)
	REX_STORE_U8(r17.u32 + -1, r27.u8);
	// stb r27,-1(r16)
	REX_STORE_U8(r16.u32 + -1, r27.u8);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// stb r27,-1(r15)
	REX_STORE_U8(r15.u32 + -1, r27.u8);
	// stb r27,-1(r14)
	REX_STORE_U8(r14.u32 + -1, r27.u8);
	// stb r27,-1(r3)
	REX_STORE_U8(ctx.r3.u32 + -1, r27.u8);
	// lwz r11,612(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 612);
	// addi r30,r11,48
	r30.s64 = ctx.r11.s64 + 48;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215f670
	ctx.lr = 0x82169210;
	sub_8215F670(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82169310
	ctx.lr = 0x82169220;
	sub_82169310(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// bl 0x8215f670
	ctx.lr = 0x8216922C;
	sub_8215F670(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82169310
	ctx.lr = 0x8216923C;
	sub_82169310(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x8215f670
	ctx.lr = 0x82169248;
	sub_8215F670(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82169310
	ctx.lr = 0x82169258;
	sub_82169310(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82120600
	ctx.lr = 0x82169264;
	sub_82120600(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215f670
	ctx.lr = 0x82169270;
	sub_8215F670(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82169310
	ctx.lr = 0x82169280;
	sub_82169310(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82120ac0
	ctx.lr = 0x82169290;
	sub_82120AC0(ctx, base);
	// lwz r17,80(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_82169294:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269d6a0
	ctx.lr = 0x8216929C;
	sub_8269D6A0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82120ac0
	ctx.lr = 0x821692AC;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82120ac0
	ctx.lr = 0x821692BC;
	sub_82120AC0(ctx, base);
	// lwz r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r28,0(r28)
	r28.u64 = REX_LOAD_U32(r28.u32 + 0);
loc_821692C4:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821690f4
	if (!ctx.cr6.eq) goto loc_821690F4;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x8212a5b0
	ctx.lr = 0x821692D4;
	sub_8212A5B0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82120ac0
	ctx.lr = 0x821692E4;
	sub_82120AC0(ctx, base);
	// addi r17,r17,1
	r17.s64 = r17.s64 + 1;
	// b 0x82169018
	goto loc_82169018;
loc_821692EC:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,308
	ctx.r3.s64 = ctx.r1.s64 + 308;
	// bl 0x82120ac0
	ctx.lr = 0x821692FC;
	sub_82120AC0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8215f0f0
	ctx.lr = 0x82169304;
	sub_8215F0F0(ctx, base);
	// addi r1,r1,592
	ctx.r1.s64 = ctx.r1.s64 + 592;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_82181E98) {
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
	// bl 0x826a1cac
	ctx.lr = 0x82181EA0;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x826a2c90
	ctx.lr = 0x82181EA8;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// fsubs f25,f4,f3
	ctx.fpscr.disableFlushMode();
	f25.f64 = double(float(ctx.f4.f64 - ctx.f3.f64));
	// lfs f13,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lfs f12,8(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lfs f10,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f11,f13
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfs f8,8(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// lfs f7,4(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f10,f8
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f8.f64));
	// lfs f0,236(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 236);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f4,f7,f12
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// fmuls f0,f5,f0
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// fmr f29,f3
	f29.f64 = ctx.f3.f64;
	// fmsubs f26,f10,f7,f9
	f26.f64 = double(float(std::fma(ctx.f10.f64, ctx.f7.f64, -ctx.f9.f64)));
	// fmsubs f27,f11,f12,f6
	f27.f64 = double(float(std::fma(ctx.f11.f64, ctx.f12.f64, -ctx.f6.f64)));
	// fmsubs f28,f8,f13,f4
	f28.f64 = double(float(std::fma(ctx.f8.f64, ctx.f13.f64, -ctx.f4.f64)));
	// fdivs f0,f25,f0
	ctx.f0.f64 = double(float(f25.f64 / ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r27,84(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// bne cr6,0x82181f24
	if (!ctx.cr6.eq) goto loc_82181F24;
	// li r27,1
	r27.s64 = 1;
loc_82181F24:
	// fmr f24,f29
	ctx.fpscr.disableFlushMode();
	f24.f64 = f29.f64;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// bl 0x826a14e0
	ctx.lr = 0x82181F30;
	sub_826A14E0(ctx, base);
	// frsp f23,f1
	ctx.fpscr.disableFlushMode();
	f23.f64 = double(float(ctx.f1.f64));
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// bl 0x826a15c0
	ctx.lr = 0x82181F3C;
	sub_826A15C0(ctx, base);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// frsp f13,f1
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lfs f12,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * f31.f64));
	// lfs f11,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f31,f12
	ctx.f12.f64 = double(float(f31.f64 * ctx.f12.f64));
	// fmuls f11,f11,f31
	ctx.f11.f64 = double(float(ctx.f11.f64 * f31.f64));
	// lfs f10,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f28,f28,f30
	f28.f64 = double(float(f28.f64 * f30.f64));
	// lfs f9,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f27,f27,f30
	f27.f64 = double(float(f27.f64 * f30.f64));
	// lfs f8,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f30,f26,f30
	f30.f64 = double(float(f26.f64 * f30.f64));
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lbz r25,367(r1)
	r25.u64 = REX_LOAD_U8(ctx.r1.u32 + 367);
	// lwz r26,356(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// cmplwi r25,0
	ctx.cr0.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f26,15048(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	f26.f64 = double(temp.f32);
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f26,108(r1)
	temp.f32 = float(f26.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f11,f28,f23
	ctx.f11.f64 = double(float(f28.f64 * f23.f64));
	// fmuls f7,f27,f23
	ctx.f7.f64 = double(float(f27.f64 * f23.f64));
	// fmuls f6,f30,f23
	ctx.f6.f64 = double(float(f30.f64 * f23.f64));
	// fadds f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// fadds f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// fadds f13,f8,f13
	ctx.f13.f64 = double(float(ctx.f8.f64 + ctx.f13.f64));
	// fadds f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f0,f12,f7
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f7.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fadds f0,f13,f6
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f6.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// beq 0x82181fe8
	if (ctx.cr0.eq) goto loc_82181FE8;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82181FE8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82181FE8:
	// li r29,1
	r29.s64 = 1;
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(r27.s32, 1, ctx.xer);
	// blt cr6,0x821820e8
	if (ctx.cr6.lt) goto loc_821820E8;
	// extsw r11,r27
	ctx.r11.s64 = r27.s32;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f24,f0
	f24.f64 = double(float(ctx.f0.f64));
loc_82182008:
	// extsw r11,r29
	ctx.r11.s64 = r29.s32;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f0,f25
	ctx.f0.f64 = double(float(ctx.f0.f64 * f25.f64));
	// fdivs f0,f0,f24
	ctx.f0.f64 = double(float(ctx.f0.f64 / f24.f64));
	// fadds f23,f0,f29
	f23.f64 = double(float(ctx.f0.f64 + f29.f64));
	// fmr f1,f23
	ctx.f1.f64 = f23.f64;
	// bl 0x826a14e0
	ctx.lr = 0x82182030;
	sub_826A14E0(ctx, base);
	// frsp f22,f1
	ctx.fpscr.disableFlushMode();
	f22.f64 = double(float(ctx.f1.f64));
	// fmr f1,f23
	ctx.f1.f64 = f23.f64;
	// bl 0x826a15c0
	ctx.lr = 0x8218203C;
	sub_826A15C0(ctx, base);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// frsp f13,f1
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lfs f12,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * f31.f64));
	// lfs f11,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f31,f12
	ctx.f12.f64 = double(float(f31.f64 * ctx.f12.f64));
	// fmuls f11,f11,f31
	ctx.f11.f64 = double(float(ctx.f11.f64 * f31.f64));
	// lfs f10,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f28,f22
	ctx.f8.f64 = double(float(f28.f64 * f22.f64));
	// lfs f7,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f27,f22
	ctx.f6.f64 = double(float(f27.f64 * f22.f64));
	// fmuls f5,f30,f22
	ctx.f5.f64 = double(float(f30.f64 * f22.f64));
	// stfs f26,124(r1)
	temp.f32 = float(f26.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// fadds f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// fadds f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// fadds f13,f7,f13
	ctx.f13.f64 = double(float(ctx.f7.f64 + ctx.f13.f64));
	// fadds f0,f0,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f8.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fadds f0,f12,f6
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f6.f64));
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fadds f0,f13,f5
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f5.f64));
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bctrl 
	ctx.lr = 0x821820C4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(r29.s32, r27.s32, ctx.xer);
	// ld r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// std r9,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// std r11,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// ble cr6,0x82182008
	if (!ctx.cr6.gt) goto loc_82182008;
loc_821820E8:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x82182110
	if (ctx.cr6.eq) goto loc_82182110;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82182110;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82182110:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x826a2cdc
	ctx.lr = 0x8218211C;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_82196BA8) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x821911f8
	ctx.lr = 0x82196BC8;
	sub_821911F8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,-31392
	ctx.r11.s64 = ctx.r11.s64 + -31392;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 40, temp.u32);
	// lfs f0,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,48(r31)
	REX_STORE_U32(r31.u32 + 48, r30.u32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 44, temp.u32);
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

DEFINE_REX_FUNC(sub_8219A6B0) {
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
	ctx.lr = 0x8219A6B8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,4(r4)
	r30.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r31,4(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 4);
	// b 0x8219a6f8
	goto loc_8219A6F8;
loc_8219A6D4:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// bl 0x82120780
	ctx.lr = 0x8219A6E0;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8219a6f0
	if (!ctx.cr0.lt) goto loc_8219A6F0;
	// lwz r31,8(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 8);
	// b 0x8219a6f8
	goto loc_8219A6F8;
loc_8219A6F0:
	// mr r30,r31
	r30.u64 = r31.u64;
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_8219A6F8:
	// lbz r11,73(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 73);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8219a6d4
	if (ctx.cr0.eq) goto loc_8219A6D4;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8219a730
	if (ctx.cr6.eq) goto loc_8219A730;
	// addi r4,r30,12
	ctx.r4.s64 = r30.s64 + 12;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82120780
	ctx.lr = 0x8219A720;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8219a730
	if (ctx.cr0.lt) goto loc_8219A730;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// b 0x8219a73c
	goto loc_8219A73C;
loc_8219A730:
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 4);
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_8219A73C:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8219DEF8) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,80(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r11,48(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8219DF2C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82167538
	ctx.lr = 0x8219DF38;
	sub_82167538(ctx, base);
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

DEFINE_REX_FUNC(sub_821A05E0) {
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
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x822f6280
	ctx.lr = 0x821A05F4;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821a0604
	if (ctx.cr0.eq) goto loc_821A0604;
	// bl 0x821a0630
	ctx.lr = 0x821A0600;
	sub_821A0630(ctx, base);
	// b 0x821a0608
	goto loc_821A0608;
loc_821A0604:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821A0608:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821A1E68) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821A21F8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x821A2200;
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r31,0
	r31.s64 = 0;
	// li r3,52
	ctx.r3.s64 = 52;
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// bl 0x822f6280
	ctx.lr = 0x821A2218;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821a2248
	if (ctx.cr0.eq) goto loc_821A2248;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r4,r11,-28052
	ctx.r4.s64 = ctx.r11.s64 + -28052;
	// bl 0x82120600
	ctx.lr = 0x821A2230;
	sub_82120600(ctx, base);
	// addi r5,r30,64
	ctx.r5.s64 = r30.s64 + 64;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r31,1
	r31.s64 = 1;
	// bl 0x82196ba8
	ctx.lr = 0x821A2244;
	sub_82196BA8(ctx, base);
	// b 0x821a224c
	goto loc_821A224C;
loc_821A2248:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821A224C:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// addi r3,r11,80
	ctx.r3.s64 = ctx.r11.s64 + 80;
	// bl 0x82145710
	ctx.lr = 0x821A2260;
	sub_82145710(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x821a2538
	ctx.lr = 0x821A226C;
	sub_821A2538(ctx, base);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821a2288
	if (ctx.cr0.eq) goto loc_821A2288;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// rlwinm r31,r31,0,0,30
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// bl 0x82120ac0
	ctx.lr = 0x821A2288;
	sub_82120AC0(ctx, base);
loc_821A2288:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x821A2290;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821a22c0
	if (ctx.cr0.eq) goto loc_821A22C0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,-28036
	ctx.r4.s64 = ctx.r11.s64 + -28036;
	// bl 0x82120600
	ctx.lr = 0x821A22A8;
	sub_82120600(ctx, base);
	// addi r5,r30,68
	ctx.r5.s64 = r30.s64 + 68;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r31,r31,2
	r31.u64 = r31.u64 | 2;
	// bl 0x82196ba8
	ctx.lr = 0x821A22BC;
	sub_82196BA8(ctx, base);
	// b 0x821a22c4
	goto loc_821A22C4;
loc_821A22C0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821A22C4:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// addi r3,r11,80
	ctx.r3.s64 = ctx.r11.s64 + 80;
	// bl 0x82145710
	ctx.lr = 0x821A22D8;
	sub_82145710(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x821a2538
	ctx.lr = 0x821A22E4;
	sub_821A2538(ctx, base);
	// rlwinm. r11,r31,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821a2300
	if (ctx.cr0.eq) goto loc_821A2300;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// rlwinm r31,r31,0,31,29
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// bl 0x82120ac0
	ctx.lr = 0x821A2300;
	sub_82120AC0(ctx, base);
loc_821A2300:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x821A2308;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821a2338
	if (ctx.cr0.eq) goto loc_821A2338;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-28020
	ctx.r4.s64 = ctx.r11.s64 + -28020;
	// bl 0x82120600
	ctx.lr = 0x821A2320;
	sub_82120600(ctx, base);
	// addi r5,r30,72
	ctx.r5.s64 = r30.s64 + 72;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r31,r31,4
	r31.u64 = r31.u64 | 4;
	// bl 0x82196ba8
	ctx.lr = 0x821A2334;
	sub_82196BA8(ctx, base);
	// b 0x821a233c
	goto loc_821A233C;
loc_821A2338:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821A233C:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// addi r3,r11,80
	ctx.r3.s64 = ctx.r11.s64 + 80;
	// bl 0x82145710
	ctx.lr = 0x821A2350;
	sub_82145710(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x821a2538
	ctx.lr = 0x821A235C;
	sub_821A2538(ctx, base);
	// rlwinm. r11,r31,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821a2378
	if (ctx.cr0.eq) goto loc_821A2378;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rlwinm r31,r31,0,30,28
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// bl 0x82120ac0
	ctx.lr = 0x821A2378;
	sub_82120AC0(ctx, base);
loc_821A2378:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x821A2380;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821a23b0
	if (ctx.cr0.eq) goto loc_821A23B0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-28004
	ctx.r4.s64 = ctx.r11.s64 + -28004;
	// bl 0x82120600
	ctx.lr = 0x821A2398;
	sub_82120600(ctx, base);
	// addi r5,r30,80
	ctx.r5.s64 = r30.s64 + 80;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r31,r31,8
	r31.u64 = r31.u64 | 8;
	// bl 0x8219e1a0
	ctx.lr = 0x821A23AC;
	sub_8219E1A0(ctx, base);
	// b 0x821a23b4
	goto loc_821A23B4;
loc_821A23B0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821A23B4:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// addi r3,r11,80
	ctx.r3.s64 = ctx.r11.s64 + 80;
	// bl 0x82145710
	ctx.lr = 0x821A23C8;
	sub_82145710(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x821a2538
	ctx.lr = 0x821A23D4;
	sub_821A2538(ctx, base);
	// rlwinm. r11,r31,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821a23f0
	if (ctx.cr0.eq) goto loc_821A23F0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// rlwinm r31,r31,0,29,27
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// bl 0x82120ac0
	ctx.lr = 0x821A23F0;
	sub_82120AC0(ctx, base);
loc_821A23F0:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x821A23F8;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821a2428
	if (ctx.cr0.eq) goto loc_821A2428;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,-27988
	ctx.r4.s64 = ctx.r11.s64 + -27988;
	// bl 0x82120600
	ctx.lr = 0x821A2410;
	sub_82120600(ctx, base);
	// addi r5,r30,84
	ctx.r5.s64 = r30.s64 + 84;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r31,r31,16
	r31.u64 = r31.u64 | 16;
	// bl 0x8219e1a0
	ctx.lr = 0x821A2424;
	sub_8219E1A0(ctx, base);
	// b 0x821a242c
	goto loc_821A242C;
loc_821A2428:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821A242C:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// addi r3,r11,80
	ctx.r3.s64 = ctx.r11.s64 + 80;
	// bl 0x82145710
	ctx.lr = 0x821A2440;
	sub_82145710(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x821a2538
	ctx.lr = 0x821A244C;
	sub_821A2538(ctx, base);
	// rlwinm. r11,r31,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821a2468
	if (ctx.cr0.eq) goto loc_821A2468;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// rlwinm r31,r31,0,28,26
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// bl 0x82120ac0
	ctx.lr = 0x821A2468;
	sub_82120AC0(ctx, base);
loc_821A2468:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x821A2470;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821a24a0
	if (ctx.cr0.eq) goto loc_821A24A0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r4,r11,-27972
	ctx.r4.s64 = ctx.r11.s64 + -27972;
	// bl 0x82120600
	ctx.lr = 0x821A2488;
	sub_82120600(ctx, base);
	// addi r5,r30,88
	ctx.r5.s64 = r30.s64 + 88;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r31,r31,32
	r31.u64 = r31.u64 | 32;
	// bl 0x8219e1a0
	ctx.lr = 0x821A249C;
	sub_8219E1A0(ctx, base);
	// b 0x821a24a4
	goto loc_821A24A4;
loc_821A24A0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821A24A4:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// addi r3,r11,80
	ctx.r3.s64 = ctx.r11.s64 + 80;
	// bl 0x82145710
	ctx.lr = 0x821A24B8;
	sub_82145710(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x821a2538
	ctx.lr = 0x821A24C4;
	sub_821A2538(ctx, base);
	// rlwinm. r11,r31,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821a24dc
	if (ctx.cr0.eq) goto loc_821A24DC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82120ac0
	ctx.lr = 0x821A24DC;
	sub_82120AC0(ctx, base);
loc_821A24DC:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_821B4F00) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x821B4F08;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,72
	ctx.r10.s64 = ctx.r1.s64 + 72;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821B4F20:
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x821b4f20
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821B4F20;
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,136
	ctx.r10.s64 = ctx.r1.s64 + 136;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821B4F38:
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x821b4f38
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821B4F38;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821b4de0
	ctx.lr = 0x821B4F50;
	sub_821B4DE0(ctx, base);
	// lis r29,-32106
	r29.s64 = -2104098816;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r30,124
	ctx.r4.s64 = r30.s64 + 124;
	// lwz r3,6168(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6168);
	// bl 0x82149510
	ctx.lr = 0x821B4F64;
	sub_82149510(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r3,152(r30)
	REX_STORE_U32(r30.u32 + 152, ctx.r3.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r3,96
	ctx.r3.s64 = ctx.r3.s64 + 96;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x826a1e70
	ctx.lr = 0x821B4F7C;
	sub_826A1E70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821840d8
	ctx.lr = 0x821B4F84;
	sub_821840D8(ctx, base);
	// lwz r29,6168(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 6168);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82149f18
	ctx.lr = 0x821B4F94;
	sub_82149F18(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82149e08
	ctx.lr = 0x821B4FA0;
	sub_82149E08(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f0,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,152(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 152);
	// stfs f0,76(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 76, temp.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_821BA500) {
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
	// bl 0x821ba550
	ctx.lr = 0x821BA520;
	sub_821BA550(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821ba530
	if (ctx.cr0.eq) goto loc_821BA530;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x821BA530;
	sub_8269CE98(ctx, base);
loc_821BA530:
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

DEFINE_REX_FUNC(sub_821BBFA8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x821BBFB0;
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-19228
	ctx.r4.s64 = ctx.r11.s64 + -19228;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x82120600
	ctx.lr = 0x821BBFD0;
	sub_82120600(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,112(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 112);
	// bl 0x821dd040
	ctx.lr = 0x821BBFDC;
	sub_821DD040(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r28,0
	r28.s64 = 0;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stw r28,320(r1)
	REX_STORE_U32(ctx.r1.u32 + 320, r28.u32);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821BC004;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x821BC014;
	sub_82120AC0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x821bc0bc
	if (!ctx.cr6.eq) goto loc_821BC0BC;
	// lbz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 84);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821bc070
	if (ctx.cr0.eq) goto loc_821BC070;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,-19220
	ctx.r4.s64 = ctx.r11.s64 + -19220;
	// bl 0x82120600
	ctx.lr = 0x821BC03C;
	sub_82120600(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lwz r3,112(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 112);
	// bl 0x821dd040
	ctx.lr = 0x821BC048;
	sub_821DD040(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
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
	ctx.lr = 0x821BC068;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// b 0x821bc0b0
	goto loc_821BC0B0;
loc_821BC070:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-19212
	ctx.r4.s64 = ctx.r11.s64 + -19212;
	// bl 0x82120600
	ctx.lr = 0x821BC080;
	sub_82120600(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r3,112(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 112);
	// bl 0x821dd040
	ctx.lr = 0x821BC08C;
	sub_821DD040(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
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
	ctx.lr = 0x821BC0AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
loc_821BC0B0:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82120ac0
	ctx.lr = 0x821BC0BC;
	sub_82120AC0(ctx, base);
loc_821BC0BC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r28,0(r29)
	REX_STORE_U32(r29.u32 + 0, r28.u32);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_821C31EC) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821C3258) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-14836
	ctx.r3.s64 = ctx.r11.s64 + -14836;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821C3660) {
	REX_FUNC_PROLOGUE();
	// lwz r3,112(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 112);
	// b 0x82191520
	sub_82191520(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821C3B58) {
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
	ctx.lr = 0x821C3B60;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r4,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r8,r11,16592
	ctx.r8.s64 = ctx.r11.s64 + 16592;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// lfs f0,12(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lfs f13,8(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r6,-23760
	ctx.r8.s64 = ctx.r6.s64 + -23760;
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stw r8,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r3,0(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r27,4(r9)
	r27.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,8(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r28,r10,14120
	r28.s64 = ctx.r10.s64 + 14120;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r10,8(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r5,12(r7)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 12);
	// li r30,0
	r30.s64 = 0;
	// lwz r4,0(r7)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r9,12(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// lwz r8,4(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// stw r6,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r6.u32);
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
	// stw r30,16(r31)
	REX_STORE_U32(r31.u32 + 16, r30.u32);
	// stw r30,20(r31)
	REX_STORE_U32(r31.u32 + 20, r30.u32);
	// stw r3,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r3.u32);
	// stw r27,36(r31)
	REX_STORE_U32(r31.u32 + 36, r27.u32);
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
	// stw r10,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r10.u32);
	// stw r5,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r5.u32);
	// stw r4,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r4.u32);
	// stw r9,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r9.u32);
	// stw r8,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r8.u32);
	// beq cr6,0x821c3c48
	if (ctx.cr6.eq) goto loc_821C3C48;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822f6280
	ctx.lr = 0x821C3C24;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821c3c44
	if (ctx.cr0.eq) goto loc_821C3C44;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r29,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r29.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r28,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r28.u32);
	// addi r11,r11,-29688
	ctx.r11.s64 = ctx.r11.s64 + -29688;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_821C3C44:
	// stw r30,16(r31)
	REX_STORE_U32(r31.u32 + 16, r30.u32);
loc_821C3C48:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_821CB510) {
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
	// lwz r3,180(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 180);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821cb548
	if (ctx.cr6.eq) goto loc_821CB548;
	// lbz r11,184(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 184);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821cb548
	if (ctx.cr0.eq) goto loc_821CB548;
	// bl 0x8232fd48
	ctx.lr = 0x821CB540;
	sub_8232FD48(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,184(r31)
	REX_STORE_U8(r31.u32 + 184, ctx.r11.u8);
loc_821CB548:
	// lwz r3,180(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 180);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821cb558
	if (ctx.cr6.eq) goto loc_821CB558;
	// bl 0x8232fc60
	ctx.lr = 0x821CB558;
	sub_8232FC60(ctx, base);
loc_821CB558:
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

DEFINE_REX_FUNC(sub_821CEC40) {
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
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwz r3,6192(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6192);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821CEC74;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,128(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 128);
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// ble cr6,0x821cec9c
	if (!ctx.cr6.gt) goto loc_821CEC9C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821cec9c
	if (!ctx.cr6.eq) goto loc_821CEC9C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821b2d80
	ctx.lr = 0x821CEC9C;
	sub_821B2D80(ctx, base);
loc_821CEC9C:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,6208(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6208);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821CECB8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_821D5278) {
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
	// bl 0x826a2ca8
	ctx.lr = 0x821D5290;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,136
	ctx.r10.s64 = ctx.r1.s64 + 136;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// addi r9,r4,-8
	ctx.r9.s64 = ctx.r4.s64 + -8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821D52AC:
	// ldu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r9.u32 = ea;
	// stdu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x821d52ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821D52AC;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8216ab58
	ctx.lr = 0x821D52C0;
	sub_8216AB58(ctx, base);
	// lfs f11,148(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,152(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f10.f64 = double(temp.f32);
	// fneg f5,f11
	ctx.f5.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// lfs f0,196(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f0.f64 = double(temp.f32);
	// fneg f4,f10
	ctx.f4.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// lfs f9,144(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f9.f64 = double(temp.f32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lfs f13,200(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f13.f64 = double(temp.f32);
	// fneg f3,f9
	ctx.f3.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// stfs f5,84(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r8,r31,16
	ctx.r8.s64 = r31.s64 + 16;
	// stfs f4,88(r1)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stfs f3,80(r1)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lfs f12,192(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f12.f64 = double(temp.f32);
	// stfs f10,104(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f11,100(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f9,96(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f8,164(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,168(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f7.f64 = double(temp.f32);
	// fneg f2,f8
	ctx.f2.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// lfs f6,160(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f6.f64 = double(temp.f32);
	// fneg f1,f7
	ctx.f1.u64 = ctx.f7.u64 ^ 0x8000000000000000;
	// fneg f31,f6
	f31.u64 = ctx.f6.u64 ^ 0x8000000000000000;
	// stfs f2,116(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f1,120(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f31,112(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f6,128(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f8,132(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lfs f30,16(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 16);
	f30.f64 = double(temp.f32);
	// fmuls f29,f11,f30
	f29.f64 = double(float(ctx.f11.f64 * f30.f64));
	// stfs f7,136(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fmuls f28,f10,f30
	f28.f64 = double(float(ctx.f10.f64 * f30.f64));
	// fmuls f30,f9,f30
	f30.f64 = double(float(ctx.f9.f64 * f30.f64));
	// fadds f29,f0,f29
	f29.f64 = double(float(ctx.f0.f64 + f29.f64));
	// fadds f28,f13,f28
	f28.f64 = double(float(ctx.f13.f64 + f28.f64));
	// fadds f30,f12,f30
	f30.f64 = double(float(ctx.f12.f64 + f30.f64));
	// fmuls f5,f5,f29
	ctx.f5.f64 = double(float(ctx.f5.f64 * f29.f64));
	// fmadds f5,f4,f28,f5
	ctx.f5.f64 = double(float(std::fma(ctx.f4.f64, f28.f64, ctx.f5.f64)));
	// fnmadds f5,f3,f30,f5
	ctx.f5.f64 = double(float(-std::fma(ctx.f3.f64, f30.f64, ctx.f5.f64)));
	// stfs f5,92(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// ld r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// ld r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// std r11,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r11.u64);
	// std r8,8(r31)
	REX_STORE_U64(r31.u32 + 8, ctx.r8.u64);
	// lfs f5,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f10,f5
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f5.f64));
	// fmuls f3,f11,f5
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f5.f64));
	// fadds f4,f13,f4
	ctx.f4.f64 = double(float(ctx.f13.f64 + ctx.f4.f64));
	// fmuls f5,f5,f9
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f9.f64));
	// fadds f3,f0,f3
	ctx.f3.f64 = double(float(ctx.f0.f64 + ctx.f3.f64));
	// fmuls f10,f4,f10
	ctx.f10.f64 = double(float(ctx.f4.f64 * ctx.f10.f64));
	// fadds f5,f12,f5
	ctx.f5.f64 = double(float(ctx.f12.f64 + ctx.f5.f64));
	// fmadds f11,f3,f11,f10
	ctx.f11.f64 = double(float(std::fma(ctx.f3.f64, ctx.f11.f64, ctx.f10.f64)));
	// fnmadds f11,f5,f9,f11
	ctx.f11.f64 = double(float(-std::fma(ctx.f5.f64, ctx.f9.f64, ctx.f11.f64)));
	// stfs f11,108(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// ld r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// ld r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// std r11,24(r31)
	REX_STORE_U64(r31.u32 + 24, ctx.r11.u64);
	// std r10,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r10.u64);
	// lfs f11,20(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f8,f11
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// fmuls f9,f7,f11
	ctx.f9.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// fadds f10,f0,f10
	ctx.f10.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// fmuls f11,f6,f11
	ctx.f11.f64 = double(float(ctx.f6.f64 * ctx.f11.f64));
	// fadds f9,f13,f9
	ctx.f9.f64 = double(float(ctx.f13.f64 + ctx.f9.f64));
	// fmuls f10,f2,f10
	ctx.f10.f64 = double(float(ctx.f2.f64 * ctx.f10.f64));
	// fadds f11,f12,f11
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// fmadds f10,f1,f9,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f1.f64, ctx.f9.f64, ctx.f10.f64)));
	// fnmadds f11,f31,f11,f10
	ctx.f11.f64 = double(float(-std::fma(f31.f64, ctx.f11.f64, ctx.f10.f64)));
	// stfs f11,124(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// ld r10,8(r9)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// ld r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// std r11,32(r31)
	REX_STORE_U64(r31.u32 + 32, ctx.r11.u64);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// std r10,40(r31)
	REX_STORE_U64(r31.u32 + 40, ctx.r10.u64);
	// lfs f9,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f5,f7,f9
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f9.f64));
	// fmuls f4,f6,f9
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f9.f64));
	// lfs f11,180(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f11.f64 = double(temp.f32);
	// fadds f5,f13,f5
	ctx.f5.f64 = double(float(ctx.f13.f64 + ctx.f5.f64));
	// lfs f10,184(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f3,f8,f9
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// lfs f9,176(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f9.f64 = double(temp.f32);
	// fneg f2,f11
	ctx.f2.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// stfs f2,116(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fneg f1,f10
	ctx.f1.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// stfs f1,120(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fneg f31,f9
	f31.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// stfs f31,112(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// stfs f9,96(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f11,100(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// stfs f10,104(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// li r8,6
	ctx.r8.s64 = 6;
	// fadds f4,f12,f4
	ctx.f4.f64 = double(float(ctx.f12.f64 + ctx.f4.f64));
	// fmuls f7,f7,f5
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f5.f64));
	// fadds f3,f0,f3
	ctx.f3.f64 = double(float(ctx.f0.f64 + ctx.f3.f64));
	// fmadds f7,f6,f4,f7
	ctx.f7.f64 = double(float(std::fma(ctx.f6.f64, ctx.f4.f64, ctx.f7.f64)));
	// fnmadds f8,f8,f3,f7
	ctx.f8.f64 = double(float(-std::fma(ctx.f8.f64, ctx.f3.f64, ctx.f7.f64)));
	// stfs f8,140(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// ld r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// ld r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// std r11,48(r31)
	REX_STORE_U64(r31.u32 + 48, ctx.r11.u64);
	// std r7,56(r31)
	REX_STORE_U64(r31.u32 + 56, ctx.r7.u64);
	// lfs f8,24(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f11,f8
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f8.f64));
	// fmuls f6,f10,f8
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f8.f64));
	// fadds f7,f0,f7
	ctx.f7.f64 = double(float(ctx.f0.f64 + ctx.f7.f64));
	// fmuls f8,f9,f8
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f8.f64));
	// fadds f6,f13,f6
	ctx.f6.f64 = double(float(ctx.f13.f64 + ctx.f6.f64));
	// fmuls f7,f2,f7
	ctx.f7.f64 = double(float(ctx.f2.f64 * ctx.f7.f64));
	// fadds f8,f12,f8
	ctx.f8.f64 = double(float(ctx.f12.f64 + ctx.f8.f64));
	// fmadds f7,f1,f6,f7
	ctx.f7.f64 = double(float(std::fma(ctx.f1.f64, ctx.f6.f64, ctx.f7.f64)));
	// fnmadds f8,f31,f8,f7
	ctx.f8.f64 = double(float(-std::fma(f31.f64, ctx.f8.f64, ctx.f7.f64)));
	// stfs f8,124(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// ld r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// std r11,72(r31)
	REX_STORE_U64(r31.u32 + 72, ctx.r11.u64);
	// ld r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// std r11,64(r31)
	REX_STORE_U64(r31.u32 + 64, ctx.r11.u64);
	// lfs f8,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f10,f8
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f8.f64));
	// fmuls f6,f9,f8
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f8.f64));
	// stw r8,192(r31)
	REX_STORE_U32(r31.u32 + 192, ctx.r8.u32);
	// fadds f13,f13,f7
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f7.f64));
	// fmuls f8,f11,f8
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f8.f64));
	// fadds f12,f12,f6
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f6.f64));
	// fmuls f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fadds f0,f0,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f8.f64));
	// fmadds f13,f9,f12,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f9.f64, ctx.f12.f64, ctx.f13.f64)));
	// fnmadds f0,f11,f0,f13
	ctx.f0.f64 = double(float(-std::fma(ctx.f11.f64, ctx.f0.f64, ctx.f13.f64)));
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// ld r10,8(r9)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// ld r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// std r11,80(r31)
	REX_STORE_U64(r31.u32 + 80, ctx.r11.u64);
	// std r10,88(r31)
	REX_STORE_U64(r31.u32 + 88, ctx.r10.u64);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x826a2cf4
	ctx.lr = 0x821D54F4;
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

DEFINE_REX_FUNC(sub_821E9EC0) {
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
	// lwz r11,100(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 100);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e9ef4
	if (ctx.cr6.eq) goto loc_821E9EF4;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// addi r4,r10,22808
	ctx.r4.s64 = ctx.r10.s64 + 22808;
	// bl 0x8215f338
	ctx.lr = 0x821E9EF0;
	sub_8215F338(ctx, base);
	// b 0x821e9efc
	goto loc_821E9EFC;
loc_821E9EF4:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r3,r11,1008
	ctx.r3.s64 = ctx.r11.s64 + 1008;
loc_821E9EFC:
	// lwz r4,96(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 96);
	// bl 0x8215f2d0
	ctx.lr = 0x821E9F04;
	sub_8215F2D0(ctx, base);
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

DEFINE_REX_FUNC(sub_821EBF28) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x821EBF30;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r3,48
	ctx.r4.s64 = ctx.r3.s64 + 48;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x823fbf60
	ctx.lr = 0x821EBF48;
	sub_823FBF60(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,72
	ctx.r10.s64 = ctx.r1.s64 + 72;
	// addi r9,r3,-8
	ctx.r9.s64 = ctx.r3.s64 + -8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821EBF58:
	// ldu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r9.u32 = ea;
	// stdu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x821ebf58
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821EBF58;
	// lwz r11,112(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ebf84
	if (ctx.cr6.eq) goto loc_821EBF84;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,64
	ctx.r4.s64 = ctx.r11.s64 + 64;
	// bl 0x82176380
	ctx.lr = 0x821EBF84;
	sub_82176380(ctx, base);
loc_821EBF84:
	// lwz r11,116(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 116);
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x821ebfa8
	goto loc_821EBFA8;
loc_821EBF90:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x821ebf28
	ctx.lr = 0x821EBFA0;
	sub_821EBF28(ctx, base);
	// lwz r11,116(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 116);
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_821EBFA8:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821ebf90
	if (!ctx.cr6.eq) goto loc_821EBF90;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_821F46D8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x821F46E0;
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
	// beq cr6,0x821f4714
	if (ctx.cr6.eq) goto loc_821F4714;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r4,r11,22816
	ctx.r4.s64 = ctx.r11.s64 + 22816;
	// addi r3,r10,22864
	ctx.r3.s64 = ctx.r10.s64 + 22864;
	// li r5,122
	ctx.r5.s64 = 122;
	// bl 0x821231d0
	ctx.lr = 0x821F4714;
	sub_821231D0(ctx, base);
loc_821F4714:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r10,22808
	ctx.r4.s64 = ctx.r10.s64 + 22808;
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// bl 0x8215f338
	ctx.lr = 0x821F4728;
	sub_8215F338(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,22948
	ctx.r4.s64 = ctx.r11.s64 + 22948;
	// bl 0x8215f338
	ctx.lr = 0x821F4734;
	sub_8215F338(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x821f6130
	ctx.lr = 0x821F4740;
	sub_821F6130(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_821F5F28) {
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
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,23344
	ctx.r4.s64 = ctx.r11.s64 + 23344;
	// bl 0x82120600
	ctx.lr = 0x821F5F4C;
	sub_82120600(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,6040(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6040);
	// bl 0x82180e18
	ctx.lr = 0x821F5F5C;
	sub_82180E18(ctx, base);
	// stw r3,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x821F5F70;
	sub_82120AC0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821f5f84
	if (!ctx.cr6.eq) goto loc_821F5F84;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821f5f90
	goto loc_821F5F90;
loc_821F5F84:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
loc_821F5F90:
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

DEFINE_REX_FUNC(sub_821F9510) {
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
	ctx.lr = 0x821F9518;
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -72, f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,24536
	ctx.r4.s64 = ctx.r11.s64 + 24536;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// mr r29,r8
	r29.u64 = ctx.r8.u64;
	// mr r28,r9
	r28.u64 = ctx.r9.u64;
	// bl 0x82120600
	ctx.lr = 0x821F954C;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,17424
	ctx.r4.s64 = ctx.r11.s64 + 17424;
	// bl 0x82120600
	ctx.lr = 0x821F955C;
	sub_82120600(ctx, base);
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821facf8
	ctx.lr = 0x821F9578;
	sub_821FACF8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x821F958C;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82120ac0
	ctx.lr = 0x821F959C;
	sub_82120AC0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821f95b0
	if (!ctx.cr6.eq) goto loc_821F95B0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821f9634
	goto loc_821F9634;
loc_821F95B0:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,24544
	ctx.r4.s64 = ctx.r11.s64 + 24544;
	// bl 0x8215f338
	ctx.lr = 0x821F95C0;
	sub_8215F338(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8215fb00
	ctx.lr = 0x821F95C8;
	sub_8215FB00(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821f95dc
	if (!ctx.cr0.eq) goto loc_821F95DC;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
loc_821F95DC:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,24552
	ctx.r4.s64 = ctx.r11.s64 + 24552;
	// bl 0x8215f338
	ctx.lr = 0x821F95EC;
	sub_8215F338(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8215fb50
	ctx.lr = 0x821F95F4;
	sub_8215FB50(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// clrlwi. r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lfs f31,172(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 172);
	f31.f64 = double(temp.f32);
	// bne 0x821f960c
	if (!ctx.cr0.eq) goto loc_821F960C;
	// stfs f31,0(r29)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r29.u32 + 0, temp.u32);
loc_821F960C:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,24564
	ctx.r4.s64 = ctx.r11.s64 + 24564;
	// bl 0x8215f338
	ctx.lr = 0x821F961C;
	sub_8215F338(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8215fb50
	ctx.lr = 0x821F9624;
	sub_8215FB50(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821f9630
	if (!ctx.cr0.eq) goto loc_821F9630;
	// stfs f31,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r28.u32 + 0, temp.u32);
loc_821F9630:
	// li r3,1
	ctx.r3.s64 = 1;
loc_821F9634:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_82200970) {
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
	// addi r11,r11,29524
	ctx.r11.s64 = ctx.r11.s64 + 29524;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x8220099c
	if (ctx.cr0.eq) goto loc_8220099C;
	// bl 0x8269ce98
	ctx.lr = 0x8220099C;
	sub_8269CE98(ctx, base);
loc_8220099C:
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

DEFINE_REX_FUNC(sub_82203398) {
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
	ctx.lr = 0x822033A0;
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,29636
	ctx.r4.s64 = ctx.r11.s64 + 29636;
	// bl 0x82120600
	ctx.lr = 0x822033B8;
	sub_82120600(ctx, base);
	// lis r14,-32106
	r14.s64 = -2104098816;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,6040(r14)
	ctx.r3.u64 = REX_LOAD_U32(r14.u32 + 6040);
	// bl 0x82180e18
	ctx.lr = 0x822033C8;
	sub_82180E18(ctx, base);
	// mr r15,r3
	r15.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x822033DC;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r15,96
	ctx.r3.s64 = r15.s64 + 96;
	// addi r4,r11,22808
	ctx.r4.s64 = ctx.r11.s64 + 22808;
	// bl 0x8215f338
	ctx.lr = 0x822033EC;
	sub_8215F338(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// addi r30,r11,29648
	r30.s64 = ctx.r11.s64 + 29648;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8215f338
	ctx.lr = 0x82203400;
	sub_8215F338(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,-15668
	ctx.r4.s64 = ctx.r11.s64 + -15668;
	// bl 0x8215f338
	ctx.lr = 0x8220340C;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x82203410;
	sub_8215FA30(ctx, base);
	// li r17,-1
	r17.s64 = -1;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,72
	ctx.r3.s64 = r31.s64 + 72;
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82120b20
	ctx.lr = 0x82203428;
	sub_82120B20(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8215f338
	ctx.lr = 0x82203434;
	sub_8215F338(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,29656
	ctx.r4.s64 = ctx.r11.s64 + 29656;
	// bl 0x8215f338
	ctx.lr = 0x82203440;
	sub_8215F338(ctx, base);
	// bl 0x8215f9e0
	ctx.lr = 0x82203444;
	sub_8215F9E0(ctx, base);
	// stfs f1,100(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 100, temp.u32);
	// addi r20,r31,24
	r20.s64 = r31.s64 + 24;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x82203b58
	ctx.lr = 0x82203454;
	sub_82203B58(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// li r18,0
	r18.s64 = 0;
	// lis r16,-32106
	r16.s64 = -2104098816;
	// addi r23,r11,-21052
	r23.s64 = ctx.r11.s64 + -21052;
	// addi r22,r10,29676
	r22.s64 = ctx.r10.s64 + 29676;
	// addi r21,r9,-16616
	r21.s64 = ctx.r9.s64 + -16616;
	// addi r19,r8,29664
	r19.s64 = ctx.r8.s64 + 29664;
loc_8220347C:
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x82203494
	if (!ctx.cr6.eq) goto loc_82203494;
	// lwz r11,8(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82203498
	goto loc_82203498;
loc_82203494:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82203498:
	// cmpw cr6,r18,r11
	ctx.cr6.compare<int32_t>(r18.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x822036d0
	if (!ctx.cr6.lt) goto loc_822036D0;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8215f530
	ctx.lr = 0x822034AC;
	sub_8215F530(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8215f2d0
	ctx.lr = 0x822034BC;
	sub_8215F2D0(ctx, base);
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8215f338
	ctx.lr = 0x822034C8;
	sub_8215F338(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x822034f0
	if (!ctx.cr6.eq) goto loc_822034F0;
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
	// b 0x822034f4
	goto loc_822034F4;
loc_822034F0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822034F4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822036c8
	if (ctx.cr6.eq) goto loc_822036C8;
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82203510
	if (ctx.cr6.lt) goto loc_82203510;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// b 0x82203514
	goto loc_82203514;
loc_82203510:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82203514:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82162af8
	ctx.lr = 0x8220351C;
	sub_82162AF8(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x822039c8
	ctx.lr = 0x8220352C;
	sub_822039C8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215f338
	ctx.lr = 0x8220353C;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x82203540;
	sub_8215FA30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82120b20
	ctx.lr = 0x82203554;
	sub_82120B20(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215f338
	ctx.lr = 0x82203560;
	sub_8215F338(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x82203564;
	sub_8215F990(ctx, base);
	// stw r3,28(r29)
	REX_STORE_U32(r29.u32 + 28, ctx.r3.u32);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215f338
	ctx.lr = 0x82203574;
	sub_8215F338(ctx, base);
	// bl 0x8215f9e0
	ctx.lr = 0x82203578;
	sub_8215F9E0(ctx, base);
	// stfs f1,32(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r29.u32 + 32, temp.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x822035a0
	if (!ctx.cr6.eq) goto loc_822035A0;
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r4,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 4;
	// b 0x822035a4
	goto loc_822035A4;
loc_822035A0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_822035A4:
	// addi r31,r29,36
	r31.s64 = r29.s64 + 36;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82158750
	ctx.lr = 0x822035B0;
	sub_82158750(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
loc_822035B8:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x822035dc
	if (!ctx.cr6.eq) goto loc_822035DC;
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
	// b 0x822035e0
	goto loc_822035E0;
loc_822035DC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822035E0:
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82203608
	if (!ctx.cr6.lt) goto loc_82203608;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x822035F0;
	sub_8215F1B0(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x822035F4;
	sub_8215F990(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// stwx r3,r8,r11
	REX_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r3.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// b 0x822035b8
	goto loc_822035B8;
loc_82203608:
	// lwz r25,40(r29)
	r25.u64 = REX_LOAD_U32(r29.u32 + 40);
	// lwz r27,0(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r27,r25
	ctx.cr6.compare<uint32_t>(r27.u32, r25.u32, ctx.xer);
	// beq cr6,0x82203690
	if (ctx.cr6.eq) goto loc_82203690;
	// addi r30,r27,4
	r30.s64 = r27.s64 + 4;
	// li r31,2
	r31.s64 = 2;
	// b 0x82203688
	goto loc_82203688;
loc_82203624:
	// li r26,32767
	r26.s64 = 32767;
	// bl 0x826a1b88
	ctx.lr = 0x8220362C;
	sub_826A1B88(ctx, base);
	// clrlwi r28,r3,17
	r28.u64 = ctx.r3.u32 & 0x7FFF;
	// cmplwi cr6,r31,32767
	ctx.cr6.compare<uint32_t>(r31.u32, 32767, ctx.xer);
	// ble cr6,0x8220365c
	if (!ctx.cr6.gt) goto loc_8220365C;
loc_82203638:
	// cmpwi cr6,r26,-1
	ctx.cr6.compare<int32_t>(r26.s32, -1, ctx.xer);
	// beq cr6,0x8220365c
	if (ctx.cr6.eq) goto loc_8220365C;
	// bl 0x826a1b88
	ctx.lr = 0x82203644;
	sub_826A1B88(ctx, base);
	// rlwinm r11,r26,15,0,16
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 15) & 0xFFFF8000;
	// rlwimi r3,r28,15,0,16
	ctx.r3.u64 = (__builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 15) & 0xFFFF8000) | (ctx.r3.u64 & 0xFFFFFFFF00007FFF);
	// ori r26,r11,32767
	r26.u64 = ctx.r11.u64 | 32767;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplw cr6,r26,r31
	ctx.cr6.compare<uint32_t>(r26.u32, r31.u32, ctx.xer);
	// blt cr6,0x82203638
	if (ctx.cr6.lt) goto loc_82203638;
loc_8220365C:
	// divwu r11,r28,r31
	ctx.r11.u64 = uint32_t(r31.u32 ? r28.u32 / r31.u32 : 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// twllei r31,0
	if (r31.s32 == 0 || r31.u32 < 0u) ppc_trap(ctx, base, 0);
	// mullw r11,r11,r31
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r31.s32);
	// subf r11,r11,r28
	ctx.r11.u64 = r28.u64 - ctx.r11.u64;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r27
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + r27.u32);
	// stw r9,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r9.u32);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// stwx r10,r11,r27
	REX_STORE_U32(ctx.r11.u32 + r27.u32, ctx.r10.u32);
loc_82203688:
	// cmplw cr6,r30,r25
	ctx.cr6.compare<uint32_t>(r30.u32, r25.u32, ctx.xer);
	// bne cr6,0x82203624
	if (!ctx.cr6.eq) goto loc_82203624;
loc_82203690:
	// lwz r11,6100(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 6100);
	// lwz r10,20(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 20);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// lwz r3,20(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// blt cr6,0x822036ac
	if (ctx.cr6.lt) goto loc_822036AC;
	// lwz r4,0(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 0);
	// b 0x822036b0
	goto loc_822036B0;
loc_822036AC:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
loc_822036B0:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822036C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822036C8:
	// addi r18,r18,1
	r18.s64 = r18.s64 + 1;
	// b 0x8220347c
	goto loc_8220347C;
loc_822036D0:
	// lwz r3,6040(r14)
	ctx.r3.u64 = REX_LOAD_U32(r14.u32 + 6040);
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822036E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_8221CA90) {
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
	// addi r3,r3,148
	ctx.r3.s64 = ctx.r3.s64 + 148;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82120ac0
	ctx.lr = 0x8221CABC;
	sub_82120AC0(ctx, base);
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82120ac0
	ctx.lr = 0x8221CACC;
	sub_82120AC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82178388
	ctx.lr = 0x8221CAD4;
	sub_82178388(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221cae4
	if (ctx.cr0.eq) goto loc_8221CAE4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8221CAE4;
	sub_8269CE98(ctx, base);
loc_8221CAE4:
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

DEFINE_REX_FUNC(sub_82221698) {
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
	// li r3,800
	ctx.r3.s64 = 800;
	// bl 0x822f6280
	ctx.lr = 0x822216AC;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822216bc
	if (ctx.cr0.eq) goto loc_822216BC;
	// bl 0x822216d0
	ctx.lr = 0x822216B8;
	sub_822216D0(ctx, base);
	// b 0x822216c0
	goto loc_822216C0;
loc_822216BC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822216C0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822234F8) {
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
	// bl 0x826a1c80
	ctx.lr = 0x82223500;
	// stfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -168, f30.u64);
	// stfd f31,-160(r1)
	REX_STORE_U64(ctx.r1.u32 + -160, f31.u64);
	// stwu r1,-608(r1)
	ea = -608 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// ld r10,128(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 128);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// addi r11,r3,128
	ctx.r11.s64 = ctx.r3.s64 + 128;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r29,r3,144
	r29.s64 = ctx.r3.s64 + 144;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lfs f30,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	f30.f64 = double(temp.f32);
	// addi r28,r3,252
	r28.s64 = ctx.r3.s64 + 252;
	// lfs f31,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	f31.f64 = double(temp.f32);
	// addi r27,r3,360
	r27.s64 = ctx.r3.s64 + 360;
	// addi r26,r3,468
	r26.s64 = ctx.r3.s64 + 468;
	// addi r25,r3,576
	r25.s64 = ctx.r3.s64 + 576;
	// addi r24,r3,684
	r24.s64 = ctx.r3.s64 + 684;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r20,r3,160
	r20.s64 = ctx.r3.s64 + 160;
	// addi r19,r3,268
	r19.s64 = ctx.r3.s64 + 268;
	// addi r18,r3,376
	r18.s64 = ctx.r3.s64 + 376;
	// addi r22,r3,592
	r22.s64 = ctx.r3.s64 + 592;
	// addi r17,r3,700
	r17.s64 = ctx.r3.s64 + 700;
	// li r30,12
	r30.s64 = 12;
	// addi r21,r9,-24988
	r21.s64 = ctx.r9.s64 + -24988;
	// addi r16,r8,-26848
	r16.s64 = ctx.r8.s64 + -26848;
	// addi r15,r10,-26860
	r15.s64 = ctx.r10.s64 + -26860;
loc_82223570:
	// addi r23,r11,1
	r23.s64 = ctx.r11.s64 + 1;
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// li r5,10
	ctx.r5.s64 = 10;
	// lfs f12,8(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// lfs f11,12(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + f30.f64));
	// fadds f13,f31,f13
	ctx.f13.f64 = double(float(f31.f64 + ctx.f13.f64));
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f11,92(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// rlwinm r14,r11,27,31,31
	r14.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x826a06d8
	ctx.lr = 0x822235B4;
	sub_826A06D8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82222758
	ctx.lr = 0x822235CC;
	sub_82222758(ctx, base);
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f30,f0
	ctx.f0.f64 = double(float(f30.f64 + ctx.f0.f64));
	// lfs f12,8(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f31,f13
	ctx.f13.f64 = double(float(f31.f64 + ctx.f13.f64));
	// lfs f11,12(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// mr r6,r15
	ctx.r6.u64 = r15.u64;
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stfs f12,168(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// stfs f13,164(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// stfs f11,172(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82222758
	ctx.lr = 0x8222360C;
	sub_82222758(ctx, base);
	// lfs f0,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + f30.f64));
	// lfs f12,8(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 + f31.f64));
	// lfs f11,12(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// mr r6,r16
	ctx.r6.u64 = r16.u64;
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stfs f11,140(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82222758
	ctx.lr = 0x8222364C;
	sub_82222758(ctx, base);
	// lfs f0,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r26.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + f30.f64));
	// lfs f12,8(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 + f31.f64));
	// lfs f11,12(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// mr r7,r14
	ctx.r7.u64 = r14.u64;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f11,108(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82222758
	ctx.lr = 0x8222368C;
	sub_82222758(ctx, base);
	// lfs f0,0(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r25.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + f30.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lfs f13,4(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r7,r14
	ctx.r7.u64 = r14.u64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,8(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,12(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 + f31.f64));
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f12,124(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// bl 0x82222758
	ctx.lr = 0x822236CC;
	sub_82222758(ctx, base);
	// lfs f0,0(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r24.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r24)
	temp.u32 = REX_LOAD_U32(r24.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// lfs f12,8(r24)
	temp.u32 = REX_LOAD_U32(r24.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f11,12(r24)
	temp.u32 = REX_LOAD_U32(r24.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + f30.f64));
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fadds f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 + f31.f64));
	// stfs f12,152(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f11,156(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// bl 0x826a06d8
	ctx.lr = 0x82223704;
	sub_826A06D8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82222758
	ctx.lr = 0x8222371C;
	sub_82222758(ctx, base);
	// lfs f0,136(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// fadds f31,f0,f31
	f31.f64 = double(float(ctx.f0.f64 + f31.f64));
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
	// bgt 0x82223570
	if (ctx.cr0.gt) goto loc_82223570;
	// lbz r11,793(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 793);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne 0x82223744
	if (!ctx.cr0.eq) goto loc_82223744;
	// li r11,-1
	ctx.r11.s64 = -1;
loc_82223744:
	// stw r11,976(r31)
	REX_STORE_U32(r31.u32 + 976, ctx.r11.u32);
	// li r10,12
	ctx.r10.s64 = 12;
	// lwz r11,988(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 988);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,972(r31)
	REX_STORE_U32(r31.u32 + 972, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// addi r4,r31,128
	ctx.r4.s64 = r31.s64 + 128;
	// addi r5,r31,120
	ctx.r5.s64 = r31.s64 + 120;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r8,16592
	ctx.r11.s64 = ctx.r8.s64 + 16592;
	// lwz r9,988(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 988);
	// addi r3,r31,796
	ctx.r3.s64 = r31.s64 + 796;
	// stw r10,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// lfs f0,16592(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 16592);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,112(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 112);
	// lfs f13,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,20(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f1,f12,f0,f13
	ctx.f1.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f13.f64)));
	// bl 0x8226bf68
	ctx.lr = 0x82223794;
	sub_8226BF68(ctx, base);
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// lfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_82237A50) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-13508
	ctx.r3.s64 = ctx.r11.s64 + -13508;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82237C60) {
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
	// lwz r3,212(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 212);
	// bl 0x821e9ec0
	ctx.lr = 0x82237C7C;
	sub_821E9EC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,-18468
	ctx.r4.s64 = ctx.r11.s64 + -18468;
	// bl 0x8215f338
	ctx.lr = 0x82237C88;
	sub_8215F338(ctx, base);
	// addi r4,r31,380
	ctx.r4.s64 = r31.s64 + 380;
	// bl 0x8215fb50
	ctx.lr = 0x82237C90;
	sub_8215FB50(ctx, base);
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

DEFINE_REX_FUNC(sub_8223A030) {
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
	ctx.lr = 0x8223A038;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,-1
	ctx.r11.s64 = -1;
	// lis r25,-32106
	r25.s64 = -2104098816;
	// stw r11,3868(r3)
	REX_STORE_U32(ctx.r3.u32 + 3868, ctx.r11.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r11,3872(r3)
	REX_STORE_U32(ctx.r3.u32 + 3872, ctx.r11.u32);
	// li r24,0
	r24.s64 = 0;
	// mr r29,r24
	r29.u64 = r24.u64;
	// lwz r3,6284(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 6284);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223A06C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x8223a1c8
	if (!ctx.cr0.gt) goto loc_8223A1C8;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r28,r24
	r28.u64 = r24.u64;
	// addi r22,r8,-17584
	r22.s64 = ctx.r8.s64 + -17584;
	// addi r21,r7,-17640
	r21.s64 = ctx.r7.s64 + -17640;
	// addi r23,r9,-18236
	r23.s64 = ctx.r9.s64 + -18236;
	// addi r27,r10,17480
	r27.s64 = ctx.r10.s64 + 17480;
	// addi r26,r11,16176
	r26.s64 = ctx.r11.s64 + 16176;
loc_8223A0A0:
	// lwz r3,6284(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 6284);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223A0B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r24,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r24.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// std r24,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, r24.u64);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120600
	ctx.lr = 0x8223A0D0;
	sub_82120600(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8219b8b0
	ctx.lr = 0x8223A0DC;
	sub_8219B8B0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223A0F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x8223A100;
	sub_82120AC0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8215fa30
	ctx.lr = 0x8223A108;
	sub_8215FA30(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82125d00
	ctx.lr = 0x8223A110;
	sub_82125D00(ctx, base);
	// lwz r11,3828(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 3828);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// bne 0x8223a12c
	if (!ctx.cr0.eq) goto loc_8223A12C;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,308(r11)
	REX_STORE_U8(ctx.r11.u32 + 308, ctx.r10.u8);
	// b 0x8223a130
	goto loc_8223A130;
loc_8223A12C:
	// stb r24,308(r11)
	REX_STORE_U8(ctx.r11.u32 + 308, r24.u8);
loc_8223A130:
	// lwz r11,3828(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 3828);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// lbz r10,308(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 308);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8223a19c
	if (ctx.cr0.eq) goto loc_8223A19C;
	// lwz r11,304(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 304);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8223a174
	if (!ctx.cr6.eq) goto loc_8223A174;
	// lwz r11,3868(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 3868);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8223a16c
	if (ctx.cr6.eq) goto loc_8223A16C;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// li r5,711
	ctx.r5.s64 = 711;
	// bl 0x821231d0
	ctx.lr = 0x8223A16C;
	sub_821231D0(ctx, base);
loc_8223A16C:
	// stw r29,3868(r30)
	REX_STORE_U32(r30.u32 + 3868, r29.u32);
	// b 0x8223a19c
	goto loc_8223A19C;
loc_8223A174:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8223a19c
	if (!ctx.cr6.eq) goto loc_8223A19C;
	// lwz r11,3872(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 3872);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8223a198
	if (ctx.cr6.eq) goto loc_8223A198;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// li r5,717
	ctx.r5.s64 = 717;
	// bl 0x821231d0
	ctx.lr = 0x8223A198;
	sub_821231D0(ctx, base);
loc_8223A198:
	// stw r29,3872(r30)
	REX_STORE_U32(r30.u32 + 3872, r29.u32);
loc_8223A19C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8215f0f0
	ctx.lr = 0x8223A1A4;
	sub_8215F0F0(ctx, base);
	// lwz r3,6284(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 6284);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r28,r28,320
	r28.s64 = r28.s64 + 320;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223A1C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r29,r3
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x8223a0a0
	if (ctx.cr6.lt) goto loc_8223A0A0;
loc_8223A1C8:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1cec
	return;
}

DEFINE_REX_FUNC(sub_82245248) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82245250;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82178268
	ctx.lr = 0x82245260;
	sub_82178268(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r28,0
	r28.s64 = 0;
	// addi r11,r11,-15644
	ctx.r11.s64 = ctx.r11.s64 + -15644;
	// stw r28,112(r31)
	REX_STORE_U32(r31.u32 + 112, r28.u32);
	// li r3,100
	ctx.r3.s64 = 100;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stb r28,116(r31)
	REX_STORE_U8(r31.u32 + 116, r28.u8);
	// bl 0x822f6280
	ctx.lr = 0x82245280;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822452a0
	if (ctx.cr0.eq) goto loc_822452A0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,150
	ctx.r5.s64 = 150;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821dc550
	ctx.lr = 0x82245298;
	sub_821DC550(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x822452a4
	goto loc_822452A4;
loc_822452A0:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
loc_822452A4:
	// stw r4,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r4.u32);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x821d3988
	ctx.lr = 0x822452B0;
	sub_821D3988(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x822452B8;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x8224532c
	if (ctx.cr0.eq) goto loc_8224532C;
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
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821dbb48
	ctx.lr = 0x822452DC;
	sub_821DBB48(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r3,12
	ctx.r3.s64 = 12;
	// addi r11,r11,-23836
	ctx.r11.s64 = ctx.r11.s64 + -23836;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x822452F0;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8224531c
	if (ctx.cr0.eq) goto loc_8224531C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r11,r11,-15424
	ctx.r11.s64 = ctx.r11.s64 + -15424;
	// addi r10,r10,21720
	ctx.r10.s64 = ctx.r10.s64 + 21720;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82245320
	goto loc_82245320;
loc_8224531C:
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
loc_82245320:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r11,104(r30)
	REX_STORE_U32(r30.u32 + 104, ctx.r11.u32);
	// b 0x82245330
	goto loc_82245330;
loc_8224532C:
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
loc_82245330:
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
	ctx.lr = 0x82245348;
	sub_82264568(ctx, base);
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x822f6280
	ctx.lr = 0x82245350;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x82245388
	if (ctx.cr0.eq) goto loc_82245388;
	// stw r28,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r28.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-15652
	ctx.r4.s64 = ctx.r11.s64 + -15652;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821dbb48
	ctx.lr = 0x82245374;
	sub_821DBB48(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r11,r11,-23824
	ctx.r11.s64 = ctx.r11.s64 + -23824;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// b 0x8224538c
	goto loc_8224538C;
loc_82245388:
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
loc_8224538C:
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
	ctx.lr = 0x822453A4;
	sub_82264568(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822f6280
	ctx.lr = 0x822453AC;
	sub_822F6280(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r30,r11,-29688
	r30.s64 = ctx.r11.s64 + -29688;
	// beq 0x822453d8
	if (ctx.cr0.eq) goto loc_822453D8;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,21568
	ctx.r11.s64 = ctx.r11.s64 + 21568;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x822453dc
	goto loc_822453DC;
loc_822453D8:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
loc_822453DC:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r29,r31,12
	r29.s64 = r31.s64 + 12;
	// addi r5,r11,17196
	ctx.r5.s64 = ctx.r11.s64 + 17196;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8216be80
	ctx.lr = 0x822453F0;
	sub_8216BE80(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822f6280
	ctx.lr = 0x822453F8;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8224541c
	if (ctx.cr0.eq) goto loc_8224541C;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,21568
	ctx.r11.s64 = ctx.r11.s64 + 21568;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x82245420
	goto loc_82245420;
loc_8224541C:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
loc_82245420:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r5,r11,-26416
	ctx.r5.s64 = ctx.r11.s64 + -26416;
	// bl 0x8216be80
	ctx.lr = 0x82245430;
	sub_8216BE80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82252CF8) {
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
	// bl 0x821678f0
	ctx.lr = 0x82252D20;
	sub_821678F0(ctx, base);
	// stfs f1,720(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 720, temp.u32);
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

DEFINE_REX_FUNC(sub_82253850) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82253858;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,4(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// addi r4,r31,8
	ctx.r4.s64 = r31.s64 + 8;
	// bne cr6,0x82253874
	if (!ctx.cr6.eq) goto loc_82253874;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
loc_82253874:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6192(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6192);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225388C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,6268(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6268);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822538A8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// bne cr6,0x822538b8
	if (!ctx.cr6.eq) goto loc_822538B8;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
loc_822538B8:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6152(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6152);
	// bl 0x82146418
	ctx.lr = 0x822538C4;
	sub_82146418(ctx, base);
	// lwz r30,100(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 100);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x822538e0
	if (ctx.cr6.eq) goto loc_822538E0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82208770
	ctx.lr = 0x822538D8;
	sub_82208770(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8269ce98
	ctx.lr = 0x822538E0;
	sub_8269CE98(ctx, base);
loc_822538E0:
	// stw r29,100(r31)
	REX_STORE_U32(r31.u32 + 100, r29.u32);
	// addi r11,r31,28
	ctx.r11.s64 = r31.s64 + 28;
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// stw r29,44(r31)
	REX_STORE_U32(r31.u32 + 44, r29.u32);
	// blt cr6,0x822538fc
	if (ctx.cr6.lt) goto loc_822538FC;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_822538FC:
	// stb r29,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, r29.u8);
	// lwz r31,104(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 104);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82253928
	if (ctx.cr6.eq) goto loc_82253928;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,2972
	ctx.r11.s64 = ctx.r11.s64 + 2972;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x82208770
	ctx.lr = 0x82253920;
	sub_82208770(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x82253928;
	sub_8269CE98(ctx, base);
loc_82253928:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82257FF8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82258000;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r3,6272(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6272);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,108(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82258024;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r28,r11,16420
	r28.s64 = ctx.r11.s64 + 16420;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8215f338
	ctx.lr = 0x82258038;
	sub_8215F338(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8215f338
	ctx.lr = 0x82258044;
	sub_8215F338(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82258070
	if (!ctx.cr6.eq) goto loc_82258070;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// rlwinm. r10,r10,0,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x82258070
	if (!ctx.cr0.gt) goto loc_82258070;
	// rotlwi r3,r9,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// b 0x82258078
	goto loc_82258078;
loc_82258070:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r3,r11,1008
	ctx.r3.s64 = ctx.r11.s64 + 1008;
loc_82258078:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,-17264
	ctx.r4.s64 = ctx.r11.s64 + -17264;
	// bl 0x8215f338
	ctx.lr = 0x82258084;
	sub_8215F338(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,16176
	ctx.r4.s64 = ctx.r11.s64 + 16176;
	// bl 0x8215f338
	ctx.lr = 0x82258090;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x82258094;
	sub_8215FA30(ctx, base);
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r10,22808
	ctx.r4.s64 = ctx.r10.s64 + 22808;
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// bl 0x8215f338
	ctx.lr = 0x822580AC;
	sub_8215F338(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8215f2d0
	ctx.lr = 0x822580B4;
	sub_8215F2D0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,32412
	ctx.r4.s64 = ctx.r11.s64 + 32412;
	// bl 0x8215f338
	ctx.lr = 0x822580C0;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x822580C4;
	sub_8215FA30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82120b20
	ctx.lr = 0x822580D8;
	sub_82120B20(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82260FB0) {
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
	ctx.lr = 0x82260FB8;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82260fec
	if (!ctx.cr6.eq) goto loc_82260FEC;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r4,r11,-9400
	ctx.r4.s64 = ctx.r11.s64 + -9400;
	// addi r3,r10,-7944
	ctx.r3.s64 = ctx.r10.s64 + -7944;
	// li r5,4000
	ctx.r5.s64 = 4000;
	// bl 0x821231d0
	ctx.lr = 0x82260FEC;
	sub_821231D0(ctx, base);
loc_82260FEC:
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82261000;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// std r3,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r27,192
	ctx.r3.s64 = r27.s64 + 192;
	// bl 0x8228c390
	ctx.lr = 0x82261010;
	sub_8228C390(ctx, base);
	// mr. r23,r3
	r23.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r23.s32, 0, ctx.xer);
	// beq 0x822612b0
	if (ctx.cr0.eq) goto loc_822612B0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82120ac0
	ctx.lr = 0x82261028;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x82261038;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// addi r30,r11,-608
	r30.s64 = ctx.r11.s64 + -608;
	// bne cr6,0x8226105c
	if (!ctx.cr6.eq) goto loc_8226105C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,30052
	ctx.r3.s64 = ctx.r11.s64 + 30052;
	// li r5,172
	ctx.r5.s64 = 172;
	// bl 0x821231d0
	ctx.lr = 0x8226105C;
	sub_821231D0(ctx, base);
loc_8226105C:
	// cmplwi cr6,r29,10
	ctx.cr6.compare<uint32_t>(r29.u32, 10, ctx.xer);
	// bge cr6,0x82261078
	if (!ctx.cr6.lt) goto loc_82261078;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,30080
	ctx.r3.s64 = ctx.r11.s64 + 30080;
	// li r5,173
	ctx.r5.s64 = 173;
	// bl 0x821231d0
	ctx.lr = 0x82261078;
	sub_821231D0(ctx, base);
loc_82261078:
	// lhz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 0);
	// cmplwi cr6,r11,32767
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32767, ctx.xer);
	// beq cr6,0x82261098
	if (ctx.cr6.eq) goto loc_82261098;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,30128
	ctx.r3.s64 = ctx.r11.s64 + 30128;
	// li r5,177
	ctx.r5.s64 = 177;
	// bl 0x821231d0
	ctx.lr = 0x82261098;
	sub_821231D0(ctx, base);
loc_82261098:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r28,2(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 2);
	// lwz r25,6(r31)
	r25.u64 = REX_LOAD_U32(r31.u32 + 6);
	// li r30,0
	r30.s64 = 0;
	// addi r29,r11,22808
	r29.s64 = ctx.r11.s64 + 22808;
loc_822610AC:
	// lwz r11,184(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 184);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// bl 0x8215f338
	ctx.lr = 0x822610BC;
	sub_8215F338(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x822610d4
	if (!ctx.cr6.eq) goto loc_822610D4;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x822610d8
	goto loc_822610D8;
loc_822610D4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822610D8:
	// li r26,-1
	r26.s64 = -1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82261134
	if (!ctx.cr6.lt) goto loc_82261134;
	// lwz r11,184(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 184);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// bl 0x8215f338
	ctx.lr = 0x822610F4;
	sub_8215F338(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8215f530
	ctx.lr = 0x822610FC;
	sub_8215F530(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8213bc98
	ctx.lr = 0x8226110C;
	sub_8213BC98(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82261120
	if (ctx.cr6.eq) goto loc_82261120;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// b 0x822610ac
	goto loc_822610AC;
loc_82261120:
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82120b20
	ctx.lr = 0x82261134;
	sub_82120B20(ctx, base);
loc_82261134:
	// li r30,0
	r30.s64 = 0;
loc_82261138:
	// lwz r11,188(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 188);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// bl 0x8215f338
	ctx.lr = 0x82261148;
	sub_8215F338(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x82261160
	if (!ctx.cr6.eq) goto loc_82261160;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82261164
	goto loc_82261164;
loc_82261160:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82261164:
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x822611bc
	if (!ctx.cr6.lt) goto loc_822611BC;
	// lwz r11,188(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 188);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// bl 0x8215f338
	ctx.lr = 0x8226117C;
	sub_8215F338(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8215f530
	ctx.lr = 0x82261184;
	sub_8215F530(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8213bc98
	ctx.lr = 0x82261194;
	sub_8213BC98(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(r25.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822611a8
	if (ctx.cr6.eq) goto loc_822611A8;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// b 0x82261138
	goto loc_82261138;
loc_822611A8:
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120b20
	ctx.lr = 0x822611BC;
	sub_82120B20(ctx, base);
loc_822611BC:
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r23,12
	ctx.r3.s64 = r23.s64 + 12;
	// bl 0x82120b20
	ctx.lr = 0x822611D0;
	sub_82120B20(ctx, base);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r23,40
	ctx.r3.s64 = r23.s64 + 40;
	// bl 0x82120b20
	ctx.lr = 0x822611E4;
	sub_82120B20(ctx, base);
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822611F8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r11,r11,1624
	ctx.r11.s64 = ctx.r11.s64 + 1624;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r10,-31468
	ctx.r4.s64 = ctx.r10.s64 + -31468;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8215f670
	ctx.lr = 0x82261214;
	sub_8215F670(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,16408
	ctx.r4.s64 = ctx.r11.s64 + 16408;
	// bl 0x8215f670
	ctx.lr = 0x82261220;
	sub_8215F670(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8215f670
	ctx.lr = 0x82261228;
	sub_8215F670(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r30,r11,-17264
	r30.s64 = ctx.r11.s64 + -17264;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8215f670
	ctx.lr = 0x8226123C;
	sub_8215F670(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,16176
	ctx.r4.s64 = ctx.r11.s64 + 16176;
	// bl 0x8215f670
	ctx.lr = 0x82261248;
	sub_8215F670(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r4,128(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x8226125c
	if (!ctx.cr6.lt) goto loc_8226125C;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
loc_8226125C:
	// bl 0x8215fbf8
	ctx.lr = 0x82261260;
	sub_8215FBF8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215f670
	ctx.lr = 0x8226126C;
	sub_8215F670(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,16192
	ctx.r4.s64 = ctx.r11.s64 + 16192;
	// bl 0x8215f670
	ctx.lr = 0x82261278;
	sub_8215F670(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x8226128c
	if (!ctx.cr6.lt) goto loc_8226128C;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_8226128C:
	// bl 0x8215fbf8
	ctx.lr = 0x82261290;
	sub_8215FBF8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x822612A0;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82120ac0
	ctx.lr = 0x822612B0;
	sub_82120AC0(ctx, base);
loc_822612B0:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_82273988) {
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
	ctx.lr = 0x82273990;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	r26.s64 = 0;
	// lis r25,-32106
	r25.s64 = -2104098816;
	// stw r26,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r26.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// lwz r3,6192(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 6192);
	// li r29,0
	r29.s64 = 0;
	// li r31,0
	r31.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822739CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r23,1
	r23.s64 = 1;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x82273a10
	if (!ctx.cr0.gt) goto loc_82273A10;
loc_822739D8:
	// slw r11,r23,r31
	ctx.r11.u64 = r31.u8 & 0x20 ? 0 : (r23.u32 << (r31.u8 & 0x3F));
	// and. r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 & r24.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822739e8
	if (ctx.cr0.eq) goto loc_822739E8;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
loc_822739E8:
	// lwz r3,6192(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 6192);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82273A00;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r31,r3
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x822739d8
	if (ctx.cr6.lt) goto loc_822739D8;
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(r29.s32, 1, ctx.xer);
	// bgt cr6,0x82273a30
	if (ctx.cr6.gt) goto loc_82273A30;
loc_82273A10:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82273a30
	if (!ctx.cr0.eq) goto loc_82273A30;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r31,r11,6256
	r31.s64 = ctx.r11.s64 + 6256;
	// lwz r3,6256(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6256);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// b 0x82273a44
	goto loc_82273A44;
loc_82273A30:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r31,r11,6256
	r31.s64 = ctx.r11.s64 + 6256;
	// lwz r3,6256(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6256);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
loc_82273A44:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bctrl 
	ctx.lr = 0x82273A54;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82273a64
	if (!ctx.cr0.eq) goto loc_82273A64;
loc_82273A5C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82273bc0
	goto loc_82273BC0;
loc_82273A64:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82273A80;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82273ac4
	if (ctx.cr0.eq) goto loc_82273AC4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,16504
	ctx.r4.s64 = ctx.r11.s64 + 16504;
	// bl 0x82120600
	ctx.lr = 0x82273A98;
	sub_82120600(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r26,r23
	r26.u64 = r23.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82273AB8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne 0x82273ac8
	if (!ctx.cr0.eq) goto loc_82273AC8;
loc_82273AC4:
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
loc_82273AC8:
	// clrlwi. r10,r26,31
	ctx.r10.u64 = r26.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r30,r11,24
	r30.u64 = ctx.r11.u32 & 0xFF;
	// beq 0x82273ae4
	if (ctx.cr0.eq) goto loc_82273AE4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x82273AE4;
	sub_82120AC0(ctx, base);
loc_82273AE4:
	// clrlwi. r11,r30,24
	ctx.r11.u64 = r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82273a5c
	if (!ctx.cr0.eq) goto loc_82273A5C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lwz r30,84(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r29,88(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r4,r11,-4028
	ctx.r4.s64 = ctx.r11.s64 + -4028;
	// bl 0x82120600
	ctx.lr = 0x82273B04;
	sub_82120600(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82273B20;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r5,0
	ctx.r5.s64 = 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// rlwinm r31,r11,27,31,31
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82120ac0
	ctx.lr = 0x82273B3C;
	sub_82120AC0(ctx, base);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne 0x82273a5c
	if (!ctx.cr0.eq) goto loc_82273A5C;
	// lwz r3,6192(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 6192);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82273B58;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x82273bbc
	if (!ctx.cr0.gt) goto loc_82273BBC;
loc_82273B60:
	// slw r11,r23,r31
	ctx.r11.u64 = r31.u8 & 0x20 ? 0 : (r23.u32 << (r31.u8 & 0x3F));
	// and. r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 & r24.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq 0x82273b8c
	if (ctx.cr0.eq) goto loc_82273B8C;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r28,80(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x823ee5d8
	ctx.lr = 0x82273B80;
	sub_823EE5D8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82273b90
	goto loc_82273B90;
loc_82273B8C:
	// lwz r5,92(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
loc_82273B90:
	// lis r4,0
	ctx.r4.s64 = 0;
	// ori r4,r4,32769
	ctx.r4.u64 = ctx.r4.u64 | 32769;
	// bl 0x823ee5d8
	ctx.lr = 0x82273B9C;
	sub_823EE5D8(ctx, base);
	// lwz r3,6192(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 6192);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82273BB4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r31,r3
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x82273b60
	if (ctx.cr6.lt) goto loc_82273B60;
loc_82273BBC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82273BC0:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_822850B8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x822850C0;
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
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82285110
	if (!ctx.cr6.gt) goto loc_82285110;
	// li r30,0
	r30.s64 = 0;
loc_822850E0:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwzx r3,r30,r11
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822850FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,80
	r30.s64 = r30.s64 + 80;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822850e0
	if (ctx.cr6.lt) goto loc_822850E0;
loc_82285110:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_822867A0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x822867A8;
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lbz r11,30(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 30);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82286a3c
	if (ctx.cr0.eq) goto loc_82286A3C;
	// lwz r3,32(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// bl 0x82265eb0
	ctx.lr = 0x822867C8;
	sub_82265EB0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// stb r11,104(r3)
	REX_STORE_U8(ctx.r3.u32 + 104, ctx.r11.u8);
	// li r31,0
	r31.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// std r31,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, r31.u64);
	// lwz r11,6108(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 6108);
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// bl 0x82120d70
	ctx.lr = 0x822867F0;
	sub_82120D70(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-23804
	ctx.r4.s64 = ctx.r11.s64 + -23804;
	// bl 0x8215f670
	ctx.lr = 0x82286800;
	sub_8215F670(ctx, base);
	// lwz r11,180(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r4,160(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x82286814
	if (!ctx.cr6.lt) goto loc_82286814;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
loc_82286814:
	// bl 0x8215fbf8
	ctx.lr = 0x82286818;
	sub_8215FBF8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82120ac0
	ctx.lr = 0x82286828;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82120ac0
	ctx.lr = 0x82286838;
	sub_82120AC0(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821ef7e0
	ctx.lr = 0x82286844;
	sub_821EF7E0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-6908
	ctx.r4.s64 = ctx.r11.s64 + -6908;
	// bl 0x8215f670
	ctx.lr = 0x82286854;
	sub_8215F670(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r4,128(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x82286868
	if (!ctx.cr6.lt) goto loc_82286868;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
loc_82286868:
	// bl 0x8215fbf8
	ctx.lr = 0x8228686C;
	sub_8215FBF8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// addi r4,r11,16492
	ctx.r4.s64 = ctx.r11.s64 + 16492;
	// addi r3,r10,1624
	ctx.r3.s64 = ctx.r10.s64 + 1624;
	// bl 0x8215f338
	ctx.lr = 0x82286880;
	sub_8215F338(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,16528
	ctx.r4.s64 = ctx.r11.s64 + 16528;
	// bl 0x8215f338
	ctx.lr = 0x8228688C;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x82286890;
	sub_8215FA30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r4,r11,30276
	ctx.r4.s64 = ctx.r11.s64 + 30276;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8215f670
	ctx.lr = 0x822868A4;
	sub_8215F670(ctx, base);
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x822868b8
	if (ctx.cr6.lt) goto loc_822868B8;
	// lwz r4,0(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 0);
	// b 0x822868bc
	goto loc_822868BC;
loc_822868B8:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
loc_822868BC:
	// bl 0x8215fbf8
	ctx.lr = 0x822868C0;
	sub_8215FBF8(ctx, base);
	// lwz r3,32(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822868D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,32412
	ctx.r4.s64 = ctx.r10.s64 + 32412;
	// lwz r29,0(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8215f670
	ctx.lr = 0x822868EC;
	sub_8215F670(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8215fbf8
	ctx.lr = 0x822868F4;
	sub_8215FBF8(ctx, base);
	// stw r31,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r31.u32);
	// std r31,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, r31.u64);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r31,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// std r31,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, r31.u64);
	// addi r31,r11,16176
	r31.s64 = ctx.r11.s64 + 16176;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82120600
	ctx.lr = 0x82286918;
	sub_82120600(ctx, base);
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 32);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r11,80
	ctx.r3.s64 = ctx.r11.s64 + 80;
	// bl 0x8219b8b0
	ctx.lr = 0x82286928;
	sub_8219B8B0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228693C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82120ac0
	ctx.lr = 0x8228694C;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r29,r11,16192
	r29.s64 = ctx.r11.s64 + 16192;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82120600
	ctx.lr = 0x82286960;
	sub_82120600(ctx, base);
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 32);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r11,80
	ctx.r3.s64 = ctx.r11.s64 + 80;
	// bl 0x8219b8b0
	ctx.lr = 0x82286970;
	sub_8219B8B0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82286984;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82120ac0
	ctx.lr = 0x82286994;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r28,r11,-17264
	r28.s64 = ctx.r11.s64 + -17264;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8215f670
	ctx.lr = 0x822869A8;
	sub_8215F670(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8215f670
	ctx.lr = 0x822869B0;
	sub_8215F670(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x8215efb0
	ctx.lr = 0x822869B8;
	sub_8215EFB0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8215f670
	ctx.lr = 0x822869C4;
	sub_8215F670(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8215f670
	ctx.lr = 0x822869CC;
	sub_8215F670(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8215efb0
	ctx.lr = 0x822869D4;
	sub_8215EFB0(ctx, base);
	// lwz r3,32(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 32);
	// bl 0x82265eb0
	ctx.lr = 0x822869DC;
	sub_82265EB0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r3,120
	ctx.r3.s64 = ctx.r3.s64 + 120;
	// addi r4,r11,30444
	ctx.r4.s64 = ctx.r11.s64 + 30444;
	// bl 0x8215f670
	ctx.lr = 0x822869EC;
	sub_8215F670(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8215efb0
	ctx.lr = 0x822869F4;
	sub_8215EFB0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8215f0f0
	ctx.lr = 0x822869FC;
	sub_8215F0F0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8215f0f0
	ctx.lr = 0x82286A04;
	sub_8215F0F0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82120ac0
	ctx.lr = 0x82286A14;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82120ac0
	ctx.lr = 0x82286A24;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82120ac0
	ctx.lr = 0x82286A34;
	sub_82120AC0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8215f0f0
	ctx.lr = 0x82286A3C;
	sub_8215F0F0(ctx, base);
loc_82286A3C:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82294BF0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82294BF8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,5008
	ctx.r4.s64 = ctx.r11.s64 + 5008;
	// bl 0x82180150
	ctx.lr = 0x82294C10;
	sub_82180150(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82294c78
	if (!ctx.cr6.gt) goto loc_82294C78;
	// li r30,0
	r30.s64 = 0;
loc_82294C24:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lbz r10,84(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 84);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwzx r4,r30,r11
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// bne 0x82294c5c
	if (!ctx.cr0.eq) goto loc_82294C5C;
	// lwz r11,224(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 224);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82294c50
	if (ctx.cr6.eq) goto loc_82294C50;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82294c54
	if (!ctx.cr6.eq) goto loc_82294C54;
loc_82294C50:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82294C54:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82294c64
	if (ctx.cr0.eq) goto loc_82294C64;
loc_82294C5C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82294a30
	ctx.lr = 0x82294C64;
	sub_82294A30(ctx, base);
loc_82294C64:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82294c24
	if (ctx.cr6.lt) goto loc_82294C24;
loc_82294C78:
	// bl 0x821800b8
	ctx.lr = 0x82294C7C;
	sub_821800B8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8229D100) {
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
	ctx.lr = 0x8229D108;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8229D128;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// li r28,0
	r28.s64 = 0;
	// stw r5,20(r24)
	REX_STORE_U32(r24.u32 + 20, ctx.r5.u32);
	// stw r28,0(r24)
	REX_STORE_U32(r24.u32 + 0, r28.u32);
	// beq 0x8229d4c4
	if (ctx.cr0.eq) goto loc_8229D4C4;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8229D154;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r30,8(r19)
	r30.u64 = REX_LOAD_U32(r19.u32 + 8);
	// stw r30,0(r24)
	REX_STORE_U32(r24.u32 + 0, r30.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8229D174;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,22849
	ctx.r11.s64 = 1497432064;
	// mr. r25,r3
	r25.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r25.s32, 0, ctx.xer);
	// ori r26,r11,21057
	r26.u64 = ctx.r11.u64 | 21057;
	// mr r27,r28
	r27.u64 = r28.u64;
	// ble 0x8229d49c
	if (!ctx.cr0.gt) goto loc_8229D49C;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r30,r30,12
	r30.s64 = r30.s64 + 12;
	// addi r23,r9,5520
	r23.s64 = ctx.r9.s64 + 5520;
	// addi r22,r8,5500
	r22.s64 = ctx.r8.s64 + 5500;
	// addi r21,r10,5480
	r21.s64 = ctx.r10.s64 + 5480;
	// addi r20,r11,5464
	r20.s64 = ctx.r11.s64 + 5464;
loc_8229D1AC:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r8,r1,120
	ctx.r8.s64 = ctx.r1.s64 + 120;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stw r27,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r27.u32);
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// addi r8,r1,108
	ctx.r8.s64 = ctx.r1.s64 + 108;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r6,r1,124
	ctx.r6.s64 = ctx.r1.s64 + 124;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8229D1E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// stw r11,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r11.u32);
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// stw r28,-4(r30)
	REX_STORE_U32(r30.u32 + -4, r28.u32);
	// stw r28,0(r30)
	REX_STORE_U32(r30.u32 + 0, r28.u32);
	// stw r28,-12(r30)
	REX_STORE_U32(r30.u32 + -12, r28.u32);
	// stw r28,-8(r30)
	REX_STORE_U32(r30.u32 + -8, r28.u32);
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// lwz r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8229d2a4
	if (ctx.cr6.eq) goto loc_8229D2A4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8229d344
	if (!ctx.cr6.eq) goto loc_8229D344;
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// mulli r5,r11,3
	ctx.r5.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(3));
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8229d344
	if (ctx.cr6.eq) goto loc_8229D344;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8229D244;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// lwz r9,96(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8229d29c
	if (!ctx.cr6.gt) goto loc_8229D29C;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
loc_8229D264:
	// lwz r9,104(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r8,108(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// mullw r9,r11,r9
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lhz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + 0);
	// sth r8,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r8.u16);
	// lhz r8,2(r9)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + 2);
	// sth r8,4(r10)
	REX_STORE_U16(ctx.r10.u32 + 4, ctx.r8.u16);
	// lhz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + 4);
	// sthu r9,6(r10)
	ea = 6 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// lwz r9,96(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8229d264
	if (ctx.cr6.lt) goto loc_8229D264;
loc_8229D29C:
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// b 0x8229d328
	goto loc_8229D328;
loc_8229D2A4:
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// mulli r5,r11,3
	ctx.r5.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(3));
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8229d344
	if (ctx.cr6.eq) goto loc_8229D344;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8229D2CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// stw r10,-4(r30)
	REX_STORE_U32(r30.u32 + -4, ctx.r10.u32);
	// lwz r9,96(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8229d324
	if (!ctx.cr6.gt) goto loc_8229D324;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_8229D2EC:
	// lwz r9,104(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r8,108(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// mullw r9,r11,r9
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// stw r8,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// lwz r8,4(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stw r8,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// stwu r9,12(r10)
	ea = 12 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// lwz r9,96(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8229d2ec
	if (ctx.cr6.lt) goto loc_8229D2EC;
loc_8229D324:
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
loc_8229D328:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r7,8(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8229D344;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8229D344:
	// lwz r11,124(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8229d3d8
	if (ctx.cr6.lt) goto loc_8229D3D8;
	// bne cr6,0x8229d474
	if (!ctx.cr6.eq) goto loc_8229D474;
	// lwz r5,100(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8229d474
	if (ctx.cr6.eq) goto loc_8229D474;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8229D378;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// stw r10,-8(r30)
	REX_STORE_U32(r30.u32 + -8, ctx.r10.u32);
	// lwz r9,100(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8229d3d0
	if (!ctx.cr6.gt) goto loc_8229D3D0;
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
loc_8229D398:
	// lwz r9,112(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r8,116(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// mullw r9,r11,r9
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lfd f0,0(r9)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// stfd f0,16(r10)
	REX_STORE_U64(ctx.r10.u32 + 16, ctx.f0.u64);
	// lfd f0,8(r9)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// stfd f0,24(r10)
	REX_STORE_U64(ctx.r10.u32 + 24, ctx.f0.u64);
	// lfd f0,16(r9)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r9.u32 + 16);
	// stfdu f0,32(r10)
	ea = 32 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.f0.u64);
	ctx.r10.u32 = ea;
	// lwz r9,100(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8229d398
	if (ctx.cr6.lt) goto loc_8229D398;
loc_8229D3D0:
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// b 0x8229d458
	goto loc_8229D458;
loc_8229D3D8:
	// lwz r5,100(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8229d474
	if (ctx.cr6.eq) goto loc_8229D474;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8229D3FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// stw r10,-12(r30)
	REX_STORE_U32(r30.u32 + -12, ctx.r10.u32);
	// lwz r9,100(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8229d454
	if (!ctx.cr6.gt) goto loc_8229D454;
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
loc_8229D41C:
	// lwz r9,112(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r8,116(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// mullw r9,r11,r9
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lfs f0,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lfs f0,8(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfsu f0,16(r10)
	ea = 16 + ctx.r10.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// lwz r9,100(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8229d41c
	if (ctx.cr6.lt) goto loc_8229D41C;
loc_8229D454:
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
loc_8229D458:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r7,8(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8229D474;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8229D474:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8229D48C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r30,r30,24
	r30.s64 = r30.s64 + 24;
	// cmpw cr6,r27,r25
	ctx.cr6.compare<int32_t>(r27.s32, r25.s32, ctx.xer);
	// blt cr6,0x8229d1ac
	if (ctx.cr6.lt) goto loc_8229D1AC;
loc_8229D49C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// lwz r7,8(r19)
	ctx.r7.u64 = REX_LOAD_U32(r19.u32 + 8);
	// addi r5,r10,5540
	ctx.r5.s64 = ctx.r10.s64 + 5540;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8229D4C4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8229D4C4:
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// addi r10,r29,12
	ctx.r10.s64 = r29.s64 + 12;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8229D4D4:
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
	// bdnz 0x8229d4d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8229D4D4;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r11,5556
	ctx.r3.s64 = ctx.r11.s64 + 5556;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1ce4
	return;
}

DEFINE_REX_FUNC(sub_822BC9E8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,240(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 240);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 & ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822bca18
	if (ctx.cr6.eq) goto loc_822BCA18;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r11,80(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_822BCA18:
	// b 0x82294d50
	sub_82294D50(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822BD3A8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_822BDE60) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x822BDE68;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,7352
	ctx.r4.s64 = ctx.r11.s64 + 7352;
	// bl 0x82180150
	ctx.lr = 0x822BDE80;
	sub_82180150(ctx, base);
	// lwz r3,176(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 176);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r5,24(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822BDE9C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,184(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 184);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822bdf50
	if (!ctx.cr6.gt) goto loc_822BDF50;
	// li r30,0
	r30.s64 = 0;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
loc_822BDEB0:
	// lwz r11,192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 192);
	// lwzx r11,r11,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r9,24(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822bdf44
	if (ctx.cr6.eq) goto loc_822BDF44;
	// lwz r11,212(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 212);
	// clrlwi. r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822bdf44
	if (!ctx.cr0.eq) goto loc_822BDF44;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822bdf44
	if (ctx.cr6.eq) goto loc_822BDF44;
	// lwz r11,212(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 212);
	// clrlwi. r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822bdf44
	if (!ctx.cr0.eq) goto loc_822BDF44;
	// lwz r11,224(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 224);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x822bdf00
	if (ctx.cr6.eq) goto loc_822BDF00;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x822bdf04
	if (!ctx.cr6.eq) goto loc_822BDF04;
loc_822BDF00:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822BDF04:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822bdf30
	if (!ctx.cr0.eq) goto loc_822BDF30;
	// lwz r11,224(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 224);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x822bdf24
	if (ctx.cr6.eq) goto loc_822BDF24;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x822bdf28
	if (!ctx.cr6.eq) goto loc_822BDF28;
loc_822BDF24:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822BDF28:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822bdf44
	if (ctx.cr0.eq) goto loc_822BDF44;
loc_822BDF30:
	// lwz r11,176(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 176);
	// lwz r5,216(r9)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 216);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r4,216(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 216);
	// bl 0x822bbcc8
	ctx.lr = 0x822BDF44;
	sub_822BBCC8(ctx, base);
loc_822BDF44:
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x822bdeb0
	if (!ctx.cr0.eq) goto loc_822BDEB0;
loc_822BDF50:
	// lwz r3,176(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 176);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822BDF68;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x821800b8
	ctx.lr = 0x822BDF6C;
	sub_821800B8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_822C2A38) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwimi r11,r4,8,21,23
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
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

DEFINE_REX_FUNC(sub_822C2C30) {
	REX_FUNC_PROLOGUE();
	// lbz r3,10497(r3)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r3.u32 + 10497);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C2C98) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,10564(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10564);
	// subfic r10,r4,0
	ctx.xer.ca = ctx.r4.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r4.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,0,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFC0;
	// and r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ctx.r9.u64;
	// or r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 | ctx.r4.u64;
	// li r12,1
	ctx.r12.s64 = 1;
	// stw r10,10420(r3)
	REX_STORE_U32(ctx.r3.u32 + 10420, ctx.r10.u32);
	// stw r11,10564(r3)
	REX_STORE_U32(ctx.r3.u32 + 10564, ctx.r11.u32);
	// ld r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 16);
	// ori r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 128;
	// rldicr r12,r12,44,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 44) & 0xFFFFFFFFFFFFFFFF;
	// std r10,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r10.u64);
	// or r11,r10,r12
	ctx.r11.u64 = ctx.r10.u64 | ctx.r12.u64;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C3A90) {
	REX_FUNC_PROLOGUE();
	// lwz r3,13808(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 13808);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C3F00) {
	REX_FUNC_PROLOGUE();
	// addi r11,r4,48
	ctx.r11.s64 = ctx.r4.s64 + 48;
	// mulli r11,r11,24
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(24));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm. r9,r10,0,20,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x822c3f20
	if (!ctx.cr0.eq) goto loc_822C3F20;
	// rlwinm. r10,r10,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822c3f5c
	if (ctx.cr0.eq) goto loc_822C3F5C;
loc_822C3F20:
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,7984
	ctx.r10.s64 = ctx.r10.s64 + 7984;
	// addi r7,r4,32
	ctx.r7.s64 = ctx.r4.s64 + 32;
	// li r6,1
	ctx.r6.s64 = 1;
	// clrldi r7,r7,32
	ctx.r7.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// rldicr r6,r6,63,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// lwzx r10,r8,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// srd r8,r6,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r6.u64 >> (ctx.r7.u8 & 0x7F));
	// rlwimi r9,r10,25,4,6
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0xE000000) | (ctx.r9.u64 & 0xFFFFFFFFF1FFFFFF);
	// stw r9,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// ld r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 | ctx.r11.u64;
	// std r11,24(r3)
	REX_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
loc_822C3F5C:
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// stb r5,12100(r11)
	REX_STORE_U8(ctx.r11.u32 + 12100, ctx.r5.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C90A8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r10,r5,-4
	ctx.r10.s64 = ctx.r5.s64 + -4;
loc_822C90AC:
	// rlwinm r11,r4,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x7FFFFFF;
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// clrlwi r8,r4,27
	ctx.r8.u64 = ctx.r4.u32 & 0x1F;
	// addi r11,r11,2532
	ctx.r11.s64 = ctx.r11.s64 + 2532;
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	// slw r7,r7,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r8.u8 & 0x3F));
	// lwzx r5,r11,r3
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// slw r9,r9,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r8.u8 & 0x3F));
	// andc r8,r5,r7
	ctx.r8.u64 = ctx.r5.u64 & ~ctx.r7.u64;
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// stwx r9,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r9.u32);
	// bne 0x822c90ac
	if (!ctx.cr0.eq) goto loc_822C90AC;
	// li r12,1
	ctx.r12.s64 = 1;
	// ld r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 32);
	// rldicr r12,r12,56,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 56) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,32(r3)
	REX_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822CBE90) {
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
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// mr r31,r8
	r31.u64 = ctx.r8.u64;
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822cbf40
	if (!ctx.cr0.eq) goto loc_822CBF40;
	// clrlwi. r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822cbf40
	if (!ctx.cr0.eq) goto loc_822CBF40;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x822cb658
	ctx.lr = 0x822CBEC8;
	sub_822CB658(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822cbf40
	if (ctx.cr0.eq) goto loc_822CBF40;
	// li r11,4
	ctx.r11.s64 = 4;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,0
	ctx.r6.s64 = 0;
	// clrlwi r5,r10,26
	ctx.r5.u64 = ctx.r10.u32 & 0x3F;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_822CBEE8:
	// li r11,1
	ctx.r11.s64 = 1;
	// slw r11,r11,r6
	ctx.r11.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r6.u8 & 0x3F));
	// and. r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 & ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822cbf38
	if (ctx.cr0.eq) goto loc_822CBF38;
	// addi r11,r5,2
	ctx.r11.s64 = ctx.r5.s64 + 2;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lbzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + r31.u32);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// beq cr6,0x822cbf38
	if (ctx.cr6.eq) goto loc_822CBF38;
	// addi r10,r11,36
	ctx.r10.s64 = ctx.r11.s64 + 36;
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + r31.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sthx r10,r11,r31
	REX_STORE_U16(ctx.r11.u32 + r31.u32, ctx.r10.u16);
	// lwzx r11,r9,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// rlwinm r11,r11,20,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xF;
	// andc r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 & ~ctx.r11.u64;
loc_822CBF38:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// bdnz 0x822cbee8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822CBEE8;
loc_822CBF40:
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

DEFINE_REX_FUNC(sub_822D1728) {
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
	ctx.lr = 0x822D1730;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r8
	r22.u64 = ctx.r8.u64;
	// stw r5,292(r1)
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r5.u32);
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// stw r10,332(r1)
	REX_STORE_U32(ctx.r1.u32 + 332, ctx.r10.u32);
	// mr r15,r6
	r15.u64 = ctx.r6.u64;
	// mr r20,r7
	r20.u64 = ctx.r7.u64;
	// mr r16,r9
	r16.u64 = ctx.r9.u64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// li r19,1
	r19.s64 = 1;
	// li r17,0
	r17.s64 = 0;
	// cmplwi cr6,r22,1
	ctx.cr6.compare<uint32_t>(r22.u32, 1, ctx.xer);
	// bne cr6,0x822d1774
	if (!ctx.cr6.eq) goto loc_822D1774;
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// ble cr6,0x822d1774
	if (!ctx.cr6.gt) goto loc_822D1774;
	// stw r19,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r19.u32);
	// b 0x822d1784
	goto loc_822D1784;
loc_822D1774:
	// stw r17,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r17.u32);
	// cmplwi cr6,r22,3
	ctx.cr6.compare<uint32_t>(r22.u32, 3, ctx.xer);
	// mr r14,r17
	r14.u64 = r17.u64;
	// bne cr6,0x822d1788
	if (!ctx.cr6.eq) goto loc_822D1788;
loc_822D1784:
	// mr r14,r19
	r14.u64 = r19.u64;
loc_822D1788:
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(r14.s32, 0, ctx.xer);
	// mr r28,r19
	r28.u64 = r19.u64;
	// bne cr6,0x822d1798
	if (!ctx.cr6.eq) goto loc_822D1798;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
loc_822D1798:
	// lwz r31,340(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// rlwinm r7,r20,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r10,7816
	ctx.r10.s64 = ctx.r10.s64 + 7816;
	// subf r23,r11,r3
	r23.u64 = ctx.r3.u64 - ctx.r11.u64;
	// subf r26,r11,r25
	r26.u64 = r25.u64 - ctx.r11.u64;
	// addi r9,r23,-1
	ctx.r9.s64 = r23.s64 + -1;
	// addi r6,r26,-1
	ctx.r6.s64 = r26.s64 + -1;
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// cntlzw r10,r9
	ctx.r10.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// cntlzw r9,r6
	ctx.r9.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// subf r10,r10,r31
	ctx.r10.u64 = r31.u64 - ctx.r10.u64;
	// subf r9,r9,r31
	ctx.r9.u64 = r31.u64 - ctx.r9.u64;
	// lbzx r21,r7,r5
	r21.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r5.u32);
	// addi r29,r10,32
	r29.s64 = ctx.r10.s64 + 32;
	// addi r30,r9,32
	r30.s64 = ctx.r9.s64 + 32;
	// cmplwi cr6,r22,2
	ctx.cr6.compare<uint32_t>(r22.u32, 2, ctx.xer);
	// bne cr6,0x822d17fc
	if (!ctx.cr6.eq) goto loc_822D17FC;
	// subf r24,r11,r28
	r24.u64 = r28.u64 - ctx.r11.u64;
	// addi r11,r24,-1
	ctx.r11.s64 = r24.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subf r11,r11,r31
	ctx.r11.u64 = r31.u64 - ctx.r11.u64;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// b 0x822d1804
	goto loc_822D1804;
loc_822D17FC:
	// mr r24,r19
	r24.u64 = r19.u64;
	// mr r11,r17
	ctx.r11.u64 = r17.u64;
loc_822D1804:
	// slw r11,r19,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (r19.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r27,356(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// slw r10,r19,r29
	ctx.r10.u64 = r29.u8 & 0x20 ? 0 : (r19.u32 << (r29.u8 & 0x3F));
	// slw r11,r19,r30
	ctx.r11.u64 = r30.u8 & 0x20 ? 0 : (r19.u32 << (r30.u8 & 0x3F));
	// stw r10,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// ble cr6,0x822d1830
	if (!ctx.cr6.gt) goto loc_822D1830;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bgt cr6,0x822d1838
	if (ctx.cr6.gt) goto loc_822D1838;
loc_822D1830:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x822d1860
	if (!ctx.cr6.eq) goto loc_822D1860;
loc_822D1838:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// bne cr6,0x822d1848
	if (!ctx.cr6.eq) goto loc_822D1848;
	// stw r3,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// b 0x822d1858
	goto loc_822D1858;
loc_822D1848:
	// rlwinm r11,r27,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 3) & 0xFFFFFFF8;
	// twllei r21,0
	if (r21.s32 == 0 || r21.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r11,r11,r21
	ctx.r11.u64 = uint32_t(r21.u32 ? ctx.r11.u32 / r21.u32 : 0);
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
loc_822D1858:
	// stw r25,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r28.u32);
loc_822D1860:
	// mr r9,r16
	ctx.r9.u64 = r16.u64;
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
	// mr r7,r20
	ctx.r7.u64 = r20.u64;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x822d1608
	ctx.lr = 0x822D1880;
	sub_822D1608(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// lwz r18,88(r1)
	r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// bne cr6,0x822d1894
	if (!ctx.cr6.eq) goto loc_822D1894;
	// mullw r11,r18,r21
	ctx.r11.s64 = int64_t(r18.s32) * int64_t(r21.s32);
	// rlwinm r27,r11,29,3,31
	r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
loc_822D1894:
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(r16.s32, 0, ctx.xer);
	// bne cr6,0x822d1910
	if (!ctx.cr6.eq) goto loc_822D1910;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(r14.s32, 0, ctx.xer);
	// bne cr6,0x822d1910
	if (!ctx.cr6.eq) goto loc_822D1910;
	// cmplwi cr6,r22,2
	ctx.cr6.compare<uint32_t>(r22.u32, 2, ctx.xer);
	// beq cr6,0x822d1934
	if (ctx.cr6.eq) goto loc_822D1934;
	// cmplwi cr6,r22,1
	ctx.cr6.compare<uint32_t>(r22.u32, 1, ctx.xer);
	// bne cr6,0x822d18fc
	if (!ctx.cr6.eq) goto loc_822D18FC;
	// cmplwi cr6,r15,1
	ctx.cr6.compare<uint32_t>(r15.u32, 1, ctx.xer);
	// bne cr6,0x822d18fc
	if (!ctx.cr6.eq) goto loc_822D18FC;
	// lwz r11,332(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822d18fc
	if (!ctx.cr6.eq) goto loc_822D18FC;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x822d18fc
	if (!ctx.cr6.eq) goto loc_822D18FC;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x822c6b30
	ctx.lr = 0x822D18E0;
	sub_822C6B30(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// add r10,r11,r25
	ctx.r10.u64 = ctx.r11.u64 + r25.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// andc r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// mullw r25,r11,r27
	r25.s64 = int64_t(ctx.r11.s32) * int64_t(r27.s32);
	// b 0x822d1a74
	goto loc_822D1A74;
loc_822D18FC:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mullw r11,r27,r11
	ctx.r11.s64 = int64_t(r27.s32) * int64_t(ctx.r11.s32);
	// mullw r25,r11,r10
	r25.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// b 0x822d195c
	goto loc_822D195C;
loc_822D1910:
	// cmplwi cr6,r22,2
	ctx.cr6.compare<uint32_t>(r22.u32, 2, ctx.xer);
	// beq cr6,0x822d1934
	if (ctx.cr6.eq) goto loc_822D1934;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mullw r11,r27,r11
	ctx.r11.s64 = int64_t(r27.s32) * int64_t(ctx.r11.s32);
	// addi r11,r11,4095
	ctx.r11.s64 = ctx.r11.s64 + 4095;
	// rlwinm r11,r11,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// mullw r25,r11,r10
	r25.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// b 0x822d194c
	goto loc_822D194C;
loc_822D1934:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mullw r11,r27,r11
	ctx.r11.s64 = int64_t(r27.s32) * int64_t(ctx.r11.s32);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// addi r11,r11,4095
	ctx.r11.s64 = ctx.r11.s64 + 4095;
	// rlwinm r25,r11,0,0,19
	r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
loc_822D194C:
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(r14.s32, 0, ctx.xer);
	// beq cr6,0x822d195c
	if (ctx.cr6.eq) goto loc_822D195C;
	// lwz r11,292(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// mullw r25,r25,r11
	r25.s64 = int64_t(r25.s32) * int64_t(ctx.r11.s32);
loc_822D195C:
	// cmplwi cr6,r15,1
	ctx.cr6.compare<uint32_t>(r15.u32, 1, ctx.xer);
	// bgt cr6,0x822d196c
	if (ctx.cr6.gt) goto loc_822D196C;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// bne cr6,0x822d1a74
	if (!ctx.cr6.eq) goto loc_822D1A74;
loc_822D196C:
	// cmplw cr6,r26,r24
	ctx.cr6.compare<uint32_t>(r26.u32, r24.u32, ctx.xer);
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// bgt cr6,0x822d197c
	if (ctx.cr6.gt) goto loc_822D197C;
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
loc_822D197C:
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(r23.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x822d198c
	if (!ctx.cr6.gt) goto loc_822D198C;
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
	// b 0x822d199c
	goto loc_822D199C;
loc_822D198C:
	// cmplw cr6,r26,r24
	ctx.cr6.compare<uint32_t>(r26.u32, r24.u32, ctx.xer);
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// bgt cr6,0x822d199c
	if (ctx.cr6.gt) goto loc_822D199C;
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
loc_822D199C:
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// bne cr6,0x822d19ac
	if (!ctx.cr6.eq) goto loc_822D19AC;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subfic r15,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	r15.u64 = static_cast<uint64_t>(32) - ctx.r11.u64;
loc_822D19AC:
	// li r11,15
	ctx.r11.s64 = 15;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subfic r27,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	r27.u64 = static_cast<uint64_t>(32) - ctx.r11.u64;
	// addic. r31,r15,-1
	ctx.xer.ca = r15.u32 > 0;
	r31.s64 = r15.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x822d1a40
	if (ctx.cr0.eq) goto loc_822D1A40;
loc_822D19C0:
	// lwz r11,332(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822d19dc
	if (ctx.cr6.eq) goto loc_822D19DC;
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(r29.u32, r27.u32, ctx.xer);
	// ble cr6,0x822d1a40
	if (!ctx.cr6.gt) goto loc_822D1A40;
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(r30.u32, r27.u32, ctx.xer);
	// ble cr6,0x822d1a40
	if (!ctx.cr6.gt) goto loc_822D1A40;
loc_822D19DC:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x822d19e8
	if (ctx.cr6.eq) goto loc_822D19E8;
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
loc_822D19E8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x822d19f4
	if (ctx.cr6.eq) goto loc_822D19F4;
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
loc_822D19F4:
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(r28.u32, 1, ctx.xer);
	// ble cr6,0x822d1a00
	if (!ctx.cr6.gt) goto loc_822D1A00;
	// rlwinm r28,r28,31,1,31
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 31) & 0x7FFFFFFF;
loc_822D1A00:
	// slw r11,r19,r29
	ctx.r11.u64 = r29.u8 & 0x20 ? 0 : (r19.u32 << (r29.u8 & 0x3F));
	// stw r28,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r28.u32);
	// slw r10,r19,r30
	ctx.r10.u64 = r30.u8 & 0x20 ? 0 : (r19.u32 << (r30.u8 & 0x3F));
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r9,r16
	ctx.r9.u64 = r16.u64;
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
	// mr r7,r20
	ctx.r7.u64 = r20.u64;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822d1608
	ctx.lr = 0x822D1A34;
	sub_822D1608(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// add r17,r3,r17
	r17.u64 = ctx.r3.u64 + r17.u64;
	// bne 0x822d19c0
	if (!ctx.cr0.eq) goto loc_822D19C0;
loc_822D1A40:
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(r14.s32, 0, ctx.xer);
	// beq cr6,0x822d1a74
	if (ctx.cr6.eq) goto loc_822D1A74;
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r10,292(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// andc r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// mullw r17,r11,r17
	r17.s64 = int64_t(ctx.r11.s32) * int64_t(r17.s32);
loc_822D1A74:
	// lwz r11,364(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// lwz r10,372(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// lwz r9,380(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// stw r18,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r18.u32);
	// stw r25,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r25.u32);
	// stw r17,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, r17.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_822EAB58) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x822EAB60;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,116(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 116);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822eac28
	if (ctx.cr0.eq) goto loc_822EAC28;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,260(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r4,104(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822EAB8C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,256(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 256);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r10,252(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 252);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,104(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// lwz r6,96(r4)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 96);
	// lwz r11,104(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 104);
	// lwz r30,96(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// bl 0x822eac30
	ctx.lr = 0x822EABB0;
	sub_822EAC30(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r5,-32106
	ctx.r5.s64 = -2104098816;
	// addi r4,r10,16592
	ctx.r4.s64 = ctx.r10.s64 + 16592;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r7,r31,117
	ctx.r7.s64 = r31.s64 + 117;
	// lfs f0,16592(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16592);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lwz r3,6096(r5)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + 6096);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lfs f13,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r10,148(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 148);
	// lfs f12,264(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 264);
	ctx.f12.f64 = double(temp.f32);
	// lwz r4,152(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 152);
	// lfs f11,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// lwz r30,156(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 156);
	// fmuls f11,f12,f11
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// lwz r29,160(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 160);
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r31,112(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 112);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r4,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// stw r30,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r30.u32);
	// stw r29,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r29.u32);
	// lfs f11,104(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lfs f12,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f1,f12,f0,f13
	ctx.f1.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f13.f64)));
	// bl 0x82136420
	ctx.lr = 0x822EAC28;
	sub_82136420(ctx, base);
loc_822EAC28:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_822EFD48) {
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
	// bl 0x822efd98
	ctx.lr = 0x822EFD68;
	sub_822EFD98(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822efd78
	if (ctx.cr0.eq) goto loc_822EFD78;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x822EFD78;
	sub_8269CE98(ctx, base);
loc_822EFD78:
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

DEFINE_REX_FUNC(sub_822F2BD0) {
	REX_FUNC_PROLOGUE();
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x822f2be8
	sub_822F2BE8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822F3A48) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// clrlwi. r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f3ae0
	if (ctx.cr0.eq) goto loc_822F3AE0;
	// lwz r11,4(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// rlwinm. r11,r11,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f3a90
	if (ctx.cr0.eq) goto loc_822F3A90;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r6,r11,19084
	ctx.r6.s64 = ctx.r11.s64 + 19084;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822f3e30
	ctx.lr = 0x822F3A90;
	sub_822F3E30(ctx, base);
loc_822F3A90:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm r11,r11,20,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xF;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// beq cr6,0x822f3ab8
	if (ctx.cr6.eq) goto loc_822F3AB8;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// beq cr6,0x822f3ab8
	if (ctx.cr6.eq) goto loc_822F3AB8;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// beq cr6,0x822f3ab8
	if (ctx.cr6.eq) goto loc_822F3AB8;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bne cr6,0x822f3ae0
	if (!ctx.cr6.eq) goto loc_822F3AE0;
loc_822F3AB8:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r11,r30,24
	ctx.r11.s64 = r30.s64 + 24;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrlwi r8,r10,19
	ctx.r8.u64 = ctx.r10.u32 & 0x1FFF;
	// rlwinm r10,r8,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r8,r8,27
	ctx.r8.u64 = ctx.r8.u32 & 0x1F;
	// slw r9,r9,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r8.u8 & 0x3F));
	// lwzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwx r9,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
loc_822F3AE0:
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

DEFINE_REX_FUNC(sub_822F6BF0) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826a2af0
	ctx.lr = 0x822F6C18;
	sub_826A2AF0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x822f6c2c
	if (!ctx.cr0.eq) goto loc_822F6C2C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,-26856
	ctx.r4.s64 = ctx.r11.s64 + -26856;
	// b 0x822f6c30
	goto loc_822F6C30;
loc_822F6C2C:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_822F6C30:
	// addi r3,r30,20
	ctx.r3.s64 = r30.s64 + 20;
	// bl 0x822f6b68
	ctx.lr = 0x822F6C38;
	sub_822F6B68(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x822f6c54
	if (ctx.cr6.eq) goto loc_822F6C54;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826a2af0
	ctx.lr = 0x822F6C4C;
	sub_826A2AF0(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x822f6c5c
	if (!ctx.cr0.eq) goto loc_822F6C5C;
loc_822F6C54:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r11,2904
	ctx.r4.s64 = ctx.r11.s64 + 2904;
loc_822F6C5C:
	// addi r3,r30,28
	ctx.r3.s64 = r30.s64 + 28;
	// bl 0x822f6b68
	ctx.lr = 0x822F6C64;
	sub_822F6B68(ctx, base);
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

DEFINE_REX_FUNC(sub_822FAB50) {
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
	ctx.lr = 0x822FAB58;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,168(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 168);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822fac7c
	if (ctx.cr6.eq) goto loc_822FAC7C;
	// lhz r10,100(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 100);
	// li r30,0
	r30.s64 = 0;
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822fac14
	if (ctx.cr0.eq) goto loc_822FAC14;
	// lwz r11,40(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// lwz r28,8(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// ble cr6,0x822fac7c
	if (!ctx.cr6.gt) goto loc_822FAC7C;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
loc_822FABA4:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822fac00
	if (ctx.cr6.eq) goto loc_822FAC00;
	// lwz r11,172(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822fabc4
	if (ctx.cr6.eq) goto loc_822FABC4;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x822fabc8
	goto loc_822FABC8;
loc_822FABC4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822FABC8:
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// bne cr6,0x822fac00
	if (!ctx.cr6.eq) goto loc_822FAC00;
	// lhz r11,100(r10)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + 100);
	// rlwinm. r11,r11,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822fac00
	if (ctx.cr0.eq) goto loc_822FAC00;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,136(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822FABF8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822fac88
	if (!ctx.cr0.eq) goto loc_822FAC88;
loc_822FAC00:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(r30.s32, r28.s32, ctx.xer);
	// blt cr6,0x822faba4
	if (ctx.cr6.lt) goto loc_822FABA4;
	// b 0x822fac7c
	goto loc_822FAC7C;
loc_822FAC14:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822fac7c
	if (!ctx.cr6.gt) goto loc_822FAC7C;
	// li r31,0
	r31.s64 = 0;
loc_822FAC24:
	// lwz r11,168(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 168);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822fac64
	if (ctx.cr6.eq) goto loc_822FAC64;
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822fac64
	if (ctx.cr6.eq) goto loc_822FAC64;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,136(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822FAC5C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822fac88
	if (!ctx.cr0.eq) goto loc_822FAC88;
loc_822FAC64:
	// lwz r11,168(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 168);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822fac24
	if (ctx.cr6.lt) goto loc_822FAC24;
loc_822FAC7C:
	// stw r27,116(r29)
	REX_STORE_U32(r29.u32 + 116, r27.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r26,120(r29)
	REX_STORE_U32(r29.u32 + 120, r26.u32);
loc_822FAC88:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_823011D8) {
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
	ctx.lr = 0x823011E0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82301230
	if (!ctx.cr6.gt) goto loc_82301230;
	// li r29,0
	r29.s64 = 0;
loc_82301204:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwzx r3,r11,r29
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// bl 0x82331668
	ctx.lr = 0x82301214;
	sub_82331668(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8230123c
	if (ctx.cr0.eq) goto loc_8230123C;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82301204
	if (ctx.cr6.lt) goto loc_82301204;
loc_82301230:
	// li r3,16
	ctx.r3.s64 = 16;
loc_82301234:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
loc_8230123C:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8232f490
	ctx.lr = 0x82301250;
	sub_8232F490(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// bl 0x8232f530
	ctx.lr = 0x82301260;
	sub_8232F530(ctx, base);
	// b 0x82301234
	goto loc_82301234;
}

DEFINE_REX_FUNC(sub_82303EA8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82303EB0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,172(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 172);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82303ed0
	if (ctx.cr6.eq) goto loc_82303ED0;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82303ed4
	goto loc_82303ED4;
loc_82303ED0:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82303ED4:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82303ef4
	if (ctx.cr6.eq) goto loc_82303EF4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82303eec
	if (ctx.cr6.eq) goto loc_82303EEC;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82303ef8
	goto loc_82303EF8;
loc_82303EEC:
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82303ef8
	goto loc_82303EF8;
loc_82303EF4:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
loc_82303EF8:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x82303f08
	if (!ctx.cr6.eq) goto loc_82303F08;
	// li r3,37
	ctx.r3.s64 = 37;
	// b 0x82304038
	goto loc_82304038;
loc_82303F08:
	// clrlwi. r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82303f84
	if (ctx.cr0.eq) goto loc_82303F84;
	// lwz r11,40(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// rlwinm. r10,r6,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r31,48(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// beq 0x82303f28
	if (ctx.cr0.eq) goto loc_82303F28;
	// li r3,86
	ctx.r3.s64 = 86;
	// b 0x82304038
	goto loc_82304038;
loc_82303F28:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,56(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 56);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8230bd78
	ctx.lr = 0x82303F38;
	sub_8230BD78(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82304038
	if (!ctx.cr0.eq) goto loc_82304038;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822f7ad8
	ctx.lr = 0x82303F4C;
	sub_822F7AD8(ctx, base);
	// lwz r11,172(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82303f60
	if (ctx.cr6.eq) goto loc_82303F60;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// b 0x82303f64
	goto loc_82303F64;
loc_82303F60:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82303F64:
	// lwz r10,120(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 120);
	// lis r9,-8
	ctx.r9.s64 = -524288;
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwimi r9,r10,12,13,19
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x7F000) | (ctx.r9.u64 & 0xFFFFFFFFFFF80FFF);
	// or r10,r9,r8
	ctx.r10.u64 = ctx.r9.u64 | ctx.r8.u64;
	// rlwinm r10,r10,12,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFFFF000;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// b 0x8230402c
	goto loc_8230402C;
loc_82303F84:
	// lwz r11,168(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 168);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82303fdc
	if (ctx.cr6.eq) goto loc_82303FDC;
	// li r31,0
	r31.s64 = 0;
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// lwz r11,168(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 168);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82303fe4
	if (!ctx.cr6.gt) goto loc_82303FE4;
loc_82303FAC:
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r9,r31,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// beq cr6,0x82303fe4
	if (ctx.cr6.eq) goto loc_82303FE4;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// lwz r11,168(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 168);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r31,r9
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82303fac
	if (ctx.cr6.lt) goto loc_82303FAC;
	// b 0x82303fe4
	goto loc_82303FE4;
loc_82303FDC:
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
loc_82303FE4:
	// rlwinm. r11,r6,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82303ffc
	if (!ctx.cr0.eq) goto loc_82303FFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822f7ad8
	ctx.lr = 0x82303FF8;
	sub_822F7AD8(ctx, base);
	// lwz r31,80(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_82303FFC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822f70d8
	ctx.lr = 0x82304004;
	sub_822F70D8(ctx, base);
	// rlwinm r10,r3,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 7) & 0xFFFFFF80;
	// lwz r11,172(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 172);
	// or r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 | r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r10,r10,11,0,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 11) & 0xFFFFF800;
	// beq cr6,0x82304024
	if (ctx.cr6.eq) goto loc_82304024;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// b 0x82304028
	goto loc_82304028;
loc_82304024:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82304028:
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
loc_8230402C:
	// stw r11,24(r30)
	REX_STORE_U32(r30.u32 + 24, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
loc_82304038:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82312D20) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r10,5476
	ctx.r8.s64 = ctx.r10.s64 + 5476;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// addi r10,r3,128
	ctx.r10.s64 = ctx.r3.s64 + 128;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r9,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r8,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r10,128(r3)
	REX_STORE_U32(ctx.r3.u32 + 128, ctx.r10.u32);
	// stw r10,132(r3)
	REX_STORE_U32(ctx.r3.u32 + 132, ctx.r10.u32);
	// stw r9,136(r3)
	REX_STORE_U32(ctx.r3.u32 + 136, ctx.r9.u32);
	// bl 0x823114d8
	ctx.lr = 0x82312D6C;
	sub_823114D8(ctx, base);
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

DEFINE_REX_FUNC(sub_82314210) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82314588) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82314598
	if (!ctx.cr6.eq) goto loc_82314598;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82314598:
	// lwz r3,8(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x823295b0
	sub_823295B0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823148E8) {
	REX_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823148fc
	if (!ctx.cr6.eq) goto loc_823148FC;
	// li r3,95
	ctx.r3.s64 = 95;
	// blr 
	return;
loc_823148FC:
	// b 0x82329630
	sub_82329630(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823151E8) {
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
	// bl 0x82314ff0
	ctx.lr = 0x82315200;
	sub_82314FF0(ctx, base);
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,5812
	ctx.r5.s64 = ctx.r10.s64 + 5812;
	// li r6,41
	ctx.r6.s64 = 41;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,1012(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1012);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x82315224;
	sub_82330D00(ctx, base);
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

DEFINE_REX_FUNC(sub_82316640) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lwz r3,-10788(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -10788);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82317118) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82317120;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82317140;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,20(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8231715C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8231717c
	if (ctx.cr0.eq) goto loc_8231717C;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82317178;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_8231717C:
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x82315998
	ctx.lr = 0x82317184;
	sub_82315998(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8231727c
	if (!ctx.cr0.eq) goto loc_8231727C;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x823171e0
	if (!ctx.cr6.eq) goto loc_823171E0;
	// ld r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 24);
	// cmpld cr6,r30,r11
	ctx.cr6.compare<uint64_t>(r30.u64, ctx.r11.u64, ctx.xer);
	// ble cr6,0x823171e0
	if (!ctx.cr6.gt) goto loc_823171E0;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// li r10,3
	ctx.r10.s64 = 3;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r10.u32);
	// beq cr6,0x823171c0
	if (ctx.cr6.eq) goto loc_823171C0;
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x823171c4
	goto loc_823171C4;
loc_823171C0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_823171C4:
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823171D8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8231727c
	if (!ctx.cr0.eq) goto loc_8231727C;
loc_823171E0:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82317208
	if (!ctx.cr6.eq) goto loc_82317208;
	// ld r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 32);
	// cmpld cr6,r30,r11
	ctx.cr6.compare<uint64_t>(r30.u64, ctx.r11.u64, ctx.xer);
	// ble cr6,0x82317208
	if (!ctx.cr6.gt) goto loc_82317208;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82317078
	ctx.lr = 0x82317200;
	sub_82317078(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8231727c
	if (!ctx.cr0.eq) goto loc_8231727C;
loc_82317208:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8231722c
	if (!ctx.cr6.eq) goto loc_8231722C;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8231722c
	if (!ctx.cr6.eq) goto loc_8231722C;
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
loc_8231722C:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82317260
	if (!ctx.cr6.eq) goto loc_82317260;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82316148
	ctx.lr = 0x82317244;
	sub_82316148(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82317260
	if (!ctx.cr6.eq) goto loc_82317260;
	// bl 0x82316e88
	ctx.lr = 0x82317258;
	sub_82316E88(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8231727c
	if (!ctx.cr0.eq) goto loc_8231727C;
loc_82317260:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82317278
	if (!ctx.cr6.eq) goto loc_82317278;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82316148
	ctx.lr = 0x82317278;
	sub_82316148(ctx, base);
loc_82317278:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8231727C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82324590) {
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
	ctx.lr = 0x82324598;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,12(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r28,r3,12
	r28.s64 = ctx.r3.s64 + 12;
	// b 0x8232460c
	goto loc_8232460C;
loc_823245AC:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// addi r11,r29,-4
	ctx.r11.s64 = r29.s64 + -4;
	// bne cr6,0x823245bc
	if (!ctx.cr6.eq) goto loc_823245BC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823245BC:
	// lwz r31,52(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// addi r30,r11,52
	r30.s64 = ctx.r11.s64 + 52;
	// b 0x82324600
	goto loc_82324600;
loc_823245C8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// addi r3,r31,-4
	ctx.r3.s64 = r31.s64 + -4;
	// bne cr6,0x823245d8
	if (!ctx.cr6.eq) goto loc_823245D8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_823245D8:
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// lfs f3,256(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 256);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,252(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 252);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,248(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 248);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823125f0
	ctx.lr = 0x823245EC;
	sub_823125F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x823245fc
	if (ctx.cr0.eq) goto loc_823245FC;
	// cmpwi cr6,r3,36
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 36, ctx.xer);
	// bne cr6,0x82324618
	if (!ctx.cr6.eq) goto loc_82324618;
loc_823245FC:
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_82324600:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// bne cr6,0x823245c8
	if (!ctx.cr6.eq) goto loc_823245C8;
	// lwz r29,0(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 0);
loc_8232460C:
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(r29.u32, r28.u32, ctx.xer);
	// bne cr6,0x823245ac
	if (!ctx.cr6.eq) goto loc_823245AC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82324618:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_823290D8) {
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
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bl 0x82328fa8
	ctx.lr = 0x823290EC;
	sub_82328FA8(ctx, base);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823290f8
	if (ctx.cr6.eq) goto loc_823290F8;
	// stw r3,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r3.u32);
loc_823290F8:
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

DEFINE_REX_FUNC(sub_82329DD8) {
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
	ctx.lr = 0x82329DE0;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// li r31,0
	r31.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r31
	r28.u64 = r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82329e28
	if (!ctx.cr6.gt) goto loc_82329E28;
	// mr r29,r31
	r29.u64 = r31.u64;
loc_82329E00:
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + r29.u64;
	// bl 0x823298b8
	ctx.lr = 0x82329E0C;
	sub_823298B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82329ebc
	if (!ctx.cr0.eq) goto loc_82329EBC;
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,32
	r29.s64 = r29.s64 + 32;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82329e00
	if (ctx.cr6.lt) goto loc_82329E00;
loc_82329E28:
	// stw r31,52(r30)
	REX_STORE_U32(r30.u32 + 52, r31.u32);
	// addi r11,r30,32
	ctx.r11.s64 = r30.s64 + 32;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x82328e48
	ctx.lr = 0x82329E38;
	sub_82328E48(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82329ebc
	if (!ctx.cr6.eq) goto loc_82329EBC;
	// li r11,5
	ctx.r11.s64 = 5;
	// stb r31,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, r31.u8);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stb r31,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, r31.u8);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// std r31,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, r31.u64);
	// std r31,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, r31.u64);
	// addi r9,r30,80
	ctx.r9.s64 = r30.s64 + 80;
	// std r31,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, r31.u64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// stw r31,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r31.u32);
	// lfs f0,3716(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r10,-8
	ctx.r11.s64 = ctx.r10.s64 + -8;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stw r31,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r31.u32);
loc_82329E7C:
	// ldu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r10,8(r9)
	ea = 8 + ctx.r9.u32;
	REX_STORE_U64(ea, ctx.r10.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x82329e7c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82329E7C;
	// lwz r11,152(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 152);
	// std r31,136(r30)
	REX_STORE_U64(r30.u32 + 136, r31.u64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82329eb8
	if (ctx.cr6.eq) goto loc_82329EB8;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,156(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 156);
	// li r4,0
	ctx.r4.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// bctrl 
	ctx.lr = 0x82329EB0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82329ebc
	if (!ctx.cr0.eq) goto loc_82329EBC;
loc_82329EB8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82329EBC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8232FA40) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8232FA48;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	// bl 0x82332760
	ctx.lr = 0x8232FA64;
	sub_82332760(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8232fa84
	if (!ctx.cr6.eq) goto loc_8232FA84;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x823341d8
	ctx.lr = 0x8232FA84;
	sub_823341D8(ctx, base);
loc_8232FA84:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82331390) {
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
	// addi r9,r11,8576
	ctx.r9.s64 = ctx.r11.s64 + 8576;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x823313c4
	if (ctx.cr6.eq) goto loc_823313C4;
	// bl 0x8269ce98
	ctx.lr = 0x823313C0;
	sub_8269CE98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_823313C4:
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

DEFINE_REX_FUNC(sub_82334888) {
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
	ctx.lr = 0x82334890;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r3,1176(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 1176);
	// li r25,0
	r25.s64 = 0;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r30,r25
	r30.u64 = r25.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823348ec
	if (ctx.cr6.eq) goto loc_823348EC;
	// lwz r11,88(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823348ec
	if (ctx.cr6.eq) goto loc_823348EC;
	// lwz r4,96(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// addi r11,r3,96
	ctx.r11.s64 = ctx.r3.s64 + 96;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x823348ec
	if (ctx.cr6.eq) goto loc_823348EC;
loc_823348CC:
	// lwz r10,60(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 60);
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r27.u32, ctx.xer);
	// beq cr6,0x823348e8
	if (ctx.cr6.eq) goto loc_823348E8;
	// lwz r4,0(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823348cc
	if (!ctx.cr6.eq) goto loc_823348CC;
	// b 0x823348ec
	goto loc_823348EC;
loc_823348E8:
	// bl 0x82359d38
	ctx.lr = 0x823348EC;
	sub_82359D38(ctx, base);
loc_823348EC:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82334900;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82334a8c
	if (ctx.cr6.eq) goto loc_82334A8C;
	// lwz r3,23380(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 23380);
	// bl 0x8233e7e0
	ctx.lr = 0x82334914;
	sub_8233E7E0(ctx, base);
	// lwz r11,23040(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 23040);
	// addi r26,r28,23040
	r26.s64 = r28.s64 + 23040;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r26.u32, ctx.xer);
	// bne cr6,0x82334934
	if (!ctx.cr6.eq) goto loc_82334934;
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r26.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82334938
	if (ctx.cr6.eq) goto loc_82334938;
loc_82334934:
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
loc_82334938:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82334a84
	if (!ctx.cr6.eq) goto loc_82334A84;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r26.u32, ctx.xer);
	// beq cr6,0x82334a84
	if (ctx.cr6.eq) goto loc_82334A84;
loc_82334950:
	// lwz r31,8(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mr r30,r25
	r30.u64 = r25.u64;
	// lwz r29,0(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82334a78
	if (ctx.cr6.eq) goto loc_82334A78;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r27.u32, ctx.xer);
	// beq cr6,0x82334a5c
	if (ctx.cr6.eq) goto loc_82334A5C;
	// lwz r10,160(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 160);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82334a0c
	if (ctx.cr6.eq) goto loc_82334A0C;
	// lwz r9,76(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 76);
	// lwz r8,136(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// rlwinm r7,r9,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r6,r7,r10
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r5,r8
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	// cmplw cr6,r4,r27
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, r27.u32, ctx.xer);
	// beq cr6,0x82334a5c
	if (ctx.cr6.eq) goto loc_82334A5C;
	// lwz r10,144(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 144);
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82334a78
	if (!ctx.cr6.gt) goto loc_82334A78;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_823349B0:
	// lwz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r27
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, r27.u32, ctx.xer);
	// beq cr6,0x823349d4
	if (ctx.cr6.eq) goto loc_823349D4;
	// lwz r7,144(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 144);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x823349b0
	if (ctx.cr6.lt) goto loc_823349B0;
	// b 0x82334a78
	goto loc_82334A78;
loc_823349D4:
	// lwz r10,68(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823349f0
	if (ctx.cr6.eq) goto loc_823349F0;
	// lwz r10,204(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 204);
	// rlwinm r7,r10,0,27,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82334a00
	if (!ctx.cr6.eq) goto loc_82334A00;
loc_823349F0:
	// lwz r10,44(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r7,44(r27)
	ctx.r7.u64 = REX_LOAD_U32(r27.u32 + 44);
	// subf r6,r7,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r7.u64;
	// stw r6,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r6.u32);
loc_82334A00:
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r25,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, r25.u32);
	// b 0x82334a78
	goto loc_82334A78;
loc_82334A0C:
	// lwz r10,136(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82334a4c
	if (ctx.cr6.eq) goto loc_82334A4C;
	// lwz r8,144(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 144);
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x82334a78
	if (!ctx.cr6.gt) goto loc_82334A78;
loc_82334A28:
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r27
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, r27.u32, ctx.xer);
	// beq cr6,0x82334a5c
	if (ctx.cr6.eq) goto loc_82334A5C;
	// lwz r8,144(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 144);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82334a28
	if (ctx.cr6.lt) goto loc_82334A28;
	// b 0x82334a78
	goto loc_82334A78;
loc_82334A4C:
	// lwz r11,292(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r10,292(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 292);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82334a78
	if (!ctx.cr6.eq) goto loc_82334A78;
loc_82334A5C:
	// lwz r3,23380(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 23380);
	// bl 0x8233e820
	ctx.lr = 0x82334A64;
	sub_8233E820(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x82350470
	ctx.lr = 0x82334A6C;
	sub_82350470(ctx, base);
	// lwz r3,23380(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 23380);
	// li r30,1
	r30.s64 = 1;
	// bl 0x8233e7e0
	ctx.lr = 0x82334A78;
	sub_8233E7E0(ctx, base);
loc_82334A78:
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// cmplw cr6,r29,r26
	ctx.cr6.compare<uint32_t>(r29.u32, r26.u32, ctx.xer);
	// bne cr6,0x82334950
	if (!ctx.cr6.eq) goto loc_82334950;
loc_82334A84:
	// lwz r3,23380(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 23380);
	// bl 0x8233e820
	ctx.lr = 0x82334A8C;
	sub_8233E820(ctx, base);
loc_82334A8C:
	// lwz r11,64(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 64);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82334bd0
	if (ctx.cr6.eq) goto loc_82334BD0;
	// clrlwi r11,r30,24
	ctx.r11.u64 = r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82334bd0
	if (!ctx.cr6.eq) goto loc_82334BD0;
	// lwz r11,240(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 240);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,32(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 32);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// beq cr6,0x82334b54
	if (ctx.cr6.eq) goto loc_82334B54;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82334acc
	if (ctx.cr6.eq) goto loc_82334ACC;
	// lwz r3,4352(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 4352);
	// bl 0x8233e7e0
	ctx.lr = 0x82334ACC;
	sub_8233E7E0(ctx, base);
loc_82334ACC:
	// lwz r11,320(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 320);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r31,r11,-8
	r31.s64 = ctx.r11.s64 + -8;
	// bne cr6,0x82334ae0
	if (!ctx.cr6.eq) goto loc_82334AE0;
	// mr r31,r25
	r31.u64 = r25.u64;
loc_82334AE0:
	// addi r29,r28,312
	r29.s64 = r28.s64 + 312;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(r31.u32, r29.u32, ctx.xer);
	// beq cr6,0x82334b40
	if (ctx.cr6.eq) goto loc_82334B40;
loc_82334AEC:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r30,r11,-8
	r30.s64 = ctx.r11.s64 + -8;
	// bne cr6,0x82334b00
	if (!ctx.cr6.eq) goto loc_82334B00;
	// mr r30,r25
	r30.u64 = r25.u64;
loc_82334B00:
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82334b34
	if (ctx.cr6.eq) goto loc_82334B34;
	// stw r25,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r25.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8234d568
	ctx.lr = 0x82334B1C;
	sub_8234D568(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r27.u32, ctx.xer);
	// bne cr6,0x82334b34
	if (!ctx.cr6.eq) goto loc_82334B34;
	// li r4,87
	ctx.r4.s64 = 87;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8234f290
	ctx.lr = 0x82334B34;
	sub_8234F290(ctx, base);
loc_82334B34:
	// mr r31,r30
	r31.u64 = r30.u64;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(r30.u32, r29.u32, ctx.xer);
	// bne cr6,0x82334aec
	if (!ctx.cr6.eq) goto loc_82334AEC;
loc_82334B40:
	// lwz r11,32(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 32);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82334b98
	if (ctx.cr6.eq) goto loc_82334B98;
	// b 0x82334b90
	goto loc_82334B90;
loc_82334B54:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82334b98
	if (ctx.cr6.eq) goto loc_82334B98;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r10,112(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82334B7C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r9,6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 6, ctx.xer);
	// bne cr6,0x82334b98
	if (!ctx.cr6.eq) goto loc_82334B98;
	// lwz r3,4352(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 4352);
	// bl 0x8233e7e0
	ctx.lr = 0x82334B90;
	sub_8233E7E0(ctx, base);
loc_82334B90:
	// lwz r3,4352(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 4352);
	// bl 0x8233e820
	ctx.lr = 0x82334B98;
	sub_8233E820(ctx, base);
loc_82334B98:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82334BAC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82334bd4
	if (!ctx.cr6.eq) goto loc_82334BD4;
	// lwz r11,64(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 64);
	// rlwinm r10,r11,0,30,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stw r10,64(r27)
	REX_STORE_U32(r27.u32 + 64, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cfc
	return;
loc_82334BD0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82334BD4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_82353F20) {
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
	ctx.lr = 0x82353F28;
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,340(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 340);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// bl 0x8233e7e0
	ctx.lr = 0x82353F50;
	sub_8233E7E0(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82353b50
	ctx.lr = 0x82353F58;
	sub_82353B50(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r7,8(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r6,0(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r5,4(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lfs f31,3704(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	f31.f64 = double(temp.f32);
	// lwz r4,8(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 8);
	// stfs f31,104(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r3,344(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 344);
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stw r10,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stw r7,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// stw r6,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// stw r5,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// stw r4,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// beq cr6,0x82353fc4
	if (ctx.cr6.eq) goto loc_82353FC4;
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,15168
	ctx.r4.s64 = ctx.r11.s64 + 15168;
	// bl 0x823a8798
	ctx.lr = 0x82353FC4;
	sub_823A8798(ctx, base);
loc_82353FC4:
	// lfs f0,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lfs f13,108(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f31,f0
	ctx.f12.f64 = double(float(f31.f64 - ctx.f0.f64));
	// stfs f12,0(r28)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r28.u32 + 0, temp.u32);
	// fsubs f11,f31,f13
	ctx.f11.f64 = double(float(f31.f64 - ctx.f13.f64));
	// stfs f11,0(r27)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r27.u32 + 0, temp.u32);
	// bl 0x8233e820
	ctx.lr = 0x82353FE4;
	sub_8233E820(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82357E70) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82357E78;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,52(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r29,-32129
	r29.s64 = -2105606144;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// addi r30,r11,10436
	r30.s64 = ctx.r11.s64 + 10436;
	// beq cr6,0x82357eb0
	if (ctx.cr6.eq) goto loc_82357EB0;
	// lwz r11,1012(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 1012);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,166
	ctx.r6.s64 = 166;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x82357EB0;
	sub_82330D00(ctx, base);
loc_82357EB0:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,171
	ctx.r6.s64 = 171;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r3,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r3.u32);
	// stw r31,4(r31)
	REX_STORE_U32(r31.u32 + 4, r31.u32);
	// stw r31,0(r31)
	REX_STORE_U32(r31.u32 + 0, r31.u32);
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// lwz r11,1012(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 1012);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x82357EF4;
	sub_82330D00(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8235BBE0) {
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
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8235bc44
	if (ctx.cr6.eq) goto loc_8235BC44;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8235bc44
	if (ctx.cr6.eq) goto loc_8235BC44;
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,8772(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8772);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// bl 0x826a03b0
	ctx.lr = 0x8235BC34;
	sub_826A03B0(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// lfs f10,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f11,f31,f10
	ctx.f9.f64 = double(float(std::fma(ctx.f11.f64, f31.f64, ctx.f10.f64)));
	// stfs f9,4(r31)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
loc_8235BC44:
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

DEFINE_REX_FUNC(sub_82360128) {
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
	// beq cr6,0x82360170
	if (ctx.cr6.eq) goto loc_82360170;
	// lbz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82360198
	if (!ctx.cr6.eq) goto loc_82360198;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82360160;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236019c
	if (!ctx.cr6.eq) goto loc_8236019C;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82360194
	goto loc_82360194;
loc_82360170:
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
	ctx.lr = 0x82360188;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236019c
	if (!ctx.cr6.eq) goto loc_8236019C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82360194:
	// stb r11,4(r31)
	REX_STORE_U8(r31.u32 + 4, ctx.r11.u8);
loc_82360198:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8236019C:
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

DEFINE_REX_FUNC(sub_82362708) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,-10000
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -10000, ctx.xer);
	// bge cr6,0x82362728
	if (!ctx.cr6.lt) goto loc_82362728;
	// li r11,-10000
	ctx.r11.s64 = -10000;
	// b 0x82362734
	goto loc_82362734;
loc_82362728:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82362738
	if (!ctx.cr6.gt) goto loc_82362738;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82362734:
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_82362738:
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,1904(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 1904);
	// addi r8,r3,372
	ctx.r8.s64 = ctx.r3.s64 + 372;
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// extsw r6,r9
	ctx.r6.s64 = ctx.r9.s32;
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// std r7,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r7.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,9000(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 9000);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// std r6,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r6.u64);
	// lfd f11,96(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// fmuls f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f1,376(r3)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 376, temp.u32);
	// lfs f2,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// addi r10,r3,368
	ctx.r10.s64 = ctx.r3.s64 + 368;
	// addi r9,r3,364
	ctx.r9.s64 = ctx.r3.s64 + 364;
	// frsp f3,f10
	ctx.f3.f64 = double(float(ctx.f10.f64));
	// addi r8,r3,360
	ctx.r8.s64 = ctx.r3.s64 + 360;
	// addi r7,r3,356
	ctx.r7.s64 = ctx.r3.s64 + 356;
	// bl 0x82361fe0
	ctx.lr = 0x82362798;
	sub_82361FE0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82367A10) {
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
	// beq cr6,0x82367a4c
	if (ctx.cr6.eq) goto loc_82367A4C;
	// lbz r11,308(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 308);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82367a90
	if (!ctx.cr6.eq) goto loc_82367A90;
	// bl 0x823678f0
	ctx.lr = 0x82367A3C;
	sub_823678F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82367a94
	if (!ctx.cr6.eq) goto loc_82367A94;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82367a8c
	goto loc_82367A8C;
loc_82367A4C:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,49480
	ctx.r10.u64 = ctx.r11.u64 | 49480;
	// lwzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82367a88
	if (ctx.cr6.eq) goto loc_82367A88;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r11,49488
	ctx.r9.u64 = ctx.r11.u64 | 49488;
	// ori r8,r10,16444
	ctx.r8.u64 = ctx.r10.u64 | 16444;
	// li r5,16384
	ctx.r5.s64 = 16384;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwzx r7,r31,r9
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + ctx.r9.u32);
	// mullw r6,r7,r8
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// bl 0x82331a00
	ctx.lr = 0x82367A88;
	sub_82331A00(ctx, base);
loc_82367A88:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82367A8C:
	// stb r11,308(r31)
	REX_STORE_U8(r31.u32 + 308, ctx.r11.u8);
loc_82367A90:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82367A94:
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

DEFINE_REX_FUNC(sub_8236D408) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x8236d418
	if (!ctx.cr6.eq) goto loc_8236D418;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8236D418:
	// b 0x8236d1e8
	sub_8236D1E8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8236E258) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x8236e268
	if (!ctx.cr6.eq) goto loc_8236E268;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8236E268:
	// b 0x8236d5a8
	sub_8236D5A8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8236F828) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x8236f838
	if (!ctx.cr6.eq) goto loc_8236F838;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8236F838:
	// b 0x8236e668
	sub_8236E668(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8236F938) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x8236f948
	if (!ctx.cr6.eq) goto loc_8236F948;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8236F948:
	// b 0x8236f6c0
	sub_8236F6C0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82370D20) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r11,r3,-28
	ctx.r11.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x82370d30
	if (!ctx.cr6.eq) goto loc_82370D30;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82370D30:
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r11,456
	ctx.r11.s64 = ctx.r11.s64 + 456;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,3716(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
loc_82370D44:
	// stfs f0,-60(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + -60, temp.u32);
	// stfs f0,-124(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + -124, temp.u32);
	// stfs f0,68(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// stfsu f0,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82370d44
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82370D44;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823739C8) {
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
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,-28
	ctx.r11.s64 = ctx.r11.s64 + -28;
	// bne cr6,0x823739ec
	if (!ctx.cr6.eq) goto loc_823739EC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823739EC:
	// li r5,16384
	ctx.r5.s64 = 16384;
	// lwz r6,216(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 216);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82331a00
	ctx.lr = 0x823739FC;
	sub_82331A00(ctx, base);
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

DEFINE_REX_FUNC(sub_82374E70) {
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
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r11,r3,-28
	ctx.r11.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x82374e94
	if (!ctx.cr6.eq) goto loc_82374E94;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82374E94:
	// lwz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// lwz r3,256(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 256);
	// lwz r9,256(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 256);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bne cr6,0x82374ed8
	if (!ctx.cr6.eq) goto loc_82374ED8;
	// rlwinm r6,r5,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 31) & 0x7FFFFFFF;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82340718
	ctx.lr = 0x82374EB8;
	sub_82340718(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
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
loc_82374ED8:
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82340718
	ctx.lr = 0x82374EE4;
	sub_82340718(ctx, base);
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

DEFINE_REX_FUNC(sub_8237A138) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8237A140;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,256(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 256);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x82340718
	ctx.lr = 0x8237A164;
	sub_82340718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8237a174
	if (ctx.cr6.eq) goto loc_8237A174;
	// cmpwi cr6,r3,22
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 22, ctx.xer);
	// bne cr6,0x8237a208
	if (!ctx.cr6.eq) goto loc_8237A208;
loc_8237A174:
	// lwz r10,288(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 288);
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 32);
	// mulli r10,r10,296
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(296));
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r8,256(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 256);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// bne cr6,0x8237a1c8
	if (!ctx.cr6.eq) goto loc_8237A1C8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8237a208
	if (!ctx.cr6.gt) goto loc_8237A208;
	// addi r11,r29,-1
	ctx.r11.s64 = r29.s64 + -1;
loc_8237A1A4:
	// lbz r8,1(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// xori r7,r8,128
	ctx.r7.u64 = ctx.r8.u64 ^ 128;
	// stbu r7,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r7.u8);
	ctx.r11.u32 = ea;
	// lwz r6,0(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x8237a1a4
	if (ctx.cr6.lt) goto loc_8237A1A4;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
loc_8237A1C8:
	// rlwinm r9,r11,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8237a208
	if (ctx.cr6.eq) goto loc_8237A208;
	// addi r11,r29,-2
	ctx.r11.s64 = r29.s64 + -2;
loc_8237A1D8:
	// lhz r9,2(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// rlwinm r7,r9,24,8,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r6,r8,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// or r4,r5,r7
	ctx.r4.u64 = ctx.r5.u64 | ctx.r7.u64;
	// sthu r4,2(r11)
	ea = 2 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r4.u16);
	ctx.r11.u32 = ea;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r8,r9,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8237a1d8
	if (ctx.cr6.lt) goto loc_8237A1D8;
loc_8237A208:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82385018) {
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
	// bl 0x826a1c80
	ctx.lr = 0x82385020;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x826a2ca8
	ctx.lr = 0x82385028;
	// stwu r1,-2512(r1)
	ea = -2512 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,256(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 256);
	// li r24,0
	r24.s64 = 0;
	// stw r4,2540(r1)
	REX_STORE_U32(ctx.r1.u32 + 2540, ctx.r4.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// sth r24,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, r24.u16);
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// stw r5,2548(r1)
	REX_STORE_U32(ctx.r1.u32 + 2548, ctx.r5.u32);
	// stw r24,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, r24.u32);
	// lwz r10,392(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 392);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// stw r24,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r24.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stb r24,92(r1)
	REX_STORE_U8(ctx.r1.u32 + 92, r24.u8);
	// bne cr6,0x82385078
	if (!ctx.cr6.eq) goto loc_82385078;
loc_82385064:
	// li r3,25
	ctx.r3.s64 = 25;
	// addi r1,r1,2512
	ctx.r1.s64 = ctx.r1.s64 + 2512;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x826a2cf4
	ctx.lr = 0x82385074;
	// b 0x826a1cd0
	return;
loc_82385078:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lis r10,-32129
	ctx.r10.s64 = -2105606144;
	// li r16,10
	r16.s64 = 10;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,1012(r10)
	REX_STORE_U32(ctx.r10.u32 + 1012, ctx.r11.u32);
	// stw r16,68(r31)
	REX_STORE_U32(r31.u32 + 68, r16.u32);
	// stw r24,252(r31)
	REX_STORE_U32(r31.u32 + 252, r24.u32);
	// stw r24,28(r31)
	REX_STORE_U32(r31.u32 + 28, r24.u32);
	// stw r24,32(r31)
	REX_STORE_U32(r31.u32 + 32, r24.u32);
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340e38
	ctx.lr = 0x823850A8;
	sub_82340E38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// addi r4,r1,156
	ctx.r4.s64 = ctx.r1.s64 + 156;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823850C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82340e38
	ctx.lr = 0x823850E0;
	sub_82340E38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,784
	ctx.r4.s64 = ctx.r1.s64 + 784;
	// bl 0x82340718
	ctx.lr = 0x82385100;
	sub_82340718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,19624
	ctx.r4.s64 = ctx.r11.s64 + 19624;
	// addi r3,r1,784
	ctx.r3.s64 = ctx.r1.s64 + 784;
	// bl 0x82331620
	ctx.lr = 0x8238511C;
	sub_82331620(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82385064
	if (!ctx.cr6.eq) goto loc_82385064;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8238513C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// li r10,64
	ctx.r10.s64 = 64;
	// addi r17,r31,792
	r17.s64 = r31.s64 + 792;
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// addi r11,r17,-4
	ctx.r11.s64 = r17.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82385158:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82385158
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82385158;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r24,520(r31)
	REX_STORE_U32(r31.u32 + 520, r24.u32);
	// li r9,125
	ctx.r9.s64 = 125;
	// stb r10,1404(r31)
	REX_STORE_U8(r31.u32 + 1404, ctx.r10.u8);
	// li r8,6
	ctx.r8.s64 = 6;
	// stw r24,1412(r31)
	REX_STORE_U32(r31.u32 + 1412, r24.u32);
	// li r7,128
	ctx.r7.s64 = 128;
	// stw r9,1272(r31)
	REX_STORE_U32(r31.u32 + 1272, ctx.r9.u32);
	// stw r8,1268(r31)
	REX_STORE_U32(r31.u32 + 1268, ctx.r8.u32);
	// li r5,64
	ctx.r5.s64 = 64;
	// lfs f31,3704(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	f31.f64 = double(temp.f32);
	// stw r24,2140(r31)
	REX_STORE_U32(r31.u32 + 2140, r24.u32);
	// stfs f31,2144(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 2144, temp.u32);
	// stw r24,1424(r31)
	REX_STORE_U32(r31.u32 + 1424, r24.u32);
	// stw r10,788(r31)
	REX_STORE_U32(r31.u32 + 788, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r7,2152(r31)
	REX_STORE_U32(r31.u32 + 2152, ctx.r7.u32);
	// addi r3,r31,1436
	ctx.r3.s64 = r31.s64 + 1436;
	// stw r24,15520(r31)
	REX_STORE_U32(r31.u32 + 15520, r24.u32);
	// addi r28,r31,1268
	r28.s64 = r31.s64 + 1268;
	// addi r27,r31,1272
	r27.s64 = r31.s64 + 1272;
	// addi r30,r31,1404
	r30.s64 = r31.s64 + 1404;
	// addi r26,r31,1424
	r26.s64 = r31.s64 + 1424;
	// addi r11,r31,788
	ctx.r11.s64 = r31.s64 + 788;
	// addi r29,r31,2152
	r29.s64 = r31.s64 + 2152;
	// bl 0x823ef5f0
	ctx.lr = 0x823851C8;
	sub_823EF5F0(ctx, base);
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,1500
	ctx.r3.s64 = r31.s64 + 1500;
	// bl 0x823ef5f0
	ctx.lr = 0x823851D8;
	sub_823EF5F0(ctx, base);
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,1564
	ctx.r3.s64 = r31.s64 + 1564;
	// bl 0x823ef5f0
	ctx.lr = 0x823851E8;
	sub_823EF5F0(ctx, base);
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,1628
	ctx.r3.s64 = r31.s64 + 1628;
	// bl 0x823ef5f0
	ctx.lr = 0x823851F8;
	sub_823EF5F0(ctx, base);
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,1692
	ctx.r3.s64 = r31.s64 + 1692;
	// bl 0x823ef5f0
	ctx.lr = 0x82385208;
	sub_823EF5F0(ctx, base);
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,1756
	ctx.r3.s64 = r31.s64 + 1756;
	// bl 0x823ef5f0
	ctx.lr = 0x82385218;
	sub_823EF5F0(ctx, base);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r3,r11,3960
	ctx.r3.s64 = ctx.r11.s64 + 3960;
	// li r4,-1
	ctx.r4.s64 = -1;
	// stw r3,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// bl 0x823ef5f0
	ctx.lr = 0x82385230;
	sub_823EF5F0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r23,r11,19376
	r23.s64 = ctx.r11.s64 + 19376;
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// li r6,4151
	ctx.r6.s64 = 4151;
	// stw r23,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r23.u32);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// li r4,296
	ctx.r4.s64 = 296;
	// lwz r11,1012(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1012);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x8238525C;
	sub_82330E40(ctx, base);
	// stw r3,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8238527c
	if (!ctx.cr6.eq) goto loc_8238527C;
loc_82385268:
	// li r3,44
	ctx.r3.s64 = 44;
	// addi r1,r1,2512
	ctx.r1.s64 = ctx.r1.s64 + 2512;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x826a2cf4
	ctx.lr = 0x82385278;
	// b 0x826a1cd0
	return;
loc_8238527C:
	// lwz r11,156(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// stw r3,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r3.u32);
	// stw r11,268(r3)
	REX_STORE_U32(ctx.r3.u32 + 268, ctx.r11.u32);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// addic. r11,r10,264
	ctx.xer.ca = ctx.r10.u32 > 4294967031;
	ctx.r11.s64 = ctx.r10.s64 + 264;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823852a0
	if (ctx.cr0.eq) goto loc_823852A0;
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r9,1188(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 1188);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_823852A0:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x823852bc
	if (ctx.cr6.eq) goto loc_823852BC;
	// lwz r11,16(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823852bc
	if (ctx.cr6.eq) goto loc_823852BC;
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// stw r11,264(r10)
	REX_STORE_U32(ctx.r10.u32 + 264, ctx.r11.u32);
loc_823852BC:
	// addi r4,r31,264
	ctx.r4.s64 = r31.s64 + 264;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,26
	ctx.r6.s64 = 26;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82340718
	ctx.lr = 0x823852D4;
	sub_82340718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82340e38
	ctx.lr = 0x823852EC;
	sub_82340E38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// addi r25,r31,1408
	r25.s64 = r31.s64 + 1408;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x82340d98
	ctx.lr = 0x82385304;
	sub_82340D98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// addi r14,r31,1420
	r14.s64 = r31.s64 + 1420;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// bl 0x82340d98
	ctx.lr = 0x8238531C;
	sub_82340D98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340d98
	ctx.lr = 0x82385330;
	sub_82340D98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// addi r4,r1,94
	ctx.r4.s64 = ctx.r1.s64 + 94;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340cf8
	ctx.lr = 0x82385344;
	sub_82340CF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82340e38
	ctx.lr = 0x8238535C;
	sub_82340E38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340d98
	ctx.lr = 0x82385370;
	sub_82340D98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// addi r26,r31,2162
	r26.s64 = r31.s64 + 2162;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82340cf8
	ctx.lr = 0x82385388;
	sub_82340CF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82340e38
	ctx.lr = 0x823853A0;
	sub_82340E38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340c58
	ctx.lr = 0x823853B4;
	sub_82340C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340ca8
	ctx.lr = 0x823853C8;
	sub_82340CA8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340ca8
	ctx.lr = 0x823853DC;
	sub_82340CA8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340c08
	ctx.lr = 0x823853F0;
	sub_82340C08(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340c58
	ctx.lr = 0x82385404;
	sub_82340C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340c58
	ctx.lr = 0x82385418;
	sub_82340C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340d98
	ctx.lr = 0x8238542C;
	sub_82340D98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340de8
	ctx.lr = 0x82385440;
	sub_82340DE8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340de8
	ctx.lr = 0x82385454;
	sub_82340DE8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,1276
	ctx.r4.s64 = r31.s64 + 1276;
	// bl 0x82340718
	ctx.lr = 0x82385474;
	sub_82340718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,1340
	ctx.r4.s64 = r31.s64 + 1340;
	// bl 0x82340718
	ctx.lr = 0x82385494;
	sub_82340718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// addi r30,r31,532
	r30.s64 = r31.s64 + 532;
	// lwz r6,0(r25)
	ctx.r6.u64 = REX_LOAD_U32(r25.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82340718
	ctx.lr = 0x823854B8;
	sub_82340718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// lwz r9,0(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 0);
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x823854fc
	if (!ctx.cr6.gt) goto loc_823854FC;
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823854DC:
	// lbzx r9,r30,r11
	ctx.r9.u64 = REX_LOAD_U8(r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,255
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 255, ctx.xer);
	// beq cr6,0x823854f4
	if (ctx.cr6.eq) goto loc_823854F4;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x823854f4
	if (!ctx.cr6.gt) goto loc_823854F4;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_823854F4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x823854dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823854DC;
loc_823854FC:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r6,0(r14)
	ctx.r6.u64 = REX_LOAD_U32(r14.u32 + 0);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// stw r10,1408(r31)
	REX_STORE_U32(r31.u32 + 1408, ctx.r10.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r18,r11,2936
	r18.s64 = ctx.r11.s64 + 2936;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// addi r10,r31,1408
	ctx.r10.s64 = r31.s64 + 1408;
	// bl 0x82340718
	ctx.lr = 0x82385528;
	sub_82340718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lwz r6,1424(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 1424);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// addi r19,r11,1912
	r19.s64 = ctx.r11.s64 + 1912;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// stw r19,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, r19.u32);
	// addi r10,r31,1424
	ctx.r10.s64 = r31.s64 + 1424;
	// bl 0x82340718
	ctx.lr = 0x82385558;
	sub_82340718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lhz r6,94(r1)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r1.u32 + 94);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// addi r15,r11,888
	r15.s64 = ctx.r11.s64 + 888;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// stw r15,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, r15.u32);
	// bl 0x82340718
	ctx.lr = 0x82385584;
	sub_82340718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340d98
	ctx.lr = 0x82385598;
	sub_82340D98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// rlwinm r4,r11,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82340e38
	ctx.lr = 0x823855B4;
	sub_82340E38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340ff0
	ctx.lr = 0x823855C8;
	sub_82340FF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// lwz r10,108(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823855e8
	if (ctx.cr6.eq) goto loc_823855E8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8238563c
	if (!ctx.cr6.lt) goto loc_8238563C;
loc_823855E8:
	// lwz r10,0(r18)
	ctx.r10.u64 = REX_LOAD_U32(r18.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823855fc
	if (ctx.cr6.eq) goto loc_823855FC;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8238563c
	if (!ctx.cr6.lt) goto loc_8238563C;
loc_823855FC:
	// lwz r10,0(r19)
	ctx.r10.u64 = REX_LOAD_U32(r19.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8238563c
	if (!ctx.cr6.lt) goto loc_8238563C;
	// lwz r10,0(r15)
	ctx.r10.u64 = REX_LOAD_U32(r15.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8238563c
	if (!ctx.cr6.lt) goto loc_8238563C;
	// lhz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U16(r26.u32 + 0);
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8238563c
	if (ctx.cr6.eq) goto loc_8238563C;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r4,4896
	ctx.r4.s64 = 4896;
	// bl 0x82340e38
	ctx.lr = 0x82385634;
	sub_82340E38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
loc_8238563C:
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340ff0
	ctx.lr = 0x82385648;
	sub_82340FF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,784
	ctx.r3.s64 = ctx.r1.s64 + 784;
	// bl 0x823ef5f0
	ctx.lr = 0x82385660;
	sub_823EF5F0(ctx, base);
	// lwz r10,108(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82385678
	if (ctx.cr6.eq) goto loc_82385678;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82385730
	if (!ctx.cr6.lt) goto loc_82385730;
loc_82385678:
	// lwz r10,0(r18)
	ctx.r10.u64 = REX_LOAD_U32(r18.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8238568c
	if (ctx.cr6.eq) goto loc_8238568C;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82385730
	if (!ctx.cr6.lt) goto loc_82385730;
loc_8238568C:
	// lwz r10,0(r19)
	ctx.r10.u64 = REX_LOAD_U32(r19.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82385730
	if (!ctx.cr6.lt) goto loc_82385730;
	// lwz r10,0(r15)
	ctx.r10.u64 = REX_LOAD_U32(r15.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82385730
	if (!ctx.cr6.lt) goto loc_82385730;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,784
	ctx.r4.s64 = ctx.r1.s64 + 784;
	// bl 0x82340718
	ctx.lr = 0x823856BC;
	sub_82340718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,19616
	ctx.r4.s64 = ctx.r11.s64 + 19616;
	// addi r3,r1,784
	ctx.r3.s64 = ctx.r1.s64 + 784;
	// bl 0x82331620
	ctx.lr = 0x823856D8;
	sub_82331620(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bne cr6,0x8238571c
	if (!ctx.cr6.eq) goto loc_8238571C;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x82340de8
	ctx.lr = 0x823856EC;
	sub_82340DE8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82340e38
	ctx.lr = 0x82385704;
	sub_82340E38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82385730
	if (ctx.cr6.eq) goto loc_82385730;
	// addi r1,r1,2512
	ctx.r1.s64 = ctx.r1.s64 + 2512;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x826a2cf4
	ctx.lr = 0x82385718;
	// b 0x826a1cd0
	return;
loc_8238571C:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,100(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82340e38
	ctx.lr = 0x82385728;
	sub_82340E38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
loc_82385730:
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340ff0
	ctx.lr = 0x8238573C;
	sub_82340FF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// lwz r10,108(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8238575c
	if (ctx.cr6.eq) goto loc_8238575C;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82385834
	if (!ctx.cr6.lt) goto loc_82385834;
loc_8238575C:
	// lwz r10,0(r18)
	ctx.r10.u64 = REX_LOAD_U32(r18.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82385770
	if (ctx.cr6.eq) goto loc_82385770;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82385834
	if (!ctx.cr6.lt) goto loc_82385834;
loc_82385770:
	// lwz r10,0(r19)
	ctx.r10.u64 = REX_LOAD_U32(r19.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82385834
	if (!ctx.cr6.lt) goto loc_82385834;
	// lwz r10,0(r15)
	ctx.r10.u64 = REX_LOAD_U32(r15.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82385834
	if (!ctx.cr6.lt) goto loc_82385834;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,784
	ctx.r4.s64 = ctx.r1.s64 + 784;
	// bl 0x82340718
	ctx.lr = 0x823857A0;
	sub_82340718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,19608
	ctx.r4.s64 = ctx.r11.s64 + 19608;
	// addi r3,r1,784
	ctx.r3.s64 = ctx.r1.s64 + 784;
	// bl 0x82331620
	ctx.lr = 0x823857BC;
	sub_82331620(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bne cr6,0x82385820
	if (!ctx.cr6.eq) goto loc_82385820;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x82340de8
	ctx.lr = 0x823857D0;
	sub_82340DE8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82340e38
	ctx.lr = 0x823857E8;
	sub_82340E38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,784
	ctx.r4.s64 = ctx.r1.s64 + 784;
	// bl 0x82340718
	ctx.lr = 0x82385808;
	sub_82340718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82385834
	if (ctx.cr6.eq) goto loc_82385834;
	// addi r1,r1,2512
	ctx.r1.s64 = ctx.r1.s64 + 2512;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x826a2cf4
	ctx.lr = 0x8238581C;
	// b 0x826a1cd0
	return;
loc_82385820:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,100(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82340e38
	ctx.lr = 0x8238582C;
	sub_82340E38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
loc_82385834:
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340ff0
	ctx.lr = 0x82385840;
	sub_82340FF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f28,7616(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 7616);
	f28.f64 = double(temp.f32);
	// addi r22,r11,8944
	r22.s64 = ctx.r11.s64 + 8944;
	// lfs f29,3820(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 3820);
	f29.f64 = double(temp.f32);
	// addi r21,r10,19600
	r21.s64 = ctx.r10.s64 + 19600;
	// lfs f30,3716(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 3716);
	f30.f64 = double(temp.f32);
loc_82385870:
	// lwz r4,108(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82385888
	if (ctx.cr6.eq) goto loc_82385888;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x82385e98
	if (!ctx.cr6.lt) goto loc_82385E98;
loc_82385888:
	// lwz r10,0(r18)
	ctx.r10.u64 = REX_LOAD_U32(r18.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8238589c
	if (ctx.cr6.eq) goto loc_8238589C;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82385e98
	if (!ctx.cr6.lt) goto loc_82385E98;
loc_8238589C:
	// lwz r10,0(r19)
	ctx.r10.u64 = REX_LOAD_U32(r19.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82385e98
	if (!ctx.cr6.lt) goto loc_82385E98;
	// lwz r10,0(r15)
	ctx.r10.u64 = REX_LOAD_U32(r15.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82385e98
	if (!ctx.cr6.lt) goto loc_82385E98;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82340718
	ctx.lr = 0x823858CC;
	sub_82340718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340de8
	ctx.lr = 0x823858E0;
	sub_82340DE8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// lbz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 96);
	// lbz r8,99(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 99);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// lbz r10,98(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 98);
	// lbz r9,97(r1)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + 97);
	// cmpwi cr6,r11,67
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 67, ctx.xer);
	// bne cr6,0x82385964
	if (!ctx.cr6.eq) goto loc_82385964;
	// extsb r7,r9
	ctx.r7.s64 = ctx.r9.s8;
	// cmpwi cr6,r7,72
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 72, ctx.xer);
	// bne cr6,0x82385964
	if (!ctx.cr6.eq) goto loc_82385964;
	// extsb r7,r10
	ctx.r7.s64 = ctx.r10.s8;
	// cmpwi cr6,r7,70
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 70, ctx.xer);
	// bne cr6,0x82385964
	if (!ctx.cr6.eq) goto loc_82385964;
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// cmpwi cr6,r7,88
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 88, ctx.xer);
	// bne cr6,0x82385964
	if (!ctx.cr6.eq) goto loc_82385964;
	// mr r30,r24
	r30.u64 = r24.u64;
	// addi r29,r31,15740
	r29.s64 = r31.s64 + 15740;
loc_82385930:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82385950
	if (!ctx.cr6.lt) goto loc_82385950;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340de8
	ctx.lr = 0x82385948;
	sub_82340DE8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
loc_82385950:
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpwi cr6,r30,256
	ctx.cr6.compare<int32_t>(r30.s32, 256, ctx.xer);
	// blt cr6,0x82385930
	if (ctx.cr6.lt) goto loc_82385930;
	// b 0x82385870
	goto loc_82385870;
loc_82385964:
	// cmpwi cr6,r11,69
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 69, ctx.xer);
	// bne cr6,0x823859b8
	if (!ctx.cr6.eq) goto loc_823859B8;
	// extsb r7,r9
	ctx.r7.s64 = ctx.r9.s8;
	// cmpwi cr6,r7,81
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 81, ctx.xer);
	// bne cr6,0x823859b8
	if (!ctx.cr6.eq) goto loc_823859B8;
	// extsb r7,r10
	ctx.r7.s64 = ctx.r10.s8;
	// cmpwi cr6,r7,70
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 70, ctx.xer);
	// bne cr6,0x823859b8
	if (!ctx.cr6.eq) goto loc_823859B8;
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// cmpwi cr6,r7,88
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 88, ctx.xer);
	// bne cr6,0x823859b8
	if (!ctx.cr6.eq) goto loc_823859B8;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340e38
	ctx.lr = 0x823859A0;
	sub_82340E38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82385870
	if (ctx.cr6.eq) goto loc_82385870;
	// addi r1,r1,2512
	ctx.r1.s64 = ctx.r1.s64 + 2512;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x826a2cf4
	ctx.lr = 0x823859B4;
	// b 0x826a1cd0
	return;
loc_823859B8:
	// cmpwi cr6,r11,70
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 70, ctx.xer);
	// bne cr6,0x82385e94
	if (!ctx.cr6.eq) goto loc_82385E94;
	// extsb r11,r9
	ctx.r11.s64 = ctx.r9.s8;
	// cmpwi cr6,r11,88
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 88, ctx.xer);
	// bne cr6,0x82385e94
	if (!ctx.cr6.eq) goto loc_82385E94;
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// blt cr6,0x82385e94
	if (ctx.cr6.lt) goto loc_82385E94;
	// extsb r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	// cmpwi cr6,r9,48
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 48, ctx.xer);
	// blt cr6,0x82385e94
	if (ctx.cr6.lt) goto loc_82385E94;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r30,r11,-528
	r30.s64 = ctx.r11.s64 + -528;
	// cmpwi cr6,r30,50
	ctx.cr6.compare<int32_t>(r30.s32, 50, ctx.xer);
	// bge cr6,0x82385e5c
	if (!ctx.cr6.lt) goto loc_82385E5C;
	// cmplwi cr6,r4,132
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 132, ctx.xer);
	// blt cr6,0x82385e5c
	if (ctx.cr6.lt) goto loc_82385E5C;
	// lis r20,-32129
	r20.s64 = -2105606144;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4524
	ctx.r6.s64 = 4524;
	// lwz r11,1012(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 1012);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x82385A28;
	sub_82330E40(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82385e80
	if (ctx.cr6.eq) goto loc_82385E80;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// bl 0x82340718
	ctx.lr = 0x82385A4C;
	sub_82340718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// lwz r11,128(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 128);
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
	// addi r3,r23,64
	ctx.r3.s64 = r23.s64 + 64;
	// or r29,r8,r7
	r29.u64 = ctx.r8.u64 | ctx.r7.u64;
	// bl 0x82331620
	ctx.lr = 0x82385A84;
	sub_82331620(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82385e38
	if (!ctx.cr6.eq) goto loc_82385E38;
	// cmplwi cr6,r29,24
	ctx.cr6.compare<uint32_t>(r29.u32, 24, ctx.xer);
	// bne cr6,0x82385e38
	if (!ctx.cr6.eq) goto loc_82385E38;
	// addi r11,r30,3885
	ctx.r11.s64 = r30.s64 + 3885;
	// rlwinm r29,r11,2,0,29
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r29,r31
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82385ad4
	if (!ctx.cr6.eq) goto loc_82385AD4;
	// lwz r11,1012(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 1012);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4548
	ctx.r6.s64 = 4548;
	// lwz r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// li r4,232
	ctx.r4.s64 = 232;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x82385AC4;
	sub_82330E40(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stwx r3,r29,r31
	REX_STORE_U32(r29.u32 + r31.u32, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82385268
	if (ctx.cr6.eq) goto loc_82385268;
loc_82385AD4:
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r24,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r24.u32);
	// addi r9,r11,44
	ctx.r9.s64 = ctx.r11.s64 + 44;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// li r5,128
	ctx.r5.s64 = 128;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// stw r22,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r22.u32);
	// stw r9,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r9.u32);
	// stw r9,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r9.u32);
	// stw r24,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, r24.u32);
	// stfs f31,68(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// stfs f31,64(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// stfs f31,92(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 92, temp.u32);
	// stfs f31,88(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 88, temp.u32);
	// stfs f30,76(r11)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r11.u32 + 76, temp.u32);
	// stfs f30,72(r11)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r11.u32 + 72, temp.u32);
	// stfs f31,84(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 84, temp.u32);
	// stfs f31,80(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 80, temp.u32);
	// lwzx r11,r29,r31
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + r31.u32);
	// addi r3,r11,104
	ctx.r3.s64 = ctx.r11.s64 + 104;
	// bl 0x826a1e70
	ctx.lr = 0x82385B2C;
	sub_826A1E70(ctx, base);
	// lwzx r11,r29,r31
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + r31.u32);
	// lwz r10,112(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// lbz r9,112(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 112);
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
	// stw r4,112(r11)
	REX_STORE_U32(ctx.r11.u32 + 112, ctx.r4.u32);
	// lwzx r11,r29,r31
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + r31.u32);
	// lbz r3,116(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 116);
	// lwz r10,116(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 116);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// rlwimi r9,r10,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r8,r10,24,16,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF00;
	// rlwinm r7,r9,8,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// or r5,r6,r3
	ctx.r5.u64 = ctx.r6.u64 | ctx.r3.u64;
	// stw r5,116(r11)
	REX_STORE_U32(ctx.r11.u32 + 116, ctx.r5.u32);
	// lwzx r11,r29,r31
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + r31.u32);
	// lbz r4,104(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 104);
	// lwz r3,104(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
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
	// stw r6,104(r11)
	REX_STORE_U32(ctx.r11.u32 + 104, ctx.r6.u32);
	// lwzx r11,r29,r31
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + r31.u32);
	// lbz r5,108(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 108);
	// lwz r4,108(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
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
	// stw r7,108(r11)
	REX_STORE_U32(ctx.r11.u32 + 108, ctx.r7.u32);
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r5,r6,-132
	ctx.r5.s64 = ctx.r6.s64 + -132;
	// cmplwi cr6,r5,24
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 24, ctx.xer);
	// blt cr6,0x82385e38
	if (ctx.cr6.lt) goto loc_82385E38;
	// lwz r11,1012(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 1012);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4571
	ctx.r6.s64 = 4571;
	// lwz r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// li r4,24
	ctx.r4.s64 = 24;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x82385BF8;
	sub_82330E40(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82385268
	if (ctx.cr6.eq) goto loc_82385268;
	// li r5,24
	ctx.r5.s64 = 24;
	// addi r4,r23,132
	ctx.r4.s64 = r23.s64 + 132;
	// bl 0x823ef2f8
	ctx.lr = 0x82385C10;
	sub_823EF2F8(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lbz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + 8);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwinm r8,r11,24,16,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF00;
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// addi r27,r30,8
	r27.s64 = r30.s64 + 8;
	// rlwinm r7,r9,8,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// addi r26,r30,12
	r26.s64 = r30.s64 + 12;
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// addi r24,r30,20
	r24.s64 = r30.s64 + 20;
	// or r5,r6,r10
	ctx.r5.u64 = ctx.r6.u64 | ctx.r10.u64;
	// addi r25,r30,16
	r25.s64 = r30.s64 + 16;
	// stw r5,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r5.u32);
	// addi r28,r30,4
	r28.s64 = r30.s64 + 4;
	// lwz r3,12(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 12);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// rlwimi r11,r3,16,0,15
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000) | (ctx.r11.u64 & 0xFFFFFFFF0000FFFF);
	// lbz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + 12);
	// rlwinm r9,r3,24,16,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFF00;
	// rlwinm r8,r11,8,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFF0000;
	// or r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 | ctx.r9.u64;
	// or r6,r7,r10
	ctx.r6.u64 = ctx.r7.u64 | ctx.r10.u64;
	// stw r6,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r6.u32);
	// lbz r5,20(r30)
	ctx.r5.u64 = REX_LOAD_U8(r30.u32 + 20);
	// lwz r3,20(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 20);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// rlwimi r11,r3,16,0,15
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000) | (ctx.r11.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r10,r3,24,16,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFF00;
	// rlwinm r9,r11,8,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFF0000;
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// or r7,r8,r5
	ctx.r7.u64 = ctx.r8.u64 | ctx.r5.u64;
	// stw r7,20(r30)
	REX_STORE_U32(r30.u32 + 20, ctx.r7.u32);
	// lbz r6,16(r30)
	ctx.r6.u64 = REX_LOAD_U8(r30.u32 + 16);
	// lwz r5,16(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 16);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// rlwimi r3,r5,16,0,15
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFFFF0000) | (ctx.r3.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r5,24,16,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFF00;
	// rlwinm r10,r3,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFF0000;
	// or r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 | ctx.r11.u64;
	// or r8,r9,r6
	ctx.r8.u64 = ctx.r9.u64 | ctx.r6.u64;
	// stw r8,16(r30)
	REX_STORE_U32(r30.u32 + 16, ctx.r8.u32);
	// lbz r7,4(r30)
	ctx.r7.u64 = REX_LOAD_U8(r30.u32 + 4);
	// lwz r6,4(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// rlwimi r5,r6,16,0,15
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xFFFF0000) | (ctx.r5.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r3,r6,24,16,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0xFF00;
	// rlwinm r11,r5,8,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFF0000;
	// or r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 | ctx.r3.u64;
	// or r9,r10,r7
	ctx.r9.u64 = ctx.r10.u64 | ctx.r7.u64;
	// stw r9,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r9.u32);
	// lbz r8,0(r30)
	ctx.r8.u64 = REX_LOAD_U8(r30.u32 + 0);
	// lwz r7,0(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// rlwimi r6,r7,16,0,15
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF0000) | (ctx.r6.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r5,r7,24,16,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFF00;
	// rlwinm r3,r6,8,0,15
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r3,r5
	ctx.r11.u64 = ctx.r3.u64 | ctx.r5.u64;
	// or r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 | ctx.r8.u64;
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// lwzx r9,r29,r31
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + r31.u32);
	// stfs f31,64(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r9.u32 + 64, temp.u32);
	// lwzx r11,r29,r31
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + r31.u32);
	// addi r5,r11,28
	ctx.r5.s64 = ctx.r11.s64 + 28;
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// bl 0x82336570
	ctx.lr = 0x82385D18;
	sub_82336570(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// lwzx r11,r29,r31
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + r31.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// stw r10,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// lwzx r8,r29,r31
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + r31.u32);
	// lwz r9,32(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r29,32(r8)
	r29.u64 = REX_LOAD_U32(ctx.r8.u32 + 32);
	// lwz r7,264(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 264);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// lwz r5,0(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// std r6,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r6.u64);
	// lfd f0,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,260(r29)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r29.u32 + 260, temp.u32);
	// lwz r11,40(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 40);
	// lfs f11,0(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f1,f11,f29
	ctx.f1.f64 = double(float(ctx.f11.f64 * f29.f64));
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82385D74;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lfs f0,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r4,1
	ctx.r4.s64 = 1;
	// fmuls f1,f0,f29
	ctx.f1.f64 = double(float(ctx.f0.f64 * f29.f64));
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82385D9C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lfs f0,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r26.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r4,2
	ctx.r4.s64 = 2;
	// fmuls f1,f0,f28
	ctx.f1.f64 = double(float(ctx.f0.f64 * f28.f64));
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82385DC4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lfs f0,0(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r25.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r4,3
	ctx.r4.s64 = 3;
	// fmuls f1,f0,f28
	ctx.f1.f64 = double(float(ctx.f0.f64 * f28.f64));
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82385DEC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lfs f1,0(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r24.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lwz r10,40(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82385E10;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// lwz r11,1012(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 1012);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4634
	ctx.r6.s64 = 4634;
	// lwz r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x82385E34;
	sub_82330D00(ctx, base);
	// li r24,0
	r24.s64 = 0;
loc_82385E38:
	// lwz r11,1012(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 1012);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4639
	ctx.r6.s64 = 4639;
	// lwz r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x82385E54;
	sub_82330D00(ctx, base);
	// lwz r23,88(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// b 0x82385870
	goto loc_82385870;
loc_82385E5C:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340e38
	ctx.lr = 0x82385E68;
	sub_82340E38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82385870
	if (ctx.cr6.eq) goto loc_82385870;
	// addi r1,r1,2512
	ctx.r1.s64 = ctx.r1.s64 + 2512;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x826a2cf4
	ctx.lr = 0x82385E7C;
	// b 0x826a1cd0
	return;
loc_82385E80:
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r1,r1,2512
	ctx.r1.s64 = ctx.r1.s64 + 2512;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x826a2cf4
	ctx.lr = 0x82385E90;
	// b 0x826a1cd0
	return;
loc_82385E94:
	// lwz r4,108(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
loc_82385E98:
	// lwz r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82385f80
	if (ctx.cr6.eq) goto loc_82385F80;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340e38
	ctx.lr = 0x82385EB0;
	sub_82340E38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lwz r10,120(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4665
	ctx.r6.s64 = 4665;
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// lwz r11,1012(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1012);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x82385EDC;
	sub_82330E40(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82385268
	if (ctx.cr6.eq) goto loc_82385268;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,120(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82340718
	ctx.lr = 0x82385F00;
	sub_82340718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// lwz r7,120(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x82385f38
	if (!ctx.cr6.gt) goto loc_82385F38;
loc_82385F18:
	// lbzx r10,r30,r11
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,13
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 13, ctx.xer);
	// bne cr6,0x82385f2c
	if (!ctx.cr6.eq) goto loc_82385F2C;
	// stbx r16,r30,r11
	REX_STORE_U8(r30.u32 + ctx.r11.u32, r16.u8);
	// lwz r7,120(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
loc_82385F2C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82385f18
	if (ctx.cr6.lt) goto loc_82385F18;
loc_82385F38:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r5,r11,19584
	ctx.r5.s64 = ctx.r11.s64 + 19584;
	// li r8,3
	ctx.r8.s64 = 3;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8239e6b0
	ctx.lr = 0x82385F58;
	sub_8239E6B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4691
	ctx.r6.s64 = 4691;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,1012(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1012);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x82385F80;
	sub_82330D00(ctx, base);
loc_82385F80:
	// lwz r11,788(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 788);
	// addi r27,r31,788
	r27.s64 = r31.s64 + 788;
	// mr r29,r24
	r29.u64 = r24.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82386004
	if (!ctx.cr6.gt) goto loc_82386004;
	// mr r28,r17
	r28.u64 = r17.u64;
loc_82385F98:
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4701
	ctx.r6.s64 = 4701;
	// li r4,696
	ctx.r4.s64 = 696;
	// lwz r11,1012(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1012);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x82385FB8;
	sub_82330E40(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82385fdc
	if (ctx.cr6.eq) goto loc_82385FDC;
	// stw r3,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// stw r30,4(r30)
	REX_STORE_U32(r30.u32 + 4, r30.u32);
	// stw r24,8(r30)
	REX_STORE_U32(r30.u32 + 8, r24.u32);
	// bl 0x8234d858
	ctx.lr = 0x82385FD8;
	sub_8234D858(ctx, base);
	// b 0x82385fe0
	goto loc_82385FE0;
loc_82385FDC:
	// mr r30,r24
	r30.u64 = r24.u64;
loc_82385FE0:
	// stw r30,0(r28)
	REX_STORE_U32(r28.u32 + 0, r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82385268
	if (ctx.cr6.eq) goto loc_82385268;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// stw r31,688(r30)
	REX_STORE_U32(r30.u32 + 688, r31.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82385f98
	if (ctx.cr6.lt) goto loc_82385F98;
loc_82386004:
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
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8239e6b0
	ctx.lr = 0x82386028;
	sub_8239E6B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lwz r10,0(r14)
	ctx.r10.u64 = REX_LOAD_U32(r14.u32 + 0);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4723
	ctx.r6.s64 = 4723;
	// mulli r4,r10,1492
	ctx.r4.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(1492));
	// lwz r11,1012(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1012);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x82386054;
	sub_82330E40(ctx, base);
	// stw r3,1428(r31)
	REX_STORE_U32(r31.u32 + 1428, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82385268
	if (ctx.cr6.eq) goto loc_82385268;
	// lwz r11,0(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 0);
	// li r22,0
	r22.s64 = 0;
	// li r19,1
	r19.s64 = 1;
	// mr r24,r22
	r24.u64 = r22.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82386718
	if (!ctx.cr6.gt) goto loc_82386718;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r25,r22
	r25.u64 = r22.u64;
	// addi r23,r11,19576
	r23.s64 = ctx.r11.s64 + 19576;
loc_82386084:
	// lwz r11,1428(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1428);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,0(r18)
	ctx.r4.u64 = REX_LOAD_U32(r18.u32 + 0);
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// add r30,r11,r25
	r30.u64 = ctx.r11.u64 + r25.u64;
	// bl 0x82340e38
	ctx.lr = 0x8238609C;
	sub_82340E38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,784
	ctx.r4.s64 = ctx.r1.s64 + 784;
	// bl 0x82340718
	ctx.lr = 0x823860BC;
	sub_82340718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,784
	ctx.r3.s64 = ctx.r1.s64 + 784;
	// bl 0x82331620
	ctx.lr = 0x823860D4;
	sub_82331620(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82385064
	if (!ctx.cr6.eq) goto loc_82385064;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x82340e38
	ctx.lr = 0x823860EC;
	sub_82340E38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340c58
	ctx.lr = 0x82386100;
	sub_82340C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// addi r4,r30,1232
	ctx.r4.s64 = r30.s64 + 1232;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340c58
	ctx.lr = 0x82386114;
	sub_82340C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// addi r4,r30,1233
	ctx.r4.s64 = r30.s64 + 1233;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340c58
	ctx.lr = 0x82386128;
	sub_82340C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// addi r4,r30,1234
	ctx.r4.s64 = r30.s64 + 1234;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340c58
	ctx.lr = 0x8238613C;
	sub_82340C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// addi r4,r30,1228
	ctx.r4.s64 = r30.s64 + 1228;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340cf8
	ctx.lr = 0x82386150;
	sub_82340CF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// addi r4,r30,1235
	ctx.r4.s64 = r30.s64 + 1235;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340c58
	ctx.lr = 0x82386164;
	sub_82340C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// addi r4,r30,1236
	ctx.r4.s64 = r30.s64 + 1236;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340c58
	ctx.lr = 0x82386178;
	sub_82340C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// addi r4,r30,1230
	ctx.r4.s64 = r30.s64 + 1230;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340c58
	ctx.lr = 0x8238618C;
	sub_82340C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// addi r4,r30,1231
	ctx.r4.s64 = r30.s64 + 1231;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340c58
	ctx.lr = 0x823861A0;
	sub_82340C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// addi r4,r30,1237
	ctx.r4.s64 = r30.s64 + 1237;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340c58
	ctx.lr = 0x823861B4;
	sub_82340C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// addi r4,r30,1238
	ctx.r4.s64 = r30.s64 + 1238;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340c58
	ctx.lr = 0x823861C8;
	sub_82340C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82340e38
	ctx.lr = 0x823861E0;
	sub_82340E38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// addi r4,r30,28
	ctx.r4.s64 = r30.s64 + 28;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340ca8
	ctx.lr = 0x823861F4;
	sub_82340CA8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340c58
	ctx.lr = 0x82386208;
	sub_82340C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r6,26
	ctx.r6.s64 = 26;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82340718
	ctx.lr = 0x82386228;
	sub_82340718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// addi r29,r30,1480
	r29.s64 = r30.s64 + 1480;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82340c08
	ctx.lr = 0x82386240;
	sub_82340C08(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8238625c
	if (ctx.cr6.eq) goto loc_8238625C;
	// stb r19,92(r1)
	REX_STORE_U8(ctx.r1.u32 + 92, r19.u8);
loc_8238625C:
	// addi r4,r30,1484
	ctx.r4.s64 = r30.s64 + 1484;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340c08
	ctx.lr = 0x82386268;
	sub_82340C08(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// addi r4,r30,1488
	ctx.r4.s64 = r30.s64 + 1488;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340c58
	ctx.lr = 0x8238627C;
	sub_82340C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340c58
	ctx.lr = 0x82386290;
	sub_82340C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82340e38
	ctx.lr = 0x823862A8;
	sub_82340E38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r6,240
	ctx.r6.s64 = 240;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r30,1239
	ctx.r4.s64 = r30.s64 + 1239;
	// bl 0x82340718
	ctx.lr = 0x823862C8;
	sub_82340718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// stb r22,960(r30)
	REX_STORE_U8(r30.u32 + 960, r22.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340c58
	ctx.lr = 0x823862E0;
	sub_82340C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82386304
	if (ctx.cr6.eq) goto loc_82386304;
	// lbz r11,960(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 960);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stb r10,960(r30)
	REX_STORE_U8(r30.u32 + 960, ctx.r10.u8);
loc_82386304:
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82386320
	if (ctx.cr6.eq) goto loc_82386320;
	// lbz r11,960(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 960);
	// ori r10,r11,4
	ctx.r10.u64 = ctx.r11.u64 | 4;
	// stb r10,960(r30)
	REX_STORE_U8(r30.u32 + 960, ctx.r10.u8);
loc_82386320:
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8238633c
	if (ctx.cr6.eq) goto loc_8238633C;
	// lbz r11,960(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 960);
	// ori r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 2;
	// stb r10,960(r30)
	REX_STORE_U8(r30.u32 + 960, ctx.r10.u8);
loc_8238633C:
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82386358
	if (ctx.cr6.eq) goto loc_82386358;
	// lbz r11,960(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 960);
	// ori r10,r11,8
	ctx.r10.u64 = ctx.r11.u64 | 8;
	// stb r10,960(r30)
	REX_STORE_U8(r30.u32 + 960, ctx.r10.u8);
loc_82386358:
	// addi r26,r30,961
	r26.s64 = r30.s64 + 961;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82340c58
	ctx.lr = 0x82386368;
	sub_82340C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// addi r4,r30,1043
	ctx.r4.s64 = r30.s64 + 1043;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340c58
	ctx.lr = 0x8238637C;
	sub_82340C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// addi r4,r30,1044
	ctx.r4.s64 = r30.s64 + 1044;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340c58
	ctx.lr = 0x82386390;
	sub_82340C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// addi r4,r30,1045
	ctx.r4.s64 = r30.s64 + 1045;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340c58
	ctx.lr = 0x823863A4;
	sub_82340C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// addi r4,r30,1046
	ctx.r4.s64 = r30.s64 + 1046;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340c58
	ctx.lr = 0x823863B8;
	sub_82340C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// addi r27,r30,962
	r27.s64 = r30.s64 + 962;
	// mr r29,r22
	r29.u64 = r22.u64;
loc_823863C8:
	// add r28,r29,r27
	r28.u64 = r29.u64 + r27.u64;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82340c58
	ctx.lr = 0x823863D8;
	sub_82340C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340cf8
	ctx.lr = 0x823863EC;
	sub_82340CF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// lhz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 128);
	// addi r29,r29,3
	r29.s64 = r29.s64 + 3;
	// cmpwi cr6,r29,75
	ctx.cr6.compare<int32_t>(r29.s32, 75, ctx.xer);
	// sth r11,1(r28)
	REX_STORE_U16(r28.u32 + 1, ctx.r11.u16);
	// blt cr6,0x823863c8
	if (ctx.cr6.lt) goto loc_823863C8;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340c58
	ctx.lr = 0x82386414;
	sub_82340C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// lbz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U8(r26.u32 + 0);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x8238642c
	if (!ctx.cr6.lt) goto loc_8238642C;
	// stb r22,960(r30)
	REX_STORE_U8(r30.u32 + 960, r22.u8);
loc_8238642C:
	// stb r22,1047(r30)
	REX_STORE_U8(r30.u32 + 1047, r22.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340c58
	ctx.lr = 0x8238643C;
	sub_82340C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82386460
	if (ctx.cr6.eq) goto loc_82386460;
	// lbz r11,1047(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 1047);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stb r10,1047(r30)
	REX_STORE_U8(r30.u32 + 1047, ctx.r10.u8);
loc_82386460:
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8238647c
	if (ctx.cr6.eq) goto loc_8238647C;
	// lbz r11,1047(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 1047);
	// ori r10,r11,4
	ctx.r10.u64 = ctx.r11.u64 | 4;
	// stb r10,1047(r30)
	REX_STORE_U8(r30.u32 + 1047, ctx.r10.u8);
loc_8238647C:
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82386498
	if (ctx.cr6.eq) goto loc_82386498;
	// lbz r11,1047(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 1047);
	// ori r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 2;
	// stb r10,1047(r30)
	REX_STORE_U8(r30.u32 + 1047, ctx.r10.u8);
loc_82386498:
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823864b4
	if (ctx.cr6.eq) goto loc_823864B4;
	// lbz r11,1047(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 1047);
	// ori r10,r11,8
	ctx.r10.u64 = ctx.r11.u64 | 8;
	// stb r10,1047(r30)
	REX_STORE_U8(r30.u32 + 1047, ctx.r10.u8);
loc_823864B4:
	// addi r26,r30,1048
	r26.s64 = r30.s64 + 1048;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82340c58
	ctx.lr = 0x823864C4;
	sub_82340C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// addi r4,r30,1131
	ctx.r4.s64 = r30.s64 + 1131;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340c58
	ctx.lr = 0x823864D8;
	sub_82340C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// addi r4,r30,1132
	ctx.r4.s64 = r30.s64 + 1132;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340c58
	ctx.lr = 0x823864EC;
	sub_82340C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// addi r4,r30,1133
	ctx.r4.s64 = r30.s64 + 1133;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340c58
	ctx.lr = 0x82386500;
	sub_82340C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// addi r4,r30,1134
	ctx.r4.s64 = r30.s64 + 1134;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340c58
	ctx.lr = 0x82386514;
	sub_82340C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// addi r27,r30,1050
	r27.s64 = r30.s64 + 1050;
	// mr r29,r22
	r29.u64 = r22.u64;
loc_82386524:
	// add r28,r29,r27
	r28.u64 = r29.u64 + r27.u64;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82340c58
	ctx.lr = 0x82386534;
	sub_82340C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340cf8
	ctx.lr = 0x82386548;
	sub_82340CF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// lhz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 96);
	// addi r29,r29,3
	r29.s64 = r29.s64 + 3;
	// cmpwi cr6,r29,75
	ctx.cr6.compare<int32_t>(r29.s32, 75, ctx.xer);
	// sth r11,1(r28)
	REX_STORE_U16(r28.u32 + 1, ctx.r11.u16);
	// blt cr6,0x82386524
	if (ctx.cr6.lt) goto loc_82386524;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340c58
	ctx.lr = 0x82386570;
	sub_82340C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// lbz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U8(r26.u32 + 0);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x82386588
	if (!ctx.cr6.lt) goto loc_82386588;
	// stb r22,1047(r30)
	REX_STORE_U8(r30.u32 + 1047, r22.u8);
loc_82386588:
	// stb r22,1135(r30)
	REX_STORE_U8(r30.u32 + 1135, r22.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340c58
	ctx.lr = 0x82386598;
	sub_82340C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823865bc
	if (ctx.cr6.eq) goto loc_823865BC;
	// lbz r11,1135(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 1135);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stb r10,1135(r30)
	REX_STORE_U8(r30.u32 + 1135, ctx.r10.u8);
loc_823865BC:
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823865d8
	if (ctx.cr6.eq) goto loc_823865D8;
	// lbz r11,1135(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 1135);
	// ori r10,r11,4
	ctx.r10.u64 = ctx.r11.u64 | 4;
	// stb r10,1135(r30)
	REX_STORE_U8(r30.u32 + 1135, ctx.r10.u8);
loc_823865D8:
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823865f4
	if (ctx.cr6.eq) goto loc_823865F4;
	// lbz r11,1135(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 1135);
	// ori r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 2;
	// stb r10,1135(r30)
	REX_STORE_U8(r30.u32 + 1135, ctx.r10.u8);
loc_823865F4:
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82386610
	if (ctx.cr6.eq) goto loc_82386610;
	// lbz r11,1135(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 1135);
	// ori r10,r11,8
	ctx.r10.u64 = ctx.r11.u64 | 8;
	// stb r10,1135(r30)
	REX_STORE_U8(r30.u32 + 1135, ctx.r10.u8);
loc_82386610:
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// rlwinm r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8238662c
	if (ctx.cr6.eq) goto loc_8238662C;
	// lbz r11,1135(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 1135);
	// ori r10,r11,16
	ctx.r10.u64 = ctx.r11.u64 | 16;
	// stb r10,1135(r30)
	REX_STORE_U8(r30.u32 + 1135, ctx.r10.u8);
loc_8238662C:
	// addi r26,r30,1136
	r26.s64 = r30.s64 + 1136;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82340c58
	ctx.lr = 0x8238663C;
	sub_82340C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// addi r4,r30,1219
	ctx.r4.s64 = r30.s64 + 1219;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340c58
	ctx.lr = 0x82386650;
	sub_82340C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// addi r4,r30,1220
	ctx.r4.s64 = r30.s64 + 1220;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340c58
	ctx.lr = 0x82386664;
	sub_82340C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// addi r4,r30,1221
	ctx.r4.s64 = r30.s64 + 1221;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340c58
	ctx.lr = 0x82386678;
	sub_82340C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// addi r4,r30,1222
	ctx.r4.s64 = r30.s64 + 1222;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340c58
	ctx.lr = 0x8238668C;
	sub_82340C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// addi r27,r30,1138
	r27.s64 = r30.s64 + 1138;
	// mr r29,r22
	r29.u64 = r22.u64;
loc_8238669C:
	// add r28,r29,r27
	r28.u64 = r29.u64 + r27.u64;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82340c58
	ctx.lr = 0x823866AC;
	sub_82340C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340cf8
	ctx.lr = 0x823866C0;
	sub_82340CF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// lhz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 84);
	// addi r29,r29,3
	r29.s64 = r29.s64 + 3;
	// cmpwi cr6,r29,75
	ctx.cr6.compare<int32_t>(r29.s32, 75, ctx.xer);
	// sth r11,1(r28)
	REX_STORE_U16(r28.u32 + 1, ctx.r11.u16);
	// blt cr6,0x8238669c
	if (ctx.cr6.lt) goto loc_8238669C;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340c58
	ctx.lr = 0x823866E8;
	sub_82340C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// lbz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U8(r26.u32 + 0);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x82386700
	if (!ctx.cr6.lt) goto loc_82386700;
	// stb r22,1135(r30)
	REX_STORE_U8(r30.u32 + 1135, r22.u8);
loc_82386700:
	// lwz r11,0(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 0);
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// addi r25,r25,1492
	r25.s64 = r25.s64 + 1492;
	// addi r18,r18,4
	r18.s64 = r18.s64 + 4;
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(r24.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82386084
	if (ctx.cr6.lt) goto loc_82386084;
loc_82386718:
	// lwz r11,1424(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1424);
	// addi r30,r31,1424
	r30.s64 = r31.s64 + 1424;
	// lwz r20,88(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r22,2204(r31)
	REX_STORE_U32(r31.u32 + 2204, r22.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8238675c
	if (ctx.cr6.eq) goto loc_8238675C;
	// lis r10,-32129
	ctx.r10.s64 = -2105606144;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// li r6,5089
	ctx.r6.s64 = 5089;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,1012(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 1012);
	// lwz r3,4(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x82386750;
	sub_82330E40(ctx, base);
	// stw r3,2204(r31)
	REX_STORE_U32(r31.u32 + 2204, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82385268
	if (ctx.cr6.eq) goto loc_82385268;
loc_8238675C:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r21,r22
	r21.u64 = r22.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82386ca0
	if (!ctx.cr6.gt) goto loc_82386CA0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r23,144(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r20,r31,2208
	r20.s64 = r31.s64 + 2208;
	// li r14,8363
	r14.s64 = 8363;
	// li r15,14
	r15.s64 = 14;
	// li r16,28
	r16.s64 = 28;
	// li r19,112
	r19.s64 = 112;
	// addi r18,r11,19560
	r18.s64 = ctx.r11.s64 + 19560;
	// addi r17,r10,19552
	r17.s64 = ctx.r10.s64 + 19552;
loc_82386794:
	// lwz r11,2204(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2204);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,148(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// stwx r20,r22,r11
	REX_STORE_U32(r22.u32 + ctx.r11.u32, r20.u32);
	// lwzx r4,r22,r10
	ctx.r4.u64 = REX_LOAD_U32(r22.u32 + ctx.r10.u32);
	// lwz r9,2204(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 2204);
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// lwzx r29,r22,r9
	r29.u64 = REX_LOAD_U32(r22.u32 + ctx.r9.u32);
	// bl 0x82340e38
	ctx.lr = 0x823867B8;
	sub_82340E38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,784
	ctx.r4.s64 = ctx.r1.s64 + 784;
	// bl 0x82340718
	ctx.lr = 0x823867D8;
	sub_82340718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,784
	ctx.r3.s64 = ctx.r1.s64 + 784;
	// bl 0x82331620
	ctx.lr = 0x823867F0;
	sub_82331620(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82385064
	if (!ctx.cr6.eq) goto loc_82385064;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x82340e38
	ctx.lr = 0x82386808;
	sub_82340E38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340c58
	ctx.lr = 0x8238681C;
	sub_82340C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// addi r4,r29,33
	ctx.r4.s64 = r29.s64 + 33;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340c58
	ctx.lr = 0x82386830;
	sub_82340C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// addi r30,r29,32
	r30.s64 = r29.s64 + 32;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82340c58
	ctx.lr = 0x82386848;
	sub_82340C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// lbz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 0);
	// li r25,1
	r25.s64 = 1;
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// rlwinm r9,r11,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cntlzw r8,r10
	ctx.r8.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// xori r10,r7,1
	ctx.r10.u64 = ctx.r7.u64 ^ 1;
	// addi r24,r10,1
	r24.s64 = ctx.r10.s64 + 1;
	// beq cr6,0x8238687c
	if (ctx.cr6.eq) goto loc_8238687C;
	// li r25,2
	r25.s64 = 2;
loc_8238687C:
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823868a0
	if (ctx.cr6.eq) goto loc_823868A0;
	// rlwinm r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r9,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// addi r26,r11,74
	r26.s64 = ctx.r11.s64 + 74;
	// b 0x823868a4
	goto loc_823868A4;
loc_823868A0:
	// li r26,73
	r26.s64 = 73;
loc_823868A4:
	// addi r4,r29,8
	ctx.r4.s64 = r29.s64 + 8;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340c58
	ctx.lr = 0x823868B0;
	sub_82340C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r6,26
	ctx.r6.s64 = 26;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// bl 0x82340718
	ctx.lr = 0x823868D0;
	sub_82340718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// addi r3,r1,1040
	ctx.r3.s64 = ctx.r1.s64 + 1040;
	// bl 0x826a0568
	ctx.lr = 0x823868E8;
	sub_826A0568(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,3
	ctx.r8.s64 = 3;
	// li r7,28
	ctx.r7.s64 = 28;
	// addi r6,r1,320
	ctx.r6.s64 = ctx.r1.s64 + 320;
	// addi r5,r1,1040
	ctx.r5.s64 = ctx.r1.s64 + 1040;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8239e6b0
	ctx.lr = 0x82386908;
	sub_8239E6B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// addi r11,r1,2064
	ctx.r11.s64 = ctx.r1.s64 + 2064;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// add r4,r11,r21
	ctx.r4.u64 = ctx.r11.u64 + r21.u64;
	// bl 0x82340c58
	ctx.lr = 0x82386920;
	sub_82340C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// addi r4,r29,9
	ctx.r4.s64 = r29.s64 + 9;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340c58
	ctx.lr = 0x82386934;
	sub_82340C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x82340718
	ctx.lr = 0x82386954;
	sub_82340718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// addi r27,r29,12
	r27.s64 = r29.s64 + 12;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82340718
	ctx.lr = 0x82386978;
	sub_82340718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// addi r28,r29,16
	r28.s64 = r29.s64 + 16;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82340718
	ctx.lr = 0x8238699C;
	sub_82340718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82340718
	ctx.lr = 0x823869C0;
	sub_82340718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r29,36
	ctx.r4.s64 = r29.s64 + 36;
	// bl 0x82340718
	ctx.lr = 0x823869E0;
	sub_82340718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r29,40
	ctx.r4.s64 = r29.s64 + 40;
	// bl 0x82340718
	ctx.lr = 0x82386A00;
	sub_82340718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r5,4
	ctx.r5.s64 = 4;
	// add r4,r22,r11
	ctx.r4.u64 = r22.u64 + ctx.r11.u64;
	// bl 0x82340718
	ctx.lr = 0x82386A24;
	sub_82340718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// addi r4,r29,44
	ctx.r4.s64 = r29.s64 + 44;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340c58
	ctx.lr = 0x82386A38;
	sub_82340C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// addi r4,r29,45
	ctx.r4.s64 = r29.s64 + 45;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340c58
	ctx.lr = 0x82386A4C;
	sub_82340C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// addi r4,r29,47
	ctx.r4.s64 = r29.s64 + 47;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340c58
	ctx.lr = 0x82386A60;
	sub_82340C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// addi r4,r29,46
	ctx.r4.s64 = r29.s64 + 46;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340c58
	ctx.lr = 0x82386A74;
	sub_82340C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r10,0(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
	// bne cr6,0x82386a9c
	if (!ctx.cr6.eq) goto loc_82386A9C;
	// stw r14,0(r30)
	REX_STORE_U32(r30.u32 + 0, r14.u32);
loc_82386A9C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82386ab0
	if (ctx.cr6.eq) goto loc_82386AB0;
	// clrlwi r11,r26,31
	ctx.r11.u64 = r26.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82386ac8
	if (ctx.cr6.eq) goto loc_82386AC8;
loc_82386AB0:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
	// rlwimi r26,r10,0,29,31
	r26.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x7) | (r26.u64 & 0xFFFFFFFFFFFFFFF8);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r9,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r9.u32);
loc_82386AC8:
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82386c74
	if (ctx.cr6.eq) goto loc_82386C74;
	// cmplwi cr6,r24,11
	ctx.cr6.compare<uint32_t>(r24.u32, 11, ctx.xer);
	// bgt cr6,0x82386be8
	if (ctx.cr6.gt) goto loc_82386BE8;
	// lis r12,-32200
	ctx.r12.s64 = -2110259200;
	// rlwinm r0,r24,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,27380
	ctx.r12.s64 = ctx.r12.s64 + 27380;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (r24.u32) {
	case 0:
		goto loc_82386B58;
	case 1:
		goto loc_82386B24;
	case 2:
		goto loc_82386B2C;
	case 3:
		goto loc_82386B34;
	case 4:
		goto loc_82386B3C;
	case 5:
		goto loc_82386B3C;
	case 6:
		goto loc_82386B58;
	case 7:
		goto loc_82386B58;
	case 8:
		goto loc_82386B58;
	case 9:
		goto loc_82386B58;
	case 10:
		goto loc_82386B58;
	case 11:
		goto loc_82386B58;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_82386B24:
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x82386b40
	goto loc_82386B40;
loc_82386B2C:
	// li r11,16
	ctx.r11.s64 = 16;
	// b 0x82386b40
	goto loc_82386B40;
loc_82386B34:
	// li r11,24
	ctx.r11.s64 = 24;
	// b 0x82386b40
	goto loc_82386B40;
loc_82386B3C:
	// li r11,32
	ctx.r11.s64 = 32;
loc_82386B40:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// mulld r9,r10,r11
	ctx.r9.s64 = static_cast<int64_t>(ctx.r10.u64 * ctx.r11.u64);
	// rldicl r8,r9,61,3
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 61) & 0x1FFFFFFFFFFFFFFF;
	// rotlwi r11,r8,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// b 0x82386be4
	goto loc_82386BE4;
loc_82386B58:
	// lis r12,-32200
	ctx.r12.s64 = -2110259200;
	// rlwinm r0,r24,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,27504
	ctx.r12.s64 = ctx.r12.s64 + 27504;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (r24.u32) {
	case 0:
		goto loc_82386BE0;
	case 1:
		goto loc_82386BE8;
	case 2:
		goto loc_82386BE8;
	case 3:
		goto loc_82386BE8;
	case 4:
		goto loc_82386BE8;
	case 5:
		goto loc_82386BE8;
	case 6:
		goto loc_82386BA0;
	case 7:
		goto loc_82386BB0;
	case 8:
		goto loc_82386BC8;
	case 9:
		goto loc_82386BD8;
	case 10:
		goto loc_82386BD8;
	case 11:
		goto loc_82386BD8;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_82386BA0:
	// addi r11,r10,13
	ctx.r11.s64 = ctx.r10.s64 + 13;
	// divwu r10,r11,r15
	ctx.r10.u64 = uint32_t(r15.u32 ? ctx.r11.u32 / r15.u32 : 0);
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// b 0x82386be4
	goto loc_82386BE4;
loc_82386BB0:
	// addi r11,r10,63
	ctx.r11.s64 = ctx.r10.s64 + 63;
	// rlwinm r11,r11,26,6,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFF;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x82386be4
	goto loc_82386BE4;
loc_82386BC8:
	// addi r11,r10,27
	ctx.r11.s64 = ctx.r10.s64 + 27;
	// divwu r10,r11,r16
	ctx.r10.u64 = uint32_t(r16.u32 ? ctx.r11.u32 / r16.u32 : 0);
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// b 0x82386be4
	goto loc_82386BE4;
loc_82386BD8:
	// mr r23,r10
	r23.u64 = ctx.r10.u64;
	// b 0x82386be8
	goto loc_82386BE8;
loc_82386BE0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82386BE4:
	// mullw r23,r11,r25
	r23.s64 = int64_t(ctx.r11.s32) * int64_t(r25.s32);
loc_82386BE8:
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// bl 0x823ef5f0
	ctx.lr = 0x82386BF8;
	sub_823EF5F0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// stw r23,676(r1)
	REX_STORE_U32(ctx.r1.u32 + 676, r23.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r19,672(r1)
	REX_STORE_U32(ctx.r1.u32 + 672, r19.u32);
	// addi r6,r1,672
	ctx.r6.s64 = ctx.r1.s64 + 672;
	// stw r25,684(r1)
	REX_STORE_U32(ctx.r1.u32 + 684, r25.u32);
	// ori r5,r26,1024
	ctx.r5.u64 = r26.u64 | 1024;
	// stw r24,692(r1)
	REX_STORE_U32(ctx.r1.u32 + 692, r24.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,688(r1)
	REX_STORE_U32(ctx.r1.u32 + 688, ctx.r11.u32);
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// bl 0x8233cb78
	ctx.lr = 0x82386C28;
	sub_8233CB78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// rlwinm r11,r26,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82386c48
	if (!ctx.cr6.eq) goto loc_82386C48;
	// rlwinm r11,r26,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82386c74
	if (ctx.cr6.eq) goto loc_82386C74;
loc_82386C48:
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r7,2
	ctx.r7.s64 = 2;
	// lwz r4,0(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 0);
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// lwz r9,172(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 172);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82386C74;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82386C74:
	// lwz r10,1424(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1424);
	// addi r21,r21,1
	r21.s64 = r21.s64 + 1;
	// addi r11,r31,1424
	ctx.r11.s64 = r31.s64 + 1424;
	// addi r20,r20,52
	r20.s64 = r20.s64 + 52;
	// addi r22,r22,4
	r22.s64 = r22.s64 + 4;
	// cmpw cr6,r21,r10
	ctx.cr6.compare<int32_t>(r21.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82386794
	if (ctx.cr6.lt) goto loc_82386794;
	// lwz r15,140(r1)
	r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// li r19,1
	r19.s64 = 1;
	// lwz r20,88(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// li r22,0
	r22.s64 = 0;
loc_82386CA0:
	// rlwinm r11,r21,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,152(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r21,104(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// addi r8,r31,1408
	ctx.r8.s64 = r31.s64 + 1408;
	// stwx r10,r11,r21
	REX_STORE_U32(ctx.r11.u32 + r21.u32, ctx.r10.u32);
	// stw r22,1412(r31)
	REX_STORE_U32(r31.u32 + 1412, r22.u32);
	// lwz r9,1408(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 1408);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82386d00
	if (!ctx.cr6.gt) goto loc_82386D00;
	// addi r11,r31,532
	ctx.r11.s64 = r31.s64 + 532;
	// subfic r9,r31,-532
	ctx.xer.ca = r31.u32 <= 4294966764;
	ctx.r9.u64 = static_cast<uint64_t>(-532) - r31.u64;
loc_82386CCC:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,254
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 254, ctx.xer);
	// bge cr6,0x82386cec
	if (!ctx.cr6.lt) goto loc_82386CEC;
	// lwz r7,1412(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 1412);
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82386cec
	if (ctx.cr6.lt) goto loc_82386CEC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,1412(r31)
	REX_STORE_U32(r31.u32 + 1412, ctx.r10.u32);
loc_82386CEC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmpw cr6,r7,r10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82386ccc
	if (ctx.cr6.lt) goto loc_82386CCC;
loc_82386D00:
	// lhz r10,94(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 94);
	// lwz r11,1412(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1412);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x82386d14
	if (ctx.cr6.gt) goto loc_82386D14;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82386D14:
	// stw r11,1416(r31)
	REX_STORE_U32(r31.u32 + 1416, ctx.r11.u32);
	// lis r26,-32129
	r26.s64 = -2105606144;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5344
	ctx.r6.s64 = 5344;
	// rlwinm r4,r11,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,1012(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 1012);
	// lwz r3,4(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x82386D38;
	sub_82330E40(ctx, base);
	// stw r3,520(r31)
	REX_STORE_U32(r31.u32 + 520, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82385268
	if (ctx.cr6.eq) goto loc_82385268;
	// lhz r11,94(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 94);
	// mr r27,r22
	r27.u64 = r22.u64;
	// li r25,64
	r25.s64 = 64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82386e5c
	if (!ctx.cr6.gt) goto loc_82386E5C;
	// mr r28,r15
	r28.u64 = r15.u64;
	// mr r29,r22
	r29.u64 = r22.u64;
loc_82386D60:
	// lwz r11,520(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 520);
	// lwz r4,0(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 0);
	// add r30,r29,r11
	r30.u64 = r29.u64 + ctx.r11.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x82386da4
	if (!ctx.cr6.eq) goto loc_82386DA4;
	// stw r25,0(r30)
	REX_STORE_U32(r30.u32 + 0, r25.u32);
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5374
	ctx.r6.s64 = 5374;
	// li r4,64
	ctx.r4.s64 = 64;
	// lwz r11,1012(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 1012);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x82386D94;
	sub_82330E40(ctx, base);
	// stw r3,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82385268
	if (ctx.cr6.eq) goto loc_82385268;
	// b 0x82386e44
	goto loc_82386E44;
loc_82386DA4:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340e38
	ctx.lr = 0x82386DB0;
	sub_82340E38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340cf8
	ctx.lr = 0x82386DC4;
	sub_82340CF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340cf8
	ctx.lr = 0x82386DD8;
	sub_82340CF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82340e38
	ctx.lr = 0x82386DF0;
	sub_82340E38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// lhz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 84);
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lhz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// li r6,5411
	ctx.r6.s64 = 5411;
	// stw r9,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r9.u32);
	// lwz r11,1012(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 1012);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x82386E1C;
	sub_82330E40(ctx, base);
	// stw r3,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r3.u32);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lhz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// bl 0x82340718
	ctx.lr = 0x82386E3C;
	sub_82340718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
loc_82386E44:
	// lhz r11,94(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 94);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82386d60
	if (ctx.cr6.lt) goto loc_82386D60;
loc_82386E5C:
	// lwz r10,1412(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1412);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82386eb8
	if (!ctx.cr6.lt) goto loc_82386EB8;
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
	// rlwinm r29,r11,3,0,28
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
loc_82386E70:
	// lwz r11,520(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 520);
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// add r30,r29,r11
	r30.u64 = r29.u64 + ctx.r11.u64;
	// li r6,5542
	ctx.r6.s64 = 5542;
	// li r4,64
	ctx.r4.s64 = 64;
	// stwx r25,r29,r11
	REX_STORE_U32(r29.u32 + ctx.r11.u32, r25.u32);
	// lwz r11,1012(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 1012);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x82386E98;
	sub_82330E40(ctx, base);
	// stw r3,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82385268
	if (ctx.cr6.eq) goto loc_82385268;
	// lwz r11,1412(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1412);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82386e70
	if (ctx.cr6.lt) goto loc_82386E70;
loc_82386EB8:
	// lwz r10,1424(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1424);
	// addi r11,r31,1424
	ctx.r11.s64 = r31.s64 + 1424;
	// mr r25,r22
	r25.u64 = r22.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82387460
	if (!ctx.cr6.gt) goto loc_82387460;
	// lwz r24,136(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// mr r26,r22
	r26.u64 = r22.u64;
	// lwz r23,112(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
loc_82386ED8:
	// add r30,r26,r21
	r30.u64 = r26.u64 + r21.u64;
	// lwz r9,2204(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 2204);
	// lwzx r10,r26,r21
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + r21.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwzx r27,r9,r26
	r27.u64 = REX_LOAD_U32(ctx.r9.u32 + r26.u32);
	// stw r22,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r22.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82386f04
	if (!ctx.cr6.gt) goto loc_82386F04;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// b 0x82386f30
	goto loc_82386F30;
loc_82386F04:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82387420
	if (ctx.cr6.eq) goto loc_82387420;
	// lwzx r11,r9,r26
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + r26.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,92(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 92);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82386F30;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82386F30:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82387420
	if (ctx.cr6.eq) goto loc_82387420;
	// lwz r11,2204(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2204);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r29,r22
	r29.u64 = r22.u64;
	// mr r28,r22
	r28.u64 = r22.u64;
	// lwzx r10,r11,r26
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r26.u32);
	// lwz r3,0(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,92(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 92);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82386F68;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,0(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,96(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82386F8C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r9,r1,2064
	ctx.r9.s64 = ctx.r1.s64 + 2064;
	// lbzx r11,r9,r25
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + r25.u32);
	// clrlwi r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82386fa4
	if (ctx.cr6.eq) goto loc_82386FA4;
	// mr r29,r19
	r29.u64 = r19.u64;
loc_82386FA4:
	// lbz r10,32(r27)
	ctx.r10.u64 = REX_LOAD_U8(r27.u32 + 32);
	// rlwinm r9,r10,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82386fd4
	if (ctx.cr6.eq) goto loc_82386FD4;
	// lwz r10,144(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// cmpwi cr6,r10,533
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 533, ctx.xer);
	// blt cr6,0x82386fd0
	if (ctx.cr6.lt) goto loc_82386FD0;
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// li r28,215
	r28.s64 = 215;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82386fd4
	if (!ctx.cr6.eq) goto loc_82386FD4;
loc_82386FD0:
	// li r28,214
	r28.s64 = 214;
loc_82386FD4:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340e38
	ctx.lr = 0x82386FE4;
	sub_82340E38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// lwz r3,0(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 0);
	// addi r9,r1,136
	ctx.r9.s64 = ctx.r1.s64 + 136;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lwz r5,128(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// addi r7,r1,140
	ctx.r7.s64 = ctx.r1.s64 + 140;
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
	ctx.lr = 0x82387018;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823873f4
	if (ctx.cr6.eq) goto loc_823873F4;
	// lwz r6,96(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x823873f4
	if (ctx.cr6.eq) goto loc_823873F4;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne cr6,0x82387294
	if (!ctx.cr6.eq) goto loc_82387294;
	// clrlwi r11,r29,24
	ctx.r11.u64 = r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82387294
	if (ctx.cr6.eq) goto loc_82387294;
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// bne cr6,0x82387174
	if (!ctx.cr6.eq) goto loc_82387174;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82387080
	if (!ctx.cr6.eq) goto loc_82387080;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// rlwinm r6,r6,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 31) & 0x7FFFFFFF;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82340718
	ctx.lr = 0x8238707C;
	sub_82340718(ctx, base);
	// b 0x82387168
	goto loc_82387168;
loc_82387080:
	// rlwinm r29,r6,30,2,31
	r29.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFFF;
	// mr r28,r22
	r28.u64 = r22.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x823870ec
	if (ctx.cr6.eq) goto loc_823870EC;
loc_82387090:
	// cmplwi cr6,r29,512
	ctx.cr6.compare<uint32_t>(r29.u32, 512, ctx.xer);
	// li r30,512
	r30.s64 = 512;
	// bgt cr6,0x823870a0
	if (ctx.cr6.gt) goto loc_823870A0;
	// mr r30,r29
	r30.u64 = r29.u64;
loc_823870A0:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,1040
	ctx.r4.s64 = ctx.r1.s64 + 1040;
	// bl 0x82340718
	ctx.lr = 0x823870B8;
	sub_82340718(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x823870e0
	if (ctx.cr6.eq) goto loc_823870E0;
	// addi r10,r1,1038
	ctx.r10.s64 = ctx.r1.s64 + 1038;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
loc_823870CC:
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
	// bdnz 0x823870cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823870CC;
loc_823870E0:
	// subf. r29,r30,r29
	r29.u64 = r29.u64 - r30.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// add r28,r30,r28
	r28.u64 = r30.u64 + r28.u64;
	// bne 0x82387090
	if (!ctx.cr0.eq) goto loc_82387090;
loc_823870EC:
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// mr r29,r22
	r29.u64 = r22.u64;
	// rlwinm r28,r11,30,2,31
	r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82387168
	if (ctx.cr6.eq) goto loc_82387168;
loc_82387100:
	// cmplwi cr6,r28,512
	ctx.cr6.compare<uint32_t>(r28.u32, 512, ctx.xer);
	// li r30,512
	r30.s64 = 512;
	// bgt cr6,0x82387110
	if (ctx.cr6.gt) goto loc_82387110;
	// mr r30,r28
	r30.u64 = r28.u64;
loc_82387110:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,1040
	ctx.r4.s64 = ctx.r1.s64 + 1040;
	// bl 0x82340718
	ctx.lr = 0x82387128;
	sub_82340718(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8238715c
	if (ctx.cr6.eq) goto loc_8238715C;
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,1038
	ctx.r10.s64 = ctx.r1.s64 + 1038;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_82387144:
	// lhzu r8,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// sth r8,2(r9)
	REX_STORE_U16(ctx.r9.u32 + 2, ctx.r8.u16);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bdnz 0x82387144
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82387144;
loc_8238715C:
	// subf. r28,r30,r28
	r28.u64 = r28.u64 - r30.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// add r29,r30,r29
	r29.u64 = r30.u64 + r29.u64;
	// bne 0x82387100
	if (!ctx.cr0.eq) goto loc_82387100;
loc_82387168:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// b 0x823873f4
	goto loc_823873F4;
loc_82387174:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82387198
	if (!ctx.cr6.eq) goto loc_82387198;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82340718
	ctx.lr = 0x8238718C;
	sub_82340718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// b 0x823873f4
	goto loc_823873F4;
loc_82387198:
	// rlwinm r29,r6,30,2,31
	r29.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFFF;
	// mr r28,r22
	r28.u64 = r22.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8238720c
	if (ctx.cr6.eq) goto loc_8238720C;
loc_823871A8:
	// cmplwi cr6,r29,512
	ctx.cr6.compare<uint32_t>(r29.u32, 512, ctx.xer);
	// li r30,512
	r30.s64 = 512;
	// bgt cr6,0x823871b8
	if (ctx.cr6.gt) goto loc_823871B8;
	// mr r30,r29
	r30.u64 = r29.u64;
loc_823871B8:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,1040
	ctx.r4.s64 = ctx.r1.s64 + 1040;
	// bl 0x82340718
	ctx.lr = 0x823871D0;
	sub_82340718(ctx, base);
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82387200
	if (ctx.cr6.eq) goto loc_82387200;
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
	// addi r9,r1,1040
	ctx.r9.s64 = ctx.r1.s64 + 1040;
loc_823871E8:
	// lbzx r8,r10,r9
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stbx r8,r11,r7
	REX_STORE_U8(ctx.r11.u32 + ctx.r7.u32, ctx.r8.u8);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x823871e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823871E8;
loc_82387200:
	// subf. r29,r30,r29
	r29.u64 = r29.u64 - r30.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// add r28,r30,r28
	r28.u64 = r30.u64 + r28.u64;
	// bne 0x823871a8
	if (!ctx.cr0.eq) goto loc_823871A8;
loc_8238720C:
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// mr r29,r22
	r29.u64 = r22.u64;
	// rlwinm r28,r11,30,2,31
	r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x823873f4
	if (ctx.cr6.eq) goto loc_823873F4;
loc_82387220:
	// cmplwi cr6,r28,512
	ctx.cr6.compare<uint32_t>(r28.u32, 512, ctx.xer);
	// li r30,512
	r30.s64 = 512;
	// bgt cr6,0x82387230
	if (ctx.cr6.gt) goto loc_82387230;
	// mr r30,r28
	r30.u64 = r28.u64;
loc_82387230:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,1040
	ctx.r4.s64 = ctx.r1.s64 + 1040;
	// bl 0x82340718
	ctx.lr = 0x82387248;
	sub_82340718(ctx, base);
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82387284
	if (ctx.cr6.eq) goto loc_82387284;
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
	// addi r8,r1,1040
	ctx.r8.s64 = ctx.r1.s64 + 1040;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_82387268:
	// lbzx r7,r10,r8
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r8.u32);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r7,1(r9)
	REX_STORE_U8(ctx.r9.u32 + 1, ctx.r7.u8);
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r9,r11,r6
	ctx.r9.u64 = ctx.r11.u64 + ctx.r6.u64;
	// bdnz 0x82387268
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82387268;
loc_82387284:
	// subf. r28,r30,r28
	r28.u64 = r28.u64 - r30.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// add r29,r29,r30
	r29.u64 = r29.u64 + r30.u64;
	// bne 0x82387220
	if (!ctx.cr0.eq) goto loc_82387220;
	// b 0x823873f4
	goto loc_823873F4;
loc_82387294:
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r23.u32, ctx.xer);
	// ble cr6,0x823872fc
	if (!ctx.cr6.gt) goto loc_823872FC;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x823872c8
	if (ctx.cr6.eq) goto loc_823872C8;
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5778
	ctx.r6.s64 = 5778;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r11,1012(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1012);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x823872C8;
	sub_82330D00(ctx, base);
loc_823872C8:
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5781
	ctx.r6.s64 = 5781;
	// lwz r11,1012(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1012);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330a38
	ctx.lr = 0x823872EC;
	sub_82330A38(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82385268
	if (ctx.cr6.eq) goto loc_82385268;
	// lwz r23,88(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
loc_823872FC:
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x823ef5f0
	ctx.lr = 0x8238730C;
	sub_823EF5F0(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r6,88(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340718
	ctx.lr = 0x82387324;
	sub_82340718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// stw r24,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r24.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lwz r8,72(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// bne cr6,0x82387398
	if (!ctx.cr6.eq) goto loc_82387398;
	// mr r30,r22
	r30.u64 = r22.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x823873f4
	if (!ctx.cr6.gt) goto loc_823873F4;
	// addi r11,r28,-215
	ctx.r11.s64 = r28.s64 + -215;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r29,r10,27,31,31
	r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_8238735C:
	// lwz r10,128(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// divwu r6,r10,r8
	ctx.r6.u64 = uint32_t(ctx.r8.u32 ? ctx.r10.u32 / ctx.r8.u32 : 0);
	// add r5,r11,r30
	ctx.r5.u64 = ctx.r11.u64 + r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// twllei r8,0
	if (ctx.r8.s32 == 0 || ctx.r8.u32 < 0u) ppc_trap(ctx, base, 0);
	// bl 0x82380520
	ctx.lr = 0x82387380;
	sub_82380520(ctx, base);
	// lwz r9,0(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 0);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lwz r8,72(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 72);
	// cmpw cr6,r30,r8
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8238735c
	if (ctx.cr6.lt) goto loc_8238735C;
	// b 0x823873f4
	goto loc_823873F4;
loc_82387398:
	// mr r29,r22
	r29.u64 = r22.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x823873f4
	if (!ctx.cr6.gt) goto loc_823873F4;
	// addi r11,r28,-215
	ctx.r11.s64 = r28.s64 + -215;
	// mr r30,r22
	r30.u64 = r22.u64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r28,r10,27,31,31
	r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_823873B4:
	// lwz r10,128(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// rlwinm r9,r10,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// add r5,r11,r30
	ctx.r5.u64 = ctx.r11.u64 + r30.u64;
	// divwu r6,r9,r8
	ctx.r6.u64 = uint32_t(ctx.r8.u32 ? ctx.r9.u32 / ctx.r8.u32 : 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// twllei r8,0
	if (ctx.r8.s32 == 0 || ctx.r8.u32 < 0u) ppc_trap(ctx, base, 0);
	// bl 0x82380788
	ctx.lr = 0x823873DC;
	sub_82380788(ctx, base);
	// lwz r8,0(r27)
	ctx.r8.u64 = REX_LOAD_U32(r27.u32 + 0);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// lwz r8,72(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 72);
	// cmpw cr6,r29,r8
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x823873b4
	if (ctx.cr6.lt) goto loc_823873B4;
loc_823873F4:
	// lwz r3,0(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lwz r6,96(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r7,136(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r5,140(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82387418;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
loc_82387420:
	// lwz r10,1424(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1424);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r11,r31,1424
	ctx.r11.s64 = r31.s64 + 1424;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// cmpw cr6,r25,r10
	ctx.cr6.compare<int32_t>(r25.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82386ed8
	if (ctx.cr6.lt) goto loc_82386ED8;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x82387460
	if (ctx.cr6.eq) goto loc_82387460;
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5827
	ctx.r6.s64 = 5827;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r11,1012(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1012);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x82387460;
	sub_82330D00(ctx, base);
loc_82387460:
	// lwz r24,2548(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 2548);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x82387488
	if (ctx.cr6.eq) goto loc_82387488;
	// lwz r11,20(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82387488
	if (ctx.cr6.eq) goto loc_82387488;
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r23,2540(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 2540);
	// stw r11,256(r10)
	REX_STORE_U32(ctx.r10.u32 + 256, ctx.r11.u32);
	// b 0x823874a8
	goto loc_823874A8;
loc_82387488:
	// lwz r23,2540(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 2540);
	// li r10,5
	ctx.r10.s64 = 5;
	// rlwinm r11,r23,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// bne cr6,0x823874a4
	if (!ctx.cr6.eq) goto loc_823874A4;
	// li r10,2
	ctx.r10.s64 = 2;
loc_823874A4:
	// stw r10,256(r11)
	REX_STORE_U32(ctx.r11.u32 + 256, ctx.r10.u32);
loc_823874A8:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r4,r31,264
	ctx.r4.s64 = r31.s64 + 264;
	// li r5,256
	ctx.r5.s64 = 256;
	// stw r10,260(r11)
	REX_STORE_U32(ctx.r11.u32 + 260, ctx.r10.u32);
	// lwz r3,32(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 32);
	// bl 0x823314a0
	ctx.lr = 0x823874C4;
	sub_823314A0(ctx, base);
	// stw r22,188(r31)
	REX_STORE_U32(r31.u32 + 188, r22.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r10,256(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 256);
	// cmplwi cr6,r10,11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 11, ctx.xer);
	// lwz r9,260(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 260);
	// bgt cr6,0x823875f8
	if (ctx.cr6.gt) goto loc_823875F8;
	// lis r12,-32200
	ctx.r12.s64 = -2110259200;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,29940
	ctx.r12.s64 = ctx.r12.s64 + 29940;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_82387574;
	case 1:
		goto loc_82387524;
	case 2:
		goto loc_82387538;
	case 3:
		goto loc_8238754C;
	case 4:
		goto loc_82387560;
	case 5:
		goto loc_82387560;
	case 6:
		goto loc_82387574;
	case 7:
		goto loc_82387574;
	case 8:
		goto loc_82387574;
	case 9:
		goto loc_82387574;
	case 10:
		goto loc_82387574;
	case 11:
		goto loc_82387574;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_82387524:
	// li r10,8
	ctx.r10.s64 = 8;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// rldicl r8,r10,61,3
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 61) & 0x1FFFFFFFFFFFFFFF;
	// stw r8,276(r11)
	REX_STORE_U32(ctx.r11.u32 + 276, ctx.r8.u32);
	// b 0x823875ec
	goto loc_823875EC;
loc_82387538:
	// li r10,16
	ctx.r10.s64 = 16;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// rldicl r8,r10,61,3
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 61) & 0x1FFFFFFFFFFFFFFF;
	// stw r8,276(r11)
	REX_STORE_U32(ctx.r11.u32 + 276, ctx.r8.u32);
	// b 0x823875ec
	goto loc_823875EC;
loc_8238754C:
	// li r10,24
	ctx.r10.s64 = 24;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// rldicl r8,r10,61,3
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 61) & 0x1FFFFFFFFFFFFFFF;
	// stw r8,276(r11)
	REX_STORE_U32(ctx.r11.u32 + 276, ctx.r8.u32);
	// b 0x823875ec
	goto loc_823875EC;
loc_82387560:
	// li r10,32
	ctx.r10.s64 = 32;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// rldicl r8,r10,61,3
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 61) & 0x1FFFFFFFFFFFFFFF;
	// stw r8,276(r11)
	REX_STORE_U32(ctx.r11.u32 + 276, ctx.r8.u32);
	// b 0x823875ec
	goto loc_823875EC;
loc_82387574:
	// lis r12,-32200
	ctx.r12.s64 = -2110259200;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,30092
	ctx.r12.s64 = ctx.r12.s64 + 30092;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_823875E8;
	case 1:
		goto loc_823875F8;
	case 2:
		goto loc_823875F8;
	case 3:
		goto loc_823875F8;
	case 4:
		goto loc_823875F8;
	case 5:
		goto loc_823875F8;
	case 6:
		goto loc_823875BC;
	case 7:
		goto loc_823875C8;
	case 8:
		goto loc_823875D4;
	case 9:
		goto loc_823875E0;
	case 10:
		goto loc_823875E0;
	case 11:
		goto loc_823875E0;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_823875BC:
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r10,276(r11)
	REX_STORE_U32(ctx.r11.u32 + 276, ctx.r10.u32);
	// b 0x823875ec
	goto loc_823875EC;
loc_823875C8:
	// li r10,36
	ctx.r10.s64 = 36;
	// stw r10,276(r11)
	REX_STORE_U32(ctx.r11.u32 + 276, ctx.r10.u32);
	// b 0x823875ec
	goto loc_823875EC;
loc_823875D4:
	// li r10,16
	ctx.r10.s64 = 16;
	// stw r10,276(r11)
	REX_STORE_U32(ctx.r11.u32 + 276, ctx.r10.u32);
	// b 0x823875ec
	goto loc_823875EC;
loc_823875E0:
	// stw r19,276(r11)
	REX_STORE_U32(ctx.r11.u32 + 276, r19.u32);
	// b 0x823875f8
	goto loc_823875F8;
loc_823875E8:
	// stw r22,276(r11)
	REX_STORE_U32(ctx.r11.u32 + 276, r22.u32);
loc_823875EC:
	// lwz r10,276(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 276);
	// mullw r9,r10,r9
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// stw r9,276(r11)
	REX_STORE_U32(ctx.r11.u32 + 276, ctx.r9.u32);
loc_823875F8:
	// addi r11,r1,252
	ctx.r11.s64 = ctx.r1.s64 + 252;
	// stw r22,260(r1)
	REX_STORE_U32(ctx.r1.u32 + 260, r22.u32);
	// addi r10,r1,252
	ctx.r10.s64 = ctx.r1.s64 + 252;
	// stw r11,252(r1)
	REX_STORE_U32(ctx.r1.u32 + 252, ctx.r11.u32);
	// li r5,152
	ctx.r5.s64 = 152;
	// stw r10,256(r1)
	REX_STORE_U32(ctx.r1.u32 + 256, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823ef5f0
	ctx.lr = 0x8238761C;
	sub_823EF5F0(ctx, base);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lwz r6,32(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 32);
	// li r8,6
	ctx.r8.s64 = 6;
	// ori r30,r9,256
	r30.u64 = ctx.r9.u64 | 256;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stw r30,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, r30.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r7,19524
	ctx.r4.s64 = ctx.r7.s64 + 19524;
	// lwz r5,260(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 260);
	// stw r5,196(r1)
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r5.u32);
	// lwz r11,256(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 256);
	// stw r11,264(r1)
	REX_STORE_U32(ctx.r1.u32 + 264, ctx.r11.u32);
	// stw r8,276(r1)
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r8.u32);
	// bl 0x82331480
	ctx.lr = 0x82387654;
	sub_82331480(ctx, base);
	// addi r29,r31,15996
	r29.s64 = r31.s64 + 15996;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// bl 0x82336400
	ctx.lr = 0x8238766C;
	sub_82336400(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// addi r10,r1,604
	ctx.r10.s64 = ctx.r1.s64 + 604;
	// lwz r9,0(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r8,r1,604
	ctx.r8.s64 = ctx.r1.s64 + 604;
	// li r5,152
	ctx.r5.s64 = 152;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// lwz r7,264(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 264);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// std r6,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r6.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,260(r9)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r9.u32 + 260, temp.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r9,284(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 284);
	// ori r7,r9,2
	ctx.r7.u64 = ctx.r9.u64 | 2;
	// stw r7,284(r11)
	REX_STORE_U32(ctx.r11.u32 + 284, ctx.r7.u32);
	// stw r10,604(r1)
	REX_STORE_U32(ctx.r1.u32 + 604, ctx.r10.u32);
	// stw r8,608(r1)
	REX_STORE_U32(ctx.r1.u32 + 608, ctx.r8.u32);
	// stw r22,612(r1)
	REX_STORE_U32(ctx.r1.u32 + 612, r22.u32);
	// bl 0x823ef5f0
	ctx.lr = 0x823876CC;
	sub_823EF5F0(ctx, base);
	// stw r30,544(r1)
	REX_STORE_U32(ctx.r1.u32 + 544, r30.u32);
	// stw r22,628(r1)
	REX_STORE_U32(ctx.r1.u32 + 628, r22.u32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// addi r4,r6,19492
	ctx.r4.s64 = ctx.r6.s64 + 19492;
	// bl 0x82331480
	ctx.lr = 0x823876E4;
	sub_82331480(ctx, base);
	// addi r27,r31,16000
	r27.s64 = r31.s64 + 16000;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r1,512
	ctx.r4.s64 = ctx.r1.s64 + 512;
	// bl 0x82336400
	ctx.lr = 0x823876FC;
	sub_82336400(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,0(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82387720;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// addi r10,r1,444
	ctx.r10.s64 = ctx.r1.s64 + 444;
	// lwz r9,0(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 0);
	// addi r8,r1,444
	ctx.r8.s64 = ctx.r1.s64 + 444;
	// li r5,152
	ctx.r5.s64 = 152;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// lwz r7,264(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 264);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// std r6,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r6.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,260(r9)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r9.u32 + 260, temp.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lwz r9,284(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 284);
	// ori r7,r9,2
	ctx.r7.u64 = ctx.r9.u64 | 2;
	// stw r7,284(r11)
	REX_STORE_U32(ctx.r11.u32 + 284, ctx.r7.u32);
	// stw r10,444(r1)
	REX_STORE_U32(ctx.r1.u32 + 444, ctx.r10.u32);
	// stw r8,448(r1)
	REX_STORE_U32(ctx.r1.u32 + 448, ctx.r8.u32);
	// stw r22,452(r1)
	REX_STORE_U32(ctx.r1.u32 + 452, r22.u32);
	// bl 0x823ef5f0
	ctx.lr = 0x82387780;
	sub_823EF5F0(ctx, base);
	// stw r30,384(r1)
	REX_STORE_U32(ctx.r1.u32 + 384, r30.u32);
	// stw r22,468(r1)
	REX_STORE_U32(ctx.r1.u32 + 468, r22.u32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// addi r4,r6,19464
	ctx.r4.s64 = ctx.r6.s64 + 19464;
	// bl 0x82331480
	ctx.lr = 0x82387798;
	sub_82331480(ctx, base);
	// addi r25,r31,524
	r25.s64 = r31.s64 + 524;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// bl 0x82336400
	ctx.lr = 0x823877B0;
	sub_82336400(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// lwz r3,0(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,0(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823877D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// mr r26,r22
	r26.u64 = r22.u64;
	// lwz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 0);
	// addi r28,r31,15540
	r28.s64 = r31.s64 + 15540;
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
	// lwz r7,0(r25)
	ctx.r7.u64 = REX_LOAD_U32(r25.u32 + 0);
	// lwz r6,284(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 284);
	// ori r5,r6,2
	ctx.r5.u64 = ctx.r6.u64 | 2;
	// stw r5,284(r7)
	REX_STORE_U32(ctx.r7.u32 + 284, ctx.r5.u32);
loc_82387818:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82387904
	if (ctx.cr6.eq) goto loc_82387904;
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82387904
	if (ctx.cr6.eq) goto loc_82387904;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r10,112(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// lwz r30,28(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823878b4
	if (ctx.cr6.eq) goto loc_823878B4;
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82349998
	ctx.lr = 0x82387860;
	sub_82349998(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,104(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// bl 0x82348e28
	ctx.lr = 0x82387878;
	sub_82348E28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8238789C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,104(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// b 0x823878c0
	goto loc_823878C0;
loc_823878B4:
	// lwz r3,0(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
loc_823878C0:
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// li r5,0
	ctx.r5.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823878D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r10,112(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823878f8
	if (ctx.cr6.eq) goto loc_823878F8;
	// lwz r11,284(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 284);
	// ori r10,r11,4
	ctx.r10.u64 = ctx.r11.u64 | 4;
	// stw r10,284(r30)
	REX_STORE_U32(r30.u32 + 284, ctx.r10.u32);
loc_823878F8:
	// lwz r11,284(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 284);
	// ori r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 2;
	// stw r10,284(r30)
	REX_STORE_U32(r30.u32 + 284, ctx.r10.u32);
loc_82387904:
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmpwi cr6,r26,50
	ctx.cr6.compare<int32_t>(r26.s32, 50, ctx.xer);
	// blt cr6,0x82387818
	if (ctx.cr6.lt) goto loc_82387818;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x82387930
	if (ctx.cr6.eq) goto loc_82387930;
	// lwz r11,64(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82387930
	if (ctx.cr6.eq) goto loc_82387930;
	// stw r11,1048(r31)
	REX_STORE_U32(r31.u32 + 1048, ctx.r11.u32);
	// b 0x8238793c
	goto loc_8238793C;
loc_82387930:
	// lwz r10,788(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 788);
	// addi r11,r31,788
	ctx.r11.s64 = r31.s64 + 788;
	// stw r10,1048(r31)
	REX_STORE_U32(r31.u32 + 1048, ctx.r10.u32);
loc_8238793C:
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lwz r10,1048(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1048);
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6025
	ctx.r6.s64 = 6025;
	// mulli r4,r10,592
	ctx.r4.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(592));
	// lwz r11,1012(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1012);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x82387960;
	sub_82330E40(ctx, base);
	// stw r3,1052(r31)
	REX_STORE_U32(r31.u32 + 1052, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82385268
	if (ctx.cr6.eq) goto loc_82385268;
	// lwz r11,1048(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1048);
	// mr r29,r22
	r29.u64 = r22.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823879b4
	if (!ctx.cr6.gt) goto loc_823879B4;
	// mr r30,r22
	r30.u64 = r22.u64;
loc_82387980:
	// lwz r11,1052(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1052);
	// add. r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823879a0
	if (ctx.cr0.eq) goto loc_823879A0;
	// stw r11,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// stw r11,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// stw r22,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r22.u32);
	// bl 0x8234d858
	ctx.lr = 0x823879A0;
	sub_8234D858(ctx, base);
loc_823879A0:
	// lwz r11,1048(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1048);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,592
	r30.s64 = r30.s64 + 592;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82387980
	if (ctx.cr6.lt) goto loc_82387980;
loc_823879B4:
	// lwz r11,1048(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1048);
	// lis r30,-32129
	r30.s64 = -2105606144;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r10,15536(r31)
	REX_STORE_U32(r31.u32 + 15536, ctx.r10.u32);
	// li r6,6042
	ctx.r6.s64 = 6042;
	// li r4,24
	ctx.r4.s64 = 24;
	// lwz r11,1012(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 1012);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x823879E0;
	sub_82330E40(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823879f0
	if (ctx.cr6.eq) goto loc_823879F0;
	// bl 0x823583e8
	ctx.lr = 0x823879EC;
	sub_823583E8(ctx, base);
	// b 0x823879f4
	goto loc_823879F4;
loc_823879F0:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
loc_823879F4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,1056(r31)
	REX_STORE_U32(r31.u32 + 1056, ctx.r3.u32);
	// beq cr6,0x82385268
	if (ctx.cr6.eq) goto loc_82385268;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,15536(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 15536);
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// bl 0x82358408
	ctx.lr = 0x82387A10;
	sub_82358408(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// lwz r11,1012(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 1012);
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// lwz r10,15536(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 15536);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6054
	ctx.r6.s64 = 6054;
	// mulli r4,r10,792
	ctx.r4.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(792));
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x82387A38;
	sub_82330E40(ctx, base);
	// stw r3,1060(r31)
	REX_STORE_U32(r31.u32 + 1060, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82385268
	if (ctx.cr6.eq) goto loc_82385268;
	// lwz r11,15536(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15536);
	// mr r29,r22
	r29.u64 = r22.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82387ab0
	if (!ctx.cr6.gt) goto loc_82387AB0;
	// mr r30,r22
	r30.u64 = r22.u64;
loc_82387A58:
	// lwz r11,1060(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1060);
	// add. r3,r30,r11
	ctx.r3.u64 = r30.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82387a68
	if (ctx.cr0.eq) goto loc_82387A68;
	// bl 0x823ac560
	ctx.lr = 0x82387A68;
	sub_823AC560(ctx, base);
loc_82387A68:
	// lwz r11,1060(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1060);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r6,0(r25)
	ctx.r6.u64 = REX_LOAD_U32(r25.u32 + 0);
	// add r5,r30,r11
	ctx.r5.u64 = r30.u64 + ctx.r11.u64;
	// lwz r3,1056(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1056);
	// bl 0x823587d8
	ctx.lr = 0x82387A80;
	sub_823587D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// lwz r11,1060(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1060);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// addi r30,r30,792
	r30.s64 = r30.s64 + 792;
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// ori r9,r10,2048
	ctx.r9.u64 = ctx.r10.u64 | 2048;
	// stw r9,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r9.u32);
	// lwz r8,15536(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 15536);
	// cmpw cr6,r29,r8
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82387a58
	if (ctx.cr6.lt) goto loc_82387A58;
loc_82387AB0:
	// lbz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 92);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82387b30
	if (ctx.cr6.eq) goto loc_82387B30;
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lwz r10,15536(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 15536);
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6069
	ctx.r6.s64 = 6069;
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,1012(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1012);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x82387AE0;
	sub_82330E40(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,1064(r31)
	REX_STORE_U32(r31.u32 + 1064, ctx.r3.u32);
	// beq cr6,0x82385268
	if (ctx.cr6.eq) goto loc_82385268;
	// lwz r11,15536(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15536);
	// mr r29,r22
	r29.u64 = r22.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82387b30
	if (!ctx.cr6.gt) goto loc_82387B30;
	// mr r30,r22
	r30.u64 = r22.u64;
loc_82387B00:
	// lwz r11,1064(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1064);
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// add r5,r30,r11
	ctx.r5.u64 = r30.u64 + ctx.r11.u64;
	// bl 0x82336570
	ctx.lr = 0x82387B14;
	sub_82336570(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82387bac
	if (!ctx.cr6.eq) goto loc_82387BAC;
	// lwz r11,15536(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15536);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82387b00
	if (ctx.cr6.lt) goto loc_82387B00;
loc_82387B30:
	// rlwinm r11,r23,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x4000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82387b5c
	if (!ctx.cr6.eq) goto loc_82387B5C;
	// rlwinm r11,r23,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82387b5c
	if (!ctx.cr6.eq) goto loc_82387B5C;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r22,528(r31)
	REX_STORE_U32(r31.u32 + 528, r22.u32);
	// stw r10,272(r11)
	REX_STORE_U32(ctx.r11.u32 + 272, ctx.r10.u32);
	// b 0x82387b98
	goto loc_82387B98;
loc_82387B5C:
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lwz r10,1408(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1408);
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// rlwinm r4,r10,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6097
	ctx.r6.s64 = 6097;
	// lwz r11,1012(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1012);
	// addi r10,r31,1408
	ctx.r10.s64 = r31.s64 + 1408;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x82387B84;
	sub_82330E40(ctx, base);
	// stw r3,528(r31)
	REX_STORE_U32(r31.u32 + 528, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82385268
	if (ctx.cr6.eq) goto loc_82385268;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82384bc0
	ctx.lr = 0x82387B98;
	sub_82384BC0(ctx, base);
loc_82387B98:
	// stw r22,28(r31)
	REX_STORE_U32(r31.u32 + 28, r22.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82384648
	ctx.lr = 0x82387BA8;
	sub_82384648(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82387BAC:
	// addi r1,r1,2512
	ctx.r1.s64 = ctx.r1.s64 + 2512;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x826a2cf4
	ctx.lr = 0x82387BB8;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_824BA468) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x824690e0
	ctx.lr = 0x824BA48C;
	sub_824690E0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// stw r30,348(r31)
	REX_STORE_U32(r31.u32 + 348, r30.u32);
	// lis r9,-32128
	ctx.r9.s64 = -2105540608;
	// addi r11,r11,3288
	ctx.r11.s64 = ctx.r11.s64 + 3288;
	// addi r10,r10,-23784
	ctx.r10.s64 = ctx.r10.s64 + -23784;
	// addi r9,r9,-23208
	ctx.r9.s64 = ctx.r9.s64 + -23208;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r10,244(r31)
	REX_STORE_U32(r31.u32 + 244, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r9,248(r31)
	REX_STORE_U32(r31.u32 + 248, ctx.r9.u32);
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

DEFINE_REX_FUNC(sub_824BD348) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lwz r31,4(r4)
	r31.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x824bd3b8
	if (ctx.cr6.eq) goto loc_824BD3B8;
	// lwz r9,8(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r8,20(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r7,136(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
loc_824BD36C:
	// lwzx r10,r11,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lwz r4,4(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x824bd3a8
	if (!ctx.cr6.eq) goto loc_824BD3A8;
	// lwz r10,80(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 80);
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x824bd3a8
	if (!ctx.cr6.lt) goto loc_824BD3A8;
	// lwz r4,24(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r4
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r10,r10,0,0,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFF00000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824bd3c4
	if (!ctx.cr0.eq) goto loc_824BD3C4;
loc_824BD3A8:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r6,r31
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, r31.u32, ctx.xer);
	// blt cr6,0x824bd36c
	if (ctx.cr6.lt) goto loc_824BD36C;
loc_824BD3B8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824BD3BC:
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_824BD3C4:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x824bd3bc
	goto loc_824BD3BC;
}

DEFINE_REX_FUNC(sub_824BFC78) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x824BFC80;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,440(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 440);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824bfca4
	if (ctx.cr6.eq) goto loc_824BFCA4;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
loc_824BFCA4:
	// lwz r11,444(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 444);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824BFCB8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x824bfd3c
	if (ctx.cr6.eq) goto loc_824BFD3C;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x824bfd98
	if (!ctx.cr6.eq) goto loc_824BFD98;
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 24);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,20(r30)
	REX_STORE_U32(r30.u32 + 20, ctx.r10.u32);
	// beq cr6,0x824bfd1c
	if (ctx.cr6.eq) goto loc_824BFD1C;
	// lwz r11,444(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 444);
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x824bfd98
	if (ctx.cr6.eq) goto loc_824BFD98;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r10,59
	ctx.r10.s64 = 59;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x824BFD10;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
loc_824BFD1C:
	// lwz r11,148(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 148);
	// lwz r10,156(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 156);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x824bfd98
	if (!ctx.cr6.gt) goto loc_824BFD98;
	// stw r11,156(r31)
	REX_STORE_U32(r31.u32 + 156, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
loc_824BFD3C:
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824bfd64
	if (ctx.cr6.eq) goto loc_824BFD64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824bf6c0
	ctx.lr = 0x824BFD50;
	sub_824BF6C0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,24(r30)
	REX_STORE_U32(r30.u32 + 24, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
loc_824BFD64:
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x824bfd90
	if (!ctx.cr6.eq) goto loc_824BFD90;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r10,35
	ctx.r10.s64 = 35;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x824BFD90;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824BFD90:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824bfc08
	ctx.lr = 0x824BFD98;
	sub_824BFC08(ctx, base);
loc_824BFD98:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_824C4B58) {
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
	ctx.lr = 0x824C4B60;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1492(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1492);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,1472(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 1472);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1492(r3)
	REX_STORE_U32(ctx.r3.u32 + 1492, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x824c4ecc
	if (ctx.cr6.lt) goto loc_824C4ECC;
	// lbz r10,1555(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 1555);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r25,0
	r25.s64 = 0;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r29,r11,6124
	r29.s64 = ctx.r11.s64 + 6124;
	// beq 0x824c4c94
	if (ctx.cr0.eq) goto loc_824C4C94;
	// stw r25,1492(r3)
	REX_STORE_U32(ctx.r3.u32 + 1492, r25.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,1480(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1480);
	// lwz r4,1496(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 1496);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// bl 0x824bf578
	ctx.lr = 0x824C4BB0;
	sub_824BF578(ctx, base);
	// lbz r11,1556(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 1556);
loc_824C4BB4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,1556(r31)
	REX_STORE_U8(r31.u32 + 1556, ctx.r11.u8);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bge cr6,0x824c4c88
	if (!ctx.cr6.lt) goto loc_824C4C88;
	// lbz r9,1556(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 1556);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r10,r29,28
	ctx.r10.s64 = r29.s64 + 28;
	// lbz r5,1561(r31)
	ctx.r5.u64 = REX_LOAD_U8(r31.u32 + 1561);
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// lwz r4,1376(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 1376);
	// rotlwi r7,r11,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lwz r11,1464(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1464);
	// rotlwi r9,r9,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// addi r8,r29,28
	ctx.r8.s64 = r29.s64 + 28;
	// rotlwi r6,r6,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 2);
	// rlwinm. r4,r4,0,30,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lwzx r10,r9,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwzx r7,r7,r29
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + r29.u32);
	// lwzx r9,r6,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// subf r10,r7,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r7.u64;
	// twllei r9,0
	if (ctx.r9.s32 == 0 || ctx.r9.u32 < 0u) ppc_trap(ctx, base, 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// divwu r10,r11,r9
	ctx.r10.u64 = uint32_t(ctx.r9.u32 ? ctx.r11.u32 / ctx.r9.u32 : 0);
	// mullw r11,r5,r10
	ctx.r11.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// stw r10,1488(r31)
	REX_STORE_U32(r31.u32 + 1488, ctx.r10.u32);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1484(r31)
	REX_STORE_U32(r31.u32 + 1484, ctx.r11.u32);
	// bne 0x824c4c88
	if (!ctx.cr0.eq) goto loc_824C4C88;
	// lbz r11,1556(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 1556);
	// addi r10,r29,56
	ctx.r10.s64 = r29.s64 + 56;
	// addi r8,r29,84
	ctx.r8.s64 = r29.s64 + 84;
	// lwz r4,1488(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 1488);
	// rotlwi r7,r11,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// rotlwi r6,r11,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwz r9,1468(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 1468);
	// addi r5,r29,84
	ctx.r5.s64 = r29.s64 + 84;
	// rotlwi r3,r11,2
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lwzx r10,r7,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// lwzx r8,r6,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// subf r10,r10,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r10.u64;
	// lwzx r8,r3,r5
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r5.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// twllei r8,0
	if (ctx.r8.s32 == 0 || ctx.r8.u32 < 0u) ppc_trap(ctx, base, 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// divwu r10,r10,r8
	ctx.r10.u64 = uint32_t(ctx.r8.u32 ? ctx.r10.u32 / ctx.r8.u32 : 0);
	// stw r10,1472(r31)
	REX_STORE_U32(r31.u32 + 1472, ctx.r10.u32);
	// beq cr6,0x824c4bb4
	if (ctx.cr6.eq) goto loc_824C4BB4;
loc_824C4C88:
	// lbz r11,1556(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 1556);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// blt cr6,0x824c4ecc
	if (ctx.cr6.lt) goto loc_824C4ECC;
loc_824C4C94:
	// lwz r11,1372(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1372);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824c4e90
	if (!ctx.cr0.eq) goto loc_824C4E90;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,1392(r31)
	REX_STORE_U32(r31.u32 + 1392, ctx.r11.u32);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// stw r10,1396(r31)
	REX_STORE_U32(r31.u32 + 1396, ctx.r10.u32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r28,r9,7416
	r28.s64 = ctx.r9.s64 + 7416;
	// addi r26,r10,-15404
	r26.s64 = ctx.r10.s64 + -15404;
	// addi r27,r11,-15360
	r27.s64 = ctx.r11.s64 + -15360;
loc_824C4CC8:
	// lwz r11,1384(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1384);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824c4df4
	if (!ctx.cr6.eq) goto loc_824C4DF4;
	// lwz r11,1532(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1532);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824c4da0
	if (!ctx.cr6.eq) goto loc_824C4DA0;
	// addi r30,r31,1548
	r30.s64 = r31.s64 + 1548;
loc_824C4CE4:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824c3fa8
	ctx.lr = 0x824C4CF0;
	sub_824C3FA8(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82442258
	ctx.lr = 0x824C4D00;
	sub_82442258(ctx, base);
	// lbz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 84);
	// lbz r10,85(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 85);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r9,86(r1)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + 86);
	// lbz r8,87(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 87);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r11,1532(r31)
	REX_STORE_U32(r31.u32 + 1532, ctx.r11.u32);
	// bl 0x8243c5e8
	ctx.lr = 0x824C4D34;
	sub_8243C5E8(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82442258
	ctx.lr = 0x824C4D44;
	sub_82442258(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8243c628
	ctx.lr = 0x824C4D54;
	sub_8243C628(ctx, base);
	// addi r10,r29,112
	ctx.r10.s64 = r29.s64 + 112;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// addi r9,r30,4
	ctx.r9.s64 = r30.s64 + 4;
loc_824C4D60:
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x824c4d80
	if (!ctx.cr0.eq) goto loc_824C4D80;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x824c4d60
	if (!ctx.cr6.eq) goto loc_824C4D60;
loc_824C4D80:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x824c4d94
	if (ctx.cr0.eq) goto loc_824C4D94;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8243c410
	ctx.lr = 0x824C4D94;
	sub_8243C410(ctx, base);
loc_824C4D94:
	// lwz r11,1532(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1532);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824c4ce4
	if (ctx.cr6.eq) goto loc_824C4CE4;
loc_824C4DA0:
	// lwz r10,1440(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1440);
	// lwz r30,1436(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 1436);
	// lwz r11,1532(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1532);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// stw r10,1384(r31)
	REX_STORE_U32(r31.u32 + 1384, ctx.r10.u32);
	// stw r30,1380(r31)
	REX_STORE_U32(r31.u32 + 1380, r30.u32);
	// ble cr6,0x824c4dc0
	if (!ctx.cr6.gt) goto loc_824C4DC0;
	// stw r11,1384(r31)
	REX_STORE_U32(r31.u32 + 1384, ctx.r11.u32);
loc_824C4DC0:
	// lwz r24,1384(r31)
	r24.u64 = REX_LOAD_U32(r31.u32 + 1384);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// bl 0x82442258
	ctx.lr = 0x824C4DD4;
	sub_82442258(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8243c628
	ctx.lr = 0x824C4DE4;
	sub_8243C628(ctx, base);
	// lwz r11,1532(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1532);
	// lwz r10,1384(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1384);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stw r11,1532(r31)
	REX_STORE_U32(r31.u32 + 1532, ctx.r11.u32);
loc_824C4DF4:
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,1380
	ctx.r3.s64 = r31.s64 + 1380;
	// bl 0x824c2e78
	ctx.lr = 0x824C4E00;
	sub_824C2E78(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x824c4e44
	if (ctx.cr6.eq) goto loc_824C4E44;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x824c4e28
	if (ctx.cr6.eq) goto loc_824C4E28;
	// lwz r4,1404(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 1404);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x824c4e20
	if (!ctx.cr6.eq) goto loc_824C4E20;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
loc_824C4E20:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8243c410
	ctx.lr = 0x824C4E28;
	sub_8243C410(ctx, base);
loc_824C4E28:
	// lwz r11,1396(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1396);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824c4cc8
	if (!ctx.cr6.eq) goto loc_824C4CC8;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8243c410
	ctx.lr = 0x824C4E40;
	sub_8243C410(ctx, base);
	// b 0x824c4cc8
	goto loc_824C4CC8;
loc_824C4E44:
	// lwz r11,1396(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1396);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824c4e68
	if (ctx.cr6.eq) goto loc_824C4E68;
	// lwz r11,1384(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1384);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824c4e68
	if (!ctx.cr6.eq) goto loc_824C4E68;
	// lwz r11,1532(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1532);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824c4e74
	if (ctx.cr6.eq) goto loc_824C4E74;
loc_824C4E68:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8243c410
	ctx.lr = 0x824C4E74;
	sub_8243C410(ctx, base);
loc_824C4E74:
	// lwz r11,1372(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1372);
	// lwz r10,1368(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1368);
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// stw r25,1396(r31)
	REX_STORE_U32(r31.u32 + 1396, r25.u32);
	// ori r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 8;
	// stw r11,1372(r31)
	REX_STORE_U32(r31.u32 + 1372, ctx.r11.u32);
	// stw r10,1368(r31)
	REX_STORE_U32(r31.u32 + 1368, ctx.r10.u32);
loc_824C4E90:
	// lwz r11,1532(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1532);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824c4ea8
	if (!ctx.cr6.eq) goto loc_824C4EA8;
	// lwz r11,1384(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1384);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824c4eb8
	if (ctx.cr6.eq) goto loc_824C4EB8;
loc_824C4EA8:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,7392
	ctx.r4.s64 = ctx.r11.s64 + 7392;
	// bl 0x8243c410
	ctx.lr = 0x824C4EB8;
	sub_8243C410(ctx, base);
loc_824C4EB8:
	// addi r3,r31,1380
	ctx.r3.s64 = r31.s64 + 1380;
	// bl 0x824c2c10
	ctx.lr = 0x824C4EC0;
	sub_824C2C10(ctx, base);
	// lwz r11,1368(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1368);
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// stw r11,1368(r31)
	REX_STORE_U32(r31.u32 + 1368, ctx.r11.u32);
loc_824C4ECC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_824D7C00) {
	REX_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_824D7C04:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x824d7c04
	if (!ctx.cr6.eq) goto loc_824D7C04;
	// subf r11,r4,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r4.u64;
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824D8088) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x824D8090;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x824d810c
	if (!ctx.cr6.gt) goto loc_824D810C;
	// rlwinm r30,r11,1,0,30
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r30,r4
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x824d80b8
	if (!ctx.cr6.lt) goto loc_824D80B8;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
loc_824D80B8:
	// rlwinm r4,r30,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e5af8
	ctx.lr = 0x824D80C4;
	sub_824E5AF8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne 0x824d80dc
	if (!ctx.cr0.eq) goto loc_824D80DC;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r11,r11,14
	ctx.r11.u64 = ctx.r11.u64 | 14;
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
	// b 0x824d810c
	goto loc_824D810C;
loc_824D80DC:
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x824d8108
	if (ctx.cr6.eq) goto loc_824D8108;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// rlwinm r5,r11,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x826a1e70
	ctx.lr = 0x824D80FC;
	sub_826A1E70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x824e5b08
	ctx.lr = 0x824D8108;
	sub_824E5B08(ctx, base);
loc_824D8108:
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
loc_824D810C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_824DABE0) {
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
	// ble cr6,0x824dac14
	if (!ctx.cr6.gt) goto loc_824DAC14;
	// bl 0x824d8620
	ctx.lr = 0x824DAC14;
	sub_824D8620(ctx, base);
loc_824DAC14:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r5,40
	ctx.r5.s64 = 40;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mulli r11,r11,40
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(40));
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x826a1e70
	ctx.lr = 0x824DAC30;
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

DEFINE_REX_FUNC(sub_824DCA38) {
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
	ctx.lr = 0x824DCA40;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,144(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 144);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// addi r26,r3,144
	r26.s64 = ctx.r3.s64 + 144;
	// li r25,-1
	r25.s64 = -1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x824dcad0
	if (ctx.cr6.lt) goto loc_824DCAD0;
	// lwz r28,48(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_824DCA64:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x824dca64
	if (!ctx.cr6.eq) goto loc_824DCA64;
	// subf r11,r27,r11
	ctx.r11.u64 = ctx.r11.u64 - r27.u64;
	// lwz r10,52(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// addi r31,r3,44
	r31.s64 = ctx.r3.s64 + 44;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r29,r11,0
	r29.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r11,r29,r28
	ctx.r11.u64 = r29.u64 + r28.u64;
	// addi r30,r11,1
	r30.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x824dcaa8
	if (!ctx.cr6.gt) goto loc_824DCAA8;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d8598
	ctx.lr = 0x824DCAA8;
	sub_824D8598(ctx, base);
loc_824DCAA8:
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x824dcad0
	if (ctx.cr6.lt) goto loc_824DCAD0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r5,r29,1
	ctx.r5.s64 = r29.s64 + 1;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + r28.u64;
	// bl 0x826a1e70
	ctx.lr = 0x824DCACC;
	sub_826A1E70(ctx, base);
	// mr r25,r28
	r25.u64 = r28.u64;
loc_824DCAD0:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_824DF978) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x824DF980;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r29,r4,-1
	r29.s64 = ctx.r4.s64 + -1;
loc_824DF994:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x824df9e0
	if (ctx.cr6.eq) goto loc_824DF9E0;
	// lbzu r11,1(r29)
	ea = 1 + r29.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	r29.u32 = ea;
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x824df9d0
	if (ctx.cr6.eq) goto loc_824DF9D0;
	// lhz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 8);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// stb r11,16(r10)
	REX_STORE_U8(ctx.r10.u32 + 16, ctx.r11.u8);
	// lhz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r11,8(r31)
	REX_STORE_U16(r31.u32 + 8, ctx.r11.u16);
	// cmplwi cr6,r11,511
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 511, ctx.xer);
	// blt cr6,0x824df9d8
	if (ctx.cr6.lt) goto loc_824DF9D8;
loc_824DF9D0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824df908
	ctx.lr = 0x824DF9D8;
	sub_824DF908(ctx, base);
loc_824DF9D8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x824df994
	if (!ctx.cr6.lt) goto loc_824DF994;
loc_824DF9E0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_824E3DD0) {
	REX_FUNC_PROLOGUE();
	// stw r3,20(r1)
	REX_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// stw r4,28(r1)
	REX_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r11,r11,0,26,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// stw r11,20(r1)
	REX_STORE_U32(ctx.r1.u32 + 20, ctx.r11.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r10,28(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,28(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,28(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,8(r11)
	REX_STORE_U8(ctx.r11.u32 + 8, ctx.r10.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824E45A0) {
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
	// lis r4,-8051
	ctx.r4.s64 = -527630336;
	// li r3,4096
	ctx.r3.s64 = 4096;
	// bl 0x823f02b8
	ctx.lr = 0x824E45C0;
	sub_823F02B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x824e45d4
	if (!ctx.cr0.eq) goto loc_824E45D4;
	// li r4,3517
	ctx.r4.s64 = 3517;
	// lwz r3,148(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 148);
	// bl 0x824e4368
	ctx.lr = 0x824E45D4;
	sub_824E4368(ctx, base);
loc_824E45D4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_824E69B8) {
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
	ctx.lr = 0x824E69C0;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// lwz r29,0(r7)
	r29.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r17,r7
	r17.u64 = ctx.r7.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwzu r10,4(r31)
	ea = 4 + r31.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	r31.u32 = ea;
	// rlwinm r18,r11,0,3,3
	r18.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// rlwinm. r10,r10,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r16,r11,0,1,1
	r16.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// clrlwi r24,r11,16
	r24.u64 = ctx.r11.u32 & 0xFFFF;
	// bne 0x824e6a00
	if (!ctx.cr0.eq) goto loc_824E6A00;
	// bl 0x826b40a0
	ctx.lr = 0x824E6A00;
	sub_826B40A0(ctx, base);
loc_824E6A00:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// lwz r27,0(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r28,r31,4
	r28.s64 = r31.s64 + 4;
	// ori r23,r11,512
	r23.u64 = ctx.r11.u64 | 512;
	// mr r20,r27
	r20.u64 = r27.u64;
	// cmplw cr6,r22,r23
	ctx.cr6.compare<uint32_t>(r22.u32, r23.u32, ctx.xer);
	// bge cr6,0x824e6a70
	if (!ctx.cr6.lt) goto loc_824E6A70;
	// lwz r11,428(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 428);
	// lwz r10,0(r19)
	ctx.r10.u64 = REX_LOAD_U32(r19.u32 + 0);
	// addi r9,r11,25
	ctx.r9.s64 = ctx.r11.s64 + 25;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r9,r9,r26
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + r26.u32);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x824e6a70
	if (!ctx.cr6.eq) goto loc_824E6A70;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + r26.u64;
	// lwz r11,204(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 204);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824e6a50
	if (!ctx.cr6.eq) goto loc_824E6A50;
	// bl 0x826b40a0
	ctx.lr = 0x824E6A50;
	sub_826B40A0(ctx, base);
loc_824E6A50:
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(r16.s32, 0, ctx.xer);
	// beq cr6,0x824e6a5c
	if (ctx.cr6.eq) goto loc_824E6A5C;
	// bl 0x826b40a0
	ctx.lr = 0x824E6A5C;
	sub_826B40A0(ctx, base);
loc_824E6A5C:
	// lis r12,-28673
	ctx.r12.s64 = -1879113728;
	// ori r12,r12,57360
	ctx.r12.u64 = ctx.r12.u64 | 57360;
	// and r11,r27,r12
	ctx.r11.u64 = r27.u64 & ctx.r12.u64;
	// oris r27,r11,15
	r27.u64 = ctx.r11.u64 | 983040;
	// ori r27,r27,16
	r27.u64 = r27.u64 | 16;
loc_824E6A70:
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(r18.s32, 0, ctx.xer);
	// beq cr6,0x824e6aa4
	if (ctx.cr6.eq) goto loc_824E6AA4;
	// lis r12,-28673
	ctx.r12.s64 = -1879113728;
	// lwz r21,0(r28)
	r21.u64 = REX_LOAD_U32(r28.u32 + 0);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// ori r12,r12,57377
	ctx.r12.u64 = ctx.r12.u64 | 57377;
	// cmplw cr6,r22,r23
	ctx.cr6.compare<uint32_t>(r22.u32, r23.u32, ctx.xer);
	// and r11,r27,r12
	ctx.r11.u64 = r27.u64 & ctx.r12.u64;
	// oris r27,r11,15
	r27.u64 = ctx.r11.u64 | 983040;
	// ori r27,r27,33
	r27.u64 = r27.u64 | 33;
	// bge cr6,0x824e6aa8
	if (!ctx.cr6.lt) goto loc_824E6AA8;
	// bl 0x826b40a0
	ctx.lr = 0x824E6AA0;
	sub_826B40A0(ctx, base);
	// b 0x824e6aa8
	goto loc_824E6AA8;
loc_824E6AA4:
	// lwz r21,80(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_824E6AA8:
	// li r25,1
	r25.s64 = 1;
	// cmpwi cr6,r30,13
	ctx.cr6.compare<int32_t>(r30.s32, 13, ctx.xer);
	// bne cr6,0x824e6acc
	if (!ctx.cr6.eq) goto loc_824E6ACC;
	// cmplwi cr6,r24,80
	ctx.cr6.compare<uint32_t>(r24.u32, 80, ctx.xer);
	// lis r11,67
	ctx.r11.s64 = 4390912;
	// beq cr6,0x824e6ac4
	if (ctx.cr6.eq) goto loc_824E6AC4;
	// lis r11,2
	ctx.r11.s64 = 131072;
loc_824E6AC4:
	// ori r11,r11,13
	ctx.r11.u64 = ctx.r11.u64 | 13;
	// b 0x824e6bcc
	goto loc_824E6BCC;
loc_824E6ACC:
	// cmpwi cr6,r30,69
	ctx.cr6.compare<int32_t>(r30.s32, 69, ctx.xer);
	// bne cr6,0x824e6b40
	if (!ctx.cr6.eq) goto loc_824E6B40;
	// li r31,69
	r31.s64 = 69;
	// cmplwi cr6,r24,20
	ctx.cr6.compare<uint32_t>(r24.u32, 20, ctx.xer);
	// beq cr6,0x824e6b2c
	if (ctx.cr6.eq) goto loc_824E6B2C;
	// cmplwi cr6,r24,21
	ctx.cr6.compare<uint32_t>(r24.u32, 21, ctx.xer);
	// beq cr6,0x824e6b20
	if (ctx.cr6.eq) goto loc_824E6B20;
	// cmplwi cr6,r24,22
	ctx.cr6.compare<uint32_t>(r24.u32, 22, ctx.xer);
	// beq cr6,0x824e6b18
	if (ctx.cr6.eq) goto loc_824E6B18;
	// cmplwi cr6,r24,23
	ctx.cr6.compare<uint32_t>(r24.u32, 23, ctx.xer);
	// beq cr6,0x824e6b10
	if (ctx.cr6.eq) goto loc_824E6B10;
	// cmplwi cr6,r24,24
	ctx.cr6.compare<uint32_t>(r24.u32, 24, ctx.xer);
	// beq cr6,0x824e6b08
	if (ctx.cr6.eq) goto loc_824E6B08;
	// bl 0x826b40a0
	ctx.lr = 0x824E6B04;
	sub_826B40A0(ctx, base);
	// b 0x824e6b30
	goto loc_824E6B30;
loc_824E6B08:
	// lis r31,4
	r31.s64 = 262144;
	// b 0x824e6b24
	goto loc_824E6B24;
loc_824E6B10:
	// lis r31,3
	r31.s64 = 196608;
	// b 0x824e6b24
	goto loc_824E6B24;
loc_824E6B18:
	// lis r31,2
	r31.s64 = 131072;
	// b 0x824e6b24
	goto loc_824E6B24;
loc_824E6B20:
	// lis r31,1
	r31.s64 = 65536;
loc_824E6B24:
	// ori r31,r31,69
	r31.u64 = r31.u64 | 69;
	// b 0x824e6b30
	goto loc_824E6B30;
loc_824E6B2C:
	// li r31,69
	r31.s64 = 69;
loc_824E6B30:
	// addi r11,r29,4
	ctx.r11.s64 = r29.s64 + 4;
	// stw r31,0(r29)
	REX_STORE_U32(r29.u32 + 0, r31.u32);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x824e6bd8
	goto loc_824E6BD8;
loc_824E6B40:
	// cmpwi cr6,r30,61
	ctx.cr6.compare<int32_t>(r30.s32, 61, ctx.xer);
	// beq cr6,0x824e6bc8
	if (ctx.cr6.eq) goto loc_824E6BC8;
	// cmpwi cr6,r30,60
	ctx.cr6.compare<int32_t>(r30.s32, 60, ctx.xer);
	// beq cr6,0x824e6bc8
	if (ctx.cr6.eq) goto loc_824E6BC8;
	// cmpwi cr6,r30,76
	ctx.cr6.compare<int32_t>(r30.s32, 76, ctx.xer);
	// beq cr6,0x824e6bc8
	if (ctx.cr6.eq) goto loc_824E6BC8;
	// cmpwi cr6,r30,81
	ctx.cr6.compare<int32_t>(r30.s32, 81, ctx.xer);
	// beq cr6,0x824e6bb4
	if (ctx.cr6.eq) goto loc_824E6BB4;
	// cmpwi cr6,r30,85
	ctx.cr6.compare<int32_t>(r30.s32, 85, ctx.xer);
	// beq cr6,0x824e6bb4
	if (ctx.cr6.eq) goto loc_824E6BB4;
	// cmpwi cr6,r30,37
	ctx.cr6.compare<int32_t>(r30.s32, 37, ctx.xer);
	// beq cr6,0x824e6b78
	if (ctx.cr6.eq) goto loc_824E6B78;
	// cmpwi cr6,r30,38
	ctx.cr6.compare<int32_t>(r30.s32, 38, ctx.xer);
	// bne cr6,0x824e6bc8
	if (!ctx.cr6.eq) goto loc_824E6BC8;
loc_824E6B78:
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4);
	// clrlwi r10,r30,16
	ctx.r10.u64 = r30.u32 & 0xFFFF;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x824e6b90
	if (!ctx.cr6.eq) goto loc_824E6B90;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x824e6ba0
	goto loc_824E6BA0;
loc_824E6B90:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// beq cr6,0x824e6ba0
	if (ctx.cr6.eq) goto loc_824E6BA0;
	// rlwinm r11,r20,10,31,31
	ctx.r11.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 10) & 0x1;
loc_824E6BA0:
	// addi r9,r29,4
	ctx.r9.s64 = r29.s64 + 4;
	// rlwimi r10,r11,24,7,7
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1000000) | (ctx.r10.u64 & 0xFFFFFFFFFEFFFFFF);
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r10,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// b 0x824e6bd8
	goto loc_824E6BD8;
loc_824E6BB4:
	// addi r11,r29,4
	ctx.r11.s64 = r29.s64 + 4;
	// rlwimi r30,r25,17,0,15
	r30.u64 = (__builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 17) & 0xFFFF0000) | (r30.u64 & 0xFFFFFFFF0000FFFF);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r30,0(r29)
	REX_STORE_U32(r29.u32 + 0, r30.u32);
	// b 0x824e6bd8
	goto loc_824E6BD8;
loc_824E6BC8:
	// clrlwi r11,r30,16
	ctx.r11.u64 = r30.u32 & 0xFFFF;
loc_824E6BCC:
	// addi r10,r29,4
	ctx.r10.s64 = r29.s64 + 4;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_824E6BD8:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824e6318
	ctx.lr = 0x824E6BE8;
	sub_824E6318(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824e6bf8
	if (!ctx.cr0.eq) goto loc_824E6BF8;
	// bl 0x826b40a0
	ctx.lr = 0x824E6BF8;
	sub_826B40A0(ctx, base);
loc_824E6BF8:
	// lwz r30,0(r28)
	r30.u64 = REX_LOAD_U32(r28.u32 + 0);
	// addi r31,r28,4
	r31.s64 = r28.s64 + 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r11,r30,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r11,8192
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8192, ctx.xer);
	// bne cr6,0x824e6c28
	if (!ctx.cr6.eq) goto loc_824E6C28;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824e6c20
	if (!ctx.cr0.eq) goto loc_824E6C20;
	// bl 0x826b40a0
	ctx.lr = 0x824E6C20;
	sub_826B40A0(ctx, base);
loc_824E6C20:
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_824E6C28:
	// cmplwi cr6,r24,7
	ctx.cr6.compare<uint32_t>(r24.u32, 7, ctx.xer);
	// beq cr6,0x824e6c50
	if (ctx.cr6.eq) goto loc_824E6C50;
	// cmplwi cr6,r24,15
	ctx.cr6.compare<uint32_t>(r24.u32, 15, ctx.xer);
	// beq cr6,0x824e6c50
	if (ctx.cr6.eq) goto loc_824E6C50;
	// cmplwi cr6,r24,32
	ctx.cr6.compare<uint32_t>(r24.u32, 32, ctx.xer);
	// beq cr6,0x824e6c50
	if (ctx.cr6.eq) goto loc_824E6C50;
	// cmplwi cr6,r24,37
	ctx.cr6.compare<uint32_t>(r24.u32, 37, ctx.xer);
	// beq cr6,0x824e6ce8
	if (ctx.cr6.eq) goto loc_824E6CE8;
	// cmplwi cr6,r24,79
	ctx.cr6.compare<uint32_t>(r24.u32, 79, ctx.xer);
	// bne cr6,0x824e6cc4
	if (!ctx.cr6.eq) goto loc_824E6CC4;
loc_824E6C50:
	// rlwinm r11,r30,0,4,7
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xF000000;
	// lis r10,256
	ctx.r10.s64 = 16777216;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824e6d34
	if (ctx.cr6.eq) goto loc_824E6D34;
	// lis r10,768
	ctx.r10.s64 = 50331648;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824e6d2c
	if (ctx.cr6.eq) goto loc_824E6D2C;
	// lis r10,1280
	ctx.r10.s64 = 83886080;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824e6d20
	if (ctx.cr6.eq) goto loc_824E6D20;
	// lis r10,2048
	ctx.r10.s64 = 134217728;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824e6d14
	if (ctx.cr6.eq) goto loc_824E6D14;
	// lis r10,3072
	ctx.r10.s64 = 201326592;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x824e6d38
	if (!ctx.cr6.eq) goto loc_824E6D38;
	// li r11,11
	ctx.r11.s64 = 11;
	// b 0x824e6d18
	goto loc_824E6D18;
loc_824E6C98:
	// rlwinm r11,r30,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x2000;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r11,8192
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8192, ctx.xer);
	// bne cr6,0x824e6cc4
	if (!ctx.cr6.eq) goto loc_824E6CC4;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824e6cbc
	if (!ctx.cr0.eq) goto loc_824E6CBC;
	// bl 0x826b40a0
	ctx.lr = 0x824E6CBC;
	sub_826B40A0(ctx, base);
loc_824E6CBC:
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_824E6CC4:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824e6438
	ctx.lr = 0x824E6CD8;
	sub_824E6438(ctx, base);
	// lwz r30,0(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm. r11,r30,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824e6c98
	if (!ctx.cr0.eq) goto loc_824E6C98;
	// b 0x824e6db8
	goto loc_824E6DB8;
loc_824E6CE8:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824e6438
	ctx.lr = 0x824E6CFC;
	sub_824E6438(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// b 0x824e6d08
	goto loc_824E6D08;
loc_824E6D04:
	// lwzu r11,4(r31)
	ea = 4 + r31.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	r31.u32 = ea;
loc_824E6D08:
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824e6d04
	if (!ctx.cr0.eq) goto loc_824E6D04;
	// b 0x824e6db8
	goto loc_824E6DB8;
loc_824E6D14:
	// li r11,7
	ctx.r11.s64 = 7;
loc_824E6D18:
	// rlwimi r30,r11,24,4,7
	r30.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xF000000) | (r30.u64 & 0xFFFFFFFFF0FFFFFF);
	// b 0x824e6d38
	goto loc_824E6D38;
loc_824E6D20:
	// rlwinm r11,r30,0,8,6
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFEFFFFFF;
	// oris r30,r11,1024
	r30.u64 = ctx.r11.u64 | 67108864;
	// b 0x824e6d38
	goto loc_824E6D38;
loc_824E6D2C:
	// rlwimi r30,r25,25,6,7
	r30.u64 = (__builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 25) & 0x3000000) | (r30.u64 & 0xFFFFFFFFFCFFFFFF);
	// b 0x824e6d38
	goto loc_824E6D38;
loc_824E6D34:
	// rlwinm r30,r30,0,8,6
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFEFFFFFF;
loc_824E6D38:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// lis r5,16
	ctx.r5.s64 = 1048576;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824e6438
	ctx.lr = 0x824E6D4C;
	sub_824E6438(ctx, base);
	// cmplwi cr6,r24,32
	ctx.cr6.compare<uint32_t>(r24.u32, 32, ctx.xer);
	// bne cr6,0x824e6da8
	if (!ctx.cr6.eq) goto loc_824E6DA8;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824e6d64
	if (!ctx.cr0.eq) goto loc_824E6D64;
	// bl 0x826b40a0
	ctx.lr = 0x824E6D64;
	sub_826B40A0(ctx, base);
loc_824E6D64:
	// lwz r30,0(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r11,r30,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r11,8192
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8192, ctx.xer);
	// bne cr6,0x824e6d94
	if (!ctx.cr6.eq) goto loc_824E6D94;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824e6d8c
	if (!ctx.cr0.eq) goto loc_824E6D8C;
	// bl 0x826b40a0
	ctx.lr = 0x824E6D8C;
	sub_826B40A0(ctx, base);
loc_824E6D8C:
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_824E6D94:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824e6438
	ctx.lr = 0x824E6DA8;
	sub_824E6438(ctx, base);
loc_824E6DA8:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824e6db8
	if (ctx.cr0.eq) goto loc_824E6DB8;
	// bl 0x826b40a0
	ctx.lr = 0x824E6DB8;
	sub_826B40A0(ctx, base);
loc_824E6DB8:
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(r18.s32, 0, ctx.xer);
	// beq cr6,0x824e6dd8
	if (ctx.cr6.eq) goto loc_824E6DD8;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// lis r5,228
	ctx.r5.s64 = 14942208;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x824e6688
	ctx.lr = 0x824E6DD8;
	sub_824E6688(ctx, base);
loc_824E6DD8:
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(r16.s32, 0, ctx.xer);
	// beq cr6,0x824e6e2c
	if (ctx.cr6.eq) goto loc_824E6E2C;
	// cmplw cr6,r22,r23
	ctx.cr6.compare<uint32_t>(r22.u32, r23.u32, ctx.xer);
	// blt cr6,0x824e6dec
	if (ctx.cr6.lt) goto loc_824E6DEC;
	// bl 0x826b40a0
	ctx.lr = 0x824E6DEC;
	sub_826B40A0(ctx, base);
loc_824E6DEC:
	// lwz r11,428(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 428);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r11,r11,25
	ctx.r11.s64 = ctx.r11.s64 + 25;
	// li r4,16
	ctx.r4.s64 = 16;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r11,r26
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r26.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x824e65b0
	ctx.lr = 0x824E6E10;
	sub_824E65B0(ctx, base);
	// lwz r11,428(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 428);
	// lwz r10,424(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 424);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,428(r26)
	REX_STORE_U32(r26.u32 + 428, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x824e6e2c
	if (!ctx.cr6.gt) goto loc_824E6E2C;
	// bl 0x826b40a0
	ctx.lr = 0x824E6E2C;
	sub_826B40A0(ctx, base);
loc_824E6E2C:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r17)
	REX_STORE_U32(r17.u32 + 0, ctx.r11.u32);
	// stw r31,0(r19)
	REX_STORE_U32(r19.u32 + 0, r31.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1cd8
	return;
}

DEFINE_REX_FUNC(sub_8250BE58) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8250BE60;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,28(r5)
	r31.u64 = REX_LOAD_U32(ctx.r5.u32 + 28);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8250bedc
	if (!ctx.cr0.eq) goto loc_8250BEDC;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq 0x8250bedc
	if (ctx.cr0.eq) goto loc_8250BEDC;
loc_8250BE80:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r10,r11,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,14080
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14080, ctx.xer);
	// bne cr6,0x8250bec4
	if (!ctx.cr6.eq) goto loc_8250BEC4;
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8250bec4
	if (ctx.cr0.eq) goto loc_8250BEC4;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// lwz r3,12(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x82516448
	ctx.lr = 0x8250BEA4;
	sub_82516448(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825164c0
	ctx.lr = 0x8250BEB0;
	sub_825164C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82516928
	ctx.lr = 0x8250BEBC;
	sub_82516928(ctx, base);
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r29.u32, ctx.xer);
	// beq cr6,0x8250bee8
	if (ctx.cr6.eq) goto loc_8250BEE8;
loc_8250BEC4:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r31,40(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8250bedc
	if (!ctx.cr0.eq) goto loc_8250BEDC;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8250be80
	if (!ctx.cr6.eq) goto loc_8250BE80;
loc_8250BEDC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8250BEE0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
loc_8250BEE8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8250bee0
	goto loc_8250BEE0;
}

DEFINE_REX_FUNC(sub_825168E0) {
	REX_FUNC_PROLOGUE();
	// rlwinm r8,r4,1,0,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFC0;
	// lwz r11,692(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 692);
	// rlwinm r9,r4,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r4,30,3,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x1FFFFFF8;
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// li r8,3
	ctx.r8.s64 = 3;
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// clrldi r7,r6,62
	ctx.r7.u64 = ctx.r6.u64 & 0x3;
	// ldx r6,r10,r11
	ctx.r6.u64 = REX_LOAD_U64(ctx.r10.u32 + ctx.r11.u32);
	// sld r8,r8,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r9.u8 & 0x7F));
	// sld r9,r7,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r7.u64 << (ctx.r9.u8 & 0x7F));
	// andc r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 & ~ctx.r8.u64;
	// rlwinm r7,r4,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stdx r9,r10,r11
	REX_STORE_U64(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u64);
	// lwz r11,688(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 688);
	// stwx r5,r11,r7
	REX_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r5.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8251E348) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r11,r11,18,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r10,r10,18,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x7;
	// subf r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8251E668) {
	REX_FUNC_PROLOGUE();
	// li r8,2
	ctx.r8.s64 = 2;
	// clrlwi r10,r4,27
	ctx.r10.u64 = ctx.r4.u32 & 0x1F;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// slw r10,r8,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm. r11,r4,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x7FFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// bltlr 
	if (ctx.cr0.lt) return;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_8251E690:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// andc. r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 & ~ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8251e6b0
	if (!ctx.cr0.eq) goto loc_8251E6B0;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// bge 0x8251e690
	if (!ctx.cr0.lt) goto loc_8251E690;
	// blr 
	return;
loc_8251E6B0:
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r10,r11,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// subfic r11,r8,31
	ctx.xer.ca = ctx.r8.u32 <= 31;
	ctx.r11.u64 = static_cast<uint64_t>(31) - ctx.r8.u64;
	// rlwinm r8,r11,0,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srw r11,r9,r8
	ctx.r11.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r8.u8 & 0x3F));
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82520308) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82520310;
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
	// bge cr6,0x82520380
	if (!ctx.cr6.lt) goto loc_82520380;
loc_82520328:
	// rlwinm r11,r31,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r10,r31,27
	ctx.r10.u64 = r31.u32 & 0x1F;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r9,2
	ctx.r9.s64 = 2;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r11,r9,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// lwzx r9,r8,r30
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + r30.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r8,-1
	ctx.r8.s64 = -1;
	// and r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	// slw r9,r8,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r10.u8 & 0x3F));
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// subfic r4,r11,1
	ctx.xer.ca = ctx.r11.u32 <= 1;
	ctx.r4.u64 = static_cast<uint64_t>(1) - ctx.r11.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82520374
	if (ctx.cr6.eq) goto loc_82520374;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwimi r4,r31,4,0,27
	ctx.r4.u64 = (__builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 4) & 0xFFFFFFF0) | (ctx.r4.u64 & 0xFFFFFFFF0000000F);
	// bl 0x8251f1b0
	ctx.lr = 0x82520374;
	sub_8251F1B0(ctx, base);
loc_82520374:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(r31.u32, r29.u32, ctx.xer);
	// blt cr6,0x82520328
	if (ctx.cr6.lt) goto loc_82520328;
loc_82520380:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82525AE8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r9,20(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// lwz r10,8(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// oris r8,r11,256
	ctx.r8.u64 = ctx.r11.u64 | 16777216;
	// rlwimi r5,r9,0,0,18
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFE000) | (ctx.r5.u64 & 0xFFFFFFFF00001FFF);
	// rlwinm r11,r10,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// stw r8,16(r4)
	REX_STORE_U32(ctx.r4.u32 + 16, ctx.r8.u32);
	// stw r5,20(r4)
	REX_STORE_U32(ctx.r4.u32 + 20, ctx.r5.u32);
	// cmplwi cr6,r11,110
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 110, ctx.xer);
	// bne cr6,0x82525b14
	if (!ctx.cr6.eq) goto loc_82525B14;
	// b 0x82523820
	sub_82523820(ctx, base);
	return;
loc_82525B14:
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// blt cr6,0x82525b28
	if (ctx.cr6.lt) goto loc_82525B28;
	// cmplwi cr6,r11,82
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 82, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82525b2c
	if (!ctx.cr6.gt) goto loc_82525B2C;
loc_82525B28:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82525B2C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// rlwinm r11,r10,0,10,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x380000;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lwz r11,48(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 48);
	// lwz r4,12(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// b 0x82549518
	sub_82549518(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8252E758) {
	REX_FUNC_PROLOGUE();
	// lwz r11,32(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 32);
	// addi r6,r4,32
	ctx.r6.s64 = ctx.r4.s64 + 32;
	// b 0x8252e7d4
	goto loc_8252E7D4;
loc_8252E764:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// clrlwi. r7,r8,19
	ctx.r7.u64 = ctx.r8.u32 & 0x1FFF;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x8252e7bc
	if (ctx.cr0.eq) goto loc_8252E7BC;
	// addi r8,r9,24
	ctx.r8.s64 = ctx.r9.s64 + 24;
loc_8252E77C:
	// lwz r3,0(r8)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8252e79c
	if (ctx.cr6.eq) goto loc_8252E79C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x8252e77c
	if (ctx.cr6.lt) goto loc_8252E77C;
	// b 0x8252e7bc
	goto loc_8252E7BC;
loc_8252E79C:
	// addi r8,r10,6
	ctx.r8.s64 = ctx.r10.s64 + 6;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r8,r9
	REX_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r5.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r8.u32);
	// lwz r8,32(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 32);
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r11,32(r5)
	REX_STORE_U32(ctx.r5.u32 + 32, ctx.r11.u32);
loc_8252E7BC:
	// lwz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// clrlwi r9,r9,19
	ctx.r9.u64 = ctx.r9.u32 & 0x1FFF;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8252e7d0
	if (!ctx.cr6.eq) goto loc_8252E7D0;
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
loc_8252E7D0:
	// lwz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
loc_8252E7D4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8252e764
	if (!ctx.cr6.eq) goto loc_8252E764;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82531120) {
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
	ctx.lr = 0x82531128;
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
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x825bb860
	ctx.lr = 0x82531158;
	sub_825BB860(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// beq cr6,0x8253117c
	if (ctx.cr6.eq) goto loc_8253117C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,12(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x82531178;
	sub_82503DA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_8253117C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82531184;
	sub_8250AD28(ctx, base);
	// stw r3,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r3.u32);
	// lwz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// beq cr6,0x825311a8
	if (ctx.cr6.eq) goto loc_825311A8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,12(r28)
	ctx.r5.u64 = REX_LOAD_U32(r28.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x825311A4;
	sub_82503DA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_825311A8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x825311B0;
	sub_8250AD28(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// rlwimi r11,r10,14,15,17
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0x1C000) | (ctx.r11.u64 & 0xFFFFFFFFFFFE3FFF);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824ffc30
	ctx.lr = 0x825311D8;
	sub_824FFC30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8253BC68) {
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
	ctx.lr = 0x8253BC70;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 28);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x8253bcac
	if (!ctx.cr6.eq) goto loc_8253BCAC;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r9,212(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 212);
	// addi r11,r5,12
	ctx.r11.s64 = ctx.r5.s64 + 12;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// lwz r10,28(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 28);
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// stw r11,28(r5)
	REX_STORE_U32(ctx.r5.u32 + 28, ctx.r11.u32);
loc_8253BCAC:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8253bce8
	if (ctx.cr6.eq) goto loc_8253BCE8;
	// addi r11,r31,12
	ctx.r11.s64 = r31.s64 + 12;
loc_8253BCC0:
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwzx r10,r8,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// or r30,r10,r9
	r30.u64 = ctx.r10.u64 | ctx.r9.u64;
	// bne cr6,0x8253bcc0
	if (!ctx.cr6.eq) goto loc_8253BCC0;
loc_8253BCE8:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r29,4(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x8250ab60
	ctx.lr = 0x8253BCF8;
	sub_8250AB60(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// rlwimi r10,r11,27,4,6
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0xE000000) | (ctx.r10.u64 & 0xFFFFFFFFF1FFFFFF);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x8250a620
	ctx.lr = 0x8253BD14;
	sub_8250A620(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// rlwimi r11,r30,5,19,26
	ctx.r11.u64 = (__builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 5) & 0x1FE0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFE01F);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// bl 0x825313a8
	ctx.lr = 0x8253BD34;
	sub_825313A8(ctx, base);
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8253bd5c
	if (ctx.cr6.eq) goto loc_8253BD5C;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82503400
	ctx.lr = 0x8253BD50;
	sub_82503400(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250ad28
	ctx.lr = 0x8253BD5C;
	sub_8250AD28(ctx, base);
loc_8253BD5C:
	// lwz r11,160(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 160);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8253be78
	if (ctx.cr6.eq) goto loc_8253BE78;
	// addi r26,r31,32
	r26.s64 = r31.s64 + 32;
loc_8253BD6C:
	// lwz r11,128(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 128);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,128(r26)
	REX_STORE_U32(r26.u32 + 128, ctx.r11.u32);
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r8,160(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 160);
	// add r7,r10,r26
	ctx.r7.u64 = ctx.r10.u64 + r26.u64;
	// lwzx r10,r10,r26
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r26.u32);
	// lwz r11,208(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 208);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// lwz r11,4(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r8,8(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r7,12(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 12);
	// stw r8,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r8.u32);
	// stw r7,12(r9)
	REX_STORE_U32(ctx.r9.u32 + 12, ctx.r7.u32);
	// stw r11,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// stw r10,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// beq cr6,0x8253be6c
	if (ctx.cr6.eq) goto loc_8253BE6C;
	// lwz r27,88(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8250acc8
	ctx.lr = 0x8253BDD0;
	sub_8250ACC8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8250ac70
	ctx.lr = 0x8253BDE4;
	sub_8250AC70(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,384
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 384, ctx.xer);
	// bne cr6,0x8253be04
	if (!ctx.cr6.eq) goto loc_8253BE04;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
loc_8253BE04:
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82530ae0
	ctx.lr = 0x8253BE18;
	sub_82530AE0(ctx, base);
	// rlwinm. r11,r27,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// beq 0x8253be48
	if (ctx.cr0.eq) goto loc_8253BE48;
	// lwz r3,92(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x8250a678
	ctx.lr = 0x8253BE2C;
	sub_8250A678(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82503400
	ctx.lr = 0x8253BE3C;
	sub_82503400(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8250ad28
	ctx.lr = 0x8253BE48;
	sub_8250AD28(ctx, base);
loc_8253BE48:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250aed8
	ctx.lr = 0x8253BE50;
	sub_8250AED8(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// bl 0x825335b8
	ctx.lr = 0x8253BE68;
	sub_825335B8(ctx, base);
	// mr r30,r29
	r30.u64 = r29.u64;
loc_8253BE6C:
	// lwz r11,160(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 160);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8253bd6c
	if (!ctx.cr6.eq) goto loc_8253BD6C;
loc_8253BE78:
	// lwz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 8);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8253be90
	if (ctx.cr0.eq) goto loc_8253BE90;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
loc_8253BE90:
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82537a20
	ctx.lr = 0x8253BEA4;
	sub_82537A20(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_825537D0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addi r8,r9,4
	ctx.r8.s64 = ctx.r9.s64 + 4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// lwz r7,8(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// add r3,r8,r10
	ctx.r3.u64 = ctx.r8.u64 + ctx.r10.u64;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
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
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825545B0) {
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
	ctx.lr = 0x825545B8;
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
	// li r6,61
	ctx.r6.s64 = 61;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x825bb860
	ctx.lr = 0x825545E4;
	sub_825BB860(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// beq cr6,0x82554608
	if (ctx.cr6.eq) goto loc_82554608;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,12(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x82554604;
	sub_82503DA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82554608:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82554610;
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
	ctx.lr = 0x82554628;
	sub_824FFC30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82558660) {
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
	ctx.lr = 0x82558668;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,40(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825587ec
	if (ctx.cr0.eq) goto loc_825587EC;
	// lbz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r5.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825586a0
	if (ctx.cr0.eq) goto loc_825586A0;
	// bl 0x8257dfd8
	ctx.lr = 0x82558698;
	sub_8257DFD8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r26)
	REX_STORE_U8(r26.u32 + 0, ctx.r11.u8);
loc_825586A0:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82558788
	if (!ctx.cr0.eq) goto loc_82558788;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82558788
	if (ctx.cr0.eq) goto loc_82558788;
loc_825586B8:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x825586cc
	if (ctx.cr6.eq) goto loc_825586CC;
	// lwz r11,44(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 44);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r27.u32, ctx.xer);
	// beq cr6,0x82558704
	if (ctx.cr6.eq) goto loc_82558704;
loc_825586CC:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8255876c
	if (ctx.cr6.eq) goto loc_8255876C;
	// lwz r11,48(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 48);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,40(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 40);
	// clrlwi r8,r11,13
	ctx.r8.u64 = ctx.r11.u32 & 0x7FFFF;
	// rlwinm r11,r8,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r8,r8,27
	ctx.r8.u64 = ctx.r8.u32 & 0x1F;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// slw r10,r10,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r8.u8 & 0x3F));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8255876c
	if (ctx.cr0.eq) goto loc_8255876C;
loc_82558704:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8250b3d0
	ctx.lr = 0x82558710;
	sub_8250B3D0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8255876c
	if (ctx.cr0.eq) goto loc_8255876C;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,86
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 86, ctx.xer);
	// beq cr6,0x82558734
	if (ctx.cr6.eq) goto loc_82558734;
	// cmplwi cr6,r11,87
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 87, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x82558738
	if (!ctx.cr6.eq) goto loc_82558738;
loc_82558734:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82558738:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8255876c
	if (ctx.cr0.eq) goto loc_8255876C;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x824f71b8
	ctx.lr = 0x82558758;
	sub_824F71B8(ctx, base);
	// addi r11,r31,-16
	ctx.r11.s64 = r31.s64 + -16;
	// lwzx r11,r3,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// oris r10,r10,16384
	ctx.r10.u64 = ctx.r10.u64 | 1073741824;
	// stw r10,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
loc_8255876C:
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82558788
	if (!ctx.cr0.eq) goto loc_82558788;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825586b8
	if (!ctx.cr6.eq) goto loc_825586B8;
loc_82558788:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82552180
	ctx.lr = 0x82558794;
	sub_82552180(ctx, base);
	// lwz r31,4(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 4);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825587ec
	if (!ctx.cr0.eq) goto loc_825587EC;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq 0x825587ec
	if (ctx.cr0.eq) goto loc_825587EC;
loc_825587A8:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// rlwinm. r10,r11,2,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825587d4
	if (ctx.cr0.eq) goto loc_825587D4;
	// rlwinm r11,r11,0,2,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// rlwinm. r10,r11,13,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// beq 0x825587d4
	if (ctx.cr0.eq) goto loc_825587D4;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82551458
	ctx.lr = 0x825587D4;
	sub_82551458(ctx, base);
loc_825587D4:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r31,4(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825587ec
	if (!ctx.cr0.eq) goto loc_825587EC;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x825587a8
	if (!ctx.cr6.eq) goto loc_825587A8;
loc_825587EC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8257B6D0) {
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
	ctx.lr = 0x8257B6D8;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,112
	ctx.r4.s64 = 112;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// bl 0x824f71b8
	ctx.lr = 0x8257B700;
	sub_824F71B8(ctx, base);
	// add r27,r3,r22
	r27.u64 = ctx.r3.u64 + r22.u64;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// lwz r11,-8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + -8);
	// clrlwi r29,r11,17
	r29.u64 = ctx.r11.u32 & 0x7FFF;
loc_8257B710:
	// mr r30,r26
	r30.u64 = r26.u64;
loc_8257B714:
	// lwz r11,80(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8257b72c
	if (ctx.cr6.eq) goto loc_8257B72C;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r28,r10,r11
	r28.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x8257b730
	goto loc_8257B730;
loc_8257B72C:
	// li r28,0
	r28.s64 = 0;
loc_8257B730:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8257b754
	if (ctx.cr6.eq) goto loc_8257B754;
	// lwz r11,-8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + -8);
	// rlwinm r11,r11,20,15,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x1FFF8;
	// ldx r11,r11,r28
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + r28.u32);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8257b96c
	if (!ctx.cr6.eq) goto loc_8257B96C;
loc_8257B754:
	// lwz r11,28(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 28);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r9,40(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 40);
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// clrlwi r7,r10,13
	ctx.r7.u64 = ctx.r10.u32 & 0x7FFFF;
	// rlwinm r10,r7,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r7,r7,27
	ctx.r7.u64 = ctx.r7.u32 & 0x1F;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// slw r8,r8,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r7.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// and. r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8257b790
	if (ctx.cr0.eq) goto loc_8257B790;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// b 0x8257b894
	goto loc_8257B894;
loc_8257B790:
	// lwz r10,76(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 76);
	// rlwinm. r10,r10,0,11,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8257b818
	if (ctx.cr0.eq) goto loc_8257B818;
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// rlwinm. r10,r11,0,11,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8257b818
	if (!ctx.cr0.eq) goto loc_8257B818;
	// lwz r10,4(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8257b818
	if (!ctx.cr0.eq) goto loc_8257B818;
	// lwz r10,52(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 52);
	// lwz r10,76(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 76);
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi. r11,r11,13
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8257b818
	if (ctx.cr0.eq) goto loc_8257B818;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mulli r10,r29,40
	ctx.r10.s64 = static_cast<int64_t>(r29.u64 * static_cast<uint64_t>(40));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8257b7f8
	if (ctx.cr6.eq) goto loc_8257B7F8;
	// lwz r10,44(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// rlwinm. r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8257b7f8
	if (ctx.cr0.eq) goto loc_8257B7F8;
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8257b818
	if (!ctx.cr6.eq) goto loc_8257B818;
loc_8257B7F8:
	// lwz r11,-8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + -8);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// rlwinm r6,r11,17,18,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x3FFF;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8257b4e8
	ctx.lr = 0x8257B814;
	sub_8257B4E8(ctx, base);
	// b 0x8257b714
	goto loc_8257B714;
loc_8257B818:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// bne cr6,0x8257b8b0
	if (!ctx.cr6.eq) goto loc_8257B8B0;
	// lwz r9,48(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 48);
	// rlwinm. r11,r9,13,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 13) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8257b870
	if (ctx.cr0.eq) goto loc_8257B870;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mulli r10,r29,40
	ctx.r10.s64 = static_cast<int64_t>(r29.u64 * static_cast<uint64_t>(40));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r10,r10,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8257b850
	if (!ctx.cr0.eq) goto loc_8257B850;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm. r11,r11,0,10,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x380000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8257b870
	if (!ctx.cr0.eq) goto loc_8257B870;
loc_8257B850:
	// lwz r11,-8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + -8);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// rlwinm r7,r11,17,18,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x3FFF;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825bc910
	ctx.lr = 0x8257B86C;
	sub_825BC910(ctx, base);
	// b 0x8257b710
	goto loc_8257B710;
loc_8257B870:
	// rlwinm. r11,r9,11,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 11) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8257b8b0
	if (ctx.cr0.eq) goto loc_8257B8B0;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mulli r10,r29,40
	ctx.r10.s64 = static_cast<int64_t>(r29.u64 * static_cast<uint64_t>(40));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8257b8b0
	if (ctx.cr0.eq) goto loc_8257B8B0;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
loc_8257B894:
	// lwz r11,-8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + -8);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// rlwinm r7,r11,17,18,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x3FFF;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// bl 0x825bc910
	ctx.lr = 0x8257B8AC;
	sub_825BC910(ctx, base);
	// b 0x8257b714
	goto loc_8257B714;
loc_8257B8B0:
	// cmplw cr6,r30,r23
	ctx.cr6.compare<uint32_t>(r30.u32, r23.u32, ctx.xer);
	// bne cr6,0x8257b8cc
	if (!ctx.cr6.eq) goto loc_8257B8CC;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x8257ba7c
	if (ctx.cr6.eq) goto loc_8257BA7C;
	// mr r30,r25
	r30.u64 = r25.u64;
	// li r25,0
	r25.s64 = 0;
	// b 0x8257b714
	goto loc_8257B714;
loc_8257B8CC:
	// lwz r11,52(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8257b8e0
	if (ctx.cr6.eq) goto loc_8257B8E0;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// b 0x8257b714
	goto loc_8257B714;
loc_8257B8E0:
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
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8257ba7c
	if (!ctx.cr6.eq) goto loc_8257BA7C;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mulli r10,r29,40
	ctx.r10.s64 = static_cast<int64_t>(r29.u64 * static_cast<uint64_t>(40));
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x8257b91c
	if (ctx.cr6.eq) goto loc_8257B91C;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8257ba7c
	if (!ctx.cr6.eq) goto loc_8257BA7C;
loc_8257B91C:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82583608
	ctx.lr = 0x8257B92C;
	sub_82583608(ctx, base);
	// stw r30,564(r31)
	REX_STORE_U32(r31.u32 + 564, r30.u32);
	// lwz r11,-8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + -8);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// rlwinm r6,r11,17,18,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x3FFF;
	// bl 0x825c21d8
	ctx.lr = 0x8257B94C;
	sub_825C21D8(ctx, base);
	// lwz r11,-8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + -8);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,20,15,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x1FFF8;
	// add r9,r11,r28
	ctx.r9.u64 = ctx.r11.u64 + r28.u64;
	// stwx r10,r11,r28
	REX_STORE_U32(ctx.r11.u32 + r28.u32, ctx.r10.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// b 0x8257b714
	goto loc_8257B714;
loc_8257B96C:
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 0);
loc_8257B970:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8257b990
	if (ctx.cr6.eq) goto loc_8257B990;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,28(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r30.u32, ctx.xer);
	// beq cr6,0x8257baec
	if (ctx.cr6.eq) goto loc_8257BAEC;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8257b970
	goto loc_8257B970;
loc_8257B990:
	// stw r30,564(r31)
	REX_STORE_U32(r31.u32 + 564, r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82584ed0
	ctx.lr = 0x8257B9A0;
	sub_82584ED0(ctx, base);
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r10,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,14720
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14720, ctx.xer);
	// bne cr6,0x8257b9f0
	if (!ctx.cr6.eq) goto loc_8257B9F0;
	// add r11,r24,r11
	ctx.r11.u64 = r24.u64 + ctx.r11.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r10,r11,-8
	ctx.r10.s64 = ctx.r11.s64 + -8;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r11,-8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -8);
	// rlwinm r6,r11,17,18,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x3FFF;
	// clrlwi r5,r11,17
	ctx.r5.u64 = ctx.r11.u32 & 0x7FFF;
	// bl 0x825c21d8
	ctx.lr = 0x8257B9D4;
	sub_825C21D8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x82584ed0
	ctx.lr = 0x8257B9EC;
	sub_82584ED0(ctx, base);
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
loc_8257B9F0:
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r30.u32, ctx.xer);
	// bne cr6,0x8257ba24
	if (!ctx.cr6.eq) goto loc_8257BA24;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r10,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r10,125
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 125, ctx.xer);
	// beq cr6,0x8257ba18
	if (ctx.cr6.eq) goto loc_8257BA18;
	// cmplwi cr6,r10,124
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 124, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// bne cr6,0x8257ba1c
	if (!ctx.cr6.eq) goto loc_8257BA1C;
loc_8257BA18:
	// li r10,1
	ctx.r10.s64 = 1;
loc_8257BA1C:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8257ba70
	if (ctx.cr0.eq) goto loc_8257BA70;
loc_8257BA24:
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r30,24
	ctx.r5.s64 = r30.s64 + 24;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250c998
	ctx.lr = 0x8257BA3C;
	sub_8250C998(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r11,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// ld r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r10,-8(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + -8);
	// rlwinm r10,r10,20,15,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0x1FFF8;
	// stdx r11,r10,r28
	REX_STORE_U64(ctx.r10.u32 + r28.u32, ctx.r11.u64);
	// bl 0x82584ed0
	ctx.lr = 0x8257BA6C;
	sub_82584ED0(ctx, base);
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
loc_8257BA70:
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r22.u32, ctx.xer);
	// beq cr6,0x8257baec
	if (ctx.cr6.eq) goto loc_8257BAEC;
	// b 0x8257bae0
	goto loc_8257BAE0;
loc_8257BA7C:
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,116
	ctx.r6.s64 = 116;
	// addi r5,r26,16
	ctx.r5.s64 = r26.s64 + 16;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825bb860
	ctx.lr = 0x8257BA98;
	sub_825BB860(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,116
	ctx.r4.s64 = 116;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f71b8
	ctx.lr = 0x8257BAB0;
	sub_824F71B8(ctx, base);
	// addi r11,r30,-4
	ctx.r11.s64 = r30.s64 + -4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r10,r29,0,17,31
	ctx.r10.u64 = (__builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x7FFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF8000);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,-8(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + -8);
	// rlwimi r9,r10,0,3,16
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1FFF8000) | (ctx.r9.u64 & 0xFFFFFFFFE0007FFF);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// bl 0x8250ab60
	ctx.lr = 0x8257BAE0;
	sub_8250AB60(ctx, base);
loc_8257BAE0:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x8250ad28
	ctx.lr = 0x8257BAEC;
	sub_8250AD28(ctx, base);
loc_8257BAEC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_8259CBB8) {
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
	ctx.lr = 0x8259CBC0;
	// stfd f29,-112(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -112, f29.u64);
	// stfd f30,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, f30.u64);
	// stfd f31,-96(r1)
	REX_STORE_U64(ctx.r1.u32 + -96, f31.u64);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// lfs f0,3716(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f13,3704(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3704);
	ctx.f13.f64 = double(temp.f32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// fmr f8,f0
	ctx.f8.f64 = ctx.f0.f64;
	// fmr f7,f0
	ctx.f7.f64 = ctx.f0.f64;
	// ble cr6,0x8259cc90
	if (!ctx.cr6.gt) goto loc_8259CC90;
loc_8259CC00:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x8259cc84
	if (!ctx.cr6.gt) goto loc_8259CC84;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_8259CC14:
	// add r11,r8,r10
	ctx.r11.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f12,r11,r23
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r23.u32);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bge cr6,0x8259cc30
	if (!ctx.cr6.lt) goto loc_8259CC30;
	// stfsx f0,r11,r23
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + r23.u32, temp.u32);
	// b 0x8259cc3c
	goto loc_8259CC3C;
loc_8259CC30:
	// fcmpu cr6,f12,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// ble cr6,0x8259cc3c
	if (!ctx.cr6.gt) goto loc_8259CC3C;
	// stfsx f13,r11,r23
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + r23.u32, temp.u32);
loc_8259CC3C:
	// lfsx f12,r11,r22
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r22.u32);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bge cr6,0x8259cc50
	if (!ctx.cr6.lt) goto loc_8259CC50;
	// stfsx f0,r11,r22
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + r22.u32, temp.u32);
	// b 0x8259cc5c
	goto loc_8259CC5C;
loc_8259CC50:
	// fcmpu cr6,f12,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// ble cr6,0x8259cc5c
	if (!ctx.cr6.gt) goto loc_8259CC5C;
	// stfsx f13,r11,r22
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + r22.u32, temp.u32);
loc_8259CC5C:
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lfsx f12,r11,r23
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r23.u32);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// lfsx f11,r11,r22
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r22.u32);
	ctx.f11.f64 = double(temp.f32);
	// fadds f8,f12,f8
	ctx.f8.f64 = double(float(ctx.f12.f64 + ctx.f8.f64));
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// fadds f7,f11,f7
	ctx.f7.f64 = double(float(ctx.f11.f64 + ctx.f7.f64));
	// stfsx f12,r11,r5
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r5.u32, temp.u32);
	// stfsx f11,r11,r4
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r4.u32, temp.u32);
	// bdnz 0x8259cc14
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8259CC14;
loc_8259CC84:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8259cc00
	if (ctx.cr6.lt) goto loc_8259CC00;
loc_8259CC90:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f11,f0
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f0.f64;
	// li r11,0
	ctx.r11.s64 = 0;
	// fmr f10,f0
	ctx.f10.f64 = ctx.f0.f64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// lfs f9,15196(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15196);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f8,f9
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// fmuls f7,f7,f9
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f9.f64));
	// ble cr6,0x8259cd0c
	if (!ctx.cr6.gt) goto loc_8259CD0C;
loc_8259CCB8:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x8259cd00
	if (!ctx.cr6.gt) goto loc_8259CD00;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_8259CCCC:
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lfsx f9,r8,r5
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r5.u32);
	ctx.f9.f64 = double(temp.f32);
	// lfsx f6,r8,r4
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r4.u32);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f9,f9,f8
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f8.f64));
	// fsubs f6,f6,f7
	ctx.f6.f64 = double(float(ctx.f6.f64 - ctx.f7.f64));
	// fmadds f11,f9,f9,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f9.f64, ctx.f9.f64, ctx.f11.f64)));
	// fmadds f10,f6,f6,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f6.f64, ctx.f6.f64, ctx.f10.f64)));
	// fmadds f12,f6,f9,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f6.f64, ctx.f9.f64, ctx.f12.f64)));
	// bdnz 0x8259cccc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8259CCCC;
loc_8259CD00:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8259ccb8
	if (ctx.cr6.lt) goto loc_8259CCB8;
loc_8259CD0C:
	// fsubs f9,f11,f10
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fabs f5,f12
	ctx.f5.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f11,8300(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8300);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,-13992(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -13992);
	ctx.f10.f64 = double(temp.f32);
	// lfs f6,3720(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3720);
	ctx.f6.f64 = double(temp.f32);
	// fdivs f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 / ctx.f12.f64));
	// fcmpu cr6,f5,f10
	ctx.cr6.compare(ctx.f5.f64, ctx.f10.f64);
	// fmadds f11,f12,f12,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f12.f64, ctx.f12.f64, ctx.f11.f64)));
	// fneg f10,f12
	ctx.f10.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fsqrts f9,f11
	ctx.f9.f64 = double(float(sqrt(ctx.f11.f64)));
	// fsqrts f11,f11
	ctx.f11.f64 = double(float(sqrt(ctx.f11.f64)));
	// fsubs f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// fsubs f11,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// fmuls f10,f12,f6
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f6.f64));
	// fmuls f9,f11,f6
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f6.f64));
	// fmadds f12,f10,f10,f13
	ctx.f12.f64 = double(float(std::fma(ctx.f10.f64, ctx.f10.f64, ctx.f13.f64)));
	// fmadds f11,f9,f9,f13
	ctx.f11.f64 = double(float(std::fma(ctx.f9.f64, ctx.f9.f64, ctx.f13.f64)));
	// fsqrts f12,f12
	ctx.f12.f64 = double(float(sqrt(ctx.f12.f64)));
	// fsqrts f11,f11
	ctx.f11.f64 = double(float(sqrt(ctx.f11.f64)));
	// fdivs f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// fdivs f11,f13,f11
	ctx.f11.f64 = double(float(ctx.f13.f64 / ctx.f11.f64));
	// fmuls f10,f12,f10
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// fmuls f9,f11,f9
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// bge cr6,0x8259cd88
	if (!ctx.cr6.lt) goto loc_8259CD88;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// fmr f10,f13
	ctx.f10.f64 = ctx.f13.f64;
	// fmr f11,f13
	ctx.f11.f64 = ctx.f13.f64;
	// fmr f9,f0
	ctx.f9.f64 = ctx.f0.f64;
loc_8259CD88:
	// fmuls f5,f12,f8
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f8.f64));
	// li r11,0
	ctx.r11.s64 = 0;
	// fmuls f4,f11,f8
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f8.f64));
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// fmadds f5,f10,f7,f5
	ctx.f5.f64 = double(float(std::fma(ctx.f10.f64, ctx.f7.f64, ctx.f5.f64)));
	// fmadds f4,f9,f7,f4
	ctx.f4.f64 = double(float(std::fma(ctx.f9.f64, ctx.f7.f64, ctx.f4.f64)));
	// ble cr6,0x8259ce44
	if (!ctx.cr6.gt) goto loc_8259CE44;
loc_8259CDA8:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x8259ce2c
	if (!ctx.cr6.gt) goto loc_8259CE2C;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_8259CDBC:
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lfsx f3,r8,r5
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r5.u32);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f3,f10
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f10.f64));
	// lfsx f1,r8,r4
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r4.u32);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f31,f3,f9
	f31.f64 = double(float(ctx.f3.f64 * ctx.f9.f64));
	// fmadds f2,f1,f12,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f1.f64, ctx.f12.f64, ctx.f2.f64)));
	// fmadds f31,f1,f11,f31
	f31.f64 = double(float(std::fma(ctx.f1.f64, ctx.f11.f64, f31.f64)));
	// fsubs f2,f2,f5
	ctx.f2.f64 = double(float(ctx.f2.f64 - ctx.f5.f64));
	// fsubs f31,f31,f4
	f31.f64 = double(float(f31.f64 - ctx.f4.f64));
	// fmadds f30,f2,f12,f8
	f30.f64 = double(float(std::fma(ctx.f2.f64, ctx.f12.f64, ctx.f8.f64)));
	// fmadds f29,f31,f11,f8
	f29.f64 = double(float(std::fma(f31.f64, ctx.f11.f64, ctx.f8.f64)));
	// fmadds f2,f2,f10,f7
	ctx.f2.f64 = double(float(std::fma(ctx.f2.f64, ctx.f10.f64, ctx.f7.f64)));
	// fmadds f31,f31,f9,f7
	f31.f64 = double(float(std::fma(f31.f64, ctx.f9.f64, ctx.f7.f64)));
	// fsubs f30,f30,f1
	f30.f64 = double(float(f30.f64 - ctx.f1.f64));
	// fsubs f1,f29,f1
	ctx.f1.f64 = double(float(f29.f64 - ctx.f1.f64));
	// fsubs f2,f2,f3
	ctx.f2.f64 = double(float(ctx.f2.f64 - ctx.f3.f64));
	// fsubs f3,f31,f3
	ctx.f3.f64 = double(float(f31.f64 - ctx.f3.f64));
	// fmuls f31,f30,f30
	f31.f64 = double(float(f30.f64 * f30.f64));
	// fmuls f1,f1,f1
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// fmadds f2,f2,f2,f31
	ctx.f2.f64 = double(float(std::fma(ctx.f2.f64, ctx.f2.f64, f31.f64)));
	// fmadds f3,f3,f3,f1
	ctx.f3.f64 = double(float(std::fma(ctx.f3.f64, ctx.f3.f64, ctx.f1.f64)));
	// fadds f13,f2,f13
	ctx.f13.f64 = double(float(ctx.f2.f64 + ctx.f13.f64));
	// fadds f0,f3,f0
	ctx.f0.f64 = double(float(ctx.f3.f64 + ctx.f0.f64));
	// bdnz 0x8259cdbc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8259CDBC;
loc_8259CE2C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8259cda8
	if (ctx.cr6.lt) goto loc_8259CDA8;
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8259ce44
	if (!ctx.cr6.gt) goto loc_8259CE44;
	// fmr f12,f11
	ctx.f12.f64 = ctx.f11.f64;
loc_8259CE44:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8259ce50
	if (!ctx.cr6.gt) goto loc_8259CE50;
	// fmr f10,f9
	ctx.f10.f64 = ctx.f9.f64;
loc_8259CE50:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8259ce5c
	if (!ctx.cr6.gt) goto loc_8259CE5C;
	// fmr f5,f4
	ctx.f5.f64 = ctx.f4.f64;
loc_8259CE5C:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x8259cebc
	if (!ctx.cr6.gt) goto loc_8259CEBC;
loc_8259CE68:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x8259ceb0
	if (!ctx.cr6.gt) goto loc_8259CEB0;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_8259CE7C:
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lfsx f0,r8,r5
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r5.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// lfsx f13,r8,r4
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r4.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f13,f10,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f10.f64, ctx.f0.f64)));
	// fsubs f0,f0,f5
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f5.f64));
	// stfsx f0,r8,r3
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r8.u32 + ctx.r3.u32, temp.u32);
	// bdnz 0x8259ce7c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8259CE7C;
loc_8259CEB0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8259ce68
	if (ctx.cr6.lt) goto loc_8259CE68;
loc_8259CEBC:
	// lfs f0,256(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 256);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// ble cr6,0x8259cf20
	if (!ctx.cr6.gt) goto loc_8259CF20;
loc_8259CED0:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x8259cf14
	if (!ctx.cr6.gt) goto loc_8259CF14;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_8259CEE4:
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f5,r8,r5
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r5.u32);
	ctx.f5.f64 = double(temp.f32);
	// fcmpu cr6,f5,f13
	ctx.cr6.compare(ctx.f5.f64, ctx.f13.f64);
	// bge cr6,0x8259cf00
	if (!ctx.cr6.lt) goto loc_8259CF00;
	// fmr f13,f5
	ctx.f13.f64 = ctx.f5.f64;
loc_8259CF00:
	// fcmpu cr6,f5,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f5.f64, ctx.f0.f64);
	// ble cr6,0x8259cf0c
	if (!ctx.cr6.gt) goto loc_8259CF0C;
	// fmr f0,f5
	ctx.f0.f64 = ctx.f5.f64;
loc_8259CF0C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x8259cee4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8259CEE4;
loc_8259CF14:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8259ced0
	if (ctx.cr6.lt) goto loc_8259CED0;
loc_8259CF20:
	// fmadds f11,f13,f12,f8
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(std::fma(ctx.f13.f64, ctx.f12.f64, ctx.f8.f64)));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmadds f12,f0,f12,f8
	ctx.f12.f64 = double(float(std::fma(ctx.f0.f64, ctx.f12.f64, ctx.f8.f64)));
	// fmadds f9,f0,f10,f7
	ctx.f9.f64 = double(float(std::fma(ctx.f0.f64, ctx.f10.f64, ctx.f7.f64)));
	// fmadds f13,f13,f10,f7
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f10.f64, ctx.f7.f64)));
	// lfs f0,20204(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20204);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f11,f11,f0,f6
	ctx.f11.f64 = double(float(std::fma(ctx.f11.f64, ctx.f0.f64, ctx.f6.f64)));
	// fmadds f12,f12,f0,f6
	ctx.f12.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f6.f64)));
	// fmadds f10,f9,f0,f6
	ctx.f10.f64 = double(float(std::fma(ctx.f9.f64, ctx.f0.f64, ctx.f6.f64)));
	// fmadds f0,f13,f0,f6
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f0.f64, ctx.f6.f64)));
	// fctiwz f13,f11
	ctx.f13.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f13,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f13.u64);
	// fctiwz f13,f12
	ctx.f13.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// fctiwz f12,f10
	ctx.f12.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f13,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f13.u64);
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f0.u64);
	// stfd f12,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r8,116(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bge cr6,0x8259cf88
	if (!ctx.cr6.lt) goto loc_8259CF88;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8259cf94
	goto loc_8259CF94;
loc_8259CF88:
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// ble cr6,0x8259cf94
	if (!ctx.cr6.gt) goto loc_8259CF94;
	// li r11,255
	ctx.r11.s64 = 255;
loc_8259CF94:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bge cr6,0x8259cfa4
	if (!ctx.cr6.lt) goto loc_8259CFA4;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x8259cfb0
	goto loc_8259CFB0;
loc_8259CFA4:
	// cmpwi cr6,r8,255
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 255, ctx.xer);
	// ble cr6,0x8259cfb0
	if (!ctx.cr6.gt) goto loc_8259CFB0;
	// li r8,255
	ctx.r8.s64 = 255;
loc_8259CFB0:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x8259cfc0
	if (!ctx.cr6.lt) goto loc_8259CFC0;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x8259cfcc
	goto loc_8259CFCC;
loc_8259CFC0:
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// ble cr6,0x8259cfcc
	if (!ctx.cr6.gt) goto loc_8259CFCC;
	// li r10,255
	ctx.r10.s64 = 255;
loc_8259CFCC:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge cr6,0x8259cfdc
	if (!ctx.cr6.lt) goto loc_8259CFDC;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x8259cfe8
	goto loc_8259CFE8;
loc_8259CFDC:
	// cmpwi cr6,r9,255
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 255, ctx.xer);
	// ble cr6,0x8259cfe8
	if (!ctx.cr6.gt) goto loc_8259CFE8;
	// li r9,255
	ctx.r9.s64 = 255;
loc_8259CFE8:
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8259d02c
	if (ctx.cr6.lt) goto loc_8259D02C;
	// bne cr6,0x8259d044
	if (!ctx.cr6.eq) goto loc_8259D044;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8259d02c
	if (ctx.cr6.lt) goto loc_8259D02C;
	// bne cr6,0x8259d044
	if (!ctx.cr6.eq) goto loc_8259D044;
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// bge cr6,0x8259d010
	if (!ctx.cr6.lt) goto loc_8259D010;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// b 0x8259d014
	goto loc_8259D014;
loc_8259D010:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_8259D014:
	// cmpwi cr6,r9,255
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 255, ctx.xer);
	// bge cr6,0x8259d024
	if (!ctx.cr6.lt) goto loc_8259D024;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// b 0x8259d044
	goto loc_8259D044;
loc_8259D024:
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// b 0x8259d044
	goto loc_8259D044;
loc_8259D02C:
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
loc_8259D044:
	// clrlwi r30,r11,24
	r30.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r28,r10,24
	r28.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r31,r8,24
	r31.u64 = ctx.r8.u32 & 0xFF;
	// clrlwi r29,r9,24
	r29.u64 = ctx.r9.u32 & 0xFF;
	// mulli r10,r30,88
	ctx.r10.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(88));
	// mulli r11,r28,168
	ctx.r11.s64 = static_cast<int64_t>(r28.u64 * static_cast<uint64_t>(168));
	// mulli r8,r31,88
	ctx.r8.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(88));
	// mulli r9,r29,168
	ctx.r9.s64 = static_cast<int64_t>(r29.u64 * static_cast<uint64_t>(168));
	// mulli r6,r30,168
	ctx.r6.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(168));
	// mulli r7,r28,88
	ctx.r7.s64 = static_cast<int64_t>(r28.u64 * static_cast<uint64_t>(88));
	// mulli r4,r31,168
	ctx.r4.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(168));
	// mulli r5,r29,88
	ctx.r5.s64 = static_cast<int64_t>(r29.u64 * static_cast<uint64_t>(88));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mulli r27,r29,257
	r27.s64 = static_cast<int64_t>(r29.u64 * static_cast<uint64_t>(257));
	// sth r11,104(r1)
	REX_STORE_U16(ctx.r1.u32 + 104, ctx.r11.u16);
	// sth r10,106(r1)
	REX_STORE_U16(ctx.r1.u32 + 106, ctx.r10.u16);
	// sth r27,98(r1)
	REX_STORE_U16(ctx.r1.u32 + 98, r27.u16);
	// mulli r3,r28,257
	ctx.r3.s64 = static_cast<int64_t>(r28.u64 * static_cast<uint64_t>(257));
	// sth r3,96(r1)
	REX_STORE_U16(ctx.r1.u32 + 96, ctx.r3.u16);
	// mulli r26,r30,257
	r26.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(257));
	// sth r26,100(r1)
	REX_STORE_U16(ctx.r1.u32 + 100, r26.u16);
	// mulli r25,r31,257
	r25.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(257));
	// sth r25,102(r1)
	REX_STORE_U16(ctx.r1.u32 + 102, r25.u16);
	// add r9,r6,r7
	ctx.r9.u64 = ctx.r6.u64 + ctx.r7.u64;
	// add r8,r4,r5
	ctx.r8.u64 = ctx.r4.u64 + ctx.r5.u64;
	// sth r9,108(r1)
	REX_STORE_U16(ctx.r1.u32 + 108, ctx.r9.u16);
	// li r27,0
	r27.s64 = 0;
	// sth r8,110(r1)
	REX_STORE_U16(ctx.r1.u32 + 110, ctx.r8.u16);
loc_8259D0B8:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r26,0
	r26.s64 = 0;
	// add r25,r27,r11
	r25.u64 = r27.u64 + ctx.r11.u64;
loc_8259D0C4:
	// add r11,r27,r26
	ctx.r11.u64 = r27.u64 + r26.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f2,r11,r22
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r22.u32);
	ctx.f2.f64 = double(temp.f32);
	// lfsx f1,r11,r23
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r23.u32);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8259c738
	ctx.lr = 0x8259D0DC;
	sub_8259C738(ctx, base);
	// stbx r3,r25,r26
	REX_STORE_U8(r25.u32 + r26.u32, ctx.r3.u8);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// cmpwi cr6,r26,4
	ctx.cr6.compare<int32_t>(r26.s32, 4, ctx.xer);
	// blt cr6,0x8259d0c4
	if (ctx.cr6.lt) goto loc_8259D0C4;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// cmpwi cr6,r27,16
	ctx.cr6.compare<int32_t>(r27.s32, 16, ctx.xer);
	// blt cr6,0x8259d0b8
	if (ctx.cr6.lt) goto loc_8259D0B8;
	// lbz r9,87(r1)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + 87);
	// lbz r7,91(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 91);
	// lbz r11,83(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 83);
	// rotlwi r9,r9,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// lbz r5,95(r1)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r1.u32 + 95);
	// rotlwi r7,r7,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// lbz r8,86(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 86);
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lbz r6,90(r1)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r1.u32 + 90);
	// rotlwi r5,r5,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r5.u32, 2);
	// lbz r10,82(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// lbz r4,94(r1)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r1.u32 + 94);
	// or r8,r7,r6
	ctx.r8.u64 = ctx.r7.u64 | ctx.r6.u64;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// lbz r3,81(r1)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// or r6,r5,r4
	ctx.r6.u64 = ctx.r5.u64 | ctx.r4.u64;
	// lbz r27,85(r1)
	r27.u64 = REX_LOAD_U8(ctx.r1.u32 + 85);
	// lbz r26,89(r1)
	r26.u64 = REX_LOAD_U8(ctx.r1.u32 + 89);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r10,93(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 93);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r1.u32 + 84);
	// or r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 | ctx.r3.u64;
	// lbz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r1.u32 + 88);
	// or r9,r9,r27
	ctx.r9.u64 = ctx.r9.u64 | r27.u64;
	// lbz r25,92(r1)
	r25.u64 = REX_LOAD_U8(ctx.r1.u32 + 92);
	// or r8,r8,r26
	ctx.r8.u64 = ctx.r8.u64 | r26.u64;
	// stb r28,1(r24)
	REX_STORE_U8(r24.u32 + 1, r28.u8);
	// or r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 | ctx.r10.u64;
	// stb r29,0(r24)
	REX_STORE_U8(r24.u32 + 0, r29.u8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stb r30,3(r24)
	REX_STORE_U8(r24.u32 + 3, r30.u8);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stb r31,2(r24)
	REX_STORE_U8(r24.u32 + 2, r31.u8);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// or r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 | ctx.r5.u64;
	// or r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 | ctx.r4.u64;
	// stb r11,5(r24)
	REX_STORE_U8(r24.u32 + 5, ctx.r11.u8);
	// or r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 | r25.u64;
	// stb r9,4(r24)
	REX_STORE_U8(r24.u32 + 4, ctx.r9.u8);
	// stb r8,7(r24)
	REX_STORE_U8(r24.u32 + 7, ctx.r8.u8);
	// stb r10,6(r24)
	REX_STORE_U8(r24.u32 + 6, ctx.r10.u8);
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
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

DEFINE_REX_FUNC(sub_825C58F8) {
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
	ctx.lr = 0x825C5900;
	// stfd f31,-144(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -144, f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,108
	ctx.r11.s64 = ctx.r1.s64 + 108;
	// stw r9,340(r1)
	REX_STORE_U32(ctx.r1.u32 + 340, ctx.r9.u32);
	// li r17,0
	r17.s64 = 0;
	// mr r16,r3
	r16.u64 = ctx.r3.u64;
	// stw r17,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r17.u32);
	// mr r21,r4
	r21.u64 = ctx.r4.u64;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// stw r17,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r17.u32);
	// mr r19,r8
	r19.u64 = ctx.r8.u64;
	// mr r22,r9
	r22.u64 = ctx.r9.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// mr r20,r17
	r20.u64 = r17.u64;
	// mr r18,r17
	r18.u64 = r17.u64;
	// beq cr6,0x825c5adc
	if (ctx.cr6.eq) goto loc_825C5ADC;
	// lwz r11,8(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmpwi cr6,r11,55
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 55, ctx.xer);
	// beq cr6,0x825c5b48
	if (ctx.cr6.eq) goto loc_825C5B48;
	// cmpwi cr6,r11,58
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 58, ctx.xer);
	// ble cr6,0x825c5adc
	if (!ctx.cr6.gt) goto loc_825C5ADC;
	// cmpwi cr6,r11,62
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 62, ctx.xer);
	// ble cr6,0x825c5ab8
	if (!ctx.cr6.gt) goto loc_825C5AB8;
	// cmpwi cr6,r11,112
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 112, ctx.xer);
	// bne cr6,0x825c5adc
	if (!ctx.cr6.eq) goto loc_825C5ADC;
	// addi r25,r5,4
	r25.s64 = ctx.r5.s64 + 4;
loc_825C5970:
	// lwz r26,0(r25)
	r26.u64 = REX_LOAD_U32(r25.u32 + 0);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x825c5adc
	if (ctx.cr6.eq) goto loc_825C5ADC;
	// lwz r28,16(r26)
	r28.u64 = REX_LOAD_U32(r26.u32 + 16);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x825c5aa4
	if (ctx.cr6.eq) goto loc_825C5AA4;
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14336
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14336, ctx.xer);
	// bne cr6,0x825c5aa4
	if (!ctx.cr6.eq) goto loc_825C5AA4;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// clrlwi r27,r22,30
	r27.u64 = r22.u32 & 0x3;
	// lfd f1,0(r24)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(r24.u32 + 0);
	// clrlwi r5,r11,27
	ctx.r5.u64 = ctx.r11.u32 & 0x1F;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x825b8348
	ctx.lr = 0x825C59B0;
	sub_825B8348(ctx, base);
	// lwz r29,0(r28)
	r29.u64 = REX_LOAD_U32(r28.u32 + 0);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
loc_825C59B8:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x825c5a6c
	if (ctx.cr6.eq) goto loc_825C5A6C;
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r10,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,14336
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14336, ctx.xer);
	// bne cr6,0x825c5aa4
	if (!ctx.cr6.eq) goto loc_825C5AA4;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825c5aa4
	if (ctx.cr6.eq) goto loc_825C5AA4;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x825c5aa4
	if (!ctx.cr6.eq) goto loc_825C5AA4;
	// lwz r31,12(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r10,r10,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,16000
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16000, ctx.xer);
	// bne cr6,0x825c5aa4
	if (!ctx.cr6.eq) goto loc_825C5AA4;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r30,r11,27,30,31
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3;
	// clrlwi r5,r11,27
	ctx.r5.u64 = ctx.r11.u32 & 0x1F;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825b8570
	ctx.lr = 0x825C5A18;
	sub_825B8570(ctx, base);
	// rlwinm r11,r31,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFF000;
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// clrlwi r5,r10,27
	ctx.r5.u64 = ctx.r10.u32 & 0x1F;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,148(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 148);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm. r11,r11,18,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825c5a44
	if (!ctx.cr0.eq) goto loc_825C5A44;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// b 0x825c5a58
	goto loc_825C5A58;
loc_825C5A44:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r11,30,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0xFF;
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r4,r11,30
	ctx.r4.u64 = ctx.r11.u32 & 0x3;
loc_825C5A58:
	// bl 0x825b8348
	ctx.lr = 0x825C5A5C;
	sub_825B8348(ctx, base);
	// fcmpu cr6,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f31.f64, ctx.f1.f64);
	// bne cr6,0x825c5aa4
	if (!ctx.cr6.eq) goto loc_825C5AA4;
	// lwz r29,4(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 4);
	// b 0x825c59b8
	goto loc_825C59B8;
loc_825C5A6C:
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825ba8c0
	ctx.lr = 0x825C5A78;
	sub_825BA8C0(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x825c1a60
	ctx.lr = 0x825C5A88;
	sub_825C1A60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x8250ac70
	ctx.lr = 0x825C5A98;
	sub_8250AC70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8250ad28
	ctx.lr = 0x825C5AA4;
	sub_8250AD28(ctx, base);
loc_825C5AA4:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r26.u32, ctx.xer);
	// bne cr6,0x825c5970
	if (!ctx.cr6.eq) goto loc_825C5970;
	// addi r25,r26,8
	r25.s64 = r26.s64 + 8;
	// b 0x825c5970
	goto loc_825C5970;
loc_825C5AB8:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f13,0(r24)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(r24.u32 + 0);
	// li r20,1
	r20.s64 = 1;
	// lfd f0,-3744(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + -3744);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x825c5ad8
	if (ctx.cr6.eq) goto loc_825C5AD8;
	// mr r11,r17
	ctx.r11.u64 = r17.u64;
loc_825C5AD8:
	// clrlwi r18,r11,24
	r18.u64 = ctx.r11.u32 & 0xFF;
loc_825C5ADC:
	// mr r10,r17
	ctx.r10.u64 = r17.u64;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
loc_825C5AE8:
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// li r7,2
	ctx.r7.s64 = 2;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// rlwinm r6,r10,29,3,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r5,r1,340
	ctx.r5.s64 = ctx.r1.s64 + 340;
	// slw r11,r7,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// lwzx r7,r6,r5
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// clrlwi r6,r10,27
	ctx.r6.u64 = ctx.r10.u32 & 0x1F;
	// li r5,-1
	ctx.r5.s64 = -1;
	// and r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 & ctx.r7.u64;
	// slw r7,r5,r6
	ctx.r7.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r6.u8 & 0x3F));
	// and r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 & ctx.r7.u64;
	// srw r11,r11,r6
	ctx.r11.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r6.u8 & 0x3F));
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x825c5ca8
	if (ctx.cr6.lt) goto loc_825C5CA8;
	// beq cr6,0x825c5c90
	if (ctx.cr6.eq) goto loc_825C5C90;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x825c5dc4
	if (!ctx.cr6.lt) goto loc_825C5DC4;
	// lfd f0,0(r9)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// b 0x825c5ca0
	goto loc_825C5CA0;
loc_825C5B48:
	// lwz r26,4(r23)
	r26.u64 = REX_LOAD_U32(r23.u32 + 4);
loc_825C5B4C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x825c5dd8
	if (ctx.cr6.eq) goto loc_825C5DD8;
	// lwz r29,16(r26)
	r29.u64 = REX_LOAD_U32(r26.u32 + 16);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x825c5c88
	if (ctx.cr6.eq) goto loc_825C5C88;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,15104
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15104, ctx.xer);
	// bne cr6,0x825c5c88
	if (!ctx.cr6.eq) goto loc_825C5C88;
	// lwz r27,44(r29)
	r27.u64 = REX_LOAD_U32(r29.u32 + 44);
	// lwz r31,12(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,15872
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15872, ctx.xer);
	// bne cr6,0x825c5c88
	if (!ctx.cr6.eq) goto loc_825C5C88;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// lfd f31,0(r24)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(r24.u32 + 0);
	// addi r30,r31,-8
	r30.s64 = r31.s64 + -8;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x824f71b8
	ctx.lr = 0x825C5BA8;
	sub_824F71B8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwzx r10,r3,r30
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + r30.u32);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// rlwinm r31,r10,17,18,31
	r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0x3FFF;
	// bl 0x824f71b8
	ctx.lr = 0x825C5BC8;
	sub_824F71B8(ctx, base);
	// lwzx r10,r3,r30
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + r30.u32);
	// fctidz f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(f31.f64) ? int64_t(0x8000000000000000ULL) : (f31.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&f31.f64));
	// stfd f0,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// li r6,0
	ctx.r6.s64 = 0;
	// clrlwi r4,r10,17
	ctx.r4.u64 = ctx.r10.u32 & 0x7FFF;
	// add r5,r11,r31
	ctx.r5.u64 = ctx.r11.u64 + r31.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x825bdbe8
	ctx.lr = 0x825C5BEC;
	sub_825BDBE8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x825c5c88
	if (ctx.cr0.eq) goto loc_825C5C88;
	// addi r28,r29,4
	r28.s64 = r29.s64 + 4;
loc_825C5BF8:
	// lwz r31,0(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x825c5c88
	if (ctx.cr6.eq) goto loc_825C5C88;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825c5c74
	if (ctx.cr6.eq) goto loc_825C5C74;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825c5c28
	if (!ctx.cr0.eq) goto loc_825C5C28;
	// rlwinm. r10,r11,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r10,r17
	ctx.r10.u64 = r17.u64;
	// beq 0x825c5c2c
	if (ctx.cr0.eq) goto loc_825C5C2C;
loc_825C5C28:
	// li r10,1
	ctx.r10.s64 = 1;
loc_825C5C2C:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825c5c74
	if (ctx.cr0.eq) goto loc_825C5C74;
	// addi r10,r11,-8
	ctx.r10.s64 = ctx.r11.s64 + -8;
	// li r8,0
	ctx.r8.s64 = 0;
	// rlwimi r10,r11,0,0,26
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0) | (ctx.r10.u64 & 0xFFFFFFFF0000001F);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// rlwinm r7,r11,27,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0xFF;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x825bae70
	ctx.lr = 0x825C5C60;
	sub_825BAE70(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825c5c74
	if (!ctx.cr0.eq) goto loc_825C5C74;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_825C5C74:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bne cr6,0x825c5bf8
	if (!ctx.cr6.eq) goto loc_825C5BF8;
	// addi r28,r31,8
	r28.s64 = r31.s64 + 8;
	// b 0x825c5bf8
	goto loc_825C5BF8;
loc_825C5C88:
	// lwz r26,8(r26)
	r26.u64 = REX_LOAD_U32(r26.u32 + 8);
	// b 0x825c5b4c
	goto loc_825C5B4C;
loc_825C5C90:
	// lfd f0,0(r9)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
loc_825C5CA0:
	// stw r11,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// b 0x825c5cf0
	goto loc_825C5CF0;
loc_825C5CA8:
	// lfd f0,0(r9)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// clrlwi. r7,r11,1
	ctx.r7.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x825c5cd0
	if (ctx.cr0.eq) goto loc_825C5CD0;
	// rlwinm. r11,r11,0,1,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7F800000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r17
	ctx.r11.u64 = r17.u64;
	// beq 0x825c5cd4
	if (ctx.cr0.eq) goto loc_825C5CD4;
loc_825C5CD0:
	// li r11,1
	ctx.r11.s64 = 1;
loc_825C5CD4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825c5cec
	if (!ctx.cr0.eq) goto loc_825C5CEC;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
loc_825C5CEC:
	// stfs f0,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r8.u32 + 0, temp.u32);
loc_825C5CF0:
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// blt cr6,0x825c5ae8
	if (ctx.cr6.lt) goto loc_825C5AE8;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x825bdf00
	ctx.lr = 0x825C5D18;
	sub_825BDF00(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stb r17,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, r17.u8);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// mr r8,r19
	ctx.r8.u64 = r19.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,228
	ctx.r6.s64 = 228;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x825c41d0
	ctx.lr = 0x825C5D40;
	sub_825C41D0(ctx, base);
	// lwz r30,108(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// clrlwi. r11,r20,24
	ctx.r11.u64 = r20.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r30,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r30.u32);
	// beq 0x825c5dd4
	if (ctx.cr0.eq) goto loc_825C5DD4;
	// addi r28,r23,4
	r28.s64 = r23.s64 + 4;
loc_825C5D54:
	// lwz r31,0(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x825c5dd0
	if (ctx.cr6.eq) goto loc_825C5DD0;
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x825c5db0
	if (ctx.cr6.eq) goto loc_825C5DB0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825c5d84
	if (ctx.cr0.eq) goto loc_825C5D84;
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x825c5d88
	if (ctx.cr0.eq) goto loc_825C5D88;
loc_825C5D84:
	// mr r11,r17
	ctx.r11.u64 = r17.u64;
loc_825C5D88:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825c5db0
	if (ctx.cr0.eq) goto loc_825C5DB0;
	// mr r6,r18
	ctx.r6.u64 = r18.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x825c2730
	ctx.lr = 0x825C5DA0;
	sub_825C2730(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// or r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 | r30.u64;
	// rlwimi r11,r30,0,0,30
	ctx.r11.u64 = (__builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE) | (ctx.r11.u64 & 0xFFFFFFFF00000001);
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
loc_825C5DB0:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bne cr6,0x825c5d54
	if (!ctx.cr6.eq) goto loc_825C5D54;
	// addi r28,r31,8
	r28.s64 = r31.s64 + 8;
	// b 0x825c5d54
	goto loc_825C5D54;
loc_825C5DC4:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x824e4368
	ctx.lr = 0x825C5DD0;
	sub_824E4368(ctx, base);
loc_825C5DD0:
	// stw r30,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r30.u32);
loc_825C5DD4:
	// stw r29,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r29.u32);
loc_825C5DD8:
	// ld r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// std r11,0(r16)
	REX_STORE_U64(r16.u32 + 0, ctx.r11.u64);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f31,-144(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -144);
	// b 0x826a1cd8
	return;
}

DEFINE_REX_FUNC(sub_825E3570) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x825E3578;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// add r31,r11,r4
	r31.u64 = ctx.r11.u64 + ctx.r4.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// addi r4,r10,12680
	ctx.r4.s64 = ctx.r10.s64 + 12680;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// lwz r7,12(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 12);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 4);
	// bl 0x82130e88
	ctx.lr = 0x825E35A8;
	sub_82130E88(ctx, base);
	// lwz r3,1488(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 1488);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r7,12(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 12);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825E35CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_825E6880) {
	REX_FUNC_PROLOGUE();
	// lwz r11,928(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 928);
	// lwz r10,928(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 928);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x825e68c4
	if (!ctx.cr6.eq) goto loc_825E68C4;
	// lwz r11,900(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 900);
	// lwz r10,900(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 900);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x825e68c4
	if (!ctx.cr6.eq) goto loc_825E68C4;
	// lwz r11,932(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 932);
	// lwz r10,932(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 932);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x825e68c4
	if (!ctx.cr6.eq) goto loc_825E68C4;
	// lwz r11,908(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 908);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,908(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 908);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_825E68C4:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825E9338) {
	REX_FUNC_PROLOGUE();
	// rlwinm r10,r4,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x7FFFFFF;
	// lwz r11,2136(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 2136);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// clrlwi r9,r4,27
	ctx.r9.u64 = ctx.r4.u32 & 0x1F;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// andc r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ~ctx.r9.u64;
	// stwx r9,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825EC668) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x825ec6d0
	if (!ctx.cr6.eq) goto loc_825EC6D0;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
loc_825EC690:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825EC69C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825ec6c4
	if (!ctx.cr0.eq) goto loc_825EC6C4;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825EC6B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x825ec6c8
	if (ctx.cr0.eq) goto loc_825EC6C8;
loc_825EC6C4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825EC6C8:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// b 0x825ec6e8
	goto loc_825EC6E8;
loc_825EC6D0:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x825ec6e4
	if (!ctx.cr6.eq) goto loc_825EC6E4;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// b 0x825ec690
	goto loc_825EC690;
loc_825EC6E4:
	// li r3,1
	ctx.r3.s64 = 1;
loc_825EC6E8:
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

DEFINE_REX_FUNC(sub_825F1740) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-11784
	ctx.r3.s64 = ctx.r11.s64 + -11784;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825F1808) {
	REX_FUNC_PROLOGUE();
	// addi r11,r4,32
	ctx.r11.s64 = ctx.r4.s64 + 32;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lbzx r3,r11,r3
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825F3498) {
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
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c88
	ctx.lr = 0x825F34A0;
	// subfic r29,r3,-944
	ctx.xer.ca = ctx.r3.u32 <= 4294966352;
	r29.u64 = static_cast<uint64_t>(-944) - ctx.r3.u64;
	// stw r4,1876(r3)
	REX_STORE_U32(ctx.r3.u32 + 1876, ctx.r4.u32);
	// subfic r28,r3,-700
	ctx.xer.ca = ctx.r3.u32 <= 4294966596;
	r28.u64 = static_cast<uint64_t>(-700) - ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// subfic r27,r3,-880
	ctx.xer.ca = ctx.r3.u32 <= 4294966416;
	r27.u64 = static_cast<uint64_t>(-880) - ctx.r3.u64;
	// subfic r26,r3,-636
	ctx.xer.ca = ctx.r3.u32 <= 4294966660;
	r26.u64 = static_cast<uint64_t>(-636) - ctx.r3.u64;
	// stb r10,1872(r3)
	REX_STORE_U8(ctx.r3.u32 + 1872, ctx.r10.u8);
	// subfic r25,r3,-816
	ctx.xer.ca = ctx.r3.u32 <= 4294966480;
	r25.u64 = static_cast<uint64_t>(-816) - ctx.r3.u64;
	// stb r10,1873(r3)
	REX_STORE_U8(ctx.r3.u32 + 1873, ctx.r10.u8);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r11,r3,976
	ctx.r11.s64 = ctx.r3.s64 + 976;
	// subfic r24,r3,-572
	ctx.xer.ca = ctx.r3.u32 <= 4294966724;
	r24.u64 = static_cast<uint64_t>(-572) - ctx.r3.u64;
	// addi r23,r3,896
	r23.s64 = ctx.r3.s64 + 896;
	// li r22,19
	r22.s64 = 19;
loc_825F34D8:
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r10,-64(r11)
	REX_STORE_U32(ctx.r11.u32 + -64, ctx.r10.u32);
	// stbx r10,r23,r8
	REX_STORE_U8(r23.u32 + ctx.r8.u32, ctx.r10.u8);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// add r6,r29,r11
	ctx.r6.u64 = r29.u64 + ctx.r11.u64;
	// stw r8,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, ctx.r8.u32);
	// add r5,r28,r11
	ctx.r5.u64 = r28.u64 + ctx.r11.u64;
	// stw r10,-976(r11)
	REX_STORE_U32(ctx.r11.u32 + -976, ctx.r10.u32);
	// add r4,r27,r11
	ctx.r4.u64 = r27.u64 + ctx.r11.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// stw r8,-912(r11)
	REX_STORE_U32(ctx.r11.u32 + -912, ctx.r8.u32);
	// add r31,r26,r11
	r31.u64 = r26.u64 + ctx.r11.u64;
	// add r7,r25,r11
	ctx.r7.u64 = r25.u64 + ctx.r11.u64;
	// add r30,r24,r11
	r30.u64 = r24.u64 + ctx.r11.u64;
loc_825F3514:
	// add r21,r6,r9
	r21.u64 = ctx.r6.u64 + ctx.r9.u64;
	// add r20,r5,r9
	r20.u64 = ctx.r5.u64 + ctx.r9.u64;
	// add r19,r4,r9
	r19.u64 = ctx.r4.u64 + ctx.r9.u64;
	// add r18,r31,r9
	r18.u64 = r31.u64 + ctx.r9.u64;
	// add r17,r7,r9
	r17.u64 = ctx.r7.u64 + ctx.r9.u64;
	// add r16,r30,r9
	r16.u64 = r30.u64 + ctx.r9.u64;
	// rlwinm r21,r21,2,0,29
	r21.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r20,r20,2,0,29
	r20.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r19,r19,2,0,29
	r19.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r18,r18,2,0,29
	r18.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r17,r17,2,0,29
	r17.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r16,r16,2,0,29
	r16.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r21,r3
	REX_STORE_U32(r21.u32 + ctx.r3.u32, ctx.r10.u32);
	// stwx r10,r20,r3
	REX_STORE_U32(r20.u32 + ctx.r3.u32, ctx.r10.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwx r22,r19,r3
	REX_STORE_U32(r19.u32 + ctx.r3.u32, r22.u32);
	// stwx r22,r18,r3
	REX_STORE_U32(r18.u32 + ctx.r3.u32, r22.u32);
	// stwx r10,r17,r3
	REX_STORE_U32(r17.u32 + ctx.r3.u32, ctx.r10.u32);
	// stwx r10,r16,r3
	REX_STORE_U32(r16.u32 + ctx.r3.u32, ctx.r10.u32);
	// bdnz 0x825f3514
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825F3514;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r8,16
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 16, ctx.xer);
	// blt cr6,0x825f34d8
	if (ctx.cr6.lt) goto loc_825F34D8;
	// b 0x826a1cd8
	return;
}

DEFINE_REX_FUNC(sub_825F73D8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addi r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 + 12;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825F7508) {
	REX_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// beq cr6,0x825f751c
	if (ctx.cr6.eq) goto loc_825F751C;
	// stw r4,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
loc_825F751C:
	// stw r3,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r3.u32);
	// stw r4,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825F7A90) {
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
	ctx.lr = 0x825F7A98;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825F7AB4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 & ctx.r3.u64;
	// rlwinm r29,r11,2,0,29
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825f7b0c
	if (!ctx.cr6.eq) goto loc_825F7B0C;
	// lwz r27,20(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825b33a0
	ctx.lr = 0x825F7AE4;
	sub_825B33A0(ctx, base);
	// addic. r30,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	r30.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// stw r27,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r27.u32);
	// beq 0x825f7b00
	if (ctx.cr0.eq) goto loc_825F7B00;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// bl 0x825d7a48
	ctx.lr = 0x825F7AFC;
	sub_825D7A48(ctx, base);
	// b 0x825f7b04
	goto loc_825F7B04;
loc_825F7B00:
	// li r30,0
	r30.s64 = 0;
loc_825F7B04:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stwx r30,r11,r29
	REX_STORE_U32(ctx.r11.u32 + r29.u32, r30.u32);
loc_825F7B0C:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r30,r11,r29
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825f77a0
	ctx.lr = 0x825F7B20;
	sub_825F77A0(ctx, base);
	// stw r28,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x825f7b3c
	if (!ctx.cr6.gt) goto loc_825F7B3C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f7850
	ctx.lr = 0x825F7B3C;
	sub_825F7850(ctx, base);
loc_825F7B3C:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_825FA3F0) {
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
	// bl 0x825f7460
	ctx.lr = 0x825FA408;
	sub_825F7460(ctx, base);
	// lwz r11,228(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 228);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,228(r31)
	REX_STORE_U32(r31.u32 + 228, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_825FAD08) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,31080
	ctx.r3.s64 = ctx.r11.s64 + 31080;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825FAE68) {
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
	// li r4,131
	ctx.r4.s64 = 131;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x825fa990
	ctx.lr = 0x825FAE88;
	sub_825FA990(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,31424
	ctx.r11.s64 = ctx.r11.s64 + 31424;
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_825FB848) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x825FB850;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// li r4,138
	ctx.r4.s64 = 138;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x825fa990
	ctx.lr = 0x825FB86C;
	sub_825FA990(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r30,168(r3)
	REX_STORE_U32(ctx.r3.u32 + 168, r30.u32);
	// addi r11,r11,-31568
	ctx.r11.s64 = ctx.r11.s64 + -31568;
	// stw r29,172(r3)
	REX_STORE_U32(ctx.r3.u32 + 172, r29.u32);
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,228(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 228);
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// stw r11,228(r3)
	REX_STORE_U32(ctx.r3.u32 + 228, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_825FD090) {
	REX_FUNC_PROLOGUE();
	// lwz r11,56(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825FD740) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x825FD748;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r4.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r31,44(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r4,r1,156
	ctx.r4.s64 = ctx.r1.s64 + 156;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// bl 0x825fd458
	ctx.lr = 0x825FD76C;
	sub_825FD458(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825fd784
	if (!ctx.cr0.eq) goto loc_825FD784;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x825f7718
	ctx.lr = 0x825FD780;
	sub_825F7718(ctx, base);
	// stw r29,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r29.u32);
loc_825FD784:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r4,48(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 48);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825f7f30
	ctx.lr = 0x825FD794;
	sub_825F7F30(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82607B38) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82607B40;
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
	// li r4,60
	ctx.r4.s64 = 60;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// bl 0x825b33a0
	ctx.lr = 0x82607B60;
	sub_825B33A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r28.u32);
	// beq 0x82607b84
	if (ctx.cr0.eq) goto loc_82607B84;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825f8ab0
	ctx.lr = 0x82607B80;
	sub_825F8AB0(ctx, base);
	// b 0x82607b88
	goto loc_82607B88;
loc_82607B84:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82607B88:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8260A9C8) {
	REX_FUNC_PROLOGUE();
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r11,r5
	REX_STORE_U32(ctx.r11.u32 + ctx.r5.u32, ctx.r3.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8260AAF0) {
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
	ctx.lr = 0x8260AAF8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// rlwinm. r11,r11,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8260aba4
	if (ctx.cr0.eq) goto loc_8260ABA4;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r27,0
	r27.s64 = 0;
	// addi r31,r9,22852
	r31.s64 = ctx.r9.s64 + 22852;
	// addi r30,r10,19324
	r30.s64 = ctx.r10.s64 + 19324;
	// addi r29,r11,-16096
	r29.s64 = ctx.r11.s64 + -16096;
loc_8260AB28:
	// cmplwi cr6,r27,1
	ctx.cr6.compare<uint32_t>(r27.u32, 1, ctx.xer);
	// blt cr6,0x8260ab80
	if (ctx.cr6.lt) goto loc_8260AB80;
	// beq cr6,0x8260ab74
	if (ctx.cr6.eq) goto loc_8260AB74;
	// cmplwi cr6,r27,3
	ctx.cr6.compare<uint32_t>(r27.u32, 3, ctx.xer);
	// blt cr6,0x8260ab68
	if (ctx.cr6.lt) goto loc_8260AB68;
	// beq cr6,0x8260ab5c
	if (ctx.cr6.eq) goto loc_8260AB5C;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r7,166
	ctx.r7.s64 = 166;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x8260AB58;
	sub_824EA978(ctx, base);
	// b 0x8260ab98
	goto loc_8260AB98;
loc_8260AB5C:
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// rlwinm r11,r11,26,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3;
	// b 0x8260ab88
	goto loc_8260AB88;
loc_8260AB68:
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// rlwinm r11,r11,28,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x3;
	// b 0x8260ab88
	goto loc_8260AB88;
loc_8260AB74:
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// rlwinm r11,r11,30,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3;
	// b 0x8260ab88
	goto loc_8260AB88;
loc_8260AB80:
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
loc_8260AB88:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x8260abb0
	if (ctx.cr6.eq) goto loc_8260ABB0;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x8260abb0
	if (ctx.cr6.eq) goto loc_8260ABB0;
loc_8260AB98:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// cmpwi cr6,r27,4
	ctx.cr6.compare<int32_t>(r27.s32, 4, ctx.xer);
	// blt cr6,0x8260ab28
	if (ctx.cr6.lt) goto loc_8260AB28;
loc_8260ABA4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8260ABA8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
loc_8260ABB0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8260aba8
	goto loc_8260ABA8;
}

DEFINE_REX_FUNC(sub_8260E0A0) {
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
	ctx.lr = 0x8260E0A8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r31,r4,8
	r31.s64 = ctx.r4.s64 + 8;
	// li r30,2
	r30.s64 = 2;
	// ori r28,r11,65535
	r28.u64 = ctx.r11.u64 | 65535;
loc_8260E0C4:
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmpw cr6,r4,r28
	ctx.cr6.compare<int32_t>(ctx.r4.s32, r28.s32, ctx.xer);
	// beq cr6,0x8260e0e4
	if (ctx.cr6.eq) goto loc_8260E0E4;
	// lwz r3,0(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8260E0E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8260E0E4:
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// bne 0x8260e0c4
	if (!ctx.cr0.eq) goto loc_8260E0C4;
	// addi r30,r29,20
	r30.s64 = r29.s64 + 20;
	// b 0x8260e120
	goto loc_8260E120;
loc_8260E0F8:
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpw cr6,r4,r28
	ctx.cr6.compare<int32_t>(ctx.r4.s32, r28.s32, ctx.xer);
	// beq cr6,0x8260e118
	if (ctx.cr6.eq) goto loc_8260E118;
	// lwz r3,0(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8260E118;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8260E118:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8264c3d0
	ctx.lr = 0x8260E120;
	sub_8264C3D0(ctx, base);
loc_8260E120:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8260c1e8
	ctx.lr = 0x8260E128;
	sub_8260C1E8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x8260e0f8
	if (!ctx.cr0.eq) goto loc_8260E0F8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82610EC8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82610EDC:
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// rlwinm r7,r11,20,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xFF;
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82610f04
	if (ctx.cr6.eq) goto loc_82610F04;
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwimi r11,r4,12,12,19
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 12) & 0xFF000) | (ctx.r11.u64 & 0xFFFFFFFFFFF00FFF);
	// stw r7,48(r10)
	REX_STORE_U32(ctx.r10.u32 + 48, ctx.r7.u32);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_82610F04:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,96
	ctx.r9.s64 = ctx.r9.s64 + 96;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82610edc
	if (ctx.cr6.lt) goto loc_82610EDC;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82613290) {
	REX_FUNC_PROLOGUE();
	// li r10,8
	ctx.r10.s64 = 8;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
	// stw r10,120(r3)
	REX_STORE_U32(ctx.r3.u32 + 120, ctx.r10.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,108(r3)
	REX_STORE_U32(ctx.r3.u32 + 108, ctx.r11.u32);
	// stw r11,112(r3)
	REX_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// stw r11,116(r3)
	REX_STORE_U32(ctx.r3.u32 + 116, ctx.r11.u32);
	// stw r9,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
loc_826132BC:
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
	// bdnz 0x826132bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826132BC;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82614590) {
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
	// bl 0x8260fab8
	ctx.lr = 0x826145A8;
	sub_8260FAB8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,448(r31)
	REX_STORE_U32(r31.u32 + 448, ctx.r11.u32);
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// stw r11,452(r31)
	REX_STORE_U32(r31.u32 + 452, ctx.r11.u32);
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// stw r11,468(r31)
	REX_STORE_U32(r31.u32 + 468, ctx.r11.u32);
	// addi r10,r31,500
	ctx.r10.s64 = r31.s64 + 500;
	// stw r11,472(r31)
	REX_STORE_U32(r31.u32 + 472, ctx.r11.u32);
	// addi r9,r9,-15152
	ctx.r9.s64 = ctx.r9.s64 + -15152;
	// stw r11,476(r31)
	REX_STORE_U32(r31.u32 + 476, ctx.r11.u32);
	// addi r6,r8,-15024
	ctx.r6.s64 = ctx.r8.s64 + -15024;
	// stw r11,480(r31)
	REX_STORE_U32(r31.u32 + 480, ctx.r11.u32);
	// addi r7,r7,-15196
	ctx.r7.s64 = ctx.r7.s64 + -15196;
	// stw r11,484(r31)
	REX_STORE_U32(r31.u32 + 484, ctx.r11.u32);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// stw r11,488(r31)
	REX_STORE_U32(r31.u32 + 488, ctx.r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r9,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// stw r6,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r6.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r7,140(r31)
	REX_STORE_U32(r31.u32 + 140, ctx.r7.u32);
	// stw r11,492(r31)
	REX_STORE_U32(r31.u32 + 492, ctx.r11.u32);
	// stw r11,496(r31)
	REX_STORE_U32(r31.u32 + 496, ctx.r11.u32);
	// stw r11,500(r31)
	REX_STORE_U32(r31.u32 + 500, ctx.r11.u32);
	// stw r10,504(r31)
	REX_STORE_U32(r31.u32 + 504, ctx.r10.u32);
	// addi r10,r31,540
	ctx.r10.s64 = r31.s64 + 540;
	// stw r11,524(r31)
	REX_STORE_U32(r31.u32 + 524, ctx.r11.u32);
	// stw r11,528(r31)
	REX_STORE_U32(r31.u32 + 528, ctx.r11.u32);
	// addi r9,r10,8
	ctx.r9.s64 = ctx.r10.s64 + 8;
	// stw r11,532(r31)
	REX_STORE_U32(r31.u32 + 532, ctx.r11.u32);
	// stw r8,536(r31)
	REX_STORE_U32(r31.u32 + 536, ctx.r8.u32);
	// stw r11,508(r31)
	REX_STORE_U32(r31.u32 + 508, ctx.r11.u32);
	// lwz r7,500(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 500);
	// lwz r10,504(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 504);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r7,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// stw r10,500(r31)
	REX_STORE_U32(r31.u32 + 500, ctx.r10.u32);
	// stw r11,540(r31)
	REX_STORE_U32(r31.u32 + 540, ctx.r11.u32);
	// stw r11,564(r31)
	REX_STORE_U32(r31.u32 + 564, ctx.r11.u32);
	// stw r11,568(r31)
	REX_STORE_U32(r31.u32 + 568, ctx.r11.u32);
	// stw r11,572(r31)
	REX_STORE_U32(r31.u32 + 572, ctx.r11.u32);
	// stw r9,544(r31)
	REX_STORE_U32(r31.u32 + 544, ctx.r9.u32);
	// stw r8,576(r31)
	REX_STORE_U32(r31.u32 + 576, ctx.r8.u32);
	// stw r11,548(r31)
	REX_STORE_U32(r31.u32 + 548, ctx.r11.u32);
	// lwz r10,540(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 540);
	// lwz r11,544(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 544);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r11,540(r31)
	REX_STORE_U32(r31.u32 + 540, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_82619740) {
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
	// bl 0x826a1c84
	ctx.lr = 0x82619748;
	// addi r12,r1,-144
	ctx.r12.s64 = ctx.r1.s64 + -144;
	// bl 0x826a2c9c
	ctx.lr = 0x82619750;
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// mr r19,r4
	r19.u64 = ctx.r4.u64;
	// ori r31,r11,65535
	r31.u64 = ctx.r11.u64 | 65535;
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r18,r6
	r18.u64 = ctx.r6.u64;
	// mr r17,r7
	r17.u64 = ctx.r7.u64;
	// li r28,-1
	r28.s64 = -1;
	// li r15,0
	r15.s64 = 0;
	// li r20,0
	r20.s64 = 0;
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r31.u32, ctx.xer);
	// rlwinm r4,r3,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x8261978c
	if (!ctx.cr6.gt) goto loc_8261978C;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
loc_8261978C:
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// lis r10,8343
	ctx.r10.s64 = 546766848;
	// addi r30,r11,20576
	r30.s64 = ctx.r11.s64 + 20576;
	// ori r29,r10,10
	r29.u64 = ctx.r10.u64 | 10;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8260b5b8
	ctx.lr = 0x826197AC;
	sub_8260B5B8(ctx, base);
	// mr. r16,r3
	r16.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r16.s32, 0, ctx.xer);
	// bne 0x826197c0
	if (!ctx.cr0.eq) goto loc_826197C0;
	// lis r15,-32761
	r15.s64 = -2147024896;
	// ori r15,r15,14
	r15.u64 = r15.u64 | 14;
	// b 0x82619cc0
	goto loc_82619CC0;
loc_826197C0:
	// cmplw cr6,r19,r31
	ctx.cr6.compare<uint32_t>(r19.u32, r31.u32, ctx.xer);
	// rlwinm r4,r19,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x826197d0
	if (!ctx.cr6.gt) goto loc_826197D0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
loc_826197D0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x8260b5b8
	ctx.lr = 0x826197E0;
	sub_8260B5B8(ctx, base);
	// mr. r21,r3
	r21.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r21.s32, 0, ctx.xer);
	// beq 0x82619810
	if (ctx.cr0.eq) goto loc_82619810;
	// cmplw cr6,r19,r31
	ctx.cr6.compare<uint32_t>(r19.u32, r31.u32, ctx.xer);
	// rlwinm r4,r19,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x826197f8
	if (!ctx.cr6.gt) goto loc_826197F8;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
loc_826197F8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x8260b5b8
	ctx.lr = 0x82619808;
	sub_8260B5B8(ctx, base);
	// mr. r20,r3
	r20.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r20.s32, 0, ctx.xer);
	// bne 0x8261981c
	if (!ctx.cr0.eq) goto loc_8261981C;
loc_82619810:
	// lis r15,-32761
	r15.s64 = -2147024896;
	// ori r15,r15,14
	r15.u64 = r15.u64 | 14;
	// b 0x82619c98
	goto loc_82619C98;
loc_8261981C:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// ble cr6,0x8261983c
	if (!ctx.cr6.gt) goto loc_8261983C;
	// addi r11,r16,-4
	ctx.r11.s64 = r16.s64 + -4;
	// mtctr r22
	ctx.ctr.u64 = r22.u64;
loc_82619830:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x82619830
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82619830;
loc_8261983C:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// ble cr6,0x8261985c
	if (!ctx.cr6.gt) goto loc_8261985C;
	// addi r11,r21,-4
	ctx.r11.s64 = r21.s64 + -4;
	// mtctr r19
	ctx.ctr.u64 = r19.u64;
loc_82619850:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x82619850
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82619850;
loc_8261985C:
	// addi r6,r22,-1
	ctx.r6.s64 = r22.s64 + -1;
loc_82619860:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x826198bc
	if (!ctx.cr6.gt) goto loc_826198BC;
	// mr r10,r16
	ctx.r10.u64 = r16.u64;
	// addi r11,r27,4
	ctx.r11.s64 = r27.s64 + 4;
	// subf r9,r27,r16
	ctx.r9.u64 = r16.u64 - r27.u64;
loc_8261987C:
	// lfs f0,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x826198a8
	if (!ctx.cr6.gt) goto loc_826198A8;
	// stfs f13,-4(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lwz r5,0(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwzx r4,r9,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stw r4,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r4.u32);
	// stwx r5,r9,r11
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r5.u32);
loc_826198A8:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x8261987c
	if (ctx.cr6.lt) goto loc_8261987C;
loc_826198BC:
	// clrlwi. r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82619860
	if (!ctx.cr0.eq) goto loc_82619860;
	// addi r6,r19,-1
	ctx.r6.s64 = r19.s64 + -1;
loc_826198C8:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82619924
	if (!ctx.cr6.gt) goto loc_82619924;
	// mr r10,r21
	ctx.r10.u64 = r21.u64;
	// addi r11,r18,4
	ctx.r11.s64 = r18.s64 + 4;
	// subf r9,r18,r21
	ctx.r9.u64 = r21.u64 - r18.u64;
loc_826198E4:
	// lfs f0,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82619910
	if (!ctx.cr6.gt) goto loc_82619910;
	// stfs f13,-4(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lwzx r5,r9,r11
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwz r4,0(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r5,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
	// stwx r4,r9,r11
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r4.u32);
loc_82619910:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x826198e4
	if (ctx.cr6.lt) goto loc_826198E4;
loc_82619924:
	// clrlwi. r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826198c8
	if (!ctx.cr0.eq) goto loc_826198C8;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// mr r25,r19
	r25.u64 = r19.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// lfs f29,3716(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3716);
	f29.f64 = double(temp.f32);
	// ble cr6,0x82619970
	if (!ctx.cr6.gt) goto loc_82619970;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
loc_8261994C:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, f29.f64);
	// bge cr6,0x8261996c
	if (!ctx.cr6.lt) goto loc_8261996C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r22.s32, ctx.xer);
	// blt cr6,0x8261994c
	if (ctx.cr6.lt) goto loc_8261994C;
	// b 0x82619970
	goto loc_82619970;
loc_8261996C:
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
loc_82619970:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// ble cr6,0x826199a4
	if (!ctx.cr6.gt) goto loc_826199A4;
	// mr r10,r18
	ctx.r10.u64 = r18.u64;
loc_82619980:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, f29.f64);
	// bge cr6,0x826199a0
	if (!ctx.cr6.lt) goto loc_826199A0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r19.s32, ctx.xer);
	// blt cr6,0x82619980
	if (ctx.cr6.lt) goto loc_82619980;
	// b 0x826199a4
	goto loc_826199A4;
loc_826199A0:
	// mr r25,r11
	r25.u64 = ctx.r11.u64;
loc_826199A4:
	// subf r28,r25,r19
	r28.u64 = r19.u64 - r25.u64;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// ble cr6,0x826199f4
	if (!ctx.cr6.gt) goto loc_826199F4;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
	// mr r8,r19
	ctx.r8.u64 = r19.u64;
loc_826199BC:
	// stfs f29,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// ble cr6,0x826199e4
	if (!ctx.cr6.gt) goto loc_826199E4;
	// mtctr r22
	ctx.ctr.u64 = r22.u64;
loc_826199D0:
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f29,r6,r17
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r6.u32 + r17.u32, temp.u32);
	// bdnz 0x826199d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826199D0;
loc_826199E4:
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// add r10,r10,r22
	ctx.r10.u64 = ctx.r10.u64 + r22.u64;
	// bne 0x826199bc
	if (!ctx.cr0.eq) goto loc_826199BC;
loc_826199F4:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// ble cr6,0x82619c98
	if (!ctx.cr6.gt) goto loc_82619C98;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r23,r7
	r23.u64 = ctx.r7.u64;
	// cmpw cr6,r7,r22
	ctx.cr6.compare<int32_t>(ctx.r7.s32, r22.s32, ctx.xer);
	// lfs f25,3704(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	f25.f64 = double(temp.f32);
	// bge cr6,0x82619be4
	if (!ctx.cr6.lt) goto loc_82619BE4;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// add r29,r11,r16
	r29.u64 = ctx.r11.u64 + r16.u64;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// subf r24,r16,r27
	r24.u64 = r27.u64 - r16.u64;
	// lfs f26,3740(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3740);
	f26.f64 = double(temp.f32);
	// lfd f28,-13816(r11)
	f28.u64 = REX_LOAD_U64(ctx.r11.u32 + -13816);
	// lfs f27,7540(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 7540);
	f27.f64 = double(temp.f32);
loc_82619A34:
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// cmpw cr6,r25,r19
	ctx.cr6.compare<int32_t>(r25.s32, r19.s32, ctx.xer);
	// bge cr6,0x82619a68
	if (!ctx.cr6.lt) goto loc_82619A68;
	// rlwinm r10,r25,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r24,r29
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r24.u32 + r29.u32);
	ctx.f0.f64 = double(temp.f32);
	// add r10,r10,r18
	ctx.r10.u64 = ctx.r10.u64 + r18.u64;
loc_82619A4C:
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82619a68
	if (!ctx.cr6.gt) goto loc_82619A68;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r19.s32, ctx.xer);
	// blt cr6,0x82619a4c
	if (ctx.cr6.lt) goto loc_82619A4C;
loc_82619A68:
	// subf r11,r25,r11
	ctx.r11.u64 = ctx.r11.u64 - r25.u64;
	// twllei r28,0
	if (r28.s32 == 0 || r28.u32 < 0u) ppc_trap(ctx, base, 0);
	// add r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 + r28.u64;
	// divw r9,r11,r28
	ctx.r9.u64 = uint32_t((r28.s32 && !(ctx.r11.s32 == INT32_MIN && r28.s32 == -1)) ? ctx.r11.s32 / r28.s32 : 0);
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// mullw r10,r9,r28
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(r28.s32);
	// divw r9,r8,r28
	ctx.r9.u64 = uint32_t((r28.s32 && !(ctx.r8.s32 == INT32_MIN && r28.s32 == -1)) ? ctx.r8.s32 / r28.s32 : 0);
	// subf r10,r10,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r10.u64;
	// mullw r9,r9,r28
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(r28.s32);
	// subf r9,r9,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r9.u64;
	// add r27,r10,r25
	r27.u64 = ctx.r10.u64 + r25.u64;
	// add r26,r9,r25
	r26.u64 = ctx.r9.u64 + r25.u64;
	// rlwinm r30,r27,2,0,29
	r30.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r31,r26,2,0,29
	r31.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// rotlwi r11,r11,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// rotlwi r10,r8,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lfsx f0,r30,r18
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + r18.u32);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lfsx f13,r31,r18
	temp.u32 = REX_LOAD_U32(r31.u32 + r18.u32);
	ctx.f13.f64 = double(temp.f32);
	// andc r11,r28,r11
	ctx.r11.u64 = r28.u64 & ~ctx.r11.u64;
	// fsubs f31,f0,f13
	f31.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// andc r10,r28,r10
	ctx.r10.u64 = r28.u64 & ~ctx.r10.u64;
	// twllei r28,0
	if (r28.s32 == 0 || r28.u32 < 0u) ppc_trap(ctx, base, 0);
	// twlgei r11,-1
	if (ctx.r11.s32 == -1 || ctx.r11.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// twlgei r10,-1
	if (ctx.r10.s32 == -1 || ctx.r10.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// fmuls f1,f31,f27
	ctx.f1.f64 = double(float(f31.f64 * f27.f64));
	// bl 0x826a2f00
	ctx.lr = 0x82619AD8;
	sub_826A2F00(ctx, base);
	// lfsx f0,r24,r29
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r24.u32 + r29.u32);
	ctx.f0.f64 = double(temp.f32);
	// frsp f13,f1
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lfsx f12,r31,r18
	temp.u32 = REX_LOAD_U32(r31.u32 + r18.u32);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f30,f0,f12
	f30.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fnmsubs f31,f13,f26,f31
	f31.f64 = double(float(-std::fma(ctx.f13.f64, f26.f64, -f31.f64)));
	// fmuls f1,f30,f27
	ctx.f1.f64 = double(float(f30.f64 * f27.f64));
	// bl 0x826a2f00
	ctx.lr = 0x82619AF4;
	sub_826A2F00(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// cmpw cr6,r26,r27
	ctx.cr6.compare<int32_t>(r26.s32, r27.s32, ctx.xer);
	// fnmsubs f0,f0,f26,f30
	ctx.f0.f64 = double(float(-std::fma(ctx.f0.f64, f26.f64, -f30.f64)));
	// bne cr6,0x82619b30
	if (!ctx.cr6.eq) goto loc_82619B30;
	// lwzx r10,r31,r21
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + r21.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mullw r10,r10,r22
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r22.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f25,r11,r17
	temp.f32 = float(f25.f64);
	REX_STORE_U32(ctx.r11.u32 + r17.u32, temp.u32);
	// lwzx r11,r31,r21
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + r21.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r11,r20
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r20.u32);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f25
	ctx.f0.f64 = double(float(ctx.f0.f64 + f25.f64));
	// b 0x82619bd0
	goto loc_82619BD0;
loc_82619B30:
	// fcmpu cr6,f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f31.f64, f29.f64);
	// beq cr6,0x82619cd4
	if (ctx.cr6.eq) goto loc_82619CD4;
	// fdivs f30,f0,f31
	f30.f64 = double(float(ctx.f0.f64 / f31.f64));
	// fmul f1,f30,f28
	ctx.f1.f64 = f30.f64 * f28.f64;
	// bl 0x826a15c0
	ctx.lr = 0x82619B44;
	sub_826A15C0(ctx, base);
	// frsp f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(ctx.f1.f64));
	// fcmpu cr6,f31,f29
	ctx.cr6.compare(f31.f64, f29.f64);
	// bge cr6,0x82619b54
	if (!ctx.cr6.lt) goto loc_82619B54;
	// fmr f31,f29
	f31.f64 = f29.f64;
loc_82619B54:
	// fmul f1,f30,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64 * f28.f64;
	// bl 0x826a14e0
	ctx.lr = 0x82619B5C;
	sub_826A14E0(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, f29.f64);
	// bge cr6,0x82619b6c
	if (!ctx.cr6.lt) goto loc_82619B6C;
	// fmr f0,f29
	ctx.f0.f64 = f29.f64;
loc_82619B6C:
	// cmpwi cr6,r19,1
	ctx.cr6.compare<int32_t>(r19.s32, 1, ctx.xer);
	// bne cr6,0x82619b7c
	if (!ctx.cr6.eq) goto loc_82619B7C;
	// fmr f0,f25
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = f25.f64;
	// fmr f31,f25
	f31.f64 = f25.f64;
loc_82619B7C:
	// lwzx r10,r31,r21
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + r21.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mullw r10,r10,r22
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r22.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f31,r11,r17
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + r17.u32, temp.u32);
	// lwzx r11,r30,r21
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + r21.u32);
	// mullw r10,r11,r22
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(r22.s32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r11,r17
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + r17.u32, temp.u32);
	// lwzx r11,r31,r21
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + r21.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r11,r20
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r20.u32);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 + f31.f64));
	// stfsx f13,r11,r20
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + r20.u32, temp.u32);
	// lwzx r11,r30,r21
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + r21.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r11,r20
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r20.u32);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
loc_82619BD0:
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// stfsx f0,r11,r20
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + r20.u32, temp.u32);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r23,r22
	ctx.cr6.compare<int32_t>(r23.s32, r22.s32, ctx.xer);
	// blt cr6,0x82619a34
	if (ctx.cr6.lt) goto loc_82619A34;
loc_82619BE4:
	// fmr f10,f29
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = f29.f64;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// ble cr6,0x82619c98
	if (!ctx.cr6.gt) goto loc_82619C98;
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
	// mtctr r19
	ctx.ctr.u64 = r19.u64;
loc_82619BF8:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// ble cr6,0x82619c08
	if (!ctx.cr6.gt) goto loc_82619C08;
	// fmr f10,f0
	ctx.f10.f64 = ctx.f0.f64;
loc_82619C08:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82619bf8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82619BF8;
	// fcmpu cr6,f10,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f10.f64, f29.f64);
	// beq cr6,0x82619c98
	if (ctx.cr6.eq) goto loc_82619C98;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r19
	ctx.r8.u64 = r19.u64;
	// lfs f11,4104(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4104);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,3720(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3720);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,3992(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 3992);
	ctx.f13.f64 = double(temp.f32);
loc_82619C38:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// ble cr6,0x82619c8c
	if (!ctx.cr6.gt) goto loc_82619C8C;
	// fdivs f0,f25,f10
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f25.f64 / ctx.f10.f64));
	// mtctr r22
	ctx.ctr.u64 = r22.u64;
loc_82619C4C:
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f9,r10,r17
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + r17.u32);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f9,f0,f9
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// fmadds f9,f9,f13,f12
	ctx.f9.f64 = double(float(std::fma(ctx.f9.f64, ctx.f13.f64, ctx.f12.f64)));
	// fctiwz f9,f9
	ctx.f9.s64 = std::isnan(ctx.f9.f64) ? int64_t(0x80000000U) : (ctx.f9.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// lwa r7,84(r1)
	ctx.r7.s64 = int32_t(REX_LOAD_U32(ctx.r1.u32 + 84));
	// std r7,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// lfd f9,88(r1)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// fmuls f9,f9,f11
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// stfsx f9,r10,r17
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r10.u32 + r17.u32, temp.u32);
	// bdnz 0x82619c4c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82619C4C;
loc_82619C8C:
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// add r9,r9,r22
	ctx.r9.u64 = ctx.r9.u64 + r22.u64;
	// bne 0x82619c38
	if (!ctx.cr0.eq) goto loc_82619C38;
loc_82619C98:
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x8264c3d0
	ctx.lr = 0x82619CA0;
	sub_8264C3D0(ctx, base);
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x82619cb0
	if (ctx.cr6.eq) goto loc_82619CB0;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x8264c3d0
	ctx.lr = 0x82619CB0;
	sub_8264C3D0(ctx, base);
loc_82619CB0:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// beq cr6,0x82619cc0
	if (ctx.cr6.eq) goto loc_82619CC0;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x8264c3d0
	ctx.lr = 0x82619CC0;
	sub_8264C3D0(ctx, base);
loc_82619CC0:
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-144
	ctx.r12.s64 = ctx.r1.s64 + -144;
	// bl 0x826a2ce8
	ctx.lr = 0x82619CD0;
	// b 0x826a1cd4
	return;
loc_82619CD4:
	// lis r15,-32761
	r15.s64 = -2147024896;
	// ori r15,r15,87
	r15.u64 = r15.u64 | 87;
	// b 0x82619c98
	goto loc_82619C98;
}

DEFINE_REX_FUNC(sub_82647208) {
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
	ctx.lr = 0x82647210;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x826473d4
	if (ctx.cr6.eq) goto loc_826473D4;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x826473d4
	if (ctx.cr6.eq) goto loc_826473D4;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,7
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 7, ctx.xer);
	// blt cr6,0x826473cc
	if (ctx.cr6.lt) goto loc_826473CC;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// clrlwi r24,r7,16
	r24.u64 = ctx.r7.u32 & 0xFFFF;
	// addi r25,r11,-26936
	r25.s64 = ctx.r11.s64 + -26936;
	// addi r27,r10,-26964
	r27.s64 = ctx.r10.s64 + -26964;
	// addi r26,r9,-26992
	r26.s64 = ctx.r9.s64 + -26992;
loc_82647248:
	// cmplw cr6,r4,r24
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, r24.u32, ctx.xer);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// blt cr6,0x82647258
	if (ctx.cr6.lt) goto loc_82647258;
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
loc_82647258:
	// lbz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// addic. r8,r11,-7
	ctx.xer.ca = ctx.r11.u32 > 6;
	ctx.r8.s64 = ctx.r11.s64 + -7;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lbzu r7,1(r3)
	ea = 1 + ctx.r3.u32;
	ctx.r7.u64 = REX_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// subf r4,r11,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r11.u64;
	// rotlwi r31,r9,2
	r31.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// lbz r6,1(r3)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r3.u32 + 1);
	// lbzu r11,2(r3)
	ea = 2 + ctx.r3.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// rotlwi r9,r6,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r6.u32, 8);
	// lwzx r29,r31,r26
	r29.u64 = REX_LOAD_U32(r31.u32 + r26.u32);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// lwzx r28,r31,r27
	r28.u64 = REX_LOAD_U32(r31.u32 + r27.u32);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lbz r11,1(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 1);
	// lbzu r30,2(r3)
	ea = 2 + ctx.r3.u32;
	r30.u64 = REX_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// rotlwi r31,r11,8
	r31.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// add r10,r31,r6
	ctx.r10.u64 = r31.u64 + ctx.r6.u64;
	// lbz r7,1(r3)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + 1);
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// rotlwi r11,r7,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// srawi r6,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 8;
	// srawi r7,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 8;
	// addi r6,r6,128
	ctx.r6.s64 = ctx.r6.s64 + 128;
	// addi r7,r7,128
	ctx.r7.s64 = ctx.r7.s64 + 128;
	// stb r6,0(r5)
	REX_STORE_U8(ctx.r5.u32 + 0, ctx.r6.u8);
	// stbu r7,1(r5)
	ea = 1 + ctx.r5.u32;
	REX_STORE_U8(ea, ctx.r7.u8);
	ctx.r5.u32 = ea;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// beq 0x826473c4
	if (ctx.cr0.eq) goto loc_826473C4;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_826472CC:
	// lbz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// mullw r11,r11,r28
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r28.s32);
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// mullw r7,r10,r29
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(r29.s32);
	// srawi r6,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 4;
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rlwinm r11,r6,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// srawi r7,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 8;
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// cmpwi cr6,r11,32767
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32767, ctx.xer);
	// ble cr6,0x82647310
	if (!ctx.cr6.gt) goto loc_82647310;
	// li r11,32767
	ctx.r11.s64 = 32767;
	// b 0x8264731c
	goto loc_8264731C;
loc_82647310:
	// cmpwi cr6,r11,-32768
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -32768, ctx.xer);
	// bge cr6,0x8264731c
	if (!ctx.cr6.lt) goto loc_8264731C;
	// li r11,-32768
	ctx.r11.s64 = -32768;
loc_8264731C:
	// rlwinm r7,r6,2,26,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x3C;
	// lwzx r6,r7,r25
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + r25.u32);
	// mullw r9,r6,r9
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// srawi r6,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 8;
	// cmpwi cr6,r6,16
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 16, ctx.xer);
	// bge cr6,0x82647338
	if (!ctx.cr6.lt) goto loc_82647338;
	// li r6,16
	ctx.r6.s64 = 16;
loc_82647338:
	// rlwinm r8,r8,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// mullw r10,r10,r28
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r28.s32);
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// srawi r9,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 8;
	// mullw r8,r11,r29
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(r29.s32);
	// srawi r7,r7,4
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 4;
	// add r31,r8,r10
	r31.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r8,r7,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r9,128
	ctx.r10.s64 = ctx.r9.s64 + 128;
	// extsb r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	// stb r10,0(r5)
	REX_STORE_U8(ctx.r5.u32 + 0, ctx.r10.u8);
	// addi r8,r5,1
	ctx.r8.s64 = ctx.r5.s64 + 1;
	// srawi r10,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 4;
	// srawi r9,r31,8
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0xFF) != 0);
	ctx.r9.s64 = r31.s32 >> 8;
	// mullw r10,r10,r6
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpwi cr6,r10,32767
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32767, ctx.xer);
	// ble cr6,0x82647388
	if (!ctx.cr6.gt) goto loc_82647388;
	// li r10,32767
	ctx.r10.s64 = 32767;
	// b 0x82647394
	goto loc_82647394;
loc_82647388:
	// cmpwi cr6,r10,-32768
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -32768, ctx.xer);
	// bge cr6,0x82647394
	if (!ctx.cr6.lt) goto loc_82647394;
	// li r10,-32768
	ctx.r10.s64 = -32768;
loc_82647394:
	// rlwinm r9,r7,2,26,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x3C;
	// lwzx r7,r9,r25
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + r25.u32);
	// mullw r6,r7,r6
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r6.s32);
	// srawi r9,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r6.s32 >> 8;
	// cmpwi cr6,r9,16
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 16, ctx.xer);
	// bge cr6,0x826473b0
	if (!ctx.cr6.lt) goto loc_826473B0;
	// li r9,16
	ctx.r9.s64 = 16;
loc_826473B0:
	// srawi r7,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 8;
	// addi r5,r8,1
	ctx.r5.s64 = ctx.r8.s64 + 1;
	// addi r7,r7,128
	ctx.r7.s64 = ctx.r7.s64 + 128;
	// stb r7,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r7.u8);
	// bdnz 0x826472cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826472CC;
loc_826473C4:
	// cmplwi cr6,r4,7
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 7, ctx.xer);
	// bge cr6,0x82647248
	if (!ctx.cr6.lt) goto loc_82647248;
loc_826473CC:
	// subf r3,r23,r5
	ctx.r3.u64 = ctx.r5.u64 - r23.u64;
	// b 0x826a1cf4
	return;
loc_826473D4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_826508B0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,180(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 180);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x826508fc
	if (!ctx.cr6.lt) goto loc_826508FC;
	// lwz r11,248(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 248);
	// addi r10,r3,248
	ctx.r10.s64 = ctx.r3.s64 + 248;
	// li r9,0
	ctx.r9.s64 = 0;
	// subf r8,r11,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r11.u64;
	// subfic r8,r8,0
	ctx.xer.ca = ctx.r8.u32 <= 0;
	ctx.r8.u64 = static_cast<uint64_t>(0) - ctx.r8.u64;
	// subfe r8,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 & ctx.r11.u64;
loc_826508D8:
	// lwz r8,304(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 304);
	// addi r3,r11,-92
	ctx.r3.s64 = ctx.r11.s64 + -92;
	// rlwinm. r8,r8,0,4,4
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x826508f4
	if (ctx.cr0.eq) goto loc_826508F4;
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_826508F4:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x826508d8
	goto loc_826508D8;
loc_826508FC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82654388) {
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
	ctx.lr = 0x82654390;
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,420(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 420);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826543b0
	if (ctx.cr6.eq) goto loc_826543B0;
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// rlwinm r11,r11,2,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	// b 0x826543b4
	goto loc_826543B4;
loc_826543B0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_826543B4:
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// li r30,0
	r30.s64 = 0;
	// subfe r27,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	r27.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r29,r1,80
	r29.s64 = ctx.r1.s64 + 80;
	// addi r31,r28,380
	r31.s64 = r28.s64 + 380;
loc_826543C8:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82654404
	if (ctx.cr6.eq) goto loc_82654404;
	// lwz r11,396(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 396);
	// rlwinm. r11,r11,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82654404
	if (!ctx.cr0.eq) goto loc_82654404;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82653a08
	ctx.lr = 0x826543F0;
	sub_82653A08(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,396(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 396);
	// rlwimi r10,r27,24,7,7
	ctx.r10.u64 = (__builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 24) & 0x1000000) | (ctx.r10.u64 & 0xFFFFFFFFFEFFFFFF);
	// stw r10,396(r11)
	REX_STORE_U32(ctx.r11.u32 + 396, ctx.r10.u32);
	// b 0x82654414
	goto loc_82654414;
loc_82654404:
	// li r5,42
	ctx.r5.s64 = 42;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826a2e60
	ctx.lr = 0x82654414;
	sub_826A2E60(ctx, base);
loc_82654414:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// addi r29,r29,42
	r29.s64 = r29.s64 + 42;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(r30.u32, 4, ctx.xer);
	// blt cr6,0x826543c8
	if (ctx.cr6.lt) goto loc_826543C8;
	// lwz r11,400(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 400);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826544a8
	if (ctx.cr6.eq) goto loc_826544A8;
	// lwz r11,28(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 28);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82654448
	if (!ctx.cr6.eq) goto loc_82654448;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8265444c
	goto loc_8265444C;
loc_82654448:
	// bl 0x8264ca10
	ctx.lr = 0x8265444C;
	sub_8264CA10(ctx, base);
loc_8265444C:
	// lwz r11,420(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 420);
	// rlwinm r10,r3,2,24,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFC;
	// stb r10,248(r1)
	REX_STORE_U8(ctx.r1.u32 + 248, ctx.r10.u8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82654468
	if (ctx.cr6.eq) goto loc_82654468;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// b 0x8265446c
	goto loc_8265446C;
loc_82654468:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8265446C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stb r11,248(r1)
	REX_STORE_U8(ctx.r1.u32 + 248, ctx.r11.u8);
	// beq cr6,0x8265448c
	if (ctx.cr6.eq) goto loc_8265448C;
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// stb r11,248(r1)
	REX_STORE_U8(ctx.r1.u32 + 248, ctx.r11.u8);
loc_8265448C:
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,400(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 400);
	// li r5,169
	ctx.r5.s64 = 169;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8265d738
	ctx.lr = 0x826544A0;
	sub_8265D738(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x826544ac
	if (ctx.cr0.lt) goto loc_826544AC;
loc_826544A8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826544AC:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8265D088) {
	REX_FUNC_PROLOGUE();
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
loc_8265D0A8:
	// lwzx r7,r11,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8265d0c8
	if (ctx.cr6.eq) goto loc_8265D0C8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8265d0a8
	if (ctx.cr6.lt) goto loc_8265D0A8;
	// blr 
	return;
loc_8265D0C8:
	// mulli r11,r10,24
	ctx.r11.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(24));
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8265D9D8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265da04
	if (ctx.cr6.eq) goto loc_8265DA04;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lis r11,-32119
	ctx.r11.s64 = -2104950784;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,-6216
	ctx.r5.s64 = ctx.r11.s64 + -6216;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_8265DA04:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8265E3D0) {
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
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// ori r11,r11,996
	ctx.r11.u64 = ctx.r11.u64 | 996;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8265e454
	if (!ctx.cr6.eq) goto loc_8265E454;
	// lwz r11,60(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// addi r3,r3,60
	ctx.r3.s64 = ctx.r3.s64 + 60;
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// bne cr6,0x8265e414
	if (!ctx.cr6.eq) goto loc_8265E414;
	// bl 0x823eea60
	ctx.lr = 0x8265E414;
	sub_823EEA60(ctx, base);
loc_8265E414:
	// lwz r3,104(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 104);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8265e42c
	if (ctx.cr6.eq) goto loc_8265E42C;
	// bl 0x8264c908
	ctx.lr = 0x8265E424;
	sub_8264C908(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r11.u32);
loc_8265E42C:
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r30,20(r31)
	REX_STORE_U32(r31.u32 + 20, r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// stw r11,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82651238
	ctx.lr = 0x8265E454;
	sub_82651238(ctx, base);
loc_8265E454:
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

DEFINE_REX_FUNC(sub_82660EA8) {
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
	// bl 0x826609f8
	ctx.lr = 0x82660EB8;
	sub_826609F8(ctx, base);
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

DEFINE_REX_FUNC(sub_82661A30) {
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
	// lwz r11,44(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 44);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r3,28(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// rlwinm. r11,r11,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82661a94
	if (ctx.cr0.eq) goto loc_82661A94;
	// lwz r11,36(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 36);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82661a94
	if (!ctx.cr0.eq) goto loc_82661A94;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
loc_82661A74:
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
	// bne 0x82661a74
	if (!ctx.cr0.eq) goto loc_82661A74;
	// b 0x82661ae8
	goto loc_82661AE8;
loc_82661A94:
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// ori r11,r11,65534
	ctx.r11.u64 = ctx.r11.u64 | 65534;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// bne cr6,0x82661acc
	if (!ctx.cr6.eq) goto loc_82661ACC;
loc_82661AAC:
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
	// bne 0x82661aac
	if (!ctx.cr0.eq) goto loc_82661AAC;
	// b 0x82661ae8
	goto loc_82661AE8;
loc_82661ACC:
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
	// bne 0x82661acc
	if (!ctx.cr0.eq) goto loc_82661ACC;
loc_82661AE8:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82661b04
	if (!ctx.cr6.eq) goto loc_82661B04;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82661B04;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82661B04:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82661b14
	if (ctx.cr6.eq) goto loc_82661B14;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82675ad0
	ctx.lr = 0x82661B14;
	sub_82675AD0(ctx, base);
loc_82661B14:
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

DEFINE_REX_FUNC(sub_8266B510) {
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
	ctx.lr = 0x8266B518;
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r17,0
	r17.s64 = 0;
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// mr r21,r4
	r21.u64 = ctx.r4.u64;
	// cmplwi cr6,r6,3
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 3, ctx.xer);
	// mr r20,r17
	r20.u64 = r17.u64;
	// bge cr6,0x8266b540
	if (!ctx.cr6.lt) goto loc_8266B540;
loc_8266B534:
	// lis r31,-32646
	r31.s64 = -2139488256;
	// ori r31,r31,4106
	r31.u64 = r31.u64 | 4106;
	// b 0x8266ba54
	goto loc_8266BA54;
loc_8266B540:
	// lwz r11,184(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 184);
	// addi r10,r6,-3
	ctx.r10.s64 = ctx.r6.s64 + -3;
	// lbz r24,1(r5)
	r24.u64 = REX_LOAD_U8(ctx.r5.u32 + 1);
	// addi r14,r5,3
	r14.s64 = ctx.r5.s64 + 3;
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// cmplw cr6,r24,r9
	ctx.cr6.compare<uint32_t>(r24.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x8266b534
	if (ctx.cr6.gt) goto loc_8266B534;
	// subf r11,r24,r11
	ctx.r11.u64 = ctx.r11.u64 - r24.u64;
	// lbz r15,2(r5)
	r15.u64 = REX_LOAD_U8(ctx.r5.u32 + 2);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplw cr6,r15,r11
	ctx.cr6.compare<uint32_t>(r15.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8266b534
	if (ctx.cr6.gt) goto loc_8266B534;
	// add r11,r15,r24
	ctx.r11.u64 = r15.u64 + r24.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8266b534
	if (ctx.cr6.lt) goto loc_8266B534;
	// lwz r11,292(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 292);
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8266b534
	if (ctx.cr0.eq) goto loc_8266B534;
	// rlwinm. r11,r11,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8266ba50
	if (!ctx.cr0.eq) goto loc_8266BA50;
	// lwz r11,236(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 236);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8266b534
	if (!ctx.cr6.eq) goto loc_8266B534;
	// addi r27,r19,8
	r27.s64 = r19.s64 + 8;
	// lwz r4,64(r21)
	ctx.r4.u64 = REX_LOAD_U32(r21.u32 + 64);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// bl 0x82672760
	ctx.lr = 0x8266B5B4;
	sub_82672760(ctx, base);
	// mr. r16,r3
	r16.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r16.s32, 0, ctx.xer);
	// beq 0x8266b534
	if (ctx.cr0.eq) goto loc_8266B534;
	// lwz r11,20(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 20);
	// lwz r10,24(r19)
	ctx.r10.u64 = REX_LOAD_U32(r19.u32 + 24);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8266b5d8
	if (ctx.cr6.eq) goto loc_8266B5D8;
	// lis r31,-32646
	r31.s64 = -2139488256;
	// ori r31,r31,4106
	r31.u64 = r31.u64 | 4106;
	// b 0x8266b9e4
	goto loc_8266B9E4;
loc_8266B5D8:
	// mfmsr r10
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r10.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r11,0,r16
	ea = r16.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r16
	ea = r16.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x8266b5d8
	if (!ctx.cr0.eq) goto loc_8266B5D8;
	// li r4,5
	ctx.r4.s64 = 5;
	// li r3,17
	ctx.r3.s64 = 17;
	// mr r16,r17
	r16.u64 = r17.u64;
	// bl 0x82675ee0
	ctx.lr = 0x8266B604;
	sub_82675EE0(ctx, base);
	// mr. r20,r3
	r20.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r20.s32, 0, ctx.xer);
	// bne 0x8266b618
	if (!ctx.cr0.eq) goto loc_8266B618;
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,14
	r31.u64 = r31.u64 | 14;
	// b 0x8266ba54
	goto loc_8266BA54;
loc_8266B618:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lwz r10,60(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 60);
	// mr r25,r17
	r25.u64 = r17.u64;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// std r17,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, r17.u64);
	// std r17,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, r17.u64);
	// stw r10,69(r20)
	REX_STORE_U32(r20.u32 + 69, ctx.r10.u32);
	// beq cr6,0x8266b97c
	if (ctx.cr6.eq) goto loc_8266B97C;
	// mr r22,r14
	r22.u64 = r14.u64;
	// li r23,1
	r23.s64 = 1;
	// li r18,-1
	r18.s64 = -1;
loc_8266B644:
	// rlwinm r26,r25,29,3,31
	r26.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r28,r1,96
	r28.s64 = ctx.r1.s64 + 96;
	// clrlwi r11,r25,29
	ctx.r11.u64 = r25.u32 & 0x7;
	// slw r30,r23,r11
	r30.u64 = ctx.r11.u8 & 0x20 ? 0 : (r23.u32 << (ctx.r11.u8 & 0x3F));
	// lbzx r29,r26,r28
	r29.u64 = REX_LOAD_U8(r26.u32 + r28.u32);
	// and. r11,r29,r30
	ctx.r11.u64 = r29.u64 & r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8266b96c
	if (!ctx.cr0.eq) goto loc_8266B96C;
	// lwz r9,0(r22)
	ctx.r9.u64 = REX_LOAD_U32(r22.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8266ba44
	if (ctx.cr6.eq) goto loc_8266BA44;
	// lwz r11,60(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 60);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8266ba44
	if (ctx.cr6.eq) goto loc_8266BA44;
	// lwz r11,24(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 24);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8266ba44
	if (ctx.cr6.eq) goto loc_8266BA44;
	// mr r10,r17
	ctx.r10.u64 = r17.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x8266b6b0
	if (ctx.cr6.eq) goto loc_8266B6B0;
	// mr r11,r14
	ctx.r11.u64 = r14.u64;
loc_8266B694:
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8266ba44
	if (ctx.cr6.eq) goto loc_8266BA44;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r25
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r25.u32, ctx.xer);
	// blt cr6,0x8266b694
	if (ctx.cr6.lt) goto loc_8266B694;
loc_8266B6B0:
	// lwz r11,240(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 240);
	// addi r10,r19,240
	ctx.r10.s64 = r19.s64 + 240;
	// b 0x8266b6d0
	goto loc_8266B6D0;
loc_8266B6BC:
	// lwz r8,56(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// addi r31,r11,-4
	r31.s64 = ctx.r11.s64 + -4;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8266b6e4
	if (ctx.cr6.eq) goto loc_8266B6E4;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_8266B6D0:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8266b6e0
	if (ctx.cr6.eq) goto loc_8266B6E0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8266b6bc
	if (!ctx.cr0.eq) goto loc_8266B6BC;
loc_8266B6E0:
	// mr r31,r17
	r31.u64 = r17.u64;
loc_8266B6E4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8266ba44
	if (ctx.cr6.eq) goto loc_8266BA44;
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 64);
	// lwz r10,64(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 64);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8266ba44
	if (!ctx.cr6.lt) goto loc_8266BA44;
	// li r7,131
	ctx.r7.s64 = 131;
	// lwz r6,32(r20)
	ctx.r6.u64 = REX_LOAD_U32(r20.u32 + 32);
	// addi r5,r20,36
	ctx.r5.s64 = r20.s64 + 36;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826711d8
	ctx.lr = 0x8266B714;
	sub_826711D8(ctx, base);
	// lwz r27,236(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 236);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8266b788
	if (ctx.cr6.eq) goto loc_8266B788;
	// addi r11,r25,1
	ctx.r11.s64 = r25.s64 + 1;
	// mr r8,r17
	ctx.r8.u64 = r17.u64;
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r24.u32, ctx.xer);
	// bge cr6,0x8266b798
	if (!ctx.cr6.lt) goto loc_8266B798;
	// lwz r9,60(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 60);
	// addi r10,r22,4
	ctx.r10.s64 = r22.s64 + 4;
loc_8266B738:
	// lwz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8266b758
	if (ctx.cr6.eq) goto loc_8266B758;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r24.u32, ctx.xer);
	// blt cr6,0x8266b738
	if (ctx.cr6.lt) goto loc_8266B738;
	// b 0x8266b798
	goto loc_8266B798;
loc_8266B758:
	// lwz r10,64(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 64);
	// lwz r9,64(r21)
	ctx.r9.u64 = REX_LOAD_U32(r21.u32 + 64);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8266ba44
	if (!ctx.cr6.lt) goto loc_8266BA44;
	// rlwinm r9,r11,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// slw r11,r23,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (r23.u32 << (ctx.r11.u8 & 0x3F));
	// lbzx r7,r9,r10
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// stbx r11,r9,r10
	REX_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u8);
	// b 0x8266b794
	goto loc_8266B794;
loc_8266B788:
	// or r11,r29,r30
	ctx.r11.u64 = r29.u64 | r30.u64;
	// mr r27,r31
	r27.u64 = r31.u64;
	// stbx r11,r26,r28
	REX_STORE_U8(r26.u32 + r28.u32, ctx.r11.u8);
loc_8266B794:
	// mr r8,r23
	ctx.r8.u64 = r23.u64;
loc_8266B798:
	// lwz r11,292(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 292);
	// rlwinm. r11,r11,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8266b968
	if (!ctx.cr0.eq) goto loc_8266B968;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8266b7c8
	if (ctx.cr6.eq) goto loc_8266B7C8;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826715f0
	ctx.lr = 0x8266B7C8;
	sub_826715F0(ctx, base);
loc_8266B7C8:
	// lwz r11,196(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 196);
	// mr r26,r17
	r26.u64 = r17.u64;
	// mr r28,r17
	r28.u64 = r17.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8266b894
	if (ctx.cr6.eq) goto loc_8266B894;
	// mr r29,r17
	r29.u64 = r17.u64;
loc_8266B7E0:
	// lwz r11,188(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 188);
	// lwzx r4,r11,r29
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// lwz r11,236(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 236);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8266b880
	if (ctx.cr0.eq) goto loc_8266B880;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r27.u32, ctx.xer);
	// bne cr6,0x8266b87c
	if (!ctx.cr6.eq) goto loc_8266B87C;
	// mr r30,r25
	r30.u64 = r25.u64;
	// cmplw cr6,r25,r24
	ctx.cr6.compare<uint32_t>(r25.u32, r24.u32, ctx.xer);
	// bge cr6,0x8266b87c
	if (!ctx.cr6.lt) goto loc_8266B87C;
	// lwz r10,60(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 60);
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
loc_8266B810:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8266b830
	if (ctx.cr6.eq) goto loc_8266B830;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r30,r24
	ctx.cr6.compare<uint32_t>(r30.u32, r24.u32, ctx.xer);
	// blt cr6,0x8266b810
	if (ctx.cr6.lt) goto loc_8266B810;
	// b 0x8266b87c
	goto loc_8266B87C;
loc_8266B830:
	// lwz r11,64(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 64);
	// lwz r10,64(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 64);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8266ba44
	if (!ctx.cr6.lt) goto loc_8266BA44;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826715f0
	ctx.lr = 0x8266B858;
	sub_826715F0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x8266b9f8
	if (!ctx.cr0.eq) goto loc_8266B9F8;
	// rlwinm r10,r30,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// clrlwi r9,r30,29
	ctx.r9.u64 = r30.u32 & 0x7;
	// slw r9,r23,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r23.u32 << (ctx.r9.u8 & 0x3F));
	// lbzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stbx r9,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
loc_8266B87C:
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
loc_8266B880:
	// lwz r11,196(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 196);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8266b7e0
	if (ctx.cr6.lt) goto loc_8266B7E0;
loc_8266B894:
	// lwz r11,232(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 232);
	// mr r28,r17
	r28.u64 = r17.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8266b944
	if (ctx.cr6.eq) goto loc_8266B944;
	// mr r29,r17
	r29.u64 = r17.u64;
loc_8266B8A8:
	// lwz r11,224(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 224);
	// mr r30,r25
	r30.u64 = r25.u64;
	// cmplw cr6,r25,r24
	ctx.cr6.compare<uint32_t>(r25.u32, r24.u32, ctx.xer);
	// lwzx r4,r29,r11
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// bge cr6,0x8266b930
	if (!ctx.cr6.lt) goto loc_8266B930;
	// lwz r10,60(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 60);
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
loc_8266B8C4:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8266b8e4
	if (ctx.cr6.eq) goto loc_8266B8E4;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r30,r24
	ctx.cr6.compare<uint32_t>(r30.u32, r24.u32, ctx.xer);
	// blt cr6,0x8266b8c4
	if (ctx.cr6.lt) goto loc_8266B8C4;
	// b 0x8266b930
	goto loc_8266B930;
loc_8266B8E4:
	// lwz r11,64(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 64);
	// lwz r10,64(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 64);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8266ba44
	if (!ctx.cr6.lt) goto loc_8266BA44;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826715f0
	ctx.lr = 0x8266B90C;
	sub_826715F0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x8266b9f8
	if (!ctx.cr0.eq) goto loc_8266B9F8;
	// rlwinm r10,r30,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// clrlwi r9,r30,29
	ctx.r9.u64 = r30.u32 & 0x7;
	// slw r9,r23,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r23.u32 << (ctx.r9.u8 & 0x3F));
	// lbzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stbx r9,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
loc_8266B930:
	// lwz r11,232(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 232);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8266b8a8
	if (ctx.cr6.lt) goto loc_8266B8A8;
loc_8266B944:
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8266b968
	if (ctx.cr6.eq) goto loc_8266B968;
	// lis r4,32767
	ctx.r4.s64 = 2147418112;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// ori r4,r4,65534
	ctx.r4.u64 = ctx.r4.u64 | 65534;
	// bl 0x82671270
	ctx.lr = 0x8266B960;
	sub_82671270(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x8266b9f8
	if (ctx.cr0.lt) goto loc_8266B9F8;
loc_8266B968:
	// lwz r27,80(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8266B96C:
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r22,r22,4
	r22.s64 = r22.s64 + 4;
	// cmplw cr6,r25,r24
	ctx.cr6.compare<uint32_t>(r25.u32, r24.u32, ctx.xer);
	// blt cr6,0x8266b644
	if (ctx.cr6.lt) goto loc_8266B644;
loc_8266B97C:
	// addi r11,r20,4
	ctx.r11.s64 = r20.s64 + 4;
loc_8266B980:
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
	// bne 0x8266b980
	if (!ctx.cr0.eq) goto loc_8266B980;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8266b9bc
	if (!ctx.cr6.eq) goto loc_8266B9BC;
	// lwz r11,0(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 0);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266B9BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8266B9BC:
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r15
	ctx.r7.u64 = r15.u64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r14
	ctx.r5.u64 = r14.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// mr r20,r17
	r20.u64 = r17.u64;
	// bl 0x8266aa28
	ctx.lr = 0x8266B9DC;
	sub_8266AA28(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8266ba50
	if (ctx.cr0.eq) goto loc_8266BA50;
loc_8266B9E4:
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(r16.u32, 0, ctx.xer);
	// beq cr6,0x8266ba54
	if (ctx.cr6.eq) goto loc_8266BA54;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82672c40
	ctx.lr = 0x8266B9F8;
	sub_82672C40(ctx, base);
loc_8266B9F8:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// beq cr6,0x8266ba54
	if (ctx.cr6.eq) goto loc_8266BA54;
	// addi r11,r20,4
	ctx.r11.s64 = r20.s64 + 4;
loc_8266BA04:
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
	// bne 0x8266ba04
	if (!ctx.cr0.eq) goto loc_8266BA04;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8266ba54
	if (!ctx.cr6.eq) goto loc_8266BA54;
	// lwz r11,0(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 0);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266BA40;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8266ba54
	goto loc_8266BA54;
loc_8266BA44:
	// lis r31,-32646
	r31.s64 = -2139488256;
	// ori r31,r31,4106
	r31.u64 = r31.u64 | 4106;
	// b 0x8266b9f8
	goto loc_8266B9F8;
loc_8266BA50:
	// mr r31,r17
	r31.u64 = r17.u64;
loc_8266BA54:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_82689408) {
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
	ctx.lr = 0x82689410;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r26,r3,232
	r26.s64 = ctx.r3.s64 + 232;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// bl 0x827938a4
	ctx.lr = 0x82689434;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r11,r30,18
	ctx.r11.s64 = r30.s64 + 18;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82689454
	if (!ctx.cr6.eq) goto loc_82689454;
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,87
	r31.u64 = r31.u64 | 87;
	// b 0x82689470
	goto loc_82689470;
loc_82689454:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r4,-10096(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + -10096);
	// bl 0x8268c8e8
	ctx.lr = 0x8268946C;
	sub_8268C8E8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_82689470:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x827938b4
	ctx.lr = 0x82689478;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8268C690) {
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
	ctx.lr = 0x8268C698;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// bl 0x8268bcf0
	ctx.lr = 0x8268C6A4;
	sub_8268BCF0(ctx, base);
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8268c6b8
	if (!ctx.cr6.eq) goto loc_8268C6B8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8268c8e0
	goto loc_8268C8E0;
loc_8268C6B8:
	// lwz r31,88(r26)
	r31.u64 = REX_LOAD_U32(r26.u32 + 88);
	// addi r29,r26,88
	r29.s64 = r26.s64 + 88;
	// li r25,0
	r25.s64 = 0;
	// b 0x8268c76c
	goto loc_8268C76C;
loc_8268C6C8:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,259
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 259, ctx.xer);
	// beq cr6,0x8268c774
	if (ctx.cr6.eq) goto loc_8268C774;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8268c700
	if (ctx.cr6.eq) goto loc_8268C700;
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8268c6f4
	if (!ctx.cr6.eq) goto loc_8268C6F4;
	// stw r25,4(r29)
	REX_STORE_U32(r29.u32 + 4, r25.u32);
loc_8268C6F4:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// stw r25,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r25.u32);
loc_8268C700:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8268c724
	if (!ctx.cr6.eq) goto loc_8268C724;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r25,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, r25.u32);
loc_8268C724:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r30,r26,80
	r30.s64 = r26.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r25,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r25.u32);
	// bl 0x82793c94
	ctx.lr = 0x8268C738;
	__imp__KfAcquireSpinLock(ctx, base);
	// stw r25,4(r31)
	REX_STORE_U32(r31.u32 + 4, r25.u32);
	// lwz r10,68(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 68);
	// addi r11,r26,64
	ctx.r11.s64 = r26.s64 + 64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8268c758
	if (ctx.cr6.eq) goto loc_8268C758;
	// stw r31,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, r31.u32);
	// b 0x8268c75c
	goto loc_8268C75C;
loc_8268C758:
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r31.u32);
loc_8268C75C:
	// stw r31,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r31.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82793ca4
	ctx.lr = 0x8268C768;
	__imp__KfReleaseSpinLock(ctx, base);
	// lwz r31,0(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 0);
loc_8268C76C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8268c6c8
	if (!ctx.cr6.eq) goto loc_8268C6C8;
loc_8268C774:
	// lwz r31,72(r26)
	r31.u64 = REX_LOAD_U32(r26.u32 + 72);
	// addi r27,r26,72
	r27.s64 = r26.s64 + 72;
	// b 0x8268c870
	goto loc_8268C870;
loc_8268C780:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// subf. r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8268c894
	if (!ctx.cr0.eq) goto loc_8268C894;
	// addi r30,r26,80
	r30.s64 = r26.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82793c94
	ctx.lr = 0x8268C7A0;
	__imp__KfAcquireSpinLock(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8268ee00
	ctx.lr = 0x8268C7AC;
	sub_8268EE00(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8268c7c4
	if (!ctx.cr0.eq) goto loc_8268C7C4;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8268ee00
	ctx.lr = 0x8268C7BC;
	sub_8268EE00(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// ble cr6,0x8268c87c
	if (!ctx.cr6.gt) goto loc_8268C87C;
loc_8268C7C4:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8268c7ec
	if (ctx.cr6.eq) goto loc_8268C7EC;
	// lwz r10,4(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8268c7e0
	if (!ctx.cr6.eq) goto loc_8268C7E0;
	// stw r25,4(r27)
	REX_STORE_U32(r27.u32 + 4, r25.u32);
loc_8268C7E0:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r10.u32);
	// stw r25,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r25.u32);
loc_8268C7EC:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82793ca4
	ctx.lr = 0x8268C7F8;
	__imp__KfReleaseSpinLock(ctx, base);
	// stw r25,4(r31)
	REX_STORE_U32(r31.u32 + 4, r25.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8268c810
	if (ctx.cr6.eq) goto loc_8268C810;
	// stw r31,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r31.u32);
	// b 0x8268c814
	goto loc_8268C814;
loc_8268C810:
	// stw r31,0(r29)
	REX_STORE_U32(r29.u32 + 0, r31.u32);
loc_8268C814:
	// stw r31,4(r29)
	REX_STORE_U32(r29.u32 + 4, r31.u32);
	// addi r7,r26,96
	ctx.r7.s64 = r26.s64 + 96;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r4,8(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r6,r11,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// bl 0x8268fed8
	ctx.lr = 0x8268C838;
	sub_8268FED8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// stw r9,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r3,12(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 12);
	// bl 0x827941c4
	ctx.lr = 0x8268C864;
	__imp__XamVoiceSubmitPacket(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8268c88c
	if (ctx.cr0.lt) goto loc_8268C88C;
	// lwz r31,0(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 0);
loc_8268C870:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8268c780
	if (!ctx.cr6.eq) goto loc_8268C780;
	// b 0x8268c894
	goto loc_8268C894;
loc_8268C87C:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82793ca4
	ctx.lr = 0x8268C888;
	__imp__KfReleaseSpinLock(ctx, base);
	// b 0x8268c894
	goto loc_8268C894;
loc_8268C88C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r25,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r25.u32);
loc_8268C894:
	// lwz r3,8(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 8);
	// bl 0x82691860
	ctx.lr = 0x8268C89C;
	sub_82691860(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt 0x8268c8dc
	if (ctx.cr0.lt) goto loc_8268C8DC;
	// lwz r11,44(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 44);
	// mr r31,r25
	r31.u64 = r25.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8268c8dc
	if (!ctx.cr6.gt) goto loc_8268C8DC;
	// addi r30,r26,12
	r30.s64 = r26.s64 + 12;
loc_8268C8B8:
	// lwzu r3,4(r30)
	ea = 4 + r30.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	r30.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268C8CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,44(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 44);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8268c8b8
	if (ctx.cr6.lt) goto loc_8268C8B8;
loc_8268C8DC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_8268C8E0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_8269C718) {
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
	// bl 0x8269c3a0
	ctx.lr = 0x8269C734;
	sub_8269C3A0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8269c768
	if (!ctx.cr0.eq) goto loc_8269C768;
	// lis r11,-32119
	ctx.r11.s64 = -2104950784;
	// lwz r10,8868(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8868);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8269c768
	if (ctx.cr6.eq) goto loc_8269C768;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8269C764;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x8269c458
	ctx.lr = 0x8269C768;
	sub_8269C458(ctx, base);
loc_8269C768:
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

DEFINE_REX_FUNC(sub_8269E220) {
	REX_FUNC_PROLOGUE();
	// cmpwi cr6,r3,20
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 20, ctx.xer);
	// bge cr6,0x8269e23c
	if (!ctx.cr6.lt) goto loc_8269E23C;
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// rlwinm r11,r11,0,17,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// stw r11,12(r4)
	REX_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// b 0x826a96a8
	sub_826A96A8(ctx, base);
	return;
loc_8269E23C:
	// addi r3,r4,32
	ctx.r3.s64 = ctx.r4.s64 + 32;
	// b 0x827938b4
	__imp__RtlLeaveCriticalSection(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8269ECF4) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// std r29,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r29.u64);
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
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzx r4,r10,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x8269e220
	ctx.lr = 0x8269ED24;
	sub_8269E220(ctx, base);
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// lwz r27,164(r31)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 164);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r28,80(r31)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// addi r29,r10,31540
	ctx.r29.s64 = ctx.r10.s64 + 31540;
	// addi r10,r11,31544
	ctx.r10.s64 = ctx.r11.s64 + 31544;
	// lwz r1,0(r1)
	ctx.r1.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// ld r29,-16(r1)
	ctx.r29.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r28,-24(r1)
	ctx.r28.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// lwz r12,-32(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826A16A0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfd f1,16(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 16, ctx.f1.u64);
	// lfd f6,3728(r11)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r11.u32 + 3728);
	// fcmpu cr6,f1,f6
	ctx.cr6.compare(ctx.f1.f64, ctx.f6.f64);
	// bne cr6,0x826a16c0
	if (!ctx.cr6.eq) goto loc_826A16C0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f1,-3744(r11)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + -3744);
	// blr 
	return;
loc_826A16C0:
	// lhz r10,16(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 16);
	// rlwinm r11,r10,0,17,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x7FF0;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmplwi cr6,r11,32752
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32752, ctx.xer);
	// bne cr6,0x826a16f4
	if (!ctx.cr6.eq) goto loc_826A16F4;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lfd f0,16848(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 16848);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
loc_826A16E4:
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// lfd f0,26776(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 26776);
loc_826A16EC:
	// fneg f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// blr 
	return;
loc_826A16F4:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfd f0,-3744(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + -3744);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x826a1718
	if (ctx.cr6.gt) goto loc_826A1718;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bne cr6,0x826a16e4
	if (!ctx.cr6.eq) goto loc_826A16E4;
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// lfd f0,26768(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 26768);
	// b 0x826a16ec
	goto loc_826A16EC;
loc_826A1718:
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lfd f0,16840(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 16840);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x826a1750
	if (!ctx.cr6.lt) goto loc_826A1750;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lfd f0,16832(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 16832);
	// fmul f1,f1,f0
	ctx.f1.f64 = ctx.f1.f64 * ctx.f0.f64;
	// stfd f1,16(r1)
	REX_STORE_U64(ctx.r1.u32 + 16, ctx.f1.u64);
	// lhz r11,16(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 16);
	// rlwinm r10,r11,28,21,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x7FF;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addi r10,r10,-1075
	ctx.r10.s64 = ctx.r10.s64 + -1075;
	// b 0x826a1758
	goto loc_826A1758;
loc_826A1750:
	// rlwinm r11,r11,28,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFF;
	// addi r10,r11,-1022
	ctx.r10.s64 = ctx.r11.s64 + -1022;
loc_826A1758:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stfd f1,-16(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f1.u64);
	// andi. r9,r9,32783
	ctx.r9.u64 = ctx.r9.u64 & 32783;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r11,r11,16712
	ctx.r11.s64 = ctx.r11.s64 + 16712;
	// ori r9,r9,16352
	ctx.r9.u64 = ctx.r9.u64 | 16352;
	// sth r9,-16(r1)
	REX_STORE_U16(ctx.r1.u32 + -16, ctx.r9.u16);
	// lfd f13,-16(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfd f0,0(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x826a179c
	if (!ctx.cr6.gt) goto loc_826A179C;
	// lfd f0,32424(r9)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r9.u32 + 32424);
	// fadd f12,f13,f6
	ctx.f12.f64 = ctx.f13.f64 + ctx.f6.f64;
	// fsub f11,f13,f0
	ctx.f11.f64 = ctx.f13.f64 - ctx.f0.f64;
	// fmul f13,f12,f0
	ctx.f13.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fsub f0,f11,f0
	ctx.f0.f64 = ctx.f11.f64 - ctx.f0.f64;
	// b 0x826a17b0
	goto loc_826A17B0;
loc_826A179C:
	// lfd f12,32424(r9)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r9.u32 + 32424);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// fsub f0,f13,f12
	ctx.f0.f64 = ctx.f13.f64 - ctx.f12.f64;
	// fadd f13,f0,f6
	ctx.f13.f64 = ctx.f0.f64 + ctx.f6.f64;
	// fmul f13,f13,f12
	ctx.f13.f64 = ctx.f13.f64 * ctx.f12.f64;
loc_826A17B0:
	// fdiv f5,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = ctx.f0.f64 / ctx.f13.f64;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// lis r8,-32248
	ctx.r8.s64 = -2113404928;
	// lfd f12,40(r11)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r11.u32 + 40);
	// lis r7,-32248
	ctx.r7.s64 = -2113404928;
	// lfd f9,64(r11)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r11.u32 + 64);
	// lis r6,-32248
	ctx.r6.s64 = -2113404928;
	// lfd f7,8(r11)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// extsw r11,r10
	ctx.r11.s64 = ctx.r10.s32;
	// lfd f13,16824(r9)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r9.u32 + 16824);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lfd f11,16816(r8)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r8.u32 + 16816);
	// std r11,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f10,16808(r7)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r7.u32 + 16808);
	// lfd f8,16800(r6)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r6.u32 + 16800);
	// lfd f0,-16(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f4,f0
	ctx.f4.f64 = double(ctx.f0.s64);
	// fmul f3,f5,f5
	ctx.f3.f64 = ctx.f5.f64 * ctx.f5.f64;
	// lfd f0,16792(r10)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 16792);
	// fmul f0,f4,f0
	ctx.f0.f64 = ctx.f4.f64 * ctx.f0.f64;
	// fnmsub f13,f3,f13,f12
	ctx.f13.f64 = -std::fma(ctx.f3.f64, ctx.f13.f64, -ctx.f12.f64);
	// fsub f12,f3,f11
	ctx.f12.f64 = ctx.f3.f64 - ctx.f11.f64;
	// fmsub f13,f13,f3,f10
	ctx.f13.f64 = std::fma(ctx.f13.f64, ctx.f3.f64, -ctx.f10.f64);
	// fmadd f12,f12,f3,f9
	ctx.f12.f64 = std::fma(ctx.f12.f64, ctx.f3.f64, ctx.f9.f64);
	// fmul f13,f13,f3
	ctx.f13.f64 = ctx.f13.f64 * ctx.f3.f64;
	// fmsub f12,f12,f3,f8
	ctx.f12.f64 = std::fma(ctx.f12.f64, ctx.f3.f64, -ctx.f8.f64);
	// fdiv f13,f13,f12
	ctx.f13.f64 = ctx.f13.f64 / ctx.f12.f64;
	// fadd f13,f13,f6
	ctx.f13.f64 = ctx.f13.f64 + ctx.f6.f64;
	// fmsub f0,f13,f5,f0
	ctx.f0.f64 = std::fma(ctx.f13.f64, ctx.f5.f64, -ctx.f0.f64);
	// fmadd f1,f4,f7,f0
	ctx.f1.f64 = std::fma(ctx.f4.f64, ctx.f7.f64, ctx.f0.f64);
	// blr 
	return;
}

DEFINE_REX_FUNC(__restvmx_77) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(sub_826B57A8) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x826b57e4
	if (ctx.cr6.eq) goto loc_826B57E4;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x826b57d4
	if (ctx.cr6.eq) goto loc_826B57D4;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// bne cr6,0x826b57d4
	if (!ctx.cr6.eq) goto loc_826B57D4;
	// stw r5,268(r3)
	REX_STORE_U32(ctx.r3.u32 + 268, ctx.r5.u32);
	// stw r6,280(r3)
	REX_STORE_U32(ctx.r3.u32 + 280, ctx.r6.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_826B57D4:
	// stw r5,264(r11)
	REX_STORE_U32(ctx.r11.u32 + 264, ctx.r5.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r6,276(r11)
	REX_STORE_U32(ctx.r11.u32 + 276, ctx.r6.u32);
	// blr 
	return;
loc_826B57E4:
	// stw r5,272(r11)
	REX_STORE_U32(ctx.r11.u32 + 272, ctx.r5.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r6,284(r11)
	REX_STORE_U32(ctx.r11.u32 + 284, ctx.r6.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826B7130) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r11,r3,368
	ctx.r11.s64 = ctx.r3.s64 + 368;
loc_826B7134:
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
	// bne 0x826b7134
	if (!ctx.cr0.eq) goto loc_826B7134;
	// lwz r11,272(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 272);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,284(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 284);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_826BA2B8) {
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
	ctx.lr = 0x826BA2C0;
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
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x826ba2f8
	if (ctx.cr6.eq) goto loc_826BA2F8;
	// lwz r11,68(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 68);
	// addi r29,r3,68
	r29.s64 = ctx.r3.s64 + 68;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826BA2F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
loc_826BA2F8:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x826ba31c
	if (ctx.cr6.eq) goto loc_826BA31C;
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// addi r30,r31,140
	r30.s64 = r31.s64 + 140;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826BA318;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,0(r28)
	REX_STORE_U32(r28.u32 + 0, r30.u32);
loc_826BA31C:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x826ba340
	if (ctx.cr6.eq) goto loc_826BA340;
	// lwz r11,212(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 212);
	// addi r31,r31,212
	r31.s64 = r31.s64 + 212;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826BA33C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r31,0(r27)
	REX_STORE_U32(r27.u32 + 0, r31.u32);
loc_826BA340:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_826BE660) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x826c6330
	ctx.lr = 0x826BE688;
	sub_826C6330(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826be6a8
	if (ctx.cr6.lt) goto loc_826BE6A8;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x826bde28
	ctx.lr = 0x826BE6A0;
	sub_826BDE28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x826be6c8
	if (!ctx.cr6.lt) goto loc_826BE6C8;
loc_826BE6A8:
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x826c6920
	ctx.lr = 0x826BE6B0;
	sub_826C6920(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
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
loc_826BE6C8:
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
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

DEFINE_REX_FUNC(sub_826C1BC8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r11,56(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r10,52(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x826c1c0c
	if (ctx.cr6.lt) goto loc_826C1C0C;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r3,68
	ctx.r8.s64 = ctx.r3.s64 + 68;
	// stw r11,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
loc_826C1BEC:
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
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
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
	// bne 0x826c1bec
	if (!ctx.cr0.eq) goto loc_826C1BEC;
	// blr 
	return;
loc_826C1C0C:
	// addi r11,r3,68
	ctx.r11.s64 = ctx.r3.s64 + 68;
loc_826C1C10:
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
	// bne 0x826c1c10
	if (!ctx.cr0.eq) goto loc_826C1C10;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826C6CF0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm r11,r4,2,22,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x3FC;
	// lis r10,-32688
	ctx.r10.s64 = -2142240768;
	// ori r8,r10,22
	ctx.r8.u64 = ctx.r10.u64 | 22;
	// lwzx r11,r11,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// addi r9,r11,0
	ctx.r9.s64 = ctx.r11.s64 + 0;
	// addic r7,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r5,r8
	ctx.r3.u64 = ctx.r5.u64 & ctx.r8.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826C8AB0) {
	REX_FUNC_PROLOGUE();
	// b 0x826bc158
	sub_826BC158(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_826C8AC8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r7,r3,44
	ctx.r7.s64 = ctx.r3.s64 + 44;
	// li r6,40
	ctx.r6.s64 = 40;
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_826C9FE8) {
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
	ctx.lr = 0x826C9FF0;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// ld r29,0(r3)
	r29.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// clrldi r11,r4,32
	ctx.r11.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// lwz r10,204(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 204);
	// li r21,0
	r21.s64 = 0;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// stw r21,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r21.u32);
	// mr r30,r21
	r30.u64 = r21.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r23,r11,-24
	r23.s64 = ctx.r11.s64 + -24;
	// bne cr6,0x826ca0a0
	if (!ctx.cr6.eq) goto loc_826CA0A0;
	// lis r11,9356
	ctx.r11.s64 = 613154816;
	// li r3,32
	ctx.r3.s64 = 32;
	// ori r22,r11,32768
	r22.u64 = ctx.r11.u64 | 32768;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x823f02b8
	ctx.lr = 0x826CA034;
	sub_823F02B8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r3,204(r26)
	REX_STORE_U32(r26.u32 + 204, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x826ca0b0
	if (!ctx.cr6.eq) goto loc_826CA0B0;
	// li r30,5
	r30.s64 = 5;
loc_826CA048:
	// lwz r31,204(r26)
	r31.u64 = REX_LOAD_U32(r26.u32 + 204);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x826ca0a0
	if (ctx.cr6.eq) goto loc_826CA0A0;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x823f0350
	ctx.lr = 0x826CA060;
	sub_823F0350(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x823f0350
	ctx.lr = 0x826CA06C;
	sub_823F0350(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// bl 0x823f0350
	ctx.lr = 0x826CA078;
	sub_823F0350(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x823f0350
	ctx.lr = 0x826CA084;
	sub_823F0350(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// lwz r3,28(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 28);
	// bl 0x823f0350
	ctx.lr = 0x826CA090;
	sub_823F0350(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// lwz r3,204(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 204);
	// bl 0x823f0350
	ctx.lr = 0x826CA09C;
	sub_823F0350(ctx, base);
	// stw r21,204(r26)
	REX_STORE_U32(r26.u32 + 204, r21.u32);
loc_826CA0A0:
	// std r23,0(r26)
	REX_STORE_U64(r26.u32 + 0, r23.u64);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cec
	return;
loc_826CA0B0:
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r31,-4
	ctx.r11.s64 = r31.s64 + -4;
	// mr r9,r21
	ctx.r9.u64 = r21.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_826CA0C0:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x826ca0c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826CA0C0;
	// addi r30,r29,10
	r30.s64 = r29.s64 + 10;
	// cmpld cr6,r30,r23
	ctx.cr6.compare<uint64_t>(r30.u64, r23.u64, ctx.xer);
	// ble cr6,0x826ca0dc
	if (!ctx.cr6.gt) goto loc_826CA0DC;
	// li r30,6
	r30.s64 = 6;
	// b 0x826ca048
	goto loc_826CA048;
loc_826CA0DC:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,10
	ctx.r5.s64 = 10;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826b9678
	ctx.lr = 0x826CA0F0;
	sub_826B9678(ctx, base);
	// cmplwi cr6,r3,10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 10, ctx.xer);
	// beq cr6,0x826ca100
	if (ctx.cr6.eq) goto loc_826CA100;
	// li r30,3
	r30.s64 = 3;
	// b 0x826ca048
	goto loc_826CA048;
loc_826CA100:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r29,r31,12
	r29.s64 = r31.s64 + 12;
	// std r30,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, r30.u64);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lbz r10,1(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r28,r31,2
	r28.s64 = r31.s64 + 2;
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// addi r27,r31,4
	r27.s64 = r31.s64 + 4;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r25,r31,6
	r25.s64 = r31.s64 + 6;
	// sth r9,0(r31)
	REX_STORE_U16(r31.u32 + 0, ctx.r9.u16);
	// addi r24,r31,8
	r24.s64 = r31.s64 + 8;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lbz r10,1(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sth r9,2(r31)
	REX_STORE_U16(r31.u32 + 2, ctx.r9.u16);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lbz r10,1(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sth r9,4(r31)
	REX_STORE_U16(r31.u32 + 4, ctx.r9.u16);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lbz r10,1(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sth r9,6(r31)
	REX_STORE_U16(r31.u32 + 6, ctx.r9.u16);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lbz r10,1(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sth r9,8(r31)
	REX_STORE_U16(r31.u32 + 8, ctx.r9.u16);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x826c8b80
	ctx.lr = 0x826CA1D4;
	sub_826C8B80(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x826ca048
	if (!ctx.cr6.eq) goto loc_826CA048;
	// lhz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 0);
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826ca210
	if (ctx.cr6.eq) goto loc_826CA210;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
loc_826CA1FC:
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
	// bdnz 0x826ca1fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826CA1FC;
loc_826CA210:
	// addi r29,r31,16
	r29.s64 = r31.s64 + 16;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826c8b80
	ctx.lr = 0x826CA22C;
	sub_826C8B80(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x826ca048
	if (!ctx.cr6.eq) goto loc_826CA048;
	// lhz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 0);
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826ca268
	if (ctx.cr6.eq) goto loc_826CA268;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
loc_826CA254:
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
	// bdnz 0x826ca254
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826CA254;
loc_826CA268:
	// addi r29,r31,20
	r29.s64 = r31.s64 + 20;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826c8b80
	ctx.lr = 0x826CA284;
	sub_826C8B80(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x826ca048
	if (!ctx.cr6.eq) goto loc_826CA048;
	// lhz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U16(r27.u32 + 0);
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826ca2c0
	if (ctx.cr6.eq) goto loc_826CA2C0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
loc_826CA2AC:
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
	// bdnz 0x826ca2ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826CA2AC;
loc_826CA2C0:
	// addi r29,r31,24
	r29.s64 = r31.s64 + 24;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826c8b80
	ctx.lr = 0x826CA2DC;
	sub_826C8B80(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x826ca048
	if (!ctx.cr6.eq) goto loc_826CA048;
	// lhz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 0);
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826ca318
	if (ctx.cr6.eq) goto loc_826CA318;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
loc_826CA304:
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
	// bdnz 0x826ca304
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826CA304;
loc_826CA318:
	// addi r31,r31,28
	r31.s64 = r31.s64 + 28;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826c8b80
	ctx.lr = 0x826CA334;
	sub_826C8B80(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x826ca048
	if (!ctx.cr6.eq) goto loc_826CA048;
	// lhz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U16(r24.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826ca0a0
	if (ctx.cr6.eq) goto loc_826CA0A0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
loc_826CA35C:
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
	// bdnz 0x826ca35c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826CA35C;
	// std r23,0(r26)
	REX_STORE_U64(r26.u32 + 0, r23.u64);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cec
	return;
}

DEFINE_REX_FUNC(sub_826E2320) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// li r10,1
	ctx.r10.s64 = 1;
	// std r11,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lhz r11,110(r5)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r5.u32 + 110);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// slw r7,r10,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r8.u8 & 0x3F));
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// std r6,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f13
	ctx.f10.f64 = double(float(ctx.f13.f64));
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fdivs f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 / ctx.f9.f64));
	// stfsx f8,r9,r4
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r4.u32, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826E4C18) {
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
	ctx.lr = 0x826E4C20;
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r22,0(r4)
	r22.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r25,48(r4)
	r25.u64 = REX_LOAD_U32(ctx.r4.u32 + 48);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lwz r24,40(r4)
	r24.u64 = REX_LOAD_U32(ctx.r4.u32 + 40);
	// lwz r27,36(r4)
	r27.u64 = REX_LOAD_U32(ctx.r4.u32 + 36);
	// lwz r30,4(r4)
	r30.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// stw r4,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// lwz r4,32(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 32);
	// lwz r26,24(r28)
	r26.u64 = REX_LOAD_U32(r28.u32 + 24);
	// lwz r10,20(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 20);
	// lhz r9,30(r28)
	ctx.r9.u64 = REX_LOAD_U16(r28.u32 + 30);
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// stw r22,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r22.u32);
	// stw r25,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r25.u32);
	// stw r24,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, r24.u32);
	// stw r27,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r27.u32);
	// stw r30,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r30.u32);
	// stw r4,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// stw r26,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r26.u32);
	// stw r10,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// sth r9,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r9.u16);
	// ble cr6,0x826e5100
	if (!ctx.cr6.gt) goto loc_826E5100;
	// rlwinm r20,r11,1,0,30
	r20.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r6,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// addi r23,r5,-4
	r23.s64 = ctx.r5.s64 + -4;
	// mr r21,r6
	r21.u64 = ctx.r6.u64;
	// stw r20,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r20.u32);
	// stw r23,340(r1)
	REX_STORE_U32(ctx.r1.u32 + 340, r23.u32);
loc_826E4C98:
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r26,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, r26.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + r27.u64;
	// stw r7,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r6,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// stw r9,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(r30.s32, 2, ctx.xer);
	// blt cr6,0x826e4ec8
	if (ctx.cr6.lt) goto loc_826E4EC8;
loc_826E4CD0:
	// lhz r9,14(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 14);
	// lhz r8,12(r10)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 12);
	// lhz r7,14(r11)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 14);
	// extsh r6,r9
	ctx.r6.s64 = ctx.r9.s16;
	// lhz r5,12(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 12);
	// extsh r4,r8
	ctx.r4.s64 = ctx.r8.s16;
	// extsh r3,r7
	ctx.r3.s64 = ctx.r7.s16;
	// lhz r30,4(r10)
	r30.u64 = REX_LOAD_U16(ctx.r10.u32 + 4);
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// lhz r29,30(r10)
	r29.u64 = REX_LOAD_U16(ctx.r10.u32 + 30);
	// mullw r9,r6,r3
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r3.s32);
	// lhz r6,6(r10)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + 6);
	// lhz r7,10(r10)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + 10);
	// lhz r3,8(r10)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r10.u32 + 8);
	// lhz r28,28(r10)
	r28.u64 = REX_LOAD_U16(ctx.r10.u32 + 28);
	// lhz r27,2(r10)
	r27.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// lhz r26,26(r10)
	r26.u64 = REX_LOAD_U16(ctx.r10.u32 + 26);
	// lhz r25,0(r10)
	r25.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// lhz r24,24(r10)
	r24.u64 = REX_LOAD_U16(ctx.r10.u32 + 24);
	// lhz r23,22(r10)
	r23.u64 = REX_LOAD_U16(ctx.r10.u32 + 22);
	// lhz r31,10(r11)
	r31.u64 = REX_LOAD_U16(ctx.r11.u32 + 10);
	// mullw r8,r4,r5
	ctx.r8.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r5.s32);
	// lhz r5,20(r10)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r10.u32 + 20);
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lhz r4,8(r11)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + 8);
	// lhz r22,6(r11)
	r22.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// lhz r21,4(r11)
	r21.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// lhz r20,30(r11)
	r20.u64 = REX_LOAD_U16(ctx.r11.u32 + 30);
	// stw r10,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lhz r19,28(r11)
	r19.u64 = REX_LOAD_U16(ctx.r11.u32 + 28);
	// lhz r18,2(r11)
	r18.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r17,26(r11)
	r17.u64 = REX_LOAD_U16(ctx.r11.u32 + 26);
	// add r10,r9,r8
	ctx.r10.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lhz r9,20(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 20);
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// lhz r16,0(r11)
	r16.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r31,r31
	r31.s64 = r31.s16;
	// lhz r15,24(r11)
	r15.u64 = REX_LOAD_U16(ctx.r11.u32 + 24);
	// extsh r8,r4
	ctx.r8.s64 = ctx.r4.s16;
	// lhz r14,22(r11)
	r14.u64 = REX_LOAD_U16(ctx.r11.u32 + 22);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// sth r9,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r9.u16);
	// mullw r9,r7,r31
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(r31.s32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mullw r9,r3,r8
	ctx.r9.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// extsh r7,r6
	ctx.r7.s64 = ctx.r6.s16;
	// extsh r6,r22
	ctx.r6.s64 = r22.s16;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mullw r9,r7,r6
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r6.s32);
	// extsh r4,r30
	ctx.r4.s64 = r30.s16;
	// extsh r6,r29
	ctx.r6.s64 = r29.s16;
	// extsh r3,r21
	ctx.r3.s64 = r21.s16;
	// extsh r31,r20
	r31.s64 = r20.s16;
	// extsh r30,r28
	r30.s64 = r28.s16;
	// extsh r29,r19
	r29.s64 = r19.s16;
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mullw r7,r4,r3
	ctx.r7.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r3.s32);
	// mullw r10,r6,r31
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(r31.s32);
	// mullw r9,r30,r29
	ctx.r9.s64 = int64_t(r30.s32) * int64_t(r29.s32);
	// extsh r4,r27
	ctx.r4.s64 = r27.s16;
	// extsh r3,r18
	ctx.r3.s64 = r18.s16;
	// extsh r6,r26
	ctx.r6.s64 = r26.s16;
	// extsh r31,r17
	r31.s64 = r17.s16;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// mullw r7,r4,r3
	ctx.r7.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r3.s32);
	// mullw r9,r6,r31
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(r31.s32);
	// extsh r4,r25
	ctx.r4.s64 = r25.s16;
	// extsh r3,r16
	ctx.r3.s64 = r16.s16;
	// extsh r6,r24
	ctx.r6.s64 = r24.s16;
	// extsh r31,r15
	r31.s64 = r15.s16;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// mullw r7,r4,r3
	ctx.r7.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r3.s32);
	// mullw r9,r6,r31
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(r31.s32);
	// lwz r6,88(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// extsh r4,r23
	ctx.r4.s64 = r23.s16;
	// extsh r3,r14
	ctx.r3.s64 = r14.s16;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// mullw r9,r4,r3
	ctx.r9.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r3.s32);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lhz r4,82(r1)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// add r7,r8,r6
	ctx.r7.u64 = ctx.r8.u64 + ctx.r6.u64;
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// lhz r6,18(r11)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 18);
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// lhz r4,16(r11)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + 16);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// lwz r30,112(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lhz r31,18(r10)
	r31.u64 = REX_LOAD_U16(ctx.r10.u32 + 18);
	// mullw r8,r5,r3
	ctx.r8.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r3.s32);
	// lhz r29,16(r10)
	r29.u64 = REX_LOAD_U16(ctx.r10.u32 + 16);
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r5,92(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// stw r7,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// extsh r31,r31
	r31.s64 = r31.s16;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mullw r8,r31,r6
	ctx.r8.s64 = int64_t(r31.s32) * int64_t(ctx.r6.s32);
	// extsh r6,r29
	ctx.r6.s64 = r29.s16;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mullw r8,r6,r4
	ctx.r8.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r4.s32);
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r9,r5,2
	ctx.r9.s64 = ctx.r5.s64 + 2;
	// add r6,r8,r3
	ctx.r6.u64 = ctx.r8.u64 + ctx.r3.u64;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// stw r9,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r8,r30,-1
	ctx.r8.s64 = r30.s64 + -1;
	// stw r6,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x826e4cd0
	if (ctx.cr6.lt) goto loc_826E4CD0;
	// lwz r23,340(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// lwz r25,116(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r24,120(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r27,124(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r22,128(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r26,132(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r8,136(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r28,140(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r20,104(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r21,108(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
loc_826E4EC8:
	// cmpw cr6,r9,r30
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r30.s32, ctx.xer);
	// bge cr6,0x826e4fa4
	if (!ctx.cr6.lt) goto loc_826E4FA4;
	// lhz r9,14(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 14);
	// lhz r5,14(r10)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r10.u32 + 14);
	// extsh r3,r9
	ctx.r3.s64 = ctx.r9.s16;
	// lhz r9,12(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 12);
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// lhz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 12);
	// extsh r20,r9
	r20.s64 = ctx.r9.s16;
	// lhz r31,10(r11)
	r31.u64 = REX_LOAD_U16(ctx.r11.u32 + 10);
	// mullw r9,r5,r3
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r3.s32);
	// lhz r3,6(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// lhz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// lhz r19,8(r11)
	r19.u64 = REX_LOAD_U16(ctx.r11.u32 + 8);
	// lhz r18,2(r11)
	r18.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r17,0(r11)
	r17.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r11,2(r10)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// lhz r29,10(r10)
	r29.u64 = REX_LOAD_U16(ctx.r10.u32 + 10);
	// lhz r16,8(r10)
	r16.u64 = REX_LOAD_U16(ctx.r10.u32 + 8);
	// lhz r15,6(r10)
	r15.u64 = REX_LOAD_U16(ctx.r10.u32 + 6);
	// lhz r14,4(r10)
	r14.u64 = REX_LOAD_U16(ctx.r10.u32 + 4);
	// lhz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// sth r11,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// extsh r31,r31
	r31.s64 = r31.s16;
	// mullw r11,r20,r8
	ctx.r11.s64 = int64_t(r20.s32) * int64_t(ctx.r8.s32);
	// lwz r20,104(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// sth r10,84(r1)
	REX_STORE_U16(ctx.r1.u32 + 84, ctx.r10.u16);
	// extsh r8,r29
	ctx.r8.s64 = r29.s16;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mullw r10,r8,r31
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(r31.s32);
	// extsh r9,r16
	ctx.r9.s64 = r16.s16;
	// extsh r8,r19
	ctx.r8.s64 = r19.s16;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mullw r10,r9,r8
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// extsh r8,r3
	ctx.r8.s64 = ctx.r3.s16;
	// extsh r9,r15
	ctx.r9.s64 = r15.s16;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mullw r10,r9,r8
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// lhz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// extsh r9,r5
	ctx.r9.s64 = ctx.r5.s16;
	// extsh r3,r14
	ctx.r3.s64 = r14.s16;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mullw r10,r3,r9
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// extsh r5,r8
	ctx.r5.s64 = ctx.r8.s16;
	// lhz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r1.u32 + 84);
	// extsh r3,r18
	ctx.r3.s64 = r18.s16;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mullw r10,r5,r3
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r3.s32);
	// extsh r5,r8
	ctx.r5.s64 = ctx.r8.s16;
	// extsh r3,r17
	ctx.r3.s64 = r17.s16;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mullw r10,r5,r3
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r3.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r8,r11,r26
	ctx.r8.u64 = ctx.r11.u64 + r26.u64;
loc_826E4FA4:
	// add r10,r6,r7
	ctx.r10.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lwz r7,144(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r9,r11,r24
	ctx.r9.u64 = ctx.r11.u64 + r24.u64;
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 4);
	// sraw r10,r6,r7
	temp.u32 = ctx.r7.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r6.s32 < 0) & (((ctx.r6.s32 >> temp.u32) << temp.u32) != ctx.r6.s32);
	ctx.r10.s64 = ctx.r6.s32 >> temp.u32;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r29,r10,r11
	r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ble cr6,0x826e4ffc
	if (!ctx.cr6.gt) goto loc_826E4FFC;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// ble cr6,0x826e502c
	if (!ctx.cr6.gt) goto loc_826E502C;
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// mtctr r22
	ctx.ctr.u64 = r22.u64;
	// subf r8,r25,r9
	ctx.r8.u64 = ctx.r9.u64 - r25.u64;
loc_826E4FE0:
	// lhzx r10,r8,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r11.u32);
	// lhz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// sth r7,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r7.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x826e4fe0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826E4FE0;
	// b 0x826e502c
	goto loc_826E502C;
loc_826E4FFC:
	// bge cr6,0x826e502c
	if (!ctx.cr6.lt) goto loc_826E502C;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// ble cr6,0x826e502c
	if (!ctx.cr6.gt) goto loc_826E502C;
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// mtctr r22
	ctx.ctr.u64 = r22.u64;
	// subf r10,r25,r9
	ctx.r10.u64 = ctx.r9.u64 - r25.u64;
loc_826E5014:
	// lhzx r7,r10,r11
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// lhz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// subf r5,r7,r6
	ctx.r5.u64 = ctx.r6.u64 - ctx.r7.u64;
	// sth r5,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r5.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x826e5014
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826E5014;
loc_826E502C:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x826e5060
	if (!ctx.cr6.eq) goto loc_826E5060;
	// rlwinm r31,r22,1,0,30
	r31.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// add r3,r31,r27
	ctx.r3.u64 = r31.u64 + r27.u64;
	// bl 0x826a1e70
	ctx.lr = 0x826E5048;
	sub_826A1E70(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// add r3,r31,r24
	ctx.r3.u64 = r31.u64 + r24.u64;
	// bl 0x826a1e70
	ctx.lr = 0x826E5058;
	sub_826A1E70(ctx, base);
	// addi r4,r22,-1
	ctx.r4.s64 = r22.s64 + -1;
	// b 0x826e5064
	goto loc_826E5064;
loc_826E5060:
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
loc_826E5064:
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r4,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// add r11,r10,r24
	ctx.r11.u64 = ctx.r10.u64 + r24.u64;
	// sthx r29,r10,r27
	REX_STORE_U16(ctx.r10.u32 + r27.u32, r29.u16);
	// ble cr6,0x826e5098
	if (!ctx.cr6.gt) goto loc_826E5098;
	// lhz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// cmpwi cr6,r29,32767
	ctx.cr6.compare<int32_t>(r29.s32, 32767, ctx.xer);
	// sth r9,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
	// ble cr6,0x826e50c8
	if (!ctx.cr6.gt) goto loc_826E50C8;
	// li r9,32767
	ctx.r9.s64 = 32767;
	// sthx r9,r10,r27
	REX_STORE_U16(ctx.r10.u32 + r27.u32, ctx.r9.u16);
	// b 0x826e50c8
	goto loc_826E50C8;
loc_826E5098:
	// bge cr6,0x826e50c0
	if (!ctx.cr6.lt) goto loc_826E50C0;
	// lhz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// cmpwi cr6,r29,-32768
	ctx.cr6.compare<int32_t>(r29.s32, -32768, ctx.xer);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// neg r7,r8
	ctx.r7.s64 = static_cast<int64_t>(-ctx.r8.u64);
	// sth r7,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r7.u16);
	// bge cr6,0x826e50c8
	if (!ctx.cr6.lt) goto loc_826E50C8;
	// li r9,-32768
	ctx.r9.s64 = -32768;
	// sthx r9,r10,r27
	REX_STORE_U16(ctx.r10.u32 + r27.u32, ctx.r9.u16);
	// b 0x826e50c8
	goto loc_826E50C8;
loc_826E50C0:
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r10,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
loc_826E50C8:
	// lhzx r9,r20,r11
	ctx.r9.u64 = REX_LOAD_U16(r20.u32 + ctx.r11.u32);
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// srawi r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// sthx r7,r20,r11
	REX_STORE_U16(r20.u32 + ctx.r11.u32, ctx.r7.u16);
	// lhzx r6,r10,r11
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// srawi r3,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 1;
	// addic. r21,r21,-1
	ctx.xer.ca = r21.u32 > 0;
	r21.s64 = r21.s64 + -1;
	ctx.cr0.compare<int32_t>(r21.s32, 0, ctx.xer);
	// sthx r3,r10,r11
	REX_STORE_U16(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u16);
	// stwu r29,4(r23)
	ea = 4 + r23.u32;
	REX_STORE_U32(ea, r29.u32);
	r23.u32 = ea;
	// stw r21,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r21.u32);
	// stw r23,340(r1)
	REX_STORE_U32(ctx.r1.u32 + 340, r23.u32);
	// bne 0x826e4c98
	if (!ctx.cr0.eq) goto loc_826E4C98;
loc_826E5100:
	// stw r4,32(r28)
	REX_STORE_U32(r28.u32 + 32, ctx.r4.u32);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_8271A8E0) {
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
	ctx.lr = 0x8271A8E8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r9,180(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 180);
	// lwz r7,192(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 192);
	// li r11,32
	ctx.r11.s64 = 32;
	// lwz r3,200(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 200);
	// li r10,16
	ctx.r10.s64 = 16;
	// lwz r6,188(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 188);
	// lwz r8,20984(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 20984);
	// stw r9,164(r31)
	REX_STORE_U32(r31.u32 + 164, ctx.r9.u32);
	// stw r11,20624(r31)
	REX_STORE_U32(r31.u32 + 20624, ctx.r11.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r10,20628(r31)
	REX_STORE_U32(r31.u32 + 20628, ctx.r10.u32);
	// stw r7,168(r31)
	REX_STORE_U32(r31.u32 + 168, ctx.r7.u32);
	// stw r6,172(r31)
	REX_STORE_U32(r31.u32 + 172, ctx.r6.u32);
	// stw r3,176(r31)
	REX_STORE_U32(r31.u32 + 176, ctx.r3.u32);
	// beq cr6,0x8271a95c
	if (ctx.cr6.eq) goto loc_8271A95C;
	// lwz r11,156(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 156);
	// lwz r10,160(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 160);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,168(r31)
	REX_STORE_U32(r31.u32 + 168, ctx.r11.u32);
	// rlwinm r5,r10,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r10,176(r31)
	REX_STORE_U32(r31.u32 + 176, ctx.r10.u32);
	// stw r8,164(r31)
	REX_STORE_U32(r31.u32 + 164, ctx.r8.u32);
	// stw r5,172(r31)
	REX_STORE_U32(r31.u32 + 172, ctx.r5.u32);
loc_8271A95C:
	// lwz r11,164(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 164);
	// lwz r10,168(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 168);
	// lwz r8,156(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 156);
	// addi r5,r11,32
	ctx.r5.s64 = ctx.r11.s64 + 32;
	// addi r4,r10,16
	ctx.r4.s64 = ctx.r10.s64 + 16;
	// stw r5,184(r31)
	REX_STORE_U32(r31.u32 + 184, ctx.r5.u32);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// stw r4,196(r31)
	REX_STORE_U32(r31.u32 + 196, ctx.r4.u32);
	// bne cr6,0x8271a990
	if (!ctx.cr6.eq) goto loc_8271A990;
	// lwz r11,160(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 160);
	// li r8,1
	ctx.r8.s64 = 1;
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8271a994
	if (ctx.cr6.eq) goto loc_8271A994;
loc_8271A990:
	// li r8,0
	ctx.r8.s64 = 0;
loc_8271A994:
	// addi r11,r9,64
	ctx.r11.s64 = ctx.r9.s64 + 64;
	// stw r8,152(r31)
	REX_STORE_U32(r31.u32 + 152, ctx.r8.u32);
	// srawi r9,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 4;
	// lwz r4,3756(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 3756);
	// addi r10,r7,47
	ctx.r10.s64 = ctx.r7.s64 + 47;
	// lwz r5,3784(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3784);
	// srawi r7,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r6.s32 >> 4;
	// stw r9,136(r31)
	REX_STORE_U32(r31.u32 + 136, ctx.r9.u32);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// lwz r30,22112(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 22112);
	// mullw r28,r7,r9
	r28.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// stw r11,204(r31)
	REX_STORE_U32(r31.u32 + 204, ctx.r11.u32);
	// stw r7,140(r31)
	REX_STORE_U32(r31.u32 + 140, ctx.r7.u32);
	// stw r28,144(r31)
	REX_STORE_U32(r31.u32 + 144, r28.u32);
	// rlwinm r8,r8,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r10,r10,0,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// add r4,r4,r8
	ctx.r4.u64 = ctx.r4.u64 + ctx.r8.u64;
	// stw r8,220(r31)
	REX_STORE_U32(r31.u32 + 220, ctx.r8.u32);
	// addi r28,r9,-1
	r28.s64 = ctx.r9.s64 + -1;
	// stw r10,208(r31)
	REX_STORE_U32(r31.u32 + 208, ctx.r10.u32);
	// addi r29,r10,1
	r29.s64 = ctx.r10.s64 + 1;
	// stw r4,3780(r31)
	REX_STORE_U32(r31.u32 + 3780, ctx.r4.u32);
	// addi r9,r6,64
	ctx.r9.s64 = ctx.r6.s64 + 64;
	// stw r28,148(r31)
	REX_STORE_U32(r31.u32 + 148, r28.u32);
	// addi r6,r3,32
	ctx.r6.s64 = ctx.r3.s64 + 32;
	// add r8,r5,r8
	ctx.r8.u64 = ctx.r5.u64 + ctx.r8.u64;
	// stw r9,212(r31)
	REX_STORE_U32(r31.u32 + 212, ctx.r9.u32);
	// rlwinm r3,r29,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r6,216(r31)
	REX_STORE_U32(r31.u32 + 216, ctx.r6.u32);
	// rlwinm r5,r11,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r8,3796(r31)
	REX_STORE_U32(r31.u32 + 3796, ctx.r8.u32);
	// rlwinm r4,r10,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r3,224(r31)
	REX_STORE_U32(r31.u32 + 224, ctx.r3.u32);
	// stw r5,228(r31)
	REX_STORE_U32(r31.u32 + 228, ctx.r5.u32);
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(r30.s32, 1, ctx.xer);
	// stw r4,232(r31)
	REX_STORE_U32(r31.u32 + 232, ctx.r4.u32);
	// bne cr6,0x8271aa40
	if (!ctx.cr6.eq) goto loc_8271AA40;
	// lwz r8,14804(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 14804);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x8271aa40
	if (!ctx.cr6.gt) goto loc_8271AA40;
	// ld r8,3600(r31)
	ctx.r8.u64 = REX_LOAD_U64(r31.u32 + 3600);
	// cmpdi cr6,r8,1
	ctx.cr6.compare<int64_t>(ctx.r8.s64, 1, ctx.xer);
	// bgt cr6,0x8271aa60
	if (ctx.cr6.gt) goto loc_8271AA60;
loc_8271AA40:
	// rlwinm r8,r11,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r11,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r11.u32);
	// rlwinm r5,r10,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r10,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r10.u32);
	// stw r9,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r9.u32);
	// stw r6,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r6.u32);
	// stw r8,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r8.u32);
	// stw r5,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r5.u32);
loc_8271AA60:
	// lwz r11,3380(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3380);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x8271aa8c
	if (!ctx.cr6.eq) goto loc_8271AA8C;
	// cmplwi cr6,r7,4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 4, ctx.xer);
	// bge cr6,0x8271aaa4
	if (!ctx.cr6.lt) goto loc_8271AAA4;
	// li r11,2
	ctx.r11.s64 = 2;
	// subfc r10,r11,r7
	ctx.xer.ca = ctx.r7.u32 >= ctx.r11.u32;
	ctx.r10.u64 = ctx.r7.u64 - ctx.r11.u64;
	// subfe r11,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// stw r9,3380(r31)
	REX_STORE_U32(r31.u32 + 3380, ctx.r9.u32);
	// b 0x8271aaa4
	goto loc_8271AAA4;
loc_8271AA8C:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x8271aaa4
	if (!ctx.cr6.eq) goto loc_8271AAA4;
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// bne cr6,0x8271aaa4
	if (!ctx.cr6.eq) goto loc_8271AAA4;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,3380(r31)
	REX_STORE_U32(r31.u32 + 3380, ctx.r11.u32);
loc_8271AAA4:
	// li r11,3
	ctx.r11.s64 = 3;
	// li r10,10
	ctx.r10.s64 = 10;
	// li r9,64
	ctx.r9.s64 = 64;
	// stw r11,2288(r31)
	REX_STORE_U32(r31.u32 + 2288, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r10,2292(r31)
	REX_STORE_U32(r31.u32 + 2292, ctx.r10.u32);
	// stw r9,2296(r31)
	REX_STORE_U32(r31.u32 + 2296, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r8,2300(r31)
	REX_STORE_U32(r31.u32 + 2300, ctx.r8.u32);
	// bl 0x8271f6e0
	ctx.lr = 0x8271AACC;
	sub_8271F6E0(ctx, base);
	// lwz r7,188(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 188);
	// lwz r11,22204(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22204);
	// srawi r10,r7,4
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,22204(r31)
	REX_STORE_U32(r31.u32 + 22204, ctx.r10.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8271ab30
	if (!ctx.cr6.lt) goto loc_8271AB30;
	// subf r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// lwz r10,22168(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 22168);
	// rlwinm r30,r11,2,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r29,r9,2,0,29
	r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// add r3,r10,r30
	ctx.r3.u64 = ctx.r10.u64 + r30.u64;
	// bl 0x826a2e60
	ctx.lr = 0x8271AB08;
	sub_826A2E60(ctx, base);
	// lwz r11,22180(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22180);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + r30.u64;
	// bl 0x826a2e60
	ctx.lr = 0x8271AB1C;
	sub_826A2E60(ctx, base);
	// lwz r11,22196(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22196);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + r30.u64;
	// bl 0x826a2e60
	ctx.lr = 0x8271AB30;
	sub_826A2E60(ctx, base);
loc_8271AB30:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8272B568) {
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
	// ble 0x8272b5b0
	if (!ctx.cr0.gt) goto loc_8272B5B0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8272B58C:
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
	// bdnz 0x8272b58c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8272B58C;
loc_8272B5B0:
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
loc_8272B5C4:
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
	// ble cr6,0x8272b5e0
	if (!ctx.cr6.gt) goto loc_8272B5E0;
	// li r10,255
	ctx.r10.s64 = 255;
loc_8272B5E0:
	// stbx r10,r6,r11
	REX_STORE_U8(ctx.r6.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8272b5c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8272B5C4;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82731898) {
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
loc_827318A8:
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
	// bdnz 0x827318a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827318A8;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82732760) {
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
	ctx.lr = 0x82732768;
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lhz r11,74(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 74);
	// stw r8,364(r1)
	REX_STORE_U32(ctx.r1.u32 + 364, ctx.r8.u32);
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// stw r7,356(r1)
	REX_STORE_U32(ctx.r1.u32 + 356, ctx.r7.u32);
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// stw r6,348(r1)
	REX_STORE_U32(ctx.r1.u32 + 348, ctx.r6.u32);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// stw r9,372(r1)
	REX_STORE_U32(ctx.r1.u32 + 372, ctx.r9.u32);
	// lhz r8,50(r31)
	ctx.r8.u64 = REX_LOAD_U16(r31.u32 + 50);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r6,52(r31)
	ctx.r6.u64 = REX_LOAD_U16(r31.u32 + 52);
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// lhz r9,76(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 76);
	// rlwinm r24,r8,31,1,31
	r24.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r23,r6,31,1,31
	r23.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r3,324(r1)
	REX_STORE_U32(ctx.r1.u32 + 324, ctx.r3.u32);
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r28,15688(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 15688);
	// rotlwi r10,r11,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lwz r27,15692(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 15692);
	// rotlwi r7,r9,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// lwz r16,1356(r31)
	r16.u64 = REX_LOAD_U32(r31.u32 + 1356);
	// rotlwi r6,r9,3
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// lwz r29,15696(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 15696);
	// lwz r26,15700(r3)
	r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 15700);
	// rotlwi r22,r11,3
	r22.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// stw r10,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// rotlwi r14,r11,4
	r14.u64 = __builtin_rotateleft32(ctx.r11.u32, 4);
	// stw r24,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r24.u32);
	// stw r23,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r23.u32);
	// stw r8,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// stw r7,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// stw r6,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// bl 0x82731ce0
	ctx.lr = 0x827327FC;
	sub_82731CE0(ctx, base);
	// mullw r10,r24,r25
	ctx.r10.s64 = int64_t(r24.s32) * int64_t(r25.s32);
	// stw r10,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r10,r29
	ctx.r4.u64 = ctx.r10.u64 + r29.u64;
	// add r9,r11,r28
	ctx.r9.u64 = ctx.r11.u64 + r28.u64;
	// add r15,r11,r27
	r15.u64 = ctx.r11.u64 + r27.u64;
	// stw r4,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r4.u32);
	// stw r9,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// add r8,r10,r26
	ctx.r8.u64 = ctx.r10.u64 + r26.u64;
	// add r10,r22,r30
	ctx.r10.u64 = r22.u64 + r30.u64;
	// stw r8,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r8.u32);
	// lhz r11,74(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 74);
	// rotlwi r9,r11,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// rotlwi r7,r11,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// neg r6,r7
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r7.u64);
	// dcbt r6,r10
	// neg r4,r9
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// dcbt r4,r10
	// rotlwi r8,r11,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// neg r7,r8
	ctx.r7.s64 = static_cast<int64_t>(-ctx.r8.u64);
	// dcbt r7,r10
	// neg r29,r11
	r29.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// dcbt r29,r10
	// dcbt r22,r30
	// dcbt r11,r10
	// dcbt r8,r10
	// dcbt r9,r10
	// add r10,r14,r30
	ctx.r10.u64 = r14.u64 + r30.u64;
	// dcbt r6,r10
	// dcbt r4,r10
	// dcbt r7,r10
	// dcbt r29,r10
	// dcbt r14,r30
	// dcbt r11,r10
	// dcbt r8,r10
	// dcbt r9,r10
	// dcbt r0,r30
	// dcbt r11,r30
	// dcbt r8,r30
	// dcbt r9,r30
	// lwz r6,20904(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 20904);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x827328d4
	if (ctx.cr6.eq) goto loc_827328D4;
	// lwz r11,20908(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20908);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827328d4
	if (ctx.cr6.eq) goto loc_827328D4;
	// lwz r11,1372(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1372);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x827328d4
	if (!ctx.cr6.eq) goto loc_827328D4;
	// lwz r10,22196(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 22196);
	// rlwinm r11,r23,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x827328d8
	goto loc_827328D8;
loc_827328D4:
	// lwz r11,22196(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 22196);
loc_827328D8:
	// stw r11,22192(r3)
	REX_STORE_U32(ctx.r3.u32 + 22192, ctx.r11.u32);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// stw r25,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r25.u32);
	// cmplw cr6,r25,r5
	ctx.cr6.compare<uint32_t>(r25.u32, ctx.r5.u32, ctx.xer);
	// addi r11,r11,31168
	ctx.r11.s64 = ctx.r11.s64 + 31168;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bge cr6,0x8273316c
	if (!ctx.cr6.lt) goto loc_8273316C;
	// lwz r11,364(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
loc_82732900:
	// lwz r10,324(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// lwz r9,96(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,22164(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 22164);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// beq cr6,0x8273294c
	if (ctx.cr6.eq) goto loc_8273294C;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82732944
	if (!ctx.cr6.lt) goto loc_82732944;
	// lwz r11,22192(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 22192);
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82732944
	if (!ctx.cr6.eq) goto loc_82732944;
	// li r21,0
	r21.s64 = 0;
	// b 0x82732958
	goto loc_82732958;
loc_82732944:
	// li r21,1
	r21.s64 = 1;
	// b 0x82732958
	goto loc_82732958;
loc_8273294C:
	// li r10,-1
	ctx.r10.s64 = -1;
	// subfc r11,r11,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r11.u32;
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// subfze r21,r10
	temp.u8 = ~ctx.r10.u32 + ctx.xer.ca < ~ctx.r10.u32;
	r21.u64 = ~ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_82732958:
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// add r27,r30,r22
	r27.u64 = r30.u64 + r22.u64;
	// lbz r28,1244(r31)
	r28.u64 = REX_LOAD_U8(r31.u32 + 1244);
	// lhz r26,74(r31)
	r26.u64 = REX_LOAD_U16(r31.u32 + 74);
	// lwz r23,80(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r21,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r21.u32);
	// lbz r24,0(r11)
	r24.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbzu r25,1(r11)
	ea = 1 + ctx.r11.u32;
	r25.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stw r30,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r30.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r25,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 28) & 0xFFFFFFF;
	// stw r10,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827329dc
	if (ctx.cr6.eq) goto loc_827329DC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r23,-208
	ctx.r10.s64 = r23.s64 + -208;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwzx r29,r11,r10
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r11,r29,0,24,30
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFE;
	// rlwinm r6,r29,24,24,31
	ctx.r6.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 24) & 0xFF;
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + r27.u64;
	// bl 0x82743bf8
	ctx.lr = 0x827329B4;
	sub_82743BF8(ctx, base);
	// clrlwi r9,r29,31
	ctx.r9.u64 = r29.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x827329dc
	if (ctx.cr6.eq) goto loc_827329DC;
	// rlwinm r10,r29,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 16) & 0xFFFF;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// rlwinm r11,r10,0,24,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFE;
	// rlwinm r6,r10,24,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + r27.u64;
	// bl 0x82743bf8
	ctx.lr = 0x827329DC;
	sub_82743BF8(ctx, base);
loc_827329DC:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// bne cr6,0x82732a48
	if (!ctx.cr6.eq) goto loc_82732A48;
	// clrlwi r11,r25,28
	ctx.r11.u64 = r25.u32 & 0xF;
	// lbz r28,1244(r31)
	r28.u64 = REX_LOAD_U8(r31.u32 + 1244);
	// lhz r26,74(r31)
	r26.u64 = REX_LOAD_U16(r31.u32 + 74);
	// add r27,r30,r14
	r27.u64 = r30.u64 + r14.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82732a48
	if (ctx.cr6.eq) goto loc_82732A48;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r23,-208
	ctx.r10.s64 = r23.s64 + -208;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwzx r29,r11,r10
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r11,r29,0,24,30
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFE;
	// rlwinm r6,r29,24,24,31
	ctx.r6.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 24) & 0xFF;
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + r27.u64;
	// bl 0x82743bf8
	ctx.lr = 0x82732A20;
	sub_82743BF8(ctx, base);
	// clrlwi r9,r29,31
	ctx.r9.u64 = r29.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82732a48
	if (ctx.cr6.eq) goto loc_82732A48;
	// rlwinm r10,r29,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 16) & 0xFFFF;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// rlwinm r11,r10,0,24,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFE;
	// rlwinm r6,r10,24,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + r27.u64;
	// bl 0x82743bf8
	ctx.lr = 0x82732A48;
	sub_82743BF8(ctx, base);
loc_82732A48:
	// lwz r10,120(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// rlwinm r11,r24,28,28,31
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 28) & 0xF;
	// lbz r28,1244(r31)
	r28.u64 = REX_LOAD_U8(r31.u32 + 1244);
	// lhz r27,74(r31)
	r27.u64 = REX_LOAD_U16(r31.u32 + 74);
	// add r26,r30,r10
	r26.u64 = r30.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82732ab0
	if (ctx.cr6.eq) goto loc_82732AB0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r23,-208
	ctx.r10.s64 = r23.s64 + -208;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwzx r29,r11,r10
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r11,r29,0,24,30
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFE;
	// rlwinm r6,r29,24,24,31
	ctx.r6.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 24) & 0xFF;
	// add r3,r11,r26
	ctx.r3.u64 = ctx.r11.u64 + r26.u64;
	// bl 0x82743bf8
	ctx.lr = 0x82732A88;
	sub_82743BF8(ctx, base);
	// clrlwi r9,r29,31
	ctx.r9.u64 = r29.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82732ab0
	if (ctx.cr6.eq) goto loc_82732AB0;
	// rlwinm r10,r29,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 16) & 0xFFFF;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// rlwinm r11,r10,0,24,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFE;
	// rlwinm r6,r10,24,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// add r3,r11,r26
	ctx.r3.u64 = ctx.r11.u64 + r26.u64;
	// bl 0x82743bf8
	ctx.lr = 0x82732AB0;
	sub_82743BF8(ctx, base);
loc_82732AB0:
	// lwz r10,124(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// clrlwi r11,r24,28
	ctx.r11.u64 = r24.u32 & 0xF;
	// lbz r28,1244(r31)
	r28.u64 = REX_LOAD_U8(r31.u32 + 1244);
	// lhz r27,74(r31)
	r27.u64 = REX_LOAD_U16(r31.u32 + 74);
	// add r26,r30,r10
	r26.u64 = r30.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82732b18
	if (ctx.cr6.eq) goto loc_82732B18;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r23,-208
	ctx.r10.s64 = r23.s64 + -208;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwzx r29,r11,r10
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r11,r29,0,24,30
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFE;
	// rlwinm r6,r29,24,24,31
	ctx.r6.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 24) & 0xFF;
	// add r3,r11,r26
	ctx.r3.u64 = ctx.r11.u64 + r26.u64;
	// bl 0x82743bf8
	ctx.lr = 0x82732AF0;
	sub_82743BF8(ctx, base);
	// clrlwi r9,r29,31
	ctx.r9.u64 = r29.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82732b18
	if (ctx.cr6.eq) goto loc_82732B18;
	// rlwinm r10,r29,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 16) & 0xFFFF;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// rlwinm r11,r10,0,24,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFE;
	// rlwinm r6,r10,24,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// add r3,r11,r26
	ctx.r3.u64 = ctx.r11.u64 + r26.u64;
	// bl 0x82743bf8
	ctx.lr = 0x82732B18;
	sub_82743BF8(ctx, base);
loc_82732B18:
	// lwz r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x82732f70
	if (!ctx.cr6.gt) goto loc_82732F70;
	// lwz r10,120(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// addi r28,r30,16
	r28.s64 = r30.s64 + 16;
	// lwz r9,124(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// addi r20,r22,-16
	r20.s64 = r22.s64 + -16;
	// addi r19,r14,-16
	r19.s64 = r14.s64 + -16;
	// addi r18,r10,-16
	r18.s64 = ctx.r10.s64 + -16;
	// addi r17,r9,-16
	r17.s64 = ctx.r9.s64 + -16;
loc_82732B44:
	// addic. r21,r11,1
	ctx.xer.ca = ctx.r11.u32 > 4294967294;
	r21.s64 = ctx.r11.s64 + 1;
	ctx.cr0.compare<int32_t>(r21.s32, 0, ctx.xer);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lbz r23,0(r11)
	r23.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbzu r24,1(r11)
	ea = 1 + ctx.r11.u32;
	r24.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bne 0x82732be8
	if (!ctx.cr0.eq) goto loc_82732BE8;
	// lhz r10,74(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 74);
	// add r11,r28,r22
	ctx.r11.u64 = r28.u64 + r22.u64;
	// rotlwi r9,r10,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// neg r8,r10
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// dcbt r7,r11
	// neg r6,r9
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// dcbt r6,r11
	// rotlwi r5,r10,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// neg r4,r5
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r5.u64);
	// dcbt r4,r11
	// neg r3,r10
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// dcbt r3,r11
	// dcbt r0,r11
	// dcbt r10,r11
	// dcbt r5,r11
	// dcbt r9,r11
	// add r11,r28,r14
	ctx.r11.u64 = r28.u64 + r14.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// dcbt r7,r11
	// dcbt r6,r11
	// dcbt r4,r11
	// dcbt r3,r11
	// dcbt r0,r11
	// dcbt r10,r11
	// dcbt r5,r11
	// dcbt r9,r11
	// addi r11,r28,16
	ctx.r11.s64 = r28.s64 + 16;
	// dcbt r0,r11
	// dcbt r10,r11
	// dcbt r5,r11
	// dcbt r9,r11
loc_82732BE8:
	// rlwinm r11,r24,28,28,31
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 28) & 0xF;
	// lbz r26,1244(r31)
	r26.u64 = REX_LOAD_U8(r31.u32 + 1244);
	// lhz r25,74(r31)
	r25.u64 = REX_LOAD_U16(r31.u32 + 74);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82732c54
	if (ctx.cr6.eq) goto loc_82732C54;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r20,r28
	ctx.r11.u64 = r20.u64 + r28.u64;
	// addi r8,r10,-208
	ctx.r8.s64 = ctx.r10.s64 + -208;
	// addi r27,r11,16
	r27.s64 = ctx.r11.s64 + 16;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwzx r29,r9,r8
	r29.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// rlwinm r11,r29,0,24,30
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFE;
	// rlwinm r6,r29,24,24,31
	ctx.r6.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 24) & 0xFF;
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + r27.u64;
	// bl 0x82743bf8
	ctx.lr = 0x82732C2C;
	sub_82743BF8(ctx, base);
	// clrlwi r7,r29,31
	ctx.r7.u64 = r29.u32 & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82732c54
	if (ctx.cr6.eq) goto loc_82732C54;
	// rlwinm r10,r29,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 16) & 0xFFFF;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// rlwinm r11,r10,0,24,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFE;
	// rlwinm r6,r10,24,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + r27.u64;
	// bl 0x82743bf8
	ctx.lr = 0x82732C54;
	sub_82743BF8(ctx, base);
loc_82732C54:
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82732ccc
	if (!ctx.cr6.eq) goto loc_82732CCC;
	// clrlwi r11,r24,28
	ctx.r11.u64 = r24.u32 & 0xF;
	// lbz r26,1244(r31)
	r26.u64 = REX_LOAD_U8(r31.u32 + 1244);
	// lhz r25,74(r31)
	r25.u64 = REX_LOAD_U16(r31.u32 + 74);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82732ccc
	if (ctx.cr6.eq) goto loc_82732CCC;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r19,r28
	ctx.r11.u64 = r19.u64 + r28.u64;
	// addi r8,r10,-208
	ctx.r8.s64 = ctx.r10.s64 + -208;
	// addi r27,r11,16
	r27.s64 = ctx.r11.s64 + 16;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwzx r29,r9,r8
	r29.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// rlwinm r11,r29,0,24,30
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFE;
	// rlwinm r6,r29,24,24,31
	ctx.r6.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 24) & 0xFF;
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + r27.u64;
	// bl 0x82743bf8
	ctx.lr = 0x82732CA4;
	sub_82743BF8(ctx, base);
	// clrlwi r7,r29,31
	ctx.r7.u64 = r29.u32 & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82732ccc
	if (ctx.cr6.eq) goto loc_82732CCC;
	// rlwinm r10,r29,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 16) & 0xFFFF;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// rlwinm r11,r10,0,24,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFE;
	// rlwinm r6,r10,24,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + r27.u64;
	// bl 0x82743bf8
	ctx.lr = 0x82732CCC;
	sub_82743BF8(ctx, base);
loc_82732CCC:
	// rlwinm r11,r23,28,28,31
	ctx.r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 28) & 0xF;
	// lbz r26,1244(r31)
	r26.u64 = REX_LOAD_U8(r31.u32 + 1244);
	// lhz r25,74(r31)
	r25.u64 = REX_LOAD_U16(r31.u32 + 74);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82732d38
	if (ctx.cr6.eq) goto loc_82732D38;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r18,r28
	ctx.r11.u64 = r18.u64 + r28.u64;
	// addi r8,r10,-208
	ctx.r8.s64 = ctx.r10.s64 + -208;
	// addi r27,r11,16
	r27.s64 = ctx.r11.s64 + 16;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwzx r29,r9,r8
	r29.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// rlwinm r11,r29,0,24,30
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFE;
	// rlwinm r6,r29,24,24,31
	ctx.r6.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 24) & 0xFF;
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + r27.u64;
	// bl 0x82743bf8
	ctx.lr = 0x82732D10;
	sub_82743BF8(ctx, base);
	// clrlwi r7,r29,31
	ctx.r7.u64 = r29.u32 & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82732d38
	if (ctx.cr6.eq) goto loc_82732D38;
	// rlwinm r10,r29,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 16) & 0xFFFF;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// rlwinm r11,r10,0,24,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFE;
	// rlwinm r6,r10,24,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + r27.u64;
	// bl 0x82743bf8
	ctx.lr = 0x82732D38;
	sub_82743BF8(ctx, base);
loc_82732D38:
	// clrlwi r11,r23,28
	ctx.r11.u64 = r23.u32 & 0xF;
	// lbz r26,1244(r31)
	r26.u64 = REX_LOAD_U8(r31.u32 + 1244);
	// lhz r25,74(r31)
	r25.u64 = REX_LOAD_U16(r31.u32 + 74);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82732da4
	if (ctx.cr6.eq) goto loc_82732DA4;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r17,r28
	ctx.r11.u64 = r17.u64 + r28.u64;
	// addi r8,r10,-208
	ctx.r8.s64 = ctx.r10.s64 + -208;
	// addi r27,r11,16
	r27.s64 = ctx.r11.s64 + 16;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwzx r29,r9,r8
	r29.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// rlwinm r11,r29,0,24,30
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFE;
	// rlwinm r6,r29,24,24,31
	ctx.r6.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 24) & 0xFF;
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + r27.u64;
	// bl 0x82743bf8
	ctx.lr = 0x82732D7C;
	sub_82743BF8(ctx, base);
	// clrlwi r7,r29,31
	ctx.r7.u64 = r29.u32 & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82732da4
	if (ctx.cr6.eq) goto loc_82732DA4;
	// rlwinm r10,r29,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 16) & 0xFFFF;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// rlwinm r11,r10,0,24,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFE;
	// rlwinm r6,r10,24,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + r27.u64;
	// bl 0x82743bf8
	ctx.lr = 0x82732DA4;
	sub_82743BF8(ctx, base);
loc_82732DA4:
	// lbz r23,0(r15)
	r23.u64 = REX_LOAD_U8(r15.u32 + 0);
	// lbzu r24,1(r15)
	ea = 1 + r15.u32;
	r24.u64 = REX_LOAD_U8(ea);
	r15.u32 = ea;
	// lbz r26,1244(r31)
	r26.u64 = REX_LOAD_U8(r31.u32 + 1244);
	// rlwinm r11,r24,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 28) & 0xFFFFFFF;
	// lhz r25,74(r31)
	r25.u64 = REX_LOAD_U16(r31.u32 + 74);
	// addi r15,r15,1
	r15.s64 = r15.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82732e18
	if (ctx.cr6.eq) goto loc_82732E18;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r27,r28,-13
	r27.s64 = r28.s64 + -13;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// add r29,r11,r16
	r29.u64 = ctx.r11.u64 + r16.u64;
	// lbzx r10,r11,r16
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + r16.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// extsb r6,r10
	ctx.r6.s64 = ctx.r10.s8;
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + r27.u64;
	// bl 0x82744028
	ctx.lr = 0x82732DF4;
	sub_82744028(ctx, base);
	// lbz r9,1(r29)
	ctx.r9.u64 = REX_LOAD_U8(r29.u32 + 1);
	// extsb r6,r9
	ctx.r6.s64 = ctx.r9.s8;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// blt cr6,0x82732e18
	if (ctx.cr6.lt) goto loc_82732E18;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + r27.u64;
	// bl 0x82744028
	ctx.lr = 0x82732E18;
	sub_82744028(ctx, base);
loc_82732E18:
	// clrlwi r11,r24,28
	ctx.r11.u64 = r24.u32 & 0xF;
	// lbz r26,1244(r31)
	r26.u64 = REX_LOAD_U8(r31.u32 + 1244);
	// lhz r25,74(r31)
	r25.u64 = REX_LOAD_U16(r31.u32 + 74);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82732e80
	if (ctx.cr6.eq) goto loc_82732E80;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r27,r28,-5
	r27.s64 = r28.s64 + -5;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// add r29,r11,r16
	r29.u64 = ctx.r11.u64 + r16.u64;
	// lbzx r10,r11,r16
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + r16.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// extsb r6,r10
	ctx.r6.s64 = ctx.r10.s8;
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + r27.u64;
	// bl 0x82744028
	ctx.lr = 0x82732E5C;
	sub_82744028(ctx, base);
	// lbz r9,1(r29)
	ctx.r9.u64 = REX_LOAD_U8(r29.u32 + 1);
	// extsb r6,r9
	ctx.r6.s64 = ctx.r9.s8;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// blt cr6,0x82732e80
	if (ctx.cr6.lt) goto loc_82732E80;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + r27.u64;
	// bl 0x82744028
	ctx.lr = 0x82732E80;
	sub_82744028(ctx, base);
loc_82732E80:
	// rlwinm r11,r23,28,28,31
	ctx.r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 28) & 0xF;
	// lbz r26,1244(r31)
	r26.u64 = REX_LOAD_U8(r31.u32 + 1244);
	// lhz r25,74(r31)
	r25.u64 = REX_LOAD_U16(r31.u32 + 74);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82732ee8
	if (ctx.cr6.eq) goto loc_82732EE8;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r27,r28,-17
	r27.s64 = r28.s64 + -17;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// add r29,r11,r16
	r29.u64 = ctx.r11.u64 + r16.u64;
	// lbzx r10,r11,r16
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + r16.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// extsb r6,r10
	ctx.r6.s64 = ctx.r10.s8;
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + r27.u64;
	// bl 0x82744028
	ctx.lr = 0x82732EC4;
	sub_82744028(ctx, base);
	// lbz r9,1(r29)
	ctx.r9.u64 = REX_LOAD_U8(r29.u32 + 1);
	// extsb r6,r9
	ctx.r6.s64 = ctx.r9.s8;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// blt cr6,0x82732ee8
	if (ctx.cr6.lt) goto loc_82732EE8;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + r27.u64;
	// bl 0x82744028
	ctx.lr = 0x82732EE8;
	sub_82744028(ctx, base);
loc_82732EE8:
	// clrlwi r11,r23,28
	ctx.r11.u64 = r23.u32 & 0xF;
	// lbz r26,1244(r31)
	r26.u64 = REX_LOAD_U8(r31.u32 + 1244);
	// lhz r25,74(r31)
	r25.u64 = REX_LOAD_U16(r31.u32 + 74);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82732f50
	if (ctx.cr6.eq) goto loc_82732F50;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r27,r28,-9
	r27.s64 = r28.s64 + -9;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// add r29,r11,r16
	r29.u64 = ctx.r11.u64 + r16.u64;
	// lbzx r10,r11,r16
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + r16.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// extsb r6,r10
	ctx.r6.s64 = ctx.r10.s8;
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + r27.u64;
	// bl 0x82744028
	ctx.lr = 0x82732F2C;
	sub_82744028(ctx, base);
	// lbz r9,1(r29)
	ctx.r9.u64 = REX_LOAD_U8(r29.u32 + 1);
	// extsb r6,r9
	ctx.r6.s64 = ctx.r9.s8;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// blt cr6,0x82732f50
	if (ctx.cr6.lt) goto loc_82732F50;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + r27.u64;
	// bl 0x82744028
	ctx.lr = 0x82732F50;
	sub_82744028(ctx, base);
loc_82732F50:
	// lwz r10,108(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// addi r28,r28,16
	r28.s64 = r28.s64 + 16;
	// lwz r9,104(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
	// addi r8,r10,16
	ctx.r8.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r21,r9
	ctx.cr6.compare<uint32_t>(r21.u32, ctx.r9.u32, ctx.xer);
	// stw r8,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// blt cr6,0x82732b44
	if (ctx.cr6.lt) goto loc_82732B44;
loc_82732F70:
	// lhz r11,82(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 82);
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// add r30,r11,r30
	r30.u64 = ctx.r11.u64 + r30.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82733000
	if (!ctx.cr6.eq) goto loc_82733000;
	// lhz r10,74(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 74);
	// add r11,r30,r22
	ctx.r11.u64 = r30.u64 + r22.u64;
	// rotlwi r9,r10,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// neg r8,r10
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// dcbt r7,r11
	// neg r6,r9
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// dcbt r6,r11
	// rotlwi r5,r10,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// neg r4,r5
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r5.u64);
	// dcbt r4,r11
	// neg r3,r10
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// dcbt r3,r11
	// dcbt r30,r22
	// dcbt r10,r11
	// dcbt r5,r11
	// dcbt r9,r11
	// add r11,r30,r14
	ctx.r11.u64 = r30.u64 + r14.u64;
	// dcbt r7,r11
	// dcbt r6,r11
	// dcbt r4,r11
	// dcbt r3,r11
	// dcbt r30,r14
	// dcbt r10,r11
	// dcbt r5,r11
	// dcbt r9,r11
	// dcbt r0,r30
	// dcbt r10,r30
	// dcbt r5,r30
	// dcbt r9,r30
loc_82733000:
	// lbz r25,0(r15)
	r25.u64 = REX_LOAD_U8(r15.u32 + 0);
	// lbzu r11,1(r15)
	ea = 1 + r15.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	r15.u32 = ea;
	// lwz r24,108(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// lbz r27,1244(r31)
	r27.u64 = REX_LOAD_U8(r31.u32 + 1244);
	// lhz r26,74(r31)
	r26.u64 = REX_LOAD_U16(r31.u32 + 74);
	// addi r28,r24,3
	r28.s64 = r24.s64 + 3;
	// addi r15,r15,1
	r15.s64 = r15.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82733078
	if (ctx.cr6.eq) goto loc_82733078;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r11,r16
	r29.u64 = ctx.r11.u64 + r16.u64;
	// lbzx r10,r11,r16
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + r16.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// extsb r6,r10
	ctx.r6.s64 = ctx.r10.s8;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + r28.u64;
	// bl 0x82744028
	ctx.lr = 0x82733054;
	sub_82744028(ctx, base);
	// lbz r9,1(r29)
	ctx.r9.u64 = REX_LOAD_U8(r29.u32 + 1);
	// extsb r6,r9
	ctx.r6.s64 = ctx.r9.s8;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// blt cr6,0x82733078
	if (ctx.cr6.lt) goto loc_82733078;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + r28.u64;
	// bl 0x82744028
	ctx.lr = 0x82733078;
	sub_82744028(ctx, base);
loc_82733078:
	// rlwinm r11,r25,28,28,31
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 28) & 0xF;
	// lbz r28,1244(r31)
	r28.u64 = REX_LOAD_U8(r31.u32 + 1244);
	// lhz r27,74(r31)
	r27.u64 = REX_LOAD_U16(r31.u32 + 74);
	// addi r26,r24,-1
	r26.s64 = r24.s64 + -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827330e0
	if (ctx.cr6.eq) goto loc_827330E0;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r11,r16
	r29.u64 = ctx.r11.u64 + r16.u64;
	// lbzx r10,r11,r16
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + r16.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// extsb r6,r10
	ctx.r6.s64 = ctx.r10.s8;
	// add r3,r11,r26
	ctx.r3.u64 = ctx.r11.u64 + r26.u64;
	// bl 0x82744028
	ctx.lr = 0x827330BC;
	sub_82744028(ctx, base);
	// lbz r9,1(r29)
	ctx.r9.u64 = REX_LOAD_U8(r29.u32 + 1);
	// extsb r6,r9
	ctx.r6.s64 = ctx.r9.s8;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// blt cr6,0x827330e0
	if (ctx.cr6.lt) goto loc_827330E0;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// add r3,r11,r26
	ctx.r3.u64 = ctx.r11.u64 + r26.u64;
	// bl 0x82744028
	ctx.lr = 0x827330E0;
	sub_82744028(ctx, base);
loc_827330E0:
	// clrlwi r11,r25,28
	ctx.r11.u64 = r25.u32 & 0xF;
	// lbz r28,1244(r31)
	r28.u64 = REX_LOAD_U8(r31.u32 + 1244);
	// lhz r27,74(r31)
	r27.u64 = REX_LOAD_U16(r31.u32 + 74);
	// addi r26,r24,7
	r26.s64 = r24.s64 + 7;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82733148
	if (ctx.cr6.eq) goto loc_82733148;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r11,r16
	r29.u64 = ctx.r11.u64 + r16.u64;
	// lbzx r10,r11,r16
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + r16.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// extsb r6,r10
	ctx.r6.s64 = ctx.r10.s8;
	// add r3,r11,r26
	ctx.r3.u64 = ctx.r11.u64 + r26.u64;
	// bl 0x82744028
	ctx.lr = 0x82733124;
	sub_82744028(ctx, base);
	// lbz r9,1(r29)
	ctx.r9.u64 = REX_LOAD_U8(r29.u32 + 1);
	// extsb r6,r9
	ctx.r6.s64 = ctx.r9.s8;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// blt cr6,0x82733148
	if (ctx.cr6.lt) goto loc_82733148;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// add r3,r11,r26
	ctx.r3.u64 = ctx.r11.u64 + r26.u64;
	// bl 0x82744028
	ctx.lr = 0x82733148;
	sub_82744028(ctx, base);
loc_82733148:
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r9,372(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// stw r8,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// blt cr6,0x82732900
	if (ctx.cr6.lt) goto loc_82732900;
loc_8273316C:
	// lhz r10,76(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 76);
	// lwz r8,348(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// lwz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rotlwi r9,r10,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// rotlwi r6,r10,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// add r11,r7,r8
	ctx.r11.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// neg r5,r6
	ctx.r5.s64 = static_cast<int64_t>(-ctx.r6.u64);
	// dcbt r5,r11
	// neg r4,r9
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// dcbt r4,r11
	// rotlwi r3,r10,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// neg r6,r3
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r3.u64);
	// dcbt r6,r11
	// neg r5,r10
	ctx.r5.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// dcbt r5,r11
	// dcbt r7,r8
	// dcbt r10,r11
	// dcbt r3,r11
	// dcbt r9,r11
	// dcbt r0,r8
	// dcbt r10,r8
	// dcbt r3,r8
	// dcbt r9,r8
	// mr r18,r8
	r18.u64 = ctx.r8.u64;
	// lwz r23,364(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// lwz r4,372(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// cmplw cr6,r23,r4
	ctx.cr6.compare<uint32_t>(r23.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x827334e0
	if (!ctx.cr6.lt) goto loc_827334E0;
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// rotlwi r10,r23,0
	ctx.r10.u64 = __builtin_rotateleft32(r23.u32, 0);
	// lwz r9,128(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// li r14,-1
	r14.s64 = -1;
	// lwz r8,132(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// addi r20,r11,-1
	r20.s64 = ctx.r11.s64 + -1;
	// lwz r15,104(r1)
	r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// rlwinm r21,r10,2,0,29
	r21.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r16,116(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// addi r26,r9,-1
	r26.s64 = ctx.r9.s64 + -1;
	// lwz r22,80(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r24,r8,-1
	r24.s64 = ctx.r8.s64 + -1;
	// rotlwi r17,r7,0
	r17.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
loc_82733214:
	// lwz r11,324(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// lwz r10,22164(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 22164);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82733250
	if (ctx.cr6.eq) goto loc_82733250;
	// cmplw cr6,r23,r20
	ctx.cr6.compare<uint32_t>(r23.u32, r20.u32, ctx.xer);
	// bge cr6,0x82733248
	if (!ctx.cr6.lt) goto loc_82733248;
	// lwz r11,22192(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 22192);
	// add r11,r11,r21
	ctx.r11.u64 = ctx.r11.u64 + r21.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82733248
	if (!ctx.cr6.eq) goto loc_82733248;
	// li r25,0
	r25.s64 = 0;
	// b 0x82733258
	goto loc_82733258;
loc_82733248:
	// li r25,1
	r25.s64 = 1;
	// b 0x82733258
	goto loc_82733258;
loc_82733250:
	// subfc r11,r20,r23
	ctx.xer.ca = r23.u32 >= r20.u32;
	ctx.r11.u64 = r23.u64 - r20.u64;
	// subfze r25,r14
	temp.u8 = ~r14.u32 + ctx.xer.ca < ~r14.u32;
	r25.u64 = ~r14.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_82733258:
	// lbz r30,1(r24)
	r30.u64 = REX_LOAD_U8(r24.u32 + 1);
	// mr r28,r18
	r28.u64 = r18.u64;
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// bne cr6,0x82733298
	if (!ctx.cr6.eq) goto loc_82733298;
	// rlwinm r11,r30,30,30,31
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 30) & 0x3;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82733298
	if (ctx.cr6.eq) goto loc_82733298;
	// lbzx r10,r11,r22
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + r22.u32);
	// lbz r5,1244(r31)
	ctx.r5.u64 = REX_LOAD_U8(r31.u32 + 1244);
	// rlwinm r11,r10,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// lhz r4,76(r31)
	ctx.r4.u64 = REX_LOAD_U16(r31.u32 + 76);
	// clrlwi r6,r10,28
	ctx.r6.u64 = ctx.r10.u32 & 0xF;
	// add r11,r11,r18
	ctx.r11.u64 = ctx.r11.u64 + r18.u64;
	// add r3,r11,r17
	ctx.r3.u64 = ctx.r11.u64 + r17.u64;
	// bl 0x82743bf8
	ctx.lr = 0x82733298;
	sub_82743BF8(ctx, base);
loc_82733298:
	// rlwinm r11,r30,26,30,31
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 26) & 0x3;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827332c4
	if (ctx.cr6.eq) goto loc_827332C4;
	// lbzx r10,r11,r22
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + r22.u32);
	// lbz r5,1244(r31)
	ctx.r5.u64 = REX_LOAD_U8(r31.u32 + 1244);
	// rlwinm r11,r10,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// lhz r4,76(r31)
	ctx.r4.u64 = REX_LOAD_U16(r31.u32 + 76);
	// clrlwi r6,r10,28
	ctx.r6.u64 = ctx.r10.u32 & 0xF;
	// add r11,r11,r18
	ctx.r11.u64 = ctx.r11.u64 + r18.u64;
	// add r3,r11,r16
	ctx.r3.u64 = ctx.r11.u64 + r16.u64;
	// bl 0x82743bf8
	ctx.lr = 0x827332C4;
	sub_82743BF8(ctx, base);
loc_827332C4:
	// addi r19,r18,8
	r19.s64 = r18.s64 + 8;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r15,1
	ctx.cr6.compare<uint32_t>(r15.u32, 1, ctx.xer);
	// ble cr6,0x82733420
	if (!ctx.cr6.gt) goto loc_82733420;
	// addi r29,r19,8
	r29.s64 = r19.s64 + 8;
loc_827332D8:
	// lbzu r30,1(r24)
	ea = 1 + r24.u32;
	r30.u64 = REX_LOAD_U8(ea);
	r24.u32 = ea;
	// addic. r27,r11,1
	ctx.xer.ca = ctx.r11.u32 > 4294967294;
	r27.s64 = ctx.r11.s64 + 1;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// bne 0x82733340
	if (!ctx.cr0.eq) goto loc_82733340;
	// lhz r10,76(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 76);
	// add r11,r19,r17
	ctx.r11.u64 = r19.u64 + r17.u64;
	// rotlwi r9,r10,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// neg r8,r10
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// dcbt r7,r11
	// neg r6,r9
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// dcbt r6,r11
	// rotlwi r5,r10,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// neg r4,r5
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r5.u64);
	// dcbt r4,r11
	// neg r3,r10
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// dcbt r3,r11
	// dcbt r0,r11
	// dcbt r10,r11
	// dcbt r5,r11
	// dcbt r9,r11
	// dcbt r0,r29
	// dcbt r10,r29
	// dcbt r5,r29
	// dcbt r9,r29
loc_82733340:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// bne cr6,0x82733374
	if (!ctx.cr6.eq) goto loc_82733374;
	// rlwinm r11,r30,30,30,31
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 30) & 0x3;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82733374
	if (ctx.cr6.eq) goto loc_82733374;
	// lbzx r10,r11,r22
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + r22.u32);
	// lbz r5,1244(r31)
	ctx.r5.u64 = REX_LOAD_U8(r31.u32 + 1244);
	// rlwinm r11,r10,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// lhz r4,76(r31)
	ctx.r4.u64 = REX_LOAD_U16(r31.u32 + 76);
	// clrlwi r6,r10,28
	ctx.r6.u64 = ctx.r10.u32 & 0xF;
	// add r11,r11,r19
	ctx.r11.u64 = ctx.r11.u64 + r19.u64;
	// add r3,r11,r17
	ctx.r3.u64 = ctx.r11.u64 + r17.u64;
	// bl 0x82743bf8
	ctx.lr = 0x82733374;
	sub_82743BF8(ctx, base);
loc_82733374:
	// rlwinm r11,r30,26,30,31
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 26) & 0x3;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827333a0
	if (ctx.cr6.eq) goto loc_827333A0;
	// lbzx r10,r11,r22
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + r22.u32);
	// lbz r5,1244(r31)
	ctx.r5.u64 = REX_LOAD_U8(r31.u32 + 1244);
	// rlwinm r11,r10,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// lhz r4,76(r31)
	ctx.r4.u64 = REX_LOAD_U16(r31.u32 + 76);
	// clrlwi r6,r10,28
	ctx.r6.u64 = ctx.r10.u32 & 0xF;
	// add r11,r11,r19
	ctx.r11.u64 = ctx.r11.u64 + r19.u64;
	// add r3,r11,r16
	ctx.r3.u64 = ctx.r11.u64 + r16.u64;
	// bl 0x82743bf8
	ctx.lr = 0x827333A0;
	sub_82743BF8(ctx, base);
loc_827333A0:
	// lbz r30,1(r26)
	r30.u64 = REX_LOAD_U8(r26.u32 + 1);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// lhz r4,76(r31)
	ctx.r4.u64 = REX_LOAD_U16(r31.u32 + 76);
	// rlwinm r11,r30,30,30,31
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 30) & 0x3;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827333d8
	if (ctx.cr6.eq) goto loc_827333D8;
	// lbzx r11,r11,r22
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + r22.u32);
	// lbz r5,1244(r31)
	ctx.r5.u64 = REX_LOAD_U8(r31.u32 + 1244);
	// rlwinm r10,r11,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// clrlwi r6,r11,28
	ctx.r6.u64 = ctx.r11.u32 & 0xF;
	// mullw r11,r10,r4
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// addi r3,r11,3
	ctx.r3.s64 = ctx.r11.s64 + 3;
	// bl 0x82744028
	ctx.lr = 0x827333D8;
	sub_82744028(ctx, base);
loc_827333D8:
	// rlwinm r11,r30,26,30,31
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 26) & 0x3;
	// lhz r4,76(r31)
	ctx.r4.u64 = REX_LOAD_U16(r31.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82733408
	if (ctx.cr6.eq) goto loc_82733408;
	// lbzx r11,r11,r22
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + r22.u32);
	// lbz r5,1244(r31)
	ctx.r5.u64 = REX_LOAD_U8(r31.u32 + 1244);
	// rlwinm r10,r11,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// clrlwi r6,r11,28
	ctx.r6.u64 = ctx.r11.u32 & 0xF;
	// mullw r11,r10,r4
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// bl 0x82744028
	ctx.lr = 0x82733408;
	sub_82744028(ctx, base);
loc_82733408:
	// addi r19,r19,8
	r19.s64 = r19.s64 + 8;
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// cmplw cr6,r27,r15
	ctx.cr6.compare<uint32_t>(r27.u32, r15.u32, ctx.xer);
	// blt cr6,0x827332d8
	if (ctx.cr6.lt) goto loc_827332D8;
loc_82733420:
	// lhz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 84);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// add r18,r11,r18
	r18.u64 = ctx.r11.u64 + r18.u64;
	// bne cr6,0x82733488
	if (!ctx.cr6.eq) goto loc_82733488;
	// lhz r10,76(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 76);
	// add r11,r18,r17
	ctx.r11.u64 = r18.u64 + r17.u64;
	// rotlwi r9,r10,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// neg r8,r10
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// dcbt r7,r11
	// neg r6,r9
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// dcbt r6,r11
	// rotlwi r5,r10,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// neg r4,r5
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r5.u64);
	// dcbt r4,r11
	// neg r3,r10
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// dcbt r3,r11
	// dcbt r18,r17
	// dcbt r10,r11
	// dcbt r5,r11
	// dcbt r9,r11
	// dcbt r0,r18
	// dcbt r10,r18
	// dcbt r5,r18
	// dcbt r9,r18
loc_82733488:
	// lbzu r11,1(r26)
	ea = 1 + r26.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	r26.u32 = ea;
	// lhz r4,76(r31)
	ctx.r4.u64 = REX_LOAD_U16(r31.u32 + 76);
	// rlwinm r11,r11,26,6,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827334bc
	if (ctx.cr6.eq) goto loc_827334BC;
	// lbzx r11,r11,r22
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + r22.u32);
	// lbz r5,1244(r31)
	ctx.r5.u64 = REX_LOAD_U8(r31.u32 + 1244);
	// rlwinm r10,r11,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// clrlwi r6,r11,28
	ctx.r6.u64 = ctx.r11.u32 & 0xF;
	// mullw r11,r10,r4
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// bl 0x82744028
	ctx.lr = 0x827334BC;
	sub_82744028(ctx, base);
loc_827334BC:
	// lwz r11,372(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// addi r21,r21,4
	r21.s64 = r21.s64 + 4;
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(r23.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82733214
	if (ctx.cr6.lt) goto loc_82733214;
	// lwz r8,348(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// lwz r23,364(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// lwz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x827334e4
	goto loc_827334E4;
loc_827334E0:
	// lwz r19,136(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
loc_827334E4:
	// lhz r10,76(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 76);
	// lwz r26,356(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// rotlwi r9,r10,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// rotlwi r6,r10,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// add r11,r7,r26
	ctx.r11.u64 = ctx.r7.u64 + r26.u64;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// neg r5,r6
	ctx.r5.s64 = static_cast<int64_t>(-ctx.r6.u64);
	// dcbt r5,r11
	// neg r4,r9
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// dcbt r4,r11
	// rotlwi r3,r10,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// neg r6,r3
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r3.u64);
	// dcbt r6,r11
	// neg r5,r10
	ctx.r5.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// dcbt r5,r11
	// dcbt r7,r26
	// dcbt r10,r11
	// dcbt r3,r11
	// dcbt r9,r11
	// dcbt r0,r8
	// dcbt r10,r8
	// dcbt r3,r8
	// dcbt r9,r8
	// mr r22,r23
	r22.u64 = r23.u64;
	// lwz r8,324(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// lwz r9,136(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r4,372(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// cmplw cr6,r23,r4
	ctx.cr6.compare<uint32_t>(r23.u32, ctx.r4.u32, ctx.xer);
	// lwz r10,15696(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 15696);
	// lwz r11,15700(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 15700);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bge cr6,0x8273385c
	if (!ctx.cr6.lt) goto loc_8273385C;
	// lwz r9,100(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm r21,r23,2,0,29
	r21.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r25,r11,-1
	r25.s64 = ctx.r11.s64 + -1;
	// addi r20,r9,-1
	r20.s64 = ctx.r9.s64 + -1;
	// addi r23,r10,-1
	r23.s64 = ctx.r10.s64 + -1;
	// b 0x82733584
	goto loc_82733584;
loc_82733580:
	// lwz r8,324(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
loc_82733584:
	// lwz r11,22164(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 22164);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827335bc
	if (ctx.cr6.eq) goto loc_827335BC;
	// cmplw cr6,r22,r20
	ctx.cr6.compare<uint32_t>(r22.u32, r20.u32, ctx.xer);
	// bge cr6,0x827335b4
	if (!ctx.cr6.lt) goto loc_827335B4;
	// lwz r11,22192(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 22192);
	// add r11,r11,r21
	ctx.r11.u64 = ctx.r11.u64 + r21.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x827335b4
	if (!ctx.cr6.eq) goto loc_827335B4;
	// li r24,0
	r24.s64 = 0;
	// b 0x827335c8
	goto loc_827335C8;
loc_827335B4:
	// li r24,1
	r24.s64 = 1;
	// b 0x827335c8
	goto loc_827335C8;
loc_827335BC:
	// subfc r11,r20,r22
	ctx.xer.ca = r22.u32 >= r20.u32;
	ctx.r11.u64 = r22.u64 - r20.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
	// subfze r24,r10
	temp.u8 = ~ctx.r10.u32 + ctx.xer.ca < ~ctx.r10.u32;
	r24.u64 = ~ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_827335C8:
	// lbz r30,1(r23)
	r30.u64 = REX_LOAD_U8(r23.u32 + 1);
	// mr r28,r26
	r28.u64 = r26.u64;
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// bne cr6,0x82733614
	if (!ctx.cr6.eq) goto loc_82733614;
	// clrlwi r11,r30,30
	ctx.r11.u64 = r30.u32 & 0x3;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82733614
	if (ctx.cr6.eq) goto loc_82733614;
	// lwz r17,80(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r16,84(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lbz r5,1244(r31)
	ctx.r5.u64 = REX_LOAD_U8(r31.u32 + 1244);
	// lhz r4,76(r31)
	ctx.r4.u64 = REX_LOAD_U16(r31.u32 + 76);
	// lbzx r10,r11,r17
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + r17.u32);
	// rlwinm r11,r10,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// clrlwi r6,r10,28
	ctx.r6.u64 = ctx.r10.u32 & 0xF;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + r26.u64;
	// add r3,r11,r16
	ctx.r3.u64 = ctx.r11.u64 + r16.u64;
	// bl 0x82743bf8
	ctx.lr = 0x82733610;
	sub_82743BF8(ctx, base);
	// b 0x8273361c
	goto loc_8273361C;
loc_82733614:
	// lwz r16,84(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r17,80(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8273361C:
	// rlwinm r11,r30,28,30,31
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 28) & 0x3;
	// lwz r15,116(r1)
	r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8273364c
	if (ctx.cr6.eq) goto loc_8273364C;
	// lbzx r10,r11,r17
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + r17.u32);
	// lbz r5,1244(r31)
	ctx.r5.u64 = REX_LOAD_U8(r31.u32 + 1244);
	// rlwinm r11,r10,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// lhz r4,76(r31)
	ctx.r4.u64 = REX_LOAD_U16(r31.u32 + 76);
	// clrlwi r6,r10,28
	ctx.r6.u64 = ctx.r10.u32 & 0xF;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + r26.u64;
	// add r3,r11,r15
	ctx.r3.u64 = ctx.r11.u64 + r15.u64;
	// bl 0x82743bf8
	ctx.lr = 0x8273364C;
	sub_82743BF8(ctx, base);
loc_8273364C:
	// lwz r14,104(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r14,1
	ctx.cr6.compare<uint32_t>(r14.u32, 1, ctx.xer);
	// ble cr6,0x827337ac
	if (!ctx.cr6.gt) goto loc_827337AC;
	// addi r29,r26,8
	r29.s64 = r26.s64 + 8;
loc_82733660:
	// lbzu r30,1(r23)
	ea = 1 + r23.u32;
	r30.u64 = REX_LOAD_U8(ea);
	r23.u32 = ea;
	// addic. r27,r11,1
	ctx.xer.ca = ctx.r11.u32 > 4294967294;
	r27.s64 = ctx.r11.s64 + 1;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// bne 0x827336cc
	if (!ctx.cr0.eq) goto loc_827336CC;
	// lhz r10,76(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 76);
	// add r11,r29,r16
	ctx.r11.u64 = r29.u64 + r16.u64;
	// rotlwi r9,r10,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// neg r8,r10
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// dcbt r7,r11
	// neg r6,r9
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// dcbt r6,r11
	// rotlwi r5,r10,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// neg r4,r5
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r5.u64);
	// dcbt r4,r11
	// neg r3,r10
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// dcbt r3,r11
	// dcbt r0,r11
	// dcbt r10,r11
	// dcbt r5,r11
	// dcbt r9,r11
	// addi r11,r19,8
	ctx.r11.s64 = r19.s64 + 8;
	// dcbt r0,r11
	// dcbt r10,r11
	// dcbt r5,r11
	// dcbt r9,r11
loc_827336CC:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// bne cr6,0x82733700
	if (!ctx.cr6.eq) goto loc_82733700;
	// clrlwi r11,r30,30
	ctx.r11.u64 = r30.u32 & 0x3;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82733700
	if (ctx.cr6.eq) goto loc_82733700;
	// lbzx r10,r11,r17
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + r17.u32);
	// lbz r5,1244(r31)
	ctx.r5.u64 = REX_LOAD_U8(r31.u32 + 1244);
	// rlwinm r11,r10,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// lhz r4,76(r31)
	ctx.r4.u64 = REX_LOAD_U16(r31.u32 + 76);
	// clrlwi r6,r10,28
	ctx.r6.u64 = ctx.r10.u32 & 0xF;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// add r3,r11,r16
	ctx.r3.u64 = ctx.r11.u64 + r16.u64;
	// bl 0x82743bf8
	ctx.lr = 0x82733700;
	sub_82743BF8(ctx, base);
loc_82733700:
	// rlwinm r11,r30,28,30,31
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 28) & 0x3;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8273372c
	if (ctx.cr6.eq) goto loc_8273372C;
	// lbzx r10,r11,r17
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + r17.u32);
	// lbz r5,1244(r31)
	ctx.r5.u64 = REX_LOAD_U8(r31.u32 + 1244);
	// rlwinm r11,r10,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// lhz r4,76(r31)
	ctx.r4.u64 = REX_LOAD_U16(r31.u32 + 76);
	// clrlwi r6,r10,28
	ctx.r6.u64 = ctx.r10.u32 & 0xF;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// add r3,r11,r15
	ctx.r3.u64 = ctx.r11.u64 + r15.u64;
	// bl 0x82743bf8
	ctx.lr = 0x8273372C;
	sub_82743BF8(ctx, base);
loc_8273372C:
	// lbz r10,1(r25)
	ctx.r10.u64 = REX_LOAD_U8(r25.u32 + 1);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// lhz r4,76(r31)
	ctx.r4.u64 = REX_LOAD_U16(r31.u32 + 76);
	// clrlwi r11,r10,30
	ctx.r11.u64 = ctx.r10.u32 & 0x3;
	// mr r30,r10
	r30.u64 = ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82733768
	if (ctx.cr6.eq) goto loc_82733768;
	// lbzx r11,r11,r17
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + r17.u32);
	// lbz r5,1244(r31)
	ctx.r5.u64 = REX_LOAD_U8(r31.u32 + 1244);
	// rlwinm r10,r11,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// clrlwi r6,r11,28
	ctx.r6.u64 = ctx.r11.u32 & 0xF;
	// mullw r11,r10,r4
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// addi r3,r11,3
	ctx.r3.s64 = ctx.r11.s64 + 3;
	// bl 0x82744028
	ctx.lr = 0x82733768;
	sub_82744028(ctx, base);
loc_82733768:
	// rlwinm r11,r30,28,30,31
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 28) & 0x3;
	// lhz r4,76(r31)
	ctx.r4.u64 = REX_LOAD_U16(r31.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82733798
	if (ctx.cr6.eq) goto loc_82733798;
	// lbzx r11,r11,r17
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + r17.u32);
	// lbz r5,1244(r31)
	ctx.r5.u64 = REX_LOAD_U8(r31.u32 + 1244);
	// rlwinm r10,r11,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// clrlwi r6,r11,28
	ctx.r6.u64 = ctx.r11.u32 & 0xF;
	// mullw r11,r10,r4
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// bl 0x82744028
	ctx.lr = 0x82733798;
	sub_82744028(ctx, base);
loc_82733798:
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// cmplw cr6,r27,r14
	ctx.cr6.compare<uint32_t>(r27.u32, r14.u32, ctx.xer);
	// blt cr6,0x82733660
	if (ctx.cr6.lt) goto loc_82733660;
loc_827337AC:
	// lhz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 84);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// add r26,r11,r26
	r26.u64 = ctx.r11.u64 + r26.u64;
	// bne cr6,0x82733814
	if (!ctx.cr6.eq) goto loc_82733814;
	// lhz r10,76(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 76);
	// add r11,r26,r16
	ctx.r11.u64 = r26.u64 + r16.u64;
	// rotlwi r9,r10,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// neg r8,r10
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// dcbt r7,r11
	// neg r6,r9
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// dcbt r6,r11
	// rotlwi r5,r10,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// neg r4,r5
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r5.u64);
	// dcbt r4,r11
	// neg r3,r10
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// dcbt r3,r11
	// dcbt r26,r16
	// dcbt r10,r11
	// dcbt r5,r11
	// dcbt r9,r11
	// dcbt r0,r18
	// dcbt r10,r18
	// dcbt r5,r18
	// dcbt r9,r18
loc_82733814:
	// lbzu r11,1(r25)
	ea = 1 + r25.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	r25.u32 = ea;
	// lhz r4,76(r31)
	ctx.r4.u64 = REX_LOAD_U16(r31.u32 + 76);
	// rlwinm r11,r11,28,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x3;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82733848
	if (ctx.cr6.eq) goto loc_82733848;
	// lbzx r11,r11,r17
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + r17.u32);
	// lbz r5,1244(r31)
	ctx.r5.u64 = REX_LOAD_U8(r31.u32 + 1244);
	// rlwinm r10,r11,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// clrlwi r6,r11,28
	ctx.r6.u64 = ctx.r11.u32 & 0xF;
	// mullw r11,r10,r4
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// bl 0x82744028
	ctx.lr = 0x82733848;
	sub_82744028(ctx, base);
loc_82733848:
	// lwz r11,372(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// addi r21,r21,4
	r21.s64 = r21.s64 + 4;
	// cmplw cr6,r22,r11
	ctx.cr6.compare<uint32_t>(r22.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82733580
	if (ctx.cr6.lt) goto loc_82733580;
loc_8273385C:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_82793528) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-10823
	ctx.r3.s64 = ctx.r11.s64 + -10823;
	// b 0x822f7050
	sub_822F7050(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82793668) {
	REX_FUNC_PROLOGUE();
	// .long 0x20003cd
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82793758) {
	REX_FUNC_PROLOGUE();
	// .long 0x2000227
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82793888) {
	REX_FUNC_PROLOGUE();
	// .long 0x2000280
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_827939B8) {
	REX_FUNC_PROLOGUE();
	// .long 0x20100fc
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82793B28) {
	REX_FUNC_PROLOGUE();
	// .long 0x2010028
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82793CC8) {
	REX_FUNC_PROLOGUE();
	// .long 0x20101bd
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82793E88) {
	REX_FUNC_PROLOGUE();
	// .long 0x20101b1
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82794078) {
	REX_FUNC_PROLOGUE();
	// .long 0x2000004
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82794288) {
	REX_FUNC_PROLOGUE();
	// .long 0x201000b
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_827997C8) {
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
	// lwz r11,2952(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 2952);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r10,2112(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 2112);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r8,r11,732
	ctx.r8.s64 = ctx.r11.s64 + 732;
	// lwz r4,248(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 248);
	// addi r7,r11,735
	ctx.r7.s64 = ctx.r11.s64 + 735;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r10,266
	ctx.r10.s64 = ctx.r10.s64 + 266;
	// add r8,r11,r3
	ctx.r8.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwzx r7,r6,r3
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r3.u32);
	// rlwinm r6,r10,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r7,2904(r3)
	REX_STORE_U32(ctx.r3.u32 + 2904, ctx.r7.u32);
	// lwzx r5,r5,r3
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r3.u32);
	// stw r5,2916(r3)
	REX_STORE_U32(ctx.r3.u32 + 2916, ctx.r5.u32);
	// lwz r11,2124(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 2124);
	// stw r11,2116(r3)
	REX_STORE_U32(ctx.r3.u32 + 2116, ctx.r11.u32);
	// lwzx r10,r6,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r3.u32);
	// stw r10,2120(r3)
	REX_STORE_U32(ctx.r3.u32 + 2120, ctx.r10.u32);
	// stw r9,456(r3)
	REX_STORE_U32(ctx.r3.u32 + 456, ctx.r9.u32);
	// bl 0x8274e3f0
	ctx.lr = 0x8279983C;
	sub_8274E3F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827407a8
	ctx.lr = 0x82799844;
	sub_827407A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82735080
	ctx.lr = 0x82799850;
	sub_82735080(ctx, base);
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

DEFINE_REX_FUNC(sub_827AF130) {
	REX_FUNC_PROLOGUE();
	PPCVRegister v14{};
	PPCVRegister v20{};
	PPCVRegister v21{};
	PPCVRegister v22{};
	PPCVRegister v23{};
	PPCVRegister v26{};
	PPCVRegister v27{};
	PPCVRegister v28{};
	PPCVRegister v29{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	PPCVRegister v69{};
	uint32_t ea{};
	// li r9,16
	ctx.r9.s64 = 16;
	// lvx v5,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltish v13,4
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x4)));
	// li r10,32
	ctx.r10.s64 = 32;
	// vsldoi v6,v5,v5,8
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8), 8));
	// li r11,48
	ctx.r11.s64 = 48;
	// vspltish v10,1
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_set1_epi16(short(0x1)));
	// addi r12,r4,4
	ctx.r12.s64 = ctx.r4.s64 + 4;
	// vspltish v12,3
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x3)));
	// lvx v7,r9,r3
	ea = (ctx.r9.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltish v11,2
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_set1_epi16(short(0x2)));
	// vaddshs v28,v5,v7
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vspltish v14,5
	simde_mm_store_si128((simde__m128i*)v14.s16, simde_mm_set1_epi16(short(0x5)));
	// vsldoi v8,v7,v7,8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8), 8));
	// vsubuhm v29,v5,v7
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// vslh v3,v6,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v1,v28,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v30,v6,v8
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vslh v2,v29,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v4,v8,v14
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v14.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v1,v1,v28
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// vslh v9,v30,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v30,v30,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v28,v6,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v2,v2,v29
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
	// vaddshs v1,v1,v13
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vaddshs v9,v9,v30
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// vaddshs v3,v3,v28
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// vaddshs v2,v2,v13
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vsubuhm v4,v9,v4
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vaddshs v3,v9,v3
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vspltish v9,6
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_set1_epi16(short(0x6)));
	// vaddshs v21,v2,v4
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vsubuhm v22,v2,v4
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vaddshs v20,v1,v3
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vsubuhm v23,v1,v3
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vsrah v21,v21,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v22,v22,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v20,v20,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v20.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v23,v23,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vmrghh v28,v20,v21
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)v20.u16)));
	// vmrghh v30,v22,v23
	simde_mm_store_si128((simde__m128i*)v30.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)v22.u16)));
	// vmrghw v4,v28,v30
	simde_mm_store_si128((simde__m128i*)ctx.v4.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)v30.u32), simde_mm_load_si128((simde__m128i*)v28.u32)));
	// vmrglw v6,v28,v30
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)v30.u32), simde_mm_load_si128((simde__m128i*)v28.u32)));
	// vspltish v30,8
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_set1_epi16(short(0x8)));
	// vsldoi v5,v4,v4,8
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8), 8));
	// vsldoi v7,v6,v6,8
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8), 8));
	// vsubuhm v3,v4,v6
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vaddshs v6,v6,v4
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vslh v1,v30,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v26,v5,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v28,v7,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v30,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v31,v7,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v26,v26,v5
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vaddshs v28,v28,v7
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vslh v4,v6,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v8,v3,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v27,v30,v26
	simde_mm_store_si128((simde__m128i*)v27.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)v26.u16)));
	// vsubuhm v29,v31,v28
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)v31.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// vsrah v30,v6,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v31,v3,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v4,v4,v1
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v8,v8,v1
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v2,v27,v28
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// vsubuhm v5,v26,v29
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)v26.u16), simde_mm_load_si128((simde__m128i*)v29.u16)));
	// vaddshs v4,v4,v30
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// vaddshs v8,v8,v31
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// vor128 v1,v69,v69
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)v69.u8));
	// vaddshs v10,v4,v2
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vsubuhm v13,v4,v2
	simde_mm_store_si128((simde__m128i*)ctx.v13.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vaddshs v11,v8,v5
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vsubuhm v12,v8,v5
	simde_mm_store_si128((simde__m128i*)ctx.v12.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vsrah v10,v10,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v13,v13,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v11,v11,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v12,v12,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vperm v10,v10,v10,v1
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// vperm v13,v13,v13,v1
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// vperm v11,v11,v11,v1
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// vperm v12,v12,v12,v1
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// stvewx v10,r0,r4
	ea = (ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v10.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v10,r0,r12
	ea = (ctx.r12.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v10.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v13,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v13.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v13,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v13.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v11,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v11.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v11,r9,r12
	ea = (ctx.r9.u32 + ctx.r12.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v11.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v12,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v12.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v12,r10,r12
	ea = (ctx.r10.u32 + ctx.r12.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v12.u32[3 - ((ea & 0xF) >> 2)]);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_827B8B68) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb4
	ctx.lr = 0x827B8B70;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v63,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,16
	ctx.r11.s64 = 16;
	// lvx128 v62,r3,r4
	ea = (ctx.r3.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lvsl v7,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r9,r3,r4
	ctx.r9.u64 = ctx.r3.u64 + ctx.r4.u64;
	// vspltish v13,2
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x2)));
	// add r31,r10,r4
	r31.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// addi r30,r1,-80
	r30.s64 = ctx.r1.s64 + -80;
	// lvx128 v60,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r29,r1,-64
	r29.s64 = ctx.r1.s64 + -64;
	// lvx128 v61,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v12,v1,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// lvx128 v59,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v11,v63,v60,v7
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvsl v6,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// cmpwi cr6,r7,8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 8, ctx.xer);
	// lvx128 v58,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r9,r5,r6
	ctx.r9.u64 = ctx.r5.u64 + ctx.r6.u64;
	// lvx128 v57,r10,r11
	ea = (ctx.r10.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v10,v62,v59,v6
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v56,r31,r11
	ea = (r31.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v4,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v5,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrglb v2,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v3,r0,r31
	temp.u32 = r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// rlwinm r31,r6,1,0,30
	r31.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// vperm128 v9,v61,v57,v5
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vperm128 v8,v58,v56,v3
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// vor v11,v4,v4
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v4.u8));
	// vmrghb v1,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r10,r31,r5
	ctx.r10.u64 = r31.u64 + ctx.r5.u64;
	// vmrglb v31,v0,v10
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v30,v0,v9
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r7,r10,r6
	ctx.r7.u64 = ctx.r10.u64 + ctx.r6.u64;
	// vmrghb v29,v0,v8
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor v10,v1,v1
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v1.u8));
	// vmrglb v28,v0,v9
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v27,v0,v8
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor v9,v30,v30
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)v30.u8));
	// vsldoi v26,v11,v2,2
	simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8), 14));
	// vor v8,v29,v29
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)v29.u8));
	// vsldoi v25,v10,v31,2
	simde_mm_store_si128((simde__m128i*)v25.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)v31.u8), 14));
	// vsldoi v24,v9,v28,2
	simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)v28.u8), 14));
	// vsubshs v23,v26,v11
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsldoi v22,v8,v27,2
	simde_mm_store_si128((simde__m128i*)v22.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)v27.u8), 14));
	// vsubshs v21,v25,v10
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vsubshs v20,v24,v9
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vsubshs v19,v22,v8
	simde_mm_store_si128((simde__m128i*)v19.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vaddshs v18,v23,v12
	simde_mm_store_si128((simde__m128i*)v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vaddshs v17,v21,v12
	simde_mm_store_si128((simde__m128i*)v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vaddshs v16,v20,v12
	simde_mm_store_si128((simde__m128i*)v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vaddshs v15,v19,v12
	simde_mm_store_si128((simde__m128i*)v15.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v19.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vsrah v14,v18,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v18.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v14.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v7,v17,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v6,v16,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v16.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v5,v15,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v15.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v4,v14,v11
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v14.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v3,v7,v10
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v2,v6,v9
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vaddshs v1,v5,v8
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vpkshus128 v55,v4,v3
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vpkshus128 v54,v2,v1
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// stvx128 v55,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r30,-72(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -72);
	// lwz r28,-80(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -80);
	// stvx128 v54,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r29,-64(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -64);
	// lwz r27,-56(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -56);
	// stw r28,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, r28.u32);
	// stwx r30,r5,r6
	REX_STORE_U32(ctx.r5.u32 + ctx.r6.u32, r30.u32);
	// stwx r29,r31,r5
	REX_STORE_U32(r31.u32 + ctx.r5.u32, r29.u32);
	// stwx r27,r10,r6
	REX_STORE_U32(ctx.r10.u32 + ctx.r6.u32, r27.u32);
	// bne cr6,0x827b8cc0
	if (!ctx.cr6.eq) goto loc_827B8CC0;
	// lwz r30,-76(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -76);
	// lwz r29,-68(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -68);
	// lwz r28,-60(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -60);
	// lwz r27,-52(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -52);
	// stw r30,4(r5)
	REX_STORE_U32(ctx.r5.u32 + 4, r30.u32);
	// stw r29,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, r29.u32);
	// stw r28,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, r28.u32);
	// stw r27,4(r7)
	REX_STORE_U32(ctx.r7.u32 + 4, r27.u32);
loc_827B8CC0:
	// cmpwi cr6,r8,8
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 8, ctx.xer);
	// bne cr6,0x827b8e00
	if (!ctx.cr6.eq) goto loc_827B8E00;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r1,-80
	r30.s64 = ctx.r1.s64 + -80;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// addi r29,r1,-64
	r29.s64 = ctx.r1.s64 + -64;
	// add r8,r9,r4
	ctx.r8.u64 = ctx.r9.u64 + ctx.r4.u64;
	// rlwinm r31,r31,1,0,30
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r8,r4
	ctx.r7.u64 = ctx.r8.u64 + ctx.r4.u64;
	// lvx128 v53,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r3,r7,r4
	ctx.r3.u64 = ctx.r7.u64 + ctx.r4.u64;
	// lvx128 v50,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v51,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v52,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v7,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v6,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvx128 v49,r7,r11
	ea = (ctx.r7.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v11,v52,v53,v7
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v48,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v10,v50,v51,v6
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v47,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v46,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v5,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v4,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v3,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v2,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v9,v47,v49,v5
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vperm128 v8,v46,v48,v3
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// vmrglb v1,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor v11,v4,v4
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v4.u8));
	// vmrglb v31,v0,v10
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor v10,v2,v2
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v2.u8));
	// vmrghb v30,v0,v9
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v29,v0,v8
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v28,v0,v9
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v27,v0,v8
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor v0,v30,v30
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)v30.u8));
	// vsldoi v26,v11,v1,2
	simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8), 14));
	// vor v9,v29,v29
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)v29.u8));
	// vsldoi v25,v10,v31,2
	simde_mm_store_si128((simde__m128i*)v25.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)v31.u8), 14));
	// vsldoi v24,v0,v28,2
	simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)v28.u8), 14));
	// vsubshs v23,v26,v11
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsldoi v22,v9,v27,2
	simde_mm_store_si128((simde__m128i*)v22.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)v27.u8), 14));
	// vsubshs v21,v25,v10
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vsubshs v20,v24,v0
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vsubshs v19,v22,v9
	simde_mm_store_si128((simde__m128i*)v19.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vaddshs v18,v23,v12
	simde_mm_store_si128((simde__m128i*)v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vaddshs v17,v21,v12
	simde_mm_store_si128((simde__m128i*)v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vaddshs v16,v20,v12
	simde_mm_store_si128((simde__m128i*)v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vaddshs v15,v19,v12
	simde_mm_store_si128((simde__m128i*)v15.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v19.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vsrah v14,v18,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v18.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v14.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v12,v17,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v8,v16,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v16.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v7,v15,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v15.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v6,v14,v11
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v14.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v5,v12,v10
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v4,v8,v0
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vaddshs v3,v7,v9
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vpkshus128 v45,v6,v5
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vpkshus128 v44,v4,v3
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// stvx128 v45,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r9,-76(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -76);
	// lwz r8,-72(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -72);
	// lwz r7,-68(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -68);
	// stvx128 v44,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r4,-64(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -64);
	// lwz r3,-60(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -60);
	// lwz r30,-56(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -56);
	// lwz r29,-52(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -52);
	// lwz r11,-80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -80);
	// stwux r11,r5,r31
	ea = ctx.r5.u32 + r31.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r5.u32 = ea;
	// add r11,r5,r6
	ctx.r11.u64 = ctx.r5.u64 + ctx.r6.u64;
	// stw r9,4(r5)
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r9.u32);
	// stwx r8,r5,r6
	REX_STORE_U32(ctx.r5.u32 + ctx.r6.u32, ctx.r8.u32);
	// stw r7,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// stwux r4,r10,r31
	ea = ctx.r10.u32 + r31.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r10.u32 = ea;
	// add r11,r10,r6
	ctx.r11.u64 = ctx.r10.u64 + ctx.r6.u64;
	// stw r3,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
	// stwx r30,r10,r6
	REX_STORE_U32(ctx.r10.u32 + ctx.r6.u32, r30.u32);
	// stw r29,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r29.u32);
loc_827B8E00:
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_827E9B10) {
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
	uint32_t ea{};
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,144
	ctx.r9.s64 = 144;
	// add r2,r5,r8
	ctx.r2.u64 = ctx.r5.u64 + ctx.r8.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// add r4,r4,r8
	ctx.r4.u64 = ctx.r4.u64 + ctx.r8.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r8,96
	ctx.r8.s64 = 96;
	// lvx128 v14,r2,r9
	ea = (ctx.r2.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v14.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,192
	ctx.r10.s64 = 192;
	// lvx128 v11,r0,r2
	ea = (ctx.r2.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v4,r4,r9
	ea = (ctx.r4.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r12,r6,1,0,30
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v1,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vavguh v4,v4,v14
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_avg_epu16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)v14.u16)));
	// lvx128 v2,r4,r7
	ea = (ctx.r4.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vavguh v1,v1,v11
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_avg_epu16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// lvx128 v3,r4,r8
	ea = (ctx.r4.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v5,r4,r10
	ea = (ctx.r4.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r4,r4,r10
	ctx.r4.u64 = ctx.r4.u64 + ctx.r10.u64;
	// lvx128 v12,r2,r7
	ea = (ctx.r2.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r2,r8
	ea = (ctx.r2.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vavguh v2,v2,v12
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_avg_epu16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// lvx128 v15,r2,r10
	ea = (ctx.r2.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v15.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r2,r2,r10
	ctx.r2.u64 = ctx.r2.u64 + ctx.r10.u64;
	// li r10,64
	ctx.r10.s64 = 64;
	// vavguh v3,v3,v13
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_avg_epu16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// lvx128 v6,r4,r7
	ea = (ctx.r4.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vavguh v5,v5,v15
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_avg_epu16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)v15.u16)));
	// lvx128 v7,r4,r8
	ea = (ctx.r4.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v8,r4,r9
	ea = (ctx.r4.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// lvx128 v16,r2,r7
	ea = (ctx.r2.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v16.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r7,16
	ctx.r7.s64 = 16;
	// lvx128 v17,r2,r8
	ea = (ctx.r2.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v17.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r8,32
	ctx.r8.s64 = 32;
	// lvx128 v18,r2,r9
	ea = (ctx.r2.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v18.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vavguh v6,v6,v16
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_avg_epu16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)v16.u16)));
	// lvx128 v16,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v16.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r9,48
	ctx.r9.s64 = 48;
	// vavguh v7,v7,v17
	simde_mm_store_si128((simde__m128i*)ctx.v7.u16, simde_mm_avg_epu16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)v17.u16)));
	// lvx128 v20,r5,r10
	ea = (ctx.r5.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v20.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v17,r5,r7
	ea = (ctx.r5.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v17.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v24,v1,v16
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// vavguh v8,v8,v18
	simde_mm_store_si128((simde__m128i*)ctx.v8.u16, simde_mm_avg_epu16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)v18.u16)));
	// lvx128 v18,r5,r8
	ea = (ctx.r5.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v18.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v25,v2,v17
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)v17.s16)));
	// lvx128 v19,r5,r9
	ea = (ctx.r5.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v19.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v26,v3,v18
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)v18.s16)));
	// vpkshus v24,v24,v24
	simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)v24.s16)));
	// add r5,r5,r10
	ctx.r5.u64 = ctx.r5.u64 + ctx.r10.u64;
	// vaddshs v27,v4,v19
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)v19.s16)));
	// vpkshus v25,v25,v25
	simde_mm_store_si128((simde__m128i*)v25.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v25.s16), simde_mm_load_si128((simde__m128i*)v25.s16)));
	// vaddshs v28,v5,v20
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)v20.s16)));
	// vpkshus v26,v26,v26
	simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)v26.s16)));
	// vpkshus v27,v27,v27
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)v27.s16)));
	// lvx128 v21,r5,r7
	ea = (ctx.r5.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v21.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v22,r5,r8
	ea = (ctx.r5.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v22.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r7,r6,r12
	ctx.r7.u64 = ctx.r6.u64 + ctx.r12.u64;
	// lvx128 v23,r5,r9
	ea = (ctx.r5.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v23.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkshus v28,v28,v28
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v28.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// stvewx v24,r0,r3
	ea = (ctx.r3.u32) & ~0x3;
	REX_STORE_U32(ea, v24.u32[3 - ((ea & 0xF) >> 2)]);
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stvewx v24,r0,r4
	ea = (ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, v24.u32[3 - ((ea & 0xF) >> 2)]);
	// vaddshs v29,v6,v21
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)v21.s16)));
	// stvewx v25,r3,r6
	ea = (ctx.r3.u32 + ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, v25.u32[3 - ((ea & 0xF) >> 2)]);
	// vaddshs v30,v7,v22
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)v22.s16)));
	// stvewx v25,r4,r6
	ea = (ctx.r4.u32 + ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, v25.u32[3 - ((ea & 0xF) >> 2)]);
	// vaddshs v31,v8,v23
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)v23.s16)));
	// stvewx v26,r3,r12
	ea = (ctx.r3.u32 + ctx.r12.u32) & ~0x3;
	REX_STORE_U32(ea, v26.u32[3 - ((ea & 0xF) >> 2)]);
	// add r9,r6,r8
	ctx.r9.u64 = ctx.r6.u64 + ctx.r8.u64;
	// stvewx v26,r4,r12
	ea = (ctx.r4.u32 + ctx.r12.u32) & ~0x3;
	REX_STORE_U32(ea, v26.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus v29,v29,v29
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
	// stvewx v27,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0x3;
	REX_STORE_U32(ea, v27.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus v30,v30,v30
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v30.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// stvewx v27,r4,r7
	ea = (ctx.r4.u32 + ctx.r7.u32) & ~0x3;
	REX_STORE_U32(ea, v27.u32[3 - ((ea & 0xF) >> 2)]);
	// add r10,r12,r8
	ctx.r10.u64 = ctx.r12.u64 + ctx.r8.u64;
	// stvewx v28,r3,r8
	ea = (ctx.r3.u32 + ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, v28.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus v31,v31,v31
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// add r11,r7,r8
	ctx.r11.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stvewx v28,r4,r8
	ea = (ctx.r4.u32 + ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, v28.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v29,r3,r9
	ea = (ctx.r3.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, v29.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v29,r4,r9
	ea = (ctx.r4.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, v29.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v30,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, v30.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v30,r4,r10
	ea = (ctx.r4.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, v30.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v31,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, v31.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v31,r4,r11
	ea = (ctx.r4.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, v31.u32[3 - ((ea & 0xF) >> 2)]);
	// blr 
	return;
}

